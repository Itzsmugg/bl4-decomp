// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14370178a FUN_14370178a body=29 status=ok
// SIG undefined FUN_14370178a(void)

undefined8 FUN_14370178a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437017ca FUN_1437017ca body=29 status=ok
// SIG undefined FUN_1437017ca(void)

undefined8 FUN_1437017ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437017e8 FUN_1437017e8 body=381 status=ok
// SIG undefined FUN_1437017e8(void)

void FUN_1437017e8(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88 [4];
  longlong local_78;
  longlong *local_68 [2];
  longlong local_58 [4];
  undefined4 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bVar1 = *param_2;
  local_88[0] = *param_1;
  local_78 = *(longlong *)(param_1 + 4);
  local_68[0] = (longlong *)0x0;
  if (local_78 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0xc);
    if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 8);
    }
    (**(code **)*puVar4)(puVar4,local_68);
  }
  local_38 = param_1[0x15];
  if (((param_1[2] != 0) && (uVar2 = param_1[1], -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
  {
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == param_1[2])) &&
       ((bVar1 < 2 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar6 = *plVar5;
      }
      else {
        lVar6 = 0;
      }
      lVar3 = FUN_140083894();
      local_c8 = DAT_14cb08fa0 != 0;
      local_c0 = 0;
      (**(code **)(**(longlong **)(lVar3 + 0x38) + 0xb0))
                (*(longlong **)(lVar3 + 0x38),&local_b8,lVar6 + 0x188,param_1[0x14]);
      goto LAB_143701904;
    }
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 0xffffffff00000000;
LAB_143701904:
  FUN_143701a54(local_88,&local_b8);
  FUN_141289612(&local_b8);
  if (local_78 != 0) {
    plVar5 = local_68[0];
    if (local_68[0] == (longlong *)0x0) {
      plVar5 = local_58;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143701966 FUN_143701966 body=129 status=ok
// SIG undefined FUN_143701966(void)

undefined8 * FUN_143701966(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14aab0160;
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar1;
  puVar2[6] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 6);
  }
  puVar2[0xc] = *(undefined8 *)(param_1 + 0x60);
  return puVar2 + 2;
}



// FUNCTION 1437019ee FUN_1437019ee body=29 status=ok
// SIG undefined FUN_1437019ee(void)

void FUN_1437019ee(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143701a0c FUN_143701a0c body=71 status=ok
// SIG undefined FUN_143701a0c(void)

undefined8 * FUN_143701a0c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aab0160;
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



// FUNCTION 143701a54 FUN_143701a54 body=435 status=ok
// SIG undefined FUN_143701a54(void)

void FUN_143701a54(int *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *local_e8 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_1[0x14] == *param_1) {
    plVar3 = (longlong *)(param_1 + 0xc);
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 8);
    }
    (**(code **)(*plVar3 + 8))(plVar3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_118);
  }
  local_f8 = *(longlong *)(param_1 + 4);
  local_e8[0] = (longlong *)0x0;
  if (local_f8 != 0) {
    piVar2 = param_1 + 0xc;
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      piVar2 = *(int **)(param_1 + 8);
    }
    (*(code *)**(undefined8 **)piVar2)(piVar2,local_e8);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 0xffffffff00000000;
  FUN_1434a20c8(&local_b8,param_2);
  local_88[0] = (code *)0x0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *puVar1 = &PTR_LAB_14aab0180;
  puVar1[2] = local_f8;
  puVar1[4] = local_e8[0];
  local_e8[0] = (longlong *)0x0;
  *(undefined4 *)(puVar1 + 8) = local_c8;
  *(undefined4 *)((longlong)puVar1 + 0x44) = uStack_c4;
  *(undefined4 *)(puVar1 + 9) = uStack_c0;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = uStack_bc;
  *(undefined4 *)(puVar1 + 6) = local_d8;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uStack_d4;
  *(undefined4 *)(puVar1 + 7) = uStack_d0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = uStack_cc;
  if (local_f8 != 0) {
    local_f8 = 0;
  }
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0xffffffff00000000;
  local_78 = puVar1;
  FUN_1434a218e(puVar1 + 10,&local_b8);
  if (puVar1 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_88[0] = FUN_143701c2a;
  }
  FUN_1407461b0(param_1[0x14],local_88);
  FUN_141289612(&local_b8);
  if (local_f8 != 0) {
    plVar3 = local_e8[0];
    if (local_e8[0] == (longlong *)0x0) {
      plVar3 = (longlong *)&local_d8;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143701c2a FUN_143701c2a body=52 status=ok
// SIG undefined FUN_143701c2a(void)

void FUN_143701c2a(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143701c5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_1 + 8);
  return;
}



// FUNCTION 143701c68 FUN_143701c68 body=29 status=ok
// SIG undefined FUN_143701c68(void)

void FUN_143701c68(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143701c86 FUN_143701c86 body=80 status=ok
// SIG undefined FUN_143701c86(void)

undefined8 * FUN_143701c86(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aab0180;
  FUN_141289612(param_1 + 10);
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143701cd6 FUN_143701cd6 body=252 status=ok
// SIG undefined FUN_143701cd6(void)

void FUN_143701cd6(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_2 != 0) {
    local_a8 = *param_1;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0xffffffff00000000;
    FUN_1434a218e(&local_a0);
    local_78[0] = (undefined1 *)0x0;
    puVar1 = (undefined8 *)FUN_14001cc68(0x38,8);
    *puVar1 = &PTR_LAB_14aab01c0;
    puVar1[1] = local_a8;
    puVar1[6] = 0xffffffff00000000;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    local_68 = puVar1;
    FUN_1434a218e(puVar1 + 2,&local_a0);
    if (puVar1 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_78[0] = &LAB_143701e1c;
    }
    FUN_1407461b0(1,local_78);
    FUN_141289612(&local_a0);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143701dfe FUN_143701dfe body=29 status=ok
// SIG undefined FUN_143701dfe(void)

undefined8 FUN_143701dfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143701e92 FUN_143701e92 body=29 status=ok
// SIG undefined FUN_143701e92(void)

void FUN_143701e92(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143701eb0 FUN_143701eb0 body=52 status=ok
// SIG undefined FUN_143701eb0(void)

undefined8 * FUN_143701eb0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aab01c0;
  FUN_141289612(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143701f0a FUN_143701f0a body=12 status=ok
// SIG undefined FUN_143701f0a(void)

void FUN_143701f0a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143701f13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143701f16 FUN_143701f16 body=29 status=ok
// SIG undefined FUN_143701f16(void)

undefined8 FUN_143701f16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143701f34 FUN_143701f34 body=282 status=ok
// SIG undefined FUN_143701f34(void)

undefined8 * FUN_143701f34(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1437009ee);
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



// FUNCTION 1437020c0 FUN_1437020c0 body=51 status=ok
// SIG undefined FUN_1437020c0(void)

void FUN_1437020c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437020e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1437020fe FUN_1437020fe body=12 status=ok
// SIG undefined FUN_1437020fe(void)

void FUN_1437020fe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143702107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14370210a FUN_14370210a body=29 status=ok
// SIG undefined FUN_14370210a(void)

undefined8 FUN_14370210a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143702128 FUN_143702128 body=282 status=ok
// SIG undefined FUN_143702128(void)

undefined8 * FUN_143702128(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1437009ee);
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



// FUNCTION 143702242 FUN_143702242 body=98 status=ok
// SIG undefined FUN_143702242(void)

void FUN_143702242(undefined8 *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014370229a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1437022a4 FUN_1437022a4 body=2406 status=ok
// SIG undefined FUN_1437022a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437022a4(void)

{
  char cVar1;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14aa9b720;
  local_78 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa9b740,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa9c630,1,&PTR_FUN_14aa9c5b0);
  uStack_68 = 2;
  ppuStack_70 = &PTR_FUN_14aa9cfa0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa9d010,1,&PTR_FUN_14aa9cfe0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb08820,L"au.Concurrency.MinVolumeScale",&DAT_14c761b4c,
                L"Volume threshold considered silent for volume scaling (linear scale).\n");
  atexit(FUN_1436f9031);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa9d9e0,1,&PTR_FUN_14aa9d9b0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa9dab0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa9de60,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa9ec50,1,&PTR_FUN_14aa9ebd0);
  uStack_68 = 2;
  ppuStack_70 = &PTR_FUN_14aa9f4b0;
  local_78 = 3;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14aa9f4f0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa9f9c0,1,0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb08988,L"au.streamcache.priming.BypassRetainFromSoundCues",&DAT_14cb08998,
                L"When set to 1, we ignore the loading behavior of sound classes set on a Sound Cue directly.\n"
               );
  atexit(FUN_1436fb2f7);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb089a0,L"au.streamcache.priming.ManuallyPrimeChildNodes",&DAT_14c761b54,
                L"When set to 1, we ignore the loading behavior of sound classes set on a Sound Cue directly.\n"
               );
  atexit(FUN_1436fb33c);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa9ff70,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa0460,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa08b0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa0d50,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa11f0,1,0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb08a28,L"au.streamcache.priming.PrimeDelayNodes",&DAT_14cb08a38,
                L"When set to 1, sounds will be loaded into the cache automatically when a delay node is hit.\n"
               );
  atexit(FUN_1436fb972);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa17a0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa1e90,1,&PTR_FUN_14aaa1e60);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa23a0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa2c30,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa30d0,1,0);
  DAT_14cb08af0 = 0;
  DAT_14cb08af8 = 0;
  DAT_14cb08ad0 = 0;
  _DAT_14cb08ad8 = 0;
  _DAT_14cb08afc = 0xffffffff00000080;
  DAT_14cb08b04 = 0;
  DAT_14cb08b10 = 0;
  DAT_14cb08b18 = 0;
  atexit(FUN_1436fb9b7);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa3560,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa3960,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa3de0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa42e0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa4a20,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa4e80,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa52f0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa5a00,1,0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb08be0,L"au.MaxRandomBranches",&DAT_14cb08bf0,
                L"Sets the max amount of branches to play from for any random node. The rest of the branches will be released from memory.\n0: No culling, Any other value: The amount of branches we should use as a maximum for any random node."
               );
  atexit(FUN_1436fbe1d);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb08bf8,L"au.streamcache.priming.PrimeRandomNodes",&DAT_14cb08c08,
                L"When set to 1, sounds will be loaded into the cache automatically when a random node is hit.\n"
               );
  atexit(FUN_1436fbe62);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa6140,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa6590,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa69f0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa6f10,1,0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14aaa7650;
  local_78 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaa7670,1,0);
  ppuStack_70 = &PTR_FUN_14aaab5f0;
  local_78 = 1;
  uStack_68 = 5;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaab6c0,6,&PTR_FUN_14aaab690);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb08e70,L"au.submix.clearbrokensubmixassets",&DAT_14cb08e80);
  atexit(FUN_1436fd2e4);
  local_58 = 0x79d25301;
  uStack_54 = 0x47af41f8;
  uStack_50 = 0xadcf10e7;
  uStack_4c = 0x97415c16;
  _DAT_14cb08e84 = 0x79d25301;
  uRam000000014cb08e88 = 0x47af41f8;
  uRam000000014cb08e8c = 0xadcf10e7;
  uRam000000014cb08e90 = 0x97415c16;
  FUN_141005458(&local_58,2,L"SoundSubmixVer",0);
  atexit((_func_5014 *)&LAB_1436fdc42);
  ppuStack_70 = &PTR_FUN_14aaac3f0;
  local_78 = 3;
  uStack_68 = 4;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14aaac470);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb08f50,L"au.streamcache.SoundWaveDefaultLoadingBehavior",&DAT_14c761b58,
                L"This can be set to define the default behavior when a USoundWave is loaded.\n1: Retain audio data on load, 2: prime audio data on load, 3: load on demand (No audio data is loaded until a USoundWave is played or primed)."
               );
  atexit(FUN_1436fdd2a);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb08f60,L"au.editor.ForceAudioNonStreaming",&DAT_14cb08f70,
                L"When set to 1, forces any audio played to be non-streaming May force a DDC miss.\n0: Honor the Play When Silent flag, 1: stop all silent non-procedural sources."
               );
  atexit(FUN_1436fdd6f);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb08f78,L"au.streamcache.DisableRetaining",&DAT_14cb08f88,
                L"When set to 1, USoundWaves will not retain chunks of their own audio.\n0: Don\'t disable retaining, 1: disable retaining."
               );
  atexit(FUN_1436fddb4);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb08f90,L"au.streamcache.BlockOnChunkLoadCompletion",&DAT_14cb08fa0,
                L"When set to 1, USoundWaves we will always attempt to synchronously load a chunk after a USoundWave request has finished.\n0: Don\'t try to block after a SoundWave has completed loading a chunk, 1: Block after a USoundWave\'s chunk request has completed."
               );
  atexit(FUN_1436fddf9);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb08fa8,L"au.streamcache.DispatchToGameThreadOnChunkRequest",&DAT_14c761b5c,
                L"When set to 1, we will always dispatch a callback to the game thread whenever a USoundWave request has finished. This may cause chunks of audio to be evicted by the time we need them.\n0: as soon as the chunk is loaded, capture the audio chunk. 1: As soon as the chunk is loaded, dispatch a callback to the gamethread."
               );
  atexit(FUN_1436fde3e);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb08fb8,L"au.AllowReverbForMultichannelSources",&DAT_14c761b60,
                L"Controls if we allow Reverb processing for sources with channel counts > 2.\n0: Disable, >0: Enable"
               );
  atexit(FUN_1436fde83);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaad590,1,0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb09028,L"au.SoundWaveProxyReader.SimulateSeek",&DAT_14cb09038,
                L"If true, SoundWaves which are not of a seekable format will simulate seek calls by reading and discarding samples.\n0: Do not simulate seek, !0: Simulate seek"
               );
  atexit(FUN_1436fff0f);
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cb0903c);
  if (cVar1 == '\0') {
    _DAT_14cb0903c = 0;
    uRam000000014cb09044 = 0;
  }
  if (CONCAT44(uStack_54,local_58) != 0) {
    FUN_1400020a8();
  }
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb09050,L"r.SparseVolumeTexture.RemoteDDCBehavior",&DAT_14cb09060,
                L"Controls how SVTs use remote DDC. 0: The bLocalDDCOnly property controls per-SVT caching behavior, 1: Force local DDC only usage for all SVTs, 2: Force local + remote DDC usage for all SVTs"
               );
  atexit(FUN_1436fff54);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb09068,L"r.SparseVolumeTexture.Streaming.RequestMipBias",&DAT_14c761b68,
                L"Bias to apply the calculated mip level to stream at. This is used to account for the mip estimation based on projected screen space size being very conservative. The default value of 1.0 was found empirically to roughly result in a 1:1 voxel to pixel ratio."
               );
  atexit(FUN_1436fff99);
  local_78 = CONCAT44(local_78._4_4_,4);
  FUN_141471170(&DAT_14cb09078,L"r.SparseVolumeTexture.Streaming.DDCChunkSize",&DAT_14c761b6c,
                L"Size of DDC chunks the streaming data is split into (in MiB). A smaller size leads to more requests but can improve streaming performance. Default: 2 MiB"
               );
  atexit(FUN_1436fffde);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143702c0c FUN_143702c0c body=69 status=ok
// SIG undefined FUN_143702c0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143702c0c(void)

{
  _DAT_14cb090a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143702c4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb090a8,1);
  return;
}



// FUNCTION 143702c51 FUN_143702c51 body=69 status=ok
// SIG undefined FUN_143702c51(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143702c51(void)

{
  _DAT_14cb090b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143702c93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb090b8,1);
  return;
}



// FUNCTION 143702c96 FUN_143702c96 body=69 status=ok
// SIG undefined FUN_143702c96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143702c96(void)

{
  _DAT_14cb090c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143702cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb090d0,1);
  return;
}



// FUNCTION 143702cdb FUN_143702cdb body=69 status=ok
// SIG undefined FUN_143702cdb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143702cdb(void)

{
  _DAT_14cb090e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143702d1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb090f0,1);
  return;
}



// FUNCTION 143702d20 FUN_143702d20 body=69 status=ok
// SIG undefined FUN_143702d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143702d20(void)

{
  _DAT_14cb09100 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143702d62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09108,1);
  return;
}



// FUNCTION 143702d65 FUN_143702d65 body=69 status=ok
// SIG undefined FUN_143702d65(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143702d65(void)

{
  _DAT_14cb09110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143702da7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09118,1);
  return;
}



// FUNCTION 143702daa FUN_143702daa body=69 status=ok
// SIG undefined FUN_143702daa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143702daa(void)

{
  _DAT_14cb09128 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143702dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09130,1);
  return;
}



// FUNCTION 143702def FUN_143702def body=69 status=ok
// SIG undefined FUN_143702def(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143702def(void)

{
  _DAT_14cb09140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143702e31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09148,1);
  return;
}



// FUNCTION 143702e34 FUN_143702e34 body=69 status=ok
// SIG undefined FUN_143702e34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143702e34(void)

{
  _DAT_14cb09150 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143702e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09158,1);
  return;
}



// FUNCTION 143702e79 FUN_143702e79 body=69 status=ok
// SIG undefined FUN_143702e79(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143702e79(void)

{
  _DAT_14cb09160 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143702ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09168,1);
  return;
}



// FUNCTION 143702ebe FUN_143702ebe body=69 status=ok
// SIG undefined FUN_143702ebe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143702ebe(void)

{
  _DAT_14cb09170 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143702f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09178,1);
  return;
}



// FUNCTION 143702f03 FUN_143702f03 body=69 status=ok
// SIG undefined FUN_143702f03(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143702f03(void)

{
  _DAT_14cb09180 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143702f45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09188,1);
  return;
}



// FUNCTION 143702f48 FUN_143702f48 body=61 status=ok
// SIG undefined FUN_143702f48(void)

void FUN_143702f48(void)

{
  DAT_14cb09190 = &PTR_FUN_14aabc2f0;
  DAT_14cb091a0 = &PTR_FUN_14aabc320;
  FUN_144725486(&DAT_14cb09190);
  FUN_145ca74a4(&DAT_14cb09190);
  return;
}



// FUNCTION 143702f86 FUN_143702f86 body=2153 status=ok
// SIG undefined FUN_143702f86(void)

void FUN_143702f86(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  uint *puVar14;
  longlong **pplVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined1 auStack_7f8 [32];
  code **local_7d8;
  longlong local_7c8;
  longlong local_7b8 [10];
  undefined4 local_768;
  longlong local_760;
  undefined8 uStack_758;
  longlong local_748;
  undefined8 local_740;
  longlong *local_738;
  longlong local_730;
  undefined1 local_728;
  undefined1 local_727;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  longlong lStack_6f0;
  undefined4 local_6e8;
  longlong local_6e0;
  ulonglong uStack_6d8;
  code *local_6c8 [2];
  longlong *local_6b8;
  longlong local_6a8 [203];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_7f8;
  if (param_2 == (longlong *)0x0) goto LAB_143702fb5;
  local_6f8 = 0;
  lStack_6f0 = 0;
  local_708 = 0;
  uStack_700 = 0;
  local_718 = 0;
  uStack_710 = 0;
  local_6e8 = 0;
  local_6e0 = 0;
  uStack_6d8 = 0;
  uVar5 = (**(code **)(*param_2 + 0x2b8))(param_2);
  local_730 = param_2[3];
  local_738 = param_2;
  local_728 = (**(code **)(*param_2 + 0x2d8))(param_2,0);
  local_727 = (**(code **)(*param_2 + 0x2d8))(param_2,1);
  (**(code **)(*param_2 + 0x2e0))(param_2,local_6c8,0);
  (**(code **)(*param_2 + 0x2e0))(param_2,local_6c8,1);
  uVar6 = (**(code **)(*param_2 + 0x2c0))(param_2);
  local_6f8 = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x74),uVar6);
  lStack_6f0 = param_2[0xf];
  local_6e8 = (undefined4)param_2[0x10];
  FUN_145848738(&local_6e0,uVar5);
  if (0 < (int)uVar5) {
    lVar20 = 8;
    uVar18 = 0;
    do {
      if ((longlong)uVar18 < (longlong)(int)param_2[0x14]) {
        lVar16 = *(longlong *)(param_2[0x13] + uVar18 * 8);
        if ((DAT_14c950c29 == '\x01') && (lVar16 != 0)) {
          FUN_1456cec3c(lVar16);
        }
      }
      else {
        lVar16 = 0;
      }
      *(longlong *)(local_6e0 + -8 + lVar20) = lVar16 + 0xa0;
      *(undefined8 *)(local_6e0 + lVar20) = *(undefined8 *)(lVar16 + 0x1c0);
      uVar18 = uVar18 + 1;
      lVar20 = lVar20 + 0x100;
    } while (uVar5 != uVar18);
  }
  pplVar15 = &local_738;
  plVar13 = local_7b8;
  for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
    *plVar13 = (longlong)*pplVar15;
    pplVar15 = pplVar15 + 1;
    plVar13 = plVar13 + 1;
  }
  local_768 = local_6e8;
  local_760 = local_6e0;
  uStack_758 = uStack_6d8;
  local_6e0 = 0;
  uStack_6d8 = 0;
  local_6c8[0] = (code *)param_2[3];
  local_7c8 = param_1 + -0x10;
  FUN_1400021e4(local_6c8,&local_748);
  lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar20 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_1437031bd;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1437031c2;
      goto LAB_14370321f;
    }
LAB_1437031c2:
    lVar20 = local_7c8;
    FUN_1407779ba(local_6c8,&DAT_14ca85100);
    FUN_143709110(lVar20,local_6c8,local_7b8);
    FUN_140779360(local_6c8);
    FUN_140778010(local_6c8);
  }
  else {
LAB_1437031bd:
    if (iVar7 == 0x10) goto LAB_1437031c2;
LAB_14370321f:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar20 + 0xc60), iVar7 == 2))
      goto LAB_1437031c2;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_1437031c2;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_14370346f;
      while( true ) {
        uVar5 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar5 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar5 | 1;
          __tlregdtor(&LAB_143715770);
        }
        lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar20 + 0x310);
        *(undefined8 *)(lVar20 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_14370346f:
        puVar19 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 0xfU & 0xfffffffffffffff0);
        puVar14 = (uint *)(puVar19 + 0x28);
        uVar5 = puVar11[0x12];
        if (puVar14 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar3 = *puVar11;
          *puVar11 = *puVar11 + uVar5 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar5) != 0xffffffff) break;
          puVar11 = (uint *)*puVar2;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          puVar19 = (undefined8 *)((longlong)puVar11 + 0x67U & 0xfffffffffffffff0);
          puVar14 = (uint *)(puVar19 + 0x28);
          uVar5 = 0;
          if (puVar14 <= puVar11 + 0x4000) {
            uVar5 = 1;
            goto LAB_1437034ef;
          }
        }
      }
      uVar5 = uVar5 + 1;
LAB_1437034ef:
      *(uint **)(puVar11 + 0x10) = puVar14;
      puVar11[0x12] = uVar5;
      iVar7 = 0;
      FUN_1447247dc(puVar19,0);
      *puVar19 = &PTR_FUN_14aabc3a0;
      puVar19[0x16] = local_7c8;
      plVar13 = local_7b8;
      plVar17 = puVar19 + 0x18;
      for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
        *plVar17 = *plVar13;
        plVar13 = plVar13 + 1;
        plVar17 = plVar17 + 1;
      }
      *(undefined4 *)(puVar19 + 0x22) = local_768;
      puVar19[0x23] = local_760;
      local_760 = 0;
      *(undefined4 *)(puVar19 + 0x24) = (undefined4)uStack_758;
      *(undefined4 *)((longlong)puVar19 + 0x124) = uStack_758._4_4_;
      uStack_758 = 0;
      puVar19[0x26] = local_748;
      local_748 = 0;
      *(undefined4 *)(puVar19 + 0x27) = (undefined4)local_740;
      *(undefined4 *)((longlong)puVar19 + 0x13c) = local_740._4_4_;
      local_740 = 0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar5 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
      lVar20 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar20 == 0) {
        uVar4 = 1;
        if ((char)uVar18 != '\x06') {
          uVar4 = uVar18;
        }
        uVar18 = uVar4;
        uVar12 = 0;
      }
      else {
        if ((char)uVar18 == '\x06') {
          uVar18 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar20 + 0x30);
      }
      puVar19[0xf] = uVar12;
      puVar19[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar19 + 0x1c) = iVar7;
      if (puVar19 == (undefined8 *)0x0) {
        local_6c8[0] = (code *)CONCAT71(local_6c8[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
        UNLOCK();
        local_6c8[0] = (code *)CONCAT71(local_6c8[0]._1_7_,1);
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
      local_6c8[0] = (code *)0x0;
      local_6b8 = (longlong *)FUN_14001cc68(0xa0,0x10);
      *local_6b8 = (longlong)&PTR_LAB_14aabc370;
      local_6b8[2] = local_7c8;
      plVar13 = local_7b8;
      plVar17 = local_6b8 + 4;
      for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
        *plVar17 = *plVar13;
        plVar13 = plVar13 + 1;
        plVar17 = plVar17 + 1;
      }
      *(undefined4 *)(local_6b8 + 0xe) = local_768;
      local_6b8[0xf] = local_760;
      local_760 = 0;
      *(undefined4 *)(local_6b8 + 0x10) = (undefined4)uStack_758;
      *(undefined4 *)((longlong)local_6b8 + 0x84) = uStack_758._4_4_;
      uStack_758 = 0;
      local_6b8[0x12] = local_748;
      local_748 = 0;
      *(undefined4 *)(local_6b8 + 0x13) = (undefined4)local_740;
      *(undefined4 *)((longlong)local_6b8 + 0x9c) = local_740._4_4_;
      local_740 = 0;
      if (local_6b8 + 2 != (longlong *)0x0) {
        local_6c8[0] = FUN_14371583e;
      }
      local_7d8 = local_6c8;
      FUN_14005a792(&DAT_14ca9a440,L"SVTAdd",&DAT_14cb09cf0);
      if (local_6c8[0] != (code *)0x0) {
        plVar13 = local_6b8;
        if (local_6b8 == (longlong *)0x0) {
          plVar13 = local_6a8;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
    }
  }
  if (local_748 != 0) {
    FUN_1400020a8();
  }
  FUN_1410fadde(local_760,uStack_758 & 0xffffffff);
  if (local_760 != 0) {
    FUN_1400020a8();
  }
  FUN_1410fadde(local_6e0,uStack_6d8 & 0xffffffff);
  if (local_6e0 != 0) {
    FUN_1400020a8();
  }
LAB_143702fb5:
  if ((local_50 ^ (ulonglong)auStack_7f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437037f0 FUN_1437037f0 body=1214 status=ok
// SIG undefined FUN_1437037f0(void)

void FUN_1437037f0(longlong param_1,longlong param_2)

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
  longlong local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) goto LAB_14370391a;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_143703843;
    if (iVar6 != 1) goto LAB_14370383e;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_143703843;
  }
  else {
LAB_14370383e:
    if (iVar6 == 0x10) goto LAB_143703843;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_143703843:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143703843;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_1437039db;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_143715770);
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
LAB_1437039db:
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
          goto LAB_143703a5b;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_143703a5b:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar15,0);
    *puVar15 = &PTR_FUN_14aabc3e8;
    puVar15[0x15] = param_1 + -0x10;
    puVar15[0x16] = param_2;
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
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
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
    local_48 = &PTR_LAB_14aabc3b0;
    local_68[0] = &LAB_143715b34;
    local_40 = param_1 + -0x10;
    local_38 = param_2;
    FUN_14005a792(&DAT_14ca9a440,L"SVTRemove",&DAT_14cb09cf4);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar13 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar13 = &local_48;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
LAB_14370391a:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143703cc4 FUN_143703cc4 body=1466 status=ok
// SIG undefined FUN_143703cc4(void)

void FUN_143703cc4(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_b9;
  undefined8 local_b8;
  longlong *local_a8;
  longlong local_98 [5];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) goto LAB_143703e70;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143703d53;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143703d58;
      goto LAB_143703d9c;
    }
  }
  else {
LAB_143703d53:
    if (iVar7 != 0x10) {
LAB_143703d9c:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_143703d58;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143703d58;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143703f55;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143715770);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
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
LAB_143703f55:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x1a);
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
            puVar15 = (uint *)(puVar17 + 0x1a);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143703fd5;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143703fd5:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14aabc438;
        puVar17[0x15] = param_1 + -2;
        puVar17[0x16] = param_2;
        *(undefined4 *)(puVar17 + 0x17) = param_3;
        *(undefined4 *)((longlong)puVar17 + 0xbc) = param_4;
        *(undefined4 *)(puVar17 + 0x18) = param_5;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = param_6;
        *(undefined1 *)(puVar17 + 0x19) = param_7;
        uVar5 = (undefined4)local_b8;
        *(undefined4 *)((longlong)puVar17 + 0xc9) = uVar5;
        *(undefined4 *)((longlong)puVar17 + 0xcc) = local_b8._3_4_;
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
          local_b9 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_b9 = 1;
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
        local_b8 = (code *)0x0;
        local_a8 = (longlong *)FUN_14001cc68(0x30,8);
        *local_a8 = (longlong)&PTR_LAB_14aabc400;
        local_a8[1] = (longlong)(param_1 + -2);
        local_a8[2] = param_2;
        *(undefined4 *)(local_a8 + 3) = param_3;
        *(undefined4 *)((longlong)local_a8 + 0x1c) = param_4;
        *(undefined4 *)(local_a8 + 4) = param_5;
        *(undefined4 *)((longlong)local_a8 + 0x24) = param_6;
        *(undefined1 *)(local_a8 + 5) = param_7;
        if (local_a8 + 1 != (longlong *)0x0) {
          local_b8 = FUN_143715d00;
        }
        local_d8 = &local_b8;
        FUN_14005a792(&DAT_14ca9a440,L"SVTRequest",&DAT_14cb09cf8);
        if (local_b8 != (code *)0x0) {
          plVar14 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar14 = local_98;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_143703e70;
    }
  }
LAB_143703d58:
  local_c8 = param_7;
  local_d0 = param_6;
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,param_5);
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4);
LAB_143703e70:
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143704280 FUN_143704280 body=1246 status=ok
// SIG undefined FUN_143704280(void)

void FUN_143704280(void)

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
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_6c8 [32];
  undefined1 **local_6a8;
  undefined1 *local_698 [2];
  undefined ***local_688;
  undefined **local_678;
  code *local_670;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_6c8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1437042be;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1437042c3;
      goto LAB_14370432a;
    }
  }
  else {
LAB_1437042be:
    if (iVar6 != 0x10) {
LAB_14370432a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1437042c3;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1437042c3;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143704491;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143715770);
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
LAB_143704491:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
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
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143704511;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143704511:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aabc460;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_698[0] = (undefined1 *)CONCAT71(local_698[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_698[0] = (undefined1 *)CONCAT71(local_698[0]._1_7_,1);
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
        local_6a8 = local_698;
        local_688 = (undefined ***)0x0;
        local_678 = &PTR_LAB_14a2b3190;
        local_670 = FUN_143715f36;
        local_698[0] = &LAB_142ea45a2;
        FUN_14005a792(&DAT_14ca9a440,L"SVTUpdate",&DAT_14cb09cfc);
        if (local_698[0] != (undefined1 *)0x0) {
          pppuVar13 = local_688;
          if (local_688 == (undefined ***)0x0) {
            pppuVar13 = &local_678;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_1437043cc;
    }
  }
LAB_1437042c3:
  FUN_1407779ba(local_698,&DAT_14ca85100);
  FUN_143704760(&DAT_14cb091a0,local_698,0);
  FUN_143707282(&DAT_14cb091a0,local_698);
  FUN_140779360(local_698);
  FUN_140778010(local_698);
LAB_1437043cc:
  if ((local_20 ^ (ulonglong)auStack_6c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143704760 FUN_143704760 body=11040 status=ok
// SIG undefined FUN_143704760(void)

void FUN_143704760(longlong param_1,undefined8 param_2,byte param_3)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int *piVar7;
  double dVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong *puVar13;
  undefined *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  byte bVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulonglong **ppuVar22;
  undefined **ppuVar23;
  undefined ***pppuVar24;
  ulonglong *puVar25;
  longlong lVar26;
  ulonglong *puVar27;
  void *pvVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  ulonglong *puVar32;
  undefined8 *puVar33;
  int iVar34;
  int iVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong *puVar38;
  uint *puVar39;
  ulonglong *puVar40;
  undefined *puVar41;
  longlong lVar42;
  ushort *puVar43;
  int iVar44;
  longlong *plVar45;
  uint uVar46;
  ulonglong *puVar47;
  ulonglong uVar48;
  longlong lVar49;
  ulonglong *puVar50;
  ushort *puVar51;
  ulonglong **ppuVar52;
  ulonglong *puVar53;
  ushort *puVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  bool bVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  float fVar62;
  undefined1 auVar63 [16];
  undefined1 auStack_4f8 [32];
  longlong *local_4d8;
  longlong *local_4d0;
  ulonglong **local_4c8;
  ulonglong *local_4c0;
  longlong local_4b8;
  ulonglong **local_4b0;
  byte local_4a1;
  ushort *local_4a0;
  uint *local_498;
  longlong *local_490;
  uint *local_488;
  ushort *local_480;
  ulonglong local_478;
  uint local_46c;
  ulonglong local_468;
  ulonglong local_460;
  ulonglong local_458;
  longlong *local_450;
  ulonglong local_448;
  uint *local_440;
  undefined8 local_438;
  int local_430;
  undefined1 local_42c [4];
  ulonglong local_428;
  undefined8 uStack_420;
  ulonglong *local_418;
  int local_410;
  uint local_40c;
  ulonglong *local_408;
  ulonglong *local_400;
  uint *local_3f8;
  ulonglong local_3f0;
  ulonglong **local_3e8;
  longlong local_330;
  undefined8 local_328;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined ***local_f8;
  longlong lStack_f0;
  undefined **local_e8;
  undefined *local_e0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  local_4a1 = param_3;
  local_438 = param_2;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined2 *)(param_1 + 300) = 1;
    puVar16 = (uint *)(param_1 + 0x68);
    uVar19 = *(uint *)(param_1 + 0x80);
    uVar48 = (ulonglong)uVar19;
    local_4b8 = param_1;
    local_488 = puVar16;
    if (uVar19 == 0) {
      puVar43 = (ushort *)&DAT_00000001;
      iVar29 = 0;
      ppuVar52 = (ulonglong **)0x0;
      uVar10 = 0;
    }
    else {
      puVar12 = *(uint **)(param_1 + 0x78);
      if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
        puVar12 = puVar16;
      }
      uVar10 = *puVar12;
      if (uVar10 == 0) {
        iVar29 = uVar19 + 0x1e;
        if (-1 < (int)(uVar19 - 1)) {
          iVar29 = uVar19 - 1;
        }
        ppuVar52 = (ulonglong **)0x0;
        ppuVar22 = (ulonglong **)(ulonglong)(uint)(iVar29 >> 5);
        if (iVar29 >> 5 < 1) {
          ppuVar22 = ppuVar52;
        }
        iVar29 = 0;
        do {
          if (ppuVar22 == ppuVar52) goto LAB_143704892;
          iVar29 = iVar29 + 0x20;
          uVar10 = puVar12[(longlong)((longlong)ppuVar52 + 1)];
          ppuVar52 = (ulonglong **)((longlong)ppuVar52 + 1);
        } while (uVar10 == 0);
      }
      else {
        iVar29 = 0;
        ppuVar52 = (ulonglong **)0x0;
      }
      puVar43 = (ushort *)(ulonglong)(-uVar10 & uVar10);
      uVar11 = (longlong)puVar43 * 2 + 1;
      lVar36 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      uVar10 = (iVar29 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
      if ((int)uVar19 <= (int)uVar10) {
        uVar10 = uVar19;
      }
    }
    uVar11 = (ulonglong)uVar10;
    if (uVar10 == uVar19) {
LAB_143704892:
      uVar56 = (ulonglong)uVar19;
    }
    else {
      uVar10 = 0xffffffff;
      uVar56 = (ulonglong)uVar19;
      local_478 = uVar48;
      do {
        plVar45 = *(longlong **)(*(longlong *)(param_1 + 0x58) + (longlong)(int)uVar11 * 8);
        if (plVar45 != (longlong *)0x0) {
          iVar30 = (int)plVar45[0xb];
          lVar36 = (longlong)iVar30;
          if (lVar36 != 0) {
            local_4a0 = (ushort *)CONCAT44(local_4a0._4_4_,uVar10);
            local_498 = (uint *)CONCAT44(local_498._4_4_,iVar29);
            plVar6 = (longlong *)plVar45[10];
            uVar19 = DAT_14c761b8c;
            if ((int)DAT_14c761b8c < 2) {
              uVar19 = 1;
            }
            iVar20 = 0;
            iVar29 = 0;
            local_4b0 = ppuVar52;
            local_490 = plVar45;
            local_480 = puVar43;
            bVar57 = uVar19 < (uint)(*(int *)(param_1 + 0x13c) - *(int *)(*plVar6 + 0x30));
            do {
              uVar19 = DAT_14c761b8c;
              if ((int)DAT_14c761b8c < 2) {
                uVar19 = 1;
              }
              lVar26 = (longlong)iVar29;
              iVar44 = iVar29;
              lVar31 = lVar26;
              iVar34 = iVar29 + 1;
              if (iVar29 + 1 < iVar30) {
                iVar34 = iVar30;
              }
              do {
                lVar31 = lVar31 + 1;
                iVar35 = iVar34;
                if (lVar36 <= lVar31) break;
                iVar35 = iVar44 + 1;
                iVar44 = iVar35;
              } while (bVar57 == uVar19 < (uint)(*(int *)(param_1 + 0x13c) -
                                                *(int *)(plVar6[lVar31] + 0x30)));
              iVar34 = iVar35 - iVar29;
              if (bVar57 == false) {
                if (iVar20 != iVar29) {
                  memmove(plVar6 + iVar20,plVar6 + lVar26,(longlong)iVar34 << 3);
                }
                iVar20 = iVar20 + iVar34;
              }
              else {
                FUN_145834928(plVar6 + lVar26,iVar34);
              }
              iVar29 = iVar35;
              bVar57 = (bool)(bVar57 ^ 1);
            } while (lVar31 < lVar36);
            *(int *)(local_490 + 0xb) = iVar20;
            uVar56 = (ulonglong)*(uint *)(param_1 + 0x80);
            uVar48 = local_478;
            puVar16 = local_488;
            ppuVar52 = local_4b0;
            puVar43 = local_480;
            iVar29 = (uint)local_498;
            uVar10 = (uint)local_4a0;
          }
        }
        uVar10 = uVar10 & ~(uint)puVar43;
        puVar12 = *(uint **)(param_1 + 0x78);
        if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
          puVar12 = puVar16;
        }
        iVar20 = (int)ppuVar52;
        lVar36 = (longlong)iVar20;
        uVar19 = puVar12[lVar36] & uVar10;
        iVar30 = (int)uVar56;
        if (uVar19 == 0) {
          iVar34 = iVar30 + 0x1e;
          if (-1 < iVar30 + -1) {
            iVar34 = iVar30 + -1;
          }
          iVar34 = iVar34 >> 5;
          iVar29 = iVar29 + 0x20;
          iVar44 = iVar34;
          if (iVar34 < iVar20) {
            iVar44 = iVar20;
          }
          if (iVar20 < iVar34) {
            lVar31 = 0;
            do {
              uVar19 = puVar12[lVar36 + lVar31 + 1];
              if (uVar19 != 0) {
                ppuVar52 = (ulonglong **)(ulonglong)(iVar20 + (int)lVar31 + 1);
                uVar10 = 0xffffffff;
                goto LAB_143704ad8;
              }
              iVar29 = iVar29 + 0x20;
              lVar31 = lVar31 + 1;
            } while (iVar44 - lVar36 != lVar31);
            uVar10 = 0xffffffff;
            lVar36 = (longlong)iVar44;
          }
          ppuVar52 = (ulonglong **)(lVar36 + 1U & 0xffffffff);
          uVar11 = uVar56;
          param_1 = local_4b8;
          puVar16 = local_488;
        }
        else {
LAB_143704ad8:
          puVar43 = (ushort *)(ulonglong)(-uVar19 & uVar19);
          uVar11 = (longlong)puVar43 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          uVar19 = (iVar29 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
          uVar11 = (ulonglong)uVar19;
          if (iVar30 <= (int)uVar19) {
            uVar11 = uVar56;
          }
        }
      } while ((int)uVar11 != (int)uVar48);
    }
    if (DAT_14cb09120 != 0) {
      iVar29 = (int)uVar56;
      if (iVar29 == 0) {
        uVar55 = 1;
        iVar30 = 0;
        uVar11 = 0;
        uVar48 = 0;
      }
      else {
        puVar12 = *(uint **)(param_1 + 0x78);
        if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
          puVar12 = puVar16;
        }
        uVar19 = *puVar12;
        if (uVar19 == 0) {
          iVar30 = iVar29 + 0x1e;
          if (-1 < iVar29 + -1) {
            iVar30 = iVar29 + -1;
          }
          uVar11 = 0;
          uVar48 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar48 = uVar11;
          }
          iVar30 = 0;
          do {
            if (uVar48 == uVar11) goto LAB_143704b36;
            iVar30 = iVar30 + 0x20;
            uVar19 = puVar12[uVar11 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar19 == 0);
        }
        else {
          iVar30 = 0;
          uVar11 = 0;
        }
        uVar55 = (ulonglong)(-uVar19 & uVar19);
        uVar48 = uVar55 * 2 + 1;
        lVar36 = 0x3f;
        if (uVar48 != 0) {
          for (; uVar48 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        uVar19 = (iVar30 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
        uVar48 = (ulonglong)uVar19;
        if (iVar29 <= (int)uVar19) {
          uVar48 = uVar56;
        }
      }
      if ((int)uVar48 != iVar29) {
        local_490 = (longlong *)(param_1 + 0x1f0);
        uVar19 = 0xffffffff;
        uVar37 = uVar56;
        local_468 = uVar56;
        do {
          local_498 = *(uint **)(param_1 + 0x58);
          local_4b0 = (ulonglong **)(longlong)(int)uVar48;
          if ((*(longlong *)(local_498 + (longlong)local_4b0 * 2) != 0) &&
             (local_4a0 = (ushort *)
                          (longlong)
                          *(int *)(*(longlong *)(local_498 + (longlong)local_4b0 * 2) + 0x48),
             0 < (longlong)local_4a0)) {
            local_478 = CONCAT44(local_478._4_4_,iVar30);
            puVar43 = (ushort *)0x0;
            local_46c = uVar19;
            local_460 = uVar11;
            local_458 = uVar55;
            do {
              plVar45 = (longlong *)
                        (*(longlong *)(*(longlong *)(local_498 + (longlong)local_4b0 * 2) + 0x40) +
                        (longlong)puVar43 * 0x100);
              puVar16 = (uint *)(plVar45 + 0x11);
              bVar57 = *(int *)(*plVar45 + 0x98) != 0;
              uVar48 = (ulonglong)(uint)(1 << bVar57);
              uVar10 = -1 << bVar57;
              puVar25 = (ulonglong *)
                        (*(longlong *)(*(longlong *)(local_498 + (longlong)local_4b0 * 2) + 0x40) +
                        (longlong)puVar43 * 0x100);
              uVar19 = *(uint *)(plVar45 + 0x14);
              iVar29 = 0;
              local_480 = puVar43;
              if (uVar19 == bVar57) {
                uVar11 = 0;
                uVar46 = (uint)bVar57;
LAB_143704f4c:
                if ((int)uVar46 < (int)uVar19) {
                  puVar12 = (uint *)puVar25[0x13];
                  do {
                    if (puVar12 == (uint *)0x0) {
                      puVar12 = puVar16;
                    }
                    uVar19 = uVar46 + 0x1f;
                    if (-1 < (int)uVar46) {
                      uVar19 = uVar46;
                    }
                    bVar18 = (byte)uVar46 & 0x1f;
                    uVar21 = -2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18;
                    puVar12[(int)uVar19 >> 5] = puVar12[(int)uVar19 >> 5] & uVar21;
                    puVar13 = (ulonglong *)puVar25[0xf];
                    if ((ulonglong *)puVar25[0xf] == (ulonglong *)0x0) {
                      puVar13 = puVar25 + 0xd;
                    }
                    puVar12 = (uint *)((longlong)puVar13 + (longlong)((int)uVar19 >> 5) * 4);
                    *puVar12 = *puVar12 & uVar21;
                    FUN_147d4c368(*(longlong *)(local_498 + (longlong)local_4b0 * 2) + 0xb0,
                                  *(undefined4 *)(puVar25[3] + (longlong)(int)uVar46 * 4));
                    *(undefined4 *)(puVar25[3] + (longlong)(int)uVar46 * 4) = 0;
                    uVar10 = ~(uint)uVar48 & uVar10;
                    puVar12 = (uint *)puVar25[0x13];
                    puVar39 = puVar12;
                    if (puVar12 == (uint *)0x0) {
                      puVar39 = puVar16;
                    }
                    iVar30 = (int)puVar25[0x14];
                    iVar20 = (int)uVar11;
                    lVar36 = (longlong)iVar20;
                    uVar19 = puVar39[lVar36] & uVar10;
                    param_1 = local_4b8;
                    if (uVar19 == 0) {
                      iVar34 = iVar30 + 0x1e;
                      if (-1 < iVar30 + -1) {
                        iVar34 = iVar30 + -1;
                      }
                      iVar34 = iVar34 >> 5;
                      iVar44 = iVar34;
                      if (iVar34 < iVar20) {
                        iVar44 = iVar20;
                      }
                      if (iVar34 <= iVar20) break;
                      lVar31 = 0;
                      while( true ) {
                        iVar29 = iVar29 + 0x20;
                        uVar19 = puVar39[lVar36 + lVar31 + 1];
                        if (uVar19 != 0) break;
                        lVar31 = lVar31 + 1;
                        if (iVar44 - lVar36 == lVar31) goto LAB_14370507f;
                      }
                      uVar11 = (ulonglong)(iVar20 + (int)lVar31 + 1);
                      uVar10 = 0xffffffff;
                    }
                    uVar48 = (ulonglong)(-uVar19 & uVar19);
                    uVar56 = uVar48 * 2 + 1;
                    lVar36 = 0x3f;
                    if (uVar56 != 0) {
                      for (; uVar56 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                      }
                    }
                    uVar46 = (iVar29 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
                  } while ((int)uVar46 < iVar30);
                }
              }
              else {
                puVar12 = (uint *)puVar25[0x13];
                if ((uint *)puVar25[0x13] == (uint *)0x0) {
                  puVar12 = puVar16;
                }
                uVar46 = *puVar12 & uVar10;
                if (uVar46 != 0) {
                  iVar29 = 0;
                  uVar11 = 0;
LAB_143704f27:
                  uVar48 = (ulonglong)(-uVar46 & uVar46);
                  uVar56 = uVar48 * 2 + 1;
                  lVar36 = 0x3f;
                  if (uVar56 != 0) {
                    for (; uVar56 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                    }
                  }
                  uVar46 = (iVar29 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
                  if ((int)uVar19 <= (int)uVar46) {
                    uVar46 = uVar19;
                  }
                  goto LAB_143704f4c;
                }
                iVar29 = uVar19 + 0x1e;
                if (-1 < (int)(uVar19 - 1)) {
                  iVar29 = uVar19 - 1;
                }
                uVar48 = (ulonglong)(uint)(iVar29 >> 5);
                if (iVar29 >> 5 < 1) {
                  uVar48 = 0;
                }
                if (0x20 < (int)uVar19) {
                  iVar29 = 0x20;
                  uVar11 = 1;
                  do {
                    uVar46 = puVar12[uVar11];
                    if (uVar46 != 0) {
                      uVar10 = 0xffffffff;
                      goto LAB_143704f27;
                    }
                    iVar29 = iVar29 + 0x20;
                    bVar57 = uVar11 != uVar48;
                    uVar11 = uVar11 + 1;
                  } while (bVar57);
                }
              }
LAB_14370507f:
              FUN_1473e2ed2(puVar25 + 0x15);
              local_408 = puVar25;
              FUN_141640c3c(local_490,&local_108,&local_408);
              puVar43 = (ushort *)((longlong)local_480 + 1);
            } while (puVar43 != local_4a0);
            uVar56 = (ulonglong)*(uint *)(param_1 + 0x80);
            uVar37 = local_468;
            puVar16 = local_488;
            uVar11 = local_460;
            uVar55 = local_458;
            iVar30 = (int)local_478;
            uVar19 = local_46c;
          }
          uVar19 = uVar19 & ~(uint)uVar55;
          puVar12 = *(uint **)(param_1 + 0x78);
          if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
            puVar12 = puVar16;
          }
          iVar20 = (int)uVar11;
          lVar36 = (longlong)iVar20;
          uVar10 = puVar12[lVar36] & uVar19;
          iVar29 = (int)uVar56;
          if (uVar10 == 0) {
            iVar34 = iVar29 + 0x1e;
            if (-1 < iVar29 + -1) {
              iVar34 = iVar29 + -1;
            }
            iVar34 = iVar34 >> 5;
            iVar30 = iVar30 + 0x20;
            iVar44 = iVar34;
            if (iVar34 < iVar20) {
              iVar44 = iVar20;
            }
            if (iVar20 < iVar34) {
              lVar31 = 0;
              do {
                uVar10 = puVar12[lVar36 + lVar31 + 1];
                if (uVar10 != 0) {
                  uVar11 = (ulonglong)(iVar20 + (int)lVar31 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_143705174;
                }
                iVar30 = iVar30 + 0x20;
                lVar31 = lVar31 + 1;
              } while (iVar44 - lVar36 != lVar31);
              uVar19 = 0xffffffff;
              lVar36 = (longlong)iVar44;
            }
            uVar11 = lVar36 + 1U & 0xffffffff;
            uVar48 = uVar56;
            param_1 = local_4b8;
            puVar16 = local_488;
          }
          else {
LAB_143705174:
            uVar55 = (ulonglong)(-uVar10 & uVar10);
            uVar48 = uVar55 * 2 + 1;
            lVar36 = 0x3f;
            if (uVar48 != 0) {
              for (; uVar48 >> lVar36 == 0; lVar36 = lVar36 + -1) {
              }
            }
            uVar10 = (iVar30 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
            uVar48 = (ulonglong)uVar10;
            if (iVar29 <= (int)uVar10) {
              uVar48 = uVar56;
            }
          }
        } while ((int)uVar48 != (int)uVar37);
      }
LAB_143704b36:
      if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
        lVar36 = *(longlong *)(param_1 + 0xe0);
        lVar31 = (longlong)*(int *)(param_1 + 0xe8) * 0x28;
        do {
          FUN_1411cbc82(lVar36);
          lVar36 = lVar36 + 0x28;
          lVar31 = lVar31 + -0x28;
        } while (lVar31 != 0);
      }
      *(undefined4 *)(param_1 + 0x134) = 0;
      DAT_14cb09120 = 0;
    }
    if (DAT_14cb09138 != 0) {
      DAT_14cb09138 = 0;
    }
    *(undefined8 *)(param_1 + 0x148) = 0;
    local_498 = (uint *)(param_1 + 0x160);
    iVar29 = *(int *)(param_1 + 0x178);
    iVar30 = iVar29;
    if (iVar29 == 0) {
      uVar11 = 1;
      iVar34 = 0;
      uVar48 = 0;
      iVar20 = 0;
    }
    else {
      puVar16 = *(uint **)(param_1 + 0x170);
      if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
        puVar16 = local_498;
      }
      uVar19 = *puVar16;
      if (uVar19 == 0) {
        iVar20 = iVar29 + 0x1e;
        if (-1 < iVar29 + -1) {
          iVar20 = iVar29 + -1;
        }
        uVar48 = 0;
        uVar11 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar11 = uVar48;
        }
        iVar34 = 0;
        do {
          if (uVar11 == uVar48) goto LAB_143704c2f;
          iVar34 = iVar34 + 0x20;
          uVar19 = puVar16[uVar48 + 1];
          uVar48 = uVar48 + 1;
        } while (uVar19 == 0);
      }
      else {
        iVar34 = 0;
        uVar48 = 0;
      }
      uVar11 = (ulonglong)(-uVar19 & uVar19);
      uVar56 = uVar11 * 2 + 1;
      lVar36 = 0x3f;
      if (uVar56 != 0) {
        for (; uVar56 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      iVar20 = (iVar34 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
      if (iVar29 <= iVar20) {
        iVar20 = iVar29;
      }
    }
    if (iVar20 != iVar29) {
      uVar19 = 0xffffffff;
      do {
        lVar36 = *(longlong *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar20 * 0x10);
        lVar31 = FUN_147d4bc0a(lVar36);
        *(longlong *)(param_1 + 0x148) = *(longlong *)(param_1 + 0x148) + lVar31;
        *(undefined4 *)(lVar36 + 0x4c) = 0;
        uVar19 = ~(uint)uVar11 & uVar19;
        puVar16 = *(uint **)(param_1 + 0x170);
        if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
          puVar16 = local_498;
        }
        iVar30 = *(int *)(param_1 + 0x178);
        iVar20 = (int)uVar48;
        lVar36 = (longlong)iVar20;
        uVar10 = puVar16[lVar36] & uVar19;
        if (uVar10 == 0) {
          iVar44 = iVar30 + 0x1e;
          if (-1 < iVar30 + -1) {
            iVar44 = iVar30 + -1;
          }
          iVar44 = iVar44 >> 5;
          iVar34 = iVar34 + 0x20;
          iVar35 = iVar44;
          if (iVar44 < iVar20) {
            iVar35 = iVar20;
          }
          if (iVar20 < iVar44) {
            lVar31 = 0;
            do {
              uVar10 = puVar16[lVar36 + lVar31 + 1];
              if (uVar10 != 0) {
                uVar48 = (ulonglong)(iVar20 + (int)lVar31 + 1);
                uVar19 = 0xffffffff;
                goto LAB_143704d92;
              }
              iVar34 = iVar34 + 0x20;
              lVar31 = lVar31 + 1;
            } while (iVar35 - lVar36 != lVar31);
            uVar19 = 0xffffffff;
            lVar36 = (longlong)iVar35;
          }
          uVar48 = lVar36 + 1U & 0xffffffff;
          param_1 = local_4b8;
          iVar20 = iVar30;
        }
        else {
LAB_143704d92:
          uVar11 = (ulonglong)(-uVar10 & uVar10);
          uVar56 = uVar11 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar56 != 0) {
            for (; uVar56 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          iVar20 = (iVar34 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
          if (iVar30 <= iVar20) {
            iVar20 = iVar30;
          }
        }
      } while (iVar20 != iVar29);
    }
LAB_143704c2f:
    uVar48 = 1;
    if (1 < (int)DAT_14c761b88) {
      uVar48 = (ulonglong)DAT_14c761b88;
    }
    if (0 < (int)DAT_14c761b88) {
      lVar36 = *(longlong *)(param_1 + 0x148);
      if ((longlong)(uVar48 * 0x100000) < lVar36) {
        if (iVar30 == 0) {
          uVar11 = 1;
          uVar56 = 0;
          iVar20 = 0;
          iVar29 = 0;
        }
        else {
          puVar16 = *(uint **)(param_1 + 0x170);
          if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
            puVar16 = local_498;
          }
          uVar19 = *puVar16;
          if (uVar19 == 0) {
            iVar29 = iVar30 + 0x1e;
            if (-1 < iVar30 + -1) {
              iVar29 = iVar30 + -1;
            }
            uVar56 = 0;
            uVar11 = (ulonglong)(uint)(iVar29 >> 5);
            if (iVar29 >> 5 < 1) {
              uVar11 = uVar56;
            }
            iVar20 = 0;
            do {
              if (uVar11 == uVar56) goto LAB_1437051d2;
              iVar20 = iVar20 + 0x20;
              uVar19 = puVar16[uVar56 + 1];
              uVar56 = uVar56 + 1;
            } while (uVar19 == 0);
          }
          else {
            uVar56 = 0;
            iVar20 = 0;
          }
          uVar11 = (ulonglong)(-uVar19 & uVar19);
          uVar55 = uVar11 * 2 + 1;
          lVar31 = 0x3f;
          if (uVar55 != 0) {
            for (; uVar55 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          iVar29 = (iVar20 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
          if (iVar30 <= iVar29) {
            iVar29 = iVar30;
          }
        }
        if (iVar29 != iVar30) {
          uVar19 = 0xffffffff;
          do {
            uVar17 = *(undefined8 *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar29 * 0x10);
            lVar31 = FUN_147d4bc0a(uVar17);
            dVar8 = (double)lVar31 * ((double)(uVar48 * 0x100000) / (double)lVar36);
            FUN_147d4bb16(uVar17,-((longlong)ROUND(-0.5 - (dVar8 + dVar8)) >> 1));
            uVar19 = ~(uint)uVar11 & uVar19;
            puVar16 = *(uint **)(param_1 + 0x170);
            if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
              puVar16 = local_498;
            }
            iVar34 = *(int *)(param_1 + 0x178);
            iVar29 = (int)uVar56;
            lVar31 = (longlong)iVar29;
            uVar10 = puVar16[lVar31] & uVar19;
            if (uVar10 == 0) {
              iVar44 = iVar34 + 0x1e;
              if (-1 < iVar34 + -1) {
                iVar44 = iVar34 + -1;
              }
              iVar44 = iVar44 >> 5;
              iVar20 = iVar20 + 0x20;
              iVar35 = iVar44;
              if (iVar44 < iVar29) {
                iVar35 = iVar29;
              }
              if (iVar29 < iVar44) {
                lVar26 = 0;
                do {
                  uVar10 = puVar16[lVar31 + lVar26 + 1];
                  if (uVar10 != 0) {
                    uVar56 = (ulonglong)(iVar29 + (int)lVar26 + 1);
                    uVar19 = 0xffffffff;
                    goto LAB_143706e03;
                  }
                  iVar20 = iVar20 + 0x20;
                  lVar26 = lVar26 + 1;
                } while (iVar35 - lVar31 != lVar26);
                uVar19 = 0xffffffff;
                lVar31 = (longlong)iVar35;
              }
              uVar56 = lVar31 + 1U & 0xffffffff;
              param_1 = local_4b8;
              iVar29 = iVar34;
            }
            else {
LAB_143706e03:
              uVar11 = (ulonglong)(-uVar10 & uVar10);
              uVar55 = uVar11 * 2 + 1;
              lVar31 = 0x3f;
              if (uVar55 != 0) {
                for (; uVar55 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                }
              }
              iVar29 = (iVar20 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
              if (iVar34 <= iVar29) {
                iVar29 = iVar34;
              }
            }
          } while (iVar29 != iVar30);
        }
      }
    }
LAB_1437051d2:
    if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
      FUN_147d59002();
      *(undefined4 *)(param_1 + 0x158) = 0;
      if (*(int *)(param_1 + 0x15c) < 0) {
        FUN_14474875a();
      }
      *(undefined8 *)(local_4b8 + 0x180) = 0xffffffff;
      *(undefined4 *)(local_4b8 + 0x178) = 0;
      param_1 = local_4b8;
    }
    local_450 = (longlong *)(param_1 + 0x240);
    *(undefined4 *)(param_1 + 0x248) = 0;
    if (*(int *)(param_1 + 0x24c) < 0) {
      FUN_147d59146();
    }
    local_468 = param_1 - 0x10;
    puVar16 = (uint *)(param_1 + 0xa0);
    uVar19 = *(uint *)(param_1 + 0xb8);
    uVar48 = (ulonglong)uVar19;
    if (uVar19 == 0) {
      uVar56 = 1;
      uVar11 = 0;
      iVar29 = 0;
      uVar10 = 0;
    }
    else {
      puVar12 = *(uint **)(param_1 + 0xb0);
      if (*(uint **)(param_1 + 0xb0) == (uint *)0x0) {
        puVar12 = puVar16;
      }
      uVar10 = *puVar12;
      if (uVar10 == 0) {
        iVar29 = uVar19 + 0x1e;
        if (-1 < (int)(uVar19 - 1)) {
          iVar29 = uVar19 - 1;
        }
        uVar11 = 0;
        uVar56 = (ulonglong)(uint)(iVar29 >> 5);
        if (iVar29 >> 5 < 1) {
          uVar56 = uVar11;
        }
        iVar29 = 0;
        do {
          if (uVar56 == uVar11) goto LAB_1437052ae;
          iVar29 = iVar29 + 0x20;
          uVar10 = puVar12[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar11 = 0;
        iVar29 = 0;
      }
      uVar56 = (ulonglong)(-uVar10 & uVar10);
      uVar55 = uVar56 * 2 + 1;
      lVar36 = 0x3f;
      if (uVar55 != 0) {
        for (; uVar55 >> lVar36 == 0; lVar36 = lVar36 + -1) {
        }
      }
      uVar10 = (iVar29 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
      if ((int)uVar19 <= (int)uVar10) {
        uVar10 = uVar19;
      }
    }
    if (uVar10 != uVar19) {
      uVar46 = 0xffffffff;
      local_448 = uVar48;
      local_440 = puVar16;
      do {
        uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x90) + (longlong)(int)uVar10 * 0x30);
        if ((int)(uint)uVar4 < *(int *)(param_1 + 0x80)) {
          puVar12 = *(uint **)(param_1 + 0x78);
          if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
            puVar12 = local_488;
          }
          if (((puVar12[uVar4 >> 5] >> (uVar4 & 0x1f) & 1) != 0) &&
             (puVar43 = *(ushort **)(*(longlong *)(param_1 + 0x58) + (ulonglong)(uint)uVar4 * 8),
             puVar43 != (ushort *)0x0)) {
            ppuVar52 = (ulonglong **)(*(longlong *)(param_1 + 0x90) + (longlong)(int)uVar10 * 0x30);
            if ((int)(uint)*(ushort *)((longlong)ppuVar52 + 2) < *(int *)(puVar43 + 0x24)) {
              uVar4 = *(ushort *)(ppuVar52 + 2);
              if (uVar4 == 0) {
                uVar19 = 0x20;
              }
              else {
                uVar19 = 0;
                if (uVar4 != 0) {
                  for (; (uVar4 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
                  }
                }
              }
              local_478 = CONCAT44(local_478._4_4_,iVar29);
              lVar36 = *(longlong *)(puVar43 + 0x20);
              lVar31 = (ulonglong)*(ushort *)((longlong)ppuVar52 + 2) * 0x100;
              iVar29 = *(int *)(lVar36 + 0x10 + lVar31);
              fVar60 = (float)iVar29 + -1.0;
              fVar58 = 0.0;
              if (ppuVar52[1] != (ulonglong *)0x0) {
                fVar58 = *(float *)((longlong)ppuVar52[1] + 0x4c);
              }
              if (fVar60 <= fVar58) {
                fVar58 = fVar60;
              }
              lVar26 = lVar36 + lVar31;
              lVar36 = *(longlong *)(lVar36 + lVar31);
              fVar60 = *(float *)((longlong)ppuVar52 + 0x14);
              if (1.0 <= fVar60) {
                fVar60 = 1.0;
              }
              if (fVar60 <= 0.0) {
                fVar60 = 0.0;
              }
              fVar60 = (1.0 - fVar60) + (float)(int)uVar19;
              if (fVar58 <= fVar60) {
                fVar58 = fVar60;
              }
              local_490 = (longlong *)(ulonglong)*(uint *)(lVar26 + 0x20);
              local_f8 = (undefined ***)0x0;
              lStack_f0 = 0;
              iVar30 = *(int *)(lVar26 + 0xa0);
              uVar10 = iVar30 + 0x1fU & 0xffffffe0;
              local_4b0 = ppuVar52;
              local_480 = puVar43;
              local_460 = uVar11;
              local_458 = uVar56;
              if (0 < (int)uVar10) {
                if (uVar10 < 0x81) {
                  uVar10 = 0x80;
                }
                lStack_f0 = (ulonglong)uVar10 << 0x20;
                FUN_1446efbd8(&local_108);
                iVar30 = *(int *)(lVar26 + 0xa0);
              }
              lStack_f0 = CONCAT44(lStack_f0._4_4_,iVar30);
              local_46c = uVar46;
              if (iVar30 != 0) {
                pvVar28 = *(void **)(lVar26 + 0x98);
                if (*(void **)(lVar26 + 0x98) == (void *)0x0) {
                  pvVar28 = (void *)(lVar26 + 0x88);
                }
                pppuVar24 = local_f8;
                if (local_f8 == (undefined ***)0x0) {
                  pppuVar24 = (undefined ***)&local_108;
                }
                memcpy(pppuVar24,pvVar28,(ulonglong)(iVar30 + 0x1fU >> 3 & 0xfffffffc));
              }
              puVar25 = &local_428;
              local_418 = (ulonglong *)0x0;
              local_40c = 0x80;
              local_410 = (int)local_490;
              uVar10 = (int)local_490 + 0x1f;
              uVar48 = (ulonglong)uVar10;
              if (0x1f < uVar10) {
                if (uVar10 < 0xa0) {
LAB_143706361:
                  uVar48 = (ulonglong)(uVar10 >> 3 & 0xfffffffc);
                  uVar11 = uVar48;
                }
                else {
                  FUN_1446efa72(&local_418,0,uVar10 >> 5,4);
                  local_40c = uVar10 & 0xffffffe0;
                  puVar25 = local_418;
                  if (local_418 == (ulonglong *)0x0) {
                    puVar25 = &local_428;
                  }
                  if (uVar10 < 0x120) goto LAB_143706361;
                  uVar11 = (ulonglong)((uVar10 >> 5) << 2);
                }
                memset(puVar25,0,uVar11);
                iVar30 = local_410 + 0x1f;
                if (-1 < local_410) {
                  iVar30 = local_410;
                }
                if (local_410 % 0x20 != 0) {
                  puVar25 = local_418;
                  if (local_418 == (ulonglong *)0x0) {
                    puVar25 = &local_428;
                  }
                  bVar18 = -(char)(local_410 % 0x20);
                  *(uint *)((longlong)puVar25 + (longlong)(iVar30 >> 5) * 4) =
                       (uint)(*(int *)((longlong)puVar25 + (longlong)(iVar30 >> 5) * 4) <<
                             (bVar18 & 0x1f)) >> (bVar18 & 0x1f);
                }
              }
              uVar46 = iVar29 - 2;
              uVar10 = 0x3fffff;
              if (DAT_14c761b84 < 0x3fffff) {
                uVar10 = DAT_14c761b84;
              }
              local_42c = (undefined1  [4])(uVar10 << 10);
              uVar10 = 0xffffffff;
              if ((int)DAT_14c761b84 < 1) {
                local_42c = (undefined1  [4])0xffffffff;
              }
              local_408 = &local_428;
              local_400 = (ulonglong *)(lVar36 + 0x78);
              local_3f8 = (uint *)local_42c;
              local_3f0 = local_468;
              local_3e8 = local_4b0;
              if ((int)uVar19 <= (int)uVar46) {
                auVar63 = roundss(ZEXT816(0),ZEXT416((uint)fVar60),9);
                local_480 = local_480 + 0x58;
                puVar51 = (ushort *)(ulonglong)uVar46;
                puVar43 = (ushort *)(longlong)((int)ROUND(fVar58 + fVar58 + -0.5) >> 1);
                puVar54 = (ushort *)(ulonglong)uVar19;
                ppuVar52 = local_4b0;
                local_4a0 = puVar43;
                fVar62 = fVar60;
                if (fVar60 <= fVar58) {
                  fVar62 = fVar58;
                }
                do {
                  if ((*(ushort *)(ppuVar52 + 2) >> ((uint)puVar51 & 0x1f) & 1) != 0) {
                    bVar18 = *(byte *)((longlong)ppuVar52 + ((ulonglong)puVar51 & 0xffffffff) + 0x18
                                      );
                    uVar48 = CONCAT71((int7)(uVar48 >> 8),bVar18);
                    if (((longlong)puVar43 <= (longlong)puVar51) || (bVar18 == 0xff)) {
                      local_498 = (uint *)CONCAT44(local_498._4_4_,(uint)bVar18);
                      if (uVar10 != bVar18) {
                        FUN_14370b8ac(&local_408,uVar48);
                        FUN_1447c6044(&local_428,0,local_490,0);
                        ppuVar52 = local_4b0;
                        puVar43 = local_4a0;
                      }
                      uVar19 = *(uint *)(*(longlong *)(lVar36 + 0xd8) + 4 + (longlong)puVar51 * 8);
                      uVar10 = uVar19;
                      if (puVar51 == puVar54) {
                        fVar59 = (float)uVar19 * ((auVar63._0_4_ - fVar60) + 1.0);
                        uVar10 = -((int)ROUND(-0.5 - (fVar59 + fVar59)) >> 1);
                      }
                      if ((puVar51 == puVar43) && (bVar18 != 0xff)) {
                        fVar59 = fVar62;
                        if (puVar51 != puVar54) {
                          fVar59 = fVar58;
                        }
                        auVar61 = roundss(ZEXT816(0),ZEXT416((uint)fVar59),9);
                        fVar59 = (float)uVar19 * ((auVar61._0_4_ - fVar59) + 1.0);
                        uVar10 = -((int)ROUND(-0.5 - (fVar59 + fVar59)) >> 1);
                      }
                      uVar19 = *(uint *)(*(longlong *)(lVar36 + 0xd8) + (longlong)puVar51 * 8);
                      uVar48 = (ulonglong)uVar19;
                      if (uVar19 < uVar19 + uVar10) {
                        do {
                          uVar19 = *(uint *)(*(longlong *)(lVar36 + 0xf8) +
                                            (longlong)(int)uVar48 * 4);
                          uVar46 = 1 << ((byte)uVar19 & 0x1f);
                          pppuVar24 = local_f8;
                          if (local_f8 == (undefined ***)0x0) {
                            pppuVar24 = (undefined ***)&local_108;
                          }
                          uVar21 = uVar19 + 0x1f;
                          if (-1 < (longlong)(int)uVar19) {
                            uVar21 = uVar19;
                          }
                          lVar31 = (longlong)((int)uVar21 >> 5);
                          uVar21 = *(uint *)((longlong)pppuVar24 + lVar31 * 4);
                          if ((uVar21 >> (uVar19 & 0x1f) & 1) == 0) {
                            *(uint *)((longlong)pppuVar24 + lVar31 * 4) = uVar21 | uVar46;
                            puVar25 = local_418;
                            if (local_418 == (ulonglong *)0x0) {
                              puVar25 = &local_428;
                            }
                            puVar16 = (uint *)((longlong)puVar25 + lVar31 * 4);
                            *puVar16 = *puVar16 | uVar46;
                          }
                          pvVar28 = *(void **)(lVar26 + 0x98);
                          if (*(void **)(lVar26 + 0x98) == (void *)0x0) {
                            pvVar28 = (void *)(lVar26 + 0x88);
                          }
                          if ((*(uint *)((longlong)pvVar28 + lVar31 * 4) & uVar46) != 0) {
                            FUN_147d4cb8a(local_480,*(undefined4 *)(param_1 + 0x13c),
                                          *(undefined4 *)
                                           (*(longlong *)(lVar26 + 0x18) + (longlong)(int)uVar19 * 4
                                           ),*(int *)(lVar26 + 0x80) - uVar19);
                          }
                          uVar48 = (ulonglong)((int)uVar48 + 1);
                          uVar10 = uVar10 - 1;
                        } while (uVar10 != 0);
                        ppuVar52 = local_4b0;
                        puVar43 = local_4a0;
                        uVar10 = (uint)local_498;
                      }
                      else {
                        uVar10 = (uint)local_498;
                      }
                    }
                  }
                  bVar57 = (longlong)puVar54 < (longlong)puVar51;
                  puVar51 = (ushort *)((longlong)puVar51 + -1);
                } while (bVar57);
              }
              FUN_14370b8ac(&local_408);
              if (local_418 != (ulonglong *)0x0) {
                FUN_1400020a8();
              }
              puVar16 = local_440;
              uVar48 = local_448;
              uVar56 = local_458;
              uVar11 = local_460;
              uVar46 = local_46c;
              iVar29 = (int)local_478;
              if (local_f8 != (undefined ***)0x0) {
                FUN_1400020a8();
              }
              uVar19 = *(uint *)(param_1 + 0xb8);
            }
          }
        }
        uVar46 = uVar46 & ~(uint)uVar56;
        puVar12 = *(uint **)(param_1 + 0xb0);
        if (*(uint **)(param_1 + 0xb0) == (uint *)0x0) {
          puVar12 = puVar16;
        }
        iVar30 = (int)uVar11;
        lVar36 = (longlong)iVar30;
        uVar10 = puVar12[lVar36] & uVar46;
        if (uVar10 == 0) {
          iVar20 = uVar19 + 0x1e;
          if (-1 < (int)(uVar19 - 1)) {
            iVar20 = uVar19 - 1;
          }
          iVar20 = iVar20 >> 5;
          iVar29 = iVar29 + 0x20;
          iVar34 = iVar20;
          if (iVar20 < iVar30) {
            iVar34 = iVar30;
          }
          if (iVar30 < iVar20) {
            lVar31 = 0;
            do {
              uVar10 = puVar12[lVar36 + lVar31 + 1];
              if (uVar10 != 0) {
                uVar11 = (ulonglong)(iVar30 + (int)lVar31 + 1);
                uVar46 = 0xffffffff;
                goto LAB_143706734;
              }
              iVar29 = iVar29 + 0x20;
              lVar31 = lVar31 + 1;
            } while (iVar34 - lVar36 != lVar31);
            uVar46 = 0xffffffff;
            lVar36 = (longlong)iVar34;
          }
          uVar11 = lVar36 + 1U & 0xffffffff;
          param_1 = local_4b8;
          puVar16 = local_440;
          uVar48 = local_448;
          uVar10 = uVar19;
        }
        else {
LAB_143706734:
          uVar56 = (ulonglong)(-uVar10 & uVar10);
          uVar55 = uVar56 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar55 != 0) {
            for (; uVar55 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          uVar10 = (iVar29 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
          if ((int)uVar19 <= (int)uVar10) {
            uVar10 = uVar19;
          }
        }
      } while (uVar10 != (uint)uVar48);
    }
LAB_1437052ae:
    if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
      FUN_1437162e8(param_1 + 0x90);
      *(undefined4 *)(param_1 + 0x98) = 0;
      if (*(int *)(param_1 + 0x9c) < 0) {
        FUN_14494313c(param_1 + 0x90);
      }
      *(undefined8 *)(local_4b8 + 0xc0) = 0xffffffff;
      *(undefined4 *)(local_4b8 + 0xb8) = 0;
      param_1 = local_4b8;
    }
    iVar29 = *(int *)(param_1 + 0x248);
    if (1 < (longlong)iVar29) {
      puVar25 = (ulonglong *)*local_450;
      memset(&local_3f8,0,0x2f0);
      param_1 = local_4b8;
      local_400 = puVar25 + (longlong)iVar29 * 2 + -2;
      local_408 = puVar25;
      fVar58 = logf((float)iVar29);
      local_3f8 = (uint *)CONCAT44(local_3f8._4_4_,(int)(longlong)(fVar58 + fVar58));
      ppuVar52 = &local_408;
      do {
        puVar13 = *ppuVar52;
        puVar38 = ppuVar52[1];
        iVar29 = *(int *)(ppuVar52 + 2);
        iVar30 = (int)((ulonglong)((longlong)puVar38 - (longlong)puVar13) >> 4);
        uVar48 = (ulonglong)(iVar30 + 1);
        puVar32 = puVar13;
        puVar25 = puVar38;
        if (iVar29 != 0) {
LAB_143705358:
          if (8 < (int)(uint)uVar48) {
            uVar55 = (ulonglong)((uint)uVar48 >> 1);
            uVar48 = puVar13[uVar55 * 2];
            uVar11 = (puVar13 + uVar55 * 2)[1];
            uVar56 = puVar13[1];
            puVar13[uVar55 * 2] = *puVar13;
            (puVar13 + uVar55 * 2)[1] = uVar56;
            *puVar13 = uVar48;
            puVar13[1] = uVar11;
            puVar47 = puVar25 + 2;
            puVar27 = puVar13;
            do {
              puVar9 = puVar27 + 2;
              puVar40 = puVar27 + 2;
              do {
                puVar53 = puVar40;
                puVar27 = puVar9;
                if (puVar25 < puVar27) break;
                bVar57 = *(byte *)((longlong)puVar27 + 0xc) < *(byte *)((longlong)puVar13 + 0xc);
                if (*(byte *)((longlong)puVar13 + 0xc) == *(byte *)((longlong)puVar27 + 0xc)) {
                  bVar57 = *(uint *)((longlong)puVar13 + 4) < *(uint *)((longlong)puVar27 + 4);
                }
                puVar9 = puVar27 + 2;
                puVar40 = puVar53 + 2;
              } while (!bVar57);
              puVar9 = puVar47 + -4;
              do {
                puVar40 = puVar47;
                puVar50 = puVar9;
                puVar47 = puVar40 + -2;
                if (puVar47 <= puVar13) break;
                bVar57 = *(byte *)((longlong)puVar13 + 0xc) < *(byte *)((longlong)puVar40 + -4);
                if (*(byte *)((longlong)puVar40 + -4) == *(byte *)((longlong)puVar13 + 0xc)) {
                  bVar57 = *(uint *)((longlong)puVar40 + -0xc) < *(uint *)((longlong)puVar13 + 4);
                }
                puVar9 = puVar50 + -2;
              } while (!bVar57);
              if (puVar47 < puVar27) goto LAB_143705442;
              uVar48 = *puVar27;
              uVar11 = puVar27[1];
              uVar56 = puVar40[-1];
              *puVar27 = *puVar47;
              puVar27[1] = uVar56;
              *puVar47 = uVar48;
              puVar40[-1] = uVar11;
            } while( true );
          }
          for (; puVar38 = puVar13, puVar32 = puVar13, puVar13 < puVar25; puVar25 = puVar25 + -2) {
            while (puVar47 = puVar38, puVar38 = puVar32 + 2, puVar38 <= puVar25) {
              bVar57 = *(byte *)((longlong)puVar32 + 0x1c) < *(byte *)((longlong)puVar47 + 0xc);
              if (*(byte *)((longlong)puVar47 + 0xc) == *(byte *)((longlong)puVar32 + 0x1c)) {
                bVar57 = *(uint *)((longlong)puVar47 + 4) < *(uint *)((longlong)puVar32 + 0x14);
              }
              puVar32 = puVar38;
              if (!bVar57) {
                puVar38 = puVar47;
              }
            }
            local_108 = (undefined **)*puVar47;
            uStack_100 = puVar47[1];
            ppuVar2 = local_108;
            uVar11 = uStack_100;
            uVar48 = puVar25[1];
            *puVar47 = *puVar25;
            puVar47[1] = uVar48;
            local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
            uStack_100._4_4_ = (undefined4)(uStack_100 >> 0x20);
            *(int *)puVar25 = (int)local_108;
            *(undefined4 *)((longlong)puVar25 + 4) = local_108._4_4_;
            *(undefined4 *)(puVar25 + 1) = (undefined4)uStack_100;
            *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_100._4_4_;
            param_1 = local_4b8;
            local_108 = ppuVar2;
            uStack_100 = uVar11;
          }
          goto LAB_1437057a9;
        }
LAB_1437054f7:
        iVar29 = (int)uVar48;
        if (iVar29 != 0) {
          iVar30 = (iVar30 - (iVar30 + -1 >> 0x1f)) + -1 >> 1;
          iVar20 = iVar30;
joined_r0x00014370551e:
          do {
            iVar34 = iVar30 * 2 + 1;
            if (iVar34 < iVar29) {
              iVar44 = iVar30 * 2 + 2;
              if (iVar44 < iVar29) {
                bVar18 = *(byte *)((longlong)puVar13 + (longlong)iVar44 * 0x10 + 0xc);
                bVar3 = *(byte *)((longlong)puVar13 + (longlong)iVar34 * 0x10 + 0xc);
                bVar57 = bVar3 < bVar18;
                if (bVar18 == bVar3) {
                  bVar57 = *(uint *)((longlong)puVar13 + (longlong)iVar44 * 0x10 + 4) <
                           *(uint *)((longlong)puVar13 + (longlong)iVar34 * 0x10 + 4);
                }
                if (!bVar57) {
                  iVar34 = iVar44;
                }
              }
              lVar36 = (longlong)iVar30 * 0x10;
              lVar31 = (longlong)iVar34 * 0x10;
              bVar18 = *(byte *)((longlong)puVar13 + lVar36 + 0xc);
              bVar3 = *(byte *)((longlong)puVar13 + lVar31 + 0xc);
              bVar57 = bVar3 < bVar18;
              if (bVar18 == bVar3) {
                bVar57 = *(uint *)((longlong)puVar13 + lVar36 + 4) <
                         *(uint *)((longlong)puVar13 + lVar31 + 4);
              }
              if (bVar57) {
                puVar25 = puVar13 + (longlong)iVar30 * 2;
                puVar38 = puVar13 + (longlong)iVar34 * 2;
                local_108 = (undefined **)*puVar25;
                uStack_100 = puVar25[1];
                ppuVar2 = local_108;
                uVar56 = uStack_100;
                uVar11 = puVar38[1];
                *puVar25 = *puVar38;
                puVar25[1] = uVar11;
                local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
                uStack_100._4_4_ = (undefined4)(uStack_100 >> 0x20);
                *(int *)puVar38 = (int)local_108;
                *(undefined4 *)((longlong)puVar38 + 4) = local_108._4_4_;
                *(undefined4 *)(puVar38 + 1) = (undefined4)uStack_100;
                *(undefined4 *)((longlong)puVar38 + 0xc) = uStack_100._4_4_;
                iVar30 = iVar34;
                local_108 = ppuVar2;
                uStack_100 = uVar56;
                goto joined_r0x00014370551e;
              }
            }
            bVar57 = iVar20 != 0;
            iVar30 = iVar20 + -1;
            iVar20 = iVar30;
          } while (bVar57);
          param_1 = local_4b8;
          if (1 < iVar29) {
            uVar48 = uVar48 - 1;
            local_108 = (undefined **)*puVar13;
            uStack_100 = puVar13[1];
            ppuVar2 = local_108;
            uVar56 = uStack_100;
            uVar11 = (puVar13 + uVar48 * 2)[1];
            *puVar13 = puVar13[uVar48 * 2];
            puVar13[1] = uVar11;
            local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
            uStack_100._4_4_ = (undefined4)(uStack_100 >> 0x20);
            puVar25 = puVar13 + uVar48 * 2;
            *(int *)puVar25 = (int)local_108;
            *(undefined4 *)((longlong)puVar25 + 4) = local_108._4_4_;
            *(undefined4 *)(puVar25 + 1) = (undefined4)uStack_100;
            *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_100._4_4_;
            local_108 = ppuVar2;
            uStack_100 = uVar56;
            if (iVar29 != 2) {
              do {
                iVar29 = 0;
                iVar20 = 1;
                iVar30 = 0;
                do {
                  iVar29 = iVar29 + 2;
                  iVar34 = iVar20;
                  if ((longlong)iVar29 < (longlong)uVar48) {
                    lVar36 = (longlong)iVar29 * 0x10;
                    bVar18 = *(byte *)((longlong)puVar13 + lVar36 + 0xc);
                    bVar3 = *(byte *)((longlong)puVar13 + (longlong)iVar20 * 0x10 + 0xc);
                    bVar57 = bVar3 < bVar18;
                    if (bVar18 == bVar3) {
                      bVar57 = *(uint *)((longlong)puVar13 + lVar36 + 4) <
                               *(uint *)((longlong)puVar13 + (longlong)iVar20 * 0x10 + 4);
                    }
                    if (!bVar57) {
                      iVar34 = iVar29;
                    }
                  }
                  lVar36 = (longlong)iVar30 * 0x10;
                  lVar31 = (longlong)iVar34 * 0x10;
                  bVar18 = *(byte *)((longlong)puVar13 + lVar36 + 0xc);
                  bVar3 = *(byte *)((longlong)puVar13 + lVar31 + 0xc);
                  bVar57 = bVar3 < bVar18;
                  if (bVar18 == bVar3) {
                    bVar57 = *(uint *)((longlong)puVar13 + lVar36 + 4) <
                             *(uint *)((longlong)puVar13 + lVar31 + 4);
                  }
                  if (!bVar57) break;
                  puVar25 = puVar13 + (longlong)iVar30 * 2;
                  puVar38 = puVar13 + (longlong)iVar34 * 2;
                  uVar11 = *puVar25;
                  uVar56 = puVar25[1];
                  uVar55 = puVar38[1];
                  *puVar25 = *puVar38;
                  puVar25[1] = uVar55;
                  *puVar38 = uVar11;
                  puVar38[1] = uVar56;
                  iVar29 = iVar34 * 2;
                  iVar20 = iVar34 * 2 + 1;
                  iVar30 = iVar34;
                } while ((longlong)iVar20 < (longlong)uVar48);
                uVar11 = uVar48 - 1;
                local_108 = (undefined **)*puVar13;
                uStack_100 = puVar13[1];
                ppuVar2 = local_108;
                uVar55 = uStack_100;
                uVar56 = (puVar13 + uVar11 * 2)[1];
                *puVar13 = puVar13[uVar11 * 2];
                puVar13[1] = uVar56;
                local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
                uStack_100._4_4_ = (undefined4)(uStack_100 >> 0x20);
                puVar25 = puVar13 + uVar11 * 2;
                *(int *)puVar25 = (int)local_108;
                *(undefined4 *)((longlong)puVar25 + 4) = local_108._4_4_;
                *(undefined4 *)(puVar25 + 1) = (undefined4)uStack_100;
                *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_100._4_4_;
                bVar57 = 2 < uVar48;
                uVar48 = uVar11;
                local_108 = ppuVar2;
                uStack_100 = uVar55;
              } while (bVar57);
            }
          }
        }
LAB_1437057a9:
        ppuVar52 = ppuVar52 + -3;
      } while (&local_408 <= ppuVar52);
      iVar29 = *(int *)(param_1 + 0x248);
    }
    iVar30 = *(int *)(param_1 + 0x130);
    iVar20 = *(int *)(param_1 + 0x134);
    iVar44 = iVar30 - iVar20;
    iVar34 = iVar29;
    if (iVar44 < iVar29) {
      iVar34 = iVar44;
    }
    if (iVar34 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar34);
    }
    if (iVar44 < iVar29) {
      *(int *)(param_1 + 0x248) = iVar34;
      iVar29 = iVar34;
    }
    if (iVar29 != 0) {
      local_428 = 0;
      uStack_420 = 0;
      puVar43 = *(ushort **)(param_1 + 0x240);
      local_480 = puVar43 + (longlong)iVar29 * 8;
      local_498 = (uint *)(param_1 + 0x1f0);
      do {
        uVar4 = *puVar43;
        if ((int)(uint)uVar4 < *(int *)(param_1 + 0x80)) {
          puVar16 = *(uint **)(param_1 + 0x78);
          if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
            puVar16 = local_488;
          }
          if ((puVar16[uVar4 >> 5] >> (uVar4 & 0x1f) & 1) == 0) goto LAB_143705f54;
          lVar36 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(uint)uVar4 * 8);
        }
        else {
LAB_143705f54:
          lVar36 = 0;
        }
        if (*(int *)(puVar43 + 4) != 0) {
          puVar51 = (ushort *)(*(longlong *)(lVar36 + 0x40) + (ulonglong)puVar43[1] * 0x100);
          local_4a0 = *(ushort **)(*(longlong *)(lVar36 + 0x40) + (ulonglong)puVar43[1] * 0x100);
          uVar19 = 0;
          do {
            local_4c8 = &local_408;
            local_408 = (ulonglong *)(((ulonglong)local_408 >> 0x30 & 0xfffc) << 0x30);
            iVar30 = *(int *)(puVar43 + 2) + uVar19;
            local_4d8 = (longlong *)CONCAT44(local_4d8._4_4_,*(int *)(puVar51 + 0x40) - iVar30);
            local_4d0 = (longlong *)((ulonglong)local_4d0 & 0xffffffffffffff00);
            iVar29 = FUN_1405c016c(lVar36 + 0xb0,*(undefined4 *)(param_1 + 0x13c),puVar43[1],iVar30)
            ;
            puVar25 = local_408;
            if (iVar29 == -1) {
              *(uint *)(puVar43 + 4) = uVar19;
              if (uVar19 == 0) goto LAB_143705f43;
              goto LAB_143705bbc;
            }
            *(int *)(*(longlong *)(puVar51 + 0xc) + (longlong)iVar30 * 4) = iVar29;
            if (((ulonglong)local_408 & 0x2000000000000) != 0) {
              lVar31 = *(longlong *)(lVar36 + 0x40);
              lVar26 = ((ulonglong)local_408 >> 0x20 & 0xffff) * 0x100;
              puVar14 = (undefined *)(lVar31 + lVar26 + 0x88);
              puVar41 = *(undefined **)(lVar31 + lVar26 + 0x98);
              if (puVar41 == (undefined *)0x0) {
                puVar41 = puVar14;
              }
              uVar10 = (uint)local_408 + 0x1f;
              if (-1 < (int)(uint)local_408) {
                uVar10 = (uint)local_408;
              }
              ppuVar2 = (undefined **)(lVar31 + lVar26);
              bVar18 = (byte)local_408 & 0x1f;
              uVar46 = -2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18;
              *(uint *)(puVar41 + (longlong)((int)uVar10 >> 5) * 4) =
                   *(uint *)(puVar41 + (longlong)((int)uVar10 >> 5) * 4) & uVar46;
              lVar49 = lVar31 + lVar26;
              lVar42 = *(longlong *)(lVar49 + 0x78);
              if (*(longlong *)(lVar49 + 0x78) == 0) {
                lVar42 = lVar49 + 0x68;
              }
              puVar16 = (uint *)(lVar42 + (longlong)((int)uVar10 >> 5) * 4);
              *puVar16 = *puVar16 & uVar46;
              *(undefined4 *)(*(longlong *)(lVar49 + 0x18) + (longlong)(int)(uint)local_408 * 4) = 0
              ;
              if (*(int *)(lVar49 + 0xb0) != *(int *)(lVar49 + 0xdc)) {
                ppuVar23 = ppuVar2 + 0x1c;
                if ((undefined **)ppuVar2[0x1d] != (undefined **)0x0) {
                  ppuVar23 = (undefined **)ppuVar2[0x1d];
                }
                iVar29 = *(int *)((longlong)ppuVar23 +
                                 (ulonglong)(*(int *)(ppuVar2 + 0x1e) - 1U & (uint)local_408) * 4);
                if (iVar29 != -1) {
                  plVar45 = (longlong *)(lVar31 + lVar26 + 0xa8);
LAB_1437059c0:
                  lVar31 = *plVar45 + (longlong)iVar29 * 0x10;
                  if (*(uint *)(*plVar45 + (longlong)iVar29 * 0x10) != (uint)local_408)
                  goto code_r0x0001437059d1;
                  if ((int *)(lVar31 + 4) != (int *)0x0 && lVar31 != 0) {
                    lVar31 = (longlong)*(int *)(lVar31 + 4);
                    local_478 = *(ulonglong *)(param_1 + 0xe0);
                    local_460 = lVar31 * 5;
                    iVar29 = *(int *)(local_478 + 4 + lVar31 * 0x28);
                    iVar30 = *(int *)(local_478 + 8 + lVar31 * 0x28) + iVar29;
                    if (iVar30 == -1) {
                      iVar30 = *(int *)(ppuVar2 + 0x14);
                    }
                    if (ppuVar2[0x13] != (undefined *)0x0) {
                      puVar14 = ppuVar2[0x13];
                    }
                    iVar20 = iVar29 + 0x1f;
                    if (-1 < iVar29) {
                      iVar20 = iVar29;
                    }
                    iVar20 = iVar20 >> 5;
                    iVar34 = iVar30 + 0x3e;
                    if (-1 < iVar30 + 0x1f) {
                      iVar34 = iVar30 + 0x1f;
                    }
                    iVar34 = iVar34 >> 5;
                    uVar46 = -1 << ((byte)iVar29 & 0x1f);
                    uVar10 = 0xffffffff >> (-(char)(iVar30 % 0x20) & 0x1fU);
                    if (iVar30 % 0x20 < 1) {
                      uVar10 = 0xffffffff;
                    }
                    uVar21 = uVar10 & uVar46;
                    if (iVar20 == iVar34 + -1) {
                      uVar10 = uVar21;
                    }
                    local_490 = plVar45;
                    if (iVar34 <= iVar20) goto LAB_143705b39;
                    if (iVar20 == iVar34 + -1) {
                      uVar46 = uVar21;
                    }
                    ppuVar52 = (ulonglong **)(longlong)iVar20;
                    local_4b0 = (ulonglong **)((longlong)iVar34 + -2);
                    iVar29 = 0;
                    do {
                      uVar48 = (ulonglong)(uVar46 & *(uint *)(puVar14 + (longlong)ppuVar52 * 4)) -
                               (ulonglong)
                               ((uVar46 & *(uint *)(puVar14 + (longlong)ppuVar52 * 4)) >> 1 &
                               0x55555555);
                      uVar48 = (uVar48 >> 2 & 0x3333333333333333) + (uVar48 & 0x3333333333333333);
                      iVar29 = iVar29 + (uint)(byte)(((uVar48 >> 4) + uVar48 & 0xf0f0f0f0f0f0f0f) *
                                                     0x101010101010101 >> 0x38);
                      bVar57 = local_4b0 == ppuVar52;
                      ppuVar52 = (ulonglong **)((longlong)ppuVar52 + 1);
                      uVar46 = 0xffffffff;
                      if (bVar57) {
                        uVar46 = uVar10;
                      }
                    } while ((ulonglong **)(longlong)iVar34 != ppuVar52);
                    if (iVar29 == 0) {
LAB_143705b39:
                      FUN_1411cbc82(local_478 + lVar31 * 0x28);
                    }
                    FUN_1409a11ae(local_490,(ulonglong)puVar25 & 0xffffffff);
                    param_1 = local_4b8;
                  }
                }
              }
LAB_143705b64:
              local_108 = ppuVar2;
              FUN_141640c3c(local_498,local_42c,&local_108);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(uint *)(puVar43 + 4));
          *(uint *)(puVar43 + 4) = uVar19;
LAB_143705bbc:
          bVar57 = true;
          if (DAT_14cb090f8 == 0) {
            bVar57 = (char)puVar43[6] == -1;
          }
          if (*(int *)(param_1 + 0x134) < *(int *)(param_1 + 0x130)) {
            iVar29 = *(int *)(param_1 + 0x138);
            *(int *)(param_1 + 0x138) = (iVar29 + 1) % *(int *)(param_1 + 0x130);
            *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
            if (iVar29 != -1) {
              puVar15 = (undefined4 *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar29 * 0x28);
              FUN_1411cbc82(puVar15);
              uVar5 = *(undefined4 *)(param_1 + 0x13c);
              uVar17 = *(undefined8 *)(puVar43 + 2);
              *puVar15 = *(undefined4 *)puVar43;
              *(undefined8 *)(puVar15 + 1) = uVar17;
              puVar15[8] = uVar5;
              *(bool *)(puVar15 + 9) = bVar57;
              uVar19 = *(uint *)(puVar43 + 2);
              iVar30 = 0;
              piVar7 = *(int **)(local_4a0 + 0x3c);
              if (*(uint *)(local_4a0 + 0x4c) <= uVar19) {
                iVar30 = *piVar7 - piVar7[(int)*(uint *)(local_4a0 + 0x4c)];
              }
              local_490 = (longlong *)CONCAT44(local_490._4_4_,iVar30);
              iVar30 = piVar7[(int)uVar19];
              iVar20 = piVar7[(int)(*(int *)(puVar43 + 4) + uVar19)] - iVar30;
              FUN_1400eecdc(&local_408,iVar20);
              local_4b0 = (ulonglong **)(puVar15 + 4);
              if (local_4b0 == &local_408) {
LAB_143705d17:
                puVar25 = local_408;
                if (local_408 != (ulonglong *)0x0) {
                  LOCK();
                  piVar7 = (int *)((longlong)local_408 + 0xc);
                  *piVar7 = *piVar7 + -1;
                  UNLOCK();
                  if (*piVar7 == 0) {
                    FUN_144716208(local_408);
                    FUN_1400020a8(puVar25);
                  }
                }
              }
              else {
                puVar25 = *local_4b0;
                *local_4b0 = local_408;
                local_408 = (ulonglong *)0x0;
                if (puVar25 != (ulonglong *)0x0) {
                  LOCK();
                  piVar7 = (int *)((longlong)puVar25 + 0xc);
                  *piVar7 = *piVar7 + -1;
                  UNLOCK();
                  if (*piVar7 == 0) {
                    FUN_144716208(puVar25);
                    FUN_1400020a8(puVar25);
                  }
                  goto LAB_143705d17;
                }
              }
              puVar54 = local_4a0 + 0x58;
              local_4a0 = (ushort *)CONCAT44(local_4a0._4_4_,(uint)*(byte *)(puVar15 + 9) * 4 + 1);
              local_408 = (ulonglong *)0x0;
              local_400 = (ulonglong *)CONCAT44(local_400._4_4_,1);
              local_3f8 = (uint *)0x0;
              local_330 = 0;
              local_328 = 0x800000000;
              FUN_1427d8b7a(&local_408,puVar54,iVar30 + (int)local_490,iVar20);
              local_4d8 = (longlong *)(puVar15 + 6);
              local_f8 = (undefined ***)0x0;
              local_e8 = &PTR_LAB_14aa69440;
              local_e0 = &DAT_143716432;
              local_108 = (undefined **)&LAB_147cd5d8e;
              FUN_141713140(&local_408,local_4b0,(ulonglong)local_4a0 & 0xffffffff,&local_108);
              if (local_108 != (undefined **)0x0) {
                pppuVar24 = local_f8;
                if (local_f8 == (undefined ***)0x0) {
                  pppuVar24 = &local_e8;
                }
                (*(code *)(*pppuVar24)[2])();
              }
              uVar48 = uStack_420;
              if (*(char *)(puVar15 + 9) == '\x01') {
                lVar36 = (longlong)(int)uStack_420;
                uVar19 = (int)uStack_420 + 1;
                uStack_420 = CONCAT44(uStack_420._4_4_,uVar19);
                if (uStack_420._4_4_ < uVar19) {
                  FUN_1446f48e2(&local_428,uVar48 & 0xffffffff);
                }
                *(int *)(local_428 + lVar36 * 4) = iVar29;
              }
              if (local_330 != 0) {
                FUN_1400020a8();
              }
              local_4a0 = puVar51;
              if (local_3f8 != (uint *)0x0) {
                LOCK();
                puVar16 = local_3f8 + 2;
                *puVar16 = *puVar16 - 1;
                UNLOCK();
                if (*puVar16 == 0) {
                  (*(code *)**(undefined8 **)local_3f8)(local_3f8,1);
                }
              }
              local_42c = (undefined1  [4])puVar15[1];
              if ((uint)local_42c < (uint)(puVar15[2] + (int)local_42c)) {
                local_4b0 = (ulonglong **)(local_4a0 + 0x54);
                do {
                  local_430 = iVar29;
                  local_408 = (ulonglong *)local_42c;
                  local_400 = (ulonglong *)&local_430;
                  FUN_1409a12da(local_4b0,&local_108,&local_408,0);
                  local_42c = (undefined1  [4])((int)local_42c + 1);
                } while ((uint)local_42c < (uint)(puVar15[2] + puVar15[1]));
              }
              FUN_1447c6044(local_4a0 + 0x44,puVar15[1],puVar15[2],1);
              goto LAB_143705f43;
            }
            uVar19 = *(uint *)(puVar43 + 4);
          }
          uVar10 = *(uint *)(puVar43 + 2);
          if (uVar10 < uVar10 + uVar19) {
            do {
              FUN_147d4c368(lVar36 + 0xb0,
                            *(undefined4 *)
                             (*(longlong *)(puVar51 + 0xc) + (longlong)(int)uVar10 * 4));
              *(undefined4 *)(*(longlong *)(puVar51 + 0xc) + (longlong)(int)uVar10 * 4) = 0;
              uVar10 = uVar10 + 1;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
        }
LAB_143705f43:
        uVar48 = local_428;
        puVar43 = puVar43 + 8;
      } while (puVar43 != local_480);
      lVar36 = (longlong)(int)uStack_420;
      if (lVar36 != 0) {
        lVar31 = 0;
        do {
          plVar45 = *(longlong **)
                     (*(longlong *)(param_1 + 0xe0) + 0x18 +
                     (longlong)*(int *)(uVar48 + lVar31) * 0x28);
          if (plVar45 != (longlong *)0x0) {
            (**(code **)(*plVar45 + 0x30))(plVar45,0xffffffff);
          }
          lVar31 = lVar31 + 4;
        } while (lVar36 * 4 != lVar31);
      }
      if (local_428 != 0) {
        FUN_1400020a8(local_428);
      }
      iVar30 = *(int *)(param_1 + 0x130);
      iVar20 = *(int *)(param_1 + 0x134);
    }
    iVar29 = (*(int *)(param_1 + 0x138) + iVar30) - iVar20;
    if (iVar20 < 1) {
      iVar34 = 0;
    }
    else {
      iVar34 = 0;
      puVar16 = local_488;
      do {
        lVar36 = (longlong)((iVar29 % iVar30 + iVar34) % *(int *)(param_1 + 0x130));
        uVar4 = *(ushort *)(*(longlong *)(param_1 + 0xe0) + lVar36 * 0x28);
        if (uVar4 != 0xffff) {
          uVar19 = (uint)uVar4;
          if (*(uint *)(param_1 + 0x80) == uVar19 ||
              (int)*(uint *)(param_1 + 0x80) < (int)(uint)uVar4) {
LAB_143706127:
            lVar31 = 0;
          }
          else {
            puVar12 = *(uint **)(param_1 + 0x78);
            if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
              puVar12 = puVar16;
            }
            if ((puVar12[uVar4 >> 5] >> (uVar19 & 0x1f) & 1) == 0) goto LAB_143706127;
            lVar31 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar19 * 8);
          }
          lVar36 = *(longlong *)(param_1 + 0xe0) + lVar36 * 0x28;
          plVar45 = *(longlong **)(lVar36 + 0x18);
          if (plVar45 == (longlong *)0x0) break;
          lVar31 = *(longlong *)
                    (*(longlong *)(lVar31 + 0x40) + (ulonglong)*(ushort *)(lVar36 + 2) * 0x100);
          if (*(code **)(*plVar45 + 0x20) == (code *)&LAB_14688ab4e) {
            iVar20 = DAT_14c844ee0;
            if (plVar45[2] != 0) {
              iVar20 = *(int *)(plVar45[2] + 0xb4);
            }
            if (iVar20 == 1) break;
          }
          else {
            uVar19 = (**(code **)(*plVar45 + 0x20))();
            if (uVar19 < 2) break;
          }
          plVar45 = *(longlong **)(lVar36 + 0x18);
          if (plVar45 == (longlong *)0x0) {
LAB_143706820:
            uVar19 = *(uint *)(lVar36 + 4);
            iVar29 = 0;
            piVar7 = *(int **)(lVar31 + 0x78);
            if (*(uint *)(lVar31 + 0x98) <= uVar19) {
              iVar29 = *piVar7 - piVar7[(int)*(uint *)(lVar31 + 0x98)];
            }
            local_408 = (ulonglong *)0x0;
            local_400 = (ulonglong *)CONCAT44(local_400._4_4_,1);
            local_3f8 = (uint *)0x0;
            local_330 = 0;
            local_328 = 0x800000000;
            FUN_1427d8b7a(&local_408,lVar31 + 0xb0,iVar29 + piVar7[(int)uVar19],
                          piVar7[(int)(*(int *)(lVar36 + 8) + uVar19)] - piVar7[(int)uVar19]);
            local_f8 = (undefined ***)0x0;
            local_e8 = &PTR_LAB_14aa69440;
            local_e0 = &DAT_143716434;
            local_108 = (undefined **)&LAB_147cd5d8e;
            local_4d8 = (longlong *)(lVar36 + 0x18);
            FUN_141713140(&local_408,lVar36 + 0x10,1,&local_108);
            if (local_108 != (undefined **)0x0) {
              pppuVar24 = local_f8;
              if (local_f8 == (undefined ***)0x0) {
                pppuVar24 = &local_e8;
              }
              (*(code *)(*pppuVar24)[2])();
            }
            if (local_330 != 0) {
              FUN_1400020a8();
            }
            if (local_3f8 != (uint *)0x0) {
              LOCK();
              puVar16 = local_3f8 + 2;
              *puVar16 = *puVar16 - 1;
              UNLOCK();
              if (*puVar16 == 0) {
                (*(code *)**(undefined8 **)local_3f8)(local_3f8,1);
              }
            }
            break;
          }
          if (*(code **)(*plVar45 + 0x20) == (code *)&LAB_14688ab4e) {
            iVar20 = DAT_14c844ee0;
            if (plVar45[2] != 0) {
              iVar20 = *(int *)(plVar45[2] + 0xb4);
            }
            if (iVar20 != 0) goto LAB_143706820;
          }
          else {
            iVar20 = (**(code **)(*plVar45 + 0x20))();
            if (iVar20 != 2) goto LAB_143706820;
          }
          iVar20 = *(int *)(param_1 + 0x134);
          puVar16 = local_488;
        }
        iVar34 = iVar34 + 1;
      } while (iVar34 < iVar20);
    }
    *(int *)(param_1 + 0x128) = iVar34;
    lVar36 = param_1 + 0x1a0;
    if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
      FUN_1417f1c6c(lVar36);
      *(undefined4 *)(param_1 + 0x1a8) = 0;
      if (*(int *)(param_1 + 0x1ac) < 0) {
        FUN_14474875a(lVar36,0);
      }
      *(undefined8 *)(local_4b8 + 0x1d0) = 0xffffffff;
      *(undefined4 *)(local_4b8 + 0x1c8) = 0;
      iVar34 = *(int *)(local_4b8 + 0x128);
      param_1 = local_4b8;
    }
    iVar29 = *(int *)(param_1 + 0x130);
    iVar30 = *(int *)(param_1 + 0x138);
    iVar20 = *(int *)(param_1 + 0x134);
    if (0 < iVar34) {
      iVar44 = 0;
      do {
        lVar31 = *(longlong *)(param_1 + 0xe0);
        lVar26 = (longlong)
                 ((((iVar30 + iVar29) - iVar20) % iVar29 + iVar44) % *(int *)(param_1 + 0x130));
        uVar4 = *(ushort *)(lVar31 + lVar26 * 0x28);
        if (uVar4 != 0xffff) {
          uVar19 = (uint)uVar4;
          if (*(uint *)(param_1 + 0x80) == uVar19 ||
              (int)*(uint *)(param_1 + 0x80) < (int)(uint)uVar4) {
LAB_143706ad3:
            lVar49 = 0;
          }
          else {
            puVar16 = *(uint **)(param_1 + 0x78);
            if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
              puVar16 = local_488;
            }
            if ((puVar16[uVar4 >> 5] >> (uVar19 & 0x1f) & 1) == 0) goto LAB_143706ad3;
            lVar49 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar19 * 8);
          }
          lVar42 = *(longlong *)(lVar49 + 0x100);
          if (*(int *)(lVar42 + 0x60) == 0) {
            *(undefined8 *)(lVar42 + 0x60) = 1;
            *(undefined8 *)(lVar42 + 0x68) = 0;
          }
          lVar31 = lVar31 + lVar26 * 0x28;
          local_108 = (undefined **)((ulonglong)local_108 & 0xffffffff00000000);
          local_428 = local_428 & 0xffffffff00000000;
          plVar45 = (longlong *)
                    (*(longlong *)(lVar49 + 0x40) + (ulonglong)*(ushort *)(lVar31 + 2) * 0x100);
          local_4d0 = plVar45 + 0x11;
          iVar34 = *(int *)(lVar31 + 8);
          local_4c0 = &local_428;
          local_4c8 = (ulonglong **)&local_108;
          local_4d8 = (longlong *)
                      CONCAT44(local_4d8._4_4_,
                               *(undefined4 *)
                                ((longlong)&DAT_14c873428 +
                                (ulonglong)((uint)*(byte *)(lVar49 + 0xd) * 0x30)));
          FUN_1437000d6(*plVar45 + 0x78,*(undefined4 *)(lVar31 + 4),iVar34,
                        *(undefined4 *)
                         ((longlong)&DAT_14c873428 +
                         (ulonglong)((uint)*(byte *)(lVar49 + 0xc) * 0x30)));
          lVar31 = *(longlong *)(lVar49 + 0x100);
          *(int *)(lVar31 + 100) = *(int *)(lVar31 + 100) + iVar34;
          *(int *)(lVar31 + 0x68) = *(int *)(lVar31 + 0x68) + (int)local_108;
          *(int *)(lVar31 + 0x6c) = *(int *)(lVar31 + 0x6c) + (int)local_428;
          local_408 = *(ulonglong **)(lVar49 + 0x100);
          FUN_145973b9c(lVar36,local_42c,&local_408);
          iVar34 = *(int *)(param_1 + 0x128);
        }
        iVar44 = iVar44 + 1;
      } while (iVar44 < iVar34);
    }
    iVar29 = *(int *)(param_1 + 0x1c8);
    lVar36 = param_1;
    if (iVar29 == 0) {
      uVar11 = 1;
      uVar48 = 0;
      iVar20 = 0;
      iVar30 = 0;
    }
    else {
      puVar16 = *(uint **)(param_1 + 0x1c0);
      if (*(uint **)(param_1 + 0x1c0) == (uint *)0x0) {
        puVar16 = (uint *)(param_1 + 0x1b0);
      }
      uVar19 = *puVar16;
      if (uVar19 == 0) {
        iVar30 = iVar29 + 0x1e;
        if (-1 < iVar29 + -1) {
          iVar30 = iVar29 + -1;
        }
        uVar48 = 0;
        uVar11 = (ulonglong)(uint)(iVar30 >> 5);
        if (iVar30 >> 5 < 1) {
          uVar11 = uVar48;
        }
        iVar20 = 0;
        do {
          if (uVar11 == uVar48) goto LAB_143706b6c;
          iVar20 = iVar20 + 0x20;
          uVar19 = puVar16[uVar48 + 1];
          uVar48 = uVar48 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar48 = 0;
        iVar20 = 0;
      }
      uVar11 = (ulonglong)(-uVar19 & uVar19);
      uVar56 = uVar11 * 2 + 1;
      lVar31 = 0x3f;
      if (uVar56 != 0) {
        for (; uVar56 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      iVar30 = (iVar20 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
      if (iVar29 <= iVar30) {
        iVar30 = iVar29;
      }
    }
    if (iVar30 != iVar29) {
      uVar19 = 0xffffffff;
      do {
        lVar36 = *(longlong *)(*(longlong *)(lVar36 + 0x1a0) + (longlong)iVar30 * 0x10);
        *(undefined4 *)(lVar36 + 0x60) = 2;
        local_4c8 = (ulonglong **)CONCAT71(local_4c8._1_7_,*(undefined1 *)(lVar36 + 0x29));
        local_4d0 = (longlong *)CONCAT71(local_4d0._1_7_,*(undefined1 *)(lVar36 + 0x28));
        local_4d8 = (longlong *)CONCAT44(local_4d8._4_4_,*(undefined4 *)(lVar36 + 0x6c));
        FUN_1417f109c(*(undefined8 *)(lVar36 + 0x10),local_438,*(undefined4 *)(lVar36 + 100),
                      *(undefined4 *)(lVar36 + 0x68));
        *(undefined4 *)(lVar36 + 0x60) = 3;
        uVar19 = ~(uint)uVar11 & uVar19;
        puVar16 = *(uint **)(local_4b8 + 0x1c0);
        if (*(uint **)(local_4b8 + 0x1c0) == (uint *)0x0) {
          puVar16 = (uint *)(param_1 + 0x1b0);
        }
        iVar34 = *(int *)(local_4b8 + 0x1c8);
        iVar30 = (int)uVar48;
        lVar36 = (longlong)iVar30;
        uVar10 = puVar16[lVar36] & uVar19;
        if (uVar10 == 0) {
          iVar44 = iVar34 + 0x1e;
          if (-1 < iVar34 + -1) {
            iVar44 = iVar34 + -1;
          }
          iVar44 = iVar44 >> 5;
          iVar20 = iVar20 + 0x20;
          iVar35 = iVar44;
          if (iVar44 < iVar30) {
            iVar35 = iVar30;
          }
          if (iVar30 < iVar44) {
            lVar31 = 0;
            do {
              uVar10 = puVar16[lVar36 + lVar31 + 1];
              if (uVar10 != 0) {
                uVar48 = (ulonglong)(iVar30 + (int)lVar31 + 1);
                uVar19 = 0xffffffff;
                goto LAB_143706cd2;
              }
              iVar20 = iVar20 + 0x20;
              lVar31 = lVar31 + 1;
            } while (iVar35 - lVar36 != lVar31);
            uVar19 = 0xffffffff;
            iVar30 = iVar35;
          }
          uVar48 = (ulonglong)(iVar30 + 1);
          iVar30 = iVar34;
        }
        else {
LAB_143706cd2:
          uVar11 = (ulonglong)(-uVar10 & uVar10);
          uVar56 = uVar11 * 2 + 1;
          lVar36 = 0x3f;
          if (uVar56 != 0) {
            for (; uVar56 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          iVar30 = (iVar20 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
          if (iVar34 <= iVar30) {
            iVar30 = iVar34;
          }
        }
        lVar36 = local_4b8;
      } while (iVar30 != iVar29);
    }
LAB_143706b6c:
    if ((local_4a1 & DAT_14c761b78 != 0) == 0) {
      FUN_140593548(local_468);
    }
    else {
      *(undefined1 *)(lVar36 + 0x12d) = 1;
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar16 = (uint *)*puVar1;
      if (puVar16 != (uint *)0x0) goto LAB_143706f45;
      while( true ) {
        uVar19 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar19 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar19 | 1;
          __tlregdtor(&LAB_143715770);
        }
        lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar15 = *(undefined4 **)(lVar31 + 0x310);
        *(undefined8 *)(lVar31 + 0x310) = 0;
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar15 = 0xffffffff;
        *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
        puVar15[0x12] = 0;
        *puVar1 = puVar15;
        FUN_140217a48(puVar1);
        puVar16 = (uint *)*puVar1;
LAB_143706f45:
        puVar33 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar12 = (uint *)(puVar33 + 0x16);
        uVar19 = puVar16[0x12];
        if (puVar12 <= puVar16 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
          LOCK();
          uVar10 = *puVar16;
          *puVar16 = *puVar16 + uVar19 + 1;
          UNLOCK();
          if ((uVar10 ^ uVar19) != 0xffffffff) break;
          puVar16 = (uint *)*puVar1;
          *puVar16 = 0xffffffff;
          *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar1 = puVar16;
          puVar33 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
          puVar12 = (uint *)(puVar33 + 0x16);
          uVar19 = 0;
          if (puVar12 <= puVar16 + 0x4000) {
            uVar19 = 1;
            goto LAB_143706fc5;
          }
        }
      }
      uVar19 = uVar19 + 1;
LAB_143706fc5:
      *(uint **)(puVar16 + 0x10) = puVar12;
      puVar16[0x12] = uVar19;
      FUN_1447247dc(puVar33,0);
      *puVar33 = &PTR_FUN_14aabc470;
      puVar33[0x15] = local_468;
      if (*(code **)(puVar33[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar33[0xe] + 0x18))(puVar33 + 0xe,puVar33 + 9);
      }
      puVar33[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar33[9] = puVar33;
      puVar33[10] = puVar33;
      lVar31 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar31 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(undefined8 *)(lVar31 + 0x30);
      }
      puVar33[0xf] = uVar17;
      puVar33[0x10] = 0xc80000527800b400;
      *(undefined4 *)((longlong)puVar33 + 0x1c) = 0;
      if (puVar33 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar33 + 1) = *(int *)(puVar33 + 1) + 1;
        UNLOCK();
      }
      local_408 = (ulonglong *)CONCAT71(local_408._1_7_,1);
      FUN_1447439e4(puVar33);
      iVar29 = *(int *)(lVar36 + 0x120);
      *(uint *)(lVar36 + 0x120) = iVar29 + 1U;
      if (*(uint *)(lVar36 + 0x124) < iVar29 + 1U) {
        FUN_14476a5c8(lVar36 + 0xf8,iVar29);
      }
      lVar31 = lVar36 + 0xf8;
      if (*(longlong *)(lVar36 + 0x118) != 0) {
        lVar31 = *(longlong *)(lVar36 + 0x118);
      }
      *(undefined8 **)(lVar31 + (longlong)iVar29 * 8) = puVar33;
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_4f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143705442:
  local_108 = (undefined **)*puVar13;
  uStack_100 = puVar13[1];
  ppuVar2 = local_108;
  uVar11 = uStack_100;
  uVar48 = puVar40[-1];
  *puVar13 = *puVar47;
  puVar13[1] = uVar48;
  local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
  uStack_100._4_4_ = (undefined4)(uStack_100 >> 0x20);
  *(int *)puVar47 = (int)local_108;
  *(undefined4 *)((longlong)puVar40 + -0xc) = local_108._4_4_;
  *(undefined4 *)(puVar40 + -1) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)puVar40 + -4) = uStack_100._4_4_;
  iVar29 = iVar29 + -1;
  puVar40 = puVar40 + -4;
  local_108 = ppuVar2;
  uStack_100 = uVar11;
  if ((longlong)puVar50 - (longlong)puVar32 < (longlong)puVar38 - (longlong)puVar53) {
    if (puVar27 < puVar25) {
      *ppuVar52 = puVar27;
      ppuVar52[1] = puVar25;
      *(int *)(ppuVar52 + 2) = iVar29;
      ppuVar52 = ppuVar52 + 3;
    }
    param_1 = local_4b8;
    puVar53 = puVar13;
    puVar38 = puVar50;
    if (puVar47 <= puVar13 + 2) goto LAB_1437057a9;
  }
  else {
    if (puVar13 + 2 < puVar47) {
      *ppuVar52 = puVar13;
      ppuVar52[1] = puVar40;
      *(int *)(ppuVar52 + 2) = iVar29;
      ppuVar52 = ppuVar52 + 3;
    }
    param_1 = local_4b8;
    puVar13 = puVar27;
    puVar40 = puVar25;
    puVar38 = puVar25;
    if (puVar25 <= puVar27) goto LAB_1437057a9;
  }
  iVar30 = (int)((ulonglong)((longlong)puVar38 - (longlong)puVar53) >> 4);
  uVar48 = (ulonglong)(iVar30 + 1);
  puVar32 = puVar53;
  param_1 = local_4b8;
  puVar25 = puVar40;
  if (iVar29 == 0) goto LAB_1437054f7;
  goto LAB_143705358;
code_r0x0001437059d1:
  iVar29 = *(int *)(lVar31 + 8);
  if (iVar29 == -1) goto LAB_143705b64;
  goto LAB_1437059c0;
}



// FUNCTION 143707282 FUN_143707282 body=7820 status=ok
// SIG undefined FUN_143707282(void)

void FUN_143707282(longlong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  ulonglong *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong *puVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong *puVar22;
  undefined8 *puVar23;
  byte bVar24;
  undefined8 *puVar25;
  undefined6 uVar26;
  uint *puVar27;
  int iVar28;
  longlong *plVar29;
  longlong lVar30;
  longlong *plVar31;
  longlong *plVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  uint uVar37;
  uint uVar38;
  longlong lVar39;
  uint uVar40;
  uint uVar41;
  undefined8 *puVar42;
  int iVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  bool bVar46;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  longlong local_120;
  uint *local_118;
  uint *local_110;
  longlong local_108;
  uint *local_100;
  ulonglong *local_f8;
  ulonglong local_f0;
  uint local_e4;
  ulonglong local_e0;
  uint *local_d8;
  longlong local_d0;
  ulonglong *local_c8;
  ulonglong *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined1 local_99;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  longlong lStack_70;
  undefined *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    local_120 = param_2;
    if (*(char *)(param_1 + 0x12d) == '\x01') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,param_1 + 0xf8);
    }
    lVar11 = *(longlong *)(param_1 + 0x118);
    if (*(longlong *)(param_1 + 0x118) == 0) {
      lVar11 = param_1 + 0xf8;
    }
    FUN_144717c65(lVar11,*(undefined4 *)(param_1 + 0x120));
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (*(int *)(param_1 + 0x124) != 0) {
      FUN_14473dbc4(param_1 + 0xf8,0);
    }
    iVar28 = *(int *)(param_1 + 0x1c8);
    local_108 = param_1;
    if (iVar28 == 0) {
      uVar44 = 1;
      uVar45 = 0;
      iVar21 = 0;
      iVar6 = 0;
    }
    else {
      puVar27 = *(uint **)(param_1 + 0x1c0);
      if (*(uint **)(param_1 + 0x1c0) == (uint *)0x0) {
        puVar27 = (uint *)(param_1 + 0x1b0);
      }
      uVar7 = *puVar27;
      if (uVar7 == 0) {
        iVar6 = iVar28 + 0x1e;
        if (-1 < iVar28 + -1) {
          iVar6 = iVar28 + -1;
        }
        uVar45 = 0;
        uVar44 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar44 = uVar45;
        }
        iVar21 = 0;
        do {
          if (uVar44 == uVar45) goto LAB_1437073c1;
          iVar21 = iVar21 + 0x20;
          uVar7 = puVar27[uVar45 + 1];
          uVar45 = uVar45 + 1;
        } while (uVar7 == 0);
      }
      else {
        uVar45 = 0;
        iVar21 = 0;
      }
      uVar44 = (ulonglong)(-uVar7 & uVar7);
      uVar33 = uVar44 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar33 != 0) {
        for (; uVar33 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar21 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if (iVar28 <= iVar6) {
        iVar6 = iVar28;
      }
    }
    if (iVar6 != iVar28) {
      uVar7 = 0xffffffff;
      do {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar6 * 0x10);
        local_130 = lVar11 + 0x40;
        local_138 = lVar11 + 0x30;
        FUN_14370a386(*(undefined8 *)(lVar11 + 0x10),local_120,lVar11 + 0x50,lVar11 + 0x58);
        *(undefined4 *)(lVar11 + 0x60) = 0;
        uVar7 = ~(uint)uVar44 & uVar7;
        puVar27 = *(uint **)(param_1 + 0x1c0);
        if (*(uint **)(param_1 + 0x1c0) == (uint *)0x0) {
          puVar27 = (uint *)(param_1 + 0x1b0);
        }
        iVar43 = *(int *)(param_1 + 0x1c8);
        iVar6 = (int)uVar45;
        lVar11 = (longlong)iVar6;
        uVar13 = puVar27[lVar11] & uVar7;
        if (uVar13 == 0) {
          iVar17 = iVar43 + 0x1e;
          if (-1 < iVar43 + -1) {
            iVar17 = iVar43 + -1;
          }
          iVar17 = iVar17 >> 5;
          iVar21 = iVar21 + 0x20;
          iVar18 = iVar17;
          if (iVar17 < iVar6) {
            iVar18 = iVar6;
          }
          if (iVar6 < iVar17) {
            lVar34 = 0;
            do {
              uVar13 = puVar27[lVar11 + lVar34 + 1];
              if (uVar13 != 0) {
                uVar45 = (ulonglong)(iVar6 + (int)lVar34 + 1);
                uVar7 = 0xffffffff;
                goto LAB_143707530;
              }
              iVar21 = iVar21 + 0x20;
              lVar34 = lVar34 + 1;
            } while (iVar18 - lVar11 != lVar34);
            uVar7 = 0xffffffff;
            lVar11 = (longlong)iVar18;
          }
          uVar45 = lVar11 + 1U & 0xffffffff;
          iVar6 = iVar43;
        }
        else {
LAB_143707530:
          uVar44 = (ulonglong)(-uVar13 & uVar13);
          uVar33 = uVar44 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar6 = (iVar21 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (iVar43 <= iVar6) {
            iVar6 = iVar43;
          }
        }
      } while (iVar6 != iVar28);
    }
LAB_1437073c1:
    local_b8 = (longlong *)(local_108 + 0x1f0);
    uVar7 = *(uint *)(local_108 + 0x218);
    lVar11 = local_108;
    if (uVar7 == 0) {
      puVar22 = (ulonglong *)0x0;
      uVar45 = 1;
      iVar28 = 0;
      uVar13 = 0;
    }
    else {
      puVar27 = *(uint **)(local_108 + 0x210);
      if (*(uint **)(local_108 + 0x210) == (uint *)0x0) {
        puVar27 = (uint *)(local_108 + 0x200);
      }
      uVar13 = *puVar27;
      if (uVar13 == 0) {
        iVar28 = uVar7 + 0x1e;
        if (-1 < (int)(uVar7 - 1)) {
          iVar28 = uVar7 - 1;
        }
        puVar22 = (ulonglong *)0x0;
        puVar14 = (ulonglong *)(ulonglong)(uint)(iVar28 >> 5);
        if (iVar28 >> 5 < 1) {
          puVar14 = puVar22;
        }
        iVar28 = 0;
        do {
          if (puVar14 == puVar22) goto LAB_143707ea9;
          iVar28 = iVar28 + 0x20;
          uVar13 = puVar27[(longlong)puVar22 + 1];
          puVar22 = (ulonglong *)((longlong)puVar22 + 1);
        } while (uVar13 == 0);
      }
      else {
        puVar22 = (ulonglong *)0x0;
        iVar28 = 0;
      }
      uVar45 = (ulonglong)(-uVar13 & uVar13);
      uVar44 = uVar45 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar44 != 0) {
        for (; uVar44 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      uVar13 = (iVar28 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
      if ((int)uVar7 <= (int)uVar13) {
        uVar13 = uVar7;
      }
    }
    if (uVar13 != uVar7) {
      local_118 = (uint *)(local_108 + 0x270);
      local_100 = (uint *)(local_108 + 0x290);
      iVar6 = 0;
      uVar19 = 0xffffffff;
      local_e0 = (ulonglong)uVar7;
      local_d8 = (uint *)(local_108 + 0x200);
      do {
        puVar27 = local_118;
        local_d0 = CONCAT44(local_d0._4_4_,uVar19);
        local_f8 = (ulonglong *)CONCAT44(local_f8._4_4_,iVar6);
        local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,iVar28);
        plVar31 = *(longlong **)(*local_b8 + (longlong)(int)uVar13 * 0x10);
        lVar34 = *plVar31;
        iVar28 = *(int *)(lVar34 + 0xf0);
        FUN_144a686e6(local_118);
        FUN_1447c6044(puVar27,0,iVar28,0);
        puVar9 = local_100;
        if (iVar28 != 0) {
          iVar6 = 0;
          do {
            uVar7 = *(uint *)(*(longlong *)(lVar34 + 0x108) + (longlong)iVar6 * 4);
            uVar13 = *(uint *)(*(longlong *)(lVar34 + 0xf8) + (longlong)iVar6 * 4);
            puVar16 = *(uint **)(lVar11 + 0x280);
            if (uVar7 == 0xffffffff) {
LAB_143707663:
              plVar29 = (longlong *)plVar31[0xf];
              if ((longlong *)plVar31[0xf] == (longlong *)0x0) {
                plVar29 = plVar31 + 0xd;
              }
              uVar7 = uVar13 + 0x1f;
              if (-1 < (int)uVar13) {
                uVar7 = uVar13;
              }
              uVar19 = 1 << ((byte)iVar6 & 0x1f);
              if (puVar16 == (uint *)0x0) {
                puVar16 = puVar27;
              }
              iVar21 = iVar6 + 0x1f;
              if (-1 < iVar6) {
                iVar21 = iVar6;
              }
              puVar16 = puVar16 + (iVar21 >> 5);
              if ((*(uint *)((longlong)plVar29 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar13 & 0x1f)
                  & 1) == 0) goto LAB_1437076cd;
              uVar19 = uVar19 | *puVar16;
            }
            else {
              puVar15 = puVar16;
              if (puVar16 == (uint *)0x0) {
                puVar15 = puVar27;
              }
              uVar19 = uVar7 + 0x1f;
              if (-1 < (int)uVar7) {
                uVar19 = uVar7;
              }
              if ((puVar15[(int)uVar19 >> 5] >> (uVar7 & 0x1f) & 1) != 0) goto LAB_143707663;
              uVar19 = 1 << ((byte)iVar6 & 0x1f);
              iVar21 = iVar6 + 0x1f;
              if (-1 < iVar6) {
                iVar21 = iVar6;
              }
              puVar16 = puVar15 + (iVar21 >> 5);
LAB_1437076cd:
              uVar19 = ~uVar19 & *puVar16;
            }
            *puVar16 = uVar19;
            iVar6 = iVar6 + 1;
          } while (iVar28 != iVar6);
        }
        local_110 = (uint *)(plVar31 + 5);
        if (local_100 != local_110) {
          uVar7 = (int)plVar31[8] + 0x1fU & 0xffffffe0;
          *(undefined4 *)(lVar11 + 0x2a8) = 0;
          if ((*(int *)(lVar11 + 0x2ac) < (int)uVar7) || (0x80 < *(int *)(lVar11 + 0x2ac))) {
            if ((int)uVar7 < 0x81) {
              uVar7 = 0x80;
            }
            *(uint *)(lVar11 + 0x2ac) = uVar7;
            FUN_1446efbd8(local_100);
          }
          iVar28 = (int)plVar31[8];
          *(int *)(lVar11 + 0x2a8) = iVar28;
          if (iVar28 != 0) {
            puVar27 = (uint *)plVar31[7];
            if ((uint *)plVar31[7] == (uint *)0x0) {
              puVar27 = local_110;
            }
            puVar16 = *(uint **)(lVar11 + 0x2a0);
            if (*(uint **)(lVar11 + 0x2a0) == (uint *)0x0) {
              puVar16 = puVar9;
            }
            memcpy(puVar16,puVar27,(ulonglong)(iVar28 + 0x1fU >> 3 & 0xfffffffc));
          }
        }
        iVar28 = *(int *)(lVar11 + 0x288);
        iVar6 = *(int *)(lVar11 + 0x2a8);
        iVar21 = iVar28;
        if (iVar28 < iVar6) {
          iVar21 = iVar6;
        }
        iVar43 = iVar21 - iVar6;
        local_f0 = uVar45;
        local_c0 = puVar22;
        if (iVar43 < 0) {
          *(int *)(lVar11 + 0x2a8) = iVar21;
          iVar28 = iVar21 + 0x1f;
          if (-1 < iVar21) {
            iVar28 = iVar21;
          }
          if (iVar21 % 0x20 != 0) {
            puVar27 = *(uint **)(local_108 + 0x2a0);
            if (*(uint **)(local_108 + 0x2a0) == (uint *)0x0) {
              puVar27 = local_100;
            }
            bVar24 = -(char)(iVar21 % 0x20);
            puVar27[iVar28 >> 5] = (puVar27[iVar28 >> 5] << (bVar24 & 0x1f)) >> (bVar24 & 0x1f);
            lVar11 = local_108;
            goto LAB_14370776e;
          }
        }
        else {
          if (iVar6 < iVar28) {
            uVar8 = FUN_144a54ea4(puVar9,iVar43);
            FUN_1447c6044(puVar9,uVar8,iVar43,0);
          }
LAB_14370776e:
          iVar21 = *(int *)(lVar11 + 0x2a8);
        }
        puVar27 = local_100;
        lVar11 = local_108;
        if (iVar21 != 0) {
          puVar9 = *(uint **)(local_108 + 0x280);
          if (*(uint **)(local_108 + 0x280) == (uint *)0x0) {
            puVar9 = local_118;
          }
          iVar28 = *(int *)(local_108 + 0x288);
          uVar7 = 0xffffffff >> (-(char)(iVar28 % 0x20) & 0x1fU);
          if (iVar28 % 0x20 < 1) {
            uVar7 = 0xffffffff;
          }
          puVar16 = *(uint **)(local_108 + 0x2a0);
          if (*(uint **)(local_108 + 0x2a0) == (uint *)0x0) {
            puVar16 = local_100;
          }
          uVar13 = 0xffffffff >> (-(char)(iVar21 % 0x20) & 0x1fU);
          if (iVar21 % 0x20 < 1) {
            uVar13 = 0xffffffff;
          }
          if (0 < iVar21) {
            uVar19 = iVar21 + 0x1fU >> 5;
            iVar6 = iVar28 + 0x3e;
            if (-1 < iVar28 + 0x1f) {
              iVar6 = iVar28 + 0x1f;
            }
            uVar37 = -(uint)(uVar19 - 1 != 0) | uVar13;
            uVar40 = 0xffffffff;
            if (iVar28 - 1U < 0x20) {
              uVar40 = uVar7;
            }
            uVar45 = 0;
            do {
              if ((longlong)uVar45 < (longlong)(iVar6 >> 5)) {
                uVar40 = uVar40 & puVar9[uVar45];
              }
              else {
                uVar40 = 0;
              }
              uVar38 = uVar37 & puVar16[uVar45];
              uVar41 = 0xffffffff;
              if (uVar19 - 1 == uVar45) {
                uVar41 = uVar13;
              }
              uVar37 = 0xffffffff;
              if (uVar19 - 2 == uVar45) {
                uVar37 = uVar13;
              }
              puVar16[uVar45] = uVar41 & (uVar38 ^ uVar40);
              bVar46 = (iVar6 >> 5) - 2 == uVar45;
              uVar45 = uVar45 + 1;
              uVar40 = 0xffffffff;
              if (bVar46) {
                uVar40 = uVar7;
              }
            } while (uVar19 != uVar45);
          }
        }
        puVar9 = (uint *)(plVar31 + 9);
        if (puVar9 != local_100) {
          uVar7 = *(int *)(local_108 + 0x2a8) + 0x1fU & 0xffffffe0;
          *(undefined4 *)(plVar31 + 0xc) = 0;
          if ((*(int *)((longlong)plVar31 + 100) < (int)uVar7) ||
             (0x80 < *(int *)((longlong)plVar31 + 100))) {
            if ((int)uVar7 < 0x81) {
              uVar7 = 0x80;
            }
            *(uint *)((longlong)plVar31 + 100) = uVar7;
            FUN_1446efbd8(puVar9);
          }
          iVar28 = *(int *)(lVar11 + 0x2a8);
          *(int *)(plVar31 + 0xc) = iVar28;
          if (iVar28 != 0) {
            puVar16 = *(uint **)(lVar11 + 0x2a0);
            if (*(uint **)(lVar11 + 0x2a0) == (uint *)0x0) {
              puVar16 = puVar27;
            }
            puVar15 = (uint *)plVar31[0xb];
            if ((uint *)plVar31[0xb] == (uint *)0x0) {
              puVar15 = puVar9;
            }
            memcpy(puVar15,puVar16,(ulonglong)(iVar28 + 0x1fU >> 3 & 0xfffffffc));
          }
        }
        FUN_142ac2d42();
        uVar7 = *(uint *)(lVar11 + 0x2a8);
        if (uVar7 == 0) {
          uVar44 = 1;
          iVar28 = 0;
          uVar45 = 0;
          uVar13 = 0;
        }
        else {
          puVar16 = *(uint **)(lVar11 + 0x2a0);
          if (*(uint **)(lVar11 + 0x2a0) == (uint *)0x0) {
            puVar16 = puVar27;
          }
          uVar13 = *puVar16;
          if (uVar13 == 0) {
            iVar28 = uVar7 + 0x1e;
            if (-1 < (int)(uVar7 - 1)) {
              iVar28 = uVar7 - 1;
            }
            uVar45 = 0;
            uVar44 = (ulonglong)(uint)(iVar28 >> 5);
            if (iVar28 >> 5 < 1) {
              uVar44 = uVar45;
            }
            iVar28 = 0;
            do {
              if (uVar44 == uVar45) goto LAB_143707ad7;
              iVar28 = iVar28 + 0x20;
              uVar13 = puVar16[uVar45 + 1];
              uVar45 = uVar45 + 1;
            } while (uVar13 == 0);
          }
          else {
            iVar28 = 0;
            uVar45 = 0;
          }
          uVar44 = (ulonglong)(-uVar13 & uVar13);
          uVar33 = uVar44 * 2 + 1;
          lVar39 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          uVar13 = (iVar28 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
          if ((int)uVar7 <= (int)uVar13) {
            uVar13 = uVar7;
          }
        }
        if ((int)uVar13 < (int)uVar7) {
          uVar19 = 0xffffffff;
          do {
            uVar37 = 1 << ((byte)uVar13 & 0x1f);
            puVar16 = (uint *)plVar31[0xb];
            if ((uint *)plVar31[0xb] == (uint *)0x0) {
              puVar16 = puVar9;
            }
            uVar40 = uVar13 + 0x1f;
            if (-1 < (int)uVar13) {
              uVar40 = uVar13;
            }
            iVar6 = (int)uVar40 >> 5;
            if ((puVar16[iVar6] >> (uVar13 & 0x1f) & 1) == 0) {
              puVar15 = (uint *)plVar31[7];
              if ((uint *)plVar31[7] == (uint *)0x0) {
                puVar15 = local_110;
              }
              if ((puVar15[iVar6] & uVar37) == 0) {
                do {
                  uVar13 = *(uint *)(*(longlong *)(lVar34 + 0x108) + (longlong)(int)uVar13 * 4);
                  puVar27 = local_100;
                  if (uVar13 == 0xffffffff) goto LAB_1437079e1;
                  uVar40 = uVar13 + 0x1f;
                  if (-1 < (int)uVar13) {
                    uVar40 = uVar13;
                  }
                } while ((puVar16[(int)uVar40 >> 5] >> (uVar13 & 0x1f) & 1) == 0);
                puVar16[iVar6] = puVar16[iVar6] | uVar37;
                uVar7 = *(uint *)(local_108 + 0x2a8);
              }
            }
LAB_1437079e1:
            uVar19 = uVar19 & ~(uint)uVar44;
            puVar16 = *(uint **)(local_108 + 0x2a0);
            if (*(uint **)(local_108 + 0x2a0) == (uint *)0x0) {
              puVar16 = puVar27;
            }
            iVar6 = (int)uVar45;
            lVar39 = (longlong)iVar6;
            uVar13 = puVar16[lVar39] & uVar19;
            lVar11 = local_108;
            if (uVar13 == 0) {
              iVar21 = uVar7 + 0x1e;
              if (-1 < (int)(uVar7 - 1)) {
                iVar21 = uVar7 - 1;
              }
              iVar21 = iVar21 >> 5;
              iVar43 = iVar21;
              if (iVar21 < iVar6) {
                iVar43 = iVar6;
              }
              if (iVar21 <= iVar6) break;
              lVar30 = 0;
              while( true ) {
                iVar28 = iVar28 + 0x20;
                uVar13 = puVar16[lVar39 + lVar30 + 1];
                if (uVar13 != 0) break;
                lVar30 = lVar30 + 1;
                if (iVar43 - lVar39 == lVar30) goto LAB_143707ad7;
              }
              uVar45 = (ulonglong)(iVar6 + (int)lVar30 + 1);
              uVar19 = 0xffffffff;
            }
            uVar44 = (ulonglong)(-uVar13 & uVar13);
            uVar33 = uVar44 * 2 + 1;
            lVar39 = 0x3f;
            if (uVar33 != 0) {
              for (; uVar33 >> lVar39 == 0; lVar39 = lVar39 + -1) {
              }
            }
            uVar13 = (iVar28 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
          } while ((int)uVar13 < (int)uVar7);
        }
LAB_143707ad7:
        if (local_110 != local_118) {
          uVar7 = *(int *)(lVar11 + 0x288) + 0x1fU & 0xffffffe0;
          *(undefined4 *)(plVar31 + 8) = 0;
          if ((*(int *)((longlong)plVar31 + 0x44) < (int)uVar7) ||
             (0x80 < *(int *)((longlong)plVar31 + 0x44))) {
            if ((int)uVar7 < 0x81) {
              uVar7 = 0x80;
            }
            *(uint *)((longlong)plVar31 + 0x44) = uVar7;
            FUN_1446efbd8(local_110,0);
          }
          iVar28 = *(int *)(lVar11 + 0x288);
          *(int *)(plVar31 + 8) = iVar28;
          if (iVar28 != 0) {
            puVar27 = *(uint **)(lVar11 + 0x280);
            if (*(uint **)(lVar11 + 0x280) == (uint *)0x0) {
              puVar27 = local_118;
            }
            puVar16 = local_110;
            if ((uint *)plVar31[7] != (uint *)0x0) {
              puVar16 = (uint *)plVar31[7];
            }
            memcpy(puVar16,puVar27,(ulonglong)(iVar28 + 0x1fU >> 3 & 0xfffffffc));
          }
        }
        puVar27 = local_d8;
        uVar7 = *(uint *)(plVar31 + 0xc);
        if ((uint *)plVar31[0xb] != (uint *)0x0) {
          puVar9 = (uint *)plVar31[0xb];
        }
        uVar13 = 0xffffffff >> (-(char)((int)uVar7 % 0x20) & 0x1fU);
        if ((int)uVar7 % 0x20 < 1) {
          uVar13 = 0xffffffff;
        }
        if ((int)uVar7 < 1) {
          iVar6 = 0;
        }
        else {
          uVar45 = (ulonglong)uVar7 + 0x1f >> 5;
          uVar19 = 0xffffffff;
          if (uVar7 < 0x21) {
            uVar19 = uVar13;
          }
          uVar44 = 0;
          iVar6 = 0;
          do {
            uVar33 = (ulonglong)(uVar19 & puVar9[uVar44]) -
                     (ulonglong)((uVar19 & puVar9[uVar44]) >> 1 & 0x55555555);
            uVar33 = (uVar33 >> 2 & 0x3333333333333333) + (uVar33 & 0x3333333333333333);
            iVar6 = iVar6 + (uint)(byte)(((uVar33 >> 4) + uVar33 & 0xf0f0f0f0f0f0f0f) *
                                         0x101010101010101 >> 0x38);
            bVar46 = uVar45 - 2 == uVar44;
            uVar44 = uVar44 + 1;
            uVar19 = 0xffffffff;
            if (bVar46) {
              uVar19 = uVar13;
            }
          } while (uVar45 != uVar44);
        }
        uVar19 = (uint)local_d0 & ~(uint)local_f0;
        puVar9 = *(uint **)(lVar11 + 0x210);
        if (*(uint **)(lVar11 + 0x210) == (uint *)0x0) {
          puVar9 = local_d8;
        }
        uVar7 = *(uint *)(lVar11 + 0x218);
        iVar21 = (int)local_c0;
        lVar34 = (longlong)iVar21;
        uVar13 = puVar9[lVar34] & uVar19;
        puVar22 = local_c0;
        iVar28 = (int)local_c8;
        if (uVar13 == 0) {
          iVar43 = uVar7 + 0x1e;
          if (-1 < (int)(uVar7 - 1)) {
            iVar43 = uVar7 - 1;
          }
          iVar43 = iVar43 >> 5;
          iVar28 = (int)local_c8 + 0x20;
          iVar17 = iVar43;
          if (iVar43 < iVar21) {
            iVar17 = iVar21;
          }
          if (iVar21 < iVar43) {
            lVar39 = 0;
            do {
              uVar13 = puVar9[lVar34 + lVar39 + 1];
              if (uVar13 != 0) {
                uVar19 = 0xffffffff;
                puVar22 = (ulonglong *)(ulonglong)(iVar21 + (int)lVar39 + 1);
                goto LAB_143707ca6;
              }
              iVar28 = iVar28 + 0x20;
              lVar39 = lVar39 + 1;
            } while (iVar17 - lVar34 != lVar39);
            uVar19 = 0xffffffff;
            lVar34 = (longlong)iVar17;
          }
          puVar22 = (ulonglong *)(lVar34 + 1U & 0xffffffff);
          lVar11 = local_108;
          uVar45 = local_f0;
          uVar13 = uVar7;
        }
        else {
LAB_143707ca6:
          uVar45 = (ulonglong)(-uVar13 & uVar13);
          uVar44 = uVar45 * 2 + 1;
          lVar34 = 0x3f;
          if (uVar44 != 0) {
            for (; uVar44 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          uVar13 = (iVar28 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
          if ((int)uVar7 <= (int)uVar13) {
            uVar13 = uVar7;
          }
        }
        iVar6 = (int)local_f8 + iVar6;
      } while (uVar13 != (uint)local_e0);
      if (0 < iVar6) {
        FUN_145969f94(*(undefined8 *)(lVar11 + 0xf0),local_120);
        uVar7 = *(uint *)(lVar11 + 0x218);
        uVar45 = (ulonglong)uVar7;
        if (uVar7 == 0) {
          uVar35 = 1;
          uVar44 = 0;
          iVar28 = 0;
          uVar13 = 0;
        }
        else {
          puVar9 = *(uint **)(lVar11 + 0x210);
          if (*(uint **)(lVar11 + 0x210) == (uint *)0x0) {
            puVar9 = puVar27;
          }
          uVar13 = *puVar9;
          if (uVar13 == 0) {
            iVar28 = uVar7 + 0x1e;
            if (-1 < (int)(uVar7 - 1)) {
              iVar28 = uVar7 - 1;
            }
            uVar44 = 0;
            uVar33 = (ulonglong)(uint)(iVar28 >> 5);
            if (iVar28 >> 5 < 1) {
              uVar33 = uVar44;
            }
            iVar28 = 0;
            do {
              if (uVar33 == uVar44) goto LAB_143707fbf;
              iVar28 = iVar28 + 0x20;
              uVar13 = puVar9[uVar44 + 1];
              uVar44 = uVar44 + 1;
            } while (uVar13 == 0);
          }
          else {
            uVar44 = 0;
            iVar28 = 0;
          }
          uVar35 = (ulonglong)(-uVar13 & uVar13);
          uVar33 = uVar35 * 2 + 1;
          lVar34 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          uVar13 = (iVar28 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
          if ((int)uVar7 <= (int)uVar13) {
            uVar13 = uVar7;
          }
        }
        if (uVar13 != uVar7) {
          uVar19 = 0xffffffff;
          local_b0 = uVar45;
          do {
            puVar14 = *(ulonglong **)(*local_b8 + (longlong)(int)uVar13 * 0x10);
            uVar33 = *puVar14;
            puVar22 = puVar14 + 9;
            uVar13 = (uint)puVar14[0xc];
            local_d0 = CONCAT44(local_d0._4_4_,iVar28);
            local_e4 = uVar19;
            local_e0 = uVar44;
            if (uVar13 == 0) {
              uVar44 = 1;
              iVar28 = 0;
              local_110 = (uint *)0x0;
              uVar19 = 0;
            }
            else {
              puVar10 = (ulonglong *)puVar14[0xb];
              if ((ulonglong *)puVar14[0xb] == (ulonglong *)0x0) {
                puVar10 = puVar22;
              }
              uVar19 = (uint)*puVar10;
              if (uVar19 == 0) {
                iVar28 = uVar13 + 0x1e;
                if (-1 < (int)(uVar13 - 1)) {
                  iVar28 = uVar13 - 1;
                }
                puVar27 = (uint *)0x0;
                uVar37 = iVar28 >> 5;
                if (iVar28 >> 5 < 1) {
                  uVar37 = 0;
                }
                iVar28 = 0;
                do {
                  if ((uint *)(ulonglong)uVar37 == puVar27) goto LAB_1437084f9;
                  iVar28 = iVar28 + 0x20;
                  uVar19 = *(uint *)((longlong)puVar10 + (longlong)puVar27 * 4 + 4);
                  puVar27 = (uint *)((longlong)puVar27 + 1);
                } while (uVar19 == 0);
              }
              else {
                iVar28 = 0;
                local_110 = (uint *)0x0;
                puVar27 = local_110;
              }
              local_110 = puVar27;
              uVar44 = (ulonglong)(-uVar19 & uVar19);
              uVar2 = uVar44 * 2 + 1;
              lVar34 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                }
              }
              uVar19 = (iVar28 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
              if ((int)uVar13 <= (int)uVar19) {
                uVar19 = uVar13;
              }
            }
            if ((int)uVar19 < (int)uVar13) {
              uVar45 = (ulonglong)((int)puVar14[2] - 1);
              local_c8 = puVar14 + 5;
              uVar37 = 0xffffffff;
              bVar46 = true;
              lVar34 = 0;
              lVar39 = 0;
              uVar7 = 0;
              local_f8 = puVar22;
              local_f0 = uVar33;
              local_c0 = puVar14;
              local_a8 = uVar35;
              do {
                local_100 = (uint *)CONCAT44(local_100._4_4_,iVar28);
                local_118 = (uint *)CONCAT44(local_118._4_4_,uVar37);
                if ((int)uVar45 < 1) {
                  if (bVar46) {
                    lVar30 = *(longlong *)(uVar33 + 0xd8);
                    goto LAB_143708194;
                  }
                }
                else {
                  lVar30 = *(longlong *)(uVar33 + 0xd8);
                  uVar45 = uVar45 & 0xffffffff;
                  do {
                    uVar37 = *(uint *)(lVar30 + uVar45 * 8);
                    if ((uVar37 <= uVar19) && (uVar19 < uVar37 + *(int *)(lVar30 + 4 + uVar45 * 8)))
                    {
                      if (bVar46) goto LAB_143708194;
                      goto LAB_14370834f;
                    }
                    bVar46 = true;
                    bVar5 = 1 < (longlong)uVar45;
                    uVar45 = uVar45 - 1;
                  } while (bVar5);
                  uVar45 = 0;
LAB_143708194:
                  iVar6 = (int)uVar45;
                  iVar28 = *(int *)(lVar30 + (longlong)iVar6 * 8);
                  uVar7 = *(int *)(lVar30 + 4 + (longlong)iVar6 * 8) + iVar28;
                  if (uVar7 == 0xffffffff) {
                    uVar7 = uVar13;
                  }
                  puVar10 = (ulonglong *)puVar14[0xb];
                  if ((ulonglong *)puVar14[0xb] == (ulonglong *)0x0) {
                    puVar10 = puVar22;
                  }
                  iVar21 = iVar28 + 0x1f;
                  if (-1 < iVar28) {
                    iVar21 = iVar28;
                  }
                  iVar21 = iVar21 >> 5;
                  iVar43 = uVar7 + 0x3e;
                  if (-1 < (int)(uVar7 + 0x1f)) {
                    iVar43 = uVar7 + 0x1f;
                  }
                  iVar43 = iVar43 >> 5;
                  uVar37 = -1 << ((byte)iVar28 & 0x1f);
                  uVar13 = 0xffffffff >> (-(char)((int)uVar7 % 0x20) & 0x1fU);
                  if ((int)uVar7 % 0x20 < 1) {
                    uVar13 = 0xffffffff;
                  }
                  uVar7 = uVar13 & uVar37;
                  if (iVar21 == iVar43 + -1) {
                    uVar13 = uVar7;
                  }
                  if (iVar21 < iVar43) {
                    if (iVar21 == iVar43 + -1) {
                      uVar37 = uVar7;
                    }
                    lVar34 = (longlong)iVar21;
                    iVar28 = 0;
                    do {
                      uVar37 = uVar37 & *(uint *)((longlong)puVar10 + lVar34 * 4);
                      uVar33 = (ulonglong)uVar37 - (ulonglong)(uVar37 >> 1 & 0x55555555);
                      uVar33 = (uVar33 >> 2 & 0x3333333333333333) + (uVar33 & 0x3333333333333333);
                      iVar28 = iVar28 + (uint)(byte)(((uVar33 >> 4) + uVar33 & 0xf0f0f0f0f0f0f0f) *
                                                     0x101010101010101 >> 0x38);
                      bVar46 = (longlong)iVar43 + -2 == lVar34;
                      lVar34 = lVar34 + 1;
                      uVar37 = 0xffffffff;
                      if (bVar46) {
                        uVar37 = uVar13;
                      }
                    } while (iVar43 != lVar34);
                  }
                  else {
                    iVar28 = 0;
                  }
                  lVar11 = *(longlong *)(lVar11 + 0xf0);
                  plVar31 = (longlong *)(lVar11 + 8);
                  iVar21 = *(int *)(lVar11 + 0x10);
                  if (iVar21 == 0) {
                    plVar29 = (longlong *)puVar14[0x1f];
LAB_1437082dc:
                    if (plVar29 != (longlong *)0x0) {
                      (**(code **)(*plVar29 + 0x30))(plVar29);
                      iVar21 = *(int *)(lVar11 + 0x10);
                    }
                    *(uint *)(lVar11 + 0x10) = iVar21 + 1U;
                    if (*(uint *)(lVar11 + 0x14) < iVar21 + 1U) {
                      FUN_14640617a(plVar31,iVar21);
                    }
                    lVar34 = *plVar31;
                    lVar39 = (longlong)iVar21 * 0x10;
                    plVar20 = (longlong *)(lVar34 + lVar39);
                    *(longlong **)(lVar34 + lVar39) = plVar29;
                    *(ulonglong *)(lVar34 + 8 + lVar39) = uVar45 & 0xffffffff;
                  }
                  else {
                    plVar29 = (longlong *)puVar14[0x1f];
                    plVar20 = (longlong *)((longlong)(iVar21 + -1) * 0x10 + *plVar31);
                    if (((plVar20 == (longlong *)0x0) || ((longlong *)*plVar20 != plVar29)) ||
                       ((int)plVar20[1] != iVar6)) goto LAB_1437082dc;
                  }
                  lVar34 = *(longlong *)(lVar11 + 0x18) + (longlong)*(int *)(lVar11 + 0x20) * 4;
                  lVar39 = *(longlong *)(lVar11 + 0x18) +
                           ((longlong)*(int *)(lVar11 + 0x24) + (longlong)*(int *)(lVar11 + 0x20)) *
                           4;
                  *(int *)((longlong)plVar20 + 0xc) = *(int *)((longlong)plVar20 + 0xc) + iVar28;
                  *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + iVar28;
                  uVar7 = 0;
                  puVar22 = local_f8;
                  puVar14 = local_c0;
                  lVar11 = local_108;
                  uVar33 = local_f0;
                }
LAB_14370834f:
                puVar10 = (ulonglong *)puVar14[7];
                if ((ulonglong *)puVar14[7] == (ulonglong *)0x0) {
                  puVar10 = local_c8;
                }
                uVar13 = uVar19 + 0x1f;
                if (-1 < (int)uVar19) {
                  uVar13 = uVar19;
                }
                uVar40 = (uint)uVar45;
                uVar37 = uVar19;
                if ((*(uint *)((longlong)puVar10 + (longlong)((int)uVar13 >> 5) * 4) >>
                     (uVar19 & 0x1f) & 1) == 0) {
                  uVar35 = uVar45 & 0xffffffff;
                  do {
                    uVar37 = *(uint *)(*(longlong *)(uVar33 + 0x108) + (longlong)(int)uVar37 * 4);
                    if (uVar37 == 0xffffffff) {
                      uVar13 = 0;
                      goto LAB_1437083cf;
                    }
                    uVar40 = (int)uVar35 + 1;
                    uVar35 = (ulonglong)uVar40;
                    uVar13 = uVar37 + 0x1f;
                    if (-1 < (int)uVar37) {
                      uVar13 = uVar37;
                    }
                  } while ((*(uint *)((longlong)puVar10 + (longlong)((int)uVar13 >> 5) * 4) >>
                            (uVar37 & 0x1f) & 1) == 0);
                }
                uVar13 = uVar40 << 0x18 |
                         *(uint *)(puVar14[3] +
                                  (longlong)
                                  *(int *)(*(longlong *)(uVar33 + 0xf8) + (longlong)(int)uVar37 * 4)
                                  * 4);
LAB_1437083cf:
                *(undefined4 *)(lVar34 + (ulonglong)uVar7 * 4) =
                     *(undefined4 *)(*(longlong *)(uVar33 + 0xe8) + (longlong)(int)uVar19 * 4);
                *(uint *)(lVar39 + (ulonglong)uVar7 * 4) = uVar13;
                uVar37 = (uint)local_118 & ~(uint)uVar44;
                puVar10 = (ulonglong *)puVar14[0xb];
                if ((ulonglong *)puVar14[0xb] == (ulonglong *)0x0) {
                  puVar10 = puVar22;
                }
                uVar13 = (uint)puVar14[0xc];
                iVar6 = (int)local_110;
                lVar30 = (longlong)iVar6;
                uVar19 = *(uint *)((longlong)puVar10 + lVar30 * 4) & uVar37;
                iVar28 = (int)local_100;
                if (uVar19 == 0) {
                  iVar21 = uVar13 + 0x1e;
                  if (-1 < (int)(uVar13 - 1)) {
                    iVar21 = uVar13 - 1;
                  }
                  iVar21 = iVar21 >> 5;
                  iVar43 = iVar21;
                  if (iVar21 < iVar6) {
                    iVar43 = iVar6;
                  }
                  if (iVar21 <= iVar6) break;
                  lVar36 = 0;
                  while( true ) {
                    iVar28 = iVar28 + 0x20;
                    uVar19 = *(uint *)((longlong)puVar10 + lVar36 * 4 + lVar30 * 4 + 4);
                    if (uVar19 != 0) break;
                    lVar36 = lVar36 + 1;
                    if (iVar43 - lVar30 == lVar36) goto LAB_1437084e2;
                  }
                  local_110 = (uint *)(ulonglong)(iVar6 + (int)lVar36 + 1);
                  uVar37 = 0xffffffff;
                }
                uVar7 = uVar7 + 1;
                uVar44 = (ulonglong)(-uVar19 & uVar19);
                uVar35 = uVar44 * 2 + 1;
                lVar30 = 0x3f;
                if (uVar35 != 0) {
                  for (; uVar35 >> lVar30 == 0; lVar30 = lVar30 + -1) {
                  }
                }
                uVar19 = (iVar28 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
                bVar46 = false;
              } while ((int)uVar19 < (int)uVar13);
LAB_1437084e2:
              uVar7 = *(uint *)(lVar11 + 0x218);
              uVar35 = local_a8;
              uVar45 = local_b0;
            }
LAB_1437084f9:
            uVar19 = local_e4 & ~(uint)uVar35;
            puVar27 = *(uint **)(lVar11 + 0x210);
            if (*(uint **)(lVar11 + 0x210) == (uint *)0x0) {
              puVar27 = local_d8;
            }
            iVar6 = (int)local_e0;
            lVar34 = (longlong)iVar6;
            uVar13 = puVar27[lVar34] & uVar19;
            uVar44 = local_e0;
            iVar28 = (uint)local_d0;
            if (uVar13 == 0) {
              iVar21 = uVar7 + 0x1e;
              if (-1 < (int)(uVar7 - 1)) {
                iVar21 = uVar7 - 1;
              }
              iVar21 = iVar21 >> 5;
              iVar28 = (uint)local_d0 + 0x20;
              iVar43 = iVar21;
              if (iVar21 < iVar6) {
                iVar43 = iVar6;
              }
              if (iVar6 < iVar21) {
                lVar39 = 0;
                do {
                  uVar13 = puVar27[lVar34 + lVar39 + 1];
                  if (uVar13 != 0) {
                    uVar19 = 0xffffffff;
                    uVar44 = (ulonglong)(iVar6 + (int)lVar39 + 1);
                    goto LAB_14370858a;
                  }
                  iVar28 = iVar28 + 0x20;
                  lVar39 = lVar39 + 1;
                } while (iVar43 - lVar34 != lVar39);
                uVar19 = 0xffffffff;
                lVar34 = (longlong)iVar43;
              }
              uVar44 = lVar34 + 1U & 0xffffffff;
              uVar45 = local_b0;
              lVar11 = local_108;
              uVar13 = uVar7;
            }
            else {
LAB_14370858a:
              uVar35 = (ulonglong)(-uVar13 & uVar13);
              uVar33 = uVar35 * 2 + 1;
              lVar34 = 0x3f;
              if (uVar33 != 0) {
                for (; uVar33 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                }
              }
              uVar13 = (iVar28 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
              if ((int)uVar7 <= (int)uVar13) {
                uVar13 = uVar7;
              }
            }
          } while (uVar13 != (uint)uVar45);
        }
LAB_143707fbf:
        puVar27 = *(uint **)(lVar11 + 0xf0);
        if (0 < (int)puVar27[9]) {
          lVar11 = *(longlong *)(local_120 + 0x18);
          uVar4 = *(undefined8 *)(*(longlong *)puVar27 + 0x28);
          if (*(char *)(lVar11 + 0x69) == '\0') {
            FUN_14002049c(lVar11,1);
            (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar4);
            FUN_14002049c(lVar11,0);
          }
          else {
            (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar4);
          }
          lVar11 = local_108;
          if (0 < (int)puVar27[8]) {
            bVar24 = DAT_14c761b98 != 0 & DAT_14ca84e23;
            bVar46 = DAT_14c760da4 == 1;
            FUN_145bdf880(*(undefined8 *)
                           (&DAT_14ca8c1f0 +
                           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8)
                          ,&local_98);
            lVar11 = local_108;
            local_118 = puVar27;
            if ((longlong)(int)puVar27[4] != 0) {
              bVar24 = bVar24 & bVar46;
              local_c8 = (ulonglong *)CONCAT71(local_c8._1_7_,bVar24);
              uVar7 = (uint)bVar24 * 2 + 2;
              plVar31 = *(longlong **)(puVar27 + 2);
              plVar29 = plVar31 + (longlong)(int)puVar27[4] * 2;
              local_110 = (uint *)(local_120 + 0x218);
              local_100 = (uint *)(local_120 + 0x230);
              do {
                if (*plVar31 != 0) {
                  uVar45 = *(ulonglong *)(*plVar31 + 8);
                  uVar13 = ((uint)(uVar45 >> 0x14) & 0xffff ^ (uint)(uVar45 >> 4)) * -0x7a143595;
                  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
                  uVar19 = uVar13 & 0x7fffffff ^ uVar13 >> 0x10;
                  uVar13 = *(uint *)(local_120 + 0x248);
                  uVar37 = uVar19 & uVar13;
                  puVar27 = *(uint **)(local_120 + 0x238);
                  if (*(uint **)(local_120 + 0x238) == (uint *)0x0) {
                    puVar27 = local_100;
                  }
                  puVar9 = *(uint **)(local_120 + 0x220);
                  if (*(uint **)(local_120 + 0x220) == (uint *)0x0) {
                    puVar9 = local_110;
                  }
                  do {
                    if (puVar27[(int)uVar37] == uVar19) {
                      lVar11 = (longlong)(int)puVar9[(int)uVar37] * 0x10;
                      if (uVar45 == *(ulonglong *)(*(longlong *)(local_120 + 0x1d8) + lVar11)) {
                        if (((puVar9[(int)uVar37] != 0xffffffff) &&
                            (plVar20 = (longlong *)(*(longlong *)(local_120 + 0x1d8) + lVar11 + 8),
                            plVar20 != (longlong *)0x0)) && (lVar11 = *plVar20, lVar11 != 0))
                        goto LAB_14370878d;
                        break;
                      }
                    }
                    uVar37 = uVar37 + 1 & uVar13;
                  } while (uVar37 != (*(int *)(local_120 + 0x24c) + uVar19 + 1 & uVar13));
                }
                lVar11 = FUN_14473c272(local_120,plVar31,0);
LAB_14370878d:
                FUN_14022b18a(local_120,lVar11);
                plVar31 = plVar31 + 2;
              } while (plVar31 != plVar29);
              puVar27 = local_118;
              lVar11 = local_108;
              if ((longlong)(int)local_118[4] != 0) {
                puVar22 = *(ulonglong **)(local_118 + 2);
                local_c0 = puVar22 + (longlong)(int)local_118[4] * 2;
                local_d8 = (uint *)(local_120 + 0x198);
                local_f8 = (ulonglong *)(local_120 + 0x70);
                local_d0 = local_120 + 0x98;
                local_f0 = CONCAT44(local_f0._4_4_,uVar7);
                local_e4 = uVar7 & 0xfffffffc;
                local_e0 = local_120 + 0x168;
                iVar28 = 0;
                do {
                  puVar14 = local_f8;
                  if (*puVar22 != 0) {
                    uVar45 = *(ulonglong *)(*puVar22 + 8);
                    uVar7 = ((uint)(uVar45 >> 0x14) & 0xffff ^ (uint)(uVar45 >> 4)) * -0x7a143595;
                    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
                    uVar13 = uVar7 & 0x7fffffff ^ uVar7 >> 0x10;
                    uVar7 = *(uint *)(local_120 + 0x248);
                    uVar19 = uVar13 & uVar7;
                    puVar27 = *(uint **)(local_120 + 0x238);
                    if (*(uint **)(local_120 + 0x238) == (uint *)0x0) {
                      puVar27 = local_100;
                    }
                    puVar9 = *(uint **)(local_120 + 0x220);
                    if (*(uint **)(local_120 + 0x220) == (uint *)0x0) {
                      puVar9 = local_110;
                    }
                    do {
                      if (puVar27[(int)uVar19] == uVar13) {
                        lVar11 = (longlong)(int)puVar9[(int)uVar19] * 0x10;
                        if (uVar45 == *(ulonglong *)(*(longlong *)(local_120 + 0x1d8) + lVar11)) {
                          if (puVar9[(int)uVar19] != 0xffffffff) {
                            plVar31 = (longlong *)(*(longlong *)(local_120 + 0x1d8) + lVar11 + 8);
                            if (plVar31 == (longlong *)0x0) {
                              lVar11 = 0;
                            }
                            else {
                              lVar11 = *plVar31;
                            }
                            goto LAB_1437088ee;
                          }
                          break;
                        }
                      }
                      uVar19 = uVar19 + 1 & uVar7;
                    } while (uVar19 != (*(int *)(local_120 + 0x24c) + uVar13 + 1 & uVar7));
                  }
                  lVar11 = 0;
LAB_1437088ee:
                  uVar45 = puVar22[1];
                  puVar23 = (undefined8 *)
                            (*(longlong *)(local_120 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar12 = puVar23 + 9;
                  if (*(undefined8 **)(local_120 + 0x78) < puVar12) {
                    FUN_140023dd8(local_f8,0x50);
                    puVar23 = (undefined8 *)(*puVar14 + 7 & 0xfffffffffffffff8);
                    puVar12 = puVar23 + 9;
                  }
                  *(undefined8 **)(local_120 + 0x70) = puVar12;
                  puVar23[1] = *(undefined8 *)(lVar11 + 8);
                  puVar23[2] = 0;
                  *(undefined1 *)(puVar23 + 3) = 0;
                  *(undefined8 *)((longlong)puVar23 + 0x1c) = 0xffffffffffffffff;
                  *(undefined1 *)(puVar23 + 5) = 0;
                  *puVar23 = &PTR_FUN_14a1fb948;
                  *(undefined1 *)(puVar23 + 6) = 0x1c;
                  *(char *)((longlong)puVar23 + 0x31) = (char)uVar45;
                  *(undefined4 *)((longlong)puVar23 + 0x32) = 0;
                  *(undefined1 *)((longlong)puVar23 + 0x36) = 0;
                  *(undefined1 *)(puVar23 + 7) = 0;
                  puVar23[8] = lVar11;
                  iVar6 = *(int *)(local_120 + 0x1a0);
                  *(uint *)(local_120 + 0x1a0) = iVar6 + 1U;
                  if (*(uint *)(local_120 + 0x1a4) < iVar6 + 1U) {
                    FUN_1447568fc(local_d8,iVar6);
                  }
                  *(undefined8 **)(*(longlong *)(local_120 + 0x198) + (longlong)iVar6 * 8) = puVar23
                  ;
                  *(int *)((longlong)puVar23 + 0x1c) = *(int *)(local_120 + 0x1a0) + -1;
                  lVar11 = FUN_144735dd8(local_120,local_118,0);
                  puVar14 = local_f8;
                  cVar3 = *(char *)(lVar11 + 0x68);
                  puVar42 = (undefined8 *)
                            (*(longlong *)(local_120 + 0x70) + 7U & 0xfffffffffffffff8);
                  puVar12 = puVar42 + 9;
                  if (*(undefined8 **)(local_120 + 0x78) < puVar12) {
                    FUN_140023dd8(local_f8,0x50);
                    puVar42 = (undefined8 *)(*puVar14 + 7 & 0xfffffffffffffff8);
                    puVar12 = puVar42 + 9;
                  }
                  *(undefined8 **)(local_120 + 0x70) = puVar12;
                  puVar42[1] = *(undefined8 *)(lVar11 + 8);
                  puVar42[2] = 0;
                  *(undefined1 *)(puVar42 + 3) = 3;
                  *(undefined8 *)((longlong)puVar42 + 0x1c) = 0xffffffffffffffff;
                  *puVar42 = &PTR_FUN_14a1fb168;
                  *(byte *)(puVar42 + 5) = cVar3 >> 7 & 0x1c;
                  *(undefined8 *)((longlong)puVar42 + 0x2c) = 0xffffffff00000000;
                  puVar42[7] = 0;
                  puVar42[8] = lVar11;
                  iVar6 = *(int *)(local_120 + 0x1a0);
                  *(uint *)(local_120 + 0x1a0) = iVar6 + 1U;
                  if (*(uint *)(local_120 + 0x1a4) < iVar6 + 1U) {
                    FUN_1447568fc(local_d8,iVar6);
                  }
                  puVar14 = local_f8;
                  *(undefined8 **)(*(longlong *)(local_120 + 0x198) + (longlong)iVar6 * 8) = puVar42
                  ;
                  *(int *)((longlong)puVar42 + 0x1c) = *(int *)(local_120 + 0x1a0) + -1;
                  puVar25 = (undefined8 *)
                            (*(longlong *)(local_120 + 0x70) + 0xfU & 0xfffffffffffffff0);
                  puVar12 = puVar25 + 6;
                  if (*(undefined8 **)(local_120 + 0x78) < puVar12) {
                    FUN_140023dd8(local_f8,0x40);
                    puVar25 = (undefined8 *)(*puVar14 + 0xf & 0xfffffffffffffff0);
                    puVar12 = puVar25 + 6;
                  }
                  *(undefined8 **)(local_120 + 0x70) = puVar12;
                  *puVar25 = &PTR_FUN_14aabc4c8;
                  puVar25[2] = 0;
                  puVar25[3] = 0;
                  iVar6 = *(int *)(local_120 + 0xa0);
                  *(uint *)(local_120 + 0xa0) = iVar6 + 1U;
                  if (*(uint *)(local_120 + 0xa4) < iVar6 + 1U) {
                    FUN_1448cfae8(local_d0,iVar6);
                  }
                  lVar11 = local_120;
                  puVar12 = puVar25 + 2;
                  *(undefined8 **)(*(longlong *)(local_120 + 0x98) + (longlong)iVar6 * 8) = puVar25;
                  puVar25[2] = puVar23;
                  puVar25[3] = puVar42;
                  *(int *)(puVar25 + 4) = iVar28;
                  *(uint *)((longlong)puVar25 + 0x24) = local_118[9] + iVar28;
                  iVar6 = *(int *)((longlong)puVar22 + 0xc);
                  *(int *)(puVar25 + 5) = iVar6;
                  iVar21 = iVar6 + 0x7e;
                  if (-1 < iVar6 + 0x3f) {
                    iVar21 = iVar6 + 0x3f;
                  }
                  FUN_1414d71fc();
                  local_78 = (undefined8 *)0x0;
                  lStack_70 = 0;
                  FUN_1448f70da(CONCAT44(uStack_94,local_98),&DAT_14cb09c38,puVar12,&local_78);
                  local_88 = local_98;
                  uStack_84 = uStack_94;
                  uStack_80 = uStack_90;
                  uStack_7c = uStack_8c;
                  FUN_140069376(lVar11);
                  puVar14 = local_f8;
                  if ((char)local_c8 == '\0') {
                    uVar26 = (undefined6)((ulonglong)puVar25 >> 0x10);
                    uVar8 = (undefined4)CONCAT62(uVar26,2);
                    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == 1)) &&
                       ((DAT_14ca84e6a == '\x01' &&
                        ((((DAT_14ca84e99 & 1) == 0 && ((local_f0 & 2) != 0)) &&
                         (DAT_14c760ddc == 2)))))) {
                      uVar8 = (undefined4)CONCAT62(uVar26,4);
                    }
                    puVar42 = (undefined8 *)
                              (*(longlong *)(local_120 + 0x70) + 7U & 0xfffffffffffffff8);
                    puVar23 = puVar42 + 0x3d;
                    if (*(undefined8 **)(local_120 + 0x78) < puVar23) {
                      FUN_140023dd8(local_f8,0x1f0);
                      puVar42 = (undefined8 *)(*puVar14 + 7 & 0xfffffffffffffff8);
                      puVar23 = puVar42 + 0x3d;
                    }
                    *local_f8 = (ulonglong)puVar23;
                    lStack_70 = DAT_14cb09c80;
                    if (DAT_14cb09c80 != 0) {
                      LOCK();
                      *(int *)(DAT_14cb09c80 + 8) = *(int *)(DAT_14cb09c80 + 8) + 1;
                      UNLOCK();
                    }
                    local_68 = &DAT_14cb09c38;
                    local_138 = CONCAT71(local_138._1_7_,2);
                    local_78 = puVar12;
                    FUN_140068f1a(puVar42,&local_99,&local_78,uVar8);
                    *puVar42 = &PTR_FUN_14aabc4f0;
                    puVar42[0x37] = &DAT_14cb09c38;
                    puVar42[0x38] = puVar12;
                    *(undefined4 *)(puVar42 + 0x39) = local_88;
                    *(undefined4 *)((longlong)puVar42 + 0x1cc) = uStack_84;
                    *(undefined4 *)(puVar42 + 0x3a) = uStack_80;
                    *(undefined4 *)((longlong)puVar42 + 0x1d4) = uStack_7c;
                    *(int *)(puVar42 + 0x3b) = iVar21 >> 6;
                    *(undefined1 **)((longlong)puVar42 + 0x1dc) = &DAT_100000001;
                  }
                  else {
                    uVar26 = (undefined6)((ulonglong)lVar11 >> 0x10);
                    uVar45 = CONCAT62(uVar26,2);
                    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == 1)) &&
                       ((DAT_14ca84e6a == '\x01' &&
                        (((DAT_14ca84e99 & 1) == 0 &&
                         (uVar45 = CONCAT62(uVar26,4), DAT_14c760ddc == 2 && (local_f0 & 2) != 0))))
                       )) {
                      uVar45 = (ulonglong)local_e4;
                    }
                    puVar42 = (undefined8 *)
                              (*(longlong *)(local_120 + 0x70) + 7U & 0xfffffffffffffff8);
                    puVar23 = puVar42 + 0x3e;
                    if (*(undefined8 **)(local_120 + 0x78) < puVar23) {
                      FUN_140023dd8(local_f8,0x1f8);
                      puVar42 = (undefined8 *)(*puVar14 + 7 & 0xfffffffffffffff8);
                      puVar23 = puVar42 + 0x3e;
                    }
                    *(undefined8 **)(local_120 + 0x70) = puVar23;
                    uVar8 = *(undefined4 *)(local_120 + 0x660);
                    lStack_70 = DAT_14cb09c80;
                    if (DAT_14cb09c80 != 0) {
                      LOCK();
                      *(int *)(DAT_14cb09c80 + 8) = *(int *)(DAT_14cb09c80 + 8) + 1;
                      UNLOCK();
                    }
                    local_68 = &DAT_14cb09c38;
                    local_138 = CONCAT71(local_138._1_7_,2);
                    local_78 = puVar12;
                    FUN_140068f1a(puVar42,&local_99,&local_78,uVar45 & 0xffffffff);
                    puVar42[0x37] = &DAT_14cb09c38;
                    puVar42[0x38] = puVar12;
                    *(undefined4 *)(puVar42 + 0x39) = local_88;
                    *(undefined4 *)((longlong)puVar42 + 0x1cc) = uStack_84;
                    *(undefined4 *)(puVar42 + 0x3a) = uStack_80;
                    *(undefined4 *)((longlong)puVar42 + 0x1d4) = uStack_7c;
                    *(int *)(puVar42 + 0x3b) = iVar21 >> 6;
                    *(undefined1 **)((longlong)puVar42 + 0x1dc) = &DAT_100000001;
                    *puVar42 = &PTR_FUN_14aabc4d0;
                    *(undefined4 *)(puVar42 + 0x3d) = uVar8;
                  }
                  puVar14 = local_c0;
                  iVar6 = *(int *)(local_120 + 0x170);
                  *(uint *)(local_120 + 0x170) = iVar6 + 1U;
                  if (*(uint *)(local_120 + 0x174) < iVar6 + 1U) {
                    FUN_14470e57a(local_e0,iVar6);
                  }
                  *(undefined8 **)(*(longlong *)(local_120 + 0x168) + (longlong)iVar6 * 8) = puVar42
                  ;
                  *(int *)((longlong)puVar42 + 0x2c) = *(int *)(local_120 + 0x170) + -1;
                  FUN_140069100(local_120,puVar42);
                  iVar28 = iVar28 + *(int *)((longlong)puVar22 + 0xc);
                  puVar22 = puVar22 + 2;
                } while (puVar22 != puVar14);
                puVar27 = local_118;
                lVar11 = local_108;
                if ((longlong)(int)local_118[4] != 0) {
                  plVar29 = *(longlong **)(local_118 + 2);
                  plVar20 = plVar29 + (longlong)(int)local_118[4] * 2;
                  plVar31 = (longlong *)(local_120 + 0x598);
                  lVar34 = local_120;
                  do {
                    if (*plVar29 == 0) {
LAB_14370900c:
                      lVar11 = 0;
                    }
                    else {
                      uVar45 = *(ulonglong *)(*plVar29 + 8);
                      uVar7 = ((uint)(uVar45 >> 0x14) & 0xffff ^ (uint)(uVar45 >> 4)) * -0x7a143595;
                      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
                      uVar13 = uVar7 & 0x7fffffff ^ uVar7 >> 0x10;
                      uVar7 = *(uint *)(lVar34 + 0x248);
                      uVar19 = uVar13 & uVar7;
                      puVar27 = *(uint **)(lVar34 + 0x238);
                      if (*(uint **)(lVar34 + 0x238) == (uint *)0x0) {
                        puVar27 = local_100;
                      }
                      puVar9 = *(uint **)(lVar34 + 0x220);
                      if (*(uint **)(lVar34 + 0x220) == (uint *)0x0) {
                        puVar9 = local_110;
                      }
                      do {
                        if (puVar27[(int)uVar19] == uVar13) {
                          lVar11 = (longlong)(int)puVar9[(int)uVar19] * 0x10;
                          if (uVar45 == *(ulonglong *)(*(longlong *)(lVar34 + 0x1d8) + lVar11)) {
                            if (puVar9[(int)uVar19] != 0xffffffff) {
                              plVar32 = (longlong *)(*(longlong *)(lVar34 + 0x1d8) + lVar11 + 8);
                              lVar34 = local_120;
                              if (plVar32 == (longlong *)0x0) goto LAB_14370900c;
                              lVar11 = *plVar32;
                              goto LAB_143709019;
                            }
                            break;
                          }
                        }
                        uVar19 = uVar19 + 1 & uVar7;
                      } while (uVar19 != (*(int *)(lVar34 + 0x24c) + uVar13 + 1 & uVar7));
                      lVar11 = 0;
                      lVar34 = local_120;
                    }
LAB_143709019:
                    bVar24 = 0x15;
                    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == 1)) && (DAT_14ca84e6a == '\x01'))
                    {
                      bVar24 = (DAT_14ca84e99 ^ 1) * '\x02' | 0x15;
                    }
                    if ((*(byte *)(lVar11 + 0x20) & 0xc) == 0) {
                      if ((*(byte *)(lVar11 + 0x20) & 0x10) != 0) {
                        FUN_140069376();
                        lVar34 = local_120;
                      }
                      iVar28 = *(int *)(lVar34 + 0x5a0);
                      *(uint *)(lVar34 + 0x5a0) = iVar28 + 1U;
                      if (*(uint *)(lVar34 + 0x5a4) < iVar28 + 1U) {
                        FUN_1400f155a(plVar31,iVar28);
                        lVar34 = local_120;
                      }
                      *(longlong *)(*plVar31 + (longlong)iVar28 * 8) = lVar11;
                      *(undefined4 *)(lVar11 + 0x1c) = 0x70;
                      *(byte *)(lVar11 + 0x20) = *(byte *)(lVar11 + 0x20) & 0xe8 | bVar24;
                      *(undefined4 *)(lVar11 + 0x58) = 0x70;
                    }
                    plVar29 = plVar29 + 2;
                    puVar27 = local_118;
                    lVar11 = local_108;
                  } while (plVar29 != plVar20);
                }
              }
            }
          }
        }
        puVar12 = *(undefined8 **)puVar27;
        if (puVar12 != (undefined8 *)0x0) {
          puVar27[0] = 0;
          puVar27[1] = 0;
          LOCK();
          piVar1 = (int *)(puVar12 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar12)(puVar12,1);
          }
        }
        FUN_14596a110(puVar27);
      }
    }
LAB_143707ea9:
    if (*(int *)(lVar11 + 0x1f8) != *(int *)(lVar11 + 0x224)) {
      FUN_1417f1db2(local_b8);
      *(undefined4 *)(lVar11 + 0x1f8) = 0;
      if (*(int *)(lVar11 + 0x1fc) < 0) {
        FUN_14474875a(local_b8,0);
      }
      *(undefined8 *)(local_108 + 0x220) = 0xffffffff;
      *(undefined4 *)(local_108 + 0x218) = 0;
      lVar11 = local_108;
    }
    *(int *)(lVar11 + 0x134) = *(int *)(lVar11 + 0x134) - *(int *)(lVar11 + 0x128);
    *(int *)(lVar11 + 0x13c) = *(int *)(lVar11 + 0x13c) + 1;
    *(undefined2 *)(lVar11 + 300) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143709110 FUN_143709110 body=4410 status=ok
// SIG undefined FUN_143709110(void)

void FUN_143709110(longlong param_1,longlong param_2,ulonglong *param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  undefined4 uVar9;
  void *_Dst;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  uint *puVar15;
  ushort **ppuVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  byte bVar22;
  ushort *puVar23;
  longlong *plVar24;
  int iVar25;
  bool bVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  ulonglong uVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_248 [32];
  ushort *local_228;
  ushort *local_220;
  undefined1 *local_218;
  int local_20c;
  ushort *local_208;
  longlong *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  ushort *local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  int local_1d0;
  int local_1cc;
  ulonglong *local_1c8;
  longlong *local_1c0;
  ushort *local_1b8;
  ushort *local_1b0;
  longlong *local_1a8;
  ushort *local_1a0;
  longlong local_198;
  longlong local_190;
  ushort *local_188;
  longlong local_180;
  undefined1 local_178 [10];
  ushort local_16e;
  undefined4 local_16c;
  longlong *local_168;
  uint auStack_160 [8];
  undefined4 local_140;
  undefined4 local_13c;
  ushort *local_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  uint uStack_11c;
  undefined4 local_118;
  int local_114;
  int local_110;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined1 local_108;
  undefined4 local_107;
  undefined1 local_103;
  undefined4 *local_100;
  undefined8 local_f8;
  ushort *puStack_f0;
  undefined8 local_e8;
  undefined8 *puStack_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined6 uStack_90;
  undefined2 local_8a;
  undefined6 uStack_88;
  undefined8 uStack_82;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_1e0 = param_1;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar33 = *param_3;
    uVar17 = ((uint)(uVar33 >> 0x14) & 0xffff ^ (uint)(uVar33 >> 4)) * -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    lVar18 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar18 = *(longlong *)(param_1 + 0x58);
    }
    iVar31 = *(int *)(lVar18 + (ulonglong)
                               (*(int *)(param_1 + 0x60) - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4);
    if (iVar31 != -1) {
      lVar18 = *(longlong *)(param_1 + 0x18);
      do {
        if (*(ulonglong *)(lVar18 + (longlong)iVar31 * 0x18) == uVar33) goto LAB_14370a198;
        iVar31 = *(int *)(lVar18 + (longlong)iVar31 * 0x18 + 0x10);
      } while (iVar31 != -1);
    }
  }
  local_16c = 0;
  _Dst = (void *)FUN_14001cc68(0x110);
  memset(_Dst,0,0x110);
  FUN_147d58c2e(_Dst);
  FUN_146405f70(param_1 + 0x68,&local_f8,&local_16c);
  *(void **)puStack_f0 = _Dst;
  puStack_f0 = &local_16e;
  local_16e = (ushort)local_f8;
  local_f8 = param_3;
  FUN_145977440((longlong *)(param_1 + 0x18),&local_138,&local_f8);
  uVar12 = param_3[0xc];
  puVar23 = *(ushort **)(*(longlong *)(param_1 + 0x68) + (ulonglong)local_16e * 8);
  *puVar23 = local_16e;
  *(ulonglong *)(puVar23 + 2) = param_3[1];
  *(char *)(puVar23 + 6) = (char)param_3[2];
  *(undefined1 *)((longlong)puVar23 + 0xd) = *(undefined1 *)((longlong)param_3 + 0x11);
  uVar33 = param_3[5];
  *(ulonglong *)(puVar23 + 8) = param_3[4];
  *(ulonglong *)(puVar23 + 0xc) = uVar33;
  uVar33 = param_3[7];
  *(ulonglong *)(puVar23 + 0x10) = param_3[6];
  *(ulonglong *)(puVar23 + 0x14) = uVar33;
  *(int *)(puVar23 + 0x18) = (int)param_3[9];
  *(undefined4 *)(puVar23 + 0x1a) = *(undefined4 *)((longlong)param_3 + 0x4c);
  *(int *)(puVar23 + 0x1c) = (int)param_3[10];
  local_1a0 = puVar23 + 0x20;
  local_1d8 = (longlong)(int)uVar12;
  FUN_145804784(local_1a0,param_3 + 0xb);
  local_1c8 = param_3;
  FUN_147d4ca8a(puVar23 + 0x30,(int)param_3[8]);
  local_1d0 = *(int *)((longlong)&DAT_14c873428 + (ulonglong)((uint)(byte)puVar23[6] * 0x30));
  local_1cc = *(int *)((longlong)&DAT_14c873428 +
                      (ulonglong)((uint)*(byte *)((longlong)puVar23 + 0xd) * 0x30));
  fVar35 = 1.0;
  local_1e8 = puVar23;
  if ((longlong)(int)uVar12 < 1) {
    iVar31 = 0;
    local_1f8 = (ulonglong)local_1f8._4_4_ << 0x20;
    local_1f0 = (longlong *)((ulonglong)local_1f0._4_4_ << 0x20);
    iVar32 = 0;
  }
  else {
    uVar33 = 0;
    local_200 = (longlong *)((ulonglong)local_200 & 0xffffffff00000000);
    local_1f8 = (ulonglong)local_1f8._4_4_ << 0x20;
    local_1f0 = (longlong *)((ulonglong)local_1f0._4_4_ << 0x20);
    local_20c = 0;
    local_208 = puVar23 + 0x30;
    do {
      lVar18 = *(longlong *)local_1a0;
      lVar27 = uVar33 * 0x100;
      plVar10 = (longlong *)(lVar18 + lVar27);
      lVar2 = *plVar10;
      iVar31 = *(int *)(lVar2 + 0x90);
      if (local_20c <= iVar31) {
        local_20c = iVar31;
      }
      *(undefined4 *)(plVar10 + 2) = *(undefined4 *)(lVar2 + 0xe0);
      FUN_1402d2c96(plVar10 + 3,iVar31,1);
      uVar9 = *(undefined4 *)(lVar2 + 0xf0);
      FUN_14476b79c(lVar18 + lVar27 + 0x28,uVar9,0);
      FUN_14476b79c(lVar18 + lVar27 + 0x48,uVar9,0);
      FUN_14476b79c(lVar18 + lVar27 + 0x68,iVar31,0);
      FUN_14476b79c(lVar18 + lVar27 + 0x88,iVar31,0);
      if ((*(int *)(lVar2 + 0xe0) != 0) &&
         (*(int *)(*(longlong *)(lVar2 + 0xd8) + 4 + (longlong)(*(int *)(lVar2 + 0xe0) + -1) * 8) !=
          0)) {
        local_200 = (longlong *)CONCAT44(local_200._4_4_,(int)local_200 + 1);
        local_228 = (ushort *)CONCAT44(local_228._4_4_,local_1cc);
        FUN_143700024(lVar2 + 0x78,&local_f8,0,local_1d0);
        local_1f8 = CONCAT44(local_1f8._4_4_,(int)local_1f8 + (int)uStack_d0);
        local_1f0 = (longlong *)CONCAT44(local_1f0._4_4_,(int)local_1f0 + uStack_d0._4_4_);
      }
      iVar31 = *(int *)(lVar18 + lVar27 + 0x10);
      if (1 < iVar31) {
        uVar17 = 0;
        uVar12 = (ulonglong)(iVar31 - 2);
        do {
          if ((longlong)uVar12 < (longlong)*(int *)(lVar2 + 0xe0)) {
            uVar30 = *(uint *)(*(longlong *)(lVar2 + 0xd8) + uVar12 * 8);
            iVar31 = *(int *)(*(longlong *)(lVar2 + 0xd8) + 4 + uVar12 * 8);
            if (uVar30 < iVar31 + uVar30) {
              do {
                uVar19 = *(int *)(*(longlong *)(lVar2 + 0xf8) + (longlong)(int)uVar30 * 4) + 1;
                if (uVar19 <= uVar17) {
                  uVar19 = uVar17;
                }
                uVar17 = uVar19;
                uVar30 = uVar30 + 1;
                iVar31 = iVar31 + -1;
              } while (iVar31 != 0);
            }
            piVar3 = *(int **)(lVar2 + 0x78);
            uVar30 = (piVar3[(int)uVar17] - piVar3[*(int *)(lVar2 + 0x98)]) + *piVar3;
            puVar23 = *(ushort **)(local_1e8 + 0x50);
            if (*(ushort **)(local_1e8 + 0x50) == (ushort *)0x0) {
              puVar23 = local_208;
            }
            if (uVar30 <= *(uint *)(puVar23 + uVar12 * 2)) {
              uVar30 = *(uint *)(puVar23 + uVar12 * 2);
            }
            *(uint *)(puVar23 + uVar12 * 2) = uVar30;
          }
          bVar5 = 0 < (longlong)uVar12;
          uVar12 = uVar12 - 1;
        } while (bVar5);
      }
      uVar33 = uVar33 + 1;
    } while (uVar33 != local_1d8);
    if ((int)local_1d8 != 1) {
      fVar34 = (float)(int)local_1d8;
      fVar35 = *(float *)((longlong)local_1c8 + 0x44);
      if (fVar34 <= *(float *)((longlong)local_1c8 + 0x44)) {
        fVar35 = fVar34;
      }
      if (fVar35 <= 1.0) {
        fVar35 = 1.0;
      }
    }
    iVar31 = (int)local_200;
    iVar32 = local_20c;
  }
  local_1b0 = local_1e8 + 8;
  local_1b8 = local_1e8 + 0x10;
  local_200 = (longlong *)CONCAT44(local_200._4_4_,iVar31);
  uVar30 = iVar31 - ((int)ROUND(-0.5 - ((float)iVar32 * fVar35 + (float)iVar32 * fVar35)) >> 1);
  uVar17 = 1;
  iVar31 = 0;
  if (1 < (int)uVar30) {
    uVar17 = uVar30;
    iVar31 = 0;
  }
  do {
    iVar31 = iVar31 + 1;
    iVar32 = iVar31;
  } while ((uint)(iVar31 * iVar31 * iVar31) < uVar17);
  do {
    iVar20 = iVar32;
    iVar32 = iVar20 + -1;
  } while ((int)uVar17 < (iVar20 + -1) * iVar31 * iVar31);
  iVar32 = iVar31;
  do {
    iVar21 = iVar32;
    iVar32 = iVar21 + -1;
  } while ((int)uVar17 < iVar20 * iVar31 * (iVar21 + -1));
  do {
    iVar32 = iVar31;
    iVar31 = iVar32 + -1;
  } while ((int)uVar17 < iVar21 * iVar20 * (iVar32 + -1));
  plVar10 = (longlong *)FUN_14001cc68(0x70,0x10);
  bVar22 = *(byte *)((longlong)local_1e8 + 0xd);
  uVar8 = local_1e8[6];
  *(undefined4 *)(plVar10 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)plVar10 + 0xc) = 0x105;
  *(undefined1 *)((longlong)plVar10 + 0xe) = 0;
  *plVar10 = (longlong)&PTR_FUN_14aab1c70;
  puVar11 = (undefined8 *)FUN_14001cc68(0x98,0x10);
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0;
  *(undefined8 *)((longlong)puVar11 + 0x6e) = 0;
  *(undefined8 *)((longlong)puVar11 + 0x76) = 0;
  puVar11[0x10] = 0;
  puVar11[0x11] = 0;
  *(undefined4 *)(puVar11 + 0x12) = 0;
  plVar10[2] = (longlong)puVar11;
  *(int *)(plVar10 + 3) = iVar32;
  *(int *)((longlong)plVar10 + 0x1c) = iVar21;
  *(int *)(plVar10 + 4) = iVar20;
  iVar25 = iVar21 * iVar20 * iVar32;
  *(int *)((longlong)plVar10 + 0x24) = iVar25;
  *(byte *)(plVar10 + 5) = (byte)uVar8;
  *(byte *)((longlong)plVar10 + 0x29) = bVar22;
  lVar18 = *(longlong *)(local_1b0 + 4);
  plVar10[6] = *(longlong *)local_1b0;
  plVar10[7] = lVar18;
  uVar9 = *(undefined4 *)(local_1b8 + 2);
  uVar6 = *(undefined4 *)(local_1b8 + 4);
  uVar7 = *(undefined4 *)(local_1b8 + 6);
  *(undefined4 *)(plVar10 + 8) = *(undefined4 *)local_1b8;
  *(undefined4 *)((longlong)plVar10 + 0x44) = uVar9;
  *(undefined4 *)(plVar10 + 9) = uVar6;
  *(undefined4 *)((longlong)plVar10 + 0x4c) = uVar7;
  plVar10[0xc] = 0;
  plVar10[0xd] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  iVar31 = *(int *)((longlong)&DAT_14c873428 + (ulonglong)((uint)bVar22 * 0x30));
  iVar1 = *(int *)((longlong)&DAT_14c873428 + (ulonglong)((uint)(byte)uVar8 * 0x30));
  if (iVar1 < iVar31) {
    iVar1 = iVar31;
  }
  FUN_14370bb40(&local_f8,iVar1);
  uVar33 = local_1d8;
  puVar23 = local_1e8;
  iVar31 = local_f8._4_4_ * (uint)local_f8 * (int)puStack_f0;
  if (((0x71 < iVar21 || 0x71 < iVar32) || iVar31 < iVar25) || 0x71 < iVar20) {
    *(int *)(plVar10 + 4) = (int)puStack_f0;
    plVar10[3] = (longlong)local_f8;
    *(int *)((longlong)plVar10 + 0x24) = iVar31;
  }
  puVar11 = *(undefined8 **)(local_1e8 + 0x80);
  *(longlong **)(local_1e8 + 0x80) = plVar10;
  if (puVar11 != (undefined8 *)0x0) {
    (**(code **)*puVar11)(puVar11,1);
    plVar10 = *(longlong **)(puVar23 + 0x80);
  }
  (**(code **)(*plVar10 + 0x18))(plVar10,*(undefined8 *)(param_2 + 0x18));
  local_188 = puVar23 + 0x58;
  puStack_f0 = (ushort *)
               CONCAT44(puStack_f0._4_4_,*(undefined4 *)(*(longlong *)(puVar23 + 0x80) + 0x20));
  local_f8 = *(ulonglong **)(*(longlong *)(puVar23 + 0x80) + 0x18);
  FUN_14071c4a4(local_188,&local_f8);
  uStack_88 = 0;
  uStack_82 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_8a = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  local_e8 = (undefined8 *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  local_f8 = (undefined8 *)0x0;
  puStack_f0 = (ushort *)0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_218 = (undefined1 *)CONCAT71(local_218._1_7_,*(undefined1 *)((longlong)puVar23 + 0xd));
  local_220 = (ushort *)CONCAT71(local_220._1_7_,(char)puVar23[6]);
  local_228 = (ushort *)CONCAT44(local_228._4_4_,(int)local_1f0);
  FUN_1417f109c(&local_f8,param_2,(int)local_200 + 1,local_1f8 & 0xffffffff);
  FUN_14370a24c(&local_f8,&local_138,0,0);
  *local_100 = 0;
  if ((char)puVar23[6] != '\0') {
    memset(local_138,0,0x2dc);
    *(undefined4 *)CONCAT44(uStack_124,uStack_128) = 0;
  }
  if (*(char *)((longlong)puVar23 + 0xd) != '\0') {
    memset(uStack_130,0,0x2dc);
    *(undefined4 *)CONCAT44(uStack_11c,local_120) = 0;
  }
  if (0 < (int)uVar33) {
    local_20c = (uint)(DAT_14c761b98 != 0 & DAT_14ca84e23 & DAT_14c760da4 == 1) * 2 + 2;
    local_198 = param_2 + 0x178;
    local_1c0 = (longlong *)(param_2 + 0x70);
    local_190 = param_2 + 0x198;
    local_180 = local_1e0 + 0x200;
    local_1a8 = (longlong *)(param_2 + 0x598);
    uVar33 = 0;
    do {
      plVar10 = local_1c0;
      lVar18 = *(longlong *)local_1a0;
      local_1c8 = (ulonglong *)(uVar33 * 0x100);
      puVar11 = *(undefined8 **)(lVar18 + (longlong)local_1c8);
      iVar31 = *(int *)(puVar11 + 0x1c);
      iVar32 = *(int *)((longlong)puVar11 + 0x2c);
      if (iVar32 < 2) {
        iVar32 = 1;
      }
      local_110 = *(int *)(puVar11 + 5);
      if (*(int *)(puVar11 + 5) < 2) {
        local_110 = 1;
      }
      local_114 = *(int *)((longlong)puVar11 + 0x24);
      if (local_114 < 2) {
        local_114 = 1;
      }
      local_120 = DAT_14ca83a40;
      uStack_130 = (ushort *)CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
      uStack_128 = DAT_14ca83a38;
      uStack_124 = DAT_14ca83a3c;
      uStack_11c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_138 = (ushort *)0x80020808;
      local_10c = (undefined2)iVar32;
      local_10a = 1;
      local_108 = (undefined1)iVar31;
      local_107 = 0x1c0201;
      if (DAT_14ca84e40 <= local_114) {
        local_114 = DAT_14ca84e40;
      }
      local_118 = 0;
      if (local_114 < 2) {
        local_114 = 1;
      }
      local_103 = 0xff;
      if (DAT_14ca84e40 <= local_110) {
        local_110 = DAT_14ca84e40;
      }
      if (local_110 < 2) {
        local_110 = 1;
      }
      uVar28 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar12 = uVar28 + 0x120;
      if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
        FUN_140023dd8(local_1c0,0x128);
        uVar28 = *plVar10 + 7U & 0xfffffffffffffff8;
        uVar12 = uVar28 + 0x120;
      }
      *(ulonglong *)(param_2 + 0x70) = uVar12;
      local_208 = (ushort *)lVar18;
      local_1f8 = uVar33;
      FUN_1456bbb8c(uVar28,L"SparseVolumeTexture.PageTableTexture",&local_138,0);
      iVar32 = *(int *)(param_2 + 0x180);
      *(uint *)(param_2 + 0x180) = iVar32 + 1U;
      if (*(uint *)(param_2 + 0x184) < iVar32 + 1U) {
        FUN_14472c0f6(local_198,iVar32);
      }
      *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar32 * 8) = uVar28;
      *(int *)(uVar28 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
      if (0 < iVar31) {
        iVar32 = 0;
        do {
          plVar10 = local_1c0;
          puVar29 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar29 + 9;
          if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
            FUN_140023dd8(local_1c0,0x50);
            puVar29 = (undefined8 *)(*plVar10 + 7U & 0xfffffffffffffff8);
            puVar13 = puVar29 + 9;
          }
          *(undefined8 **)(param_2 + 0x70) = puVar13;
          puVar29[1] = *(undefined8 *)(uVar28 + 8);
          puVar29[2] = 0;
          *(undefined1 *)(puVar29 + 3) = 0;
          *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar29 + 5) = 0;
          *puVar29 = &PTR_FUN_14a1fb948;
          *(undefined1 *)(puVar29 + 6) = 0x1c;
          *(char *)((longlong)puVar29 + 0x31) = (char)iVar32;
          *(undefined4 *)((longlong)puVar29 + 0x32) = 0;
          *(undefined1 *)((longlong)puVar29 + 0x36) = 0;
          *(undefined1 *)(puVar29 + 7) = 0;
          puVar29[8] = uVar28;
          iVar20 = *(int *)(param_2 + 0x1a0);
          *(uint *)(param_2 + 0x1a0) = iVar20 + 1U;
          if (*(uint *)(param_2 + 0x1a4) < iVar20 + 1U) {
            FUN_1447568fc(local_190,iVar20);
          }
          *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar20 * 8) = puVar29;
          *(int *)((longlong)puVar29 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
          local_138 = (ushort *)0x0;
          uStack_130 = (ushort *)0x0;
          FUN_14042f6c6(param_2,puVar29,&local_138,local_20c);
          iVar32 = iVar32 + 1;
        } while (iVar31 != iVar32);
      }
      puVar23 = (ushort *)((longlong)local_208 + (longlong)local_1c8);
      plVar10 = (longlong *)FUN_14495f742(param_2,uVar28);
      plVar10 = (longlong *)*plVar10;
      plVar4 = *(longlong **)(puVar23 + 0x7c);
      if (plVar4 != plVar10) {
        *(longlong **)(puVar23 + 0x7c) = plVar10;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x30))();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4);
        }
      }
      uVar33 = local_1f8;
      bVar22 = 0x15;
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == 1)) && (DAT_14ca84e6a == '\x01')) {
        bVar22 = (DAT_14ca84e99 ^ 1) * '\x02' | 0x15;
      }
      local_208 = puVar23;
      if ((*(byte *)(uVar28 + 0x20) & 0xc) == 0) {
        if ((*(byte *)(uVar28 + 0x20) & 0x10) != 0) {
          FUN_140069376(param_2);
        }
        iVar32 = *(int *)(param_2 + 0x5a0);
        *(uint *)(param_2 + 0x5a0) = iVar32 + 1U;
        if (*(uint *)(param_2 + 0x5a4) < iVar32 + 1U) {
          FUN_1400f155a(local_1a8,iVar32);
        }
        *(ulonglong *)(*local_1a8 + (longlong)iVar32 * 8) = uVar28;
        *(undefined4 *)(uVar28 + 0x1c) = 0x70;
        *(byte *)(uVar28 + 0x20) = *(byte *)(uVar28 + 0x20) & 0xe8 | bVar22;
        *(undefined4 *)(uVar28 + 0x58) = 0x70;
      }
      if (*(longlong *)(*(longlong *)(local_208 + 4) + 0xa0) != 0) {
        (**(code **)(*DAT_14ca83900 + 0x178))
                  (DAT_14ca83900,*(undefined8 *)(param_2 + 0x18),
                   *(longlong *)(*(longlong *)(local_208 + 4) + 0xa0),
                   *(undefined8 *)(*(longlong *)(local_208 + 0x7c) + 8));
      }
      puVar23 = local_1e8;
      plVar10 = *(longlong **)(param_2 + 0x18);
      plVar4 = *(longlong **)(*(longlong *)(local_1e8 + 0x80) + 0x50);
      if (plVar4 == (longlong *)0x0) {
        plVar14 = (longlong *)(DAT_14ca94db8 + 0x10);
        plVar24 = local_200;
      }
      else {
        local_200 = plVar10;
        (**(code **)(*plVar4 + 0x30))(plVar4);
        plVar24 = *(longlong **)(*(longlong *)(puVar23 + 0x80) + 0x50);
        if (plVar24 != (longlong *)0x0) {
          (**(code **)(*plVar24 + 0x30))(plVar24);
        }
        plVar14 = plVar24 + 1;
        plVar10 = local_200;
      }
      if (*(longlong *)(*(longlong *)(local_208 + 4) + 0xa8) != 0) {
        (**(code **)(*DAT_14ca83900 + 0x178))
                  (DAT_14ca83900,plVar10,*(longlong *)(*(longlong *)(local_208 + 4) + 0xa8),*plVar14
                  );
      }
      if (plVar4 != (longlong *)0x0) {
        if (plVar24 != (longlong *)0x0) {
          (**(code **)(*plVar24 + 0x38))(plVar24);
        }
        (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      puVar23 = local_1e8;
      plVar10 = *(longlong **)(param_2 + 0x18);
      plVar4 = *(longlong **)(*(longlong *)(local_1e8 + 0x80) + 0x58);
      if (plVar4 == (longlong *)0x0) {
        plVar14 = (longlong *)(DAT_14ca94db8 + 0x10);
      }
      else {
        local_200 = plVar10;
        (**(code **)(*plVar4 + 0x30))(plVar4);
        local_1f0 = *(longlong **)(*(longlong *)(puVar23 + 0x80) + 0x58);
        if (local_1f0 != (longlong *)0x0) {
          (**(code **)(*local_1f0 + 0x30))(local_1f0);
        }
        plVar14 = local_1f0 + 1;
        plVar10 = local_200;
      }
      if (*(longlong *)(*(longlong *)(local_208 + 4) + 0xb0) != 0) {
        (**(code **)(*DAT_14ca83900 + 0x178))
                  (DAT_14ca83900,plVar10,*(longlong *)(*(longlong *)(local_208 + 4) + 0xb0),*plVar14
                  );
      }
      if (plVar4 != (longlong *)0x0) {
        if (local_1f0 != (longlong *)0x0) {
          (**(code **)(*local_1f0 + 0x38))();
        }
        (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      uVar12 = local_1d8;
      puVar13 = puVar11;
      puVar29 = (undefined8 *)(*(longlong *)(local_208 + 4) + 0x10);
      for (lVar18 = 0xe; lVar18 != 0; lVar18 = lVar18 + -1) {
        *puVar29 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar29 = puVar29 + 1;
      }
      lVar18 = *(longlong *)(local_1e8 + 0x80);
      iVar32 = *(int *)(lVar18 + 0x1c);
      iVar20 = *(int *)(lVar18 + 0x20);
      lVar2 = *(longlong *)(local_208 + 4);
      *(int *)(lVar2 + 0x8c) = *(int *)(lVar18 + 0x18) * 0x12;
      *(int *)(lVar2 + 0x90) = iVar32 * 0x12;
      *(int *)(lVar2 + 0x94) = iVar20 * 0x12;
      *(int *)(*(longlong *)(local_208 + 4) + 0x98) = (int)uVar33;
      *(int *)(*(longlong *)(local_208 + 4) + 0x9c) = iVar31;
      local_200 = plVar24;
      if ((*(int *)(puVar11 + 0x1c) != 0) &&
         (*(int *)(puVar11[0x1b] + 4 + (longlong)(*(int *)(puVar11 + 0x1c) + -1) * 8) != 0)) {
        local_218 = local_178;
        local_220 = (ushort *)CONCAT71(local_220._1_7_,1);
        local_228._0_4_ = 0xffffffff;
        uVar9 = FUN_1405c016c(local_188,*(undefined4 *)(local_1e0 + 0x14c),uVar33 & 0xffffffff,0);
        iVar32 = local_1cc;
        iVar31 = local_1d0;
        **(undefined4 **)(local_208 + 0xc) = uVar9;
        puVar15 = (uint *)(local_208 + 0x34);
        if (*(uint **)(local_208 + 0x3c) != (uint *)0x0) {
          puVar15 = *(uint **)(local_208 + 0x3c);
        }
        *puVar15 = *puVar15 | 1;
        puVar15 = (uint *)(local_208 + 0x44);
        if (*(uint **)(local_208 + 0x4c) != (uint *)0x0) {
          puVar15 = *(uint **)(local_208 + 0x4c);
        }
        *puVar15 = *puVar15 | 1;
        local_228 = (ushort *)CONCAT44(local_228._4_4_,local_1cc);
        FUN_143700024(puVar11 + 0xf,&local_168,0,local_1d0);
        ppuVar16 = &local_138;
        FUN_14370a24c(&local_f8,ppuVar16,local_140,local_13c);
        *local_100 = uVar9;
        lVar18 = 0;
        bVar5 = true;
        do {
          bVar26 = bVar5;
          if (0 < iVar31) {
            memcpy(*ppuVar16,(void *)((ulonglong)auStack_160[lVar18] + puVar11[0x14]),
                   (ulonglong)auStack_160[lVar18 + 2]);
            **(undefined4 **)(&uStack_128 + lVar18 * 2) = *(undefined4 *)(&local_108 + lVar18 * 4);
            memcpy(*(void **)(&local_118 + lVar18 * 2),
                   (void *)((ulonglong)auStack_160[lVar18 + 4] + puVar11[0x14]),
                   (ulonglong)auStack_160[lVar18 + 6]);
          }
          lVar18 = 1;
          ppuVar16 = (ushort **)&uStack_130;
          uVar33 = local_1f8;
          iVar31 = iVar32;
          bVar5 = false;
        } while (bVar26);
      }
      puVar23 = local_1e8;
      local_138 = local_208;
      FUN_141640c3c(local_180,&local_168,&local_138);
      uVar33 = uVar33 + 1;
    } while (uVar33 != uVar12);
  }
  lVar18 = *(longlong *)(puVar23 + 0x80);
  local_138 = *(ushort **)(lVar18 + 0x58);
  if (local_138 != (ushort *)0x0) {
    (**(code **)(*(longlong *)local_138 + 0x30))();
    lVar18 = *(longlong *)(puVar23 + 0x80);
  }
  local_168 = *(longlong **)(lVar18 + 0x50);
  if (local_168 != (longlong *)0x0) {
    (**(code **)(*local_168 + 0x30))();
  }
  local_220 = local_1b8;
  local_228 = local_1b0;
  FUN_14370a386(&local_f8,param_2,&local_168,&local_138);
  if (local_168 != (longlong *)0x0) {
    (**(code **)(*local_168 + 0x38))();
  }
  if (local_138 != (ushort *)0x0) {
    (**(code **)(*(longlong *)local_138 + 0x38))();
  }
  if (uStack_d0 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined8 *)0x0) {
    LOCK();
    piVar3 = (int *)(local_d8 + 1);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)*local_d8)(local_d8,1);
    }
  }
  if (puStack_e0 != (undefined8 *)0x0) {
    LOCK();
    piVar3 = (int *)(puStack_e0 + 1);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)*puStack_e0)(puStack_e0,1);
    }
  }
  if (local_e8 != (undefined8 *)0x0) {
    LOCK();
    piVar3 = (int *)(local_e8 + 1);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)*local_e8)(local_e8,1);
    }
  }
  if (puStack_f0 != (ushort *)0x0) {
    LOCK();
    piVar3 = (int *)((longlong)puStack_f0 + 8);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (*(code *)**(undefined8 **)puStack_f0)(puStack_f0,1);
    }
  }
  if (local_f8 != (undefined8 *)0x0) {
    LOCK();
    piVar3 = (int *)(local_f8 + 1);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)*local_f8)(local_f8,1);
    }
  }
  puStack_f0 = (ushort *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  local_d8 = (undefined8 *)0x0;
  local_f8._0_4_ = (uint)local_16e;
  local_e8 = (undefined8 *)CONCAT62(local_e8._2_6_,0xffff);
  local_e8 = (undefined8 *)CONCAT44(0x3f800000,(undefined4)local_e8);
  FUN_14594248a(local_1e0);
LAB_14370a198:
  if ((local_60 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14370a24c FUN_14370a24c body=313 status=ok
// SIG undefined FUN_14370a24c(void)

void FUN_14370a24c(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x60);
  if (lVar5 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)*(int *)(param_1 + 0x88) * 0x2dc + *(longlong *)(param_1 + 0x38);
  }
  *param_2 = lVar4;
  lVar4 = *(longlong *)(param_1 + 0x68);
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)*(int *)(param_1 + 0x88) * 0x2dc + *(longlong *)(param_1 + 0x40);
  }
  param_2[1] = lVar6;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)*(int *)(param_1 + 0x88) * 4 + *(longlong *)(param_1 + 0x48);
  }
  param_2[2] = lVar6;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)*(int *)(param_1 + 0x88) * 4 + *(longlong *)(param_1 + 0x50);
  }
  param_2[3] = lVar6;
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar5 + (longlong)*(int *)(param_1 + 0x80) * (longlong)*(int *)(param_1 + 0x8c);
  }
  param_2[4] = lVar5;
  iVar1 = *(int *)(param_1 + 0x90);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar4 + (longlong)*(int *)(param_1 + 0x84) * (longlong)iVar1;
  }
  param_2[5] = lVar4;
  iVar2 = *(int *)(param_1 + 0x8c);
  *(int *)(param_2 + 6) = iVar2;
  *(int *)((longlong)param_2 + 0x34) = iVar1;
  iVar3 = *(int *)(param_1 + 0x88);
  param_2[7] = (longlong)iVar3 * 4 + *(longlong *)(param_1 + 0x58);
  *(int *)(param_1 + 0x88) = iVar3 + 1;
  *(int *)(param_1 + 0x8c) = param_3 + iVar2;
  *(int *)(param_1 + 0x90) = param_4 + iVar1;
  return;
}



// FUNCTION 14370a386 FUN_14370a386 body=5413 status=ok
// SIG undefined FUN_14370a386(void)

void FUN_14370a386(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,undefined4 *param_6)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  void *_Dst;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 uVar12;
  int *piVar13;
  int iVar14;
  undefined8 *puVar15;
  byte bVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  int iVar27;
  undefined8 *puVar28;
  int iVar29;
  undefined1 auStack_188 [32];
  int local_168;
  undefined4 local_160;
  longlong local_150;
  ulonglong *local_148;
  int local_140;
  int local_13c;
  longlong local_138;
  longlong *local_130;
  int local_124;
  longlong local_120;
  undefined8 *local_118;
  longlong local_110;
  undefined8 *local_108;
  int local_fc;
  longlong local_f8;
  int *local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined1 local_89;
  undefined8 *local_88;
  longlong lStack_80;
  undefined *local_78;
  ulonglong local_70;
  undefined6 uVar26;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (0 < (int)param_1[0xe]) {
    lVar11 = *(longlong *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(*param_1 + 0x28);
    local_150 = param_2;
    if (*(char *)(lVar11 + 0x69) == '\0') {
      FUN_14002049c(lVar11,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar3);
      FUN_14002049c(lVar11,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar3);
    }
    uVar3 = *(undefined8 *)(param_1[2] + 0x28);
    if (*(char *)(lVar11 + 0x69) == '\0') {
      FUN_14002049c(lVar11,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar3);
      FUN_14002049c(lVar11,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar3);
    }
    lVar9 = param_1[6];
    uVar3 = *(undefined8 *)(param_1[1] + 0x28);
    cVar7 = *(char *)(lVar11 + 0x69);
    if (cVar7 == '\0') {
      FUN_14002049c(lVar11,1);
    }
    local_160 = 1;
    local_168 = (int)lVar9 << 2;
    _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar11,uVar3,0);
    if (cVar7 == '\0') {
      FUN_14002049c(lVar11,0);
    }
    memcpy(_Dst,(void *)param_1[5],(longlong)(int)param_1[6] << 2);
    uVar3 = *(undefined8 *)(param_1[1] + 0x28);
    if (*(char *)(lVar11 + 0x69) == '\0') {
      FUN_14002049c(lVar11,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar3);
      FUN_14002049c(lVar11,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar3);
    }
    if (param_1[0xc] != 0) {
      uVar3 = *(undefined8 *)(param_1[3] + 0x28);
      if (*(char *)(lVar11 + 0x69) == '\0') {
        FUN_14002049c(lVar11,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar3);
        FUN_14002049c(lVar11,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar3);
      }
    }
    if (param_1[0xd] != 0) {
      uVar3 = *(undefined8 *)(param_1[4] + 0x28);
      if (*(char *)(lVar11 + 0x69) == '\0') {
        FUN_14002049c(lVar11,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar3);
        FUN_14002049c(lVar11,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,uVar3);
      }
    }
    lVar11 = local_150;
    if (0 < (int)param_1[0x11]) {
      if (*param_3 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = FUN_14473c272(local_150,param_3,0);
        FUN_14022b18a(lVar11,lVar9);
      }
      lVar11 = local_150;
      if (*param_4 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = FUN_14473c272(local_150,param_4,0);
        FUN_14022b18a(lVar11,lVar10);
      }
      if ((int)param_1[0x10] < 1) {
        local_120 = 0;
      }
      else {
        local_120 = FUN_144735dd8(local_150,param_1 + 3,0);
      }
      if (*(int *)((longlong)param_1 + 0x84) < 1) {
        local_110 = 0;
      }
      else {
        local_110 = FUN_144735dd8(local_150,param_1 + 4,0);
      }
      if (lVar9 == 0) {
        puVar28 = (undefined8 *)0x0;
      }
      else {
        uVar12 = *(undefined1 *)(lVar9 + 0x94);
        puVar28 = (undefined8 *)(*(longlong *)(local_150 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar24 = puVar28 + 9;
        if (*(undefined8 **)(local_150 + 0x78) < puVar24) {
          plVar23 = (longlong *)(local_150 + 0x70);
          FUN_140023dd8(plVar23,0x50);
          puVar28 = (undefined8 *)(*plVar23 + 7U & 0xfffffffffffffff8);
          puVar24 = puVar28 + 9;
        }
        *(undefined8 **)(local_150 + 0x70) = puVar24;
        puVar28[1] = *(undefined8 *)(lVar9 + 8);
        puVar28[2] = 0;
        *(undefined1 *)(puVar28 + 3) = 0;
        *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar28 + 5) = 0;
        *puVar28 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar28 + 6) = uVar12;
        *(undefined1 *)(puVar28 + 7) = 0;
        *(undefined4 *)((longlong)puVar28 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar28 + 0x35) = 0;
        puVar28[8] = lVar9;
        iVar8 = *(int *)(local_150 + 0x1a0);
        *(uint *)(local_150 + 0x1a0) = iVar8 + 1U;
        if (*(uint *)(local_150 + 0x1a4) < iVar8 + 1U) {
          FUN_1447568fc(local_150 + 0x198,iVar8);
        }
        *(undefined8 **)(*(longlong *)(local_150 + 0x198) + (longlong)iVar8 * 8) = puVar28;
        *(int *)((longlong)puVar28 + 0x1c) = *(int *)(local_150 + 0x1a0) + -1;
      }
      if (lVar10 == 0) {
        puVar24 = (undefined8 *)0x0;
      }
      else {
        uVar12 = *(undefined1 *)(lVar10 + 0x94);
        puVar24 = (undefined8 *)(*(longlong *)(local_150 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar24 + 9;
        if (*(undefined8 **)(local_150 + 0x78) < puVar15) {
          plVar23 = (longlong *)(local_150 + 0x70);
          FUN_140023dd8(plVar23,0x50);
          puVar24 = (undefined8 *)(*plVar23 + 7U & 0xfffffffffffffff8);
          puVar15 = puVar24 + 9;
        }
        *(undefined8 **)(local_150 + 0x70) = puVar15;
        puVar24[1] = *(undefined8 *)(lVar10 + 8);
        puVar24[2] = 0;
        *(undefined1 *)(puVar24 + 3) = 0;
        *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar24 + 5) = 0;
        *puVar24 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar24 + 6) = uVar12;
        *(undefined1 *)(puVar24 + 7) = 0;
        *(undefined4 *)((longlong)puVar24 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar24 + 0x35) = 0;
        puVar24[8] = lVar10;
        iVar8 = *(int *)(local_150 + 0x1a0);
        *(uint *)(local_150 + 0x1a0) = iVar8 + 1U;
        if (*(uint *)(local_150 + 0x1a4) < iVar8 + 1U) {
          FUN_1447568fc(local_150 + 0x198,iVar8);
        }
        *(undefined8 **)(*(longlong *)(local_150 + 0x198) + (longlong)iVar8 * 8) = puVar24;
        *(int *)((longlong)puVar24 + 0x1c) = *(int *)(local_150 + 0x1a0) + -1;
      }
      local_98 = puVar28;
      lVar11 = FUN_144735dd8(local_150,param_1,0);
      cVar7 = *(char *)(lVar11 + 0x68);
      puVar1 = (ulonglong *)(local_150 + 0x70);
      puVar15 = (undefined8 *)(*(longlong *)(local_150 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar15 + 9;
      local_148 = puVar1;
      if (*(undefined8 **)(local_150 + 0x78) < puVar28) {
        FUN_140023dd8(puVar1,0x50);
        puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar15 + 9;
      }
      local_138 = local_150 + 0x198;
      *(undefined8 **)(local_150 + 0x70) = puVar28;
      puVar15[1] = *(undefined8 *)(lVar11 + 8);
      puVar15[2] = 0;
      *(undefined1 *)(puVar15 + 3) = 3;
      *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
      *puVar15 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar15 + 5) = cVar7 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar15 + 0x2c) = 0xffffffff00000000;
      puVar15[7] = 0;
      puVar15[8] = lVar11;
      iVar8 = *(int *)(local_150 + 0x1a0);
      *(uint *)(local_150 + 0x1a0) = iVar8 + 1U;
      local_d0 = lVar10;
      if (*(uint *)(local_150 + 0x1a4) < iVar8 + 1U) {
        FUN_1447568fc(local_138,iVar8);
      }
      *(undefined8 **)(*(longlong *)(local_150 + 0x198) + (longlong)iVar8 * 8) = puVar15;
      *(int *)((longlong)puVar15 + 0x1c) = *(int *)(local_150 + 0x1a0) + -1;
      lVar11 = FUN_144735dd8(local_150,param_1 + 1,0);
      puVar1 = local_148;
      cVar7 = *(char *)(lVar11 + 0x68);
      puVar19 = (undefined8 *)(*(longlong *)(local_150 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar19 + 9;
      if (*(undefined8 **)(local_150 + 0x78) < puVar28) {
        FUN_140023dd8(local_148,0x50);
        puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar19 + 9;
      }
      *(undefined8 **)(local_150 + 0x70) = puVar28;
      puVar19[1] = *(undefined8 *)(lVar11 + 8);
      puVar19[2] = 0;
      *(undefined1 *)(puVar19 + 3) = 3;
      *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
      *puVar19 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar19 + 5) = cVar7 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar19 + 0x2c) = 0xffffffff00000000;
      puVar19[7] = 0;
      puVar19[8] = lVar11;
      iVar8 = *(int *)(local_150 + 0x1a0);
      *(uint *)(local_150 + 0x1a0) = iVar8 + 1U;
      if (*(uint *)(local_150 + 0x1a4) < iVar8 + 1U) {
        FUN_1447568fc(local_138,iVar8);
      }
      *(undefined8 **)(*(longlong *)(local_150 + 0x198) + (longlong)iVar8 * 8) = puVar19;
      *(int *)((longlong)puVar19 + 0x1c) = *(int *)(local_150 + 0x1a0) + -1;
      local_b0 = puVar19;
      lVar11 = FUN_144735dd8(local_150,param_1 + 2,0);
      puVar1 = local_148;
      cVar7 = *(char *)(lVar11 + 0x68);
      puVar19 = (undefined8 *)(*(longlong *)(local_150 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar19 + 9;
      if (*(undefined8 **)(local_150 + 0x78) < puVar28) {
        FUN_140023dd8(local_148,0x50);
        puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar19 + 9;
      }
      *(undefined8 **)(local_150 + 0x70) = puVar28;
      puVar19[1] = *(undefined8 *)(lVar11 + 8);
      puVar19[2] = 0;
      *(undefined1 *)(puVar19 + 3) = 3;
      *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
      *puVar19 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar19 + 5) = cVar7 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar19 + 0x2c) = 0xffffffff00000000;
      puVar19[7] = 0;
      puVar19[8] = lVar11;
      iVar8 = *(int *)(local_150 + 0x1a0);
      *(uint *)(local_150 + 0x1a0) = iVar8 + 1U;
      if (*(uint *)(local_150 + 0x1a4) < iVar8 + 1U) {
        FUN_1447568fc(local_138,iVar8);
      }
      puVar1 = local_148;
      *(undefined8 **)(*(longlong *)(local_150 + 0x198) + (longlong)iVar8 * 8) = puVar19;
      *(int *)((longlong)puVar19 + 0x1c) = *(int *)(local_150 + 0x1a0) + -1;
      puVar18 = (undefined8 *)(*(longlong *)(local_150 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar28 = puVar18 + 9;
      local_d8 = lVar9;
      local_b8 = puVar19;
      local_a8 = puVar15;
      local_a0 = puVar24;
      if (local_120 == 0) {
        uVar12 = *(undefined1 *)((longlong)param_1 + 0x7d);
        if (*(undefined8 **)(local_150 + 0x78) < puVar28) {
          FUN_140023dd8(local_148,0x50);
          puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar28 = puVar18 + 9;
        }
        *(undefined8 **)(local_150 + 0x70) = puVar28;
        lVar11 = local_110;
      }
      else {
        uVar12 = *(undefined1 *)((longlong)param_1 + 0x7c);
        if (*(undefined8 **)(local_150 + 0x78) < puVar28) {
          FUN_140023dd8(local_148,0x50);
          puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar28 = puVar18 + 9;
        }
        *(undefined8 **)(local_150 + 0x70) = puVar28;
        lVar11 = local_120;
      }
      puVar18[1] = *(undefined8 *)(lVar11 + 8);
      puVar18[2] = 0;
      *(undefined1 *)(puVar18 + 3) = 3;
      *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
      *puVar18 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar18 + 5) = uVar12;
      *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
      puVar18[7] = 0;
      puVar18[8] = lVar11;
      iVar8 = *(int *)(local_150 + 0x1a0);
      *(uint *)(local_150 + 0x1a0) = iVar8 + 1U;
      if (*(uint *)(local_150 + 0x1a4) < iVar8 + 1U) {
        FUN_1447568fc(local_138,iVar8);
      }
      *(undefined8 **)(*(longlong *)(local_150 + 0x198) + (longlong)iVar8 * 8) = puVar18;
      *(int *)((longlong)puVar18 + 0x1c) = *(int *)(local_150 + 0x1a0) + -1;
      cVar7 = (0 < (int)param_1[0x10]) + (0 < *(int *)((longlong)param_1 + 0x84)) * '\x02';
      uVar3 = *(undefined8 *)
               (&DAT_14ca8c1f0 +
               (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
      uVar12 = 2;
      if (cVar7 != '\x01') {
        uVar12 = cVar7 == '\x02';
      }
      local_c0 = puVar18;
      FUN_14159969c();
      FUN_1448e935e(uVar3,&local_88,&DAT_14cb094e8,uVar12);
      FUN_14159969c();
      iVar8 = (int)param_1[0x11];
      if (0 < iVar8) {
        local_108 = local_88;
        local_f8 = lStack_80;
        piVar13 = (int *)((longlong)param_1 + 0x8c);
        local_e8 = param_1 + 0x12;
        local_c8 = local_150 + 0x98;
        local_e0 = local_150 + 0x168;
        uVar25 = 0;
        local_13c = 0;
        local_140 = 0;
        local_130 = param_1;
        local_f0 = piVar13;
        do {
          puVar1 = local_148;
          iVar27 = (int)param_1[0x10];
          iVar29 = *(int *)((longlong)param_1 + 0x84);
          lVar11 = uVar25 * 4;
          lVar9 = 0;
          iVar14 = 0;
          iVar17 = 0;
          do {
            lVar11 = lVar11 + 4;
            iVar20 = 0;
            iVar21 = 0;
            if (0 < iVar27) {
              iVar21 = *(int *)(param_1[9] + uVar25 * 4 + lVar9 * 4);
            }
            if (0 < iVar29) {
              iVar20 = *(int *)(param_1[10] + uVar25 * 4 + lVar9 * 4);
            }
            iVar4 = (int)uVar25;
            piVar22 = piVar13;
            if ((0 < iVar27) && (iVar4 + (int)lVar9 + 1 < iVar8)) {
              piVar22 = (int *)(param_1[9] + lVar11);
            }
            plVar23 = local_e8;
            if ((0 < iVar29) && (piVar13 = local_f0, iVar4 + (int)lVar9 + 1 < iVar8)) {
              plVar23 = (longlong *)(param_1[10] + lVar11);
            }
            iVar21 = (*piVar22 - iVar21) + iVar14;
          } while (((iVar21 < 0x8000001) &&
                   (iVar20 = ((int)*plVar23 - iVar20) + iVar17, iVar20 < 0x8000001)) &&
                  (lVar9 = lVar9 + 1, iVar14 = iVar21, iVar17 = iVar20, (int)lVar9 + iVar4 < iVar8))
          ;
          if (iVar27 == 0) {
            puVar28 = (undefined8 *)0x0;
          }
          else {
            puVar28 = (undefined8 *)0x0;
            if (iVar14 != 0) {
              uVar12 = *(undefined1 *)((longlong)local_130 + 0x7c);
              puVar28 = (undefined8 *)(*(longlong *)(local_150 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar24 = puVar28 + 9;
              if (*(undefined8 **)(local_150 + 0x78) < puVar24) {
                FUN_140023dd8(local_148,0x50);
                puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                puVar24 = puVar28 + 9;
              }
              *(undefined8 **)(local_150 + 0x70) = puVar24;
              puVar28[1] = *(undefined8 *)(local_120 + 8);
              puVar28[2] = 0;
              *(undefined1 *)(puVar28 + 3) = 3;
              *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
              *puVar28 = &PTR_FUN_14a1fb168;
              *(undefined1 *)(puVar28 + 5) = uVar12;
              *(int *)((longlong)puVar28 + 0x2c) = iVar27 * local_13c;
              *(int *)(puVar28 + 6) = iVar14;
              puVar28[7] = 0;
              puVar28[8] = local_120;
              iVar8 = *(int *)(local_150 + 0x1a0);
              *(uint *)(local_150 + 0x1a0) = iVar8 + 1U;
              if (*(uint *)(local_150 + 0x1a4) < iVar8 + 1U) {
                FUN_1447568fc(local_138,iVar8);
              }
              *(undefined8 **)(*(longlong *)(local_150 + 0x198) + (longlong)iVar8 * 8) = puVar28;
              *(int *)((longlong)puVar28 + 0x1c) = *(int *)(local_150 + 0x1a0) + -1;
              iVar29 = *(int *)((longlong)local_130 + 0x84);
            }
          }
          puVar1 = local_148;
          if (iVar17 == 0 || iVar29 == 0) {
            puVar24 = (undefined8 *)0x0;
          }
          else {
            uVar12 = *(undefined1 *)((longlong)local_130 + 0x7d);
            puVar24 = (undefined8 *)(*(longlong *)(local_150 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar15 = puVar24 + 9;
            if (*(undefined8 **)(local_150 + 0x78) < puVar15) {
              FUN_140023dd8(local_148,0x50);
              puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar15 = puVar24 + 9;
            }
            *(undefined8 **)(local_150 + 0x70) = puVar15;
            puVar24[1] = *(undefined8 *)(local_110 + 8);
            puVar24[2] = 0;
            *(undefined1 *)(puVar24 + 3) = 3;
            *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
            *puVar24 = &PTR_FUN_14a1fb168;
            *(undefined1 *)(puVar24 + 5) = uVar12;
            *(int *)((longlong)puVar24 + 0x2c) = iVar29 * local_140;
            *(int *)(puVar24 + 6) = iVar17;
            puVar24[7] = 0;
            puVar24[8] = local_110;
            iVar8 = *(int *)(local_150 + 0x1a0);
            *(uint *)(local_150 + 0x1a0) = iVar8 + 1U;
            if (*(uint *)(local_150 + 0x1a4) < iVar8 + 1U) {
              FUN_1447568fc(local_138,iVar8);
            }
            *(undefined8 **)(*(longlong *)(local_150 + 0x198) + (longlong)iVar8 * 8) = puVar24;
            *(int *)((longlong)puVar24 + 0x1c) = *(int *)(local_150 + 0x1a0) + -1;
          }
          puVar1 = local_148;
          puVar19 = (undefined8 *)(*(longlong *)(local_150 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar15 = puVar19 + 0x12;
          if (*(undefined8 **)(local_150 + 0x78) < puVar15) {
            FUN_140023dd8(local_148,0xa0);
            puVar19 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
            puVar15 = puVar19 + 0x12;
          }
          *(undefined8 **)(local_150 + 0x70) = puVar15;
          *puVar19 = &PTR_FUN_14aabc480;
          puVar19[10] = 0;
          *(undefined4 *)(puVar19 + 0xb) = 0;
          puVar19[2] = 0;
          puVar19[3] = 0;
          puVar19[4] = 0;
          puVar19[5] = 0;
          puVar19[6] = 0;
          puVar19[7] = 0;
          puVar19[8] = 0;
          *(undefined8 *)((longlong)puVar19 + 0x5c) = 0x3f800000;
          *(undefined8 *)((longlong)puVar19 + 100) = 0;
          *(undefined4 *)((longlong)puVar19 + 0x6c) = 0x3f800000;
          iVar8 = *(int *)(local_150 + 0xa0);
          *(uint *)(local_150 + 0xa0) = iVar8 + 1U;
          if (*(uint *)(local_150 + 0xa4) < iVar8 + 1U) {
            FUN_1448cfae8(local_c8,iVar8);
          }
          lVar11 = local_150;
          *(undefined8 **)(*(longlong *)(local_150 + 0x98) + (longlong)iVar8 * 8) = puVar19;
          puVar19[2] = local_98;
          puVar19[3] = local_a0;
          if (puVar28 == (undefined8 *)0x0) {
            puVar28 = local_c0;
          }
          puVar19[4] = puVar28;
          if (puVar24 == (undefined8 *)0x0) {
            puVar24 = local_c0;
          }
          puVar19[5] = puVar24;
          puVar19[6] = local_a8;
          puVar19[7] = local_b0;
          puVar19[8] = local_b8;
          uVar3 = param_5[1];
          puVar19[10] = *param_5;
          puVar19[0xb] = uVar3;
          uVar2 = param_6[1];
          uVar5 = param_6[2];
          uVar6 = param_6[3];
          *(undefined4 *)(puVar19 + 0xc) = *param_6;
          *(undefined4 *)((longlong)puVar19 + 100) = uVar2;
          *(undefined4 *)(puVar19 + 0xd) = uVar5;
          *(undefined4 *)((longlong)puVar19 + 0x6c) = uVar6;
          *(int *)(puVar19 + 0xe) = iVar4;
          *(int *)((longlong)puVar19 + 0x74) = local_13c;
          *(int *)(puVar19 + 0xf) = local_140;
          iVar27 = (int)lVar9;
          *(int *)((longlong)puVar19 + 0x7c) = iVar27;
          *(int *)(puVar19 + 0x10) = (int)local_130[0xe];
          local_124 = DAT_14ca84f24;
          if (iVar27 < DAT_14ca84f24) {
            local_124 = iVar27;
          }
          *(int *)((longlong)puVar19 + 0x84) = local_124;
          *(undefined4 *)(puVar19 + 0x11) = 0x12;
          cVar7 = DAT_14ca84e23;
          iVar8 = DAT_14c761b98;
          local_fc = DAT_14c760da4;
          FUN_1415997be();
          local_88 = (undefined8 *)0x0;
          lStack_80 = 0;
          local_118 = puVar19 + 2;
          FUN_1448f70da(local_108,&DAT_14cb09bb0,puVar19 + 2,&local_88);
          FUN_140069376(lVar11);
          puVar1 = local_148;
          if (((cVar7 == '\x01') && (iVar8 != 0)) && (local_fc == 1)) {
            uVar25 = CONCAT62((int6)((ulonglong)puVar28 >> 0x10),2);
            if ((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) {
              uVar25 = (ulonglong)((uint)(byte)~(~DAT_14ca84e6a | DAT_14ca84e99) * 2 + 2);
            }
            puVar24 = (undefined8 *)(*(longlong *)(local_150 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar28 = puVar24 + 0x3e;
            if (*(undefined8 **)(local_150 + 0x78) < puVar28) {
              FUN_140023dd8(local_148,0x1f8);
              puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar24 + 0x3e;
            }
            *(undefined8 **)(local_150 + 0x70) = puVar28;
            uVar2 = *(undefined4 *)(local_150 + 0x660);
            local_88 = local_118;
            lStack_80 = DAT_14cb09bf8;
            if (DAT_14cb09bf8 != 0) {
              LOCK();
              *(int *)(DAT_14cb09bf8 + 8) = *(int *)(DAT_14cb09bf8 + 8) + 1;
              UNLOCK();
            }
            local_78 = &DAT_14cb09bb0;
            local_168 = CONCAT31(local_168._1_3_,2);
            FUN_140068f1a(puVar24,&local_89,&local_88,uVar25 & 0xffffffff);
            puVar24[0x37] = &DAT_14cb09bb0;
            puVar24[0x38] = local_118;
            puVar24[0x39] = local_108;
            puVar24[0x3a] = local_f8;
            *(int *)(puVar24 + 0x3b) = local_124;
            *(undefined1 **)((longlong)puVar24 + 0x1dc) = &DAT_100000001;
            *puVar24 = &PTR_FUN_14aabc490;
            *(undefined4 *)(puVar24 + 0x3d) = uVar2;
          }
          else {
            uVar26 = (undefined6)((ulonglong)lVar11 >> 0x10);
            uVar25 = CONCAT62(uVar26,2);
            if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
               ((DAT_14c760ddc == 2 & ~DAT_14ca84e99 & DAT_14ca84e6a) == 1)) {
              uVar25 = CONCAT62(uVar26,4);
            }
            puVar24 = (undefined8 *)(*(longlong *)(local_150 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar28 = puVar24 + 0x3d;
            if (*(undefined8 **)(local_150 + 0x78) < puVar28) {
              FUN_140023dd8(local_148,0x1f0);
              puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar24 + 0x3d;
            }
            *local_148 = (ulonglong)puVar28;
            local_88 = local_118;
            lStack_80 = DAT_14cb09bf8;
            if (DAT_14cb09bf8 != 0) {
              LOCK();
              *(int *)(DAT_14cb09bf8 + 8) = *(int *)(DAT_14cb09bf8 + 8) + 1;
              UNLOCK();
            }
            local_78 = &DAT_14cb09bb0;
            local_168 = CONCAT31(local_168._1_3_,2);
            FUN_140068f1a(puVar24,&local_89,&local_88,uVar25 & 0xffffffff);
            *puVar24 = &PTR_FUN_14aabc4b0;
            puVar24[0x37] = &DAT_14cb09bb0;
            puVar24[0x38] = local_118;
            puVar24[0x39] = local_108;
            puVar24[0x3a] = local_f8;
            *(int *)(puVar24 + 0x3b) = local_124;
            *(undefined1 **)((longlong)puVar24 + 0x1dc) = &DAT_100000001;
          }
          piVar13 = local_f0;
          param_1 = local_130;
          iVar8 = *(int *)(local_150 + 0x170);
          *(uint *)(local_150 + 0x170) = iVar8 + 1U;
          if (*(uint *)(local_150 + 0x174) < iVar8 + 1U) {
            FUN_14470e57a(local_e0,iVar8);
          }
          *(undefined8 **)(*(longlong *)(local_150 + 0x168) + (longlong)iVar8 * 8) = puVar24;
          *(int *)((longlong)puVar24 + 0x2c) = *(int *)(local_150 + 0x170) + -1;
          FUN_140069100(local_150,puVar24);
          uVar25 = (ulonglong)(uint)(iVar27 + iVar4);
          local_13c = local_13c + iVar14;
          local_140 = local_140 + iVar17;
          iVar8 = (int)param_1[0x11];
        } while (iVar27 + iVar4 < iVar8);
      }
      lVar9 = local_d0;
      lVar11 = local_d8;
      if (local_d8 != 0) {
        bVar16 = 0x15;
        if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == 1)) {
          bVar16 = (DAT_14ca84e99 ^ 1) * '\x02' | 0x15;
        }
        if ((*(byte *)(local_d8 + 0x20) & 0xc) == 0) {
          if ((*(byte *)(local_d8 + 0x20) & 0x10) != 0) {
            FUN_140069376();
          }
          plVar23 = (longlong *)(local_150 + 0x598);
          iVar8 = *(int *)(local_150 + 0x5a0);
          *(uint *)(local_150 + 0x5a0) = iVar8 + 1U;
          if (*(uint *)(local_150 + 0x5a4) < iVar8 + 1U) {
            FUN_1400f155a(plVar23,iVar8);
          }
          *(longlong *)(*plVar23 + (longlong)iVar8 * 8) = lVar11;
          *(undefined4 *)(lVar11 + 0x1c) = 0x70;
          *(byte *)(lVar11 + 0x20) = *(byte *)(lVar11 + 0x20) & 0xe8 | bVar16;
          *(undefined4 *)(lVar11 + 0x58) = 0x70;
        }
      }
      if (lVar9 != 0) {
        bVar16 = 0x15;
        if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == 1)) {
          bVar16 = (DAT_14ca84e99 ^ 1) * '\x02' | 0x15;
        }
        if ((*(byte *)(lVar9 + 0x20) & 0xc) == 0) {
          if ((*(byte *)(lVar9 + 0x20) & 0x10) != 0) {
            FUN_140069376();
          }
          plVar23 = (longlong *)(local_150 + 0x598);
          iVar8 = *(int *)(local_150 + 0x5a0);
          *(uint *)(local_150 + 0x5a0) = iVar8 + 1U;
          if (*(uint *)(local_150 + 0x5a4) < iVar8 + 1U) {
            FUN_1400f155a(plVar23,iVar8);
          }
          *(longlong *)(*plVar23 + (longlong)iVar8 * 8) = lVar9;
          *(undefined4 *)(lVar9 + 0x1c) = 0x70;
          *(byte *)(lVar9 + 0x20) = *(byte *)(lVar9 + 0x20) & 0xe8 | bVar16;
          *(undefined4 *)(lVar9 + 0x58) = 0x70;
        }
      }
    }
  }
  puVar28 = (undefined8 *)*param_1;
  if (puVar28 != (undefined8 *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar13 = (int *)(puVar28 + 1);
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 == 0) {
      (**(code **)*puVar28)(puVar28,1);
    }
  }
  puVar28 = (undefined8 *)param_1[1];
  if (puVar28 != (undefined8 *)0x0) {
    param_1[1] = 0;
    LOCK();
    piVar13 = (int *)(puVar28 + 1);
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 == 0) {
      (**(code **)*puVar28)(puVar28,1);
    }
  }
  puVar28 = (undefined8 *)param_1[2];
  if (puVar28 != (undefined8 *)0x0) {
    param_1[2] = 0;
    LOCK();
    piVar13 = (int *)(puVar28 + 1);
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 == 0) {
      (**(code **)*puVar28)(puVar28,1);
    }
  }
  puVar28 = (undefined8 *)param_1[3];
  if (puVar28 != (undefined8 *)0x0) {
    param_1[3] = 0;
    LOCK();
    piVar13 = (int *)(puVar28 + 1);
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 == 0) {
      (**(code **)*puVar28)(puVar28,1);
    }
  }
  puVar28 = (undefined8 *)param_1[4];
  if (puVar28 != (undefined8 *)0x0) {
    param_1[4] = 0;
    LOCK();
    piVar13 = (int *)(puVar28 + 1);
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 == 0) {
      (**(code **)*puVar28)(puVar28,1);
    }
  }
  if (*(int *)((longlong)param_1 + 0x34) < 0) {
    *(undefined4 *)(param_1 + 6) = 0;
    FUN_14480809c(param_1 + 5,0);
  }
  else {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x76) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14370b8ac FUN_14370b8ac body=521 status=ok
// SIG undefined FUN_14370b8ac(void)

void FUN_14370b8ac(longlong *param_1,undefined1 param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined2 *puVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  
  puVar2 = (uint *)*param_1;
  lVar3 = param_1[3];
  uVar4 = puVar2[6];
  if (uVar4 == 0) {
    uVar14 = 1;
    iVar13 = 0;
    uVar20 = 0;
    uVar9 = 0;
  }
  else {
    puVar8 = *(uint **)(puVar2 + 4);
    if (*(uint **)(puVar2 + 4) == (uint *)0x0) {
      puVar8 = puVar2;
    }
    uVar9 = *puVar8;
    if (uVar9 == 0) {
      iVar13 = uVar4 + 0x1e;
      if (-1 < (int)(uVar4 - 1)) {
        iVar13 = uVar4 - 1;
      }
      uVar20 = 0;
      uVar14 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar14 = uVar20;
      }
      iVar13 = 0;
      do {
        if (uVar14 == uVar20) {
          return;
        }
        iVar13 = iVar13 + 0x20;
        uVar9 = puVar8[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar9 == 0);
    }
    else {
      iVar13 = 0;
      uVar20 = 0;
    }
    uVar14 = (ulonglong)(-uVar9 & uVar9);
    uVar1 = uVar14 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar9 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)uVar4 <= (int)uVar9) {
      uVar9 = uVar4;
    }
  }
  if ((int)uVar9 < (int)uVar4) {
    uVar18 = 0xffffffff;
    uVar17 = 0;
    bVar6 = true;
    iVar12 = 0;
    do {
      iVar12 = iVar12 + 1;
      if (bVar6) {
        iVar12 = 1;
        uVar17 = uVar9;
      }
      if ((int)uVar9 < -1) {
LAB_14370b9d2:
        puVar5 = (undefined2 *)FUN_14584f8ce(lVar3 + 0x250);
        *puVar5 = *(undefined2 *)param_1[4];
        *(uint *)(puVar5 + 2) = uVar17;
        *(int *)(puVar5 + 4) = iVar12;
        puVar5[1] = *(undefined2 *)(param_1[4] + 2);
        *(undefined1 *)(puVar5 + 6) = param_2;
        uVar4 = puVar2[6];
        bVar6 = true;
      }
      else {
        uVar7 = uVar9 + 1;
        lVar16 = *param_1;
        if (*(int *)(lVar16 + 0x18) <= (int)uVar7) goto LAB_14370b9d2;
        lVar15 = *(longlong *)(lVar16 + 0x10);
        if (*(longlong *)(lVar16 + 0x10) == 0) {
          lVar15 = lVar16;
        }
        if (((*(uint *)(lVar15 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0) ||
           (*(uint *)param_1[2] <=
            (uint)(*(int *)(*(longlong *)param_1[1] + 8 + (longlong)(int)uVar9 * 4) -
                  *(int *)(*(longlong *)param_1[1] + (longlong)(int)uVar17 * 4))))
        goto LAB_14370b9d2;
        bVar6 = false;
      }
      uVar18 = uVar18 & ~(uint)uVar14;
      puVar8 = *(uint **)(puVar2 + 4);
      if (*(uint **)(puVar2 + 4) == (uint *)0x0) {
        puVar8 = puVar2;
      }
      iVar19 = (int)uVar20;
      lVar16 = (longlong)iVar19;
      uVar9 = puVar8[lVar16] & uVar18;
      if (uVar9 == 0) {
        iVar10 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar10 = uVar4 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar19) {
          iVar11 = iVar19;
        }
        if (iVar10 <= iVar19) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar9 = puVar8[lVar16 + lVar15 + 1];
          if (uVar9 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar11 - lVar16 == lVar15) {
            return;
          }
        }
        uVar20 = (ulonglong)(iVar19 + (int)lVar15 + 1);
        uVar18 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar14 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar9 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while ((int)uVar9 < (int)uVar4);
  }
  return;
}



// FUNCTION 14370bab5 FUN_14370bab5 body=69 status=ok
// SIG undefined FUN_14370bab5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14370bab5(void)

{
  _DAT_14cb09450 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014370baf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09458,1);
  return;
}



// FUNCTION 14370bafa FUN_14370bafa body=69 status=ok
// SIG undefined FUN_14370bafa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14370bafa(void)

{
  _DAT_14cb09460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014370bb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09468,1);
  return;
}



// FUNCTION 14370bb40 FUN_14370bb40 body=253 status=ok
// SIG undefined FUN_14370bb40(void)

int * FUN_14370bb40(int *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar2 = 0x80000000;
  if ((DAT_14ca85069 == '\x01') && (DAT_14c761b90 != 0)) {
    lVar2 = param_2 << 0x21;
    lVar5 = (longlong)DAT_14c761b94;
    if (0 < lVar5) {
      if (lVar2 < lVar5) {
        lVar5 = lVar2;
      }
      lVar2 = lVar5 << 0x14;
    }
  }
  lVar2 = lVar2 / (longlong)((int)param_2 * 0x16c8);
  lVar5 = 0x100000000;
  uVar1 = 0;
  do {
    uVar7 = uVar1;
    uVar1 = uVar7 + 1;
    lVar5 = lVar5 + 0x100000000;
    if (0x70 < uVar1) break;
    iVar4 = (int)(uVar7 + 2);
  } while ((longlong)((ulonglong)(uint)(iVar4 * iVar4) * (uVar7 + 2)) <= lVar2);
  uVar7 = uVar7 + 2;
  iVar6 = (int)uVar7;
  iVar4 = (int)uVar1;
  uVar9 = iVar6 * iVar4 * iVar4;
  *param_1 = iVar4;
  param_1[1] = iVar4;
  param_1[2] = iVar4;
  uVar8 = uVar1;
  if ((uVar1 < 0x71) && ((longlong)(ulonglong)uVar9 <= lVar2)) {
    *param_1 = iVar6;
    uVar9 = iVar6 * iVar4 * iVar6;
    uVar8 = uVar7;
  }
  uVar3 = uVar1;
  if ((uVar1 < 0x71) && ((int)uVar9 <= lVar2)) {
    param_1[1] = iVar6;
    uVar3 = uVar7;
  }
  if ((uVar1 < 0x71) && ((longlong)(lVar5 * uVar8 * uVar3) >> 0x20 <= lVar2)) {
    param_1[2] = iVar6;
  }
  return param_1;
}



// FUNCTION 14370bc3d FUN_14370bc3d body=69 status=ok
// SIG undefined FUN_14370bc3d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14370bc3d(void)

{
  _DAT_14cb09470 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014370bc7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09478,1);
  return;
}



// FUNCTION 14370bca6 FUN_14370bca6 body=674 status=ok
// SIG undefined FUN_14370bca6(void)

longlong * FUN_14370bca6(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)0x0;
  }
  else {
    cVar1 = (**(code **)(*param_2 + 0x1c0))(param_2);
    if (cVar1 == '\0') {
      if (DAT_14caec308 == 0) {
        local_50 = &local_28;
        local_28 = FUN_1417df956;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_146386466;
        local_58 = &LAB_147bb408b;
        local_60 = (code *)&LAB_1463eaa15;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000001;
        local_80 = 8;
        local_88 = 0x2e0;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
      }
      if (((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14caec308 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14caec308 + 0x38) * 8) !=
           DAT_14caec308 + 0x30)) ||
         (cVar1 = (**(code **)(*param_2 + 0x598))(param_2), cVar1 == '\0')) {
        uVar5 = *param_1;
        uVar2 = FUN_1402d2740();
        plVar3 = (longlong *)FUN_14092e757(uVar2,param_2,uVar5,0);
        param_2 = (longlong *)0x0;
        if (plVar3 != (longlong *)0x0) {
          if (DAT_14caec470 == 0) {
            local_50 = &local_28;
            local_28 = FUN_1417df956;
            local_40 = FUN_14081d0ea;
            local_48 = &LAB_1463eaa20;
            local_58 = &LAB_147bbd9ea;
            local_60 = FUN_1401cf6d7;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x10000000;
            local_80 = 8;
            local_88 = 0x330;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e)
            ;
          }
          param_2 = plVar3;
          if ((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) ==
              DAT_14caec470 + 0x30)) {
            local_38 = 0;
            uStack_30 = 0;
            plVar4 = (longlong *)(**(code **)(*plVar3 + 0x360))(plVar3);
            if ((plVar4 != (longlong *)0x0) &&
               (cVar1 = (**(code **)(*plVar4 + 0x1c0))(plVar4), cVar1 == '\0')) {
              uVar5 = *param_1;
              uVar2 = FUN_1402d2740();
              uVar5 = FUN_14092e757(uVar2,plVar4,uVar5,0);
              FUN_147bbed06(plVar3 + 0x23,uVar5,1);
            }
          }
        }
      }
      else {
        param_2 = (longlong *)param_2[0x22];
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14370bf4a FUN_14370bf4a body=682 status=ok
// SIG undefined FUN_14370bf4a(void)

longlong * FUN_14370bf4a(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)FUN_140cc27fc(param_2);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x1c0))(plVar2);
    if (cVar1 == '\0') {
      if (DAT_14caec308 == 0) {
        local_50 = &local_28;
        local_28 = FUN_1417df956;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_146386466;
        local_58 = &LAB_147bb408b;
        local_60 = (code *)&LAB_1463eaa15;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000001;
        local_80 = 8;
        local_88 = 0x2e0;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
      }
      if (((*(int *)(plVar2[2] + 0x38) < *(int *)(DAT_14caec308 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14caec308 + 0x38) * 8) !=
           DAT_14caec308 + 0x30)) || (cVar1 = (**(code **)(*plVar2 + 0x598))(plVar2), cVar1 == '\0')
         ) {
        uVar6 = *param_1;
        uVar3 = FUN_1402d2740();
        plVar4 = (longlong *)FUN_14092e757(uVar3,plVar2,uVar6,0);
        plVar2 = (longlong *)0x0;
        if (plVar4 != (longlong *)0x0) {
          if (DAT_14caec470 == 0) {
            local_50 = &local_28;
            local_28 = FUN_1417df956;
            local_40 = FUN_14081d0ea;
            local_48 = &LAB_1463eaa20;
            local_58 = &LAB_147bbd9ea;
            local_60 = FUN_1401cf6d7;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x10000000;
            local_80 = 8;
            local_88 = 0x330;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e)
            ;
          }
          plVar2 = plVar4;
          if ((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) ==
              DAT_14caec470 + 0x30)) {
            local_38 = 0;
            uStack_30 = 0;
            plVar5 = (longlong *)(**(code **)(*plVar4 + 0x360))(plVar4);
            if ((plVar5 != (longlong *)0x0) &&
               (cVar1 = (**(code **)(*plVar5 + 0x1c0))(plVar5), cVar1 == '\0')) {
              uVar6 = *param_1;
              uVar3 = FUN_1402d2740();
              uVar6 = FUN_14092e757(uVar3,plVar5,uVar6,0);
              FUN_147bbed06(plVar4 + 0x23,uVar6,1);
            }
          }
        }
      }
      else {
        plVar2 = (longlong *)plVar2[0x22];
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2;
}



// FUNCTION 14370c1f5 FUN_14370c1f5 body=69 status=ok
// SIG undefined FUN_14370c1f5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14370c1f5(void)

{
  _DAT_14cb09878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014370c237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09880,1);
  return;
}



// FUNCTION 14370c27a FUN_14370c27a body=55 status=ok
// SIG undefined FUN_14370c27a(void)

void FUN_14370c27a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb098f0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb098f0 = FUN_14171c317(FUN_1464050a2,uVar1,L"ENormalMode");
  }
  return;
}



// FUNCTION 14370c2b1 FUN_14370c2b1 body=55 status=ok
// SIG undefined FUN_14370c2b1(void)

void FUN_14370c2b1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb09908 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb09908 = FUN_14171c317(FUN_1464050d1,uVar1,L"EImportanceLevel");
  }
  return;
}



// FUNCTION 14370c2e8 FUN_14370c2e8 body=55 status=ok
// SIG undefined FUN_14370c2e8(void)

void FUN_14370c2e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb09920 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb09920 = FUN_14171c317(FUN_146405100,uVar1,L"EOptimizationType");
  }
  return;
}



// FUNCTION 14370c31f FUN_14370c31f body=55 status=ok
// SIG undefined FUN_14370c31f(void)

void FUN_14370c31f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb099c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb099c8 = FUN_14171c317(FUN_1464054b6,uVar1,L"EStaticMeshPaintSupport");
  }
  return;
}



// FUNCTION 14370c356 FUN_14370c356 body=19 status=ok
// SIG undefined FUN_14370c356(void)

undefined4 FUN_14370c356(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + 8);
  }
  return 0;
}



// FUNCTION 14370c36a FUN_14370c36a body=13583 status=ok
// SIG undefined FUN_14370c36a(void)

void FUN_14370c36a(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  ulonglong *puVar4;
  int *piVar5;
  void *_Src;
  byte bVar6;
  undefined **ppuVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  DWORD DVar14;
  DWORD DVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined4 *puVar22;
  uint uVar23;
  bool bVar24;
  longlong lVar25;
  longlong lVar26;
  double *pdVar27;
  double *pdVar28;
  bool bVar29;
  undefined1 uVar30;
  undefined1 auStack_618 [34];
  undefined1 local_5f6;
  undefined1 local_5f5;
  undefined1 local_5f4;
  undefined1 local_5f3;
  undefined1 local_5f2;
  undefined1 local_5f1;
  undefined1 local_5f0;
  undefined1 local_5ef;
  undefined1 local_5ee;
  undefined1 local_5ed;
  undefined1 local_5ec;
  undefined1 local_5eb;
  undefined1 local_5ea;
  undefined1 local_5e9;
  undefined1 local_5e8;
  undefined1 local_5e7;
  undefined1 local_5e6;
  undefined1 local_5e5;
  undefined1 local_5e4;
  undefined1 local_5e3;
  undefined1 local_5e2;
  undefined1 local_5e1;
  longlong local_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  longlong local_5c0;
  undefined1 local_5b6 [2];
  undefined4 local_5b4;
  double local_5b0;
  double local_5a8;
  double local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 *local_588;
  undefined8 **local_580;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0 [10];
  undefined4 local_3c8 [10];
  undefined4 local_3a0 [66];
  double local_298 [5];
  undefined4 local_270 [112];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_618;
  local_580 = &local_588;
  local_598 = &PTR_FUN_149e37810;
  local_588 = &local_598;
  local_590 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39474);
  bVar29 = false;
  FUN_140562eea(local_5b6,param_2,0,&DAT_14c896044);
  if (param_2[0xd] != 0) {
    bVar29 = *(longlong *)(param_2[0xd] + 0x10) != 0;
  }
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_598 = (undefined **)CONCAT44(local_598._4_4_,(uint)bVar29);
    (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
    uVar23 = (uint)local_598;
    if (1 < (uint)local_598) {
      FUN_14572541c(param_2);
      uVar23 = (uint)local_598;
    }
  }
  else {
    uVar23 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  local_5c0 = *(longlong *)(param_1 + 0x188);
  (**(code **)(*param_2 + 0x150))(param_2,&local_5c0);
  lVar26 = local_5c0;
  if ((local_5c0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_5c0);
  }
  *(longlong *)(param_1 + 0x188) = lVar26;
  if (0xd7 < (int)param_2[8]) {
    local_598 = *(undefined ***)(param_1 + 0x248);
    (**(code **)(*param_2 + 0x150))(param_2,&local_598);
    ppuVar7 = local_598;
    if ((local_598 != (undefined **)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_598);
    }
    *(undefined ***)(param_1 + 0x248) = ppuVar7;
  }
  if ((((*(byte *)(param_2 + 5) & 1) != 0) &&
      (iVar9 = FUN_1448332aa(param_2,&DAT_149e3cbd8), iVar9 < 1)) &&
     (*(longlong *)(param_1 + 0x188) != 0)) {
    FUN_140078ec2(*(longlong *)(param_1 + 0x188) + 0x148,DAT_14cad0ef8);
  }
  if ((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0) {
    plVar16 = *(longlong **)(param_1 + 0x188);
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0xd8))(plVar16,param_2);
    }
    plVar16 = *(longlong **)(param_1 + 0x248);
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0xd8))(plVar16,param_2);
    }
  }
  local_5d8 = 0;
  uStack_5d0 = 0;
  FUN_1402ac1b3(param_2);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x1b8) << 3,
             (longlong)*(int *)(param_1 + 0x1bc) << 3);
  uVar10 = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    uVar10 = *(undefined4 *)(param_1 + 0x1b8);
  }
  local_598 = (undefined **)CONCAT44(local_598._4_4_,uVar10);
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
    }
    else {
      FUN_14572512c(param_2,&local_598);
    }
    uVar11 = (uint)local_598;
  }
  else {
    uVar11 = *(uint *)*puVar4;
    local_598 = (undefined **)CONCAT44(local_598._4_4_,uVar11);
    *puVar4 = (ulonglong)puVar1;
  }
  plVar16 = (longlong *)(param_1 + 0x1b0);
  if (uVar11 == 0) {
    if (((*(byte *)(param_2 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_1 + 0x1b8) = 0, *(int *)(param_1 + 0x1bc) != 0)) {
      FUN_143718486(plVar16,0);
    }
  }
  else if ((((int)uVar11 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
          ((0x200000 < uVar11 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
    FUN_14572541c(param_2);
  }
  else if ((*(byte *)(param_2 + 5) & 1) == 0) {
    *(uint *)(param_1 + 0x1b8) = uVar11;
    lVar26 = 0;
    lVar25 = 0;
    do {
      (**(code **)(*param_2 + 0x138))(param_2,*(longlong *)(param_1 + 0x1b0) + lVar26);
      lVar25 = lVar25 + 1;
      lVar26 = lVar26 + 8;
    } while (lVar25 < *(int *)(param_1 + 0x1b8));
  }
  else {
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if (*(uint *)(param_1 + 0x1bc) != uVar11) {
      FUN_143718486(plVar16);
      if ((int)(uint)local_598 < 1) goto LAB_14370c65d;
    }
    iVar9 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x1b8);
      *(uint *)(param_1 + 0x1b8) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x1bc) < iVar3 + 1U) {
        FUN_147d59738(plVar16,iVar3);
      }
      *(undefined8 *)(*plVar16 + (longlong)iVar3 * 8) = 0;
      (**(code **)(*param_2 + 0x138))(param_2);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)(uint)local_598);
  }
LAB_14370c65d:
  lVar26 = param_1;
  if (uVar23 != 0) {
    for (; lVar26 != 0; lVar26 = *(longlong *)(lVar26 + 0x20)) {
      if ((*(uint *)(lVar26 + 8) & 0x30) != 0) goto LAB_14370d1a3;
    }
    if (((*(byte *)((longlong)param_2 + 0x2b) & 8) == 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
      plVar16 = (longlong *)FUN_14001cc68(0x98,0x10);
      *plVar16 = 0;
      plVar16[1] = 0;
      plVar16[2] = 0;
      plVar16[3] = 0;
      plVar16[4] = 0;
      plVar16[5] = 0;
      plVar16[6] = 0;
      plVar16[7] = 0;
      plVar16[8] = 0;
      plVar16[9] = 0;
      plVar16[0x11] = 0xffffffff;
      *(undefined2 *)(plVar16 + 0x12) = 0;
      uVar21 = 0;
      FUN_1404d75a8(plVar16 + 8,0);
      FUN_1404d768c(plVar16[8]);
      lVar26 = DAT_14cb09ae0;
      local_598 = (undefined **)((ulonglong)local_598 & 0xffffffff00000000);
      local_5e0 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar9 = *(int *)(local_5e0 + 0xc60);
      if (iVar9 != 0x40000002) {
        bVar29 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar9 != 2)) {
          if (iVar9 == 1) {
            DVar14 = FUN_140ad26c0();
            DVar15 = GetCurrentThreadId();
            bVar29 = DVar14 == DVar15;
          }
          else {
            bVar29 = false;
          }
        }
        uVar21 = (ulonglong)(bVar29 ^ 1);
      }
      if (*(int *)(lVar26 + uVar21 * 4) != 0) {
        puVar4 = (ulonglong *)param_2[1];
        puVar22 = (undefined4 *)*puVar4 + 1;
        if ((undefined4 *)puVar4[1] < puVar22) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
          }
          else {
            FUN_14572512c(param_2,&local_598);
          }
        }
        else {
          local_598 = (undefined **)CONCAT44(local_598._4_4_,*(undefined4 *)*puVar4);
          *puVar4 = (ulonglong)puVar22;
        }
        if (((*(byte *)(param_2 + 5) & 1) != 0) && (DAT_14c760db4 == 1)) {
          *(undefined1 *)(plVar16 + 0x12) = (undefined1)local_598;
        }
      }
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)(int)plVar16[1] << 3,
                 (longlong)*(int *)((longlong)plVar16 + 0xc) << 3);
      uVar23 = local_598._4_4_;
      if ((*(byte *)(param_2 + 5) & 1) == 0) {
        local_598 = (undefined **)CONCAT44(local_598._4_4_,(int)plVar16[1]);
        puVar4 = (ulonglong *)param_2[1];
        piVar5 = (int *)*puVar4 + 1;
        if ((int *)puVar4[1] < piVar5) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
          }
          else {
            FUN_14572512c(param_2,&local_598);
          }
          iVar9 = (uint)local_598;
        }
        else {
          iVar9 = *(int *)*puVar4;
          local_598 = (undefined **)CONCAT44(local_598._4_4_,iVar9);
          *puVar4 = (ulonglong)piVar5;
        }
        if (0 < iVar9) {
          lVar26 = 0;
          do {
            FUN_143710b8a(*(undefined8 *)(*plVar16 + lVar26 * 8),param_2,param_1);
            lVar26 = lVar26 + 1;
          } while (lVar26 < (int)(uint)local_598);
        }
      }
      else {
        local_598 = (undefined **)((ulonglong)local_598._4_4_ << 0x20);
        puVar4 = (ulonglong *)param_2[1];
        puVar22 = (undefined4 *)*puVar4 + 1;
        if ((undefined4 *)puVar4[1] < puVar22) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
          }
          else {
            FUN_14572512c(param_2,&local_598);
          }
        }
        else {
          local_598 = (undefined **)CONCAT44(uVar23,*(undefined4 *)*puVar4);
          *puVar4 = (ulonglong)puVar22;
        }
        FUN_14029680c(plVar16,(ulonglong)local_598 & 0xffffffff);
        if (0 < (int)(uint)local_598) {
          iVar9 = 0;
          do {
            uVar17 = FUN_14001cc68(0x298,0x10);
            FUN_143712352(uVar17);
            iVar3 = (int)plVar16[1];
            *(uint *)(plVar16 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)plVar16 + 0xc) < iVar3 + 1U) {
              FUN_1456bd870(plVar16,iVar3);
            }
            *(undefined8 *)(*plVar16 + (longlong)iVar3 * 8) = uVar17;
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)(uint)local_598);
          if (0 < (int)(uint)local_598) {
            lVar26 = 0;
            do {
              FUN_143710b8a(*(undefined8 *)(*plVar16 + lVar26 * 8),param_2,param_1);
              lVar26 = lVar26 + 1;
            } while (lVar26 < (int)(uint)local_598);
          }
        }
      }
      plVar20 = (longlong *)param_2[1];
      if ((undefined1 *)plVar20[1] < (undefined1 *)*plVar20 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)plVar16 + 0x8e),1);
      }
      else {
        *(undefined1 *)((longlong)plVar16 + 0x8e) = *(undefined1 *)*plVar20;
        *plVar20 = *plVar20 + 1;
      }
      *(char *)((longlong)plVar16 + 0x8f) =
           (char)(int)plVar16[1] - *(char *)((longlong)plVar16 + 0x8e);
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_1403fa188(plVar16 + 2);
        if (0 < (int)plVar16[1]) {
          iVar9 = 0;
          do {
            iVar3 = (int)plVar16[3];
            *(uint *)(plVar16 + 3) = iVar3 + 1U;
            if (*(uint *)((longlong)plVar16 + 0x1c) < iVar3 + 1U) {
              FUN_147d596a4(plVar16 + 2,iVar3);
            }
            FUN_143712b08((longlong)iVar3 * 0x450 + plVar16[2],DAT_14c760db4);
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)plVar16[1]);
        }
      }
      FUN_140dfff0a(plVar16[8],param_2,param_1,1);
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_598 = (undefined **)CONCAT44(local_598._4_4_,(uint)(plVar16[9] != 0));
        (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
        uVar23 = (uint)local_598;
        if (1 < (uint)local_598) {
          FUN_14572541c(param_2);
          uVar23 = (uint)local_598;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      if (uVar23 != 0) {
        puVar18 = (undefined8 *)plVar16[9];
        if (puVar18 == (undefined8 *)0x0) {
          puVar18 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          *puVar18 = 0;
          puVar18[1] = 0;
          puVar18[2] = 0;
          puVar18[3] = 0;
          plVar16[9] = (longlong)puVar18;
        }
        FUN_147d529e0(puVar18,param_2,param_1,plVar16);
      }
      FUN_140562eea(&local_5b0,param_2,0,&DAT_14c896044);
      if ((((ulonglong)local_5b0 & 2) == 0) && (((ulonglong)local_5b0 & 0x200) == 0)) {
        if ((*(byte *)(param_2 + 5) & 4) != 0) {
          FUN_143584036(DAT_14caf20c8,param_1,0);
        }
        if (0 < (int)plVar16[1]) {
          lVar26 = 0;
          do {
            lVar25 = *(longlong *)(*plVar16 + lVar26 * 8);
            puVar4 = (ulonglong *)param_2[1];
            puVar1 = (uint *)*puVar4 + 1;
            if ((uint *)puVar4[1] < puVar1) {
              local_598 = (undefined **)
                          CONCAT44(local_598._4_4_,(uint)(*(longlong *)(lVar25 + 0x48) != 0));
              (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
              uVar23 = (uint)local_598;
              if (1 < (uint)local_598) {
                FUN_14572541c(param_2);
                uVar23 = (uint)local_598;
              }
            }
            else {
              uVar23 = *(uint *)*puVar4;
              *puVar4 = (ulonglong)puVar1;
            }
            if (uVar23 != 0) {
              puVar18 = *(undefined8 **)(lVar25 + 0x48);
              if (puVar18 == (undefined8 *)0x0) {
                puVar18 = (undefined8 *)FUN_14001cc68(0x98,0x10);
                *puVar18 = &PTR_FUN_14aabc2e8;
                *(undefined1 *)(puVar18 + 8) = 0;
                *(undefined4 *)(puVar18 + 0x12) = 0;
                puVar18[1] = 0;
                puVar18[2] = 0;
                puVar18[3] = 0;
                puVar18[4] = 0;
                puVar18[5] = 0;
                puVar18[6] = 0;
                *(undefined1 *)(puVar18 + 7) = 0;
                puVar18[9] = 0;
                puVar18[10] = 0;
                puVar18[0xb] = 0;
                puVar18[0xc] = 0;
                puVar18[0xd] = 0;
                puVar18[0xe] = 0;
                puVar18[0xf] = 0;
                puVar18[0x10] = 0;
                *(undefined4 *)(puVar18 + 0x11) = 0;
                LOCK();
                UNLOCK();
                iVar9 = DAT_14c761ba0 + 1;
                *(int *)(puVar18 + 0x12) = DAT_14c761ba0;
                DAT_14c761ba0 = iVar9;
                *(undefined8 **)(lVar25 + 0x48) = puVar18;
              }
              FUN_140119d96(param_2,puVar18 + 1);
              piVar5 = *(int **)param_2[1];
              if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
                local_598 = (undefined **)CONCAT44(local_598._4_4_,(uint)*(byte *)(puVar18 + 8));
                (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
                if (1 < (uint)local_598) {
                  FUN_14572541c(param_2);
                }
                *(bool *)(puVar18 + 8) = (uint)local_598 != 0;
              }
              else {
                *(bool *)(puVar18 + 8) = *piVar5 != 0;
                *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
              }
              (**(code **)(*param_2 + 0x10))
                        (param_2,(longlong)*(int *)(puVar18 + 10) << 6,
                         (longlong)*(int *)((longlong)puVar18 + 0x54) << 6);
              uVar10 = 0;
              if ((*(byte *)(param_2 + 5) & 1) == 0) {
                uVar10 = *(undefined4 *)(puVar18 + 10);
              }
              local_598 = (undefined **)CONCAT44(local_598._4_4_,uVar10);
              puVar4 = (ulonglong *)param_2[1];
              puVar1 = (uint *)*puVar4 + 1;
              if ((uint *)puVar4[1] < puVar1) {
                if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                  (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
                }
                else {
                  FUN_14572512c(param_2,&local_598);
                }
                uVar23 = (uint)local_598;
              }
              else {
                uVar23 = *(uint *)*puVar4;
                local_598 = (undefined **)CONCAT44(local_598._4_4_,uVar23);
                *puVar4 = (ulonglong)puVar1;
              }
              plVar20 = puVar18 + 9;
              if (uVar23 == 0) {
                if (((*(byte *)(param_2 + 5) & 1) != 0) &&
                   (*(undefined4 *)(puVar18 + 10) = 0, *(int *)((longlong)puVar18 + 0x54) != 0)) {
                  FUN_1417f1b98(plVar20,0);
                }
              }
              else if ((((int)uVar23 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
                      ((0x40000 < uVar23 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
                FUN_14572541c(param_2);
              }
              else if ((*(byte *)(param_2 + 5) & 1) == 0) {
                *(uint *)(puVar18 + 10) = uVar23;
                lVar25 = 0;
                lVar19 = 0;
                do {
                  FUN_14007453b(param_2,puVar18[9] + lVar25);
                  lVar19 = lVar19 + 1;
                  lVar25 = lVar25 + 0x40;
                } while (lVar19 < *(int *)(puVar18 + 10));
              }
              else {
                *(undefined4 *)(puVar18 + 10) = 0;
                if (*(uint *)((longlong)puVar18 + 0x54) != uVar23) {
                  FUN_1417f1b98(plVar20);
                  if ((int)(uint)local_598 < 1) goto LAB_14370ccd7;
                }
                iVar9 = 0;
                do {
                  iVar3 = *(int *)(puVar18 + 10);
                  *(uint *)(puVar18 + 10) = iVar3 + 1U;
                  if (*(uint *)((longlong)puVar18 + 0x54) < iVar3 + 1U) {
                    FUN_14041c46e(plVar20,iVar3);
                  }
                  lVar25 = (longlong)iVar3 * 0x40 + *plVar20;
                  FUN_14041c46c(lVar25,1);
                  FUN_14007453b(param_2,lVar25);
                  iVar9 = iVar9 + 1;
                } while (iVar9 < (int)(uint)local_598);
              }
            }
LAB_14370ccd7:
            lVar26 = lVar26 + 1;
          } while (lVar26 < (int)plVar16[1]);
        }
      }
      FUN_140562eea(&local_5b0,param_2,0,&DAT_14c896044);
      if ((((ulonglong)local_5b0 & 2) == 0) && (((ulonglong)local_5b0 & 0x100) == 0)) {
        if ((*(byte *)(param_2 + 5) & 4) != 0) {
          FUN_1434d0b16(DAT_14cad6f20,param_1,0);
        }
        if (0 < (int)plVar16[1]) {
          lVar26 = 0;
          do {
            lVar25 = *(longlong *)(*plVar16 + lVar26 * 8);
            puVar4 = (ulonglong *)param_2[1];
            puVar1 = (uint *)*puVar4 + 1;
            if ((uint *)puVar4[1] < puVar1) {
              local_598 = (undefined **)
                          CONCAT44(local_598._4_4_,(uint)(*(longlong *)(lVar25 + 0x40) != 0));
              (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
              uVar23 = (uint)local_598;
              if (1 < (uint)local_598) {
                FUN_14572541c(param_2);
                uVar23 = (uint)local_598;
              }
            }
            else {
              uVar23 = *(uint *)*puVar4;
              *puVar4 = (ulonglong)puVar1;
            }
            if (uVar23 != 0) {
              lVar19 = *(longlong *)(lVar25 + 0x40);
              if (lVar19 == 0) {
                lVar19 = FUN_14001cc68(0x118,0x10);
                FUN_1434d09e0(lVar19);
                *(longlong *)(lVar25 + 0x40) = lVar19;
                *(undefined8 *)(lVar19 + 0x110) = *(undefined8 *)(param_1 + 0x18);
                lVar19 = *(longlong *)(lVar25 + 0x40);
              }
              FUN_1403339bc(lVar19,param_2,param_1);
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 < (int)plVar16[1]);
        }
      }
      pbVar2 = (byte *)((longlong)plVar16 + 0x8c);
      FUN_14010dffd(param_2,plVar16 + 10);
      plVar20 = (longlong *)param_2[1];
      if ((int *)plVar20[1] < (int *)*plVar20 + 1) {
        local_598 = (undefined **)CONCAT44(local_598._4_4_,(uint)*pbVar2);
        (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
        if (1 < (uint)local_598) {
          FUN_14572541c(param_2);
        }
        *pbVar2 = (uint)local_598 != 0;
      }
      else {
        *pbVar2 = *(int *)*plVar20 != 0;
        *plVar20 = *plVar20 + 4;
      }
      if (((*(byte *)(param_2 + 5) & 1) != 0) &&
         (iVar9 = FUN_1448332aa(param_2,&DAT_149e3cb60), iVar9 < 10)) {
        iVar9 = 8;
        do {
          puVar4 = (ulonglong *)param_2[1];
          puVar22 = (undefined4 *)*puVar4 + 1;
          if ((undefined4 *)puVar4[1] < puVar22) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
            }
            else {
              FUN_14572512c(param_2,&local_598);
            }
          }
          else {
            local_598 = (undefined **)CONCAT44(local_598._4_4_,*(undefined4 *)*puVar4);
            *puVar4 = (ulonglong)puVar22;
          }
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        puVar4 = (ulonglong *)param_2[1];
        if (puVar4[1] < *puVar4 + 4) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
          }
          else {
            FUN_14572512c(param_2,&local_598);
          }
        }
        else {
          *puVar4 = *puVar4 + 4;
        }
      }
      piVar5 = (int *)(local_5e0 + 0xc60);
      lVar26 = 0x20;
      do {
        FUN_1406539b2(param_2,(longlong)plVar16 + lVar26);
        lVar25 = DAT_14cb09b28;
        lVar26 = lVar26 + 4;
      } while (lVar26 != 0x40);
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        iVar9 = *piVar5;
        if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar9 == 2)) {
          uVar21 = 0;
        }
        else if (iVar9 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          uVar21 = (ulonglong)(DVar14 != DVar15);
        }
        else {
          uVar21 = 1;
        }
        if ((*(int *)(lVar25 + uVar21 * 4) == 1) && (iVar9 = (int)plVar16[1], 0 < iVar9)) {
          lVar26 = 0;
          do {
            lVar25 = *(longlong *)(*plVar16 + lVar26 * 8);
            puVar18 = *(undefined8 **)(lVar25 + 0x40);
            if (puVar18 != (undefined8 *)0x0) {
              (**(code **)*puVar18)(puVar18,1);
              *(undefined8 *)(lVar25 + 0x40) = 0;
              iVar9 = (int)plVar16[1];
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 < iVar9);
        }
      }
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_140562eea(&local_598,param_2,0,&DAT_14c896044);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1))
      {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
        _Init_thread_footer(&DAT_14c8442bc);
      }
      bVar6 = DAT_14c8442b8;
      if (DAT_14c872bf0 == '\x01') {
        if (DAT_14c872bf1 == '\x01') {
          bVar6 = DAT_14c8442b8 & 1;
          goto joined_r0x00014370d188;
        }
      }
      else {
joined_r0x00014370d188:
        if (bVar6 == 0) {
          lVar26 = *(longlong *)(param_1 + 0xe0);
          *(longlong **)(param_1 + 0xe0) = plVar16;
          if (lVar26 != 0) {
            FUN_14029672a(lVar26);
            FUN_1400020a8(lVar26);
          }
          cVar8 = FUN_1437155e0(param_1);
          if ((cVar8 != '\0') && (plVar16 = *(longlong **)(param_1 + 0xe0), 0 < (int)plVar16[1])) {
            lVar26 = 0;
            do {
              lVar25 = *(longlong *)(*plVar16 + lVar26 * 8);
              *(undefined1 *)(lVar25 + 0x290) = 1;
              uVar17 = *(undefined8 *)(lVar25 + 0x108);
              FUN_14067fdfe(lVar25);
              FUN_143710ad6(lVar25);
              *(undefined8 *)(lVar25 + 0x108) = uVar17;
              lVar26 = lVar26 + 1;
            } while (lVar26 < (int)plVar16[1]);
          }
          goto LAB_14370d1a3;
        }
      }
      if (plVar16 != (longlong *)0x0) {
        FUN_14029672a(plVar16);
        FUN_1400020a8(plVar16);
      }
    }
  }
LAB_14370d1a3:
  if (0xea < (int)param_2[8]) {
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_598 = (undefined **)
                  CONCAT44(local_598._4_4_,(uint)(*(longlong *)(param_1 + 0x1c0) != 0));
      (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
      uVar23 = (uint)local_598;
      if (1 < (uint)local_598) {
        FUN_14572541c(param_2);
        uVar23 = (uint)local_598;
      }
    }
    else {
      uVar23 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    if (uVar23 != 0) {
      if (*(longlong *)(param_1 + 0x1c0) == 0) {
        lVar26 = FUN_14001cc68(0x890,0x10);
        FUN_141235958(lVar26);
        plVar20 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar20[1] = (longlong)&DAT_100000001;
        *plVar20 = (longlong)&PTR_FUN_14aabc930;
        plVar20[2] = lVar26;
        *(longlong *)(param_1 + 0x1c0) = lVar26;
        plVar16 = *(longlong **)(param_1 + 0x1c8);
        if (plVar20 == plVar16) {
          if (plVar20 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar20 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar5 = (int *)((longlong)plVar20 + 0xc);
              *piVar5 = *piVar5 + -1;
              iVar9 = *piVar5;
              UNLOCK();
              plVar16 = plVar20;
              goto joined_r0x00014370e5b5;
            }
          }
        }
        else {
          *(longlong **)(param_1 + 0x1c8) = plVar20;
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar20 = plVar16 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)*plVar20 == 0) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar5 = (int *)((longlong)plVar16 + 0xc);
              *piVar5 = *piVar5 + -1;
              iVar9 = *piVar5;
              UNLOCK();
joined_r0x00014370e5b5:
              if (iVar9 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
          }
        }
      }
      _Src = *(void **)(param_1 + 0x1c0);
      puVar18 = &local_598;
      memcpy(puVar18,_Src,0x534);
      plVar16 = (longlong *)param_2[1];
      if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
        }
        else {
          FUN_14572512c(param_2,&local_598);
        }
      }
      else {
        local_598 = (undefined **)CONCAT44(local_598._4_4_,*(undefined4 *)*plVar16);
        *plVar16 = *plVar16 + 4;
      }
      plVar16 = (longlong *)param_2[1];
      if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,(longlong)&local_598 + 4,4);
        }
        else {
          FUN_14572512c(param_2,(longlong)&local_598 + 4);
        }
      }
      else {
        local_598 = (undefined **)CONCAT44(*(undefined4 *)*plVar16,(uint)local_598);
        *plVar16 = *plVar16 + 4;
      }
      plVar16 = (longlong *)param_2[1];
      if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_590,4);
        }
        else {
          FUN_14572512c(param_2,&local_590);
        }
      }
      else {
        local_590 = (longlong *)CONCAT44(local_590._4_4_,*(undefined4 *)*plVar16);
        *plVar16 = *plVar16 + 4;
      }
      plVar16 = (longlong *)param_2[1];
      if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,(longlong)&local_590 + 4,4);
        }
        else {
          FUN_14572512c(param_2,(longlong)&local_590 + 4);
        }
      }
      else {
        local_590 = (longlong *)CONCAT44(*(undefined4 *)*plVar16,(undefined4)local_590);
        *plVar16 = *plVar16 + 4;
      }
      lVar26 = 0;
      do {
        lVar25 = 0x10;
        do {
          plVar16 = (longlong *)param_2[1];
          if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)puVar18 + lVar25),4);
            }
            else {
              FUN_14572512c(param_2);
            }
          }
          else {
            *(undefined4 *)((longlong)puVar18 + lVar25) = *(undefined4 *)*plVar16;
            *plVar16 = *plVar16 + 4;
          }
          lVar25 = lVar25 + 4;
        } while (lVar25 != 0x38);
        lVar26 = lVar26 + 1;
        puVar18 = puVar18 + 5;
      } while (lVar26 != 10);
      plVar16 = (longlong *)param_2[1];
      if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_3f8,4);
        }
        else {
          FUN_14572512c(param_2,&local_3f8);
        }
      }
      else {
        local_3f8 = *(undefined4 *)*plVar16;
        *plVar16 = *plVar16 + 4;
      }
      plVar16 = (longlong *)param_2[1];
      if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_3f4,4);
        }
        else {
          FUN_14572512c(param_2,&local_3f4);
        }
      }
      else {
        local_3f4 = *(undefined4 *)*plVar16;
        *plVar16 = *plVar16 + 4;
      }
      lVar26 = 0x1a8;
      do {
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)&local_598 + lVar26),4)
            ;
          }
          else {
            FUN_14572512c(param_2);
          }
        }
        else {
          *(undefined4 *)((longlong)&local_598 + lVar26) = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        lVar26 = lVar26 + 4;
      } while (lVar26 != 0x1d0);
      lVar26 = 0x1d0;
      do {
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)&local_598 + lVar26),4)
            ;
          }
          else {
            FUN_14572512c(param_2);
          }
        }
        else {
          *(undefined4 *)((longlong)&local_598 + lVar26) = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        lVar26 = lVar26 + 4;
      } while (lVar26 != 0x1f8);
      lVar26 = 0;
      bVar29 = true;
      do {
        bVar24 = bVar29;
        lVar25 = lVar26 * 0x84;
        lVar19 = 0;
        do {
          puVar22 = (undefined4 *)((longlong)local_3a0 + lVar19 + lVar25);
          plVar16 = (longlong *)param_2[1];
          if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,puVar22,4);
            }
            else {
              FUN_14572512c(param_2);
            }
          }
          else {
            *puVar22 = *(undefined4 *)*plVar16;
            *plVar16 = *plVar16 + 4;
          }
          lVar19 = lVar19 + 4;
        } while (lVar19 != 0x28);
        lVar19 = 0;
        do {
          puVar22 = (undefined4 *)((longlong)local_3a0 + lVar19 + lVar25 + 0x28);
          plVar16 = (longlong *)param_2[1];
          if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,puVar22,4);
            }
            else {
              FUN_14572512c(param_2);
            }
          }
          else {
            *puVar22 = *(undefined4 *)*plVar16;
            *plVar16 = *plVar16 + 4;
          }
          lVar19 = lVar19 + 4;
        } while (lVar19 != 0x28);
        lVar19 = 0;
        do {
          puVar22 = (undefined4 *)((longlong)local_3a0 + lVar19 + lVar25 + 0x50);
          plVar16 = (longlong *)param_2[1];
          if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,puVar22,4);
            }
            else {
              FUN_14572512c(param_2);
            }
          }
          else {
            *puVar22 = *(undefined4 *)*plVar16;
            *plVar16 = *plVar16 + 4;
          }
          lVar19 = lVar19 + 4;
        } while (lVar19 != 0x28);
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,local_3a0 + lVar26 * 0x21 + 0x1e,4);
          }
          else {
            FUN_14572512c(param_2);
          }
        }
        else {
          local_3a0[lVar26 * 0x21 + 0x1e] = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,local_3a0 + lVar26 * 0x21 + 0x1f,4);
          }
          else {
            FUN_14572512c(param_2);
          }
        }
        else {
          local_3a0[lVar26 * 0x21 + 0x1f] = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        puVar22 = local_3a0 + lVar26 * 0x21 + 0x20;
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,puVar22,4);
          }
          else {
            FUN_14572512c(param_2,puVar22);
          }
        }
        else {
          *puVar22 = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        lVar26 = 1;
        bVar29 = false;
      } while (bVar24);
      if ((int)param_2[8] < 0x16c) {
        uVar21 = (ulonglong)local_5b0 >> 0x20;
        local_5b0 = (double)((ulonglong)local_5b0 & 0xffffffff00000000);
        puVar4 = (ulonglong *)param_2[1];
        puVar22 = (undefined4 *)*puVar4 + 1;
        if ((undefined4 *)puVar4[1] < puVar22) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
          }
          else {
            FUN_14572512c(param_2,&local_5b0);
          }
        }
        else {
          local_5b0 = (double)CONCAT44((int)uVar21,*(undefined4 *)*puVar4);
          *puVar4 = (ulonglong)puVar22;
        }
        puVar4 = (ulonglong *)param_2[1];
        puVar22 = (undefined4 *)*puVar4 + 1;
        if ((undefined4 *)puVar4[1] < puVar22) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
          }
          else {
            FUN_14572512c(param_2,&local_5b0);
          }
        }
        else {
          local_5b0 = (double)CONCAT44(local_5b0._4_4_,*(undefined4 *)*puVar4);
          *puVar4 = (ulonglong)puVar22;
        }
        puVar4 = (ulonglong *)param_2[1];
        puVar22 = (undefined4 *)*puVar4 + 1;
        if ((undefined4 *)puVar4[1] < puVar22) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
          }
          else {
            FUN_14572512c(param_2,&local_5b0);
          }
        }
        else {
          local_5b0 = (double)CONCAT44(local_5b0._4_4_,*(undefined4 *)*puVar4);
          *puVar4 = (ulonglong)puVar22;
        }
        puVar4 = (ulonglong *)param_2[1];
        if (puVar4[1] < *puVar4 + 4) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
          }
          else {
            FUN_14572512c(param_2,&local_5b0);
          }
        }
        else {
          *puVar4 = *puVar4 + 4;
        }
      }
      lVar26 = 0;
      bVar29 = true;
      do {
        bVar24 = bVar29;
        lVar19 = lVar26 * 0xe0;
        lVar25 = 0;
        do {
          puVar22 = (undefined4 *)((longlong)local_298 + lVar25 + lVar19);
          plVar16 = (longlong *)param_2[1];
          if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,puVar22,4);
            }
            else {
              FUN_14572512c(param_2);
            }
          }
          else {
            *puVar22 = *(undefined4 *)*plVar16;
            *plVar16 = *plVar16 + 4;
          }
          lVar25 = lVar25 + 4;
        } while (lVar25 != 0x28);
        lVar25 = 0;
        do {
          puVar22 = (undefined4 *)((longlong)local_270 + lVar25 + lVar19);
          plVar16 = (longlong *)param_2[1];
          if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,puVar22,4);
            }
            else {
              FUN_14572512c(param_2);
            }
          }
          else {
            *puVar22 = *(undefined4 *)*plVar16;
            *plVar16 = *plVar16 + 4;
          }
          lVar25 = lVar25 + 4;
        } while (lVar25 != 0x28);
        lVar25 = 0;
        do {
          puVar22 = (undefined4 *)((longlong)local_270 + lVar25 + lVar19 + 0x28);
          plVar16 = (longlong *)param_2[1];
          if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,puVar22,4);
            }
            else {
              FUN_14572512c(param_2);
            }
          }
          else {
            *puVar22 = *(undefined4 *)*plVar16;
            *plVar16 = *plVar16 + 4;
          }
          lVar25 = lVar25 + 4;
        } while (lVar25 != 0x28);
        lVar25 = 0;
        do {
          puVar22 = (undefined4 *)((longlong)local_270 + lVar25 + lVar19 + 0x50);
          plVar16 = (longlong *)param_2[1];
          if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,puVar22,4);
            }
            else {
              FUN_14572512c(param_2);
            }
          }
          else {
            *puVar22 = *(undefined4 *)*plVar16;
            *plVar16 = *plVar16 + 4;
          }
          pdVar28 = local_298;
          lVar25 = lVar25 + 4;
        } while (lVar25 != 0x28);
        lVar25 = 0;
        pdVar27 = (double *)&DAT_00000028;
        do {
          puVar22 = (undefined4 *)((longlong)local_270 + lVar25 + lVar19 + 0x78);
          plVar16 = (longlong *)param_2[1];
          if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,puVar22,4);
              pdVar27 = pdVar28;
            }
            else {
              FUN_14572512c(param_2);
              pdVar27 = pdVar28;
            }
          }
          else {
            *puVar22 = *(undefined4 *)*plVar16;
            *plVar16 = *plVar16 + 4;
          }
          lVar25 = lVar25 + 4;
        } while (lVar25 != 0x28);
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,local_270 + lVar26 * 0x38 + 0x28,4);
            pdVar27 = pdVar28;
          }
          else {
            FUN_14572512c(param_2);
            pdVar27 = pdVar28;
          }
        }
        else {
          local_270[lVar26 * 0x38 + 0x28] = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,local_270 + lVar26 * 0x38 + 0x29,4);
            pdVar27 = pdVar28;
          }
          else {
            FUN_14572512c(param_2);
            pdVar27 = pdVar28;
          }
        }
        else {
          local_270[lVar26 * 0x38 + 0x29] = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,local_270 + lVar26 * 0x38 + 0x2a,4);
            pdVar27 = pdVar28;
          }
          else {
            FUN_14572512c(param_2);
            pdVar27 = pdVar28;
          }
        }
        else {
          local_270[lVar26 * 0x38 + 0x2a] = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,local_270 + lVar26 * 0x38 + 0x2b,4);
            pdVar27 = pdVar28;
          }
          else {
            FUN_14572512c(param_2);
            pdVar27 = pdVar28;
          }
        }
        else {
          local_270[lVar26 * 0x38 + 0x2b] = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,local_270 + lVar26 * 0x38 + 0x2c,4);
            pdVar27 = pdVar28;
          }
          else {
            FUN_14572512c(param_2);
            pdVar27 = pdVar28;
          }
        }
        else {
          local_270[lVar26 * 0x38 + 0x2c] = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        puVar22 = local_270 + lVar26 * 0x38 + 0x2d;
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,puVar22,4);
          }
          else {
            FUN_14572512c(param_2,puVar22);
          }
        }
        else {
          *puVar22 = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
          pdVar28 = pdVar27;
        }
        lVar26 = 1;
        bVar29 = false;
      } while (bVar24);
      lVar26 = 0x4c0;
      do {
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)&local_598 + lVar26),4)
            ;
          }
          else {
            FUN_14572512c(param_2);
          }
        }
        else {
          *(undefined4 *)((longlong)&local_598 + lVar26) = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        lVar26 = lVar26 + 4;
      } while (lVar26 != 0x4e8);
      plVar16 = (longlong *)param_2[1];
      if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_b0,4);
        }
        else {
          FUN_14572512c(param_2,&local_b0);
        }
      }
      else {
        local_b0 = *(undefined4 *)*plVar16;
        *plVar16 = *plVar16 + 4;
      }
      plVar16 = (longlong *)param_2[1];
      if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_ac,4);
        }
        else {
          FUN_14572512c(param_2,&local_ac);
        }
      }
      else {
        local_ac = *(undefined4 *)*plVar16;
        *plVar16 = *plVar16 + 4;
      }
      if (0x16b < (int)param_2[8]) {
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_a8,4);
          }
          else {
            FUN_14572512c(param_2,&local_a8);
          }
        }
        else {
          local_a8 = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_a4,4);
          }
          else {
            FUN_14572512c(param_2,&local_a4);
          }
        }
        else {
          local_a4 = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_a0,4);
          }
          else {
            FUN_14572512c(param_2,&local_a0);
          }
        }
        else {
          local_a0 = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_9c,4);
          }
          else {
            FUN_14572512c(param_2,&local_9c);
          }
        }
        else {
          local_9c = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_98,4);
          }
          else {
            FUN_14572512c(param_2,&local_98);
          }
        }
        else {
          local_98 = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_94,4);
          }
          else {
            FUN_14572512c(param_2,&local_94);
          }
        }
        else {
          local_94 = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_90,4);
          }
          else {
            FUN_14572512c(param_2,&local_90);
          }
        }
        else {
          local_90 = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_8c,4);
          }
          else {
            FUN_14572512c(param_2,&local_8c);
          }
        }
        else {
          local_8c = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
          }
          else {
            FUN_14572512c(param_2,&local_88);
          }
        }
        else {
          local_88 = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        plVar16 = (longlong *)param_2[1];
        if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_84,4);
          }
          else {
            FUN_14572512c(param_2,&local_84);
          }
        }
        else {
          local_84 = *(undefined4 *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
      }
      plVar16 = (longlong *)param_2[1];
      if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_80,4);
        }
        else {
          FUN_14572512c(param_2,&local_80);
        }
      }
      else {
        local_80 = *(undefined4 *)*plVar16;
        *plVar16 = *plVar16 + 4;
      }
      plVar16 = (longlong *)param_2[1];
      if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_7c,4);
        }
        else {
          FUN_14572512c(param_2,&local_7c);
        }
      }
      else {
        local_7c = *(undefined4 *)*plVar16;
        *plVar16 = *plVar16 + 4;
      }
      plVar16 = (longlong *)param_2[1];
      if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_78,4);
        }
        else {
          FUN_14572512c(param_2,&local_78);
        }
      }
      else {
        local_78 = *(undefined4 *)*plVar16;
        *plVar16 = *plVar16 + 4;
      }
      plVar16 = (longlong *)param_2[1];
      if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_74,4);
        }
        else {
          FUN_14572512c(param_2,&local_74);
        }
      }
      else {
        local_74 = *(undefined4 *)*plVar16;
        *plVar16 = *plVar16 + 4;
      }
      plVar16 = (longlong *)param_2[1];
      if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_70,4);
        }
        else {
          FUN_14572512c(param_2,&local_70);
        }
      }
      else {
        local_70 = *(undefined4 *)*plVar16;
        *plVar16 = *plVar16 + 4;
      }
      plVar16 = (longlong *)param_2[1];
      if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_6c,4);
        }
        else {
          FUN_14572512c(param_2,&local_6c);
        }
      }
      else {
        local_6c = *(undefined4 *)*plVar16;
        *plVar16 = *plVar16 + 4;
      }
      plVar16 = (longlong *)param_2[1];
      if ((undefined4 *)plVar16[1] < (undefined4 *)*plVar16 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,local_68,4);
        }
        else {
          FUN_14572512c(param_2,local_68);
        }
      }
      else {
        local_68[0] = *(undefined4 *)*plVar16;
        *plVar16 = *plVar16 + 4;
      }
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x618));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5e0 = CONCAT71(local_5e0._1_7_,uVar23 != 0);
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x619));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5e1 = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x61a));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5e2 = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x61b));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5e3 = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x61c));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5e4 = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x61d));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5e5 = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x61e));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5e6 = uVar23 != 0;
      if ((int)param_2[8] < 0x16c) {
        puVar4 = (ulonglong *)param_2[1];
        if (puVar4[1] < *puVar4 + 4) {
          local_5b0 = (double)((ulonglong)local_5b0 & 0xffffffff00000000);
          (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
          if (1 < local_5b0._0_4_) {
            FUN_14572541c(param_2);
          }
        }
        else {
          *puVar4 = *puVar4 + 4;
        }
      }
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x61f));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5e7 = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x620));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5e8 = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x621));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5e9 = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x622));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5ea = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x623));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5eb = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x624));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5ec = uVar23 != 0;
      if ((int)param_2[8] < 0x16c) {
        puVar4 = (ulonglong *)param_2[1];
        if (puVar4[1] < *puVar4 + 4) {
          local_5b0 = (double)((ulonglong)local_5b0 & 0xffffffff00000000);
          (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
          if (1 < local_5b0._0_4_) {
            FUN_14572541c(param_2);
          }
        }
        else {
          *puVar4 = *puVar4 + 4;
        }
      }
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x625));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5ed = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x626));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5ee = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x627));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5ef = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x628));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5f0 = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x629));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5f1 = uVar23 != 0;
      if ((int)param_2[8] < 0x16c) {
        puVar4 = (ulonglong *)param_2[1];
        if (puVar4[1] < *puVar4 + 4) {
          local_5b0 = (double)((ulonglong)local_5b0 & 0xffffffff00000000);
          (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
          if (1 < local_5b0._0_4_) {
            FUN_14572541c(param_2);
          }
        }
        else {
          *puVar4 = *puVar4 + 4;
        }
      }
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x62a));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5f2 = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x62b));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5f3 = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x62c));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5f4 = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x62d));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5f5 = uVar23 != 0;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x62e));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      local_5f6 = uVar23 != 0;
      if ((int)param_2[8] < 0x16c) {
        puVar4 = (ulonglong *)param_2[1];
        if (puVar4[1] < *puVar4 + 4) {
          local_5b0 = (double)((ulonglong)local_5b0 & 0xffffffff00000000);
          (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
          if (1 < local_5b0._0_4_) {
            FUN_14572541c(param_2);
          }
        }
        else {
          *puVar4 = *puVar4 + 4;
        }
      }
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x62f));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar23 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar23 = local_5b0._0_4_;
        }
      }
      else {
        uVar23 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x630));
        (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
        uVar11 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar11 = local_5b0._0_4_;
        }
      }
      else {
        uVar11 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        pdVar28 = &local_5b0;
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x631));
        (**(code **)(*param_2 + 0x170))(param_2,pdVar28,4);
        uVar12 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar12 = local_5b0._0_4_;
        }
      }
      else {
        uVar12 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        pdVar28 = &local_5b0;
        local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x632));
        (**(code **)(*param_2 + 0x170))(param_2,pdVar28,4);
        uVar13 = local_5b0._0_4_;
        if (1 < local_5b0._0_4_) {
          FUN_14572541c(param_2);
          uVar13 = local_5b0._0_4_;
        }
      }
      else {
        uVar13 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      uVar30 = SUB81(pdVar28,0);
      if (0x16b < (int)param_2[8]) {
        puVar4 = (ulonglong *)param_2[1];
        piVar5 = (int *)*puVar4 + 1;
        if ((int *)puVar4[1] < piVar5) {
          local_5b0 = (double)CONCAT44(local_5b0._4_4_,(uint)*(byte *)((longlong)_Src + 0x633));
          (**(code **)(*param_2 + 0x170))(param_2,&local_5b0,4);
          if (1 < local_5b0._0_4_) {
            FUN_14572541c(param_2);
          }
          uVar30 = local_5b0._0_4_ != 0;
        }
        else {
          uVar30 = *(int *)*puVar4 != 0;
          *puVar4 = (ulonglong)piVar5;
        }
      }
      local_5a0 = (double)*(float *)((longlong)_Src + 0x63c);
      local_5a8 = (double)*(float *)((longlong)_Src + 0x638);
      local_5b0 = (double)*(float *)((longlong)_Src + 0x634);
      local_5b4 = *(undefined4 *)((longlong)_Src + 0x640);
      FUN_14480c34d(param_2);
      puVar4 = (ulonglong *)param_2[1];
      puVar22 = (undefined4 *)*puVar4 + 1;
      if ((undefined4 *)puVar4[1] < puVar22) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_5b4,4);
        }
        else {
          FUN_14572512c(param_2,&local_5b4);
        }
      }
      else {
        local_5b4 = *(undefined4 *)*puVar4;
        *puVar4 = (ulonglong)puVar22;
      }
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        *(undefined1 *)((longlong)_Src + 0x618) = (undefined1)local_5e0;
        *(undefined1 *)((longlong)_Src + 0x619) = local_5e1;
        *(undefined1 *)((longlong)_Src + 0x61a) = local_5e2;
        *(undefined1 *)((longlong)_Src + 0x61b) = local_5e3;
        *(undefined1 *)((longlong)_Src + 0x61c) = local_5e4;
        *(undefined1 *)((longlong)_Src + 0x61d) = local_5e5;
        *(undefined1 *)((longlong)_Src + 0x61e) = local_5e6;
        *(undefined1 *)((longlong)_Src + 0x61f) = local_5e7;
        *(undefined1 *)((longlong)_Src + 0x620) = local_5e8;
        *(undefined1 *)((longlong)_Src + 0x621) = local_5e9;
        *(undefined1 *)((longlong)_Src + 0x622) = local_5ea;
        *(undefined1 *)((longlong)_Src + 0x623) = local_5eb;
        *(undefined1 *)((longlong)_Src + 0x624) = local_5ec;
        *(undefined1 *)((longlong)_Src + 0x625) = local_5ed;
        *(undefined1 *)((longlong)_Src + 0x626) = local_5ee;
        *(undefined1 *)((longlong)_Src + 0x627) = local_5ef;
        *(undefined1 *)((longlong)_Src + 0x628) = local_5f0;
        *(undefined1 *)((longlong)_Src + 0x629) = local_5f1;
        *(undefined1 *)((longlong)_Src + 0x62a) = local_5f2;
        *(undefined1 *)((longlong)_Src + 0x62b) = local_5f3;
        *(undefined1 *)((longlong)_Src + 0x62c) = local_5f4;
        *(undefined1 *)((longlong)_Src + 0x62d) = local_5f5;
        *(undefined1 *)((longlong)_Src + 0x62e) = local_5f6;
        *(bool *)((longlong)_Src + 0x62f) = uVar23 != 0;
        *(bool *)((longlong)_Src + 0x630) = uVar11 != 0;
        *(bool *)((longlong)_Src + 0x631) = uVar12 != 0;
        *(bool *)((longlong)_Src + 0x632) = uVar13 != 0;
        *(undefined1 *)((longlong)_Src + 0x633) = uVar30;
        memcpy(_Src,&local_598,0x534);
        *(float *)((longlong)_Src + 0x634) = (float)local_5b0;
        *(float *)((longlong)_Src + 0x638) = (float)local_5a8;
        *(float *)((longlong)_Src + 0x63c) = (float)local_5a0;
        *(undefined4 *)((longlong)_Src + 0x640) = local_5b4;
      }
    }
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x160) * 0x30,
             (longlong)*(int *)(param_1 + 0x164) * 0x30);
  uVar10 = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    uVar10 = *(undefined4 *)(param_1 + 0x160);
  }
  local_598 = (undefined **)CONCAT44(local_598._4_4_,uVar10);
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_598,4);
    }
    else {
      FUN_14572512c(param_2,&local_598);
    }
    uVar23 = (uint)local_598;
  }
  else {
    uVar23 = *(uint *)*puVar4;
    local_598 = (undefined **)CONCAT44(local_598._4_4_,uVar23);
    *puVar4 = (ulonglong)puVar1;
  }
  lVar26 = param_1 + 0x158;
  if (uVar23 == 0) {
    if (((*(byte *)(param_2 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_1 + 0x160) = 0, *(int *)(param_1 + 0x164) != 0)) {
      FUN_146406200(lVar26,0);
    }
  }
  else if ((((int)uVar23 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
          ((0x55555 < uVar23 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
    FUN_14572541c(param_2);
  }
  else if ((*(byte *)(param_2 + 5) & 1) == 0) {
    *(uint *)(param_1 + 0x160) = uVar23;
    lVar26 = 0;
    lVar25 = 0;
    do {
      FUN_14049014b(param_2,*(longlong *)(param_1 + 0x158) + lVar26);
      lVar25 = lVar25 + 1;
      lVar26 = lVar26 + 0x30;
    } while (lVar25 < *(int *)(param_1 + 0x160));
  }
  else {
    *(undefined4 *)(param_1 + 0x160) = 0;
    if (*(uint *)(param_1 + 0x164) != uVar23) {
      FUN_146406200(lVar26);
      if ((int)(uint)local_598 < 1) goto LAB_14370e4d2;
    }
    iVar9 = 0;
    do {
      uVar17 = FUN_1401c7e14(lVar26);
      FUN_14049014b(param_2,uVar17);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)(uint)local_598);
  }
LAB_14370e4d2:
  if ((local_60 ^ (ulonglong)auStack_618) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14370f87a FUN_14370f87a body=69 status=ok
// SIG undefined FUN_14370f87a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14370f87a(void)

{
  _DAT_14cb09ab8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014370f8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09ac0,1);
  return;
}



// FUNCTION 14370f8bf FUN_14370f8bf body=69 status=ok
// SIG undefined FUN_14370f8bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14370f8bf(void)

{
  _DAT_14cb09ad0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014370f901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09ad8,1);
  return;
}



// FUNCTION 14370f904 FUN_14370f904 body=69 status=ok
// SIG undefined FUN_14370f904(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14370f904(void)

{
  _DAT_14cb09ae8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014370f946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09af0,1);
  return;
}



// FUNCTION 14370f949 FUN_14370f949 body=69 status=ok
// SIG undefined FUN_14370f949(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14370f949(void)

{
  _DAT_14cb09b00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014370f98b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09b08,1);
  return;
}



// FUNCTION 14370f98e FUN_14370f98e body=69 status=ok
// SIG undefined FUN_14370f98e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14370f98e(void)

{
  _DAT_14cb09b18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014370f9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09b20,1);
  return;
}



// FUNCTION 14370f9d3 FUN_14370f9d3 body=69 status=ok
// SIG undefined FUN_14370f9d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14370f9d3(void)

{
  _DAT_14cb09b30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014370fa15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09b38,1);
  return;
}



// FUNCTION 14370fa18 FUN_14370fa18 body=69 status=ok
// SIG undefined FUN_14370fa18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14370fa18(void)

{
  _DAT_14cb09b40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014370fa5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09b48,1);
  return;
}



// FUNCTION 14370fa5d FUN_14370fa5d body=69 status=ok
// SIG undefined FUN_14370fa5d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14370fa5d(void)

{
  _DAT_14cb09b58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014370fa9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09b60,1);
  return;
}



// FUNCTION 14370faa2 FUN_14370faa2 body=69 status=ok
// SIG undefined FUN_14370faa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14370faa2(void)

{
  _DAT_14cb09b70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014370fae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09b78,1);
  return;
}



// FUNCTION 14370fae8 FUN_14370fae8 body=1378 status=ok
// SIG undefined FUN_14370fae8(void)

void FUN_14370fae8(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 *local_c0;
  longlong local_b0;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x10))();
  puVar7 = (ulonglong *)param_1[4];
  if (puVar7 == (ulonglong *)0x0) goto LAB_14370ff9d;
  iVar4 = (int)puVar7[1];
  if ((longlong)iVar4 < 1) goto LAB_14370ff9d;
  uVar8 = *puVar7;
  uVar9 = ((longlong)uVar8 >> 0x18) + (longlong)puVar7;
  if ((uVar8 & 1) == 0) {
    uVar9 = uVar8;
  }
  lVar20 = 0;
  uVar17 = 0;
  do {
    uVar17 = uVar17 + *(int *)(uVar9 + 0x10 + lVar20);
    lVar20 = lVar20 + 0x40;
  } while ((longlong)iVar4 << 6 != lVar20);
  iVar18 = uVar17 * 8;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  local_84 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"StaticMeshSectionAreaWeightedTriangleSamplerBuffer";
  local_60 = 0;
  uStack_58 = 0;
  local_a8 = (undefined1)iVar18;
  uStack_a7 = (undefined1)((uint)iVar18 >> 8);
  uStack_a6 = (undefined1)((uint)iVar18 >> 0x10);
  uStack_a5 = (undefined1)((uint)iVar18 >> 0x18);
  uStack_a4 = 0;
  uStack_a0 = 0x4101;
  if ((uVar17 & 0x1fffffff) == 0) {
    FUN_14570b4be(param_2,&local_98,0x4101,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_c0 = &local_98;
    local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_c0 = &local_98;
    local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = 0x78;
  }
  plVar15 = param_1 + 2;
  if (plVar15 == &local_b0) {
LAB_14370fce2:
    lVar20 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar17 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar17 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar17 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar17 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_b0 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar20;
          plVar14 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar14;
              LOCK();
              bVar21 = plVar14 != DAT_14ca843c0;
              plVar13 = plVar10;
              if (bVar21) {
                plVar14 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar10 = (longlong)plVar13;
              LOCK();
              bVar21 = plVar13 != DAT_14ca843c8;
              plVar14 = plVar10;
              if (bVar21) {
                plVar13 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
    }
  }
  else {
    lVar20 = *plVar15;
    *plVar15 = local_b0;
    local_b0 = 0;
    if (lVar20 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar20 + 8);
      uVar17 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar17 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar20 + 8);
        LOCK();
        uVar17 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar17 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar20 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar20;
          plVar14 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar14;
              LOCK();
              bVar21 = plVar14 != DAT_14ca843c0;
              plVar13 = plVar10;
              if (bVar21) {
                plVar14 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar10 = (longlong)plVar13;
              LOCK();
              bVar21 = plVar13 != DAT_14ca843c8;
              plVar14 = plVar10;
              if (bVar21) {
                plVar13 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
      goto LAB_14370fce2;
    }
  }
  lVar20 = *plVar15;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,iVar18);
  local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,1);
  puVar11 = (undefined4 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar20,0);
  iVar18 = 0;
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,0);
    iVar18 = 0;
  }
  do {
    uVar8 = *(ulonglong *)param_1[4];
    uVar9 = ((longlong)uVar8 >> 0x18) + param_1[4];
    if ((uVar8 & 1) == 0) {
      uVar9 = uVar8;
    }
    lVar20 = (longlong)iVar18 * 0x40;
    uVar8 = *(ulonglong *)(uVar9 + 8 + lVar20);
    uVar12 = ((longlong)uVar8 >> 0x18) + 8 + uVar9 + lVar20;
    if ((uVar8 & 1) == 0) {
      uVar12 = uVar8;
    }
    uVar8 = *(ulonglong *)(uVar9 + 0x18 + lVar20);
    uVar16 = ((longlong)uVar8 >> 0x18) + 0x18 + uVar9 + lVar20;
    if ((uVar8 & 1) == 0) {
      uVar16 = uVar8;
    }
    iVar5 = *(int *)(uVar9 + 0x10 + lVar20);
    if (iVar5 != 0) {
      iVar19 = 0;
      do {
        uVar6 = *(undefined4 *)(uVar16 + (longlong)iVar19 * 4);
        *puVar11 = *(undefined4 *)(uVar12 + (longlong)iVar19 * 4);
        puVar11[1] = uVar6;
        puVar11 = puVar11 + 2;
        iVar19 = iVar19 + 1;
      } while (iVar5 != iVar19);
    }
    iVar18 = iVar18 + 1;
  } while (iVar18 != iVar4);
  lVar20 = *plVar15;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1));
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar20);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar20);
  }
  if ((*plVar15 == 0) || ((*(byte *)(*plVar15 + 0x28) & 0x10) == 0)) {
    uStack_a7 = 0x44;
    uStack_a6 = 1;
  }
  else {
    uStack_a7 = 0;
    uStack_a6 = 4;
  }
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a5 = 0;
  local_a8 = 0;
  local_c8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
  param_1 = param_1 + 3;
  if (param_1 != &local_b0) {
    lVar20 = *param_1;
    *param_1 = local_b0;
    local_b0 = 0;
    if (lVar20 == 0) goto LAB_14370ff9d;
    LOCK();
    puVar1 = (uint *)(lVar20 + 8);
    uVar17 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar17 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar20 + 8);
      LOCK();
      uVar17 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar17 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar20 + 0xd);
        plVar13 = (longlong *)FUN_14001cc68(0x10,8);
        plVar13[1] = lVar20;
        plVar15 = DAT_14ca843c0;
        plVar14 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar13 = (longlong)plVar15;
            LOCK();
            bVar21 = plVar15 != DAT_14ca843c0;
            plVar14 = plVar13;
            if (bVar21) {
              plVar15 = DAT_14ca843c0;
              plVar14 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar14;
            UNLOCK();
          } while (bVar21);
        }
        else {
          do {
            *plVar13 = (longlong)plVar14;
            LOCK();
            bVar21 = plVar14 != DAT_14ca843c8;
            plVar15 = plVar13;
            if (bVar21) {
              plVar14 = DAT_14ca843c8;
              plVar15 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar15;
            UNLOCK();
          } while (bVar21);
        }
      }
    }
  }
  lVar20 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_b0 + 8);
    uVar17 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar17 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_b0 + 8);
      LOCK();
      uVar17 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar17 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_b0 + 0xd);
        plVar13 = (longlong *)FUN_14001cc68(0x10,8);
        plVar13[1] = lVar20;
        plVar15 = DAT_14ca843c0;
        plVar14 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar13 = (longlong)plVar15;
            LOCK();
            bVar21 = plVar15 != DAT_14ca843c0;
            plVar14 = plVar13;
            if (bVar21) {
              plVar15 = DAT_14ca843c0;
              plVar14 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar14;
            UNLOCK();
          } while (bVar21);
        }
        else {
          do {
            *plVar13 = (longlong)plVar14;
            LOCK();
            bVar21 = plVar14 != DAT_14ca843c8;
            plVar15 = plVar13;
            if (bVar21) {
              plVar14 = DAT_14ca843c8;
              plVar15 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar15;
            UNLOCK();
          } while (bVar21);
        }
      }
    }
  }
LAB_14370ff9d:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14371004c FUN_14371004c body=355 status=ok
// SIG undefined FUN_14371004c(void)

int FUN_14371004c(int *param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  
  piVar2 = DAT_14cb09af8;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar1 + 0xc60);
  if (iVar3 == 0x40000002) {
    iVar8 = *DAT_14cb09b10;
    iVar6 = *DAT_14cb09af8;
    iVar3 = *param_1;
joined_r0x000143710132:
    bVar9 = iVar8 == 0;
    if (iVar6 != 0) goto LAB_143710181;
LAB_1437100ee:
    iVar6 = param_1[1];
    if (!bVar9) {
      iVar8 = 0;
      goto LAB_1437100f9;
    }
  }
  else {
    if (DAT_14c86a9f8 == 0) {
      iVar6 = *DAT_14cb09af8;
    }
    else if (iVar3 == 2) {
      iVar6 = *DAT_14cb09af8;
      iVar3 = 2;
    }
    else {
      uVar7 = 1;
      if (iVar3 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar7 = (ulonglong)(DVar4 != DVar5);
        iVar3 = *(int *)(lVar1 + 0xc60);
      }
      iVar6 = piVar2[uVar7];
      if (iVar3 == 0x40000002) {
        iVar8 = *DAT_14cb09b10;
        iVar3 = *param_1;
        goto joined_r0x000143710132;
      }
    }
    piVar2 = DAT_14cb09b10;
    if (((DAT_14c86a9f8 & 1) == 0) || (iVar3 == 2)) {
      uVar7 = 0;
    }
    else if (iVar3 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar7 = 1;
    }
    bVar9 = piVar2[uVar7] == 0;
    iVar3 = *param_1;
    if (iVar6 == 0) goto LAB_1437100ee;
LAB_143710181:
    iVar6 = 0;
    iVar8 = 0;
    if (!bVar9) goto LAB_1437100f9;
  }
  iVar8 = param_1[2];
LAB_1437100f9:
  return iVar3 - (iVar6 + iVar8);
}



// FUNCTION 1437101b0 FUN_1437101b0 body=2341 status=ok
// SIG undefined FUN_1437101b0(void)

void FUN_1437101b0(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined ***_Dst;
  ulonglong uVar8;
  uint uVar9;
  undefined ***pppuVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_1e8 [38];
  byte local_1c2;
  byte local_1c1;
  undefined **local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined1 local_1b2;
  undefined **local_1b0;
  undefined **local_1a8;
  undefined8 uStack_1a0;
  ulonglong uStack_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined6 uStack_180;
  undefined2 uStack_17a;
  undefined6 uStack_178;
  undefined8 uStack_172;
  undefined1 local_16a;
  undefined8 local_169;
  undefined8 uStack_161;
  undefined8 local_159;
  undefined8 uStack_151;
  undefined8 local_149;
  undefined5 uStack_141;
  undefined3 uStack_13c;
  undefined5 uStack_139;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined **local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined1 local_102;
  undefined8 local_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined **local_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined **local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined8 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined2 local_54;
  byte local_4a;
  byte local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  lVar16 = DAT_14cb09af8;
  uVar12 = *(uint *)(param_1 + 0x5c);
  bVar18 = true;
  if ((uVar12 & 1) == 0) {
    iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar5 == 0x40000002) {
      uVar8 = 0;
    }
    else {
      bVar17 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          bVar17 = DVar6 == DVar7;
          uVar12 = *(uint *)(param_1 + 0x5c);
        }
        else {
          bVar17 = false;
        }
      }
      uVar8 = (ulonglong)(bVar17 ^ 1);
    }
    bVar17 = *(int *)(lVar16 + uVar8 * 4) == 1;
  }
  else {
    bVar17 = true;
  }
  lVar16 = DAT_14cb09b10;
  if ((uVar12 & 6) == 0) {
    iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar5 == 0x40000002) {
      uVar8 = 0;
    }
    else {
      bVar18 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          bVar18 = DVar6 == DVar7;
        }
        else {
          bVar18 = false;
        }
      }
      uVar8 = (ulonglong)(bVar18 ^ 1);
    }
    bVar18 = *(int *)(lVar16 + uVar8 * 4) == 1;
  }
  if (param_3 == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = *(byte *)(param_3 + 0x195) >> 1 & 1;
  }
  FUN_140562eea(&local_4a,param_2,param_4,&DAT_14c896044);
  FUN_140563088(param_1 + 0x118,param_2,bVar11);
  FUN_14056327c(param_1 + 0x90,param_2,bVar11);
  FUN_140564d22(param_1 + 0x158,param_2,bVar11);
  *param_5 = 0;
  *(undefined4 *)(param_5 + 1) = 0;
  FUN_140397912(param_1 + 0x198,param_2,bVar11);
  bVar14 = local_49;
  local_108 = 0xffffffff;
  local_104 = 0x105;
  local_102 = 0;
  local_100 = 0;
  local_110 = &PTR_FUN_14aa57ea0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = &PTR_FUN_14a3d4750;
  local_e0 = 0;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = 0xffffffff;
  local_c4 = 0x105;
  local_c2 = 0;
  local_c0 = 0;
  local_d0 = &PTR_FUN_14aa57ea0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = &PTR_FUN_14a3d4750;
  local_a0 = 0;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = 0xffffffff;
  local_84 = 0x105;
  local_82 = 0;
  local_80 = 0;
  local_90 = &PTR_FUN_14aa57ea0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = &PTR_FUN_14a3d4750;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_1c2 = local_4a;
  if ((bool)(bVar17 | bVar18)) {
    if (!(bool)(((local_49 & 4) == 0 || (local_4a & 1) == 0) | bVar17)) {
      _Dst = &local_110;
      goto LAB_143710594;
    }
    _Dst = *(undefined ****)(param_1 + 0x218);
    if (_Dst == (undefined ***)0x0) {
      _Dst = (undefined ***)FUN_14001cc68(0xc0);
      local_1c1 = bVar14;
      memset(_Dst,0,0xc0);
      *(undefined4 *)(_Dst + 1) = 0xffffffff;
      *(undefined2 *)((longlong)_Dst + 0xc) = 0x105;
      _Dst[2] = (undefined **)0x0;
      *_Dst = &PTR_FUN_14aa57ea0;
      _Dst[4] = (undefined **)0x0;
      _Dst[5] = (undefined **)0x0;
      _Dst[3] = &PTR_FUN_14a3d4750;
      *(undefined4 *)(_Dst + 7) = 0xffffffff;
      *(undefined1 *)((longlong)_Dst + 0x3d) = 0;
      *(undefined4 *)(_Dst + 9) = 0xffffffff;
      *(undefined2 *)((longlong)_Dst + 0x4c) = 0x105;
      _Dst[10] = (undefined **)0x0;
      _Dst[8] = &PTR_FUN_14aa57ea0;
      _Dst[0xc] = (undefined **)0x0;
      _Dst[0xd] = (undefined **)0x0;
      _Dst[0xb] = &PTR_FUN_14a3d4750;
      *(undefined4 *)(_Dst + 0xf) = 0xffffffff;
      *(undefined1 *)((longlong)_Dst + 0x7d) = 0;
      *(undefined4 *)(_Dst + 0x11) = 0xffffffff;
      *(undefined2 *)((longlong)_Dst + 0x8c) = 0x105;
      _Dst[0x12] = (undefined **)0x0;
      _Dst[0x10] = &PTR_FUN_14aa57ea0;
      _Dst[0x14] = (undefined **)0x0;
      _Dst[0x15] = (undefined **)0x0;
      _Dst[0x13] = &PTR_FUN_14a3d4750;
      *(undefined4 *)(_Dst + 0x17) = 0xffffffff;
      *(undefined1 *)((longlong)_Dst + 0xbd) = 0;
      *(undefined ****)(param_1 + 0x218) = _Dst;
      bVar14 = local_1c1;
    }
  }
  else {
    _Dst = &local_110;
  }
  if ((bVar14 & 4) == 0) {
    FUN_140397912(_Dst,param_2,bVar11);
    if (!bVar18) {
      *(undefined1 *)(_Dst + 6) = 0;
      if ((DAT_14c872bf0 == '\0') &&
         (*(undefined4 *)(_Dst + 5) = 0, *(int *)((longlong)_Dst + 0x2c) != 0)) {
        FUN_140397e0a(_Dst + 4,0);
      }
      *(undefined4 *)(_Dst + 7) = 0xffffffff;
    }
  }
LAB_143710594:
  FUN_140397912(param_1 + 0x1d8,param_2);
  if (!bVar17) {
    *(undefined1 *)(param_1 + 0x208) = 0;
    if ((DAT_14c872bf0 == '\0') &&
       (*(undefined4 *)(param_1 + 0x200) = 0, *(int *)(param_1 + 0x204) != 0)) {
      FUN_140397e0a(param_1 + 0x1f8,0);
    }
    *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  }
  if ((bVar14 & 4) == 0) {
    FUN_140397912(_Dst + 8,param_2);
    if (!bVar18) {
      *(undefined1 *)(_Dst + 0xe) = 0;
      if ((DAT_14c872bf0 == '\0') &&
         (*(undefined4 *)(_Dst + 0xd) = 0, *(int *)((longlong)_Dst + 0x6c) != 0)) {
        FUN_140397e0a(_Dst + 0xc,0);
      }
      *(undefined4 *)(_Dst + 0xf) = 0xffffffff;
    }
  }
  if ((local_1c2 & 1) == 0) {
    FUN_140397912(_Dst + 0x10,param_2);
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc08);
    if ((iVar5 < 3) && ((local_49 & 1) == 0)) {
      local_1b8 = 0xffffffff;
      local_1b4 = 0x105;
      local_1b2 = 0;
      local_1b0 = (undefined **)0x0;
      local_1c0 = &PTR_FUN_14aa57ea0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      local_1a8 = &PTR_FUN_14a3d4750;
      local_190 = local_190 & 0xffffffffffffff00;
      local_188 = CONCAT26(local_188._6_2_,0xffffffff);
      FUN_140397912(&local_1c0,param_2);
      FUN_140296a12(&local_1c0);
    }
  }
  local_1b8 = 0xffffffff;
  local_1b4 = 0x105;
  local_1b2 = 0;
  local_1c0 = &PTR_FUN_14a3d4720;
  local_1a8 = (undefined **)0x0;
  uStack_1a0 = 0;
  local_1b0 = &PTR_FUN_14a3d4750;
  uStack_198 = uStack_198 & 0xffffffffffffff00;
  local_190 = 0xffffffffffffffff;
  local_188 = 0;
  uStack_180 = 0;
  uStack_17a = 0;
  uStack_178 = 0;
  uStack_172 = 0;
  local_16a = 1;
  local_130 = 0;
  local_169 = 0;
  uStack_161 = 0;
  local_159 = 0;
  uStack_151 = 0;
  local_149 = 0;
  uStack_141 = 0;
  uStack_13c = 0;
  uStack_139 = 0;
  local_128 = 0xffffffff;
  local_124 = 0xff;
  local_120 = 0xffffffff00000000;
  local_118 = 0xffffffff;
  if ((bVar14 & 8) == 0) {
    pppuVar10 = (undefined ***)(*(longlong *)(param_1 + 0x50) + 0x18);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      pppuVar10 = &local_1a8;
    }
    FUN_140397b96(pppuVar10,param_2);
  }
  puVar1 = (ulonglong *)(param_1 + 600);
  iVar5 = *(int *)(param_1 + 0x38);
  iVar13 = *(int *)(param_1 + 0x260);
  if (iVar13 < iVar5) {
    *(int *)(param_1 + 0x260) = iVar5;
    if ((uint)(*(int *)(param_1 + 0x264) - iVar13) < (uint)(iVar5 - iVar13)) {
      FUN_1417f1f48(puVar1,iVar13);
    }
    uVar8 = *puVar1;
    if ((uVar8 & 1) != 0) {
      uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)puVar1;
    }
    FUN_1437169d7((longlong)iVar13 * 0x40 + uVar8,iVar5 - iVar13);
  }
  else {
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (iVar5 < iVar13) {
      FUN_147d59516(puVar1,iVar5);
      FUN_147d59582(puVar1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 600);
  plVar15 = (longlong *)((longlong)puVar1 + ((longlong)plVar4 >> 0x18));
  if (((ulonglong)plVar4 & 1) == 0) {
    plVar15 = plVar4;
  }
  if ((longlong)*(int *)(param_1 + 0x260) != 0) {
    lVar16 = (longlong)*(int *)(param_1 + 0x260) << 6;
    do {
      (**(code **)(*plVar15 + 0x18))(plVar15,param_2);
      plVar15 = plVar15 + 8;
      lVar16 = lVar16 + -0x40;
    } while (lVar16 != 0);
  }
  FUN_1402bec5c(param_1 + 0x220,param_2);
  if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
    uVar12 = 0;
    if ((local_1c2 & 1) == 0 && *(longlong *)(param_1 + 0x218) != 0) {
      iVar5 = *(int *)(_Dst + 0x17);
      if (iVar5 < 0) {
        iVar13 = *(int *)(_Dst + 0x15);
        if (*(char *)((longlong)_Dst + 0xbc) == '\x01') {
          iVar5 = iVar13 + 3;
          if (-1 < iVar13) {
            iVar5 = iVar13;
          }
          iVar5 = iVar5 >> 2;
        }
        else {
          iVar5 = iVar13 / 2;
        }
      }
      uVar12 = (uint)(iVar5 != 0) << 4;
    }
    uVar2 = *(uint *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x210);
    iVar13 = iVar5;
    if (iVar5 < 0) {
      iVar3 = *(int *)(param_1 + 0x200);
      if (*(char *)(param_1 + 0x214) == '\x01') {
        iVar13 = iVar3 + 3;
        if (-1 < iVar3) {
          iVar13 = iVar3;
        }
        iVar13 = iVar13 >> 2;
      }
      else {
        iVar13 = iVar3 / 2;
      }
    }
    uVar9 = (uint)(iVar13 != 0);
    *(uint *)(param_1 + 0x5c) = uVar2 & 0xffffffee | uVar12 | uVar9;
    if ((bVar14 & 4) == 0 && *(longlong *)(param_1 + 0x218) != 0) {
      iVar13 = *(int *)(_Dst + 7);
      if (iVar13 < 0) {
        iVar3 = *(int *)(_Dst + 5);
        if (*(char *)((longlong)_Dst + 0x3c) == '\x01') {
          iVar13 = iVar3 + 3;
          if (-1 < iVar3) {
            iVar13 = iVar3;
          }
          iVar13 = iVar13 >> 2;
        }
        else {
          iVar13 = iVar3 / 2;
        }
      }
      uVar9 = (uVar2 & 0xffffffec | uVar12 | uVar9) + (uint)(iVar13 != 0) * 2;
      *(uint *)(param_1 + 0x5c) = uVar9;
      iVar13 = *(int *)(_Dst + 0xf);
      if (iVar13 < 0) {
        iVar3 = *(int *)(_Dst + 0xd);
        if (*(char *)((longlong)_Dst + 0x7c) == '\x01') {
          iVar13 = iVar3 + 3;
          if (-1 < iVar3) {
            iVar13 = iVar3;
          }
          iVar13 = iVar13 >> 2;
        }
        else {
          iVar13 = iVar3 / 2;
        }
      }
      uVar12 = (uint)(iVar13 != 0) << 2;
    }
    else {
      uVar9 = uVar2 & 0xffffffec | uVar12 | uVar9;
      uVar12 = 0;
    }
    *(uint *)(param_1 + 0x5c) =
         (uVar9 & 0xfffffff3 | uVar12) + (uint)(*(int *)(param_1 + 0x18c) != 0) * 8;
    if (iVar5 < 0) {
      iVar13 = *(int *)(param_1 + 0x200);
      if (*(char *)(param_1 + 0x214) == '\x01') {
        iVar5 = iVar13 + 3;
        if (-1 < iVar13) {
          iVar5 = iVar13;
        }
        iVar5 = iVar5 >> 2;
      }
      else {
        iVar5 = iVar13 / 2;
      }
    }
    *(int *)(param_1 + 0x60) = iVar5 / 3;
  }
  FUN_140137a98(&local_1c0);
  FUN_140296a12(&local_90);
  FUN_140296a12(&local_d0);
  FUN_140296a12(&local_110);
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143710ad6 FUN_143710ad6 body=179 status=ok
// SIG undefined FUN_143710ad6(void)

void FUN_143710ad6(longlong param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xe0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined2 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x218) + 0x38) = 0xffffffff;
    *(undefined4 *)(*(longlong *)(param_1 + 0x218) + 0x78) = 0xffffffff;
    *(undefined4 *)(*(longlong *)(param_1 + 0x218) + 0xb8) = 0xffffffff;
    lVar1 = *(longlong *)(param_1 + 0x218);
    if (lVar1 != 0) {
      FUN_140296a12(lVar1 + 0x80);
      FUN_140296a12(lVar1 + 0x40);
      FUN_140296a12(lVar1);
      FUN_1400020a8(lVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x218) = 0;
  return;
}



// FUNCTION 143710b8a FUN_143710b8a body=2372 status=ok
// SIG undefined FUN_143710b8a(void)

void FUN_143710b8a(longlong param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined8 *_Dst;
  ulonglong uVar11;
  undefined ***_Dst_00;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined1 local_170;
  undefined8 local_160;
  undefined4 local_158;
  byte local_152 [2];
  undefined **local_150;
  undefined4 local_148;
  undefined2 local_144;
  undefined1 local_142;
  undefined8 local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined4 local_118;
  undefined2 local_114;
  undefined **local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined1 local_102;
  undefined8 local_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined **local_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined **local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined8 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined2 local_54;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (param_3 == 0) {
LAB_143710be0:
    lVar16 = 0;
  }
  else {
    lVar10 = FUN_1406d0862();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (lVar16 = param_3,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8
        ) != lVar10 + 0x30)) goto LAB_143710be0;
  }
  FUN_140562eea(local_152,param_2,0,&DAT_14c896044);
  FUN_14041d590(param_2,param_1 + 0x10);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x58),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_110 = (undefined **)((ulonglong)local_110 & 0xffffffff00000000);
    (**(code **)(*param_2 + 0x170))(param_2,&local_110,4);
    uVar15 = (uint)local_110;
    if (1 < (uint)local_110) {
      FUN_14572541c(param_2);
      uVar15 = (uint)local_110;
    }
  }
  else {
    uVar15 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) && (uVar15 != 0)) {
    *(undefined1 *)(param_1 + 0x290) = 1;
  }
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_110 = (undefined **)CONCAT44(local_110._4_4_,(uint)(uVar15 != 0));
    (**(code **)(*param_2 + 0x170))(param_2,&local_110,4);
    uVar6 = (uint)local_110;
    if (1 < (uint)local_110) {
      FUN_14572541c(param_2);
      uVar6 = (uint)local_110;
    }
  }
  else {
    uVar6 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xffffffdf | (uint)(uVar6 != 0) << 5;
  if ((uVar15 != 0) || ((local_152[0] & 2) != 0)) goto LAB_14371126b;
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_110 = (undefined **)CONCAT44(local_110._4_4_,(uint)(*(longlong *)(param_1 + 0x50) != 0));
    (**(code **)(*param_2 + 0x170))(param_2,&local_110,4);
    uVar15 = (uint)local_110;
    if (1 < (uint)local_110) {
      FUN_14572541c(param_2);
      uVar15 = (uint)local_110;
    }
  }
  else {
    uVar15 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if ((uVar15 != 0) && (*(longlong *)(param_1 + 0x50) == 0)) {
    _Dst = (undefined8 *)FUN_14001cc68(0xb0);
    memset(_Dst,0,0xb0);
    *(undefined4 *)(_Dst + 1) = 0xffffffff;
    *(undefined2 *)((longlong)_Dst + 0xc) = 0x105;
    *_Dst = &PTR_FUN_14a3d4720;
    _Dst[3] = 0;
    _Dst[4] = 0;
    _Dst[2] = &PTR_FUN_14a3d4750;
    _Dst[6] = 0xffffffffffffffff;
    _Dst[7] = 0;
    _Dst[8] = 0;
    *(undefined8 *)((longlong)_Dst + 0x46) = 0;
    *(undefined8 *)((longlong)_Dst + 0x4e) = 0;
    *(undefined1 *)((longlong)_Dst + 0x56) = 1;
    *(undefined8 *)((longlong)_Dst + 0x57) = 0;
    *(undefined8 *)((longlong)_Dst + 0x5f) = 0;
    *(undefined8 *)((longlong)_Dst + 0x67) = 0;
    *(undefined8 *)((longlong)_Dst + 0x6f) = 0;
    *(undefined8 *)((longlong)_Dst + 0x77) = 0;
    *(undefined8 *)((longlong)_Dst + 0x7f) = 0;
    *(undefined8 *)((longlong)_Dst + 0x84) = 0;
    *(undefined4 *)(_Dst + 0x13) = 0xffffffff;
    *(undefined1 *)((longlong)_Dst + 0x9c) = 0xff;
    *(undefined8 *)((longlong)_Dst + 0xa4) = 0xffffffffffffffff;
    *(undefined8 **)(param_1 + 0x50) = _Dst;
  }
  local_160 = 0;
  local_158 = 0;
  if (uVar6 != 0) {
    local_178 = &local_160;
    FUN_1437101b0(param_1,param_2,lVar16,0);
    FUN_1437114cf(param_2,&local_160);
    uVar5 = FUN_14371004c(&local_160);
    *(undefined4 *)(param_1 + 100) = uVar5;
    goto LAB_14371126b;
  }
  local_170 = 0;
  local_178 = (undefined8 *)CONCAT44(local_178._4_4_,1);
  FUN_140430222(param_1 + 0x68,param_2,param_3,0);
  *(uint *)(param_1 + 0x5c) =
       *(uint *)(param_1 + 0x5c) & 0xffffffbf | *(uint *)(param_1 + 0x7c) >> 5 & 0x40;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  piVar4 = DAT_14cb09af8;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar10 + 0xc60);
  if (iVar7 == 0x40000002) {
    iVar12 = *DAT_14cb09af8;
    bVar17 = iVar12 == 0;
LAB_143711316:
    uVar11 = 0;
    lVar10 = DAT_14cb09b10;
  }
  else {
    if (DAT_14c86a9f8 == 0) {
      iVar12 = *DAT_14cb09af8;
LAB_1437112fa:
      bVar17 = iVar12 == 0;
    }
    else {
      if (iVar7 == 2) {
        iVar12 = *DAT_14cb09af8;
        iVar7 = 2;
        goto LAB_1437112fa;
      }
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        bVar17 = DVar8 == DVar9;
        iVar7 = *(int *)(lVar10 + 0xc60);
      }
      else {
        bVar17 = false;
      }
      iVar12 = piVar4[bVar17 ^ 1];
      bVar17 = iVar12 == 0;
      if (iVar7 == 0x40000002) goto LAB_143711316;
    }
    lVar10 = DAT_14cb09b10;
    bVar18 = true;
    if (((DAT_14c86a9f8 & 1) != 0) && (iVar7 != 2)) {
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        bVar18 = DVar8 == DVar9;
      }
      else {
        bVar18 = false;
      }
    }
    uVar11 = (ulonglong)(bVar18 ^ 1);
  }
  iVar7 = *(int *)(lVar10 + uVar11 * 4);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x60),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
    }
    else {
      FUN_14572512c(param_2,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar5 = 0;
  if (!bVar17) {
    uVar5 = *(undefined4 *)(param_1 + 0x60);
  }
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  uVar6 = local_4c >> 1;
  uVar15 = uVar6 & 1;
  if (bVar17) {
    uVar15 = 0;
  }
  uVar13 = uVar6 & 2;
  uVar14 = uVar6 & 4;
  if (iVar7 == 0) {
    uVar14 = 0;
    uVar13 = 0;
  }
  *(uint *)(param_1 + 0x5c) =
       uVar14 | uVar13 | uVar6 & 0x18 | *(uint *)(param_1 + 0x5c) & 0xffffffe0 | uVar15;
  FUN_143681f2e(param_1 + 0x90,param_2);
  FUN_140563168(param_1 + 0x118,param_2);
  FUN_1436681b6(param_1 + 0x158,param_2);
  FUN_14365f7c2(param_1 + 0x198,param_2);
  _Dst_00 = &local_110;
  local_108 = 0xffffffff;
  local_104 = 0x105;
  local_102 = 0;
  local_100 = 0;
  local_110 = &PTR_FUN_14aa57ea0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_f8 = &PTR_FUN_14a3d4750;
  local_e0 = 0;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = 0xffffffff;
  local_c4 = 0x105;
  local_c2 = 0;
  local_c0 = 0;
  local_d0 = &PTR_FUN_14aa57ea0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_b8 = &PTR_FUN_14a3d4750;
  local_a0 = 0;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = 0xffffffff;
  local_84 = 0x105;
  local_82 = 0;
  local_80 = 0;
  local_90 = &PTR_FUN_14aa57ea0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = &PTR_FUN_14a3d4750;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  if (((iVar12 != 0 || iVar7 != 0) && ((*(byte *)(param_1 + 0x5c) & 0x13) != 0)) &&
     (_Dst_00 = *(undefined ****)(param_1 + 0x218), _Dst_00 == (undefined ***)0x0)) {
    _Dst_00 = (undefined ***)FUN_14001cc68(0xc0);
    memset(_Dst_00,0,0xc0);
    *(undefined4 *)(_Dst_00 + 1) = 0xffffffff;
    *(undefined2 *)((longlong)_Dst_00 + 0xc) = 0x105;
    *_Dst_00 = &PTR_FUN_14aa57ea0;
    _Dst_00[4] = (undefined **)0x0;
    _Dst_00[5] = (undefined **)0x0;
    _Dst_00[3] = &PTR_FUN_14a3d4750;
    *(undefined4 *)(_Dst_00 + 7) = 0xffffffff;
    *(undefined4 *)(_Dst_00 + 9) = 0xffffffff;
    *(undefined2 *)((longlong)_Dst_00 + 0x4c) = 0x105;
    _Dst_00[8] = &PTR_FUN_14aa57ea0;
    _Dst_00[0xc] = (undefined **)0x0;
    _Dst_00[0xd] = (undefined **)0x0;
    _Dst_00[0xb] = &PTR_FUN_14a3d4750;
    *(undefined4 *)(_Dst_00 + 0xf) = 0xffffffff;
    *(undefined4 *)(_Dst_00 + 0x11) = 0xffffffff;
    *(undefined2 *)((longlong)_Dst_00 + 0x8c) = 0x105;
    _Dst_00[0x10] = &PTR_FUN_14aa57ea0;
    _Dst_00[0x14] = (undefined **)0x0;
    _Dst_00[0x15] = (undefined **)0x0;
    _Dst_00[0x13] = &PTR_FUN_14a3d4750;
    *(undefined4 *)(_Dst_00 + 0x17) = 0xffffffff;
    *(undefined ****)(param_1 + 0x218) = _Dst_00;
  }
  FUN_14365f7c2(_Dst_00,param_2);
  if ((*(byte *)(param_1 + 0x5c) & 2) == 0) {
    *(undefined1 *)(_Dst_00 + 6) = 0;
    if ((DAT_14c872bf0 == '\0') &&
       (*(undefined4 *)(_Dst_00 + 5) = 0, *(int *)((longlong)_Dst_00 + 0x2c) != 0)) {
      FUN_140397e0a(_Dst_00 + 4,0);
    }
    *(undefined4 *)(_Dst_00 + 7) = 0xffffffff;
  }
  FUN_14365f7c2(param_1 + 0x1d8,param_2);
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x208) = 0;
    if ((DAT_14c872bf0 == '\0') &&
       (*(undefined4 *)(param_1 + 0x200) = 0, *(int *)(param_1 + 0x204) != 0)) {
      FUN_140397e0a(param_1 + 0x1f8,0);
    }
    *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  }
  FUN_14365f7c2(_Dst_00 + 8,param_2);
  if ((*(byte *)(param_1 + 0x5c) & 4) == 0) {
    *(undefined1 *)(_Dst_00 + 0xe) = 0;
    if ((DAT_14c872bf0 == '\0') &&
       (*(undefined4 *)(_Dst_00 + 0xd) = 0, *(int *)((longlong)_Dst_00 + 0x6c) != 0)) {
      FUN_140397e0a(_Dst_00 + 0xc,0);
    }
    *(undefined4 *)(_Dst_00 + 0xf) = 0xffffffff;
  }
  FUN_14365f7c2(_Dst_00 + 0x10,param_2);
  if ((*(byte *)(param_1 + 0x5c) & 0x10) == 0) {
    *(undefined1 *)(_Dst_00 + 0x16) = 0;
    if ((DAT_14c872bf0 == '\0') &&
       (*(undefined4 *)(_Dst_00 + 0x15) = 0, *(int *)((longlong)_Dst_00 + 0xac) != 0)) {
      FUN_140397e0a(_Dst_00 + 0x14,0);
    }
    *(undefined4 *)(_Dst_00 + 0x17) = 0xffffffff;
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (iVar7 = FUN_1448332aa(param_2,&DAT_149e3cc08), iVar7 < 3)) {
    local_148 = 0xffffffff;
    local_144 = 0x105;
    local_142 = 0;
    local_140 = 0;
    local_150 = &PTR_FUN_14aa57ea0;
    local_130 = 0;
    uStack_128 = 0;
    local_138 = &PTR_FUN_14a3d4750;
    local_120 = 0;
    local_118 = 0xffffffff;
    local_114 = 0;
    FUN_14365f7c2(&local_150,param_2);
    FUN_140296a12(&local_150);
  }
  FUN_140296a12(&local_90);
  FUN_140296a12(&local_d0);
  FUN_140296a12(&local_110);
  FUN_1437114cf(param_2,&local_160);
  uVar5 = FUN_14371004c(&local_160);
  *(undefined4 *)(param_1 + 100) = uVar5;
  if (((*(byte *)(param_2 + 5) & 1) != 0) && ((*(byte *)(param_1 + 0x5c) & 0x40) != 0)) {
    FUN_143710ad6(param_1);
  }
LAB_14371126b:
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437114cf FUN_1437114cf body=246 status=ok
// SIG undefined FUN_1437114cf(void)

longlong * FUN_1437114cf(longlong *param_1,undefined4 *param_2)

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
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 2;
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
  return param_1;
}



// FUNCTION 1437115c6 FUN_1437115c6 body=2111 status=ok
// SIG undefined FUN_1437115c6(void)

void FUN_1437115c6(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined8 *puVar16;
  int iVar17;
  code *pcVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_148 [32];
  code **local_128;
  undefined8 local_118;
  undefined8 local_110;
  code *local_108;
  longlong *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  longlong *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  longlong *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = param_1;
  local_110 = param_4;
  if (param_2 != 0) {
    FUN_143711e06(&local_118);
    goto LAB_1437119e1;
  }
  local_f8 = (longlong *)0x0;
  local_e8 = &PTR_LAB_14aabc680;
  uStack_e0 = param_1;
  local_d8 = param_4;
  local_108 = (code *)&LAB_1437170d2;
  if ((param_3 == 0) || (DAT_14ca9a43c != 2)) {
    local_c8 = (code *)&LAB_1437170d2;
    local_b8 = (longlong *)0x0;
    uStack_90 = CONCAT44(uStack_cc,uStack_d0);
    local_a8 = &PTR_LAB_14aabc680;
    uStack_a0 = param_1;
    local_98 = param_4;
LAB_143711816:
    local_108 = (code *)0x0;
    pcVar18 = local_c8;
LAB_14371181f:
    local_f8 = (longlong *)0x0;
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar17 = *(int *)(lVar6 + 0xc60);
    local_e8 = local_a8;
    uStack_e0 = uStack_a0;
    local_d8 = local_98;
    if (DAT_14c86a9fc == 0) {
      if (iVar17 != 2) {
        if (iVar17 != 1) goto LAB_143711842;
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        pcVar18 = local_c8;
        if (DVar9 == DVar10) goto LAB_143711847;
        goto LAB_143711898;
      }
LAB_143711847:
      plVar14 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar14 = &local_a8;
      }
      uVar11 = (**(code **)(*plVar14 + 8))();
      (*pcVar18)(uVar11,&DAT_14ca85100);
    }
    else {
LAB_143711842:
      if (iVar17 == 0x10) goto LAB_143711847;
LAB_143711898:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 == '\x01') && (iVar17 = *(int *)(lVar6 + 0xc60), iVar17 != 2)) {
          if (iVar17 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            if (DVar9 == DVar10) goto LAB_143711dbc;
          }
          goto LAB_1437118c9;
        }
LAB_143711dbc:
        pcVar18 = local_c8;
        plVar14 = local_b8;
        if (local_b8 == (longlong *)0x0) {
          plVar14 = &local_a8;
        }
        uVar11 = (**(code **)(*plVar14 + 8))();
        (*pcVar18)(uVar11,&DAT_14ca85100);
      }
      else {
LAB_1437118c9:
        if (DAT_14ca9a43c == 0) {
          puVar3 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar13 = (uint *)*puVar3;
          if (puVar13 != (uint *)0x0) goto LAB_143711aaa;
          while( true ) {
            uVar8 = *(uint *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x318);
            if ((uVar8 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar8 | 1;
              __tlregdtor(&LAB_143715770);
            }
            lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar12 = *(undefined4 **)(lVar6 + 0x310);
            *(undefined8 *)(lVar6 + 0x310) = 0;
            if (puVar12 == (undefined4 *)0x0) {
              puVar12 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar12 = 0xffffffff;
            *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar3 = puVar12;
            FUN_140217a48(puVar3);
            puVar13 = (uint *)*puVar3;
LAB_143711aaa:
            puVar16 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 0xfU & 0xfffffffffffffff0);
            puVar15 = (uint *)(puVar16 + 0x1e);
            uVar8 = puVar13[0x12];
            if (puVar15 <= puVar13 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
              LOCK();
              uVar5 = *puVar13;
              *puVar13 = *puVar13 + uVar8 + 1;
              UNLOCK();
              if ((uVar5 ^ uVar8) != 0xffffffff) break;
              puVar13 = (uint *)*puVar3;
              *puVar13 = 0xffffffff;
              *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
              puVar13[0x12] = 0;
              *puVar3 = puVar13;
              puVar16 = (undefined8 *)((longlong)puVar13 + 0x67U & 0xfffffffffffffff0);
              puVar15 = (uint *)(puVar16 + 0x1e);
              uVar8 = 0;
              if (puVar15 <= puVar13 + 0x4000) {
                uVar8 = 1;
                goto LAB_143711b2a;
              }
            }
          }
          uVar8 = uVar8 + 1;
LAB_143711b2a:
          *(uint **)(puVar13 + 0x10) = puVar15;
          puVar13[0x12] = uVar8;
          FUN_1447247dc(puVar16,0);
          *puVar16 = &PTR_FUN_14aabc670;
          puVar16[0x16] = local_c8;
          puVar16[0x18] = local_b8;
          local_b8 = (longlong *)0x0;
          *(undefined4 *)(puVar16 + 0x1c) = (undefined4)local_98;
          *(undefined4 *)((longlong)puVar16 + 0xe4) = local_98._4_4_;
          *(undefined4 *)(puVar16 + 0x1d) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)puVar16 + 0xec) = uStack_90._4_4_;
          *(undefined4 *)(puVar16 + 0x1a) = (undefined4)local_a8;
          *(undefined4 *)((longlong)puVar16 + 0xd4) = local_a8._4_4_;
          *(undefined4 *)(puVar16 + 0x1b) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)puVar16 + 0xdc) = uStack_a0._4_4_;
          if (local_c8 != (code *)0x0) {
            local_c8 = (code *)0x0;
          }
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar8 = DAT_14c7585c8 >> 10 & 3;
            iVar17 = 0;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
              uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
              iVar17 = 0;
            }
            else {
              uVar19 = 2;
            }
          }
          else {
            iVar17 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar19 = 5;
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
          lVar6 = *(longlong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2b8);
          if (lVar6 == 0) {
            uVar7 = 1;
            if ((char)uVar19 != '\x06') {
              uVar7 = uVar19;
            }
            uVar19 = uVar7;
            uVar11 = 0;
          }
          else {
            if ((char)uVar19 == '\x06') {
              uVar19 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
            }
            uVar11 = *(undefined8 *)(lVar6 + 0x30);
          }
          puVar16[0xf] = uVar11;
          puVar16[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar16 + 0x1c) = iVar17;
          if (puVar16 == (undefined8 *)0x0) {
            local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
            UNLOCK();
            local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
            FUN_1447439e4(puVar16);
            LOCK();
            piVar2 = (int *)(puVar16 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar16)(puVar16,1);
            }
          }
        }
        else {
          local_88[0] = (code *)0x0;
          local_78 = (longlong *)FUN_14001cc68(0x50,0x10);
          *local_78 = (longlong)&PTR_LAB_14aabc650;
          local_78[2] = (longlong)local_c8;
          local_78[4] = (longlong)local_b8;
          local_b8 = (longlong *)0x0;
          *(undefined4 *)(local_78 + 8) = (undefined4)local_98;
          *(undefined4 *)((longlong)local_78 + 0x44) = local_98._4_4_;
          *(undefined4 *)(local_78 + 9) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)local_78 + 0x4c) = uStack_90._4_4_;
          *(undefined4 *)(local_78 + 6) = (undefined4)local_a8;
          *(undefined4 *)((longlong)local_78 + 0x34) = local_a8._4_4_;
          *(undefined4 *)(local_78 + 7) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)local_78 + 0x3c) = uStack_a0._4_4_;
          if (local_c8 != (code *)0x0) {
            local_c8 = (code *)0x0;
          }
          if (local_78 != (longlong *)&DAT_fffffffffffffff0) {
            local_88[0] = FUN_143716e80;
          }
          local_128 = local_88;
          FUN_14005a792(&DAT_14ca9a440,L"StaticMeshVertexBuffersInitModelVF",&DAT_14cb09d94);
          if (local_88[0] != (code *)0x0) {
            plVar14 = local_78;
            if (local_78 == (longlong *)0x0) {
              plVar14 = (longlong *)&local_68;
            }
            (**(code **)(*plVar14 + 0x10))();
          }
        }
      }
    }
    if (local_c8 != (code *)0x0) {
      plVar14 = &local_a8;
      if (local_b8 != (longlong *)0x0) {
        plVar14 = local_b8;
      }
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  else {
    pcVar1 = (char *)(param_3 + 8);
    LOCK();
    bVar20 = *(char *)(param_3 + 8) == '\0';
    if (bVar20) {
      *(char *)(param_3 + 8) = '\x01';
    }
    UNLOCK();
    if (!bVar20) {
      FUN_1447d2058(pcVar1);
    }
    if (*(longlong *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        param_3) {
      local_88[0] = local_108;
      local_78 = local_f8;
      local_f8 = (longlong *)0x0;
      local_68 = (undefined4)local_e8;
      uStack_64 = local_e8._4_4_;
      uStack_60 = (undefined4)uStack_e0;
      uStack_5c = uStack_e0._4_4_;
      local_58 = (undefined4)local_d8;
      uStack_54 = local_d8._4_4_;
      uStack_50 = uStack_d0;
      uStack_4c = uStack_cc;
      if (local_108 != (code *)0x0) {
        local_108 = (code *)0x0;
      }
      local_48 = 1;
      FUN_1401a96bc(param_3,local_88,L"StaticMeshVertexBuffersInitModelVF",&DAT_14cb09d94);
LAB_1437117ae:
      (*(code *)(&PTR_LAB_14a3931f0)[local_48])();
      bVar20 = false;
    }
    else {
      if (*(longlong *)(param_3 + 0x10) != 0) {
        local_88[0] = local_108;
        local_78 = local_f8;
        local_f8 = (longlong *)0x0;
        local_68 = (undefined4)local_e8;
        uStack_64 = local_e8._4_4_;
        uStack_60 = (undefined4)uStack_e0;
        uStack_5c = uStack_e0._4_4_;
        local_58 = (undefined4)local_d8;
        uStack_54 = local_d8._4_4_;
        uStack_50 = uStack_d0;
        uStack_4c = uStack_cc;
        if (local_108 != (code *)0x0) {
          local_108 = (code *)0x0;
        }
        local_48 = 1;
        FUN_1401a98c8(param_3,local_88,L"StaticMeshVertexBuffersInitModelVF",&DAT_14cb09d94);
        goto LAB_1437117ae;
      }
      bVar20 = true;
    }
    LOCK();
    cVar4 = *pcVar1;
    if (cVar4 == '\x01') {
      *pcVar1 = '\0';
    }
    UNLOCK();
    if (cVar4 != '\x01') {
      FUN_14008cdb0(pcVar1);
    }
    if (bVar20) {
      local_c8 = local_108;
      local_b8 = local_f8;
      local_a8 = local_e8;
      uStack_a0 = uStack_e0;
      local_98 = local_d8;
      uStack_90 = CONCAT44(uStack_cc,uStack_d0);
      if (local_108 != (code *)0x0) goto LAB_143711816;
      pcVar18 = (code *)0x0;
      goto LAB_14371181f;
    }
  }
  if (local_108 != (code *)0x0) {
    plVar14 = &local_e8;
    if (local_f8 != (longlong *)0x0) {
      plVar14 = local_f8;
    }
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
LAB_1437119e1:
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143711e06 FUN_143711e06 body=592 status=ok
// SIG undefined FUN_143711e06(void)

void FUN_143711e06(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 auStack_128 [40];
  longlong local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined2 local_f2;
  longlong local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  char local_e3;
  char local_e2;
  undefined1 local_e1;
  longlong local_e0;
  undefined4 local_d8;
  char local_d4;
  char local_d3;
  char local_d2;
  undefined1 local_d1;
  undefined8 local_90;
  longlong local_88;
  int7 iStack_80;
  undefined1 uStack_79;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = *param_1;
  local_90 = 0x400000000;
  local_88 = 0;
  _iStack_80 = 0;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0xff;
  local_42 = 0;
  local_100 = lVar4 + 0x88;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_f3 = *(undefined1 *)(lVar4 + 0xb8);
  local_f8 = 0;
  local_f4 = 0;
  local_f2 = 3;
  local_68 = *(undefined8 *)(lVar4 + 0xa0);
  uStack_60 = *(undefined8 *)(lVar4 + 0x48);
  cVar2 = *(char *)(lVar4 + 0x81);
  local_f0 = lVar4 + 0x10;
  local_e3 = cVar2 * '\b' + '\b';
  local_e2 = (cVar2 != '\0') * '\t' + '\x05';
  local_e8 = 0;
  local_e4 = 0;
  local_e1 = 4;
  local_d4 = cVar2 * '\x04' + '\x04';
  local_d8 = 0;
  local_d1 = 4;
  local_e0 = local_f0;
  local_d3 = local_e3;
  local_d2 = local_e2;
  FUN_14472d638(lVar4,param_1[1],&local_100,0xffffffff);
  uVar3 = *(uint *)(lVar4 + 0x78);
  uVar6 = 1;
  if ((int)uVar3 < 2) {
    uVar6 = uVar3 - 1;
  }
  local_44 = CONCAT11((char)uVar3,(char)uVar6);
  local_58 = *(undefined8 *)(lVar4 + 0x58);
  if ((-1 < (int)uVar6) && (uVar6 < uVar3)) {
    bVar1 = *(char *)(lVar4 + 0x80) + 2;
    local_88 = lVar4 + 0x28;
    uVar7 = 0xc;
    if (*(char *)(lVar4 + 0x80) != '\0') {
      uVar7 = 2;
    }
    _iStack_80 = CONCAT17(4,(uint7)CONCAT12(uVar7,CONCAT11((char)(uVar3 << (bVar1 & 0x1f)),
                                                           (char)(uVar6 << (bVar1 & 0x1f)))) << 0x20
                         );
  }
  uStack_50 = DAT_14ca94db0;
  local_48 = 0;
  local_78 = &DAT_14ca94d98;
  uStack_70 = 0x408000000000000;
  FUN_140ba0b60(param_1[1],param_2);
  plVar5 = (longlong *)param_1[1];
  if ((int)plVar5[1] == -1) {
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
  }
  else {
    FUN_1447fd100(plVar5,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143712058 FUN_143712058 body=761 status=ok
// SIG undefined FUN_143712058(void)

void FUN_143712058(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  longlong *plVar9;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_10b;
  undefined2 local_10a;
  longlong *local_108;
  undefined4 local_100;
  undefined1 local_fc;
  char local_fb;
  char local_fa;
  undefined1 local_f9;
  longlong *local_f8;
  undefined4 local_f0;
  char local_ec;
  char local_eb;
  char local_ea;
  undefined1 local_e9;
  undefined8 local_a8;
  longlong *local_a0;
  int7 iStack_98;
  undefined1 uStack_91;
  longlong *local_90;
  int6 iStack_88;
  undefined2 uStack_82;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar6 = (longlong *)*param_1;
  plVar3 = plVar6 + 0x11;
  if ((int)plVar6[0x12] == -1) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
  }
  else {
    FUN_1447fd100(plVar3,param_2);
  }
  if ((int)plVar6[1] == -1) {
    (**(code **)(*plVar6 + 0x18))(plVar6,param_2);
  }
  else {
    FUN_1447fd100(plVar6,param_2);
  }
  plVar9 = plVar6 + 0x19;
  if ((int)plVar6[0x1a] == -1) {
    (**(code **)(*plVar9 + 0x18))(plVar9,param_2);
  }
  else {
    FUN_1447fd100(plVar9,param_2);
  }
  local_a8 = 0x400000000;
  local_a0 = (longlong *)0x0;
  _iStack_98 = 0;
  local_90 = (longlong *)0x0;
  _iStack_88 = 0;
  local_70 = 0;
  lStack_68 = 0;
  local_60 = 0xffffffff;
  local_5c = 0xff;
  uVar7 = 0;
  local_5a = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_10b = (undefined1)plVar6[0x17];
  local_110 = 0;
  local_10c = 0;
  local_10a = 3;
  local_80 = plVar6[0x14];
  lStack_78 = plVar6[9];
  cVar1 = *(char *)((longlong)plVar6 + 0x81);
  local_108 = plVar6 + 2;
  local_fb = cVar1 * '\b' + '\b';
  local_fa = (cVar1 != '\0') * '\t' + '\x05';
  local_100 = 0;
  local_fc = 0;
  local_f9 = 4;
  local_ec = cVar1 * '\x04' + '\x04';
  local_f0 = 0;
  local_e9 = 4;
  local_118 = plVar3;
  local_f8 = local_108;
  local_eb = local_fb;
  local_ea = local_fa;
  FUN_14472d638(plVar6,param_1[1],&local_118,0xffffffff);
  uVar2 = *(uint *)(plVar6 + 0xf);
  uVar5 = uVar2 - 1;
  if ((int)*(uint *)(param_1 + 2) < (int)uVar2) {
    uVar5 = *(uint *)(param_1 + 2);
  }
  local_5c = CONCAT11((char)uVar2,(char)uVar5);
  local_70 = plVar6[0xb];
  if ((-1 < (int)uVar5) && (uVar5 < uVar2)) {
    bVar4 = (char)plVar6[0x10] + 2;
    local_a0 = plVar6 + 5;
    uVar8 = 0xc;
    if ((char)plVar6[0x10] != '\0') {
      uVar8 = 2;
    }
    _iStack_98 = CONCAT17(4,(uint7)CONCAT12(uVar8,CONCAT11((char)(uVar2 << (bVar4 & 0x1f)),
                                                           (char)(uVar5 << (bVar4 & 0x1f)))) << 0x20
                         );
  }
  if (*(int *)((longlong)plVar6 + 0xfc) == 0) {
    plVar9 = &DAT_14ca94d98;
    plVar6 = &DAT_14ca94db0;
    bVar4 = 0;
  }
  else {
    bVar4 = *(byte *)(plVar6 + 0x1f);
    plVar6 = plVar6 + 0x1d;
    uVar7 = 0xffffffff;
  }
  lStack_68 = *plVar6;
  _iStack_88 = CONCAT26(0x408,(uint6)bVar4 << 0x28);
  local_90 = plVar9;
  local_60 = uVar7;
  FUN_140ba0b60(param_1[1],param_2);
  plVar3 = (longlong *)param_1[1];
  if ((int)plVar3[1] == -1) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
  }
  else {
    FUN_1447fd100(plVar3,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143712352 FUN_143712352 body=645 status=ok
// SIG undefined FUN_143712352(void)

void FUN_143712352(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14aaba188;
  param_1[6] = 0;
  param_1[7] = 0x100000000;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0x80;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x75) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x79) = 0xff;
  param_1[0x10] = DAT_14c845dbc;
  *(undefined4 *)(param_1 + 0x11) = DAT_14c845dc4;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x9e) = 0;
  param_1[0x12] = &PTR_FUN_14aa69e90;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xae) = 0;
  param_1[0x16] = 0;
  param_1[0x14] = &PTR_FUN_14aa6dba0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  param_1[0x19] = 0;
  param_1[0x17] = &DAT_14aa6dc00;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  param_1[0x21] = 0;
  *(undefined1 *)((longlong)param_1 + 0x112) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x124) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x126) = 0;
  param_1[0x25] = 0;
  param_1[0x23] = &PTR_FUN_14aa50910;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x164) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x166) = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = &PTR_FUN_14aa61a50;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1a4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x1a6) = 0;
  param_1[0x35] = 0;
  param_1[0x33] = &PTR_FUN_14aa57ea0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x36] = &PTR_FUN_14a3d4750;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1e4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x1e6) = 0;
  param_1[0x3d] = 0;
  param_1[0x3b] = &PTR_FUN_14aa57ea0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3e] = &PTR_FUN_14a3d4750;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x44] = &PTR_LAB_14aaba160;
  param_1[0x4c] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x274) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x276) = 0;
  param_1[0x4d] = &PTR_FUN_14aab9fe0;
  *(undefined8 *)((longlong)param_1 + 0x281) = 0;
  *(undefined8 *)((longlong)param_1 + 0x289) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  return;
}



// FUNCTION 1437125d8 FUN_1437125d8 body=1327 status=ok
// SIG undefined FUN_1437125d8(void)

void FUN_1437125d8(longlong *param_1,longlong param_2)

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
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 9) & 2) != 0) {
    FUN_140308182(param_1[3],0);
    FUN_140308182(param_1[2],0);
    FUN_140308182(param_1[2] + 0x88,0);
  }
  if (((DAT_14ca96da8 == '\0') || (*param_1 == 0)) || ((*(byte *)(param_1 + 9) & 1) == 0))
  goto LAB_14371275d;
  if (param_2 == 0) {
    uStack_78 = 0;
  }
  else {
    uStack_78 = *(undefined8 *)(param_2 + 0x18);
  }
  local_70 = 0;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_80 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143712689;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14371268e;
      goto LAB_1437126b8;
    }
  }
  else {
LAB_143712689:
    if (iVar6 != 0x10) {
LAB_1437126b8:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14371268e;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14371268e;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143712822;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143715770);
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
LAB_143712822:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x18);
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
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x18);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1437128a2;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1437128a2:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aabc7f0;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_80;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_80._4_4_;
        *(undefined4 *)(puVar16 + 0x16) = (undefined4)uStack_78;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_78._4_4_;
        puVar16[0x17] = local_70;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
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
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aabc7d0;
        local_40 = (undefined4)local_80;
        uStack_3c = local_80._4_4_;
        uStack_38 = (undefined4)uStack_78;
        uStack_34 = uStack_78._4_4_;
        local_30 = local_70;
        local_68[0] = &LAB_143717aee;
        FUN_14005a792(&DAT_14ca9a440,L"InitStaticMeshRayTracingGeometry",&DAT_14cb09da0);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14371275d;
    }
  }
LAB_14371268e:
  FUN_14371781c(&local_80);
LAB_14371275d:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143712b08 FUN_143712b08 body=499 status=ok
// SIG undefined FUN_143712b08(void)

void FUN_143712b08(undefined8 *param_1,undefined1 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = param_2;
  *(undefined2 *)((longlong)param_1 + 0xd) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0x800000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x200000000;
  param_1[0x20] = 0;
  param_1[0x21] = 0x300000000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x1ffffff;
  *param_1 = &PTR_FUN_14a1ca480;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 4;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x1ee) = 0;
  param_1[0x42] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x22c) = param_2;
  *(undefined2 *)((longlong)param_1 + 0x22d) = 1;
  param_1[0x56] = 0;
  param_1[0x57] = 0x800000000;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0x200000000;
  param_1[100] = 0;
  param_1[0x65] = 0x300000000;
  param_1[0x68] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined1 *)((longlong)param_1 + 0x34b) = 1;
  *(undefined1 *)((longlong)param_1 + 0x34a) = 0xff;
  *(undefined2 *)(param_1 + 0x69) = 0xffff;
  param_1[0x44] = &PTR_FUN_14a1ca480;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 4;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x40c) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x40e) = 0;
  param_1[0x86] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x43c) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  return;
}



// FUNCTION 143712cfc FUN_143712cfc body=27 status=ok
// SIG undefined FUN_143712cfc(void)

undefined8 FUN_143712cfc(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x40);
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 0x70));
  }
  return 0;
}



// FUNCTION 143712d18 FUN_143712d18 body=151 status=ok
// SIG undefined FUN_143712d18(void)

void FUN_143712d18(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,0x1427dd501,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
      return;
    }
  }
  return;
}



// FUNCTION 143712db0 FUN_143712db0 body=4774 status=ok
// SIG undefined FUN_143712db0(void)

void FUN_143712db0(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  uint5 uVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  uint *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  uint uVar17;
  longlong *plVar18;
  undefined ***pppuVar19;
  uint *puVar20;
  undefined7 uVar22;
  ulonglong uVar21;
  char cVar23;
  undefined8 *puVar24;
  byte bVar25;
  undefined1 uVar26;
  int iVar27;
  byte bVar28;
  int iVar29;
  ulonglong uVar30;
  uint uVar31;
  undefined1 auStack_e8 [32];
  code **local_c8;
  ulonglong local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong *local_60;
  longlong *plStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(byte *)((longlong)param_1 + 0x195) = *(byte *)((longlong)param_1 + 0x195) | 1;
  param_1[0x18] = 0;
  plVar18 = (longlong *)param_1[0x1c];
  if (plVar18 == (longlong *)0x0) goto LAB_143713b63;
  uVar17 = *(uint *)(plVar18 + 1);
  if ((DAT_14cb0d2b0 == 0) || (*(char *)(DAT_14cb0d2b0 + 0xd58) != '\x01')) {
    iVar10 = (int)param_1[0x2a];
  }
  else {
    iVar10 = FUN_147d15c44(param_1 + 0x1d);
    plVar18 = (longlong *)param_1[0x1c];
  }
  bVar3 = *(byte *)((longlong)plVar18 + 0x8e);
  *(byte *)((longlong)param_1 + 0xc1) = bVar3;
  uVar30 = (ulonglong)*(uint *)(plVar18 + 1);
  iVar27 = 0;
  do {
    if ((int)uVar30 < 1) break;
    lVar15 = uVar30 * 8;
    uVar30 = uVar30 - 1;
    uVar31 = *(uint *)(*(longlong *)(*plVar18 + -8 + lVar15) + 0x5c) & 0x40;
    iVar27 = iVar27 + (uVar31 >> 6 ^ 1);
  } while (uVar31 == 0);
  iVar29 = 1;
  if (*(uint *)(plVar18 + 1) == 0) {
    iVar29 = iVar27;
  }
  if (iVar27 != 0) {
    iVar29 = iVar27;
  }
  bVar28 = (byte)iVar29;
  *(byte *)((longlong)param_1 + 0xc2) = bVar28;
  uVar31 = uVar17 - iVar10;
  if ((int)uVar17 <= (int)(uVar17 - iVar10)) {
    uVar31 = uVar17;
  }
  if ((int)uVar31 < (int)(uint)*(byte *)((longlong)plVar18 + 0x8e)) {
    uVar31 = (uint)*(byte *)((longlong)plVar18 + 0x8e);
  }
  bVar25 = (byte)uVar31;
  *(byte *)((longlong)param_1 + 0xc3) = bVar25;
  *(char *)((longlong)param_1 + 0xc4) = (char)iVar10;
  *(char *)((longlong)param_1 + 199) = (char)plVar18[0x12];
  bVar8 = bVar25;
  if (bVar28 < bVar25) {
    bVar8 = bVar28;
  }
  *(byte *)((longlong)param_1 + 0xc2) = bVar8;
  cVar23 = (char)uVar17 - *(char *)((longlong)plVar18 + 0x8f);
  *(char *)((longlong)param_1 + 0xc5) = cVar23;
  *(char *)((longlong)param_1 + 0xc6) = cVar23;
  *(byte *)(param_1 + 0x18) =
       *(byte *)(param_1 + 0x18) & 0xfe |
       (bVar3 != bVar25 && (*(byte *)((longlong)param_1 + 0xbc) & 1) == 0);
  (**(code **)(*param_1 + 0x180))(param_1);
  plVar18 = (longlong *)param_1[0x1c];
  iVar10 = (int)plVar18[1];
  if (0 < iVar10) {
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined8 *)(lVar15 + 0x308);
    local_b8 = (undefined8 *)(lVar15 + 0x310);
    local_a8 = (longlong *)(lVar15 + 0x2b8);
    local_b0 = 0x527800b400;
    uVar30 = 0;
    do {
      plVar4 = *(longlong **)(*plVar18 + uVar30 * 8);
      if (((char)plVar4[0x52] == '\0') && (*(int *)((longlong)plVar4 + 0x10c) != 0)) {
        FUN_140308182(plVar4 + 0x33,0);
        if ((*(byte *)((longlong)plVar4 + 0x5c) & 0x10) != 0) {
          FUN_140308182(plVar4[0x43] + 0x80,0);
        }
        FUN_140308182(plVar4 + 0x12,0);
        FUN_140308182(plVar4 + 0x23,0);
        uVar17 = *(uint *)((longlong)plVar4 + 0x5c);
        if ((uVar17 & 8) != 0) {
          FUN_140308182(plVar4 + 0x2b,0);
          uVar17 = *(uint *)((longlong)plVar4 + 0x5c);
        }
        if ((uVar17 & 2) != 0) {
          FUN_140308182(plVar4[0x43],0);
          uVar17 = *(uint *)((longlong)plVar4 + 0x5c);
        }
        if ((uVar17 & 1) != 0) {
          FUN_140308182(plVar4 + 0x3b,0);
          uVar17 = *(uint *)((longlong)plVar4 + 0x5c);
        }
        if ((uVar17 & 4) != 0) {
          FUN_140308182(plVar4[0x43] + 0x40,0);
        }
        if ((((param_1 != (longlong *)0x0) && ((*(byte *)((longlong)param_1 + 0x195) & 4) != 0)) &&
            ((*(byte *)((longlong)param_1 + 0x194) & 8) != 0)) && (0 < (int)plVar4[0x46])) {
          plVar4[0x51] = (longlong)(plVar4 + 0x4b);
          FUN_140308182(plVar4 + 0x4d,0);
        }
        if ((DAT_14ca96da8 != '\0') && (plVar4[10] != 0)) {
          if (param_1 == (longlong *)0x0) {
            uStack_98 = (longlong *)0x0;
          }
          else {
            uStack_98 = (longlong *)param_1[3];
          }
          local_90 = 0;
          iVar10 = *(int *)(lVar15 + 0xc60);
          local_a0 = plVar4;
          if (DAT_14c86a9fc == 0) {
            if (iVar10 != 2) {
              if (iVar10 != 1) goto LAB_1437130ba;
              DVar11 = FUN_140ad26c0();
              DVar12 = GetCurrentThreadId();
              if (DVar11 == DVar12) goto LAB_1437130bf;
              goto LAB_1437130eb;
            }
          }
          else {
LAB_1437130ba:
            if (iVar10 != 0x10) {
LAB_1437130eb:
              if (DAT_14ca9a438 == '\0') {
                if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar15 + 0xc60), iVar10 == 2))
                goto LAB_1437130bf;
                if (iVar10 == 1) {
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  if (DVar11 == DVar12) goto LAB_1437130bf;
                }
              }
              if (DAT_14ca9a43c == 0) {
                puVar13 = (uint *)*puVar2;
                if (puVar13 != (uint *)0x0) goto LAB_143713238;
                while( true ) {
                  puVar24 = local_b8;
                  uVar17 = *(uint *)(*(longlong *)
                                      ((longlong)ThreadLocalStoragePointer +
                                      (ulonglong)_tls_index * 8) + 0x318);
                  if ((uVar17 & 1) == 0) {
                    *(uint *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x318) = uVar17 | 1;
                    __tlregdtor(&LAB_143715770);
                  }
                  puVar16 = (undefined4 *)*puVar24;
                  *puVar24 = 0;
                  if (puVar16 == (undefined4 *)0x0) {
                    puVar16 = _aligned_malloc(0x10000,0x10000);
                  }
                  *puVar16 = 0xffffffff;
                  *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
                  puVar16[0x12] = 0;
                  *puVar2 = puVar16;
                  FUN_140217a48(puVar2);
                  puVar13 = (uint *)*puVar2;
LAB_143713238:
                  puVar24 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
                  puVar20 = (uint *)(puVar24 + 0x18);
                  uVar17 = puVar13[0x12];
                  if (puVar20 <= puVar13 + 0x4000) break;
                  while( true ) {
                    *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
                    LOCK();
                    uVar31 = *puVar13;
                    *puVar13 = *puVar13 + uVar17 + 1;
                    UNLOCK();
                    if ((uVar31 ^ uVar17) != 0xffffffff) break;
                    puVar13 = (uint *)*puVar2;
                    *puVar13 = 0xffffffff;
                    *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
                    puVar13[0x12] = 0;
                    *puVar2 = puVar13;
                    puVar24 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
                    puVar20 = (uint *)(puVar24 + 0x18);
                    uVar17 = 0;
                    if (puVar20 <= puVar13 + 0x4000) {
                      uVar17 = 1;
                      goto LAB_1437132b8;
                    }
                  }
                }
                uVar17 = uVar17 + 1;
LAB_1437132b8:
                *(uint **)(puVar13 + 0x10) = puVar20;
                puVar13[0x12] = uVar17;
                uVar14 = 0;
                FUN_1447247dc(puVar24,0);
                *puVar24 = &PTR_FUN_14aabc7b8;
                *(undefined4 *)(puVar24 + 0x15) = (undefined4)local_a0;
                *(undefined4 *)((longlong)puVar24 + 0xac) = local_a0._4_4_;
                *(undefined4 *)(puVar24 + 0x16) = (undefined4)uStack_98;
                *(undefined4 *)((longlong)puVar24 + 0xb4) = uStack_98._4_4_;
                puVar24[0x17] = local_90;
                uVar22 = (undefined7)((ulonglong)uVar14 >> 8);
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar17 = DAT_14c7585c8 >> 10 & 3;
                  iVar10 = 0;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
                    uVar21 = CONCAT71(uVar22,(&DAT_149e38edc)[uVar17]);
                    iVar10 = 0;
                  }
                  else {
                    uVar21 = CONCAT71(uVar22,2);
                  }
                }
                else {
                  iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  uVar21 = CONCAT71(uVar22,5);
                }
                if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
                  local_c0 = uVar21;
                  (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
                  uVar21 = local_c0;
                }
                puVar24[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar24[9] = puVar24;
                puVar24[10] = puVar24;
                lVar5 = *local_a8;
                cVar23 = (char)uVar21;
                if (lVar5 == 0) {
                  uVar21 = uVar21 & 0xff;
                  if (cVar23 == '\x06') {
                    uVar21 = 1;
                  }
                  uVar14 = 0;
                }
                else {
                  if (cVar23 == '\x06') {
                    uVar21 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
                  }
                  uVar14 = *(undefined8 *)(lVar5 + 0x30);
                }
                puVar24[0xf] = uVar14;
                puVar24[0x10] = (uVar21 << 0x3b) + local_b0 | 0xc000000000000000;
                *(int *)((longlong)puVar24 + 0x1c) = iVar10;
                if (puVar24 == (undefined8 *)0x0) {
                  local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
                  FUN_1447439e4(0,local_88);
                }
                else {
                  LOCK();
                  *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
                  UNLOCK();
                  local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
                  FUN_1447439e4(puVar24,local_88);
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
                local_78 = (undefined ***)0x0;
                local_68 = &PTR_LAB_14aabc750;
                local_50 = local_90;
                local_60 = local_a0;
                plStack_58 = uStack_98;
                local_88[0] = (code *)&LAB_14371766c;
                local_c8 = local_88;
                FUN_14005a792(&DAT_14ca9a440,L"InitStaticMeshRayTracingGeometry",&DAT_14cb09d9c);
                if (local_88[0] != (code *)0x0) {
                  pppuVar19 = local_78;
                  if (local_78 == (undefined ***)0x0) {
                    pppuVar19 = &local_68;
                  }
                  (*(code *)(*pppuVar19)[2])();
                }
              }
              goto LAB_143713190;
            }
          }
LAB_1437130bf:
          FUN_143717398(&local_a0);
        }
LAB_143713190:
        FUN_14083888c(uVar30 * 0x450 + plVar18[2],*(longlong *)(*plVar18 + uVar30 * 8) + 0x90,
                      uVar30 & 0xffffffff,param_1);
        iVar10 = (int)plVar18[1];
      }
      uVar30 = uVar30 + 1;
    } while ((longlong)uVar30 < (longlong)iVar10);
  }
  FUN_141218ee2(plVar18[8],param_1);
  if (plVar18[9] != 0) {
    FUN_147d52924(plVar18[9],param_1);
  }
  if ((DAT_14ca96da8 != '\0') && (lVar15 = plVar18[9], lVar15 != 0)) {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar10 = *(int *)(lVar5 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar10 != 2) {
        if (iVar10 != 1) goto LAB_143713574;
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) {
          lVar15 = plVar18[9];
          goto LAB_14371357d;
        }
        goto LAB_14371369e;
      }
    }
    else {
LAB_143713574:
      if (iVar10 != 0x10) {
LAB_14371369e:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar5 + 0xc60), iVar10 == 2)) {
LAB_143713f4b:
            uVar26 = 0;
            if (*(char *)(plVar18[9] + 0x18) == '\x01') {
              uVar26 = *(undefined1 *)((longlong)plVar18 + 0x8f);
            }
            uVar9 = (**(code **)(*DAT_14ca964f8 + 0x40))(DAT_14ca964f8,(int)plVar18[1],uVar26);
            *(undefined4 *)(plVar18 + 0x11) = uVar9;
            plVar4 = (longlong *)plVar18[9];
            if (0 < (int)plVar4[1]) {
              uVar30 = 0;
              do {
                plVar6 = *(longlong **)(*plVar4 + uVar30 * 8);
                if (*(int *)(plVar6[2] + 0x7c) != 0) {
                  *(int *)(*plVar6 + 0x98) = (int)plVar18[0x11];
                  uVar7 = *(uint5 *)(plVar6 + 5);
                  if (((ulonglong)uVar7 != 0) || (uVar30 < *(byte *)((longlong)plVar18 + 0x8f))) {
                    *(undefined1 *)(*plVar6 + 0x57) = 1;
                  }
                  *(char *)(*plVar6 + 0x9c) = (char)uVar30;
                  (**(code **)(*(longlong *)*plVar6 + 0x18))((longlong *)*plVar6,&DAT_14ca85100);
                  if ((ulonglong)uVar7 != 0) {
                    local_c8 = (code **)CONCAT44(local_c8._4_4_,(int)plVar6[5]);
                    FUN_147ccd336(DAT_14ca964f8,*plVar6,plVar6 + 4,0);
                  }
                }
                uVar30 = uVar30 + 1;
              } while ((longlong)uVar30 < (longlong)(int)plVar4[1]);
            }
            goto LAB_143713744;
          }
          if (iVar10 == 1) {
            DVar11 = FUN_140ad26c0();
            DVar12 = GetCurrentThreadId();
            if (DVar11 == DVar12) goto LAB_143713f4b;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar13 = (uint *)*puVar2;
          if (puVar13 != (uint *)0x0) goto LAB_14371381f;
          do {
            uVar17 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar17 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar17 | 1;
              __tlregdtor(&LAB_143715770);
            }
            lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar16 = *(undefined4 **)(lVar15 + 0x310);
            *(undefined8 *)(lVar15 + 0x310) = 0;
            if (puVar16 == (undefined4 *)0x0) {
              puVar16 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar16 = 0xffffffff;
            *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar2 = puVar16;
            FUN_140217a48(puVar2);
            puVar13 = (uint *)*puVar2;
LAB_14371381f:
            uVar30 = *(longlong *)(puVar13 + 0x10) + 7;
            uVar17 = puVar13[0x12];
            while( true ) {
              puVar24 = (undefined8 *)(uVar30 & 0xfffffffffffffff8);
              if (puVar24 + 0x17 <= puVar13 + 0x4000) {
                *(undefined8 **)(puVar13 + 0x10) = puVar24 + 0x17;
                puVar13[0x12] = uVar17 + 1;
                iVar10 = 0;
                FUN_1447247dc(puVar24,0);
                *puVar24 = &PTR_FUN_14aabc820;
                puVar24[0x15] = plVar18;
                puVar24[0x16] = param_1;
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar17 = DAT_14c7585c8 >> 10 & 3;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
                    uVar30 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
                    iVar10 = 0;
                  }
                  else {
                    uVar30 = 2;
                  }
                }
                else {
                  iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  uVar30 = 5;
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
                lVar15 = *(longlong *)
                          (*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x2b8);
                if (lVar15 == 0) {
                  uVar21 = 1;
                  if ((char)uVar30 != '\x06') {
                    uVar21 = uVar30;
                  }
                  uVar30 = uVar21;
                  uVar14 = 0;
                }
                else {
                  if ((char)uVar30 == '\x06') {
                    uVar30 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
                  }
                  uVar14 = *(undefined8 *)(lVar15 + 0x30);
                }
                puVar24[0xf] = uVar14;
                puVar24[0x10] = uVar30 << 0x3b | 0xc00000527800b400;
                *(int *)((longlong)puVar24 + 0x1c) = iVar10;
                if (puVar24 == (undefined8 *)0x0) {
                  local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
                  FUN_1447439e4(0);
                }
                else {
                  LOCK();
                  *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
                  UNLOCK();
                  local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
                  FUN_1447439e4(puVar24);
                  LOCK();
                  piVar1 = (int *)(puVar24 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar24)(puVar24,1);
                  }
                }
                goto LAB_143713744;
              }
              *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
              LOCK();
              uVar31 = *puVar13;
              *puVar13 = *puVar13 + uVar17 + 1;
              UNLOCK();
              if ((uVar31 ^ uVar17) != 0xffffffff) break;
              puVar13 = (uint *)*puVar2;
              *puVar13 = 0xffffffff;
              *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
              puVar13[0x12] = 0;
              *puVar2 = puVar13;
              uVar30 = (longlong)puVar13 + 0x5f;
              uVar17 = 0;
            }
          } while( true );
        }
        local_c8 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14aabc800;
        local_88[0] = FUN_143717c9e;
        local_60 = plVar18;
        plStack_58 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"InitStaticMeshRayTracingGeometry",&DAT_14cb09da4);
        if (local_88[0] != (code *)0x0) {
          pppuVar19 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar19 = &local_68;
          }
          (*(code *)(*pppuVar19)[2])();
        }
        goto LAB_143713744;
      }
    }
LAB_14371357d:
    uVar26 = 0;
    if (*(char *)(lVar15 + 0x18) == '\x01') {
      uVar26 = *(undefined1 *)((longlong)plVar18 + 0x8f);
    }
    uVar9 = (**(code **)(*DAT_14ca964f8 + 0x40))(DAT_14ca964f8,(int)plVar18[1],uVar26);
    *(undefined4 *)(plVar18 + 0x11) = uVar9;
    plVar4 = (longlong *)plVar18[9];
    if (0 < (int)plVar4[1]) {
      uVar30 = 0;
      do {
        plVar6 = *(longlong **)(*plVar4 + uVar30 * 8);
        if (*(int *)(plVar6[2] + 0x7c) != 0) {
          *(int *)(*plVar6 + 0x98) = (int)plVar18[0x11];
          uVar7 = *(uint5 *)(plVar6 + 5);
          if (((ulonglong)uVar7 != 0) || (uVar30 < *(byte *)((longlong)plVar18 + 0x8f))) {
            *(undefined1 *)(*plVar6 + 0x57) = 1;
          }
          *(char *)(*plVar6 + 0x9c) = (char)uVar30;
          (**(code **)(*(longlong *)*plVar6 + 0x18))((longlong *)*plVar6,&DAT_14ca85100);
          if ((ulonglong)uVar7 != 0) {
            local_c8 = (code **)CONCAT44(local_c8._4_4_,(int)plVar6[5]);
            FUN_147ccd336(DAT_14ca964f8,*plVar6,plVar6 + 4,0);
          }
        }
        uVar30 = uVar30 + 1;
      } while ((longlong)uVar30 < (longlong)(int)plVar4[1]);
    }
  }
LAB_143713744:
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar15 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_14371376a;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_143713773;
      goto LAB_143713aaf;
    }
LAB_143713773:
    *(undefined1 *)((longlong)plVar18 + 0x8d) = 1;
  }
  else {
LAB_14371376a:
    if (iVar10 == 0x10) goto LAB_143713773;
LAB_143713aaf:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar15 + 0xc60), iVar10 == 2))
      goto LAB_143713773;
      if (iVar10 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_143713773;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar2;
      if (puVar13 != (uint *)0x0) goto LAB_143713c38;
      while( true ) {
        uVar17 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar17 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar17 | 1;
          __tlregdtor(&LAB_143715770);
        }
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar16 = *(undefined4 **)(lVar15 + 0x310);
        *(undefined8 *)(lVar15 + 0x310) = 0;
        if (puVar16 == (undefined4 *)0x0) {
          puVar16 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar16 = 0xffffffff;
        *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
        puVar16[0x12] = 0;
        *puVar2 = puVar16;
        FUN_140217a48(puVar2);
        puVar13 = (uint *)*puVar2;
LAB_143713c38:
        puVar24 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar20 = (uint *)(puVar24 + 0x17);
        uVar17 = puVar13[0x12];
        if (puVar20 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar31 = *puVar13;
          *puVar13 = *puVar13 + uVar17 + 1;
          UNLOCK();
          if ((uVar31 ^ uVar17) != 0xffffffff) break;
          puVar13 = (uint *)*puVar2;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          puVar24 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar24 + 0x17);
          uVar17 = 0;
          if (puVar20 <= puVar13 + 0x4000) {
            uVar17 = 1;
            goto LAB_143713cb8;
          }
        }
      }
      uVar17 = uVar17 + 1;
LAB_143713cb8:
      *(uint **)(puVar13 + 0x10) = puVar20;
      puVar13[0x12] = uVar17;
      iVar10 = 0;
      FUN_1447247dc(puVar24,0);
      *puVar24 = &PTR_FUN_14aabc898;
      puVar24[0x15] = plVar18;
      puVar24[0x16] = param_1;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar17 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
          uVar30 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
          iVar10 = 0;
        }
        else {
          uVar30 = 2;
        }
      }
      else {
        iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar30 = 5;
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
      lVar15 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar15 == 0) {
        uVar21 = 1;
        if ((char)uVar30 != '\x06') {
          uVar21 = uVar30;
        }
        uVar30 = uVar21;
        uVar14 = 0;
      }
      else {
        if ((char)uVar30 == '\x06') {
          uVar30 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
        }
        uVar14 = *(undefined8 *)(lVar15 + 0x30);
      }
      puVar24[0xf] = uVar14;
      puVar24[0x10] = uVar30 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar24 + 0x1c) = iVar10;
      if (puVar24 == (undefined8 *)0x0) {
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
        UNLOCK();
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
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
      local_c8 = local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14aabc830;
      local_88[0] = (code *)&LAB_1437180fa;
      local_60 = plVar18;
      plStack_58 = param_1;
      FUN_14005a792(&DAT_14ca9a440,L"CmdSetStaticMeshReadyForStreaming",&DAT_14cb09da8);
      if (local_88[0] != (code *)0x0) {
        pppuVar19 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar19 = &local_68;
        }
        (*(code *)(*pppuVar19)[2])();
      }
    }
  }
  *(undefined1 *)((longlong)plVar18 + 0x91) = 1;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
LAB_143713b63:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    FUN_1406baf36(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371405c FUN_14371405c body=1554 status=ok
// SIG undefined FUN_14371405c(void)

void FUN_14371405c(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined *puVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ushort *puVar14;
  undefined2 *puVar15;
  undefined **ppuVar16;
  longlong *plVar17;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e0;
  ushort *local_d8;
  ulonglong local_d0;
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  ushort local_b0 [4];
  ushort *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined *local_68 [2];
  undefined **local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_f8 = 0;
    uStack_f0 = 0;
    FUN_1400033ba(param_1,0,0);
  }
  cVar2 = FUN_1400439fc(param_1,0,local_68);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))();
  }
  FUN_1407c0ae2();
  if (param_1[0x31] == 0) {
    FUN_147d53e2e();
  }
  if ((((*(byte *)((longlong)param_1 + 0x194) & 4) != 0) && (param_1[0x31] != 0)) &&
     (param_1[0x49] == 0)) {
    plVar7 = DAT_14cacb0f8;
    if (DAT_14cacb100 == 0) {
      plVar7 = (longlong *)0x0;
    }
    lVar13 = (**(code **)(*plVar7 + 0x58))(plVar7,param_1);
    if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar13);
    }
    param_1[0x49] = lVar13;
  }
  iVar5 = 4;
  if (4 < *(int *)((longlong)param_1 + 0x16c)) {
    iVar5 = *(int *)((longlong)param_1 + 0x16c);
  }
  *(int *)((longlong)param_1 + 0x16c) = iVar5;
  plVar7 = (longlong *)param_1[0x1c];
  iVar5 = 0;
  if (plVar7 != (longlong *)0x0) {
    if ((longlong)(int)plVar7[1] < 1) {
      iVar5 = 3;
    }
    else {
      iVar5 = 4;
      lVar13 = 0;
      do {
        lVar10 = *(longlong *)(*plVar7 + lVar13 * 8);
        if ((0 < *(int *)(lVar10 + 0x10c)) && (iVar4 = *(int *)(lVar10 + 0x108), iVar4 < iVar5)) {
          iVar5 = iVar4;
        }
        lVar13 = lVar13 + 1;
      } while ((int)plVar7[1] != lVar13);
      iVar5 = iVar5 + -1;
    }
  }
  if ((int)param_1[0x2e] < iVar5) {
    iVar5 = (int)param_1[0x2e];
  }
  iVar4 = 0;
  if (0 < iVar5) {
    iVar4 = iVar5;
  }
  *(int *)(param_1 + 0x2e) = iVar4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar3 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1437141c2;
    bVar3 = DAT_14c8442b8 & 1;
  }
  if ((bVar3 == 0) && ((*(uint *)(param_1 + 1) & 0x10) == 0)) {
    (**(code **)(*param_1 + 0x308))(param_1);
  }
LAB_1437141c2:
  cVar2 = FUN_140c62276();
  if ((cVar2 != '\0') && (param_1[0x1c] != 0)) {
    lVar13 = (**(code **)(*param_1 + 0x180))(param_1);
    uVar11 = DAT_14c760db4;
    if (lVar13 != 0) {
      lVar13 = (**(code **)(*param_1 + 0x180))(param_1);
      uVar11 = (uint)*(byte *)(lVar13 + 0x150);
    }
    bVar3 = FUN_14479fe53(*(undefined2 *)(&DAT_14ca85070 + (longlong)(int)uVar11 * 2),1,1);
    plVar7 = (longlong *)param_1[0x1c];
    if ((plVar7 != (longlong *)0x0 & bVar3) == 1) {
      puVar9 = &DAT_14cae9e78;
      if (0 < *(int *)(plVar7[8] + 0x70)) {
        puVar9 = &DAT_14cb00c58;
      }
    }
    else {
      puVar9 = &DAT_14cae9e78;
    }
    local_a8 = (ushort *)0x0;
    local_a0 = 0x200000000;
    local_e0 = param_1;
    if ((longlong)(int)plVar7[1] == 0) {
      local_a0._0_4_ = 0;
      local_d0 = 0x208e00;
    }
    else {
      plVar17 = (longlong *)*plVar7;
      plVar7 = plVar17 + (int)plVar7[1];
      uVar11 = 0;
      do {
        lVar13 = *plVar17;
        puVar15 = (undefined2 *)(lVar13 + 0x10);
        if (*(undefined2 **)(lVar13 + 0x30) != (undefined2 *)0x0) {
          puVar15 = *(undefined2 **)(lVar13 + 0x30);
        }
        if ((longlong)*(int *)(lVar13 + 0x38) != 0) {
          puVar8 = puVar15 + (longlong)*(int *)(lVar13 + 0x38) * 0xe;
          do {
            local_68[0] = (undefined *)CONCAT62(local_68[0]._2_6_,*puVar15);
            FUN_147d59852(local_b0,local_68);
            uVar11 = (uint)(byte)((byte)uVar11 | *(byte *)((longlong)puVar15 + 0x15));
            puVar15 = puVar15 + 0xe;
          } while (puVar15 != puVar8);
        }
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar7);
      local_d0 = (ulonglong)((uVar11 & 1) << 0xc) | 0x208e00;
    }
    local_58 = (undefined **)0x0;
    local_50 = 0x200000001;
    local_68[0] = puVar9;
    puVar14 = local_b0;
    if (local_a8 != (ushort *)0x0) {
      puVar14 = local_a8;
    }
    if ((int)local_a0 != 0) {
      local_d8 = puVar14 + (int)local_a0;
      do {
        if (((int)(uint)*puVar14 < (int)local_e0[0x2c]) &&
           (lVar13 = *(longlong *)(local_e0[0x2b] + (ulonglong)((uint)*puVar14 * 0x30)), lVar13 != 0
           )) {
          ppuVar16 = local_58;
          if (local_58 == (undefined **)0x0) {
            ppuVar16 = local_68;
          }
          lVar10 = (longlong)(int)local_50;
          if (lVar10 != 0) {
            lVar12 = 0;
            do {
              uVar1 = *(undefined8 *)((longlong)ppuVar16 + lVar12);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c8442bc) &&
                 (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
                if (DAT_14c846b14 == '\0') {
                  FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                                L"Attempting to get the command line but it hasn\'t been initialized yet."
                               );
                }
                DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
                _Init_thread_footer(&DAT_14c8442bc);
              }
              bVar3 = DAT_14c8442b8;
              if (DAT_14c872bf0 == '\x01') {
                if (DAT_14c872bf1 == '\x01') {
                  bVar3 = DAT_14c8442b8 & 1;
                  goto joined_r0x000143714500;
                }
              }
              else {
joined_r0x000143714500:
                if (((bVar3 == 0) &&
                    (((DAT_14c760d84 != 0 && ((DAT_14ca84f5a & 1) != 0)) ||
                     (cVar2 = FUN_1406917e6(), cVar2 != '\0')))) && (DAT_14c76194c != 0)) {
                  local_c8 = &local_b8;
                  local_c0 = 1;
                  local_b8 = uVar1;
                  FUN_1408ecec8(lVar13,local_98,&local_c8,&local_d0);
                  puVar6 = local_78;
                  if (local_78 == (undefined1 *)0x0) {
                    puVar6 = local_98;
                  }
                  FUN_144717c65(puVar6,local_70);
                  if (local_78 != (undefined1 *)0x0) {
                    FUN_1400020a8();
                  }
                }
              }
              lVar12 = lVar12 + 8;
            } while (lVar10 * 8 != lVar12);
          }
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != local_d8);
      if (local_58 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_a8 != (ushort *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143714670 FUN_143714670 body=1689 status=ok
// SIG undefined FUN_143714670(void)

undefined8 FUN_143714670(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  undefined1 *local_148;
  code *local_140;
  code *local_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  undefined1 local_c0 [88];
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar3 = *(uint *)(param_2 + 1);
  uVar9 = (ulonglong)uVar3;
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) | 1;
  if (*(char *)(param_3 + 4) == '\x01') {
    *(byte *)((longlong)param_1 + 0x194) = *(byte *)((longlong)param_1 + 0x194) | 0x40;
  }
  local_68 = '\0';
  bVar2 = *(byte *)((longlong)param_1 + 0x195);
  if ((bVar2 & 1) != 0) {
    FUN_147d5c8ae(&local_130,param_1,1,1);
    FUN_147d59c82(local_c0,&local_130);
    FUN_147d5cdcc(&local_130);
    (**(code **)(*param_1 + 0x310))(param_1);
    FUN_1408e177a(param_1 + 0x33,0);
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x98,0x10);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[0x11] = 0xffffffff;
  *(undefined2 *)(puVar5 + 0x12) = 0;
  FUN_1404d75a8(puVar5 + 8,0);
  FUN_1404d768c(puVar5[8]);
  lVar7 = param_1[0x1c];
  param_1[0x1c] = (longlong)puVar5;
  if (lVar7 != 0) {
    FUN_14029672a(lVar7);
    FUN_1400020a8(lVar7);
    puVar5 = (undefined8 *)param_1[0x1c];
  }
  FUN_147d52dc4(puVar5,uVar9);
  plVar6 = (longlong *)param_1[0x1c];
  if (0 < (int)plVar6[1]) {
    lVar7 = 0;
    do {
      uVar10 = *(undefined1 *)(param_3 + 5);
      if ((*(byte *)((longlong)param_1 + 0x195) & 2) != 0) {
        uVar10 = 1;
      }
      *(undefined1 *)(*(longlong *)(*plVar6 + lVar7 * 8) + 0x1c8) = uVar10;
      if (lVar7 < *(int *)(param_3 + 0x10)) {
        lVar8 = *(longlong *)(param_3 + 8);
        *(undefined1 *)(*(longlong *)(*plVar6 + lVar7 * 8) + 0x111) =
             *(undefined1 *)(lVar8 + lVar7 * 2);
        *(undefined1 *)(*(longlong *)(*plVar6 + lVar7 * 8) + 0x110) =
             *(undefined1 *)(lVar8 + 1 + lVar7 * 2);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)plVar6[1]);
  }
  if (0 < (int)uVar3) {
    uVar11 = 0;
    do {
      FUN_147d53ee4(param_1,*(undefined8 *)(*param_2 + uVar11 * 8),
                    *(undefined8 *)(*(longlong *)param_1[0x1c] + uVar11 * 8));
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
  }
  if ((DAT_14ca96da8 != '\0') && ((*(byte *)((longlong)param_1 + 0x194) & 0x20) != 0)) {
    FUN_147d52e88(param_1[0x1c]);
  }
  (**(code **)(*param_1 + 0x308))(param_1);
  FUN_146f7292c(*(undefined8 *)*param_2,&local_130);
  lVar7 = param_1[0x1c];
  *(undefined8 *)(lVar7 + 0x80) = local_100;
  *(undefined4 *)(lVar7 + 0x70) = local_110;
  *(undefined4 *)(lVar7 + 0x74) = uStack_10c;
  *(undefined4 *)(lVar7 + 0x78) = (undefined4)uStack_108;
  *(undefined4 *)(lVar7 + 0x7c) = uStack_108._4_4_;
  *(undefined4 *)(lVar7 + 0x60) = uStack_120;
  *(undefined4 *)(lVar7 + 100) = uStack_11c;
  *(undefined4 *)(lVar7 + 0x68) = uStack_118;
  *(undefined4 *)(lVar7 + 0x6c) = uStack_114;
  *(undefined4 *)(lVar7 + 0x50) = (undefined4)local_130;
  *(undefined4 *)(lVar7 + 0x54) = local_130._4_4_;
  *(undefined4 *)(lVar7 + 0x58) = uStack_128;
  *(undefined4 *)(lVar7 + 0x5c) = uStack_124;
  FUN_147d53bec(param_1);
  if (0 < (int)uVar3) {
    uVar11 = 0;
    do {
      fVar12 = powf(0.75,(float)(int)uVar11);
      *(float *)(param_1[0x1c] + 0x20 + uVar11 * 4) = fVar12;
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
  }
  FUN_147d53e2e(param_1);
  (**(code **)(*(longlong *)param_1[0x31] + 0x2c0))();
  if (*(char *)(param_3 + 2) != '\0') {
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_11c = 1;
    uStack_118 = CONCAT22(uStack_118._2_2_,0x3ff);
    local_110 = 6;
    local_130 = &PTR_FUN_14a1e3c70;
    uStack_e8 = DAT_14c8464f8;
    uStack_e0 = DAT_14c846500;
    uStack_d8 = DAT_14c846508;
    lVar7 = param_1[0x1c];
    local_100 = *(undefined8 *)(lVar7 + 0x50);
    uStack_f8 = *(undefined8 *)(lVar7 + 0x58);
    local_f0 = *(undefined8 *)(lVar7 + 0x60);
    _fStack_d0 = CONCAT44((float)(*(double *)(lVar7 + 0x70) + *(double *)(lVar7 + 0x70)),
                          (float)(*(double *)(lVar7 + 0x68) + *(double *)(lVar7 + 0x68)));
    local_c8 = (float)(*(double *)(lVar7 + 0x78) + *(double *)(lVar7 + 0x78));
    lVar7 = param_1[0x31];
    iVar4 = *(int *)(lVar7 + 0x50);
    *(uint *)(lVar7 + 0x50) = iVar4 + 1U;
    uStack_108 = (code **)&local_130;
    if (*(uint *)(lVar7 + 0x54) < iVar4 + 1U) {
      FUN_140c9d5a2((longlong *)(lVar7 + 0x48),iVar4);
    }
    lVar7 = *(longlong *)(lVar7 + 0x48);
    lVar8 = (longlong)iVar4 * 0x70;
    *(undefined ***)(lVar7 + lVar8) = &PTR_FUN_14a1dee50;
    *(undefined4 *)(lVar7 + 8 + lVar8) = uStack_128;
    *(ulonglong *)(lVar7 + 0xc + lVar8) = CONCAT44(uStack_120,uStack_124);
    *(undefined4 *)(lVar7 + 0x14 + lVar8) = uStack_11c;
    *(byte *)(lVar7 + 0x18 + lVar8) = *(byte *)(lVar7 + 0x18 + lVar8) & 0xfe | (byte)uStack_118 & 1;
    *(undefined1 *)(lVar7 + 0x19 + lVar8) = uStack_118._1_1_;
    *(undefined4 *)(lVar7 + 0x20 + lVar8) = 6;
    *(longlong *)(lVar7 + 0x28 + lVar8) = lVar7 + lVar8;
    *(undefined ***)(lVar7 + lVar8) = &PTR_FUN_14a1e3c70;
    puVar1 = (undefined4 *)(lVar7 + 0x30 + lVar8);
    *puVar1 = (undefined4)local_100;
    puVar1[1] = local_100._4_4_;
    puVar1[2] = (undefined4)uStack_f8;
    puVar1[3] = uStack_f8._4_4_;
    puVar1 = (undefined4 *)(lVar7 + 0x40 + lVar8);
    *puVar1 = (undefined4)local_f0;
    puVar1[1] = local_f0._4_4_;
    puVar1[2] = (undefined4)uStack_e8;
    puVar1[3] = uStack_e8._4_4_;
    puVar1 = (undefined4 *)(lVar7 + 0x50 + lVar8);
    *puVar1 = (undefined4)uStack_e0;
    puVar1[1] = uStack_e0._4_4_;
    puVar1[2] = (undefined4)uStack_d8;
    puVar1[3] = uStack_d8._4_4_;
    puVar1 = (undefined4 *)(lVar7 + 0x5c + lVar8);
    *puVar1 = uStack_d8._4_4_;
    puVar1[1] = fStack_d0;
    puVar1[2] = fStack_cc;
    puVar1[3] = local_c8;
    (**(code **)(*(longlong *)param_1[0x31] + 0x2a0))();
  }
  if ((bVar2 & 1) != 0) {
    if (DAT_14cad3688 == 0) {
      local_130 = (undefined **)FUN_144b223ce;
      local_140 = FUN_14081d0ea;
      local_148 = &LAB_1417963e0;
      local_158 = &LAB_147a2f4c9;
      local_160 = &LAB_1400ea6f8;
      local_168 = L"Engine";
      local_170 = 0x200000000000;
      local_178 = 0x10000004;
      local_180 = 0x10;
      local_188 = 0x720;
      local_150 = (code **)&local_130;
      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
    }
    local_188 = 0;
    FUN_146123bc0(&local_130,DAT_14cad3688,0,0);
    plVar6 = (longlong *)CONCAT44(uStack_11c,uStack_120);
    if (plVar6 != (longlong *)0x0) {
      do {
        lVar7 = *plVar6;
        if (lVar7 == 0) {
LAB_143714b6c:
          lVar7 = 0;
        }
        else {
          if (DAT_14cad3688 == 0) {
            local_138 = FUN_144b223ce;
            local_140 = FUN_14081d0ea;
            local_148 = &LAB_1417963e0;
            local_150 = &local_138;
            local_158 = &LAB_147a2f4c9;
            local_160 = &LAB_1400ea6f8;
            local_168 = L"Engine";
            local_170 = 0x200000000000;
            local_178 = 0x10000004;
            local_180 = 0x10;
            local_188 = 0x720;
            FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
          }
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cad3688 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) != DAT_14cad3688 + 0x30))
          goto LAB_143714b6c;
        }
        plVar6 = *(longlong **)(lVar7 + 0x660);
        if ((DAT_14c950c29 == '\x01') && (plVar6 != (longlong *)0x0)) {
          FUN_1456cec3c(plVar6);
        }
        if ((plVar6 == param_1) && ((*(byte *)(lVar7 + 0x9c) & 8) != 0)) {
          FUN_1406cc378(lVar7);
        }
        FUN_1427b9a5c(&local_130);
        plVar6 = (longlong *)CONCAT44(uStack_11c,uStack_120);
      } while (plVar6 != (longlong *)0x0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_130 + 6));
  }
  if (local_68 == '\x01') {
    FUN_147d5cdcc(local_c0);
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 143714d6c FUN_143714d6c body=1450 status=ok
// SIG undefined FUN_143714d6c(void)

ulonglong FUN_143714d6c(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined2 *puVar15;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  undefined1 *local_108;
  code *local_100;
  byte local_ee;
  char local_ed;
  undefined4 local_ec;
  ulonglong local_e8;
  uint local_e0;
  uint local_dc;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined2 *local_a8;
  code *local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(byte *)(param_1 + 0x195) & 2) != 0) {
    uVar10 = 0;
    if (param_3 == '\0') {
      uVar14 = (int)(*(longlong **)(param_1 + 0xe0))[1] - 1;
      if ((int)*(uint *)(param_1 + 400) < (int)uVar14) {
        uVar14 = *(uint *)(param_1 + 400);
      }
      if (0 < (int)uVar14) {
        uVar10 = (ulonglong)uVar14;
      }
    }
    lVar13 = *(longlong *)(**(longlong **)(param_1 + 0xe0) + uVar10 * 8);
    if (*(char *)(lVar13 + 0x1c8) == '\x01') {
      local_ee = *(byte *)(lVar13 + 0x1d4);
      local_e8 = *(ulonglong *)(lVar13 + 0x1b8);
      if ((local_e8 & 1) != 0) {
        local_e8 = ((longlong)local_e8 >> 0x18) + lVar13 + 0x1b8;
      }
      local_e0 = *(int *)(lVar13 + 0x1c0) / (int)((uint)local_ee * 2 + 2);
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0x80;
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      if ((*(byte *)(param_1 + 0x194) & 0x10) == 0) {
        if (DAT_14caf84d0 == (longlong *)0x0) {
          local_110 = &local_a0;
          local_a0 = FUN_1449e2820;
          local_100 = FUN_14081d0ea;
          local_108 = &LAB_145a62952;
          local_118 = &LAB_147c8cd45;
          local_120 = &LAB_1461468ae;
          local_128 = L"Engine";
          local_130 = 0;
          local_138 = 0x10000006;
          local_140 = CONCAT44(local_140._4_4_,8);
          local_148 = CONCAT44(local_148._4_4_,0x218);
          FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
        }
        plVar4 = DAT_14caf84d0;
        lVar8 = DAT_14caf84d0[0x22];
        if (lVar8 == 0) {
          (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
          lVar8 = plVar4[0x22];
        }
        if (*(char *)(lVar8 + 0x14f) == '\x01') goto LAB_143714eaa;
      }
      else {
LAB_143714eaa:
        uVar14 = *(uint *)(lVar13 + 0x108);
        iVar5 = *(int *)(param_2 + 0x38);
        *(uint *)(param_2 + 0x38) = iVar5 + uVar14;
        if ((uint)(*(int *)(param_2 + 0x3c) - iVar5) < uVar14) {
          FUN_141724806((longlong *)(param_2 + 0x30));
        }
        memset((void *)((longlong)iVar5 * 0x10 + *(longlong *)(param_2 + 0x30)),0,
               (longlong)(int)uVar14 << 4);
      }
      iVar5 = *(int *)(lVar13 + 0x38);
      if (0 < iVar5) {
        local_c8 = lVar13 + 0x10;
        lVar12 = lVar13 + 0x90;
        lVar1 = lVar13 + 0x118;
        lVar8 = param_2 + 0x30;
        local_b8 = param_2 + 0x10;
        local_d0 = (longlong *)(param_2 + 0x20);
        lVar11 = 0;
        local_ed = param_3;
        local_d8 = lVar13;
        local_b0 = lVar12;
        do {
          lVar13 = *(longlong *)(local_d8 + 0x30);
          if (*(longlong *)(local_d8 + 0x30) == 0) {
            lVar13 = local_c8;
          }
          puVar15 = (undefined2 *)(lVar11 * 0x1c + lVar13);
          local_c0 = lVar11;
          if ((local_ed != '\0') || (*(char *)(puVar15 + 10) == '\x01')) {
            uVar14 = *(uint *)(puVar15 + 2);
            local_dc = *(int *)(puVar15 + 4) * 3 + uVar14;
            if (uVar14 < local_dc) {
              do {
                local_a8 = puVar15;
                uVar10 = local_e8;
                uVar9 = uVar14 + 2;
                if (local_e0 <= uVar9) goto LAB_143715168;
                local_148 = lVar1;
                local_140 = lVar12;
                if (local_ee == 0) {
                  local_ec = FUN_143715317(*(undefined2 *)(local_e8 + (longlong)(int)uVar14 * 2),
                                           &local_98,param_2,lVar8);
                  local_148 = lVar1;
                  local_140 = lVar12;
                  uVar6 = FUN_143715317(*(undefined2 *)(uVar10 + (longlong)(int)(uVar14 + 1) * 2),
                                        &local_98,param_2,lVar8);
                  uVar9 = (uint)*(ushort *)(uVar10 + (longlong)(int)uVar9 * 2);
                }
                else {
                  local_ec = FUN_143715317(*(undefined4 *)(local_e8 + (longlong)(int)uVar14 * 4),
                                           &local_98,param_2,lVar8);
                  local_148 = lVar1;
                  local_140 = lVar12;
                  uVar6 = FUN_143715317(*(undefined4 *)(uVar10 + (longlong)(int)(uVar14 + 1) * 4),
                                        &local_98,param_2,lVar8);
                  uVar9 = *(uint *)(uVar10 + (longlong)(int)uVar9 * 4);
                }
                local_148 = lVar1;
                local_140 = lVar12;
                uVar7 = FUN_143715317(uVar9,&local_98,param_2,lVar8);
                iVar5 = *(int *)(param_2 + 0x18);
                lVar13 = (longlong)iVar5;
                *(uint *)(param_2 + 0x18) = iVar5 + 1U;
                if (*(uint *)(param_2 + 0x1c) < iVar5 + 1U) {
                  FUN_140e90710(local_b8,iVar5);
                }
                lVar12 = *(longlong *)(param_2 + 0x10);
                *(undefined4 *)(lVar12 + lVar13 * 0xc) = local_ec;
                *(undefined4 *)(lVar12 + 4 + lVar13 * 0xc) = uVar6;
                *(undefined4 *)(lVar12 + 8 + lVar13 * 0xc) = uVar7;
                uVar2 = *local_a8;
                iVar5 = *(int *)(param_2 + 0x28);
                *(uint *)(param_2 + 0x28) = iVar5 + 1U;
                if (*(uint *)(param_2 + 0x2c) < iVar5 + 1U) {
                  FUN_14488eebe(local_d0,iVar5);
                }
                *(undefined2 *)(*local_d0 + (longlong)iVar5 * 2) = uVar2;
                uVar14 = uVar14 + 3;
                lVar12 = local_b0;
                puVar15 = local_a8;
              } while (uVar14 < local_dc);
              iVar5 = *(int *)(local_d8 + 0x38);
            }
          }
          lVar11 = local_c0 + 1;
        } while (lVar11 < iVar5);
      }
      *(byte *)(param_2 + 0x40) = *(byte *)(param_2 + 0x40) | 1;
      if (*(int *)(param_2 + 8) < 1) {
LAB_143715168:
        uVar10 = 0;
      }
      else {
        uVar10 = CONCAT71((int7)((ulonglong)param_2 >> 8),0 < *(int *)(param_2 + 0x18));
      }
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar3 = uStack_90 >> 0x20;
      uStack_90 = uStack_90 & 0xffffffff00000000;
      if ((int)uVar3 != 0) {
        FUN_14472eb64(&local_98,0);
      }
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        FUN_1446efbd8(local_88,0);
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1437151e3;
    }
  }
  uVar10 = 0;
LAB_1437151e3:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 143715317 FUN_143715317 body=712 status=ok
// SIG undefined FUN_143715317(void)

int FUN_143715317(ulonglong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                 longlong param_5,longlong param_6)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  longlong *plVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  int local_a0;
  uint local_9c;
  uint *local_98;
  int *local_90;
  undefined1 local_84 [4];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_9c = (uint)param_1;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    plVar5 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[8];
    }
    iVar11 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_2[9] - 1U & local_9c) * 4);
    if (iVar11 != -1) {
      do {
        lVar8 = *param_2 + (longlong)iVar11 * 0x10;
        if (*(uint *)(*param_2 + (longlong)iVar11 * 0x10) == local_9c) {
          if (lVar8 != 0) {
            iVar11 = *(int *)(lVar8 + 4);
            goto LAB_14371559f;
          }
          break;
        }
        iVar11 = *(int *)(lVar8 + 8);
      } while (iVar11 != -1);
    }
  }
  local_c0 = param_1;
  local_b8 = param_3;
  local_b0 = param_2;
  if (0 < (int)param_4[1]) {
    local_a8 = (param_1 & 0xffffffff) * 4;
    lVar9 = 0;
    lVar8 = 0;
    do {
      if (*(char *)(param_6 + 0x80) == '\x01') {
        lVar7 = *(longlong *)(param_6 + 0x68) +
                (ulonglong)*(uint *)(param_6 + 0x78) * (param_1 & 0xffffffff) * 8;
        fVar6 = *(float *)(lVar7 + lVar8 * 8);
        fVar4 = *(float *)(lVar7 + 4 + lVar8 * 8);
      }
      else {
        lVar7 = *(longlong *)(param_6 + 0x68) + (ulonglong)*(uint *)(param_6 + 0x78) * local_a8;
        uVar1 = *(ushort *)(lVar7 + 2 + lVar8 * 4);
        uVar3 = (uint)uVar1 << 0xd;
        if ((uVar3 & 0xf800000) == 0xf800000) {
          fVar4 = (float)(uVar3 | 0x70000000);
        }
        else if ((uVar3 & 0xf800000) == 0) {
          fVar4 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar4 = (float)((uVar3 & 0xfffe000) + 0x38000000);
        }
        uVar2 = *(ushort *)(lVar7 + lVar8 * 4);
        uVar3 = (uint)uVar2 << 0xd;
        if ((uVar3 & 0xf800000) == 0xf800000) {
          fVar6 = (float)(uVar3 | 0x70000000);
        }
        else if ((uVar3 & 0xf800000) == 0) {
          fVar6 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar6 = (float)((uVar3 & 0xfffe000) + 0x38000000);
        }
        fVar4 = (float)((uint)fVar4 | (int)(short)uVar1 & 0x80000000U);
        fVar6 = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar6);
      }
      lVar7 = *param_4;
      iVar11 = *(int *)(lVar7 + 8 + lVar9);
      *(uint *)(lVar7 + 8 + lVar9) = iVar11 + 1U;
      if (*(uint *)(lVar7 + 0xc + lVar9) < iVar11 + 1U) {
        FUN_14489624a((longlong *)(lVar7 + lVar9),iVar11);
      }
      lVar7 = *(longlong *)(lVar7 + lVar9);
      *(double *)(lVar7 + (longlong)iVar11 * 0x10) = (double)fVar6;
      *(double *)(lVar7 + 8 + (longlong)iVar11 * 0x10) = (double)fVar4;
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar8 < (int)param_4[1]);
  }
  plVar5 = local_b8;
  puVar10 = (undefined8 *)
            ((ulonglong)(uint)((int)local_c0 * *(int *)(param_5 + 0x30)) +
            *(longlong *)(param_5 + 0x28));
  iVar11 = (int)local_b8[1];
  *(uint *)(local_b8 + 1) = iVar11 + 1U;
  if (*(uint *)((longlong)local_b8 + 0xc) < iVar11 + 1U) {
    FUN_140c0b6f2(local_b8,iVar11);
  }
  lVar8 = *plVar5;
  *(undefined4 *)(lVar8 + 8 + (longlong)iVar11 * 0xc) = *(undefined4 *)(puVar10 + 1);
  *(undefined8 *)(lVar8 + (longlong)iVar11 * 0xc) = *puVar10;
  local_90 = &local_a0;
  local_98 = &local_9c;
  local_a0 = iVar11;
  FUN_140263e2a(local_b0,local_84,&local_98,0);
  iVar11 = local_a0;
LAB_14371559f:
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar11;
}



// FUNCTION 1437155e0 FUN_1437155e0 body=161 status=ok
// SIG undefined FUN_1437155e0(void)

undefined8 FUN_1437155e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  lVar2 = DAT_14cb09b80;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar6 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  uVar5 = 0;
  if ((param_1 != 0) && (0 < *(int *)(lVar2 + uVar6 * 4))) {
    if ((*(longlong *)(param_1 + 0xe0) == 0) ||
       ((lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x40), *(int *)(lVar2 + 0x70) < 1 ||
        ((*(byte *)(param_1 + 0x195) & 2) != 0)))) {
      uVar5 = 0;
    }
    else {
      uVar5 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(param_1 + 0x260));
    }
  }
  return uVar5;
}



// FUNCTION 143715682 FUN_143715682 body=48 status=ok
// SIG undefined FUN_143715682(void)

longlong FUN_143715682(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140cbb210(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437156ba FUN_1437156ba body=94 status=ok
// SIG undefined FUN_1437156ba(void)

undefined8 * FUN_1437156ba(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x117;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14aabc508;
  FUN_14006e4b8(param_1 + 0x17);
  FUN_140208272(puVar1);
  if (param_2 != 0) {
    FUN_1400020a8(puVar1);
  }
  return puVar1;
}



// FUNCTION 143715724 FUN_143715724 body=67 status=ok
// SIG undefined FUN_143715724(void)

undefined8 * FUN_143715724(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x124;
  *param_1 = &PTR_LAB_14aabc518;
  FUN_14006e4b8(param_1 + 0x17);
  FUN_140064a96(puVar1);
  if (param_2 != 0) {
    FUN_1400020a8(puVar1);
  }
  return puVar1;
}



// FUNCTION 14371583e FUN_14371583e body=120 status=ok
// SIG undefined FUN_14371583e(void)

void FUN_14371583e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_6b8 [32];
  undefined1 local_698 [1656];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_6b8;
  uVar1 = *param_1;
  FUN_1407779ba(local_698,param_2,param_3,0);
  FUN_143709110(uVar1,local_698,param_1 + 2);
  FUN_140779360(local_698);
  FUN_140778010(local_698);
  if ((local_20 ^ (ulonglong)auStack_6b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437158c2 FUN_1437158c2 body=29 status=ok
// SIG undefined FUN_1437158c2(void)

void FUN_1437158c2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1437158e0 FUN_1437158e0 body=89 status=ok
// SIG undefined FUN_1437158e0(void)

undefined8 * FUN_1437158e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aabc370;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fadde(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14371593a FUN_14371593a body=282 status=ok
// SIG undefined FUN_14371593a(void)

undefined8 * FUN_14371593a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143715770);
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



// FUNCTION 143715a54 FUN_143715a54 body=222 status=ok
// SIG undefined FUN_143715a54(void)

void FUN_143715a54(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_6b8 [32];
  undefined1 local_698 [1656];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_6b8;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = param_1[0x16];
  FUN_1407779ba(local_698,&DAT_14ca85100,param_3,0);
  FUN_143709110(uVar2,local_698,param_1 + 0x18);
  FUN_140779360(local_698);
  FUN_140778010(local_698);
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fadde(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
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
  if ((local_20 ^ (ulonglong)auStack_6b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143715b4e FUN_143715b4e body=12 status=ok
// SIG undefined FUN_143715b4e(void)

void FUN_143715b4e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143715b57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143715b5a FUN_143715b5a body=29 status=ok
// SIG undefined FUN_143715b5a(void)

undefined8 FUN_143715b5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143715b78 FUN_143715b78 body=282 status=ok
// SIG undefined FUN_143715b78(void)

undefined8 * FUN_143715b78(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143715770);
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



// FUNCTION 143715c92 FUN_143715c92 body=109 status=ok
// SIG undefined FUN_143715c92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143715c92(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1411cb774(_DAT_000000a8,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1411cb774(param_1[0x15],param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143715cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143715d00 FUN_143715d00 body=72 status=ok
// SIG undefined FUN_143715d00(void)

void FUN_143715d00(longlong *param_1)

{
  (**(code **)(*(longlong *)(*param_1 + 0x10) + 0x20))
            (*param_1 + 0x10,param_1[1],(int)param_1[2],*(undefined4 *)((longlong)param_1 + 0x14),
             (int)param_1[3],*(undefined4 *)((longlong)param_1 + 0x1c),(char)param_1[4]);
  return;
}



// FUNCTION 143715d52 FUN_143715d52 body=29 status=ok
// SIG undefined FUN_143715d52(void)

void FUN_143715d52(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143715d70 FUN_143715d70 body=29 status=ok
// SIG undefined FUN_143715d70(void)

undefined8 FUN_143715d70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143715d8e FUN_143715d8e body=282 status=ok
// SIG undefined FUN_143715d8e(void)

undefined8 * FUN_143715d8e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143715770);
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



// FUNCTION 143715ea8 FUN_143715ea8 body=142 status=ok
// SIG undefined FUN_143715ea8(void)

void FUN_143715ea8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)(param_1[0x15] + 0x10) + 0x20))
            (param_1[0x15] + 0x10,param_1[0x16],*(undefined4 *)(param_1 + 0x17),
             *(undefined4 *)((longlong)param_1 + 0xbc),*(undefined4 *)(param_1 + 0x18),
             *(undefined4 *)((longlong)param_1 + 0xc4),*(undefined1 *)(param_1 + 0x19));
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143715f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143715f36 FUN_143715f36 body=129 status=ok
// SIG undefined FUN_143715f36(void)

void FUN_143715f36(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_6a8 [32];
  undefined1 local_688 [1648];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_6a8;
  FUN_1407779ba(local_688,param_1,param_3,0);
  FUN_143704760(&DAT_14cb091a0,local_688,0);
  FUN_143707282(&DAT_14cb091a0,local_688);
  FUN_140779360(local_688);
  FUN_140778010(local_688);
  if ((local_18 ^ (ulonglong)auStack_6a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143715fb8 FUN_143715fb8 body=282 status=ok
// SIG undefined FUN_143715fb8(void)

undefined8 * FUN_143715fb8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143715770);
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



// FUNCTION 1437160d2 FUN_1437160d2 body=251 status=ok
// SIG undefined FUN_1437160d2(void)

void FUN_1437160d2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_6b8 [32];
  undefined1 local_698 [1656];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_6b8;
  if (param_1 == (undefined8 *)0x0) {
    FUN_1407779ba(local_698,&DAT_14ca85100,param_3,0);
    FUN_143704760(&DAT_14cb091a0,local_698,0);
    FUN_143707282(&DAT_14cb091a0,local_698);
    FUN_140779360(local_698);
    FUN_140778010(local_698);
  }
  else {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
    FUN_1407779ba(local_698,&DAT_14ca85100,param_3,0);
    FUN_143704760(&DAT_14cb091a0,local_698,0);
    FUN_143707282(&DAT_14cb091a0,local_698);
    FUN_140779360(local_698);
    FUN_140778010(local_698);
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_6b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437161ce FUN_1437161ce body=282 status=ok
// SIG undefined FUN_1437161ce(void)

undefined8 * FUN_1437161ce(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143715770);
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



// FUNCTION 1437162e8 FUN_1437162e8 body=329 status=ok
// SIG undefined FUN_1437162e8(void)

void FUN_1437162e8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143716436 FUN_143716436 body=128 status=ok
// SIG undefined FUN_143716436(void)

void FUN_143716436(longlong *param_1,int *param_2)

{
  void *_Dst;
  undefined4 *puVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong _Size;
  
  lVar4 = (longlong)*param_2 * 0x70 + *(longlong *)(*param_1 + 0x260);
  lVar3 = 0;
  bVar2 = true;
  do {
    bVar5 = bVar2;
    _Dst = *(void **)(lVar4 + lVar3 * 8);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,*(void **)(lVar4 + 0x38 + lVar3 * 8),0x2dc);
    }
    _Size = (ulonglong)*(uint *)(lVar4 + 0x58 + lVar3 * 4);
    if (_Size != 0) {
      memcpy(*(void **)(lVar4 + 0x20 + lVar3 * 8),*(void **)(lVar4 + 0x48 + lVar3 * 8),_Size);
    }
    puVar1 = *(undefined4 **)(lVar4 + 0x10 + lVar3 * 8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(lVar4 + 0x60 + lVar3 * 4);
    }
    lVar3 = 1;
    bVar2 = false;
  } while (bVar5);
  **(undefined4 **)(lVar4 + 0x30) = *(undefined4 *)(lVar4 + 0x68);
  return;
}



// FUNCTION 1437164b6 FUN_1437164b6 body=31 status=ok
// SIG undefined FUN_1437164b6(void)

undefined8 FUN_1437164b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437164d6 FUN_1437164d6 body=31 status=ok
// SIG undefined FUN_1437164d6(void)

undefined8 FUN_1437164d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437164f6 FUN_1437164f6 body=25 status=ok
// SIG undefined FUN_1437164f6(void)

void FUN_1437164f6(void)

{
  FUN_146171fb8();
  FUN_14170c56a(&DAT_14cb09808);
  return;
}



// FUNCTION 143716510 FUN_143716510 body=29 status=ok
// SIG undefined FUN_143716510(void)

undefined8 FUN_143716510(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143716542 FUN_143716542 body=85 status=ok
// SIG undefined FUN_143716542(void)

void FUN_143716542(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aabc530;
  return;
}



// FUNCTION 143716598 FUN_143716598 body=85 status=ok
// SIG undefined FUN_143716598(void)

void FUN_143716598(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aabc530;
  return;
}



// FUNCTION 1437165ee FUN_1437165ee body=118 status=ok
// SIG undefined FUN_1437165ee(void)

void FUN_1437165ee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aabc530;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143716655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143716664 FUN_143716664 body=59 status=ok
// SIG undefined FUN_143716664(void)

void FUN_143716664(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1437166de();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437166a0 FUN_1437166a0 body=61 status=ok
// SIG undefined FUN_1437166a0(void)

undefined8 FUN_1437166a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1437166de();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437166de FUN_1437166de body=760 status=ok
// SIG undefined FUN_1437166de(void)

void FUN_1437166de(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int *piVar3;
  ulonglong uVar4;
  void *pvVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  void *local_a8;
  uint local_a0;
  undefined4 local_9c;
  uint local_98;
  void *local_90;
  uint local_88;
  uint local_80;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  piVar3 = (int *)(**(code **)(*(longlong *)*param_1 + 0x68))();
  if (*piVar3 == 1) {
    DAT_14ca96780 = 1;
    FUN_1464059a4(&local_90,0x30,0x200000);
    pvVar5 = local_90;
    local_a8 = (void *)0x0;
    lVar7 = (longlong)(int)local_88;
    local_a0 = local_88;
    if (lVar7 == 0) {
      local_9c = 0;
      uVar6 = 0;
    }
    else {
      FUN_14010590e(&local_a8,local_88,0);
      memcpy(local_a8,pvVar5,lVar7 << 3);
      uVar6 = local_88;
    }
    uVar4 = (ulonglong)local_80;
    pvVar5 = local_a8;
    local_98 = local_80;
joined_r0x0001437167c5:
    if (local_98 != uVar6) {
      uVar4 = (ulonglong)(int)uVar4;
      lVar7 = *(longlong *)((longlong)pvVar5 + uVar4 * 8);
      if (((((*(byte *)(lVar7 + 0x195) & 2) == 0) && (*(char *)(lVar7 + 0x260) == '\x01')) &&
          (plVar1 = *(longlong **)(lVar7 + 0xe0), plVar1 != (longlong *)0x0)) &&
         ((0 < *(int *)(plVar1[8] + 0x70) && (0 < (int)plVar1[1])))) {
        lVar7 = 0;
        lVar8 = 0;
        do {
          FUN_1404142d0(*(undefined8 *)(*plVar1 + lVar8 * 8));
          FUN_1417f1988(plVar1[2] + lVar7);
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x450;
        } while (lVar8 < (int)plVar1[1]);
        uVar4 = (ulonglong)(int)local_98;
        pvVar5 = local_a8;
      }
      do {
        uVar4 = uVar4 + 1;
        local_98 = (uint)uVar4;
        if ((longlong)(int)local_a0 <= (longlong)uVar4) break;
      } while (*(longlong *)((longlong)pvVar5 + uVar4 * 8) == 0);
      goto joined_r0x0001437167c5;
    }
    if (pvVar5 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_90 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_14168c6f8(&DAT_14ca966f0);
    DAT_14ca96780 = 0;
    FUN_14080c2b4();
    FUN_1464059a4(&local_90,0x30,0x200000);
    pvVar5 = local_90;
    local_a8 = (void *)0x0;
    lVar7 = (longlong)(int)local_88;
    local_a0 = local_88;
    if (lVar7 == 0) {
      local_9c = 0;
      local_88 = 0;
    }
    else {
      FUN_14010590e(&local_a8,local_88,0);
      memcpy(local_a8,pvVar5,lVar7 << 3);
    }
    uVar4 = (ulonglong)local_80;
    pvVar5 = local_a8;
    local_98 = local_80;
joined_r0x00014371690a:
    if (local_98 != local_88) {
      uVar4 = (ulonglong)(int)uVar4;
      lVar7 = *(longlong *)((longlong)pvVar5 + uVar4 * 8);
      if ((((*(byte *)(lVar7 + 0x195) & 2) == 0) && (*(char *)(lVar7 + 0x260) == '\x01')) &&
         ((plVar1 = *(longlong **)(lVar7 + 0xe0), plVar1 != (longlong *)0x0 &&
          ((0 < *(int *)(plVar1[8] + 0x70) && (0 < (int)plVar1[1])))))) {
        lVar7 = 0;
        do {
          lVar8 = *(longlong *)(*plVar1 + lVar7 * 8);
          *(undefined1 *)(lVar8 + 0x290) = 1;
          uVar2 = *(undefined8 *)(lVar8 + 0x108);
          FUN_14067fdfe(lVar8);
          FUN_143710ad6(lVar8);
          *(undefined8 *)(lVar8 + 0x108) = uVar2;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)plVar1[1]);
        uVar4 = (ulonglong)(int)local_98;
        pvVar5 = local_a8;
      }
      do {
        uVar4 = uVar4 + 1;
        local_98 = (uint)uVar4;
        if ((longlong)(int)local_a0 <= (longlong)uVar4) break;
      } while (*(longlong *)((longlong)pvVar5 + uVar4 * 8) == 0);
      goto joined_r0x00014371690a;
    }
    if (pvVar5 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_90 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_14165273a(&local_90);
  FUN_1416525c2(&local_90);
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437169d7 FUN_1437169d7 body=60 status=ok
// SIG undefined FUN_1437169d7(void)

void FUN_1437169d7(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x38);
    do {
      *(undefined8 *)(puVar1 + -8) = 0;
      *(undefined8 *)(puVar1 + -6) = 0;
      *(undefined8 *)(puVar1 + -0xc) = 0;
      *(undefined8 *)(puVar1 + -10) = 0;
      puVar1[-4] = 0;
      *(undefined ***)(puVar1 + -0xe) = &PTR_LAB_14aaba130;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143716a14 FUN_143716a14 body=667 status=ok
// SIG undefined FUN_143716a14(void)

void FUN_143716a14(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined2 local_fa;
  longlong local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  char local_eb;
  char local_ea;
  undefined1 local_e9;
  longlong local_e8;
  undefined4 local_e0;
  char local_dc;
  char local_db;
  char local_da;
  undefined1 local_d9;
  undefined8 local_98;
  longlong local_90;
  int7 iStack_88;
  undefined1 uStack_81;
  undefined8 *local_80;
  int6 iStack_78;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_98 = 0x400000000;
  local_90 = 0;
  _iStack_88 = 0;
  local_80 = (undefined8 *)0x0;
  _iStack_78 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0xffffffff;
  local_4c = 0xff;
  uVar6 = 0;
  local_4a = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  lVar3 = param_1[1];
  local_108 = lVar3 + 0x88;
  local_fb = *(undefined1 *)(lVar3 + 0xb8);
  local_100 = 0;
  local_fc = 0;
  local_fa = 3;
  local_70 = *(undefined8 *)(lVar3 + 0xa0);
  uStack_68 = *(undefined8 *)(lVar3 + 0x48);
  cVar2 = *(char *)(lVar3 + 0x81);
  local_f8 = lVar3 + 0x10;
  local_eb = cVar2 * '\b' + '\b';
  local_ea = (cVar2 != '\0') * '\t' + '\x05';
  local_f0 = 0;
  local_ec = 0;
  bVar8 = 4;
  local_e9 = 4;
  local_dc = cVar2 * '\x04' + '\x04';
  local_e0 = 0;
  local_d9 = 4;
  local_e8 = local_f8;
  local_db = local_eb;
  local_da = local_ea;
  FUN_14472d638(lVar3,*param_1,&local_108,0xffffffff);
  lVar3 = param_1[1];
  uVar5 = *(int *)(lVar3 + 0x78) - 1;
  if ((int)*(uint *)(param_1 + 2) < *(int *)(lVar3 + 0x78)) {
    uVar5 = *(uint *)(param_1 + 2);
  }
  local_4c = CONCAT11(*(undefined1 *)(lVar3 + 0x78),(char)uVar5);
  local_60 = *(undefined8 *)(lVar3 + 0x58);
  if ((-1 < (int)uVar5) && (uVar5 < *(uint *)(lVar3 + 0x78))) {
    bVar1 = *(char *)(lVar3 + 0x80) + 2;
    local_90 = lVar3 + 0x28;
    uVar4 = 0xc;
    if (*(char *)(lVar3 + 0x80) != '\0') {
      uVar4 = 2;
    }
    _iStack_88 = CONCAT17(4,(uint7)CONCAT12(uVar4,CONCAT11((char)(*(uint *)(lVar3 + 0x78) <<
                                                                 (bVar1 & 0x1f)),
                                                           (char)(uVar5 << (bVar1 & 0x1f)))) << 0x20
                         );
  }
  uVar4 = 6;
  local_80 = &DAT_14ca94d98;
  puVar7 = &DAT_14ca94db0;
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    uVar4 = 4;
    if (*(int *)(lVar3 + 0xfc) == 0) {
      bVar8 = 0;
    }
    else {
      local_80 = (undefined8 *)(lVar3 + 200);
      bVar8 = *(byte *)(lVar3 + 0xf8);
      puVar7 = (undefined8 *)(lVar3 + 0xe8);
      uVar6 = 0xffffffff;
    }
  }
  uStack_58 = *puVar7;
  _iStack_78 = CONCAT17(uVar4,CONCAT16(8,(uint6)bVar8 << 0x28));
  local_4a = *(undefined1 *)((longlong)param_1 + 0x14);
  local_50 = uVar6;
  FUN_140ba0b60(*param_1,param_2);
  (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143716cc0 FUN_143716cc0 body=29 status=ok
// SIG undefined FUN_143716cc0(void)

void FUN_143716cc0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143716cde FUN_143716cde body=29 status=ok
// SIG undefined FUN_143716cde(void)

undefined8 FUN_143716cde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143716cfc FUN_143716cfc body=282 status=ok
// SIG undefined FUN_143716cfc(void)

undefined8 * FUN_143716cfc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143715770);
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



// FUNCTION 143716e16 FUN_143716e16 body=105 status=ok
// SIG undefined FUN_143716e16(void)

void FUN_143716e16(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143716a14(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143716a14(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143716e59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143716e80 FUN_143716e80 body=51 status=ok
// SIG undefined FUN_143716e80(void)

void FUN_143716e80(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143716eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 143716ebe FUN_143716ebe body=29 status=ok
// SIG undefined FUN_143716ebe(void)

void FUN_143716ebe(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143716edc FUN_143716edc body=71 status=ok
// SIG undefined FUN_143716edc(void)

undefined8 * FUN_143716edc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aabc650;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143716f24 FUN_143716f24 body=282 status=ok
// SIG undefined FUN_143716f24(void)

undefined8 * FUN_143716f24(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143715770);
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



// FUNCTION 14371703e FUN_14371703e body=148 status=ok
// SIG undefined FUN_14371703e(void)

void FUN_14371703e(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437170c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1437170dc FUN_1437170dc body=5 status=ok
// SIG undefined FUN_1437170dc(void)

longlong FUN_1437170dc(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1437170e2 FUN_1437170e2 body=12 status=ok
// SIG undefined FUN_1437170e2(void)

void FUN_1437170e2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437170eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437170ee FUN_1437170ee body=29 status=ok
// SIG undefined FUN_1437170ee(void)

undefined8 FUN_1437170ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14371710c FUN_14371710c body=51 status=ok
// SIG undefined FUN_14371710c(void)

void FUN_14371710c(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014371713c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14371714a FUN_14371714a body=29 status=ok
// SIG undefined FUN_14371714a(void)

void FUN_14371714a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143717168 FUN_143717168 body=71 status=ok
// SIG undefined FUN_143717168(void)

undefined8 * FUN_143717168(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14aabc700;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437171b0 FUN_1437171b0 body=282 status=ok
// SIG undefined FUN_1437171b0(void)

undefined8 * FUN_1437171b0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143715770);
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



// FUNCTION 1437172ca FUN_1437172ca body=148 status=ok
// SIG undefined FUN_1437172ca(void)

void FUN_1437172ca(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143717352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143717368 FUN_143717368 body=5 status=ok
// SIG undefined FUN_143717368(void)

longlong FUN_143717368(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14371736e FUN_14371736e body=12 status=ok
// SIG undefined FUN_14371736e(void)

void FUN_14371736e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143717377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14371737a FUN_14371737a body=29 status=ok
// SIG undefined FUN_14371737a(void)

undefined8 FUN_14371737a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143717398 FUN_143717398 body=722 status=ok
// SIG undefined FUN_143717398(void)

void FUN_143717398(longlong *param_1)

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
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined6 uStack_70;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined1 local_62;
  undefined1 local_61;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined4 uStack_58;
  undefined3 uStack_54;
  undefined8 local_51;
  undefined8 uStack_49;
  undefined8 local_41;
  undefined5 uStack_39;
  undefined3 uStack_34;
  undefined5 uStack_31;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = *param_1;
  uStack_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_6a = 0;
  local_62 = 1;
  local_61 = 0;
  uStack_60 = 0;
  uStack_59 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_51 = 0;
  uStack_49 = 0;
  local_41 = 0;
  uStack_39 = 0;
  uStack_34 = 0;
  uStack_31 = 0;
  local_88 = param_1[1];
  local_80 = 0;
  FUN_147d51f26(lVar4,&local_78,&local_88,param_1 + 2);
  lVar4 = *(longlong *)(lVar4 + 0x50);
  FUN_147377468(&local_d8,&local_78);
  plVar8 = (longlong *)(lVar4 + 0x40);
  if (plVar8 != &local_d8) {
    lVar5 = *plVar8;
    *plVar8 = local_d8;
    local_d8 = 0;
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
    }
  }
  *(undefined4 *)(lVar4 + 0x48) = local_d0;
  *(undefined4 *)(lVar4 + 0x4c) = uStack_cc;
  *(undefined4 *)(lVar4 + 0x50) = uStack_c8;
  *(undefined4 *)(lVar4 + 0x54) = uStack_c4;
  FUN_140520998(lVar4 + 0x58,&local_c0);
  *(undefined4 *)(lVar4 + 0x68) = local_b0;
  *(undefined4 *)(lVar4 + 0x6c) = uStack_ac;
  *(undefined4 *)(lVar4 + 0x70) = uStack_a8;
  *(undefined4 *)(lVar4 + 0x74) = uStack_a4;
  *(undefined4 *)(lVar4 + 0x78) = local_a0;
  *(undefined4 *)(lVar4 + 0x7c) = uStack_9c;
  *(undefined4 *)(lVar4 + 0x80) = uStack_98;
  *(undefined4 *)(lVar4 + 0x84) = uStack_94;
  *(undefined4 *)(lVar4 + 0x88) = local_90;
  FUN_14005bcf4(local_c0,local_b8);
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  lVar4 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    puVar1 = (uint *)(local_d8 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_d8 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_d8 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
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
  FUN_14005bcf4(CONCAT17(uStack_59,uStack_60),uStack_58);
  if (CONCAT17(uStack_59,uStack_60) != 0) {
    FUN_1400020a8();
  }
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    puVar1 = (uint *)(local_78 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_78 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_78 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
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
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14371767c FUN_14371767c body=12 status=ok
// SIG undefined FUN_14371767c(void)

void FUN_14371767c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143717685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143717688 FUN_143717688 body=29 status=ok
// SIG undefined FUN_143717688(void)

undefined8 FUN_143717688(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437176a6 FUN_1437176a6 body=282 status=ok
// SIG undefined FUN_1437176a6(void)

undefined8 * FUN_1437176a6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143715770);
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



// FUNCTION 1437177c0 FUN_1437177c0 body=91 status=ok
// SIG undefined FUN_1437177c0(void)

void FUN_1437177c0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143717398(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143717398(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437177fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14371781c FUN_14371781c body=721 status=ok
// SIG undefined FUN_14371781c(void)

void FUN_14371781c(undefined8 *param_1)

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
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined6 uStack_70;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined1 local_62;
  undefined1 local_61;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined4 uStack_58;
  undefined3 uStack_54;
  undefined8 local_51;
  undefined8 uStack_49;
  undefined8 local_41;
  undefined5 uStack_39;
  undefined3 uStack_34;
  undefined5 uStack_31;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar8 = (longlong *)*param_1;
  uStack_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_6a = 0;
  local_62 = 1;
  local_61 = 0;
  uStack_60 = 0;
  uStack_59 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_51 = 0;
  uStack_49 = 0;
  local_41 = 0;
  uStack_39 = 0;
  uStack_34 = 0;
  uStack_31 = 0;
  local_88 = param_1[1];
  local_80 = 0;
  FUN_147d521a2(plVar8,&local_78,&local_88,param_1 + 2);
  lVar4 = *plVar8;
  FUN_147377468(&local_d8,&local_78);
  plVar8 = (longlong *)(lVar4 + 0x40);
  if (plVar8 != &local_d8) {
    lVar5 = *plVar8;
    *plVar8 = local_d8;
    local_d8 = 0;
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
    }
  }
  *(undefined4 *)(lVar4 + 0x48) = local_d0;
  *(undefined4 *)(lVar4 + 0x4c) = uStack_cc;
  *(undefined4 *)(lVar4 + 0x50) = uStack_c8;
  *(undefined4 *)(lVar4 + 0x54) = uStack_c4;
  FUN_140520998(lVar4 + 0x58,&local_c0);
  *(undefined4 *)(lVar4 + 0x68) = local_b0;
  *(undefined4 *)(lVar4 + 0x6c) = uStack_ac;
  *(undefined4 *)(lVar4 + 0x70) = uStack_a8;
  *(undefined4 *)(lVar4 + 0x74) = uStack_a4;
  *(undefined4 *)(lVar4 + 0x78) = local_a0;
  *(undefined4 *)(lVar4 + 0x7c) = uStack_9c;
  *(undefined4 *)(lVar4 + 0x80) = uStack_98;
  *(undefined4 *)(lVar4 + 0x84) = uStack_94;
  *(undefined4 *)(lVar4 + 0x88) = local_90;
  FUN_14005bcf4(local_c0,local_b8);
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  lVar4 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    puVar1 = (uint *)(local_d8 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_d8 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_d8 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
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
  FUN_14005bcf4(CONCAT17(uStack_59,uStack_60),uStack_58);
  if (CONCAT17(uStack_59,uStack_60) != 0) {
    FUN_1400020a8();
  }
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    puVar1 = (uint *)(local_78 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_78 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_78 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
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
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143717afe FUN_143717afe body=12 status=ok
// SIG undefined FUN_143717afe(void)

void FUN_143717afe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143717b07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143717b0a FUN_143717b0a body=29 status=ok
// SIG undefined FUN_143717b0a(void)

undefined8 FUN_143717b0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143717b28 FUN_143717b28 body=282 status=ok
// SIG undefined FUN_143717b28(void)

undefined8 * FUN_143717b28(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143715770);
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



// FUNCTION 143717c42 FUN_143717c42 body=91 status=ok
// SIG undefined FUN_143717c42(void)

void FUN_143717c42(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14371781c(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14371781c(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143717c7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143717c9e FUN_143717c9e body=235 status=ok
// SIG undefined FUN_143717c9e(void)

void FUN_143717c9e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint5 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  
  lVar1 = *param_1;
  uVar6 = 0;
  if (*(char *)(*(longlong *)(lVar1 + 0x48) + 0x18) == '\x01') {
    uVar6 = *(undefined1 *)(lVar1 + 0x8f);
  }
  uVar5 = (**(code **)(*DAT_14ca964f8 + 0x40))(DAT_14ca964f8,*(undefined4 *)(lVar1 + 8),uVar6);
  *(undefined4 *)(lVar1 + 0x88) = uVar5;
  plVar2 = *(longlong **)(lVar1 + 0x48);
  if (0 < (int)plVar2[1]) {
    uVar7 = 0;
    do {
      plVar3 = *(longlong **)(*plVar2 + uVar7 * 8);
      if (*(int *)(plVar3[2] + 0x7c) != 0) {
        *(undefined4 *)(*plVar3 + 0x98) = *(undefined4 *)(lVar1 + 0x88);
        uVar4 = *(uint5 *)(plVar3 + 5);
        if (((ulonglong)uVar4 != 0) || (uVar7 < *(byte *)(lVar1 + 0x8f))) {
          *(undefined1 *)(*plVar3 + 0x57) = 1;
        }
        *(char *)(*plVar3 + 0x9c) = (char)uVar7;
        (**(code **)(*(longlong *)*plVar3 + 0x18))((longlong *)*plVar3,param_2);
        if ((ulonglong)uVar4 != 0) {
          FUN_147ccd336(DAT_14ca964f8,*plVar3,plVar3 + 4,0,(int)plVar3[5]);
        }
      }
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)(int)plVar2[1]);
  }
  return;
}



// FUNCTION 143717d94 FUN_143717d94 body=12 status=ok
// SIG undefined FUN_143717d94(void)

void FUN_143717d94(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143717d9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143717da0 FUN_143717da0 body=29 status=ok
// SIG undefined FUN_143717da0(void)

undefined8 FUN_143717da0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143717dbe FUN_143717dbe body=282 status=ok
// SIG undefined FUN_143717dbe(void)

undefined8 * FUN_143717dbe(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143715770);
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



// FUNCTION 143717ed8 FUN_143717ed8 body=545 status=ok
// SIG undefined FUN_143717ed8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143717ed8(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint5 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  
  lVar2 = _DAT_000000a8;
  if (param_1 == (undefined8 *)0x0) {
    uVar7 = 0;
    if (*(char *)(*(longlong *)(_DAT_000000a8 + 0x48) + 0x18) == '\x01') {
      uVar7 = *(undefined1 *)(_DAT_000000a8 + 0x8f);
    }
    uVar6 = (**(code **)(*DAT_14ca964f8 + 0x40))
                      (DAT_14ca964f8,*(undefined4 *)(_DAT_000000a8 + 8),uVar7);
    *(undefined4 *)(lVar2 + 0x88) = uVar6;
    plVar3 = *(longlong **)(lVar2 + 0x48);
    if (0 < (int)plVar3[1]) {
      uVar8 = 0;
      do {
        plVar4 = *(longlong **)(*plVar3 + uVar8 * 8);
        if (*(int *)(plVar4[2] + 0x7c) != 0) {
          *(undefined4 *)(*plVar4 + 0x98) = *(undefined4 *)(lVar2 + 0x88);
          uVar5 = *(uint5 *)(plVar4 + 5);
          if (((ulonglong)uVar5 != 0) || (uVar8 < *(byte *)(lVar2 + 0x8f))) {
            *(undefined1 *)(*plVar4 + 0x57) = 1;
          }
          *(char *)(*plVar4 + 0x9c) = (char)uVar8;
          (**(code **)(*(longlong *)*plVar4 + 0x18))((longlong *)*plVar4,&DAT_14ca85100);
          if ((ulonglong)uVar5 != 0) {
            FUN_147ccd336(DAT_14ca964f8,*plVar4,plVar4 + 4,0,(int)plVar4[5]);
          }
        }
        uVar8 = uVar8 + 1;
      } while ((longlong)uVar8 < (longlong)(int)plVar3[1]);
    }
  }
  else {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
    lVar2 = param_1[0x15];
    uVar7 = 0;
    if (*(char *)(*(longlong *)(lVar2 + 0x48) + 0x18) == '\x01') {
      uVar7 = *(undefined1 *)(lVar2 + 0x8f);
    }
    uVar6 = (**(code **)(*DAT_14ca964f8 + 0x40))(DAT_14ca964f8,*(undefined4 *)(lVar2 + 8),uVar7);
    *(undefined4 *)(lVar2 + 0x88) = uVar6;
    plVar3 = *(longlong **)(lVar2 + 0x48);
    if (0 < (int)plVar3[1]) {
      uVar8 = 0;
      do {
        plVar4 = *(longlong **)(*plVar3 + uVar8 * 8);
        if (*(int *)(plVar4[2] + 0x7c) != 0) {
          *(undefined4 *)(*plVar4 + 0x98) = *(undefined4 *)(lVar2 + 0x88);
          uVar5 = *(uint5 *)(plVar4 + 5);
          if (((ulonglong)uVar5 != 0) || (uVar8 < *(byte *)(lVar2 + 0x8f))) {
            *(undefined1 *)(*plVar4 + 0x57) = 1;
          }
          *(char *)(*plVar4 + 0x9c) = (char)uVar8;
          (**(code **)(*(longlong *)*plVar4 + 0x18))((longlong *)*plVar4,&DAT_14ca85100);
          if ((ulonglong)uVar5 != 0) {
            FUN_147ccd336(DAT_14ca964f8,*plVar4,plVar4 + 4,0,(int)plVar4[5]);
          }
        }
        uVar8 = uVar8 + 1;
      } while ((longlong)uVar8 < (longlong)(int)plVar3[1]);
    }
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143718007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143718110 FUN_143718110 body=12 status=ok
// SIG undefined FUN_143718110(void)

void FUN_143718110(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143718119. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14371811c FUN_14371811c body=29 status=ok
// SIG undefined FUN_14371811c(void)

undefined8 FUN_14371811c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14371813a FUN_14371813a body=282 status=ok
// SIG undefined FUN_14371813a(void)

undefined8 * FUN_14371813a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143715770);
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



// FUNCTION 14371829c FUN_14371829c body=48 status=ok
// SIG undefined FUN_14371829c(void)

void FUN_14371829c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x88) != -1) {
    (**(code **)(*DAT_14ca964f8 + 0x48))();
    *(undefined4 *)(lVar1 + 0x88) = 0xffffffff;
  }
  return;
}



// FUNCTION 1437182d6 FUN_1437182d6 body=12 status=ok
// SIG undefined FUN_1437182d6(void)

void FUN_1437182d6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437182df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437182e2 FUN_1437182e2 body=29 status=ok
// SIG undefined FUN_1437182e2(void)

undefined8 FUN_1437182e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143718300 FUN_143718300 body=282 status=ok
// SIG undefined FUN_143718300(void)

undefined8 * FUN_143718300(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143715770);
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



// FUNCTION 14371841a FUN_14371841a body=107 status=ok
// SIG undefined FUN_14371841a(void)

ulonglong FUN_14371841a(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  lVar2 = param_1[0x15];
  if (*(int *)(lVar2 + 0x88) != -1) {
    uVar3 = (**(code **)(*DAT_14ca964f8 + 0x48))();
    *(undefined4 *)(lVar2 + 0x88) = 0xffffffff;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014371847a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143718486 FUN_143718486 body=328 status=ok
// SIG undefined FUN_143718486(void)

void FUN_143718486(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1437184ef;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1437184ef:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 1437185ce FUN_1437185ce body=2409 status=ok
// SIG undefined FUN_1437185ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437185ce(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined **ppuStack_a0;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  code *local_80;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14cb090a0,L"r.SparseVolumeTexture.Streaming.InstanceWindowSize",&DAT_14c761b70,
                L"Window size in SVT frames around which requests to a SVT are considered to belong to the same instance. A streaming instance is an internal book keeping object to track playback of a SVT asset in a given context. Default: 5.0"
               );
  atexit(FUN_143702c0c);
  local_a8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cb090b0,L"r.SparseVolumeTexture.Streaming.ForceEstimateFrameRate",
                &DAT_14cb090c0,
                L"Forces the streaming system to always estimate the SVT playback frame rate instead of using the explicit frame rate that is passed in with the streaming requests. Intended for debugging."
               );
  atexit(FUN_143702c51);
  local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,0x20);
  FUN_141471170(&DAT_14cb090c8,L"r.SparseVolumeTexture.Streaming.RequestSizeGranularity",
                &DAT_14c761b74,
                L"Rounds up calculated streaming request sizes to a multiple of this value (in bytes). This avoids performance issues where the system might issue multiple very small requests."
               );
  atexit(FUN_143702c96);
  FUN_1400b22c2(&local_88,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_88,&DAT_14cb090d8);
  if (cVar2 == '\0') {
    _DAT_14cb090d8 = 0;
    uRam000000014cb090e0 = 0;
  }
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_a8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cb090e8,L"r.SparseVolumeTexture.Streaming.ForceBlockingRequests",
                &DAT_14cb090f8,
                L"If enabled, all SVT streaming requests will block on completion, guaranteeing that requested mip levels are available in the same frame they have been requested in (if there is enough memory available to stream them in)."
               );
  atexit(FUN_143702cdb);
  local_a8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cb09100,L"r.SparseVolumeTexture.Streaming.AsyncThread",&DAT_14c761b78,
                L"Perform most of the SVT streaming on an asynchronous worker thread instead of the rendering thread."
               );
  atexit(FUN_143702d20);
  local_a8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cb09110,L"r.SparseVolumeTexture.Streaming.EmptyPhysicalTileTextures",
                &DAT_14cb09120,L"Streams out all streamable tiles of all physical tile textures.");
  atexit(FUN_143702d65);
  local_a8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cb09128,L"r.SparseVolumeTexture.Streaming.PrintMemoryStats",&DAT_14cb09138,
                L"Prints memory sizes of all frames of all SVTs registered with the streaming system."
               );
  atexit(FUN_143702daa);
  local_a8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cb09140,L"r.SparseVolumeTexture.Streaming.LogVerbosity",&DAT_14c761b7c,
                L"0: no logging, 1: basic logging, 2: additional logging (might spam the log) 3: log everything (will spam the log)"
               );
  atexit(FUN_143702def);
  local_a8._0_4_ = 0x24;
  FUN_141471170(&DAT_14cb09150,L"r.SparseVolumeTexture.Streaming.MaxPendingRequests",&DAT_14c761b80,
                L"Maximum number of IO requests that can be pending for installation.");
  atexit(FUN_143702e34);
  local_a8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cb09160,L"r.SparseVolumeTexture.Streaming.RequestSize",&DAT_14c761b84,
                L"IO request size in KiB. The SVT streaming manager will attempt to create IO requests of roughly this size. Default: -1 (unlimited)"
               );
  atexit(FUN_143702e79);
  local_a8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cb09170,L"r.SparseVolumeTexture.Streaming.BandwidthLimit",&DAT_14c761b88,
                L"Bandwidth limit for SVT streaming in MiB/s. When requests exceed this limit, the system will stream at lower mip levels instead."
               );
  atexit(FUN_143702ebe);
  local_a8._0_4_ = 0x20;
  FUN_141471170(&DAT_14cb09180,L"r.SparseVolumeTexture.Streaming.InstanceCleanupThreshold",
                &DAT_14c761b8c,
                L"Number of SVT streaming system updates to wait until unused streaming instances are cleaned up. A streaming instance is an internal book keeping object to track playback of a SVT asset in a given context. Default: 5"
               );
  atexit(FUN_143702f03);
  FUN_146404b9a();
  DAT_14cb09190 = &PTR_FUN_14aabc2f0;
  DAT_14cb091a0 = &PTR_FUN_14aabc320;
  FUN_146405f28();
  atexit(FUN_143702f48);
  local_a8._0_4_ = 0x24;
  FUN_141471170(&DAT_14cb09450,L"r.SparseVolumeTexture.Streaming.UseReservedResources",
                &DAT_14c761b90,
                L"Allocate the SVT tile data texture (streaming pool) as a reserved/virtual texture, backed by N small physical memory allocations to reduce fragmentation. This lifts the 2GB resource size limit and also allows for better GPU memory management when allocating the texture."
               );
  atexit(FUN_14370bab5);
  local_a8._0_4_ = 0x24;
  FUN_141471170(&DAT_14cb09460,L"r.SparseVolumeTexture.Streaming.ReservedResourcesMemoryLimit",
                &DAT_14c761b94,
                L"Memory limit in MiB on the maximum size of the streaming pool textures when using reserved resources. Without this limit it is theoretically possible to allocate enormous amounts of memory. Set to -1 to disable the limit. Default: -1"
               );
  atexit(FUN_14370bafa);
  local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,0x20);
  FUN_141471170(&DAT_14cb09470,L"r.SparseVolumeTexture.Streaming.AsyncCompute",&DAT_14c761b98,
                L"Schedule GPU work in async compute queue.");
  atexit(FUN_14370bc3d);
  local_80 = FUN_14159969c;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb09598,&local_88);
  local_80 = FUN_145bdf8ee;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb096c0,&local_88);
  local_98 = 0;
  local_a8 = (undefined8 *)0x0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aab2a60,1,0);
  local_98 = 0;
  local_a8 = (undefined8 *)0x0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aab3320,1,0);
  local_80 = FUN_145fcd36a;
  local_88 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14cb09798,&local_88);
  local_98 = 0;
  local_a8 = (undefined8 *)0x0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aab3aa0,1,0);
  ppuStack_a0 = (undefined **)0x0;
  local_98 = 0;
  local_a8 = (undefined8 *)0x3;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14aab4dc0);
  local_78 = 0;
  local_68 = &PTR_LAB_149e01e20;
  local_60 = FUN_1437164f6;
  local_88 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb09870,6,&local_88);
  local_88._0_4_ = 1;
  local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb09878,L"r.RayTracing.Geometry.SplineMeshes",&local_88,
                L"Include splines meshes in ray tracing effects (default = 1 (spline meshes enabled in ray tracing))"
               );
  atexit(FUN_14370c1f5);
  local_98 = 0;
  local_a8 = (undefined8 *)0x0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aab5d50,1,0);
  ppuStack_a0 = &PTR_FUN_14aab96e0;
  local_98 = 4;
  local_a8 = (undefined8 *)0x6;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aab9850,1,&PTR_FUN_14aab9760);
  local_88._0_4_ = 0;
  local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb09ab8,L"r.StaticMesh.StripMinLodDataDuringCooking",&local_88,
                L"If non-zero, data for Static Mesh LOD levels below MinLOD will be discarded at cook time"
               );
  atexit(FUN_14370f87a);
  local_88._0_4_ = 0;
  local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb09ad0,L"r.StaticMesh.KeepMobileMinLODSettingOnDesktop",&local_88,
                L"If non-zero, mobile setting for MinLOD will be stored in the cooked data for desktop platforms"
               );
  atexit(FUN_14370f8bf);
  local_88._0_4_ = 0;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14cb09ae8,L"r.SupportDepthOnlyIndexBuffers",&local_88,
                L"Enables depth-only index buffers. Saves a little time at the expense of doubling the size of index buffers."
               );
  atexit(FUN_14370f904);
  local_88._0_4_ = 0;
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14cb09b00,L"r.SupportReversedIndexBuffers",&local_88,
                L"Enables reversed index buffers. Saves a little time at the expense of doubling the size of index buffers."
               );
  atexit(FUN_14370f949);
  local_88 = (code *)((ulonglong)local_88._4_4_ << 0x20);
  local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,0x24);
  FUN_14078dbce(&DAT_14cb09b18,L"r.StaticMesh.StripDistanceFieldDataDuringLoad",&local_88,
                L"If non-zero, data for distance fields will be discarded on load. TODO: change to discard during cook!."
               );
  atexit(FUN_14370f98e);
  local_88 = (code *)0x0;
  local_80 = (code *)((ulonglong)local_80 & 0xffffffff00000000);
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80._0_4_ = 2;
  *(undefined ***)local_88 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_88 + 0x10) = lVar3;
  *(undefined ***)local_88 = &PTR_FUN_149e17030;
  *(code **)((longlong)local_88 + 0x18) = FUN_147d51890;
  ppuStack_a0 = (undefined **)CONCAT44(ppuStack_a0._4_4_,0x40);
  local_a8 = &local_88;
  FUN_141703554(&DAT_14cb09b30,L"r.StaticMesh.MinLodQualityLevel",&DAT_14c761b9c,
                L"The quality level for the Min stripping LOD. \n");
  if ((int)local_80 == 0) {
LAB_143718d0a:
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80._0_4_ = 0;
    goto LAB_143718d0a;
  }
  atexit(FUN_14370f9d3);
  local_88 = (code *)((ulonglong)local_88 & 0xffffffff00000000);
  local_a8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14cb09b40,L"r.Nanite.ForceEnableMeshes",&local_88,
                L"Force enables all meshes to also build Nanite data, regardless of the enabled flag on the asset."
               );
  atexit(FUN_14370fa18);
  local_88 = (code *)CONCAT71(local_88._1_7_,1);
  local_a8._0_4_ = 0;
  FUN_140bd5914(&DAT_14cb09b58,L"r.StaticMesh.DefaultMeshPaintTextureSupport",&local_88,
                L"Default setting for whether static mesh assets support mesh paint textures.");
  atexit(FUN_14370fa5d);
  local_88 = (code *)0x0;
  local_80._0_4_ = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80._0_4_ = 2;
  *(undefined ***)local_88 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_88 + 0x10) = lVar3;
  *(undefined ***)local_88 = &PTR_FUN_14aabc530;
  local_8c = 0;
  local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,0x20);
  FUN_14078dbce(&DAT_14cb09b70,L"r.StaticMesh.GbxStripFallbackMesh",&local_8c,
                L"If non-zero, data for fallback meshes will be discarded when Nanite Static Meshes are loaded."
               );
  (**(code **)(*DAT_14cb09b78 + 200))(DAT_14cb09b78,&local_88);
  if ((int)local_80 != 0) {
    if (local_88 == (code *)0x0) goto LAB_143718e79;
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80._0_4_ = 0;
  }
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143718e79:
  atexit(FUN_14370faa2);
  local_a8 = (undefined8 *)0x0;
  ppuStack_a0 = (undefined **)0x0;
  local_98 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aababe0,1,0);
  FUN_1446f470e(&DAT_14cb09ba8,L"StaticMeshComponent0",1);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143718f38 FUN_143718f38 body=1515 status=ok
// SIG undefined FUN_143718f38(void)

void FUN_143718f38(longlong param_1,longlong param_2,uint param_3,double *param_4,double *param_5,
                  undefined1 (*param_6) [16])

{
  ushort uVar1;
  ushort uVar2;
  double *pdVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  double dVar10;
  undefined8 in_XMM0_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  double dVar21;
  float fVar22;
  double dVar23;
  float fVar26;
  double dVar24;
  float fVar27;
  undefined1 auVar25 [16];
  float fVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar17 [16];
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  uVar4 = (ulonglong)(*(int *)(param_1 + 0x30) * param_3);
  dVar10 = (double)*(float *)(lVar5 + 8 + uVar4);
  dVar21 = (double)*(float *)(lVar5 + 4 + uVar4);
  dVar23 = (double)*(float *)(lVar5 + uVar4);
  dVar12 = dVar10 * param_4[9] + dVar21 * param_4[5] + dVar23 * param_4[1] + param_4[0xd];
  auVar14._0_8_ = dVar10 * param_4[10];
  auVar14._8_8_ = in_XMM0_Qb;
  dVar24 = param_4[6];
  dVar11 = param_4[2];
  dVar29 = param_4[0xe];
  auVar15._8_4_ = SUB84(dVar12,0);
  auVar15._0_8_ = dVar10 * param_4[8] + dVar21 * param_4[4] + dVar23 * *param_4 + param_4[0xc];
  auVar15._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *param_6 = auVar15;
  *(double *)param_6[1] = dVar23 * dVar11 + dVar21 * dVar24 + auVar14._0_8_ + dVar29;
  uVar4 = (ulonglong)param_3;
  if (*(char *)(param_2 + 0x81) == '\x01') {
    auVar15 = pmovsxwd(auVar14,*(undefined8 *)(*(longlong *)(param_2 + 0x60) + uVar4 * 0x10));
    auVar16._0_4_ = (float)auVar15._0_4_ * 3.051851e-05;
    auVar16._4_4_ = (float)auVar15._4_4_ * 3.051851e-05;
    auVar16._8_4_ = (float)auVar15._8_4_ * 3.051851e-05;
    auVar16._12_4_ = (float)auVar15._12_4_ * 0.0;
  }
  else {
    auVar15 = pmovsxbd(auVar14,*(undefined4 *)(*(longlong *)(param_2 + 0x60) + uVar4 * 8));
    auVar16._0_4_ = (float)auVar15._0_4_ * 0.007874016;
    auVar16._4_4_ = (float)auVar15._4_4_ * 0.007874016;
    auVar16._8_4_ = (float)auVar15._8_4_ * 0.007874016;
    auVar16._12_4_ = (float)auVar15._12_4_ * 0.0;
  }
  auVar17._8_8_ = auVar16._8_8_;
  dVar29 = (double)auVar16._8_4_;
  dVar24 = (double)auVar16._4_4_;
  dVar11 = (double)auVar16._0_4_;
  dVar10 = param_4[0xc] * 0.0 + dVar29 * param_4[8] + dVar24 * param_4[4] + dVar11 * *param_4;
  dVar21 = param_4[0xd] * 0.0 + dVar29 * param_4[9] + dVar24 * param_4[5] + dVar11 * param_4[1];
  dVar30 = 0.0;
  dVar12 = dVar11 * param_4[2] + dVar24 * param_4[6] + dVar29 * param_4[10] + param_4[0xe] * 0.0;
  dVar23 = dVar12 * dVar12 + dVar10 * dVar10 + dVar21 * dVar21;
  dVar29 = dVar21;
  dVar24 = 0.0;
  dVar11 = 0.0;
  if (9.99999993922529e-09 < dVar23) {
    dVar30 = 1.0 / SQRT(dVar23);
    dVar12 = dVar12 * dVar30;
    dVar29 = dVar21 * dVar30;
    dVar30 = dVar30 * dVar10;
    dVar24 = dVar29;
    dVar11 = dVar12;
  }
  auVar25._8_8_ = dVar21;
  auVar25._0_8_ = dVar29;
  auVar17._0_8_ = dVar12;
  *(double *)(param_6[1] + 8) = dVar30;
  *(double *)param_6[2] = dVar24;
  *(double *)(param_6[2] + 8) = dVar11;
  lVar5 = *(longlong *)(param_2 + 0x60);
  if (*(char *)(param_2 + 0x81) == '\x01') {
    auVar15 = pmovsxwd(auVar17,*(undefined8 *)(lVar5 + uVar4 * 0x10));
    fVar9 = (float)auVar15._0_4_ * 3.051851e-05;
    fVar19 = (float)auVar15._4_4_ * 3.051851e-05;
    fVar20 = (float)auVar15._8_4_ * 3.051851e-05;
    auVar15 = pmovsxwd(auVar25,*(undefined8 *)(lVar5 + 8 + uVar4 * 0x10));
    fVar22 = (float)auVar15._0_4_ * 3.051851e-05;
    fVar26 = (float)auVar15._4_4_ * 3.051851e-05;
    fVar27 = (float)auVar15._8_4_ * 3.051851e-05;
    fVar28 = (float)auVar15._12_4_ * 3.051851e-05;
  }
  else {
    auVar15 = pmovsxbd(auVar17,*(undefined4 *)(lVar5 + uVar4 * 8));
    fVar9 = (float)auVar15._0_4_ * 0.007874016;
    fVar19 = (float)auVar15._4_4_ * 0.007874016;
    fVar20 = (float)auVar15._8_4_ * 0.007874016;
    auVar15 = pmovsxbd(auVar25,*(undefined4 *)(lVar5 + 4 + uVar4 * 8));
    fVar22 = (float)auVar15._0_4_ * 0.007874016;
    fVar26 = (float)auVar15._4_4_ * 0.007874016;
    fVar27 = (float)auVar15._8_4_ * 0.007874016;
    fVar28 = (float)auVar15._12_4_ * 0.007874016;
  }
  dVar29 = (double)((fVar22 * fVar19 - fVar9 * fVar26) * fVar28);
  dVar24 = (double)((fVar27 * fVar9 - fVar22 * fVar20) * fVar28);
  dVar11 = (double)((fVar26 * fVar20 - fVar27 * fVar19) * fVar28);
  dVar12 = param_4[0xc] * 0.0 + dVar29 * param_4[8] + dVar24 * param_4[4] + dVar11 * *param_4;
  dVar10 = param_4[0xd] * 0.0 + dVar29 * param_4[9] + dVar24 * param_4[5] + dVar11 * param_4[1];
  dVar23 = 0.0;
  dVar29 = dVar11 * param_4[2] + dVar24 * param_4[6] + dVar29 * param_4[10] + param_4[0xe] * 0.0;
  dVar21 = dVar29 * dVar29 + dVar12 * dVar12 + dVar10 * dVar10;
  dVar24 = 0.0;
  dVar11 = 0.0;
  if (9.99999993922529e-09 < dVar21) {
    dVar23 = 1.0 / SQRT(dVar21);
    dVar29 = dVar29 * dVar23;
    dVar24 = dVar10 * dVar23;
    dVar23 = dVar23 * dVar12;
    dVar11 = dVar29;
  }
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar29;
  *(double *)param_6[3] = dVar23;
  *(double *)(param_6[3] + 8) = dVar24;
  *(double *)param_6[4] = dVar11;
  if (*(char *)(param_2 + 0x81) == '\x01') {
    auVar15 = pmovsxwd(auVar18,*(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8 + uVar4 * 0x10));
    auVar13._0_4_ = (float)auVar15._0_4_ * 3.051851e-05;
    auVar13._4_4_ = (float)auVar15._4_4_ * 3.051851e-05;
    auVar13._8_4_ = (float)auVar15._8_4_ * 3.051851e-05;
  }
  else {
    auVar15 = pmovsxbd(auVar18,*(undefined4 *)(*(longlong *)(param_2 + 0x60) + 4 + uVar4 * 8));
    auVar13._0_4_ = (float)auVar15._0_4_ * 0.007874016;
    auVar13._4_4_ = (float)auVar15._4_4_ * 0.007874016;
    auVar13._8_4_ = (float)auVar15._8_4_ * 0.007874016;
  }
  dVar29 = (double)auVar13._8_4_;
  dVar21 = (double)auVar13._4_4_;
  dVar11 = (double)auVar13._0_4_;
  dVar12 = param_5[0xc] * 0.0 + dVar29 * param_5[8] + dVar21 * param_5[4] + dVar11 * *param_5;
  dVar10 = param_5[0xd] * 0.0 + dVar29 * param_5[9] + dVar21 * param_5[5] + dVar11 * param_5[1];
  dVar24 = 0.0;
  dVar29 = dVar11 * param_5[2] + dVar21 * param_5[6] + dVar29 * param_5[10] + param_5[0xe] * 0.0;
  dVar23 = dVar29 * dVar29 + dVar12 * dVar12 + dVar10 * dVar10;
  dVar11 = 0.0;
  dVar21 = 0.0;
  if (9.99999993922529e-09 < dVar23) {
    dVar21 = 1.0 / SQRT(dVar23);
    dVar24 = dVar29 * dVar21;
    dVar11 = dVar10 * dVar21;
    dVar21 = dVar21 * dVar12;
  }
  *(double *)(param_6[4] + 8) = dVar21;
  *(double *)param_6[5] = dVar11;
  *(double *)(param_6[5] + 8) = dVar24;
  uVar7 = (ulonglong)*(uint *)(param_2 + 0x78);
  if (*(uint *)(param_2 + 0x78) != 0) {
    pdVar3 = (double *)(param_6[6] + 8);
    uVar8 = 0;
    do {
      if (*(char *)(param_2 + 0x80) == '\x01') {
        lVar5 = *(longlong *)(param_2 + 0x68) + uVar7 * uVar4 * 8;
        fVar19 = *(float *)(lVar5 + uVar8 * 8);
        fVar9 = *(float *)(lVar5 + 4 + uVar8 * 8);
      }
      else {
        lVar5 = *(longlong *)(param_2 + 0x68) + uVar7 * uVar4 * 4;
        uVar1 = *(ushort *)(lVar5 + 2 + uVar8 * 4);
        uVar6 = (uint)uVar1 << 0xd;
        if ((uVar6 & 0xf800000) == 0xf800000) {
          fVar9 = (float)(uVar6 | 0x70000000);
        }
        else if ((uVar6 & 0xf800000) == 0) {
          fVar9 = (float)(uVar6 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar9 = (float)((uVar6 & 0xfffe000) + 0x38000000);
        }
        uVar2 = *(ushort *)(lVar5 + uVar8 * 4);
        uVar6 = (uint)uVar2 << 0xd;
        if ((uVar6 & 0xf800000) == 0xf800000) {
          fVar19 = (float)(uVar6 | 0x70000000);
        }
        else if ((uVar6 & 0xf800000) == 0) {
          fVar19 = (float)(uVar6 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar19 = (float)((uVar6 & 0xfffe000) + 0x38000000);
        }
        fVar9 = (float)((uint)fVar9 | (int)(short)uVar1 & 0x80000000U);
        fVar19 = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar19);
      }
      *(double *)*(undefined1 (*) [16])(pdVar3 + -1) = (double)fVar19;
      *pdVar3 = (double)fVar9;
      uVar8 = uVar8 + 1;
      uVar7 = (ulonglong)*(uint *)(param_2 + 0x78);
      pdVar3 = pdVar3 + 2;
    } while (uVar8 < uVar7);
  }
  return;
}



// FUNCTION 143719524 FUN_143719524 body=598 status=ok
// SIG undefined FUN_143719524(void)

uint * FUN_143719524(longlong param_1,uint *param_2,undefined4 *param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_228 [32];
  char **local_208;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8 [4];
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_114;
  undefined4 local_e8;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined2 local_a7;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 local_94;
  undefined2 local_90;
  longlong local_68;
  undefined8 local_60;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_228;
  memset(local_1b8,0,0x100);
  local_e8 = 0xffffffff;
  local_114 = 0xffffffff;
  local_1b4 = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0a680) {
    FUN_144b3d300(&DAT_14cb0a680);
    if (DAT_14cb0a680 == -1) {
      local_b8 = "FStaticMeshStaticLightingMesh_IntersectLightRay";
      local_b0 = CONCAT35(local_b0._5_3_,0x2f);
      uVar2 = FUN_14001a6c0(&local_b8,1);
      DAT_14cb0a678 = (char *)(ulonglong)uVar2;
      _Init_thread_footer(&DAT_14cb0a680);
    }
  }
  local_208 = &local_b8;
  local_94 = 0;
  local_b0 = 0;
  local_90 = 0x101;
  local_68 = 0;
  local_60 = 0x800000000;
  local_48 = 0;
  local_40 = 0x400000000;
  local_a8 = 1;
  local_9c = 0;
  local_b8 = DAT_14cb0a678;
  local_a7 = 1;
  local_a5 = 0;
  local_98 = 0;
  local_a4 = 0x1000000;
  local_a0 = 1;
  local_1c8 = param_4[2];
  local_1d8 = *param_4;
  uStack_1d0 = param_4[1];
  local_1f8 = *param_3;
  uStack_1f4 = param_3[1];
  uStack_1f0 = param_3[2];
  uStack_1ec = param_3[3];
  local_1e8 = *(undefined8 *)(param_3 + 4);
  bVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x978))
                    (*(longlong **)(param_1 + 0x110),local_1b8);
  if (bVar1 == 0) {
    uVar3 = 0;
    uVar4 = 0x3ff00000;
    local_1a0 = 0;
    local_1a8 = 0;
    local_198 = 0;
    local_178 = 0;
    local_170 = 0;
  }
  else {
    uVar3 = (undefined4)local_168;
    uVar4 = (undefined4)((ulonglong)local_168 >> 0x20);
  }
  *param_2 = *param_2 & 0xfffffffe | (uint)bVar1;
  *(undefined8 *)(param_2 + 2) = local_1a8;
  *(undefined8 *)(param_2 + 4) = local_1a0;
  *(undefined8 *)(param_2 + 6) = local_198;
  *(undefined8 *)(param_2 + 0x14) = local_178;
  *(undefined8 *)(param_2 + 0x16) = local_170;
  *(ulonglong *)(param_2 + 0x18) = CONCAT44(uVar4,uVar3);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371977b FUN_14371977b body=93 status=ok
// SIG undefined FUN_14371977b(void)

void FUN_14371977b(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14080c2b4();
  DAT_14c761ba6 = DAT_14c761ba6 ^ 1;
  FUN_145c1aaf2(local_70);
  FUN_145c1a9d0(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437197d9 FUN_1437197d9 body=69 status=ok
// SIG undefined FUN_1437197d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437197d9(void)

{
  _DAT_14cb09dd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371981b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09dd8,1);
  return;
}



// FUNCTION 14371981e FUN_14371981e body=69 status=ok
// SIG undefined FUN_14371981e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371981e(void)

{
  _DAT_14cb09de0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143719860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09de8,1);
  return;
}



// FUNCTION 143719863 FUN_143719863 body=69 status=ok
// SIG undefined FUN_143719863(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143719863(void)

{
  _DAT_14cb09df8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437198a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09e00,1);
  return;
}



// FUNCTION 1437198a8 FUN_1437198a8 body=93 status=ok
// SIG undefined FUN_1437198a8(void)

void FUN_1437198a8(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14080c2b4();
  DAT_14c761ba5 = DAT_14c761ba5 ^ 1;
  FUN_145c1aaf2(local_70);
  FUN_145c1a9d0(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143719906 FUN_143719906 body=69 status=ok
// SIG undefined FUN_143719906(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143719906(void)

{
  _DAT_14cb09e08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143719948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09e10,1);
  return;
}



// FUNCTION 14371994b FUN_14371994b body=69 status=ok
// SIG undefined FUN_14371994b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371994b(void)

{
  _DAT_14cb09e18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371998d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09e20,1);
  return;
}



// FUNCTION 143719990 FUN_143719990 body=69 status=ok
// SIG undefined FUN_143719990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143719990(void)

{
  _DAT_14cb09e30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437199d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09e38,1);
  return;
}



// FUNCTION 1437199d5 FUN_1437199d5 body=69 status=ok
// SIG undefined FUN_1437199d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437199d5(void)

{
  _DAT_14cb09e48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143719a17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09e50,1);
  return;
}



// FUNCTION 143719a1a FUN_143719a1a body=350 status=ok
// SIG undefined FUN_143719a1a(void)

void FUN_143719a1a(longlong *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  wchar_t *pwVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_b8 [40];
  wchar_t *local_90;
  int local_88;
  ulonglong local_30;
  
  bVar2 = DAT_14cb0a8e0;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_1[1] < 1) {
    DAT_14cb0a8e0 = DAT_14cb0a8e0 ^ 1;
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    FUN_1400b22c2(&local_90,&DAT_149e377d0);
    pwVar3 = local_90;
    iVar4 = *(int *)(puVar1 + 1);
    if (iVar4 == local_88) {
      bVar5 = true;
      if (1 < iVar4) {
        iVar4 = wcscmp((wchar_t *)*puVar1,local_90);
        bVar5 = iVar4 == 0;
      }
    }
    else {
      bVar5 = local_88 + iVar4 == 1;
    }
    if (pwVar3 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar3);
    }
    if (bVar5) {
      DAT_14cb0a8e0 = 1;
    }
    else {
      puVar1 = (undefined8 *)*param_1;
      FUN_1400b22c2(&local_90,&DAT_149dfd150);
      iVar4 = *(int *)(puVar1 + 1);
      if (iVar4 == local_88) {
        bVar5 = true;
        if (1 < iVar4) {
          iVar4 = wcscmp((wchar_t *)*puVar1,local_90);
          bVar5 = iVar4 == 0;
        }
      }
      else {
        bVar5 = local_88 + iVar4 == 1;
      }
      if (local_90 != (wchar_t *)0x0) {
        FUN_1400020a8(local_90);
      }
      if (bVar5) {
        DAT_14cb0a8e0 = 0;
      }
    }
    if (bVar2 == DAT_14cb0a8e0) goto LAB_143719b51;
  }
  FUN_14165273a(&local_90);
  FUN_1416525c2(&local_90);
LAB_143719b51:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143719b79 FUN_143719b79 body=69 status=ok
// SIG undefined FUN_143719b79(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143719b79(void)

{
  _DAT_14cb09e58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143719bbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09e60,1);
  return;
}



// FUNCTION 143719bbe FUN_143719bbe body=69 status=ok
// SIG undefined FUN_143719bbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143719bbe(void)

{
  _DAT_14cb09e68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143719c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09e70,1);
  return;
}



// FUNCTION 143719c03 FUN_143719c03 body=69 status=ok
// SIG undefined FUN_143719c03(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143719c03(void)

{
  _DAT_14cb09e80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143719c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09e88,1);
  return;
}



// FUNCTION 143719c48 FUN_143719c48 body=69 status=ok
// SIG undefined FUN_143719c48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143719c48(void)

{
  _DAT_14cb09eb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143719c8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09eb8,1);
  return;
}



// FUNCTION 143719c8d FUN_143719c8d body=69 status=ok
// SIG undefined FUN_143719c8d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143719c8d(void)

{
  _DAT_14cb09ec8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143719ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb09ed0,1);
  return;
}



// FUNCTION 143719d02 FUN_143719d02 body=261 status=ok
// SIG undefined FUN_143719d02(void)

ulonglong FUN_143719d02(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 unaff_RBP;
  undefined7 uVar6;
  ulonglong uVar5;
  uint uVar7;
  longlong lVar8;
  
  lVar1 = param_1 + 0x6a8;
  uVar7 = *(uint *)(param_1 + 0x6b0);
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (param_3 < uVar7) {
    if ((int)param_3 < (int)uVar7) {
      lVar4 = (longlong)(int)param_3;
      lVar8 = lVar4 * 0xa0;
      do {
        FUN_147a2fb6e(*(longlong *)(param_1 + 0x6a8) + lVar8);
        lVar4 = lVar4 + 1;
        uVar7 = *(uint *)(param_1 + 0x6b0);
        lVar8 = lVar8 + 0xa0;
      } while (lVar4 < (int)uVar7);
    }
    uVar5 = CONCAT71(uVar6,1);
    if (uVar7 != param_3) {
      FUN_147d60cbc(lVar1,param_3);
      FUN_147d60d24(lVar1);
    }
  }
  else if (uVar7 < param_2) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (*(int *)(param_1 + 0x6b4) < (int)param_2) {
      FUN_1417c3228(lVar1,param_2);
      uVar7 = *(uint *)(param_1 + 0x6b0);
    }
    uVar5 = CONCAT71(uVar6,1);
    for (iVar3 = param_2 - uVar7; iVar3 != 0; iVar3 = iVar3 + -1) {
      iVar2 = *(int *)(param_1 + 0x6b0);
      *(uint *)(param_1 + 0x6b0) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x6b4) < iVar2 + 1U) {
        FUN_147a3af44(lVar1,iVar2);
      }
      FUN_147a31188((longlong)iVar2 * 0xa0 + *(longlong *)(param_1 + 0x6a8),param_1);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 143719e10 FUN_143719e10 body=3180 status=ok
// SIG undefined FUN_143719e10(void)

void FUN_143719e10(longlong *param_1,longlong *param_2,longlong param_3,uint param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
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
  undefined4 uVar15;
  bool bVar16;
  char cVar17;
  uint uVar18;
  undefined4 *puVar19;
  longlong *plVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  ulonglong unaff_RBP;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  bool bVar32;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  longlong local_f0;
  char local_e1;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  int local_d4;
  ulonglong local_d0;
  uint local_c8;
  int local_c4;
  longlong *local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  uint local_a0;
  int local_9c;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  int *local_78;
  longlong *local_70;
  ushort local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(byte *)((longlong)param_1 + 0x6d) & 0x40) == 0) {
    bVar32 = false;
  }
  else {
    bVar32 = (*(byte *)((longlong)param_1 + 0x6f) & 0x40) == 0;
  }
  bVar16 = true;
  if (((((*(uint *)(param_3 + 0x54) & 4) != 0) &&
       (((*(byte *)((longlong)param_1 + 0x6c) & 0x20) == 0 && (short)*(uint *)(param_3 + 0x54) < 0)
        && (~*(uint *)(param_3 + 0x50) & 0x3000) == 0)) &&
      ((*(byte *)((longlong)param_1 + 0x6c) & 0x16) == 0 &&
       (*(byte *)((longlong)param_1 + 0x77) & 0x40) == 0)) && (param_1[0x44] == 0)) {
    bVar16 = (bool)(param_1[0x45] != 0 | bVar32);
  }
  local_a0 = param_4;
  if ((bVar16) && ((*(uint *)(param_3 + 0x58) & 0x10) != 0)) {
    puVar19 = &DAT_14c760db4;
    if (*(longlong *)(param_3 + 0x40) != 0) {
      puVar19 = (undefined4 *)(*(longlong *)(param_3 + 0x40) + 8);
    }
    if (0 < (int)param_2[1]) {
      local_d8 = *puVar19;
      local_78 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
      ;
      uVar28 = 0;
      local_c0 = param_1;
      local_70 = param_2;
      do {
        local_80 = *(longlong *)(*local_70 + uVar28 * 8);
        local_d0 = uVar28;
        cVar17 = FUN_14480c900(param_1);
        if ((cVar17 != '\0') && ((local_a0 >> ((uint)local_d0 & 0x1f) & 1) != 0)) {
          FUN_1405e2456(param_1,&local_62,local_80);
          plVar20 = (longlong *)param_1[0x53];
          if (0 < (int)plVar20[1]) {
            local_c8 = (uint)local_62;
            local_90 = (ulonglong)(local_c8 & 0x7f);
            local_98 = (ulonglong)(local_62 >> 7 & 0x7f);
            local_e1 = ((local_62 >> 7 ^ local_62) & 0x7f) == 0 || (local_c8 & 0xc000) != 0x4000;
            uVar28 = 0;
            do {
              if ((local_c8 >> 0xe & 1) != 0) {
                if ((short)local_c8 < 0) {
                  if (local_90 <= uVar28 && uVar28 <= local_98) goto LAB_14371a02b;
                }
                else if (uVar28 == local_98 || uVar28 == local_90) {
LAB_14371a02b:
                  if (((longlong)*(int *)((longlong)param_1 + 0x87c) <= (longlong)uVar28) &&
                     (local_88 = *(longlong *)(*plVar20 + uVar28 * 8),
                     *(char *)(local_88 + 0x290) == '\0')) {
                    if ((*local_78 != 0x40000002) && ((*local_78 == 1 && (DAT_14c86a9f8 != '\0'))))
                    {
                      FUN_140ad26c0();
                      GetCurrentThreadId();
                    }
                    if (0 < *(int *)(local_88 + 0x38)) {
                      local_d4 = 0;
                      local_a8 = uVar28;
                      do {
                        local_9c = (**(code **)(*param_1 + 0x240))(param_1);
                        if (0 < local_9c) {
                          iVar25 = 0;
                          do {
                            local_c4 = iVar25;
                            uVar18 = *(uint *)(param_5 + 1);
                            iVar25 = (int)param_5[2];
                            uVar30 = (iVar25 + 0x44) / 0x44;
                            *(int *)(param_5 + 2) = iVar25 + 1;
                            if ((int)uVar18 < (int)uVar30) {
                              do {
                                local_e0 = uVar18;
                                lVar29 = FUN_14001cc68(0x3fc0,0x10,local_c4);
                                lVar22 = 0;
                                unaff_RBP = 0;
                                do {
                                  *(undefined8 *)(lVar29 + 0xa8 + lVar22) = 0;
                                  puVar1 = (undefined8 *)(lVar29 + 0xb8 + lVar22);
                                  *puVar1 = 0;
                                  puVar1[1] = 0;
                                  *(undefined8 *)(lVar29 + 200 + lVar22) = 0;
                                  *(undefined8 *)(lVar29 + 0xd0 + lVar22) = 0xffffffff;
                                  *(undefined8 *)(lVar29 + 0xd8 + lVar22) = 0xff0000ffffffff;
                                  *(undefined1 *)(lVar29 + 0xe0 + lVar22) = 0;
                                  *(undefined4 *)(lVar29 + 0xe4 + lVar22) = 0x40c00f07;
                                  pbVar2 = (byte *)(lVar29 + 0xe8 + lVar22);
                                  *pbVar2 = *pbVar2 & 0xfc;
                                  *(undefined1 **)(lVar29 + 0xb0 + lVar22) = &DAT_100000001;
                                  FUN_14470b9e0(lVar29 + lVar22,1);
                                  lVar22 = lVar22 + 0xf0;
                                } while (lVar22 != 0x3fc0);
                                iVar3 = (int)param_5[1];
                                *(uint *)(param_5 + 1) = iVar3 + 1U;
                                if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
                                  FUN_14002baf6(param_5,iVar3);
                                }
                                *(longlong *)(*param_5 + (longlong)iVar3 * 8) = lVar29;
                                uVar18 = local_e0 + 1;
                                param_1 = local_c0;
                                uVar28 = local_a8;
                              } while (uVar18 != uVar30);
                            }
                            lVar29 = (ulonglong)(uint)(iVar25 % 0x44) * 0xf0 +
                                     *(longlong *)(*param_5 + (longlong)(iVar25 / 0x44) * 8);
                            local_100 = 0;
                            local_108 = 0;
                            local_f8 = 1;
                            local_f0 = lVar29;
                            cVar17 = (**(code **)(*param_1 + 0x250))(param_1,uVar28 & 0xffffffff);
                            if (cVar17 != '\0') {
                              uVar18 = *(uint *)(lVar29 + 0xe4) & 0xfecfffff;
                              if (local_e1 == '\0') {
                                uVar18 = *(uint *)(lVar29 + 0xe4);
                              }
                              *(uint *)(lVar29 + 0xe4) = uVar18 & 0xffcfffff | 0x100000;
                              if (*(longlong *)(local_80 + 0x20) == 0) {
                                if ((param_1[0x44] != 0) || (param_1[0x45] != 0)) {
                                  plVar20 = (longlong *)
                                            FUN_14485b2b4(*(undefined8 *)(lVar29 + 0xc0),local_d8);
                                  uVar18 = (**(code **)(*plVar20 + 0x270))(plVar20);
                                  if (((longlong *)param_1[0x44] == (longlong *)0x0) ||
                                     (lVar22 = (**(code **)(*(longlong *)param_1[0x44] + 0x2f0))(),
                                     lVar22 == 0)) {
                                    unaff_RBP = 0;
                                  }
                                  else {
                                    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),
                                                         *(undefined1 *)
                                                          (*(longlong *)(lVar29 + 0xc0) + 0xc0)) ^ 1
                                    ;
                                  }
                                  if (((uVar18 < 2) &&
                                      ((longlong *)param_1[0x45] != (longlong *)0x0)) &&
                                     (lVar22 = (**(code **)(*(longlong *)param_1[0x45] + 0x2f0))(),
                                     lVar22 != 0)) {
                                    uVar30 = CONCAT31((int3)((uint)(iVar25 % 0x44) >> 8),
                                                      *(undefined1 *)
                                                       (*(longlong *)(lVar29 + 0xc0) + 0xc1)) ^ 1;
                                  }
                                  else {
                                    uVar30 = 0;
                                  }
                                  if ((byte)((byte)unaff_RBP | (byte)uVar30) == 1) {
                                    local_e0 = uVar18;
                                    plVar20 = (longlong *)
                                              FUN_14485b2b4(*(undefined8 *)(lVar29 + 0xc0),local_d8)
                                    ;
                                    (**(code **)(*plVar20 + 0x270))(plVar20);
                                    local_b0 = CONCAT44(local_b0._4_4_,(int)unaff_RBP);
                                    local_dc = uVar30;
                                    if ((byte)unaff_RBP == 0) {
                                      uVar26 = (ulonglong)((uVar30 & 0xff) << 5);
                                      uVar30 = 2;
                                      local_b8 = 0;
                                      uVar31 = local_d0;
                                      uVar18 = local_e0;
                                    }
                                    else {
                                      iVar25 = (int)param_5[1];
                                      iVar3 = (int)param_5[2];
                                      iVar4 = (iVar3 + 0x44) / 0x44;
                                      *(int *)(param_5 + 2) = iVar3 + 1;
                                      if (iVar25 < iVar4) {
                                        do {
                                          local_b8 = CONCAT44(local_b8._4_4_,iVar25);
                                          lVar22 = FUN_14001cc68(0x3fc0,0x10);
                                          lVar27 = 0;
                                          do {
                                            *(undefined8 *)(lVar22 + 0xa8 + lVar27) = 0;
                                            puVar1 = (undefined8 *)(lVar22 + 0xb8 + lVar27);
                                            *puVar1 = 0;
                                            puVar1[1] = 0;
                                            *(undefined8 *)(lVar22 + 200 + lVar27) = 0;
                                            *(undefined8 *)(lVar22 + 0xd0 + lVar27) = 0xffffffff;
                                            *(undefined8 *)(lVar22 + 0xd8 + lVar27) =
                                                 0xff0000ffffffff;
                                            *(undefined1 *)(lVar22 + 0xe0 + lVar27) = 0;
                                            *(undefined4 *)(lVar22 + 0xe4 + lVar27) = 0x40c00f07;
                                            pbVar2 = (byte *)(lVar22 + 0xe8 + lVar27);
                                            *pbVar2 = *pbVar2 & 0xfc;
                                            *(undefined1 **)(lVar22 + 0xb0 + lVar27) =
                                                 &DAT_100000001;
                                            FUN_14470b9e0(lVar22 + lVar27,1);
                                            lVar27 = lVar27 + 0xf0;
                                          } while (lVar27 != 0x3fc0);
                                          iVar25 = (int)param_5[1];
                                          *(uint *)(param_5 + 1) = iVar25 + 1U;
                                          if (*(uint *)((longlong)param_5 + 0xc) < iVar25 + 1U) {
                                            FUN_14002baf6(param_5,iVar25);
                                          }
                                          *(longlong *)(*param_5 + (longlong)iVar25 * 8) = lVar22;
                                          iVar25 = (int)local_b8 + 1;
                                          param_1 = local_c0;
                                        } while (iVar25 != iVar4);
                                      }
                                      uVar18 = local_e0;
                                      lVar22 = (ulonglong)(uint)(iVar3 % 0x44) * 0xf0 +
                                               *(longlong *)
                                                (*param_5 + (longlong)(iVar3 / 0x44) * 8);
                                      if (lVar22 != lVar29) {
                                        lVar27 = *(longlong *)(lVar22 + 0xa8);
                                        if (*(longlong *)(lVar22 + 0xa8) == 0) {
                                          lVar27 = lVar22;
                                        }
                                        FUN_1446fc26f(lVar27,*(undefined4 *)(lVar22 + 0xb0));
                                        iVar25 = *(int *)(lVar29 + 0xb0);
                                        lVar27 = *(longlong *)(lVar29 + 0xa8);
                                        *(int *)(lVar22 + 0xb0) = iVar25;
                                        if (iVar25 == 0 && *(int *)(lVar22 + 0xb4) == 0) {
                                          *(undefined4 *)(lVar22 + 0xb4) = 1;
                                        }
                                        else {
                                          if (lVar27 == 0) {
                                            lVar27 = lVar29;
                                          }
                                          FUN_14473945a(lVar22,iVar25);
                                          lVar23 = *(longlong *)(lVar22 + 0xa8);
                                          if (*(longlong *)(lVar22 + 0xa8) == 0) {
                                            lVar23 = lVar22;
                                          }
                                          FUN_1447393f1(lVar23,lVar27,iVar25);
                                        }
                                      }
                                      uVar5 = *(undefined4 *)(lVar29 + 0xb8);
                                      uVar6 = *(undefined4 *)(lVar29 + 0xbc);
                                      uVar7 = *(undefined4 *)(lVar29 + 0xc0);
                                      uVar8 = *(undefined4 *)(lVar29 + 0xc4);
                                      uVar9 = *(undefined4 *)(lVar29 + 200);
                                      uVar10 = *(undefined4 *)(lVar29 + 0xcc);
                                      uVar11 = *(undefined4 *)(lVar29 + 0xd0);
                                      uVar12 = *(undefined4 *)(lVar29 + 0xd4);
                                      uVar13 = *(undefined4 *)(lVar29 + 0xdc);
                                      uVar14 = *(undefined4 *)(lVar29 + 0xe0);
                                      uVar15 = *(undefined4 *)(lVar29 + 0xe4);
                                      *(undefined4 *)(lVar22 + 0xd8) =
                                           *(undefined4 *)(lVar29 + 0xd8);
                                      *(undefined4 *)(lVar22 + 0xdc) = uVar13;
                                      *(undefined4 *)(lVar22 + 0xe0) = uVar14;
                                      *(undefined4 *)(lVar22 + 0xe4) = uVar15;
                                      *(undefined1 *)(lVar22 + 0xe8) =
                                           *(undefined1 *)(lVar29 + 0xe8);
                                      *(undefined4 *)(lVar22 + 200) = uVar9;
                                      *(undefined4 *)(lVar22 + 0xcc) = uVar10;
                                      *(undefined4 *)(lVar22 + 0xd0) = uVar11;
                                      *(undefined4 *)(lVar22 + 0xd4) = uVar12;
                                      *(undefined4 *)(lVar22 + 0xb8) = uVar5;
                                      *(undefined4 *)(lVar22 + 0xbc) = uVar6;
                                      *(undefined4 *)(lVar22 + 0xc0) = uVar7;
                                      *(undefined4 *)(lVar22 + 0xc4) = uVar8;
                                      uVar30 = *(uint *)(lVar22 + 0xe4) & 0x100;
                                      if (uVar18 >= 2) {
                                        uVar30 = 0;
                                      }
                                      *(undefined1 *)(lVar22 + 0xdf) = 1;
                                      *(char *)(lVar22 + 0xe0) = (char)uVar18;
                                      uVar26 = (ulonglong)(byte)local_dc << 5;
                                      *(uint *)(lVar22 + 0xe4) =
                                           (int)uVar26 +
                                           ((uint)(uVar18 < 2) * 3 |
                                            *(uint *)(lVar22 + 0xe4) & 0xfffffec0 | uVar30) + 0x18;
                                      uVar21 = (**(code **)(*(longlong *)param_1[0x44] + 0x2f0))();
                                      uVar31 = local_d0;
                                      *(undefined8 *)(lVar22 + 0xc0) = uVar21;
                                      FUN_1436a14f8(param_5,local_d0 & 0xffffffff,lVar22);
                                      uVar30 = 0;
                                      local_b8 = 0x10;
                                      uVar28 = local_a8;
                                    }
                                    unaff_RBP = (ulonglong)uVar18;
                                    uVar24 = *(uint *)(lVar29 + 0xe4) & 0x100;
                                    if ((byte)local_b0 != 0) {
                                      uVar24 = 0;
                                    }
                                    *(undefined1 *)(lVar29 + 0xdf) = 0;
                                    *(char *)(lVar29 + 0xe0) = (char)uVar18;
                                    *(uint *)(lVar29 + 0xe4) =
                                         (uint)uVar26 | (uint)local_b8 |
                                         (byte)((byte)local_b0 ^ 1) | uVar30 |
                                         *(uint *)(lVar29 + 0xe4) & 0xfffffec0 | uVar24 | 0xc;
                                    local_b0 = uVar26;
                                    FUN_1436a14f8(param_5,uVar31 & 0xffffffff,lVar29);
                                    local_e0 = uVar18;
                                    if ((1 < uVar18) || ((char)local_dc != '\x01'))
                                    goto LAB_14371a4a2;
                                    uVar18 = *(uint *)(param_5 + 1);
                                    iVar25 = (int)param_5[2];
                                    uVar30 = (iVar25 + 0x44) / 0x44;
                                    *(int *)(param_5 + 2) = iVar25 + 1;
                                    if ((int)uVar18 < (int)uVar30) {
                                      do {
                                        local_dc = uVar18;
                                        lVar22 = FUN_14001cc68(0x3fc0,0x10);
                                        lVar27 = 0;
                                        unaff_RBP = 0;
                                        do {
                                          *(undefined8 *)(lVar22 + 0xa8 + lVar27) = 0;
                                          puVar1 = (undefined8 *)(lVar22 + 0xb8 + lVar27);
                                          *puVar1 = 0;
                                          puVar1[1] = 0;
                                          *(undefined8 *)(lVar22 + 200 + lVar27) = 0;
                                          *(undefined8 *)(lVar22 + 0xd0 + lVar27) = 0xffffffff;
                                          *(undefined8 *)(lVar22 + 0xd8 + lVar27) = 0xff0000ffffffff
                                          ;
                                          *(undefined1 *)(lVar22 + 0xe0 + lVar27) = 0;
                                          *(undefined4 *)(lVar22 + 0xe4 + lVar27) = 0x40c00f07;
                                          pbVar2 = (byte *)(lVar22 + 0xe8 + lVar27);
                                          *pbVar2 = *pbVar2 & 0xfc;
                                          *(undefined1 **)(lVar22 + 0xb0 + lVar27) = &DAT_100000001;
                                          FUN_14470b9e0(lVar22 + lVar27,1);
                                          lVar27 = lVar27 + 0xf0;
                                        } while (lVar27 != 0x3fc0);
                                        iVar3 = (int)param_5[1];
                                        *(uint *)(param_5 + 1) = iVar3 + 1U;
                                        if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
                                          FUN_14002baf6(param_5,iVar3);
                                        }
                                        *(longlong *)(*param_5 + (longlong)iVar3 * 8) = lVar22;
                                        uVar18 = local_dc + 1;
                                        param_1 = local_c0;
                                      } while (uVar18 != uVar30);
                                    }
                                    uVar18 = local_e0;
                                    lVar22 = (ulonglong)(uint)(iVar25 % 0x44) * 0xf0 +
                                             *(longlong *)(*param_5 + (longlong)(iVar25 / 0x44) * 8)
                                    ;
                                    if (lVar22 != lVar29) {
                                      lVar27 = *(longlong *)(lVar22 + 0xa8);
                                      if (*(longlong *)(lVar22 + 0xa8) == 0) {
                                        lVar27 = lVar22;
                                      }
                                      FUN_1446fc26f(lVar27,*(undefined4 *)(lVar22 + 0xb0));
                                      iVar25 = *(int *)(lVar29 + 0xb0);
                                      lVar27 = *(longlong *)(lVar29 + 0xa8);
                                      *(int *)(lVar22 + 0xb0) = iVar25;
                                      if (iVar25 == 0 && *(int *)(lVar22 + 0xb4) == 0) {
                                        *(undefined4 *)(lVar22 + 0xb4) = 1;
                                      }
                                      else {
                                        if (lVar27 == 0) {
                                          lVar27 = lVar29;
                                        }
                                        FUN_14473945a(lVar22,iVar25);
                                        lVar23 = *(longlong *)(lVar22 + 0xa8);
                                        if (*(longlong *)(lVar22 + 0xa8) == 0) {
                                          lVar23 = lVar22;
                                        }
                                        FUN_1447393f1(lVar23,lVar27,iVar25);
                                      }
                                    }
                                    uVar5 = *(undefined4 *)(lVar29 + 0xb8);
                                    uVar6 = *(undefined4 *)(lVar29 + 0xbc);
                                    uVar7 = *(undefined4 *)(lVar29 + 0xc0);
                                    uVar8 = *(undefined4 *)(lVar29 + 0xc4);
                                    uVar9 = *(undefined4 *)(lVar29 + 200);
                                    uVar10 = *(undefined4 *)(lVar29 + 0xcc);
                                    uVar11 = *(undefined4 *)(lVar29 + 0xd0);
                                    uVar12 = *(undefined4 *)(lVar29 + 0xd4);
                                    uVar13 = *(undefined4 *)(lVar29 + 0xdc);
                                    uVar14 = *(undefined4 *)(lVar29 + 0xe0);
                                    uVar15 = *(undefined4 *)(lVar29 + 0xe4);
                                    *(undefined4 *)(lVar22 + 0xd8) = *(undefined4 *)(lVar29 + 0xd8);
                                    *(undefined4 *)(lVar22 + 0xdc) = uVar13;
                                    *(undefined4 *)(lVar22 + 0xe0) = uVar14;
                                    *(undefined4 *)(lVar22 + 0xe4) = uVar15;
                                    *(undefined1 *)(lVar22 + 0xe8) = *(undefined1 *)(lVar29 + 0xe8);
                                    *(undefined4 *)(lVar22 + 200) = uVar9;
                                    *(undefined4 *)(lVar22 + 0xcc) = uVar10;
                                    *(undefined4 *)(lVar22 + 0xd0) = uVar11;
                                    *(undefined4 *)(lVar22 + 0xd4) = uVar12;
                                    *(undefined4 *)(lVar22 + 0xb8) = uVar5;
                                    *(undefined4 *)(lVar22 + 0xbc) = uVar6;
                                    *(undefined4 *)(lVar22 + 0xc0) = uVar7;
                                    *(undefined4 *)(lVar22 + 0xc4) = uVar8;
                                    *(undefined1 *)(lVar22 + 0xdf) = 2;
                                    *(char *)(lVar22 + 0xe0) = (char)uVar18;
                                    *(uint *)(lVar22 + 0xe4) =
                                         (int)local_b0 +
                                         ((uint)local_b8 | *(uint *)(lVar22 + 0xe4) & 0xfffffec0) +
                                         0xc;
                                    uVar21 = (**(code **)(*(longlong *)param_1[0x45] + 0x2f0))();
                                    *(undefined8 *)(lVar22 + 0xc0) = uVar21;
                                    lVar29 = lVar22;
                                  }
                                }
                              }
                              else if ((param_1[0x44] != 0) &&
                                      (*(char *)(*(longlong *)(lVar29 + 0xc0) + 0xc0) == '\0')) {
                                plVar20 = (longlong *)
                                          FUN_14485b2b4(*(longlong *)(lVar29 + 0xc0),local_d8);
                                uVar18 = (**(code **)(*plVar20 + 0x270))(plVar20);
                                if (1 < uVar18) goto LAB_14371a4a2;
                                if (uVar18 != 1) {
                                  uVar21 = (**(code **)(*(longlong *)param_1[0x44] + 0x2f0))();
                                  *(undefined8 *)(lVar29 + 0xc0) = uVar21;
                                }
                              }
                              FUN_1436a14f8(param_5,local_d0,lVar29);
                              uVar28 = local_a8;
                            }
LAB_14371a4a2:
                            iVar25 = local_c4 + 1;
                          } while (local_c4 + 1 != local_9c);
                        }
                        local_d4 = local_d4 + 1;
                      } while (local_d4 < *(int *)(local_88 + 0x38));
                    }
                  }
                }
              }
              uVar28 = uVar28 + 1;
              plVar20 = (longlong *)param_1[0x53];
            } while ((longlong)uVar28 < (longlong)(int)plVar20[1]);
          }
        }
        uVar28 = local_d0 + 1;
      } while ((longlong)uVar28 < (longlong)(int)local_70[1]);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14371aa90 FUN_14371aa90 body=220 status=ok
// SIG undefined FUN_14371aa90(void)

undefined8 * FUN_14371aa90(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x2cc) & 1) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x298) + 0x48);
    local_38 = (void *)0x0;
    iStack_30 = (int)plVar1[1];
    lVar3 = (longlong)iStack_30;
    uStack_2c = 0;
    uVar2 = uStack_2c;
    uStack_2c = 0;
    if (lVar3 != 0) {
      uStack_2c = uVar2;
      FUN_147cd0c7a(&local_38);
    }
    memset(local_38,0,lVar3 << 3);
    if (0 < (int)plVar1[1]) {
      lVar3 = 0;
      do {
        *(undefined8 *)((longlong)local_38 + lVar3 * 8) = **(undefined8 **)(*plVar1 + lVar3 * 8);
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)plVar1[1]);
    }
    *param_2 = local_38;
    *(int *)(param_2 + 1) = iStack_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2c;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14371ac1c FUN_14371ac1c body=144 status=ok
// SIG undefined FUN_14371ac1c(void)

undefined8 FUN_14371ac1c(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') {
    uVar1 = FUN_14001cc68(0x8c0,0x10);
    FUN_1403305c2(uVar1,param_1,0);
  }
  else {
    uVar1 = FUN_14001cc68(0x920,0x10);
    local_38 = 0;
    uStack_30 = 0;
    FUN_140c89886(uVar1,param_2,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371acad FUN_14371acad body=59 status=ok
// SIG undefined FUN_14371acad(void)

void FUN_14371acad(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb09f20;
  if (DAT_14cb09f20 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb09f20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014371acdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14371ace8 FUN_14371ace8 body=163 status=ok
// SIG undefined FUN_14371ace8(void)

undefined4 FUN_14371ace8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar2 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x90);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar2 << 0x13 | uVar2) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 0x14);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return 0;
          }
          return (int)plVar1[1];
        }
        iVar4 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 14371adaf FUN_14371adaf body=69 status=ok
// SIG undefined FUN_14371adaf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371adaf(void)

{
  _DAT_14cb0a310 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371adf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a318,1);
  return;
}



// FUNCTION 14371adf4 FUN_14371adf4 body=69 status=ok
// SIG undefined FUN_14371adf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371adf4(void)

{
  _DAT_14cb0a320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371ae36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a328,1);
  return;
}



// FUNCTION 14371ae39 FUN_14371ae39 body=69 status=ok
// SIG undefined FUN_14371ae39(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371ae39(void)

{
  _DAT_14cb0a338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371ae7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a340,1);
  return;
}



// FUNCTION 14371aeb2 FUN_14371aeb2 body=310 status=ok
// SIG undefined FUN_14371aeb2(void)

void FUN_14371aeb2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar7 = (longlong *)param_1[1];
  bVar10 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar7[1];
    uVar6 = 0;
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_14371aef2;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar6 = *param_1;
    bVar10 = false;
  }
LAB_14371aef2:
  if ((*(int *)(param_1 + 8) != 0) && (plVar8 = (longlong *)param_1[7], plVar8 != (longlong *)0x0))
  {
    if (!bVar10) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_30 = uVar6;
    local_28 = plVar7;
    (**(code **)(*plVar8 + 0x60))(plVar8,&local_30);
  }
  if (!bVar10) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((longlong)*(int *)(param_1 + 0x12) != 0) {
    plVar7 = (longlong *)param_1[0x11];
    plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x12) * 2;
    do {
      plVar3 = (longlong *)plVar7[1];
      if (plVar3 != (longlong *)0x0) {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_14371af9a;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar10 = iVar5 == iVar4;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar10);
        if (*plVar7 != 0) {
          FUN_14371aeb2();
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
LAB_14371af9a:
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar8);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14371afea FUN_14371afea body=714 status=ok
// SIG undefined FUN_14371afea(void)

void FUN_14371afea(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar9 = *(int *)(param_1 + 0x38);
  if (iVar9 == 0) {
    uVar14 = 1;
    uVar15 = 0;
    iVar8 = 0;
    iVar11 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 0x20);
    }
    uVar4 = *puVar3;
    if (uVar4 == 0) {
      iVar8 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar8 = iVar9 + -1;
      }
      uVar15 = 0;
      uVar5 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar5 = uVar15;
      }
      iVar8 = 0;
      do {
        if (uVar5 == uVar15) goto LAB_14371b100;
        iVar8 = iVar8 + 0x20;
        uVar4 = puVar3[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar15 = 0;
      iVar8 = 0;
    }
    uVar14 = (ulonglong)(-uVar4 & uVar4);
    uVar5 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar9 <= iVar11) {
      iVar11 = iVar9;
    }
  }
  if (iVar11 != iVar9) {
    uVar4 = 0xffffffff;
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,*(undefined8 *)
                          (*(longlong *)(param_1 + 0x10) + 0x20 + (longlong)iVar11 * 0x30));
      uVar4 = ~(uint)uVar14 & uVar4;
      puVar3 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x20);
      }
      iVar2 = *(int *)(param_1 + 0x38);
      iVar11 = (int)uVar15;
      lVar12 = (longlong)iVar11;
      uVar10 = puVar3[lVar12] & uVar4;
      if (uVar10 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar11) {
          iVar7 = iVar11;
        }
        if (iVar11 < iVar6) {
          lVar13 = 0;
          do {
            uVar10 = puVar3[lVar12 + lVar13 + 1];
            if (uVar10 != 0) {
              uVar15 = (ulonglong)(iVar11 + (int)lVar13 + 1);
              uVar4 = 0xffffffff;
              goto LAB_14371b0c8;
            }
            iVar8 = iVar8 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar7 - lVar12 != lVar13);
          uVar4 = 0xffffffff;
          lVar12 = (longlong)iVar7;
        }
        uVar15 = lVar12 + 1U & 0xffffffff;
        iVar11 = iVar2;
      }
      else {
LAB_14371b0c8:
        uVar14 = (ulonglong)(-uVar10 & uVar10);
        uVar5 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar11) {
          iVar11 = iVar2;
        }
      }
    } while (iVar11 != iVar9);
  }
LAB_14371b100:
  plVar1 = (longlong *)(param_1 + 0x70);
  lVar12 = param_1 + 0x80;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar9 = 0;
  local_60 = lVar12;
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(param_1 + 0x98);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar9) || (local_60 != lVar12)) {
    do {
      do {
        FUN_14475b30e(param_2,*local_90 + (longlong)iStack_74 * 0x50 + 0x40);
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (iStack_74 != iVar9);
    } while ((local_80 != lVar12) || (local_90 != plVar1));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14371b2b6 FUN_14371b2b6 body=746 status=ok
// SIG undefined FUN_14371b2b6(void)

undefined4 * FUN_14371b2b6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  void *_Dst;
  void *_Src;
  uint uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar13 = (uint)uVar2 & 0xffff;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar12 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar12) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar12 >> 4);
  uVar7 = (uVar7 >> 2) + 0x9e3779b9 +
          ((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar13 >> 4) + uVar7 * 0x40 ^ uVar7;
  uVar12 = uVar7 >> 0xd ^ -uVar7;
  uVar8 = uVar12 << 8 ^ (-0x61c88647 - uVar7) - uVar12;
  uVar7 = uVar8 >> 0xd ^ (uVar7 - uVar12) - uVar8;
  uVar12 = uVar7 >> 0xc ^ (uVar12 - uVar8) - uVar7;
  uVar8 = uVar12 << 0x10 ^ (uVar8 - uVar7) - uVar12;
  uVar14 = uVar8 >> 5 ^ (uVar7 - uVar12) - uVar8;
  uVar13 = uVar14 >> 3 ^ (uVar12 - uVar8) - uVar14;
  uVar7 = uVar13 << 10 ^ (uVar8 - uVar14) - uVar13;
  iVar6 = *(int *)(param_3 + 3);
  uVar12 = 0;
  uVar8 = iVar6 - 1;
  if (iVar6 == 0) {
    uVar8 = uVar12;
  }
  if (0 < (int)uVar8) {
    if (iVar6 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    else {
      puVar11 = (undefined2 *)param_3[2];
    }
    lVar15 = 0;
    uVar12 = 0;
    do {
      uVar9 = ((uint)(ushort)puVar11[lVar15] + (uint)(0x19 < (ushort)puVar11[lVar15] - 0x61) * 0x20)
              - 0x20;
      uVar12 = uVar12 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar12 ^ uVar9) & 0xff) * 4);
      uVar12 = uVar12 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar12 & 0xff ^ uVar9 >> 8 & 0xff) * 4);
      lVar15 = lVar15 + 1;
    } while (uVar8 != (uint)lVar15);
  }
  uVar13 = uVar12 >> 0xd ^ (uVar7 >> 0xf ^ uVar14 - (uVar13 + uVar7)) - uVar12;
  uVar7 = uVar13 << 8 ^ (-0x61c88647 - uVar12) - uVar13;
  uVar8 = uVar7 >> 0xd ^ (uVar12 - uVar13) - uVar7;
  uVar12 = uVar8 >> 0xc ^ (uVar13 - uVar7) - uVar8;
  uVar13 = uVar12 << 0x10 ^ (uVar7 - uVar8) - uVar12;
  uVar7 = uVar13 >> 5 ^ (uVar8 - uVar12) - uVar13;
  uVar8 = uVar7 >> 3 ^ (uVar12 - uVar13) - uVar7;
  uVar12 = uVar8 << 10 ^ (uVar13 - uVar7) - uVar8;
  iVar6 = FUN_143720502((longlong *)(param_1 + 0x70),uVar12 >> 0xf ^ uVar7 - (uVar8 + uVar12),
                        param_3);
  if (iVar6 != -1) {
    lVar15 = (longlong)iVar6 * 0x50 + *(longlong *)(param_1 + 0x70);
    if ((undefined4 *)(lVar15 + 0x20) != (undefined4 *)0x0 && lVar15 != 0) {
      uVar3 = *(undefined4 *)(lVar15 + 0x24);
      uVar4 = *(undefined4 *)(lVar15 + 0x28);
      uVar5 = *(undefined4 *)(lVar15 + 0x2c);
      *param_2 = *(undefined4 *)(lVar15 + 0x20);
      param_2[1] = uVar3;
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      *(undefined8 *)(param_2 + 4) = 0;
      iVar6 = *(int *)(lVar15 + 0x38);
      lVar10 = (longlong)iVar6;
      _Src = *(void **)(lVar15 + 0x30);
      param_2[6] = iVar6;
      if (lVar10 == 0) goto LAB_14371b587;
      FUN_1446dd670(param_2 + 4,iVar6,0);
      _Dst = *(void **)(param_2 + 4);
      goto LAB_14371b580;
    }
  }
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  uVar4 = *(undefined4 *)(param_3 + 1);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = *(undefined4 *)param_3;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  *(undefined8 *)(param_2 + 4) = 0;
  iVar6 = *(int *)(param_3 + 3);
  lVar10 = (longlong)iVar6;
  _Src = (void *)param_3[2];
  param_2[6] = iVar6;
  if (lVar10 == 0) {
LAB_14371b587:
    param_2[7] = 0;
    return param_2;
  }
  FUN_1446dd670(param_2 + 4,iVar6,0);
  _Dst = *(void **)(param_2 + 4);
LAB_14371b580:
  memcpy(_Dst,_Src,lVar10 * 2);
  return param_2;
}



// FUNCTION 14371b5a0 FUN_14371b5a0 body=1172 status=ok
// SIG undefined FUN_14371b5a0(void)

void FUN_14371b5a0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_3 = 0;
  if (param_4 == 0) {
    local_58 = (undefined4)*param_2;
    uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_50 = (undefined4)param_2[1];
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    if (DAT_14c927740 == 0) {
      local_b0 = &local_78;
      local_78 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_146856450;
      local_c0 = FUN_1427b121c;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10000021;
      local_e0 = 8;
      local_e8 = (longlong *)CONCAT44(local_e8._4_4_,0x28);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    lVar3 = FUN_140be8491(DAT_14c927740,&local_58,0);
  }
  else {
    lVar3 = param_2[1];
    if (DAT_14c927740 == 0) {
      local_b0 = &local_78;
      local_78 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_146856450;
      local_c0 = FUN_1427b121c;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10000021;
      local_e0 = 8;
      local_e8 = (longlong *)CONCAT44(local_e8._4_4_,0x28);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    local_e0 = 0;
    local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffff00000000);
    lVar3 = FUN_140be85e0(DAT_14c927740,param_4,lVar3,0);
  }
  if (lVar3 == 0) {
LAB_14371b6ba:
    lVar3 = *param_3;
LAB_14371b6bd:
    if (lVar3 == 0) goto LAB_14371b820;
  }
  else {
    if (1 < (int)param_2[3] || *param_2 == 0) {
      if ((int)param_2[3] < 2 || *param_2 == 0) goto LAB_14371b6ba;
      lVar4 = param_2[2];
      if (DAT_14c927740 == 0) {
        local_b0 = &local_78;
        local_78 = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b8 = &LAB_146856450;
        local_c0 = FUN_1427b121c;
        local_c8 = L"Engine";
        local_d0 = 0;
        local_d8 = 0x10000021;
        local_e0 = 8;
        local_e8 = (longlong *)CONCAT44(local_e8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar3 = FUN_140277b32(DAT_14c927740,lVar3,lVar4,0);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      *param_3 = lVar3;
      goto LAB_14371b6bd;
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
    }
    *param_3 = lVar3;
  }
  uVar1 = *(uint *)(lVar3 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
    lVar4 = FUN_140007dea();
    lVar3 = *param_3;
    if (lVar3 != 0) {
      if ((((lVar4 != 0) && (lVar2 = *(longlong *)(lVar3 + 0x10), lVar2 != 0)) &&
          (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        local_98 = (undefined4)*param_2;
        uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_90 = (undefined4)param_2[1];
        uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
        local_88 = (void *)0x0;
        local_80 = (int)param_2[3];
        lVar4 = (longlong)local_80;
        _Src = (void *)param_2[2];
        if (lVar4 == 0) {
          local_7c = 0;
        }
        else {
          FUN_1446dd670(&local_88,local_80,0);
          memcpy(local_88,_Src,lVar4 * 2);
        }
        local_e8 = param_3;
        FUN_14371ba36(param_1,&local_78,lVar3,&local_98);
        *(undefined4 *)param_2 = (undefined4)local_78;
        *(undefined4 *)((longlong)param_2 + 4) = local_78._4_4_;
        *(undefined4 *)(param_2 + 1) = uStack_70;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_6c;
        if (&local_78 == param_2) {
          if (local_68 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (param_2[2] != 0) {
            FUN_1400020a8();
          }
          param_2[2] = local_68;
          *(undefined4 *)(param_2 + 3) = local_60;
          *(undefined4 *)((longlong)param_2 + 0x1c) = local_5c;
        }
        if (*param_3 == 0) goto LAB_14371b820;
      }
      *(undefined1 *)((longlong)param_3 + 0x2d) = 0;
    }
  }
  else {
    *param_3 = 0;
  }
LAB_14371b820:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371ba36 FUN_14371ba36 body=1140 status=ok
// SIG undefined FUN_14371ba36(void)

undefined8 *
FUN_14371ba36(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined2 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined8 *local_98;
  longlong local_90;
  undefined8 *local_78;
  undefined8 **ppuStack_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  plVar1 = param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_5 == 0) {
LAB_14371bb4b:
    lVar18 = 0;
LAB_14371bb4d:
    local_78 = (undefined8 *)0x0;
    ppuStack_70 = (undefined8 **)0x0;
    FUN_1401031ac(lVar18,0,&local_78);
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    local_a0 = local_78;
    iVar9 = (int)ppuStack_70 + -1;
    if ((int)ppuStack_70 == 0) {
      iVar9 = 0;
    }
    local_98 = (undefined8 *)CONCAT44(local_98._4_4_,iVar9);
    FUN_14475bf92(param_2,&local_a0);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    FUN_147d5e65c(&local_a0,param_2,param_3);
    local_78 = param_4;
    ppuStack_70 = &local_a0;
    FUN_147d6238e(param_1 + 0x70,local_64);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    plVar1 = (longlong *)(param_1 + 0x10);
    FUN_147d627ae(plVar1,param_4);
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar12 = (uint)((ulonglong)uVar4 >> 0x10);
    uVar16 = (uint)uVar4 & 0xffff;
    uVar11 = (uint)((ulonglong)uVar3 >> 0x10);
    uVar15 = (uint)uVar3 & 0xffff;
    uVar11 = ((uint)uVar3 << 0x10 | uVar15) + (int)((ulonglong)uVar3 >> 0x20) +
             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar15 >> 4);
    uVar11 = (uVar11 >> 2) + 0x9e3779b9 +
             ((uint)uVar4 << 0x10 | uVar16) + (int)((ulonglong)uVar4 >> 0x20) +
             (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar16 >> 4) + uVar11 * 0x40 ^ uVar11;
    uVar15 = uVar11 >> 0xd ^ -uVar11;
    uVar12 = uVar15 << 8 ^ (-0x61c88647 - uVar11) - uVar15;
    uVar11 = uVar12 >> 0xd ^ (uVar11 - uVar15) - uVar12;
    uVar15 = uVar11 >> 0xc ^ (uVar15 - uVar12) - uVar11;
    uVar12 = uVar15 << 0x10 ^ (uVar12 - uVar11) - uVar15;
    uVar17 = uVar12 >> 5 ^ (uVar11 - uVar15) - uVar12;
    uVar16 = uVar17 >> 3 ^ (uVar15 - uVar12) - uVar17;
    uVar11 = uVar16 << 10 ^ (uVar12 - uVar17) - uVar16;
    iVar9 = *(int *)(param_2 + 3);
    uVar15 = 0;
    uVar12 = iVar9 - 1;
    if (iVar9 == 0) {
      uVar12 = uVar15;
    }
    if (0 < (int)uVar12) {
      if (iVar9 == 0) {
        puVar14 = &DAT_149dfb77a;
      }
      else {
        puVar14 = (undefined2 *)param_2[2];
      }
      lVar18 = 0;
      uVar15 = 0;
      do {
        uVar13 = ((uint)(ushort)puVar14[lVar18] +
                 (uint)(0x19 < (ushort)puVar14[lVar18] - 0x61) * 0x20) - 0x20;
        uVar15 = uVar15 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar15 ^ uVar13) & 0xff) * 4)
        ;
        uVar15 = uVar15 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar13 >> 8 & 0xff) * 4);
        lVar18 = lVar18 + 1;
      } while (uVar12 != (uint)lVar18);
    }
    uVar16 = uVar15 >> 0xd ^ (uVar11 >> 0xf ^ uVar17 - (uVar16 + uVar11)) - uVar15;
    uVar11 = uVar16 << 8 ^ (-0x61c88647 - uVar15) - uVar16;
    uVar12 = uVar11 >> 0xd ^ (uVar15 - uVar16) - uVar11;
    uVar15 = uVar12 >> 0xc ^ (uVar16 - uVar11) - uVar12;
    uVar16 = uVar15 << 0x10 ^ (uVar11 - uVar12) - uVar15;
    uVar11 = uVar16 >> 5 ^ (uVar12 - uVar15) - uVar16;
    uVar12 = uVar11 >> 3 ^ (uVar15 - uVar16) - uVar11;
    uVar15 = uVar12 << 10 ^ (uVar16 - uVar11) - uVar12;
    iVar9 = FUN_1448b08d8(plVar1,uVar15 >> 0xf ^ uVar11 - (uVar12 + uVar15),param_2);
    plVar8 = param_5;
    if ((iVar9 != -1) &&
       (lVar18 = (longlong)iVar9 * 0x30 + *plVar1, plVar19 = (longlong *)(lVar18 + 0x20),
       plVar19 != (longlong *)0x0 && lVar18 != 0)) {
      FUN_147d5e6dc(param_5 + 3,*plVar19 + 0x18);
      FUN_147d5e73e(plVar8 + 1,*plVar19 + 8);
      iVar9 = *(int *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x68) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x6c) < iVar9 + 1U) {
        FUN_143720574((longlong *)(param_1 + 0x60),iVar9);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar9 * 8) = *plVar19;
    }
    local_98 = &param_5;
    local_a0 = param_2;
    FUN_147d6291a(plVar1,&local_78);
    if (param_4[2] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    do {
      lVar10 = FUN_140007dea();
      lVar18 = *plVar1;
      if (lVar18 == 0) goto LAB_14371bb4b;
      if ((((lVar10 == 0) || (lVar2 = *(longlong *)(lVar18 + 0x10), lVar2 == 0)) ||
          (*(int *)(lVar2 + 0x38) < *(int *)(lVar10 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
          lVar10 + 0x30)) goto LAB_14371bb4d;
      lVar18 = *(longlong *)(lVar18 + 0x28);
      if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar18);
      }
      *plVar1 = lVar18;
    } while (lVar18 != 0);
    *(undefined1 *)((longlong)plVar1 + 0x2d) = 1;
    uVar5 = *(undefined4 *)((longlong)param_4 + 4);
    uVar6 = *(undefined4 *)(param_4 + 1);
    uVar7 = *(undefined4 *)((longlong)param_4 + 0xc);
    *(undefined4 *)param_2 = *(undefined4 *)param_4;
    *(undefined4 *)((longlong)param_2 + 4) = uVar5;
    *(undefined4 *)(param_2 + 1) = uVar6;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
    param_2[2] = param_4[2];
    param_4[2] = 0;
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_4 + 3);
    *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)((longlong)param_4 + 0x1c);
    param_4[3] = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371beac FUN_14371beac body=197 status=ok
// SIG undefined FUN_14371beac(void)

void FUN_14371beac(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  cVar5 = FUN_147d5e546(0,param_2,&local_38);
  uVar6 = uStack_30 & 0xffffffff;
  if (cVar5 != '\0') {
    if ((int)uStack_30 == 0) {
      uVar6 = 0;
    }
    else {
      puVar7 = local_38 + (longlong)(int)uStack_30 * 2;
      puVar8 = local_38;
      do {
        uVar3 = *puVar8;
        plVar4 = (longlong *)puVar8[1];
        if (plVar4 == (longlong *)0x0) {
          FUN_1401a5e92(uVar3);
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          FUN_1401a5e92(uVar3);
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
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar7);
      uVar6 = uStack_30 & 0xffffffff;
    }
  }
  FUN_144936a5c(local_38,uVar6);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371bf72 FUN_14371bf72 body=117 status=ok
// SIG undefined FUN_14371bf72(void)

void FUN_14371bf72(longlong *param_1,float param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  if (uVar1 < 0x20 && param_3 != 0) {
    *(byte *)((longlong)param_1 + 0xbc) =
         *(byte *)((longlong)param_1 + 0xbc) & 0xdf |
         ((*(uint *)(&DAT_149e24fa0 + (ulonglong)uVar1 * 4) & param_3) != 0) << 5;
  }
  else {
    *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) & 0xdf;
  }
  param_1[8] = (longlong)((double)param_2 + DAT_14c866ff8);
  return;
}



// FUNCTION 14371bfe7 FUN_14371bfe7 body=69 status=ok
// SIG undefined FUN_14371bfe7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371bfe7(void)

{
  _DAT_14cb0a3b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371c029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a3b8,1);
  return;
}



// FUNCTION 14371c02c FUN_14371c02c body=35 status=ok
// SIG undefined FUN_14371c02c(void)

ulonglong FUN_14371c02c(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0xc0);
  if ((uVar1 & 1) != 0) {
    return (ulonglong)
           ((int)(((uint)(uVar1 >> 0x18) & 0xff) - *(int *)(param_1 + 0x48)) <=
           (int)((uint)(uVar1 >> 0x28) & 0xff));
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}



// FUNCTION 14371c050 FUN_14371c050 body=110 status=ok
// SIG undefined FUN_14371c050(void)

void FUN_14371c050(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1402bfec4();
  while (cVar1 != '\0') {
    FUN_1400980f0(param_1,param_3,0);
    FUN_14080c2b4();
    cVar1 = FUN_1402bfec4(param_1,param_2);
    if (cVar1 != '\0') {
      FUN_14000f986(0x3c23d70a);
    }
    cVar1 = FUN_1402bfec4(param_1,param_2);
  }
  return;
}



// FUNCTION 14371c0be FUN_14371c0be body=305 status=ok
// SIG undefined FUN_14371c0be(void)

undefined4 FUN_14371c0be(undefined8 param_1,int param_2,int *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined1 auStack_108 [40];
  undefined **local_e0 [5];
  byte local_b8;
  longlong *local_88;
  longlong local_68;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  memset(local_e0,0,0x90);
  FUN_144869430(local_e0);
  local_50 = 0;
  local_e0[0] = &PTR_FUN_149e1ddc0;
  local_38 = 0x7fffffffffffffff;
  local_b8 = local_b8 | 1;
  local_48 = param_1;
  local_40 = (longlong)param_2;
  FUN_1449c2eca(local_e0,0);
  FUN_147d5ed54(param_4,*(undefined1 *)(param_4 + 8));
  uVar1 = FUN_147d5ee70(param_4,local_e0);
  if ((char)uVar1 != '\0') {
    *param_3 = *param_3 + (int)local_50;
  }
  local_e0[0] = &PTR__purecall_149e35f70;
  if (local_88 != (longlong *)0x0) {
    if (*local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_88);
  }
  if (local_68 != 0) {
    if (*(longlong *)(local_68 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_68);
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371c1f0 FUN_14371c1f0 body=69 status=ok
// SIG undefined FUN_14371c1f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371c1f0(void)

{
  _DAT_14cb0a3f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371c232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a3f8,1);
  return;
}



// FUNCTION 14371c235 FUN_14371c235 body=69 status=ok
// SIG undefined FUN_14371c235(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371c235(void)

{
  _DAT_14cb0a408 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371c277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a410,1);
  return;
}



// FUNCTION 14371c27a FUN_14371c27a body=69 status=ok
// SIG undefined FUN_14371c27a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371c27a(void)

{
  _DAT_14cb0a418 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371c2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a420,1);
  return;
}



// FUNCTION 14371c2bf FUN_14371c2bf body=69 status=ok
// SIG undefined FUN_14371c2bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371c2bf(void)

{
  _DAT_14cb0a428 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371c301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a430,1);
  return;
}



// FUNCTION 14371c304 FUN_14371c304 body=267 status=ok
// SIG undefined FUN_14371c304(void)

void FUN_14371c304(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68 [10];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(param_2 + 0x18) = uVar6;
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(undefined8 *)(lVar3 + 0x18) = uVar5;
  local_68[2] = *(undefined8 *)(param_2 + 0x30);
  local_68[0] = *(undefined8 *)(param_2 + 0x20);
  local_68[1] = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(param_2 + 0x28) = uVar4;
  *(undefined8 *)(lVar3 + 0x30) = local_68[2];
  *(undefined8 *)(lVar3 + 0x20) = local_68[0];
  *(undefined8 *)(lVar3 + 0x28) = local_68[1];
  puVar8 = (undefined8 *)(param_2 + 0x38);
  puVar9 = local_68;
  for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = (undefined8 *)(lVar3 + 0x38);
  puVar9 = (undefined8 *)(param_2 + 0x38);
  for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = local_68;
  puVar9 = (undefined8 *)(lVar3 + 0x38);
  for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)(lVar3 + 0x128);
  *(undefined4 *)(lVar3 + 0x128) = uVar2;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x30) = param_2;
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371c424 FUN_14371c424 body=49 status=ok
// SIG undefined FUN_14371c424(void)

void FUN_14371c424(void)

{
  FUN_144760e21(DAT_14cb0a918,DAT_14cb0a920);
  if (DAT_14cb0a918 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14371c455 FUN_14371c455 body=49 status=ok
// SIG undefined FUN_14371c455(void)

void FUN_14371c455(void)

{
  FUN_144760e21(DAT_14cb0a930,DAT_14cb0a938);
  if (DAT_14cb0a930 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14371c486 FUN_14371c486 body=49 status=ok
// SIG undefined FUN_14371c486(void)

void FUN_14371c486(void)

{
  FUN_144760e21(DAT_14cb0a8e8,DAT_14cb0a8f0);
  if (DAT_14cb0a8e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14371c4b7 FUN_14371c4b7 body=49 status=ok
// SIG undefined FUN_14371c4b7(void)

void FUN_14371c4b7(void)

{
  FUN_144760e21(DAT_14cb0a900,DAT_14cb0a908);
  if (DAT_14cb0a900 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14371c4e8 FUN_14371c4e8 body=72 status=ok
// SIG undefined FUN_14371c4e8(void)

byte FUN_14371c4e8(longlong *param_1,int param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if ((char)param_1[8] == '\x06') {
    bVar1 = 0;
  }
  else if ((*(byte *)(*param_1 + 0x240) & 0x20) == 0) {
    bVar1 = 0 < param_2 && (char)param_1[8] != '\x05';
  }
  else {
    uVar2 = FUN_140083894();
    bVar1 = FUN_1434a2020(uVar2);
    bVar1 = 0 < param_2 | bVar1;
  }
  return bVar1;
}



// FUNCTION 14371c530 FUN_14371c530 body=69 status=ok
// SIG undefined FUN_14371c530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371c530(void)

{
  _DAT_14cb0a440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371c572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a448,1);
  return;
}



// FUNCTION 14371c575 FUN_14371c575 body=69 status=ok
// SIG undefined FUN_14371c575(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371c575(void)

{
  _DAT_14cb0a450 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371c5b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a458,1);
  return;
}



// FUNCTION 14371c5ba FUN_14371c5ba body=759 status=ok
// SIG undefined FUN_14371c5ba(void)

void FUN_14371c5ba(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  float fVar10;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  int local_98;
  uint local_90;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  LOCK();
  iVar6 = DAT_14cb0a468 + 1;
  UNLOCK();
  bVar9 = DAT_14cb0a468 == 0;
  DAT_14cb0a468 = iVar6;
  if (bVar9) {
    local_88 = 0;
    uStack_80 = 0;
    bVar9 = false;
    FUN_1463c069e(&local_a0,0x10,1,0);
    uVar7 = (ulonglong)local_90;
    if ((-1 < (int)local_90) && ((int)local_90 < local_98)) {
      bVar9 = false;
      do {
        lVar1 = *(longlong *)(local_a0 + (uVar7 & 0xffffffff) * 8);
        if (((lVar1 != 0) && (*(int *)(lVar1 + 0xb8) != -1)) &&
           (cVar2 = FUN_1402bfec4(lVar1,0), uVar7 = uStack_80, cVar2 != '\0')) {
          bVar9 = true;
          if ((*(longlong *)(lVar1 + 0x38) != 0) &&
             (*(int *)(*(longlong *)(lVar1 + 0x38) + 0x60) == 3)) {
            lVar5 = (longlong)(int)(uint)uStack_80;
            uVar3 = (uint)uStack_80 + 1;
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar3);
            if (uStack_80._4_4_ < uVar3) {
              FUN_1457372d6(&local_88,uVar7 & 0xffffffff);
            }
            *(longlong *)(local_88 + lVar5 * 8) = lVar1;
          }
        }
        uVar7 = (longlong)(int)local_90;
        do {
          uVar8 = uVar7;
          uVar7 = uVar8 + 1;
          local_90 = (uint)uVar7;
          if ((longlong)local_98 <= (longlong)uVar7) break;
        } while (*(longlong *)(local_a0 + uVar7 * 8) == 0);
      } while ((-2 < (longlong)uVar8) && ((int)local_90 < local_98));
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    if ((uint)uStack_80 != 0) {
      fVar10 = DAT_14c761bb8;
      uVar3 = (uint)uStack_80;
      if (!NAN(DAT_14c761bb8)) {
        do {
          FUN_14000f986(0x3c23d70a);
          FUN_14080c2b4();
          fVar10 = fVar10 + -0.01;
          if (0 < (int)(uint)uStack_80) {
            uVar3 = 0;
            do {
              lVar1 = *(longlong *)(local_88 + (longlong)(int)uVar3 * 8);
              uVar4 = (uint)uStack_80;
              if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 == 0)) {
LAB_14371c7da:
                iVar6 = ~uVar3 + uVar4;
                if (iVar6 != 0) {
                  if (0 < iVar6) {
                    iVar6 = 1;
                  }
                  memmove((void *)(local_88 + (longlong)(int)uVar3 * 8),
                          (void *)(local_88 + (longlong)(int)(uVar4 - iVar6) * 8),
                          (longlong)iVar6 << 3);
                  uVar4 = (uint)uStack_80;
                }
                uStack_80 = CONCAT44(uStack_80._4_4_,uVar4 - 1);
                FUN_147d6381e(&local_88);
                uVar3 = uVar3 - 1;
              }
              else if (*(int *)(lVar1 + 0x60) != 3) {
                uVar4 = (uint)uStack_80;
                goto LAB_14371c7da;
              }
              uVar3 = uVar3 + 1;
            } while ((int)uVar3 < (int)(uint)uStack_80);
          }
          if ((uint)uStack_80 == 0) goto LAB_14371c87a;
        } while ((0.0 < fVar10) || (uVar3 = (uint)uStack_80, DAT_14c761bb8 <= 0.0));
      }
      if ((0 < (int)uVar3) && ((fVar10 <= 0.0 && (0.0 < DAT_14c761bb8)))) {
        uVar7 = 0;
        do {
          uVar7 = uVar7 + 1;
        } while (uVar3 != uVar7);
      }
    }
LAB_14371c87a:
    if (bVar9) {
      FUN_14080c2b4();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14371c8b2 FUN_14371c8b2 body=840 status=ok
// SIG undefined FUN_14371c8b2(void)

void FUN_14371c8b2(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar4 != 2)) {
    if (iVar4 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_14371cbdf;
    }
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar9 = (uint *)*puVar2;
    if (puVar9 != (uint *)0x0) goto LAB_14371c9a6;
    while( true ) {
      uVar11 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar11 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar11 | 1;
        __tlregdtor(&LAB_14371f534);
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
      *puVar2 = puVar8;
      FUN_140217a48(puVar2);
      puVar9 = (uint *)*puVar2;
LAB_14371c9a6:
      puVar13 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar12 = (uint *)(puVar13 + 0x16);
      uVar11 = puVar9[0x12];
      if (puVar12 <= puVar9 + 0x4000) break;
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
        puVar13 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
        puVar12 = (uint *)(puVar13 + 0x16);
        uVar11 = 0;
        if (puVar12 <= puVar9 + 0x4000) {
          uVar11 = 1;
          goto LAB_14371ca26;
        }
      }
    }
    uVar11 = uVar11 + 1;
LAB_14371ca26:
    *(uint **)(puVar9 + 0x10) = puVar12;
    puVar9[0x12] = uVar11;
    FUN_1447247dc(puVar13,0);
    *puVar13 = &PTR_FUN_14aac2570;
    puVar13[0x15] = param_1;
    if (param_1 != 0) {
      LOCK();
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      UNLOCK();
    }
    if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
    }
    puVar13[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar13[9] = puVar13;
    puVar13[10] = puVar13;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar13[0xf] = uVar10;
    puVar13[0x10] = 0xe80000527800b400;
    *(undefined4 *)((longlong)puVar13 + 0x1c) = 3;
    if (puVar13 == (undefined8 *)0x0) {
      local_21 = 1;
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
      UNLOCK();
      local_21 = 1;
      FUN_1447439e4(puVar13);
      LOCK();
      piVar1 = (int *)(puVar13 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar13)(puVar13,1);
      }
    }
    if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_14371cbdf:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 14371cc0f FUN_14371cc0f body=69 status=ok
// SIG undefined FUN_14371cc0f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371cc0f(void)

{
  _DAT_14cb0a488 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371cc51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a490,1);
  return;
}



// FUNCTION 14371cc54 FUN_14371cc54 body=476 status=ok
// SIG undefined FUN_14371cc54(void)

void FUN_14371cc54(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
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
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 0x68) = 0;
  local_98 = *(longlong *)(param_1 + 0x70);
  uStack_50 = *(undefined8 *)(param_1 + 0x78);
  local_88 = *(longlong **)(param_1 + 0x80);
  uStack_40 = *(undefined8 *)(param_1 + 0x88);
  local_38 = *(undefined8 *)(param_1 + 0x90);
  uStack_30 = *(undefined8 *)(param_1 + 0x98);
  local_28 = *(undefined8 *)(param_1 + 0xa0);
  uStack_20 = *(undefined8 *)(param_1 + 0xa8);
  uVar5 = local_28;
  uVar6 = uStack_20;
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_48 = local_88;
  uVar2 = uStack_40;
  local_58 = local_98;
  uVar1 = uStack_50;
  *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0xa8) = CONCAT44(uStack_5c,uStack_60);
  *(ulonglong *)(param_1 + 0x90) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_1 + 0x98) = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(ulonglong *)(param_1 + 0x88) = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(ulonglong *)(param_1 + 0x78) = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  if (local_98 != 0) {
    plVar7 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    uStack_50 = uVar1;
    uStack_40 = uVar2;
    local_38 = uVar3;
    uStack_30 = uVar4;
    local_28 = uVar5;
    uStack_20 = uVar6;
    (**(code **)(*plVar7 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  local_98 = *(longlong *)(param_1 + 0xc0);
  uStack_50 = *(undefined8 *)(param_1 + 200);
  local_88 = *(longlong **)(param_1 + 0xd0);
  uStack_40 = *(undefined8 *)(param_1 + 0xd8);
  local_38 = *(undefined8 *)(param_1 + 0xe0);
  uStack_30 = *(undefined8 *)(param_1 + 0xe8);
  local_28 = *(undefined8 *)(param_1 + 0xf0);
  uStack_20 = *(undefined8 *)(param_1 + 0xf8);
  uVar5 = local_28;
  uVar6 = uStack_20;
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_48 = local_88;
  uVar2 = uStack_40;
  local_58 = local_98;
  uVar1 = uStack_50;
  *(ulonglong *)(param_1 + 0xf0) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0xf8) = CONCAT44(uStack_5c,uStack_60);
  *(ulonglong *)(param_1 + 0xe0) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_1 + 0xe8) = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(ulonglong *)(param_1 + 0xd8) = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(ulonglong *)(param_1 + 200) = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_50 = uVar1;
  uStack_40 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  local_28 = uVar5;
  uStack_20 = uVar6;
  if (local_98 != 0) {
    plVar7 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371ce32 FUN_14371ce32 body=507 status=ok
// SIG undefined FUN_14371ce32(void)

void FUN_14371ce32(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined ***pppuVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = param_2[1];
  if (lVar5 == 0 || *param_2 == 0) {
LAB_14371cf2a:
    if (lVar5 != 0) {
      iVar2 = *(int *)(param_1 + 0x10);
      iVar7 = *(int *)(param_1 + 0x14);
      goto LAB_14371cf36;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar7 = *(int *)(param_1 + 0x14);
    if (iVar2 < iVar7) {
      lVar4 = (longlong)iVar2;
      uVar1 = 0;
      do {
        uVar1 = (uVar1 + *(int *)(*(longlong *)(param_2[2] + lVar4 * 8) + 8)) - 1;
        lVar4 = lVar4 + 1;
      } while (iVar7 != lVar4);
      if (*(uint *)(param_1 + 0x108) < uVar1) {
        iVar2 = *(int *)(param_1 + 0x104);
        if (0 < iVar2) {
          *(uint *)(param_1 + 0x108) = uVar1;
        }
      }
      else {
        if (uVar1 == 0) goto LAB_14371cf2a;
        iVar2 = *(int *)(param_1 + 0x104);
      }
      if (iVar2 < DAT_14c761bc4) {
        *(int *)(param_1 + 0x104) = iVar2 + 1;
        *(undefined1 *)(param_1 + 0x5d) = 1;
        local_58 = &PTR_LAB_14aac2700;
        local_78[0] = &LAB_1437210ce;
        local_98 = &PTR_LAB_14aac26e0;
        local_b8[0] = &LAB_14372107e;
        uVar6 = 2;
        goto LAB_14371cfa3;
      }
      goto LAB_14371cf2a;
    }
LAB_14371cf36:
    if (iVar2 < iVar7) {
      lVar5 = (longlong)iVar2;
      do {
        FUN_14067fdfe(*(undefined8 *)(param_2[2] + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x14));
    }
  }
  local_58 = &PTR_LAB_14aac26c0;
  local_78[0] = &LAB_14372102e;
  local_98 = &PTR_LAB_14aac26a0;
  local_b8[0] = &LAB_143720fde;
  uVar6 = 1;
LAB_14371cfa3:
  local_68 = (undefined ***)0x0;
  local_a8 = (undefined ***)0x0;
  *(undefined4 *)(param_1 + 0x68) = uVar6;
  local_90 = param_1;
  local_50 = param_1;
  FUN_140795136(param_1 + 0x70,local_b8);
  *(undefined4 *)(param_1 + 0xb0) = uVar6;
  FUN_140795136(param_1 + 0xc0,local_78);
  if (local_b8[0] != (undefined1 *)0x0) {
    pppuVar3 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar3 = &local_98;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar3 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar3 = &local_58;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371d02e FUN_14371d02e body=402 status=ok
// SIG undefined FUN_14371d02e(void)

void FUN_14371d02e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2[1] != 0) {
    local_50 = &DAT_14ca85100;
    local_48 = 0;
    uStack_40 = 0;
    FUN_1417b3222(&local_48,0x62);
    lVar2 = (longlong)*(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
      do {
        lVar1 = *(longlong *)(param_2[2] + lVar2 * 8);
        if (*(char *)(lVar1 + 0x290) == '\0') {
          FUN_1436821ba(lVar1 + 0x90,&local_50);
          FUN_143655268(lVar1 + 0x118,&local_50);
          FUN_1436682cc(lVar1 + 0x158,&local_50);
          FUN_14365f61a(lVar1 + 0x198,&local_50);
          FUN_14365f61a(lVar1 + 0x1d8,&local_50);
          if (*(longlong *)(lVar1 + 0x218) != 0) {
            FUN_14365f61a(*(longlong *)(lVar1 + 0x218),&local_50);
            FUN_14365f61a(*(longlong *)(lVar1 + 0x218) + 0x40,&local_50);
            FUN_14365f61a(*(longlong *)(lVar1 + 0x218) + 0x80,&local_50);
          }
          lVar1 = *(longlong *)(lVar1 + 0x50);
          if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xa0) & 8) == 0)) {
            FUN_147427ff8(lVar1,&local_50);
          }
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 0x14));
    }
    FUN_140b011c6(*param_2);
    if ((int)uStack_40 != 0) {
      (**(code **)(*DAT_14ca83900 + 0x148))(DAT_14ca83900,local_50,&local_48);
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(param_1 + 0x5e) = 1;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14371d1c1 FUN_14371d1c1 body=69 status=ok
// SIG undefined FUN_14371d1c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371d1c1(void)

{
  _DAT_14cb0a4b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371d203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a4c0,1);
  return;
}



// FUNCTION 14371d206 FUN_14371d206 body=69 status=ok
// SIG undefined FUN_14371d206(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371d206(void)

{
  _DAT_14cb0a4d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371d248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a4d8,1);
  return;
}



// FUNCTION 14371d24b FUN_14371d24b body=69 status=ok
// SIG undefined FUN_14371d24b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371d24b(void)

{
  _DAT_14cb0a4e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371d28d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a4f0,1);
  return;
}



// FUNCTION 14371d290 FUN_14371d290 body=69 status=ok
// SIG undefined FUN_14371d290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371d290(void)

{
  _DAT_14cb0a500 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371d2d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a508,1);
  return;
}



// FUNCTION 14371d2d5 FUN_14371d2d5 body=69 status=ok
// SIG undefined FUN_14371d2d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371d2d5(void)

{
  _DAT_14cb0a510 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371d317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a518,1);
  return;
}



// FUNCTION 14371d31a FUN_14371d31a body=69 status=ok
// SIG undefined FUN_14371d31a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371d31a(void)

{
  _DAT_14cb0a528 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371d35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a530,1);
  return;
}



// FUNCTION 14371d35f FUN_14371d35f body=69 status=ok
// SIG undefined FUN_14371d35f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371d35f(void)

{
  _DAT_14cb0a540 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371d3a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a548,1);
  return;
}



// FUNCTION 14371d3a4 FUN_14371d3a4 body=69 status=ok
// SIG undefined FUN_14371d3a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371d3a4(void)

{
  _DAT_14cb0a550 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371d3e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a558,1);
  return;
}



// FUNCTION 14371d3e9 FUN_14371d3e9 body=69 status=ok
// SIG undefined FUN_14371d3e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371d3e9(void)

{
  _DAT_14cb0a568 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371d42b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a570,1);
  return;
}



// FUNCTION 14371d42e FUN_14371d42e body=134 status=ok
// SIG undefined FUN_14371d42e(void)

void FUN_14371d42e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x338);
  if (iVar2 < 1) {
    return;
  }
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    FUN_140082318();
    iVar2 = *(int *)(param_1 + 0x338);
    if (iVar2 < 1) goto LAB_14371d492;
  }
  lVar3 = 0;
  do {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x330) + lVar3 * 8);
    if (lVar1 != 0) {
      FUN_144b2acd2(lVar1,0);
      iVar2 = *(int *)(param_1 + 0x338);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 < iVar2);
LAB_14371d492:
  *(undefined4 *)(param_1 + 0x338) = 0;
  if (*(int *)(param_1 + 0x33c) == 0) {
    return;
  }
  FUN_147d64106((longlong *)(param_1 + 0x330));
  return;
}



// FUNCTION 14371d4b4 FUN_14371d4b4 body=1975 status=ok
// SIG undefined FUN_14371d4b4(void)

undefined8 FUN_14371d4b4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar3;
  undefined1 uVar4;
  longlong *plVar5;
  char cVar6;
  DWORD DVar7;
  uint uVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined ***pppuVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  int iVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_108 [32];
  longlong **local_e8;
  undefined1 local_d9;
  longlong local_d8;
  undefined8 *local_d0;
  int *local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  longlong local_a8;
  LPCRITICAL_SECTION local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined4 local_80;
  undefined ***local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x6b0);
  local_d8 = param_2;
  EnterCriticalSection(lpCriticalSection);
  local_c0 = (longlong)*(int *)(param_1 + 0x20c);
  uVar4 = *(undefined1 *)(param_1 + 0x440);
  lVar15 = *(longlong *)(param_1 + 0x6d8);
  if ((lVar15 != 0) && (DVar7 = GetCurrentThreadId(), DVar7 != *(DWORD *)(lVar15 + 0x20))) {
    FUN_140082318(*(undefined8 *)(param_1 + 0x6d8));
  }
  *(undefined1 *)(param_1 + 0x440) = 1;
  FUN_147d5fb8a(param_1);
  lVar15 = local_d8;
  local_98 = 0;
  uStack_90 = 0;
  iVar21 = *(int *)(param_1 + 0x18);
  if (iVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar21);
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  local_d9 = uVar4;
  local_a0 = lpCriticalSection;
  if (iVar21 != 0) {
    FUN_14481578e(&local_98);
    iVar21 = *(int *)(param_1 + 0x18);
    if (0 < iVar21) {
      lVar16 = 0x86;
      lVar18 = 0;
      do {
        uVar19 = uStack_90;
        lVar22 = *plVar1;
        cVar6 = *(char *)(lVar22 + -2 + lVar16);
        if ((((cVar6 != '\x01') || (*(int *)(lVar22 + -0x7a + lVar16) != 0x1d)) &&
            ((~*(byte *)(lVar22 + lVar16) & 0x28) != 0 && (*(byte *)(lVar22 + lVar16) & 2) == 0)) &&
           ((cVar6 == '\x01' || (*(char *)(param_1 + 0x233) == '\0')))) {
          lVar22 = (longlong)(int)uStack_90;
          uVar8 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
          if (uStack_90._4_4_ < uVar8) {
            FUN_1446f48e2(&local_98,uVar19 & 0xffffffff);
          }
          *(int *)(local_98 + lVar22 * 4) = (int)lVar18;
          iVar21 = *(int *)(param_1 + 0x18);
        }
        lVar18 = lVar18 + 1;
        lVar16 = lVar16 + 0xa8;
      } while (lVar18 < iVar21);
    }
  }
  local_88 = plVar1;
  FUN_1448bea15(local_98,uStack_90 & 0xffffffff);
  lVar16 = (longlong)(int)uStack_90;
  if (0 < lVar15 && 0 < lVar16) {
    local_c0 = local_c0 << 0x14;
    lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_d0 = (undefined8 *)(lVar18 + 0x308);
    local_b8 = (undefined8 *)(lVar18 + 0x310);
    local_a8 = 0x527800b400;
    local_c8 = (int *)(lVar18 + 0xc60);
    local_b0 = (longlong *)(lVar18 + 0x2b8);
    lVar22 = 0;
    lVar18 = 0;
    do {
      iVar21 = *(int *)(local_98 + -4 + lVar16 * 4);
      if ((-1 < (longlong)iVar21) && (iVar21 < *(int *)(param_1 + 0x18))) {
        lVar10 = (longlong)iVar21 * 0xa8;
        plVar5 = *(longlong **)(*plVar1 + lVar10);
        if (plVar5 != (longlong *)0x0) {
          plVar17 = (longlong *)(*plVar1 + lVar10);
          lVar10 = (longlong)
                   *(int *)((longlong)plVar17 +
                           (longlong)(int)*(char *)((longlong)plVar17 + 0x7c) * 4 + 0x10);
          iVar21 = *(int *)((longlong)plVar17 +
                           (longlong)*(char *)((longlong)plVar17 + 0x7a) * 4 + 0x10);
          cVar6 = (**(code **)(*plVar5 + 0x2c0))();
          lVar15 = local_d8;
          if (cVar6 != '\0') {
            if (*plVar17 != 0) {
              FUN_1400980f0(*plVar17,1,0);
              *(undefined2 *)((longlong)plVar17 + 0x7a) = *(undefined2 *)(*plVar17 + 0xc5);
            }
            lVar18 = lVar18 + (iVar21 - lVar10);
            lVar22 = lVar22 + lVar10;
            lVar15 = local_d8;
            if (local_c0 <= lVar22) {
              iVar21 = *local_c8;
              if (DAT_14c86a9fc == 0) {
                if (iVar21 != 2) {
                  if (iVar21 == 1) {
                    DVar7 = FUN_140ad26c0();
                    DVar9 = GetCurrentThreadId();
                    bVar23 = DVar7 == DVar9;
                  }
                  else {
                    bVar23 = iVar21 == 0x10;
                  }
                  lVar15 = local_d8;
                  if (!bVar23) goto LAB_14371d7e8;
                }
LAB_14371d755:
                local_88 = (longlong *)0x0;
                local_80 = 0;
                FUN_14007658c(&DAT_14ca850c8,&local_88,7);
                local_88 = (longlong *)0x0;
                local_80 = 0;
                FUN_14007658c(&DAT_14ca850c8,&local_88);
                (**(code **)(*DAT_14ca83900 + 0x328))();
              }
              else {
                if (iVar21 == 0x10) goto LAB_14371d755;
LAB_14371d7e8:
                lVar15 = local_d8;
                if (DAT_14ca9a438 == '\0') {
                  if ((DAT_14c86a9f8 != '\x01') || (*local_c8 == 2)) goto LAB_14371d755;
                  if (*local_c8 == 1) {
                    DVar7 = FUN_140ad26c0();
                    DVar9 = GetCurrentThreadId();
                    if (DVar7 == DVar9) goto LAB_14371d755;
                  }
                }
                if (DAT_14ca9a43c == 0) {
                  puVar12 = (uint *)*local_d0;
                  if (puVar12 != (uint *)0x0) goto LAB_14371d949;
                  do {
                    puVar20 = local_b8;
                    uVar8 = *(uint *)(*(longlong *)
                                       ((longlong)ThreadLocalStoragePointer +
                                       (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar8 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar8 | 1;
                      __tlregdtor(&LAB_14371f534);
                    }
                    puVar11 = (undefined4 *)*puVar20;
                    *puVar20 = 0;
                    if (puVar11 == (undefined4 *)0x0) {
                      puVar11 = _aligned_malloc(0x10000,0x10000);
                    }
                    puVar20 = local_d0;
                    *puVar11 = 0xffffffff;
                    *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
                    puVar11[0x12] = 0;
                    *local_d0 = puVar11;
                    FUN_140217a48(local_d0);
                    puVar12 = (uint *)*puVar20;
LAB_14371d949:
                    uVar19 = *(longlong *)(puVar12 + 0x10) + 7;
                    uVar8 = puVar12[0x12];
                    while( true ) {
                      puVar20 = (undefined8 *)(uVar19 & 0xfffffffffffffff8);
                      if (puVar20 + 0x16 <= puVar12 + 0x4000) {
                        *(undefined8 **)(puVar12 + 0x10) = puVar20 + 0x16;
                        puVar12[0x12] = uVar8 + 1;
                        FUN_1447247dc(puVar20,0);
                        *puVar20 = &PTR_FUN_14aac2b38;
                        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                          uVar8 = DAT_14c7585c8 >> 10 & 3;
                          iVar21 = 0;
                          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
                            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
                            iVar21 = 0;
                          }
                          else {
                            uVar19 = 2;
                          }
                        }
                        else {
                          iVar21 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                          uVar19 = 5;
                        }
                        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
                          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
                        }
                        puVar20[0xe] = LowLevelTasks::
                                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                       ::
                                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                       ::vftable;
                        puVar20[9] = puVar20;
                        puVar20[10] = puVar20;
                        lVar22 = *local_b0;
                        if (lVar22 == 0) {
                          if ((char)uVar19 == '\x06') {
                            uVar19 = 1;
                          }
                          uVar13 = 0;
                        }
                        else {
                          if ((char)uVar19 == '\x06') {
                            uVar19 = *(ulonglong *)(lVar22 + 0x38) >> 0x3b;
                          }
                          uVar13 = *(undefined8 *)(lVar22 + 0x30);
                        }
                        puVar20[0xf] = uVar13;
                        puVar20[0x10] = (uVar19 << 0x3b) + local_a8 | 0xc000000000000000;
                        *(int *)((longlong)puVar20 + 0x1c) = iVar21;
                        if (puVar20 == (undefined8 *)0x0) {
                          local_88 = (longlong *)CONCAT71(local_88._1_7_,1);
                          FUN_1447439e4(0,&local_88);
                        }
                        else {
                          LOCK();
                          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                          UNLOCK();
                          local_88 = (longlong *)CONCAT71(local_88._1_7_,1);
                          FUN_1447439e4(puVar20,&local_88);
                          LOCK();
                          piVar2 = (int *)(puVar20 + 1);
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          if (*piVar2 == 0) {
                            (**(code **)*puVar20)(puVar20,1);
                          }
                        }
                        goto LAB_14371d8ac;
                      }
                      *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
                      LOCK();
                      uVar3 = *puVar12;
                      *puVar12 = *puVar12 + uVar8 + 1;
                      UNLOCK();
                      if ((uVar3 ^ uVar8) != 0xffffffff) break;
                      puVar12 = (uint *)*local_d0;
                      *puVar12 = 0xffffffff;
                      *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
                      puVar12[0x12] = 0;
                      *local_d0 = puVar12;
                      uVar19 = (longlong)puVar12 + 0x5f;
                      uVar8 = 0;
                    }
                  } while( true );
                }
                local_78 = (undefined ***)0x0;
                local_68 = &PTR_LAB_14a2b3190;
                local_60 = FUN_1437231b8;
                local_88 = (longlong *)&LAB_142ea45a2;
                local_e8 = &local_88;
                FUN_14005a792(&DAT_14ca9a440,L"FlushResourceCommand");
                if (local_88 != (longlong *)0x0) {
                  pppuVar14 = local_78;
                  if (local_78 == (undefined ***)0x0) {
                    pppuVar14 = &local_68;
                  }
                  (*(code *)(*pppuVar14)[2])();
                }
              }
LAB_14371d8ac:
              FUN_14080c2b4();
              lVar22 = 0;
            }
          }
        }
      }
    } while ((1 < lVar16) && (lVar16 = lVar16 + -1, lVar18 < lVar15));
  }
  *(undefined1 *)(param_1 + 0x440) = local_d9;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(local_a0);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14371dc6e FUN_14371dc6e body=688 status=ok
// SIG undefined FUN_14371dc6e(void)

void FUN_14371dc6e(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = local_78;
  if (*DAT_14cb0a4e0 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x6d8);
    if ((lVar7 != 0) && (DVar5 = GetCurrentThreadId(), DVar5 != *(DWORD *)(lVar7 + 0x20))) {
      FUN_140082318(*(undefined8 *)(param_1 + 0x6d8));
    }
    plVar1 = (longlong *)(param_1 + 0x340);
    local_58 = param_1 + 0x350;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (*(int *)(param_1 + 0x368) != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar3 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = plVar1;
    local_68 = plVar1;
    if (local_78._4_4_ < *(int *)(local_58 + 0x18)) {
      iVar6 = local_78._4_4_;
      do {
        local_78 = uVar3;
        plVar1 = *(longlong **)(*local_90 + (longlong)iVar6 * 0x10);
        if (((plVar1 == (longlong *)0x0) || ((*(byte *)((longlong)plVar1 + 0xbc) & 0x10) == 0)) ||
           (((*(byte *)((longlong)plVar1 + 0xbc) & 8) == 0 &&
            ((double)plVar1[8] <= DAT_14c866ff8 && DAT_14c866ff8 != (double)plVar1[8])))) {
          FUN_147d63a9e(local_68);
        }
        else {
          fVar10 = (float)(**(code **)(*plVar1 + 0x2d8))(plVar1);
          if (*(float *)(param_1 + 0x448) <= fVar10) {
            local_60 = CONCAT44(local_60._4_4_,(int)plVar1[0x17]);
            lVar7 = (longlong)(int)plVar1[0x17] * 0xa8;
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + lVar7);
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar7);
            if (lVar7 == 0) {
              cVar8 = *(char *)((longlong)plVar2 + 0x7a);
              cVar4 = *(char *)((longlong)plVar2 + 0x7b);
            }
            else {
              FUN_1400980f0(lVar7,1,0);
              cVar8 = *(char *)(*plVar2 + 0xc5);
              cVar4 = *(char *)(*plVar2 + 0xc6);
              *(char *)((longlong)plVar2 + 0x7a) = cVar8;
              *(char *)((longlong)plVar2 + 0x7b) = cVar4;
            }
            if ((cVar8 == cVar4) && (cVar4 < *(char *)((longlong)plVar2 + 0x7d))) {
              (**(code **)(*plVar1 + 0x2c8))(plVar1,(int)*(char *)((longlong)plVar2 + 0x7d),1);
              *(byte *)((longlong)plVar1 + 0xbc) = *(byte *)((longlong)plVar1 + 0xbc) | 4;
              *(byte *)((longlong)plVar2 + 0x86) = *(byte *)((longlong)plVar2 + 0x86) | 0x10;
              FUN_1447cbafe(param_1 + 0x390,local_94,&local_60,0);
              iVar6 = *(int *)(param_1 + 1000);
              if (0 < iVar6) {
                lVar7 = 0;
                lVar9 = 0;
                do {
                  if (*(longlong **)(*(longlong *)(param_1 + 0x3e0) + lVar7) == plVar1) {
                    *(undefined8 *)(*(longlong *)(param_1 + 0x3e0) + lVar7) = 0;
                    iVar6 = *(int *)(param_1 + 1000);
                  }
                  lVar9 = lVar9 + 1;
                  lVar7 = lVar7 + 0x10;
                } while (lVar9 < iVar6);
              }
              if (*plVar2 != 0) {
                FUN_1400980f0(*plVar2,1,0);
                *(undefined2 *)((longlong)plVar2 + 0x7a) = *(undefined2 *)(*plVar2 + 0xc5);
              }
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        uVar3 = local_78;
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
    }
  }
  local_78 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14371df20 FUN_14371df20 body=2669 status=ok
// SIG undefined FUN_14371df20(void)

void FUN_14371df20(longlong param_1,float param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  byte bVar5;
  DWORD DVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  uint7 uVar16;
  undefined8 *puVar14;
  uint *puVar15;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  float fVar24;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_71;
  ulonglong local_70;
  undefined7 uVar23;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  lVar20 = *(longlong *)(param_1 + 0x6d8);
  if ((lVar20 != 0) && (DVar6 = GetCurrentThreadId(), DVar6 != *(DWORD *)(lVar20 + 0x20))) {
    FUN_140082318(*(undefined8 *)(param_1 + 0x6d8));
  }
  uVar7 = FUN_1447e0190();
  FUN_140187fa0(*(undefined8 *)(param_1 + 0x2b0),1,0);
  bVar5 = (byte)param_3;
  uVar16 = (uint7)(uint3)((uint)param_3 >> 8);
  if ((0 < *(int *)(param_1 + 0x414) & (bVar5 ^ 1)) == 0) {
    lVar20 = *(longlong *)(param_1 + 0x2a8);
    if (*(int *)(lVar20 + 0x10) == 0) {
      if (*(longlong *)(lVar20 + 0x20) != 0) {
        (**(code **)(**(longlong **)(lVar20 + 0x18) + 0x20))
                  (*(longlong **)(lVar20 + 0x18),0xffffffff,0);
        *(undefined8 *)(lVar20 + 0x20) = 0;
      }
    }
    else {
      FUN_140187fa0(*(undefined8 *)(param_1 + 0x2a8),CONCAT71(uVar16,1),0);
    }
    *(undefined4 *)(param_1 + 0x410) = 0;
    iVar17 = *(int *)(param_1 + 0x400);
    *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_1 + 0x248);
    if (0 < iVar17) {
      lVar20 = 0;
      fVar24 = 0.0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x3f8) + lVar20 * 8) != 0) {
          fVar24 = (float)FUN_1417f22b0();
          if (0.0 < fVar24) break;
          iVar17 = *(int *)(param_1 + 0x400);
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < iVar17);
      if (0.0 < fVar24) {
        *(float *)(param_1 + 0x444) = fVar24 + -0.5;
      }
    }
    local_98 = 0;
    FUN_140659df2(param_1,0,1,0);
    uVar23 = (undefined7)((ulonglong)lVar20 >> 8);
    uVar21 = CONCAT71(uVar23,1);
    FUN_1447ab8d8(param_1,1);
    if (bVar5 == 0) {
      uVar21 = CONCAT71(uVar23,*(undefined1 *)(param_1 + 600));
    }
    FUN_144964b16(param_1,uVar21 & 0xffffffff);
    plVar19 = *(longlong **)(param_1 + 0x2a8);
    plVar19[6] = -1;
    plVar19[7] = 0;
    LOCK();
    *(int *)(plVar19 + 2) = (int)plVar19[2] + 1;
    UNLOCK();
    *(undefined2 *)(plVar19 + 5) = 3;
    plVar19[4] = 0;
    FUN_14018802a(plVar19[3]);
    plVar19[3] = 0;
    (**(code **)(*plVar19 + 0x30))(plVar19);
    LOCK();
    *(int *)(plVar19 + 2) = (int)plVar19[2] + -1;
    UNLOCK();
    FUN_14371dc6e(param_1);
    FUN_14068d7f6(param_1,param_3);
  }
  else {
    if (*(int *)(param_1 + 0x410) == 0) {
      *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_1 + 0x248);
      lVar20 = *(longlong *)(param_1 + 0x2a8);
      if (*(int *)(lVar20 + 0x10) == 0) {
        if (*(longlong *)(lVar20 + 0x20) != 0) {
          (**(code **)(**(longlong **)(lVar20 + 0x18) + 0x20))
                    (*(longlong **)(lVar20 + 0x18),0xffffffff,0);
          *(undefined8 *)(lVar20 + 0x20) = 0;
        }
      }
      else {
        FUN_140187fa0(*(undefined8 *)(param_1 + 0x2a8),CONCAT71(uVar16,1),0);
      }
      FUN_1447ab8d8(param_1,0);
      FUN_144964b16(param_1,*(undefined1 *)(param_1 + 600));
      puVar14 = &DAT_14c8442c0;
      if (*DAT_14cb0a670 != 0) {
        puVar14 = &DAT_14c842738;
      }
      local_88 = 0;
      local_90 = 0xffffffffffffffff;
      local_98 = 0;
      FUN_1402a8900(*(undefined8 *)(param_1 + 0x2a8),0,*puVar14,3);
      FUN_14371dc6e(param_1);
    }
    else {
      if (*(int *)(param_1 + 0x414) < *(int *)(param_1 + 0x410)) {
        lVar20 = *(longlong *)(param_1 + 0x2a8);
        if (*(int *)(lVar20 + 0x10) == 0) {
          if (*(longlong *)(lVar20 + 0x20) != 0) {
            (**(code **)(**(longlong **)(lVar20 + 0x18) + 0x20))
                      (*(longlong **)(lVar20 + 0x18),0xffffffff,0);
            *(undefined8 *)(lVar20 + 0x20) = 0;
          }
          if ((0 < *(int *)(param_1 + 0x318)) && (*DAT_14cb0a560 != 0)) {
            FUN_140097a96(param_1);
          }
          iVar17 = *(int *)(param_1 + 0x618);
          if ((longlong)iVar17 != 0) {
            lVar20 = *(longlong *)(param_1 + 0x610);
            lVar18 = 0;
            do {
              lVar8 = (longlong)*(int *)(lVar20 + lVar18) * 0xa8;
              lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar8);
              if (lVar4 != 0) {
                plVar19 = (longlong *)(*(longlong *)(param_1 + 0x10) + lVar8);
                FUN_1400980f0(lVar4,1,0);
                *(undefined2 *)((longlong)plVar19 + 0x7a) = *(undefined2 *)(*plVar19 + 0xc5);
              }
              lVar18 = lVar18 + 4;
            } while ((longlong)iVar17 * 4 != lVar18);
          }
          FUN_14371dc6e(param_1);
          FUN_14068d7f6(param_1,0);
          lVar20 = *(longlong *)(param_1 + 0x2a8);
          puVar14 = *(undefined8 **)(lVar20 + 0x88);
          *(undefined8 *)(lVar20 + 0x88) = 0;
          if (puVar14 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar14 + 1);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar14)(puVar14,1);
            }
          }
          if (*(longlong *)(lVar20 + 0x90) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 *)(lVar20 + 0x90) = 0;
          *(undefined8 *)(lVar20 + 0x98) = 0;
          *(undefined4 *)(lVar20 + 0xa0) = 0x7f7fffff;
          iVar17 = *(int *)(lVar20 + 0xb4);
          FUN_144965158(*(undefined8 *)(lVar20 + 0xa8),*(undefined4 *)(lVar20 + 0xb0));
          *(undefined4 *)(lVar20 + 0xb0) = 0;
          if ((iVar17 < 0) && (*(int *)(lVar20 + 0xb4) != 0)) {
            FUN_147d63586(lVar20 + 0xa8);
          }
          iVar17 = 2;
          if (2 < *(int *)(param_1 + 0x414)) {
            iVar17 = *(int *)(param_1 + 0x414);
          }
          FUN_140098fea(param_1,1.0 / (float)(iVar17 + -1),1);
          FUN_14065c088(param_1 + 0x2b8);
          *(undefined4 *)(param_1 + 0x410) = 0;
        }
        goto LAB_14371e48d;
      }
      if (((0 < *(int *)(param_1 + 0x318)) && (*DAT_14cb0a560 != 0)) &&
         (lVar20 = *(longlong *)(param_1 + 0x2a8), *(int *)(lVar20 + 0x10) == 0)) {
        if (*(longlong *)(lVar20 + 0x20) != 0) {
          (**(code **)(**(longlong **)(lVar20 + 0x18) + 0x20))
                    (*(longlong **)(lVar20 + 0x18),0xffffffff,0);
          *(undefined8 *)(lVar20 + 0x20) = 0;
        }
        FUN_140097a96(param_1);
      }
      if ((*(int *)(param_1 + 0x410) == 1) && (iVar17 = *(int *)(param_1 + 0x400), 0 < iVar17)) {
        lVar20 = 0;
        fVar24 = 0.0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x3f8) + lVar20 * 8) != 0) {
            fVar24 = (float)FUN_1417f22b0();
            if (0.0 < fVar24) break;
            iVar17 = *(int *)(param_1 + 0x400);
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 < iVar17);
        if (0.0 < fVar24) {
          *(float *)(param_1 + 0x444) = fVar24 + -0.5;
        }
      }
      FUN_14371dc6e(param_1);
      if (((char)uVar7 == '\0') || (*DAT_14cb0a4c8 == 0)) {
        local_98 = 0;
        FUN_140659df2(param_1,*(int *)(param_1 + 0x410) + -1,*(undefined4 *)(param_1 + 0x414),
                      0.0 < param_2);
      }
      else {
        if (((*(longlong *)(param_1 + 0x6d8) != 0) &&
            ((*(byte *)(*(longlong *)(param_1 + 0x6d8) + 0xa0) & 1) != 0)) &&
           (puVar14 = *(undefined8 **)(param_1 + 0x6d8), puVar14 != (undefined8 *)0x0)) {
          *(undefined8 *)(param_1 + 0x6d8) = 0;
          LOCK();
          piVar1 = (int *)(puVar14 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        iVar17 = *(int *)(param_1 + 0x410);
        puVar14 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar10 = (uint *)*puVar14;
        if (puVar10 != (uint *)0x0) goto LAB_14371e73c;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14371f534);
          }
          lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar20 + 0x310);
          *(undefined8 *)(lVar20 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar14 = puVar9;
          FUN_140217a48(puVar14);
          puVar10 = (uint *)*puVar14;
LAB_14371e73c:
          puVar22 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar22 + 0x18);
          uVar12 = puVar10[0x12];
          if (puVar15 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar2 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar14;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar14 = puVar10;
            puVar22 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar22 + 0x18);
            uVar12 = 0;
            if (puVar15 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_14371e7bc;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14371e7bc:
        *(uint **)(puVar10 + 0x10) = puVar15;
        puVar10[0x12] = uVar12;
        FUN_1447247dc(puVar22,0);
        *puVar22 = &PTR_FUN_14aac2b48;
        uVar3 = *(undefined4 *)(param_1 + 0x414);
        puVar22[0x15] = param_1;
        *(int *)(puVar22 + 0x16) = iVar17 + -1;
        *(undefined4 *)((longlong)puVar22 + 0xb4) = uVar3;
        *(bool *)(puVar22 + 0x17) = 0.0 < param_2;
        if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
        }
        puVar22[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar22[9] = puVar22;
        puVar22[10] = puVar22;
        lVar20 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar20 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar20 + 0x30);
        }
        puVar22[0xf] = uVar11;
        puVar22[0x10] = 0xc80000527800b400;
        *(undefined4 *)((longlong)puVar22 + 0x1c) = 0;
        if (puVar22 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
          UNLOCK();
        }
        local_71 = 1;
        FUN_1447439e4(puVar22);
        puVar14 = *(undefined8 **)(param_1 + 0x6d8);
        *(undefined8 **)(param_1 + 0x6d8) = puVar22;
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar14 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
      }
      iVar17 = 2;
      if (2 < *(int *)(param_1 + 0x414)) {
        iVar17 = *(int *)(param_1 + 0x414);
      }
      FUN_140098fea(param_1,1.0 / (float)(iVar17 + -1),1);
    }
    *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
  }
LAB_14371e48d:
  if (((bVar5 == 0) && (*DAT_14cb0a640 != 0)) && (0 < *DAT_14cb0a658)) {
    lVar20 = *(longlong *)(param_1 + 0x6d8);
    if ((lVar20 != 0) && (DVar6 = GetCurrentThreadId(), DVar6 != *(DWORD *)(lVar20 + 0x20))) {
      FUN_140082318(*(undefined8 *)(param_1 + 0x6d8));
    }
    iVar17 = *DAT_14cb0a658;
    if (iVar17 != 0) {
      do {
        iVar13 = *(int *)(param_1 + 0x3f0);
        if (*(int *)(param_1 + 1000) <= iVar13) break;
        *(int *)(param_1 + 0x3f0) = iVar13 + 1;
        uVar21 = *(ulonglong *)(*(longlong *)(param_1 + 0x3e0) + (longlong)iVar13 * 0x10);
        if (uVar21 != 0) {
          iVar13 = *(int *)(*(longlong *)(param_1 + 0x3e0) + (longlong)iVar13 * 0x10 + 8);
          if ((-1 < (longlong)iVar13) && (iVar13 < *(int *)(param_1 + 0x18))) {
            lVar20 = (longlong)iVar13 * 0xa8;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + lVar20) == uVar21) {
              lVar20 = *(longlong *)(param_1 + 0x10) + lVar20;
LAB_14371e5b1:
              if (lVar20 != 0) {
                FUN_1417f313a(lVar20,param_1);
                iVar17 = iVar17 + -1;
              }
              goto LAB_14371e5c0;
            }
          }
          if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
            uVar12 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
            uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
            lVar20 = *(longlong *)(param_1 + 0x60);
            if (*(longlong *)(param_1 + 0x60) == 0) {
              lVar20 = param_1 + 0x58;
            }
            iVar13 = *(int *)(lVar20 + (ulonglong)
                                       (*(int *)(param_1 + 0x68) - 1U & (uVar12 >> 0x10 ^ uVar12)) *
                                       4);
            if (iVar13 != -1) {
              do {
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar13 * 0x10) ==
                    uVar21) {
                  lVar20 = (longlong)*(int *)(uVar21 + 0xb8) * 0xa8 + *(longlong *)(param_1 + 0x10);
                  goto LAB_14371e5b1;
                }
                iVar13 = *(int *)((longlong)iVar13 * 0x10 + *(longlong *)(param_1 + 0x20) + 8);
              } while (iVar13 != -1);
            }
          }
        }
LAB_14371e5c0:
      } while (iVar17 != 0);
    }
  }
  FUN_14371d42e(param_1);
  local_88 = 0;
  local_90 = 0xffffffffffffffff;
  local_98 = 0;
  FUN_1402a8900(*(undefined8 *)(param_1 + 0x2b0),uVar7 ^ 1,DAT_14c8442c0,3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14371e98e FUN_14371e98e body=69 status=ok
// SIG undefined FUN_14371e98e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371e98e(void)

{
  _DAT_14cb0a630 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a638,1);
  return;
}



// FUNCTION 14371e9d3 FUN_14371e9d3 body=69 status=ok
// SIG undefined FUN_14371e9d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371e9d3(void)

{
  _DAT_14cb0a648 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371ea15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a650,1);
  return;
}



// FUNCTION 14371ea18 FUN_14371ea18 body=69 status=ok
// SIG undefined FUN_14371ea18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14371ea18(void)

{
  _DAT_14cb0a660 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371ea5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0a668,1);
  return;
}



// FUNCTION 14371ea5e FUN_14371ea5e body=1206 status=ok
// SIG undefined FUN_14371ea5e(void)

void FUN_14371ea5e(longlong param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_128 [36];
  uint local_104;
  longlong *local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  longlong local_c0;
  int local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  if (param_2 != 0) {
    lVar10 = FUN_145892f9a();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
      if ((longlong)*(int *)(param_1 + 0x400) != 0) {
        plVar14 = *(longlong **)(param_1 + 0x3f8);
        local_100 = plVar14 + *(int *)(param_1 + 0x400);
        uVar9 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
        local_104 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        local_104 = local_104 >> 0x10 ^ local_104;
        do {
          lVar10 = *plVar14;
          if (lVar10 != 0) {
            FUN_1402d4fc6(lVar10 + 0x20);
            *(undefined4 *)(lVar10 + 0x38) = 0;
            lVar10 = *(longlong *)(lVar10 + 0x30);
            if ((lVar10 != 0) &&
               (local_c0 = lVar10, *(int *)(lVar10 + 0x40) != *(int *)(lVar10 + 0x6c))) {
              lVar11 = lVar10 + 0x70;
              if (*(longlong *)(lVar10 + 0x78) != 0) {
                lVar11 = *(longlong *)(lVar10 + 0x78);
              }
              iVar12 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar10 + 0x80) - 1U & local_104) * 4);
              if (iVar12 != -1) {
                do {
                  puVar1 = (ulonglong *)(*(longlong *)(lVar10 + 0x38) + (longlong)iVar12 * 0x18);
                  if (*puVar1 == param_2) {
                    if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
                      for (iVar12 = (int)puVar1[1]; local_b8 = iVar12, iVar12 != -1;
                          iVar12 = *(int *)(*(longlong *)
                                             (*(longlong *)(lVar10 + 0x20) +
                                             (longlong)(iVar12 / 0x199) * 8) + 0x20 +
                                           (longlong)(iVar12 % 0x199) * 0x28)) {
                        FUN_147d65ea8(&local_c0,&local_f8);
                        dVar8 = local_d0;
                        dVar7 = local_d8;
                        dVar6 = local_e0;
                        dVar5 = local_e8;
                        dVar4 = local_f0;
                        dVar3 = local_f8;
                        iVar2 = (int)param_3[1];
                        *(uint *)(param_3 + 1) = iVar2 + 1U;
                        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
                          FUN_140555802(param_3,iVar2);
                        }
                        lVar11 = *param_3;
                        lVar13 = (longlong)iVar2 * 0x38;
                        *(double *)(lVar11 + lVar13) = dVar3 - dVar6;
                        *(double *)(lVar11 + 8 + lVar13) = dVar4 - dVar7;
                        *(double *)(lVar11 + 0x10 + lVar13) = dVar5 - dVar8;
                        *(double *)(lVar11 + 0x18 + lVar13) = dVar3 + dVar6;
                        *(double *)(lVar11 + 0x20 + lVar13) = dVar4 + dVar7;
                        *(double *)(lVar11 + 0x28 + lVar13) = dVar5 + dVar8;
                        *(undefined1 *)(lVar11 + 0x30 + lVar13) = 1;
                      }
                    }
                    break;
                  }
                  iVar12 = (int)puVar1[2];
                } while (iVar12 != -1);
              }
            }
          }
          plVar14 = plVar14 + 1;
        } while (plVar14 != local_100);
      }
      FUN_14034205c(param_1 + 0x2c0);
      *(undefined4 *)(param_1 + 0x2f0) = 0;
      lVar10 = *(longlong *)(param_1 + 0x2e8);
      if ((lVar10 != 0) && (local_c0 = lVar10, *(int *)(lVar10 + 0x40) != *(int *)(lVar10 + 0x6c)))
      {
        uVar9 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        lVar11 = lVar10 + 0x70;
        if (*(longlong *)(lVar10 + 0x78) != 0) {
          lVar11 = *(longlong *)(lVar10 + 0x78);
        }
        iVar12 = *(int *)(lVar11 + (ulonglong)
                                   (*(int *)(lVar10 + 0x80) - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
        if (iVar12 != -1) {
          do {
            puVar1 = (ulonglong *)(*(longlong *)(lVar10 + 0x38) + (longlong)iVar12 * 0x18);
            if (*puVar1 == param_2) {
              if (((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) &&
                 (iVar12 = (int)puVar1[1], local_b8 = iVar12, iVar12 != -1)) {
                do {
                  local_b8 = iVar12;
                  FUN_147d65ea8(&local_c0,&local_f8);
                  dVar8 = local_d0;
                  dVar7 = local_d8;
                  dVar6 = local_e0;
                  dVar5 = local_e8;
                  dVar4 = local_f0;
                  dVar3 = local_f8;
                  iVar2 = (int)param_3[1];
                  *(uint *)(param_3 + 1) = iVar2 + 1U;
                  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
                    FUN_140555802(param_3,iVar2);
                  }
                  lVar11 = *param_3;
                  lVar13 = (longlong)iVar2 * 0x38;
                  *(double *)(lVar11 + lVar13) = dVar3 - dVar6;
                  *(double *)(lVar11 + 8 + lVar13) = dVar4 - dVar7;
                  *(double *)(lVar11 + 0x10 + lVar13) = dVar5 - dVar8;
                  *(double *)(lVar11 + 0x18 + lVar13) = dVar3 + dVar6;
                  *(double *)(lVar11 + 0x20 + lVar13) = dVar4 + dVar7;
                  *(double *)(lVar11 + 0x28 + lVar13) = dVar5 + dVar8;
                  *(undefined1 *)(lVar11 + 0x30 + lVar13) = 1;
                  iVar12 = *(int *)(*(longlong *)
                                     (*(longlong *)(lVar10 + 0x20) + (longlong)(iVar12 / 0x199) * 8)
                                    + 0x20 + (longlong)(iVar12 % 0x199) * 0x28);
                } while (iVar12 != -1);
                local_b8 = -1;
              }
              break;
            }
            iVar12 = (int)puVar1[2];
          } while (iVar12 != -1);
        }
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014371eb33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  return;
}



// FUNCTION 14371ef16 FUN_14371ef16 body=612 status=ok
// SIG undefined FUN_14371ef16(void)

void FUN_14371ef16(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  if ((param_2 != 0) && (-1 < *(int *)(param_2 + 0xb8))) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
    lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_2 + 0xb8) * 0xa8;
    iVar3 = *(int *)(lVar1 + 0xa0);
    if (iVar3 == 0) {
      uVar15 = 1;
      iVar10 = 0;
      uVar14 = 0;
      iVar4 = 0;
    }
    else {
      puVar8 = *(uint **)(lVar1 + 0x98);
      if (*(uint **)(lVar1 + 0x98) == (uint *)0x0) {
        puVar8 = (uint *)(lVar1 + 0x88);
      }
      uVar12 = *puVar8;
      if (uVar12 == 0) {
        iVar4 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar4 = iVar3 + -1;
        }
        uVar14 = 0;
        uVar15 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar15 = uVar14;
        }
        iVar10 = 0;
        do {
          if (uVar15 == uVar14) goto LAB_14371f10b;
          iVar10 = iVar10 + 0x20;
          uVar12 = puVar8[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar12 == 0);
      }
      else {
        iVar10 = 0;
        uVar14 = 0;
      }
      uVar15 = (ulonglong)(-uVar12 & uVar12);
      uVar2 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
    }
    if (iVar4 < iVar3) {
      uVar12 = 0xffffffff;
      do {
        plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x3f8) + (longlong)iVar4 * 8);
        if ((((plVar11 != (longlong *)0x0) && ((char)plVar11[1] == '\x01')) &&
            (0 < *(int *)(plVar11[3] + 0x140))) && ((*(byte *)(*plVar11 + 0x240) & 0x20) != 0)) {
          FUN_1402d4fc6(plVar11 + 4);
          *(undefined4 *)(plVar11 + 7) = 0;
          FUN_14371f17a(param_2,plVar11[6],param_4,param_3);
          iVar3 = *(int *)(lVar1 + 0xa0);
        }
        uVar12 = uVar12 & ~(uint)uVar15;
        puVar8 = *(uint **)(lVar1 + 0x98);
        if (*(uint **)(lVar1 + 0x98) == (uint *)0x0) {
          puVar8 = (uint *)(lVar1 + 0x88);
        }
        iVar4 = (int)uVar14;
        lVar13 = (longlong)iVar4;
        uVar5 = puVar8[lVar13] & uVar12;
        if (uVar5 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar9 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar5 = puVar8[lVar13 + lVar9 + 1];
            if (uVar5 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar7 - lVar13 == lVar9) goto LAB_14371f10b;
          }
          uVar14 = (ulonglong)(iVar4 + (int)lVar9 + 1);
          uVar12 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar5 & uVar5);
        uVar2 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar4 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar3);
    }
LAB_14371f10b:
    FUN_14371f17a(param_2,*(undefined8 *)(param_1 + 0x2c0),param_4,param_3);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  }
  if (*param_4 != 0) {
    plVar11 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_4[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014371f15a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x10))(plVar11);
    return;
  }
  return;
}



// FUNCTION 14371f17a FUN_14371f17a body=409 status=ok
// SIG undefined FUN_14371f17a(void)

void FUN_14371f17a(ulonglong param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x40) != *(int *)(param_2 + 0x6c))) {
    uVar5 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar6 = param_2 + 0x70;
    if (*(longlong *)(param_2 + 0x78) != 0) {
      lVar6 = *(longlong *)(param_2 + 0x78);
    }
    iVar9 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_2 + 0x80) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                             4);
    if (iVar9 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar9 * 0x18);
        if (*puVar1 == param_1) {
          if (((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) &&
             (iVar9 = (int)puVar1[1], iVar9 != -1)) {
            lVar6 = *(longlong *)(param_2 + 0x20);
            do {
              lVar6 = *(longlong *)
                       (*(longlong *)(lVar6 + (longlong)(iVar9 / 0x199) * 8) +
                       (longlong)(iVar9 % 0x199) * 0x28);
              if (lVar6 != 0) {
                pcVar3 = (code *)*param_3;
                plVar8 = (longlong *)param_3[2];
                if ((longlong *)param_3[2] == (longlong *)0x0) {
                  plVar8 = param_3 + 4;
                }
                local_50 = lVar6;
                uVar7 = (**(code **)(*plVar8 + 8))();
                cVar4 = (*pcVar3)(uVar7,&local_50);
                if (cVar4 != '\0') {
                  iVar2 = (int)param_4[1];
                  *(uint *)(param_4 + 1) = iVar2 + 1U;
                  if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
                    FUN_140097524(param_4,iVar2);
                  }
                  *(longlong *)(*param_4 + (longlong)iVar2 * 8) = lVar6;
                }
              }
              lVar6 = *(longlong *)(param_2 + 0x20);
              iVar9 = *(int *)(*(longlong *)(lVar6 + (longlong)(iVar9 / 0x199) * 8) + 0x20 +
                              (longlong)(iVar9 % 0x199) * 0x28);
            } while (iVar9 != -1);
          }
          break;
        }
        iVar9 = (int)puVar1[2];
      } while (iVar9 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14371f314 FUN_14371f314 body=483 status=ok
// SIG undefined FUN_14371f314(void)

void FUN_14371f314(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_188 [40];
  LPCRITICAL_SECTION local_160;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_160 = (LPCRITICAL_SECTION)(param_1 + 0x6b0);
  EnterCriticalSection(local_160);
  local_58 = (undefined1 *)0x0;
  local_50 = 0x2000000000;
  iVar1 = *(int *)(param_1 + 0x400);
  if ((longlong)iVar1 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x3f8);
    lVar7 = 0;
    do {
      uVar4 = local_50;
      puVar2 = *(undefined8 **)(lVar8 + lVar7);
      if (puVar2 != (undefined8 *)0x0) {
        uVar3 = *puVar2;
        lVar9 = (longlong)(int)local_50;
        uVar5 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar5);
        if (local_50._4_4_ < uVar5) {
          FUN_1456c5144(local_158,uVar4 & 0xffffffff);
        }
        puVar6 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar6 = local_158;
        }
        *(undefined8 *)(puVar6 + lVar9 * 8) = uVar3;
        FUN_140097686(puVar2,0);
        *(undefined4 *)(puVar2 + 0x16) = 0;
        if (puVar2[0x15] != 0) {
          FUN_1400020a8();
        }
        FUN_140096ee6(puVar2 + 0xd);
        if (puVar2[0xb] != 0) {
          FUN_1400020a8();
        }
        if (puVar2[9] != 0) {
          FUN_1400020a8();
        }
        FUN_140096f1e(puVar2 + 2);
        FUN_1400020a8(puVar2);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  *(undefined4 *)(param_1 + 0x400) = 0;
  if (*(int *)(param_1 + 0x404) != 0) {
    FUN_1456c51bc(param_1 + 0x3f8);
  }
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_158;
  }
  lVar8 = (longlong)(int)local_50;
  if (lVar8 != 0) {
    lVar7 = 0;
    do {
      FUN_1447ac6fa(param_1,*(undefined8 *)(puVar6 + lVar7));
      lVar7 = lVar7 + 8;
    } while (lVar8 * 8 != lVar7);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(local_160);
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14371f55c FUN_14371f55c body=299 status=ok
// SIG undefined FUN_14371f55c(void)

void FUN_14371f55c(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14371f5be;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_14371f5be:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 14371f688 FUN_14371f688 body=29 status=ok
// SIG undefined FUN_14371f688(void)

undefined8 FUN_14371f688(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14371f6ba FUN_14371f6ba body=85 status=ok
// SIG undefined FUN_14371f6ba(void)

void FUN_14371f6ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac1ea0;
  return;
}



// FUNCTION 14371f710 FUN_14371f710 body=85 status=ok
// SIG undefined FUN_14371f710(void)

void FUN_14371f710(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac1ea0;
  return;
}



// FUNCTION 14371f766 FUN_14371f766 body=118 status=ok
// SIG undefined FUN_14371f766(void)

void FUN_14371f766(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aac1ea0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014371f7cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14371f7dc FUN_14371f7dc body=81 status=ok
// SIG undefined FUN_14371f7dc(void)

void FUN_14371f7dc(void)

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



// FUNCTION 14371f82e FUN_14371f82e body=83 status=ok
// SIG undefined FUN_14371f82e(void)

undefined8 FUN_14371f82e(void)

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


