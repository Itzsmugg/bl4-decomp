// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142fba828 FUN_142fba828 body=109 status=ok
// SIG undefined FUN_142fba828(void)

ulonglong FUN_142fba828(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = (ulonglong)DAT_14c7585c8;
  if (*(char *)(param_1[0x16] + 0x28) == '\0') {
    FUN_142f8bd2a(param_1[0x15],param_1[0x16],param_1[0x17]);
    uVar2 = FUN_1472d0a4e(param_1[0x16]);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fba86a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 142fba896 FUN_142fba896 body=242 status=ok
// SIG undefined FUN_142fba896(void)

void FUN_142fba896(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_28,L"Renderer",1);
    uVar2 = local_28;
    uVar1 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar1,uVar2);
  }
  (**(code **)(*DAT_14cad8310 + 0x188))(DAT_14cad8310,param_1 + 2,0xffffffff);
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_28,L"Renderer",1);
    uVar2 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar2,local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000142fba905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14cad8310 + 0x198))
              (DAT_14cad8310,param_2,*param_1,*(code **)(*DAT_14cad8310 + 0x198));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 142fba994 FUN_142fba994 body=12 status=ok
// SIG undefined FUN_142fba994(void)

void FUN_142fba994(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fba99d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fba9a0 FUN_142fba9a0 body=29 status=ok
// SIG undefined FUN_142fba9a0(void)

undefined8 FUN_142fba9a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fba9be FUN_142fba9be body=282 status=ok
// SIG undefined FUN_142fba9be(void)

undefined8 * FUN_142fba9be(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fbaad8 FUN_142fbaad8 body=295 status=ok
// SIG undefined FUN_142fbaad8(void)

void FUN_142fbaad8(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_20,L"Renderer",1);
    uVar3 = local_20;
    uVar2 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar2,uVar3);
  }
  (**(code **)(*DAT_14cad8310 + 0x188))(DAT_14cad8310,param_1 + 0xb0,0xffffffff);
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_20,L"Renderer",1);
    uVar3 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar3,local_20);
  }
  (**(code **)(*DAT_14cad8310 + 0x198))
            (DAT_14cad8310,&DAT_14ca85100,*(undefined4 *)(param_1 + 0xa8));
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fbac14 FUN_142fbac14 body=403 status=ok
// SIG undefined FUN_142fbac14(void)

void FUN_142fbac14(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined1 *local_a0;
  int local_98;
  undefined1 local_90 [64];
  undefined1 *local_50;
  int local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_144b1c6fa(param_1 + 0x10,local_a8);
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
  *(int *)(puVar3 + 4) = local_98;
  if ((longlong)local_98 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_a8;
    if (local_a0 != (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe144(puVar3 + 2,local_98,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_98);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_48;
  if ((longlong)local_48 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar2 = local_90;
    }
    FUN_1446fe1b8(puVar3 + 5,local_48,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_48 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_40;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_3c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_38;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_34;
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8(local_50);
  }
  if (local_a0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fbada8 FUN_142fbada8 body=282 status=ok
// SIG undefined FUN_142fbada8(void)

undefined8 * FUN_142fbada8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fbaec2 FUN_142fbaec2 body=282 status=ok
// SIG undefined FUN_142fbaec2(void)

undefined8 * FUN_142fbaec2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fbafdc FUN_142fbafdc body=126 status=ok
// SIG undefined FUN_142fbafdc(void)

void FUN_142fbafdc(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined4 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = &local_18;
  local_18 = 0;
  uStack_10 = 0;
  local_30 = param_1[7];
  local_48 = param_1[6];
  local_20 = &DAT_149e1e2f8;
  local_38 = 0;
  local_40 = 0;
  FUN_142f8736f(param_2,*param_1,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4));
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fbb066 FUN_142fbb066 body=29 status=ok
// SIG undefined FUN_142fbb066(void)

void FUN_142fbb066(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142fbb084 FUN_142fbb084 body=29 status=ok
// SIG undefined FUN_142fbb084(void)

undefined8 FUN_142fbb084(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fbb0a2 FUN_142fbb0a2 body=282 status=ok
// SIG undefined FUN_142fbb0a2(void)

undefined8 * FUN_142fbb0a2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fbb1bc FUN_142fbb1bc body=192 status=ok
// SIG undefined FUN_142fbb1bc(void)

void FUN_142fbb1bc(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  local_38 = &local_28;
  local_28 = 0;
  uStack_20 = 0;
  local_40 = *(undefined4 *)(param_1 + 0xc4);
  local_58 = *(undefined4 *)(param_1 + 0xc0);
  local_30 = &DAT_149e1e2f8;
  local_48 = 0;
  local_50 = 0;
  FUN_142f8736f(&DAT_14ca85100,*(undefined4 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                *(undefined8 *)(param_1 + 0xb8));
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fbb292 FUN_142fbb292 body=653 status=ok
// SIG undefined FUN_142fbb292(void)

void FUN_142fbb292(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_728 [32];
  longlong *local_708;
  ulonglong local_700;
  undefined8 local_6f8;
  undefined4 local_6f0;
  undefined8 local_6ec;
  undefined4 local_6e4;
  undefined8 local_6e0;
  undefined4 local_6d8;
  int local_6d4;
  int local_6d0;
  undefined4 local_6cc;
  int local_6c8;
  int local_6c4;
  undefined4 local_6c0;
  undefined1 local_6b8 [1648];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_728;
  iVar6 = FUN_146037a50(*param_1,param_1[4]);
  lVar7 = FUN_14025f2b6(*param_1 + 0x3780,param_1[4]);
  iVar13 = 0;
  FUN_1407779ba(local_6b8,param_2);
  uVar9 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)param_1[1] * 2) * 8);
  uVar8 = FUN_14473c272(local_6b8,param_1[2],0);
  FUN_142f84f53(local_6b8,uVar9,uVar8);
  FUN_142f854c6(local_6b8,uVar9,uVar8,lVar7 + 4);
  FUN_142f85ed5(local_6b8,uVar9,uVar8,0);
  FUN_142f84f53(local_6b8,uVar9,uVar8);
  uVar9 = FUN_142f85960(local_6b8,uVar9,uVar8);
  local_708 = param_1;
  if (2 < (int)param_1[1]) {
    iVar14 = *(int *)(*param_1 + 0x3774);
    uVar2 = (ulonglong)(iVar14 + -1 + (uint)(iVar14 == 0)) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_700 = (ulonglong)(((uint)lVar7 ^ 0xffffffc0) + 0x41);
    uVar8 = FUN_14473c272(local_6b8,*param_1 + 0x3778,0);
    do {
      iVar14 = 0;
      do {
        local_6f0 = DAT_14c9a52a0;
        local_6f8 = DAT_14c9a5298;
        local_6e4 = DAT_14c9a52a0;
        local_6ec = DAT_14c9a5298;
        local_6d8 = DAT_14c9a52a0;
        local_6e0 = DAT_14c9a5298;
        local_6cc = 1;
        local_6c0 = 1;
        local_6d0 = iVar6 * 6 + iVar14;
        local_6d4 = iVar14;
        local_6c8 = iVar13;
        local_6c4 = iVar13;
        FUN_1400e8d41(local_6b8,uVar9,uVar8,&local_6f8);
        iVar14 = iVar14 + 1;
      } while (iVar14 != 6);
      iVar13 = iVar13 + 1;
    } while (iVar13 != (int)local_700);
  }
  FUN_140779360(local_6b8);
  lVar7 = local_708[5];
  if (lVar7 != 0) {
    lVar5 = *(longlong *)(lVar7 + 0x10);
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
          bVar4 = *(byte *)(lVar5 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar5;
          plVar12 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar12;
              LOCK();
              bVar15 = plVar12 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar15) {
                plVar12 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar15 = plVar11 != DAT_14ca843c8;
              plVar12 = plVar10;
              if (bVar15) {
                plVar11 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
    FUN_1400020a8(lVar7);
  }
  FUN_140778010(local_6b8);
  if ((local_48 ^ (ulonglong)auStack_728) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142fbb530 FUN_142fbb530 body=29 status=ok
// SIG undefined FUN_142fbb530(void)

void FUN_142fbb530(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142fbb54e FUN_142fbb54e body=29 status=ok
// SIG undefined FUN_142fbb54e(void)

undefined8 FUN_142fbb54e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fbb56c FUN_142fbb56c body=282 status=ok
// SIG undefined FUN_142fbb56c(void)

undefined8 * FUN_142fbb56c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fbb686 FUN_142fbb686 body=105 status=ok
// SIG undefined FUN_142fbb686(void)

void FUN_142fbb686(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_142fbb292(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_142fbb292(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fbb6c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fbb6f0 FUN_142fbb6f0 body=38 status=ok
// SIG undefined FUN_142fbb6f0(void)

undefined8 FUN_142fbb6f0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fbb716 FUN_142fbb716 body=796 status=ok
// SIG undefined FUN_142fbb716(void)

void FUN_142fbb716(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *_Dst;
  undefined1 *_Src;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auStack_138 [32];
  void **local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  ulonglong *local_f0;
  void *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined1 local_c0 [64];
  undefined1 *local_80;
  int local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_144b1c6fa(param_1 + 0x10);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar8 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar8 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a1fb978;
  puVar8[3] = 0;
  *(int *)(puVar8 + 4) = local_c8;
  if ((longlong)local_c8 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x24) = 8;
  }
  else {
    puVar5 = &local_d8;
    if (local_d0 != (undefined8 *)0x0) {
      puVar5 = local_d0;
    }
    FUN_1446fe144(puVar8 + 2,local_c8,0);
    _Dst = (undefined8 *)puVar8[3];
    if ((undefined8 *)puVar8[3] == (undefined8 *)0x0) {
      _Dst = puVar8 + 2;
    }
    memcpy(_Dst,puVar5,(longlong)local_c8);
  }
  puVar8[0xd] = 0;
  *(int *)(puVar8 + 0xe) = local_78;
  local_f0 = param_2;
  if ((longlong)local_78 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x74) = 8;
  }
  else {
    _Src = local_80;
    if (local_80 == (undefined1 *)0x0) {
      _Src = local_c0;
    }
    FUN_1446fe1b8(puVar8 + 5,local_78,0);
    puVar5 = (undefined8 *)puVar8[0xd];
    if ((undefined8 *)puVar8[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar8 + 5;
    }
    memcpy(puVar5,_Src,(longlong)local_78 << 3);
  }
  *(undefined4 *)(puVar8 + 0xf) = local_70;
  *(undefined4 *)((longlong)puVar8 + 0x7c) = uStack_6c;
  *(undefined4 *)(puVar8 + 0x10) = uStack_68;
  *(undefined4 *)((longlong)puVar8 + 0x84) = uStack_64;
  if (local_80 != (undefined1 *)0x0) {
    FUN_1400020a8(local_80);
  }
  if (local_d0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x1b8) + 0x84);
  uVar3 = *(undefined8 *)piVar1;
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 0x88) * *piVar1;
  uVar4 = iVar9 * 6;
  if (-1 < iVar9) {
    lVar6 = *(longlong *)(param_1 + 0x1c0);
    *(undefined4 *)(lVar6 + 8) = 0;
    if (*(uint *)(lVar6 + 0xc) != uVar4) {
      FUN_1471cf4a8();
    }
    plVar2 = *(longlong **)(param_1 + 0x1c0);
    iVar7 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar7 + uVar4;
    if ((uint)(*(int *)((longlong)plVar2 + 0xc) - iVar7) < uVar4) {
      FUN_145ee9c2c(plVar2);
    }
    memset((void *)((longlong)iVar7 * 8 + *plVar2),0,(ulonglong)uVar4 << 3);
    iVar7 = 0;
    lVar6 = 0;
    do {
      local_e8 = (void *)0x0;
      uStack_e0 = 0;
      local_d8 = DAT_14c967818;
      local_100 = 0;
      local_108 = 0;
      local_110 = (undefined4)lVar6;
      local_118 = &local_e8;
      local_d0 = (undefined8 *)uVar3;
      (**(code **)(*DAT_14ca83900 + 0x498))
                (DAT_14ca83900,local_f0,*(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x10),
                 &local_d8);
      memcpy((void *)((longlong)iVar7 * 8 + **(longlong **)(param_1 + 0x1c0)),local_e8,
             (longlong)(iVar9 * 8));
      if (local_e8 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 1;
      iVar7 = iVar7 + iVar9;
    } while (lVar6 != 6);
    if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4((ulonglong)uVar4);
}



// FUNCTION 142fbba34 FUN_142fbba34 body=1418 status=ok
// SIG undefined FUN_142fbba34(void)

void FUN_142fbba34(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_158,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar7,(longlong)(int)local_158);
  }
  puVar11[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar11 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_108,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar11 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar12 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar10 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar5;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar3;
  *(float *)(puVar11 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar10 == 0) {
    lVar10 = local_138;
  }
  if (lVar12 == 0) {
    lVar12 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar10;
  lStack_130 = lVar12;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar8;
    *(undefined4 *)(puVar11 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar12,lVar10,1);
    }
  }
  FUN_14153eeb6();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca43cc0);
  uVar6 = DAT_14ca89240;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar11 + 2) = 0;
  puVar11[3] = uVar6;
  *(undefined4 *)(puVar11 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar11 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar11 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb5b0;
  puVar11[2] = uVar6;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
  *(undefined4 *)(puVar11 + 4) = 3;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 6;
  puVar11[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fbbfc0 FUN_142fbbfc0 body=1418 status=ok
// SIG undefined FUN_142fbbfc0(void)

void FUN_142fbbfc0(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar7,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar9 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar11 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar5;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar3;
  *(float *)(puVar12 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar11 == 0) {
    lVar11 = local_138;
  }
  if (lVar9 == 0) {
    lVar9 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar11;
  lStack_130 = lVar9;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar8;
    *(undefined4 *)(puVar12 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145daab66();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca43d48);
  uVar6 = DAT_14ca89240;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = uVar6;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb5b0;
  puVar12[2] = uVar6;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  *(undefined4 *)(puVar12 + 4) = 3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 6;
  puVar12[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fbc54c FUN_142fbc54c body=38 status=ok
// SIG undefined FUN_142fbc54c(void)

undefined8 FUN_142fbc54c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fbc572 FUN_142fbc572 body=609 status=ok
// SIG undefined FUN_142fbc572(void)

void FUN_142fbc572(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  size_t _Size;
  void *_Src;
  undefined8 *puVar3;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined4 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  void *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_144b1c6fa(param_1 + 0x10,&local_b0);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  _Size = (size_t)local_a0;
  *(int *)(puVar3 + 4) = local_a0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b0;
    if ((undefined8 *)CONCAT44(uStack_a4,local_a8) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_a4,local_a8);
    }
    FUN_1446fe144(puVar3 + 2,local_a0,0);
    _Dst = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      _Dst = puVar3 + 2;
    }
    memcpy(_Dst,puVar2,_Size);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_50;
  if ((longlong)local_50 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src = local_58;
    if (local_58 == (void *)0x0) {
      _Src = (void *)((longlong)&local_9c + 4);
    }
    FUN_1446fe1b8(puVar3 + 5,local_50,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_50 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_44;
  *(undefined4 *)(puVar3 + 0x10) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_3c;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8(local_58);
  }
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined4 *)0x0;
  uStack_d0 = 0;
  FUN_140a4b95e(&local_d8,1,1);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
  local_b0 = 0;
  local_a8 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_b0,5);
  local_b0 = 0x300000006;
  local_a8 = local_a8 & 0xffffff00;
  uStack_a4 = 0x467a0000;
  local_a0 = (uint)local_a0._2_2_ << 0x10;
  local_9c = 0;
  local_c0 = 0;
  local_b8 = &DAT_100000001;
  local_e8 = &local_b0;
  (**(code **)(*DAT_14ca83900 + 0x250))(DAT_14ca83900,uVar1,&local_c0,&local_d8);
  **(undefined4 **)(param_1 + 0x1c0) = *local_d8;
  if (local_d8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fbc7d4 FUN_142fbc7d4 body=282 status=ok
// SIG undefined FUN_142fbc7d4(void)

undefined8 * FUN_142fbc7d4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fbc8ee FUN_142fbc8ee body=3018 status=ok
// SIG undefined FUN_142fbc8ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fbc8ee(int *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  undefined2 uVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  undefined1 auStack_7d8 [32];
  undefined8 *local_7b8;
  undefined8 **local_7b0;
  undefined1 local_7a8;
  int local_7a0;
  int *local_798;
  undefined8 *local_790;
  undefined1 local_788;
  ulonglong local_778;
  int local_76c;
  undefined8 local_768;
  undefined8 local_760;
  int *local_758;
  float local_750;
  undefined1 local_749;
  undefined8 *local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 *local_6c8;
  undefined8 *local_6c0;
  longlong local_6a0;
  uint local_698;
  uint local_694;
  longlong local_5d0;
  uint local_5c8;
  uint local_5c4;
  longlong local_5c0;
  uint local_5b8;
  uint local_5b4;
  longlong local_5a0;
  uint local_598;
  uint local_594;
  undefined8 *local_c8;
  undefined1 *puStack_c0;
  longlong lStack_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  char local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined2 uStack_95;
  undefined1 local_93;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_7d8;
  local_750 = 1.0;
  if ((char)param_1[0xd] == '\0') {
    local_738 = &DAT_3f8000003f800000;
    uStack_730 = &DAT_3f8000003f800000;
  }
  else {
    FUN_1407779ba(&local_738,param_2,param_3,0);
    FUN_14473c272(&local_738,*(undefined8 *)(param_1 + 4),0);
    uVar9 = *(undefined8 *)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*param_1 * 2) * 8);
    iVar6 = param_1[8];
    iVar3 = param_1[7];
    iVar13 = param_1[6];
    lVar7 = FUN_1447b4020(*(undefined8 *)(param_1 + 2));
    if (lVar7 != 0) {
      uVar17 = (ulonglong)(iVar13 + -1 + (uint)(iVar13 == 0)) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_98 = '@' - ((byte)lVar14 ^ 0x3f);
      local_ac = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_c8 = (undefined8 *)0x1010009;
      local_9c = 0x10001;
      uStack_97 = 1;
      uStack_96 = 3;
      uStack_95 = 1;
      puStack_c0 = (undefined1 *)0x1;
      lStack_b8 = 0x461c4000;
      local_b0 = 0;
      local_a8 = 0;
      local_93 = 0xff;
      iVar5 = DAT_14ca84e40;
      if (iVar13 < DAT_14ca84e40) {
        iVar5 = iVar13;
      }
      iVar10 = 1;
      if (1 < iVar5) {
        iVar10 = iVar5;
      }
      local_a4 = (undefined1 *)CONCAT44(iVar10,iVar10);
      uVar17 = (longlong)local_6c8 + 7U & 0xfffffffffffffff8;
      puVar8 = (undefined8 *)(uVar17 + 0x120);
      local_760 = param_2;
      if (local_6c0 < puVar8) {
        FUN_140023dd8(&local_6c8,0x128);
        uVar17 = (longlong)local_6c8 + 7U & 0xfffffffffffffff8;
        puVar8 = (undefined8 *)(uVar17 + 0x120);
      }
      local_758 = param_1;
      local_6c8 = puVar8;
      FUN_1456bbb8c(uVar17,L"ReflectionMaxLuminanceCubeTexture",&local_c8,0);
      uVar16 = local_5b8;
      lVar14 = (longlong)(int)local_5b8;
      local_5b8 = local_5b8 + 1;
      if (local_5b4 < local_5b8) {
        FUN_14472c0f6(&local_5c0,uVar16);
      }
      *(ulonglong *)(local_5c0 + lVar14 * 8) = uVar17;
      *(uint *)(uVar17 + 0x9c) = local_5b8 - 1;
      local_790 = &DAT_149e1e2f8;
      local_7b8 = (undefined8 *)CONCAT44(local_7b8._4_4_,iVar13);
      local_788 = 0;
      local_7b0 = (undefined8 **)CONCAT71(local_7b0._1_7_,1);
      local_7a8 = (char)iVar3;
      local_7a0 = iVar6;
      local_798 = param_1 + 9;
      FUN_142f874a2(&local_738,uVar9,lVar7,uVar17);
      FUN_146095eb4();
      FUN_1448e935e(uVar9,&local_c8,&DAT_14ca41ea0,0);
      FUN_146095eb4();
      bVar1 = *(byte *)(uVar17 + 0x90);
      local_778 = uVar17;
      local_768 = uVar9;
      if (1 < bVar1) {
        uVar16 = 1;
        do {
          iVar6 = 1 << (~(byte)uVar16 + bVar1 & 0x1f);
          local_748 = (undefined8 *)0x0;
          uStack_740 = CONCAT44(iVar6,iVar6);
          local_76c = uVar16 - 1;
          iVar13 = 0;
          do {
            puVar12 = (undefined8 *)((longlong)local_6c8 + 0xfU & 0xfffffffffffffff0);
            puVar8 = puVar12 + 0x28;
            if (local_6c0 < puVar8) {
              FUN_140023dd8(&local_6c8,0x150);
              puVar12 = (undefined8 *)((longlong)local_6c8 + 0xfU & 0xfffffffffffffff0);
              puVar8 = puVar12 + 0x28;
            }
            uVar4 = local_698;
            *puVar12 = &PTR_FUN_14a2e70f8;
            puVar12[2] = 0;
            puVar12[3] = 0;
            lVar7 = 0x52;
            do {
              puVar15 = (undefined8 *)((longlong)puVar12 + lVar7 + -0x12);
              *puVar15 = 0;
              puVar15[1] = 0;
              *(undefined4 *)((longlong)puVar12 + lVar7 + -2) = 0xffff0000;
              lVar7 = lVar7 + 0x18;
            } while (lVar7 != 0x112);
            *(undefined4 *)((longlong)puVar12 + 0x114) = 0;
            puVar12[0x20] = 0;
            puVar12[0x21] = 0;
            *(undefined2 *)(puVar12 + 0x22) = 0;
            *(undefined4 *)(puVar12 + 0x23) = 0xffffffff;
            *(undefined4 *)((longlong)puVar12 + 0x11c) = 0xffffffff;
            *(undefined4 *)(puVar12 + 0x24) = 0xffffffff;
            *(undefined4 *)((longlong)puVar12 + 0x124) = 0xffffffff;
            *(undefined4 *)(puVar12 + 0x25) = 0;
            *(undefined2 *)((longlong)puVar12 + 300) = 0;
            puVar12[0x26] = 0;
            lVar7 = (longlong)(int)local_698;
            local_698 = local_698 + 1;
            local_6c8 = puVar8;
            if (local_694 < local_698) {
              FUN_1448cfae8(&local_6a0,uVar4);
            }
            *(undefined8 **)(local_6a0 + lVar7 * 8) = puVar12;
            if ((*(char *)(local_778 + 0x92) == '\x04') || (*(char *)(local_778 + 0x92) == '\x01'))
            {
              uVar11 = *(undefined2 *)(local_778 + 0x8e);
            }
            else {
              uVar11 = 0;
            }
            puVar15 = (undefined8 *)((longlong)local_6c8 + 7U & 0xfffffffffffffff8);
            puVar8 = puVar15 + 8;
            if (local_6c0 < puVar8) {
              FUN_140023dd8(&local_6c8,0x48);
              puVar15 = (undefined8 *)((longlong)local_6c8 + 7U & 0xfffffffffffffff8);
              puVar8 = puVar15 + 8;
            }
            uVar4 = local_598;
            puVar15[1] = *(undefined8 *)(local_778 + 8);
            puVar15[2] = 0;
            *(undefined1 *)(puVar15 + 3) = 1;
            *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
            *puVar15 = &PTR_FUN_14a203858;
            *(undefined1 *)(puVar15 + 5) = 0;
            *(char *)((longlong)puVar15 + 0x29) = (char)local_76c;
            *(undefined4 *)((longlong)puVar15 + 0x2a) = 1;
            *(undefined2 *)((longlong)puVar15 + 0x2e) = uVar11;
            *(undefined1 *)(puVar15 + 6) = 0;
            *(undefined1 *)((longlong)puVar15 + 0x32) = 0;
            puVar15[7] = local_778;
            lVar7 = (longlong)(int)local_598;
            local_598 = local_598 + 1;
            local_6c8 = puVar8;
            if (local_594 < local_598) {
              FUN_1447568fc(&local_5a0,uVar4);
            }
            *(undefined8 **)(local_5a0 + lVar7 * 8) = puVar15;
            *(uint *)((longlong)puVar15 + 0x1c) = local_598 - 1;
            puVar12[2] = puVar15;
            puVar12[3] = DAT_14c9c0d80;
            *(int *)(puVar12 + 5) = iVar13;
            *(uint *)((longlong)puVar12 + 0x2c) = uVar16;
            *(uint *)(puVar12 + 6) = (uint)bVar1;
            *(float *)(puVar12 + 4) = 1.0 / (float)iVar6;
            *(float *)((longlong)puVar12 + 0x24) = 1.0 / (float)iVar6;
            puVar12[8] = local_778;
            puVar12[9] = 0;
            *(undefined1 *)(puVar12 + 10) = 0;
            *(byte *)((longlong)puVar12 + 0x51) = (byte)uVar16;
            *(short *)((longlong)puVar12 + 0x52) = (short)iVar13;
            local_7b0 = &local_748;
            local_7b8 = puVar12 + 2;
            FUN_1472c6a3e(&local_738,local_768,&local_749,&local_c8);
            iVar13 = iVar13 + 1;
          } while (iVar13 != 6);
          uVar16 = uVar16 + 1;
        } while (uVar16 != bVar1);
      }
      local_b0 = DAT_14ca85098;
      puStack_c0 = (undefined1 *)_DAT_14ca85088;
      lStack_b8 = _DAT_14ca85090;
      local_ac = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      uStack_96 = 0;
      local_c8 = (undefined8 *)0x1;
      uStack_95 = 1;
      local_9c = 0x10001;
      local_98 = 1;
      uStack_97 = 1;
      local_a8 = 0;
      local_93 = 0xff;
      local_a4 = &DAT_100000001;
      uVar17 = (longlong)local_6c8 + 7U & 0xfffffffffffffff8;
      puVar8 = (undefined8 *)(uVar17 + 0x120);
      if (local_6c0 < puVar8) {
        FUN_140023dd8(&local_6c8,0x128);
        uVar17 = (longlong)local_6c8 + 7U & 0xfffffffffffffff8;
        puVar8 = (undefined8 *)(uVar17 + 0x120);
      }
      local_6c8 = puVar8;
      FUN_1456bbb8c(uVar17,L"ReflectionBrightness",&local_c8,0);
      uVar16 = local_5b8;
      lVar7 = (longlong)(int)local_5b8;
      local_5b8 = local_5b8 + 1;
      if (local_5b4 < local_5b8) {
        FUN_14472c0f6(&local_5c0,uVar16);
      }
      *(ulonglong *)(local_5c0 + lVar7 * 8) = uVar17;
      *(uint *)(uVar17 + 0x9c) = local_5b8 - 1;
      puVar12 = (undefined8 *)((longlong)local_6c8 + 0xfU & 0xfffffffffffffff0);
      puVar8 = puVar12 + 0x26;
      if (local_6c0 < puVar8) {
        FUN_140023dd8(&local_6c8,0x140);
        puVar12 = (undefined8 *)((longlong)local_6c8 + 0xfU & 0xfffffffffffffff0);
        puVar8 = puVar12 + 0x26;
      }
      uVar16 = local_698;
      *puVar12 = &PTR_FUN_14a2e7118;
      *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
      lVar7 = 0x42;
      do {
        *(undefined1 (*) [16])((longlong)puVar12 + lVar7 + -0x12) = (undefined1  [16])0x0;
        *(undefined4 *)((longlong)puVar12 + lVar7 + -2) = 0xffff0000;
        lVar7 = lVar7 + 0x18;
      } while (lVar7 != 0x102);
      *(undefined4 *)((longlong)puVar12 + 0x104) = 0;
      *(undefined1 (*) [16])(puVar12 + 0x1e) = (undefined1  [16])0x0;
      *(undefined2 *)(puVar12 + 0x20) = 0;
      *(undefined4 *)(puVar12 + 0x21) = 0xffffffff;
      *(undefined4 *)((longlong)puVar12 + 0x10c) = 0xffffffff;
      *(undefined4 *)(puVar12 + 0x22) = 0xffffffff;
      *(undefined4 *)((longlong)puVar12 + 0x114) = 0xffffffff;
      *(undefined4 *)(puVar12 + 0x23) = 0;
      *(undefined2 *)((longlong)puVar12 + 0x11c) = 0;
      puVar12[0x24] = 0;
      lVar7 = (longlong)(int)local_698;
      local_698 = local_698 + 1;
      local_6c8 = puVar8;
      if (local_694 < local_698) {
        FUN_1448cfae8(&local_6a0,uVar16);
      }
      *(undefined8 **)(local_6a0 + lVar7 * 8) = puVar12;
      puVar12[2] = local_778;
      puVar12[3] = DAT_14c9c0d80;
      *(uint *)(puVar12 + 4) = (uint)*(byte *)(local_778 + 0x90);
      puVar12[6] = uVar17;
      puVar12[7] = 0;
      *(undefined4 *)(puVar12 + 8) = 0xffff0000;
      FUN_1460965fe();
      uVar9 = local_768;
      FUN_1448e935e(local_768,&local_c8,&DAT_14ca42218,0);
      FUN_1460965fe();
      local_748 = local_c8;
      uStack_740 = puStack_c0;
      local_c8 = DAT_14c967818;
      puStack_c0 = &DAT_100000001;
      local_7b8 = puVar12 + 2;
      local_7b0 = &local_c8;
      FUN_1472c6b26(&local_738,uVar9,&local_749);
      puVar12 = (undefined8 *)((longlong)local_6c8 + 0xfU & 0xfffffffffffffff0);
      puVar8 = puVar12 + 6;
      if (local_6c0 < puVar8) {
        FUN_140023dd8(&local_6c8,0x40);
        puVar12 = (undefined8 *)((longlong)local_6c8 + 0xfU & 0xfffffffffffffff0);
        puVar8 = puVar12 + 6;
      }
      uVar16 = local_698;
      *puVar12 = &PTR_FUN_14a2d3740;
      puVar12[2] = 0;
      puVar12[3] = 0;
      *(undefined4 *)(puVar12 + 4) = 0;
      lVar7 = (longlong)(int)local_698;
      local_698 = local_698 + 1;
      local_6c8 = puVar8;
      if (local_694 < local_698) {
        FUN_1448cfae8(&local_6a0,uVar16);
      }
      *(undefined8 **)(local_6a0 + lVar7 * 8) = puVar12;
      if (uVar17 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(uVar17 + 0xac);
      }
      puVar12[2] = uVar17;
      puVar12[3] = uVar9;
      *(undefined4 *)(puVar12 + 4) = 0x80;
      lVar7 = FUN_14600fd94();
      FUN_140069376(&local_738);
      puVar15 = (undefined8 *)((longlong)local_6c8 + 7U & 0xfffffffffffffff8);
      puVar8 = puVar15 + 0x39;
      if (local_6c0 < puVar8) {
        FUN_140023dd8(&local_6c8,0x1d0);
        puVar15 = (undefined8 *)((longlong)local_6c8 + 7U & 0xfffffffffffffff8);
        puVar8 = puVar15 + 0x39;
      }
      puStack_c0 = *(undefined1 **)(lVar7 + 0x48);
      if (puStack_c0 != (undefined1 *)0x0) {
        LOCK();
        *(int *)((longlong)puStack_c0 + 8) = *(int *)((longlong)puStack_c0 + 8) + 1;
        UNLOCK();
      }
      local_7b8 = (undefined8 *)((ulonglong)local_7b8 & 0xffffffffffffff00);
      local_6c8 = puVar8;
      local_c8 = puVar12 + 2;
      lStack_b8 = lVar7;
      FUN_140068f1a(puVar15,&local_749,&local_c8,0x18);
      uVar16 = local_5c8;
      param_2 = local_760;
      *puVar15 = &PTR_FUN_14a2e77a0;
      puVar15[0x37] = uVar17;
      puVar15[0x38] = &local_750;
      lVar7 = (longlong)(int)local_5c8;
      local_5c8 = local_5c8 + 1;
      if (local_5c4 < local_5c8) {
        FUN_14470e57a(&local_5d0,uVar16);
      }
      *(undefined8 **)(local_5d0 + lVar7 * 8) = puVar15;
      *(uint *)((longlong)puVar15 + 0x2c) = local_5c8 - 1;
      FUN_140069100(&local_738,puVar15);
      param_1 = local_758;
    }
    FUN_140779360(&local_738);
    FUN_140778010(&local_738);
    local_738 = &DAT_3f8000003f800000;
    uStack_730 = &DAT_3f8000003f800000;
    if (((*(byte *)(param_1 + 0xd) & 1) != 0) && (65504.0 < local_750)) {
      fVar18 = 65504.0 / local_750;
      local_738 = (undefined1 *)CONCAT44(fVar18,fVar18);
      uStack_730 = (undefined1 *)CONCAT44(0x3f800000,fVar18);
    }
  }
  local_798 = param_1 + 9;
  local_7a0 = param_1[8];
  local_7a8 = (undefined1)param_1[7];
  local_790 = &local_738;
  local_7b8 = (undefined8 *)CONCAT44(local_7b8._4_4_,param_1[6]);
  local_7b0 = (undefined8 **)CONCAT71(local_7b0._1_7_,1);
  FUN_142f8736f(param_2,*param_1,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4));
  if (((char)param_1[0xd] == '\x01') && (65504.0 < local_750)) {
    fVar18 = local_750 / 65504.0;
    pfVar2 = *(float **)(param_1 + 0xe);
    *pfVar2 = fVar18;
    pfVar2[1] = fVar18;
    pfVar2[2] = fVar18;
    pfVar2[3] = 1.0;
  }
  if ((local_90 ^ (ulonglong)auStack_7d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fbd4ca FUN_142fbd4ca body=29 status=ok
// SIG undefined FUN_142fbd4ca(void)

void FUN_142fbd4ca(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142fbd4e8 FUN_142fbd4e8 body=29 status=ok
// SIG undefined FUN_142fbd4e8(void)

undefined8 FUN_142fbd4e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fbd506 FUN_142fbd506 body=282 status=ok
// SIG undefined FUN_142fbd506(void)

undefined8 * FUN_142fbd506(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fbd620 FUN_142fbd620 body=105 status=ok
// SIG undefined FUN_142fbd620(void)

void FUN_142fbd620(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_142fbc8ee(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_142fbc8ee(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fbd663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fbd68a FUN_142fbd68a body=1242 status=ok
// SIG undefined FUN_142fbd68a(void)

void FUN_142fbd68a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_728 [32];
  undefined1 local_708;
  undefined1 local_6f9;
  longlong *local_6f8;
  undefined4 local_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined8 local_6e0;
  undefined4 local_6d8;
  undefined8 local_6d4;
  undefined4 local_6cc;
  undefined8 local_6c8;
  int local_6c0;
  undefined1 local_6b8 [112];
  undefined8 *local_648;
  undefined8 *local_640;
  longlong local_620;
  uint local_618;
  uint local_614;
  longlong local_550;
  uint local_548;
  uint local_544;
  longlong local_120;
  uint local_118;
  uint local_114;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_728;
  uVar2 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)param_1[1] * 2) * 8);
  FUN_1407779ba(local_6b8,param_2,param_3,0);
  lVar7 = FUN_14473c272(local_6b8,param_1[2],0);
  lVar8 = param_1[6];
  if (lVar8 != 0) {
    puVar12 = (undefined8 *)((longlong)local_648 + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar12 + 6;
    if (local_640 < puVar9) {
      FUN_140023dd8(&local_648,0x40);
      puVar12 = (undefined8 *)((longlong)local_648 + 0xfU & 0xfffffffffffffff0);
      puVar9 = puVar12 + 6;
    }
    uVar5 = local_618;
    *puVar12 = &PTR_FUN_14a2d3740;
    puVar12[2] = 0;
    puVar12[3] = 0;
    *(undefined4 *)(puVar12 + 4) = 0;
    lVar13 = (longlong)(int)local_618;
    local_618 = local_618 + 1;
    local_648 = puVar9;
    if (local_614 < local_618) {
      FUN_1448cfae8(&local_620,uVar5);
    }
    *(undefined8 **)(local_620 + lVar13 * 8) = puVar12;
    if (lVar7 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar7 + 0xac);
    }
    puVar12[2] = lVar7;
    puVar12[3] = uVar10;
    *(undefined4 *)(puVar12 + 4) = 0x80;
    lVar13 = FUN_14600fd94();
    FUN_140069376(local_6b8);
    puVar14 = (undefined8 *)((longlong)local_648 + 7U & 0xfffffffffffffff8);
    puVar9 = puVar14 + 0x39;
    if (local_640 < puVar9) {
      FUN_140023dd8(&local_648,0x1d0);
      puVar14 = (undefined8 *)((longlong)local_648 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar14 + 0x39;
    }
    lVar4 = *(longlong *)(lVar13 + 0x48);
    local_6f0 = (undefined4)lVar4;
    uStack_6ec = (undefined4)((ulonglong)lVar4 >> 0x20);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    uStack_6e8 = (undefined4)lVar13;
    uStack_6e4 = (undefined4)((ulonglong)lVar13 >> 0x20);
    local_708 = 0;
    local_6f8 = puVar12 + 2;
    local_648 = puVar9;
    FUN_140068f1a(puVar14,&local_6f9,&local_6f8,0x18);
    uVar5 = local_548;
    *puVar14 = &PTR_FUN_14a2e7740;
    puVar14[0x37] = lVar7;
    puVar14[0x38] = lVar8;
    lVar8 = (longlong)(int)local_548;
    local_548 = local_548 + 1;
    if (local_544 < local_548) {
      FUN_14470e57a(&local_550,uVar5);
    }
    *(undefined8 **)(local_550 + lVar8 * 8) = puVar14;
    *(uint *)((longlong)puVar14 + 0x2c) = local_548 - 1;
    FUN_140069100(local_6b8,puVar14);
  }
  lVar8 = param_1[3];
  if ((int)param_1[1] < 2) {
    FUN_14724e41f(local_6b8,uVar2,lVar7,lVar8);
    lVar8 = FUN_142df6ea0(local_6b8,uVar2,lVar7,param_1[4]);
  }
  else {
    FUN_142f84f53();
    FUN_142f854c6(local_6b8,uVar2,lVar7,lVar8);
    lVar8 = param_1[4];
    FUN_142f85ed5(local_6b8,uVar2,lVar7,0);
    FUN_142f84f53(local_6b8,uVar2,lVar7);
    if (lVar8 != 0) {
      FUN_142f86110(local_6b8,uVar2,lVar7,lVar8);
    }
    lVar8 = FUN_142f85960(local_6b8,uVar2,lVar7);
  }
  plVar3 = (longlong *)param_1[5];
  if ((plVar3 != (longlong *)0x0) && (plVar3[2] != 0)) {
    FUN_1447ec05f(&local_6f8,plVar3[2],L"SkyTexture");
    lVar7 = FUN_14473c272(local_6b8,&local_6f8,0);
    if (local_6f8 != (longlong *)0x0) {
      (**(code **)(*local_6f8 + 0x38))();
    }
    local_6f0 = DAT_14c9a52a0;
    uStack_6ec = (undefined4)DAT_14c9a5298;
    uStack_6e8 = (undefined4)((ulonglong)DAT_14c9a5298 >> 0x20);
    uStack_6e4 = DAT_14c9a52a0;
    local_6e0 = DAT_14c9a5298;
    local_6d8 = DAT_14c9a52a0;
    local_6d4 = 0;
    local_6c8 = 0;
    local_6f8 = *(longlong **)(lVar8 + 0x84);
    local_6cc = 6;
    iVar6 = (**(code **)(*plVar3 + 0x30))(plVar3);
    uVar1 = (ulonglong)(iVar6 + -1 + (uint)(iVar6 == 0)) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_6c0 = ((uint)lVar13 ^ 0xffffffc0) + 0x41;
    FUN_1400e8d41(local_6b8,lVar8,lVar7,&local_6f8);
    bVar11 = 0x15;
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == '\x01')) {
      bVar11 = (DAT_14ca84e99 ^ 1) * '\x02' | 0x15;
    }
    if ((*(byte *)(lVar7 + 0x20) & 0xc) == 0) {
      if ((*(byte *)(lVar7 + 0x20) & 0x10) != 0) {
        FUN_140069376(local_6b8);
      }
      uVar5 = local_118;
      lVar8 = (longlong)(int)local_118;
      local_118 = local_118 + 1;
      if (local_114 < local_118) {
        FUN_1400f155a(&local_120,uVar5);
      }
      *(longlong *)(local_120 + lVar8 * 8) = lVar7;
      *(undefined4 *)(lVar7 + 0x1c) = 0x70;
      *(byte *)(lVar7 + 0x20) = *(byte *)(lVar7 + 0x20) & 0xe8 | bVar11;
      *(undefined4 *)(lVar7 + 0x58) = 0x70;
    }
  }
  FUN_140779360(local_6b8);
  lVar8 = *param_1;
  plVar3 = *(longlong **)(lVar8 + 0x3668);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(lVar8 + 0x3668) = 0;
    (**(code **)(*plVar3 + 0x38))();
    lVar8 = *param_1;
  }
  plVar3 = *(longlong **)(lVar8 + 0x3670);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(lVar8 + 0x3670) = 0;
    (**(code **)(*plVar3 + 0x38))();
  }
  FUN_140778010(local_6b8);
  if ((local_48 ^ (ulonglong)auStack_728) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fbdb76 FUN_142fbdb76 body=29 status=ok
// SIG undefined FUN_142fbdb76(void)

void FUN_142fbdb76(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142fbdb94 FUN_142fbdb94 body=29 status=ok
// SIG undefined FUN_142fbdb94(void)

undefined8 FUN_142fbdb94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fbdbb2 FUN_142fbdbb2 body=282 status=ok
// SIG undefined FUN_142fbdbb2(void)

undefined8 * FUN_142fbdbb2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fbdccc FUN_142fbdccc body=105 status=ok
// SIG undefined FUN_142fbdccc(void)

void FUN_142fbdccc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_142fbd68a(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_142fbd68a(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fbdd0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fbdd36 FUN_142fbdd36 body=1418 status=ok
// SIG undefined FUN_142fbdd36(void)

void FUN_142fbdd36(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar7,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar9 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar11 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar5;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar3;
  *(float *)(puVar12 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar11 == 0) {
    lVar11 = local_138;
  }
  if (lVar9 == 0) {
    lVar9 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar11;
  lStack_130 = lVar9;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar8;
    *(undefined4 *)(puVar12 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145f3596e();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca43ee0);
  uVar6 = DAT_14ca89240;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = uVar6;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb5b0;
  puVar12[2] = uVar6;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  *(undefined4 *)(puVar12 + 4) = 3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 6;
  puVar12[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fbe2c2 FUN_142fbe2c2 body=1418 status=ok
// SIG undefined FUN_142fbe2c2(void)

void FUN_142fbe2c2(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar7,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar9 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar11 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar5;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar3;
  *(float *)(puVar12 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar11 == 0) {
    lVar11 = local_138;
  }
  if (lVar9 == 0) {
    lVar9 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar11;
  lStack_130 = lVar9;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar8;
    *(undefined4 *)(puVar12 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145e7586c();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca43f68);
  uVar6 = DAT_14ca89240;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = uVar6;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb5b0;
  puVar12[2] = uVar6;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  *(undefined4 *)(puVar12 + 4) = 3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 6;
  puVar12[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fbe84e FUN_142fbe84e body=1418 status=ok
// SIG undefined FUN_142fbe84e(void)

void FUN_142fbe84e(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar7,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar9 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar11 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar5;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar3;
  *(float *)(puVar12 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar11 == 0) {
    lVar11 = local_138;
  }
  if (lVar9 == 0) {
    lVar9 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar11;
  lStack_130 = lVar9;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar8;
    *(undefined4 *)(puVar12 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145e5c07c();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca43ff0);
  uVar6 = DAT_14ca89240;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = uVar6;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb5b0;
  puVar12[2] = uVar6;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  *(undefined4 *)(puVar12 + 4) = 3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 6;
  puVar12[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fbedda FUN_142fbedda body=38 status=ok
// SIG undefined FUN_142fbedda(void)

undefined8 FUN_142fbedda(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fbee00 FUN_142fbee00 body=854 status=ok
// SIG undefined FUN_142fbee00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fbee00(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  longlong *_Src;
  undefined1 *_Src_00;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  longlong local_128 [3];
  longlong *local_110;
  int local_108;
  undefined1 local_100 [64];
  undefined1 *local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_144b1c6fa(param_1 + 0x10,local_128 + 2);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar7 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar7 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a1fb978;
  puVar7[3] = 0;
  *(int *)(puVar7 + 4) = local_108;
  if ((longlong)local_108 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x24) = 8;
  }
  else {
    _Src = local_128 + 2;
    if (local_110 != (longlong *)0x0) {
      _Src = local_110;
    }
    FUN_1446fe144(puVar7 + 2,local_108,0);
    puVar5 = (undefined8 *)puVar7[3];
    if ((undefined8 *)puVar7[3] == (undefined8 *)0x0) {
      puVar5 = puVar7 + 2;
    }
    memcpy(puVar5,_Src,(longlong)local_108);
  }
  puVar7[0xd] = 0;
  *(int *)(puVar7 + 0xe) = local_b8;
  if ((longlong)local_b8 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x74) = 8;
  }
  else {
    _Src_00 = local_c0;
    if (local_c0 == (undefined1 *)0x0) {
      _Src_00 = local_100;
    }
    FUN_1446fe1b8(puVar7 + 5,local_b8,0);
    puVar5 = (undefined8 *)puVar7[0xd];
    if ((undefined8 *)puVar7[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar7 + 5;
    }
    memcpy(puVar5,_Src_00,(longlong)local_b8 << 3);
  }
  puVar7[0xf] = local_b0;
  puVar7[0x10] = uStack_a8;
  if (local_c0 != (undefined1 *)0x0) {
    FUN_1400020a8(local_c0);
  }
  if (local_110 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_148 = local_128;
  local_128[0] = 0;
  local_128[1] = 0;
  local_128[2] = 0;
  local_110 = (longlong *)0x100000009;
  lVar6 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  auVar8._0_8_ = (**(code **)(*DAT_14ca83900 + 0x498))
                           (DAT_14ca83900,param_2,
                            *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x10));
  auVar4 = _DAT_14a2dde90;
  auVar3 = _DAT_149e1ee40;
  auVar8._8_8_ = extraout_XMM0_Qb;
  auVar8 = pmovsxwd(auVar8,0x7fff7fff7fff7fff);
  auVar9 = pmovsxwd(in_XMM2,0x7bff7bff7bff7bff);
  auVar10 = pmovsxwd(in_XMM4,0x7c007c007c007c00);
  auVar11 = pmovsxbw(in_XMM5,0x4000400040004000);
  do {
    uVar1 = *(ulonglong *)(local_128[0] + lVar6 * 2);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar1;
    auVar13 = pmovzxwd(unaff_XMM8,auVar12);
    auVar13 = auVar13 & auVar8;
    iVar15 = auVar13._0_4_;
    iVar17 = auVar13._4_4_;
    iVar18 = auVar13._8_4_;
    iVar19 = auVar13._12_4_;
    auVar16._0_4_ = (float)(iVar15 << 0xd) * 5.192297e+33;
    auVar16._4_4_ = (float)(iVar17 << 0xd) * 5.192297e+33;
    auVar16._8_4_ = (float)(iVar18 << 0xd) * 5.192297e+33;
    auVar16._12_4_ = (float)(iVar19 << 0xd) * 0.0;
    auVar20._0_4_ = -(uint)(auVar9._0_4_ < iVar15);
    auVar20._4_4_ = -(uint)(auVar9._4_4_ < iVar17);
    auVar20._8_4_ = -(uint)(auVar9._8_4_ < iVar18);
    auVar20._12_4_ = -(uint)(auVar9._12_4_ < iVar19);
    auVar23._0_12_ = SUB1412(SUB1614((undefined1  [16])0x0,0),0);
    auVar23._12_2_ = 0;
    auVar23._14_2_ = (short)(uVar1 >> 0x30);
    auVar22._12_4_ = auVar23._12_4_;
    auVar22._0_10_ = SUB1410(SUB1614((undefined1  [16])0x0,0),0);
    auVar22._10_2_ = (short)(uVar1 >> 0x20);
    auVar21._10_6_ = auVar22._10_6_;
    auVar21._0_10_ = (unkuint10)0 << 0x40;
    auVar2._2_8_ = auVar21._8_8_;
    auVar2._0_2_ = (short)(uVar1 >> 0x10);
    auVar2._10_2_ = 0;
    auVar13._2_12_ = auVar2 << 0x10;
    auVar13._0_2_ = (short)uVar1;
    auVar13._14_2_ = 0;
    auVar14._0_4_ = -(uint)(auVar10._0_4_ < iVar15);
    auVar14._4_4_ = -(uint)(auVar10._4_4_ < iVar17);
    auVar14._8_4_ = -(uint)(auVar10._8_4_ < iVar18);
    auVar14._12_4_ = -(uint)(auVar10._12_4_ < iVar19);
    unaff_XMM8 = auVar14 & auVar11 | auVar13 << 0x10 & auVar3 | auVar20 & auVar4 | auVar16;
    *(int *)(*(longlong *)(param_1 + 0x1c0) + lVar6) = unaff_XMM8._0_4_;
    *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x30 + lVar6) = unaff_XMM8._4_4_;
    *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x60 + lVar6) = unaff_XMM8._8_4_;
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x24);
  if (local_128[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fbf158 FUN_142fbf158 body=29 status=ok
// SIG undefined FUN_142fbf158(void)

undefined8 FUN_142fbf158(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fbf18a FUN_142fbf18a body=93 status=ok
// SIG undefined FUN_142fbf18a(void)

void FUN_142fbf18a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2e79c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142fbf1e8 FUN_142fbf1e8 body=93 status=ok
// SIG undefined FUN_142fbf1e8(void)

void FUN_142fbf1e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a2e79c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142fbf246 FUN_142fbf246 body=126 status=ok
// SIG undefined FUN_142fbf246(void)

void FUN_142fbf246(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a2e79c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142fbf2b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142fbf2ca FUN_142fbf2ca body=16 status=ok
// SIG undefined FUN_142fbf2ca(void)

undefined1 FUN_142fbf2ca(void)

{
  FUN_142fbf2da();
  return 1;
}



// FUNCTION 142fbf2da FUN_142fbf2da body=1404 status=ok
// SIG undefined FUN_142fbf2da(void)

void FUN_142fbf2da(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
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
  LARGE_INTEGER *local_78;
  LARGE_INTEGER local_68;
  undefined8 uStack_60;
  undefined ***local_58;
  uint local_50;
  uint local_4c;
  undefined **local_48;
  code *pcStack_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_142fbf315;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_142fbf31e;
      goto LAB_142fbf3a9;
    }
  }
  else {
LAB_142fbf315:
    if (iVar7 != 0x10) {
LAB_142fbf3a9:
      if (DAT_14ca9a438 != '\0') goto LAB_142fbf3da;
      if ((DAT_14c86a9f8 == '\x01') && (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 != 2)) {
        if (iVar7 != 1) {
LAB_142fbf3da:
          if (DAT_14ca9a43c == 0) {
            puVar2 = (undefined8 *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x308);
            puVar11 = (uint *)*puVar2;
            if (puVar11 != (uint *)0x0) goto LAB_142fbf511;
            while( true ) {
              uVar13 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar13 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar13 | 1;
                __tlregdtor(&LAB_142fb49ae);
              }
              lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
              ;
              puVar10 = *(undefined4 **)(lVar4 + 0x310);
              *(undefined8 *)(lVar4 + 0x310) = 0;
              if (puVar10 == (undefined4 *)0x0) {
                puVar10 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar10 = 0xffffffff;
              *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
              puVar10[0x12] = 0;
              *puVar2 = puVar10;
              FUN_140217a48(puVar2);
              puVar11 = (uint *)*puVar2;
LAB_142fbf511:
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
                  goto LAB_142fbf591;
                }
              }
            }
            uVar13 = uVar13 + 1;
LAB_142fbf591:
            *(uint **)(puVar11 + 0x10) = puVar15;
            puVar11[0x12] = uVar13;
            iVar7 = 0;
            FUN_1447247dc(puVar17,0);
            *puVar17 = &PTR_FUN_14a2e7a58;
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
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x2b8);
            if (lVar4 == 0) {
              uVar5 = 1;
              if ((char)uVar16 != '\x06') {
                uVar5 = uVar16;
              }
              uVar16 = uVar5;
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
              local_68.s.LowPart._0_1_ = 1;
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
              UNLOCK();
              local_68.s.LowPart._0_1_ = 1;
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
            local_78 = &local_68;
            local_58 = (undefined ***)0x0;
            local_48 = &PTR_LAB_14a2b3190;
            pcStack_40 = FUN_142fbf86a;
            local_68.QuadPart = (LONGLONG)&LAB_142ea45a2;
            FUN_14005a792(&DAT_14ca9a440,L"FSceneRendererCleanUp",&DAT_14ca44b80);
            if ((undefined1 *)local_68.QuadPart != (undefined1 *)0x0) {
              pppuVar14 = local_58;
              if (local_58 == (undefined ***)0x0) {
                pppuVar14 = &local_48;
              }
              (*(code *)(*pppuVar14)[2])();
            }
          }
          if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 != DVar9) goto LAB_142fbf3da;
      }
    }
  }
LAB_142fbf31e:
  lVar4 = DAT_14ca95618;
  if (DAT_14ca95618 == 0) goto LAB_142fbf364;
  if (DAT_14c87e718 == '\0') {
    iVar7 = *(int *)(DAT_14ca95618 + 0x1c);
    if ((2 < iVar7) && (bVar6 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar6 < 3)) {
      local_68.QuadPart = 0x20100000001;
      uStack_60 = 0x30100000101;
      local_58 = (undefined ***)(CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000);
      local_50 = DAT_14c7585c8 | 0x100;
      local_4c = DAT_14c7585c8 | 0x300;
      local_48 = (undefined **)0x20000000000;
      pcStack_40 = (code *)0x30000000100;
      if (*(byte *)((longlong)&local_68 + (ulonglong)(iVar7 - 3) * 4) == bVar6) goto LAB_142fbf826;
    }
    QueryPerformanceCounter(&local_68);
    uStack_60 = 0xffffffffffffffff;
    FUN_140056092(lVar4,&local_68);
  }
  else {
LAB_142fbf826:
    FUN_140082318(lVar4);
  }
LAB_142fbf364:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 142fbf86a FUN_142fbf86a body=262 status=ok
// SIG undefined FUN_142fbf86a(void)

void FUN_142fbf86a(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  lVar2 = DAT_14ca95618;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14ca95618 == 0) goto LAB_142fbf8c5;
  if (DAT_14c87e718 == '\0') {
    iVar1 = *(int *)(DAT_14ca95618 + 0x1c);
    if (2 < iVar1) {
      bVar3 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar3 < 3) {
        local_58.QuadPart = 0x20100000001;
        uStack_50 = 0x30100000101;
        local_48 = DAT_14c7585c8;
        local_44 = DAT_14c7585c8 | 0x200;
        local_40 = DAT_14c7585c8 | 0x100;
        local_3c = DAT_14c7585c8 | 0x300;
        local_38 = 0;
        uStack_34 = 0x200;
        uStack_30 = 0x100;
        uStack_2c = 0x300;
        if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar1 - 3) * 4) == bVar3)
        goto LAB_142fbf964;
      }
    }
    QueryPerformanceCounter(&local_58);
    uStack_50 = 0xffffffffffffffff;
    FUN_140056092(lVar2,&local_58);
  }
  else {
LAB_142fbf964:
    FUN_140082318(lVar2);
  }
LAB_142fbf8c5:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_14028fcde(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fbf972 FUN_142fbf972 body=282 status=ok
// SIG undefined FUN_142fbf972(void)

undefined8 * FUN_142fbf972(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fbfa8c FUN_142fbfa8c body=557 status=ok
// SIG undefined FUN_142fbfa8c(void)

void FUN_142fbfa8c(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  lVar3 = DAT_14ca95618;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 == 0) {
    if (DAT_14ca95618 == 0) goto LAB_142fbfb88;
    if (DAT_14c87e718 == '\0') {
      iVar2 = *(int *)(DAT_14ca95618 + 0x1c);
      if (2 < iVar2) {
        bVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
        if (bVar4 < 3) {
          local_58.QuadPart = 0x20100000001;
          uStack_50 = 0x30100000101;
          local_48 = DAT_14c7585c8;
          local_44 = DAT_14c7585c8 | 0x200;
          local_40 = DAT_14c7585c8 | 0x100;
          local_3c = DAT_14c7585c8 | 0x300;
          local_38 = 0;
          uStack_34 = 0x200;
          uStack_30 = 0x100;
          uStack_2c = 0x300;
          if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar2 - 3) * 4) == bVar4)
          goto LAB_142fbfcd1;
        }
      }
      QueryPerformanceCounter(&local_58);
      uStack_50 = 0xffffffffffffffff;
      FUN_140056092(lVar3,&local_58);
    }
    else {
LAB_142fbfcd1:
      FUN_140082318(lVar3);
    }
LAB_142fbfb88:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  lVar3 = DAT_14ca95618;
  UNLOCK();
  if (DAT_14ca95618 == 0) goto LAB_142fbfafe;
  if (DAT_14c87e718 == '\0') {
    iVar2 = *(int *)(DAT_14ca95618 + 0x1c);
    if (2 < iVar2) {
      bVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar4 < 3) {
        local_58.QuadPart = 0x20100000001;
        uStack_50 = 0x30100000101;
        local_48 = DAT_14c7585c8;
        local_44 = DAT_14c7585c8 | 0x200;
        local_40 = DAT_14c7585c8 | 0x100;
        local_3c = DAT_14c7585c8 | 0x300;
        local_38 = 0;
        uStack_34 = 0x200;
        uStack_30 = 0x100;
        uStack_2c = 0x300;
        if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar2 - 3) * 4) == bVar4)
        goto LAB_142fbfc47;
      }
    }
    QueryPerformanceCounter(&local_58);
    uStack_50 = 0xffffffffffffffff;
    FUN_140056092(lVar3,&local_58);
  }
  else {
LAB_142fbfc47:
    FUN_140082318(lVar3);
  }
LAB_142fbfafe:
  FUN_14028fcde(&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fbfcde FUN_142fbfcde body=65 status=ok
// SIG undefined FUN_142fbfcde(void)

void FUN_142fbfcde(longlong *param_1)

{
  if (0 < DAT_14c760988) {
    FUN_14153ddec(&DAT_14ca9a3e8);
  }
  if (((char)param_1[1] == '\x01') && ((longlong *)*param_1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142fbfd11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 1000))();
    return;
  }
  return;
}



// FUNCTION 142fbfd2a FUN_142fbfd2a body=12 status=ok
// SIG undefined FUN_142fbfd2a(void)

void FUN_142fbfd2a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fbfd33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fbfd36 FUN_142fbfd36 body=29 status=ok
// SIG undefined FUN_142fbfd36(void)

undefined8 FUN_142fbfd36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fbfd54 FUN_142fbfd54 body=282 status=ok
// SIG undefined FUN_142fbfd54(void)

undefined8 * FUN_142fbfd54(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fbfe6e FUN_142fbfe6e body=114 status=ok
// SIG undefined FUN_142fbfe6e(void)

ulonglong FUN_142fbfe6e(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = (ulonglong)DAT_14c7585c8;
  if (0 < DAT_14c760988) {
    uVar2 = FUN_14153ddec(&DAT_14ca9a3e8);
  }
  if ((*(char *)(param_1 + 0x16) == '\x01') && ((longlong *)param_1[0x15] != (longlong *)0x0)) {
    uVar2 = (**(code **)(*(longlong *)param_1[0x15] + 1000))();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fbfed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 142fbfeec FUN_142fbfeec body=31 status=ok
// SIG undefined FUN_142fbfeec(void)

undefined8 FUN_142fbfeec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fbff0c FUN_142fbff0c body=271 status=ok
// SIG undefined FUN_142fbff0c(void)

longlong FUN_142fbff0c(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)(param_1 + 8);
  FUN_1446fb350(param_1 + 0x30);
  FUN_140021158(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    plVar5 = (longlong *)*plVar1;
    do {
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        lVar4 = 0x3df0;
        do {
          if (*(longlong *)(lVar2 + 0xc0 + lVar4) != 0) {
            FUN_1400020a8();
          }
          if ((0x50 < *(ushort *)(lVar2 + 0x62 + lVar4)) &&
             (*(longlong *)(lVar2 + 0x10 + lVar4) != 0)) {
            FUN_1400020a8();
          }
          *(undefined2 *)(lVar2 + 0x62 + lVar4) = 0;
          *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
          if (*(longlong *)(lVar2 + lVar4) != 0) {
            FUN_1400020a8();
          }
          lVar4 = lVar4 + -0x120;
        } while (lVar4 != -0x110);
        FUN_1400020a8(lVar2);
      }
      plVar5 = plVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1447ab16c(plVar1,0);
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc001c FUN_142fc001c body=38 status=ok
// SIG undefined FUN_142fc001c(void)

undefined8 FUN_142fc001c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc0042 FUN_142fc0042 body=869 status=ok
// SIG undefined FUN_142fc0042(void)

void FUN_142fc0042(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  undefined4 local_118;
  undefined1 local_108 [8];
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f0 [64];
  undefined1 *local_b0;
  int local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_144b1c6fa(param_1 + 0x10,local_108);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar8 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar8 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a1fb978;
  puVar8[3] = 0;
  *(int *)(puVar8 + 4) = local_f8;
  if ((longlong)local_f8 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x24) = 8;
  }
  else {
    puVar7 = local_108;
    if (local_100 != (undefined1 *)0x0) {
      puVar7 = local_100;
    }
    FUN_1446fe144(puVar8 + 2,local_f8,0);
    puVar6 = (undefined8 *)puVar8[3];
    if ((undefined8 *)puVar8[3] == (undefined8 *)0x0) {
      puVar6 = puVar8 + 2;
    }
    memcpy(puVar6,puVar7,(longlong)local_f8);
  }
  puVar8[0xd] = 0;
  *(int *)(puVar8 + 0xe) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x74) = 8;
  }
  else {
    puVar7 = local_b0;
    if (local_b0 == (undefined1 *)0x0) {
      puVar7 = local_f0;
    }
    FUN_1446fe1b8(puVar8 + 5,local_a8,0);
    puVar6 = (undefined8 *)puVar8[0xd];
    if ((undefined8 *)puVar8[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar8 + 5;
    }
    memcpy(puVar6,puVar7,(longlong)local_a8 << 3);
  }
  *(undefined4 *)(puVar8 + 0xf) = local_a0;
  *(undefined4 *)((longlong)puVar8 + 0x7c) = uStack_9c;
  *(undefined4 *)(puVar8 + 0x10) = uStack_98;
  *(undefined4 *)((longlong)puVar8 + 0x84) = uStack_94;
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8(local_b0);
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1d4);
  iVar2 = *(int *)(param_1 + 0x1d0);
  iVar3 = *(int *)(param_1 + 0x1cc);
  iVar4 = *(int *)(param_1 + 0x1c8);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar8 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar8 + 2) = (float)iVar4;
  *(float *)((longlong)puVar8 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(float *)((longlong)puVar8 + 0x1c) = (float)iVar2;
  *(float *)(puVar8 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
  iVar1 = *(int *)(param_1 + 0x1e0);
  iVar2 = *(int *)(param_1 + 0x1d8);
  iVar3 = *(int *)(param_1 + 0x1dc);
  iVar4 = *(int *)(param_1 + 0x1e4);
  if (0 < (iVar4 - iVar3) * (iVar1 - iVar2)) {
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x30);
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar8;
    param_2[6] = (ulonglong)(puVar8 + 1);
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_14a20cb90;
    *(undefined1 *)(puVar8 + 2) = 1;
    *(int *)((longlong)puVar8 + 0x14) = iVar2;
    *(int *)(puVar8 + 3) = iVar3;
    *(int *)((longlong)puVar8 + 0x1c) = iVar1;
    *(int *)(puVar8 + 4) = iVar4;
  }
  local_118 = *(undefined4 *)(param_1 + 0x1e8);
  lVar5 = *(longlong *)(param_1 + 0x1b8);
  local_120 = lVar5 + 0xa0;
  local_128 = lVar5 + 0x28;
  FUN_142de60ce(*(undefined8 *)(param_1 + 0x1c0),param_2,lVar5 + 0x18);
  if ((local_90 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fc03b4 FUN_142fc03b4 body=271 status=ok
// SIG undefined FUN_142fc03b4(void)

longlong FUN_142fc03b4(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)(param_1 + 8);
  FUN_1446fb350(param_1 + 0x30);
  FUN_140021158(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    plVar5 = (longlong *)*plVar1;
    do {
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        lVar4 = 0x3df0;
        do {
          if (*(longlong *)(lVar2 + 0xc0 + lVar4) != 0) {
            FUN_1400020a8();
          }
          if ((0x50 < *(ushort *)(lVar2 + 0x62 + lVar4)) &&
             (*(longlong *)(lVar2 + 0x10 + lVar4) != 0)) {
            FUN_1400020a8();
          }
          *(undefined2 *)(lVar2 + 0x62 + lVar4) = 0;
          *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
          if (*(longlong *)(lVar2 + lVar4) != 0) {
            FUN_1400020a8();
          }
          lVar4 = lVar4 + -0x120;
        } while (lVar4 != -0x110);
        FUN_1400020a8(lVar2);
      }
      plVar5 = plVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1447ab16c(plVar1,0);
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc04c4 FUN_142fc04c4 body=38 status=ok
// SIG undefined FUN_142fc04c4(void)

undefined8 FUN_142fc04c4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc04ea FUN_142fc04ea body=869 status=ok
// SIG undefined FUN_142fc04ea(void)

void FUN_142fc04ea(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  undefined4 local_118;
  undefined1 local_108 [8];
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f0 [64];
  undefined1 *local_b0;
  int local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_144b1c6fa(param_1 + 0x10,local_108);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar8 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar8 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a1fb978;
  puVar8[3] = 0;
  *(int *)(puVar8 + 4) = local_f8;
  if ((longlong)local_f8 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x24) = 8;
  }
  else {
    puVar7 = local_108;
    if (local_100 != (undefined1 *)0x0) {
      puVar7 = local_100;
    }
    FUN_1446fe144(puVar8 + 2,local_f8,0);
    puVar6 = (undefined8 *)puVar8[3];
    if ((undefined8 *)puVar8[3] == (undefined8 *)0x0) {
      puVar6 = puVar8 + 2;
    }
    memcpy(puVar6,puVar7,(longlong)local_f8);
  }
  puVar8[0xd] = 0;
  *(int *)(puVar8 + 0xe) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x74) = 8;
  }
  else {
    puVar7 = local_b0;
    if (local_b0 == (undefined1 *)0x0) {
      puVar7 = local_f0;
    }
    FUN_1446fe1b8(puVar8 + 5,local_a8,0);
    puVar6 = (undefined8 *)puVar8[0xd];
    if ((undefined8 *)puVar8[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar8 + 5;
    }
    memcpy(puVar6,puVar7,(longlong)local_a8 << 3);
  }
  *(undefined4 *)(puVar8 + 0xf) = local_a0;
  *(undefined4 *)((longlong)puVar8 + 0x7c) = uStack_9c;
  *(undefined4 *)(puVar8 + 0x10) = uStack_98;
  *(undefined4 *)((longlong)puVar8 + 0x84) = uStack_94;
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8(local_b0);
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1d4);
  iVar2 = *(int *)(param_1 + 0x1d0);
  iVar3 = *(int *)(param_1 + 0x1cc);
  iVar4 = *(int *)(param_1 + 0x1c8);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar8 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar8 + 2) = (float)iVar4;
  *(float *)((longlong)puVar8 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(float *)((longlong)puVar8 + 0x1c) = (float)iVar2;
  *(float *)(puVar8 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
  iVar1 = *(int *)(param_1 + 0x1e0);
  iVar2 = *(int *)(param_1 + 0x1d8);
  iVar3 = *(int *)(param_1 + 0x1dc);
  iVar4 = *(int *)(param_1 + 0x1e4);
  if (0 < (iVar4 - iVar3) * (iVar1 - iVar2)) {
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x30);
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar8;
    param_2[6] = (ulonglong)(puVar8 + 1);
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_14a20cb90;
    *(undefined1 *)(puVar8 + 2) = 1;
    *(int *)((longlong)puVar8 + 0x14) = iVar2;
    *(int *)(puVar8 + 3) = iVar3;
    *(int *)((longlong)puVar8 + 0x1c) = iVar1;
    *(int *)(puVar8 + 4) = iVar4;
  }
  local_118 = *(undefined4 *)(param_1 + 0x1e8);
  lVar5 = *(longlong *)(param_1 + 0x1b8);
  local_120 = lVar5 + 0xa0;
  local_128 = lVar5 + 0x28;
  FUN_142de60ce(*(undefined8 *)(param_1 + 0x1c0),param_2,lVar5 + 0x18);
  if ((local_90 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fc0850 FUN_142fc0850 body=271 status=ok
// SIG undefined FUN_142fc0850(void)

longlong FUN_142fc0850(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)(param_1 + 8);
  FUN_1446fb350(param_1 + 0x30);
  FUN_140021158(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    plVar5 = (longlong *)*plVar1;
    do {
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        lVar4 = 0x3df0;
        do {
          if (*(longlong *)(lVar2 + 0xc0 + lVar4) != 0) {
            FUN_1400020a8();
          }
          if ((0x50 < *(ushort *)(lVar2 + 0x62 + lVar4)) &&
             (*(longlong *)(lVar2 + 0x10 + lVar4) != 0)) {
            FUN_1400020a8();
          }
          *(undefined2 *)(lVar2 + 0x62 + lVar4) = 0;
          *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
          if (*(longlong *)(lVar2 + lVar4) != 0) {
            FUN_1400020a8();
          }
          lVar4 = lVar4 + -0x120;
        } while (lVar4 != -0x110);
        FUN_1400020a8(lVar2);
      }
      plVar5 = plVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1447ab16c(plVar1,0);
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc0960 FUN_142fc0960 body=118 status=ok
// SIG undefined FUN_142fc0960(void)

undefined8 * FUN_142fc0960(undefined8 *param_1,int param_2)

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



// FUNCTION 142fc09d6 FUN_142fc09d6 body=495 status=ok
// SIG undefined FUN_142fc09d6(void)

void FUN_142fc09d6(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined **local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined **local_b8;
  undefined4 local_b0;
  undefined2 local_a8;
  longlong local_a0;
  int local_98;
  longlong local_90;
  undefined ***local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar2 = *piVar1;
  if (iVar2 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar2 = *piVar1;
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = 0x40000010;
  }
  local_d8 = *(longlong *)(param_1 + 0xa8);
  local_c0 = local_d8 + 0xa0;
  local_c8 = local_d8 + 0x28;
  local_88 = &local_e0;
  local_e0 = &PTR_FUN_14a1f9a30;
  local_d0 = local_d8 + 0x18;
  local_2c = *(undefined1 *)(param_1 + 0x108);
  local_a0 = *(longlong *)(param_1 + 0xb0);
  local_90 = *(longlong *)(param_1 + 0xb8);
  local_98 = *(int *)(local_90 + 0x3090);
  local_b0 = (&DAT_14ca11f28)[(ulonglong)(2 < local_98) * 0x3a];
  local_a8 = 0x202;
  local_80 = 0x3a;
  local_b8 = &PTR_FUN_14a1f0c90;
  local_78 = *(undefined4 *)(param_1 + 0xc0);
  uStack_74 = *(undefined4 *)(param_1 + 0xc4);
  uStack_70 = *(undefined4 *)(param_1 + 200);
  uStack_6c = *(undefined4 *)(param_1 + 0xcc);
  local_68 = *(undefined4 *)(param_1 + 0xd0);
  uStack_64 = *(undefined4 *)(param_1 + 0xd4);
  uStack_60 = *(undefined4 *)(param_1 + 0xd8);
  uStack_5c = *(undefined4 *)(param_1 + 0xdc);
  local_58 = *(undefined4 *)(param_1 + 0xe0);
  uStack_54 = *(undefined4 *)(param_1 + 0xe4);
  uStack_50 = *(undefined4 *)(param_1 + 0xe8);
  uStack_4c = *(undefined4 *)(param_1 + 0xec);
  local_48 = *(undefined4 *)(param_1 + 0xf0);
  uStack_44 = *(undefined4 *)(param_1 + 0xf4);
  uStack_40 = *(undefined4 *)(param_1 + 0xf8);
  uStack_3c = *(undefined4 *)(param_1 + 0xfc);
  local_38 = 0xf;
  local_34 = 0;
  local_32 = 0;
  if (local_a0 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = *(undefined4 *)(local_a0 + 0x35e8);
  }
  local_28 = 0;
  local_e8 = 0xffffffff;
  FUN_1447768a6(&local_b8,*(undefined8 *)(param_1 + 0x100),0xffffffffffffffff,0);
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = iVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142fc0bc6 FUN_142fc0bc6 body=110 status=ok
// SIG undefined FUN_142fc0bc6(void)

undefined8 * FUN_142fc0bc6(undefined8 *param_1,int param_2)

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



// FUNCTION 142fc0c34 FUN_142fc0c34 body=38 status=ok
// SIG undefined FUN_142fc0c34(void)

undefined8 FUN_142fc0c34(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc0c5a FUN_142fc0c5a body=869 status=ok
// SIG undefined FUN_142fc0c5a(void)

void FUN_142fc0c5a(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  undefined4 local_118;
  undefined1 local_108 [8];
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f0 [64];
  undefined1 *local_b0;
  int local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_144b1c6fa(param_1 + 0x10,local_108);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar8 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar8 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a1fb978;
  puVar8[3] = 0;
  *(int *)(puVar8 + 4) = local_f8;
  if ((longlong)local_f8 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x24) = 8;
  }
  else {
    puVar7 = local_108;
    if (local_100 != (undefined1 *)0x0) {
      puVar7 = local_100;
    }
    FUN_1446fe144(puVar8 + 2,local_f8,0);
    puVar6 = (undefined8 *)puVar8[3];
    if ((undefined8 *)puVar8[3] == (undefined8 *)0x0) {
      puVar6 = puVar8 + 2;
    }
    memcpy(puVar6,puVar7,(longlong)local_f8);
  }
  puVar8[0xd] = 0;
  *(int *)(puVar8 + 0xe) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x74) = 8;
  }
  else {
    puVar7 = local_b0;
    if (local_b0 == (undefined1 *)0x0) {
      puVar7 = local_f0;
    }
    FUN_1446fe1b8(puVar8 + 5,local_a8,0);
    puVar6 = (undefined8 *)puVar8[0xd];
    if ((undefined8 *)puVar8[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar8 + 5;
    }
    memcpy(puVar6,puVar7,(longlong)local_a8 << 3);
  }
  *(undefined4 *)(puVar8 + 0xf) = local_a0;
  *(undefined4 *)((longlong)puVar8 + 0x7c) = uStack_9c;
  *(undefined4 *)(puVar8 + 0x10) = uStack_98;
  *(undefined4 *)((longlong)puVar8 + 0x84) = uStack_94;
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8(local_b0);
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1d4);
  iVar2 = *(int *)(param_1 + 0x1d0);
  iVar3 = *(int *)(param_1 + 0x1cc);
  iVar4 = *(int *)(param_1 + 0x1c8);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar8 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar8 + 2) = (float)iVar4;
  *(float *)((longlong)puVar8 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(float *)((longlong)puVar8 + 0x1c) = (float)iVar2;
  *(float *)(puVar8 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
  iVar1 = *(int *)(param_1 + 0x1e0);
  iVar2 = *(int *)(param_1 + 0x1d8);
  iVar3 = *(int *)(param_1 + 0x1dc);
  iVar4 = *(int *)(param_1 + 0x1e4);
  if (0 < (iVar4 - iVar3) * (iVar1 - iVar2)) {
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x30);
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar8;
    param_2[6] = (ulonglong)(puVar8 + 1);
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_14a20cb90;
    *(undefined1 *)(puVar8 + 2) = 1;
    *(int *)((longlong)puVar8 + 0x14) = iVar2;
    *(int *)(puVar8 + 3) = iVar3;
    *(int *)((longlong)puVar8 + 0x1c) = iVar1;
    *(int *)(puVar8 + 4) = iVar4;
  }
  local_118 = *(undefined4 *)(param_1 + 0x1e8);
  lVar5 = *(longlong *)(param_1 + 0x1b8);
  local_120 = lVar5 + 0xa0;
  local_128 = lVar5 + 0x28;
  FUN_142de60ce(*(undefined8 *)(param_1 + 0x1c0),param_2,lVar5 + 0x18);
  if ((local_90 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fc0fc0 FUN_142fc0fc0 body=271 status=ok
// SIG undefined FUN_142fc0fc0(void)

longlong FUN_142fc0fc0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)(param_1 + 8);
  FUN_1446fb350(param_1 + 0x30);
  FUN_140021158(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    plVar5 = (longlong *)*plVar1;
    do {
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        lVar4 = 0x3df0;
        do {
          if (*(longlong *)(lVar2 + 0xc0 + lVar4) != 0) {
            FUN_1400020a8();
          }
          if ((0x50 < *(ushort *)(lVar2 + 0x62 + lVar4)) &&
             (*(longlong *)(lVar2 + 0x10 + lVar4) != 0)) {
            FUN_1400020a8();
          }
          *(undefined2 *)(lVar2 + 0x62 + lVar4) = 0;
          *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
          if (*(longlong *)(lVar2 + lVar4) != 0) {
            FUN_1400020a8();
          }
          lVar4 = lVar4 + -0x120;
        } while (lVar4 != -0x110);
        FUN_1400020a8(lVar2);
      }
      plVar5 = plVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1447ab16c(plVar1,0);
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc10d0 FUN_142fc10d0 body=38 status=ok
// SIG undefined FUN_142fc10d0(void)

undefined8 FUN_142fc10d0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc10f6 FUN_142fc10f6 body=869 status=ok
// SIG undefined FUN_142fc10f6(void)

void FUN_142fc10f6(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  undefined4 local_118;
  undefined1 local_108 [8];
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f0 [64];
  undefined1 *local_b0;
  int local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_144b1c6fa(param_1 + 0x10,local_108);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar8 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar8 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a1fb978;
  puVar8[3] = 0;
  *(int *)(puVar8 + 4) = local_f8;
  if ((longlong)local_f8 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x24) = 8;
  }
  else {
    puVar7 = local_108;
    if (local_100 != (undefined1 *)0x0) {
      puVar7 = local_100;
    }
    FUN_1446fe144(puVar8 + 2,local_f8,0);
    puVar6 = (undefined8 *)puVar8[3];
    if ((undefined8 *)puVar8[3] == (undefined8 *)0x0) {
      puVar6 = puVar8 + 2;
    }
    memcpy(puVar6,puVar7,(longlong)local_f8);
  }
  puVar8[0xd] = 0;
  *(int *)(puVar8 + 0xe) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0x74) = 8;
  }
  else {
    puVar7 = local_b0;
    if (local_b0 == (undefined1 *)0x0) {
      puVar7 = local_f0;
    }
    FUN_1446fe1b8(puVar8 + 5,local_a8,0);
    puVar6 = (undefined8 *)puVar8[0xd];
    if ((undefined8 *)puVar8[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar8 + 5;
    }
    memcpy(puVar6,puVar7,(longlong)local_a8 << 3);
  }
  *(undefined4 *)(puVar8 + 0xf) = local_a0;
  *(undefined4 *)((longlong)puVar8 + 0x7c) = uStack_9c;
  *(undefined4 *)(puVar8 + 0x10) = uStack_98;
  *(undefined4 *)((longlong)puVar8 + 0x84) = uStack_94;
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8(local_b0);
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1d4);
  iVar2 = *(int *)(param_1 + 0x1d0);
  iVar3 = *(int *)(param_1 + 0x1cc);
  iVar4 = *(int *)(param_1 + 0x1c8);
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar8 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar8 + 2) = (float)iVar4;
  *(float *)((longlong)puVar8 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(float *)((longlong)puVar8 + 0x1c) = (float)iVar2;
  *(float *)(puVar8 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
  iVar1 = *(int *)(param_1 + 0x1e0);
  iVar2 = *(int *)(param_1 + 0x1d8);
  iVar3 = *(int *)(param_1 + 0x1dc);
  iVar4 = *(int *)(param_1 + 0x1e4);
  if (0 < (iVar4 - iVar3) * (iVar1 - iVar2)) {
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x30);
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar8;
    param_2[6] = (ulonglong)(puVar8 + 1);
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_14a20cb90;
    *(undefined1 *)(puVar8 + 2) = 1;
    *(int *)((longlong)puVar8 + 0x14) = iVar2;
    *(int *)(puVar8 + 3) = iVar3;
    *(int *)((longlong)puVar8 + 0x1c) = iVar1;
    *(int *)(puVar8 + 4) = iVar4;
  }
  local_118 = *(undefined4 *)(param_1 + 0x1e8);
  lVar5 = *(longlong *)(param_1 + 0x1b8);
  local_120 = lVar5 + 0xa0;
  local_128 = lVar5 + 0x28;
  FUN_142de60ce(*(undefined8 *)(param_1 + 0x1c0),param_2,lVar5 + 0x18);
  if ((local_90 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fc145c FUN_142fc145c body=29 status=ok
// SIG undefined FUN_142fc145c(void)

undefined8 FUN_142fc145c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc1496 FUN_142fc1496 body=93 status=ok
// SIG undefined FUN_142fc1496(void)

void FUN_142fc1496(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a2e7bb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 142fc14f4 FUN_142fc14f4 body=93 status=ok
// SIG undefined FUN_142fc14f4(void)

void FUN_142fc14f4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a2e7bb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 142fc1552 FUN_142fc1552 body=126 status=ok
// SIG undefined FUN_142fc1552(void)

void FUN_142fc1552(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a2e7bb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc15c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142fc15dc FUN_142fc15dc body=21 status=ok
// SIG undefined FUN_142fc15dc(void)

undefined8 FUN_142fc15dc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 142fc15f2 FUN_142fc15f2 body=44 status=ok
// SIG undefined FUN_142fc15f2(void)

void FUN_142fc15f2(longlong param_1,undefined8 param_2)

{
  FUN_142c1b277(param_2,*(undefined8 *)(param_1 + 0x30f8),param_1,*(undefined4 *)(param_1 + 0x30f0),
                0);
  return;
}



// FUNCTION 142fc1628 FUN_142fc1628 body=29 status=ok
// SIG undefined FUN_142fc1628(void)

void FUN_142fc1628(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142fc1646 FUN_142fc1646 body=52 status=ok
// SIG undefined FUN_142fc1646(void)

undefined8 * FUN_142fc1646(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2e7c20;
  FUN_1400468f8(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc167a FUN_142fc167a body=234 status=ok
// SIG undefined FUN_142fc167a(void)

void * FUN_142fc167a(void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  lVar1 = *(longlong *)((longlong)param_2 + 0xc0);
  if (lVar1 == 0) {
    memmove(param_1,param_2,0xc0);
    lVar1 = *(longlong *)((longlong)param_2 + 0xc0);
  }
  *(longlong *)((longlong)param_1 + 0xc0) = lVar1;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = *(undefined4 *)((longlong)param_2 + 0xd0);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
  *(undefined8 *)((longlong)param_2 + 0xd0) = 0x600000000;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  lVar1 = *(longlong *)((longlong)param_2 + 0x1e0);
  if (lVar1 == 0) {
    memmove((void *)((longlong)param_1 + 0xe0),(void *)((longlong)param_2 + 0xe0),0x100);
    lVar1 = *(longlong *)((longlong)param_2 + 0x1e0);
  }
  *(longlong *)((longlong)param_1 + 0x1e0) = lVar1;
  *(undefined8 *)((longlong)param_2 + 0x1e0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1f0) = *(undefined4 *)((longlong)param_2 + 0x1f0);
  *(undefined4 *)((longlong)param_1 + 500) = *(undefined4 *)((longlong)param_2 + 500);
  *(undefined8 *)((longlong)param_2 + 0x1f0) = 0x800000000;
  return param_1;
}



// FUNCTION 142fc1764 FUN_142fc1764 body=282 status=ok
// SIG undefined FUN_142fc1764(void)

undefined8 * FUN_142fc1764(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc187e FUN_142fc187e body=173 status=ok
// SIG undefined FUN_142fc187e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fc187e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_142c1b277(&DAT_14ca85100,_DAT_000031a8,0xb0,_DAT_000031a0,0);
    FUN_1400468f8(0xb0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_142c1b277(&DAT_14ca85100,param_1[0x635],param_1 + 0x16,*(undefined4 *)(param_1 + 0x634),0);
  FUN_1400468f8(param_1 + 0x16);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc18e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fc1968 FUN_142fc1968 body=12 status=ok
// SIG undefined FUN_142fc1968(void)

void FUN_142fc1968(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc1971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc1974 FUN_142fc1974 body=29 status=ok
// SIG undefined FUN_142fc1974(void)

undefined8 FUN_142fc1974(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc1992 FUN_142fc1992 body=282 status=ok
// SIG undefined FUN_142fc1992(void)

undefined8 * FUN_142fc1992(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc1b1a FUN_142fc1b1a body=63 status=ok
// SIG undefined FUN_142fc1b1a(void)

void FUN_142fc1b1a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x28);
  *(uint *)(lVar2 + 0x28) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x2c) < iVar1 + 1U) {
    FUN_1472d29ec((longlong *)(lVar2 + 0x20),iVar1);
  }
  *(longlong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar1 * 8) = param_1[1];
  return;
}



// FUNCTION 142fc1b64 FUN_142fc1b64 body=12 status=ok
// SIG undefined FUN_142fc1b64(void)

void FUN_142fc1b64(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc1b6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc1b70 FUN_142fc1b70 body=29 status=ok
// SIG undefined FUN_142fc1b70(void)

undefined8 FUN_142fc1b70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc1b8e FUN_142fc1b8e body=282 status=ok
// SIG undefined FUN_142fc1b8e(void)

undefined8 * FUN_142fc1b8e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc1ca8 FUN_142fc1ca8 body=121 status=ok
// SIG undefined FUN_142fc1ca8(void)

void FUN_142fc1ca8(undefined8 *param_1)

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
  iVar2 = *(int *)(lVar3 + 0x28);
  *(uint *)(lVar3 + 0x28) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x2c) < iVar2 + 1U) {
    FUN_1472d29ec((longlong *)(lVar3 + 0x20),iVar2);
  }
  *(undefined8 *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar2 * 8) = param_1[0x16];
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc1d09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc1d22 FUN_142fc1d22 body=131 status=ok
// SIG undefined FUN_142fc1d22(void)

void FUN_142fc1d22(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  longlong *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_1;
  FUN_1471f2340(param_1[1],*(undefined8 *)(plVar1[5] + 0x4b60));
  local_38 = (**(code **)(*plVar1 + 0x58))(plVar1);
  local_30 = &local_38;
  local_34 = 0xffffffff;
  local_28 = param_1 + 1;
  FUN_1472d2a72(plVar1[5] + 0x4b68,local_1c);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fc1db0 FUN_142fc1db0 body=12 status=ok
// SIG undefined FUN_142fc1db0(void)

void FUN_142fc1db0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc1db9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc1dbc FUN_142fc1dbc body=29 status=ok
// SIG undefined FUN_142fc1dbc(void)

undefined8 FUN_142fc1dbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc1dda FUN_142fc1dda body=282 status=ok
// SIG undefined FUN_142fc1dda(void)

undefined8 * FUN_142fc1dda(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc1ef4 FUN_142fc1ef4 body=185 status=ok
// SIG undefined FUN_142fc1ef4(void)

void FUN_142fc1ef4(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined8 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)param_1[0x15];
  FUN_1471f2340(param_1[0x16],*(undefined8 *)(plVar2[5] + 0x4b60));
  local_40 = (**(code **)(*plVar2 + 0x58))(plVar2);
  local_38 = &local_40;
  local_3c = 0xffffffff;
  local_30 = param_1 + 0x16;
  FUN_1472d2a72(plVar2[5] + 0x4b68,local_24);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fc1fae FUN_142fc1fae body=329 status=ok
// SIG undefined FUN_142fc1fae(void)

void FUN_142fc1fae(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  
  plVar1 = (longlong *)*param_1;
  uVar3 = (**(code **)(*plVar1 + 0x58))(plVar1);
  lVar2 = plVar1[5];
  if (*(int *)(lVar2 + 0x4b70) != *(int *)(lVar2 + 0x4b9c)) {
    uVar6 = (int)uVar3 + 1U ^ 0x7ffff;
    uVar9 = uVar6 << 8 ^ 0x9e3779ba - uVar6;
    uVar10 = uVar9 >> 0xd ^ uVar9 + uVar6;
    uVar11 = ~uVar10 >> 0xc ^ (uVar6 - uVar9) + uVar10 + 1;
    uVar6 = uVar11 << 0x10 ^ (uVar10 + 1 + uVar9) - uVar11;
    uVar9 = uVar6 >> 5 ^ (~uVar10 - uVar11) - uVar6;
    uVar10 = uVar9 >> 3 ^ (uVar11 - uVar6) - uVar9;
    uVar6 = uVar10 << 10 ^ (uVar6 - uVar9) - uVar10;
    lVar7 = lVar2 + 0x4ba0;
    if (*(longlong *)(lVar2 + 0x4ba8) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x4ba8);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x4bb0) - 1U &
                             (uVar6 >> 0xf ^ uVar9 - (uVar10 + uVar6))) * 4);
    if (iVar8 != -1) {
      do {
        puVar4 = (ulonglong *)(*(longlong *)(lVar2 + 0x4b68) + (longlong)iVar8 * 0x18);
        if (*puVar4 == (uVar3 | 0xffffffff00000000)) goto LAB_142fc20c5;
        iVar8 = (int)puVar4[2];
      } while (iVar8 != -1);
    }
  }
  puVar4 = (ulonglong *)0x0;
LAB_142fc20c5:
  puVar5 = puVar4 + 1;
  if (puVar4 == (ulonglong *)0x0) {
    puVar5 = (ulonglong *)0x0;
  }
  fVar12 = *(float *)(param_1 + 1);
  if (1.0 <= fVar12) {
    fVar12 = 1.0;
  }
  if (fVar12 <= 0.5) {
    fVar12 = 0.5;
  }
  *(float *)(*puVar5 + 0xa10) = fVar12;
  return;
}



// FUNCTION 142fc2102 FUN_142fc2102 body=12 status=ok
// SIG undefined FUN_142fc2102(void)

void FUN_142fc2102(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc210b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc210e FUN_142fc210e body=29 status=ok
// SIG undefined FUN_142fc210e(void)

undefined8 FUN_142fc210e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc212c FUN_142fc212c body=282 status=ok
// SIG undefined FUN_142fc212c(void)

undefined8 * FUN_142fc212c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc2246 FUN_142fc2246 body=386 status=ok
// SIG undefined FUN_142fc2246(void)

void FUN_142fc2246(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)param_1[0x15];
  uVar4 = (**(code **)(*plVar2 + 0x58))(plVar2);
  lVar3 = plVar2[5];
  if (*(int *)(lVar3 + 0x4b70) != *(int *)(lVar3 + 0x4b9c)) {
    uVar7 = (int)uVar4 + 1U ^ 0x7ffff;
    uVar10 = uVar7 << 8 ^ 0x9e3779ba - uVar7;
    uVar11 = uVar10 >> 0xd ^ uVar10 + uVar7;
    uVar12 = ~uVar11 >> 0xc ^ (uVar7 - uVar10) + uVar11 + 1;
    uVar7 = uVar12 << 0x10 ^ (uVar11 + 1 + uVar10) - uVar12;
    uVar10 = uVar7 >> 5 ^ (~uVar11 - uVar12) - uVar7;
    uVar11 = uVar10 >> 3 ^ (uVar12 - uVar7) - uVar10;
    uVar7 = uVar11 << 10 ^ (uVar7 - uVar10) - uVar11;
    lVar8 = lVar3 + 0x4ba0;
    if (*(longlong *)(lVar3 + 0x4ba8) != 0) {
      lVar8 = *(longlong *)(lVar3 + 0x4ba8);
    }
    iVar9 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(lVar3 + 0x4bb0) - 1U &
                             (uVar7 >> 0xf ^ uVar10 - (uVar11 + uVar7))) * 4);
    if (iVar9 != -1) {
      do {
        puVar5 = (ulonglong *)(*(longlong *)(lVar3 + 0x4b68) + (longlong)iVar9 * 0x18);
        if (*puVar5 == (uVar4 | 0xffffffff00000000)) goto LAB_142fc2370;
        iVar9 = (int)puVar5[2];
      } while (iVar9 != -1);
    }
  }
  puVar5 = (ulonglong *)0x0;
LAB_142fc2370:
  puVar6 = puVar5 + 1;
  if (puVar5 == (ulonglong *)0x0) {
    puVar6 = (ulonglong *)0x0;
  }
  fVar13 = *(float *)(param_1 + 0x16);
  if (1.0 <= fVar13) {
    fVar13 = 1.0;
  }
  if (fVar13 <= 0.5) {
    fVar13 = 0.5;
  }
  *(float *)(*puVar6 + 0xa10) = fVar13;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc23bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc23c8 FUN_142fc23c8 body=323 status=ok
// SIG undefined FUN_142fc23c8(void)

void FUN_142fc23c8(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  param_1 = (longlong *)*param_1;
  uVar4 = (**(code **)(*param_1 + 0x58))(param_1);
  lVar7 = param_1[5];
  if (*(int *)(lVar7 + 0x4b70) != *(int *)(lVar7 + 0x4b9c)) {
    uVar2 = (int)uVar4 + 1U ^ 0x7ffff;
    uVar9 = uVar2 << 8 ^ 0x9e3779ba - uVar2;
    uVar10 = uVar9 >> 0xd ^ uVar9 + uVar2;
    uVar11 = ~uVar10 >> 0xc ^ (uVar2 - uVar9) + uVar10 + 1;
    uVar2 = uVar11 << 0x10 ^ (uVar10 + 1 + uVar9) - uVar11;
    uVar9 = uVar2 >> 5 ^ (~uVar10 - uVar11) - uVar2;
    uVar10 = uVar9 >> 3 ^ (uVar11 - uVar2) - uVar9;
    uVar2 = uVar10 << 10 ^ (uVar2 - uVar9) - uVar10;
    lVar5 = lVar7 + 0x4ba0;
    if (*(longlong *)(lVar7 + 0x4ba8) != 0) {
      lVar5 = *(longlong *)(lVar7 + 0x4ba8);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar7 + 0x4bb0) - 1U &
                             (uVar2 >> 0xf ^ uVar9 - (uVar10 + uVar2))) * 4);
    if (iVar3 != -1) {
      do {
        puVar6 = (ulonglong *)(*(longlong *)(lVar7 + 0x4b68) + (longlong)iVar3 * 0x18);
        if (*puVar6 == (uVar4 | 0xffffffff00000000)) goto LAB_142fc24ce;
        iVar3 = (int)puVar6[2];
      } while (iVar3 != -1);
    }
  }
  puVar6 = (ulonglong *)0x0;
LAB_142fc24ce:
  puVar8 = puVar6 + 1;
  if (puVar6 == (ulonglong *)0x0) {
    puVar8 = (ulonglong *)0x0;
  }
  uVar1 = *puVar8;
  if (uVar1 != 0) {
    FUN_140039218(uVar1);
    FUN_1400020a8(uVar1);
    lVar7 = param_1[5];
  }
  FUN_1472d287e(lVar7 + 0x4b68,uVar4 | 0xffffffff00000000);
  return;
}



// FUNCTION 142fc2516 FUN_142fc2516 body=12 status=ok
// SIG undefined FUN_142fc2516(void)

void FUN_142fc2516(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc251f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc2522 FUN_142fc2522 body=29 status=ok
// SIG undefined FUN_142fc2522(void)

undefined8 FUN_142fc2522(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc2540 FUN_142fc2540 body=282 status=ok
// SIG undefined FUN_142fc2540(void)

undefined8 * FUN_142fc2540(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc265a FUN_142fc265a body=388 status=ok
// SIG undefined FUN_142fc265a(void)

void FUN_142fc265a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)param_1[0x15];
  uVar6 = (**(code **)(*plVar2 + 0x58))(plVar2);
  lVar9 = plVar2[5];
  if (*(int *)(lVar9 + 0x4b70) != *(int *)(lVar9 + 0x4b9c)) {
    uVar4 = (int)uVar6 + 1U ^ 0x7ffff;
    uVar11 = uVar4 << 8 ^ 0x9e3779ba - uVar4;
    uVar12 = uVar11 >> 0xd ^ uVar11 + uVar4;
    uVar13 = ~uVar12 >> 0xc ^ (uVar4 - uVar11) + uVar12 + 1;
    uVar4 = uVar13 << 0x10 ^ (uVar12 + 1 + uVar11) - uVar13;
    uVar11 = uVar4 >> 5 ^ (~uVar12 - uVar13) - uVar4;
    uVar12 = uVar11 >> 3 ^ (uVar13 - uVar4) - uVar11;
    uVar4 = uVar12 << 10 ^ (uVar4 - uVar11) - uVar12;
    lVar7 = lVar9 + 0x4ba0;
    if (*(longlong *)(lVar9 + 0x4ba8) != 0) {
      lVar7 = *(longlong *)(lVar9 + 0x4ba8);
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar9 + 0x4bb0) - 1U &
                             (uVar4 >> 0xf ^ uVar11 - (uVar12 + uVar4))) * 4);
    if (iVar5 != -1) {
      do {
        puVar8 = (ulonglong *)(*(longlong *)(lVar9 + 0x4b68) + (longlong)iVar5 * 0x18);
        if (*puVar8 == (uVar6 | 0xffffffff00000000)) goto LAB_142fc2778;
        iVar5 = (int)puVar8[2];
      } while (iVar5 != -1);
    }
  }
  puVar8 = (ulonglong *)0x0;
LAB_142fc2778:
  puVar10 = puVar8 + 1;
  if (puVar8 == (ulonglong *)0x0) {
    puVar10 = (ulonglong *)0x0;
  }
  uVar3 = *puVar10;
  if (uVar3 != 0) {
    FUN_140039218(uVar3);
    FUN_1400020a8(uVar3);
    lVar9 = plVar2[5];
  }
  FUN_1472d287e(lVar9 + 0x4b68,uVar6 | 0xffffffff00000000);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc27d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc27de FUN_142fc27de body=371 status=ok
// SIG undefined FUN_142fc27de(void)

void FUN_142fc27de(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar9 = *param_1 + 0x5088;
  FUN_14490df4a();
  FUN_14126a664(lVar9);
  if (0 < (int)param_1[2]) {
    lVar10 = 0;
    local_80 = lVar9;
    do {
      puVar4 = *(undefined4 **)(param_1[1] + lVar10 * 8);
      local_68 = *(longlong *)(puVar4 + 6);
      if (local_68 != 0) {
        LOCK();
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
        UNLOCK();
      }
      local_78 = *puVar4;
      uStack_74 = puVar4[1];
      uStack_70 = puVar4[2];
      uStack_6c = puVar4[3];
      local_60 = &local_78;
      local_58 = &local_68;
      FUN_1410b7b72(lVar9,local_4c,&local_60);
      lVar5 = local_68;
      if (local_68 != 0) {
        LOCK();
        puVar1 = (uint *)(local_68 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_68 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_68 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar5;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            lVar9 = local_80;
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
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)param_1[2]);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142fc295c FUN_142fc295c body=12 status=ok
// SIG undefined FUN_142fc295c(void)

void FUN_142fc295c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc2965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc2968 FUN_142fc2968 body=57 status=ok
// SIG undefined FUN_142fc2968(void)

undefined8 * FUN_142fc2968(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2e7f40;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc29a2 FUN_142fc29a2 body=282 status=ok
// SIG undefined FUN_142fc29a2(void)

undefined8 * FUN_142fc29a2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc2abc FUN_142fc2abc body=440 status=ok
// SIG undefined FUN_142fc2abc(void)

void FUN_142fc2abc(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar10 = param_1[0x15] + 0x5088;
  FUN_14490df4a();
  FUN_14126a664(lVar10);
  if (0 < *(int *)(param_1 + 0x17)) {
    lVar11 = 0;
    local_80 = lVar10;
    do {
      puVar5 = *(undefined4 **)(param_1[0x16] + lVar11 * 8);
      local_68 = *(longlong *)(puVar5 + 6);
      if (local_68 != 0) {
        LOCK();
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
        UNLOCK();
      }
      local_78 = *puVar5;
      uStack_74 = puVar5[1];
      uStack_70 = puVar5[2];
      uStack_6c = puVar5[3];
      local_60 = &local_78;
      local_58 = &local_68;
      FUN_1410b7b72(lVar10,local_4c,&local_60);
      lVar6 = local_68;
      if (local_68 != 0) {
        LOCK();
        puVar1 = (uint *)(local_68 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_68 + 8);
          LOCK();
          uVar3 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(local_68 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar6;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            lVar10 = local_80;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar9;
                LOCK();
                bVar12 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar7;
                if (bVar12) {
                  plVar9 = DAT_14ca843c0;
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
                plVar9 = plVar7;
                if (bVar12) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar12);
            }
          }
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x17));
  }
  if (param_1[0x16] != 0) {
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
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142fc2c88 FUN_142fc2c88 body=12 status=ok
// SIG undefined FUN_142fc2c88(void)

void FUN_142fc2c88(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc2c91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc2c94 FUN_142fc2c94 body=29 status=ok
// SIG undefined FUN_142fc2c94(void)

undefined8 FUN_142fc2c94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc2cb2 FUN_142fc2cb2 body=282 status=ok
// SIG undefined FUN_142fc2cb2(void)

undefined8 * FUN_142fc2cb2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc2dcc FUN_142fc2dcc body=94 status=ok
// SIG undefined FUN_142fc2dcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fc2dcc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1411ee872(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1411ee872(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc2e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fc2e2a FUN_142fc2e2a body=282 status=ok
// SIG undefined FUN_142fc2e2a(void)

undefined8 * FUN_142fc2e2a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc2f44 FUN_142fc2f44 body=953 status=ok
// SIG undefined FUN_142fc2f44(void)

void FUN_142fc2f44(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined4 *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined1 local_168 [16];
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar13 = *(longlong *)(param_1 + 0xb0);
  if ((longlong)*(int *)(param_1 + 0xb8) == 0) {
    uVar12 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xa8);
    lVar2 = lVar3 + 0x53a0;
    lVar14 = (longlong)*(int *)(param_1 + 0xb8) * 400;
    lVar13 = lVar13 + 0x100;
    do {
      local_178 = *(undefined8 *)(lVar13 + 0x48);
      local_188 = *(undefined4 *)(lVar13 + 0x38);
      uStack_184 = *(undefined4 *)(lVar13 + 0x3c);
      uStack_180 = *(undefined4 *)(lVar13 + 0x40);
      uStack_17c = *(undefined4 *)(lVar13 + 0x44);
      local_198 = lVar13 + 0x50;
      local_190 = &local_188;
      FUN_14486f79c(*(undefined8 *)(lVar13 + -0xf8),&DAT_14ca85100,lVar13 + -0x80,lVar13);
      (**(code **)(**(longlong **)(lVar13 + -0xf8) + 0x110))
                (*(longlong **)(lVar13 + -0xf8),&DAT_14ca85100);
      uVar4 = *(undefined8 *)(lVar13 + -0x100);
      iVar11 = FUN_14486f0b8(lVar2,uVar4);
      *(undefined1 *)(*(longlong *)(lVar3 + 0x55a0) + 0x19 + (longlong)iVar11 * 0x50) = 1;
      if (*(char *)(lVar13 + -0x90) == '\x01') {
        dVar7 = *(double *)(lVar13 + -0xf0);
        dVar8 = *(double *)(lVar13 + -0xe8);
        dVar9 = *(double *)(lVar13 + -0xe0);
        local_108 = *(undefined4 *)(lVar13 + -0xd0);
        uStack_104 = *(undefined4 *)(lVar13 + -0xcc);
        uStack_100 = *(undefined4 *)(lVar13 + -200);
        uStack_fc = *(undefined4 *)(lVar13 + -0xc4);
        local_f8 = *(undefined8 *)(lVar13 + -0xc0);
        dVar19 = dVar8 + dVar8;
        dVar15 = dVar9 + dVar9;
        dVar18 = dVar7 * (dVar7 + dVar7);
        dVar10 = *(double *)(lVar13 + -0xb0);
        local_148 = *(double *)(lVar13 + -0xa8);
        dStack_140 = (1.0 - (dVar9 * dVar15 + dVar18)) * local_148;
        dStack_120 = *(double *)(lVar13 + -0xa0);
        local_118 = (1.0 - (dVar18 + dVar8 * dVar19)) * dStack_120;
        dVar6 = *(double *)(lVar13 + -0xf0) * dVar15;
        dVar18 = *(double *)(lVar13 + -0xd8);
        dVar16 = dVar15 * dVar18;
        dVar17 = (dVar7 + dVar7) * *(double *)(lVar13 + -0xd8);
        dVar18 = dVar19 * dVar18;
        dVar5 = (dVar19 * dVar7 + dVar16) * dVar10;
        local_138 = (dVar15 * dVar8 + dVar17) * local_148;
        local_128 = (dVar18 + dVar6) * dStack_120;
        local_158 = (dVar6 - dVar18) * dVar10;
        local_148 = (dVar19 * dVar7 - dVar16) * local_148;
        dStack_120 = (dVar15 * dVar8 - dVar17) * dStack_120;
        local_168._8_4_ = SUB84(dVar5,0);
        local_168._0_8_ = (1.0 - (dVar9 * dVar15 + dVar8 * dVar19)) * dVar10;
        local_168._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        uStack_150 = 0;
        uStack_130 = 0;
        uStack_110 = 0;
        uStack_f0 = 0x3ff0000000000000;
        FUN_1472c7db2(lVar2,uVar4,local_168);
      }
      lVar13 = lVar13 + 400;
      lVar14 = lVar14 + -400;
    } while (lVar14 != 0);
    uVar12 = *(undefined4 *)(param_1 + 0xb8);
    lVar13 = *(longlong *)(param_1 + 0xb0);
  }
  FUN_144746569(lVar13,uVar12);
  FUN_140058982(param_1 + 0xb0);
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_1b8);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142fc336e FUN_142fc336e body=452 status=ok
// SIG undefined FUN_142fc336e(void)

void FUN_142fc336e(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,400);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_142fc348b:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_142fc34c8:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 400;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142fc33c6;
LAB_142fc33bb:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142fc33c6:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xa4) goto code_r0x000142fc33f2;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x68,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 100 + 0x1a;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142fc3448:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142fc34c8;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142fc348b;
code_r0x000142fc33f2:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_142fc3448;
    }
  }
  goto LAB_142fc33bb;
}



// FUNCTION 142fc3532 FUN_142fc3532 body=282 status=ok
// SIG undefined FUN_142fc3532(void)

undefined8 * FUN_142fc3532(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc364c FUN_142fc364c body=172 status=ok
// SIG undefined FUN_142fc364c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fc364c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1472d378e(0xa8,&DAT_14ca85100);
    FUN_1472d38c5(_DAT_000000b0,_DAT_000000b8);
    FUN_142fc36f8(0xb0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1472d378e(param_1 + 0x15,&DAT_14ca85100);
  FUN_1472d38c5(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  FUN_142fc36f8(param_1 + 0x16);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc36ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fc36f8 FUN_142fc36f8 body=99 status=ok
// SIG undefined FUN_142fc36f8(void)

void FUN_142fc36f8(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142fc375c FUN_142fc375c body=282 status=ok
// SIG undefined FUN_142fc375c(void)

undefined8 * FUN_142fc375c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc3876 FUN_142fc3876 body=148 status=ok
// SIG undefined FUN_142fc3876(void)

void FUN_142fc3876(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14493a558(param_1[0x16],param_1[0x17],param_1 + 0x18,param_1 + 0x1f,param_1 + 0x26,
                param_1 + 0x44,param_1 + 0x36);
  if (*(char *)(param_1 + 0x42) == '\x01') {
    *(undefined1 *)(param_1 + 0x42) = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc3900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc390a FUN_142fc390a body=282 status=ok
// SIG undefined FUN_142fc390a(void)

undefined8 * FUN_142fc390a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc3a24 FUN_142fc3a24 body=148 status=ok
// SIG undefined FUN_142fc3a24(void)

void FUN_142fc3a24(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14493a558(param_1[0x16],param_1[0x17],param_1 + 0x18,param_1 + 0x1f,param_1 + 0x26,
                param_1 + 0x44,param_1 + 0x36);
  if (*(char *)(param_1 + 0x42) == '\x01') {
    *(undefined1 *)(param_1 + 0x42) = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc3aae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc3ab8 FUN_142fc3ab8 body=118 status=ok
// SIG undefined FUN_142fc3ab8(void)

void FUN_142fc3ab8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < (int)param_1[2]) {
    lVar4 = 0x100;
    lVar3 = 0;
    do {
      lVar2 = *param_1;
      lVar1 = lVar2 + -0xf0 + lVar4;
      FUN_14493a558(*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8),lVar1,
                    lVar2 + -0xb8 + lVar4,lVar2 + -0x80 + lVar4,lVar2 + lVar4 + 0x70,lVar2 + lVar4);
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 400;
    } while (lVar3 < (int)param_1[2]);
  }
  return;
}



// FUNCTION 142fc3b38 FUN_142fc3b38 body=12 status=ok
// SIG undefined FUN_142fc3b38(void)

void FUN_142fc3b38(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc3b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc3b44 FUN_142fc3b44 body=69 status=ok
// SIG undefined FUN_142fc3b44(void)

undefined8 * FUN_142fc3b44(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2e8170;
  FUN_144718522(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc3b8a FUN_142fc3b8a body=282 status=ok
// SIG undefined FUN_142fc3b8a(void)

undefined8 * FUN_142fc3b8a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc3ca4 FUN_142fc3ca4 body=216 status=ok
// SIG undefined FUN_142fc3ca4(void)

void FUN_142fc3ca4(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (0 < *(int *)(param_1 + 0x17)) {
    lVar5 = 0x100;
    lVar4 = 0;
    do {
      lVar3 = param_1[0x15];
      lVar2 = lVar3 + -0xf0 + lVar5;
      FUN_14493a558(*(undefined8 *)(lVar2 + -0x10),*(undefined8 *)(lVar2 + -8),lVar2,
                    lVar3 + -0xb8 + lVar5,lVar3 + -0x80 + lVar5,lVar3 + lVar5 + 0x70,lVar3 + lVar5);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 400;
    } while (lVar4 < *(int *)(param_1 + 0x17));
  }
  FUN_144718522(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc3d6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc3d7c FUN_142fc3d7c body=282 status=ok
// SIG undefined FUN_142fc3d7c(void)

undefined8 * FUN_142fc3d7c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc3e9c FUN_142fc3e9c body=282 status=ok
// SIG undefined FUN_142fc3e9c(void)

undefined8 * FUN_142fc3e9c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc3fb6 FUN_142fc3fb6 body=282 status=ok
// SIG undefined FUN_142fc3fb6(void)

undefined8 * FUN_142fc3fb6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc40d6 FUN_142fc40d6 body=282 status=ok
// SIG undefined FUN_142fc40d6(void)

undefined8 * FUN_142fc40d6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc41f6 FUN_142fc41f6 body=282 status=ok
// SIG undefined FUN_142fc41f6(void)

undefined8 * FUN_142fc41f6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc4310 FUN_142fc4310 body=282 status=ok
// SIG undefined FUN_142fc4310(void)

undefined8 * FUN_142fc4310(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc442a FUN_142fc442a body=282 status=ok
// SIG undefined FUN_142fc442a(void)

undefined8 * FUN_142fc442a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc4544 FUN_142fc4544 body=282 status=ok
// SIG undefined FUN_142fc4544(void)

undefined8 * FUN_142fc4544(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc465e FUN_142fc465e body=453 status=ok
// SIG undefined FUN_142fc465e(void)

void FUN_142fc465e(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x18);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_142fc477c:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_142fc47b9:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x18;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142fc46b7;
LAB_142fc46ac:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142fc46b7:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xaa7) goto code_r0x000142fc46e3;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 6 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142fc4739:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142fc47b9;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142fc477c;
code_r0x000142fc46e3:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_142fc4739;
    }
  }
  goto LAB_142fc46ac;
}



// FUNCTION 142fc4824 FUN_142fc4824 body=282 status=ok
// SIG undefined FUN_142fc4824(void)

undefined8 * FUN_142fc4824(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc493e FUN_142fc493e body=99 status=ok
// SIG undefined FUN_142fc493e(void)

void FUN_142fc493e(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142fc49a2 FUN_142fc49a2 body=282 status=ok
// SIG undefined FUN_142fc49a2(void)

undefined8 * FUN_142fc49a2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc4abc FUN_142fc4abc body=392 status=ok
// SIG undefined FUN_142fc4abc(void)

void FUN_142fc4abc(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  puVar4 = *(uint **)(param_1 + 0xb8);
  puVar7 = (uint *)(param_1 + 0xb0);
  if (puVar4 != (uint *)0x0) {
    puVar7 = puVar4;
  }
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    puVar4 = puVar7 + *(int *)(param_1 + 0xc0);
    do {
      lVar3 = *(longlong *)(param_1 + 0xa8);
      if (*(int *)(lVar3 + 0x3af0) != *(int *)(lVar3 + 0x3b1c)) {
        lVar5 = lVar3 + 0x3b20;
        if (*(longlong *)(lVar3 + 0x3b28) != 0) {
          lVar5 = *(longlong *)(lVar3 + 0x3b28);
        }
        iVar2 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x3b30) - 1U & *puVar7) * 4);
        if (iVar2 != -1) {
          lVar5 = *(longlong *)(lVar3 + 0x3ae8);
          do {
            lVar6 = (longlong)iVar2;
            if (*(uint *)(lVar5 + lVar6 * 0x18) == *puVar7) {
              lVar5 = *(longlong *)(lVar5 + 8 + lVar6 * 0x18);
              FUN_1471ceb3a();
              if ((((-1 < *(int *)(lVar5 + 0x60)) && (-1 < *(int *)(lVar5 + 100))) &&
                  (-1 < *(int *)(lVar5 + 0x68))) && (0 < *(int *)(lVar5 + 0x6c))) {
                local_40 = *(undefined4 *)(lVar5 + 0x68);
                local_48 = *(undefined8 *)(lVar5 + 0x60);
                FUN_1471bacf2(lVar3 + 0x3930,&local_48);
              }
              if (lVar5 != 0) {
                FUN_1400020a8(lVar5);
              }
              break;
            }
            iVar2 = *(int *)(lVar5 + lVar6 * 0x18 + 0x10);
          } while (iVar2 != -1);
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar4);
    puVar4 = *(uint **)(param_1 + 0xb8);
  }
  if (puVar4 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142fc4c60 FUN_142fc4c60 body=282 status=ok
// SIG undefined FUN_142fc4c60(void)

undefined8 * FUN_142fc4c60(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc4d7a FUN_142fc4d7a body=172 status=ok
// SIG undefined FUN_142fc4d7a(void)

ulonglong FUN_142fc4d7a(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  puVar4 = (undefined8 *)param_1[0x17];
  puVar5 = param_1 + 0x16;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar2 != 0) {
    lVar6 = 0;
    do {
      uVar3 = FUN_144b1112c(param_1[0x15] + 0x3930,*(undefined4 *)((longlong)puVar5 + lVar6));
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar2 * 4 != lVar6);
    puVar4 = (undefined8 *)param_1[0x17];
  }
  if (puVar4 != (undefined8 *)0x0) {
    uVar3 = FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc4e16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 142fc4e26 FUN_142fc4e26 body=55 status=ok
// SIG undefined FUN_142fc4e26(void)

void FUN_142fc4e26(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(*param_1 + 0x5660);
  iVar2 = FUN_1402a90ea(lVar1,param_1[1]);
  *(undefined1 *)(*(longlong *)(lVar1 + 0x200) + 0x19 + (longlong)iVar2 * 0x50) = 1;
  return;
}



// FUNCTION 142fc4e68 FUN_142fc4e68 body=12 status=ok
// SIG undefined FUN_142fc4e68(void)

void FUN_142fc4e68(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc4e71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc4e74 FUN_142fc4e74 body=29 status=ok
// SIG undefined FUN_142fc4e74(void)

undefined8 FUN_142fc4e74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc4e92 FUN_142fc4e92 body=282 status=ok
// SIG undefined FUN_142fc4e92(void)

undefined8 * FUN_142fc4e92(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc4fac FUN_142fc4fac body=117 status=ok
// SIG undefined FUN_142fc4fac(void)

void FUN_142fc4fac(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)(param_1[0x15] + 0x5660);
  iVar3 = FUN_1402a90ea(lVar2,param_1[0x16]);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x200) + 0x19 + (longlong)iVar3 * 0x50) = 1;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc5016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc5022 FUN_142fc5022 body=144 status=ok
// SIG undefined FUN_142fc5022(void)

void FUN_142fc5022(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38 [2];
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  FUN_144b128fe(&local_78,param_1[1]);
  FUN_1412c944e(lVar1 + 0x35a0,local_38);
  local_30[0xc] = local_48;
  local_30[0xd] = uStack_44;
  local_30[0xe] = uStack_40;
  local_30[0xf] = uStack_3c;
  local_30[8] = local_58;
  local_30[9] = uStack_54;
  local_30[10] = uStack_50;
  local_30[0xb] = uStack_4c;
  local_30[4] = local_68;
  local_30[5] = uStack_64;
  local_30[6] = uStack_60;
  local_30[7] = uStack_5c;
  *local_30 = local_78;
  local_30[1] = uStack_74;
  local_30[2] = uStack_70;
  local_30[3] = uStack_6c;
  *(undefined4 *)(param_1[1] + 0x34) = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fc50be FUN_142fc50be body=12 status=ok
// SIG undefined FUN_142fc50be(void)

void FUN_142fc50be(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc50c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc50ca FUN_142fc50ca body=29 status=ok
// SIG undefined FUN_142fc50ca(void)

undefined8 FUN_142fc50ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc50e8 FUN_142fc50e8 body=282 status=ok
// SIG undefined FUN_142fc50e8(void)

undefined8 * FUN_142fc50e8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc5202 FUN_142fc5202 body=193 status=ok
// SIG undefined FUN_142fc5202(void)

void FUN_142fc5202(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38 [2];
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  FUN_144b128fe(&local_78,param_1[0x16]);
  FUN_1412c944e(lVar2 + 0x35a0,local_38);
  local_30[0xc] = local_48;
  local_30[0xd] = uStack_44;
  local_30[0xe] = uStack_40;
  local_30[0xf] = uStack_3c;
  local_30[8] = local_58;
  local_30[9] = uStack_54;
  local_30[10] = uStack_50;
  local_30[0xb] = uStack_4c;
  local_30[4] = local_68;
  local_30[5] = uStack_64;
  local_30[6] = uStack_60;
  local_30[7] = uStack_5c;
  *local_30 = local_78;
  local_30[1] = uStack_74;
  local_30[2] = uStack_70;
  local_30[3] = uStack_6c;
  *(undefined4 *)(param_1[0x16] + 0x34) = local_38[0];
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fc52c4 FUN_142fc52c4 body=97 status=ok
// SIG undefined FUN_142fc52c4(void)

void FUN_142fc52c4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x3690);
  *(uint *)(lVar2 + 0x3690) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x3694) < iVar1 + 1U) {
    FUN_146305488((longlong *)(lVar2 + 0x3688),iVar1);
  }
  lVar3 = param_1[1];
  *(longlong *)(*(longlong *)(lVar2 + 0x3688) + (longlong)iVar1 * 8) = lVar3;
  *(longlong *)(*param_1 + 0x3608) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x000142fc5312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x228))();
  return;
}



// FUNCTION 142fc5330 FUN_142fc5330 body=12 status=ok
// SIG undefined FUN_142fc5330(void)

void FUN_142fc5330(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc5339. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc533c FUN_142fc533c body=29 status=ok
// SIG undefined FUN_142fc533c(void)

undefined8 FUN_142fc533c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc535a FUN_142fc535a body=282 status=ok
// SIG undefined FUN_142fc535a(void)

undefined8 * FUN_142fc535a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc5474 FUN_142fc5474 body=163 status=ok
// SIG undefined FUN_142fc5474(void)

void FUN_142fc5474(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  iVar2 = *(int *)(lVar3 + 0x3690);
  *(uint *)(lVar3 + 0x3690) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x3694) < iVar2 + 1U) {
    FUN_146305488((longlong *)(lVar3 + 0x3688),iVar2);
  }
  uVar4 = param_1[0x16];
  *(undefined8 *)(*(longlong *)(lVar3 + 0x3688) + (longlong)iVar2 * 8) = uVar4;
  *(undefined8 *)(param_1[0x15] + 0x3608) = uVar4;
  (**(code **)(*(longlong *)param_1[0x15] + 0x228))();
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc54ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc5518 FUN_142fc5518 body=81 status=ok
// SIG undefined FUN_142fc5518(void)

void FUN_142fc5518(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1472d5496(*param_1 + 0x3688,param_1 + 1);
  lVar1 = *param_1;
  if ((longlong)*(int *)(lVar1 + 0x3690) < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)
             (*(longlong *)(lVar1 + 0x3688) + -8 + (longlong)*(int *)(lVar1 + 0x3690) * 8);
  }
  *(undefined8 *)(lVar1 + 0x3608) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000142fc5562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x228))();
  return;
}



// FUNCTION 142fc5574 FUN_142fc5574 body=12 status=ok
// SIG undefined FUN_142fc5574(void)

void FUN_142fc5574(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc557d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc5580 FUN_142fc5580 body=29 status=ok
// SIG undefined FUN_142fc5580(void)

undefined8 FUN_142fc5580(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc559e FUN_142fc559e body=282 status=ok
// SIG undefined FUN_142fc559e(void)

undefined8 * FUN_142fc559e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc56b8 FUN_142fc56b8 body=145 status=ok
// SIG undefined FUN_142fc56b8(void)

void FUN_142fc56b8(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1472d5496(param_1[0x15] + 0x3688,param_1 + 0x16);
  lVar2 = param_1[0x15];
  if ((longlong)*(int *)(lVar2 + 0x3690) < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)
             (*(longlong *)(lVar2 + 0x3688) + -8 + (longlong)*(int *)(lVar2 + 0x3690) * 8);
  }
  *(undefined8 *)(lVar2 + 0x3608) = uVar3;
  (**(code **)(*(longlong *)param_1[0x15] + 0x228))();
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc573f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc5764 FUN_142fc5764 body=12 status=ok
// SIG undefined FUN_142fc5764(void)

void FUN_142fc5764(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc576d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc5770 FUN_142fc5770 body=29 status=ok
// SIG undefined FUN_142fc5770(void)

undefined8 FUN_142fc5770(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc578e FUN_142fc578e body=282 status=ok
// SIG undefined FUN_142fc578e(void)

undefined8 * FUN_142fc578e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc5918 FUN_142fc5918 body=12 status=ok
// SIG undefined FUN_142fc5918(void)

void FUN_142fc5918(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc5921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc5924 FUN_142fc5924 body=29 status=ok
// SIG undefined FUN_142fc5924(void)

undefined8 FUN_142fc5924(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc5942 FUN_142fc5942 body=282 status=ok
// SIG undefined FUN_142fc5942(void)

undefined8 * FUN_142fc5942(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc5aac FUN_142fc5aac body=83 status=ok
// SIG undefined FUN_142fc5aac(void)

void FUN_142fc5aac(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = param_1[1];
  iVar1 = (int)plVar2[0x6e0];
  *(uint *)(plVar2 + 0x6e0) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0x3704) < iVar1 + 1U) {
    FUN_140954a96(plVar2 + 0x6df,iVar1);
  }
  *(longlong *)(plVar2[0x6df] + (longlong)iVar1 * 8) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x000142fc5af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x228))(plVar2);
  return;
}



// FUNCTION 142fc5b0a FUN_142fc5b0a body=12 status=ok
// SIG undefined FUN_142fc5b0a(void)

void FUN_142fc5b0a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc5b13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc5b16 FUN_142fc5b16 body=29 status=ok
// SIG undefined FUN_142fc5b16(void)

undefined8 FUN_142fc5b16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc5b34 FUN_142fc5b34 body=282 status=ok
// SIG undefined FUN_142fc5b34(void)

undefined8 * FUN_142fc5b34(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc5c4e FUN_142fc5c4e body=150 status=ok
// SIG undefined FUN_142fc5c4e(void)

void FUN_142fc5c4e(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x15];
  uVar4 = param_1[0x16];
  iVar2 = (int)plVar3[0x6e0];
  *(uint *)(plVar3 + 0x6e0) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar3 + 0x3704) < iVar2 + 1U) {
    FUN_140954a96(plVar3 + 0x6df,iVar2);
  }
  *(undefined8 *)(plVar3[0x6df] + (longlong)iVar2 * 8) = uVar4;
  (**(code **)(*plVar3 + 0x228))(plVar3);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc5cd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc5cfe FUN_142fc5cfe body=12 status=ok
// SIG undefined FUN_142fc5cfe(void)

void FUN_142fc5cfe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc5d07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc5d0a FUN_142fc5d0a body=29 status=ok
// SIG undefined FUN_142fc5d0a(void)

undefined8 FUN_142fc5d0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc5d28 FUN_142fc5d28 body=282 status=ok
// SIG undefined FUN_142fc5d28(void)

undefined8 * FUN_142fc5d28(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc5e42 FUN_142fc5e42 body=109 status=ok
// SIG undefined FUN_142fc5e42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fc5e42(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_144911c66(_DAT_000000a8,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_144911c66(param_1[0x15],param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc5e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fc5eb0 FUN_142fc5eb0 body=417 status=ok
// SIG undefined FUN_142fc5eb0(void)

void FUN_142fc5eb0(longlong *param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  
  lVar13 = *param_1;
  auVar5._8_8_ = -(ulonglong)
                  (9.99999993922529e-09 < ABS((double)param_1[7] - *(double *)(lVar13 + 0x38)));
  auVar5._0_8_ = -(ulonglong)
                  (9.99999993922529e-09 < ABS((double)param_1[6] - *(double *)(lVar13 + 0x30)));
  iVar14 = movmskpd((int)param_1,auVar5);
  lVar19 = -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[9] - *(double *)(lVar13 + 0x48)))
  ;
  auVar3._8_4_ = (int)lVar19;
  auVar3._0_8_ = -(ulonglong)
                  (9.99999993922529e-09 < ABS((double)param_1[8] - *(double *)(lVar13 + 0x40)));
  auVar3._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
  uVar15 = movmskpd(param_2,auVar3);
  if ((uVar15 & 0x3fffffff) == 0 && iVar14 == 0) {
    lVar19 = -(ulonglong)
              (9.99999993922529e-09 < ABS((double)param_1[3] - *(double *)(lVar13 + 0x18)));
    auVar8._8_4_ = (int)lVar19;
    auVar8._0_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS((double)param_1[2] - *(double *)(lVar13 + 0x10)));
    auVar8._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    uVar15 = movmskpd(iVar14,auVar8);
    lVar19 = -(ulonglong)
              (9.99999993922529e-09 < ABS((double)param_1[5] - *(double *)(lVar13 + 0x28)));
    auVar7._8_4_ = (int)lVar19;
    auVar7._0_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS((double)param_1[4] - *(double *)(lVar13 + 0x20)));
    auVar7._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    iVar14 = movmskpd(0,auVar7);
    uVar16 = iVar14 << 2 | uVar15;
    if (uVar16 != 0) {
      auVar6._8_8_ = -(ulonglong)
                      (9.99999993922529e-09 < ABS((double)param_1[3] + *(double *)(lVar13 + 0x18)));
      auVar6._0_8_ = -(ulonglong)
                      (9.99999993922529e-09 < ABS((double)param_1[2] + *(double *)(lVar13 + 0x10)));
      uVar15 = movmskpd(uVar15,auVar6);
      auVar4._8_8_ = -(ulonglong)
                      (9.99999993922529e-09 < ABS((double)param_1[5] + *(double *)(lVar13 + 0x28)));
      auVar4._0_8_ = -(ulonglong)
                      (9.99999993922529e-09 < ABS((double)param_1[4] + *(double *)(lVar13 + 0x20)));
      uVar16 = movmskpd(uVar16,auVar4);
      if ((uVar16 & 0x3fffffff) != 0 || uVar15 != 0) goto LAB_142fc5f21;
    }
    lVar19 = -(ulonglong)
              (9.99999993922529e-09 < ABS((double)param_1[0xb] - *(double *)(lVar13 + 0x58)));
    auVar2._8_4_ = (int)lVar19;
    auVar2._0_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS((double)param_1[10] - *(double *)(lVar13 + 0x50)));
    auVar2._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    iVar14 = movmskpd(uVar15,auVar2);
    lVar19 = -(ulonglong)
              (9.99999993922529e-09 < ABS((double)param_1[0xd] - *(double *)(lVar13 + 0x68)));
    auVar1._8_4_ = (int)lVar19;
    auVar1._0_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS((double)param_1[0xc] - *(double *)(lVar13 + 0x60)));
    auVar1._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    uVar15 = movmskpd(0,auVar1);
    if ((uVar15 & 0x3fffffff) == 0 && iVar14 == 0) goto LAB_142fc5f34;
  }
LAB_142fc5f21:
  (**(code **)(*(longlong *)param_1[0x15] + 0x228))();
  lVar13 = *param_1;
LAB_142fc5f34:
  plVar17 = param_1 + 2;
  plVar18 = (longlong *)(lVar13 + 0x10);
  for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
    *plVar18 = *plVar17;
    plVar17 = plVar17 + 1;
    plVar18 = plVar18 + 1;
  }
  *(longlong *)(lVar13 + 0xa8) = param_1[0x14];
  lVar19 = param_1[0xe];
  lVar9 = param_1[0xf];
  lVar10 = param_1[0x10];
  lVar11 = param_1[0x11];
  lVar12 = param_1[0x13];
  *(longlong *)(lVar13 + 0x98) = param_1[0x12];
  *(longlong *)(lVar13 + 0xa0) = lVar12;
  *(longlong *)(lVar13 + 0x88) = lVar10;
  *(longlong *)(lVar13 + 0x90) = lVar11;
  *(longlong *)(lVar13 + 0x78) = lVar19;
  *(longlong *)(lVar13 + 0x80) = lVar9;
  return;
}



// FUNCTION 142fc605c FUN_142fc605c body=29 status=ok
// SIG undefined FUN_142fc605c(void)

void FUN_142fc605c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142fc607a FUN_142fc607a body=29 status=ok
// SIG undefined FUN_142fc607a(void)

undefined8 FUN_142fc607a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc6098 FUN_142fc6098 body=282 status=ok
// SIG undefined FUN_142fc6098(void)

undefined8 * FUN_142fc6098(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc61b2 FUN_142fc61b2 body=519 status=ok
// SIG undefined FUN_142fc61b2(void)

void FUN_142fc61b2(undefined8 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  longlong lVar27;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar21 = param_1[0x16];
  auVar6._8_8_ = -(ulonglong)
                  (9.99999993922529e-09 < ABS((double)param_1[0x1d] - *(double *)(lVar21 + 0x38)));
  auVar6._0_8_ = -(ulonglong)
                  (9.99999993922529e-09 < ABS((double)param_1[0x1c] - *(double *)(lVar21 + 0x30)));
  iVar22 = movmskpd((int)param_1,auVar6);
  lVar27 = -(ulonglong)
            (9.99999993922529e-09 < ABS((double)param_1[0x1f] - *(double *)(lVar21 + 0x48)));
  auVar4._8_4_ = (int)lVar27;
  auVar4._0_8_ = -(ulonglong)
                  (9.99999993922529e-09 < ABS((double)param_1[0x1e] - *(double *)(lVar21 + 0x40)));
  auVar4._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
  uVar23 = movmskpd(param_2,auVar4);
  if ((uVar23 & 0x3fffffff) == 0 && iVar22 == 0) {
    lVar27 = -(ulonglong)
              (9.99999993922529e-09 < ABS((double)param_1[0x19] - *(double *)(lVar21 + 0x18)));
    auVar9._8_4_ = (int)lVar27;
    auVar9._0_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS((double)param_1[0x18] - *(double *)(lVar21 + 0x10)))
    ;
    auVar9._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    uVar23 = movmskpd(iVar22,auVar9);
    lVar27 = -(ulonglong)
              (9.99999993922529e-09 < ABS((double)param_1[0x1b] - *(double *)(lVar21 + 0x28)));
    auVar8._8_4_ = (int)lVar27;
    auVar8._0_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS((double)param_1[0x1a] - *(double *)(lVar21 + 0x20)))
    ;
    auVar8._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    iVar22 = movmskpd(0,auVar8);
    uVar24 = iVar22 << 2 | uVar23;
    if (uVar24 != 0) {
      auVar7._8_8_ = -(ulonglong)
                      (9.99999993922529e-09 <
                      ABS((double)param_1[0x19] + *(double *)(lVar21 + 0x18)));
      auVar7._0_8_ = -(ulonglong)
                      (9.99999993922529e-09 <
                      ABS((double)param_1[0x18] + *(double *)(lVar21 + 0x10)));
      uVar23 = movmskpd(uVar23,auVar7);
      auVar5._8_8_ = -(ulonglong)
                      (9.99999993922529e-09 <
                      ABS((double)param_1[0x1b] + *(double *)(lVar21 + 0x28)));
      auVar5._0_8_ = -(ulonglong)
                      (9.99999993922529e-09 <
                      ABS((double)param_1[0x1a] + *(double *)(lVar21 + 0x20)));
      uVar24 = movmskpd(uVar24,auVar5);
      if ((uVar24 & 0x3fffffff) != 0 || uVar23 != 0) goto LAB_142fc6243;
    }
    lVar27 = -(ulonglong)
              (9.99999993922529e-09 < ABS((double)param_1[0x21] - *(double *)(lVar21 + 0x58)));
    auVar3._8_4_ = (int)lVar27;
    auVar3._0_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS((double)param_1[0x20] - *(double *)(lVar21 + 0x50)))
    ;
    auVar3._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    iVar22 = movmskpd(uVar23,auVar3);
    lVar27 = -(ulonglong)
              (9.99999993922529e-09 < ABS((double)param_1[0x23] - *(double *)(lVar21 + 0x68)));
    auVar2._8_4_ = (int)lVar27;
    auVar2._0_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS((double)param_1[0x22] - *(double *)(lVar21 + 0x60)))
    ;
    auVar2._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    uVar23 = movmskpd(0,auVar2);
    if ((uVar23 & 0x3fffffff) == 0 && iVar22 == 0) goto LAB_142fc625a;
  }
LAB_142fc6243:
  (**(code **)(*(longlong *)param_1[0x2b] + 0x228))();
  lVar21 = param_1[0x16];
LAB_142fc625a:
  puVar25 = param_1 + 0x18;
  puVar26 = (undefined8 *)(lVar21 + 0x10);
  for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
    *puVar26 = *puVar25;
    puVar25 = puVar25 + 1;
    puVar26 = puVar26 + 1;
  }
  *(undefined8 *)(lVar21 + 0xa8) = param_1[0x2a];
  uVar10 = *(undefined4 *)(param_1 + 0x24);
  uVar11 = *(undefined4 *)((longlong)param_1 + 0x124);
  uVar12 = *(undefined4 *)(param_1 + 0x25);
  uVar13 = *(undefined4 *)((longlong)param_1 + 300);
  uVar14 = *(undefined4 *)(param_1 + 0x26);
  uVar15 = *(undefined4 *)((longlong)param_1 + 0x134);
  uVar16 = *(undefined4 *)(param_1 + 0x27);
  uVar17 = *(undefined4 *)((longlong)param_1 + 0x13c);
  uVar18 = *(undefined4 *)((longlong)param_1 + 0x144);
  uVar19 = *(undefined4 *)(param_1 + 0x29);
  uVar20 = *(undefined4 *)((longlong)param_1 + 0x14c);
  *(undefined4 *)(lVar21 + 0x98) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(lVar21 + 0x9c) = uVar18;
  *(undefined4 *)(lVar21 + 0xa0) = uVar19;
  *(undefined4 *)(lVar21 + 0xa4) = uVar20;
  *(undefined4 *)(lVar21 + 0x88) = uVar14;
  *(undefined4 *)(lVar21 + 0x8c) = uVar15;
  *(undefined4 *)(lVar21 + 0x90) = uVar16;
  *(undefined4 *)(lVar21 + 0x94) = uVar17;
  *(undefined4 *)(lVar21 + 0x78) = uVar10;
  *(undefined4 *)(lVar21 + 0x7c) = uVar11;
  *(undefined4 *)(lVar21 + 0x80) = uVar12;
  *(undefined4 *)(lVar21 + 0x84) = uVar13;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc62cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc6426 FUN_142fc6426 body=12 status=ok
// SIG undefined FUN_142fc6426(void)

void FUN_142fc6426(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc642f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc6432 FUN_142fc6432 body=29 status=ok
// SIG undefined FUN_142fc6432(void)

undefined8 FUN_142fc6432(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc6450 FUN_142fc6450 body=282 status=ok
// SIG undefined FUN_142fc6450(void)

undefined8 * FUN_142fc6450(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc667a FUN_142fc667a body=12 status=ok
// SIG undefined FUN_142fc667a(void)

void FUN_142fc667a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc6683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc6686 FUN_142fc6686 body=29 status=ok
// SIG undefined FUN_142fc6686(void)

undefined8 FUN_142fc6686(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc66a4 FUN_142fc66a4 body=282 status=ok
// SIG undefined FUN_142fc66a4(void)

undefined8 * FUN_142fc66a4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc685e FUN_142fc685e body=520 status=ok
// SIG undefined FUN_142fc685e(void)

void FUN_142fc685e(longlong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  float fVar24;
  
  lVar19 = param_1[2];
  if ((longlong)(int)lVar19 != 0) {
    lVar8 = param_1[1];
    lVar23 = 0;
    do {
      if (*(int *)(lVar8 + lVar23) == 0) {
        plVar9 = (longlong *)*param_1;
        uVar10 = *(undefined8 *)(lVar8 + 8 + lVar23);
        iVar7 = (int)plVar9[0x6e0];
        *(uint *)(plVar9 + 0x6e0) = iVar7 + 1U;
        if (*(uint *)((longlong)plVar9 + 0x3704) < iVar7 + 1U) {
          FUN_140954a96(plVar9 + 0x6df,iVar7);
        }
        *(undefined8 *)(plVar9[0x6df] + (longlong)iVar7 * 8) = uVar10;
        (**(code **)(*plVar9 + 0x228))(plVar9);
LAB_142fc6912:
        lVar1 = lVar8 + lVar23;
        lVar11 = *(longlong *)(lVar1 + 8);
        puVar21 = (undefined8 *)(lVar1 + 0x10);
        puVar22 = (undefined8 *)(lVar11 + 0x10);
        for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
          *puVar22 = *puVar21;
          puVar21 = puVar21 + 1;
          puVar22 = puVar22 + 1;
        }
        *(undefined8 *)(lVar11 + 0xa8) = *(undefined8 *)(lVar1 + 0xa0);
        uVar10 = *(undefined8 *)(lVar1 + 0x70);
        uVar15 = *(undefined8 *)(lVar1 + 0x78);
        uVar16 = *(undefined8 *)(lVar1 + 0x80);
        uVar17 = *(undefined8 *)(lVar1 + 0x88);
        uVar18 = *(undefined8 *)(lVar1 + 0x98);
        *(undefined8 *)(lVar11 + 0x98) = *(undefined8 *)(lVar1 + 0x90);
        *(undefined8 *)(lVar11 + 0xa0) = uVar18;
        *(undefined8 *)(lVar11 + 0x88) = uVar16;
        *(undefined8 *)(lVar11 + 0x90) = uVar17;
        *(undefined8 *)(lVar11 + 0x78) = uVar10;
        *(undefined8 *)(lVar11 + 0x80) = uVar15;
        fVar3 = *(float *)(lVar1 + 0xac);
        lVar1 = *(longlong *)(lVar1 + 8);
        if ((fVar3 != 0.0) || (NAN(fVar3))) {
          fVar4 = *(float *)(lVar8 + 0xb8 + lVar23);
          fVar5 = *(float *)(lVar8 + 0xa8 + lVar23);
          fVar24 = *(float *)(lVar8 + 0xb4 + lVar23);
          if (0.0 < fVar3) {
            fVar6 = *(float *)(lVar8 + 0xb0 + lVar23);
            *(float *)(lVar1 + 0xb8) = 1.0 / fVar3;
            *(float *)(lVar1 + 0xc0) = (fVar6 + fVar5 + fVar3) * (1.0 / fVar3);
          }
          if (0.0 < fVar24) {
            fVar24 = 1.0 / fVar24;
            *(float *)(lVar1 + 0xbc) = fVar24;
            *(float *)(lVar1 + 0xc4) = -fVar24 * (fVar4 + fVar5);
          }
        }
        else {
          *(undefined4 *)(lVar1 + 0xb8) = 0xbf800000;
        }
        *(undefined4 *)(*(longlong *)(lVar8 + 8 + lVar23) + 200) =
             *(undefined4 *)(lVar8 + 0xbc + lVar23);
        *(undefined4 *)(*(longlong *)(lVar8 + 8 + lVar23) + 0xb4) =
             *(undefined4 *)(lVar8 + 0xc0 + lVar23);
        lVar1 = *(longlong *)(lVar8 + 8 + lVar23);
        puVar2 = (undefined4 *)(lVar8 + 0xc4 + lVar23);
        uVar12 = puVar2[1];
        uVar13 = puVar2[2];
        uVar14 = puVar2[3];
        *(undefined4 *)(lVar1 + 0xcc) = *puVar2;
        *(undefined4 *)(lVar1 + 0xd0) = uVar12;
        *(undefined4 *)(lVar1 + 0xd4) = uVar13;
        *(undefined4 *)(lVar1 + 0xd8) = uVar14;
      }
      else {
        if (*(int *)(lVar8 + lVar23) != 2) goto LAB_142fc6912;
        FUN_144911c66(*param_1,*(undefined8 *)(lVar8 + 8 + lVar23));
      }
      lVar23 = lVar23 + 0xe0;
    } while ((longlong)(int)lVar19 * 0xe0 - lVar23 != 0);
  }
  return;
}



// FUNCTION 142fc6a76 FUN_142fc6a76 body=12 status=ok
// SIG undefined FUN_142fc6a76(void)

void FUN_142fc6a76(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc6a7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc6a82 FUN_142fc6a82 body=57 status=ok
// SIG undefined FUN_142fc6a82(void)

undefined8 * FUN_142fc6a82(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2e8880;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc6abc FUN_142fc6abc body=282 status=ok
// SIG undefined FUN_142fc6abc(void)

undefined8 * FUN_142fc6abc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc6bd6 FUN_142fc6bd6 body=92 status=ok
// SIG undefined FUN_142fc6bd6(void)

void FUN_142fc6bd6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_142fc685e(param_1 + 0x15);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc6c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc6c32 FUN_142fc6c32 body=317 status=ok
// SIG undefined FUN_142fc6c32(void)

void FUN_142fc6c32(longlong *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1[1] + 0xe0) == '\x01') {
    LOCK();
    *(int *)(*param_1 + 0x5008) = *(int *)(*param_1 + 0x5008) + 1;
    UNLOCK();
  }
  *(undefined1 *)(*param_1 + 0x3738) = 1;
  lVar4 = *param_1;
  iVar3 = *(int *)(lVar4 + 0x3748);
  *(uint *)(lVar4 + 0x3748) = iVar3 + 1U;
  if (*(uint *)(lVar4 + 0x374c) < iVar3 + 1U) {
    FUN_14630550c((longlong *)(lVar4 + 0x3740),iVar3);
  }
  lVar5 = param_1[1];
  *(longlong *)(*(longlong *)(lVar4 + 0x3740) + (longlong)iVar3 * 8) = lVar5;
  *(int *)(lVar5 + 8) = iVar3;
  lVar4 = *param_1;
  fVar2 = *(float *)(param_1[1] + 0x40);
  local_48 = param_1[4];
  local_58 = (undefined4)param_1[2];
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_50 = (undefined4)param_1[3];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x1c);
  iVar3 = *(int *)(lVar4 + 0x3758);
  *(uint *)(lVar4 + 0x3758) = iVar3 + 1U;
  if (*(uint *)(lVar4 + 0x375c) < iVar3 + 1U) {
    FUN_146305590((longlong *)(lVar4 + 0x3750),iVar3);
  }
  lVar4 = *(longlong *)(lVar4 + 0x3750);
  lVar5 = (longlong)iVar3 * 0x20;
  *(longlong *)(lVar4 + 0x10 + lVar5) = local_48;
  puVar1 = (undefined4 *)(lVar4 + lVar5);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  *(double *)(lVar4 + 0x18 + lVar5) = (double)fVar2;
  if (1 < *(int *)(*param_1 + 8)) {
    if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 142fc6d96 FUN_142fc6d96 body=29 status=ok
// SIG undefined FUN_142fc6d96(void)

void FUN_142fc6d96(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142fc6db4 FUN_142fc6db4 body=29 status=ok
// SIG undefined FUN_142fc6db4(void)

undefined8 FUN_142fc6db4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc6dd2 FUN_142fc6dd2 body=282 status=ok
// SIG undefined FUN_142fc6dd2(void)

undefined8 * FUN_142fc6dd2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc6eec FUN_142fc6eec body=400 status=ok
// SIG undefined FUN_142fc6eec(void)

void FUN_142fc6eec(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  if (*(char *)(*(longlong *)(param_1 + 0xb0) + 0xe0) == '\x01') {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa8) + 0x5008);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0x3738) = 1;
  lVar5 = *(longlong *)(param_1 + 0xa8);
  iVar4 = *(int *)(lVar5 + 0x3748);
  *(uint *)(lVar5 + 0x3748) = iVar4 + 1U;
  if (*(uint *)(lVar5 + 0x374c) < iVar4 + 1U) {
    FUN_14630550c((longlong *)(lVar5 + 0x3740),iVar4);
  }
  lVar6 = *(longlong *)(param_1 + 0xb0);
  *(longlong *)(*(longlong *)(lVar5 + 0x3740) + (longlong)iVar4 * 8) = lVar6;
  *(int *)(lVar6 + 8) = iVar4;
  lVar5 = *(longlong *)(param_1 + 0xa8);
  fVar3 = *(float *)(*(longlong *)(param_1 + 0xb0) + 0x40);
  local_48 = *(undefined8 *)(param_1 + 200);
  local_58 = *(undefined4 *)(param_1 + 0xb8);
  uStack_54 = *(undefined4 *)(param_1 + 0xbc);
  uStack_50 = *(undefined4 *)(param_1 + 0xc0);
  uStack_4c = *(undefined4 *)(param_1 + 0xc4);
  iVar4 = *(int *)(lVar5 + 0x3758);
  *(uint *)(lVar5 + 0x3758) = iVar4 + 1U;
  if (*(uint *)(lVar5 + 0x375c) < iVar4 + 1U) {
    FUN_146305590((longlong *)(lVar5 + 0x3750),iVar4);
  }
  lVar5 = *(longlong *)(lVar5 + 0x3750);
  lVar6 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar5 + 0x10 + lVar6) = local_48;
  puVar2 = (undefined4 *)(lVar5 + lVar6);
  *puVar2 = local_58;
  puVar2[1] = uStack_54;
  puVar2[2] = uStack_50;
  puVar2[3] = uStack_4c;
  *(double *)(lVar5 + 0x18 + lVar6) = (double)fVar3;
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 8) < 2) {
    FUN_147a00330(*(undefined8 *)(param_1 + 0xb0),&DAT_14ca85100);
  }
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fc709a FUN_142fc709a body=515 status=ok
// SIG undefined FUN_142fc709a(void)

void FUN_142fc709a(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  if (*(char *)(param_1[1] + 0xe0) == '\x01') {
    LOCK();
    *(int *)(*param_1 + 0x5008) = *(int *)(*param_1 + 0x5008) + -1;
    UNLOCK();
  }
  *(undefined1 *)(*param_1 + 0x3738) = 1;
  lVar11 = *param_1;
  if (0 < *(int *)(lVar11 + 0x3338)) {
    lVar5 = 0;
    do {
      lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x3330) + lVar5 * 8);
      *(undefined8 *)(lVar11 + 0x108) = 0;
      *(undefined8 *)(lVar11 + 0x110) = 0;
      *(undefined8 *)(lVar11 + 0x118) = 0;
      *(undefined8 *)(lVar11 + 200) = 0;
      *(undefined8 *)(lVar11 + 0xd0) = 0;
      *(byte *)(lVar11 + 0x172) = *(byte *)(lVar11 + 0x172) | 2;
      lVar5 = lVar5 + 1;
      lVar11 = *param_1;
    } while (lVar5 < *(int *)(lVar11 + 0x3338));
  }
  uVar3 = *(uint *)(param_1[1] + 8);
  iVar4 = *(int *)(lVar11 + 0x3748);
  iVar9 = iVar4 + ~uVar3;
  if (iVar9 != 0) {
    iVar10 = 1;
    if (iVar9 < 1) {
      iVar10 = iVar9;
    }
    memmove((void *)(*(longlong *)(lVar11 + 0x3740) + (longlong)(int)uVar3 * 8),
            (void *)(*(longlong *)(lVar11 + 0x3740) + (longlong)(iVar4 - iVar10) * 8),
            (longlong)iVar10 << 3);
    iVar4 = *(int *)(lVar11 + 0x3748);
  }
  *(int *)(lVar11 + 0x3748) = iVar4 + -1;
  FUN_145c000a8(lVar11 + 0x3740);
  lVar11 = *param_1;
  iVar4 = *(int *)(lVar11 + 0x3758);
  iVar9 = ~uVar3 + iVar4;
  if (iVar9 != 0) {
    iVar10 = 1;
    if (iVar9 < 1) {
      iVar10 = iVar9;
    }
    memmove((void *)((longlong)(int)uVar3 * 0x20 + *(longlong *)(lVar11 + 0x3750)),
            (void *)((longlong)(iVar4 - iVar10) * 0x20 + *(longlong *)(lVar11 + 0x3750)),
            (longlong)iVar10 << 5);
    iVar4 = *(int *)(lVar11 + 0x3758);
  }
  *(int *)(lVar11 + 0x3758) = iVar4 + -1;
  FUN_145c0da42(lVar11 + 0x3750);
  if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(*param_1 + 0x3748))) {
    *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x3740) + (ulonglong)uVar3 * 8) + 8) = uVar3;
  }
  lVar11 = param_1[1];
  if (lVar11 == 0) {
    return;
  }
  lVar5 = *(longlong *)(lVar11 + 0x10);
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
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar12 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar12) {
              plVar8 = DAT_14ca843c0;
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
            plVar8 = plVar6;
            if (bVar12) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  FUN_1400020a8(lVar11);
  return;
}



// FUNCTION 142fc72ae FUN_142fc72ae body=12 status=ok
// SIG undefined FUN_142fc72ae(void)

void FUN_142fc72ae(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc72b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc72ba FUN_142fc72ba body=29 status=ok
// SIG undefined FUN_142fc72ba(void)

undefined8 FUN_142fc72ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc72d8 FUN_142fc72d8 body=282 status=ok
// SIG undefined FUN_142fc72d8(void)

undefined8 * FUN_142fc72d8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc73f2 FUN_142fc73f2 body=91 status=ok
// SIG undefined FUN_142fc73f2(void)

void FUN_142fc73f2(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_142fc709a(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_142fc709a(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc742e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fc744e FUN_142fc744e body=131 status=ok
// SIG undefined FUN_142fc744e(void)

void FUN_142fc744e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (*(char *)(lVar1 + 0xe0) == '\x01') {
    LOCK();
    *(int *)(*param_1 + 0x5008) = *(int *)(*param_1 + 0x5008) + -1;
    UNLOCK();
    lVar1 = param_1[1];
  }
  *(char *)(lVar1 + 0xe0) = (char)param_1[0x12];
  if (*(char *)(param_1[1] + 0xe0) == '\x01') {
    LOCK();
    *(int *)(*param_1 + 0x5008) = *(int *)(*param_1 + 0x5008) + 1;
    UNLOCK();
  }
  *(undefined1 *)(*param_1 + 0x3738) = 1;
  FUN_1456e85c8(param_1[1],param_1 + 2);
  if (1 < *(int *)(*param_1 + 8)) {
    return;
  }
  FUN_147a00330(param_1[1],param_2);
  return;
}



// FUNCTION 142fc74dc FUN_142fc74dc body=29 status=ok
// SIG undefined FUN_142fc74dc(void)

void FUN_142fc74dc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142fc74fa FUN_142fc74fa body=29 status=ok
// SIG undefined FUN_142fc74fa(void)

undefined8 FUN_142fc74fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc7518 FUN_142fc7518 body=282 status=ok
// SIG undefined FUN_142fc7518(void)

undefined8 * FUN_142fc7518(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc7632 FUN_142fc7632 body=209 status=ok
// SIG undefined FUN_142fc7632(void)

void FUN_142fc7632(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x17];
  if (*(char *)(lVar2 + 0xe0) == '\x01') {
    LOCK();
    *(int *)(param_1[0x16] + 0x5008) = *(int *)(param_1[0x16] + 0x5008) + -1;
    UNLOCK();
    lVar2 = param_1[0x17];
  }
  *(undefined1 *)(lVar2 + 0xe0) = *(undefined1 *)(param_1 + 0x28);
  if (*(char *)(param_1[0x17] + 0xe0) == '\x01') {
    LOCK();
    *(int *)(param_1[0x16] + 0x5008) = *(int *)(param_1[0x16] + 0x5008) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1[0x16] + 0x3738) = 1;
  FUN_1456e85c8(param_1[0x17],param_1 + 0x18);
  if (*(int *)(param_1[0x16] + 8) < 2) {
    FUN_147a00330(param_1[0x17],&DAT_14ca85100);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc76e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc7704 FUN_142fc7704 body=149 status=ok
// SIG undefined FUN_142fc7704(void)

void FUN_142fc7704(undefined8 *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  lVar8 = param_1[1] + 0x3780;
  uVar3 = *param_1;
  piVar5 = (int *)FUN_14025f2b6(lVar8,uVar3);
  if (piVar5 == (int *)0x0) {
    FUN_145d0dbf0(lVar8,uVar3);
    return;
  }
  iVar2 = *piVar5;
  bVar4 = FUN_145d0dbf0(lVar8,uVar3);
  if ((iVar2 != -1 & bVar4) == 1) {
    lVar8 = *(longlong *)(param_1[1] + 0x3830);
    lVar6 = param_1[1] + 0x3820;
    if (lVar8 != 0) {
      lVar6 = lVar8;
    }
    iVar7 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar7 = iVar2;
    }
    bVar4 = (byte)iVar2 & 0x1f;
    puVar1 = (uint *)(lVar6 + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  return;
}



// FUNCTION 142fc77a4 FUN_142fc77a4 body=12 status=ok
// SIG undefined FUN_142fc77a4(void)

void FUN_142fc77a4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc77ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc77b0 FUN_142fc77b0 body=29 status=ok
// SIG undefined FUN_142fc77b0(void)

undefined8 FUN_142fc77b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc77ce FUN_142fc77ce body=282 status=ok
// SIG undefined FUN_142fc77ce(void)

undefined8 * FUN_142fc77ce(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc78e8 FUN_142fc78e8 body=205 status=ok
// SIG undefined FUN_142fc78e8(void)

void FUN_142fc78e8(undefined8 *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar8 = param_1[0x16] + 0x3780;
  uVar3 = param_1[0x15];
  piVar5 = (int *)FUN_14025f2b6(lVar8,uVar3);
  if (piVar5 == (int *)0x0) {
    FUN_145d0dbf0(lVar8,uVar3);
  }
  else {
    iVar2 = *piVar5;
    bVar4 = FUN_145d0dbf0(lVar8,uVar3);
    if ((iVar2 != -1 & bVar4) == 1) {
      lVar8 = *(longlong *)(param_1[0x16] + 0x3830);
      lVar6 = param_1[0x16] + 0x3820;
      if (lVar8 != 0) {
        lVar6 = lVar8;
      }
      iVar7 = iVar2 + 0x1f;
      if (-1 < iVar2) {
        iVar7 = iVar2;
      }
      bVar4 = (byte)iVar2 & 0x1f;
      puVar1 = (uint *)(lVar6 + (longlong)(iVar7 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar5 = (int *)(param_1 + 1);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc79a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc79b6 FUN_142fc79b6 body=31 status=ok
// SIG undefined FUN_142fc79b6(void)

void FUN_142fc79b6(longlong param_1)

{
  if (-1 < *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x34) = 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 142fc79d6 FUN_142fc79d6 body=89 status=ok
// SIG undefined FUN_142fc79d6(void)

void FUN_142fc79d6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x3928);
  *(uint *)(lVar2 + 0x3928) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x392c) < iVar1 + 1U) {
    FUN_1472d5612((longlong *)(lVar2 + 0x3920),iVar1);
  }
  *(longlong *)(*(longlong *)(lVar2 + 0x3920) + (longlong)iVar1 * 8) = param_1[1];
  FUN_1471bc482(*param_1 + 0x3930);
  return;
}



// FUNCTION 142fc7a3a FUN_142fc7a3a body=12 status=ok
// SIG undefined FUN_142fc7a3a(void)

void FUN_142fc7a3a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc7a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc7a46 FUN_142fc7a46 body=29 status=ok
// SIG undefined FUN_142fc7a46(void)

undefined8 FUN_142fc7a46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc7a64 FUN_142fc7a64 body=282 status=ok
// SIG undefined FUN_142fc7a64(void)

undefined8 * FUN_142fc7a64(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc7b7e FUN_142fc7b7e body=152 status=ok
// SIG undefined FUN_142fc7b7e(void)

void FUN_142fc7b7e(undefined8 *param_1)

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
  iVar2 = *(int *)(lVar3 + 0x3928);
  *(uint *)(lVar3 + 0x3928) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x392c) < iVar2 + 1U) {
    FUN_1472d5612((longlong *)(lVar3 + 0x3920),iVar2);
  }
  *(undefined8 *)(*(longlong *)(lVar3 + 0x3920) + (longlong)iVar2 * 8) = param_1[0x16];
  FUN_1471bc482(param_1[0x15] + 0x3930);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc7bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc7c16 FUN_142fc7c16 body=97 status=ok
// SIG undefined FUN_142fc7c16(void)

void FUN_142fc7c16(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1 + 1;
  FUN_1472d5698(*param_1 + 0x3920);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1471bc482(*param_1 + 0x3930);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38,*param_1,param_1[1]);
}



// FUNCTION 142fc7c82 FUN_142fc7c82 body=12 status=ok
// SIG undefined FUN_142fc7c82(void)

void FUN_142fc7c82(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc7c8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc7c8e FUN_142fc7c8e body=29 status=ok
// SIG undefined FUN_142fc7c8e(void)

undefined8 FUN_142fc7c8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc7cac FUN_142fc7cac body=282 status=ok
// SIG undefined FUN_142fc7cac(void)

undefined8 * FUN_142fc7cac(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc7dc6 FUN_142fc7dc6 body=156 status=ok
// SIG undefined FUN_142fc7dc6(void)

void FUN_142fc7dc6(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  local_20 = param_1 + 0xb0;
  FUN_1472d5698(*(longlong *)(param_1 + 0xa8) + 0x3920);
  FUN_1471bc482(*(longlong *)(param_1 + 0xa8) + 0x3930,*(longlong *)(param_1 + 0xa8),
                *(undefined8 *)(param_1 + 0xb0));
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fc7e9a FUN_142fc7e9a body=12 status=ok
// SIG undefined FUN_142fc7e9a(void)

void FUN_142fc7e9a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc7ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc7ea6 FUN_142fc7ea6 body=29 status=ok
// SIG undefined FUN_142fc7ea6(void)

undefined8 FUN_142fc7ea6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc7ec4 FUN_142fc7ec4 body=282 status=ok
// SIG undefined FUN_142fc7ec4(void)

undefined8 * FUN_142fc7ec4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc7fde FUN_142fc7fde body=134 status=ok
// SIG undefined FUN_142fc7fde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fc7fde(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1472c8f7a(_DAT_000000a8 + 0x3b38,_DAT_000000b0,DAT_000000b8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1472c8f7a(param_1[0x15] + 0x3b38,param_1[0x16],*(undefined1 *)(param_1 + 0x17));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc805a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fc8082 FUN_142fc8082 body=12 status=ok
// SIG undefined FUN_142fc8082(void)

void FUN_142fc8082(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc808b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc808e FUN_142fc808e body=29 status=ok
// SIG undefined FUN_142fc808e(void)

undefined8 FUN_142fc808e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc80ac FUN_142fc80ac body=282 status=ok
// SIG undefined FUN_142fc80ac(void)

undefined8 * FUN_142fc80ac(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc81c6 FUN_142fc81c6 body=119 status=ok
// SIG undefined FUN_142fc81c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fc81c6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1472c8fea(_DAT_000000a8 + 0x3b38,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1472c8fea(param_1[0x15] + 0x3b38,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc8233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fc823e FUN_142fc823e body=190 status=ok
// SIG undefined FUN_142fc823e(void)

void FUN_142fc823e(longlong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  puVar2 = (undefined4 *)param_1[1];
  FUN_146305614(lVar1 + 0x5130,local_38);
  *local_30 = (longlong)puVar2;
  *puVar2 = local_38[0];
  bVar3 = (byte)(1 << ((byte)local_38[0] & 0x1f));
  bVar5 = *(byte *)(lVar1 + 0x5210) & ~bVar3;
  *(byte *)(lVar1 + 0x5210) = bVar5;
  bVar4 = 0;
  if (*(char *)(puVar2 + 4) != '\0') {
    bVar4 = bVar3;
  }
  *(byte *)(lVar1 + 0x5210) = bVar4 | bVar5;
  bVar4 = ~bVar3 & *(byte *)(lVar1 + 0x5211);
  *(byte *)(lVar1 + 0x5211) = bVar4;
  if (*(char *)((longlong)puVar2 + 0x11) == '\0') {
    bVar3 = 0;
  }
  *(byte *)(lVar1 + 0x5211) = bVar3 | bVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1409311c8(*param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 142fc8308 FUN_142fc8308 body=12 status=ok
// SIG undefined FUN_142fc8308(void)

void FUN_142fc8308(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc8311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc8314 FUN_142fc8314 body=29 status=ok
// SIG undefined FUN_142fc8314(void)

undefined8 FUN_142fc8314(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc8332 FUN_142fc8332 body=282 status=ok
// SIG undefined FUN_142fc8332(void)

undefined8 * FUN_142fc8332(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc844c FUN_142fc844c body=244 status=ok
// SIG undefined FUN_142fc844c(void)

void FUN_142fc844c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  puVar3 = *(undefined4 **)(param_1 + 0xb0);
  FUN_146305614(lVar2 + 0x5130,local_38);
  *local_30 = (longlong)puVar3;
  *puVar3 = local_38[0];
  bVar4 = (byte)(1 << ((byte)local_38[0] & 0x1f));
  bVar6 = *(byte *)(lVar2 + 0x5210) & ~bVar4;
  *(byte *)(lVar2 + 0x5210) = bVar6;
  bVar5 = 0;
  if (*(char *)(puVar3 + 4) != '\0') {
    bVar5 = bVar4;
  }
  *(byte *)(lVar2 + 0x5210) = bVar5 | bVar6;
  bVar5 = ~bVar4 & *(byte *)(lVar2 + 0x5211);
  *(byte *)(lVar2 + 0x5211) = bVar5;
  if (*(char *)((longlong)puVar3 + 0x11) == '\0') {
    bVar4 = 0;
  }
  *(byte *)(lVar2 + 0x5211) = bVar4 | bVar5;
  FUN_1409311c8(*(undefined8 *)(param_1 + 0xa8));
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fc8558 FUN_142fc8558 body=63 status=ok
// SIG undefined FUN_142fc8558(void)

void FUN_142fc8558(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1[1] + 8);
  lVar2 = *(longlong *)(param_1[2] + 8);
  FUN_1472c90c0(*param_1);
  if (lVar1 != lVar2) {
    FUN_1409311c8(*param_1);
    return;
  }
  return;
}



// FUNCTION 142fc85a2 FUN_142fc85a2 body=12 status=ok
// SIG undefined FUN_142fc85a2(void)

void FUN_142fc85a2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc85ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc85ae FUN_142fc85ae body=29 status=ok
// SIG undefined FUN_142fc85ae(void)

undefined8 FUN_142fc85ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc85cc FUN_142fc85cc body=282 status=ok
// SIG undefined FUN_142fc85cc(void)

undefined8 * FUN_142fc85cc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc86e6 FUN_142fc86e6 body=120 status=ok
// SIG undefined FUN_142fc86e6(void)

void FUN_142fc86e6(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)(param_1[0x16] + 8);
  lVar3 = *(longlong *)(param_1[0x17] + 8);
  FUN_1472c90c0(param_1[0x15]);
  if (lVar2 != lVar3) {
    FUN_1409311c8(param_1[0x15]);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc8752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc875e FUN_142fc875e body=33 status=ok
// SIG undefined FUN_142fc875e(void)

void FUN_142fc875e(undefined8 *param_1)

{
  FUN_145837b7c(*param_1,param_1[1]);
  FUN_1409311c8(*param_1);
  return;
}



// FUNCTION 142fc878a FUN_142fc878a body=12 status=ok
// SIG undefined FUN_142fc878a(void)

void FUN_142fc878a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc8793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc8796 FUN_142fc8796 body=29 status=ok
// SIG undefined FUN_142fc8796(void)

undefined8 FUN_142fc8796(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc87b4 FUN_142fc87b4 body=282 status=ok
// SIG undefined FUN_142fc87b4(void)

undefined8 * FUN_142fc87b4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc88ce FUN_142fc88ce body=134 status=ok
// SIG undefined FUN_142fc88ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fc88ce(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_145837b7c(_DAT_000000a8,_DAT_000000b0);
    FUN_1409311c8(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_145837b7c(param_1[0x15],param_1[0x16]);
  FUN_1409311c8(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc894a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fc8972 FUN_142fc8972 body=29 status=ok
// SIG undefined FUN_142fc8972(void)

void FUN_142fc8972(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}


