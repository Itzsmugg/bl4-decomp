// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1435801c4 FUN_1435801c4 body=118 status=ok
// SIG undefined FUN_1435801c4(void)

undefined8 * FUN_1435801c4(undefined8 *param_1,int param_2)

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



// FUNCTION 14358023a FUN_14358023a body=191 status=ok
// SIG undefined FUN_14358023a(void)

void FUN_14358023a(longlong param_1)

{
  FUN_143579622(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_14474875a((longlong *)(param_1 + 0xb8),0);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (0x80 < *(uint *)(param_1 + 0xe4)) {
    *(undefined4 *)(param_1 + 0xe4) = 0x80;
    FUN_1446efbd8(param_1 + 200,0);
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1435802fa FUN_1435802fa body=110 status=ok
// SIG undefined FUN_1435802fa(void)

undefined8 * FUN_1435802fa(undefined8 *param_1,int param_2)

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



// FUNCTION 143580368 FUN_143580368 body=25 status=ok
// SIG undefined FUN_143580368(void)

void FUN_143580368(void)

{
  FUN_145eebb9a();
  FUN_14170c56a(&DAT_14caef6e0);
  return;
}



// FUNCTION 143580382 FUN_143580382 body=25 status=ok
// SIG undefined FUN_143580382(void)

void FUN_143580382(void)

{
  FUN_14578ccd8();
  FUN_14170c56a(&DAT_14caef750);
  return;
}



// FUNCTION 14358039c FUN_14358039c body=25 status=ok
// SIG undefined FUN_14358039c(void)

void FUN_14358039c(void)

{
  FUN_14578cb8a();
  FUN_14170c56a(&DAT_14caef7c0);
  return;
}



// FUNCTION 1435803b6 FUN_1435803b6 body=25 status=ok
// SIG undefined FUN_1435803b6(void)

void FUN_1435803b6(void)

{
  FUN_14617489a();
  FUN_14170c56a(&DAT_14caef830);
  return;
}



// FUNCTION 1435803d0 FUN_1435803d0 body=25 status=ok
// SIG undefined FUN_1435803d0(void)

void FUN_1435803d0(void)

{
  FUN_146160d5e();
  FUN_14170c56a(&DAT_14caef8a0);
  return;
}



// FUNCTION 1435803ea FUN_1435803ea body=25 status=ok
// SIG undefined FUN_1435803ea(void)

void FUN_1435803ea(void)

{
  FUN_140c9eb7e();
  FUN_14170c56a(&DAT_14caef910);
  return;
}



// FUNCTION 143580404 FUN_143580404 body=25 status=ok
// SIG undefined FUN_143580404(void)

void FUN_143580404(void)

{
  FUN_14610998c();
  FUN_14170c56a(&DAT_14caef980);
  return;
}



// FUNCTION 14358041e FUN_14358041e body=25 status=ok
// SIG undefined FUN_14358041e(void)

void FUN_14358041e(void)

{
  FUN_14611f64a();
  FUN_14170c56a(&DAT_14caef9f0);
  return;
}



// FUNCTION 143580438 FUN_143580438 body=25 status=ok
// SIG undefined FUN_143580438(void)

void FUN_143580438(void)

{
  FUN_145eeba4c();
  FUN_14170c56a(&DAT_14caefa60);
  return;
}



// FUNCTION 143580452 FUN_143580452 body=25 status=ok
// SIG undefined FUN_143580452(void)

void FUN_143580452(void)

{
  FUN_1460669fe();
  FUN_14170c56a(&DAT_14caefad0);
  return;
}



// FUNCTION 14358046c FUN_14358046c body=25 status=ok
// SIG undefined FUN_14358046c(void)

void FUN_14358046c(void)

{
  FUN_1460796fc();
  FUN_14170c56a(&DAT_14caefb40);
  return;
}



// FUNCTION 143580486 FUN_143580486 body=25 status=ok
// SIG undefined FUN_143580486(void)

void FUN_143580486(void)

{
  FUN_14611fa4e();
  FUN_14170c56a(&DAT_14caefbb0);
  return;
}



// FUNCTION 1435804a0 FUN_1435804a0 body=25 status=ok
// SIG undefined FUN_1435804a0(void)

void FUN_1435804a0(void)

{
  FUN_146120c6e();
  FUN_14170c56a(&DAT_14caefc20);
  return;
}



// FUNCTION 14358050e FUN_14358050e body=77 status=ok
// SIG undefined FUN_14358050e(void)

void FUN_14358050e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = param_1 + 1;
  plVar3 = (longlong *)(*param_1 + 0x18);
  if (plVar3 != plVar1) {
    lVar2 = *plVar3;
    *plVar3 = *plVar1;
    *plVar1 = 0;
    if (lVar2 != 0) {
      FUN_1401fc67c();
    }
  }
  *(uint *)(*param_1 + 0x28) =
       *(uint *)(*param_1 + 0x28) & 0xffffffef | (uint)*(byte *)(param_1 + 2) << 4;
  return;
}



// FUNCTION 143580566 FUN_143580566 body=12 status=ok
// SIG undefined FUN_143580566(void)

void FUN_143580566(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014358056f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143580572 FUN_143580572 body=110 status=ok
// SIG undefined FUN_143580572(void)

undefined8 * FUN_143580572(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_14a9dc260;
  if (param_1[2] != 0) {
    FUN_1401fc67c();
  }
  if (param_1[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[1] + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                    L"FMaterial::Release, Invalid NumDebugRefs %d",iVar2 + -1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435805e0 FUN_1435805e0 body=282 status=ok
// SIG undefined FUN_1435805e0(void)

undefined8 * FUN_1435805e0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 1435806fa FUN_1435806fa body=213 status=ok
// SIG undefined FUN_1435806fa(void)

void FUN_1435806fa(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar2 = param_1 + 0x16;
  plVar5 = (longlong *)(param_1[0x15] + 0x18);
  if (plVar5 != plVar2) {
    lVar4 = *plVar5;
    *plVar5 = *plVar2;
    *plVar2 = 0;
    if (lVar4 != 0) {
      FUN_1401fc67c();
    }
  }
  *(uint *)(param_1[0x15] + 0x28) =
       *(uint *)(param_1[0x15] + 0x28) & 0xffffffef | (uint)*(byte *)(param_1 + 0x17) << 4;
  if (param_1[0x16] != 0) {
    FUN_1401fc67c();
  }
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                    L"FMaterial::Release, Invalid NumDebugRefs %d",iVar3 + -1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435807c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1435807f0 FUN_1435807f0 body=12 status=ok
// SIG undefined FUN_1435807f0(void)

void FUN_1435807f0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435807f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435807fc FUN_1435807fc body=96 status=ok
// SIG undefined FUN_1435807fc(void)

undefined8 * FUN_1435807fc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_14a9dc2c0;
  if (param_1[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[1] + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                    L"FMaterial::Release, Invalid NumDebugRefs %d",iVar2 + -1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14358085c FUN_14358085c body=282 status=ok
// SIG undefined FUN_14358085c(void)

undefined8 * FUN_14358085c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 143580976 FUN_143580976 body=147 status=ok
// SIG undefined FUN_143580976(void)

void FUN_143580976(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  *(uint *)(param_1[0x15] + 0x28) =
       *(uint *)(param_1[0x15] + 0x28) & 0xffffffef | (uint)*(byte *)(param_1 + 0x16) << 4;
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                    L"FMaterial::Release, Invalid NumDebugRefs %d",iVar2 + -1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435809ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143580a0a FUN_143580a0a body=71 status=ok
// SIG undefined FUN_143580a0a(void)

void FUN_143580a0a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = param_1 + 1;
  plVar3 = (longlong *)(*param_1 + 0x18);
  if (plVar3 != plVar1) {
    lVar2 = *plVar3;
    *plVar3 = *plVar1;
    *plVar1 = 0;
    if (lVar2 != 0) {
      FUN_1401fc67c();
    }
  }
  *(uint *)(*param_1 + 0x28) = *(uint *)(*param_1 + 0x28) & 0xffffffef;
  LOCK();
  *(undefined1 *)(*param_1 + 0xc) = 0xff;
  UNLOCK();
  return;
}



// FUNCTION 143580a5c FUN_143580a5c body=12 status=ok
// SIG undefined FUN_143580a5c(void)

void FUN_143580a5c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143580a65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143580a68 FUN_143580a68 body=110 status=ok
// SIG undefined FUN_143580a68(void)

undefined8 * FUN_143580a68(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_14a9dc340;
  if (param_1[2] != 0) {
    FUN_1401fc67c();
  }
  if (param_1[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[1] + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                    L"FMaterial::Release, Invalid NumDebugRefs %d",iVar2 + -1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143580ad6 FUN_143580ad6 body=282 status=ok
// SIG undefined FUN_143580ad6(void)

undefined8 * FUN_143580ad6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 143580bf0 FUN_143580bf0 body=208 status=ok
// SIG undefined FUN_143580bf0(void)

void FUN_143580bf0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar2 = param_1 + 0x16;
  plVar5 = (longlong *)(param_1[0x15] + 0x18);
  if (plVar5 != plVar2) {
    lVar4 = *plVar5;
    *plVar5 = *plVar2;
    *plVar2 = 0;
    if (lVar4 != 0) {
      FUN_1401fc67c();
    }
  }
  *(uint *)(param_1[0x15] + 0x28) = *(uint *)(param_1[0x15] + 0x28) & 0xffffffef;
  LOCK();
  *(undefined1 *)(param_1[0x15] + 0xc) = 0xff;
  UNLOCK();
  if (param_1[0x16] != 0) {
    FUN_1401fc67c();
  }
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                    L"FMaterial::Release, Invalid NumDebugRefs %d",iVar3 + -1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143580cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143580cc0 FUN_143580cc0 body=46 status=ok
// SIG undefined FUN_143580cc0(void)

void FUN_143580cc0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(lVar1 + 0x18) = 0;
    FUN_1401fc67c();
    lVar1 = *param_1;
  }
  *(byte *)(lVar1 + 0x28) = *(byte *)(lVar1 + 0x28) & 0xef;
  return;
}



// FUNCTION 143580cf8 FUN_143580cf8 body=12 status=ok
// SIG undefined FUN_143580cf8(void)

void FUN_143580cf8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143580d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143580d04 FUN_143580d04 body=96 status=ok
// SIG undefined FUN_143580d04(void)

undefined8 * FUN_143580d04(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_14a9dc3a0;
  if (param_1[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[1] + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                    L"FMaterial::Release, Invalid NumDebugRefs %d",iVar2 + -1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143580d64 FUN_143580d64 body=282 status=ok
// SIG undefined FUN_143580d64(void)

undefined8 * FUN_143580d64(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 143580e7e FUN_143580e7e body=159 status=ok
// SIG undefined FUN_143580e7e(void)

void FUN_143580e7e(undefined8 *param_1)

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
  if (*(longlong *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x18) = 0;
    FUN_1401fc67c();
    lVar3 = param_1[0x15];
  }
  *(byte *)(lVar3 + 0x28) = *(byte *)(lVar3 + 0x28) & 0xef;
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                    L"FMaterial::Release, Invalid NumDebugRefs %d",iVar2 + -1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143580f13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143580f1e FUN_143580f1e body=153 status=ok
// SIG undefined FUN_143580f1e(void)

void FUN_143580f1e(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = param_1[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar3 = *param_1;
    lVar7 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar7);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar5 = *(longlong *)(lVar3 + lVar7);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar3 + lVar7) = 0;
        LOCK();
        piVar1 = (int *)(lVar5 + 8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 1) {
          FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                        L"FMaterial::Release, Invalid NumDebugRefs %d",iVar2 + -1);
        }
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)*plVar4)(plVar4,1);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar7);
  }
  return;
}



// FUNCTION 143580fc2 FUN_143580fc2 body=12 status=ok
// SIG undefined FUN_143580fc2(void)

void FUN_143580fc2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143580fcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143580fce FUN_143580fce body=69 status=ok
// SIG undefined FUN_143580fce(void)

undefined8 * FUN_143580fce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a9dc3d0;
  FUN_147bb202b(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143581014 FUN_143581014 body=282 status=ok
// SIG undefined FUN_143581014(void)

undefined8 * FUN_143581014(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 14358112e FUN_14358112e body=272 status=ok
// SIG undefined FUN_14358112e(void)

void FUN_14358112e(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar7 = param_1[0x15];
  iVar3 = *(int *)(param_1 + 0x16);
  if ((longlong)iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = 0;
    do {
      plVar4 = *(longlong **)(lVar7 + lVar8);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar5 = *(longlong *)(lVar7 + lVar8);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar7 + lVar8) = 0;
        LOCK();
        piVar1 = (int *)(lVar5 + 8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 1) {
          FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                        L"FMaterial::Release, Invalid NumDebugRefs %d",iVar2 + -1);
        }
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)*plVar4)(plVar4,1);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
    uVar6 = *(undefined4 *)(param_1 + 0x16);
    lVar7 = param_1[0x15];
  }
  FUN_147bb202b(lVar7,uVar6);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014358122a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14358123e FUN_14358123e body=495 status=ok
// SIG undefined FUN_14358123e(void)

void FUN_14358123e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong **pplVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  longlong ***local_50;
  undefined1 *local_48;
  code *local_40;
  longlong *local_38;
  longlong **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = (longlong *)*param_2;
  pplVar3 = (longlong **)param_2[0x22];
  local_38 = param_2;
  if (pplVar3 != (longlong **)0x0) {
    lVar5 = (longlong)(int)((longlong *)*param_1)[1];
    if (lVar5 != 0) {
      lVar7 = 0;
      do {
        if (pplVar3 == *(longlong ***)(*(longlong *)*param_1 + lVar7)) {
          if (DAT_14caec308 == 0) {
            local_50 = &local_30;
            local_30 = (longlong **)FUN_1417df956;
            local_40 = FUN_14081d0ea;
            local_48 = &LAB_146386466;
            local_58 = &LAB_147bb408b;
            local_60 = &LAB_1463eaa15;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x10000001;
            local_80 = 8;
            local_88 = 0x2e0;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
            pplVar3 = (longlong **)param_2[0x22];
          }
          if ((((pplVar3 != (longlong **)0x0) && (DAT_14caec308 != 0)) &&
              (plVar6 = pplVar3[2], plVar6 != (longlong *)0x0)) &&
             ((*(int *)(DAT_14caec308 + 0x38) <= (int)plVar6[7] &&
              (*(longlong *)(plVar6[6] + (longlong)*(int *)(DAT_14caec308 + 0x38) * 8) ==
               DAT_14caec308 + 0x30)))) {
            puVar1 = (undefined8 *)param_1[1];
            pcVar2 = (code *)*puVar1;
            plVar6 = puVar1 + 4;
            if ((longlong *)puVar1[2] != (longlong *)0x0) {
              plVar6 = (longlong *)puVar1[2];
            }
            local_30 = pplVar3;
            uVar4 = (**(code **)(*plVar6 + 8))();
            (*pcVar2)(uVar4,&local_30);
          }
          break;
        }
        lVar7 = lVar7 + 8;
      } while (lVar5 * 8 != lVar7);
    }
  }
  (**(code **)(*param_2 + 0x568))(param_2,1);
  FUN_1403b9b5a(param_2,0);
  if (((*(byte *)(param_2 + 0x2a) & 1) != 0) &&
     (*(int *)param_1[2] = *(int *)param_1[2] + 1, *(char *)param_1[3] == '\x01')) {
    FUN_147bc1688(param_1[4],param_2 + 0x59);
  }
  local_30 = &local_38;
  FUN_147bc79fc(*param_1);
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14358142e FUN_14358142e body=78 status=ok
// SIG undefined FUN_14358142e(void)

undefined8 * FUN_14358142e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14a9dc440;
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



// FUNCTION 14358147c FUN_14358147c body=5 status=ok
// SIG undefined FUN_14358147c(void)

longlong FUN_14358147c(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143581482 FUN_143581482 body=29 status=ok
// SIG undefined FUN_143581482(void)

void FUN_143581482(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1435814a0 FUN_1435814a0 body=29 status=ok
// SIG undefined FUN_1435814a0(void)

undefined8 FUN_1435814a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435814d6 FUN_1435814d6 body=12 status=ok
// SIG undefined FUN_1435814d6(void)

void FUN_1435814d6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435814df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435814e2 FUN_1435814e2 body=29 status=ok
// SIG undefined FUN_1435814e2(void)

undefined8 FUN_1435814e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143581500 FUN_143581500 body=282 status=ok
// SIG undefined FUN_143581500(void)

undefined8 * FUN_143581500(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14357e25f);
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



// FUNCTION 14358161a FUN_14358161a body=103 status=ok
// SIG undefined FUN_14358161a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14358161a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143581673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*_DAT_000000a8 + 0x4d0))();
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  (**(code **)(*(longlong *)param_1[0x15] + 0x4d0))();
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014358165a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143581681 FUN_143581681 body=2625 status=ok
// SIG undefined FUN_143581681(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143581681(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_78;
  code *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar3 = FUN_140b10a34(&local_98,&DAT_14caec37c);
  if (cVar3 == '\0') {
    _DAT_14caec37c = 0;
    uRam000000014caec384 = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9d55d0,1,0);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9d7430,1,0);
  local_98._0_4_ = 0;
  local_c8 = CONCAT44(local_c8._4_4_,0x24);
  FUN_14078dbce(&DAT_14caec490,L"r.MaterialEnableNewHLSLGenerator",&local_98,
                L"Enables the new (WIP) material HLSL generator.\n0 - Don\'t allow\n1 - Allow if enabled by material\n2 - Force all materials to use new generator\n"
               );
  atexit(FUN_143577b04);
  uStack_c0 = 0;
  local_b8 = 0;
  local_c8 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a9d7ff0);
  uStack_c0 = 0;
  local_b8 = 0;
  local_c8 = 3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9d8a00,1,&PTR_FUN_14a9d8980);
  local_c8._0_4_ = 0x20;
  FUN_141471170(&DAT_14caec550,L"r.DeferUniformExpressionCaching",&DAT_14c7615c0,
                L"Whether to defer caching of uniform expressions until a rendering command needs them up to date.  Deferring updates is more efficient because multiple SetVectorParameterValue calls in a frame will only result in one update."
               );
  atexit(FUN_143578ac5);
  local_c8._0_4_ = 0x20;
  FUN_141471170(&DAT_14caec560,L"r.UniformExpressionCacheAsyncUpdates",&DAT_14c7615c4,
                L"Whether to allow async updates of uniform expression caches.");
  atexit(FUN_143578b0a);
  DAT_14caec570 = 0;
  DAT_14caec578 = 0;
  atexit((_func_5014 *)&LAB_143578b4f);
  local_98 = (code *)((ulonglong)local_98._4_4_ << 0x20);
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14caec580,L"r.gbx.PreventAllocateVTStackCrash",&local_98,&DAT_149dfb77a);
  atexit(FUN_1435795db);
  DAT_14caec5b8 = 0;
  _DAT_14caec5c0 = 0;
  DAT_14caec598 = 0;
  _DAT_14caec5a0 = 0;
  _DAT_14caec5c4 = 0xffffffff00000080;
  _DAT_14caec5cc = 0;
  DAT_14caec5d8 = 0;
  DAT_14caec5e0 = 0;
  atexit(FUN_143579e85);
  FUN_1446f470e(&DAT_14caec5ec,L"LightmapRes",1);
  local_c8._0_4_ = 0x24;
  FUN_141471170(&DAT_14caec5f8,L"r.Material.ExcludeNonPipelinedShaders",&DAT_14c7615c8,
                L"if != 0, standalone shaders that are also part of FShaderPipeline will not be compiled (default)."
               );
  atexit(FUN_143579f30);
  FUN_1400b22c2(&local_98,&DAT_149e02088);
  local_c8 = CONCAT44(local_c8._4_4_,4);
  FUN_140f510cc(&DAT_14caec608,L"r.Material.ShaderMapDump",&local_98,
                L"Outputs a textual dump of all shader maps found for the given named material (specified by path).\nNote that this will include any instances of said material created by a MaterialInstance.\nFiles (.txt extension) will be dumped to Saved\\MaterialShaderMaps named with the DDC key hash.\n"
               );
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_143579f75);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14caec620,4000);
  atexit((_func_5014 *)&LAB_143579fba);
  lVar4 = 0x48;
  do {
    *(undefined8 *)(lVar4 + 0x14caec628) = 0;
    *(undefined4 *)(lVar4 + 0x14caec630) = 0;
    *(undefined8 *)(&DAT_14caec608 + lVar4) = 0;
    *(undefined8 *)((longlong)&DAT_14caec610 + lVar4) = 0;
    *(undefined8 *)(lVar4 + 0x14caec634) = 0xffffffff00000080;
    *(undefined4 *)(lVar4 + 0x14caec63c) = 0;
    *(undefined8 *)(lVar4 + 0x14caec648) = 0;
    *(undefined4 *)(&DAT_14caec650 + lVar4) = 0;
    lVar4 = lVar4 + 0x50;
  } while (lVar4 != 0x30b8);
  atexit(FUN_143579fc8);
  local_98 = (code *)((ulonglong)local_98 & 0xffffffffffffff00);
  local_c8._0_4_ = 0x20;
  FUN_140bd5914(&DAT_14caef6c8,L"r.Material.Translator.EnableNew",&local_98,
                L"Controls whether to enable the new material translator prototype (WIP) .");
  atexit(FUN_14357bc85);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_143580368;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caef748,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_143580382;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caef7b8,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14358039c;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caef828,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_1435803b6;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caef898,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_1435803d0;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caef908,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_1435803ea;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caef978,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_143580404;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caef9e8,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14358041e;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caefa58,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_143580438;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caefac8,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_143580452;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caefb38,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14358046c;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caefba8,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_143580486;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caefc18,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_1435804a0;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caefc88,6,&local_98);
  local_98 = (code *)0x0;
  local_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)((longlong)local_98 + 0x10) = lVar6;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(code **)((longlong)local_98 + 0x18) = FUN_14357e28c;
  local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
  FUN_14152bcb8(&DAT_14caefc90,L"r.FlushMaterialUniforms",&DAT_149dfb77a,&local_98);
  if ((int)local_90 != 0) {
    if (local_98 == (code *)0x0) goto LAB_143581d20;
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90._0_4_ = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143581d20:
  atexit(FUN_14357bd35);
  FUN_1446f470e(&DAT_14caefcb0,&DAT_149e3aba4,1);
  FUN_1446f470e(&DAT_14caefcb8,&DAT_149e3caec,1);
  FUN_1446f470e(&DAT_14caefcc0,L"Medium",1);
  FUN_1446f470e(&DAT_14caefcc8,L"Epic",1);
  FUN_1446f470e(&DAT_14caefcd0,&DAT_14a1c72e4,1);
  FUN_1446f470e(&local_a0,L"ExpressionInput",1);
  FUN_1446f470e(&local_a8,L"/Script/Engine",1);
  uVar2 = local_a0;
  uVar1 = local_a8;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar5[1] = 0x800000028;
  *puVar5 = &PTR_FUN_14a9dba10;
  local_98 = (code *)uVar1;
  local_90 = uVar2;
  FUN_1427dc50a(&local_98,puVar5);
  FUN_1446f470e(&local_a0,L"ColorMaterialInput",1);
  FUN_1446f470e(&local_a8,L"/Script/Engine",1);
  uVar2 = local_a0;
  uVar1 = local_a8;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar5[1] = 0x800000030;
  *puVar5 = &PTR_FUN_14a9dbb70;
  local_98 = (code *)uVar1;
  local_90 = uVar2;
  FUN_1427dc50a(&local_98,puVar5);
  FUN_1446f470e(&local_a0,L"ScalarMaterialInput",1);
  FUN_1446f470e(&local_a8,L"/Script/Engine",1);
  uVar2 = local_a0;
  uVar1 = local_a8;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar5[1] = 0x800000030;
  *puVar5 = &PTR_FUN_14a9dbcd0;
  local_98 = (code *)uVar1;
  local_90 = uVar2;
  FUN_1427dc50a(&local_98,puVar5);
  FUN_1446f470e(&local_a0,L"VectorMaterialInput",1);
  FUN_1446f470e(&local_a8,L"/Script/Engine",1);
  uVar2 = local_a0;
  uVar1 = local_a8;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar5[1] = 0x800000038;
  *puVar5 = &PTR_FUN_14a9dbe30;
  local_98 = (code *)uVar1;
  local_90 = uVar2;
  FUN_1427dc50a(&local_98,puVar5);
  FUN_1446f470e(&local_a0,L"Vector2MaterialInput",1);
  FUN_1446f470e(&local_a8,L"/Script/Engine",1);
  uVar2 = local_a0;
  uVar1 = local_a8;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar5[1] = 0x800000038;
  *puVar5 = &PTR_FUN_14a9dbf90;
  local_98 = (code *)uVar1;
  local_90 = uVar2;
  FUN_1427dc50a(&local_98,puVar5);
  FUN_1446f470e(&local_a0,L"MaterialAttributesInput",1);
  FUN_1446f470e(&local_a8,L"/Script/Engine",1);
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar5[1] = 0x800000030;
  *puVar5 = &PTR_FUN_14a9dc0f0;
  local_98 = (code *)local_a8;
  local_90 = local_a0;
  FUN_1427dc50a(&local_98,puVar5);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14caefeb0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14caefeb0,4000);
  atexit((_func_5014 *)&LAB_14357db70);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435820c4 FUN_1435820c4 body=178 status=ok
// SIG undefined FUN_1435820c4(void)

void FUN_1435820c4(longlong *param_1,int *param_2,uint param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  int local_40;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2[2] != 0 || *param_2 != 0) &&
     (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
    local_28 = 0xff;
    local_58 = param_1;
    cVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,4,param_2);
    if (cVar2 != '\0') goto LAB_143582155;
  }
  (**(code **)(*(longlong *)param_1[1] + 0x4e0))((longlong *)param_1[1],&local_48);
  if ((((int)param_3 < 0) || (local_40 <= (int)param_3)) ||
     (local_48 = *(longlong *)(local_48 + (ulonglong)param_3 * 8), local_48 == 0)) {
    if (DAT_14caf1e70 == '\0') {
      DAT_14caf1e70 = '\x01';
    }
    local_48 = 0;
  }
LAB_143582155:
  *param_4 = local_48;
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143582177 FUN_143582177 body=69 status=ok
// SIG undefined FUN_143582177(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143582177(void)

{
  _DAT_14caf1588 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435821b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1590,1);
  return;
}



// FUNCTION 1435821bc FUN_1435821bc body=41 status=ok
// SIG undefined FUN_1435821bc(void)

void FUN_1435821bc(void)

{
  DAT_14caf15e0 = 0;
  if (DAT_14caf15d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d63590();
  return;
}



// FUNCTION 1435821e6 FUN_1435821e6 body=1354 status=ok
// SIG undefined FUN_1435821e6(void)

void FUN_1435821e6(longlong param_1)

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
  longlong *plVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_c8 [32];
  code **local_a8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x60) == 0) goto LAB_14358232e;
  puVar9 = (undefined4 *)(param_1 + 0x58);
  LOCK();
  *(undefined4 *)(param_1 + 0x58) = 0;
  UNLOCK();
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  uStack_90 = *(undefined4 *)(param_1 + 0x28);
  uStack_8c = *(undefined4 *)(param_1 + 0x2c);
  uStack_88 = *(undefined4 *)(param_1 + 0x30);
  uStack_84 = *(undefined4 *)(param_1 + 0x34);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_98 = uVar11;
  uStack_80 = puVar9;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14358225d;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143582682;
      goto LAB_143582266;
    }
  }
  else {
LAB_14358225d:
    if (iVar6 != 0x10) {
LAB_143582266:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143582682;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143582682;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143582400;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143590326);
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
LAB_143582400:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x19);
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
            puVar14 = (uint *)(puVar15 + 0x19);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143582480;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143582480:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14a9e4880;
        *(undefined4 *)(puVar15 + 0x15) = (undefined4)local_98;
        *(undefined4 *)((longlong)puVar15 + 0xac) = local_98._4_4_;
        *(undefined4 *)(puVar15 + 0x16) = uStack_90;
        *(undefined4 *)((longlong)puVar15 + 0xb4) = uStack_8c;
        *(undefined4 *)(puVar15 + 0x17) = uStack_88;
        *(undefined4 *)((longlong)puVar15 + 0xbc) = uStack_84;
        *(undefined4 *)(puVar15 + 0x18) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)puVar15 + 0xc4) = uStack_80._4_4_;
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
        local_78[0] = (code *)0x0;
        local_68 = (longlong *)FUN_14001cc68(0x28,8);
        *local_68 = (longlong)&PTR_LAB_14a9e4820;
        *(undefined4 *)(local_68 + 3) = uStack_88;
        *(undefined4 *)((longlong)local_68 + 0x1c) = uStack_84;
        *(undefined4 *)(local_68 + 4) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)local_68 + 0x24) = uStack_80._4_4_;
        *(undefined4 *)(local_68 + 1) = (undefined4)local_98;
        *(undefined4 *)((longlong)local_68 + 0xc) = local_98._4_4_;
        *(undefined4 *)(local_68 + 2) = uStack_90;
        *(undefined4 *)((longlong)local_68 + 0x14) = uStack_8c;
        if (local_68 + 1 != (longlong *)0x0) {
          local_78[0] = FUN_143590fe0;
        }
        local_a8 = local_78;
        FUN_14005a792(&DAT_14ca9a440,L"RemoveDefaultResourceCommand",&DAT_14caf1ed8);
        if (local_78[0] != (code *)0x0) {
          plVar13 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar13 = local_58;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
      }
      goto LAB_14358232e;
    }
  }
LAB_143582682:
  FUN_14490df4a();
  FUN_1458869ea(&uStack_90,uVar11);
  LOCK();
  *puVar9 = 1;
  UNLOCK();
LAB_14358232e:
  switchD_143c3d4dc::caseD_1d(param_1);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143582732 FUN_143582732 body=89 status=ok
// SIG undefined FUN_143582732(void)

void FUN_143582732(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x20) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + 8);
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



// FUNCTION 14358278c FUN_14358278c body=1001 status=ok
// SIG undefined FUN_14358278c(void)

void FUN_14358278c(int *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,char param_5)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  longlong local_c0;
  ulonglong local_b8 [2];
  ulonglong local_a8;
  ulonglong local_98;
  ulonglong local_88;
  ulonglong local_78;
  ulonglong local_68;
  ulonglong local_58;
  int local_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar4 = param_2[1];
  iVar7 = param_2[2];
  iVar8 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = iVar4;
  param_1[2] = iVar7;
  param_1[3] = iVar8;
  *(undefined8 *)(param_1 + 4) = *param_4;
  if ((((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0) && param_2[3] == 0) ||
     (iVar4 = *(int *)(param_3 + 1), iVar4 < 1)) goto LAB_143582a9f;
  if ((param_5 == '\0') && (lVar9 = *(longlong *)(param_1 + 6), lVar9 != 0)) {
    uVar5 = *param_3;
    if (DAT_14ca85169 == '\0') {
      FUN_14002049c(&DAT_14ca85100,1);
      (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,&DAT_14ca85100,lVar9,uVar5);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
  }
  FUN_141790820(local_b8,L"MaterialParameterCollectionInstanceResource");
  local_44 = iVar4 << 4;
  FUN_1403abc08(local_b8);
  lVar9 = FUN_14001cc68(0x90,0x10);
  FUN_1404e4ca0(lVar9,local_b8);
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  lVar6 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = lVar9;
  if (lVar6 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar6 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar6 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = lVar6;
        plVar12 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar12;
            LOCK();
            bVar13 = plVar12 != DAT_14ca843c0;
            plVar11 = plVar10;
            if (bVar13) {
              plVar12 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar10 = (longlong)plVar11;
            LOCK();
            bVar13 = plVar11 != DAT_14ca843c8;
            plVar12 = plVar10;
            if (bVar13) {
              plVar11 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
  local_d0 = 1;
  local_d8 = 2;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_c0,*param_3,*(undefined8 *)(param_1 + 8));
  plVar12 = (longlong *)(param_1 + 6);
  if (plVar12 == &local_c0) {
LAB_1435829a3:
    lVar9 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_c0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_c0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_c0 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar9;
          plVar12 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar12;
              LOCK();
              bVar13 = plVar12 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar13) {
                plVar12 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c8;
              plVar12 = plVar10;
              if (bVar13) {
                plVar11 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
  }
  else {
    lVar9 = *plVar12;
    *plVar12 = local_c0;
    local_c0 = 0;
    if (lVar9 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar9 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar9 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar9 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar9;
          plVar12 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar12;
              LOCK();
              bVar13 = plVar12 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar13) {
                plVar12 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c8;
              plVar12 = plVar10;
              if (bVar13) {
                plVar11 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
      goto LAB_1435829a3;
    }
  }
  if (local_58 != 0 && (local_58 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0 && (local_68 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0 && (local_78 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0 && (local_88 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0 && (local_98 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0 && (local_a8 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0 && (local_b8[0] & 1) == 0) {
    FUN_1400020a8();
  }
LAB_143582a9f:
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143582bb0 FUN_143582bb0 body=4839 status=ok
// SIG undefined FUN_143582bb0(void)

code * FUN_143582bb0(ulonglong *param_1,ulonglong param_2,undefined8 *param_3,byte param_4,
                    char param_5)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  DWORD DVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  RTL_SRWLOCK RVar11;
  code *pcVar12;
  code *pcVar13;
  ulonglong uVar14;
  size_t sVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  RTL_SRWLOCK RVar20;
  RTL_SRWLOCK *pRVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_188 [32];
  wchar_t *local_168;
  RTL_SRWLOCK *local_160;
  undefined8 local_158;
  code *local_150;
  wchar_t *local_148;
  code *local_140;
  undefined1 *local_138;
  RTL_SRWLOCK *local_130;
  code *local_128;
  code *local_120;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  RTL_SRWLOCK local_d8;
  int local_d0;
  longlong local_c8 [2];
  RTL_SRWLOCK local_b8;
  undefined8 uStack_b0;
  RTL_SRWLOCK local_a8;
  longlong lStack_a0;
  longlong local_98 [2];
  RTL_SRWLOCK local_88;
  longlong local_80;
  longlong local_78;
  RTL_SRWLOCK local_70;
  int iStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((int)param_1[2] < 2) {
    uVar14 = param_2;
    if ((char)param_1[6] == '\0') {
      uVar14 = *param_1;
      if (uVar14 != 0) {
        if (DAT_14c949118 == 0) {
          local_70.Ptr = FUN_140631fbe;
          lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar9;
          FUN_1446f470e(&local_a8,L"Class",1);
          local_138 = &LAB_146891e90;
          local_140 = (code *)&LAB_146273097;
          local_150 = (code *)0x149e2b68a;
          local_148 = (wchar_t *)CONCAT44(local_148._4_4_,199);
          local_158 = 0x20;
          local_160 = (RTL_SRWLOCK *)CONCAT44(local_160._4_4_,0x10000000);
          local_168._0_4_ = 8;
          local_130 = &local_70;
          FUN_14574b4b2(lVar9);
          DAT_14c949118 = lVar9;
          if (DAT_14c951858 == 0) {
            local_130 = &local_88;
            local_88.Ptr = FUN_1449e2820;
            local_120 = FUN_14081d0ea;
            local_128 = FUN_14081d0ea;
            local_138 = &LAB_1468c5283;
            local_140 = FUN_142809da0;
            local_148 = L"Engine";
            local_150 = (code *)0x400000000;
            local_158 = CONCAT44(local_158._4_4_,0x10000000);
            local_160 = (RTL_SRWLOCK *)CONCAT44(local_160._4_4_,8);
            local_168._0_4_ = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar4 = DAT_14c951858;
          lVar9 = DAT_14c949118;
          uVar16 = FUN_1449e2fb2();
          local_168 = L"Class";
          FUN_14574b446(uVar16,lVar9,lVar4,L"/Script/CoreUObject");
          uVar14 = *param_1;
          if (uVar14 == 0) goto LAB_1435838b9;
        }
        if ((((DAT_14c949118 != 0) && (lVar9 = *(longlong *)(uVar14 + 0x10), lVar9 != 0)) &&
            (*(int *)(DAT_14c949118 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
           (*(longlong *)
             (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
            DAT_14c949118 + 0x30)) goto LAB_143582c4d;
      }
LAB_1435838b9:
      lVar9 = FUN_147bd044a(param_1);
      if (lVar9 == 0) {
        FUN_1400021e4(param_1 + 3,&local_88);
        FUN_144a38768(&local_88,L"__DelegateSignature",0x13,1);
        if (local_88.Ptr != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
LAB_143582c4d:
      if ((uVar14 != 0 & param_4) == 0) {
        if (uVar14 == 0) goto LAB_1435838b9;
      }
      else {
        pcVar13 = (code *)param_1[3];
        local_f0 = *param_3;
        if ((longlong)DAT_14c8687c0 < 0) {
          pcVar12 = (code *)(DAT_14c8687c0 & 0x7fffffffffffffff);
          if (DAT_14c8687cc == '\x01') {
            pRVar21 = &local_88;
            FUN_1446f470e(pRVar21,pcVar12,1);
          }
          else {
            local_88.Ptr = pcVar12;
            if (pcVar12 == (code *)0x0) {
              uVar6 = 0;
            }
            else {
              sVar15 = strlen((char *)pcVar12);
              uVar6 = (undefined4)sVar15;
            }
            local_80 = CONCAT44(local_80._4_4_,uVar6);
            pRVar21 = &local_a8;
            FUN_14001c09c(pRVar21,&local_88,1);
          }
          uVar8 = (ulonglong)*(uint *)&pRVar21->Ptr;
          uVar22 = (ulonglong)DAT_14c8687c8 << 0x20;
          DAT_14c8687c0 = uVar8;
        }
        else {
          uVar8 = (ulonglong)DAT_14c8687c8 << 0x20;
          uVar22 = DAT_14c8687c0 & 0xffffffff;
        }
        lVar9 = FUN_14477f635(uVar14,pcVar13,3);
        uVar10 = uVar14;
        uVar19 = param_2;
        pcVar12 = pcVar13;
        uVar18 = uVar14;
        if (lVar9 == 0) {
LAB_143582cbb:
          do {
            local_f8 = pcVar12;
            local_100 = uVar19;
            uVar17 = uVar10;
            uVar10 = uVar17;
            if (*(ulonglong *)(uVar17 + 0x20) != 0) {
              uVar10 = *(ulonglong *)(uVar17 + 0x20);
              uVar19 = local_100;
              pcVar12 = local_f8;
              if ((*(uint *)(uVar17 + 8) >> 0x1c & 1) == 0) goto LAB_143582cbb;
              uVar10 = FUN_142840154(uVar17);
            }
            if (uVar10 == 0) {
              uVar10 = *(ulonglong *)(uVar17 + 0x20);
              uVar19 = local_100;
              pcVar12 = local_f8;
            }
            else {
              local_78 = *(longlong *)(uVar10 + 0x18);
              local_80 = *(longlong *)(uVar18 + 0x18);
              local_88.Ptr = pcVar13;
              uVar6 = FUN_146899d82(uVar22 | uVar8,local_f0);
              DVar3 = DAT_14c949610;
              local_70.Ptr = &DAT_14c949608;
              iStack_68 = CONCAT31(iStack_68._1_3_,1);
              if ((DAT_14c949610 == 0) || (DVar7 = GetCurrentThreadId(), DVar3 != DVar7)) {
                AcquireSRWLockShared((PSRWLOCK)&DAT_14c949608);
              }
              else {
                DAT_14c949614 = DAT_14c949614 + 1;
              }
              local_a8.Ptr = (code *)0x0;
              lStack_a0 = 0;
              local_98[0] = 0;
              local_160 = &local_70;
              local_168 = (wchar_t *)((ulonglong)local_168 & 0xffffffff00000000);
              FUN_140159c68(uVar6,&local_88,&local_a8,0);
              RVar11.Ptr = local_70.Ptr;
              if ((char)iStack_68 == '\x01') {
                if (*(int *)((longlong)&((PSRWLOCK)((longlong)local_70.Ptr + 8))->Ptr + 4) < 1) {
                  ReleaseSRWLockShared(local_70.Ptr);
                }
                else {
                  GetCurrentThreadId();
                  piVar1 = (int *)((longlong)&((PSRWLOCK)((longlong)RVar11.Ptr + 8))->Ptr + 4);
                  *piVar1 = *piVar1 + -1;
                }
              }
              RVar11.Ptr = local_a8.Ptr;
              uVar10 = uVar18;
              if ((local_a8.Ptr == local_88.Ptr) && (lStack_a0 == local_80)) {
                uVar19 = (ulonglong)local_88.Ptr >> 0x20;
                RVar11.Ptr = local_88.Ptr;
                if (local_98[0] == local_78) {
                  RVar11.Ptr = (code *)0x0;
                  uVar19 = 0;
                }
              }
              else {
                uVar19 = (ulonglong)local_a8.Ptr >> 0x20;
                if (local_80 != lStack_a0) {
                  FUN_1400021e4(&lStack_a0,&local_70);
                  if (local_98[0] == 0) {
                    RVar20.Ptr = (PSRWLOCK)&DAT_149dfb77a;
                    if (iStack_68 != 0) {
                      RVar20.Ptr = local_70.Ptr;
                    }
                    if (DAT_14c949118 == 0) {
                      local_d8.Ptr = FUN_140631fbe;
                      DAT_14c949118 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                      local_110 = DAT_14c949118;
                      FUN_1446f470e(local_c8,L"Class",1);
                      local_130 = &local_d8;
                      local_138 = &LAB_146891e90;
                      local_140 = (code *)&LAB_146273097;
                      local_150 = (code *)0x149e2b68a;
                      local_148 = (wchar_t *)CONCAT44(local_148._4_4_,199);
                      local_158 = 0x20;
                      local_160 = (RTL_SRWLOCK *)CONCAT44(local_160._4_4_,0x10000000);
                      local_168._0_4_ = 8;
                      FUN_14574b4b2(local_110);
                      DAT_14c949118 = local_110;
                      local_108 = DAT_14c951858;
                      if (DAT_14c951858 == 0) {
                        local_b8.Ptr = FUN_1449e2820;
                        local_120 = FUN_14081d0ea;
                        local_128 = FUN_14081d0ea;
                        local_130 = &local_b8;
                        local_138 = &LAB_1468c5283;
                        local_140 = FUN_142809da0;
                        local_148 = L"Engine";
                        local_150 = (code *)0x400000000;
                        local_158 = CONCAT44(local_158._4_4_,0x10000000);
                        local_160 = (RTL_SRWLOCK *)CONCAT44(local_160._4_4_,8);
                        local_168._0_4_ = 0x50;
                        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,
                                      &DAT_1468c5288);
                        local_110 = DAT_14c949118;
                      }
                      DAT_14c949118 = local_110;
                      local_108 = DAT_14c951858;
                      uVar16 = FUN_1449e2fb2();
                      local_168 = L"Class";
                      FUN_14574b446(uVar16,local_110,local_108,L"/Script/CoreUObject");
                    }
                    local_168 = L"FindRemappedFieldImpl";
                    uVar10 = FUN_140277cc4(DAT_14c949118,RVar20.Ptr,0);
                  }
                  else {
                    FUN_1400021e4(&lStack_a0,local_c8);
                    FUN_1400021e4(local_98,&local_d8);
                    RVar20.Ptr = &DAT_149dfb77a;
                    if (local_d0 != 0) {
                      RVar20.Ptr = local_d8.Ptr;
                    }
                    FUN_140002266(&local_b8,L"%s.%s",RVar20.Ptr);
                    if (local_70.Ptr != (PSRWLOCK)0x0) {
                      FUN_1400020a8();
                    }
                    local_70.Ptr = local_b8.Ptr;
                    iStack_68 = (int)uStack_b0;
                    uStack_64 = uStack_b0._4_4_;
                    local_b8.Ptr = (PSRWLOCK)0x0;
                    uStack_b0 = 0;
                    if (local_d8.Ptr != (code *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_c8[0] != 0) {
                      FUN_1400020a8();
                    }
                    RVar20.Ptr = (PSRWLOCK)&DAT_149dfb77a;
                    if (iStack_68 != 0) {
                      RVar20.Ptr = local_70.Ptr;
                    }
                    if (DAT_14c949118 == 0) {
                      local_d8.Ptr = FUN_140631fbe;
                      DAT_14c949118 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                      local_110 = DAT_14c949118;
                      FUN_1446f470e(local_c8,L"Class",1);
                      local_130 = &local_d8;
                      local_138 = &LAB_146891e90;
                      local_140 = (code *)&LAB_146273097;
                      local_150 = (code *)0x149e2b68a;
                      local_148 = (wchar_t *)CONCAT44(local_148._4_4_,199);
                      local_158 = 0x20;
                      local_160 = (RTL_SRWLOCK *)CONCAT44(local_160._4_4_,0x10000000);
                      local_168._0_4_ = 8;
                      FUN_14574b4b2(local_110);
                      DAT_14c949118 = local_110;
                      local_108 = DAT_14c951858;
                      if (DAT_14c951858 == 0) {
                        local_b8.Ptr = FUN_1449e2820;
                        local_120 = FUN_14081d0ea;
                        local_128 = FUN_14081d0ea;
                        local_130 = &local_b8;
                        local_138 = &LAB_1468c5283;
                        local_140 = FUN_142809da0;
                        local_148 = L"Engine";
                        local_150 = (code *)0x400000000;
                        local_158 = CONCAT44(local_158._4_4_,0x10000000);
                        local_160 = (RTL_SRWLOCK *)CONCAT44(local_160._4_4_,8);
                        local_168._0_4_ = 0x50;
                        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,
                                      &DAT_1468c5288);
                        local_110 = DAT_14c949118;
                      }
                      DAT_14c949118 = local_110;
                      local_108 = DAT_14c951858;
                      uVar16 = FUN_1449e2fb2();
                      local_168 = L"Class";
                      FUN_14574b446(uVar16,local_110,local_108);
                    }
                    uVar10 = FUN_140277b32(DAT_14c949118,0,RVar20.Ptr);
                  }
                  if (local_70.Ptr != (PSRWLOCK)0x0) {
                    FUN_1400020a8();
                  }
                  if (uVar10 == 0) break;
                }
              }
              uVar19 = (ulonglong)RVar11.Ptr & 0xffffffff | uVar19 << 0x20;
              if (uVar19 != 0) {
                pcVar13 = (code *)FUN_14477f635(uVar10,uVar19,3);
                if ((pcVar13 != (code *)0x0) &&
                   ((uVar18 == uVar14 ||
                    ((*(int *)(uVar10 + 0x38) <= *(int *)(uVar14 + 0x38) &&
                     (*(longlong *)
                       (*(longlong *)(uVar14 + 0x30) + (longlong)*(int *)(uVar10 + 0x38) * 8) ==
                      uVar10 + 0x30)))))) {
                  param_1[3] = *(ulonglong *)(pcVar13 + 0x20);
                  if (DAT_14c927740 == 0) {
                    local_88.Ptr = FUN_1449e2820;
                    local_120 = FUN_14081d0ea;
                    local_128 = FUN_14081d0ea;
                    local_130 = &local_88;
                    local_138 = &LAB_146856450;
                    local_140 = FUN_1427b121c;
                    local_148 = L"Engine";
                    local_150 = (code *)0x0;
                    local_158 = CONCAT44(local_158._4_4_,0x10000021);
                    local_160 = (RTL_SRWLOCK *)CONCAT44(local_160._4_4_,8);
                    local_168 = (wchar_t *)CONCAT44(local_168._4_4_,0x28);
                    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                  }
                  if (((*(ulonglong *)(pcVar13 + 0x10) & 1) == 0) ||
                     (uVar8 = *(ulonglong *)(pcVar13 + 0x10) & 0xfffffffffffffffe, uVar8 == 0)) {
LAB_14358364d:
                    uVar8 = 0;
                  }
                  else {
                    lVar9 = *(longlong *)(uVar8 + 0x10);
                    iVar2 = *(int *)(lVar9 + 0x38);
                    if ((iVar2 < *(int *)(DAT_14c927740 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8
                         ) != DAT_14c927740 + 0x30)) goto LAB_14358364d;
                    if (DAT_14c949118 == 0) {
                      local_70.Ptr = FUN_140631fbe;
                      lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,
                                            CONCAT71((int7)((ulonglong)*(longlong *)(lVar9 + 0x30)
                                                           >> 8),1));
                      DAT_14c949118 = lVar9;
                      FUN_1446f470e(&local_a8,L"Class",1);
                      local_130 = &local_70;
                      local_138 = &LAB_146891e90;
                      local_140 = (code *)&LAB_146273097;
                      local_150 = (code *)0x149e2b68a;
                      local_148 = (wchar_t *)CONCAT44(local_148._4_4_,199);
                      local_158 = 0x20;
                      local_160 = (RTL_SRWLOCK *)CONCAT44(local_160._4_4_,0x10000000);
                      local_168._0_4_ = 8;
                      FUN_14574b4b2(lVar9);
                      DAT_14c949118 = lVar9;
                      if (DAT_14c951858 == 0) {
                        local_88.Ptr = FUN_1449e2820;
                        local_120 = FUN_14081d0ea;
                        local_128 = FUN_14081d0ea;
                        local_130 = &local_88;
                        local_138 = &LAB_1468c5283;
                        local_140 = FUN_142809da0;
                        local_148 = L"Engine";
                        local_150 = (code *)0x400000000;
                        local_158 = CONCAT44(local_158._4_4_,0x10000000);
                        local_160 = (RTL_SRWLOCK *)CONCAT44(local_160._4_4_,8);
                        local_168._0_4_ = 0x50;
                        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,
                                      &DAT_1468c5288);
                      }
                      lVar4 = DAT_14c951858;
                      lVar9 = DAT_14c949118;
                      uVar16 = FUN_1449e2fb2();
                      local_168 = L"Class";
                      FUN_14574b446(uVar16,lVar9,lVar4,L"/Script/CoreUObject");
                      lVar9 = *(longlong *)(uVar8 + 0x10);
                      iVar2 = *(int *)(lVar9 + 0x38);
                    }
                    if ((iVar2 < *(int *)(DAT_14c949118 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8
                         ) != DAT_14c949118 + 0x30)) goto LAB_14358364d;
                    if (DAT_14c950c29 == '\x01') {
                      FUN_1456cec3c(uVar8);
                    }
                  }
                  *param_1 = uVar8;
                  param_1[4] = 0;
                  param_1[5] = 0;
                  FUN_1479d5fa4(uVar14,param_1[3],param_1 + 4);
                  uVar14 = *param_1;
                  if (uVar14 == 0) goto LAB_143583468;
                  if (DAT_14c949118 == 0) {
                    local_70.Ptr = FUN_140631fbe;
                    lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                    DAT_14c949118 = lVar9;
                    FUN_1446f470e(&local_a8,L"Class",1);
                    local_130 = &local_70;
                    local_138 = &LAB_146891e90;
                    local_140 = (code *)&LAB_146273097;
                    local_150 = (code *)0x149e2b68a;
                    local_148 = (wchar_t *)CONCAT44(local_148._4_4_,199);
                    local_158 = 0x20;
                    local_160 = (RTL_SRWLOCK *)CONCAT44(local_160._4_4_,0x10000000);
                    local_168._0_4_ = 8;
                    FUN_14574b4b2(lVar9);
                    DAT_14c949118 = lVar9;
                    if (DAT_14c951858 == 0) {
                      local_88.Ptr = FUN_1449e2820;
                      local_120 = FUN_14081d0ea;
                      local_128 = FUN_14081d0ea;
                      local_130 = &local_88;
                      local_138 = &LAB_1468c5283;
                      local_140 = FUN_142809da0;
                      local_148 = L"Engine";
                      local_150 = (code *)0x400000000;
                      local_158 = CONCAT44(local_158._4_4_,0x10000000);
                      local_160 = (RTL_SRWLOCK *)CONCAT44(local_160._4_4_,8);
                      local_168._0_4_ = 0x50;
                      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288)
                      ;
                    }
                    lVar4 = DAT_14c951858;
                    lVar9 = DAT_14c949118;
                    uVar16 = FUN_1449e2fb2();
                    local_168 = L"Class";
                    FUN_14574b446(uVar16,lVar9,lVar4,L"/Script/CoreUObject");
                    uVar14 = *param_1;
                    if (uVar14 == 0) goto LAB_143583468;
                  }
                  if ((((DAT_14c949118 != 0) && (lVar9 = *(longlong *)(uVar14 + 0x10), lVar9 != 0))
                      && (*(int *)(DAT_14c949118 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
                     (*(longlong *)
                       (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8)
                      == DAT_14c949118 + 0x30)) {
                    if (DAT_14c950c29 == '\x01') {
                      FUN_1456cec3c(uVar14);
                    }
                    *param_1 = uVar14;
                    if ((local_100 != 0) && ((param_5 == '\0' || ((char)param_1[6] != '\0')))) {
                      if (*(int *)(local_100 + 0x38) < *(int *)(uVar14 + 0x38)) {
                        *(undefined1 *)(param_1 + 6) = 0;
                      }
                      else {
                        bVar23 = *(longlong *)
                                  (*(longlong *)(local_100 + 0x30) +
                                  (longlong)*(int *)(uVar14 + 0x38) * 8) == uVar14 + 0x30;
                        *(bool *)(param_1 + 6) = bVar23;
                        if (bVar23) {
                          *param_1 = 0;
                        }
                      }
                    }
                  }
                  goto LAB_143583468;
                }
                break;
              }
              uVar10 = *(ulonglong *)(uVar18 + 0x40);
              uVar19 = local_100;
              pcVar12 = local_f8;
              pcVar13 = local_f8;
              uVar18 = uVar10;
              if (uVar10 == 0) break;
            }
          } while( true );
        }
      }
      pcVar12 = (code *)FUN_144a8e29b(uVar14,param_1[3],7);
      if (pcVar12 == (code *)0x0) {
        if (*(longlong *)(uVar14 + 0x120) != 0) {
          pcVar13 = (code *)FUN_144a8e29b(*(longlong *)(uVar14 + 0x120),param_1[3],7);
          goto LAB_143583445;
        }
        if (param_4 == 0) goto LAB_143583465;
      }
      else {
        local_88.Ptr = pcVar12;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_158 = FUN_140342cba();
          local_150 = FUN_1468c7f1e;
          local_160 = (RTL_SRWLOCK *)0x0;
          local_168 = (wchar_t *)0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        cVar5 = FUN_1400164de(&local_88,&DAT_14c951a38);
        if ((((cVar5 == '\0') || (((byte)pcVar12[0x3b] & 0x20) == 0)) ||
            (*(longlong *)(uVar14 + 0x120) == 0)) ||
           (pcVar13 = (code *)FUN_144a8e29b(*(longlong *)(uVar14 + 0x120),param_1[3],7),
           pcVar13 == (code *)0x0)) {
          pcVar13 = pcVar12;
        }
LAB_143583445:
        if (param_4 == 0) goto LAB_143583468;
        if (pcVar13 != (code *)0x0) {
          FUN_1479d5fa4(uVar14,param_1[3],param_1 + 4);
          goto LAB_143583468;
        }
      }
      if (((*(int *)((longlong)param_1 + 0x24) != 0 || (int)param_1[4] != 0) || (int)param_1[5] != 0
          ) || *(int *)((longlong)param_1 + 0x2c) != 0) {
        local_e8 = (undefined4)param_1[4];
        uStack_e4 = *(undefined4 *)((longlong)param_1 + 0x24);
        uStack_e0 = (undefined4)param_1[5];
        uStack_dc = *(undefined4 *)((longlong)param_1 + 0x2c);
        FUN_147bd03a4(&local_88,uVar14);
        if (local_88.Ptr != (code *)0x0) {
          param_1[3] = (ulonglong)local_88.Ptr;
          RVar11.Ptr = local_88.Ptr;
          goto LAB_14358356a;
        }
      }
    }
LAB_143583465:
    pcVar13 = (code *)0x0;
  }
  else {
    FUN_1446f470e(&local_88,param_1[1],0);
    uVar14 = FUN_147bd04a3(param_2,local_88.Ptr);
    RVar11.Ptr = (PVOID)param_1[3];
LAB_14358356a:
    pcVar13 = (code *)FUN_144a8e29b(uVar14,RVar11.Ptr,7);
  }
LAB_143583468:
  local_88.Ptr = pcVar13;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
    local_158 = FUN_140342cba();
    local_150 = FUN_1468c7f1e;
    local_160 = (RTL_SRWLOCK *)0x0;
    local_168 = (wchar_t *)0x8001;
    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
    atexit(FUN_14280c819);
    _Init_thread_footer(&DAT_14c951a88);
  }
  cVar5 = FUN_1400164de(&local_88,&DAT_14c951a38);
  if ((pcVar13 != (code *)0x0) && (cVar5 != '\0')) {
    *(byte *)((longlong)param_1 + 0x31) = (byte)((uint)*(undefined4 *)(pcVar13 + 0x38) >> 0x1d) & 1;
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return pcVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143583e98 FUN_143583e98 body=69 status=ok
// SIG undefined FUN_143583e98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143583e98(void)

{
  _DAT_14caf1600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143583eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1608,1);
  return;
}



// FUNCTION 143583edd FUN_143583edd body=69 status=ok
// SIG undefined FUN_143583edd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143583edd(void)

{
  _DAT_14caf1618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143583f1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1620,1);
  return;
}



// FUNCTION 143583f22 FUN_143583f22 body=69 status=ok
// SIG undefined FUN_143583f22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143583f22(void)

{
  _DAT_14caf1630 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143583f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1638,1);
  return;
}



// FUNCTION 143583f67 FUN_143583f67 body=69 status=ok
// SIG undefined FUN_143583f67(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143583f67(void)

{
  _DAT_14caf1648 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143583fa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1650,1);
  return;
}



// FUNCTION 143583fac FUN_143583fac body=69 status=ok
// SIG undefined FUN_143583fac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143583fac(void)

{
  _DAT_14caf1660 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143583fee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1668,1);
  return;
}



// FUNCTION 143583ff1 FUN_143583ff1 body=69 status=ok
// SIG undefined FUN_143583ff1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143583ff1(void)

{
  _DAT_14caf1678 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143584033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1680,1);
  return;
}



// FUNCTION 143584036 FUN_143584036 body=677 status=ok
// SIG undefined FUN_143584036(void)

void FUN_143584036(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_f8 [40];
  ulonglong local_d0;
  LPCRITICAL_SECTION local_c8;
  LARGE_INTEGER local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x22);
  local_d0 = 0;
  local_c8 = lpCriticalSection;
  while( true ) {
    (**(code **)(*param_1 + 0x40))(param_1,0);
    EnterCriticalSection(lpCriticalSection);
    iVar2 = (int)param_1[7];
    if (iVar2 == 0) {
      uVar10 = 1;
      uVar15 = 0;
      iVar16 = 0;
      iVar6 = 0;
    }
    else {
      puVar4 = (uint *)param_1[6];
      if ((uint *)param_1[6] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 4);
      }
      uVar11 = *puVar4;
      if (uVar11 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar15 = 0;
        uVar10 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar10 = uVar15;
        }
        iVar16 = 0;
        do {
          if (uVar10 == uVar15) goto LAB_14358428c;
          iVar16 = iVar16 + 0x20;
          uVar11 = puVar4[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar11 == 0);
      }
      else {
        uVar15 = 0;
        iVar16 = 0;
      }
      uVar10 = (ulonglong)(-uVar11 & uVar11);
      uVar1 = uVar10 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 == iVar2) break;
    uVar11 = 0xffffffff;
    bVar14 = false;
    iVar3 = iVar2;
    do {
      lVar12 = *(longlong *)(param_1[2] + (longlong)iVar6 * 0x10);
      if ((*(longlong *)(lVar12 + 0x60) == param_2) || (*(longlong *)(lVar12 + 0x68) == param_2)) {
        FUN_147bc81d0();
        iVar3 = (int)param_1[7];
        bVar14 = true;
      }
      lpCriticalSection = local_c8;
      uVar11 = uVar11 & ~(uint)uVar10;
      puVar4 = (uint *)param_1[6];
      if ((uint *)param_1[6] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 4);
      }
      iVar6 = (int)uVar15;
      lVar12 = (longlong)iVar6;
      uVar7 = puVar4[lVar12] & uVar11;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar13 = 0;
          do {
            uVar7 = puVar4[lVar12 + lVar13 + 1];
            if (uVar7 != 0) {
              uVar15 = (ulonglong)(iVar6 + (int)lVar13 + 1);
              uVar11 = 0xffffffff;
              goto LAB_1435841fb;
            }
            iVar16 = iVar16 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar12 != lVar13);
          uVar11 = 0xffffffff;
          lVar12 = (longlong)iVar9;
        }
        uVar15 = lVar12 + 1U & 0xffffffff;
        iVar6 = iVar3;
      }
      else {
LAB_1435841fb:
        uVar10 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar10 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
    LeaveCriticalSection(local_c8);
    if (!bVar14) goto LAB_143584295;
    if ((local_d0 & 1) == 0) {
      QueryPerformanceCounter(&local_c0);
    }
    uVar5 = FUN_14000f986(0x3c23d70a);
    local_d0 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
LAB_14358428c:
  LeaveCriticalSection(lpCriticalSection);
LAB_143584295:
  local_70 = 0;
  FUN_147a75a84();
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435842ed FUN_1435842ed body=47 status=ok
// SIG undefined FUN_1435842ed(void)

void FUN_1435842ed(void)

{
  DAT_14caf1728 = &PTR_FUN_14a9e4a10;
  FUN_144725486(&DAT_14caf1728);
  FUN_1463ec416(&DAT_14caf1728);
  return;
}



// FUNCTION 143584328 FUN_143584328 body=861 status=ok
// SIG undefined FUN_143584328(void)

void FUN_143584328(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x30000;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x1050001;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x2050002;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x3080003;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x40c0004;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x50c0005;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x60c0006;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x70c0007;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x1000008040008;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x1000009040009;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x100000a04000a;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x100000b0a000b;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x100000c02000c;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x100000d04000d;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x100000e04000e;
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x100000f04000f;
  return;
}



// FUNCTION 143584685 FUN_143584685 body=51 status=ok
// SIG undefined FUN_143584685(void)

void FUN_143584685(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  if (param_1 == '\0') {
    FUN_147bd0828(param_2,param_5,param_7,param_8,param_10);
  }
  return;
}



// FUNCTION 1435846b8 FUN_1435846b8 body=29 status=ok
// SIG undefined FUN_1435846b8(void)

undefined * FUN_1435846b8(char param_1)

{
  undefined *puVar1;
  
  if (param_1 == '\0') {
    FUN_146174a50();
    puVar1 = &DAT_14caf16b8;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



// FUNCTION 1435846d5 FUN_1435846d5 body=74 status=ok
// SIG undefined FUN_1435846d5(void)

undefined8 * FUN_1435846d5(char param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
    *puVar1 = 0;
    FUN_147440a6c((longlong)puVar1 + 4,param_2,L"PrevTransformBuffer",0);
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}



// FUNCTION 143584737 FUN_143584737 body=69 status=ok
// SIG undefined FUN_143584737(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143584737(void)

{
  _DAT_14caf1868 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143584779. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1870,1);
  return;
}



// FUNCTION 14358477c FUN_14358477c body=55 status=ok
// SIG undefined FUN_14358477c(void)

void FUN_14358477c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf18a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf18a0 = FUN_14171c317(FUN_1463ebb35,uVar1,L"EVertexPaintAxis");
  }
  return;
}



// FUNCTION 1435847b3 FUN_1435847b3 body=512 status=ok
// SIG undefined FUN_1435847b3(void)

void FUN_1435847b3(longlong *param_1)

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
  *puVar1 = &PTR_FUN_14a9dfea0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xbc) = 0;
  puVar1[0x19] = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 0;
  *(undefined4 *)(puVar1 + 0x1b) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined4 *)(puVar1 + 0x1f) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0xfc) = 0x105;
  *(undefined1 *)((longlong)puVar1 + 0xfe) = 0;
  puVar1[0x1e] = &PTR_FUN_14aa69e90;
  *(undefined4 *)(puVar1 + 0x21) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0x10c) = 0x105;
  *(undefined1 *)((longlong)puVar1 + 0x10e) = 0;
  puVar1[0x22] = 0;
  puVar1[0x20] = &PTR_FUN_14aa6dba0;
  *(undefined4 *)(puVar1 + 0x24) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0x124) = 0x105;
  *(undefined1 *)((longlong)puVar1 + 0x126) = 0;
  puVar1[0x25] = 0;
  puVar1[0x23] = &DAT_14aa6dc00;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  *(undefined2 *)(puVar1 + 0x2e) = 0;
  puVar1[0x2d] = 0;
  *(undefined1 *)((longlong)puVar1 + 0x172) = 1;
  *(undefined4 *)(puVar1 + 0x30) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0x184) = 0x105;
  *(undefined1 *)((longlong)puVar1 + 0x186) = 0;
  puVar1[0x31] = 0;
  puVar1[0x2f] = &PTR_FUN_14aa50910;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  *(undefined1 *)(puVar1 + 0x36) = 1;
  *(undefined4 *)(puVar1 + 0x38) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0x1c4) = 0x105;
  *(undefined1 *)((longlong)puVar1 + 0x1c6) = 0;
  puVar1[0x39] = 0;
  puVar1[0x37] = &PTR_FUN_14aa61a50;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  *(undefined1 *)(puVar1 + 0x3e) = 1;
  puVar1[0x3f] = puVar1;
  puVar1[0x41] = 0;
  *(undefined2 *)(puVar1 + 0x42) = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  return;
}



// FUNCTION 1435849b3 FUN_1435849b3 body=41 status=ok
// SIG undefined FUN_1435849b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435849b3(void)

{
  _DAT_14caf1940 = 0;
  if (DAT_14caf1938 != 0) {
    FUN_1400020a8();
  }
  FUN_146191bf4();
  return;
}



// FUNCTION 1435849dc FUN_1435849dc body=175 status=ok
// SIG undefined FUN_1435849dc(void)

void FUN_1435849dc(longlong param_1,longlong *param_2)

{
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong *local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  FUN_140562eea(&local_1b0,param_2,0,&DAT_14c896044);
  if (((ulonglong)local_1b0 & 2) == 0) {
    FUN_147bd257a(param_2,param_1 + 0x30);
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143584a91 FUN_143584a91 body=69 status=ok
// SIG undefined FUN_143584a91(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143584a91(void)

{
  _DAT_14caf1ba0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143584ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1ba8,1);
  return;
}



// FUNCTION 143584ad6 FUN_143584ad6 body=1733 status=ok
// SIG undefined FUN_143584ad6(void)

ulonglong FUN_143584ad6(longlong param_1,longlong *param_2)

{
  undefined2 **ppuVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ushort uVar12;
  uint uVar13;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  longlong local_98;
  undefined8 uStack_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined2 *local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x248) != '\x01') {
    uVar11 = 0;
    goto LAB_143584d0c;
  }
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caf1bb8) && (FUN_144b3d300(&DAT_14caf1bb8), DAT_14caf1bb8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14caf1bb0 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite.VisualizeOverview",1);
    _Init_thread_footer(&DAT_14caf1bb8);
  }
  if (DAT_14caf1bb0 != (longlong *)0x0) {
    (**(code **)(*DAT_14caf1bb0 + 0xc0))();
    uVar9 = local_68;
    puVar6 = local_70;
    ppuVar1 = (undefined2 **)(param_1 + 0x60);
    if (local_68 == *(uint *)(param_1 + 0x68)) {
      if (1 < (int)local_68) {
        lVar7 = 0;
        while( true ) {
          uVar12 = *(ushort *)((longlong)local_70 + lVar7);
          uVar11 = (ulonglong)uVar12;
          uVar8 = *(ushort *)((longlong)*ppuVar1 + lVar7);
          if (uVar12 != uVar8) break;
          if (uVar12 == 0) goto LAB_143584cd2;
LAB_143584bb7:
          lVar7 = lVar7 + 2;
        }
        if ((uVar8 | uVar12) < 0x80) {
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          uVar10 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar10]) goto LAB_143584bb7;
        }
        if (uVar12 != uVar8) goto LAB_143584bfa;
      }
    }
    else if (*(uint *)(param_1 + 0x68) + local_68 != 1) {
LAB_143584bfa:
      local_88 = (undefined2 *)0x0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      if (ppuVar1 != &local_70) {
        *(uint *)(param_1 + 0x68) = local_68;
        if (*(int *)(param_1 + 0x6c) == 0 && local_68 == 0) {
          *(undefined4 *)(param_1 + 0x6c) = 0;
        }
        else {
          FUN_1446dd670(ppuVar1,local_68);
          if (uVar9 != 0) {
            memcpy(*ppuVar1,puVar6,(longlong)(int)uVar9 * 2);
          }
        }
      }
      local_b8 = param_1 + 0x70;
      *(undefined4 *)(param_1 + 0x178) = 0;
      if (*(int *)(param_1 + 0x17c) < 0) {
        FUN_14576af6c(local_b8,0);
      }
      local_c0 = param_1 + 0x180;
      *(undefined4 *)(param_1 + 0x208) = 0;
      local_b0 = param_2;
      if (*(int *)(param_1 + 0x20c) < 0) {
        FUN_1400cc56e(local_c0,0);
      }
      *(undefined1 *)(param_1 + 0x210) = 1;
      if (1 < local_68) {
        do {
          FUN_140056680(local_a8,&DAT_149e06196);
          local_d0 = 0;
          local_d8 = 1;
          cVar3 = FUN_1407cdbc6(&local_70,local_a8,&local_88);
          if (local_a8[0] != 0) {
            FUN_1400020a8();
          }
          if (cVar3 == '\0') {
            iVar5 = local_68 - 1;
            if (local_68 == 0) {
              iVar5 = 0;
            }
            FUN_1402980a2(&local_88,local_70,iVar5);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            local_98 = 0;
            uStack_90 = 0;
          }
          FUN_140ded312(&local_88);
          puVar6 = &DAT_149dfb77a;
          if ((int)uStack_80 != 0) {
            puVar6 = local_88;
          }
          FUN_1446f470e(local_a8,puVar6,1);
          iVar5 = FUN_14358519c(param_1,local_a8);
          if ((iVar5 != -1) || ((int)uStack_80 < 2)) {
            iVar2 = *(int *)(param_1 + 0x208);
            uVar9 = iVar2 + 1;
            *(uint *)(param_1 + 0x208) = uVar9;
            if (iVar5 == -1) {
              if (*(uint *)(param_1 + 0x20c) < uVar9) {
                FUN_1456cba76(local_c0,iVar2);
              }
              lVar7 = *(longlong *)(param_1 + 0x200);
              if (*(longlong *)(param_1 + 0x200) == 0) {
                lVar7 = local_c0;
              }
              *(undefined4 *)(lVar7 + (longlong)iVar2 * 4) = 0xffffffff;
            }
            else {
              if (*(uint *)(param_1 + 0x20c) < uVar9) {
                FUN_1456cba76(local_c0,iVar2);
              }
              lVar7 = *(longlong *)(param_1 + 0x200);
              if (*(longlong *)(param_1 + 0x200) == 0) {
                lVar7 = local_c0;
              }
              *(int *)(lVar7 + (longlong)iVar2 * 4) = iVar5;
              *(undefined1 *)(param_1 + 0x210) = 0;
            }
            iVar5 = *(int *)(param_1 + 0x178);
            *(uint *)(param_1 + 0x178) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x17c) < iVar5 + 1U) {
              FUN_147056952(local_b8,iVar5);
            }
            lVar7 = *(longlong *)(param_1 + 0x170);
            if (*(longlong *)(param_1 + 0x170) == 0) {
              lVar7 = local_b8;
            }
            *(longlong *)(lVar7 + (longlong)iVar5 * 8) = local_a8[0];
          }
          iVar5 = (int)uStack_90 + -1;
          if ((int)uStack_90 == 0) {
            iVar5 = 0;
          }
          FUN_1402980a2(&local_70,local_98,iVar5);
        } while (1 < local_68);
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      param_2 = local_b0;
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_143584cd2:
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_1 + 0x50) == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caf1bc8) && (FUN_144b3d300(&DAT_14caf1bc8), DAT_14caf1bc8 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14caf1bc0 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite.Visualize",1);
      _Init_thread_footer(&DAT_14caf1bc8);
    }
    if (DAT_14caf1bc0 == (longlong *)0x0) goto LAB_143584cea;
    (**(code **)(*DAT_14caf1bc0 + 0xc0))(DAT_14caf1bc0,&local_70);
    puVar6 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar6 = local_70;
    }
    lVar7 = 0;
    while( true ) {
      uVar12 = *(ushort *)((longlong)puVar6 + lVar7);
      uVar11 = (ulonglong)uVar12;
      uVar8 = *(ushort *)((longlong)&DAT_149fc3c38 + lVar7);
      if (uVar12 != uVar8) break;
      if (uVar12 == 0) goto LAB_143584e7b;
LAB_143584dca:
      lVar7 = lVar7 + 2;
    }
    if ((uVar8 | uVar12) < 0x80) {
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
      uVar10 = (ulonglong)uVar8;
      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar10]) goto LAB_143584dca;
    }
    if (uVar12 != uVar8) {
      lVar7 = 0;
      goto LAB_143584e01;
    }
LAB_143584e7b:
    uVar11 = 0;
LAB_143584e7d:
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8(local_70);
    }
  }
  else {
LAB_143584cea:
    uVar11 = 0;
  }
  if (((*(int *)(param_1 + 0x50) == -1) && (*param_2 != 0)) &&
     (iVar5 = FUN_14358519c(param_1,param_2), iVar5 != -1)) {
    uVar4 = FUN_147bcbbbc(param_1,param_2);
    *(int *)(param_1 + 0x50) = iVar5;
    *(longlong *)(param_1 + 0x54) = *param_2;
    *(undefined1 *)(param_1 + 0x5c) = uVar4;
  }
LAB_143584d0c:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
LAB_143584e01:
  uVar12 = *(ushort *)((longlong)puVar6 + lVar7);
  uVar13 = (uint)uVar12;
  uVar8 = *(ushort *)((longlong)&DAT_149e62e78 + lVar7);
  uVar9 = (uint)uVar8;
  if (uVar12 != uVar8) {
    if ((uVar8 | uVar12) < 0x80) {
      uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar12];
      uVar11 = (ulonglong)uVar9;
      uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar11];
      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar11]) goto LAB_143584e16;
    }
    uVar11 = 0;
    if ((1 < (int)local_68) && (uVar13 != uVar9)) {
      FUN_1446f470e(&local_88,local_70,1);
      iVar5 = FUN_14358519c(param_1,&local_88);
      uVar11 = CONCAT71((int7)((ulonglong)&local_88 >> 8),iVar5 != -1);
      if (iVar5 != -1) {
        uVar4 = FUN_147bcbbbc(param_1,&local_88);
        *(int *)(param_1 + 0x50) = iVar5;
        *(undefined2 **)(param_1 + 0x54) = local_88;
        *(undefined1 *)(param_1 + 0x5c) = uVar4;
      }
    }
    goto LAB_143584e7d;
  }
  if (uVar12 == 0) goto LAB_143584e7b;
LAB_143584e16:
  lVar7 = lVar7 + 2;
  goto LAB_143584e01;
}



// FUNCTION 14358519c FUN_14358519c body=155 status=ok
// SIG undefined FUN_14358519c(void)

undefined4 FUN_14358519c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar4 * 0x58;
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x58) == lVar2) {
          if (lVar1 == 0) {
            return 0xffffffff;
          }
          if (lVar1 == -8) {
            return 0xffffffff;
          }
          return *(undefined4 *)(lVar1 + 0x44);
        }
        iVar4 = *(int *)(lVar1 + 0x50);
      } while (iVar4 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 143585238 FUN_143585238 body=1398 status=ok
// SIG undefined FUN_143585238(void)

void FUN_143585238(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(char *)(param_1 + 0x248) != '\x01') || (*(int *)(param_1 + 0x50) != 0x1d))
  goto LAB_1435853fc;
  local_80 = DAT_14c84635c;
  local_88 = 0;
  local_88._4_4_ = 0;
  if (param_2 == 0) {
    local_88._0_4_ = 0;
LAB_1435852e3:
    local_80 = CONCAT44((float)(local_88._4_4_ >> 1),(float)((int)local_88 >> 1));
  }
  else {
    local_88._0_4_ = 0;
    local_88._4_4_ = 0;
    if (*(int *)(param_2 + 0x238) < 1) goto LAB_1435852e3;
    uVar10 = FUN_140636ec6(param_2);
    FUN_14588d080(uVar10,&local_80,(longlong)&local_80 + 4);
    FUN_14039bfee(uVar10,&local_88,(longlong)&local_88 + 4);
    if (DAT_14caf1b98 != 0) {
      goto LAB_1435852e3;
    }
  }
  uVar5 = local_80;
  uVar10 = local_88;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14358532a;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14358532f;
      goto LAB_14358535d;
    }
  }
  else {
LAB_14358532a:
    if (iVar7 != 0x10) {
LAB_14358535d:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_14358532f;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14358532f;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_1435854c5;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143590326);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_1435854c5:
          puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x18);
          uVar13 = puVar12[0x12];
          if (puVar15 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar17 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x18);
            uVar13 = 0;
            if (puVar15 <= puVar12 + 0x4000) {
              uVar13 = 1;
              goto LAB_143585545;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143585545:
        *(uint **)(puVar12 + 0x10) = puVar15;
        puVar12[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14a9e4b48;
        puVar17[0x15] = param_1;
        puVar17[0x16] = uVar5;
        puVar17[0x17] = uVar10;
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
          uVar10 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar10;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
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
        local_98 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14a9e4af0;
        local_48 = uVar5;
        local_40 = uVar10;
        local_78[0] = &LAB_143591e82;
        local_50 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateNaniteDebugPicking",&DAT_14caf20a0);
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar14 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar14 = &local_58;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_1435853fc;
    }
  }
LAB_14358532f:
  *(undefined8 *)(param_1 + 0x238) = uVar5;
  *(undefined8 *)(param_1 + 0x240) = uVar10;
LAB_1435853fc:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435857b0 FUN_1435857b0 body=760 status=ok
// SIG undefined FUN_1435857b0(void)

void FUN_1435857b0(longlong *param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  undefined4 *local_210;
  undefined4 *local_208;
  char **local_200;
  undefined4 local_1f8;
  undefined1 local_1f4;
  undefined4 local_1f0;
  float local_1ec;
  float local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  double local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  undefined1 local_1b0 [4];
  undefined4 local_1ac;
  undefined4 local_10c;
  undefined4 local_e0;
  char *local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined2 local_9f;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  longlong local_60;
  undefined8 local_58;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar6 = FUN_1447210f0();
  if ((((*(byte *)(lVar6 + 0x155) & 1) == 0) || (*(longlong *)(lVar6 + 0x30) == 0)) ||
     (*(int *)(*(longlong *)(lVar6 + 0x30) + 0xa8) == 0)) {
    cVar4 = (**(code **)(*param_1 + 0x638))(param_1);
    if (cVar4 != '\0') {
      memset(local_1b0,0,0x100);
      local_e0 = 0xffffffff;
      local_10c = 0xffffffff;
      local_1ac = 0x3f800000;
      lVar6 = param_1[0x73];
      dVar1 = *(double *)(lVar6 + 0x280);
      uVar8 = SUB84(dVar1,0);
      uVar9 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)(lVar6 + 0x288);
      if (dVar2 <= dVar1) {
        uVar8 = SUB84(dVar2,0);
        uVar9 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      lVar3 = param_1[0x39];
      if (lVar3 == 0) {
        local_1c8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_1c0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_1e0 = (undefined4)DAT_14c8464e0;
        uStack_1dc = DAT_14c8464e0._4_4_;
        uStack_1d8 = (undefined4)DAT_14c8464e8;
        uStack_1d4 = DAT_14c8464e8._4_4_;
        local_1b8 = DAT_14c8464f0;
      }
      else {
        local_1e0 = *(undefined4 *)(lVar3 + 0x260);
        uStack_1dc = *(undefined4 *)(lVar3 + 0x264);
        local_1c8 = *(undefined8 *)(lVar3 + 0x260);
        uStack_1d8 = *(undefined4 *)(lVar3 + 0x268);
        uStack_1d4 = *(undefined4 *)(lVar3 + 0x26c);
        uStack_1c0 = *(undefined8 *)(lVar3 + 0x268);
        local_1b8 = *(double *)(lVar3 + 0x270);
      }
      fVar10 = (float)(double)CONCAT44(uVar9,uVar8) * *(float *)(lVar6 + 0x644);
      local_1d0 = (double)((float)*(double *)(lVar6 + 0x290) * *(float *)(lVar6 + 0x640) * -4.0) +
                  local_1b8;
      uVar7 = FUN_1447210f0(param_1);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14caf1ec0) {
        FUN_144b3d300();
        if (DAT_14caf1ec0 == -1) {
          local_b0 = "NavFindBase";
          local_a8 = CONCAT35(local_a8._5_3_,0xb);
          uVar5 = FUN_14001a6c0(&local_b0,1);
          DAT_14caf1eb8 = (char *)(ulonglong)uVar5;
          _Init_thread_footer();
        }
      }
      local_200 = &local_b0;
      local_8c = 0;
      local_a8 = 0;
      local_88 = 0x101;
      local_60 = 0;
      local_58 = 0x800000000;
      local_40 = 0;
      local_38 = 0x400000000;
      local_a0 = 0;
      local_94 = 0;
      local_b0 = DAT_14caf1eb8;
      local_9f = 1;
      local_9d = 0;
      local_90 = 0;
      local_9c = 0x1000000;
      local_98 = 1;
      local_208 = &local_1f0;
      local_1f0 = 1;
      local_1e4 = 0x3f800000;
      local_210 = &local_1f8;
      local_1f8 = 1;
      local_1f4 = 0;
      local_218 = &DAT_14c8463d0;
      local_1ec = fVar10;
      local_1e8 = fVar10;
      FUN_1479b44ee(uVar7,local_1b0,&local_1c8,&local_1e0);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (param_1[0x74] != 0) {
        FUN_14045627c(param_1[0x74],1,1);
      }
      if (param_1[0x75] != 0) {
        FUN_14045627c(param_1[0x75],0,1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143585aaa FUN_143585aaa body=1887 status=ok
// SIG undefined FUN_143585aaa(void)

void FUN_143585aaa(longlong *param_1)

{
  double dVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  double *pdVar13;
  double *pdVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  undefined4 uVar25;
  float fVar26;
  undefined1 auStack_2c8 [32];
  undefined8 *local_2a8;
  undefined4 local_2a0;
  undefined4 *local_298;
  undefined8 *local_290;
  undefined1 *local_288;
  double local_278;
  double local_270;
  double local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  double local_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined1 local_228 [4];
  float local_224;
  undefined4 local_184;
  byte local_17b;
  undefined4 local_158;
  double local_128;
  double dStack_120;
  double local_118;
  undefined4 local_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  double *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined2 uStack_d7;
  undefined1 uStack_d5;
  undefined2 uStack_d4;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  cVar10 = (**(code **)(*param_1 + 0x638))();
  if ((cVar10 != '\0') && ((param_1[0x74] != 0 || (param_1[0x75] != 0)))) {
    lVar16 = param_1[0x39];
    if (lVar16 == 0) {
      local_118 = DAT_14c8464f0;
      local_128 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      dStack_120 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_128 = *(double *)(lVar16 + 0x260);
      dStack_120 = *(double *)(lVar16 + 0x268);
      local_118 = *(double *)(lVar16 + 0x270);
    }
    lVar2 = param_1[0x73];
    dVar1 = *(double *)(lVar2 + 0x280);
    uVar19 = SUB84(dVar1,0);
    uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar24 = *(double *)(lVar2 + 0x288);
    if (dVar24 <= dVar1) {
      uVar19 = SUB84(dVar24,0);
      uVar21 = (undefined4)((ulonglong)dVar24 >> 0x20);
    }
    fVar26 = (float)(double)CONCAT44(uVar21,uVar19) * *(float *)(lVar2 + 0x644);
    memset(local_228,0,0x100);
    local_158 = 0xffffffff;
    local_224 = 1.0;
    local_184 = 0xffffffff;
    if (lVar16 == 0) {
      local_238 = DAT_14c8464f0;
      local_248 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      dStack_240 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      uVar20 = SUB84(DAT_14c8464f0,0);
      uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      uVar19 = (undefined4)DAT_14c8464e0;
      uVar21 = DAT_14c8464e0._4_4_;
      uVar23 = (undefined4)DAT_14c8464e8;
      uVar25 = DAT_14c8464e8._4_4_;
    }
    else {
      local_248 = *(double *)(lVar16 + 0x260);
      dStack_240 = *(double *)(lVar16 + 0x268);
      local_238 = *(double *)(lVar16 + 0x270);
      uVar20 = SUB84(local_238,0);
      uVar22 = (undefined4)((ulonglong)local_238 >> 0x20);
      uVar19 = *(undefined4 *)(lVar16 + 0x260);
      uVar21 = *(undefined4 *)(lVar16 + 0x264);
      uVar23 = *(undefined4 *)(lVar16 + 0x268);
      uVar25 = *(undefined4 *)(lVar16 + 0x26c);
    }
    dVar1 = (double)((float)*(double *)(lVar2 + 0x290) * *(float *)(lVar2 + 0x640) * -4.0) +
            (double)CONCAT44(uVar22,uVar20);
    local_260 = uVar19;
    uStack_25c = uVar21;
    uStack_258 = uVar23;
    uStack_254 = uVar25;
    local_250 = dVar1;
    uVar12 = FUN_1447210f0(param_1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caf1ed0) {
      FUN_144b3d300();
      if (DAT_14caf1ed0 == -1) {
        local_e8 = "NavObjectBase_Validate";
        uStack_e0 = (double)CONCAT35(uStack_e0._5_3_,0x16);
        uVar15 = FUN_14001a6c0(&local_e8,1);
        DAT_14caf1ec8 = (double)(ulonglong)uVar15;
        _Init_thread_footer();
      }
    }
    local_c4 = 0;
    uStack_e0 = 0.0;
    local_c0 = 0x101;
    local_98 = 0;
    local_90 = 0x800000000;
    local_78 = 0;
    local_70 = 0x400000000;
    local_d8 = 0;
    uStack_cc = 0;
    local_e8 = (char *)DAT_14caf1ec8;
    uStack_d7 = 1;
    uStack_d5 = 0;
    local_c8 = 0;
    uStack_d4 = 0;
    uStack_d2 = 0;
    if (param_1 != (longlong *)0x0) {
      local_88 = *(undefined4 *)((longlong)param_1 + 0xc);
      local_70 = 0x400000001;
      uStack_e0 = (double)param_1[3];
    }
    local_290 = &local_e8;
    uStack_d1 = 1;
    uStack_d0 = CONCAT31(uStack_d0._1_3_,1);
    local_298 = &local_108;
    local_108 = 1;
    uStack_fc = 0x3f800000;
    local_288 = &DAT_14cad0f10;
    local_2a8 = &DAT_14c8463d0;
    local_2a0 = 2;
    fStack_104 = fVar26;
    fStack_100 = fVar26;
    FUN_14021655c(uVar12,local_228,&local_248,&local_260);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    lVar16 = local_98;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    uVar20 = (undefined4)lVar16;
    uVar18 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
    if ((local_17b & 1) != 0) {
      dVar24 = (double)local_224;
      pdVar13 = (double *)param_1[0x73];
      local_268 = (double)((float)pdVar13[0x52] * *(float *)(pdVar13 + 200) + -2.0) +
                  (dVar1 - local_238) * dVar24 + local_238;
      local_270 = ((double)CONCAT44(uVar25,uVar23) - dStack_240) * dVar24 + dStack_240 + 0.0;
      local_278 = ((double)CONCAT44(uVar21,uVar19) - local_248) * dVar24 + local_248 + 0.0;
      lVar16 = param_1[0x39];
      if (lVar16 == 0) {
        local_f8 = DAT_14c846508;
        local_108 = (undefined4)DAT_14c8464f8;
        fStack_104 = DAT_14c8464f8._4_4_;
        fStack_100 = (float)DAT_14c846500;
        uStack_fc = DAT_14c846500._4_4_;
      }
      else {
        dVar1 = *(double *)(lVar16 + 0x240);
        dVar24 = *(double *)(lVar16 + 0x248);
        dVar7 = *(double *)(lVar16 + 0x250);
        dVar8 = *(double *)(lVar16 + 600);
        local_d8 = SUB81(dVar7,0);
        uStack_d7 = (undefined2)((ulonglong)dVar7 >> 8);
        uStack_d5 = (undefined1)((ulonglong)dVar7 >> 0x18);
        uStack_d4 = (undefined2)((ulonglong)dVar7 >> 0x20);
        uStack_d2 = (undefined1)((ulonglong)dVar7 >> 0x30);
        uStack_d1 = (undefined1)((ulonglong)dVar7 >> 0x38);
        uStack_d0 = SUB84(dVar8,0);
        uStack_cc = (undefined4)((ulonglong)dVar8 >> 0x20);
        pdVar14 = *(double **)(lVar16 + 0x228);
        local_e8 = (char *)dVar1;
        uStack_e0 = dVar24;
        if (pdVar14 == (double *)0x0) {
          uVar20 = 0x40;
          pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
          dVar9 = DAT_14c8463d8;
          *pdVar14 = DAT_14c8463d0;
          pdVar14[1] = dVar9;
          dVar9 = DAT_14c8463e8;
          pdVar14[2] = DAT_14c8463e0;
          pdVar14[3] = dVar9;
          dVar9 = (double)CONCAT44(DAT_14c846500._4_4_,(float)DAT_14c846500);
          pdVar14[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
          pdVar14[5] = dVar9;
          pdVar13 = DAT_14c846508;
          pdVar14[6] = (double)DAT_14c846508;
          *(double **)(lVar16 + 0x228) = pdVar14;
        }
        auVar3._8_4_ = (int)-(ulonglong)(dVar24 != pdVar14[1]);
        auVar3._0_8_ = -(ulonglong)(dVar1 != *pdVar14);
        auVar3._12_4_ = (int)(-(ulonglong)(dVar24 != pdVar14[1]) >> 0x20);
        iVar11 = movmskpd((int)pdVar13,auVar3);
        auVar5._8_4_ = (int)-(ulonglong)(dVar8 != pdVar14[3]);
        auVar5._0_8_ = -(ulonglong)(dVar7 != pdVar14[2]);
        auVar5._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar14[3]) >> 0x20);
        uVar15 = movmskpd(uVar20,auVar5);
        if ((uVar15 & 0x3fffffff) != 0 || iVar11 != 0) {
          *(uint *)(pdVar14 + 2) = CONCAT13(uStack_d5,CONCAT21(uStack_d7,local_d8));
          *(uint *)((longlong)pdVar14 + 0x14) = CONCAT13(uStack_d1,CONCAT12(uStack_d2,uStack_d4));
          *(undefined4 *)(pdVar14 + 3) = uStack_d0;
          *(undefined4 *)((longlong)pdVar14 + 0x1c) = uStack_cc;
          *(undefined4 *)pdVar14 = (undefined4)local_e8;
          *(undefined4 *)((longlong)pdVar14 + 4) = local_e8._4_4_;
          *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_e0;
          *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_e0._4_4_;
          FUN_1448052ee(&local_e8,&local_108);
          pdVar14[6] = (double)local_f8;
          pdVar14[4] = (double)CONCAT44(fStack_104,local_108);
          pdVar14[5] = (double)CONCAT44(uStack_fc,fStack_100);
        }
        local_f8 = (double *)pdVar14[6];
        local_108 = *(undefined4 *)(pdVar14 + 4);
        fStack_104 = *(float *)((longlong)pdVar14 + 0x24);
        fStack_100 = *(float *)(pdVar14 + 5);
        uStack_fc = *(undefined4 *)((longlong)pdVar14 + 0x2c);
      }
      local_2a8 = (undefined8 *)CONCAT71(local_2a8._1_7_,1);
      plVar17 = param_1;
      (**(code **)(*param_1 + 0x4d0))(param_1,&local_278,&local_108,0);
      uVar19 = SUB84(plVar17,0);
      lVar16 = param_1[0x39];
      if (lVar16 == 0) {
        pdVar13 = (double *)&DAT_14c8464e0;
        uVar21 = SUB84(DAT_14c8464f0,0);
        uVar23 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        pdVar13 = (double *)(lVar16 + 0x260);
        uVar21 = (undefined4)*(undefined8 *)(lVar16 + 0x270);
        uVar23 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x270) >> 0x20);
      }
      uVar18 = 0;
      if ((*pdVar13 == local_128) && (!NAN(*pdVar13) && !NAN(local_128))) {
        if ((pdVar13[1] == dStack_120) && (uVar18 = 0, !NAN(pdVar13[1]) && !NAN(dStack_120))) {
          uVar18 = (ulonglong)((double)CONCAT44(uVar23,uVar21) <= local_118);
        }
      }
      if (lVar16 == 0) {
        local_f8 = DAT_14c846508;
        local_108 = (undefined4)DAT_14c8464f8;
        fStack_104 = DAT_14c8464f8._4_4_;
        fStack_100 = (float)DAT_14c846500;
        uStack_fc = DAT_14c846500._4_4_;
      }
      else {
        dVar1 = *(double *)(lVar16 + 0x240);
        dVar24 = *(double *)(lVar16 + 0x248);
        dVar7 = *(double *)(lVar16 + 0x250);
        dVar8 = *(double *)(lVar16 + 600);
        local_d8 = SUB81(dVar7,0);
        uStack_d7 = (undefined2)((ulonglong)dVar7 >> 8);
        uStack_d5 = (undefined1)((ulonglong)dVar7 >> 0x18);
        uStack_d4 = (undefined2)((ulonglong)dVar7 >> 0x20);
        uStack_d2 = (undefined1)((ulonglong)dVar7 >> 0x30);
        uStack_d1 = (undefined1)((ulonglong)dVar7 >> 0x38);
        uStack_d0 = SUB84(dVar8,0);
        uStack_cc = (undefined4)((ulonglong)dVar8 >> 0x20);
        pdVar14 = *(double **)(lVar16 + 0x228);
        local_e8 = (char *)dVar1;
        uStack_e0 = dVar24;
        if (pdVar14 == (double *)0x0) {
          uVar19 = 0x40;
          pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
          dVar9 = DAT_14c8463d8;
          *pdVar14 = DAT_14c8463d0;
          pdVar14[1] = dVar9;
          dVar9 = DAT_14c8463e8;
          pdVar14[2] = DAT_14c8463e0;
          pdVar14[3] = dVar9;
          dVar9 = (double)CONCAT44(DAT_14c846500._4_4_,(float)DAT_14c846500);
          pdVar14[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
          pdVar14[5] = dVar9;
          pdVar13 = DAT_14c846508;
          pdVar14[6] = (double)DAT_14c846508;
          *(double **)(lVar16 + 0x228) = pdVar14;
        }
        auVar4._8_4_ = (int)-(ulonglong)(dVar24 != pdVar14[1]);
        auVar4._0_8_ = -(ulonglong)(dVar1 != *pdVar14);
        auVar4._12_4_ = (int)(-(ulonglong)(dVar24 != pdVar14[1]) >> 0x20);
        iVar11 = movmskpd((int)pdVar13,auVar4);
        auVar6._8_4_ = (int)-(ulonglong)(dVar8 != pdVar14[3]);
        auVar6._0_8_ = -(ulonglong)(dVar7 != pdVar14[2]);
        auVar6._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar14[3]) >> 0x20);
        uVar15 = movmskpd(uVar19,auVar6);
        if ((uVar15 & 0x3fffffff) != 0 || iVar11 != 0) {
          *(uint *)(pdVar14 + 2) = CONCAT13(uStack_d5,CONCAT21(uStack_d7,local_d8));
          *(uint *)((longlong)pdVar14 + 0x14) = CONCAT13(uStack_d1,CONCAT12(uStack_d2,uStack_d4));
          *(undefined4 *)(pdVar14 + 3) = uStack_d0;
          *(undefined4 *)((longlong)pdVar14 + 0x1c) = uStack_cc;
          *(undefined4 *)pdVar14 = (undefined4)local_e8;
          *(undefined4 *)((longlong)pdVar14 + 4) = local_e8._4_4_;
          *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_e0;
          *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_e0._4_4_;
          FUN_1448052ee(&local_e8,&local_108);
          pdVar14[6] = (double)local_f8;
          pdVar14[4] = (double)CONCAT44(fStack_104,local_108);
          pdVar14[5] = (double)CONCAT44(uStack_fc,fStack_100);
        }
        local_f8 = (double *)pdVar14[6];
        local_108 = *(undefined4 *)(pdVar14 + 4);
        fStack_104 = *(float *)((longlong)pdVar14 + 0x24);
        fStack_100 = *(float *)(pdVar14 + 5);
        uStack_fc = *(undefined4 *)((longlong)pdVar14 + 0x2c);
      }
      local_2a8 = (undefined8 *)CONCAT71(local_2a8._1_7_,1);
      (**(code **)(*param_1 + 0x4d0))(param_1,&local_128,&local_108,0);
    }
    if (param_1[0x74] != 0) {
      FUN_14045627c(param_1[0x74],uVar18 & 0xffffffff,1);
    }
    if (param_1[0x75] != 0) {
      FUN_14045627c(param_1[0x75],(uVar18 ^ 1) & 0xffffffff,1);
    }
  }
  FUN_1405d0f74(param_1);
  if ((local_60 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14358620a FUN_14358620a body=2206 status=ok
// SIG undefined FUN_14358620a(void)

void FUN_14358620a(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_208 [40];
  uint *local_1e0;
  undefined **local_1d8;
  longlong *local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1c0 = &local_1c8;
  local_1d8 = &PTR_FUN_149e37810;
  local_1c8 = &local_1d8;
  local_1d0 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x68);
  iVar1 = *(int *)(param_1 + 0x13f8);
  if ((longlong)iVar1 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x13f0);
    lVar12 = 0;
    do {
      local_1d8 = *(undefined ***)(lVar8 + lVar12);
      (**(code **)(*param_2 + 0x150))(param_2,&local_1d8);
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar1 * 8 != lVar12);
  }
  if ((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0) {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x13f8) << 3,
               (longlong)*(int *)(param_1 + 0x13fc) << 3);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1a0) * 2,
               (longlong)*(int *)(param_1 + 0x1a4) * 2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1b0) * 2,
               (longlong)*(int *)(param_1 + 0x1b4) * 2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1c0) * 2,
               (longlong)*(int *)(param_1 + 0x1c4) * 2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x6b8),(longlong)*(int *)(param_1 + 0x6bc));
    (**(code **)(*param_2 + 0x10))(param_2,0xb8,0xb8);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x13f8) << 3,
               (longlong)*(int *)(param_1 + 0x13fc) << 3);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1408) << 2,
               (longlong)*(int *)(param_1 + 0x140c) << 2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1418) << 2,
               (longlong)*(int *)(param_1 + 0x141c) << 2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1428) << 2,
               (longlong)*(int *)(param_1 + 0x142c) << 2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1460) * 0x18,
               (longlong)*(int *)(param_1 + 0x1464) * 0x18);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x1480) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x1484) + 0x1fU >> 3 & 0xfffffffc);
    lVar8 = (longlong)*(int *)(param_1 + 0x14a0) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x14e8) << 4,
               (longlong)*(int *)(param_1 + 0x14ec) << 4);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x1508) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x150c) + 0x1fU >> 3 & 0xfffffffc);
    lVar8 = (longlong)*(int *)(param_1 + 0x1528) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1588) << 5,
               (longlong)*(int *)(param_1 + 0x158c) << 5);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x15a8) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x15ac) + 0x1fU >> 3 & 0xfffffffc);
    lVar8 = (longlong)*(int *)(param_1 + 0x15c8) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    iVar1 = *(int *)(param_1 + 0x15a8);
    if (iVar1 == 0) {
      uVar13 = 1;
      uVar14 = 0;
      iVar9 = 0;
      iVar11 = 0;
    }
    else {
      puVar3 = *(uint **)(param_1 + 0x15a0);
      if (*(uint **)(param_1 + 0x15a0) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x1590);
      }
      uVar4 = *puVar3;
      if (uVar4 == 0) {
        iVar9 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar9 = iVar1 + -1;
        }
        uVar14 = 0;
        uVar5 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar5 = uVar14;
        }
        iVar9 = 0;
        do {
          if (uVar5 == uVar14) goto LAB_1435865bf;
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar3[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar14 = 0;
        iVar9 = 0;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar5 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar11 = (iVar9 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar11) {
        iVar11 = iVar1;
      }
    }
    if (iVar11 != iVar1) {
      uVar4 = 0xffffffff;
      do {
        (**(code **)(*param_2 + 0x10))
                  (param_2,(longlong)
                           *(int *)(*(longlong *)(param_1 + 0x1580) + 0x10 + (longlong)iVar11 * 0x20
                                   ) << 3,
                   (longlong)
                   *(int *)(*(longlong *)(param_1 + 0x1580) + 0x14 + (longlong)iVar11 * 0x20) << 3);
        uVar4 = ~(uint)uVar13 & uVar4;
        puVar3 = *(uint **)(param_1 + 0x15a0);
        if (*(uint **)(param_1 + 0x15a0) == (uint *)0x0) {
          puVar3 = (uint *)(param_1 + 0x1590);
        }
        iVar2 = *(int *)(param_1 + 0x15a8);
        iVar11 = (int)uVar14;
        lVar8 = (longlong)iVar11;
        uVar10 = puVar3[lVar8] & uVar4;
        if (uVar10 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar6 = iVar7;
          if (iVar7 < iVar11) {
            iVar6 = iVar11;
          }
          if (iVar11 < iVar7) {
            lVar12 = 0;
            do {
              uVar10 = puVar3[lVar8 + lVar12 + 1];
              if (uVar10 != 0) {
                uVar14 = (ulonglong)(iVar11 + (int)lVar12 + 1);
                uVar4 = 0xffffffff;
                goto LAB_143586942;
              }
              iVar9 = iVar9 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar6 - lVar8 != lVar12);
            uVar4 = 0xffffffff;
            iVar11 = iVar6;
          }
          uVar14 = (ulonglong)(iVar11 + 1);
          iVar11 = iVar2;
        }
        else {
LAB_143586942:
          uVar13 = (ulonglong)(-uVar10 & uVar10);
          uVar5 = uVar13 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar11 = (iVar9 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar11) {
            iVar11 = iVar2;
          }
        }
      } while (iVar11 != iVar1);
    }
LAB_1435865bf:
    FUN_147bdbdaa(param_1 + 0x15d0,param_2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1678) << 4,
               (longlong)*(int *)(param_1 + 0x167c) << 4);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x1698) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x169c) + 0x1fU >> 3 & 0xfffffffc);
    lVar8 = (longlong)*(int *)(param_1 + 0x16b8) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1718) * 0x14,
               (longlong)*(int *)(param_1 + 0x171c) * 0x14);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x1738) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x173c) + 0x1fU >> 3 & 0xfffffffc);
    lVar8 = (longlong)*(int *)(param_1 + 0x1758) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1810) * 0x28,
               (longlong)*(int *)(param_1 + 0x1814) * 0x28);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x1830) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x1834) + 0x1fU >> 3 & 0xfffffffc);
    lVar8 = (longlong)*(int *)(param_1 + 0x1850) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    local_1e0 = (uint *)(param_1 + 0x1818);
    iVar1 = *(int *)(param_1 + 0x1830);
    if (iVar1 == 0) {
      uVar13 = 1;
      uVar14 = 0;
      iVar9 = 0;
      iVar11 = 0;
    }
    else {
      puVar3 = *(uint **)(param_1 + 0x1828);
      if (*(uint **)(param_1 + 0x1828) == (uint *)0x0) {
        puVar3 = local_1e0;
      }
      uVar4 = *puVar3;
      if (uVar4 == 0) {
        iVar9 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar9 = iVar1 + -1;
        }
        uVar14 = 0;
        uVar5 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar5 = uVar14;
        }
        iVar9 = 0;
        do {
          if (uVar5 == uVar14) goto LAB_14358679e;
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar3[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar14 = 0;
        iVar9 = 0;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar5 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar11 = (iVar9 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar11) {
        iVar11 = iVar1;
      }
    }
    if (iVar11 != iVar1) {
      uVar4 = 0xffffffff;
      do {
        lVar8 = *(longlong *)(param_1 + 0x1808) + (longlong)iVar11 * 0x28;
        FUN_14021219d(param_2,lVar8);
        (**(code **)(*param_2 + 0x10))
                  (param_2,(longlong)*(int *)(lVar8 + 0x18) << 2,
                   (longlong)*(int *)(lVar8 + 0x1c) << 2);
        uVar4 = ~(uint)uVar13 & uVar4;
        puVar3 = *(uint **)(param_1 + 0x1828);
        if (*(uint **)(param_1 + 0x1828) == (uint *)0x0) {
          puVar3 = local_1e0;
        }
        iVar2 = *(int *)(param_1 + 0x1830);
        iVar11 = (int)uVar14;
        lVar8 = (longlong)iVar11;
        uVar10 = puVar3[lVar8] & uVar4;
        if (uVar10 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar6 = iVar7;
          if (iVar7 < iVar11) {
            iVar6 = iVar11;
          }
          if (iVar11 < iVar7) {
            lVar12 = 0;
            do {
              uVar10 = puVar3[lVar8 + lVar12 + 1];
              if (uVar10 != 0) {
                uVar14 = (ulonglong)(iVar11 + (int)lVar12 + 1);
                uVar4 = 0xffffffff;
                goto LAB_143586a4a;
              }
              iVar9 = iVar9 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar6 - lVar8 != lVar12);
            uVar4 = 0xffffffff;
            iVar11 = iVar6;
          }
          uVar14 = (ulonglong)(iVar11 + 1);
          iVar11 = iVar2;
        }
        else {
LAB_143586a4a:
          uVar13 = (ulonglong)(-uVar10 & uVar10);
          uVar5 = uVar13 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar11 = (iVar9 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar11) {
            iVar11 = iVar2;
          }
        }
      } while (iVar11 != iVar1);
    }
LAB_14358679e:
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(&DAT_00001860 + param_1) * 0x18,
               (longlong)*(int *)(param_1 + 0x1864) * 0x18);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x1880) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x1884) + 0x1fU >> 3 & 0xfffffffc);
    lVar8 = (longlong)*(int *)(param_1 + 0x18a0) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x1a08) << 3,
               (longlong)*(int *)(param_1 + 0x1a0c) << 3);
    lVar8 = (longlong)*(int *)(param_1 + 0x1a28) << 2;
    (**(code **)(*param_2 + 0x10))(param_2,lVar8,lVar8);
    FUN_147a4757a(param_1 + 0x280,param_2);
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x450),(longlong)*(int *)(param_1 + 0x454));
    (**(code **)(*param_2 + 0x10))(param_2,0xb8,0xb8);
    if (*(longlong *)(param_1 + 0x140) != 0) {
      FUN_14707999e(*(longlong *)(param_1 + 0x140),param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143586aa9 FUN_143586aa9 body=69 status=ok
// SIG undefined FUN_143586aa9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586aa9(void)

{
  _DAT_14caf1c18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586aeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1c20,1);
  return;
}



// FUNCTION 143586aee FUN_143586aee body=69 status=ok
// SIG undefined FUN_143586aee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586aee(void)

{
  _DAT_14caf1c30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1c38,1);
  return;
}



// FUNCTION 143586b33 FUN_143586b33 body=69 status=ok
// SIG undefined FUN_143586b33(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586b33(void)

{
  _DAT_14caf1c48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586b75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1c50,1);
  return;
}



// FUNCTION 143586b78 FUN_143586b78 body=69 status=ok
// SIG undefined FUN_143586b78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586b78(void)

{
  _DAT_14caf1c60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586bba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1c68,1);
  return;
}



// FUNCTION 143586bbd FUN_143586bbd body=69 status=ok
// SIG undefined FUN_143586bbd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586bbd(void)

{
  _DAT_14caf1c78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586bff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1c80,1);
  return;
}



// FUNCTION 143586c02 FUN_143586c02 body=69 status=ok
// SIG undefined FUN_143586c02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586c02(void)

{
  _DAT_14caf1c90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1c98,1);
  return;
}



// FUNCTION 143586c47 FUN_143586c47 body=69 status=ok
// SIG undefined FUN_143586c47(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586c47(void)

{
  _DAT_14caf1ca8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586c89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1cb0,1);
  return;
}



// FUNCTION 143586c8c FUN_143586c8c body=69 status=ok
// SIG undefined FUN_143586c8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586c8c(void)

{
  _DAT_14caf1cc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586cce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1cc8,1);
  return;
}



// FUNCTION 143586cd1 FUN_143586cd1 body=69 status=ok
// SIG undefined FUN_143586cd1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586cd1(void)

{
  _DAT_14caf1cd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586d13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1ce0,1);
  return;
}



// FUNCTION 143586d16 FUN_143586d16 body=69 status=ok
// SIG undefined FUN_143586d16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586d16(void)

{
  _DAT_14caf1cf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1cf8,1);
  return;
}



// FUNCTION 143586d5b FUN_143586d5b body=69 status=ok
// SIG undefined FUN_143586d5b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586d5b(void)

{
  _DAT_14caf1d08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586d9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1d10,1);
  return;
}



// FUNCTION 143586da0 FUN_143586da0 body=69 status=ok
// SIG undefined FUN_143586da0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586da0(void)

{
  _DAT_14caf1d20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1d28,1);
  return;
}



// FUNCTION 143586de5 FUN_143586de5 body=69 status=ok
// SIG undefined FUN_143586de5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586de5(void)

{
  _DAT_14caf1d38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586e27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1d40,1);
  return;
}



// FUNCTION 143586e2a FUN_143586e2a body=69 status=ok
// SIG undefined FUN_143586e2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586e2a(void)

{
  _DAT_14caf1d50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1d58,1);
  return;
}



// FUNCTION 143586e6f FUN_143586e6f body=69 status=ok
// SIG undefined FUN_143586e6f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586e6f(void)

{
  _DAT_14caf1d68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586eb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1d70,1);
  return;
}



// FUNCTION 143586eb4 FUN_143586eb4 body=69 status=ok
// SIG undefined FUN_143586eb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586eb4(void)

{
  _DAT_14caf1d78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1d80,1);
  return;
}



// FUNCTION 143586ef9 FUN_143586ef9 body=69 status=ok
// SIG undefined FUN_143586ef9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586ef9(void)

{
  _DAT_14caf1d88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586f3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1d90,1);
  return;
}



// FUNCTION 143586f3e FUN_143586f3e body=69 status=ok
// SIG undefined FUN_143586f3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586f3e(void)

{
  _DAT_14caf1d98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1da0,1);
  return;
}



// FUNCTION 143586f83 FUN_143586f83 body=69 status=ok
// SIG undefined FUN_143586f83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143586f83(void)

{
  _DAT_14caf1da8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143586fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1db0,1);
  return;
}



// FUNCTION 143586fc8 FUN_143586fc8 body=573 status=ok
// SIG undefined FUN_143586fc8(void)

void FUN_143586fc8(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  uint *param_5,longlong param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  uint local_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    puVar7 = (uint *)*param_3;
    puVar8 = puVar7 + (longlong)*(int *)(param_3 + 1) * 5;
    do {
      if (((((puVar7[1] == 0) || (uVar1 = *puVar7, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)
           ) || ((plVar6 = (longlong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != puVar7[1])))) ||
         (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 ||
          ((lVar2 = *plVar6, lVar2 == 0 || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0))))))
      goto LAB_1435870d2;
      if ((param_6 == 0) || (DAT_14c7615e0 == 0)) {
LAB_1435870ad:
        FUN_143587206(param_1,param_2,lVar2);
        FUN_14105d480(param_4,lVar2,*(longlong *)(param_1 + 0x58) + 0x1b8);
      }
      else {
        uVar1 = puVar7[4];
        uVar4 = 1L << ((byte)uVar1 & 0x3f) & *(ulonglong *)(param_5 + (ulonglong)(uVar1 >> 6) * 2);
        bVar9 = uVar4 != 0;
        if (uVar1 == 0x10) {
          local_68 = *(longlong *)(param_1 + 0x30);
          local_78 = CONCAT71(local_78._1_7_,uVar4 != 0);
          FUN_147a48382(param_6,&local_58,*(undefined8 *)(puVar7 + 2));
          if (0 < (longlong)local_50 && (char)local_78 == '\0') {
            local_78 = local_58;
            local_60 = DAT_14c997f10;
            local_6c = *param_5 >> 10 & 1;
            uVar4 = 0;
            do {
              lVar3 = *(longlong *)(local_58 + uVar4 * 8);
              bVar9 = SUB41((*param_5 & 4) >> 2,0);
              if ((DAT_14c997f08 != lVar3) && (bVar9 = SUB41(local_6c,0), DAT_14c997f10 != lVar3)) {
                if ((longlong)*(int *)(local_68 + 0x680) != 0) {
                  uVar5 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(local_68 + 0x678) + uVar5) == lVar3) {
                      bVar9 = (~uVar5 & 0x7fffffff8) != 0;
                      goto LAB_1435871c3;
                    }
                    uVar5 = uVar5 + 8;
                  } while ((longlong)*(int *)(local_68 + 0x680) * 8 != uVar5);
                }
                bVar9 = false;
              }
LAB_1435871c3:
              uVar4 = uVar4 + 1;
            } while ((uVar4 < (ulonglong)(longlong)local_50) && (bVar9 == false));
          }
          if (bVar9 != false) goto LAB_1435870ad;
        }
        else if (uVar4 != 0) goto LAB_1435870ad;
      }
LAB_1435870d2:
      puVar7 = puVar7 + 5;
    } while (puVar7 != puVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143587206 FUN_143587206 body=836 status=ok
// SIG undefined FUN_143587206(void)

void FUN_143587206(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  char local_49;
  code *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((DAT_14caf2745 == '\x01') && ((longlong *)param_1[0xb] != (longlong *)0x0)) {
    cVar5 = (**(code **)(*(longlong *)param_1[0xb] + 0x3c0))();
  }
  else {
    cVar5 = '\0';
  }
  if (DAT_14caf2748 == 1) {
    FUN_147bdb6fc(param_1 + 0x2ba,&local_48,param_2,param_3);
    if (local_48 != (code *)0x0) {
      FUN_1434b2946(local_48,param_3);
    }
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
  cVar6 = '\0';
  if (cVar5 != '\0') {
    cVar6 = FUN_147bdb59a(param_1 + 0x2ba,param_2,param_3);
  }
  if (cVar6 == '\0') {
    local_49 = '\0';
    puVar8 = (undefined8 *)FUN_1417e3c06(param_1 + 0x2ba,param_2,param_3);
    if (DAT_14c7615e4 == 0) {
      uVar7 = 0;
    }
    else {
      if (DAT_14cae8b20 == 0) {
        local_70 = &local_48;
        local_48 = (code *)&LAB_14355090c;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_78 = &LAB_147b8e16d;
        local_80 = (code *)&LAB_140810a38;
        local_88 = L"Engine";
        local_90 = 0x800000000;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar4 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_70 = &local_48;
        local_48 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_78 = &LAB_1468c5283;
        local_80 = FUN_142809da0;
        local_88 = L"Engine";
        local_90 = 0x400000000;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar9 = *(longlong *)(param_2 + 0x20);
      if (lVar9 == 0) {
        lVar10 = 0;
      }
      else {
        iVar3 = *(int *)(lVar4 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar3) ||
             (lVar10 = lVar9,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar3 * 8)
             != lVar4 + 0x30)) {
            lVar10 = 0;
          }
        } while ((lVar10 == 0) && (lVar9 = *(longlong *)(lVar9 + 0x20), lVar9 != 0));
      }
      uVar7 = (**(code **)(*param_1 + 0x388))(param_1,lVar10);
      uVar7 = uVar7 ^ 1;
    }
    FUN_140c4bc9a(*puVar8,param_3,param_1,uVar7);
    if ((param_2 != param_3 && param_1[0xb] != 0) && (local_49 == '\0')) {
      FUN_1416caf26(*(undefined8 *)(param_1[0xb] + 0x858),param_2,param_3,param_1);
    }
    lVar4 = param_1[0xd];
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x32c) < 0) {
        *(undefined4 *)(lVar4 + 0x328) = 0;
        FUN_1417c3e4a(lVar4 + 800,0);
      }
      else {
        *(undefined4 *)(lVar4 + 0x328) = 0;
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14358754c FUN_14358754c body=348 status=ok
// SIG undefined FUN_14358754c(void)

void FUN_14358754c(longlong param_1,uint param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  ushort uVar6;
  
  lVar2 = DAT_14caf1c70;
  if (*(int *)(param_1 + 0x13d8) == -1) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar5 = 0;
    }
    else if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar5 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar5 = 1;
    }
    if (0 < *(int *)(lVar2 + uVar5 * 4)) {
      *(uint *)(param_1 + 0x13d8) = param_2 - 1;
      *(uint *)(param_1 + 0x13dc) = param_3;
      *(uint *)(param_1 + 0x13e0) = param_3 - 1;
      *(uint *)(param_1 + 0x1c90) = param_3 - 1;
      *(uint *)(param_1 + 0x1434) = param_2 & 0x3ff;
      *(uint *)(param_1 + 0x1430) = param_3 & 0x3ff;
      FUN_1448156a8(param_1 + 0x1410,param_1 + 0x1434,*(undefined4 *)(param_1 + 0x1418));
      FUN_1448156a8(param_1 + 0x1400,param_1 + 0x1430,*(undefined4 *)(param_1 + 0x1408));
      uVar6 = *(ushort *)(param_1 + 0x13d8) & 0x3fff;
      *(undefined8 *)(param_1 + 0x1c64) = 0;
      *(undefined8 *)(param_1 + 0x1c6c) = 0;
      *(undefined8 *)(param_1 + 0x1c74) = 0;
      *(undefined8 *)(param_1 + 0x1c7c) = 0;
      *(ushort *)(param_1 + 0x1c84) = uVar6;
      *(ushort *)(param_1 + 0x1c86) = uVar6;
      *(ushort *)(param_1 + 0x1c88) = uVar6;
      *(ushort *)(param_1 + 0x1c8c) = *(ushort *)(param_1 + 0x13dc) & 0x3fff;
      uVar6 = *(ushort *)(param_1 + 0x13dc) - 1 & 0x3fff;
      *(ushort *)(param_1 + 0x1c8e) = uVar6;
      *(ushort *)(param_1 + 0x1c8a) = uVar6;
    }
  }
  return;
}



// FUNCTION 1435876a8 FUN_1435876a8 body=767 status=ok
// SIG undefined FUN_1435876a8(void)

undefined8 FUN_1435876a8(longlong *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  code *pcVar1;
  void *_Src;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_2f8 [32];
  void **local_2d8;
  wchar_t *local_2d0;
  undefined4 local_2c8;
  longlong local_2b8;
  longlong local_2a8;
  undefined1 local_2a0 [4];
  undefined1 local_29c [4];
  longlong *local_298 [2];
  void *local_288;
  int local_280;
  undefined4 local_27c;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined1 **local_268;
  char local_260;
  undefined1 local_258 [256];
  undefined1 *local_158;
  undefined1 *local_150;
  ulonglong *local_148;
  char local_140;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  uVar3 = FUN_1415d1120(1);
  cVar2 = FUN_146815e02(uVar3,param_2);
  lVar7 = param_1[0xb];
  if (cVar2 == '\0') {
LAB_143587734:
    if (lVar7 == 0) goto LAB_143587739;
    uVar6 = *(undefined1 *)(lVar7 + 0x849);
  }
  else {
    if (lVar7 != 0) {
      FUN_143597682(lVar7,param_3);
      lVar7 = param_1[0xb];
      uVar4 = 1;
      if ((ushort)*(byte *)(lVar7 + 0x849) == (ushort)param_3) goto LAB_14358770a;
      goto LAB_143587734;
    }
LAB_143587739:
    uVar6 = 0;
  }
  local_158 = local_138;
  local_140 = '\0';
  local_148 = &local_38;
  local_278 = local_258;
  local_260 = '\0';
  local_268 = &local_158;
  local_270 = local_278;
  local_150 = local_158;
  FUN_146816066(uVar6);
  FUN_146816066(param_3,&local_278);
  local_2d0 = L"ClientOutdated";
  local_2c8 = 0xe;
  FUN_1446e940c(local_29c,&local_2d0);
  local_2d0 = L"Engine";
  local_2c8 = 6;
  FUN_1446e940c(local_2a0,&local_2d0);
  local_2d0 = 
  L"The match you are trying to join is running an incompatible version of the game.  Please try upgrading your game version."
  ;
  local_2c8 = 0x79;
  FUN_140208c1e(local_298,local_2a0,local_29c,&local_2d0);
  plVar5 = local_298[0];
  if (*(code **)(*local_298[0] + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*local_298[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  pcVar1 = *(code **)(*local_298[0] + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar5 = local_298[0] + 3;
    if (local_298[0][5] != 0) {
      plVar5 = (longlong *)(local_298[0][5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar5 = local_298[0] + 2;
  }
  else {
    plVar5 = (longlong *)(*pcVar1)(local_298[0]);
  }
  local_288 = (void *)0x0;
  local_280 = (int)plVar5[1];
  lVar7 = (longlong)local_280;
  _Src = (void *)*plVar5;
  if (lVar7 == 0) {
    local_27c = 0;
  }
  else {
    FUN_1446dd670(&local_288,local_280,0);
    memcpy(local_288,_Src,lVar7 * 2);
  }
  if (local_298[0] != (longlong *)0x0) {
    (**(code **)(*local_298[0] + 0x10))();
  }
  lVar7 = param_1[0xb];
  lVar8 = DAT_14cb0d2b0 + 0xec8;
  uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  local_2d8 = &local_288;
  FUN_147d87416(lVar8,uVar4,lVar7,6);
  if (param_4 == '\x01') {
    FUN_1459b235e(&local_2d0,6);
    FUN_143587ad8(param_1,&local_2d0);
    if (local_2a8 != 0) {
      (**(code **)(local_2a8 + -0x10))(local_2a8 + -0x10);
    }
    if (local_2b8 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_288 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_260 == '\x01') {
    FUN_1400020a8(local_278);
  }
  if (local_140 == '\x01') {
    FUN_1400020a8(local_158);
  }
  uVar4 = 0;
LAB_14358770a:
  if ((local_38 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1435879a8 FUN_1435879a8 body=119 status=ok
// SIG undefined FUN_1435879a8(void)

void FUN_1435879a8(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x140);
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x1b8);
    plVar4 = *(longlong **)(lVar2 + 0x1c0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0xa8))(plVar3);
      (**(code **)(*plVar3 + 0x88))(plVar3);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143587a13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143587a20 FUN_143587a20 body=74 status=ok
// SIG undefined FUN_143587a20(void)

void FUN_143587a20(longlong *param_1,undefined8 param_2)

{
  if ((1 < *(uint *)((longlong)param_1 + 0x134)) && (param_1[0xb] != 0)) {
    FUN_147bcc2cc(param_1);
    (**(code **)(*param_1 + 0x2f8))(param_1,0);
    FUN_1435879a8(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 143587a6a FUN_143587a6a body=7 status=ok
// SIG undefined FUN_143587a6a(void)

undefined4 FUN_143587a6a(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x134);
}



// FUNCTION 143587a72 FUN_143587a72 body=101 status=ok
// SIG undefined FUN_143587a72(void)

void FUN_143587a72(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x140);
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x1b8);
    plVar4 = *(longlong **)(lVar2 + 0x1c0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0xa8))();
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143587acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143587ad8 FUN_143587ad8 body=1025 status=ok
// SIG undefined FUN_143587ad8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143587ad8(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  size_t sVar3;
  LARGE_INTEGER LVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_10b8 [32];
  ulonglong local_1098;
  ulonglong local_1090;
  undefined1 local_1088 [8];
  LARGE_INTEGER local_1080;
  int local_1078;
  wchar_t *local_1070;
  undefined1 *local_1068;
  ulonglong *local_1060;
  char local_1058;
  wchar_t local_1050 [23];
  undefined1 local_1022 [4050];
  ulonglong local_50 [3];
  undefined8 uStack_38;
  
  uStack_38 = 0x143587aeb;
  local_50[0] = DAT_14c707940 ^ (ulonglong)auStack_10b8;
  if ((*(byte *)((longlong)param_1 + 0xa4) & 2) != 0) {
    *(undefined2 *)(param_1 + 0x33f) = 0;
    FUN_14068ded2(param_1 + 0x335,0);
  }
  if ((param_1[0xb] != 0) && (*(int *)((longlong)param_1 + 0x134) != 1)) {
    local_1070 = local_1050;
    local_1058 = '\0';
    local_1060 = local_50;
    builtin_wcsncpy(local_1050,L"UNetConnection::Close: ",0x17);
    local_1068 = local_1022;
    (**(code **)(*param_1 + 0x2d0))(param_1,&local_1080);
    LVar4 = local_1080;
    if (local_1078 == 0) {
      LVar4.QuadPart = (LONGLONG)&DAT_149dfb77a;
    }
    if ((wchar_t *)LVar4.QuadPart == (wchar_t *)0x0) {
      iVar6 = 0;
    }
    else {
      sVar3 = wcslen((wchar_t *)LVar4);
      iVar6 = (int)sVar3;
    }
    lVar5 = (longlong)iVar6;
    if (local_1060 <= local_1068 + lVar5 * 2) {
      FUN_140213274(&local_1070,lVar5);
    }
    puVar2 = local_1068;
    if (iVar6 != 0) {
      memcpy(local_1068,(void *)LVar4,lVar5 * 2);
      local_1068 = puVar2 + lVar5 * 2;
    }
    if ((wchar_t *)local_1080.QuadPart != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    FUN_140212e80(&local_1070,L", Channels: %i, Time: ",(int)param_1[0xf]);
    FUN_140212f8e(local_1088);
    FUN_14047ad2e(local_1088,&local_1080,L"%Y.%m.%d-%H.%M.%S");
    LVar4 = local_1080;
    if (local_1078 == 0) {
      LVar4.QuadPart = (LONGLONG)&DAT_149dfb77a;
    }
    if ((wchar_t *)LVar4.QuadPart == (wchar_t *)0x0) {
      iVar6 = 0;
    }
    else {
      sVar3 = wcslen((wchar_t *)LVar4);
      iVar6 = (int)sVar3;
    }
    lVar5 = (longlong)iVar6;
    if (local_1060 <= local_1068 + lVar5 * 2) {
      FUN_140213274(&local_1070,lVar5);
    }
    puVar2 = local_1068;
    if (iVar6 != 0) {
      memcpy(local_1068,(void *)LVar4,lVar5 * 2);
      local_1068 = puVar2 + lVar5 * 2;
    }
    if ((wchar_t *)local_1080.QuadPart != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (DAT_14caf1d30 != 0) {
      QueryPerformanceCounter(&local_1080);
      dVar8 = (double)local_1080.QuadPart * DAT_14c83f420 + 16777216.0;
      dVar9 = (double)param_1[0x3c];
      if (((dVar9 == 0.0) && (!NAN(dVar9))) || (*(int *)((longlong)param_1 + 0x4d4) == 0)) {
        dVar9 = -1.0;
      }
      else {
        dVar9 = dVar8 - dVar9;
      }
      uVar7 = -(ulonglong)((double)param_1[0x49] != 0.0);
      local_1090 = ~uVar7 & 0xbff0000000000000 | (ulonglong)(dVar8 - (double)param_1[0x49]) & uVar7;
      uVar7 = -(ulonglong)((double)param_1[0x92] != 0.0);
      local_1098 = ~uVar7 & 0xbff0000000000000 | (ulonglong)(dVar8 - (double)param_1[0x92]) & uVar7;
      FUN_140212e80(&local_1070,
                    L", TimeSinceTickDispatch: %f, TimeSinceRecv: %f, TimeSinceTickFlush: %f, TimeSinceSend: %f"
                    ,dVar8 - *(double *)(param_1[0xb] + 0x310),dVar9);
    }
    FUN_143587eda(param_1,param_2);
    plVar1 = *(longlong **)param_1[0x27e];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2b8))(plVar1,0);
    }
    *(undefined4 *)((longlong)param_1 + 0x134) = 1;
    if (((param_1[0x28] == 0) || (*(char *)(param_1[0x28] + 1) == '\x02')) &&
       (((*(byte *)((longlong)param_1 + 0xa4) & 2) != 0 ||
        ((*(longlong *)(param_1[0xb] + 0xf0) != 0 ||
         (*(int *)param_1[0x282] != *(int *)((longlong)param_1 + 0x1434))))))) {
      (**(code **)(*param_1 + 0x2f8))(param_1,0);
    }
    if (param_1[0xc2] != 0) {
      FUN_1478ce642(param_1 + 0xaa,param_1[0xc2] + 0x20);
    }
    if (param_1[0x3aa] != 0) {
      FUN_147be4c28();
    }
    lVar5 = param_1[0x3ae];
    if (lVar5 != 0) {
      param_1[0x3ae] = 0;
      (**(code **)(lVar5 + -0x10))(lVar5 + -0x10);
    }
    if (local_1058 == '\x01') {
      FUN_1400020a8(local_1070);
    }
  }
  param_1[0x289] = 0;
  param_1[0x28a] = 0;
  if ((local_50[0] ^ (ulonglong)auStack_10b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143587eda FUN_143587eda body=556 status=ok
// SIG undefined FUN_143587eda(void)

void FUN_143587eda(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  int **ppiVar7;
  int *piVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  int *local_58;
  int local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  if ((param_2 != (int *)0x0) &&
     ((lVar1 = *(longlong *)(param_2 + 4), lVar6 = FUN_1459b23c6(), lVar1 != lVar6 ||
      (*param_2 != 0xe)))) {
    piVar8 = param_2;
    do {
      if ((int)uStack_40 - 2U < 0x7fffffff) {
        FUN_140002184(&local_48,0x2c);
      }
      FUN_14622a6f8(piVar8,&local_58,2);
      iVar2 = local_50 + -1;
      if (local_50 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(&local_48,local_58,iVar2);
      if (local_58 != (int *)0x0) {
        FUN_1400020a8();
      }
      piVar8 = *(int **)(piVar8 + 10);
    } while (piVar8 != (int *)0x0);
  }
  if ((*(longlong *)(param_1 + 0x140) == 0) ||
     (bVar9 = true, *(char *)(*(longlong *)(param_1 + 0x140) + 1) == '\x02')) {
    if (((*(byte *)(param_1 + 0xa4) & 2) == 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0xf0) == 0)) {
      bVar9 = **(int **)(param_1 + 0x1410) == *(int *)(param_1 + 0x1434);
    }
    else {
      bVar9 = false;
    }
  }
  if (((0 < *(int *)(param_1 + 0x13f8)) && (!bVar9 && **(longlong **)(param_1 + 0x13f0) != 0)) &&
     (1 < (int)uStack_40)) {
    FUN_145acdb2c(param_1,&local_48);
  }
  if (*(longlong *)(param_1 + 0x610) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x578);
    if (lVar1 == 0) {
      ppiVar7 = (int **)(param_1 + 0x578);
      local_58 = (int *)FUN_14001cc68(0x30,0x10);
      iVar2 = param_2[1];
      iVar3 = param_2[2];
      iVar4 = param_2[3];
      *local_58 = *param_2;
      local_58[1] = iVar2;
      local_58[2] = iVar3;
      local_58[3] = iVar4;
      *(undefined8 *)(local_58 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(local_58 + 6) = *(undefined8 *)(param_2 + 6);
      param_2[6] = 0;
      param_2[7] = 0;
      local_58[8] = param_2[8];
      local_58[9] = param_2[9];
      param_2[8] = 0;
      param_2[9] = 0;
      *(undefined8 *)(local_58 + 10) = *(undefined8 *)(param_2 + 10);
      param_2[10] = 0;
      param_2[0xb] = 0;
      if (ppiVar7 != &local_58) {
        piVar8 = *ppiVar7;
        *ppiVar7 = local_58;
        local_58 = (int *)0x0;
        FUN_14585d45a(ppiVar7,piVar8);
      }
      FUN_14585d45a(&local_58,local_58);
    }
    else {
      cVar5 = FUN_147bce7ea(lVar1,param_2);
      if (cVar5 == '\0') {
        FUN_146efe122(lVar1,param_2);
      }
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143588108 FUN_143588108 body=310 status=ok
// SIG undefined FUN_143588108(void)

void FUN_143588108(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  *(byte *)(param_1 + 0x138) = *(byte *)(param_1 + 0x138) | 1;
  if ((**(longlong **)(param_1 + 0x13f0) == 0) || (*(int *)(param_1 + 0x134) == 1)) {
    return;
  }
  if ((*(int *)(param_1 + 0x134) != 4) && (DAT_14c7615d4 != '\0')) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    *puVar5 = FUN_146efe1bf;
    puVar5[1] = FUN_14359205d;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *(undefined4 *)(puVar5 + 2) = *param_2;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
    *(undefined4 *)(puVar5 + 3) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
    puVar5[4] = *(undefined8 *)(param_2 + 4);
    puVar5[5] = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined4 *)(puVar5 + 6) = param_2[8];
    *(undefined4 *)((longlong)puVar5 + 0x34) = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0;
    puVar5[7] = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 10) = 0;
    lVar1 = *(longlong *)(param_1 + 0x1d68);
    *(undefined8 **)(param_1 + 0x1d68) = puVar5 + 2;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    }
    *(undefined4 *)(param_1 + 0x134) = 4;
    lVar1 = *(longlong *)(param_1 + 0x58);
    *(double *)(param_1 + 0x510) = (double)*(float *)(lVar1 + 0xe4) + *(double *)(lVar1 + 0x300);
    if (*(longlong *)(lVar1 + 0x840) != 0) {
      *(undefined1 *)
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x840) + 0x28) + 0x848) + 0x20 +
       (longlong)*(int *)(param_1 + 0x1d2c) * 0x28) = 1;
    }
    FUN_14358823e(param_1);
    return;
  }
  FUN_143587ad8(param_1,param_2);
  return;
}



// FUNCTION 14358823e FUN_14358823e body=152 status=ok
// SIG undefined FUN_14358823e(void)

void FUN_14358823e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x134) != 4) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar6 = 0;
    bVar4 = DAT_14c950c29;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if ((plVar3 != (longlong *)0x0 & bVar4) == 1) {
        FUN_1456cec3c(plVar3);
LAB_143588285:
        cVar5 = (**(code **)(*plVar3 + 0x328))(plVar3);
        bVar4 = DAT_14c950c29;
        if (cVar5 == '\0') {
          return;
        }
      }
      else if (plVar3 != (longlong *)0x0) goto LAB_143588285;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  FUN_143587ad8(param_1,*(undefined8 *)(param_1 + 0x1d68));
  return;
}



// FUNCTION 1435882d6 FUN_1435882d6 body=360 status=ok
// SIG undefined FUN_1435882d6(void)

void FUN_1435882d6(longlong param_1,ulonglong *param_2)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x1d60) == '\0') {
    uVar3 = *param_2;
    iVar2 = (int)param_2[1];
    uVar6 = (uVar3 + (longlong)iVar2 * 2) - 2;
    uVar7 = uVar6 & 0xffffffffffffff00;
    if (uVar6 != uVar3 && iVar2 != 0) {
      bVar5 = true;
      uVar7 = 0;
      do {
        uVar1 = *(ushort *)(uVar3 + uVar7);
        if ((9 < (ushort)(uVar1 - 0x30)) && (0x19 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
          if ((uVar1 != 0x5f) && (uVar1 != 0x2c)) {
            bVar5 = false;
          }
          if ((uVar1 != 0x5f) && (uVar1 != 0x2c)) break;
        }
        uVar7 = uVar7 + 2;
      } while ((longlong)iVar2 * 2 - 2U != uVar7);
      if (!bVar5) goto LAB_143588421;
    }
    if ((*(longlong *)(param_1 + 0x58) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0xf0) == 0)) {
      plVar4 = &local_28;
      if (*(longlong *)(param_1 + 0x610) != 0) {
        plVar4 = (longlong *)(param_1 + 0x580);
      }
    }
    else {
      plVar4 = &local_28;
    }
    uStack_20 = 0;
    local_28 = 0;
    FUN_1403de9f2(param_2,plVar4,&DAT_149e06196,CONCAT71((int7)(uVar7 >> 8),1));
    if (0x7f < (int)plVar4[1]) {
      FUN_1447a1747(*plVar4);
      *(undefined4 *)(plVar4 + 1) = 0;
      if (*(int *)((longlong)plVar4 + 0xc) != 0) {
        FUN_1408be2c4(plVar4,0);
      }
    }
    *(undefined1 *)(param_1 + 0x1d60) = 1;
    FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
LAB_143588421:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143588440 FUN_143588440 body=101 status=ok
// SIG undefined FUN_143588440(void)

void FUN_143588440(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 == (longlong *)0x0) {
    if (*(int *)(param_1 + 0x1cc) < 3) {
      lVar2 = FUN_1411c1a08();
      FUN_147bd2fca(lVar2 + 0x30,param_1 + 0x160);
      return;
    }
  }
  else {
    if ((*(uint *)(plVar1 + 1) & 0x18000) == 0) {
      (**(code **)(*plVar1 + 0x3f8))(plVar1,param_1);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1435884d2 FUN_1435884d2 body=821 status=ok
// SIG undefined FUN_1435884d2(void)

void FUN_1435884d2(longlong *param_1,undefined **param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int *piVar8;
  bool bVar9;
  undefined1 auStack_178 [40];
  undefined **local_150;
  int local_148;
  int local_140;
  undefined ***local_138;
  undefined8 local_130;
  longlong *plStack_128;
  undefined2 local_118;
  int *local_110 [3];
  longlong *local_f8;
  longlong local_d8;
  longlong local_c0;
  longlong local_b0;
  longlong local_a8;
  undefined1 local_a0 [24];
  longlong local_88;
  longlong local_78;
  undefined1 local_70 [24];
  longlong local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(int *)(param_1 + 0xa1) = (int)param_1[0xa1] + 1;
  if (param_1[0x28] != 0) {
    local_138 = &local_150;
    local_118 = 0;
    local_110[0] = (int *)0x0;
    local_140 = param_3 * 8;
    local_130 = 0;
    plStack_128 = (longlong *)0x0;
    local_150 = param_2;
    local_148 = param_3;
    cVar4 = FUN_142b04d76();
    if (cVar4 == '\0') {
      param_3 = local_148;
      if (local_148 < 1) goto LAB_143588643;
      bVar9 = *(char *)(param_1[0x28] + 1) == '\x02';
      param_2 = local_150;
    }
    else {
      piVar8 = local_110[0];
      if (local_110[0] != (int *)0x0) {
        do {
          lVar2 = *(longlong *)(piVar8 + 4);
          lVar6 = FUN_1459b23c6();
          if ((lVar2 == lVar6) && (*piVar8 == 0x70)) goto LAB_1435885a7;
          piVar8 = *(int **)(piVar8 + 10);
        } while (piVar8 != (int *)0x0);
        if (param_1[0x3ab] != 0) {
          cVar4 = FUN_146efbfa6(param_1[0x3ab] + 0x60,local_110[0]);
          if (cVar4 != '\x02') goto LAB_143588643;
        }
      }
LAB_1435885a7:
      FUN_1459b235e(local_a0,0x1b);
      FUN_147a481b9(local_70,local_110,local_a0);
      FUN_143587ad8(param_1,local_70);
      if (local_48 != 0) {
        (**(code **)(local_48 + -0x10))(local_48 + -0x10);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        (**(code **)(local_78 + -0x10))(local_78 + -0x10);
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
LAB_143588643:
      bVar9 = false;
    }
    if (local_110[0] != (int *)0x0) {
      (**(code **)(local_110[0] + -4))(local_110[0] + -4);
    }
    plVar3 = plStack_128;
    if (plStack_128 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_128 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_128)(plStack_128);
        LOCK();
        piVar8 = (int *)((longlong)plVar3 + 0xc);
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar9) goto LAB_143588792;
  }
  iVar5 = (int)param_1[0x32] + param_3;
  *(int *)((longlong)param_1 + 0x4b4) = *(int *)((longlong)param_1 + 0x4b4) + iVar5;
  *(int *)((longlong)param_1 + 0x4bc) = *(int *)((longlong)param_1 + 0x4bc) + iVar5;
  *(int *)((longlong)param_1 + 0x4c4) = *(int *)((longlong)param_1 + 0x4c4) + 1;
  *(int *)((longlong)param_1 + 0x4cc) = *(int *)((longlong)param_1 + 0x4cc) + 1;
  *(int *)((longlong)param_1 + 0x4d4) = *(int *)((longlong)param_1 + 0x4d4) + 1;
  if (param_1[0xb] != 0) {
    piVar8 = (int *)(param_1[0xb] + 0x324);
    *piVar8 = *piVar8 + iVar5;
    *(int *)(param_1[0xb] + 0x328) = *(int *)(param_1[0xb] + 0x328) + iVar5;
    *(int *)(param_1[0xb] + 0x33c) = *(int *)(param_1[0xb] + 0x33c) + 1;
    *(int *)(param_1[0xb] + 0x344) = *(int *)(param_1[0xb] + 0x344) + 1;
  }
  if (param_3 < 1) {
    uVar7 = 0x1d;
  }
  else {
    cVar4 = *(char *)((longlong)param_2 + (ulonglong)(param_3 - 1));
    if (cVar4 != '\0') {
      param_3 = param_3 << 3;
      do {
        param_3 = param_3 + -1;
        bVar9 = -1 < cVar4;
        cVar4 = cVar4 * '\x02';
      } while (bVar9);
      FUN_144a99d0c(&local_150,param_2,(longlong)param_3);
      FUN_143588808(param_1,&local_150);
      if (local_a8 < local_b0) {
        (**(code **)(*param_1 + 0x3a0))(param_1,&local_150,0,1);
        FUN_1402a434a(param_1,0);
      }
      local_150 = &PTR_FUN_149e37220;
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      local_150 = &PTR__purecall_149e35f70;
      if (local_f8 != (longlong *)0x0) {
        if (*local_f8 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_f8);
      }
      if (local_d8 != 0) {
        if (*(longlong *)(local_d8 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_d8);
      }
      goto LAB_143588792;
    }
    uVar7 = 0x1c;
  }
  FUN_147bcc42a(param_1,uVar7);
LAB_143588792:
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143588808 FUN_143588808 body=801 status=ok
// SIG undefined FUN_143588808(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143588808(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c873400 == -0x662bf3f &&
      ((DAT_14c8733f8 == 0 && DAT_14c8733f4 == 0) && DAT_14c8733fc == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c87e490) && (FUN_144b3d300(&DAT_14c87e490), DAT_14c87e490 == -1)) {
      FUN_1446f470e(&local_38,L"Unused custom version",1);
      _DAT_14c87e468 = 0;
      uRam000000014c87e46c = 0;
      uRam000000014c87e470 = 0;
      uRam000000014c87e474 = 0xf99d40c1;
      _DAT_14c87e478 = 0x100000000;
      _DAT_14c87e480 = 0;
      DAT_14c87e488 = local_38;
      _Init_thread_footer(&DAT_14c87e490);
    }
    piVar3 = (int *)&DAT_14c87e468;
LAB_1435888a1:
    iVar1 = piVar3[4];
  }
  else {
    iVar1 = 0;
    if ((longlong)*(int *)(param_1 + 0x1440) != 0) {
      piVar3 = *(int **)(param_1 + 0x1438);
      lVar4 = (longlong)*(int *)(param_1 + 0x1440) * 0x28;
      do {
        if ((((*piVar3 == DAT_14c8733f4) && (piVar3[1] == DAT_14c8733f8)) &&
            (piVar3[2] == DAT_14c8733fc)) && (piVar3[3] == DAT_14c873400)) {
          if (piVar3 != (int *)0x0) goto LAB_1435888a1;
          break;
        }
        piVar3 = piVar3 + 10;
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
    }
  }
  (**(code **)(*param_2 + 0x110))(param_2,iVar1);
  if (DAT_14c8733f0 == -0x662bf3f &&
      ((DAT_14c8733e8 == 0 && DAT_14c8733e4 == 0) && DAT_14c8733ec == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c87e490) && (FUN_144b3d300(&DAT_14c87e490), DAT_14c87e490 == -1)) {
      FUN_1446f470e(&local_38,L"Unused custom version",1);
      _DAT_14c87e468 = 0;
      uRam000000014c87e46c = 0;
      uRam000000014c87e470 = 0;
      uRam000000014c87e474 = 0xf99d40c1;
      _DAT_14c87e478 = 0x100000000;
      _DAT_14c87e480 = 0;
      DAT_14c87e488 = local_38;
      _Init_thread_footer(&DAT_14c87e490);
    }
    piVar3 = (int *)&DAT_14c87e468;
LAB_14358892a:
    iVar1 = piVar3[4];
  }
  else {
    iVar1 = 0;
    if ((longlong)*(int *)(param_1 + 0x1440) != 0) {
      piVar3 = *(int **)(param_1 + 0x1438);
      lVar4 = (longlong)*(int *)(param_1 + 0x1440) * 0x28;
      do {
        if (((*piVar3 == DAT_14c8733e4) && (piVar3[1] == DAT_14c8733e8)) &&
           ((piVar3[2] == DAT_14c8733ec && (piVar3[3] == DAT_14c8733f0)))) {
          if (piVar3 != (int *)0x0) goto LAB_14358892a;
          break;
        }
        piVar3 = piVar3 + 10;
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
    }
  }
  (**(code **)(*param_2 + 0x118))(param_2,iVar1);
  if ((longlong)*(int *)(param_1 + 0x1440) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1438);
    lVar4 = lVar2 + (longlong)*(int *)(param_1 + 0x1440) * 0x28;
    do {
      FUN_14278ffaa(lVar2,&local_40);
      FUN_1414dd3d2(param_2,lVar2,*(undefined4 *)(lVar2 + 0x10),local_40);
      lVar2 = lVar2 + 0x28;
    } while (lVar2 != lVar4);
  }
  (**(code **)(*param_2 + 0xf8))(param_2,*(undefined8 *)(param_1 + 0x14b0));
  (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(param_1 + 0x14b8));
  (**(code **)(*param_2 + 0x108))(param_2,param_1 + 0x14c0);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143588b2a FUN_143588b2a body=1640 status=ok
// SIG undefined FUN_143588b2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143588b2a(longlong *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  LARGE_INTEGER LVar3;
  char cVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auStack_a8 [40];
  LARGE_INTEGER local_80;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  longlong local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x271) = 0;
  lVar10 = DAT_14caf1c70;
  lVar8 = param_1[0xd8];
  if (((lVar8 == 0) && ((int)param_1[0x393] == 0)) &&
     ((*(double *)(param_1[0xb] + 0x300) - (double)param_1[0x3e] <=
       (double)*(float *)(param_1[0xb] + 0xd8) ||
      (((*(byte *)((longlong)param_1 + 0xa4) & 2) != 0 || (*(int *)((longlong)param_1 + 0x134) == 1)
       ))))) goto LAB_14358908b;
  if (((*(byte *)((longlong)param_1 + 0xa4) & 2) == 0) &&
     ((*(longlong *)(param_1[0xb] + 0xf0) == 0 &&
      (*(int *)param_1[0x282] == *(int *)((longlong)param_1 + 0x1434))))) {
    iVar12 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (iVar12 == 0x40000002) {
      uVar9 = 0;
    }
    else {
      bVar14 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
        if (iVar12 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          bVar14 = DVar6 == DVar7;
        }
        else {
          bVar14 = false;
        }
      }
      uVar9 = (ulonglong)(bVar14 ^ 1);
    }
    if (*(int *)(lVar10 + uVar9 * 4) == 0) {
      lVar8 = param_1[0xd8];
      goto LAB_143588c5b;
    }
    FUN_1459b235e(local_70,0x2b);
    FUN_143587ad8(param_1,local_70);
    if (local_48 != 0) {
      (**(code **)(local_48 + -0x10))(local_48 + -0x10);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
LAB_143588c5b:
    plVar1 = param_1 + 0xc4;
    local_70[0] = 1;
    local_64 = 0;
    if (lVar8 == 0) {
      FUN_14358c3d2(param_1,0,0);
      lVar8 = param_1[0xd8];
      *(byte *)(param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x649) >> 1 & 1;
      iVar12 = -1;
      if (lVar8 < 1) {
        iVar12 = -0x135;
      }
      param_1[0x4b] = lVar8;
      if ((iVar12 - (int)lVar8) + (int)param_1[0xd9] == 0) {
        (**(code **)(*param_1 + 0x2f8))(param_1,0);
      }
      local_64 = CONCAT11(local_64._1_1_,1);
      param_1[0xab] = param_1[0xab] + 1;
    }
    QueryPerformanceCounter(&local_80);
    LVar3 = (LARGE_INTEGER)((double)local_80.QuadPart * DAT_14c83f420 + 16777216.0);
    FUN_1400748c2(plVar1,1);
    if ((*(byte *)((longlong)param_1 + 0xa4) & 2) == 0) {
      lVar8 = param_1[0xd8];
      param_1[0xd8] = 0;
      cVar4 = FUN_1402615e8(param_1 + 0x347,plVar1,0 < lVar8);
      if ((0 < lVar8) && (param_1[0xd8] = lVar8, cVar4 != '\0')) {
        *(undefined4 *)(param_1 + 0x393) = 0;
      }
      if (*(char *)((longlong)param_1 + 0x229) != '\0') {
        lVar10 = param_1[0xd8];
        param_1[0xd8] = param_1[0x47];
        if (1000.0 <= ((double)LVar3 - (double)param_1[0x49]) * 1000.0) {
          uVar5 = 0x3ff;
        }
        else {
          auVar15._8_8_ = 0;
          auVar15._0_8_ = LVar3.QuadPart;
          auVar15 = roundpd(auVar15,auVar15,1);
          uVar5 = (uint)(longlong)(((double)LVar3 - auVar15._0_8_) * 1000.0) & 0x3ff;
        }
        local_80.s.LowPart = uVar5;
        (**(code **)(param_1[0xc4] + 0x180))(plVar1,&local_80,0x400);
        ((LARGE_INTEGER *)(param_1 + 0x49))->QuadPart = (LONGLONG)LVar3;
        cVar4 = (**(code **)(*(longlong *)param_1[0xb] + 0x3c0))();
        if (cVar4 == '\0') {
          cVar4 = 0 < *DAT_14caf1c28;
        }
        else {
          cVar4 = *(char *)((longlong)param_1 + 0x13e4);
        }
        FUN_1400748c2(plVar1,CONCAT71((int7)((ulonglong)lVar8 >> 8),cVar4) & 0xffffffff);
        if ((cVar4 != '\0') &&
           (cVar4 = (**(code **)(*(longlong *)param_1[0xb] + 0x3c0))(), cVar4 != '\0')) {
          lVar8 = (longlong)
                  ROUND((double)param_1[0x93] * 1000.0 + (double)param_1[0x93] * 1000.0 + -0.5) >> 1
          ;
          if (0xfe < lVar8) {
            lVar8 = 0xff;
          }
          local_80.s.LowPart._0_1_ = (char)lVar8;
          puVar2 = (ulonglong *)param_1[0xc5];
          if (puVar2[1] < *puVar2 + 1) {
            (**(code **)(*plVar1 + 0x170))(plVar1,&local_80,1);
          }
          else {
            *puVar2 = *puVar2 + 1;
          }
        }
        *(undefined1 *)(param_1 + 0x46) = 0;
        param_1[0x47] = 0;
        param_1[0xd8] = lVar10;
      }
    }
    (**(code **)(*param_1 + 0x2e0))(param_1);
    local_6c = (undefined4)param_1[0x25];
    local_68 = *(undefined4 *)((longlong)param_1 + 0x124);
    cVar4 = (**(code **)(*(longlong *)param_1[0xb] + 1000))();
    if (cVar4 != '\0') {
      (**(code **)(*param_1 + 0x2d8))(param_1,param_1[0xd6],(int)param_1[0xd8],local_70);
    }
    uVar11 = (ulonglong)*(uint *)((longlong)param_1 + 0x13dc);
    uVar9 = uVar11 & 0xff;
    *(uint *)((longlong)param_1 + uVar9 * 4 + 0xed8) = *(uint *)((longlong)param_1 + 0x13dc);
    ((LARGE_INTEGER *)(param_1 + uVar9 + 0xdb))->QuadPart = (LONGLONG)LVar3;
    iVar12 = (int)param_1[0x9c];
    iVar13 = iVar12 + 0x3ff;
    if (-1 < iVar12) {
      iVar13 = iVar12;
    }
    iVar12 = iVar13 >> 10;
    if (0xfe < iVar13 >> 10) {
      iVar12 = 0xff;
    }
    *(char *)((longlong)param_1 + uVar9 + 0x12d8) = (char)iVar12;
    if ((*(byte *)((longlong)param_1 + 0xa4) & 2) == 0) {
      local_80.s.LowPart._2_2_ = (short)param_1[0x38c];
      local_80.s.LowPart._0_2_ = *(undefined2 *)((longlong)param_1 + 0x1c8c);
      FUN_14022c4a6(param_1 + 0x347);
      param_1[0x38b] = 0;
      *(ushort *)((longlong)param_1 + 0x1c8c) =
           (short)*(undefined4 *)((longlong)param_1 + 0x1c8c) + 1U & 0x3fff;
      uVar11 = (ulonglong)*(uint *)((longlong)param_1 + 0x13dc);
    }
    FUN_143589193(param_1 + 0x342,uVar11);
    *(int *)(param_1 + 0x99) = (int)param_1[0x99] + 1;
    *(int *)(param_1 + 0x9a) = (int)param_1[0x9a] + 1;
    *(int *)(param_1 + 0x9b) = (int)param_1[0x9b] + 1;
    *(int *)(param_1[0xb] + 0x348) = *(int *)(param_1[0xb] + 0x348) + 1;
    *(int *)(param_1[0xb] + 0x350) = *(int *)(param_1[0xb] + 0x350) + 1;
    if (*(char *)((longlong)param_1 + 0x1d34) == '\0') {
      dVar16 = (*(double *)(param_1[0xb] + 0x300) - (double)param_1[0x3e]) * 1000.0;
      FUN_14278e8aa(param_1 + 0x2db,dVar16,dVar16);
    }
    param_1[0x3e] = *(longlong *)(param_1[0xb] + 0x300);
    iVar12 = (int)(param_1[0xd8] + 7U >> 3) + (int)param_1[0x32];
    if ((char)param_1[0x3bb] == '\x01') {
      local_78 = *(undefined4 *)((longlong)param_1 + 0x13dc);
      local_80 = LVar3;
      local_74 = iVar12;
      FUN_1435aa468(param_1 + 0x3af);
    }
    *(int *)((longlong)param_1 + 0x13dc) = *(int *)((longlong)param_1 + 0x13dc) + 1;
    if ((*(byte *)((longlong)param_1 + 0xa4) & 4) == 0) {
      lVar10 = (longlong)(int)param_1[0x40] + (longlong)(iVar12 * 8);
      lVar8 = -0x80000000;
      if (-0x80000000 < lVar10) {
        lVar8 = lVar10;
      }
      if (0x7ffffffe < lVar8) {
        lVar8 = 0x7fffffff;
      }
      if (((int)lVar10 != lVar10) && (*(char *)((longlong)param_1 + 0x1d49) == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0x1d49) = 1;
      }
      *(int *)(param_1 + 0x40) = (int)lVar8;
    }
    *(int *)(param_1 + 0x97) = (int)param_1[0x97] + iVar12;
    *(int *)(param_1 + 0x98) = (int)param_1[0x98] + iVar12;
    *(int *)(param_1[0xb] + 0x32c) = *(int *)(param_1[0xb] + 0x32c) + iVar12;
    *(int *)(param_1[0xb] + 0x330) = *(int *)(param_1[0xb] + 0x330) + iVar12;
    _DAT_14caf1db8 = _DAT_14caf1db8 + iVar12;
    if ((int)param_1[0x25] < 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = (ulonglong)(*(int *)((longlong)param_1 + 0x124) == 0);
    }
    param_1[0xaa] = param_1[0xaa] + uVar9;
    *(undefined1 *)((longlong)param_1 + 0x1d34) = 1;
  }
  (**(code **)(*param_1 + 0x2e8))(param_1);
LAB_14358908b:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143589193 FUN_143589193 body=82 status=ok
// SIG undefined FUN_143589193(void)

void FUN_143589193(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1[8] != param_2) {
    uVar1 = *param_1;
    if ((ulonglong)(longlong)(int)param_1[6] <= (ulonglong)(uVar1 - param_1[1])) {
      FUN_145946fd6(param_1,(ulonglong)(uVar1 - param_1[1]) + 1);
      uVar1 = *param_1;
    }
    *param_1 = uVar1 + 1;
    *(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)(uVar1 & param_1[2]) * 4) =
         param_2 | 0x80000000;
    param_1[8] = param_2;
  }
  return;
}



// FUNCTION 1435891e6 FUN_1435891e6 body=225 status=ok
// SIG undefined FUN_1435891e6(void)

void FUN_1435891e6(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  
  *(int *)(param_1 + 0x1d00) = *(int *)(param_1 + 0x1d00) + 1;
  *(int *)(param_1 + 0x1d0c) = *(int *)(param_1 + 0x1d0c) + 1;
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x2c8))();
  uVar4 = *(uint *)(param_1 + 0x1a14);
  if (*(uint *)(param_1 + 0x1a10) != uVar4) {
    uVar4 = uVar4 + 1;
    *(uint *)(param_1 + 0x1a14) = uVar4;
  }
  if (*(uint *)(param_1 + 0x1a10) != uVar4) {
    iVar5 = -1;
    do {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x1a20) +
                      (ulonglong)(*(uint *)(param_1 + 0x1a18) & uVar4) * 4);
      if ((longlong)iVar2 < 0) break;
      *(uint *)(param_1 + 0x1a14) = uVar4 + 1;
      if ((((iVar2 != iVar5) &&
           (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x13f0) + (longlong)iVar2 * 8),
           iVar5 = iVar2, plVar3 != (longlong *)0x0)) &&
          ((**(code **)(*plVar3 + 0x2d8))(plVar3,param_2), (int)plVar3[7] <= param_2)) &&
         (param_2 <= *(int *)((longlong)plVar3 + 0x3c))) {
        FUN_147a4769a(plVar3);
      }
      uVar4 = *(uint *)(param_1 + 0x1a14);
    } while (*(uint *)(param_1 + 0x1a10) != uVar4);
  }
  *(int *)(param_1 + 0x4f0) = *(int *)(param_1 + 0x4f0) + 1;
  *(int *)(param_1 + 0x4f8) = *(int *)(param_1 + 0x4f8) + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + 0x378);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + 0x380);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 1435892c8 FUN_1435892c8 body=4748 status=ok
// SIG undefined FUN_1435892c8(void)

void FUN_1435892c8(longlong *param_1,longlong *param_2,char param_3,char param_4)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong *puVar5;
  LARGE_INTEGER LVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined8 *puVar13;
  LARGE_INTEGER *pLVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  ushort uVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  undefined8 in_R10;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  longlong lVar30;
  bool bVar31;
  ulonglong uVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined1 auStack_1c8 [32];
  undefined2 *local_1a8;
  uint local_194;
  char local_18d;
  uint local_18c;
  int local_188;
  DWORD local_184;
  ulonglong local_180;
  int local_174;
  uint local_170;
  int local_16c;
  longlong local_168;
  longlong *local_160;
  ulonglong local_158;
  undefined2 local_14a;
  LARGE_INTEGER local_148;
  undefined4 local_140;
  longlong local_130;
  longlong local_120;
  ulonglong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  int local_f8;
  undefined4 local_f0;
  LARGE_INTEGER local_e0 [8];
  LARGE_INTEGER *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (param_1 == (longlong *)0x0) {
    uVar22 = 0;
    iVar29 = 0;
  }
  else {
    uVar22 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar22 < DAT_14c9647dc) {
      lVar24 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
    }
    else {
      lVar24 = 0;
    }
    iVar29 = *(int *)(lVar24 + 0x10);
    if (*(int *)(lVar24 + 0x10) == 0) {
      LOCK();
      iVar29 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar31 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar29;
      if (bVar31) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar29 = *(int *)(lVar24 + 0x10);
      bVar31 = iVar29 == 0;
      if (bVar31) {
        *(int *)(lVar24 + 0x10) = iVar10;
        iVar29 = 0;
      }
      UNLOCK();
      if (bVar31) {
        iVar29 = iVar10;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x3bc) = 1;
  (**(code **)(*param_1 + 0x2f0))(param_1);
  if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) goto LAB_143589931;
  lVar24 = param_2[0x15];
  local_18d = param_4;
  (**(code **)(*param_1 + 0x2e0))(param_1);
  QueryPerformanceCounter(local_e0);
  dVar8 = (double)local_e0[0].QuadPart * DAT_14c83f420 + 16777216.0;
  if (param_3 == '\0') {
    dVar33 = (dVar8 - (double)param_1[0x3c]) * 1000.0;
    FUN_14278e8aa(param_1 + 0x2db,dVar33,dVar33);
    param_1[0x3b] = *(longlong *)(param_1[0xb] + 0x300);
    param_1[0x3c] = (longlong)dVar8;
  }
  local_a0 = (LARGE_INTEGER *)0x0;
  local_98 = 0x800000000;
  iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
  if ((*(byte *)((longlong)param_1 + 0xa4) & 2) == 0) {
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_f0 = 0;
    local_188 = iVar29;
    local_16c = (int)param_1[0x27b];
    cVar9 = FUN_1402ec326(param_1 + 0x347,&local_118,param_2);
    if (cVar9 == '\0') {
      FUN_147bcc42a(param_1,0x1e);
      iVar29 = local_188;
    }
    else {
      uVar20 = CONCAT71((int7)((ulonglong)in_R10 >> 8),1);
      if (0xd < iVar10) {
        if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
          uVar28 = param_2[0x15];
          if ((longlong)uVar28 < param_2[0x14]) {
            bVar3 = *(byte *)(param_2[0x12] + (longlong)(int)(uVar28 >> 3));
            param_2[0x15] = uVar28 + 1;
            if ((bVar3 >> ((uint)uVar28 & 7) & 1) != 0) {
              local_148.QuadPart = local_148.QuadPart & 0xffffffff00000000;
              (**(code **)(*param_2 + 0x180))(param_2,&local_148,0x400);
              if ((param_3 == '\0') && (local_148.s.LowPart < 0x3ff)) {
                auVar35._8_8_ = 0;
                auVar35._0_8_ = param_1[0x3c];
                auVar35 = roundpd(auVar35,auVar35,1);
                iVar18 = (int)(longlong)(((double)param_1[0x3c] - auVar35._0_8_) * 1000.0) -
                         local_148._0_4_;
                iVar29 = iVar18 + 1000;
                if (-1 < iVar18) {
                  iVar29 = iVar18;
                }
                iVar19 = iVar29 - (int)param_1[0x48];
                iVar18 = -iVar19;
                if (iVar18 < 0) {
                  iVar18 = iVar19;
                }
                *(float *)((longlong)param_1 + 0x54c) =
                     ((float)iVar18 - *(float *)((longlong)param_1 + 0x54c)) * 0.0625 +
                     *(float *)((longlong)param_1 + 0x54c);
                *(int *)(param_1 + 0x48) = iVar29;
              }
              uVar20 = CONCAT71((int7)(uVar20 >> 8),1);
              goto LAB_1435897a8;
            }
          }
          else {
            FUN_1405d09b8(param_2,1);
          }
        }
        uVar20 = 0;
      }
LAB_1435897a8:
      iVar29 = local_188;
      lVar21 = DAT_14caf1cd0;
      uVar23 = *(ushort *)((longlong)param_1 + 0x1c84);
      uVar27 = (local_f0 & 0xffff) - (uint)uVar23;
      if ((uVar27 >> 0xd & 1) == 0 && (ushort)local_f0 != uVar23) {
        uVar25 = (uint)*(ushort *)((longlong)param_1 + 0x1c8e);
        if (((((uint)local_f0._2_2_ - (uint)*(ushort *)((longlong)param_1 + 0x1c8e) >> 0xd & 1) == 0
             ) && ((ushort)*(int *)((longlong)param_1 + 0x1c8c) != local_f0._2_2_)) &&
           ((*(int *)((longlong)param_1 + 0x1c8c) - (uint)local_f0._2_2_ & 0x2000) == 0)) {
          uVar26 = uVar27 & 0x1fff;
          uVar28 = (ulonglong)uVar26;
          if (uVar26 != 0) {
            local_194 = (uint)uVar20;
            if (((char)param_1[0x3a5] == '\0') && ((char)param_1[0x399] != '\0')) {
              if (*(int *)((longlong)param_1 + 0x1cd4) == 0) {
                iVar29 = *(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0xc60);
                if (iVar29 == 0x40000002) {
                  uVar32 = 0;
                }
                else {
                  bVar31 = true;
                  if ((DAT_14c86a9f8 == '\x01') && (iVar29 != 2)) {
                    if (iVar29 == 1) {
                      local_180 = uVar28;
                      local_184 = FUN_140ad26c0();
                      DVar11 = GetCurrentThreadId();
                      uVar20 = (ulonglong)local_194;
                      bVar31 = local_184 == DVar11;
                      uVar28 = local_180;
                    }
                    else {
                      bVar31 = false;
                    }
                  }
                  uVar32 = (ulonglong)(bVar31 ^ 1);
                }
                local_18c = (int)uVar28 - 1;
                if (((int)uVar28 != 1) && ((int)local_18c <= *(int *)(lVar21 + uVar32 * 4)))
                goto LAB_143589ca2;
                uVar23 = *(ushort *)((longlong)param_1 + 0x1c84);
                uVar25 = (uint)*(ushort *)((longlong)param_1 + 0x1c8e);
                uVar27 = (local_f0 & 0xffff) - (uint)uVar23;
              }
              else {
                local_18c = uVar26 - 1;
                if (0 < *(int *)((longlong)param_1 + 0x1cd4)) {
LAB_143589ca2:
                  iVar29 = local_188;
                  uVar27 = (int)param_1[0x398] - 1;
                  if ((int)local_18c < (int)uVar27) {
                    uVar27 = local_18c;
                  }
                  uVar25 = *(uint *)(param_1 + 0x39a);
                  if (0 < (int)uVar27) {
                    uVar27 = uVar27 + 1;
                    do {
                      uVar25 = uVar25 + 1 & *(uint *)(param_1 + 0x396);
                      uVar27 = uVar27 - 1;
                    } while (1 < uVar27);
                  }
                  lVar21 = param_1[0x397];
                  lVar30 = (longlong)(int)(uVar25 & *(uint *)(param_1 + 0x396));
                  if (*(longlong *)(lVar21 + lVar30 * 8) == 0) {
                    uVar16 = FUN_14001cc68(0xb0,0x10);
                    FUN_14626c74e(uVar16,param_2);
                    puVar13 = *(undefined8 **)(lVar21 + lVar30 * 8);
                    *(undefined8 *)(lVar21 + lVar30 * 8) = uVar16;
                    if (puVar13 != (undefined8 *)0x0) {
                      (**(code **)*puVar13)(puVar13,1);
                    }
                    *(int *)((longlong)param_1 + 0x1cd4) = *(int *)((longlong)param_1 + 0x1cd4) + 1;
                    *(int *)((longlong)param_1 + 0x1ca4) = *(int *)((longlong)param_1 + 0x1ca4) + 1;
                    param_1[0xad] = param_1[0xad] + 1;
                    *(int *)(param_1[0xb] + 0x8b0) = *(int *)(param_1[0xb] + 0x8b0) + 1;
                    *(longlong *)(*(longlong *)(lVar21 + lVar30 * 8) + 0xa8) = lVar24;
                  }
                  else {
                    *(int *)(param_1 + 0x395) = (int)param_1[0x395] + 1;
                    param_1[0xae] = param_1[0xae] + 1;
                    *(int *)(param_1[0xb] + 0x8b4) = *(int *)(param_1[0xb] + 0x8b4) + 1;
                  }
                  goto LAB_14358991f;
                }
              }
            }
            else {
              local_18c = uVar26 - 1;
            }
            cVar9 = (char)uVar20;
            if ((uVar27 >> 0xd & 1) == 0 && (ushort)local_f0 != uVar23) {
              local_180 = uVar28;
              if (((((local_f0._2_2_ - uVar25 >> 0xd & 1) == 0) &&
                   ((ushort)*(int *)((longlong)param_1 + 0x1c8c) != local_f0._2_2_)) &&
                  ((*(int *)((longlong)param_1 + 0x1c8c) - (uint)local_f0._2_2_ & 0x2000) == 0)) &&
                 (uVar27 = uVar27 & 0x1fff, uVar27 != 0)) {
                uVar23 = (ushort)local_f0;
                if (local_f0._2_2_ != (ushort)uVar25) {
                  uVar25 = local_f0._2_2_ - uVar25 & 0x1fff;
                  local_174 = iVar10;
                  FUN_1435a35ee(param_1 + 0x347,&local_14a);
                  if ((local_14a != (ushort)(int)param_1[0x391]) &&
                     (((uint)local_14a - (int)param_1[0x391] & 0x2000) == 0)) {
                    *(ushort *)(param_1 + 0x391) = local_14a;
                  }
                  uVar23 = *(ushort *)((longlong)param_1 + 0x1c8e);
                  cVar9 = (char)local_194;
                  DVar11 = uVar25;
                  for (; uVar23 = uVar23 + 1 & 0x3fff, local_f8 * 0x20 < (int)uVar25;
                      uVar25 = uVar25 - 1) {
                    *(int *)(param_1 + 0x392) = (int)param_1[0x392] + 1;
                    *(int *)((longlong)param_1 + 0x1c94) = *(int *)((longlong)param_1 + 0x1c94) + 1;
                    *(int *)(param_1[0xb] + 0x878) = *(int *)(param_1[0xb] + 0x878) + 1;
                    if (((ushort)(int)param_1[0x392] & 0x3fff) == uVar23) {
                      FUN_1435891e6(param_1);
                    }
                    else {
                      FUN_1459b235e(&local_148,0x20);
                      FUN_143587ad8(param_1,&local_148);
                      if (local_120 != 0) {
                        (**(code **)(local_120 + -0x10))(local_120 + -0x10);
                      }
                      if (local_130 != 0) {
                        FUN_1400020a8();
                      }
                    }
                    cVar9 = (char)local_194;
                    DVar11 = local_f8 * 0x20;
                  }
                  local_184 = DVar11;
                  if (0 < (int)DVar11) {
                    local_160 = param_1 + 0x39f;
                    local_170 = uVar27;
                    do {
                      local_158 = (ulonglong)local_184;
                      local_184 = local_184 - 1;
                      uVar27 = *(uint *)((longlong)&local_118 + (ulonglong)(local_184 >> 5) * 4);
                      *(int *)(param_1 + 0x392) = (int)param_1[0x392] + 1;
                      *(int *)((longlong)param_1 + 0x1c94) =
                           *(int *)((longlong)param_1 + 0x1c94) + 1;
                      *(int *)(param_1[0xb] + 0x878) = *(int *)(param_1[0xb] + 0x878) + 1;
                      iVar29 = (int)param_1[0x392];
                      if (((ushort)iVar29 & 0x3fff) == uVar23) {
                        if ((uVar27 >> (local_184 & 0x1f) & 1) == 0) {
                          FUN_1435891e6(param_1,iVar29);
                          goto LAB_143589f3e;
                        }
                        *(int *)(param_1 + 0x27c) = iVar29;
                        param_1[0x42] = *(longlong *)(param_1[0xb] + 0x300);
                        FUN_1435a3512(local_160,iVar29);
                        plVar15 = (longlong *)param_1[0xd];
                        if (plVar15 != (longlong *)0x0) {
                          (**(code **)(*plVar15 + 0x2d0))(plVar15,iVar29);
                        }
                        uVar27 = *(uint *)(param_1 + 0x342);
                        uVar25 = *(uint *)((longlong)param_1 + 0x1a14);
                        if (uVar27 != uVar25) {
                          uVar25 = uVar25 + 1;
                          *(uint *)((longlong)param_1 + 0x1a14) = uVar25;
                        }
                        cVar9 = (char)local_194;
                        if (uVar27 != uVar25) {
                          uVar20 = 0xffffffff;
                          uVar26 = local_194;
                          do {
                            cVar9 = (char)uVar26;
                            iVar10 = *(int *)(param_1[0x344] +
                                             (ulonglong)(*(uint *)(param_1 + 0x343) & uVar25) * 4);
                            uVar28 = (ulonglong)iVar10;
                            if ((longlong)uVar28 < 0) break;
                            uVar25 = uVar25 + 1;
                            *(uint *)((longlong)param_1 + 0x1a14) = uVar25;
                            if ((iVar10 != (int)uVar20) &&
                               (plVar15 = *(longlong **)(param_1[0x27e] + uVar28 * 8),
                               uVar20 = uVar28, plVar15 != (longlong *)0x0)) {
                              if (*(int *)((longlong)plVar15 + 0x3c) == iVar29) {
                                *(byte *)(plVar15 + 6) = *(byte *)(plVar15 + 6) | 1;
                              }
                              for (lVar24 = plVar15[0xb]; lVar24 != 0;
                                  lVar24 = *(longlong *)(lVar24 + 200)) {
                                if ((*(byte *)(lVar24 + 0xf4) & 2) != 0) {
                                  *(byte *)(plVar15 + 6) = *(byte *)(plVar15 + 6) & 0xfe;
                                }
                                if (*(int *)(lVar24 + 0xf0) == iVar29) {
                                  *(byte *)(lVar24 + 0xf4) = *(byte *)(lVar24 + 0xf4) | 1;
                                }
                              }
                              (**(code **)(*plVar15 + 0x2d0))(plVar15,iVar29);
                              cVar9 = FUN_1434a7c14(plVar15,&local_148);
                              if (cVar9 != '\0') {
                                uVar32 = local_148.QuadPart & 0xff;
                                lVar24 = (longlong)(int)local_98;
                                uVar27 = (int)local_98 + 1;
                                local_98 = CONCAT44(local_98._4_4_,uVar27);
                                if (local_98._4_4_ < uVar27) {
                                  local_168 = lVar24;
                                  FUN_145ae9d50(local_e0,lVar24);
                                  lVar24 = local_168;
                                }
                                pLVar14 = local_a0;
                                if (local_a0 == (LARGE_INTEGER *)0x0) {
                                  pLVar14 = local_e0;
                                }
                                pLVar14[lVar24].QuadPart = uVar32 << 0x20 | uVar28;
                              }
                              uVar27 = *(uint *)(param_1 + 0x342);
                              uVar25 = *(uint *)((longlong)param_1 + 0x1a14);
                              uVar26 = local_194;
                            }
                            cVar9 = (char)uVar26;
                            uVar20 = uVar20 & 0xffffffff;
                          } while (uVar27 != uVar25);
                        }
                      }
                      else {
                        FUN_1459b235e(&local_148,0x20);
                        FUN_143587ad8(param_1,&local_148);
                        if (local_120 != 0) {
                          (**(code **)(local_120 + -0x10))(local_120 + -0x10);
                        }
                        if (local_130 != 0) {
                          FUN_1400020a8();
                        }
LAB_143589f3e:
                        cVar9 = (char)local_194;
                      }
                      uVar23 = uVar23 + 1 & 0x3fff;
                      uVar27 = local_170;
                    } while (1 < (uint)local_158);
                  }
                  uVar25 = (uint)local_f0._2_2_;
                  *(ushort *)((longlong)param_1 + 0x1c8e) = local_f0._2_2_;
                  if ((local_f0._2_2_ != *(ushort *)((longlong)param_1 + 0x1c8a)) &&
                     ((local_f0._2_2_ - *(ushort *)((longlong)param_1 + 0x1c8a) & 0x2000) == 0)) {
                    *(ushort *)((longlong)param_1 + 0x1c8a) = local_f0._2_2_;
                  }
                  uVar23 = (ushort)local_f0;
                  iVar10 = local_174;
                }
                *(ushort *)((longlong)param_1 + 0x1c84) = uVar23;
                uVar28 = local_180;
              }
              else {
                uVar27 = 0;
              }
            }
            else {
              uVar27 = 0;
            }
            iVar29 = local_188;
            if ((*(ushort *)((longlong)param_1 + 0x1c8a) != (ushort)uVar25) &&
               ((*(ushort *)((longlong)param_1 + 0x1c8a) - uVar25 & 0x2000) == 0)) {
              *(int *)(param_1 + 0x393) = (int)param_1[0x393] + 1;
              *(uint *)(param_1 + 0x27b) = uVar27 + local_16c;
              goto LAB_14358991f;
            }
            *(int *)((longlong)param_1 + 0x4ec) = *(int *)((longlong)param_1 + 0x4ec) + local_18c;
            *(int *)((longlong)param_1 + 0x4f4) = *(int *)((longlong)param_1 + 0x4f4) + local_18c;
            *(int *)(param_1[0xb] + 0x36c) = *(int *)(param_1[0xb] + 0x36c) + local_18c;
            *(int *)(param_1[0xb] + 0x374) = *(int *)(param_1[0xb] + 0x374) + local_18c;
            *(int *)(param_1 + 0x27b) = (int)param_1[0x27b] + (int)uVar28;
            *(int *)(param_1 + 0x3a1) = (int)param_1[0x3a1] + 1;
            if (local_18c != 0) {
              if (0 < (int)DAT_14c76160c) {
                *(byte *)(param_1 + 0x39f) = *(byte *)(param_1 + 0x39f) | DAT_14c76160c <= local_18c
                ;
              }
              uVar27 = local_18c + *(int *)((longlong)param_1 + 0x1d04);
              if (uVar27 < *(uint *)((longlong)param_1 + 0x1d14)) {
                uVar27 = *(uint *)((longlong)param_1 + 0x1d14);
              }
              *(uint *)((longlong)param_1 + 0x1d14) = uVar27;
              cVar9 = (char)local_194;
            }
            if (cVar9 == '\0') {
              if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) goto LAB_143589595;
            }
            else {
              if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
                uVar20 = param_2[0x15];
                if (param_2[0x14] <= (longlong)uVar20) {
                  FUN_1405d09b8(param_2,1);
                  goto LAB_14358a0bc;
                }
                bVar31 = (*(byte *)(param_2[0x12] + (longlong)(int)(uVar20 >> 3)) >>
                          ((uint)uVar20 & 7) & 1) != 0;
                param_2[0x15] = uVar20 + 1;
              }
              else {
LAB_14358a0bc:
                bVar31 = false;
              }
              cVar9 = (**(code **)(*(longlong *)param_1[0xb] + 0x3c0))();
              if (cVar9 == '\0') {
                if (bVar31 == false) goto LAB_14358a118;
                local_148.QuadPart = local_148.QuadPart & 0xffffffffffffff00;
                puVar5 = (ulonglong *)param_2[1];
                pbVar1 = (byte *)*puVar5 + 1;
                if ((byte *)puVar5[1] < pbVar1) {
                  (**(code **)(*param_2 + 0x170))(param_2,&local_148,1);
                  uVar17 = local_148.s.LowPart._0_1_;
                }
                else {
                  uVar17 = *(byte *)*puVar5;
                  *puVar5 = (ulonglong)pbVar1;
                }
                dVar33 = (double)(byte)uVar17 / 1000.0;
              }
              else {
                *(bool *)((longlong)param_1 + 0x13e4) = bVar31;
LAB_14358a118:
                dVar33 = 0.0;
              }
              if (iVar10 < 0xe) {
                local_148.QuadPart = local_148.QuadPart & 0xffffffffffffff00;
                puVar5 = (ulonglong *)param_2[1];
                if (puVar5[1] < *puVar5 + 1) {
                  (**(code **)(*param_2 + 0x170))(param_2,&local_148,1);
                }
                else {
                  *puVar5 = *puVar5 + 1;
                }
              }
              if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
                uVar20 = (ulonglong)(*(uint *)(param_1 + 0x27c) & 0xff);
                if (*(uint *)((longlong)param_1 + uVar20 * 4 + 0xed8) == *(uint *)(param_1 + 0x27c))
                {
                  *(undefined4 *)((longlong)param_1 + uVar20 * 4 + 0xed8) = 0xffffffff;
                  lVar24 = DAT_14caf1c40;
                  dVar7 = 0.0;
                  if ((param_1[0x44] != 0) && (dVar7 = 0.0, param_1[0xb] != 0)) {
                    iVar10 = *(int *)(*(longlong *)
                                       ((longlong)ThreadLocalStoragePointer +
                                       (ulonglong)_tls_index * 8) + 0xc60);
                    if ((iVar10 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar10 == 2)))) {
                      uVar28 = 0;
                    }
                    else if (iVar10 == 1) {
                      DVar11 = FUN_140ad26c0();
                      DVar12 = GetCurrentThreadId();
                      uVar28 = (ulonglong)(DVar11 != DVar12);
                    }
                    else {
                      uVar28 = 1;
                    }
                    dVar7 = 0.0;
                    if (*(int *)(lVar24 + uVar28 * 4) != 0) {
                      if ((char)param_1[0x45] == '\x01') {
                        dVar7 = (double)param_1[0x44] / 10000000.0;
                      }
                      else {
                        plVar15 = (longlong *)(**(code **)(*(longlong *)param_1[0xb] + 0x3d0))();
                        dVar7 = 0.0;
                        if (plVar15 != (longlong *)0x0) {
                          dVar7 = (double)(**(code **)(*plVar15 + 0x100))(plVar15,param_1 + 0x44,0);
                        }
                      }
                    }
                  }
                  lVar24 = DAT_14caf1c28;
                  iVar10 = *(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0xc60);
                  if (((iVar10 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar10 == 2)) {
                    uVar28 = 0;
                  }
                  else if (iVar10 == 1) {
                    DVar11 = FUN_140ad26c0();
                    DVar12 = GetCurrentThreadId();
                    uVar28 = (ulonglong)(DVar11 != DVar12);
                  }
                  else {
                    uVar28 = 1;
                  }
                  uVar32 = -(ulonglong)(dVar7 != 0.0);
                  LVar6.QuadPart =
                       CONCAT44(~(uint)(uVar32 >> 0x20) & (uint)((ulonglong)DAT_14c866ff8 >> 0x20),
                                ~(uint)uVar32 & (uint)DAT_14c866ff8) | (ulonglong)dVar7 & uVar32;
                  dVar7 = (double)LVar6 - (double)param_1[uVar20 + 0xdb];
                  dVar34 = 0.0;
                  if (*(int *)(lVar24 + uVar28 * 4) != 0) {
                    dVar34 = dVar33;
                  }
                  dVar34 = dVar7 - dVar34;
                  if (dVar34 <= 0.0) {
                    dVar34 = 0.0;
                  }
                  param_1[0x90] = (longlong)((double)param_1[0x90] + dVar34);
                  *(int *)(param_1 + 0x91) = (int)param_1[0x91] + 1;
                  plVar15 = (longlong *)param_1[6];
                  if (plVar15 != (longlong *)0x0) {
                    (**(code **)(*plVar15 + 0xdf0))(plVar15,(float)dVar34);
                  }
                  if (param_1[0x3ae] != 0) {
                    FUN_1435a3f32(param_1[0x3ae],1,LVar6.QuadPart,SUB84(dVar34,0));
                    uVar36 = SUB84(dVar7,0);
                    if (dVar7 <= 0.0) {
                      uVar36 = 0;
                    }
                    FUN_1435a3f32(param_1[0x3ae],2,LVar6.QuadPart,uVar36);
                  }
                  if ((char)param_1[0x3bb] == '\x01') {
                    local_140 = (undefined4)param_1[0x27c];
                    local_148.QuadPart = LVar6.QuadPart;
                    FUN_1435aa364(param_1 + 0x3af);
                    dVar33 = (double)param_1[0x3b5];
                    uVar20 = -(ulonglong)((double)param_1[0x3b8] < dVar33);
                    param_1[0x3b8] =
                         (ulonglong)((double)param_1[0x3b8] * 0.9 + dVar33 * 0.1) & uVar20 |
                         ~uVar20 & (ulonglong)dVar33;
                  }
                }
                goto LAB_143589595;
              }
            }
            FUN_147bcc42a(param_1,0x1f);
            goto LAB_14358991f;
          }
        }
      }
      *(int *)(param_1 + 0x394) = (int)param_1[0x394] + 1;
      param_1[0xac] = param_1[0xac] + 1;
      *(int *)(param_1[0xb] + 0x8ac) = *(int *)(param_1[0xb] + 0x8ac) + 1;
      lVar24 = DAT_14caf1ca0;
      if ((char)param_1[0x399] == '\0') {
        lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar10 = *(int *)(lVar21 + 0xc60);
        if (((iVar10 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar10 == 2)) {
          uVar20 = 0;
        }
        else if (iVar10 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          uVar20 = (ulonglong)(DVar11 != DVar12);
        }
        else {
          uVar20 = 1;
        }
        lVar30 = DAT_14caf1cb8;
        if (*(int *)(lVar24 + uVar20 * 4) != 0) {
          piVar2 = (int *)(lVar21 + 0xc60);
          iVar10 = *piVar2;
          if (((iVar10 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar10 == 2)) {
            uVar20 = 0;
          }
          else if (iVar10 == 1) {
            DVar11 = FUN_140ad26c0();
            DVar12 = GetCurrentThreadId();
            uVar20 = (ulonglong)(DVar11 != DVar12);
          }
          else {
            uVar20 = 1;
          }
          lVar24 = DAT_14caf1ce8;
          if (*(int *)(lVar30 + uVar20 * 4) <= (int)param_1[0x394]) {
            iVar10 = *piVar2;
            if (((iVar10 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar10 == 2)) {
              uVar20 = 0;
            }
            else if (iVar10 == 1) {
              DVar11 = FUN_140ad26c0();
              DVar12 = GetCurrentThreadId();
              uVar20 = (ulonglong)(DVar11 != DVar12);
            }
            else {
              uVar20 = 1;
            }
            iVar10 = *(int *)(lVar24 + uVar20 * 4);
            uVar20 = (ulonglong)(iVar10 + -1 + (uint)(iVar10 == 0)) * 2 + 1;
            lVar24 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            local_148.s.LowPart = 1 << ((byte)lVar24 & 0x1f);
            FUN_1461c87e8(param_1 + 0x396);
          }
        }
      }
    }
  }
  else {
    *(int *)(param_1 + 0x27b) = (int)param_1[0x27b] + 1;
LAB_143589595:
    (**(code **)(*(longlong *)param_1[0xb] + 0x408))();
    local_118 = local_118 & 0xffffffffffffff00;
    local_14a = (ushort)local_14a._1_1_ << 8;
    lVar24 = *(longlong *)(param_1[0xb] + 0xf0);
    lVar21 = param_1[0x3aa];
    if ((lVar21 != 0 && lVar24 == 0) && ((*(byte *)((longlong)param_1 + 0xa4) & 4) == 0)) {
      *(undefined2 *)(lVar21 + 0x60) = 1;
      *(double *)(lVar21 + 0x68) = dVar8;
      *(undefined1 *)(lVar21 + 0x71) = 1;
      *(undefined4 *)(lVar21 + 0x74) = 0;
      *(undefined1 *)(lVar21 + 0x1078) = 0;
      *(undefined8 *)(lVar21 + 0x10a0) = 0;
      *(undefined8 *)(lVar21 + 0x1080) = 0;
      *(undefined8 *)(lVar21 + 0x1088) = 0;
      *(undefined8 *)(lVar21 + 0x108c) = 0;
      *(undefined8 *)(lVar21 + 0x1094) = 0;
    }
    if (local_18d != '\0') {
      local_1a8 = &local_14a;
      (**(code **)(*param_1 + 0x3a8))(param_1,param_2,(int)param_1[0x27b],&local_118);
    }
    pLVar14 = local_e0;
    if (local_a0 != (LARGE_INTEGER *)0x0) {
      pLVar14 = local_a0;
    }
    lVar21 = (longlong)(int)local_98;
    if (lVar21 != 0) {
      lVar30 = 0;
      do {
        lVar4 = *(longlong *)(param_1[0x27e] + (longlong)*(int *)((longlong)pLVar14 + lVar30) * 8);
        if (lVar4 != 0) {
          FUN_140cef0f4(lVar4,0,*(undefined1 *)((longlong)pLVar14 + lVar30 + 4));
        }
        lVar30 = lVar30 + 8;
      } while (lVar21 * 8 != lVar30);
    }
    (**(code **)(*param_1 + 0x2e0))(param_1);
    QueryPerformanceCounter(&local_148);
    dVar8 = (double)local_148.QuadPart * DAT_14c83f420 + 16777216.0;
    lVar21 = param_1[0x3aa];
    if ((lVar21 != 0 && lVar24 == 0) && ((*(byte *)((longlong)param_1 + 0xa4) & 4) == 0)) {
      if (*(char *)(lVar21 + 0x61) == '\x01') {
        FUN_147be4b7c(lVar21,dVar8);
      }
      *(double *)(lVar21 + 0x1338) = dVar8;
      *(undefined2 *)(lVar21 + 0x60) = 0;
      *(undefined8 *)(lVar21 + 0x68) = 0;
    }
    if ((char)local_118 == '\0') {
      param_1[0x3d] = (longlong)dVar8;
      if ((*(byte *)((longlong)param_1 + 0xa4) & 2) == 0) {
        FUN_1435a3656(param_1 + 0x347,*(ushort *)(param_1 + 0x27b) & 0x3fff,1);
        *(int *)((longlong)param_1 + 0x4fc) = *(int *)((longlong)param_1 + 0x4fc) + 1;
        *(int *)(param_1[0xb] + 0x3b0) = *(int *)(param_1[0xb] + 0x3b0) + 1;
        goto LAB_143589786;
      }
    }
    else if ((*(byte *)((longlong)param_1 + 0xa4) & 2) == 0) {
      FUN_1435a3656(param_1 + 0x347,*(ushort *)(param_1 + 0x27b) & 0x3fff,0);
LAB_143589786:
      *(undefined1 *)((longlong)param_1 + 0x271) = 1;
      *(int *)(param_1 + 0x393) = (int)param_1[0x393] + 1;
    }
  }
LAB_14358991f:
  if (local_a0 != (LARGE_INTEGER *)0x0) {
    FUN_1400020a8();
  }
LAB_143589931:
  *(undefined1 *)(param_1 + 0x3bc) = 0;
  if (((((*(char *)((longlong)param_1 + 0x1de1) == '\x01') && (iVar29 != 0)) && (-1 < (int)uVar22))
      && (((int)uVar22 < DAT_14c9647dc &&
          (puVar13 = (undefined8 *)
                     ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
          puVar13 != (undefined8 *)0x0)))) &&
     ((*(int *)(puVar13 + 2) == iVar29 && ((*(uint *)(puVar13 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar13 + 1) & 0x10200000) == 0) {
      plVar15 = (longlong *)*puVar13;
    }
    else {
      plVar15 = (longlong *)0x0;
    }
    (**(code **)(*plVar15 + 0x330))();
  }
  if ((local_90 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14358a556 FUN_14358a556 body=6935 status=ok
// SIG undefined FUN_14358a556(void)

void FUN_14358a556(longlong *param_1,longlong *param_2,int param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  int *piVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  byte bVar15;
  int iVar16;
  longlong lVar17;
  uint *puVar18;
  undefined8 uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined4 uVar24;
  bool bVar25;
  undefined1 auStack_388 [32];
  undefined4 local_368;
  undefined4 local_360;
  undefined4 local_358;
  undefined8 local_350;
  wchar_t *local_348;
  undefined1 *local_340;
  undefined1 *local_338;
  code **local_330;
  code *local_328;
  code *local_320;
  byte local_316;
  byte local_315;
  int local_314;
  longlong *local_310;
  longlong *local_308;
  longlong *local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  undefined1 *local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  longlong local_2c8;
  ulonglong local_2c0 [3];
  longlong local_2a8;
  longlong local_298;
  uint local_28c;
  undefined **local_288 [5];
  byte local_25f;
  longlong *local_230;
  longlong local_210;
  longlong local_1f8;
  longlong local_1d0;
  int local_1c8;
  uint local_1b0;
  ulonglong local_1ac;
  int local_1a4;
  undefined4 local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  byte local_184 [4];
  code *local_180;
  ulonglong *local_178;
  longlong local_168;
  longlong local_158;
  byte local_8c;
  ulonglong local_48;
  uint uVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_198 = 0;
  uStack_190 = 0;
  local_2c8 = ((longlong *)param_1[0xb])[0x1e];
  local_314 = param_3;
  local_2e8 = param_4;
  local_316 = (**(code **)(*(longlong *)param_1[0xb] + 0x408))();
  iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
  uVar21 = *(uint *)((longlong)param_1 + 0xa4);
  local_315 = iVar9 < 0x24;
  cVar6 = (**(code **)(*param_2 + 0x38))(param_2);
  if (cVar6 != '\0') {
LAB_14358bfc4:
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_315 = local_315 & (byte)((uVar21 & 2) >> 1);
  local_310 = param_1 + 0x315;
  local_2f0 = param_1 + 0x31c;
  local_2f8 = param_1 + 0x30b;
  local_2d0 = param_1 + 0x312;
  local_2e0 = param_1 + 0x327;
  local_308 = param_1 + 0x32a;
  local_300 = param_1 + 0x331;
  local_2d8 = param_1 + 0x32c;
  local_316 = local_316 << 2;
LAB_14358a670:
  if (*(int *)((longlong)param_1 + 0x134) != 1) {
    if (((iVar9 < 8) && ((*(uint *)((longlong)param_1 + 0xa4) & 2) != 0)) &&
       ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0)) {
      if (param_2[0x15] < param_2[0x14]) {
        param_2[0x15] = param_2[0x15] + 1;
      }
      else {
        FUN_1405d09b8(param_2,1);
      }
    }
    FUN_140215cb8(local_288,param_1,0,0);
    uVar4 = param_2[0x15];
    bVar8 = *(byte *)((longlong)param_2 + 0x29);
    if ((bVar8 & 2) == 0) {
      if (param_2[0x14] <= (longlong)uVar4) {
        FUN_1405d09b8(param_2,1);
        goto LAB_14358a779;
      }
      uVar3 = uVar4 + 1;
      bVar15 = *(byte *)(param_2[0x12] + (longlong)(int)(uVar4 >> 3));
      param_2[0x15] = uVar3;
      local_1c8 = local_314;
      if ((bVar15 >> ((uint)uVar4 & 7) & 1) == 0) goto LAB_14358a779;
      if ((longlong)uVar3 < param_2[0x14]) {
        bVar25 = (*(byte *)(param_2[0x12] + (longlong)(int)(uVar3 >> 3)) >> ((uint)uVar3 & 7) & 1)
                 != 0;
        param_2[0x15] = uVar4 + 2;
      }
      else {
        FUN_1405d09b8(param_2);
        bVar8 = *(byte *)((longlong)param_2 + 0x29);
        bVar25 = false;
      }
      bVar15 = (byte)local_1a0 & 0xfe | bVar25;
      local_1a0 = CONCAT31(local_1a0._1_3_,bVar15);
      if ((bVar8 & 2) != 0) goto LAB_14358a783;
      uVar3 = param_2[0x15];
      if ((longlong)uVar3 < param_2[0x14]) {
        bVar25 = (*(byte *)(param_2[0x12] + (longlong)(int)(uVar3 >> 3)) >> ((uint)uVar3 & 7) & 1)
                 != 0;
        param_2[0x15] = uVar3 + 1;
      }
      else {
        FUN_1405d09b8(param_2,1);
        bVar25 = false;
        bVar15 = (byte)local_1a0;
      }
    }
    else {
LAB_14358a779:
      bVar15 = (byte)local_1a0 & 0xfe;
      local_1c8 = local_314;
LAB_14358a783:
      bVar25 = false;
    }
    local_1a0 = CONCAT31(local_1a0._1_3_,bVar15 & 0xfd | bVar25 * '\x02');
    if (iVar9 < 7) {
      if ((bVar25 != false) && ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0)) {
        uVar3 = param_2[0x15];
        if ((longlong)uVar3 < param_2[0x14]) {
          bVar8 = *(byte *)(param_2[0x12] + (longlong)(int)(uVar3 >> 3));
          param_2[0x15] = uVar3 + 1;
          uVar7 = (bVar8 >> ((uint)uVar3 & 7) & 1) != 0;
          goto LAB_14358a8a8;
        }
        FUN_1405d09b8(param_2);
      }
LAB_14358a8a6:
      uVar7 = 0;
    }
    else {
      if (bVar25 == false) goto LAB_14358a8a6;
      local_180 = (code *)((ulonglong)local_180 & 0xffffffff00000000);
      (**(code **)(*param_2 + 0x180))(param_2);
      uVar7 = local_180._0_1_;
    }
LAB_14358a8a8:
    local_1a0._0_3_ = CONCAT12(uVar7,(undefined2)local_1a0);
    bVar8 = *(byte *)((longlong)param_2 + 0x29);
    if ((bVar8 & 2) == 0) {
      uVar3 = param_2[0x15];
      if (param_2[0x14] <= (longlong)uVar3) {
        FUN_1405d09b8(param_2);
        bVar8 = *(byte *)((longlong)param_2 + 0x29);
        goto LAB_14358a909;
      }
      bVar25 = (*(byte *)(param_2[0x12] + (longlong)(int)(uVar3 >> 3)) >> ((uint)uVar3 & 7) & 1) !=
               0;
      param_2[0x15] = uVar3 + 1;
    }
    else {
LAB_14358a909:
      bVar25 = false;
    }
    bVar15 = (byte)local_1a0 & 0xfb | bVar25 << 2;
    if ((bVar8 & 2) == 0) {
      uVar3 = param_2[0x15];
      if ((longlong)uVar3 < param_2[0x14]) {
        bVar25 = (*(byte *)(param_2[0x12] + (longlong)(int)(uVar3 >> 3)) >> ((uint)uVar3 & 7) & 1)
                 != 0;
        param_2[0x15] = uVar3 + 1;
      }
      else {
        local_1a0._0_1_ = bVar15;
        FUN_1405d09b8(param_2,1);
        bVar25 = false;
        bVar15 = (byte)local_1a0;
      }
    }
    else {
      bVar25 = false;
    }
    local_1a0 = CONCAT31(local_1a0._1_3_,bVar15 & 0xf7 | bVar25 << 3);
    if (2 < iVar9) {
      (**(code **)(*param_2 + 0x188))(param_2,local_2c0);
      uVar21 = (uint)local_2c0[0];
      if ((uint)local_2c0[0] < *(uint *)(param_1 + 0x27f)) goto LAB_14358a9e3;
      uVar19 = 0x21;
      goto LAB_14358be37;
    }
    local_180 = (code *)((ulonglong)local_180 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x180))(param_2,&local_180);
    uVar21 = (uint)local_180;
LAB_14358a9e3:
    local_1b0 = uVar21;
    if ((((*(byte *)((longlong)param_1 + 0xa4) & 2) == 0) || (iVar9 < 0x10)) ||
       ((char)param_1[799] == '\0')) goto LAB_14358a9f3;
    if ((int)param_1[0x316] != *(int *)((longlong)param_1 + 0x18dc)) {
      plVar14 = (longlong *)param_1[0x31d];
      if ((longlong *)param_1[0x31d] == (longlong *)0x0) {
        plVar14 = local_2f0;
      }
      iVar16 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[0x31e] - 1U & uVar21) * 4);
      if (iVar16 != -1) {
        lVar12 = *local_310;
        iVar23 = iVar16;
        do {
          if (*(uint *)(lVar12 + (longlong)iVar23 * 0x10) == uVar21) goto LAB_14358ab09;
          iVar23 = *(int *)((longlong)iVar23 * 0x10 + lVar12 + 8);
        } while (iVar23 != -1);
      }
    }
    if ((*(longlong *)(param_1[0x27e] + (longlong)(int)uVar21 * 8) == 0) ||
       (((byte)local_1a0 & 0x30) == 0x10 || (local_1a0 & 1) == 0)) goto LAB_14358a9f3;
    lVar12 = param_2[0x15];
    bVar8 = *(byte *)((longlong)param_2 + 0x29);
    if ((bVar8 & 2) == 0) {
      if (lVar12 < param_2[0x14]) {
        param_2[0x15] = lVar12 + 1;
      }
      else {
        FUN_1405d09b8(param_2,1);
        bVar8 = *(byte *)((longlong)param_2 + 0x29);
      }
    }
    if ((bVar8 & 2) == 0) {
      if (param_2[0x15] < param_2[0x14]) {
        param_2[0x15] = param_2[0x15] + 1;
      }
      else {
        FUN_1405d09b8(param_2,1);
        bVar8 = *(byte *)((longlong)param_2 + 0x29);
      }
    }
    if ((bVar8 & 2) == 0) {
      uVar3 = param_2[0x15];
      if ((longlong)uVar3 < param_2[0x14]) {
        bVar15 = *(byte *)(param_2[0x12] + (longlong)(int)(uVar3 >> 3));
        param_2[0x15] = uVar3 + 1;
        if ((bVar15 >> ((uint)uVar3 & 7) & 1) != 0) {
          if ((longlong)(uVar3 + 1) < param_2[0x14]) {
            param_2[0x15] = uVar3 + 2;
          }
          else {
            FUN_1405d09b8(param_2,1);
            bVar8 = *(byte *)((longlong)param_2 + 0x29);
          }
          if ((bVar8 & 2) == 0 && local_315 == 0) {
            if (param_2[0x15] < param_2[0x14]) {
              param_2[0x15] = param_2[0x15] + 1;
            }
            else {
              FUN_1405d09b8(param_2,1);
              bVar8 = *(byte *)((longlong)param_2 + 0x29);
            }
          }
          if ((bVar8 & 2) == 0) {
            if (param_2[0x14] <= param_2[0x15]) goto LAB_14358b98f;
            param_2[0x15] = param_2[0x15] + 1;
          }
        }
      }
      else {
LAB_14358b98f:
        FUN_1405d09b8(param_2,1);
      }
    }
    local_2c0[0] = 0;
    FUN_14031d286(param_2,local_2c0);
    param_2[0x15] = lVar12;
    local_28c = FUN_14358c06e(param_1,local_2c0);
    if (local_28c != 0xffffffff) {
      local_180 = (code *)&local_1b0;
      local_178 = (ulonglong *)&local_28c;
      FUN_140263e2a(local_310,local_184,&local_180,0);
      local_1b0 = local_28c;
      goto LAB_14358a9f3;
    }
    goto LAB_14358ba34;
  }
  goto LAB_14358bfc4;
  while (iVar16 = *(int *)(lVar11 + 8), iVar16 != -1) {
LAB_14358ab09:
    lVar11 = lVar12 + (longlong)iVar16 * 0x10;
    if (*(uint *)(lVar12 + (longlong)iVar16 * 0x10) == uVar21) goto LAB_14358ab23;
  }
  lVar11 = 0;
LAB_14358ab23:
  local_1b0 = *(uint *)(lVar11 + 4);
LAB_14358a9f3:
  bVar8 = *(byte *)((longlong)param_2 + 0x29);
  if ((bVar8 & 2) == 0) {
    uVar3 = param_2[0x15];
    if (param_2[0x14] <= (longlong)uVar3) {
      FUN_1405d09b8(param_2,1);
      bVar8 = *(byte *)((longlong)param_2 + 0x29);
      goto LAB_14358ab3c;
    }
    bVar25 = (*(byte *)(param_2[0x12] + (longlong)(int)(uVar3 >> 3)) >> ((uint)uVar3 & 7) & 1) != 0;
    param_2[0x15] = uVar3 + 1;
  }
  else {
LAB_14358ab3c:
    bVar25 = false;
  }
  local_1a0 = CONCAT31(local_1a0._1_3_,(byte)local_1a0 & 0x7f | bVar25 << 7);
  if ((bVar8 & 2) == 0) {
    uVar3 = param_2[0x15];
    if (param_2[0x14] <= (longlong)uVar3) {
      FUN_1405d09b8(param_2,1);
      bVar8 = *(byte *)((longlong)param_2 + 0x29);
      goto LAB_14358aba9;
    }
    bVar25 = (*(byte *)(param_2[0x12] + (longlong)(int)(uVar3 >> 3)) >> ((uint)uVar3 & 7) & 1) != 0;
    param_2[0x15] = uVar3 + 1;
  }
  else {
LAB_14358aba9:
    bVar25 = false;
  }
  local_1a0._0_2_ = CONCAT11(local_1a0._1_1_ & 0xfe | bVar25,(byte)local_1a0);
  if ((bVar8 & 2) == 0) {
    uVar3 = param_2[0x15];
    if (param_2[0x14] <= (longlong)uVar3) {
      FUN_1405d09b8(param_2,1);
      goto LAB_14358ac0b;
    }
    bVar25 = (*(byte *)(param_2[0x12] + (longlong)(int)(uVar3 >> 3)) >> ((uint)uVar3 & 7) & 1) != 0;
    param_2[0x15] = uVar3 + 1;
  }
  else {
LAB_14358ac0b:
    bVar25 = false;
  }
  uVar22 = local_1a0;
  bVar8 = (byte)local_1a0 & 0xef | bVar25 << 4;
  uVar10 = (uint)bVar8;
  local_1a0 = CONCAT31(local_1a0._1_3_,bVar8);
  if ((uVar22 & 8) == 0) {
    if (bVar25 == false) {
      local_1a4 = 0;
    }
    else {
      local_1a4 = local_314;
    }
  }
  else {
    iVar16 = *(int *)(param_1[0x282] + (longlong)(int)local_1b0 * 4);
    if ((*(byte *)((longlong)param_1 + 0xa4) & 2) == 0) {
      local_180 = (code *)((ulonglong)local_180 & 0xffffffff00000000);
      (**(code **)(*param_2 + 0x180))(param_2,&local_180,0x400);
      local_1a4 = ((int)(((uint)local_180 - iVar16) * 0x400000) >> 0x16) + iVar16;
      uVar10 = local_1a0 & 0xff;
    }
    else {
      local_1a4 = iVar16 + 1;
    }
  }
  bVar8 = (byte)uVar10;
  if ((uVar10 & 0x10) == 0) {
    uVar10 = uVar10 & 0xffffffcf;
    local_1a0 = CONCAT31(local_1a0._1_3_,(char)uVar10);
LAB_14358ad8b:
    bVar25 = false;
  }
  else {
    bVar15 = 1;
    if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
      uVar3 = param_2[0x15];
      if (param_2[0x14] <= (longlong)uVar3) {
        FUN_1405d09b8(param_2);
        bVar15 = (byte)local_1a0 & 0x10;
        bVar8 = (byte)local_1a0;
        goto LAB_14358ad25;
      }
      bVar25 = (*(byte *)(param_2[0x12] + (longlong)(int)(uVar3 >> 3)) >> ((uint)uVar3 & 7) & 1) !=
               0;
      param_2[0x15] = uVar3 + 1;
    }
    else {
LAB_14358ad25:
      bVar25 = false;
    }
    bVar8 = bVar8 & 0xdf | bVar25 << 5;
    uVar10 = (uint)bVar8;
    local_1a0 = CONCAT31(local_1a0._1_3_,bVar8);
    if ((bVar15 == 0 || local_315 != 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0))
    goto LAB_14358ad8b;
    uVar3 = param_2[0x15];
    if ((longlong)uVar3 < param_2[0x14]) {
      bVar25 = (*(byte *)(param_2[0x12] + (longlong)(int)(uVar3 >> 3)) >> ((uint)uVar3 & 7) & 1) !=
               0;
      param_2[0x15] = uVar3 + 1;
    }
    else {
      FUN_1405d09b8(param_2,1);
      bVar25 = false;
      uVar10 = local_1a0 & 0xff;
    }
  }
  local_1a0._0_2_ = CONCAT11(local_1a0._1_1_ & 0xfd | bVar25 * '\x02',(byte)local_1a0);
  if (((uVar10 & 0x10) == 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) {
    bVar25 = false;
  }
  else {
    uVar3 = param_2[0x15];
    if ((longlong)uVar3 < param_2[0x14]) {
      bVar25 = (*(byte *)(param_2[0x12] + (longlong)(int)(uVar3 >> 3)) >> ((uint)uVar3 & 7) & 1) !=
               0;
      param_2[0x15] = uVar3 + 1;
    }
    else {
      FUN_1405d09b8(param_2,1);
      bVar25 = false;
      uVar10 = local_1a0 & 0xff;
    }
  }
  local_1a0 = CONCAT31(local_1a0._1_3_,(byte)uVar10 & 0xbf | bVar25 << 6);
  if (5 < iVar9) {
    if ((uVar10 & 9) == 0) {
      uVar10 = 0;
      goto LAB_14358aefc;
    }
    FUN_14031d286(param_2,&local_1ac);
    if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) goto LAB_14358af06;
    uVar19 = 0x22;
    goto LAB_14358bf51;
  }
  if ((uVar10 & 9) != 0) {
    local_180 = (code *)((ulonglong)local_180 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x180))(param_2,&local_180,8);
    if ((uint)local_180 == 4) {
      uVar10 = DAT_14c892f40;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
        uVar10 = DAT_14c892f40;
      }
    }
    else if ((uint)local_180 == 2) {
      uVar10 = DAT_14c892cd8;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
        uVar10 = DAT_14c892cd8;
      }
    }
    else {
      if ((uint)local_180 != 1) goto LAB_14358af06;
      uVar10 = DAT_14c892f3c;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
        uVar10 = DAT_14c892f3c;
      }
    }
LAB_14358aefc:
    local_1ac = (ulonglong)uVar10;
  }
LAB_14358af06:
  plVar14 = *(longlong **)(param_1[0x27e] + (longlong)(int)local_1b0 * 8);
  if (((plVar14 == (longlong *)0x0) || (local_1ac == 0)) || (local_1ac == plVar14[8])) {
    local_180 = (code *)((ulonglong)local_180 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x180))(param_2,&local_180,(int)param_1[0x14] << 3);
    if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
      iVar16 = (uint)local_180;
      lVar12 = param_2[0x15];
      FUN_1400ec332(local_288);
      if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
        if ((char)(byte)local_1a0 < '\0') {
          cVar6 = (**(code **)(*(longlong *)param_1[0xb] + 0x3c0))();
          if (cVar6 != '\0') {
            uVar19 = 0x26;
            goto LAB_14358be37;
          }
          *(int *)(param_1[0xb] + 0x338) =
               *(int *)(param_1[0xb] + 0x338) + ((int)((iVar16 - (uint)uVar4) + (int)lVar12) >> 3);
          if ((*(byte *)((longlong)param_1 + 0xa4) & 2) == 0) goto LAB_14358b036;
          if (param_1[0xd] == 0) {
LAB_14358b027:
            lVar17 = 0;
          }
          else {
            lVar11 = FUN_1413dbcfa();
            lVar12 = param_1[0xd];
            if ((lVar12 == 0) || (lVar11 == 0)) goto LAB_14358b027;
            lVar5 = *(longlong *)(lVar12 + 0x10);
            lVar17 = 0;
            if (lVar5 != 0) {
              if (*(int *)(lVar5 + 0x38) < *(int *)(lVar11 + 0x38)) goto LAB_14358b027;
              lVar17 = lVar12;
              if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                  != lVar11 + 0x30) {
                lVar17 = 0;
              }
            }
          }
          FUN_1435af744(lVar17);
        }
LAB_14358b036:
        uVar4 = local_1ac;
        plVar13 = (longlong *)param_1[0x27e];
        if (plVar13[(int)local_1b0] == 0) {
          if (local_1b0 == 0) {
            if (DAT_14c87ead8 == '\0') {
              FUN_140024d3a(&DAT_14c87eb00);
              DAT_14c87ead8 = '\x01';
            }
            if (uVar4 == DAT_14c892f3c) goto LAB_14358b0cf;
            plVar13 = (longlong *)param_1[0x27e];
          }
          if (*plVar13 == 0) {
            uVar19 = 0x27;
            goto LAB_14358be37;
          }
          if (param_1[6] == 0) {
            lVar12 = (longlong)*(int *)(param_1[0xb] + 0x100);
            if (lVar12 != 0) {
              lVar11 = 0;
              do {
                if (*(longlong **)(*(longlong *)(param_1[0xb] + 0xf8) + lVar11) == param_1) {
                  uVar19 = 0x28;
                  goto LAB_14358be37;
                }
                lVar11 = lVar11 + 8;
              } while (lVar12 * 8 != lVar11);
            }
          }
        }
LAB_14358b0cf:
        uVar4 = local_1ac;
        if (((local_1b0 == 0) && (*(longlong *)param_1[0x27e] == 0)) && ((local_1a0 & 2) != 0)) {
          if (DAT_14c87ead8 == '\0') {
            FUN_140024d3a(&DAT_14c87eb00);
            DAT_14c87ead8 = '\x01';
          }
          if (uVar4 == DAT_14c892f3c) {
            uVar19 = 0x29;
            goto LAB_14358be37;
          }
        }
        uVar4 = local_1ac;
        if (((*(byte *)((longlong)param_1 + 0xa4) & 2) == 0) || ((char)param_1[799] != '\x01')) {
LAB_14358b273:
          if ((local_1a0 & 8) != 0) {
            if (local_1a4 <= *(int *)(param_1[0x282] + (longlong)(int)local_1b0 * 4))
            goto LAB_14358ba34;
            if (plVar14 == (longlong *)0x0) goto LAB_14358b426;
            goto LAB_14358b2c8;
          }
          if (plVar14 != (longlong *)0x0) goto LAB_14358b2c8;
LAB_14358b283:
          if (((byte)local_1a0 & ((byte)local_1a0 & 0x12) != 0) == 0) {
            *local_2e8 = 1;
            goto LAB_14358ba34;
          }
LAB_14358b426:
          if ((longlong)(int)uStack_190 != 0) {
            lVar12 = 0;
            do {
              if (*(uint *)(local_198 + lVar12) == local_1b0) goto LAB_14358ba34;
              lVar12 = lVar12 + 4;
            } while ((longlong)(int)uStack_190 * 4 != lVar12);
          }
          plVar14 = (longlong *)param_1[0xb];
          if ((int)plVar14[0x44] == *(int *)((longlong)plVar14 + 0x24c)) {
LAB_14358be15:
            uVar19 = 0x2a;
            goto LAB_14358be37;
          }
          uVar21 = (uint)(local_1ac >> 0x10);
          uVar10 = (uint)local_1ac & 0xffff;
          plVar13 = plVar14 + 0x4a;
          if ((longlong *)plVar14[0x4b] != (longlong *)0x0) {
            plVar13 = (longlong *)plVar14[0x4b];
          }
          iVar16 = *(int *)((longlong)plVar13 +
                           (ulonglong)
                           ((int)plVar14[0x4c] - 1U &
                           (int)(local_1ac >> 0x20) + ((uint)local_1ac << 0x10 | uVar10) +
                           (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar10 >> 4)) * 4);
          if (iVar16 == -1) goto LAB_14358be15;
          while (*(ulonglong *)(plVar14[0x43] + (longlong)iVar16 * 0x80) != local_1ac) {
            iVar16 = *(int *)((longlong)iVar16 * 0x80 + plVar14[0x43] + 0x78);
            if (iVar16 == -1) goto LAB_14358be15;
          }
          cVar6 = (**(code **)(*plVar14 + 0x3c0))();
          uVar4 = local_1ac;
          if (cVar6 != '\0') {
            lVar12 = param_1[0xb];
            if (*(int *)(lVar12 + 0x220) != *(int *)(lVar12 + 0x24c)) {
              uVar21 = (uint)(local_1ac >> 0x10);
              uVar10 = (uint)local_1ac & 0xffff;
              lVar11 = lVar12 + 0x250;
              if (*(longlong *)(lVar12 + 600) != 0) {
                lVar11 = *(longlong *)(lVar12 + 600);
              }
              iVar16 = *(int *)(lVar11 + (ulonglong)
                                         (*(int *)(lVar12 + 0x260) - 1U &
                                         (int)(local_1ac >> 0x20) +
                                         ((uint)local_1ac << 0x10 | uVar10) +
                                         (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar10 >> 4)) * 4);
              if (iVar16 != -1) {
                do {
                  lVar11 = *(longlong *)(lVar12 + 0x218) + (longlong)iVar16 * 0x80;
                  if (*(ulonglong *)(*(longlong *)(lVar12 + 0x218) + (longlong)iVar16 * 0x80) ==
                      local_1ac) goto LAB_14358b5aa;
                  iVar16 = *(int *)(lVar11 + 0x78);
                } while (iVar16 != -1);
              }
            }
            lVar11 = 0;
LAB_14358b5aa:
            if ((*(byte *)(lVar11 + 0x24) & 4) == 0) {
              FUN_1449e3bb0(&local_198,&local_1b0);
              goto LAB_14358ba34;
            }
          }
          if (((*(byte *)((longlong)param_1 + 0xa4) & 2) != 0) && ((char)param_1[0x334] == '\x01'))
          {
            if (((byte)local_1a0 & 0x30) != 0x10 && (local_1a0 & 1) != 0) {
              if (DAT_14c87ead8 == '\0') {
                FUN_140024d3a(&DAT_14c87eb00);
                DAT_14c87ead8 = '\x01';
              }
              if (uVar4 == DAT_14c892cd8) {
                FUN_147bccbfc(&local_180,local_288);
                if (&DAT_00000001 < local_180) {
                  if ((int)param_1[0x321] != *(int *)((longlong)param_1 + 0x1934)) {
                    plVar14 = (longlong *)param_1[0x328];
                    if ((longlong *)param_1[0x328] == (longlong *)0x0) {
                      plVar14 = local_2e0;
                    }
                    iVar16 = *(int *)((longlong)plVar14 +
                                     (ulonglong)
                                     ((int)param_1[0x329] - 1U &
                                     (int)local_180 + (int)((ulonglong)local_180 >> 0x20) * 0x17) *
                                     4);
                    if (iVar16 != -1) {
                      do {
                        if (*(code **)(param_1[800] + (longlong)iVar16 * 0x10) == local_180) {
                          FUN_1447cbafe(local_308,local_2c0);
                          goto LAB_14358ba34;
                        }
                        iVar16 = *(int *)((longlong)iVar16 * 0x10 + param_1[800] + 8);
                      } while (iVar16 != -1);
                    }
                  }
                  if ((int)param_1[0x32b] != *(int *)((longlong)param_1 + 0x1984)) {
                    plVar14 = (longlong *)param_1[0x332];
                    if ((longlong *)param_1[0x332] == (longlong *)0x0) {
                      plVar14 = local_300;
                    }
                    puVar18 = (uint *)((longlong)plVar14 +
                                      ((longlong)(int)param_1[0x333] - 1U & (longlong)(int)local_1b0
                                      ) * 4);
                    do {
                      uVar21 = *puVar18;
                      lVar12 = (longlong)(int)uVar21;
                      if (lVar12 == -1) break;
                      puVar2 = (uint *)(*local_308 + lVar12 * 0xc);
                      uVar10 = *puVar2;
                      if (uVar10 == local_1b0) {
                        plVar14 = (longlong *)param_1[0x332];
                        if ((longlong *)param_1[0x332] == (longlong *)0x0) {
                          plVar14 = local_300;
                        }
                        uVar22 = *(uint *)((longlong)plVar14 + (longlong)(int)puVar2[2] * 4);
                        if (uVar22 == uVar21) {
                          puVar20 = (uint *)((longlong)plVar14 + (longlong)(int)puVar2[2] * 4);
                        }
                        else {
                          do {
                            puVar20 = (uint *)(*local_308 + (longlong)(int)uVar22 * 0xc + 4);
                            uVar22 = *puVar20;
                          } while (uVar22 != uVar21);
                        }
                        *puVar20 = puVar2[1];
                        lVar11 = param_1[0x32a];
                        if (*(int *)((longlong)param_1 + 0x1984) != 0) {
                          *(uint *)(lVar11 + (longlong)(int)param_1[0x330] * 0xc) = uVar21;
                        }
                        *(undefined4 *)(lVar11 + lVar12 * 0xc) = 0xffffffff;
                        uVar24 = 0xffffffff;
                        if (0 < *(int *)((longlong)param_1 + 0x1984)) {
                          uVar24 = (undefined4)param_1[0x330];
                        }
                        *(undefined4 *)(lVar11 + lVar12 * 0xc + 4) = uVar24;
                        *(uint *)(param_1 + 0x330) = uVar21;
                        *(int *)((longlong)param_1 + 0x1984) =
                             *(int *)((longlong)param_1 + 0x1984) + 1;
                        plVar14 = (longlong *)param_1[0x32e];
                        if ((longlong *)param_1[0x32e] == (longlong *)0x0) {
                          plVar14 = local_2d8;
                        }
                        uVar22 = uVar21 + 0x1f;
                        if (-1 < (int)uVar21) {
                          uVar22 = uVar21;
                        }
                        bVar8 = (byte)uVar21 & 0x1f;
                        puVar2 = (uint *)((longlong)plVar14 + (longlong)((int)uVar22 >> 5) * 4);
                        *puVar2 = *puVar2 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
                      }
                      else {
                        puVar18 = puVar2 + 1;
                      }
                    } while (uVar10 != local_1b0);
                  }
                }
                goto LAB_14358b68f;
              }
            }
            if ((int)param_1[0x32b] != *(int *)((longlong)param_1 + 0x1984)) {
              plVar14 = (longlong *)param_1[0x332];
              if ((longlong *)param_1[0x332] == (longlong *)0x0) {
                plVar14 = local_300;
              }
              iVar16 = *(int *)((longlong)plVar14 +
                               (ulonglong)((int)param_1[0x333] - 1U & local_1b0) * 4);
              if (iVar16 != -1) {
                do {
                  if (*(uint *)(*local_308 + (longlong)iVar16 * 0xc) == local_1b0)
                  goto LAB_14358ba34;
                  iVar16 = *(int *)(*local_308 + (longlong)iVar16 * 0xc + 4);
                } while (iVar16 != -1);
              }
            }
          }
LAB_14358b68f:
          plVar14 = (longlong *)FUN_141364a4a(param_1,&local_1ac);
          plVar13 = *(longlong **)(param_1[0xb] + 0x2f8);
          if ((plVar13 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar13 + 0x10))(plVar13,plVar14), cVar6 == '\0')) {
            FUN_1449e3bb0(&local_198,&local_1b0);
            FUN_1449daf8c(&local_180,plVar14,1);
            local_8c = local_8c | 0x10;
            (**(code **)(*plVar14 + 0x308))(plVar14,local_2c0);
            (**(code **)(*param_1 + 0x2f8))(param_1,0);
            FUN_140cef0f4(plVar14,0);
            if (local_1b0 == 0) {
              *(undefined4 *)((longlong)param_1 + 0x134) = 1;
            }
            FUN_1449daebe(&local_180);
            goto LAB_14358ba34;
          }
          local_1a0._0_2_ = CONCAT11(local_1a0._1_1_ & 0xfb | local_316,(byte)local_1a0);
          local_184[0] = 0;
          if (plVar14 != (longlong *)0x0) goto LAB_14358b2e4;
          plVar14 = (longlong *)0x0;
          bVar25 = false;
        }
        else {
          if (0xf < iVar9) {
            if ((((byte)local_1a0 & 0x50) != 0x10 && (local_1a0 & 2) != 0) &&
               ((int)param_1[0x316] != *(int *)((longlong)param_1 + 0x18dc))) {
              plVar13 = (longlong *)param_1[0x31d];
              if ((longlong *)param_1[0x31d] == (longlong *)0x0) {
                plVar13 = local_2f0;
              }
              iVar16 = *(int *)((longlong)plVar13 +
                               (ulonglong)((int)param_1[0x31e] - 1U & uVar21) * 4);
              if (iVar16 != -1) {
                do {
                  if (*(uint *)(*local_310 + (longlong)iVar16 * 0x10) == uVar21) {
                    FUN_14573a2c8(local_310,uVar21);
                    break;
                  }
                  iVar16 = *(int *)((longlong)iVar16 * 0x10 + *local_310 + 8);
                } while (iVar16 != -1);
              }
            }
            goto LAB_14358b273;
          }
          if (plVar14 == (longlong *)0x0) {
            if ((local_1a0 & 8) != 0) {
              if (local_1a4 <= *(int *)(param_1[0x282] + (longlong)(int)local_1b0 * 4))
              goto LAB_14358ba34;
              goto LAB_14358b426;
            }
            goto LAB_14358b283;
          }
          if ((local_1a0 & 1) != 0) {
            if (DAT_14c87ead8 == '\0') {
              FUN_140024d3a(&DAT_14c87eb00);
              DAT_14c87ead8 = '\x01';
            }
            if (((uVar4 == DAT_14c892cd8) && (((byte)local_1a0 & 0x30) != 0x10)) &&
               (FUN_147bccbfc(local_2c0,local_288), (local_25f & 2) == 0)) {
              local_180 = (code *)&local_1b0;
              local_178 = local_2c0;
              FUN_147bd3bce(local_2f8,local_184);
            }
          }
          if ((int)param_1[0x30c] != *(int *)((longlong)param_1 + 0x188c)) {
            plVar13 = (longlong *)param_1[0x313];
            if ((longlong *)param_1[0x313] == (longlong *)0x0) {
              plVar13 = local_2d0;
            }
            iVar16 = *(int *)((longlong)plVar13 +
                             (ulonglong)((int)param_1[0x314] - 1U & local_1b0) * 4);
            if (iVar16 != -1) {
              lVar12 = *local_2f8;
              iVar23 = iVar16;
              do {
                if (*(uint *)(lVar12 + (longlong)iVar23 * 0x18) == local_1b0) {
                  if (((byte)local_1a0 & 0x50) == 0x10 || (local_1a0 & 2) == 0) goto LAB_14358ba34;
                  goto LAB_14358b869;
                }
                iVar23 = *(int *)(lVar12 + (longlong)iVar23 * 0x18 + 0x10);
              } while (iVar23 != -1);
              goto LAB_14358b273;
            }
          }
          if (((local_1a0 & 8) != 0) &&
             (local_1a4 <= *(int *)(param_1[0x282] + (longlong)(int)local_1b0 * 4)))
          goto LAB_14358ba34;
LAB_14358b2c8:
          local_1a0._0_2_ = CONCAT11(local_1a0._1_1_ & 0xfb | local_316,(byte)local_1a0);
LAB_14358b2e4:
          local_184[0] = 0;
          FUN_1434a7cdc(plVar14,local_288);
          bVar25 = true;
          if ((local_184[0] & 1) != 0) {
            *local_2e8 = 1;
          }
        }
        if (param_1[0xb] == 0) goto LAB_14358bf56;
        piVar1 = (int *)(param_1[0xb] + 0x354);
        *piVar1 = *piVar1 + 1;
        *(int *)(param_1[0xb] + 0x35c) = *(int *)(param_1[0xb] + 0x35c) + 1;
        *(int *)(param_1[0xb] + 0x368) =
             *(int *)(param_1[0xb] + 0x368) + (uint)((local_1a0 >> 3 & 1) != 0);
        if (((local_25f & 6) == 0) ||
           ((*param_5 = 1, local_2c8 != 0 && (*(longlong *)(param_1[0xb] + 0x840) == 0)))) {
          if (((*(byte *)((longlong)param_1 + 0xa4) & 2) != 0) &&
             ((bVar25 && (local_25f & 2) != 0 && ((*(ushort *)(plVar14 + 6) & 0x1001) == 0)))) {
            FUN_140cef0f4(plVar14,1);
          }
LAB_14358ba34:
          local_288[0] = &PTR_FUN_149e73df0;
          if (local_1d0 != 0) {
            (**(code **)(local_1d0 + -0x10))(local_1d0 + -0x10);
          }
          local_288[0] = &PTR_FUN_149e37220;
          if (local_1f8 != 0) {
            FUN_1400020a8();
          }
          plVar14 = local_230;
          local_288[0] = &PTR__purecall_149e35f70;
          if (local_230 != (longlong *)0x0) {
            if (*local_230 != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(plVar14);
          }
          lVar12 = local_210;
          if (local_210 != 0) {
            if (*(longlong *)(local_210 + 0x40) != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(lVar12);
          }
          cVar6 = (**(code **)(*param_2 + 0x38))(param_2);
          if (cVar6 != '\0') goto LAB_14358bfc4;
          goto LAB_14358a670;
        }
        FUN_1459b235e(local_2c0,0x2c);
        FUN_147a481b9(&local_180,&local_1d0,local_2c0);
        FUN_143587ad8(param_1,&local_180);
        if (local_158 != 0) {
          (**(code **)(local_158 + -0x10))(local_158 + -0x10);
        }
        if (local_168 != 0) {
          FUN_1400020a8();
        }
        if (local_298 != 0) {
          (**(code **)(local_298 + -0x10))(local_298 + -0x10);
        }
        goto LAB_14358be5f;
      }
      uVar19 = 0x25;
    }
    else {
      uVar19 = 0x24;
    }
LAB_14358bf51:
    FUN_147bcc42a(param_1,uVar19);
  }
  else {
    uVar19 = 0x23;
LAB_14358be37:
    FUN_1459b235e(&local_180,uVar19);
    FUN_143587ad8(param_1,&local_180);
    local_2a8 = local_168;
    if (local_158 != 0) {
      (**(code **)(local_158 + -0x10))(local_158 + -0x10);
      local_2a8 = local_168;
    }
LAB_14358be5f:
    if (local_2a8 != 0) {
      FUN_1400020a8();
    }
  }
LAB_14358bf56:
  local_288[0] = &PTR_FUN_149e73df0;
  if (local_1d0 != 0) {
    (**(code **)(local_1d0 + -0x10))(local_1d0 + -0x10);
  }
  local_288[0] = &PTR_FUN_149e37220;
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  local_288[0] = &PTR__purecall_149e35f70;
  if (local_230 != (longlong *)0x0) {
    if (*local_230 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_230);
  }
  if (local_210 != 0) {
    if (*(longlong *)(local_210 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_210);
  }
  goto LAB_14358bfc4;
  while (iVar16 = *(int *)(lVar12 + (longlong)iVar16 * 0x18 + 0x10), iVar16 != -1) {
LAB_14358b869:
    if (*(uint *)(lVar12 + (longlong)iVar16 * 0x18) == local_1b0) goto LAB_14358b887;
  }
  iVar16 = -1;
LAB_14358b887:
  local_2c0[0] = *(ulonglong *)(lVar12 + 8 + (longlong)iVar16 * 0x18);
  FUN_147bd406a(local_2f8);
  if (((local_2c0[0] & 1) != 0) &&
     (lVar12 = FUN_140634914(*(undefined8 *)(param_1[0xb] + 0x1b8),local_2c0), lVar12 != 0)) {
    if (DAT_14cac9ca8 == 0) {
      local_180 = FUN_141030f22;
      local_320 = FUN_14081d0ea;
      local_328 = FUN_14081d0ea;
      local_338 = &LAB_1478c0a72;
      local_340 = &LAB_1417b2375;
      local_348 = L"Engine";
      local_350 = 0x1000000000;
      local_358 = 0x10000004;
      local_360 = 8;
      local_368 = 0x390;
      local_330 = &local_180;
      FUN_14081cfa3(L"/Script/Engine",L"Actor");
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      (**(code **)(*param_1 + 1000))(param_1,lVar12);
    }
  }
  goto LAB_14358ba34;
}



// FUNCTION 14358c06e FUN_14358c06e body=469 status=ok
// SIG undefined FUN_14358c06e(void)

ulonglong FUN_14358c06e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar8 = *(longlong *)(param_1 + 0x58);
  if (*(int *)(lVar8 + 0x220) != *(int *)(lVar8 + 0x24c)) {
    lVar2 = *param_2;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar7 = (uint)lVar2 & 0xffff;
    lVar5 = lVar8 + 0x250;
    if (*(longlong *)(lVar8 + 600) != 0) {
      lVar5 = *(longlong *)(lVar8 + 600);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar8 + 0x260) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar5 = *(longlong *)(lVar8 + 0x218) + (longlong)iVar6 * 0x80;
        if (*(longlong *)(*(longlong *)(lVar8 + 0x218) + (longlong)iVar6 * 0x80) == lVar2)
        goto LAB_14358c100;
        iVar6 = *(int *)(lVar5 + 0x78);
      } while (iVar6 != -1);
    }
  }
  lVar5 = 0;
LAB_14358c100:
  uVar4 = 1;
  if (*(uint *)(lVar5 + 0x20) != 0xffffffff) {
    uVar4 = (ulonglong)*(uint *)(lVar5 + 0x20);
  }
  uVar1 = *(uint *)(param_1 + 0x13f8);
  if ((int)uVar4 < (int)uVar1) {
    uVar4 = (ulonglong)(int)uVar4;
    do {
      uVar7 = (uint)uVar4;
      if ((*(char *)(param_1 + 0x19f9) == '\0') ||
         (*(int *)(param_1 + 0x19b0) == *(int *)(param_1 + 0x19dc))) {
LAB_14358c12e:
        bVar9 = false;
      }
      else {
        lVar8 = param_1 + 0x19e0;
        if (*(longlong *)(param_1 + 0x19e8) != 0) {
          lVar8 = *(longlong *)(param_1 + 0x19e8);
        }
        iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x19f0) - 1U & uVar7) * 4);
        if (iVar6 == -1) goto LAB_14358c12e;
        do {
          bVar9 = *(uint *)(*(longlong *)(param_1 + 0x19a8) + (longlong)iVar6 * 0xc) == uVar7;
          if (bVar9) break;
          iVar6 = *(int *)(*(longlong *)(param_1 + 0x19a8) + (longlong)iVar6 * 0xc + 4);
        } while (iVar6 != -1);
      }
      if (((&DAT_000018f8)[param_1] != '\0') &&
         (*(int *)(param_1 + 0x18b0) != *(int *)(param_1 + 0x18dc))) {
        lVar8 = param_1 + 0x18e0;
        if (*(longlong *)(param_1 + 0x18e8) != 0) {
          lVar8 = *(longlong *)(param_1 + 0x18e8);
        }
        iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x18f0) - 1U & uVar7) * 4);
        if (iVar6 != -1) {
          do {
            if (*(uint *)(*(longlong *)(param_1 + 0x18a8) + (longlong)iVar6 * 0x10) == uVar7)
            goto LAB_14358c152;
            iVar6 = *(int *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x18a8) + 8);
          } while (iVar6 != -1);
        }
      }
      if ((bool)(~bVar9 & *(longlong *)(*(longlong *)(param_1 + 0x13f0) + uVar4 * 8) == 0))
      goto LAB_14358c15b;
LAB_14358c152:
      uVar4 = uVar4 + 1;
    } while (uVar1 != (uint)uVar4);
    uVar4 = (ulonglong)uVar1;
  }
LAB_14358c15b:
  uVar3 = 0xffffffff;
  if ((uint)uVar4 != uVar1) {
    uVar3 = uVar4 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 14358c244 FUN_14358c244 body=397 status=ok
// SIG undefined FUN_14358c244(void)

void FUN_14358c244(longlong param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStack_68 [32];
  int *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (&DAT_000018f8)[param_1] = param_2;
  FUN_147bd40c2(param_1 + 0x1858);
  if (param_2 == '\0') {
    local_48 = (int *)0x0;
    uStack_40 = 0;
    FUN_140d170e0(param_1 + 0x18a8,&local_48);
    if ((longlong)(int)uStack_40 != 0) {
      piVar1 = local_48 + (int)uStack_40;
      piVar5 = local_48;
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x13f0) + (longlong)*piVar5 * 8);
        if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x30) & 0x20) != 0)) {
          lVar3 = FUN_1414cbbb6();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            if ((longlong)*(int *)(lVar4 + 0x100) != 0) {
              lVar3 = 0;
              do {
                lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0xf8) + lVar3);
                if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xe8) & 2) != 0)) {
                  FUN_140cef0f4(lVar4,CONCAT71((int7)((ulonglong)lVar3 >> 8),1),
                                CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0xea)
                                        ));
                  break;
                }
                lVar3 = lVar3 + 8;
              } while ((longlong)*(int *)(lVar4 + 0x100) * 8 != lVar3);
            }
            if (*(longlong *)(lVar4 + 0x68) == 0) {
              FUN_140cef0f4(lVar4,1,0);
            }
          }
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 != piVar1);
    }
    FUN_140d170e0(param_1 + 0x18a8,&local_48);
    piVar1 = local_48;
    lVar4 = (longlong)(int)uStack_40;
    if (lVar4 != 0) {
      lVar3 = 0;
      do {
        FUN_147bcccea(param_1,*(undefined4 *)((longlong)piVar1 + lVar3));
        lVar3 = lVar3 + 4;
      } while (lVar4 * 4 != lVar3);
    }
    if (local_48 != (int *)0x0) {
      FUN_1400020a8(local_48);
    }
  }
  FUN_1407058ce(param_1 + 0x18a8);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14358c3d2 FUN_14358c3d2 body=484 status=ok
// SIG undefined FUN_14358c3d2(void)

void FUN_14358c3d2(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 unaff_RBP;
  undefined7 uVar6;
  int iVar7;
  undefined1 auStack_58 [43];
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x2e0))();
  lVar4 = param_1[0xd8];
  iVar7 = -1;
  if (lVar4 < 1) {
    iVar7 = -0x135;
  }
  if (iVar7 + ((int)param_1[0xd9] - (int)lVar4) < param_2 + param_3) {
    (**(code **)(*param_1 + 0x2f8))(param_1,0);
    lVar4 = param_1[0xd8];
  }
  if ((lVar4 == 0) && ((*(byte *)((longlong)param_1 + 0xa4) & 2) == 0)) {
    plVar1 = param_1 + 0xc4;
    param_1[0xd8] = 0;
    FUN_1402615e8(param_1 + 0x347,plVar1,0);
    cVar3 = *(char *)((longlong)param_1 + 0x1d34);
    uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
    uVar5 = CONCAT71(uVar6,cVar3) & 0xffffffff ^ 1;
    FUN_1400748c2(plVar1,uVar5);
    if (cVar3 == '\0') {
      param_1[0x47] = param_1[0xd8];
      *(byte *)(param_1 + 0x46) = *(byte *)((longlong)param_1 + 0x649) >> 1 & 1;
      local_2c = 0;
      (**(code **)(param_1[0xc4] + 0x178))(plVar1,&local_2c,10);
      cVar3 = (**(code **)(*(longlong *)param_1[0xb] + 0x3c0))();
      if (cVar3 == '\0') {
        cVar3 = 0 < *DAT_14caf1c28;
      }
      else {
        cVar3 = *(char *)((longlong)param_1 + 0x13e4);
      }
      FUN_1400748c2(plVar1,CONCAT71(uVar6,cVar3) & 0xffffffff);
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(*(longlong *)param_1[0xb] + 0x3c0))();
        if (cVar3 != '\0') {
          local_2d = 0;
          puVar2 = (ulonglong *)param_1[0xc5];
          if (puVar2[1] < *puVar2 + 1) {
            (**(code **)(*plVar1 + 0x170))(plVar1,&local_2d,1);
          }
          else {
            *puVar2 = *puVar2 + 1;
          }
        }
      }
    }
    *(char *)((longlong)param_1 + 0x229) = (char)uVar5;
    *(undefined1 *)(param_1 + 0x4e) = 0;
    *(int *)(param_1 + 0x24) = (int)param_1[0x24] + 0xe;
    *(int *)(param_1 + 0x25) = (int)param_1[0xd8] + (int)param_1[0x25] + -0xe;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14358c5cc FUN_14358c5cc body=216 status=ok
// SIG undefined FUN_14358c5cc(void)

undefined4
FUN_14358c5cc(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
             int param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x649) >> 1 & 1;
  param_1[0x4b] = param_1[0xd8];
  if (param_3 != 0) {
    FUN_1401177fa(param_1 + 0xc4,param_2,(longlong)param_3);
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
  if (param_5 != 0) {
    FUN_1401177fa(param_1 + 0xc4,param_4,(longlong)param_5);
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
  if (param_6 == 1) {
    *(int *)((longlong)param_1 + 0x124) = *(int *)((longlong)param_1 + 0x124) + param_5 + param_3;
  }
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x13dc);
  iVar2 = -1;
  if (param_1[0xd8] < 1) {
    iVar2 = -0x135;
  }
  if (iVar2 + ((int)param_1[0xd9] - (int)param_1[0xd8]) == 0) {
    (**(code **)(*param_1 + 0x2f8))(param_1,0);
  }
  return uVar1;
}



// FUNCTION 14358c6a4 FUN_14358c6a4 body=816 status=ok
// SIG undefined FUN_14358c6a4(void)

undefined4 FUN_14358c6a4(longlong *param_1,longlong param_2,undefined1 param_3)

{
  uint uVar1;
  longlong *plVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined7 uVar11;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = param_2;
  (**(code **)(*param_1 + 0x2e0))();
  *(int *)(param_1[0xb] + 0x358) = *(int *)(param_1[0xb] + 0x358) + 1;
  *(int *)(param_1[0xb] + 0x360) = *(int *)(param_1[0xb] + 0x360) + 1;
  *(int *)(param_1[0xb] + 0x364) =
       *(int *)(param_1[0xb] + 0x364) + (uint)((*(uint *)(param_2 + 0xf4) >> 4 & 1) != 0);
  plVar2 = param_1 + 0x77;
  FUN_14493765a(plVar2);
  bVar3 = *(byte *)(param_2 + 0xf4);
  uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),(bVar3 & 6) != 0);
  FUN_1400748c2(plVar2,uVar8);
  bVar6 = *(byte *)(param_2 + 0xf4);
  uVar11 = (undefined7)((ulonglong)uVar8 >> 8);
  if ((bVar3 & 6) != 0) {
    uVar9 = CONCAT71(uVar11,bVar6 >> 1) & 0xffffffffffffff01;
    FUN_1400748c2(plVar2,uVar9);
    uVar9 = CONCAT71((int7)(uVar9 >> 8),*(byte *)(param_2 + 0xf4) >> 2) & 0xffffffffffffff01;
    FUN_1400748c2(plVar2,uVar9);
    bVar6 = *(byte *)(param_2 + 0xf4);
    uVar11 = (undefined7)(uVar9 >> 8);
    if ((bVar6 & 4) != 0) {
      puVar10 = &local_34;
      local_34 = (uint)*(byte *)(param_2 + 0xf6);
      FUN_14278fbf0(plVar2,puVar10,0xf);
      bVar6 = *(byte *)(param_2 + 0xf4);
      uVar11 = (undefined7)((ulonglong)puVar10 >> 8);
    }
  }
  uVar9 = CONCAT71(uVar11,bVar6 >> 3) & 0xffffffffffffff01;
  FUN_1400748c2(plVar2,uVar9);
  FUN_1400748c2(plVar2,CONCAT71((int7)(uVar9 >> 8),*(byte *)(param_2 + 0xf4) >> 4) &
                       0xffffffffffffff01);
  local_34 = *(uint *)(param_2 + 0xe0);
  puVar10 = &local_34;
  FUN_14031d518(plVar2);
  uVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),*(undefined1 *)(param_2 + 0xf5)) &
          0xffffffffffffff01;
  FUN_1400748c2(plVar2,uVar9);
  uVar9 = CONCAT71((int7)(uVar9 >> 8),*(byte *)(param_2 + 0xf5) >> 1) & 0xffffffffffffff01;
  FUN_1400748c2(plVar2,uVar9);
  uVar9 = CONCAT71((int7)(uVar9 >> 8),*(byte *)(param_2 + 0xf4) >> 5) & 0xffffffffffffff01;
  FUN_1400748c2(plVar2,uVar9);
  uVar9 = CONCAT71((int7)(uVar9 >> 8),*(byte *)(param_2 + 0xf4));
  if (((*(byte *)(param_2 + 0xf4) & 0x10) != 0) && ((*(byte *)((longlong)param_1 + 0xa4) & 2) == 0))
  {
    uVar9 = (ulonglong)*(uint *)(param_2 + 0xec);
    FUN_14278fd38(plVar2,uVar9,0x400);
    uVar9 = CONCAT71((int7)(uVar9 >> 8),*(undefined1 *)(param_2 + 0xf4));
  }
  if ((uVar9 & 0x20) != 0) {
    uVar9 = CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 >> 6) & 0xffffffffffffff01;
    FUN_1400748c2(plVar2,uVar9);
    FUN_1400748c2(plVar2,CONCAT71((int7)(uVar9 >> 8),*(byte *)(param_2 + 0xf5) >> 2) &
                         0xffffffffffffff01);
    FUN_1400748c2(plVar2,*(byte *)(param_2 + 0xf4) >> 7);
  }
  if ((bVar3 & 0x12) != 0) {
    FUN_14031d286(plVar2,param_2 + 0xe4);
  }
  FUN_14278fd38(plVar2,*(undefined4 *)(param_2 + 0xa0),(int)param_1[0x14] << 3);
  *(undefined1 *)(param_1 + 0x4e) = param_3;
  *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_1[0xb] + 0x300);
  lVar7 = param_1[0x8b];
  uVar4 = *(undefined4 *)(param_2 + 0xa0);
  FUN_14358c3d2(param_1,(int)lVar7,uVar4);
  *(undefined1 *)((longlong)param_1 + 0x271) = 1;
  local_40 = 1;
  local_48 = uVar4;
  uVar4 = FUN_14358c5cc(param_1,param_1[0x89],(int)lVar7,*(undefined8 *)(param_2 + 0x90));
  *(undefined4 *)(param_2 + 0xf0) = uVar4;
  uVar1 = *(uint *)(param_2 + 0xe0);
  puVar10 = (uint *)(param_1 + 0x342);
  FUN_143589193(puVar10,uVar4);
  uVar5 = *(uint *)(param_1 + 0x342);
  uVar9 = (ulonglong)(uVar5 - *(int *)((longlong)param_1 + 0x1a14));
  if ((ulonglong)(longlong)(int)param_1[0x345] <= uVar9) {
    FUN_145946fd6(puVar10,uVar9 + 1);
    uVar5 = *puVar10;
  }
  *(uint *)(param_1 + 0x342) = uVar5 + 1;
  *(uint *)(param_1[0x344] + (ulonglong)(uVar5 & *(uint *)(param_1 + 0x343)) * 4) =
       uVar1 & 0x7fffffff;
  plVar2 = (longlong *)param_1[0xd];
  bVar3 = *(byte *)(param_2 + 0xf5);
  if ((bVar3 & 5) != 0 && plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2d8))(plVar2,*(undefined4 *)(param_2 + 0xf0),param_2);
    bVar3 = *(byte *)(param_2 + 0xf5);
  }
  if ((bVar3 & 1) != 0) {
    *(int *)(param_1[0xb] + 0x334) =
         *(int *)(param_1[0xb] + 0x334) +
         (int)((ulonglong)(*(longlong *)(param_2 + 0xa0) + param_1[0x8b]) >> 3);
  }
  if ((char)param_1[0x3a9] == '\x01') {
    (**(code **)(*param_1 + 0x2f8))(param_1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined4 *)(param_2 + 0xf0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14358c9d6 FUN_14358c9d6 body=289 status=ok
// SIG undefined FUN_14358c9d6(void)

uint FUN_14358c9d6(longlong param_1)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(*(longlong *)(param_1 + 0x58) + 0xdc);
  if (*(int *)(param_1 + 0x134) == 2) goto LAB_14358ca2c;
  if ((*(byte *)(param_1 + 0x138) & 1) == 0) {
    if ((*(longlong **)(param_1 + 0x98) == (longlong *)0x0) ||
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 1000))(), cVar2 == '\0'))
    goto LAB_14358ca2c;
    if ((*(uint *)(param_1 + 0x138) & 1) == 0) {
      fVar5 = *(float *)(*(longlong *)(param_1 + 0x58) + 0xe0);
      goto LAB_14358ca2c;
    }
  }
  fVar5 = 2.0;
LAB_14358ca2c:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caf1dc0) && (FUN_144b3d300(&DAT_14caf1dc0), DAT_14caf1dc0 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14caf1dbc = FUN_14054d46e(&DAT_14c846b20,L"longtimeouts");
    _Init_thread_footer(&DAT_14caf1dc0);
  }
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x58) + 0xe8);
  uVar3 = -(uint)(0.0 < fVar1);
  fVar4 = fVar5;
  if ((DAT_14caf1dbc & 1) != 0) {
    fVar4 = fVar1 * fVar5;
  }
  return ~uVar3 & (uint)fVar5 | (uint)fVar4 & uVar3;
}



// FUNCTION 14358caf8 FUN_14358caf8 body=3533 status=ok
// SIG undefined FUN_14358caf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14358caf8(longlong *param_1)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  undefined4 uVar11;
  DWORD DVar12;
  DWORD DVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  undefined4 uVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  wchar_t *pwVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  uint uVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_168 [32];
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  LARGE_INTEGER local_128;
  int local_11c;
  longlong *local_118;
  uint *local_110;
  ulonglong local_108;
  LARGE_INTEGER local_100;
  int local_f8;
  LARGE_INTEGER local_f0 [3];
  longlong local_d8;
  longlong local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  (**(code **)(*param_1 + 0x2f0))();
  QueryPerformanceCounter(local_f0);
  dVar7 = (double)local_f0[0].QuadPart * DAT_14c83f420 + 16777216.0;
  dVar35 = (double)param_1[0x92];
  if ((dVar35 == 0.0) && (!NAN(dVar35))) {
    param_1[0x92] = (longlong)dVar7;
    param_1[0x3c] = (longlong)dVar7;
    param_1[0x3d] = (longlong)dVar7;
    dVar35 = dVar7;
  }
  param_1[0x93] = (longlong)(dVar7 - dVar35);
  iVar15 = *(int *)(param_1[0xb] + 0xc0);
  fVar33 = (float)(**(code **)(*DAT_14cb0d2b0 + 0x2f8))(DAT_14cb0d2b0,0,0);
  fVar34 = 3.4028235e+38;
  if (0 < iVar15) {
    fVar33 = (float)(-(uint)(fVar33 <= 0.0) & 0x7f7fffff | ~-(uint)(fVar33 <= 0.0) & (uint)fVar33);
    fVar34 = (float)iVar15;
  }
  fVar36 = fVar33;
  if (fVar34 <= fVar33) {
    fVar36 = fVar34;
  }
  fVar37 = fVar36;
  if (fVar36 <= 0.0) {
    fVar37 = 0.0;
  }
  if (((((*(uint *)((longlong)param_1 + 0xa4) & 2) != 0) || (fVar33 <= fVar34)) || (fVar36 <= 0.0))
     || ((double)(1.0 / fVar37) <= (double)param_1[0x93])) {
    param_1[0x92] = (longlong)dVar7;
    dVar35 = (double)param_1[0x93] + (double)param_1[0x94];
    param_1[0x94] = (longlong)dVar35;
    iVar15 = (int)param_1[0x96] + 1;
    *(int *)(param_1 + 0x96) = iVar15;
    if (1.0 < dVar35) {
      param_1[0x95] = (longlong)(dVar35 / (double)iVar15);
      param_1[0x94] = 0;
      *(undefined4 *)(param_1 + 0x96) = 0;
    }
    if ((*(uint *)((longlong)param_1 + 0xa4) & 2) != 0) {
      cVar10 = (**(code **)(*(longlong *)param_1[0xb] + 0x3c0))();
      *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)((longlong)param_1 + 0x13dc);
      param_1[0x3b] = *(longlong *)(param_1[0xb] + 0x300);
      QueryPerformanceCounter(local_f0);
      param_1[0x3c] = (longlong)((double)local_f0[0].QuadPart * DAT_14c83f420 + 16777216.0);
      QueryPerformanceCounter(local_f0);
      param_1[0x3d] = (longlong)((double)local_f0[0].QuadPart * DAT_14c83f420 + 16777216.0);
      uVar31 = *(uint *)(param_1 + 0x342);
      uVar24 = *(uint *)((longlong)param_1 + 0x1a14);
      if (uVar31 != uVar24) {
        uVar16 = 0xffffffff;
        do {
          uVar5 = *(uint *)(param_1[0x344] + (ulonglong)(*(uint *)(param_1 + 0x343) & uVar24) * 4);
          uVar24 = uVar24 + 1;
          *(uint *)((longlong)param_1 + 0x1a14) = uVar24;
          uVar25 = uVar5 & 0x7fffffff;
          if ((uVar25 != uVar16 && -1 < (int)uVar5) &&
             (lVar28 = *(longlong *)(param_1[0x27e] + (ulonglong)uVar25 * 8), uVar16 = uVar25,
             lVar28 != 0)) {
            for (lVar22 = *(longlong *)(lVar28 + 0x58); lVar22 != 0;
                lVar22 = *(longlong *)(lVar22 + 200)) {
              *(byte *)(lVar22 + 0xf4) = *(byte *)(lVar22 + 0xf4) | 1;
            }
            if ((*(uint *)(lVar28 + 0x30) >> 0xc & 1) != 0 || cVar10 != '\0') {
              *(uint *)(lVar28 + 0x30) = *(uint *)(lVar28 + 0x30) | 1;
            }
            FUN_147a4769a();
            uVar31 = *(uint *)(param_1 + 0x342);
            uVar24 = *(uint *)((longlong)param_1 + 0x1a14);
          }
        } while (uVar31 != uVar24);
      }
    }
    if ((double)*(float *)(param_1 + 0x8f) < dVar7 - (double)param_1[0x8e]) {
      fVar33 = (float)(dVar7 - (double)param_1[0x8e]);
      if ((int)param_1[0x91] != 0) {
        *(float *)((longlong)param_1 + 0x47c) =
             (float)((double)param_1[0x90] / (double)(int)param_1[0x91]);
      }
      *(int *)((longlong)param_1 + 0x4dc) =
           (int)((float)*(int *)((longlong)param_1 + 0x4b4) / fVar33);
      *(int *)(param_1 + 0x9c) = (int)((float)(int)param_1[0x97] / fVar33);
      *(int *)((longlong)param_1 + 0x4e4) =
           (int)((float)*(int *)((longlong)param_1 + 0x4c4) / fVar33);
      *(int *)(param_1 + 0x9d) = (int)((float)(int)param_1[0x99] / fVar33);
      uVar31 = *(uint *)(param_1 + 0xa9);
      iVar15 = *(int *)((longlong)param_1 + 0x4f4) + *(int *)((longlong)param_1 + 0x4d4);
      iVar20 = iVar15 - *(int *)((longlong)param_1 + 0x524);
      fVar33 = 0.0;
      if (iVar20 < 1) {
        fVar34 = 0.0;
      }
      else {
        fVar34 = (float)*(int *)((longlong)param_1 + 0x4ec) / (float)iVar20;
      }
      *(float *)(param_1 + 0xa5) = fVar34;
      uVar27 = (ulonglong)(uVar31 % 3);
      *(float *)((longlong)param_1 + uVar27 * 4 + 0x518) = fVar34;
      lVar28 = -0xc;
      do {
        fVar33 = fVar33 + *(float *)((longlong)param_1 + lVar28 + 0x524);
        lVar28 = lVar28 + 4;
      } while (lVar28 != 0);
      *(float *)((longlong)param_1 + 0x52c) = fVar33 / 3.0;
      *(int *)((longlong)param_1 + 0x524) = iVar15;
      iVar15 = *(int *)((longlong)param_1 + 0x1c94);
      iVar20 = iVar15 - *(int *)((longlong)param_1 + 0x53c);
      fVar33 = 0.0;
      if (iVar20 < 1) {
        fVar34 = 0.0;
      }
      else {
        fVar34 = (float)(int)param_1[0x9e] / (float)iVar20;
      }
      *(float *)(param_1 + 0xa8) = fVar34;
      *(float *)((longlong)param_1 + uVar27 * 4 + 0x530) = fVar34;
      lVar28 = -0xc;
      do {
        fVar33 = fVar33 + *(float *)((longlong)param_1 + lVar28 + 0x53c);
        lVar28 = lVar28 + 4;
      } while (lVar28 != 0);
      *(float *)((longlong)param_1 + 0x544) = fVar33 / 3.0;
      *(int *)((longlong)param_1 + 0x53c) = iVar15;
      param_1[0x90] = 0;
      param_1[0x8e] = (longlong)dVar7;
      *(undefined4 *)(param_1 + 0x91) = 0;
      *(undefined8 *)((longlong)param_1 + 0x4ec) = 0;
      *(undefined8 *)((longlong)param_1 + 0x4b4) = 0;
      *(undefined8 *)((longlong)param_1 + 0x4c4) = 0;
      *(uint *)(param_1 + 0xa9) = uVar31 + 1;
    }
    if (*(char *)((longlong)param_1 + 0x1c9d) == '\x01') {
      FUN_1459b235e(local_f0,0x2d);
      FUN_143587ad8(param_1,local_f0);
      if (local_c8 != 0) {
        (**(code **)(local_c8 + -0x10))(local_c8 + -0x10);
      }
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)((longlong)param_1 + 0x1c9d) = 0;
    }
    else {
      dVar35 = *(double *)(param_1[0xb] + 0x300);
      dVar2 = (double)param_1[0x3f];
      param_1[0x3f] = (longlong)dVar35;
      fVar33 = (float)(**(code **)(*param_1 + 0x3c0))(param_1);
      lVar28 = DAT_14caf1c58;
      dVar8 = (double)fVar33;
      if (*(int *)((longlong)param_1 + 0x134) == 4) {
        bVar32 = (double)param_1[0xa2] <= dVar35 && dVar35 != (double)param_1[0xa2];
      }
      else {
        bVar32 = false;
      }
      if ((dVar8 < dVar7 - (double)param_1[0x3c]) || (bVar32)) {
        pwVar26 = 
        L"UNetConnection::Tick: Connection closing during pending destroy, not all shutdown traffic may have been negotiated"
        ;
        if ((*(byte *)(param_1 + 0x27) & 1) == 0) {
          pwVar26 = L"UNetConnection::Tick: Connection TIMED OUT. Closing connection.";
        }
        QueryPerformanceCounter(local_f0);
        dVar9 = (double)local_f0[0].QuadPart * DAT_14c83f420 + 16777216.0;
        dVar3 = (double)param_1[0x3c];
        dVar4 = (double)param_1[0x3d];
        (**(code **)(*param_1 + 0x2d0))(param_1,&local_100);
        local_128 = local_100;
        if (local_f8 == 0) {
          local_128.QuadPart = (LONGLONG)&DAT_149dfb77a;
        }
        if (bVar32) {
          pwVar26 = 
          L"UNetConnection::Tick: Connection graceful close timed out, not all shutdown traffic was negotiated"
          ;
          dVar8 = (double)*(float *)(param_1[0xb] + 0xe4);
        }
        local_148 = dVar9 - dVar3;
        local_140 = dVar9 - dVar4;
        local_138 = dVar35;
        local_130 = dVar8;
        FUN_140002266(local_f0,
                      L"%s. Elapsed: %2.2f, Real: %2.2f, Good: %2.2f, DriverTime: %2.2f, Threshold: %2.2f, %s"
                      ,pwVar26,dVar35 - (double)param_1[0x3b]);
        if ((undefined2 *)local_100.QuadPart != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        QueryPerformanceCounter(&local_100);
        if ((double)*(float *)(DAT_14cb0d2b0 + 0x223) <
            ((double)local_100.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14caf1dc8) {
          QueryPerformanceCounter(&local_100);
          _DAT_14caf1dc8 = (double)local_100.QuadPart * DAT_14c83f420 + 16777216.0;
        }
        (**(code **)(*param_1 + 0x3f0))(param_1,local_f0);
        lVar28 = param_1[0xb];
        if (local_f0[0].QuadPart != 0) {
          FUN_1400020a8();
        }
        if (lVar28 == 0) goto LAB_14358d7c5;
      }
      else {
        iVar15 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         );
        if (iVar15 == 0x40000002) {
          uVar27 = 0;
        }
        else {
          bVar32 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar15 != 2)) {
            if (iVar15 == 1) {
              DVar12 = FUN_140ad26c0();
              DVar13 = GetCurrentThreadId();
              bVar32 = DVar12 == DVar13;
            }
            else {
              bVar32 = false;
            }
          }
          uVar27 = (ulonglong)(bVar32 ^ 1);
        }
        if (*(int *)(lVar28 + uVar27 * 4) == 0) {
          iVar15 = (int)param_1[0x2da];
          if (0 < (longlong)iVar15) {
            plVar6 = param_1 + 0x2d9;
            iVar20 = -iVar15;
            uVar27 = (longlong)iVar15;
            do {
              (**(code **)(**(longlong **)(*plVar6 + -8 + uVar27 * 8) + 0x2e0))();
              cVar10 = (**(code **)(**(longlong **)(*plVar6 + -8 + uVar27 * 8) + 0x2e8))();
              if (cVar10 != '\0') {
                uVar31 = *(uint *)(param_1 + 0x2da);
                if (uVar27 != uVar31) {
                  memmove((void *)(param_1[0x2d9] + uVar27 * 8 + -8),
                          (void *)(param_1[0x2d9] + uVar27 * 8),
                          (longlong)(int)(uVar31 + iVar20) << 3);
                  uVar31 = *(uint *)(param_1 + 0x2da);
                }
                *(uint *)(param_1 + 0x2da) = uVar31 - 1;
                FUN_1408e7dfe(plVar6);
              }
              iVar20 = iVar20 + 1;
              bVar32 = 1 < uVar27;
              uVar27 = uVar27 - 1;
            } while (bVar32);
          }
        }
        else if (0 < (longlong)(int)param_1[0xf]) {
          uVar27 = (longlong)(int)param_1[0xf] + 1;
          do {
            plVar6 = *(longlong **)(param_1[0xe] + -0x10 + uVar27 * 8);
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x2e0))();
            }
            uVar27 = uVar27 - 1;
          } while (1 < uVar27);
        }
        iVar15 = (int)param_1[0x2b5];
        if (iVar15 == 0) {
          uVar30 = 1;
          uVar27 = 0;
          iVar20 = 0;
          iVar23 = 0;
        }
        else {
          puVar19 = (uint *)param_1[0x2b4];
          if ((uint *)param_1[0x2b4] == (uint *)0x0) {
            puVar19 = (uint *)(param_1 + 0x2b2);
          }
          uVar31 = *puVar19;
          if (uVar31 == 0) {
            iVar20 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar20 = iVar15 + -1;
            }
            uVar27 = 0;
            uVar30 = (ulonglong)(uint)(iVar20 >> 5);
            if (iVar20 >> 5 < 1) {
              uVar30 = uVar27;
            }
            iVar20 = 0;
            do {
              if (uVar30 == uVar27) goto LAB_14358d548;
              iVar20 = iVar20 + 0x20;
              uVar31 = puVar19[uVar27 + 1];
              uVar27 = uVar27 + 1;
            } while (uVar31 == 0);
          }
          else {
            uVar27 = 0;
            iVar20 = 0;
          }
          uVar30 = (ulonglong)(-uVar31 & uVar31);
          uVar1 = uVar30 * 2 + 1;
          lVar28 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          iVar23 = (iVar20 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
          if (iVar15 <= iVar23) {
            iVar23 = iVar15;
          }
        }
        if (iVar23 < iVar15) {
          local_118 = param_1 + 0x2b0;
          uVar31 = 0xffffffff;
          local_110 = (uint *)(param_1 + 0x2b2);
          do {
            iVar15 = *(int *)(*local_118 + 0x10 + (longlong)iVar23 * 0x20);
            local_11c = iVar20;
            local_108 = uVar27;
            if (0 < iVar15) {
              lVar28 = *local_118 + (longlong)iVar23 * 0x20;
              uVar24 = 0;
              do {
                lVar29 = (longlong)(int)uVar24;
                lVar22 = *(longlong *)(*(longlong *)(lVar28 + 8) + lVar29 * 8);
                if ((lVar22 == 0) || ((*(uint *)(lVar22 + 8) >> 0x1e & 1) != 0)) {
LAB_14358d448:
                  if (~uVar24 + iVar15 != 0) {
                    lVar22 = *(longlong *)(lVar28 + 8);
                    memmove((void *)(lVar22 + lVar29 * 8),(void *)(lVar22 + lVar29 * 8 + 8),
                            (longlong)(int)(~uVar24 + iVar15) << 3);
                    iVar15 = *(int *)(lVar28 + 0x10);
                  }
                  iVar15 = iVar15 + -1;
                  *(int *)(lVar28 + 0x10) = iVar15;
                  uVar24 = uVar24 - 1;
                }
                else {
                  cVar10 = FUN_140c3ee9e(lVar22);
                  if (cVar10 != '\0') {
                    FUN_140cef0f4(lVar22,0,*(undefined1 *)(lVar22 + 400));
                    iVar15 = *(int *)(lVar28 + 0x10);
                    goto LAB_14358d448;
                  }
                  iVar15 = *(int *)(lVar28 + 0x10);
                }
                uVar24 = uVar24 + 1;
              } while ((int)uVar24 < iVar15);
            }
            if (iVar15 == 0) {
              FUN_147bd424a(local_118,iVar23);
            }
            uVar31 = uVar31 & ~(uint)uVar30;
            puVar19 = (uint *)param_1[0x2b4];
            if ((uint *)param_1[0x2b4] == (uint *)0x0) {
              puVar19 = local_110;
            }
            iVar15 = (int)param_1[0x2b5];
            iVar23 = (int)local_108;
            lVar28 = (longlong)iVar23;
            uVar24 = puVar19[lVar28] & uVar31;
            uVar27 = local_108;
            iVar20 = local_11c;
            if (uVar24 == 0) {
              iVar17 = iVar15 + 0x1e;
              if (-1 < iVar15 + -1) {
                iVar17 = iVar15 + -1;
              }
              iVar17 = iVar17 >> 5;
              iVar18 = iVar17;
              if (iVar17 < iVar23) {
                iVar18 = iVar23;
              }
              if (iVar17 <= iVar23) break;
              lVar22 = 0;
              while( true ) {
                iVar20 = iVar20 + 0x20;
                uVar24 = puVar19[lVar28 + lVar22 + 1];
                if (uVar24 != 0) break;
                lVar22 = lVar22 + 1;
                if (iVar18 - lVar28 == lVar22) goto LAB_14358d548;
              }
              uVar27 = (ulonglong)(iVar23 + (int)lVar22 + 1);
              uVar31 = 0xffffffff;
            }
            uVar30 = (ulonglong)(-uVar24 & uVar24);
            uVar1 = uVar30 * 2 + 1;
            lVar28 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
              }
            }
            iVar23 = (iVar20 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
          } while (iVar23 < iVar15);
        }
LAB_14358d548:
        FUN_14358823e(param_1);
        if ((*(longlong *)param_1[0x27e] == 0) &&
           ((*(int *)param_1[0x280] != (int)param_1[0x286] ||
            (*(int *)param_1[0x282] != *(int *)((longlong)param_1 + 0x1434))))) {
          *(undefined4 *)((longlong)param_1 + 0x134) = 1;
        }
      }
      if ((((*(char *)((longlong)param_1 + 0x271) != '\0') ||
           ((double)*(float *)(param_1[0xb] + 0xd8) <
            *(double *)(param_1[0xb] + 0x300) - (double)param_1[0x3e])) &&
          ((param_1[0x28] == 0 || (*(char *)(param_1[0x28] + 1) == '\x02')))) &&
         ((((*(byte *)((longlong)param_1 + 0xa4) & 2) != 0 ||
           (*(longlong *)(param_1[0xb] + 0xf0) != 0)) ||
          (*(int *)param_1[0x282] != *(int *)((longlong)param_1 + 0x1434))))) {
        (**(code **)(*param_1 + 0x2f8))(param_1,0);
      }
      if (param_1[0x28] != 0) {
        FUN_142b03c24();
        puVar14 = (undefined8 *)FUN_142b05580(param_1[0x28]);
        if ((puVar14 != (undefined8 *)0x0) &&
           (cVar10 = (**(code **)(*(longlong *)param_1[0xb] + 1000))(), cVar10 != '\0')) {
          *(byte *)(param_1[0x28] + 2) = *(byte *)(param_1[0x28] + 2) | 1;
          do {
            (**(code **)(*param_1 + 0x2d8))
                      (param_1,*puVar14,*(undefined4 *)(puVar14 + 1),(longlong)puVar14 + 0xc);
            puVar14 = (undefined8 *)FUN_142b05580(param_1[0x28]);
          } while (puVar14 != (undefined8 *)0x0);
          *(byte *)(param_1[0x28] + 2) = *(byte *)(param_1[0x28] + 2) & 0xfe;
        }
        puVar14 = (undefined8 *)FUN_142b05538(param_1[0x28]);
        while (puVar14 != (undefined8 *)0x0) {
          cVar10 = (**(code **)(*(longlong *)param_1[0xb] + 1000))();
          if (cVar10 != '\0') {
            (**(code **)(*param_1 + 0x2d8))
                      (param_1,*puVar14,*(undefined4 *)(puVar14 + 1),(longlong)puVar14 + 0xc);
          }
          FUN_1470797e8(puVar14);
          FUN_1400020a8(puVar14);
          puVar14 = (undefined8 *)FUN_142b05538(param_1[0x28]);
        }
      }
      iVar15 = (**(code **)(*param_1 + 0x308))(param_1,0);
      *(int *)(param_1 + 0x39b) = (int)param_1[0x39b] + 1;
      if (iVar15 == 0) {
        *(int *)((longlong)param_1 + 0x1cdc) = *(int *)((longlong)param_1 + 0x1cdc) + 1;
        uVar31 = (int)param_1[0x39e] + 1;
        *(uint *)(param_1 + 0x39e) = uVar31;
        if (*(uint *)(param_1 + 0x39c) < uVar31) {
          *(uint *)(param_1 + 0x39c) = uVar31;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x39e) = 0;
      }
      if ((*(byte *)((longlong)param_1 + 0xa4) & 4) == 0) {
        fVar33 = (float)(dVar35 - dVar2);
        if ((fVar37 != 0.0) || (NAN(fVar37))) {
          if (1.0 / fVar37 <= fVar33) {
            fVar33 = 1.0 / fVar37;
          }
          if (fVar33 <= 0.0) {
            fVar33 = 0.0;
          }
        }
        iVar23 = (int)((float)(int)param_1[7] * fVar33 * 8.0);
        iVar17 = -iVar23;
        iVar15 = (int)param_1[0x40];
        iVar20 = iVar15 + iVar17;
        if (SCARRY4(iVar15,iVar17)) {
          iVar20 = (iVar17 + iVar15 >> 0x1f) + -0x80000000;
        }
        *(int *)(param_1 + 0x40) = iVar20;
        if ((longlong)iVar20 < (longlong)iVar17 * 2) {
          uVar21 = 0x80000000;
          if (iVar23 < 0x40000001) {
            uVar21 = (undefined4)((longlong)iVar17 * 2);
          }
          uVar11 = 0x7fffffff;
          if (-0x40000000 < iVar23) {
            uVar11 = uVar21;
          }
          *(undefined4 *)(param_1 + 0x40) = uVar11;
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x1d34) = 0;
      if (param_1[0x3ae] != 0) {
        FUN_1435a41fe(param_1[0x3ae],dVar7);
      }
    }
  }
LAB_14358d7c5:
  if ((local_c0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14358d8c6 FUN_14358d8c6 body=1977 status=ok
// SIG undefined FUN_14358d8c6(void)

void FUN_14358d8c6(longlong param_1,longlong *param_2,longlong param_3)

{
  code *pcVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong local_90;
  ulonglong local_88;
  ulonglong uStack_80;
  code *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14375df50(DAT_14cb0d2b0,&local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1a8));
  uVar6 = (ulonglong)(int)uStack_70;
  if (((longlong)uVar6 < 0) || (*(int *)(local_78 + 8) <= (int)uStack_70)) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    do {
      if (*(longlong *)(*(longlong *)local_78 + uVar6 * 8) != 0) {
        lVar12 = *(longlong *)(*(longlong *)local_78 + (uVar6 & 0xffffffff) * 8);
        break;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(local_78 + 8));
  }
  lVar9 = *(longlong *)(lVar12 + 0x30);
  if (lVar9 != 0) {
    if (DAT_14cae8b20 == 0) {
      local_78 = (code *)&LAB_14355090c;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_147b8e16d;
      local_c0 = (code *)&LAB_140810a38;
      local_c8 = L"Engine";
      local_d0 = 0x800000000;
      local_d8 = 0x10000000;
      local_e0 = 8;
      local_e8 = 0x3f0;
      local_b0 = &local_78;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar13 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_78 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_1468c5283;
      local_c0 = FUN_142809da0;
      local_c8 = L"Engine";
      local_d0 = 0x400000000;
      local_d8 = 0x10000000;
      local_e0 = 8;
      local_e8 = 0x50;
      local_b0 = &local_78;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar9 = *(longlong *)(lVar9 + 0x20);
    if (lVar9 == 0) {
      lVar14 = 0;
    }
    else {
      iVar2 = *(int *)(lVar13 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar2) ||
           (lVar14 = lVar9,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
           lVar13 + 0x30)) {
          lVar14 = 0;
        }
      } while ((lVar14 == 0) && (lVar9 = *(longlong *)(lVar9 + 0x20), lVar9 != 0));
    }
    if (DAT_14cae8b20 == 0) {
      local_78 = (code *)&LAB_14355090c;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_147b8e16d;
      local_c0 = (code *)&LAB_140810a38;
      local_c8 = L"Engine";
      local_d0 = 0x800000000;
      local_d8 = 0x10000000;
      local_e0 = 8;
      local_e8 = 0x3f0;
      local_b0 = &local_78;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar9 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_78 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_1468c5283;
      local_c0 = FUN_142809da0;
      local_c8 = L"Engine";
      local_d0 = 0x400000000;
      local_d8 = 0x10000000;
      local_e0 = 8;
      local_e8 = 0x50;
      local_b0 = &local_78;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar13 = param_2[4];
    if (lVar13 == 0) {
      lVar11 = 0;
    }
    else {
      iVar2 = *(int *)(lVar9 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < iVar2) ||
           (lVar11 = lVar13,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar2 * 8)
           != lVar9 + 0x30)) {
          lVar11 = 0;
        }
      } while ((lVar11 == 0) && (lVar13 = *(longlong *)(lVar13 + 0x20), lVar13 != 0));
    }
    if (lVar14 == lVar11) {
      cVar4 = FUN_14640e50a(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1a8));
      if (cVar4 != '\0') {
        (**(code **)(*param_2 + 0xef8))(param_2,*(undefined8 *)(lVar12 + 0x30));
      }
      if (*(char *)(*(longlong *)(lVar12 + 0x30) + 0x178) == '\x03') {
        uVar8 = FUN_1447210f0();
        FUN_1412f3774(uVar8,*(undefined8 *)(lVar12 + 0x30),0,1);
      }
      else {
        local_78 = (code *)CONCAT44(local_78._4_4_,0xffffffff);
        FUN_147bcd2ca();
      }
      *(undefined8 *)(*(longlong *)(lVar12 + 0x30) + 0x430) = 0;
      *(undefined8 *)(*(longlong *)(lVar12 + 0x30) + 0x608) = 0;
      *(undefined8 *)(lVar12 + 0x30) = 0;
    }
  }
  *(undefined4 *)(lVar12 + 0x38) = *(undefined4 *)(param_1 + 0x38);
  FUN_1433b72a0(param_2,2);
  if ((param_3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_3);
  }
  param_2[0xc1] = param_3;
  (**(code **)(*param_2 + 0xd30))(param_2,lVar12);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x300);
  *(undefined4 *)(param_1 + 0x134) = 3;
  if (param_2 != (longlong *)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar3 = DAT_14c950c29;
  *(longlong **)(param_1 + 0x30) = param_2;
  if ((param_2 != (longlong *)0x0) && ((bVar3 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  *(longlong **)(param_1 + 0x98) = param_2;
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x840);
  if (lVar9 != 0) {
    lVar9 = *(longlong *)(lVar9 + 0x28);
    uVar5 = (uint)*(ulonglong *)(param_1 + 0x1d2c);
    if ((*(uint *)(*(longlong *)(lVar9 + 0x868) +
                  (*(ulonglong *)(param_1 + 0x1d2c) >> 5 & 0x7ffffff) * 4) >> (uVar5 & 0x1f) & 1) ==
        0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (longlong)(int)uVar5 * 0x28 + *(longlong *)(lVar9 + 0x848);
    }
    *(undefined1 *)(*(longlong *)(lVar9 + 8) + 0x3b0) = 1;
  }
  lVar9 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x30));
  local_78 = (code *)0x0;
  uStack_70 = 0;
  iVar2 = *(int *)(lVar9 + 0x90);
  if ((longlong)iVar2 != 0) {
    lVar9 = *(longlong *)(lVar9 + 0x88);
    lVar13 = 0;
    local_90 = lVar12;
    do {
      uVar6 = uStack_70;
      lVar12 = *(longlong *)(lVar9 + lVar13);
      if ((((lVar12 != 0) && (lVar12 = *(longlong *)(lVar12 + 0x178), lVar12 != 0)) &&
          ((*(byte *)(lVar12 + 0x240) & 0x20) != 0)) && ((*(byte *)(lVar12 + 0x242) & 1) == 0)) {
        lVar14 = (longlong)(int)uStack_70;
        uVar5 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
        if (uStack_70._4_4_ < uVar5) {
          FUN_147bd42de(&local_78,uVar6 & 0xffffffff);
        }
        pcVar1 = local_78 + lVar14 * 0x18;
        FUN_14049cadc(pcVar1,lVar12,1,0);
        FUN_14098f2e8(param_2,&local_88,*(longlong *)pcVar1);
        *(ulonglong *)pcVar1 = local_88;
      }
      lVar12 = local_90;
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar2 * 8 != lVar13);
    if (0 < (int)uStack_70) {
      FUN_147c9c096(param_2,&local_78);
    }
  }
  if (local_78 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14375df50(DAT_14cb0d2b0,&local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1a8));
  pcVar1 = local_78;
  uVar6 = (ulonglong)(int)uStack_70;
  if (-1 < (longlong)uVar6) {
    uVar5 = *(uint *)(local_78 + 8);
    if ((int)uStack_70 < (int)uVar5) {
      if (*(longlong *)(*(longlong *)local_78 + uVar6 * 8) == 0) {
        plVar10 = (longlong *)(*(longlong *)local_78 + uVar6 * 8);
        do {
          plVar10 = plVar10 + 1;
          uVar15 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar15;
          if ((int)uVar5 <= (int)uVar15) {
            uVar6 = (ulonglong)uVar5;
            break;
          }
        } while (*plVar10 == 0);
      }
      if ((int)uVar6 < 0) goto LAB_14358dd12;
    }
    uVar7 = uVar6 & 0xffffffff;
    while (uVar5 = (uint)uVar7, (int)uVar5 < *(int *)(pcVar1 + 8)) {
      if (*(longlong *)(*(longlong *)pcVar1 + uVar7 * 8) != lVar12) {
        local_88 = 0;
        uStack_80 = 0;
        plVar10 = *(longlong **)(*(longlong *)pcVar1 + uVar7 * 8);
        (**(code **)(*plVar10 + 0x308))(plVar10,&local_88);
        FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        uVar5 = (uint)uVar6;
      }
      uVar6 = (ulonglong)uVar5;
      do {
        if ((int)uVar5 < -1) goto LAB_14358dd12;
        iVar2 = (int)uVar6;
        uVar15 = iVar2 + 1;
        uVar6 = (ulonglong)uVar15;
      } while (((int)uVar15 < *(int *)(pcVar1 + 8)) &&
              (*(longlong *)(*(longlong *)pcVar1 + (ulonglong)uVar15 * 8) == 0));
      uVar7 = (ulonglong)uVar15;
      if (iVar2 < -1) break;
    }
  }
LAB_14358dd12:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14358e080 FUN_14358e080 body=722 status=ok
// SIG undefined FUN_14358e080(void)

void FUN_14358e080(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  char cVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  uint local_70;
  longlong local_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14375df50(DAT_14cb0d2b0,&local_78);
  uVar7 = (ulonglong)local_70;
  if (-1 < (int)local_70) {
    plVar4 = (longlong *)CONCAT44(uStack_74,local_78);
    uVar1 = *(uint *)(plVar4 + 1);
    if ((int)local_70 < (int)uVar1) {
      plVar11 = (longlong *)(uVar7 * 8 + *plVar4);
      do {
        if (*plVar11 != 0) goto LAB_14358e0fc;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        plVar11 = plVar11 + 1;
      } while ((int)uVar6 < (int)uVar1);
      uVar7 = (ulonglong)uVar1;
LAB_14358e0fc:
      if ((int)uVar7 < 0) goto LAB_14358e1c8;
    }
    cVar10 = '\0';
    do {
      if ((int)uVar1 <= (int)uVar7) break;
      uVar12 = uVar7;
      if (cVar10 == *(char *)((longlong)param_2 + 0x5a4)) {
        lVar2 = *(longlong *)(*plVar4 + uVar7 * 8);
        if (lVar2 != 0) {
          if (*(longlong *)(lVar2 + 0x30) == 0) goto LAB_14358e159;
          cVar10 = FUN_14640e50a(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1a8));
          if (cVar10 != '\0') {
            (**(code **)(*param_2 + 0xef8))(param_2,*(undefined8 *)(lVar2 + 0x30));
          }
          if (*(char *)(*(longlong *)(lVar2 + 0x30) + 0x178) == '\x03') {
            uVar8 = FUN_1447210f0();
            FUN_1412f3774(uVar8,*(undefined8 *)(lVar2 + 0x30),0,1);
            goto LAB_14358e29c;
          }
          lVar3 = *(longlong *)(param_1 + 0x1de8);
          if ((param_1 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(param_1);
          }
          lVar14 = (longlong)*(int *)(lVar3 + 0x50);
          uVar9 = 0xffffffff;
          if (lVar14 == 0) goto LAB_14358e33b;
          lVar3 = *(longlong *)(lVar3 + 0x48);
          lVar14 = lVar14 << 3;
          lVar13 = 0;
          bVar5 = DAT_14c950c29;
          goto LAB_14358e30e;
        }
        break;
      }
      do {
        uVar12 = uVar12 + 1;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        if ((int)uVar1 <= (int)uVar6) {
          uVar7 = (ulonglong)uVar1;
          break;
        }
      } while (*(longlong *)(*plVar4 + uVar12 * 8) == 0);
      cVar10 = cVar10 + '\x01';
    } while (-1 < (int)uVar7);
  }
LAB_14358e1c8:
  lVar2 = *(longlong *)(param_1 + 0x1de8);
  if (lVar2 != 0) {
    FUN_1459b235e(&local_78,0x2e);
    FUN_143587ad8(lVar2,&local_78);
    if (local_50 != 0) {
      (**(code **)(local_50 + -0x10))(local_50 + -0x10);
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
LAB_14358e1d4:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    lVar13 = lVar13 + 1;
    lVar14 = lVar14 + -8;
    if (lVar14 == 0) break;
LAB_14358e30e:
    if ((param_1 != 0) && ((bVar5 & 1) != 0)) {
      FUN_1456cec3c(param_1);
      bVar5 = DAT_14c950c29;
    }
    if (*(longlong *)(lVar3 + lVar13 * 8) == param_1) {
      uVar9 = (undefined4)lVar13;
      break;
    }
  }
LAB_14358e33b:
  local_78 = uVar9;
  FUN_147bcd2ca();
LAB_14358e29c:
  *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x430) = 0;
  *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x608) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
LAB_14358e159:
  *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(param_1 + 0x38);
  FUN_1433b72a0(param_2,2);
  if ((param_3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_3);
  }
  param_2[0xc1] = param_3;
  (**(code **)(*param_2 + 0xd30))(param_2,lVar2);
  if (param_2 != (longlong *)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar5 = DAT_14c950c29;
  *(longlong **)(param_1 + 0x30) = param_2;
  if ((param_2 != (longlong *)0x0) && ((bVar5 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  *(longlong **)(param_1 + 0x98) = param_2;
  goto LAB_14358e1d4;
}



// FUNCTION 14358e354 FUN_14358e354 body=3113 status=ok
// SIG undefined FUN_14358e354(void)

void FUN_14358e354(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_148 [32];
  ulonglong *local_128;
  longlong local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  code *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  longlong local_c8;
  code *local_c0;
  undefined4 local_b4;
  code *local_b0;
  int local_a8;
  undefined4 uStack_a4;
  ulonglong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  uint local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar3 = FUN_140b952ca(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x858),param_2,param_1);
  if (cVar3 == '\0') goto LAB_14358e89e;
  FUN_143587206(param_1,param_2,param_2);
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (DAT_14c7615d8 != 0) {
    uVar14 = (longlong)(int)param_2[0x43] + (longlong)(int)param_2[0x45];
    uVar13 = (uint)uVar14;
    if (uVar13 != 0) {
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar14);
      }
      FUN_1417e30fa(&local_98,uVar14 & 0xffffffff);
      iVar4 = 1;
      if (3 < uVar13) {
        uVar13 = (uVar13 | 1) + 0xe;
        iVar4 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 1 << ((byte)iVar4 & 0x1f);
      }
      if ((local_50 == 0) || (local_50 < iVar4)) {
        local_50 = iVar4;
        FUN_1417e2e88();
      }
    }
  }
  local_a0 = 0;
  if (DAT_14c7615e0 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*param_2 + 0x498))(param_2);
    if (lVar5 == param_1) {
      bVar21 = true;
    }
    else {
      bVar21 = false;
      if (lVar5 != 0) {
        if (DAT_14cabf8e8 == 0) {
          local_f0 = &local_b0;
          local_b0 = FUN_144ae7c60;
          local_e0 = FUN_14081d0ea;
          local_e8 = &LAB_14637144c;
          local_f8 = &LAB_147861001;
          local_100 = (code *)&LAB_145acec30;
          local_108 = L"Engine";
          local_110 = 0;
          local_118 = 0x1000000c;
          local_120 = CONCAT44(local_120._4_4_,8);
          local_128 = (ulonglong *)CONCAT44(local_128._4_4_,0x1df0);
          FUN_14081cfa3(L"/Script/Engine",L"ChildConnection",&DAT_14cabf8e8,&DAT_147861000);
        }
        if ((*(int *)(DAT_14cabf8e8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cabf8e8 + 0x38) * 8) == DAT_14cabf8e8 + 0x30)) {
          bVar21 = *(longlong *)(lVar5 + 0x1de8) == param_1;
        }
      }
    }
    bVar22 = (char)param_2[0xd] == '\x01';
    uVar13 = *(uint *)(param_1 + 0xa4) & 4;
    uVar14 = (ulonglong)
             (((uint)bVar22 << 5 ^ 0x20) + ((uint)!bVar21 + (uint)bVar22 * 4) * 4 |
             (uint)(uVar13 * 4 + (uint)bVar22 * 4 == 4) << 0xb) + 7;
    if ((*(uint *)(param_2 + 0x2b) & 2) == 0 && !bVar22) {
      uVar14 = (ulonglong)((uint)uVar14 & 0x7fffffbf);
LAB_14358ecdc:
      uVar14 = uVar14 & 0xffffffffffffefff;
    }
    else {
      if (uVar13 != 0) {
        uVar14 = uVar14 | 0x40;
        goto LAB_14358ecdc;
      }
      uVar14 = uVar14 | 0x1040;
    }
    uVar18 = 0x4500;
    if (uVar13 == 0) {
      uVar18 = 0x6100;
    }
    local_a0 = uVar14 + (uVar18 | (ulonglong)(bVar21 || uVar13 != 0) << 9) + 0x80;
    lVar5 = FUN_1447210f0(param_2);
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      if (DAT_14caf2978 == 0) {
        local_f0 = &local_b0;
        local_b0 = FUN_1449e2820;
        local_e0 = FUN_14081d0ea;
        local_e8 = &LAB_141737a50;
        local_f8 = &LAB_147be51cb;
        local_100 = FUN_1463edbe8;
        local_108 = L"Engine";
        local_110 = 0;
        local_118 = 0x10000000;
        local_120 = CONCAT44(local_120._4_4_,8);
        local_128 = (ulonglong *)CONCAT44(local_128._4_4_,0x80);
        FUN_14081cfa3(L"/Script/Engine",L"NetworkSubsystem",&DAT_14caf2978,&DAT_147be51ca);
      }
      lVar6 = DAT_14caf2978;
      if ((DAT_14caf2978 == 0) || (DAT_14c950c29 == '\0')) {
        if (DAT_14caf2978 != 0) goto LAB_14358e5b8;
LAB_14358ef57:
        lVar11 = 0;
      }
      else {
        FUN_1456cec3c(DAT_14caf2978);
        if (DAT_14caf2978 == 0) {
          local_f0 = &local_b0;
          local_b0 = FUN_1449e2820;
          local_e0 = FUN_14081d0ea;
          local_e8 = &LAB_141737a50;
          local_f8 = &LAB_147be51cb;
          local_100 = FUN_1463edbe8;
          local_108 = L"Engine";
          local_110 = 0;
          local_118 = 0x10000000;
          local_120 = CONCAT44(local_120._4_4_,8);
          local_128 = (ulonglong *)CONCAT44(local_128._4_4_,0x80);
          FUN_14081cfa3(L"/Script/Engine",L"NetworkSubsystem",&DAT_14caf2978,&DAT_147be51ca);
          if (DAT_14caf2978 == 0) goto LAB_14358ef57;
        }
LAB_14358e5b8:
        if (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14caf2978 + 0x38)) goto LAB_14358ef57;
        lVar11 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14caf2978 + 0x38) * 8) ==
            DAT_14caf2978 + 0x30) {
          lVar11 = lVar6;
        }
      }
      lVar6 = FUN_1448a6f9c(lVar5 + 0x870,lVar11);
    }
    lVar5 = lVar6 + 0x30;
    if (lVar6 == 0) {
      lVar5 = 0;
    }
  }
  if (DAT_14c7615dc != 0) {
    local_128 = &local_a0;
    local_120 = lVar5;
    FUN_143586fc8(param_1,param_2,param_2 + 0x42,&local_98);
  }
  if ((longlong)(int)param_2[0x45] != 0) {
    plVar19 = (longlong *)param_2[0x44];
    plVar16 = plVar19 + (longlong)(int)param_2[0x45] * 5;
    do {
      lVar6 = *plVar19;
      if ((lVar6 == 0) || ((*(uint *)(lVar6 + 8) >> 0x1e & 1) != 0)) goto LAB_14358e734;
      if ((lVar5 == 0) || (DAT_14c7615e0 == 0)) {
LAB_14358e6a6:
        FUN_143587206(param_1,param_2,lVar6);
        FUN_14105d480(&local_98,lVar6,*(longlong *)(param_1 + 0x58) + 0x1b8);
        if ((DAT_14c7615dc != 0) && ((longlong)(int)param_2[0x45] != 0)) {
          lVar12 = 0;
          lVar11 = 0;
          do {
            if (*(longlong *)(param_2[0x44] + lVar12) == lVar6) {
              lVar11 = param_2[0x44] - lVar11;
              if (lVar11 != 0) {
                local_128 = &local_a0;
                local_120 = lVar5;
                FUN_143586fc8(param_1,param_2,lVar11 + 0x18,&local_98);
              }
              break;
            }
            lVar11 = lVar11 + -0x28;
            lVar12 = lVar12 + 0x28;
          } while (-lVar11 != (longlong)(int)param_2[0x45] * 0x28);
        }
      }
      else {
        uVar14 = 1L << ((byte)(int)plVar19[2] & 0x3f) & local_a0;
        bVar21 = uVar14 != 0;
        if ((int)plVar19[2] == 0x10) {
          local_c8 = *(longlong *)(param_1 + 0x30);
          local_d0 = param_2;
          FUN_147a48382(lVar5,&local_b0,plVar19[1]);
          if (0 < (longlong)local_a8 && uVar14 == 0) {
            local_c0 = local_b0;
            local_d8 = DAT_14c997f10;
            uVar14 = 0;
            do {
              uVar18 = *(ulonglong *)(local_b0 + uVar14 * 8);
              bVar21 = SUB41(((uint)local_a0 & 4) >> 2,0);
              if ((DAT_14c997f08 != uVar18) &&
                 (bVar21 = (bool)((byte)((uint)local_a0 >> 10) & 1), DAT_14c997f10 != uVar18)) {
                if ((longlong)*(int *)(local_c8 + 0x680) != 0) {
                  uVar8 = 0;
                  do {
                    if (*(ulonglong *)(*(longlong *)(local_c8 + 0x678) + uVar8) == uVar18) {
                      bVar21 = (~uVar8 & 0x7fffffff8) != 0;
                      goto LAB_14358e837;
                    }
                    uVar8 = uVar8 + 8;
                  } while ((longlong)*(int *)(local_c8 + 0x680) * 8 != uVar8);
                }
                bVar21 = false;
              }
LAB_14358e837:
              uVar14 = uVar14 + 1;
            } while ((uVar14 < (ulonglong)(longlong)local_a8) && (bVar21 == false));
          }
          param_2 = local_d0;
          if (bVar21 != false) goto LAB_14358e6a6;
        }
        else if (uVar14 != 0) goto LAB_14358e6a6;
      }
LAB_14358e734:
      plVar19 = plVar19 + 5;
    } while (plVar19 != plVar16);
  }
  if ((DAT_14c7615d8 != 0) && ((int)uStack_90 != local_64)) {
    lVar5 = FUN_14136c68a(param_1 + 0x15d0,param_2);
    uVar13 = *(int *)(lVar5 + 8) - *(int *)(lVar5 + 0x34);
    uVar15 = ((int)uStack_90 - local_64) + uVar13;
    if (uVar13 < uVar15) {
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar15);
      }
      FUN_1417e30fa(lVar5,uVar15);
      if (uVar15 < 4) {
        iVar4 = 1;
      }
      else {
        uVar13 = (uVar15 | 1) + 0xe;
        iVar4 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 1 << ((byte)iVar4 & 0x1f);
      }
      if ((*(int *)(lVar5 + 0x48) == 0) || (*(int *)(lVar5 + 0x48) < iVar4)) {
        *(int *)(lVar5 + 0x48) = iVar4;
        FUN_1417e2e88(lVar5);
      }
    }
    if (local_70 == 0) {
      uVar14 = 1;
      uVar18 = 0;
      uVar13 = 0;
      iVar4 = 0;
    }
    else {
      puVar7 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar7 = local_88;
      }
      uVar13 = *puVar7;
      if (uVar13 == 0) {
        iVar4 = local_70 + 0x1e;
        if (-1 < (int)(local_70 - 1)) {
          iVar4 = local_70 - 1;
        }
        uVar18 = 0;
        uVar14 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar14 = uVar18;
        }
        iVar4 = 0;
        do {
          if (uVar14 == uVar18) goto LAB_14358e874;
          iVar4 = iVar4 + 0x20;
          uVar13 = puVar7[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar18 = 0;
        iVar4 = 0;
      }
      uVar14 = (ulonglong)(-uVar13 & uVar13);
      uVar8 = uVar14 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
      if ((int)local_70 <= (int)uVar13) {
        uVar13 = local_70;
      }
    }
    if (uVar13 != local_70) {
      local_c8 = lVar5 + 0x38;
      uVar15 = 0xffffffff;
      local_d8 = (ulonglong)local_70;
      local_d0 = param_2;
      do {
        lVar6 = local_98;
        local_c0 = (code *)CONCAT44(local_c0._4_4_,iVar4);
        FUN_14105d6f0(lVar5,&local_b0);
        puVar2 = (undefined8 *)CONCAT44(uStack_a4,local_a8);
        uVar1 = *(undefined8 *)(lVar6 + (longlong)(int)uVar13 * 0x18);
        *puVar2 = uVar1;
        puVar2[1] = *(undefined8 *)(lVar6 + 8 + (longlong)(int)uVar13 * 0x18);
        *(undefined4 *)(puVar2 + 2) = 0xffffffff;
        local_b4 = local_b0._0_4_;
        uVar13 = (int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1;
        cVar3 = FUN_14105d66e(lVar5,uVar13,puVar2,&local_b4);
        if (cVar3 == '\0') {
          uVar17 = *(int *)(lVar5 + 8) - *(int *)(lVar5 + 0x34);
          iVar4 = 1;
          if (3 < uVar17) {
            uVar8 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
            lVar6 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            iVar4 = 1 << ((byte)lVar6 & 0x1f);
          }
          if (((int)uVar17 < 1) || (iVar4 <= *(int *)(lVar5 + 0x48))) {
            uVar13 = *(int *)(lVar5 + 0x48) - 1U & uVar13;
            *(uint *)((longlong)puVar2 + 0x14) = uVar13;
            lVar6 = *(longlong *)(lVar5 + 0x40);
            if (*(longlong *)(lVar5 + 0x40) == 0) {
              lVar6 = local_c8;
            }
            *(undefined4 *)(puVar2 + 2) =
                 *(undefined4 *)
                  (lVar6 + ((longlong)*(int *)(lVar5 + 0x48) - 1U & (longlong)(int)uVar13) * 4);
            lVar6 = *(longlong *)(lVar5 + 0x40);
            if (*(longlong *)(lVar5 + 0x40) == 0) {
              lVar6 = local_c8;
            }
            *(undefined4 *)
             (lVar6 + ((longlong)*(int *)(lVar5 + 0x48) - 1U & (longlong)(int)uVar13) * 4) =
                 local_b4;
          }
          else {
            *(int *)(lVar5 + 0x48) = iVar4;
            FUN_1417e2e88(lVar5);
          }
        }
        uVar15 = uVar15 & ~(uint)uVar14;
        puVar7 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar7 = local_88;
        }
        iVar20 = (int)uVar18;
        lVar6 = (longlong)iVar20;
        uVar13 = puVar7[lVar6] & uVar15;
        iVar4 = (int)local_c0;
        if (uVar13 == 0) {
          iVar9 = local_70 + 0x1e;
          if (-1 < (int)(local_70 - 1)) {
            iVar9 = local_70 - 1;
          }
          iVar9 = iVar9 >> 5;
          iVar4 = (int)local_c0 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar20) {
            iVar10 = iVar20;
          }
          if (iVar20 < iVar9) {
            lVar11 = 0;
            do {
              uVar13 = puVar7[lVar6 + lVar11 + 1];
              if (uVar13 != 0) {
                uVar18 = (ulonglong)(iVar20 + (int)lVar11 + 1);
                uVar15 = 0xffffffff;
                goto LAB_14358ec53;
              }
              iVar4 = iVar4 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar10 - lVar6 != lVar11);
            uVar15 = 0xffffffff;
            iVar20 = iVar10;
          }
          uVar18 = (ulonglong)(iVar20 + 1);
          uVar13 = local_70;
        }
        else {
LAB_14358ec53:
          uVar14 = (ulonglong)(-uVar13 & uVar13);
          uVar8 = uVar14 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          uVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if ((int)local_70 <= (int)uVar13) {
            uVar13 = local_70;
          }
        }
        param_2 = local_d0;
      } while (uVar13 != (uint)local_d8);
    }
  }
LAB_14358e874:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1403cc58e(&local_98);
LAB_14358e89e:
  if (param_2 == (longlong *)0x0) {
    uVar15 = 0;
    uVar13 = 0;
  }
  else {
    uVar15 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar15 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar13 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar17 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar17);
      }
      LOCK();
      uVar13 = *(uint *)(lVar5 + 0x10);
      bVar21 = uVar13 == 0;
      if (bVar21) {
        *(uint *)(lVar5 + 0x10) = uVar17;
        uVar13 = 0;
      }
      UNLOCK();
      if (bVar21) {
        uVar13 = uVar17;
      }
    }
  }
  if (*(int *)(param_1 + 0x1460) != *(int *)(param_1 + 0x148c)) {
    lVar5 = param_1 + 0x1490;
    if (*(longlong *)(param_1 + 0x1498) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1498);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x14a0) - 1U & (uVar13 ^ uVar15)) * 4);
    if (iVar4 != -1) {
      do {
        plVar19 = (longlong *)(*(longlong *)(param_1 + 0x1458) + (longlong)iVar4 * 0x18);
        if (*plVar19 == CONCAT44(uVar13,uVar15)) {
          if ((plVar19 != (longlong *)0x0) && (plVar19[1] != 0)) {
            puVar7 = (uint *)(plVar19[1] + 0x30);
            *puVar7 = *puVar7 & 0xfffffe7b;
          }
          break;
        }
        iVar4 = (int)plVar19[2];
      } while (iVar4 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14358eff0 FUN_14358eff0 body=62 status=ok
// SIG undefined FUN_14358eff0(void)

void FUN_14358eff0(longlong param_1,char param_2)

{
  uint uVar1;
  
  *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x204) + 1;
  *(int *)(param_1 + 0x1ce4) = *(int *)(param_1 + 0x1ce4) + 1;
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x1cf4) = 0;
  }
  else {
    *(int *)(&DAT_00001ce8 + param_1) = *(int *)(&DAT_00001ce8 + param_1) + 1;
    uVar1 = *(int *)(param_1 + 0x1cf4) + 1;
    *(uint *)(param_1 + 0x1cf4) = uVar1;
    if (*(uint *)(param_1 + 0x1cec) < uVar1) {
      *(uint *)(param_1 + 0x1cec) = uVar1;
      return;
    }
  }
  return;
}



// FUNCTION 14358f02e FUN_14358f02e body=269 status=ok
// SIG undefined FUN_14358f02e(void)

void FUN_14358f02e(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((1 < *(uint *)((longlong)param_1 + 0x134)) && (param_1[0xb] != 0)) {
    QueryPerformanceCounter(&local_30);
    FUN_140002266(&local_30,L"%08X",local_30.QuadPart & 0xffffffff);
    if ((LARGE_INTEGER *)(param_1 + 0x33) == &local_30) {
      if (local_30.QuadPart != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x33] != 0) {
        FUN_1400020a8();
      }
      ((LARGE_INTEGER *)(param_1 + 0x33))->QuadPart = (LONGLONG)local_30;
      local_30.QuadPart = 0;
      *(undefined4 *)(param_1 + 0x34) = local_28;
      *(undefined4 *)((longlong)param_1 + 0x1a4) = local_24;
    }
    lVar1 = param_1[0xb];
    if (((lVar1 != 0) && (*(char *)(lVar1 + 0x751) == '\0')) && (*(char *)(lVar1 + 0x728) == '\x01')
       ) {
      *(int *)(lVar1 + 0x758) = *(int *)(lVar1 + 0x758) + 1;
    }
    if ((char)param_1[0x3a] != '\x05') {
      *(undefined1 *)(param_1 + 0x3a) = 5;
    }
    FUN_1463ebe9a(param_1,(LARGE_INTEGER *)(param_1 + 0x33));
    (**(code **)(*param_1 + 0x2f8))(param_1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14358f13c FUN_14358f13c body=307 status=ok
// SIG undefined FUN_14358f13c(void)

void FUN_14358f13c(longlong *param_1,byte *param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((1 < *(uint *)((longlong)param_1 + 0x134)) && (param_1[0xb] != 0)) {
    bVar1 = *param_2;
    if ((ulonglong)bVar1 == 1) {
      FUN_143587a20(param_1,param_2 + 0x18);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
    }
    if (bVar1 < 6) {
      puVar2 = (undefined2 *)(&PTR_u_Failure_14a9e5420)[bVar1];
    }
    else {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140056680(local_28,puVar2);
    FUN_1459b235e(local_58,0x31);
    FUN_143587eda(param_1,local_58);
    if (local_30 != 0) {
      (**(code **)(local_30 + -0x10))(local_30 + -0x10);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_147a4786e(param_1,local_28);
    (**(code **)(*param_1 + 0x2f8))(param_1,1);
    FUN_1459b235e(local_58,0x31);
    FUN_143587ad8(param_1,local_58);
    if (local_30 != 0) {
      (**(code **)(local_30 + -0x10))(local_30 + -0x10);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14358f27e FUN_14358f27e body=26 status=ok
// SIG undefined FUN_14358f27e(void)

void FUN_14358f27e(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x14a8) == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014358f295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x14a8) + 0x2b0))();
  return;
}



// FUNCTION 14358f298 FUN_14358f298 body=633 status=ok
// SIG undefined FUN_14358f298(void)

void FUN_14358f298(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  wchar_t *_Str;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_48;
  int local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar5 = 99;
  if (0 < (int)param_1[1]) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar5 = _wtoi(_Str);
  }
  FUN_147bceaba(&local_48,0x10,1);
  uVar11 = (ulonglong)local_38;
  lVar6 = local_48;
  lVar10 = 0;
  if ((-1 < (int)local_38) && ((int)local_38 < local_40)) {
    bVar3 = DAT_14c87ead8;
    while( true ) {
      uVar12 = *(ulonglong *)(*(longlong *)(lVar6 + (uVar11 & 0xffffffff) * 8) + 0x200);
      uVar9 = (uint)uVar11;
      if ((bVar3 & 1) == 0) {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = 1;
        lVar6 = local_48;
        uVar9 = local_38;
      }
      bVar3 = 1;
      if ((uVar12 == DAT_14c892fa8) &&
         (cVar4 = (**(code **)(**(longlong **)(lVar6 + (longlong)(int)uVar9 * 8) + 0x3c0))(),
         lVar6 = local_48, bVar3 = DAT_14c87ead8, uVar9 = local_38, cVar4 != '\0')) break;
      uVar11 = (longlong)(int)uVar9;
      do {
        uVar12 = uVar11;
        uVar11 = uVar12 + 1;
        local_38 = (uint)uVar11;
        if ((longlong)local_40 <= (longlong)uVar11) break;
      } while (*(longlong *)(lVar6 + uVar11 * 8) == 0);
      lVar10 = 0;
      if (((longlong)uVar12 < -1) || (lVar10 = 0, local_40 <= (int)local_38)) goto LAB_14358f3b6;
    }
    lVar10 = *(longlong *)(local_48 + (longlong)(int)local_38 * 8);
  }
LAB_14358f3b6:
  if (lVar6 != 0) {
    FUN_1400020a8();
  }
  if (lVar10 != 0) {
    lVar6 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x1a8) + 0x238);
    if (0 < lVar6) {
      lVar2 = *(longlong *)(*(longlong *)(lVar10 + 0x1a8) + 0x230);
      lVar13 = 0;
      do {
        iVar1 = *(int *)(lVar2 + 4 + lVar13 * 8);
        if ((((iVar1 != 0) && (uVar9 = *(uint *)(lVar2 + lVar13 * 8), -1 < (int)uVar9)) &&
            ((int)uVar9 < DAT_14c9647dc)) &&
           (((plVar8 = (longlong *)
                       ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
             plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar1)) &&
            (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
             (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)))))) {
          (**(code **)(*plVar8 + 0x6b8))(plVar8);
          goto LAB_14358f453;
        }
        lVar13 = lVar13 + 1;
      } while (lVar6 != lVar13);
    }
    plVar8 = (longlong *)0x0;
LAB_14358f453:
    if (0 < iVar5) {
      uVar9 = iVar5 + 1;
      do {
        plVar7 = (longlong *)FUN_147bceb76(DAT_14c951640);
        local_50 = 0;
        local_58 = 1000000;
        (**(code **)(*plVar7 + 0x350))(plVar7,lVar10,3,*(longlong *)(lVar10 + 0x1a8) + 0x5b8);
        (**(code **)(*plVar7 + 0x2e8))(plVar7);
        FUN_14359e342(lVar10,plVar7);
        (**(code **)(*plVar7 + 0x310))(plVar7,plVar8,plVar7);
        plVar7[0x300] = *(longlong *)(*(longlong *)(lVar10 + 0x1b0) + 0x18);
        FUN_146074476(plVar7);
        uVar9 = uVar9 - 1;
      } while (1 < uVar9);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14358f512 FUN_14358f512 body=69 status=ok
// SIG undefined FUN_14358f512(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14358f512(void)

{
  _DAT_14caf1dd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014358f554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1dd8,1);
  return;
}



// FUNCTION 14358f557 FUN_14358f557 body=642 status=ok
// SIG undefined FUN_14358f557(void)

void FUN_14358f557(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  wchar_t *_Str;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar5 = -1;
  if (0 < (int)param_1[1]) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar5 = _wtoi(_Str);
  }
  FUN_147bceaba(&local_38,0x10,1);
  uVar10 = (ulonglong)local_28;
  lVar7 = local_38;
  if ((-1 < (int)local_28) && (bVar3 = DAT_14c87ead8, (int)local_28 < local_30)) {
    while( true ) {
      uVar11 = *(ulonglong *)(*(longlong *)(lVar7 + (uVar10 & 0xffffffff) * 8) + 0x200);
      uVar8 = (uint)uVar10;
      if ((bVar3 & 1) == 0) {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = 1;
        lVar7 = local_38;
        uVar8 = local_28;
      }
      bVar3 = 1;
      if ((uVar11 == DAT_14c892fa8) &&
         (cVar4 = (**(code **)(**(longlong **)(lVar7 + (longlong)(int)uVar8 * 8) + 0x3c0))(),
         lVar7 = local_38, bVar3 = DAT_14c87ead8, uVar8 = local_28, cVar4 != '\0')) break;
      uVar10 = (longlong)(int)uVar8;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
        local_28 = (uint)uVar10;
        if ((longlong)local_30 <= (longlong)uVar10) break;
      } while (*(longlong *)(lVar7 + uVar10 * 8) == 0);
      if (((longlong)uVar11 < -1) || (local_30 <= (int)local_28)) goto LAB_14358f664;
    }
    lVar7 = *(longlong *)(local_38 + (longlong)(int)local_28 * 8);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (lVar7 == 0) goto LAB_14358f686;
    FUN_147bcec26(&local_38);
    uVar10 = (ulonglong)local_28;
    lVar7 = local_38;
    if ((int)local_28 < local_30 && -1 < (int)local_28) {
      iVar9 = 0;
      iVar6 = local_30;
      goto LAB_14358f6d1;
    }
  }
LAB_14358f664:
  if (lVar7 != 0) {
    FUN_1400020a8();
  }
LAB_14358f686:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14358f6d1:
  uVar8 = (uint)uVar10;
  lVar2 = *(longlong *)(lVar7 + (uVar10 & 0xffffffff) * 8);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    if ((*(uint *)(lVar12 + 8) >> 0x1c & 1) == 0) {
      FUN_147a491c6(lVar2);
      FUN_144757f48(lVar2,0x40000000);
      uVar8 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      do {
        uVar8 = *(uint *)(lVar7 + 8);
        if ((uVar8 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar13 = uVar8 == *(uint *)(lVar7 + 8);
        if (bVar13) {
          *(uint *)(lVar7 + 8) = uVar8 | 0x200000;
        }
        UNLOCK();
      } while (!bVar13);
      iVar9 = iVar9 + 1;
      lVar7 = local_38;
      iVar6 = local_30;
      uVar8 = local_28;
      if (iVar5 <= iVar9 && 0 < iVar5) goto LAB_14358f664;
    }
  }
  uVar10 = (longlong)(int)uVar8;
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
    local_28 = (uint)uVar10;
    if ((longlong)iVar6 <= (longlong)uVar10) break;
  } while (*(longlong *)(lVar7 + uVar10 * 8) == 0);
  if (((longlong)uVar11 < -1) || (iVar6 <= (int)local_28)) goto LAB_14358f664;
  goto LAB_14358f6d1;
}



// FUNCTION 14358f7da FUN_14358f7da body=69 status=ok
// SIG undefined FUN_14358f7da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14358f7da(void)

{
  _DAT_14caf1de0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014358f81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1de8,1);
  return;
}



// FUNCTION 14358f81f FUN_14358f81f body=69 status=ok
// SIG undefined FUN_14358f81f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14358f81f(void)

{
  _DAT_14caf1df0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014358f861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1df8,1);
  return;
}



// FUNCTION 14358f864 FUN_14358f864 body=2569 status=ok
// SIG undefined FUN_14358f864(void)

void FUN_14358f864(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong **pplVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_338 [32];
  undefined4 local_318;
  undefined4 local_310;
  undefined4 local_308;
  undefined8 local_300;
  wchar_t *local_2f8;
  undefined1 *local_2f0;
  undefined1 *local_2e8;
  undefined8 ***local_2e0;
  code *local_2d8;
  code *local_2d0;
  int local_2bc;
  undefined8 local_2b8;
  ulonglong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong *local_298;
  int local_28c;
  longlong **local_288;
  int local_280 [2];
  uint local_278;
  char local_264;
  longlong local_258;
  char local_230;
  longlong local_228 [4];
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  longlong local_1e8;
  undefined4 local_1e0;
  longlong local_1d8 [4];
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  longlong local_198;
  undefined4 local_190;
  longlong local_188 [4];
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  longlong local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_147bceaba(&local_288,0x10,1,0);
  uVar10 = (ulonglong)local_278;
  pplVar7 = local_288;
  plVar12 = (longlong *)0x0;
  if ((-1 < (int)local_278) && ((int)local_278 < local_280[0])) {
    bVar1 = DAT_14c87ead8;
    while( true ) {
      uVar11 = pplVar7[uVar10 & 0xffffffff][0x40];
      uVar3 = (uint)uVar10;
      if ((bVar1 & 1) == 0) {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = 1;
        pplVar7 = local_288;
        uVar3 = local_278;
      }
      bVar1 = 1;
      if ((uVar11 == DAT_14c892fa8) &&
         (cVar2 = (**(code **)(*pplVar7[(int)uVar3] + 0x3c0))(), pplVar7 = local_288,
         uVar3 = local_278, bVar1 = DAT_14c87ead8, cVar2 != '\0')) break;
      uVar10 = (longlong)(int)uVar3;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
        local_278 = (uint)uVar10;
        if ((longlong)local_280[0] <= (longlong)uVar10) break;
      } while (pplVar7[uVar10] == (longlong *)0x0);
      plVar12 = (longlong *)0x0;
      if (((longlong)uVar11 < -1) || (plVar12 = (longlong *)0x0, local_280[0] <= (int)local_278))
      goto LAB_14358f982;
    }
    plVar12 = local_288[(int)local_278];
  }
LAB_14358f982:
  if (pplVar7 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_168 = 0;
  local_160 = 0;
  local_188[0] = 0;
  local_188[1] = 0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  local_1ac = 0xffffffff00000080;
  local_1a4 = 0;
  local_198 = 0;
  local_190 = 0;
  local_208 = 0;
  local_200 = 0;
  local_228[0] = 0;
  local_228[1] = 0;
  local_1fc = 0xffffffff00000080;
  local_1f4 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  if (plVar12 != (longlong *)0x0) {
    param_2 = plVar12[0x35];
  }
  if (param_2 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_288 = (longlong **)FUN_141030f22;
      local_2d0 = FUN_14081d0ea;
      local_2d8 = FUN_14081d0ea;
      local_2e8 = &LAB_1478c0a72;
      local_2f0 = &LAB_1417b2375;
      local_2f8 = L"Engine";
      local_300 = 0x1000000000;
      local_308 = 0x10000004;
      local_310 = 8;
      local_318 = 0x390;
      local_2e0 = &local_288;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    local_2a0 = DAT_14cac9ca8;
    if ((DAT_14cac9ca8 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14146ff3c(&local_288,param_2,&local_2a0,5);
    if (local_264 == '\0') {
      do {
        local_2a8 = local_258;
        if ((*(byte *)(local_258 + 99) & 8) != 0) {
          local_298 = (longlong *)CONCAT44(local_298._4_4_,(uint)*(byte *)(local_258 + 0x179));
          piVar6 = (int *)FUN_147bcecd0(&local_138,*(byte *)(local_258 + 0x179),&local_298);
          *piVar6 = *piVar6 + 1;
          local_2b0 = *(ulonglong *)(local_2a8 + 0x10);
          uVar3 = ((uint)(local_2b0 >> 0x14) & 0xffff ^ (uint)(local_2b0 >> 4)) * -0x7a143595;
          uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          piVar6 = (int *)FUN_147a4c7c6(&local_e8,uVar3 >> 0x10 ^ uVar3,&local_2b0);
          *piVar6 = *piVar6 + 1;
          for (; local_2b0 != 0; local_2b0 = *(ulonglong *)(local_2b0 + 0x40)) {
            uVar3 = ((uint)(local_2b0 >> 0x14) & 0xffff ^ (uint)(local_2b0 >> 4)) * -0x7a143595;
            uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
            piVar6 = (int *)FUN_147a4c7c6(&local_98,uVar3 >> 0x10 ^ uVar3,&local_2b0);
            *piVar6 = *piVar6 + 1;
          }
          iVar4 = rand();
          local_298 = &local_2a8;
          FUN_147bcf214(local_188,&local_2b8,&local_298);
          *(int *)(local_188[0] + 8 + (longlong)(int)(uint)local_2b8 * 0x18) = iVar4;
          iVar4 = rand();
          if (local_2a8 == 0) {
            local_2b8._0_4_ = 0;
            iVar5 = 0;
            uVar3 = (uint)local_2b8;
          }
          else {
            uVar3 = *(uint *)(local_2a8 + 0xc);
            local_2b8 = (ulonglong)uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar8 = 0;
            }
            iVar5 = *(int *)(lVar8 + 0x10);
            if (*(int *)(lVar8 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar13) {
                local_2bc = iVar9;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
                iVar9 = local_2bc;
              }
              LOCK();
              iVar5 = *(int *)(lVar8 + 0x10);
              bVar13 = iVar5 == 0;
              if (bVar13) {
                *(int *)(lVar8 + 0x10) = iVar9;
                iVar5 = 0;
              }
              UNLOCK();
              uVar3 = (uint)local_2b8;
              if (bVar13) {
                iVar5 = iVar9;
              }
            }
          }
          local_2b8._0_4_ = uVar3;
          local_2b8 = CONCAT44(iVar5,(uint)local_2b8);
          local_298 = &local_2b8;
          FUN_147bcf360(local_1d8,&local_28c,&local_298);
          *(int *)(local_1d8[0] + 8 + (longlong)local_28c * 0x14) = iVar4;
          iVar4 = rand();
          local_2b8 = 0;
          if (local_2a8 != 0) {
            uVar3 = *(uint *)(local_2a8 + 0xc);
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar8 = 0;
            }
            iVar5 = *(int *)(lVar8 + 0x10);
            if (*(int *)(lVar8 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar13) {
                local_2bc = iVar9;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
                iVar9 = local_2bc;
              }
              LOCK();
              iVar5 = *(int *)(lVar8 + 0x10);
              bVar13 = iVar5 == 0;
              if (bVar13) {
                *(int *)(lVar8 + 0x10) = iVar9;
                iVar5 = 0;
              }
              UNLOCK();
              if (bVar13) {
                iVar5 = iVar9;
              }
            }
            local_2b8 = CONCAT44(iVar5,uVar3);
          }
          local_298 = &local_2b8;
          FUN_147bcf8fc(local_228,&local_28c,&local_298);
          *(int *)(local_228[0] + 8 + (longlong)local_28c * 0x14) = iVar4;
        }
        FUN_14146ffc0(&local_288);
      } while (local_264 == '\0');
    }
    if (local_230 == '\x01') {
      FUN_14024445c(local_280);
    }
    local_298 = &local_2a8;
    local_288 = &local_298;
    FUN_147bcfa34(&local_98,&local_288);
    FUN_147a4cbb8(&local_98);
    local_298 = &local_2a8;
    local_288 = &local_298;
    FUN_147bcfa34(&local_e8,&local_288);
    FUN_147a4cbb8(&local_e8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
    FUN_147bcffbc(local_188,&DAT_14c872ee0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
    FUN_147bd0062(local_1d8,&DAT_14c872ee0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
    FUN_147bd0108(local_228,&DAT_14c872ee0);
    local_1e0 = 0;
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_145de7b96(local_228);
  local_190 = 0;
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  FUN_145ad5f60(local_1d8);
  local_140 = 0;
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  FUN_140679ef6(local_188);
  local_f0 = 0;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_147bd01ae(&local_138);
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_147a4cefa(&local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_147a4cefa(&local_98);
  if ((local_48 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14359026e FUN_14359026e body=69 status=ok
// SIG undefined FUN_14359026e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14359026e(void)

{
  _DAT_14caf1e00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435902b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf1e08,1);
  return;
}



// FUNCTION 1435902e8 FUN_1435902e8 body=48 status=ok
// SIG undefined FUN_1435902e8(void)

longlong FUN_1435902e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14359034e FUN_14359034e body=963 status=ok
// SIG undefined FUN_14359034e(void)

void FUN_14359034e(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong lVar16;
  ulonglong uVar17;
  
  iVar10 = (int)param_2[1];
  if (0 < iVar10) {
    uVar17 = 0;
    do {
      if ((param_4 >> ((uint)uVar17 & 0x1f) & 1) != 0) {
        lVar11 = *(longlong *)(*param_2 + uVar17 * 8);
        lVar4 = *(longlong *)(lVar11 + 8);
        bVar15 = true;
        if ((*(uint *)(lVar4 + 0x54) & 4) != 0) {
          bVar15 = -1 < (short)*(uint *)(lVar4 + 0x54) || (~*(uint *)(lVar4 + 0x50) & 0x3000) != 0;
        }
        if ((bVar15) && ((*(uint *)(lVar4 + 0x58) & 0x800) != 0)) {
          if (((*(byte *)(param_1 + 0x6c) & 0x20) != 0) && ((longlong)*(int *)(param_1 + 0xf0) != 0)
             ) {
            uVar14 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + uVar14) ==
                  *(longlong *)(lVar11 + 0x4c0)) {
                if ((~uVar14 & 0x7fffffff8) != 0) {
                  bVar13 = *(byte *)(param_1 + 0x6d) >> 3;
                  goto LAB_14359044b;
                }
                break;
              }
              uVar14 = uVar14 + 8;
            } while ((longlong)*(int *)(param_1 + 0xf0) * 8 != uVar14);
          }
          bVar13 = *(byte *)(param_1 + 0x6d);
LAB_14359044b:
          iVar9 = *(int *)(param_1 + 0x4c8);
          if (0 < iVar9) {
            lVar11 = 0;
            do {
              lVar4 = *(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x650) + lVar11 * 8);
              if (*(int *)(lVar4 + 0x4c) != 0) {
                iVar10 = (int)param_5[1];
                iVar9 = (int)param_5[2];
                iVar5 = (iVar9 + 0x44) / 0x44;
                *(int *)(param_5 + 2) = iVar9 + 1;
                if (iVar10 < iVar5) {
                  do {
                    lVar8 = FUN_14001cc68(0x3fc0,0x10);
                    lVar16 = 0;
                    do {
                      *(undefined8 *)(lVar8 + 0xa8 + lVar16) = 0;
                      puVar1 = (undefined8 *)(lVar8 + 0xb8 + lVar16);
                      *puVar1 = 0;
                      puVar1[1] = 0;
                      *(undefined8 *)(lVar8 + 200 + lVar16) = 0;
                      *(undefined8 *)(lVar8 + 0xd0 + lVar16) = 0xffffffff;
                      *(undefined8 *)(lVar8 + 0xd8 + lVar16) = 0xff0000ffffffff;
                      *(undefined1 *)(lVar8 + 0xe0 + lVar16) = 0;
                      *(undefined4 *)(lVar8 + 0xe4 + lVar16) = 0x40c00f07;
                      pbVar2 = (byte *)(lVar8 + 0xe8 + lVar16);
                      *pbVar2 = *pbVar2 & 0xfc;
                      *(undefined1 **)(lVar8 + 0xb0 + lVar16) = &DAT_100000001;
                      FUN_14470b9e0(lVar8 + lVar16,1);
                      lVar16 = lVar16 + 0xf0;
                    } while (lVar16 != 0x3fc0);
                    iVar3 = (int)param_5[1];
                    *(uint *)(param_5 + 1) = iVar3 + 1U;
                    if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
                      FUN_14002baf6(param_5,iVar3);
                    }
                    *(longlong *)(*param_5 + (longlong)iVar3 * 8) = lVar8;
                    iVar10 = iVar10 + 1;
                  } while (iVar10 != iVar5);
                }
                lVar8 = *(longlong *)(*param_5 + (longlong)(iVar9 / 0x44) * 8);
                lVar12 = (ulonglong)(uint)(iVar9 % 0x44) * 0xf0;
                lVar16 = *(longlong *)(lVar8 + 0xa8 + lVar12);
                if (lVar16 == 0) {
                  lVar16 = lVar8 + lVar12;
                }
                *(undefined8 *)(lVar16 + 0x18) = *(undefined8 *)(lVar4 + 0x40);
                *(longlong *)(lVar8 + 0xb8 + lVar12) = param_1 + 0x298;
                lVar6 = lVar11 * 0x88;
                uVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x4c0) + 0x30 + lVar6)
                                    + 0x2f0))();
                *(undefined8 *)(lVar8 + 0xc0 + lVar12) = uVar7;
                *(longlong *)(lVar8 + 200 + lVar12) = *(longlong *)(param_1 + 0x4c0) + lVar6;
                *(undefined4 *)(lVar16 + 0x58) = *(undefined4 *)(lVar4 + 0x48);
                *(undefined4 *)(lVar16 + 0x5c) = *(undefined4 *)(lVar4 + 0x4c);
                *(undefined4 *)(lVar16 + 0x68) = *(undefined4 *)(lVar4 + 0x50);
                *(undefined4 *)(lVar16 + 0x6c) = *(undefined4 *)(lVar4 + 0x54);
                *(undefined8 *)(lVar16 + 0x40) =
                     *(undefined8 *)(*(longlong *)(param_1 + 0x4c0) + 0x38 + lVar6);
                *(uint *)(lVar8 + 0xe4 + lVar12) =
                     (*(uint *)(lVar8 + 0xe4 + lVar12) & 0xffc03fff) + (bVar13 & 7) * 0x20000 +
                     0x100000;
                *(undefined1 *)(lVar8 + 0xde + lVar12) = 0;
                FUN_1436a14f8(param_5,uVar17 & 0xffffffff,lVar8 + lVar12);
                iVar9 = *(int *)(param_1 + 0x4c8);
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 < iVar9);
            iVar10 = (int)param_2[1];
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < (longlong)iVar10);
  }
  FUN_147cbbd22(param_1,0,0);
  return;
}



// FUNCTION 143590712 FUN_143590712 body=201 status=ok
// SIG undefined FUN_143590712(void)

ulonglong * FUN_143590712(longlong param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  param_2[1] = 0;
  param_2[2] = 0;
  cVar3 = FUN_14480c900(0,param_3);
  lVar1 = *(longlong *)(param_3 + 8);
  uVar6 = 0x80;
  if (cVar3 != '\0') {
    uVar6 = *(uint *)(lVar1 + 0x58) >> 9 & 4 | 0x80;
  }
  uVar7 = 2;
  if (((((*(uint *)(lVar1 + 0x54) & 4) != 0) && ((short)*(uint *)(lVar1 + 0x54) < 0)) &&
      ((*(uint *)(lVar1 + 0x50) & 0x3000) == 0x3000)) && ((*(byte *)(param_1 + 0x6c) & 0x20) == 0))
  {
    uVar7 = 2 - ((*(byte *)(param_1 + 0x77) & 0x40) == 0);
  }
  bVar4 = FUN_144914152(param_1,param_3);
  uVar2 = *(ulonglong *)(param_1 + 0x4d0);
  *param_2 = uVar2;
  if ((((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) || ((*(byte *)(param_1 + 0x78) & 0x10) != 0)) ||
     ((*(byte *)(param_1 + 0x75) & 200) != 0)) {
    uVar5 = (uint)(uVar2 >> 0x1d) & 0x10;
  }
  else {
    uVar5 = 0;
  }
  *(uint *)(param_2 + 2) = uVar7 | uVar6 | (uint)bVar4 << 3 | uVar5;
  return param_2;
}



// FUNCTION 1435907dc FUN_1435907dc body=282 status=ok
// SIG undefined FUN_1435907dc(void)

undefined8 * FUN_1435907dc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143590326);
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



// FUNCTION 1435908f6 FUN_1435908f6 body=282 status=ok
// SIG undefined FUN_1435908f6(void)

undefined8 * FUN_1435908f6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143590326);
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



// FUNCTION 143590a10 FUN_143590a10 body=370 status=ok
// SIG undefined FUN_143590a10(void)

void FUN_143590a10(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x1010103;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x7f7fffff;
  local_2c = 8;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_143590b33;
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
  lVar4 = local_48;
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
        bVar3 = *(byte *)(local_48 + 0xd);
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
LAB_143590b33:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143590b84 FUN_143590b84 body=370 status=ok
// SIG undefined FUN_143590b84(void)

void FUN_143590b84(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x1010103;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x7f7fffff;
  local_2c = 4;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_143590ca7;
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
  lVar4 = local_48;
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
        bVar3 = *(byte *)(local_48 + 0xd);
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
LAB_143590ca7:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143590cf8 FUN_143590cf8 body=370 status=ok
// SIG undefined FUN_143590cf8(void)

void FUN_143590cf8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x1010103;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x7f7fffff;
  local_2c = 2;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_143590e1b;
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
  lVar4 = local_48;
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
        bVar3 = *(byte *)(local_48 + 0xd);
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
LAB_143590e1b:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143590e6c FUN_143590e6c body=370 status=ok
// SIG undefined FUN_143590e6c(void)

void FUN_143590e6c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x1010101;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x7f7fffff;
  local_2c = 8;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_143590f8f;
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
  lVar4 = local_48;
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
        bVar3 = *(byte *)(local_48 + 0xd);
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
LAB_143590f8f:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143590fe0 FUN_143590fe0 body=42 status=ok
// SIG undefined FUN_143590fe0(void)

void FUN_143590fe0(undefined8 *param_1)

{
  FUN_14490df4a();
  FUN_1458869ea(param_1 + 1,*param_1);
  LOCK();
  *(undefined4 *)param_1[3] = 1;
  UNLOCK();
  return;
}



// FUNCTION 143591014 FUN_143591014 body=29 status=ok
// SIG undefined FUN_143591014(void)

void FUN_143591014(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143591032 FUN_143591032 body=29 status=ok
// SIG undefined FUN_143591032(void)

undefined8 FUN_143591032(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143591050 FUN_143591050 body=282 status=ok
// SIG undefined FUN_143591050(void)

undefined8 * FUN_143591050(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143590326);
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



// FUNCTION 14359116a FUN_14359116a body=142 status=ok
// SIG undefined FUN_14359116a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14359116a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14490df4a();
    FUN_1458869ea(0xb0,_DAT_000000a8);
    LOCK();
    *_DAT_000000c0 = 1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
    FUN_14490df4a();
    FUN_1458869ea(param_1 + 0x16,param_1[0x15]);
    LOCK();
    *(undefined4 *)param_1[0x18] = 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435911ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1435911f8 FUN_1435911f8 body=82 status=ok
// SIG undefined FUN_1435911f8(void)

void FUN_1435911f8(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14490df4a();
  local_20 = param_1 + 0x10;
  local_28 = param_1;
  FUN_145b0246e(local_14);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143591256 FUN_143591256 body=12 status=ok
// SIG undefined FUN_143591256(void)

void FUN_143591256(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014359125f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143591262 FUN_143591262 body=29 status=ok
// SIG undefined FUN_143591262(void)

undefined8 FUN_143591262(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143591280 FUN_143591280 body=282 status=ok
// SIG undefined FUN_143591280(void)

undefined8 * FUN_143591280(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143590326);
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



// FUNCTION 14359139a FUN_14359139a body=139 status=ok
// SIG undefined FUN_14359139a(void)

void FUN_14359139a(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  FUN_14490df4a();
  local_28 = param_1 + 0xb8;
  local_30 = param_1 + 0xa8;
  FUN_145b0246e(local_1c);
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14359143a FUN_14359143a body=59 status=ok
// SIG undefined FUN_14359143a(void)

void FUN_14359143a(longlong param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_14490df4a();
    bVar1 = *(byte *)(param_1 + 0x30);
  }
  else {
    bVar1 = 0;
  }
  FUN_14358278c(*(undefined8 *)(param_1 + 0x28),param_1,param_1 + 0x10,param_1 + 0x20,bVar1 & 1);
  return;
}



// FUNCTION 143591480 FUN_143591480 body=29 status=ok
// SIG undefined FUN_143591480(void)

void FUN_143591480(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14359149e FUN_14359149e body=57 status=ok
// SIG undefined FUN_14359149e(void)

undefined8 * FUN_14359149e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a9e4900;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435914d8 FUN_1435914d8 body=282 status=ok
// SIG undefined FUN_1435914d8(void)

undefined8 * FUN_1435914d8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143590326);
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



// FUNCTION 1435915f2 FUN_1435915f2 body=149 status=ok
// SIG undefined FUN_1435915f2(void)

void FUN_1435915f2(undefined8 *param_1)

{
  int *piVar1;
  byte bVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    FUN_14490df4a();
    bVar2 = *(byte *)(param_1 + 0x1b);
  }
  else {
    bVar2 = 0;
  }
  FUN_14358278c(param_1[0x1a],param_1 + 0x15,param_1 + 0x17,param_1 + 0x19,bVar2 & 1);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014359167c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143591688 FUN_143591688 body=42 status=ok
// SIG undefined FUN_143591688(void)

void FUN_143591688(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_143582732(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1435916b2 FUN_1435916b2 body=295 status=ok
// SIG undefined FUN_1435916b2(void)

void FUN_1435916b2(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  bool bVar11;
  
  FUN_14490df4a();
  lVar10 = *param_1;
  lVar4 = *(longlong *)(lVar10 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
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
        plVar8 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c0;
            plVar6 = plVar5;
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
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar11 = plVar6 != DAT_14ca843c8;
            plVar8 = plVar5;
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
    lVar10 = *param_1;
  }
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    if (lVar10 != 0) {
      FUN_143582732(lVar10);
      FUN_1400020a8(lVar10);
      return;
    }
  }
  else {
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar7 + 3;
    if ((undefined8 *)param_2[1] < puVar9) {
      FUN_140023dd8(param_2,0x20);
      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar7 + 3;
    }
    *param_2 = (ulonglong)puVar9;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar7;
    param_2[6] = (ulonglong)(puVar7 + 1);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14a9e4960;
    puVar7[2] = lVar10;
  }
  return;
}



// FUNCTION 1435917e4 FUN_1435917e4 body=12 status=ok
// SIG undefined FUN_1435917e4(void)

void FUN_1435917e4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435917ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435917f0 FUN_1435917f0 body=29 status=ok
// SIG undefined FUN_1435917f0(void)

undefined8 FUN_1435917f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14359180e FUN_14359180e body=282 status=ok
// SIG undefined FUN_14359180e(void)

undefined8 * FUN_14359180e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143590326);
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



// FUNCTION 143591928 FUN_143591928 body=375 status=ok
// SIG undefined FUN_143591928(void)

void FUN_143591928(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  bool bVar12;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14490df4a();
  lVar11 = param_1[0x15];
  lVar5 = *(longlong *)(lVar11 + 0x18);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
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
        plVar9 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar12) {
              plVar9 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar12 = plVar7 != DAT_14ca843c8;
            plVar9 = plVar6;
            if (bVar12) {
              plVar7 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
    lVar11 = param_1[0x15];
  }
  if (DAT_14ca85164 == '\x01') {
    if (lVar11 != 0) {
      FUN_143582732(lVar11);
      FUN_1400020a8(lVar11);
    }
  }
  else {
    puVar8 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar8 + 3;
    if (DAT_14ca85108 < puVar10) {
      FUN_140023dd8(&DAT_14ca85100,0x20);
      puVar8 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar8 + 3;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar10;
    *DAT_14ca85130 = puVar8;
    DAT_14ca85130 = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_14a9e4960;
    puVar8[2] = lVar11;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143591a79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143591aa0 FUN_143591aa0 body=25 status=ok
// SIG undefined FUN_143591aa0(void)

void FUN_143591aa0(void)

{
  FUN_146174a50();
  FUN_14170c56a(&DAT_14caf16b8);
  return;
}



// FUNCTION 143591aba FUN_143591aba body=942 status=ok
// SIG undefined FUN_143591aba(void)

void FUN_143591aba(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  ulonglong *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FDummyPrevTransformBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 0x30;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x4101);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  lVar9 = local_a0;
  plVar8 = (longlong *)(param_1 + 0x10);
  if (plVar8 == &local_a0) {
LAB_143591c50:
    lVar9 = local_a0;
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
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar9;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar9 = *plVar8;
  }
  else {
    lVar4 = *plVar8;
    *plVar8 = local_a0;
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
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
      goto LAB_143591c50;
    }
  }
  if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x28) & 0x10) == 0)) {
    local_98._0_3_ = 0x10100;
  }
  else {
    local_98._0_3_ = 0x40000;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar8 = (longlong *)(param_1 + 0x18);
  if (plVar8 != &local_a0) {
    lVar9 = *plVar8;
    *plVar8 = local_a0;
    local_a0 = 0;
    if (lVar9 == 0) goto LAB_143591dda;
    LOCK();
    puVar1 = (uint *)(lVar9 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar9 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar9 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar9;
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
  lVar9 = local_a0;
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
        plVar6[1] = lVar9;
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
LAB_143591dda:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143591ea6 FUN_143591ea6 body=12 status=ok
// SIG undefined FUN_143591ea6(void)

void FUN_143591ea6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143591eaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143591eb2 FUN_143591eb2 body=29 status=ok
// SIG undefined FUN_143591eb2(void)

undefined8 FUN_143591eb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143591ed0 FUN_143591ed0 body=282 status=ok
// SIG undefined FUN_143591ed0(void)

undefined8 * FUN_143591ed0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143590326);
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



// FUNCTION 14359205d FUN_14359205d body=61 status=ok
// SIG undefined FUN_14359205d(void)

void FUN_14359205d(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = FUN_146efe1bf;
  puVar1[1] = FUN_14359205d;
  FUN_146efe1f2(puVar1 + 2,param_1);
  return;
}



// FUNCTION 14359209a FUN_14359209a body=527 status=ok
// SIG undefined FUN_14359209a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14359209a(undefined8 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caf20b8) && (FUN_144b3d300(&DAT_14caf20b8), DAT_14caf20b8 == -1)) {
    DAT_14caf20a8 = 0;
    _DAT_14caf20b0 = 0;
    atexit((_func_5014 *)&LAB_1435922a9);
    _Init_thread_footer(&DAT_14caf20b8);
  }
  lVar10 = DAT_14caf1d18;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar9 = 0;
  }
  else if (iVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar9 = 1;
  }
  uVar2 = _DAT_14caf20b0;
  if (*(int *)(lVar10 + uVar9 * 4) == 1) {
    uVar3 = ((uint)((ulonglong)param_1[2] >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1[2] >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    uVar6 = uVar3 >> 0xd ^ ((int)((ulonglong)*param_1 >> 0x20) * 0x17 + (int)*param_1) - uVar3;
    uVar7 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar11 = uVar7 >> 0xd ^ (uVar3 - uVar6) - uVar7;
    uVar3 = uVar11 >> 0xc ^ (uVar6 - uVar7) - uVar11;
    uVar6 = uVar3 << 0x10 ^ (uVar7 - uVar11) - uVar3;
    uVar7 = uVar6 >> 5 ^ (uVar11 - uVar3) - uVar6;
    uVar11 = uVar7 >> 3 ^ (uVar3 - uVar6) - uVar7;
    uVar3 = uVar11 << 10 ^ (uVar6 - uVar7) - uVar11;
    uVar3 = uVar3 >> 0xf ^ uVar7 - (uVar11 + uVar3);
    lVar10 = (longlong)DAT_14caf20b0;
    if (lVar10 != 0) {
      lVar8 = 0;
      do {
        if (*(uint *)(DAT_14caf20a8 + lVar8) == uVar3) {
          return 2;
        }
        lVar8 = lVar8 + 4;
      } while (lVar10 * 4 - lVar8 != 0);
      uVar9 = 0;
      do {
        if (*(uint *)(DAT_14caf20a8 + uVar9) == uVar3) {
          if ((int)(~uVar9 >> 2) != 0) {
            return 2;
          }
          break;
        }
        uVar9 = uVar9 + 4;
      } while (lVar10 * 4 - uVar9 != 0);
    }
    uVar6 = DAT_14caf20b0 + 1;
    _DAT_14caf20b0 = CONCAT44(DAT_14caf20b4,uVar6);
    if (DAT_14caf20b4 < uVar6) {
      FUN_1447808da(&DAT_14caf20a8,uVar2 & 0xffffffff);
    }
    *(uint *)(DAT_14caf20a8 + lVar10 * 4) = uVar3;
  }
  return 2;
}



// FUNCTION 143592318 FUN_143592318 body=12 status=ok
// SIG undefined FUN_143592318(void)

void FUN_143592318(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143592321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143592324 FUN_143592324 body=29 status=ok
// SIG undefined FUN_143592324(void)

undefined8 FUN_143592324(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143592342 FUN_143592342 body=35 status=ok
// SIG undefined FUN_143592342(void)

undefined8 FUN_143592342(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)(*(longlong *)*param_2 + 0x2c0))((longlong *)*param_2,param_1,1);
  return param_1;
}



// FUNCTION 143592370 FUN_143592370 body=12 status=ok
// SIG undefined FUN_143592370(void)

void FUN_143592370(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143592379. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14359237c FUN_14359237c body=29 status=ok
// SIG undefined FUN_14359237c(void)

undefined8 FUN_14359237c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14359239a FUN_14359239a body=102 status=ok
// SIG undefined FUN_14359239a(void)

undefined8 FUN_14359239a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*param_2 + 0x30) == 0) {
LAB_1435923dd:
    FUN_140056680(param_1,&DAT_149dfb77a);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x30) + 0x398);
    if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) goto LAB_1435923dd;
    FUN_1405e6804(lVar1 + 0x3a0,param_1);
  }
  return param_1;
}



// FUNCTION 14359240a FUN_14359240a body=12 status=ok
// SIG undefined FUN_14359240a(void)

void FUN_14359240a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143592413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143592416 FUN_143592416 body=29 status=ok
// SIG undefined FUN_143592416(void)

undefined8 FUN_143592416(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143592434 FUN_143592434 body=113 status=ok
// SIG undefined FUN_143592434(void)

void FUN_143592434(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_1;
  FUN_1459b235e(local_48,0x18);
  FUN_143587ad8(uVar1,local_48);
  if (local_20 != 0) {
    (**(code **)(local_20 + -0x10))(local_20 + -0x10);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435924b0 FUN_1435924b0 body=12 status=ok
// SIG undefined FUN_1435924b0(void)

void FUN_1435924b0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435924b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435924bc FUN_1435924bc body=29 status=ok
// SIG undefined FUN_1435924bc(void)

undefined8 FUN_1435924bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435924da FUN_1435924da body=29 status=ok
// SIG undefined FUN_1435924da(void)

undefined8 FUN_1435924da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14359250c FUN_14359250c body=93 status=ok
// SIG undefined FUN_14359250c(void)

void FUN_14359250c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9e4ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9e4c70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14359256a FUN_14359256a body=93 status=ok
// SIG undefined FUN_14359256a(void)

void FUN_14359256a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9e4ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9e4c70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1435925c8 FUN_1435925c8 body=126 status=ok
// SIG undefined FUN_1435925c8(void)

void FUN_1435925c8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a9e4ce0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9e4c70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143592637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143592668 FUN_143592668 body=39 status=ok
// SIG undefined FUN_143592668(void)

undefined8 FUN_143592668(longlong param_1,longlong *param_2)

{
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x50))(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1d58));
  }
  return 1;
}



// FUNCTION 143592690 FUN_143592690 body=76 status=ok
// SIG undefined FUN_143592690(void)

void FUN_143592690(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  FUN_147bcc166(*param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435926f4 FUN_1435926f4 body=29 status=ok
// SIG undefined FUN_1435926f4(void)

undefined8 FUN_1435926f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143592712 FUN_143592712 body=90 status=ok
// SIG undefined FUN_143592712(void)

void FUN_143592712(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*param_2 != *param_3) {
    lVar2 = *param_1;
    uVar3 = *(undefined8 *)(*param_4 + 0xd8);
    iVar1 = *(int *)(lVar2 + 0x88);
    *(uint *)(lVar2 + 0x88) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0x8c) < iVar1 + 1U) {
      FUN_1457a2cc6(lVar2,iVar1);
    }
    lVar4 = *(longlong *)(lVar2 + 0x80);
    if (*(longlong *)(lVar2 + 0x80) == 0) {
      lVar4 = lVar2;
    }
    *(undefined8 *)(lVar4 + (longlong)iVar1 * 8) = uVar3;
  }
  return;
}



// FUNCTION 14359276c FUN_14359276c body=29 status=ok
// SIG undefined FUN_14359276c(void)

undefined8 FUN_14359276c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14359279e FUN_14359279e body=85 status=ok
// SIG undefined FUN_14359279e(void)

void FUN_14359279e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9e4e50;
  return;
}



// FUNCTION 1435927f4 FUN_1435927f4 body=85 status=ok
// SIG undefined FUN_1435927f4(void)

void FUN_1435927f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9e4e50;
  return;
}



// FUNCTION 14359284a FUN_14359284a body=118 status=ok
// SIG undefined FUN_14359284a(void)

void FUN_14359284a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a9e4e50;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001435928b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1435928c0 FUN_1435928c0 body=62 status=ok
// SIG undefined FUN_1435928c0(void)

void FUN_1435928c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_143592942(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143592900 FUN_143592900 body=64 status=ok
// SIG undefined FUN_143592900(void)

undefined8 FUN_143592900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_143592942(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143592942 FUN_143592942 body=279 status=ok
// SIG undefined FUN_143592942(void)

void FUN_143592942(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  uint local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_2;
  local_29 = 1;
  if (0 < *(int *)(param_1 + 1)) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = *(undefined2 **)*param_1;
    }
    FUN_147bd4679(&local_29,puVar8);
  }
  FUN_147bd4716(&local_48);
  uVar4 = local_29;
  uVar9 = (ulonglong)local_38;
  lVar6 = local_48;
  if ((-1 < (int)local_38) && (bVar5 = DAT_14c950c29, (int)local_38 < local_40)) {
    do {
      lVar2 = *(longlong *)(lVar6 + (uVar9 & 0xffffffff) * 8);
      lVar3 = *(longlong *)(lVar1 + 0x38);
      uVar7 = (uint)uVar9;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        lVar6 = local_48;
        bVar5 = DAT_14c950c29;
        uVar7 = local_38;
      }
      if (*(longlong *)(lVar2 + 0x58) == lVar3) {
        *(undefined1 *)(*(longlong *)(lVar6 + (longlong)(int)uVar7 * 8) + 0x1d48) = uVar4;
      }
      uVar9 = (longlong)(int)uVar7;
      do {
        uVar10 = uVar9;
        uVar9 = uVar10 + 1;
        local_38 = (uint)uVar9;
        if ((longlong)local_40 <= (longlong)uVar9) break;
      } while (*(longlong *)(lVar6 + uVar9 * 8) == 0);
    } while ((-2 < (longlong)uVar10) && ((int)local_38 < local_40));
  }
  if (lVar6 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143592a5a FUN_143592a5a body=6325 status=ok
// SIG undefined FUN_143592a5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143592a5a(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  code *local_d8;
  code **ppcStack_d0;
  code *pcStack_c8;
  code *local_c0;
  undefined1 *local_b8;
  code *local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_a8,&DAT_14caf13e0);
  if (cVar2 == '\0') {
    _DAT_14caf13e0 = 0;
    uRam000000014caf13e8 = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14caf1418 = L"FMaterialUniformExpressionTexture";
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[2] = (longlong)&DAT_14caf1418;
  lVar1 = (longlong)DAT_14caf13f0;
  if (DAT_14caf13f0 != (undefined8 *)0x0) {
    *(longlong **)((longlong)DAT_14caf13f0 + 8) = plVar4;
  }
  *plVar4 = lVar1;
  plVar4[1] = (longlong)&DAT_14caf13f0;
  _DAT_14caf1420 = L"FMaterialUniformExpressionTextureCollection";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1420;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = (longlong)puVar5;
  }
  *puVar5 = plVar4;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1428 = L"FMaterialUniformExpressionTextureCollectionParameter";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1428;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1430 = L"FMaterialUniformExpressionConstant";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1430;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1438 = L"FMaterialUniformExpressionGenericConstant";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1438;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1440 = L"FMaterialUniformExpressionNumericParameter";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1440;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1448 = L"FMaterialUniformExpressionStaticBoolParameter";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1448;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1450 = L"FMaterialUniformExpressionTextureParameter";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1450;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1458 = L"FMaterialUniformExpressionExternalTextureBase";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1458;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1460 = L"FMaterialUniformExpressionExternalTexture";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1460;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1468 = L"FMaterialUniformExpressionExternalTextureParameter";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1468;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1470 = L"FMaterialUniformExpressionExternalTextureCoordinateScaleRotation";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1470;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1478 = L"FMaterialUniformExpressionExternalTextureCoordinateOffset";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1478;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1480 = L"FMaterialUniformExpressionRuntimeVirtualTextureUniform";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1480;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1488 = L"FMaterialUniformExpressionSparseVolumeTextureUniform";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1488;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1490 = L"FMaterialUniformExpressionFlipBookTextureParameter";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1490;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1498 = L"FMaterialUniformExpressionSine";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1498;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf14a0 = L"FMaterialUniformExpressionSquareRoot";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf14a0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf14a8 = L"FMaterialUniformExpressionRcp";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf14a8;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf14b0 = L"FMaterialUniformExpressionLength";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf14b0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf14b8 = L"FMaterialUniformExpressionNormalize";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf14b8;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf14c0 = L"FMaterialUniformExpressionExponential";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf14c0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf14c8 = L"FMaterialUniformExpressionExponential2";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf14c8;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf14d0 = L"FMaterialUniformExpressionLogarithm";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf14d0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf14d8 = L"FMaterialUniformExpressionLogarithm2";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf14d8;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf14e0 = L"FMaterialUniformExpressionLogarithm10";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf14e0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf14e8 = L"FMaterialUniformExpressionFoldedMath";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf14e8;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf14f0 = L"FMaterialUniformExpressionPeriodic";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf14f0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf14f8 = L"FMaterialUniformExpressionAppendVector";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf14f8;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1500 = L"FMaterialUniformExpressionMin";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1500;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1508 = L"FMaterialUniformExpressionMax";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1508;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1510 = L"FMaterialUniformExpressionClamp";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1510;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1518 = L"FMaterialUniformExpressionSaturate";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1518;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1520 = L"FMaterialUniformExpressionComponentSwizzle";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1520;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1528 = L"FMaterialUniformExpressionFloor";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1528;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1530 = L"FMaterialUniformExpressionCeil";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1530;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1538 = L"FMaterialUniformExpressionFrac";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1538;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1540 = L"FMaterialUniformExpressionFmod";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1540;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1548 = L"FMaterialUniformExpressionModulo";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1548;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1550 = L"FMaterialUniformExpressionAbs";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1550;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1558 = L"FMaterialUniformExpressionTextureProperty";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1558;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1560 = L"FMaterialUniformExpressionTrigMath";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1560;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1568 = L"FMaterialUniformExpressionRound";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1568;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1570 = L"FMaterialUniformExpressionTruncate";
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[2] = &DAT_14caf1570;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = puVar5;
  }
  *puVar5 = puVar6;
  puVar5[1] = &DAT_14caf13f0;
  _DAT_14caf1578 = L"FMaterialUniformExpressionSign";
  DAT_14caf13f0 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[2] = &DAT_14caf1578;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = puVar6;
  }
  *puVar6 = puVar5;
  puVar6[1] = &DAT_14caf13f0;
  _DAT_14caf1580 = L"FMaterialUniformExpressionOriginTime";
  DAT_14caf13f0 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  DAT_14caf13f0[2] = &DAT_14caf1580;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = DAT_14caf13f0;
  }
  *DAT_14caf13f0 = puVar6;
  DAT_14caf13f0[1] = &DAT_14caf13f0;
  local_d8 = (code *)CONCAT44(local_d8._4_4_,0x20);
  FUN_141471170(&DAT_14caf1588,L"r.DeferUpdateRenderStates",&DAT_14c7615cc,
                L"Whether to defer updating the render states of material parameter collections when a paramter is changed until a rendering command needs them up to date.  Deferring updates is more efficient because multiple SetVectorParameterValue and SetScalarParameterValue calls in a frame will only result in one update."
               );
  atexit(FUN_143582177);
  DAT_14caf15b8 = 0;
  DAT_14caf15c0 = 0;
  DAT_14caf1598 = 0;
  _DAT_14caf15a0 = 0;
  _DAT_14caf15c4 = 0xffffffff00000080;
  DAT_14caf15cc = 0;
  DAT_14caf15d8 = 0;
  DAT_14caf15e0 = 0;
  atexit(FUN_1435821bc);
  ppcStack_d0 = (code **)0x0;
  pcStack_c8 = (code *)0x0;
  local_d8 = (code *)0x1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a9de470);
  local_a8._0_4_ = 1;
  local_d8._0_4_ = 4;
  FUN_14078dbce(&DAT_14caf1600,L"r.MeshCardRepresentation",&local_a8,&DAT_149dfb77a);
  atexit(FUN_143583e98);
  local_a8._0_4_ = 0x3e4ccccd;
  local_d8._0_4_ = 4;
  FUN_140a6b41e(&DAT_14caf1618,L"r.MeshCardRepresentation.MinDensity",&local_a8,
                L"How much of filled area needs to be there to spawn a card, [0;1] range.");
  atexit(FUN_143583edd);
  local_a8._0_4_ = 0x3e800000;
  local_d8._0_4_ = 4;
  FUN_140a6b41e(&DAT_14caf1630,L"r.MeshCardRepresentation.NormalTreshold",&local_a8,
                L"Normal treshold when surface elements should be clustered together.");
  atexit(FUN_143583f22);
  local_a8._0_4_ = 0;
  local_d8._0_4_ = 1;
  FUN_14078dbce(&DAT_14caf1648,L"r.MeshCardRepresentation.Debug",&local_a8,
                L"Enable mesh cards debugging. Skips DDCs and appends extra debug data.");
  atexit(FUN_143583f67);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffffffff);
  local_d8._0_4_ = 0;
  FUN_14078dbce(&DAT_14caf1660,L"r.MeshCardRepresentation.Debug.SurfelDirection",&local_a8,
                L"Generate cards for only surfels pointing in a specific direction.");
  atexit(FUN_143583fac);
  local_d8 = (code *)CONCAT44(local_d8._4_4_,4);
  FUN_141471170(&DAT_14caf1678,L"r.MeshCardRepresentation.Async",&DAT_14c7615d0,&DAT_149e0635c);
  atexit(FUN_143583ff1);
  pcStack_c8 = (code *)0x0;
  local_d8 = (code *)0x0;
  ppcStack_d0 = (code **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9def40,1,0);
  local_a8 = (code *)0x14a1e3c88;
  local_a0 = (code *)CONCAT35(local_a0._5_3_,10);
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14caf16a0 = (ulonglong)uVar3;
  DAT_14caf16a8 = 0;
  uRam000000014caf16b0 = 0;
  atexit((_func_5014 *)&LAB_1435842dc);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_143591aa0;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caf1720,6,&local_a8);
  _DAT_14caf1730 = 0xffffffff;
  _DAT_14caf1734 = 0x105;
  DAT_14caf1736 = 0;
  DAT_14caf1738 = 0;
  DAT_14caf1740 = 0;
  DAT_14caf1728 = &PTR_FUN_14a9e4a10;
  FUN_1463ec364();
  atexit(FUN_1435842ed);
  local_b8 = &LAB_14358431c;
  local_c0 = FUN_143584328;
  pcStack_c8 = FUN_143584685;
  ppcStack_d0 = (code **)FUN_1435846b8;
  local_d8 = FUN_1435846d5;
  FUN_141585c60(&DAT_14caf1748,L"FMeshParticleVertexFactory",
                L"/Engine/Private/MeshParticleVertexFactory.ush",0x200a);
  atexit((_func_5014 *)&LAB_14358471f);
  local_a0 = FUN_145e40e04;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14caf1840,&local_a8);
  pcStack_c8 = (code *)0x0;
  local_d8 = (code *)0x0;
  ppcStack_d0 = (code **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9df500,1,0);
  local_d8 = (code *)CONCAT44(local_d8._4_4_,4);
  FUN_1463e9db8(&DAT_14caf1868,L"r.MeshReductionModule",L"QuadricMeshReduction",
                L"Name of what mesh reduction module to choose. If blank it chooses any that exist.\n"
               );
  atexit(FUN_143584737);
  FUN_14098d3d2(FUN_14358477c,L"/Script/Engine",L"EVertexPaintAxis",&DAT_14caf1898);
  pcStack_c8 = (code *)0x0;
  local_d8 = (code *)0x0;
  ppcStack_d0 = (code **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9dfe60,1,0);
  local_d8 = (code *)&DAT_14caf18e0;
  ppcStack_d0 = &local_a8;
  FUN_14058d408(FUN_145ff2e25,&LAB_1463ebc68,L"/Script/Engine",L"UModel");
  DAT_14caf1918 = 0;
  DAT_14caf1920 = 0;
  DAT_14caf18f8 = 0;
  _DAT_14caf1900 = 0;
  _DAT_14caf1924 = 0xffffffff00000080;
  _DAT_14caf192c = 0;
  DAT_14caf1938 = 0;
  _DAT_14caf1940 = 0;
  atexit(FUN_1435849b3);
  FUN_147bcbb1c();
  atexit((_func_5014 *)&LAB_143584a8c);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf1ba0,L"r.Nanite.Picking.Crosshair",&DAT_14caf1b98,&DAT_149dfb77a);
  atexit(FUN_143584a91);
  pcStack_c8 = (code *)0x0;
  local_d8 = (code *)0x0;
  ppcStack_d0 = (code **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9e1300,1,0);
  pcStack_c8 = (code *)0x0;
  local_d8 = (code *)0x0;
  ppcStack_d0 = (code **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a9e1e30,2,0);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf1c18,L"net.PingExcludeFrameTime",&local_a8,
                L"If true, game frame times are subtracted from calculated ping to approximate actual network ping"
               );
  atexit(FUN_143586aa9);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf1c30,L"net.PingUsePacketRecvTime",&local_a8,
                L"Use OS or Receive Thread packet receive time, for calculating the ping. Excludes frame time."
               );
  atexit(FUN_143586aee);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf1c48,L"net.TickAllOpenChannels",&local_a8,
                L"If nonzero, each net connection will tick all of its open channels every tick. Leaving this off will improve performance."
               );
  atexit(FUN_143586b33);
  local_a8._0_4_ = 1;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf1c60,L"net.RandomizeSequence",&local_a8,
                L"Randomize initial packet sequence, can provide some obfuscation");
  atexit(FUN_143586b78);
  local_a8._0_4_ = 0;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf1c78,L"net.MaxChannelSize",&local_a8,
                L"The maximum number of network channels allowed across the entire server, if <= 0 the connection DefaultMaxChannelSize will be used."
               );
  atexit(FUN_143586bbd);
  local_a8._0_4_ = 1;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf1c90,L"net.DoPacketOrderCorrection",&local_a8,
                L"Whether or not to try to fix \'out of order\' packet sequences, by caching packets and waiting for the missing sequence."
               );
  atexit(FUN_143586c02);
  local_a8._0_4_ = 1;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf1ca8,L"net.PacketOrderCorrectionEnableThreshold",&local_a8,
                L"The number of \'out of order\' packet sequences that need to occur, before correction is enabled."
               );
  atexit(FUN_143586c47);
  local_a8._0_4_ = 3;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf1cc0,L"net.PacketOrderMaxMissingPackets",&local_a8,
                L"The maximum number of missed packet sequences that is allowed, before treating missing packets as lost."
               );
  atexit(FUN_143586c8c);
  local_a8._0_4_ = 0x20;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf1cd8,L"net.PacketOrderMaxCachedPackets",&local_a8,
                L"(NOTE: Must be power of 2!) The maximum number of packets to cache while waiting for missing packet sequences, before treating missing packets as lost."
               );
  atexit(FUN_143586cd1);
  local_a8._0_4_ = 0;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf1cf0,L"net.EnableCongestionControl",&local_a8,
                L"Enables congestion control module.");
  atexit(FUN_143586d16);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,1);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf1d08,L"net.LogUnhandledFaults",&local_a8,
                L"Whether or not to warn about unhandled net faults (could be deliberate, depending on implementation). 0 = off, 1 = log once, 2 = log always."
               );
  atexit(FUN_143586d5b);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf1d20,L"net.CloseTimingDebug",&DAT_14caf1d30,
                L"Logs the last packet send/receive and TickFlush/TickDispatch times, on connection close - for debugging blocked send/recv paths."
               );
  atexit(FUN_143586da0);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf1d38,L"net.Connection.LogAllCleanup",&DAT_14caf1d48,
                L"When true log every connection CleanUp even when it was a normal socket closure.")
  ;
  atexit(FUN_143586de5);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffffffffff00);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14caf1d50,L"net.SkipMissingLevelDisconnect",&local_a8,
                L"If true skip disconnecting a player if they have a level that doesn\'t exist on server"
               );
  atexit(FUN_143586e2a);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf1d68,L"net.GracefulCloseEnabled",&DAT_14c7615d4,
                L"If enabled, connections will wait for reliable bunches to be acked before cleaning up."
               );
  atexit(FUN_143586e6f);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf1d78,L"net.TrackFlushedDormantObjects",&DAT_14c7615d8,
                L"If enabled, track dormant subobjects when dormancy is flushed, so they can be properly deleted if destroyed prior to the next ReplicateActor."
               );
  atexit(FUN_143586eb4);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf1d88,L"net.EnableFlushDormantSubObjects",&DAT_14c7615dc,
                L"If enabled, FlushNetDormancy will flush replicated subobjects in addition to replicated components. Only applies to objects using the replicated subobject list."
               );
  atexit(FUN_143586ef9);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf1d98,L"net.EnableFlushDormantSubObjectsCheckConditions",&DAT_14c7615e0,
                L"If enabled, when net.EnableFlushDormantSubObjects is also true a dormancy flush will also check replicated subobject conditions"
               );
  atexit(FUN_143586f3e);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf1da8,L"net.FlushDormancyUseDefaultStateForUnloadedLevels",&DAT_14c7615e4,
                L"If enabled, dormancy flushing will init replicators with default object state if the client doesn\'t have the actor\'s level loaded."
               );
  atexit(FUN_143586f83);
  local_a8 = (code *)0x0;
  local_a0 = (code *)((ulonglong)local_a0 & 0xffffffff00000000);
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_14358f298;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14156bb10(&DAT_14caf1dd0,L"net.SimulateConnections",L"Starts a Simulated Net Driver",&local_a8
               );
  if ((int)local_a0 == 0) {
LAB_143593fb0:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0._0_4_ = 0;
    goto LAB_143593fb0;
  }
  atexit(FUN_14358f512);
  local_a8 = (code *)0x0;
  local_a0._0_4_ = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_14358f557;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14156bb10(&DAT_14caf1de0,L"net.DisconnectSimulatedConnections",
                L"Disconnects some simulated connections (0 = all)",&local_a8);
  if ((int)local_a0 == 0) {
LAB_14359408e:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0._0_4_ = 0;
    goto LAB_14359408e;
  }
  atexit(FUN_14358f7da);
  local_a8 = (code *)0x0;
  local_a0._0_4_ = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a9e4e50;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14156bb10(&DAT_14caf1df0,L"net.ForceOnePacketPerBunch",
                L"When set to true it will enable AutoFlush on all connections and force a packet to be sent for every bunch we create. This forces one packet per replicated actor and can help find rare ordering bugs"
                ,&local_a8);
  if ((int)local_a0 == 0) {
LAB_143594168:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0._0_4_ = 0;
    goto LAB_143594168;
  }
  atexit(FUN_14358f81f);
  local_a8 = (code *)0x0;
  local_a0._0_4_ = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_14358f864;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14156bb10(&DAT_14caf1e00,L"net.ActorReport",&DAT_149dfb77a,&local_a8);
  if ((int)local_a0 != 0) {
    if (local_a8 == (code *)0x0) goto LAB_143594254;
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0._0_4_ = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143594254:
  atexit(FUN_14359026e);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143594310 FUN_143594310 body=69 status=ok
// SIG undefined FUN_143594310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143594310(void)

{
  _DAT_14caf2150 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143594352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2158,1);
  return;
}



// FUNCTION 143594355 FUN_143594355 body=69 status=ok
// SIG undefined FUN_143594355(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143594355(void)

{
  _DAT_14caf2168 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143594397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2170,1);
  return;
}



// FUNCTION 14359439a FUN_14359439a body=69 status=ok
// SIG undefined FUN_14359439a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14359439a(void)

{
  _DAT_14caf2178 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435943dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2180,1);
  return;
}



// FUNCTION 1435943df FUN_1435943df body=69 status=ok
// SIG undefined FUN_1435943df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435943df(void)

{
  _DAT_14caf2190 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143594421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2198,1);
  return;
}



// FUNCTION 143594424 FUN_143594424 body=69 status=ok
// SIG undefined FUN_143594424(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143594424(void)

{
  _DAT_14caf21a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143594466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf21a8,1);
  return;
}



// FUNCTION 143594469 FUN_143594469 body=69 status=ok
// SIG undefined FUN_143594469(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143594469(void)

{
  _DAT_14caf21b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435944ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf21b8,1);
  return;
}



// FUNCTION 1435944ae FUN_1435944ae body=69 status=ok
// SIG undefined FUN_1435944ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435944ae(void)

{
  _DAT_14caf21c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435944f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf21c8,1);
  return;
}



// FUNCTION 1435944f3 FUN_1435944f3 body=69 status=ok
// SIG undefined FUN_1435944f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435944f3(void)

{
  _DAT_14caf21d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143594535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf21d8,1);
  return;
}



// FUNCTION 143594538 FUN_143594538 body=69 status=ok
// SIG undefined FUN_143594538(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143594538(void)

{
  _DAT_14caf21e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014359457a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf21f0,1);
  return;
}



// FUNCTION 14359457d FUN_14359457d body=69 status=ok
// SIG undefined FUN_14359457d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14359457d(void)

{
  _DAT_14caf2200 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435945bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2208,1);
  return;
}



// FUNCTION 1435945c2 FUN_1435945c2 body=69 status=ok
// SIG undefined FUN_1435945c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435945c2(void)

{
  _DAT_14caf2788 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143594604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2790,1);
  return;
}



// FUNCTION 143594607 FUN_143594607 body=69 status=ok
// SIG undefined FUN_143594607(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143594607(void)

{
  _DAT_14caf2218 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143594649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2220,1);
  return;
}



// FUNCTION 14359464c FUN_14359464c body=69 status=ok
// SIG undefined FUN_14359464c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14359464c(void)

{
  _DAT_14caf2230 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014359468e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2238,1);
  return;
}



// FUNCTION 143594691 FUN_143594691 body=69 status=ok
// SIG undefined FUN_143594691(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143594691(void)

{
  _DAT_14caf2248 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435946d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2250,1);
  return;
}



// FUNCTION 1435946d6 FUN_1435946d6 body=69 status=ok
// SIG undefined FUN_1435946d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435946d6(void)

{
  _DAT_14caf2260 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143594718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2268,1);
  return;
}



// FUNCTION 14359471b FUN_14359471b body=69 status=ok
// SIG undefined FUN_14359471b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14359471b(void)

{
  _DAT_14caf2278 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014359475d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2280,1);
  return;
}



// FUNCTION 143594760 FUN_143594760 body=69 status=ok
// SIG undefined FUN_143594760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143594760(void)

{
  _DAT_14caf2290 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435947a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2298,1);
  return;
}



// FUNCTION 1435947a5 FUN_1435947a5 body=69 status=ok
// SIG undefined FUN_1435947a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435947a5(void)

{
  _DAT_14caf22a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435947e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf22b0,1);
  return;
}



// FUNCTION 1435947ea FUN_1435947ea body=69 status=ok
// SIG undefined FUN_1435947ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435947ea(void)

{
  _DAT_14caf22c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014359482c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf22c8,1);
  return;
}



// FUNCTION 14359482f FUN_14359482f body=69 status=ok
// SIG undefined FUN_14359482f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14359482f(void)

{
  _DAT_14caf22d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143594871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf22d8,1);
  return;
}



// FUNCTION 143594896 FUN_143594896 body=69 status=ok
// SIG undefined FUN_143594896(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143594896(void)

{
  _DAT_14caf2300 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435948d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2308,1);
  return;
}



// FUNCTION 1435948db FUN_1435948db body=69 status=ok
// SIG undefined FUN_1435948db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435948db(void)

{
  _DAT_14caf2310 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014359491d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2318,1);
  return;
}



// FUNCTION 143594922 FUN_143594922 body=2046 status=ok
// SIG undefined FUN_143594922(void)

void FUN_143594922(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  void *_Dst;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  undefined2 *puVar28;
  int iVar29;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined2 *local_c8;
  int local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    *(undefined1 *)(param_1 + 0x8cc) = 1;
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0x80;
    uStack_88 = 0xffffffff;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    plVar23 = (longlong *)(param_1 + 0x218);
    local_d0 = plVar23;
    if (*(int *)(param_1 + 0x220) != *(int *)(param_1 + 0x24c)) {
      FUN_147bdf034(plVar23);
      FUN_147bdf178(plVar23);
    }
    if ((longlong)*(int *)(param_1 + 0x210) != 0) {
      puVar22 = *(undefined8 **)(param_1 + 0x208);
      puVar24 = puVar22 + (longlong)*(int *)(param_1 + 0x210) * 0xe;
      local_d8 = param_1 + 0x228;
      lVar1 = param_1 + 0x250;
      do {
        cVar8 = FUN_1413649be(param_1,puVar22);
        if (cVar8 != '\0') {
          FUN_1400021e4(puVar22 + 1,&local_c8);
          puVar28 = &DAT_149dfb77a;
          if (local_c0 != 0) {
            puVar28 = local_c8;
          }
          uVar13 = FUN_1411827f2();
          local_e0 = 0;
          local_e8 = 0x2000;
          lVar14 = FUN_141433b6f(uVar13,0,puVar28,0);
          if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar14);
          }
          puVar22[2] = lVar14;
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
            lVar14 = puVar22[2];
          }
          if (lVar14 != 0) {
            if (*(int *)(param_1 + 0x24c) == 0) {
              iVar29 = *(int *)(param_1 + 0x220);
              *(int *)(param_1 + 0x220) = iVar29 + 1;
              if (*(int *)(param_1 + 0x224) == iVar29) {
                FUN_140eca382(local_d0,iVar29);
              }
              iVar25 = *(int *)(param_1 + 0x240);
              if (iVar25 == 0) {
                iVar9 = -1;
              }
              else {
                iVar9 = iVar25 + 0x1e;
                if (-1 < iVar25 + -1) {
                  iVar9 = iVar25 + -1;
                }
                iVar9 = iVar9 >> 5;
              }
              iVar17 = iVar25 + 1;
              iVar27 = iVar25 + 0x1f;
              if (-1 < iVar25) {
                iVar27 = iVar25;
              }
              if (iVar27 >> 5 == iVar9) {
                *(int *)(param_1 + 0x240) = iVar17;
              }
              else {
                if (*(int *)(param_1 + 0x244) <= iVar25) {
                  iVar9 = iVar25;
                  if (iVar25 + 0x20U < 0xa0) {
                    iVar17 = 0x80;
                  }
                  else {
                    uVar10 = iVar25 + 0x20U >> 5;
                    if (*(int *)(param_1 + 0x244) + 0x1fU < 0xa0) {
                      uVar20 = 4;
                      if (4 < uVar10) {
                        uVar20 = uVar10;
                      }
                    }
                    else {
                      uVar20 = uVar10 + (uVar10 * 3 >> 3) + 0x10;
                    }
                    uVar18 = (ulonglong)(uVar20 * 4);
                    if (DAT_14c872d28 != (longlong *)0x0) {
                      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar11 = (uint)(uVar18 + 0xf);
                        if (uVar20 < 0x1ffd) {
                          uVar18 = (ulonglong)
                                   (ushort)(&DAT_14c841d90)
                                           [0x32 - (byte)(&DAT_14c841e00)[uVar18 + 0xf >> 4]];
                        }
                        else {
                          uVar19 = (ulonglong)(uVar11 & 0xfffffff0);
                          if (uVar19 < 0x7ff1) {
                            bVar16 = (&DAT_14c841e00)[uVar11 >> 4];
                            uVar21 = 0x32;
                            if (0x32 < bVar16) {
                              uVar21 = (ulonglong)bVar16;
                            }
                            uVar26 = 0x32 - (ulonglong)bVar16;
                            do {
                              uVar18 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar26 & 0xffffffff];
                              if (((&DAT_14c841d90)[uVar26 & 0xffffffff] & 0xf) == 0)
                              goto LAB_143594e25;
                              lVar14 = uVar21 + 1 + uVar26;
                              uVar26 = uVar26 - 1;
                            } while (lVar14 != 0x33);
                          }
                          uVar18 = (ulonglong)DAT_14c841df8;
                          if (DAT_14c841df8 < 0x11) {
                            uVar18 = 0x10;
                          }
                          uVar18 = -uVar18 & (uVar19 + uVar18) - 1;
                        }
                      }
                      else {
                        uVar18 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar18);
                        iVar9 = *(int *)(param_1 + 0x240);
                      }
                    }
LAB_143594e25:
                    iVar12 = (int)(uVar18 >> 2);
                    iVar17 = iVar12 << 5;
                    if (iVar12 < (int)uVar10) {
                      iVar17 = -0x20;
                    }
                  }
                  *(int *)(param_1 + 0x244) = iVar17;
                  FUN_1446efbd8(local_d8,iVar9);
                  iVar17 = *(int *)(param_1 + 0x240) + 1;
                }
                iVar9 = iVar17 + 0x1f;
                if (-1 < iVar17) {
                  iVar9 = iVar17;
                }
                *(int *)(param_1 + 0x240) = iVar17;
                if (iVar17 % 0x20 != 0) {
                  lVar14 = *(longlong *)(param_1 + 0x238);
                  if (*(longlong *)(param_1 + 0x238) == 0) {
                    lVar14 = local_d8;
                  }
                  bVar16 = -(char)(iVar17 % 0x20);
                  *(uint *)(lVar14 + (longlong)(iVar9 >> 5) * 4) =
                       (uint)(*(int *)(lVar14 + (longlong)(iVar9 >> 5) * 4) << (bVar16 & 0x1f)) >>
                       (bVar16 & 0x1f);
                }
              }
              lVar14 = (longlong)iVar29;
              lVar15 = *(longlong *)(param_1 + 0x238);
              if (*(longlong *)(param_1 + 0x238) == 0) {
                lVar15 = local_d8;
              }
              bVar16 = (byte)iVar25 & 0x1f;
              puVar2 = (uint *)(lVar15 + (longlong)(iVar27 >> 5) * 4);
              *puVar2 = *puVar2 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
            }
            else {
              iVar29 = *(int *)(param_1 + 0x248);
              lVar14 = (longlong)iVar29;
              iVar25 = *(int *)(*(longlong *)(param_1 + 0x218) + 4 + lVar14 * 0x80);
              *(int *)(param_1 + 0x248) = iVar25;
              iVar9 = *(int *)(param_1 + 0x24c) + -1;
              *(int *)(param_1 + 0x24c) = iVar9;
              if (iVar9 != 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x218) + (longlong)iVar25 * 0x80) =
                     0xffffffff;
              }
            }
            lVar15 = *(longlong *)(param_1 + 0x238);
            if (*(longlong *)(param_1 + 0x238) == 0) {
              lVar15 = local_d8;
            }
            iVar25 = iVar29 + 0x1f;
            if (-1 < iVar29) {
              iVar25 = iVar29;
            }
            puVar2 = (uint *)(lVar15 + (longlong)(iVar25 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << ((byte)iVar29 & 0x1f);
            lVar15 = *(longlong *)(param_1 + 0x218);
            lVar14 = lVar14 * 0x80;
            *(undefined8 *)(lVar15 + lVar14) = *puVar22;
            uVar5 = *(undefined4 *)((longlong)puVar22 + 4);
            uVar6 = *(undefined4 *)(puVar22 + 1);
            uVar7 = *(undefined4 *)((longlong)puVar22 + 0xc);
            puVar3 = (undefined4 *)(lVar15 + 8 + lVar14);
            *puVar3 = *(undefined4 *)puVar22;
            puVar3[1] = uVar5;
            puVar3[2] = uVar6;
            puVar3[3] = uVar7;
            lVar4 = puVar22[2];
            *(longlong *)(lVar15 + 0x18 + lVar14) = lVar4;
            if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
              FUN_1456cec3c();
            }
            plVar23 = (longlong *)(lVar15 + lVar14);
            *(undefined1 *)((longlong)plVar23 + 0x24) = *(undefined1 *)((longlong)puVar22 + 0x1c);
            *(undefined4 *)(plVar23 + 4) = *(undefined4 *)(puVar22 + 3);
            plVar23[9] = 0;
            *(undefined4 *)(plVar23 + 10) = 0;
            plVar23[5] = 0;
            plVar23[6] = 0;
            *(undefined8 *)((longlong)plVar23 + 0x54) = 0xffffffff00000080;
            *(undefined4 *)((longlong)plVar23 + 0x5c) = 0;
            plVar23[0xd] = 0;
            *(undefined4 *)(plVar23 + 0xe) = 0;
            FUN_144881636(plVar23 + 5,puVar22 + 4);
            *(undefined4 *)(plVar23 + 0xf) = 0xffffffff;
            lVar14 = *plVar23;
            uVar10 = (uint)((ulonglong)lVar14 >> 0x10);
            uVar20 = (uint)lVar14 & 0xffff;
            uVar10 = ((uint)lVar14 << 0x10 | uVar20) + (int)((ulonglong)lVar14 >> 0x20) +
                     (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar20 >> 4);
            uVar20 = *(int *)(param_1 + 0x220) - *(int *)(param_1 + 0x24c);
            if ((uVar20 != 0) && (uVar20 != 1)) {
              lVar15 = *(longlong *)(param_1 + 600);
              if (*(longlong *)(param_1 + 600) == 0) {
                lVar15 = lVar1;
              }
              iVar25 = *(int *)(lVar15 + (ulonglong)(*(int *)(param_1 + 0x260) - 1U & uVar10) * 4);
              if (iVar25 != -1) {
                do {
                  _Dst = (void *)(*local_d0 + (longlong)iVar25 * 0x80);
                  if (*(longlong *)(*local_d0 + (longlong)iVar25 * 0x80) == lVar14) {
                    *(undefined4 *)((longlong)_Dst + 0x70) = 0;
                    if (*(longlong *)((longlong)_Dst + 0x68) != 0) {
                      FUN_1400020a8();
                    }
                    *(undefined4 *)((longlong)_Dst + 0x30) = 0;
                    if (*(int *)((longlong)_Dst + 0x34) != 0) {
                      FUN_14472eb64((longlong *)((longlong)_Dst + 0x28),0);
                    }
                    *(undefined8 *)((longlong)_Dst + 0x58) = 0xffffffff;
                    *(undefined4 *)((longlong)_Dst + 0x50) = 0;
                    if (0x80 < *(uint *)((longlong)_Dst + 0x54)) {
                      *(undefined4 *)((longlong)_Dst + 0x54) = 0x80;
                      FUN_1446efbd8((longlong)_Dst + 0x38,0);
                    }
                    if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
                      FUN_1400020a8();
                    }
                    if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
                      FUN_1400020a8();
                    }
                    memmove(_Dst,plVar23,0x78);
                    FUN_147bdf2b6(local_d0,iVar29);
                    goto LAB_143594cd1;
                  }
                  iVar25 = *(int *)((longlong)_Dst + 0x78);
                } while (iVar25 != -1);
              }
            }
            if (uVar20 < 4) {
              iVar25 = 1;
            }
            else {
              uVar18 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
              lVar14 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              iVar25 = 1 << ((byte)lVar14 & 0x1f);
            }
            if (((int)uVar20 < 1) || (iVar25 <= *(int *)(param_1 + 0x260))) {
              uVar10 = *(int *)(param_1 + 0x260) - 1U & uVar10;
              *(uint *)((longlong)plVar23 + 0x7c) = uVar10;
              lVar14 = *(longlong *)(param_1 + 600);
              if (*(longlong *)(param_1 + 600) == 0) {
                lVar14 = lVar1;
              }
              *(undefined4 *)(plVar23 + 0xf) =
                   *(undefined4 *)
                    (lVar14 + ((longlong)*(int *)(param_1 + 0x260) - 1U & (longlong)(int)uVar10) * 4
                    );
              lVar14 = *(longlong *)(param_1 + 600);
              if (*(longlong *)(param_1 + 600) == 0) {
                lVar14 = lVar1;
              }
              *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x260) - 1U & (longlong)(int)uVar10) *
                                4) = iVar29;
            }
            else {
              *(int *)(param_1 + 0x260) = iVar25;
              FUN_1417e407c(local_d0);
            }
          }
LAB_143594cd1:
          if (*(int *)(puVar22 + 3) != -1) {
            FUN_1447cbafe(&local_b8,&local_c8,puVar22 + 3);
          }
        }
        puVar22 = puVar22 + 0xe;
      } while (puVar22 != puVar24);
    }
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    uVar18 = uStack_b0 >> 0x20;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    if ((int)uVar18 != 0) {
      FUN_1447a08a2(&local_b8,0);
    }
    uStack_88 = 0xffffffff;
    local_84 = 0;
    local_90 = 0;
    if (0x80 < local_8c) {
      local_8c = 0x80;
      FUN_1446efbd8(local_a8,0);
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143595122 FUN_143595122 body=109 status=ok
// SIG undefined FUN_143595122(void)

undefined8 FUN_143595122(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14caf2210;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),0 < *(int *)(lVar2 + uVar6 * 4));
}



// FUNCTION 14359518f FUN_14359518f body=69 status=ok
// SIG undefined FUN_14359518f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14359518f(void)

{
  _DAT_14caf2328 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435951d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2330,1);
  return;
}



// FUNCTION 1435951d4 FUN_1435951d4 body=69 status=ok
// SIG undefined FUN_1435951d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435951d4(void)

{
  _DAT_14caf2340 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143595216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2348,1);
  return;
}



// FUNCTION 143595219 FUN_143595219 body=69 status=ok
// SIG undefined FUN_143595219(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143595219(void)

{
  _DAT_14caf2358 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014359525b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2360,1);
  return;
}



// FUNCTION 14359525e FUN_14359525e body=69 status=ok
// SIG undefined FUN_14359525e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14359525e(void)

{
  _DAT_14caf2370 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435952a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2378,1);
  return;
}



// FUNCTION 1435952a4 FUN_1435952a4 body=1025 status=ok
// SIG undefined FUN_1435952a4(void)

void FUN_1435952a4(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_258 [32];
  longlong *local_238;
  longlong *local_230;
  longlong *local_228;
  undefined4 local_220;
  longlong *local_218;
  undefined4 local_210;
  undefined8 *local_208;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  float local_1b8;
  longlong local_1a8 [4];
  longlong *local_188;
  undefined8 local_180;
  undefined1 local_178 [288];
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = DAT_14c8464e0;
  uStack_1e0 = DAT_14c8464e8;
  local_1d8 = DAT_14c8464f0;
  local_1d0 = (undefined4)DAT_14c8462d8;
  uStack_1cc = DAT_14c8462d8._4_4_;
  uStack_1c8 = (undefined4)DAT_14c8462e0;
  uStack_1c4 = DAT_14c8462e0._4_4_;
  local_1c0 = DAT_14c8462e8;
  plVar5 = (longlong *)FUN_14118b53e();
  lVar6 = plVar5[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar6 = plVar5[0x22];
  }
  local_1b8 = *(float *)(lVar6 + 0x3a8) * 0.017453292;
  local_200 = (**(code **)(*param_1 + 0x3c0))(param_1);
  local_208 = &local_1f8;
  cVar3 = (**(code **)(*param_1 + 0x3c0))(param_1);
  if (cVar3 == '\0') {
    local_58 = 0;
    local_50 = 0x400000000;
    local_188 = (longlong *)0x0;
    local_1a8[0] = param_1[0x1e];
    local_180 = 0x400000001;
    iVar1 = *(int *)(local_1a8[0] + 0x50);
    if ((longlong)iVar1 == 0) {
      local_180._0_4_ = 1;
    }
    else {
      lVar6 = *(longlong *)(local_1a8[0] + 0x48);
      lVar10 = 0;
      do {
        uVar2 = local_180;
        lVar9 = *(longlong *)(lVar6 + lVar10);
        lVar8 = (longlong)(int)local_180;
        uVar4 = (int)local_180 + 1;
        local_180 = CONCAT44(local_180._4_4_,uVar4);
        if (local_180._4_4_ < uVar4) {
          FUN_147be0af0(local_1a8,uVar2 & 0xffffffff);
        }
        plVar5 = local_188;
        if (local_188 == (longlong *)0x0) {
          plVar5 = local_1a8;
        }
        plVar5[lVar8] = lVar9;
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar1 * 8 != lVar10);
    }
    local_228 = local_188;
    if (local_188 == (longlong *)0x0) {
      local_228 = local_1a8;
    }
    local_220 = (int)local_180;
    FUN_14359f484(&local_208,&local_228,local_178);
    FUN_146f3a5aa(*(longlong *)(param_1[0x108] + 0x28) + 0x848,
                  *(undefined4 *)(param_1[0x1e] + 0x1d2c),local_178);
  }
  else {
    local_58 = 0;
    local_50 = 0x400000000;
    local_188 = (longlong *)0x0;
    local_180 = 0x400000000;
    if ((longlong)(int)param_1[0x20] == 0) goto LAB_143595666;
    plVar5 = (longlong *)param_1[0x1f];
    local_238 = plVar5 + (int)param_1[0x20];
    local_230 = param_1;
    do {
      uVar2 = local_180;
      lVar6 = *plVar5;
      lVar10 = (longlong)(int)local_180;
      uVar4 = (int)local_180 + 1;
      local_180 = CONCAT44(local_180._4_4_,uVar4);
      if (local_180._4_4_ < uVar4) {
        FUN_147be0af0(local_1a8,uVar2 & 0xffffffff);
      }
      plVar7 = local_188;
      if (local_188 == (longlong *)0x0) {
        plVar7 = local_1a8;
      }
      plVar7[lVar10] = lVar6;
      iVar1 = *(int *)(lVar6 + 0x50);
      if ((longlong)iVar1 != 0) {
        lVar10 = *(longlong *)(lVar6 + 0x48);
        lVar9 = 0;
        do {
          uVar2 = local_180;
          lVar8 = *(longlong *)(lVar10 + lVar9);
          lVar11 = (longlong)(int)local_180;
          uVar4 = (int)local_180 + 1;
          local_180 = CONCAT44(local_180._4_4_,uVar4);
          if (local_180._4_4_ < uVar4) {
            FUN_147be0af0(local_1a8,uVar2 & 0xffffffff);
          }
          plVar7 = local_188;
          if (local_188 == (longlong *)0x0) {
            plVar7 = local_1a8;
          }
          plVar7[lVar11] = lVar8;
          lVar9 = lVar9 + 8;
        } while ((longlong)iVar1 * 8 != lVar9);
      }
      local_218 = local_188;
      if (local_188 == (longlong *)0x0) {
        local_218 = local_1a8;
      }
      local_210 = (int)local_180;
      FUN_14359f484(&local_208,&local_218,local_178);
      FUN_146f3a5aa(*(longlong *)(local_230[0x108] + 0x28) + 0x848,*(undefined4 *)(lVar6 + 0x1d2c),
                    local_178);
      bVar12 = (longlong)local_50 < 0;
      local_50 = local_50 & 0xffffffff00000000;
      if (bVar12) {
        FUN_147be0be4(local_178);
      }
      bVar12 = (longlong)local_180 < 0;
      local_180 = local_180 & 0xffffffff00000000;
      if (bVar12) {
        FUN_147be0c42(local_1a8);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != local_238);
  }
  if (local_188 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143595666:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435956a6 FUN_1435956a6 body=239 status=ok
// SIG undefined FUN_1435956a6(void)

bool FUN_1435956a6(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  
  if (*(char *)(param_1 + 0x8cc) == '\0') {
    FUN_143594922(param_1);
  }
  bVar1 = true;
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    puVar3 = &DAT_149dfb77a;
    if (*(int *)(param_1 + 0x38) != 0) {
      puVar3 = *(undefined2 **)(param_1 + 0x30);
    }
    lVar4 = 0;
    while( true ) {
      uVar5 = *(ushort *)((longlong)puVar3 + lVar4);
      uVar6 = (ulonglong)uVar5;
      uVar7 = *(ushort *)((longlong)&DAT_149dfb77a + lVar4);
      if (uVar5 != uVar7) break;
      if (uVar5 == 0) goto LAB_143595735;
LAB_143595700:
      lVar4 = lVar4 + 2;
    }
    if ((uVar7 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      uVar8 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_143595700;
    }
    if (uVar5 != uVar7) {
      if (*(int *)(param_1 + 0x38) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x30);
      }
      uVar2 = FUN_140496b24();
      lVar4 = FUN_141433b6f(uVar2,0,puVar3,0,0,0);
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      *(longlong *)(param_1 + 0x1d8) = lVar4;
      return lVar4 != 0;
    }
LAB_143595735:
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 143595796 FUN_143595796 body=123 status=ok
// SIG undefined FUN_143595796(void)

ulonglong FUN_143595796(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    if (*(int *)(param_1 + 0x48) < 2) {
      uVar4 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      uVar2 = FUN_1459d4fbc();
      lVar3 = FUN_141433b6f(uVar2,0,uVar1,0,0,0);
      uVar4 = CONCAT71((int7)((ulonglong)uVar1 >> 8),lVar3 != 0);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      *(longlong *)(param_1 + 0x1e0) = lVar3;
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 143595812 FUN_143595812 body=4181 status=ok
// SIG undefined FUN_143595812(void)

undefined4 FUN_143595812(longlong *param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  LARGE_INTEGER LVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  bool bVar29;
  float fVar30;
  double dVar31;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  wchar_t *local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  LARGE_INTEGER *local_b0;
  code *local_a8;
  code *local_a0;
  longlong local_98;
  longlong *local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong *local_78;
  LARGE_INTEGER local_70;
  int local_68;
  longlong local_60;
  LARGE_INTEGER local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  pwVar10 = (wchar_t *)FUN_14045d4ce(param_4,L"InitialConnectTimeout=",0);
  if (pwVar10 != (wchar_t *)0x0) {
    dVar31 = _wtof(pwVar10);
    fVar30 = (float)dVar31;
    if ((fVar30 != 0.0) || (NAN(fVar30))) {
      *(float *)((longlong)param_1 + 0xdc) = fVar30;
    }
  }
  pwVar10 = (wchar_t *)FUN_14045d4ce(param_4,L"ConnectionTimeout=",0);
  if (pwVar10 != (wchar_t *)0x0) {
    dVar31 = _wtof(pwVar10);
    fVar30 = (float)dVar31;
    if ((fVar30 != 0.0) || (NAN(fVar30))) {
      *(float *)(param_1 + 0x1c) = fVar30;
    }
  }
  lVar11 = FUN_14045d4ce(param_4,L"NoTimeouts",0);
  if (lVar11 != 0) {
    *(byte *)((longlong)param_1 + 0x309) = *(byte *)((longlong)param_1 + 0x309) | 0x40;
  }
  QueryPerformanceCounter(&local_70);
  param_1[0x62] = (longlong)((double)local_70.QuadPart * DAT_14c83f420 + 16777216.0);
  uVar6 = (**(code **)(*param_1 + 0x2e0))(param_1);
  bVar15 = (byte)param_2;
  if (bVar15 != 0) goto LAB_143595b18;
  lVar11 = param_1[0x2e];
  if (lVar11 != 0) {
    param_1[0x2e] = 0;
    FUN_145c6ba12(lVar11);
    FUN_1400020a8(lVar11);
  }
  if (*(char *)((longlong)param_1 + 0x849) == '\0') {
    (**(code **)(*param_1 + 0x2e8))(param_1);
    lVar11 = param_1[0x35];
    FUN_1463ecbd6();
    if ((DAT_14caf2468 == (longlong *)0x0 || DAT_14caf2470 == 0) ||
       (cVar5 = (**(code **)(*DAT_14caf2468 + 0x30))(), cVar5 == '\0')) {
      if (DAT_14caf2460 == '\0') {
        DAT_14caf2460 = '\x01';
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        cVar5 = FUN_14054d46e(&DAT_14c846b20,L"RepDriverEnable");
        if (cVar5 == '\0') {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          cVar5 = FUN_14054d46e(&DAT_14c846b20,L"RepDriverDisable");
          if (cVar5 == '\0') goto LAB_1435959ac;
          DAT_14c7615fc = 0;
        }
        else {
          DAT_14c7615fc = 1;
          if (param_1 != (longlong *)0x0) goto LAB_1435959ff;
        }
LAB_143595a4b:
        uVar12 = 0;
      }
      else {
LAB_1435959ac:
        uVar12 = 0;
        if ((param_1 != (longlong *)0x0) && (DAT_14c7615fc != 0)) {
LAB_1435959ff:
          if (param_1[0x3c] == 0) goto LAB_143595a4b;
          uVar12 = FUN_147bd6ea4(DAT_14c951640);
        }
      }
    }
    else {
      FUN_1463ecbd6();
      plVar13 = DAT_14caf2468;
      if (DAT_14caf2470 == 0) {
        plVar13 = (longlong *)0x0;
      }
      uVar12 = (**(code **)(*plVar13 + 0x58))(plVar13,param_1,param_4,lVar11);
    }
    FUN_143596868(param_1,uVar12);
  }
  iVar16 = 1000;
  if ((int)param_1[0x14] < 1000) {
    iVar16 = (int)param_1[0x14];
  }
  iVar24 = 1;
  if (1 < iVar16) {
    iVar24 = iVar16;
  }
  param_1[0xf4] = (longlong)(1.0 / (double)iVar24);
  FUN_14168d756(param_1 + 0xdd);
  if ((int)param_1[0xf7] != 2) {
    FUN_1446efa72(param_1 + 0xf6,0,2,0x10);
    *(undefined4 *)(param_1 + 0xf7) = 2;
  }
  puVar28 = (undefined8 *)param_1[0xf6];
  *puVar28 = &PTR_LAB_14a9b20d0;
  LOCK();
  UNLOCK();
  lVar21 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar21 == 0) {
    LOCK();
    UNLOCK();
    lVar21 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  puVar28[2] = lVar21;
  *puVar28 = &PTR_FUN_14a9eec00;
  puVar28[3] = param_1;
LAB_143595b18:
  param_1[0x5f] = param_3;
  if (param_1[0x107] == 0) {
    lVar21 = FUN_14001cc68(0x30,0x10);
    FUN_14581e442(lVar21);
    lVar11 = param_1[0x107];
    param_1[0x107] = lVar21;
    if (lVar11 != 0) {
      FUN_14591a28e(lVar11);
      FUN_1400020a8(lVar11);
      lVar21 = param_1[0x107];
    }
    uVar8 = *(uint *)(param_1 + 0x113);
    *(ulonglong *)(lVar21 + 0x28) = (ulonglong)(bVar15 ^ 1) | (ulonglong)uVar8 << 0x20;
    FUN_145df3f72(lVar21 + 8,uVar8,1);
    FUN_145bdbefa(param_1[0x107]);
    FUN_1463ec8ae(param_1[0x107]);
    FUN_1459a0b9a(param_1[0x107]);
  }
  if ((*(char *)((longlong)param_1 + 0x849) == '\x01') && (param_1[0x108] == 0)) {
    FUN_1435969fa(param_1,param_2);
  }
  uVar18 = param_1[0x4f];
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar18 == DAT_14c892fa8) {
    FUN_145d047e6(param_1,1);
    DAT_14c75f429 = *(byte *)((longlong)param_1 + 0x849) ^ 1;
    if ((*(byte *)((longlong)param_1 + 0x849) == 1) && (DAT_14c998018 != DAT_14c998044)) {
      FUN_142a6425a(&DAT_14c998008);
    }
  }
  if ((*(char *)((longlong)param_1 + 0x849) == '\0') && ((int)param_1[0x115] == -1)) {
    DAT_14caf244c = DAT_14caf244c + 1;
    *(uint *)(param_1 + 0x115) = (uint)(DAT_14caf244c | 0x80);
  }
  if (bVar15 == 0) {
    (**(code **)(*param_1 + 0x2c8))(param_1);
  }
  *(undefined4 *)(param_1 + 0x117) = *(undefined4 *)(DAT_14cb0d2b0 + 0x10d0);
  FUN_145911a80(param_1);
  uVar18 = param_1[0x4f];
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar18 == DAT_14c892fa8) {
    plVar13 = (longlong *)FUN_145b1786a();
    lVar11 = plVar13[0x22];
    if (lVar11 == 0) {
      (**(code **)(*plVar13 + 1000))(plVar13);
      lVar11 = plVar13[0x22];
    }
    if ((longlong)*(int *)(lVar11 + 0x30) != 0) {
      puVar28 = *(undefined8 **)(lVar11 + 0x28);
      puVar27 = puVar28 + (longlong)*(int *)(lVar11 + 0x30) * 7;
      local_90 = param_1 + 0x52;
      local_78 = param_1 + 0x59;
      local_80 = param_1 + 0x54;
      do {
        if (*(char *)(puVar28 + 6) == '\x02') {
          if (*(char *)((longlong)param_1 + 0x849) == '\0') goto LAB_143595d8a;
        }
        else if ((*(char *)(puVar28 + 6) != '\x01') ||
                (*(char *)((longlong)param_1 + 0x849) != '\0')) {
LAB_143595d8a:
          FUN_14475cc44(puVar28 + 2,&local_70);
          LVar22.QuadPart = (LONGLONG)&DAT_149dfb77a;
          if (local_68 != 0) {
            LVar22 = local_70;
          }
          FUN_1446f470e(&local_60,LVar22.QuadPart,1);
          if ((code *)local_70.QuadPart != (code *)0x0) {
            FUN_1400020a8();
          }
          if ((int)param_1[0x53] != *(int *)((longlong)param_1 + 0x2c4)) {
            uVar8 = (uint)((ulonglong)local_60 >> 0x10);
            uVar20 = (uint)local_60 & 0xffff;
            plVar13 = (longlong *)param_1[0x5a];
            if ((longlong *)param_1[0x5a] == (longlong *)0x0) {
              plVar13 = local_78;
            }
            iVar16 = *(int *)((longlong)plVar13 +
                             (ulonglong)
                             ((int)param_1[0x5b] - 1U &
                             (int)((ulonglong)local_60 >> 0x20) + ((uint)local_60 << 0x10 | uVar20)
                             + (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar20 >> 4)) * 4);
            if (iVar16 != -1) {
              do {
                plVar13 = (longlong *)(*local_90 + (longlong)iVar16 * 0x18);
                if (*plVar13 == local_60) {
                  if (plVar13 != (longlong *)0x0) goto LAB_143595e78;
                  break;
                }
                iVar16 = (int)plVar13[2];
              } while (iVar16 != -1);
            }
          }
          if (((((*(int *)((longlong)puVar28 + 0xc) == 0) ||
                (uVar8 = *(uint *)(puVar28 + 1), (int)uVar8 < 0)) || (DAT_14c9647dc <= (int)uVar8))
              || ((plVar13 = (longlong *)
                             ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                  plVar13 == (longlong *)0x0 ||
                  ((int)plVar13[2] != *(int *)((longlong)puVar28 + 0xc))))) ||
             (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 || (lVar11 = *plVar13, lVar11 == 0)))) {
            if (puVar28[2] != 0) {
              lVar11 = FUN_140007850();
              cVar5 = (*(code *)PTR_FUN_14c758760)();
              if ((lVar11 == 0) || (cVar5 == '\0')) {
                if (lVar11 != 0) {
                  uVar8 = *(uint *)(lVar11 + 0xc);
                  goto LAB_1435962b2;
                }
                puVar28[1] = 0;
              }
              else {
                uVar8 = *(uint *)(lVar11 + 0xc);
                if ((int)uVar8 < DAT_14c9647dc) {
                  lVar21 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                }
                else {
                  lVar21 = 0;
                }
                if ((*(uint *)(lVar21 + 8) & 0x8400000) == 0) {
LAB_1435962b2:
                  *(uint *)(puVar28 + 1) = uVar8;
                  if ((int)uVar8 < DAT_14c9647dc) {
                    lVar21 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                  }
                  else {
                    lVar21 = 0;
                  }
                  iVar16 = *(int *)(lVar21 + 0x10);
                  if (*(int *)(lVar21 + 0x10) == 0) {
                    LOCK();
                    iVar16 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar24 = DAT_14c964868 + 1;
                    bVar29 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar16;
                    if (bVar29) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar24);
                    }
                    LOCK();
                    iVar16 = *(int *)(lVar21 + 0x10);
                    bVar29 = iVar16 == 0;
                    if (bVar29) {
                      *(int *)(lVar21 + 0x10) = iVar24;
                      iVar16 = 0;
                    }
                    UNLOCK();
                    if (bVar29) {
                      iVar16 = iVar24;
                    }
                  }
                  *(int *)((longlong)puVar28 + 0xc) = iVar16;
                }
                if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0) goto LAB_143595f56;
              }
            }
          }
          else {
LAB_143595f56:
            if (DAT_14c949118 == 0) {
              local_58.QuadPart = (LONGLONG)FUN_140631fbe;
              lVar21 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c949118 = lVar21;
              FUN_1446f470e(local_50,L"Class",1);
              local_b0 = &local_58;
              local_b8 = &LAB_146891e90;
              local_c0 = (code *)&LAB_146273097;
              local_d0 = L"Engine";
              local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,199);
              local_d8 = 0x20;
              local_e0 = 0x10000000;
              local_e8._0_4_ = 8;
              FUN_14574b4b2(lVar21);
              DAT_14c949118 = lVar21;
              if (DAT_14c951858 == 0) {
                local_70.QuadPart = (LONGLONG)FUN_1449e2820;
                local_a0 = FUN_14081d0ea;
                local_a8 = FUN_14081d0ea;
                local_b8 = &LAB_1468c5283;
                local_c0 = FUN_142809da0;
                local_c8 = L"Engine";
                local_d0 = (wchar_t *)0x400000000;
                local_d8 = CONCAT44(local_d8._4_4_,0x10000000);
                local_e0 = 8;
                local_e8._0_4_ = 0x50;
                local_b0 = &local_70;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              lVar4 = DAT_14c951858;
              lVar21 = DAT_14c949118;
              uVar12 = FUN_1449e2fb2();
              local_e8 = L"Class";
              FUN_14574b446(uVar12,lVar21,lVar4,L"/Script/CoreUObject");
            }
            if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
                (lVar21 = FUN_1458e6bb8(), lVar21 != 0)) &&
               ((*(int *)(lVar21 + 0x38) <= *(int *)(lVar11 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar21 + 0x38) * 8)
                 == lVar21 + 0x30)))) {
              lVar21 = param_1[0x51];
              if ((lVar21 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c(lVar21);
              }
              cVar5 = FUN_147be3c6c(lVar21,*puVar28);
              if (cVar5 != '\0') {
                local_98 = FUN_1463ec950(param_1,lVar11);
                if ((local_98 != 0) && (DAT_14c950c29 != 0)) {
                  FUN_1456cec3c(local_98);
                }
                if (*(int *)((longlong)param_1 + 0x2c4) == 0) {
                  iVar16 = (int)param_1[0x53];
                  *(int *)(param_1 + 0x53) = iVar16 + 1;
                  if (*(int *)((longlong)param_1 + 0x29c) == iVar16) {
                    FUN_14482b872(local_90,iVar16);
                  }
                  iVar24 = (int)param_1[0x57];
                  if (iVar24 == 0) {
                    iVar7 = -1;
                  }
                  else {
                    iVar7 = iVar24 + 0x1e;
                    if (-1 < iVar24 + -1) {
                      iVar7 = iVar24 + -1;
                    }
                    iVar7 = iVar7 >> 5;
                  }
                  iVar17 = iVar24 + 1;
                  iVar26 = iVar24 + 0x1f;
                  if (-1 < iVar24) {
                    iVar26 = iVar24;
                  }
                  if (iVar26 >> 5 == iVar7) {
                    *(int *)(param_1 + 0x57) = iVar17;
                  }
                  else {
                    if (*(int *)((longlong)param_1 + 700) <= iVar24) {
                      uVar8 = iVar24 + 0x20;
                      local_88 = (ulonglong)uVar8;
                      iVar7 = iVar24;
                      if (uVar8 < 0xa0) {
                        iVar17 = 0x80;
                      }
                      else {
                        uVar8 = uVar8 >> 5;
                        local_88 = (ulonglong)uVar8;
                        if (*(int *)((longlong)param_1 + 700) + 0x1fU < 0xa0) {
                          uVar20 = 4;
                          if (4 < uVar8) {
                            uVar20 = uVar8;
                          }
                        }
                        else {
                          uVar20 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
                        }
                        uVar18 = (ulonglong)(uVar20 * 4);
                        if (DAT_14c872d28 != (longlong *)0x0) {
                          if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                            uVar8 = (uint)(uVar18 + 0xf);
                            if (uVar20 < 0x1ffd) {
                              uVar18 = (ulonglong)
                                       (ushort)(&DAT_14c841d90)
                                               [0x32 - (byte)(&DAT_14c841e00)[uVar18 + 0xf >> 4]];
                            }
                            else {
                              uVar19 = (ulonglong)(uVar8 & 0xfffffff0);
                              if (uVar19 < 0x7ff1) {
                                bVar15 = (&DAT_14c841e00)[uVar8 >> 4];
                                uVar23 = 0x32;
                                if (0x32 < bVar15) {
                                  uVar23 = (ulonglong)bVar15;
                                }
                                uVar25 = 0x32 - (ulonglong)bVar15;
                                do {
                                  uVar18 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                                  if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0)
                                  goto LAB_1435965b2;
                                  lVar11 = uVar23 + 1 + uVar25;
                                  uVar25 = uVar25 - 1;
                                } while (lVar11 != 0x33);
                              }
                              uVar18 = (ulonglong)DAT_14c841df8;
                              if (DAT_14c841df8 < 0x11) {
                                uVar18 = 0x10;
                              }
                              uVar18 = -uVar18 & (uVar19 + uVar18) - 1;
                            }
                          }
                          else {
                            uVar18 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar18,0);
                            iVar7 = (int)param_1[0x57];
                          }
                        }
LAB_1435965b2:
                        iVar9 = (int)(uVar18 >> 2);
                        iVar17 = iVar9 << 5;
                        if (iVar9 < (int)local_88) {
                          iVar17 = -0x20;
                        }
                      }
                      *(int *)((longlong)param_1 + 700) = iVar17;
                      FUN_1446efbd8(local_80,iVar7);
                      iVar17 = (int)param_1[0x57] + 1;
                    }
                    iVar7 = iVar17 + 0x1f;
                    if (-1 < iVar17) {
                      iVar7 = iVar17;
                    }
                    *(int *)(param_1 + 0x57) = iVar17;
                    if (iVar17 % 0x20 != 0) {
                      plVar13 = (longlong *)param_1[0x56];
                      if ((longlong *)param_1[0x56] == (longlong *)0x0) {
                        plVar13 = local_80;
                      }
                      bVar15 = -(char)(iVar17 % 0x20);
                      *(uint *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) =
                           (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) <<
                                 (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
                    }
                  }
                  lVar11 = (longlong)iVar16;
                  plVar13 = (longlong *)param_1[0x56];
                  if ((longlong *)param_1[0x56] == (longlong *)0x0) {
                    plVar13 = local_80;
                  }
                  bVar15 = (byte)iVar24 & 0x1f;
                  puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar26 >> 5) * 4);
                  *puVar1 = *puVar1 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
                }
                else {
                  iVar16 = (int)param_1[0x58];
                  lVar11 = (longlong)iVar16;
                  iVar24 = *(int *)(param_1[0x52] + 4 + lVar11 * 0x18);
                  *(int *)(param_1 + 0x58) = iVar24;
                  iVar7 = *(int *)((longlong)param_1 + 0x2c4) + -1;
                  *(int *)((longlong)param_1 + 0x2c4) = iVar7;
                  if (iVar7 != 0) {
                    *(undefined4 *)(param_1[0x52] + (longlong)iVar24 * 0x18) = 0xffffffff;
                  }
                }
                plVar13 = (longlong *)param_1[0x56];
                if ((longlong *)param_1[0x56] == (longlong *)0x0) {
                  plVar13 = local_80;
                }
                iVar24 = iVar16 + 0x1f;
                if (-1 < iVar16) {
                  iVar24 = iVar16;
                }
                puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar24 >> 5) * 4);
                *puVar1 = *puVar1 | 1 << ((byte)iVar16 & 0x1f);
                plVar13 = (longlong *)(param_1[0x52] + lVar11 * 0x18);
                *plVar13 = local_60;
                plVar13[1] = local_98;
                lVar11 = local_60;
                if ((local_98 != 0) && (DAT_14c950c29 != 0)) {
                  FUN_1456cec3c(local_98);
                  lVar11 = *plVar13;
                }
                *(undefined4 *)(plVar13 + 2) = 0xffffffff;
                uVar8 = (uint)((ulonglong)lVar11 >> 0x10);
                uVar20 = (uint)lVar11 & 0xffff;
                uVar8 = ((uint)lVar11 << 0x10 | uVar20) + (int)((ulonglong)lVar11 >> 0x20) +
                        (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar20 >> 4);
                uVar20 = (int)param_1[0x53] - *(int *)((longlong)param_1 + 0x2c4);
                iVar24 = 1;
                if (uVar20 != 1) {
                  if ((int)param_1[0x53] != *(int *)((longlong)param_1 + 0x2c4)) {
                    plVar14 = (longlong *)param_1[0x5a];
                    if ((longlong *)param_1[0x5a] == (longlong *)0x0) {
                      plVar14 = local_78;
                    }
                    iVar7 = *(int *)((longlong)plVar14 +
                                    (ulonglong)((int)param_1[0x5b] - 1U & uVar8) * 4);
                    if (iVar7 != -1) {
                      do {
                        plVar14 = (longlong *)(*local_90 + (longlong)iVar7 * 0x18);
                        if (*plVar14 == lVar11) {
                          uVar2 = *(undefined4 *)((longlong)plVar13 + 4);
                          lVar11 = plVar13[1];
                          uVar3 = *(undefined4 *)((longlong)plVar13 + 0xc);
                          *(int *)plVar14 = (int)*plVar13;
                          *(undefined4 *)((longlong)plVar14 + 4) = uVar2;
                          *(int *)(plVar14 + 1) = (int)lVar11;
                          *(undefined4 *)((longlong)plVar14 + 0xc) = uVar3;
                          FUN_147bdf5f0(local_90,iVar16);
                          goto LAB_143596231;
                        }
                        iVar7 = (int)plVar14[2];
                      } while (iVar7 != -1);
                    }
                  }
                  if (3 < uVar20) {
                    uVar18 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
                    lVar11 = 0x3f;
                    if (uVar18 != 0) {
                      for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                      }
                    }
                    iVar24 = 1 << ((byte)lVar11 & 0x1f);
                  }
                }
                iVar7 = iVar16;
                if (((int)uVar20 < 1) || (iVar24 <= (int)param_1[0x5b])) {
                  uVar8 = (int)param_1[0x5b] - 1U & uVar8;
                  *(uint *)((longlong)plVar13 + 0x14) = uVar8;
                  plVar14 = (longlong *)param_1[0x5a];
                  if ((longlong *)param_1[0x5a] == (longlong *)0x0) {
                    plVar14 = local_78;
                  }
                  *(undefined4 *)(plVar13 + 2) =
                       *(undefined4 *)
                        ((longlong)plVar14 +
                        ((longlong)(int)param_1[0x5b] - 1U & (longlong)(int)uVar8) * 4);
                  plVar13 = (longlong *)param_1[0x5a];
                  if ((longlong *)param_1[0x5a] == (longlong *)0x0) {
                    plVar13 = local_78;
                  }
                  *(int *)((longlong)plVar13 +
                          ((longlong)(int)param_1[0x5b] - 1U & (longlong)(int)uVar8) * 4) = iVar16;
                }
                else {
                  *(int *)(param_1 + 0x5b) = iVar24;
                  FUN_1417e439e(local_90);
                }
LAB_143596231:
                plVar13 = (longlong *)(*local_90 + (longlong)iVar7 * 0x18);
LAB_143595e78:
                lVar11 = param_1[0x51];
                if ((lVar11 != 0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c(lVar11);
                }
                if (plVar13[1] == 0) {
                  uVar19 = 0;
                  uVar18 = 0;
                }
                else {
                  uVar8 = *(uint *)(plVar13[1] + 0xc);
                  uVar19 = (ulonglong)uVar8;
                  if ((int)uVar8 < DAT_14c9647dc) {
                    lVar21 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                  }
                  else {
                    lVar21 = 0;
                  }
                  uVar18 = (ulonglong)*(uint *)(lVar21 + 0x10);
                  if (*(uint *)(lVar21 + 0x10) == 0) {
                    LOCK();
                    iVar16 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar8 = DAT_14c964868 + 1;
                    bVar29 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar16;
                    if (bVar29) {
                      local_98 = CONCAT44(local_98._4_4_,uVar8);
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,uVar8);
                      uVar8 = (uint)local_98;
                    }
                    LOCK();
                    uVar20 = *(uint *)(lVar21 + 0x10);
                    bVar29 = uVar20 == 0;
                    if (bVar29) {
                      *(uint *)(lVar21 + 0x10) = uVar8;
                      uVar20 = 0;
                    }
                    UNLOCK();
                    uVar18 = (ulonglong)uVar20;
                    if (bVar29) {
                      uVar18 = (ulonglong)uVar8;
                    }
                  }
                }
                FUN_141045d9a(lVar11,*puVar28,uVar19 | uVar18 << 0x20);
              }
            }
          }
        }
        puVar28 = puVar28 + 7;
      } while (puVar28 != puVar27);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 143596868 FUN_143596868 body=402 status=ok
// SIG undefined FUN_143596868(void)

void FUN_143596868(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (*(longlong **)(param_1 + 0x830) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2b8))();
    iVar1 = *(int *)(param_1 + 0x100);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf8);
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(lVar4 + lVar5);
        if ((lVar3 != 0) && (*(longlong **)(lVar3 + 0x14a8) != (longlong *)0x0)) {
          (**(code **)(**(longlong **)(lVar3 + 0x14a8) + 0x2e8))();
          *(undefined8 *)(lVar3 + 0x14a8) = 0;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    lVar4 = *(longlong *)(param_1 + 0xf0);
    if ((lVar4 != 0) && (*(longlong **)(lVar4 + 0x14a8) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar4 + 0x14a8) + 0x2e8))();
      *(undefined8 *)(lVar4 + 0x14a8) = 0;
    }
  }
  if ((param_2 != (longlong *)0x0) && (*(char *)(param_1 + 0x849) != '\0')) {
    FUN_144757f48(param_2,0x40000000);
    uVar2 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    do {
      uVar2 = *(uint *)(lVar4 + 8);
      if ((uVar2 >> 0x15 & 1) != 0) {
        return;
      }
      LOCK();
      bVar6 = uVar2 == *(uint *)(lVar4 + 8);
      if (bVar6) {
        *(uint *)(lVar4 + 8) = uVar2 | 0x200000;
      }
      UNLOCK();
    } while (!bVar6);
    return;
  }
  if ((param_2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    *(longlong **)(param_1 + 0x830) = param_2;
    if (param_2 == (longlong *)0x0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong **)(param_1 + 0x830) = param_2;
  }
  (**(code **)(*param_2 + 0x2a0))(param_2,*(undefined8 *)(param_1 + 0x1a8));
  (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2a8))(*(longlong **)(param_1 + 0x830),param_1);
                    /* WARNING: Could not recover jumptable at 0x0001435969bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2b0))
            (*(longlong **)(param_1 + 0x830),*(undefined8 *)(param_1 + 0x1a8));
  return;
}



// FUNCTION 1435969fa FUN_1435969fa body=718 status=ok
// SIG undefined FUN_1435969fa(void)

void FUN_1435969fa(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 local_68;
  int local_60;
  byte local_5c;
  byte local_5b;
  undefined8 *local_58;
  int local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = (**(code **)(*param_1 + 0x2f0))();
  if ((cVar4 != '\0') && (lVar6 = FUN_147bd6b80(DAT_14c951640,param_1[0x3d]), lVar6 != 0)) {
    FUN_147bd6c3a(lVar6,param_1);
    plVar9 = param_1 + 0xc;
    if ((byte)param_2 != 0) {
      plVar9 = (longlong *)((longlong)param_1 + 0x7c);
    }
    if ((param_1[0x35] != 0) &&
       (plVar2 = *(longlong **)(param_1[0x35] + 0x1f0), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x418))(plVar2,plVar9,param_2 ^ 1);
    }
    local_78 = 0x10000;
    iStack_74 = 0x10000;
    iStack_70 = 0x4000;
    iStack_6c = 0x10000;
    local_68 = 0x80000000000;
    local_60 = 0x800;
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_5c = (byte)param_2 ^ 1;
    local_80 = lVar6;
    local_5b = local_5c;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar3 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_14a9eed90;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_58[2] = lVar8;
    *local_58 = &PTR_FUN_14a9eed20;
    local_58[3] = 0;
    iVar5 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_58 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar5 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar5 = *(int *)(lVar6 + 0x10);
        bVar11 = iVar5 == 0;
        if (bVar11) {
          *(int *)(lVar6 + 0x10) = iVar10;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar5 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar3 + 0x1c) = iVar5;
    puVar3[4] = FUN_14359f266;
    *(undefined4 *)(puVar3 + 5) = 0;
    if ((int)*plVar9 != 0) {
      local_78 = (int)*plVar9;
    }
    if (*(int *)((longlong)plVar9 + 4) != 0) {
      iStack_74 = *(int *)((longlong)plVar9 + 4);
    }
    if ((int)plVar9[1] != 0) {
      iStack_70 = (int)plVar9[1];
    }
    if (*(int *)((longlong)plVar9 + 0xc) != 0) {
      iStack_6c = *(int *)((longlong)plVar9 + 0xc);
    }
    if ((int)plVar9[2] != 0) {
      local_68 = CONCAT44(local_68._4_4_,(int)plVar9[2]);
    }
    if (*(int *)((longlong)plVar9 + 0x14) != 0) {
      local_68 = CONCAT44(*(int *)((longlong)plVar9 + 0x14),(undefined4)local_68);
    }
    if ((int)plVar9[3] != 0) {
      local_60 = (int)plVar9[3];
    }
    local_48 = param_1[0x107];
    uVar7 = FUN_142a9d6a8(&local_80);
    FUN_147bd5762(param_1,uVar7);
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_143596a29;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143596a29:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143596cca FUN_143596cca body=681 status=ok
// SIG undefined FUN_143596cca(void)

void FUN_143596cca(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_78 [2];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = FUN_14001cc68(0x260,0x10);
  FUN_1461ce59a(lVar7,param_1 + 0x6e8);
  lVar2 = *(longlong *)(param_1 + 0x170);
  *(longlong *)(param_1 + 0x170) = lVar7;
  if (lVar2 != 0) {
    FUN_145c6ba12(lVar2);
    FUN_1400020a8(lVar2);
    lVar7 = *(longlong *)(param_1 + 0x170);
  }
  if (lVar7 == 0) goto LAB_143596d27;
  local_38 = *(undefined8 *)(param_1 + 0x198);
  local_30 = *(longlong *)(param_1 + 0x1a0);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  local_48 = *(undefined8 *)(param_1 + 0x188);
  local_40 = *(longlong *)(param_1 + 400);
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_147079830(lVar7,&local_48,&local_38);
  local_88 = *(undefined8 *)(param_1 + 0x278);
  local_98 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_90 = 0;
  FUN_142b03fc8(*(undefined8 *)(param_1 + 0x170),CONCAT71((int7)((ulonglong)local_98 >> 8),1),0x400,
                1);
  uVar3 = *(undefined8 *)(param_1 + 0x170);
  FUN_140056680(local_78,L"Engine.EngineHandlerComponentFactory(StatelessConnectHandlerComponent)");
  FUN_142b045d0(uVar3,&local_68,local_78,1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  plVar4 = local_60;
  if (local_60 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x178) = local_68;
    plVar8 = *(longlong **)(param_1 + 0x180);
    if (plVar8 != (longlong *)0x0) {
LAB_143596ea0:
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      *(longlong **)(param_1 + 0x180) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_143596eb4;
      goto LAB_143596ed1;
    }
  }
  else {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x178) = local_68;
    if (*(longlong **)(param_1 + 0x180) != local_60) {
      LOCK();
      *(int *)((longlong)local_60 + 0xc) = *(int *)((longlong)local_60 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x180);
      if (plVar8 != (longlong *)0x0) goto LAB_143596ea0;
      *(longlong **)(param_1 + 0x180) = local_60;
    }
LAB_143596eb4:
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
LAB_143596ed1:
    local_68 = *(longlong *)(param_1 + 0x178);
  }
  if (((local_68 != 0) && (plVar4 = *(longlong **)(param_1 + 0x180), plVar4 != (longlong *)0x0)) &&
     (0 < (int)plVar4[1])) {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) {
        FUN_1435b3bea(0,param_1);
        goto LAB_143596f30;
      }
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    FUN_1435b3bea(*(undefined8 *)(param_1 + 0x178),param_1);
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
LAB_143596f30:
  FUN_145ae349a(*(undefined8 *)(param_1 + 0x170));
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
LAB_143596d27:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143596f74 FUN_143596f74 body=69 status=ok
// SIG undefined FUN_143596f74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143596f74(void)

{
  _DAT_14caf2388 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143596fb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf2390,1);
  return;
}



// FUNCTION 143596fba FUN_143596fba body=1733 status=ok
// SIG undefined FUN_143596fba(void)

/* WARNING: Removing unreachable block (ram,0x00014359753a) */

void FUN_143596fba(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  byte bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint local_88 [2];
  longlong local_80;
  uint *local_78;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar9 = param_1[0x1e];
  if (lVar9 == 0) goto LAB_143597220;
  if (*(longlong *)(lVar9 + 0x68) == 0) {
    lVar17 = 0;
  }
  else {
    lVar16 = FUN_1413dbcfa();
    lVar9 = *(longlong *)(lVar9 + 0x68);
    if (lVar9 == 0) {
LAB_143597672:
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      if ((lVar16 != 0) && (lVar1 = *(longlong *)(lVar9 + 0x10), lVar1 != 0)) {
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar16 + 0x38)) goto LAB_143597672;
        lVar17 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
            lVar16 + 0x30) {
          lVar17 = lVar9;
        }
      }
    }
    lVar9 = param_1[0x1e];
  }
  bVar13 = lVar17 != 0 & DAT_14caf2398;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  iVar10 = *(int *)(lVar9 + 0x78);
  if ((longlong)iVar10 != 0) {
    lVar9 = *(longlong *)(lVar9 + 0x70);
    lVar16 = 0;
    do {
      lVar1 = *(longlong *)(lVar9 + lVar16);
      if (lVar1 != 0) {
        lVar3 = FUN_1414cbbb6();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          if (bVar13 != 0) {
            FUN_1403257c8(&local_98,lVar1 + 0x110);
          }
          FUN_140c692ee(lVar1,0);
        }
      }
      lVar16 = lVar16 + 8;
    } while ((longlong)iVar10 * 8 != lVar16);
    iVar10 = (int)uStack_90 - local_64;
    if (iVar10 != 0 && local_64 <= (int)uStack_90) {
      local_a8 = 0;
      uStack_a0 = 0;
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar10);
      }
      FUN_1408be2c4(&local_a8);
      iVar10 = local_70;
      local_d0 = lVar17;
      if (local_70 == 0) {
        uVar14 = 1;
        uVar15 = 0;
        iVar20 = 0;
        iVar11 = 0;
      }
      else {
        puVar4 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar4 = local_88;
        }
        uVar19 = *puVar4;
        if (uVar19 == 0) {
          iVar20 = local_70 + 0x1e;
          if (-1 < local_70 + -1) {
            iVar20 = local_70 + -1;
          }
          uVar15 = 0;
          uVar7 = (ulonglong)(uint)(iVar20 >> 5);
          if (iVar20 >> 5 < 1) {
            uVar7 = uVar15;
          }
          iVar20 = 0;
          do {
            if (uVar7 == uVar15) goto LAB_1435971be;
            iVar20 = iVar20 + 0x20;
            uVar19 = puVar4[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar19 == 0);
        }
        else {
          uVar15 = 0;
          iVar20 = 0;
        }
        uVar14 = (ulonglong)(-uVar19 & uVar19);
        uVar7 = uVar14 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar11 = (iVar20 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar11) {
          iVar11 = local_70;
        }
      }
      if (iVar11 != local_70) {
        uVar19 = 0xffffffff;
        do {
          puVar18 = (undefined8 *)((longlong)iVar11 * 0x10 + local_98);
          FUN_147bd56ec(local_d0,&local_b8,puVar18);
          if ((int)local_b0 < 2) {
            FUN_140002266(&local_c8,L"%llu",*puVar18);
            lVar9 = (longlong)(int)uStack_a0;
            uVar2 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar2);
            if (uStack_a0._4_4_ < uVar2) {
              FUN_1447a1bd6(&local_a8);
            }
            lVar9 = lVar9 * 0x10;
            *(undefined8 *)(local_a8 + lVar9) = 0;
            *(undefined8 *)(local_a8 + lVar9) = local_c8;
            local_c8 = 0;
            *(undefined4 *)(local_a8 + 8 + lVar9) = (undefined4)local_c0;
            *(undefined4 *)(local_a8 + 0xc + lVar9) = local_c0._4_4_;
            local_c0 = 0;
          }
          else {
            lVar9 = (longlong)(int)uStack_a0;
            uVar2 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar2);
            if (uStack_a0._4_4_ < uVar2) {
              FUN_1447a1bd6(&local_a8);
            }
            lVar9 = lVar9 * 0x10;
            *(undefined8 *)(local_a8 + lVar9) = 0;
            *(longlong *)(local_a8 + lVar9) = local_b8;
            local_b8 = 0;
            *(int *)(local_a8 + 8 + lVar9) = (int)local_b0;
            *(undefined4 *)(local_a8 + 0xc + lVar9) = local_b0._4_4_;
            local_b0 = 0;
          }
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          uVar19 = uVar19 & ~(uint)uVar14;
          puVar4 = local_78;
          if (local_78 == (uint *)0x0) {
            puVar4 = local_88;
          }
          iVar11 = (int)uVar15;
          lVar9 = (longlong)iVar11;
          uVar2 = puVar4[lVar9] & uVar19;
          if (uVar2 == 0) {
            iVar5 = local_70 + 0x1e;
            if (-1 < local_70 + -1) {
              iVar5 = local_70 + -1;
            }
            iVar5 = iVar5 >> 5;
            iVar20 = iVar20 + 0x20;
            iVar6 = iVar5;
            if (iVar5 < iVar11) {
              iVar6 = iVar11;
            }
            if (iVar11 < iVar5) {
              lVar16 = 0;
              do {
                uVar2 = puVar4[lVar9 + lVar16 + 1];
                if (uVar2 != 0) {
                  uVar15 = (ulonglong)(iVar11 + (int)lVar16 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_143597628;
                }
                iVar20 = iVar20 + 0x20;
                lVar16 = lVar16 + 1;
              } while (iVar6 - lVar9 != lVar16);
              uVar19 = 0xffffffff;
              iVar11 = iVar6;
            }
            uVar15 = (ulonglong)(iVar11 + 1);
            iVar11 = local_70;
          }
          else {
LAB_143597628:
            uVar14 = (ulonglong)(-uVar2 & uVar2);
            uVar7 = uVar14 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar11 = (iVar20 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
            if (local_70 <= iVar11) {
              iVar11 = local_70;
            }
          }
        } while (iVar11 != iVar10);
      }
LAB_1435971be:
      FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_147a491c6(param_1[0x1e]);
  (**(code **)(*(longlong *)param_1[0x1e] + 0x2f8))((longlong *)param_1[0x1e],0);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14041fb7c(&local_98);
LAB_143597220:
  if (0 < (int)param_1[0x20]) {
    FUN_140056680(&local_a8,L"HostClosedConnection");
    lVar9 = param_1[0x20];
    if ((longlong)(int)lVar9 != 0) {
      lVar16 = param_1[0x1f];
      lVar17 = 0;
      do {
        plVar8 = *(longlong **)(lVar16 + lVar17);
        FUN_1459b235e(&local_98,0x11);
        FUN_143587eda(plVar8,&local_98);
        lVar1 = CONCAT44(uStack_6c,local_70);
        if (lVar1 != 0) {
          (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
        }
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        FUN_147a4786e(plVar8,&local_a8);
        (**(code **)(*plVar8 + 0x2f8))(plVar8,1);
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)lVar9 * 8 != lVar17);
      if (0 < (longlong)(int)param_1[0x20]) {
        uVar15 = (longlong)(int)param_1[0x20] + 1;
        do {
          plVar8 = *(longlong **)(param_1[0x1f] + -0x10 + uVar15 * 8);
          if ((plVar8[6] != 0) && (lVar9 = *(longlong *)(plVar8[6] + 0x3d0), lVar9 != 0)) {
            FUN_140aeefbc(lVar9,1,1);
            plVar8 = *(longlong **)(param_1[0x1f] + -0x10 + uVar15 * 8);
          }
          (**(code **)(*plVar8 + 0x330))();
          uVar15 = uVar15 - 1;
        } while (1 < uVar15);
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1463ed368(param_1 + 0xa5);
  FUN_1461b928e(param_1 + 0xaf);
  if ((longlong)(int)param_1[0x4e] != 0) {
    plVar12 = (longlong *)param_1[0x4d];
    plVar8 = plVar12 + (int)param_1[0x4e];
    do {
      lVar9 = *plVar12;
      FUN_144757f48(lVar9,0x40000000);
      uVar19 = *(uint *)(lVar9 + 0xc);
      if ((int)uVar19 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      do {
        uVar19 = *(uint *)(lVar9 + 8);
        if ((uVar19 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar21 = uVar19 == *(uint *)(lVar9 + 8);
        if (bVar21) {
          *(uint *)(lVar9 + 8) = uVar19 | 0x200000;
        }
        UNLOCK();
      } while (!bVar21);
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar8);
  }
  *(undefined4 *)(param_1 + 0x4e) = 0;
  if (*(int *)((longlong)param_1 + 0x274) != 0) {
    FUN_1463ed3a8(param_1 + 0x4d);
  }
  lVar9 = param_1[0x2e];
  if (lVar9 != 0) {
    param_1[0x2e] = 0;
    FUN_145c6ba12(lVar9);
    FUN_1400020a8(lVar9);
  }
  FUN_143596868(param_1,0);
  if (param_1[0x108] != 0) {
    FUN_142a9d7b4();
  }
  param_1[0x108] = 0;
  FUN_147bd57ae(param_1);
  bVar13 = (**(code **)(*param_1 + 0x3c0))(param_1);
  FUN_145d047e6(param_1,((~bVar13 | DAT_14c86a9f0) & 1) * '\x02');
  FUN_145fff1ce(param_1[0x51]);
  FUN_14614cd7c(param_1 + 0x52);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143597682 FUN_143597682 body=368 status=ok
// SIG undefined FUN_143597682(void)

void FUN_143597682(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_2 & 1) == 0) {
    if (*(char *)((longlong)param_1 + 0x849) != '\0') {
      if ((param_1[0x108] != 0) && ((int)param_1[0x20] < 1)) {
        FUN_142a9d7b4();
        param_1[0x108] = 0;
      }
      *(undefined1 *)((longlong)param_1 + 0x849) = 0;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      lVar5 = (longlong)*(int *)(param_1[0x1e] + 0x13f8);
      if (lVar5 != 0) {
        lVar1 = *(longlong *)(param_1[0x1e] + 0x13f0);
        lVar4 = 0;
        do {
          plVar2 = *(longlong **)(lVar1 + lVar4);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x2a8))();
          }
          lVar4 = lVar4 + 8;
        } while (lVar5 * 8 != lVar4);
      }
    }
  }
  else if (*(char *)((longlong)param_1 + 0x849) == '\0') {
    FUN_143596868(param_1,0);
    *(undefined1 *)((longlong)param_1 + 0x849) = 1;
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    uVar3 = (**(code **)(*param_1 + 0x3c0))(param_1);
    FUN_1435969fa(param_1,uVar3 ^ 1);
    if (param_1[0x108] != 0) {
      FUN_142a9d292(*(undefined8 *)(param_1[0x108] + 0x28),*(undefined4 *)(param_1[0x1e] + 0x1d2c));
      FUN_146f45974(param_1[0x108],*(undefined4 *)(param_1[0x1e] + 0x1d2c));
      lVar5 = (longlong)*(int *)(param_1[0x1e] + 0x13f8);
      if (lVar5 != 0) {
        lVar1 = *(longlong *)(param_1[0x1e] + 0x13f0);
        lVar4 = 0;
        do {
          plVar2 = *(longlong **)(lVar1 + lVar4);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x2a8))();
          }
          lVar4 = lVar4 + 8;
        } while (lVar5 * 8 != lVar4);
      }
    }
  }
  return;
}



// FUNCTION 1435977f2 FUN_1435977f2 body=41 status=ok
// SIG undefined FUN_1435977f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435977f2(void)

{
  _DAT_14caf23f0 = 0;
  if (DAT_14caf23e8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d7114e();
  return;
}



// FUNCTION 14359781c FUN_14359781c body=1173 status=ok
// SIG undefined FUN_14359781c(void)

void FUN_14359781c(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  void *_Dst;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  double dVar17;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  longlong *local_70;
  LARGE_INTEGER local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x318) = 0;
  QueryPerformanceCounter(&local_68);
  dVar17 = (double)local_68.QuadPart * DAT_14c83f420 + 16777216.0;
  *(double *)(param_1 + 0x310) = dVar17;
  *(byte *)(param_1 + 0x309) =
       *(byte *)(param_1 + 0x309) & 0xfd |
       ((-(5.0 < (float)(dVar17 - dVar17)) | -(5.0 < param_2)) & 1U) * '\x02';
  *(double *)(param_1 + 0x300) = (double)param_2 + *(double *)(param_1 + 0x300);
  *(undefined4 *)(param_1 + 0x8c0) = 0;
  if ((((*(longlong *)(param_1 + 0xf0) == 0) && (*(int *)(param_1 + 0x100) != 0)) &&
      (2 < *(int *)(param_1 + 0x100))) && ((*(byte *)(param_1 + 0x30a) & 0x30) == 0x10)) {
    lVar13 = 0;
    iVar6 = 0;
    iVar15 = 0;
    iVar11 = 0;
    lVar14 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + lVar13 * 8);
      if ((((lVar3 != 0) && (lVar4 = *(longlong *)(lVar3 + 0x30), lVar4 != 0)) &&
          ((lVar7 = FUN_1447210f0(lVar4), lVar7 != 0 &&
           (((double)*(float *)(param_1 + 0x3d8) <
             *(double *)(lVar7 + 0x6d0) - (double)*(float *)(lVar4 + 0x180) &&
            ((*(byte *)(lVar4 + 0x65) & 2) == 0)))))) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0))
      {
        if (lVar14 == 0) {
          lVar14 = lVar7;
        }
        iVar15 = iVar15 + (uint)((double)*(float *)(param_1 + 0x3c0) <
                                *(double *)(param_1 + 0x300) - *(double *)(lVar3 + 0x1d8));
        iVar6 = iVar6 + (uint)((double)*(float *)(param_1 + 0x3c4) <
                              *(double *)(param_1 + 0x300) - *(double *)(lVar3 + 0x210));
        if ((*(longlong *)(lVar4 + 0x398) != 0) &&
           ((float)*(int *)(param_1 + 0x3c8) < *(float *)(*(longlong *)(lVar4 + 0x398) + 0x3d8))) {
          iVar11 = iVar11 + 1;
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x100));
    if ((lVar14 != 0) && (plVar5 = *(longlong **)(lVar14 + 0x58), plVar5 != (longlong *)0x0)) {
      fVar16 = (float)*(int *)(param_1 + 0x100);
      uVar9 = 0;
      if ((*(float *)(param_1 + 0x3cc) <= (float)iVar15 / fVar16 &&
           (float)iVar15 / fVar16 != *(float *)(param_1 + 0x3cc)) ||
         ((uVar9 = 2,
          *(float *)(param_1 + 0x3d4) <= (float)iVar11 / fVar16 &&
          (float)iVar11 / fVar16 != *(float *)(param_1 + 0x3d4) ||
          (uVar9 = 1,
          *(float *)(param_1 + 0x3d0) <= (float)iVar6 / fVar16 &&
          (float)iVar6 / fVar16 != *(float *)(param_1 + 0x3d0))))) {
        *(byte *)(param_1 + 0x30a) = *(byte *)(param_1 + 0x30a) | 0x20;
        (**(code **)(*plVar5 + 0x678))(plVar5,uVar9);
      }
    }
  }
  lVar14 = *(longlong *)(param_1 + 0x288);
  if ((lVar14 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar14);
  }
  FUN_1435a82a8(lVar14,DAT_14caf3210,0);
  lVar14 = *(longlong *)(param_1 + 0x288);
  if ((lVar14 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar14);
  }
  FUN_1435a82a8(lVar14,DAT_14caf3218,0);
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    if (0 < (longlong)*(int *)(param_1 + 0x100)) {
      uVar12 = (longlong)*(int *)(param_1 + 0x100) + 1;
      do {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + -0x10 + uVar12 * 8);
        if ((plVar5 != (longlong *)0x0) && ((*(uint *)(plVar5 + 1) >> 0x1e & 1) == 0)) {
          if (*(int *)((longlong)plVar5 + 0x134) == 1) {
            (**(code **)(*plVar5 + 0x330))();
          }
          else {
            FUN_1406ff61a();
          }
        }
        uVar12 = uVar12 - 1;
      } while (1 < uVar12);
    }
    iVar6 = *(int *)(param_1 + 0x160);
    if (0 < (longlong)iVar6) {
      local_80 = param_1 + 0x158;
      lVar14 = *(longlong *)(param_1 + 0x158);
      lVar13 = 0;
      uVar10 = 0;
      do {
        if (*(double *)(param_1 + 0x310) - *(double *)(lVar14 + 0x10 + lVar13) <
            (double)*(int *)(param_1 + 0x168)) {
          if (uVar10 == 0) goto LAB_143597c18;
          break;
        }
        local_78 = *(undefined8 *)(lVar14 + lVar13);
        local_70 = *(longlong **)(lVar14 + 8 + lVar13);
        if (local_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
        }
        FUN_147bdf99e(param_1 + 0x108,&local_78);
        plVar5 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 0x18;
      } while ((longlong)iVar6 * 0x18 != lVar13);
      _Dst = *(void **)(param_1 + 0x158);
      FUN_145919693(_Dst,uVar10);
      iVar6 = *(int *)(param_1 + 0x160) - uVar10;
      uVar8 = uVar10;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar10 * 0x18),(longlong)iVar6 * 0x18);
        uVar8 = *(uint *)(param_1 + 0x160);
      }
      *(uint *)(param_1 + 0x160) = uVar8 - uVar10;
      FUN_147bdfb40(local_80);
    }
  }
  else if ((*(uint *)(*(longlong *)(param_1 + 0xf0) + 8) >> 0x1e & 1) == 0) {
    FUN_1406ff61a();
  }
LAB_143597c18:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143597cb2 FUN_143597cb2 body=305 status=ok
// SIG undefined FUN_143597cb2(void)

void FUN_143597cb2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  code *local_30;
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x840) != 0) {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if (*(int *)(param_1 + 0x220) != *(int *)(param_1 + 0x24c)) {
      lVar2 = param_1 + 0x250;
      if (*(longlong *)(param_1 + 600) != 0) {
        lVar2 = *(longlong *)(param_1 + 600);
      }
      iVar1 = *(int *)(lVar2 + (ulonglong)
                               (*(int *)(param_1 + 0x260) - 1U &
                               (DAT_14c892fdc << 0x10 | DAT_14c892fdc & 0xffff) +
                               ((DAT_14c892fdc & 0xffff) >> 4) +
                               ((DAT_14c892fdc >> 0x10) << 0x13 | DAT_14c892fdc >> 0x10)) * 4);
      if (iVar1 != -1) {
        do {
          if (*(ulonglong *)(*(longlong *)(param_1 + 0x218) + (longlong)iVar1 * 0x80) ==
              (ulonglong)DAT_14c892fdc) {
            local_20 = 1;
            FUN_142a9cafc(*(undefined8 *)(param_1 + 0x840),&local_20);
            local_30 = FUN_1435a4ed2;
            local_28 = &local_20;
            local_20 = param_1;
            FUN_146f453f2(*(undefined8 *)(param_1 + 0x840));
            FUN_142a9d134(*(undefined8 *)(param_1 + 0x840));
            break;
          }
          iVar1 = *(int *)((longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 0x218) + 0x78);
        } while (iVar1 != -1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143597de4 FUN_143597de4 body=3193 status=ok
// SIG undefined FUN_143597de4(void)

void FUN_143597de4(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,
                  ulonglong param_5,undefined ***param_6,undefined8 param_7,undefined8 param_8,
                  char param_9,byte *param_10)

{
  int *piVar1;
  code *pcVar2;
  void *_Src;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  longlong *plVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_4a8 [32];
  undefined ***local_488;
  undefined ***local_480;
  undefined1 local_478;
  longlong *local_468;
  longlong local_460;
  longlong local_458;
  ulonglong local_450;
  undefined **local_448;
  int local_440;
  undefined4 local_43c;
  longlong *local_3f0;
  longlong local_3d0;
  longlong local_3b8;
  undefined8 local_380;
  longlong *local_378;
  longlong *local_370;
  undefined1 *local_368;
  undefined ***local_360;
  longlong **local_358;
  char *local_350;
  undefined **local_348;
  undefined8 uStack_340;
  longlong local_330;
  undefined1 local_320;
  byte bStack_31f;
  undefined6 uStack_31e;
  longlong *local_2f0;
  undefined **local_2d0;
  longlong local_2b8;
  longlong **local_288;
  undefined1 local_274 [4];
  longlong local_270;
  undefined2 *local_268;
  undefined2 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined2 local_248 [4];
  byte local_23f;
  undefined8 local_1b0;
  byte local_174;
  undefined1 local_150 [264];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  do {
    uVar7 = param_5;
    param_5 = *(ulonglong *)(uVar7 + 0x40);
  } while (*(ulonglong *)(uVar7 + 0x40) != 0);
  if (((*(ushort *)(uVar7 + 0xb0) & 0x4080) == 0) &&
     (iVar5 = (**(code **)(*param_4 + 0x308))(param_4,0), iVar5 == 0)) goto LAB_14359883e;
  lVar8 = (**(code **)(*param_4 + 0x2b8))(param_4);
  if (lVar8 != 0) {
    param_4 = (longlong *)param_4[0x3bd];
  }
  if (((*(int *)((longlong)param_4 + 0x134) == 1) || (*(int *)((longlong)param_4 + 0x134) == 4)) ||
     (param_1[0x35] == 0)) goto LAB_14359883e;
  if (param_3 == 0) {
    param_3 = param_2;
  }
  lVar8 = FUN_140575224(param_1[0x39],*(undefined8 *)(param_3 + 0x10));
  if (lVar8 == 0) goto LAB_14359883e;
  local_450 = uVar7 | 1;
  if (((uVar7 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  lVar9 = FUN_1434b57a0(lVar8,&local_450);
  if (lVar9 == 0) goto LAB_14359883e;
  local_458 = lVar8;
  if (param_2 == 0) {
    uVar15 = 0;
    uVar6 = 0;
  }
  else {
    uVar15 = *(uint *)(param_2 + 0xc);
    if ((int)uVar15 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar6 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar14 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar16) {
        local_468 = (longlong *)CONCAT44(local_468._4_4_,uVar14);
        local_460 = lVar9;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
        lVar9 = local_460;
        uVar14 = (uint)local_468;
      }
      LOCK();
      uVar6 = *(uint *)(lVar8 + 0x10);
      bVar16 = uVar6 == 0;
      if (bVar16) {
        *(uint *)(lVar8 + 0x10) = uVar14;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar16) {
        uVar6 = uVar14;
      }
    }
  }
  if ((int)param_4[0x28c] != *(int *)((longlong)param_4 + 0x148c)) {
    plVar11 = param_4 + 0x292;
    if ((longlong *)param_4[0x293] != (longlong *)0x0) {
      plVar11 = (longlong *)param_4[0x293];
    }
    iVar5 = *(int *)((longlong)plVar11 +
                    (ulonglong)((int)param_4[0x294] - 1U & (uVar6 ^ uVar15)) * 4);
    if (iVar5 != -1) {
      do {
        plVar11 = (longlong *)(param_4[0x28b] + (longlong)iVar5 * 0x18);
        if (*plVar11 == CONCAT44(uVar6,uVar15)) {
          if ((plVar11 != (longlong *)0x0) &&
             (plVar11 = (longlong *)plVar11[1], plVar11 != (longlong *)0x0)) goto LAB_143597fd3;
          break;
        }
        iVar5 = (int)plVar11[2];
      } while (iVar5 != -1);
    }
  }
  if ((((param_9 == '\0') || ((*(byte *)(param_2 + 0x65) & 2) != 0)) ||
      ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) ||
     (local_460 = lVar9, cVar3 = (**(code **)(*param_1 + 0x428))(param_1,param_2,param_4),
     cVar3 == '\0')) goto LAB_14359883e;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_268 = (undefined2 *)(ulonglong)DAT_14c892cd8;
  plVar11 = (longlong *)FUN_141364a4a(param_4,&local_268,2,0xffffffff);
  if (plVar11 == (longlong *)0x0) goto LAB_14359883e;
  lVar8 = FUN_1414cbbb6();
  if ((*(int *)(plVar11[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) goto LAB_14359883e;
  FUN_1434aa0b0(plVar11,param_2,0);
  lVar9 = local_460;
LAB_143597fd3:
  if ((*(byte *)(plVar11 + 6) & 2) != 0) goto LAB_14359883e;
  if ((int)plVar11[7] == -1) {
    if (param_9 == '\0') goto LAB_14359883e;
    if ((*(byte *)(plVar11 + 0x12) & 4) != 0) {
      if ((param_3 == 0) || (*(longlong *)(param_3 + 0x10) == 0)) {
        FUN_140056680(&local_348,&DAT_149e01fe8);
      }
      else {
        local_348 = (undefined **)0x0;
        uStack_340 = 0;
        FUN_14005eb28(&local_348,0x80);
        local_268 = local_248;
        local_250 = '\0';
        local_258 = &local_48;
        local_448 = *(undefined ***)(*(longlong *)(param_3 + 0x10) + 0x18);
        local_260 = local_268;
        FUN_14005eb5c(&local_448,&local_268);
        if (local_258 <= local_260 + 1) {
          FUN_140213274(&local_268,1);
        }
        *local_260 = 0x20;
        local_260 = local_260 + 1;
        FUN_144750bde(param_3,0,&local_268);
        FUN_1400020e8(&local_348,local_268,
                      (ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
        if (local_250 == '\x01') {
          FUN_1400020a8(local_268);
        }
      }
      ppuVar12 = local_348;
      if ((int)uStack_340 == 0) {
        ppuVar12 = (undefined **)&DAT_149dfb77a;
      }
      if (uVar7 == 0) {
        FUN_140056680(&local_448,&DAT_149e01fe8);
      }
      else {
        local_268 = *(undefined2 **)(uVar7 + 0x18);
        FUN_1400021e4(&local_268,&local_448);
      }
      ppuVar13 = local_448;
      if (local_440 == 0) {
        ppuVar13 = (undefined **)&DAT_149dfb77a;
      }
      FUN_140002266(&local_268,
                    L"Attempt to replicate function \'%s\' on Actor \'%s\' while it is in the middle of variable replication!"
                    ,ppuVar13,ppuVar12);
      if (local_448 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_348 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_268 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14359883e;
    }
    if ((*param_10 & 1) == 0) {
      *(int *)(param_1 + 0xa4) = (int)param_1[0xa4] + 1;
      FUN_144adf12a(plVar11[0xd],param_1);
      *param_10 = *param_10 | 1;
    }
    if ((plVar11[0xd] == 0) ||
       ((bVar4 = *(byte *)(plVar11[0xd] + 0x65) & 0x18, bVar4 != 8 && (bVar4 != 0x10)))) {
      FUN_1405f1a6a();
    }
    *(byte *)((longlong)plVar11 + 0x91) = *(byte *)((longlong)plVar11 + 0x91) | 1;
    FUN_1434ae400(plVar11);
    *(byte *)((longlong)plVar11 + 0x91) = *(byte *)((longlong)plVar11 + 0x91) & 0xfe;
  }
  if (*(int *)((longlong)plVar11 + 0x34) == -1) goto LAB_14359883e;
  local_460 = lVar9;
  FUN_144b25d80(&local_270,param_4,plVar11[0xd]);
  local_468 = plVar11;
  FUN_1449daf8c(&local_268,plVar11,0);
  if ((*(byte *)(uVar7 + 0xb0) & 0x80) != 0) {
    local_174 = local_174 | 0x10;
  }
  if ((local_23f & 2) == 0) {
    if (DAT_14cad58fc == 1) {
      local_448 = *(undefined ***)(uVar7 + 0x18);
      FUN_1400021e4(&local_448,&local_348);
      local_480 = (undefined ***)CONCAT44(local_480._4_4_,0xffffffff);
      local_488 = (undefined ***)((ulonglong)local_488 & 0xffffffff00000000);
      FUN_1447ee042(&local_348,L"ServerUpdateCamera",0x12,1);
      if (local_348 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      local_448 = *(undefined ***)(uVar7 + 0x18);
      FUN_1400021e4(&local_448,&local_348);
      local_480 = (undefined ***)CONCAT44(local_480._4_4_,0xffffffff);
      local_488 = (undefined ***)((ulonglong)local_488 & 0xffffffff00000000);
      FUN_1447ee042(&local_348,L"ClientAckGoodMove",0x11,1);
      if (local_348 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      local_448 = *(undefined ***)(uVar7 + 0x18);
      FUN_1400021e4(&local_448,&local_348);
      local_480 = (undefined ***)CONCAT44(local_480._4_4_,0xffffffff);
      local_488 = (undefined ***)((ulonglong)local_488 & 0xffffffff00000000);
      FUN_1447ee042(&local_348,L"ServerMove",10,1);
      if (local_348 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_144a679e2(&local_348,local_1b0,0);
    local_370 = (longlong *)param_1[0x107];
    local_358 = local_288;
    local_350 = "ProcessRemoteFunctionForChannelPrivate";
    local_368 = local_150;
    local_360 = &local_348;
    local_288 = &local_370;
    FUN_14001eaf4(param_1,&local_380,uVar7);
    plVar11 = local_468;
    local_488 = param_6;
    FUN_1404e5130(local_380,uVar7,local_468,&local_348);
    if ((bStack_31f & 2) == 0) {
      pppuVar10 = (undefined ***)FUN_1434b1492(plVar11,param_3);
      plVar11 = local_468;
      if (((local_174 & 0x10) == 0) && ((*(byte *)(uVar7 + 0xb1) & 0x40) != 0)) {
        local_478 = 0;
        local_488 = pppuVar10;
        local_480 = &local_348;
        FUN_1434b1370(local_468,&local_268,local_458,local_460);
        bVar16 = true;
      }
      else {
        FUN_140a47848(local_468,param_3);
        FUN_144a679e2(&local_448,local_1b0,0);
        local_478 = 0;
        local_488 = pppuVar10;
        local_480 = &local_348;
        FUN_1434b1370(plVar11,&local_448,local_458,local_460);
        local_488 = &local_448;
        FUN_1434b12e4(plVar11,param_3,&local_268,0);
        local_448 = &PTR_FUN_149e37560;
        if (local_3b8 != 0) {
          FUN_1400020a8();
        }
        local_448 = &PTR__purecall_149e35f70;
        if (local_3f0 != (longlong *)0x0) {
          if (*local_3f0 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(local_3f0);
        }
        if (local_3d0 != 0) {
          if (*(longlong *)(local_3d0 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(local_3d0);
        }
        bVar16 = false;
      }
      if (((local_23f & 2) == 0) && ((*(byte *)(local_468 + 6) & 2) == 0)) {
        if (bVar16) {
          FUN_140ebf47c(local_468,param_3,uVar7,&local_268);
        }
        else {
          (**(code **)(*local_468 + 0x308))(local_468,&local_448,&local_268,1);
        }
      }
    }
    if ((*(byte *)((longlong)param_4 + 0xa4) & 2) != 0) {
      (**(code **)(*param_4 + 0x2f8))(param_4,0);
    }
    if (local_378 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_378 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_378)(local_378);
        LOCK();
        piVar1 = (int *)((longlong)local_378 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_378 + 0x10))(local_378);
        }
      }
    }
    local_360[0x18] = (undefined **)local_358;
    local_348 = &PTR_FUN_149e37560;
    if (local_2b8 != 0) {
      FUN_1400020a8();
    }
    local_348 = &PTR__purecall_149e35f70;
    if (local_2f0 != (longlong *)0x0) {
      if (*local_2f0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_2f0);
    }
    if (local_2d0 != (undefined **)0x0) {
      if (local_2d0[8] != (undefined *)0x0) {
        FUN_1400020a8();
      }
LAB_14359899d:
      FUN_1400020a8(local_2d0);
    }
  }
  else if ((local_174 & 0x10) != 0) {
    local_348 = (undefined **)0x14a8a90f4;
    uStack_340._0_4_ = 0x1c;
    FUN_1446e940c(&local_380,&local_348);
    local_348 = (undefined **)0x14a8a9162;
    uStack_340._0_4_ = 0xd;
    FUN_1446e940c(local_274,&local_348);
    local_348 = (undefined **)0x14a8a90b0;
    uStack_340 = CONCAT44(uStack_340._4_4_,0x21);
    FUN_140208c1e(&local_370,local_274,&local_380,&local_348);
    plVar11 = local_370;
    if (*(code **)(*local_370 + 0x50) != FUN_144828418) {
      plVar11 = (longlong *)(**(code **)(*local_370 + 0x50))();
    }
    FUN_1447a1fc0(plVar11);
    pcVar2 = *(code **)(*local_370 + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar11 = local_370 + 3;
      if (local_370[5] != 0) {
        plVar11 = (longlong *)(local_370[5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar11 = local_370 + 2;
    }
    else {
      plVar11 = (longlong *)(*pcVar2)(local_370);
    }
    local_448 = (undefined **)0x0;
    local_440 = (int)plVar11[1];
    lVar8 = (longlong)local_440;
    _Src = (void *)*plVar11;
    if (lVar8 == 0) {
      local_43c = 0;
    }
    else {
      FUN_1446dd670(&local_448,local_440,0);
      memcpy(local_448,_Src,lVar8 * 2);
    }
    if (local_370 != (longlong *)0x0) {
      (**(code **)(*local_370 + 0x10))();
    }
    FUN_1459b235e(&local_348,0x41);
    FUN_143587eda(param_4,&local_348);
    lVar8 = CONCAT62(uStack_31e,CONCAT11(bStack_31f,local_320));
    if (lVar8 != 0) {
      (**(code **)(lVar8 + -0x10))(lVar8 + -0x10);
    }
    if (local_330 != 0) {
      FUN_1400020a8();
    }
    FUN_147a4786e(param_4,&local_448);
    (**(code **)(*param_4 + 0x2f8))(param_4,1);
    FUN_1459b235e(&local_348,0x41);
    FUN_143587ad8(param_4,&local_348);
    lVar8 = CONCAT62(uStack_31e,CONCAT11(bStack_31f,local_320));
    if (lVar8 != 0) {
      (**(code **)(lVar8 + -0x10))(lVar8 + -0x10);
    }
    if (local_330 != 0) {
      FUN_1400020a8();
    }
    local_2d0 = local_448;
    if (local_448 != (undefined **)0x0) goto LAB_14359899d;
  }
  FUN_1449daebe(&local_268);
  if (local_270 != 0) {
    *(undefined8 *)(local_270 + 0x1d38) = 0;
    *(undefined8 *)(local_270 + 0x1d40) = 0;
  }
LAB_14359883e:
  if ((local_48 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143598a62 FUN_143598a62 body=1665 status=ok
// SIG undefined FUN_143598a62(void)

ulonglong FUN_143598a62(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined2 local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140573f8c(*(undefined8 *)(param_1 + 0x858),&local_58,param_2);
  if (param_3 != 0 && local_58 != 0) {
    uVar3 = *(uint *)(param_3 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    uVar5 = *(uint *)(lVar13 + 0x10);
    if (*(uint *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar5 = *(uint *)(lVar13 + 0x10);
      bVar14 = uVar5 == 0;
      if (bVar14) {
        *(uint *)(lVar13 + 0x10) = uVar10;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar5 = uVar10;
      }
    }
    if (*(int *)(local_58 + 0x38) != *(int *)(local_58 + 100)) {
      lVar13 = local_58 + 0x68;
      if (*(longlong *)(local_58 + 0x70) != 0) {
        lVar13 = *(longlong *)(local_58 + 0x70);
      }
      iVar7 = *(int *)(lVar13 + (ulonglong)(*(int *)(local_58 + 0x78) - 1U & (uVar5 ^ uVar3)) * 4);
      if (iVar7 != -1) {
        lVar13 = *(longlong *)(local_58 + 0x30);
        do {
          lVar8 = (longlong)iVar7 * 0x10;
          if ((*(uint *)(lVar13 + lVar8) == uVar3) && (*(uint *)(lVar13 + 4 + lVar8) == uVar5))
          goto LAB_143598c4b;
          iVar7 = *(int *)(lVar8 + lVar13 + 8);
        } while (iVar7 != -1);
      }
    }
    uVar3 = *(uint *)(param_3 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    uVar5 = *(uint *)(lVar13 + 0x10);
    if (*(uint *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar5 = *(uint *)(lVar13 + 0x10);
      bVar14 = uVar5 == 0;
      if (bVar14) {
        *(uint *)(lVar13 + 0x10) = uVar10;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar5 = uVar10;
      }
    }
    if (*(int *)(local_58 + 0x88) != *(int *)(local_58 + 0xb4)) {
      lVar13 = local_58 + 0xb8;
      if (*(longlong *)(local_58 + 0xc0) != 0) {
        lVar13 = *(longlong *)(local_58 + 0xc0);
      }
      iVar7 = *(int *)(lVar13 + (ulonglong)(*(int *)(local_58 + 200) - 1U & (uVar5 ^ uVar3)) * 4);
      if (iVar7 != -1) {
        lVar13 = *(longlong *)(local_58 + 0x80);
        do {
          lVar8 = (longlong)iVar7 * 0x10;
          if ((*(uint *)(lVar13 + lVar8) == uVar3) && (*(uint *)(lVar13 + 4 + lVar8) == uVar5))
          goto LAB_143598c4b;
          iVar7 = *(int *)(lVar8 + lVar13 + 8);
        } while (iVar7 != -1);
      }
    }
  }
  uVar12 = 0;
  goto LAB_143598bf3;
LAB_143598c4b:
  local_a8 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  pcStack_78 = (code *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  lVar13 = *(longlong *)(param_2 + 0x1c8);
  if (lVar13 == 0) {
    puVar6 = &DAT_14c8464e0;
    uVar15 = (undefined4)DAT_14c8464f0;
    uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar15 = (undefined4)*(undefined8 *)(lVar13 + 0x270);
    uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x270) >> 0x20);
    puVar6 = (undefined8 *)(lVar13 + 0x260);
  }
  local_98 = *(undefined4 *)puVar6;
  uStack_94 = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_90 = *(undefined4 *)(puVar6 + 1);
  uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
  local_88 = CONCAT44(uVar16,uVar15);
  FUN_14105d7d6(*(undefined8 *)(param_1 + 0x1b8),&local_80,param_2);
  if (DAT_14cae8b20 == 0) {
    local_d0 = local_b8;
    local_b8[0] = (code *)&LAB_14355090c;
    local_c0 = FUN_14081d0ea;
    local_c8 = FUN_14081d0ea;
    local_d8 = &LAB_147b8e16d;
    local_e0 = (code *)&LAB_140810a38;
    local_e8 = L"Engine";
    local_f0 = 0x800000000;
    local_f8 = 0x10000000;
    local_100 = 8;
    local_108 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar13 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_d0 = local_b8;
    local_b8[0] = FUN_1449e2820;
    local_c0 = FUN_14081d0ea;
    local_c8 = FUN_14081d0ea;
    local_d8 = &LAB_1468c5283;
    local_e0 = FUN_142809da0;
    local_e8 = L"Engine";
    local_f0 = 0x400000000;
    local_f8 = 0x10000000;
    local_100 = 8;
    local_108 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar8 = *(longlong *)(param_2 + 0x20);
  if (lVar8 == 0) {
LAB_143598e3f:
    local_a8 = 0;
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(lVar13 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar7) ||
         (lVar9 = lVar8,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
         lVar13 + 0x30)) {
        lVar9 = 0;
      }
    } while ((lVar9 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
    if (lVar9 == 0) goto LAB_143598e3f;
    uVar3 = *(uint *)(lVar9 + 0xc);
    local_a8 = CONCAT44(local_a8._4_4_,uVar3);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar7 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar7 = *(int *)(lVar13 + 0x10);
      bVar14 = iVar7 == 0;
      if (bVar14) {
        *(int *)(lVar13 + 0x10) = iVar11;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar7 = iVar11;
      }
    }
  }
  local_a8 = CONCAT44(iVar7,(undefined4)local_a8);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    uStack_a0 = 0;
    iVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(param_2 + 0x20) + 0xc);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar3);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar7 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar7 = *(int *)(lVar13 + 0x10);
      bVar14 = iVar7 == 0;
      if (bVar14) {
        *(int *)(lVar13 + 0x10) = iVar11;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar7 = iVar11;
      }
    }
  }
  uStack_a0 = CONCAT44(iVar7,(undefined4)uStack_a0);
  local_48 = *(undefined8 *)(param_2 + 0x18);
  FUN_1400021e4(&local_48,local_b8);
  if (pcStack_78 != (code *)0x0) {
    FUN_1400020a8();
  }
  pcStack_78 = local_b8[0];
  uStack_68 = 0;
  local_60 = CONCAT11(local_60._1_1_,2);
  FUN_1435990e4(local_b8[0]._0_4_,param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x858);
  lVar13 = FUN_140b95304(uVar4,param_2,param_1,0);
  if (lVar13 != 0) {
    FUN_140b95694(uVar4,lVar13,param_3);
  }
  if (pcStack_78 != (code *)0x0) {
    FUN_1400020a8();
  }
  uVar12 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
LAB_143598bf3:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1435990e4 FUN_1435990e4 body=725 status=ok
// SIG undefined FUN_1435990e4(void)

undefined8 FUN_1435990e4(undefined8 param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_1c8 [32];
  void **local_1a8;
  undefined1 local_198 [8];
  void *local_190;
  uint local_188;
  undefined4 local_184;
  ulonglong local_180 [20];
  undefined8 local_e0;
  byte local_8c;
  undefined1 local_8a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (param_3[1] == 0) {
LAB_14359935b:
    uVar6 = 0;
  }
  else {
    uVar1 = *param_3;
    uVar6 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar4 + 2) != param_3[1] || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
      goto LAB_14359935b;
      uVar6 = *puVar4;
    }
  }
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x1d40) = uVar6;
  }
  if ((DAT_14caf2258 == 0) || ((*(byte *)(param_2 + 0xa4) & 4) != 0)) {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    local_180[0] = (ulonglong)DAT_14c892cd8;
    plVar7 = (longlong *)FUN_141364a4a(param_2,local_180,2,0xffffffff);
    if ((((plVar7 != (longlong *)0x0) && ((*(byte *)(plVar7 + 6) & 2) == 0)) &&
        ((*(uint *)(param_2 + 0x134) & 0xfffffffe) == 2)) && (param_3[3] != 0)) {
      uVar1 = param_3[2];
      uVar6 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14359931b;
      plVar8 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar8 != (longlong *)0x0) &&
          ((*(uint *)(plVar8 + 2) == param_3[3] && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) &&
         (lVar2 = *plVar8, lVar2 != 0)) {
        FUN_1449daf8c(local_180,plVar7,1);
        local_8c = local_8c | 0x10;
        local_8a = (undefined1)param_3[0x12];
        plVar8 = *(longlong **)(param_2 + 0x68);
        local_190 = (void *)0x0;
        local_188 = param_3[0xe];
        lVar5 = (longlong)(int)local_188;
        _Src = *(void **)(param_3 + 0xc);
        if (lVar5 == 0) {
          local_184 = 0;
        }
        else {
          FUN_1446dd670(&local_190,local_188,0);
          memcpy(local_190,_Src,lVar5 * 2);
        }
        local_1a8 = &local_190;
        (**(code **)(*plVar8 + 0x2a0))(plVar8,local_180,lVar2,*(undefined8 *)(param_3 + 10));
        (**(code **)(*plVar7 + 0x308))(plVar7,local_198,local_180,0);
        FUN_1449daebe(local_180);
        uVar6 = local_e0;
        goto LAB_14359931b;
      }
    }
  }
  else {
    plVar7 = *(longlong **)(param_2 + 0x13f0);
    if (*plVar7 != 0) {
      lVar5 = FUN_145b3bade();
      lVar2 = *plVar7;
      if (lVar2 != 0) {
        uVar6 = 0;
        if ((lVar5 == 0) || (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 == 0)) goto LAB_14359931b;
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          uVar6 = FUN_1434a9690(lVar2,param_3);
          goto LAB_14359931b;
        }
      }
    }
  }
  uVar6 = 0;
LAB_14359931b:
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x1d38) = 0;
    *(undefined8 *)(param_2 + 0x1d40) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


