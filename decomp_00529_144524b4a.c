// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144524b4a FUN_144524b4a body=96 status=ok
// SIG undefined FUN_144524b4a(void)

ulonglong FUN_144524b4a(undefined8 *param_1)

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
  if (lVar2 != 0) {
    FUN_145973e44(lVar2);
    uVar3 = FUN_1400020a8(lVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144524b8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 144524baa FUN_144524baa body=225 status=ok
// SIG undefined FUN_144524baa(void)

void FUN_144524baa(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  void **local_80;
  undefined8 *local_78;
  undefined8 local_70;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *param_1;
  uVar2 = param_1[9];
  local_50 = 0;
  local_48 = 0;
  FUN_14009d848(&local_50,param_1 + 7);
  local_60 = (void *)0x0;
  local_58 = *(int *)(param_1 + 6);
  lVar3 = (longlong)local_58;
  _Src = (void *)param_1[5];
  if (lVar3 == 0) {
    local_54 = 0;
  }
  else {
    FUN_14945ba2a(&local_60,local_58);
    memcpy(local_60,_Src,lVar3 << 3);
  }
  local_88 = param_1[4];
  local_80 = &local_60;
  local_78 = &local_50;
  local_70 = uVar2;
  FUN_149457568(uVar1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144524c96 FUN_144524c96 body=29 status=ok
// SIG undefined FUN_144524c96(void)

void FUN_144524c96(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144524cb4 FUN_144524cb4 body=125 status=ok
// SIG undefined FUN_144524cb4(void)

undefined8 * FUN_144524cb4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14bcdce40;
  plVar1 = param_1 + 8;
  if (*(int *)(param_1 + 9) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_144524d05;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_144524d05:
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144524d32 FUN_144524d32 body=282 status=ok
// SIG undefined FUN_144524d32(void)

undefined8 * FUN_144524d32(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144524619);
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



// FUNCTION 144524e4c FUN_144524e4c body=383 status=ok
// SIG undefined FUN_144524e4c(void)

void FUN_144524e4c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *_Src;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  void **local_80;
  undefined8 *local_78;
  undefined8 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = param_1[0x15];
  uVar4 = param_1[0x1e];
  plVar2 = param_1 + 0x1c;
  local_58 = 0;
  local_50 = 0;
  FUN_14009d848(&local_58,plVar2);
  local_68 = (void *)0x0;
  local_60 = *(int *)(param_1 + 0x1b);
  lVar6 = (longlong)local_60;
  _Src = (void *)param_1[0x1a];
  if (lVar6 == 0) {
    local_5c = 0;
  }
  else {
    FUN_14945ba2a(&local_68,local_60);
    memcpy(local_68,_Src,lVar6 << 3);
  }
  local_88 = param_1[0x19];
  local_80 = &local_68;
  local_78 = &local_58;
  local_70 = uVar4;
  FUN_149457568(uVar3,param_1[0x16],param_1[0x17],*(undefined1 *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x1d) != 0) {
    puVar5 = (undefined8 *)*plVar2;
    if (puVar5 == (undefined8 *)0x0) goto LAB_144524f74;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 0x1d) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_144524f74:
  if (param_1[0x1a] != 0) {
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
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144524fcc FUN_144524fcc body=481 status=ok
// SIG undefined FUN_144524fcc(void)

void FUN_144524fcc(longlong param_1,ulonglong *param_2)

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
  FUN_14945c678(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445251ae FUN_1445251ae body=232 status=ok
// SIG undefined FUN_1445251ae(void)

void FUN_1445251ae(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 144525296 FUN_144525296 body=81 status=ok
// SIG undefined FUN_144525296(void)

void FUN_144525296(undefined8 param_1,longlong *param_2)

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
  FUN_14945c71b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1445252e8 FUN_1445252e8 body=193 status=ok
// SIG undefined FUN_1445252e8(void)

void FUN_1445252e8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 0x3c)) {
    lVar2 = param_1[1];
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = lVar1 + 0x40;
    if (*(longlong *)(lVar1 + 0x48) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x48);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar1 + 0x50) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *(longlong *)(lVar1 + 8) + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)iVar6 * 0x20) == lVar2)
        goto LAB_144525370;
        iVar6 = *(int *)(lVar4 + 0x18);
      } while (iVar6 != -1);
    }
  }
  lVar4 = 0;
LAB_144525370:
  iVar6 = *(int *)(lVar4 + 0x14);
  FUN_14945a90e(*(undefined8 *)(lVar4 + 8),*(undefined4 *)(lVar4 + 0x10));
  *(undefined4 *)(lVar4 + 0x10) = 0;
  if ((iVar6 < 0) && (*(int *)(lVar4 + 0x14) != 0)) {
    FUN_14945c956(lVar4 + 8);
    return;
  }
  return;
}



// FUNCTION 1445253c0 FUN_1445253c0 body=29 status=ok
// SIG undefined FUN_1445253c0(void)

undefined8 FUN_1445253c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445253de FUN_1445253de body=25 status=ok
// SIG undefined FUN_1445253de(void)

void FUN_1445253de(void)

{
  FUN_145dff942();
  FUN_14170c56a(&DAT_14cc1a7f0);
  return;
}



// FUNCTION 1445253f8 FUN_1445253f8 body=25 status=ok
// SIG undefined FUN_1445253f8(void)

void FUN_1445253f8(void)

{
  FUN_145dff9f8();
  FUN_14170c56a(&DAT_14cc1a860);
  return;
}



// FUNCTION 144525412 FUN_144525412 body=25 status=ok
// SIG undefined FUN_144525412(void)

void FUN_144525412(void)

{
  FUN_145dff698();
  FUN_14170c56a(&DAT_14cc1a8d0);
  return;
}



// FUNCTION 14452542b FUN_14452542b body=2300 status=ok
// SIG undefined FUN_14452542b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14452542b(void)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined **ppuStack_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  code *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined **local_78;
  code *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ComputeFramework",&PTR_FUN_14bcd67b0,1,0);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ComputeFramework",&PTR_FUN_14bcd6b50,1,0);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ComputeFramework",&PTR_FUN_14bcd7210,1,0);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ComputeFramework",&PTR_FUN_14bcd75f0,1,0);
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_98,&DAT_14cc173d0);
  if (cVar1 == '\0') {
    _DAT_14cc173d0 = 0;
    uRam000000014cc173d8 = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_b8._0_4_ = 0x60;
  FUN_141471170(&DAT_14cc173e0,L"r.ComputeFramework.Enable",&DAT_14c765cec,
                L"Enable the Compute Framework.\n");
  atexit(FUN_144521524);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cc173f0,L"r.ComputeFramework.DeferredCompilation",&DAT_14c765cf0,
                L"Compile compute graphs on first usage instead of on PostLoad().\n");
  atexit(FUN_144521569);
  local_98 = (code *)0x0;
  uStack_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  uStack_90._0_4_ = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(undefined **)(local_98 + 0x18) = &DAT_149456f7c;
  local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
  FUN_14152bcb8(&DAT_14cc17400,L"r.ComputeFramework.RebuildComputeGraphs",
                L"Force all loaded UComputeGraph objects to rebuild.",&local_98);
  if ((int)uStack_90 != 0) {
    if (local_98 == (code *)0x0) goto LAB_144525669;
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    uStack_90._0_4_ = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_144525669:
  atexit(FUN_1445215ae);
  local_98 = (code *)0x594f596304a3e7;
  uStack_90._0_4_ = 0x8cfc21bd;
  uStack_90._4_4_ = 0x7721fd4e;
  _DAT_14cc17410 = 0x6304a3e7;
  uRam000000014cc17414 = 0x594f59;
  uRam000000014cc17418 = 0x8cfc21bd;
  uRam000000014cc1741c = 0x7721fd4e;
  FUN_141005458(&local_98,0,L"Dev-ComputeFramework",0);
  atexit((_func_5014 *)&LAB_144522058);
  local_98 = (code *)0x800000014bcd784a;
  local_9c = 0x10;
  uVar2 = FUN_14577453c();
  uStack_90._0_5_ = CONCAT14(1,uVar2);
  FUN_146730e3a(&local_98);
  ppuStack_b0 = (undefined **)0x0;
  local_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/ComputeFramework",&PTR_FUN_14bcd7f20,1,&PTR_FUN_14bcd7ef0);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ComputeFramework",&PTR_FUN_14bcd8a60,1,0);
  ppuStack_b0 = (undefined **)0x0;
  local_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/ComputeFramework",0,0,&PTR_FUN_14bcd8b90);
  local_98 = (code *)CONCAT44(local_98._4_4_,1);
  local_b8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cc174a8,L"r.ComputeFramework.SortSubmit",&local_98,
                L"Sort submission of work to GPU for optimal scheduling.");
  atexit(FUN_1445229f2);
  local_b8 = CONCAT44(local_b8._4_4_,0x20);
  FUN_141471170(&DAT_14cc174c0,L"r.ComputeFramework.TriggerGPUCaptureDispatches",&DAT_14cc174d0,
                L"Trigger GPU captures for this many of the subsequent compute graph dispatches.");
  atexit(FUN_144522a37);
  local_a8 = 1;
  ppuStack_b0 = &PTR_FUN_14bcd9210;
  local_b8 = 0;
  FUN_14282b410(L"/Script/ComputeFramework",&PTR_FUN_14bcd9230,1,0);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ComputeFramework",&PTR_FUN_14bcd95f0,1,0);
  ppuStack_b0 = (undefined **)0x0;
  local_a8 = 0;
  local_b8 = 4;
  FUN_14282b410(L"/Script/ComputeFramework",0,0,&PTR_FUN_14bcd9aa0);
  ppuStack_b0 = (undefined **)0x0;
  local_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/ComputeFramework",0,0,&PTR_FUN_14bcd9d10);
  uStack_90 = FUN_145ece0c6;
  local_98 = (code *)&DAT_145ece0c2;
  FUN_1412df486(&DAT_14cc176b0,&local_98);
  FUN_1446f470e(&DAT_14cc176c0,L"PCD3D_SM6",1);
  FUN_1446f470e(&DAT_14cc176c8,L"PCD3D_SM5",1);
  FUN_1446f470e(&DAT_14cc176d0,L"PCD3D_ES31",1);
  FUN_1446f470e(&DAT_14cc176d8,L"GLSL_150_ES31",1);
  FUN_1446f470e(&DAT_14cc176e0,L"GLSL_ES3_1_ANDROID",1);
  FUN_1446f470e(&DAT_14cc176e8,L"SF_METAL",1);
  FUN_1446f470e(&DAT_14cc176f0,L"SF_METAL_MRT",1);
  FUN_1446f470e(&DAT_14cc176f8,L"SF_METAL_TVOS",1);
  FUN_1446f470e(&DAT_14cc17700,L"SF_METAL_MRT_TVOS",1);
  FUN_1446f470e(&DAT_14cc17708,L"SF_METAL_MRT_MAC",1);
  FUN_1446f470e(&DAT_14cc17710,L"SF_METAL_SM5",1);
  FUN_1446f470e(&DAT_14cc17718,L"SF_METAL_SM6",1);
  FUN_1446f470e(&DAT_14cc17720,L"SF_METAL_SIM",1);
  FUN_1446f470e(&DAT_14cc17728,L"SF_METAL_MACES3_1",1);
  FUN_1446f470e(&DAT_14cc17730,L"SF_VULKAN_ES31_ANDROID",1);
  FUN_1446f470e(&DAT_14cc17738,L"SF_VULKAN_ES31",1);
  FUN_1446f470e(&DAT_14cc17740,L"SF_VULKAN_SM5",1);
  FUN_1446f470e(&DAT_14cc17748,L"SF_VULKAN_SM6",1);
  FUN_1446f470e(&DAT_14cc17750,L"SF_VULKAN_SM5_ANDROID",1);
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cc17758,L"ComputeKernel.ShowShaderCompilerWarnings",&DAT_14cc17768,
                L"When set to 1, will display all warnings from ComputeKernel shader compiles.");
  atexit(FUN_144523d53);
  lVar3 = 0x48;
  do {
    *(undefined8 *)(&DAT_14cc17748 + lVar3) = 0;
    *(undefined4 *)(&DAT_14cc17750 + lVar3) = 0;
    *(undefined8 *)(&DAT_14cc17728 + lVar3) = 0;
    *(undefined8 *)(&DAT_14cc17730 + lVar3) = 0;
    *(undefined8 *)(lVar3 + 0x14cc17754) = 0xffffffff00000080;
    *(undefined4 *)(lVar3 + 0x14cc1775c) = 0;
    *(undefined8 *)(&DAT_14cc17768 + lVar3) = 0;
    *(undefined4 *)(&DAT_14cc17770 + lVar3) = 0;
    lVar3 = lVar3 + 0x50;
  } while (lVar3 != 0x30b8);
  atexit(FUN_144523d98);
  DAT_14cc1a7e0 = 0;
  _DAT_14cc1a7e8 = 0;
  atexit((_func_5014 *)&LAB_144523fca);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_1445253de;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cc1a858,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_1445253f8;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cc1a8c8,6,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_144525412;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cc1a938,6,&local_98);
  local_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ComputeFramework",&PTR_FUN_14bcda470,1,0);
  ppuStack_b0 = &PTR_FUN_14bcdb270;
  local_a8 = 5;
  local_b8 = 6;
  FUN_14282b410(L"/Script/ComputeFramework",0,0,&PTR_FUN_14bcdb310);
  DAT_14cc1aaf0 = 0;
  _DAT_14cc1aaf8 = 0;
  DAT_14cc1aad0 = 0;
  _DAT_14cc1aad8 = 0;
  _DAT_14cc1aafc = 0xffffffff00000080;
  _DAT_14cc1ab04 = 0;
  DAT_14cc1ab10 = 0;
  _DAT_14cc1ab18 = 0;
  atexit(FUN_1445242e1);
  DAT_14cc1ab20 = 1;
  FUN_140056680(&DAT_14cc1ab28,L"Texture1D");
  DAT_14cc1ab38 = 2;
  FUN_140056680(&DAT_14cc1ab40,L"Texture2D");
  DAT_14cc1ab50 = 3;
  FUN_140056680(&DAT_14cc1ab58,L"Texture3D");
  DAT_14cc1ab68 = 4;
  FUN_140056680(&DAT_14cc1ab70,L"TextureCube");
  DAT_14cc1ab80 = 6;
  FUN_140056680(&DAT_14cc1ab88,L"StructuredBuffer");
  DAT_14cc1ab98 = 7;
  FUN_140056680(&DAT_14cc1aba0,L"ByteAddressBuffer");
  DAT_14cc1abb0 = 5;
  FUN_140056680(&DAT_14cc1abb8,L"Buffer");
  atexit(FUN_144524450);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144525d28 FUN_144525d28 body=57 status=ok
// SIG undefined FUN_144525d28(void)

void FUN_144525d28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1ad90 == 0) {
    uVar1 = FUN_146731e13();
    DAT_14cc1ad90 = FUN_14171c317(FUN_146731e42,uVar1,L"EOptimusDefaultDeformerMode");
  }
  return;
}



// FUNCTION 144525d61 FUN_144525d61 body=69 status=ok
// SIG undefined FUN_144525d61(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144525d61(void)

{
  _DAT_14cc1add0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144525da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc1add8,1);
  return;
}



// FUNCTION 144525dbb FUN_144525dbb body=217 status=ok
// SIG undefined FUN_144525dbb(void)

void FUN_144525dbb(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14bcdd620;
  local_38 = 1;
  local_48 = 0;
  FUN_14282b410(L"/Script/OptimusSettings",&PTR_FUN_14bcdd640,1,0);
  local_28 = CONCAT44(local_28._4_4_,1);
  local_48 = CONCAT44(local_48._4_4_,4);
  FUN_14078dbce(&DAT_14cc1add0,L"r.DeformerGraph.Enable",&local_28,
                L"Set to 0 to disable DeformerGraph support on a platform.\n");
  atexit(FUN_144525d61);
  local_28 = 0x800000014bcdd772;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146731f10(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144525e98 FUN_144525e98 body=55 status=ok
// SIG undefined FUN_144525e98(void)

void FUN_144525e98(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1b038 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1b038 = FUN_14171c317(FUN_1467327fe,uVar1,L"EOptimusPinMutability");
  }
  return;
}



// FUNCTION 144525ecf FUN_144525ecf body=55 status=ok
// SIG undefined FUN_144525ecf(void)

void FUN_144525ecf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1b140 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1b140 = FUN_14171c317(FUN_146732cd4,uVar1,L"EOptimusConstantType");
  }
  return;
}



// FUNCTION 144525f06 FUN_144525f06 body=55 status=ok
// SIG undefined FUN_144525f06(void)

void FUN_144525f06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1b230 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1b230 = FUN_14171c317(FUN_14673307e,uVar1,L"EOptimusDeformerExecutionPhase");
  }
  return;
}



// FUNCTION 144525f3d FUN_144525f3d body=55 status=ok
// SIG undefined FUN_144525f3d(void)

void FUN_144525f3d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1b260 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1b260 = FUN_14171c317(FUN_1467330dc,uVar1,L"EOptimusDiagnosticLevel");
  }
  return;
}



// FUNCTION 144525f74 FUN_144525f74 body=55 status=ok
// SIG undefined FUN_144525f74(void)

void FUN_144525f74(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1b2a8 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1b2a8 = FUN_14171c317(FUN_1467331d0,uVar1,L"EOptimusValueUsage");
  }
  return;
}



// FUNCTION 144525fab FUN_144525fab body=55 status=ok
// SIG undefined FUN_144525fab(void)

void FUN_144525fab(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1b2c0 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1b2c0 = FUN_14171c317(FUN_1467331ff,uVar1,L"EOptimusValueType");
  }
  return;
}



// FUNCTION 144525fe2 FUN_144525fe2 body=574 status=ok
// SIG undefined FUN_144525fe2(void)

longlong * FUN_144525fe2(longlong *param_1,undefined8 param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong *local_68;
  undefined8 uStack_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_14948130c();
  *(undefined8 *)*param_1 = param_2;
  if (param_3 != '\0') {
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    FUN_1407329d4(param_2,1,&local_68);
    if ((longlong)(int)uStack_60 != 0) {
      plVar1 = local_68 + (int)uStack_60;
      plVar5 = local_68;
      do {
        lVar3 = *plVar5;
        if (lVar3 != 0) {
          if (DAT_14cad2858 == 0) {
            local_50 = FUN_144a7958c;
            local_70 = FUN_14081d0ea;
            local_78 = &LAB_146395584;
            local_88 = &LAB_147a0ba80;
            local_90 = &LAB_14575ccce;
            local_98 = L"Engine";
            local_a0 = 0x40000000000;
            local_a8 = 0x10000004;
            local_b0 = 0x10;
            local_b8 = 0x1180;
            local_80 = &local_50;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
          }
          if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
            if ((param_4 != 0) && ((longlong)*(int *)(lVar3 + 0x78) != 0)) {
              lVar4 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0x70) + lVar4) == param_4)
                goto LAB_1445260e4;
                lVar4 = lVar4 + 8;
              } while ((longlong)*(int *)(lVar3 + 0x78) * 8 != lVar4);
            }
            iVar2 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
              FUN_14793612a(param_1,iVar2);
            }
            *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar3;
          }
        }
LAB_1445260e4:
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar1);
    }
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144526244 FUN_144526244 body=1344 status=ok
// SIG undefined FUN_144526244(void)

/* WARNING: Removing unreachable block (ram,0x00014452655e) */
/* WARNING: Removing unreachable block (ram,0x000144526608) */
/* WARNING: Removing unreachable block (ram,0x0001445266af) */

void FUN_144526244(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong lVar5;
  void *_Src;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined2 *local_f0;
  undefined2 *local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  longlong local_80;
  uint local_78;
  uint local_74;
  void *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d0 = param_4;
  if ((longlong)*(int *)(param_3 + 0x18) != 0) {
    lVar12 = *(longlong *)(param_3 + 0x10);
    local_d8 = (longlong)*(int *)(param_3 + 0x18) * 0x10 + lVar12;
    local_e0 = param_1 + 2;
    do {
      FUN_1400021e4(lVar12,&local_70);
      local_80 = 0;
      iVar7 = *(int *)(local_d0 + 1);
      uVar3 = *local_d0;
      if (iVar7 == 0) {
        local_74 = 0;
        uVar13 = 0;
      }
      else {
        local_78 = iVar7;
        FUN_140b856de(&local_80,iVar7,0);
        FUN_140b8566a(local_80,uVar3,iVar7);
        uVar13 = local_78;
      }
      local_78 = uVar13 + 1;
      if (local_74 < local_78) {
        FUN_1447a1bd6(&local_80,uVar13);
      }
      _Src = local_70;
      lVar6 = (longlong)(int)uVar13 * 0x10;
      puVar1 = (undefined8 *)(local_80 + lVar6);
      *(undefined8 *)(local_80 + lVar6) = 0;
      lVar14 = (longlong)local_68;
      *(int *)(local_80 + 8 + lVar6) = local_68;
      if (lVar14 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,local_68,0);
        memcpy((void *)*puVar1,_Src,lVar14 * 2);
      }
      lVar6 = local_80;
      local_98 = (undefined2 *)0x0;
      uStack_90 = 0;
      lVar14 = (longlong)(int)local_78;
      if (lVar14 == 0) {
        local_a8 = (undefined2 *)0x0;
        uStack_a0 = 0;
      }
      else {
        iVar7 = 1;
        lVar11 = 0;
        do {
          if ((char)iVar7 == '\0') {
            FUN_1400020e8(&local_98,&DAT_149e01f60,1);
          }
          iVar2 = *(int *)(lVar6 + 8 + lVar11);
          iVar7 = 0;
          iVar8 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar8 = iVar7;
          }
          FUN_1400020e8(&local_98,*(undefined8 *)(lVar6 + lVar11),iVar8);
          lVar5 = local_80;
          lVar11 = lVar11 + 0x10;
        } while (lVar14 * 0x10 != lVar11);
        lVar6 = (longlong)(int)local_78;
        local_a8 = (undefined2 *)0x0;
        uStack_a0 = 0;
        if (lVar6 != 0) {
          iVar7 = 1;
          lVar14 = 0;
          do {
            if ((char)iVar7 == '\0') {
              FUN_1400020e8(&local_a8,&DAT_149e0635c,1);
            }
            iVar2 = *(int *)(lVar5 + 8 + lVar14);
            iVar7 = 0;
            iVar8 = iVar2 + -1;
            if (iVar2 == 0) {
              iVar8 = iVar7;
            }
            FUN_1400020e8(&local_a8,*(undefined8 *)(lVar5 + lVar14),iVar8);
            lVar14 = lVar14 + 0x10;
          } while (lVar6 * 0x10 != lVar14);
        }
      }
      pcVar4 = *(char **)(lVar12 + 8);
      if ((*pcVar4 == '\x04') && (pcVar4[0xc] == '\0')) {
        FUN_144526244(param_1,param_2,pcVar4,&local_80);
      }
      else {
        local_c8 = 0;
        FUN_149458322(pcVar4,&local_b8,&local_c8);
        local_f8 = &DAT_149dfb77a;
        if ((int)uStack_90 != 0) {
          local_f8 = local_98;
        }
        puVar10 = &DAT_149dfb77a;
        if (*(int *)(param_2 + 1) != 0) {
          puVar10 = (undefined2 *)*param_2;
        }
        puVar9 = &DAT_149dfb77a;
        if (local_b0 != 0) {
          puVar9 = local_b8;
        }
        FUN_140002266(&local_c8,L"%s %s_%s;\n",puVar9,puVar10);
        iVar7 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
          FUN_1447a1bd6(param_1,iVar7);
        }
        lVar6 = *param_1;
        lVar14 = (longlong)iVar7 * 0x10;
        *(undefined8 *)(lVar6 + lVar14) = 0;
        *(undefined8 *)(lVar6 + lVar14) = local_c8;
        *(undefined4 *)(lVar6 + 8 + lVar14) = (undefined4)local_c0;
        *(undefined4 *)(lVar6 + 0xc + lVar14) = local_c0._4_4_;
        local_c0 = 0;
        local_c8 = 0;
        local_e8 = &DAT_149dfb77a;
        if ((int)uStack_90 != 0) {
          local_e8 = local_98;
        }
        local_f8 = &DAT_149dfb77a;
        if (*(int *)(param_2 + 1) != 0) {
          local_f8 = (undefined2 *)*param_2;
        }
        puVar10 = &DAT_149dfb77a;
        if (local_b0 != 0) {
          puVar10 = local_b8;
        }
        local_f0 = local_f8;
        FUN_140002266(&local_c8,L"%s Read%s_%s()\n{\n\treturn %s_%s;\n}\n",puVar10);
        iVar7 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
          FUN_1447a1bd6(param_1,iVar7);
        }
        lVar6 = *param_1;
        lVar14 = (longlong)iVar7 * 0x10;
        *(undefined8 *)(lVar6 + lVar14) = 0;
        *(undefined8 *)(lVar6 + lVar14) = local_c8;
        *(undefined4 *)(lVar6 + 8 + lVar14) = (undefined4)local_c0;
        *(undefined4 *)(lVar6 + 0xc + lVar14) = local_c0._4_4_;
        local_c0 = 0;
        local_c8 = 0;
        local_f8 = &DAT_149dfb77a;
        if ((int)uStack_90 != 0) {
          local_f8 = local_98;
        }
        puVar10 = &DAT_149dfb77a;
        if (*(int *)(param_2 + 1) != 0) {
          puVar10 = (undefined2 *)*param_2;
        }
        puVar9 = &DAT_149dfb77a;
        if ((int)uStack_a0 != 0) {
          puVar9 = local_a8;
        }
        FUN_140002266(&local_c8,L"%s = %s_%s;\n",puVar9,puVar10);
        iVar7 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar7 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar7 + 1U) {
          FUN_1447a1bd6(local_e0,iVar7);
        }
        lVar6 = *local_e0;
        lVar14 = (longlong)iVar7 * 0x10;
        *(undefined8 *)(lVar6 + lVar14) = 0;
        *(undefined8 *)(lVar6 + lVar14) = local_c8;
        *(undefined4 *)(lVar6 + 8 + lVar14) = (undefined4)local_c0;
        *(undefined4 *)(lVar6 + 0xc + lVar14) = local_c0._4_4_;
        local_c0 = 0;
        local_c8 = 0;
        if (local_b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_80,local_78);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar12 = lVar12 + 0x10;
    } while (lVar12 != local_d8);
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445267a8 FUN_1445267a8 body=390 status=ok
// SIG undefined FUN_1445267a8(void)

longlong FUN_1445267a8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = FUN_149471b67(DAT_14c951640);
  lVar7 = *param_2;
  if (lVar7 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_50 = &local_30;
      local_30 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_142b47bc4;
      local_58 = &LAB_1478989f1;
      local_60 = &LAB_146391124;
      local_68 = L"Engine";
      local_70 = 0x10000000000;
      local_78 = 0x10000005;
      local_80 = 0x10;
      local_88 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      lVar7 = *param_2;
      if (lVar7 == 0) goto LAB_1445268f1;
    }
    lVar6 = 0;
    if ((DAT_14cac6e60 == 0) || (lVar1 = *(longlong *)(lVar7 + 0x10), lVar1 == 0))
    goto LAB_1445268f3;
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
        DAT_14cac6e60 + 0x30)) {
      lVar6 = lVar7;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar7);
      }
      goto LAB_1445268f3;
    }
  }
LAB_1445268f1:
  lVar6 = 0;
LAB_1445268f3:
  *(longlong *)(lVar5 + 0x28) = lVar6;
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(lVar5 + 0x34) = uVar2;
  *(undefined4 *)(lVar5 + 0x38) = uVar3;
  *(undefined4 *)(lVar5 + 0x3c) = uVar4;
  *(undefined4 *)(lVar5 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 144526ea0 FUN_144526ea0 body=327 status=ok
// SIG undefined FUN_144526ea0(void)

ulonglong FUN_144526ea0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  undefined **local_d8 [5];
  byte local_b0;
  longlong *local_80;
  longlong local_60;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)*param_2;
  lVar2 = *(longlong *)(param_1 + 0x10);
  memset(local_d8,0,0x90);
  FUN_144869430(local_d8);
  local_48 = 0;
  local_d8[0] = &PTR_FUN_149e1e050;
  local_38 = 0x7fffffffffffffff;
  local_b0 = local_b0 | 1;
  local_40 = param_1;
  FUN_1449c2eca(local_d8,0);
  (**(code **)(*plVar1 + 0x2f0))(plVar1,local_d8);
  pcVar3 = *(code **)(lVar2 + 0x50);
  if (pcVar3 == (code *)0x0) {
    uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    plVar7 = (longlong *)(lVar2 + 0x70);
    if (*(longlong **)(lVar2 + 0x60) != (longlong *)0x0) {
      plVar7 = *(longlong **)(lVar2 + 0x60);
    }
    local_30 = plVar1;
    uVar5 = (**(code **)(*plVar7 + 8))(plVar7);
    uVar4 = (*pcVar3)(uVar5,&local_30);
    uVar6 = (ulonglong)uVar4;
  }
  local_d8[0] = &PTR__purecall_149e35f70;
  if (local_80 != (longlong *)0x0) {
    if (*local_80 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_80);
  }
  if (local_60 != 0) {
    if (*(longlong *)(local_60 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_60);
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144526fe8 FUN_144526fe8 body=117 status=ok
// SIG undefined FUN_144526fe8(void)

undefined8 * FUN_144526fe8(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14bcfd7f0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1447a127e(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 144527070 FUN_144527070 body=57 status=ok
// SIG undefined FUN_144527070(void)

undefined8 * FUN_144527070(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bcfd7f0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445270aa FUN_1445270aa body=260 status=ok
// SIG undefined FUN_1445270aa(void)

undefined8 FUN_1445270aa(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  undefined **local_c8 [5];
  byte local_a0;
  longlong *local_70;
  longlong local_50;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)*param_2;
  lVar2 = *param_1;
  memset(local_c8,0,0x90);
  FUN_144869430(local_c8);
  local_38 = 0;
  local_c8[0] = &PTR_FUN_149e1e050;
  local_28 = 0x7fffffffffffffff;
  local_a0 = local_a0 | 1;
  local_30 = lVar2 + 0x50;
  FUN_1449c2eca(local_c8,0);
  (**(code **)(*plVar1 + 0x2f0))(plVar1,local_c8);
  local_c8[0] = &PTR__purecall_149e35f70;
  if (local_70 != (longlong *)0x0) {
    if (*local_70 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_70);
  }
  if (local_50 != 0) {
    if (*(longlong *)(local_50 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_50);
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445271da FUN_1445271da body=29 status=ok
// SIG undefined FUN_1445271da(void)

undefined8 FUN_1445271da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144527230 FUN_144527230 body=29 status=ok
// SIG undefined FUN_144527230(void)

undefined8 FUN_144527230(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14452724e FUN_14452724e body=222 status=ok
// SIG undefined FUN_14452724e(void)

void FUN_14452724e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar4 = FUN_145ba6bd2();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (lVar5 = lVar2,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
       == lVar4 + 0x30)) goto LAB_144527285;
  }
  lVar5 = 0;
LAB_144527285:
  *(undefined8 *)(lVar5 + 0x130) = *(undefined8 *)(*param_1 + 0x250);
  *(undefined8 *)(lVar5 + 0x138) = *(undefined8 *)(*param_1 + 600);
  lVar4 = *param_1;
  *(undefined4 *)(lVar5 + 0x168) = *(undefined4 *)(lVar4 + 0x288);
  *(undefined8 *)(lVar5 + 0x160) = *(undefined8 *)(lVar4 + 0x280);
  FUN_145ebd534(lVar5 + 0x1a0,*param_1 + 0x290);
  FUN_145ebd534(lVar5 + 0x1b0,*param_1 + 0x2a0);
  iVar1 = *(int *)(*param_1 + 0x2b8);
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(lVar5 + 0x1f0,*(undefined8 *)(*param_1 + 0x2b0),iVar3);
  FUN_1494bd73c(lVar2,param_1 + 1);
  return;
}



// FUNCTION 14452735e FUN_14452735e body=29 status=ok
// SIG undefined FUN_14452735e(void)

undefined8 FUN_14452735e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14452737c FUN_14452737c body=756 status=ok
// SIG undefined FUN_14452737c(void)

void FUN_14452737c(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || (((lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 == 0 ||
           (*(uint *)(lVar7 + 0x10) != param_1[1])) ||
          (((*(uint *)(lVar7 + 8) & 0x10200000) != 0 ||
           ((param_1[3] == 0 || (uVar1 = param_1[2], (int)uVar1 < 0)))))))) ||
     (DAT_14c9647dc <= (int)uVar1)) goto LAB_14452742d;
  lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if ((((lVar7 == 0) || (*(uint *)(lVar7 + 0x10) != param_1[3])) ||
      ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) ||
     (((DAT_14c949800 & 1) != 0 || (lVar7 = FUN_149482f26(param_1 + 4), lVar7 == 0))))
  goto LAB_14452742d;
  if (param_1[1] == 0) {
LAB_14452766a:
    uVar5 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar6 + 2) != param_1[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
      goto LAB_14452766a;
      uVar5 = *puVar6;
    }
  }
  FUN_144525fe2(&local_58,uVar5,(char)param_1[0x12],*(undefined8 *)(param_1 + 0x13));
  lVar3 = local_58;
  if ((longlong)local_50 != 0) {
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar8);
      if (((*(int *)(lVar2 + 0x6b8) < 1) || ((longlong)**(char **)(lVar2 + 0x6b0) == -1)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x6a0) + (longlong)**(char **)(lVar2 + 0x6b0) * 8) ==
          0)) {
        FUN_14036294a(lVar2,1,0);
        *(undefined1 *)(lVar2 + 0x690) = 1;
        FUN_147a0f5aa(lVar2,*(undefined1 *)(lVar2 + 0x680));
        if (0 < *(int *)(lVar2 + 0x6b8)) goto LAB_144527565;
      }
      else {
LAB_144527565:
        if (((longlong)**(char **)(lVar2 + 0x6b0) != -1) &&
           (lVar2 = *(longlong *)
                     (*(longlong *)(lVar2 + 0x6a0) + (longlong)**(char **)(lVar2 + 0x6b0) * 8),
           lVar2 != 0)) {
          lVar4 = FUN_145ba3e1e();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            if ((param_1[3] == 0) || (uVar1 = param_1[2], (int)uVar1 < 0)) {
LAB_144527644:
              local_80 = 0;
            }
            else {
              local_80 = 0;
              if ((int)uVar1 < DAT_14c9647dc) {
                puVar6 = (undefined8 *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if (((puVar6 == (undefined8 *)0x0) || (*(uint *)(puVar6 + 2) != param_1[3])) ||
                   ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) goto LAB_144527644;
                local_80 = *puVar6;
              }
            }
            local_68 = param_1[0xe];
            uStack_64 = param_1[0xf];
            uStack_60 = param_1[0x10];
            uStack_5c = param_1[0x11];
            lVar4 = FUN_1494b35c2(lVar2,&local_68);
            if (lVar4 == 0) {
              local_78 = param_1[0xe];
              uStack_74 = param_1[0xf];
              uStack_70 = param_1[0x10];
              uStack_6c = param_1[0x11];
              FUN_1494b32c0(lVar2,local_80,&local_78,lVar7);
            }
          }
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)local_50 * 8 != lVar8);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
LAB_14452742d:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14452767c FUN_14452767c body=29 status=ok
// SIG undefined FUN_14452767c(void)

void FUN_14452767c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14452769a FUN_14452769a body=57 status=ok
// SIG undefined FUN_14452769a(void)

undefined8 * FUN_14452769a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bcfd870;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445277a6 FUN_1445277a6 body=109 status=ok
// SIG undefined FUN_1445277a6(void)

undefined8 * FUN_1445277a6(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14bcfda40;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  FUN_140d188f2(puVar1 + 1,param_1 + 8);
  return puVar1 + 1;
}



// FUNCTION 14452781a FUN_14452781a body=29 status=ok
// SIG undefined FUN_14452781a(void)

void FUN_14452781a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144527838 FUN_144527838 body=73 status=ok
// SIG undefined FUN_144527838(void)

undefined8 * FUN_144527838(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bcfda40;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144527a86 FUN_144527a86 body=109 status=ok
// SIG undefined FUN_144527a86(void)

undefined8 * FUN_144527a86(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14bcfda60;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  FUN_140d188f2(puVar1 + 1,param_1 + 8);
  return puVar1 + 1;
}



// FUNCTION 144527afa FUN_144527afa body=29 status=ok
// SIG undefined FUN_144527afa(void)

void FUN_144527afa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144527b18 FUN_144527b18 body=73 status=ok
// SIG undefined FUN_144527b18(void)

undefined8 * FUN_144527b18(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bcfda60;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144527cdd FUN_144527cdd body=2929 status=ok
// SIG undefined FUN_144527cdd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144527cdd(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcdddc0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcde130,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcde4a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcde810,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcdeb80,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcdeef0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcdf260,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcdf5e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcdf950,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcdfcc0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce0030,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce03a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce0710,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce0a70,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce0dd0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce1130,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce14a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce1800,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce1b60,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce1ec0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce2230,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce2590,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce2900,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14bce2ce0;
  local_68 = 0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce2d00,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce3060,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce33c0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce3730,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce3a90,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bce3f20);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14bce4a00;
  local_68 = 6;
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bce4a20);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce5470,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce5f70,2,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14bce6520;
  local_68 = 0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce6540,1,0);
  FUN_14098d3d2(FUN_144525f3d,L"/Script/OptimusCore",L"EOptimusDiagnosticLevel");
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bce6970,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bce6ab0);
  ppuStack_60 = &PTR_FUN_14bce70e0;
  local_68 = 3;
  local_58 = 2;
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bce7120);
  FUN_1446f470e(&local_50,PTR_u_bool_14c764e60,1);
  FUN_1446f470e(&local_50,PTR_u_float_14c764e68,1);
  FUN_1446f470e(&local_50,PTR_u_double_14c764e70,1);
  FUN_1446f470e(&local_50,PTR_DAT_14c764e78,1);
  FUN_1446f470e(&local_50,PTR_u_int32_14c764e80,1);
  FUN_1446f470e(&local_50,PTR_u_int64_14c764e88,1);
  FUN_1446f470e(&local_50,PTR_u_uint8_14c764e90,1);
  FUN_1446f470e(&local_50,PTR_u_uint32_14c764e98,1);
  FUN_1446f470e(&local_50,PTR_u_uint64_14c764ea0,1);
  FUN_1446f470e(&local_50,PTR_u_FName_14c764ea8,1);
  FUN_1446f470e(&local_50,PTR_u_FString_14c764eb0,1);
  FUN_1446f470e(&local_50,PTR_u_FText_14c764eb8,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<bool>_14c764ec0,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<float>_14c764ec8,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<double>_14c764ed0,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<int32>_14c764ed8,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<uint32>_14c764ee0,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<uint8>_14c764ee8,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<FName>_14c764ef0,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<FString>_14c764ef8,1);
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc1b318 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cc1b320);
  if (cVar1 == '\0') {
    _DAT_14cc1b320 = 0;
    uRam000000014cc1b328 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 0x20;
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bce95c0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bce9bb0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bce9f20);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 0xb;
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bcea6a0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 0xf;
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bceb250);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 5;
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bceb920);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bcebcc0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcec130,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcec540,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcec970,1,0);
  local_50 = "Vertex";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc1c100 = (ulonglong)uVar2;
  local_50 = "Triangle";
  local_48 = 8;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc1c0e8 = (ulonglong)uVar2;
  local_50 = "DuplicateVertex";
  local_48 = 0xf;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc1ba50 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bced750,2,&PTR_FUN_14bced700);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcee6c0,2,&PTR_FUN_14bcee670);
  FUN_140056680(&DAT_14cc1bb18,&DAT_149e00c10);
  atexit((_func_5014 *)&LAB_144526221);
  FUN_140056680(&DAT_14cc1bb28,&DAT_149e01f60);
  atexit((_func_5014 *)&LAB_144526232);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcef020,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcefa80,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcf0450,2,0);
  FUN_140056680(&DAT_14cc1bbc8,L"NumThreads");
  atexit((_func_5014 *)&LAB_144526785);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcf0da0,2,0);
  FUN_140056680(&DAT_14cc1c0f0,L"NumThreads");
  atexit((_func_5014 *)&LAB_144526796);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcf19b0,2,&PTR_FUN_14bcf1980);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcf2540,2,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcf33e0,2,&PTR_FUN_14bcf33b0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcf3cc0,2,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144528850 FUN_144528850 body=55 status=ok
// SIG undefined FUN_144528850(void)

void FUN_144528850(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c180 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c180 = FUN_14171c317(FUN_1467382bc,uVar1,L"EOptimusBufferWriteType");
  }
  return;
}



// FUNCTION 144528887 FUN_144528887 body=55 status=ok
// SIG undefined FUN_144528887(void)

void FUN_144528887(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c2f0 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c2f0 = FUN_14171c317(FUN_146738899,uVar1,L"EOptimusSkinnedMeshExecDomain");
  }
  return;
}



// FUNCTION 1445288d0 FUN_1445288d0 body=797 status=ok
// SIG undefined FUN_1445288d0(void)

void FUN_1445288d0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  uint local_88;
  uint local_84;
  longlong local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80 = param_2;
  if ((*(char *)(param_1 + 0xb1) != '\x01') ||
     ((lVar5 = FUN_1494e639c(param_2), lVar5 != 0 &&
      (lVar5 = FUN_1494e639c(param_2), *(char *)(lVar5 + 0x28) != '\x01')))) goto LAB_14452890b;
  puVar6 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  FUN_14945e0fa(puVar6);
  *puVar6 = &PTR_FUN_14bcfe1b0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  FUN_1494be4c6(puVar6);
  FUN_1494e6c6c(param_2,&local_90,0);
  uVar3 = local_88;
  lVar5 = (longlong)(int)local_88;
  local_88 = local_88 + 1;
  if (local_84 < local_88) {
    FUN_149482de0(&local_90,uVar3);
  }
  local_90[lVar5] = param_2;
  local_d8 = *(longlong *)(param_1 + 0x20);
  if (local_d8 == 0) {
LAB_144528a04:
    local_d8 = 0;
  }
  else {
    lVar5 = FUN_141155906();
    if ((*(int *)(*(longlong *)(local_d8 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_d8 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_144528a04;
  }
  if ((longlong)(int)local_88 != 0) {
    puVar8 = local_90 + (int)local_88;
    puVar10 = local_90;
    local_d0 = param_1;
    do {
      FUN_1494be550(local_d8,&local_78,*puVar10);
      puVar4 = local_78;
      lVar5 = (longlong)(int)puStack_70;
      if (lVar5 != 0) {
        lVar9 = 0;
        do {
          local_98 = *(undefined8 *)((longlong)puVar4 + lVar9);
          FUN_1494be626(puVar6,local_a8,&local_98);
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_a0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_a0 + 0x10))();
            }
          }
          lVar9 = lVar9 + 8;
        } while (lVar5 * 8 != lVar9);
      }
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8(local_78);
      }
      puVar10 = puVar10 + 1;
      param_2 = local_80;
      param_1 = local_d0;
    } while (puVar10 != puVar8);
  }
  if ((*(char *)(param_2 + 0x28) != '\0') &&
     (iVar2 = *(int *)(param_2 + 0xa8), (longlong)iVar2 != 0)) {
    lVar5 = *(longlong *)(param_2 + 0xa0);
    lVar9 = 0;
    do {
      local_78 = *(undefined8 **)(lVar5 + lVar9);
      FUN_1494be712(puVar6,local_b8,&local_78);
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
  }
  FUN_1494be712(puVar6,local_c8,&local_80);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  uVar7 = FUN_1494bd5e0(param_1);
  local_78 = puVar6;
  puStack_70 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puStack_70[1] = &DAT_100000001;
  *puStack_70 = &PTR_LAB_14bcfe3d0;
  puStack_70[2] = puVar6;
  FUN_1494a7e7c(uVar7,&local_78);
  if (local_90 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14452890b:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144528bee FUN_144528bee body=458 status=ok
// SIG undefined FUN_144528bee(void)

void FUN_144528bee(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 *local_e0;
  longlong local_d8;
  undefined1 local_c8 [64];
  undefined1 local_88 [48];
  longlong local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(char *)(param_1 + 0xb1) == '\x01') &&
     ((param_6 == 0 ||
      (((lVar2 = FUN_1494e64f0(param_6), lVar2 == param_1 &&
        (lVar2 = FUN_1494e639c(param_6), lVar2 == 0)) &&
       ((lVar2 = FUN_1494e639c(param_6), lVar2 == 0 ||
        (lVar2 = FUN_1494e639c(param_6), *(char *)(lVar2 + 0x28) == '\x01')))))))) {
    lVar2 = FUN_14001cc68(0xb8,0x10);
    FUN_14945f130(local_88,param_5);
    FUN_149482cae(local_c8,param_4);
    local_d8 = param_6;
    local_e8 = local_c8;
    local_e0 = local_88;
    FUN_1494be1c6(lVar2,param_1,param_2,param_3);
    uVar3 = FUN_1494bd5e0(param_1);
    local_58 = lVar2;
    local_50 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    local_50[1] = &DAT_100000001;
    *local_50 = &PTR_LAB_14bcfe3d0;
    local_50[2] = lVar2;
    cVar1 = FUN_1494a7e7c(uVar3,&local_58);
    if (cVar1 != '\0') {
      lVar4 = FUN_1494bd5e0();
      lVar4 = *(longlong *)(lVar4 + 0x20);
      if (lVar4 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        uVar3 = FUN_145a96b14();
        plVar5 = (longlong *)FUN_144718840(lVar4,uVar3);
      }
      (**(code **)(*plVar5 + 0x28))(plVar5,lVar2 + 0xa0);
    }
  }
  if (*(longlong *)(param_5 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144528dba FUN_144528dba body=2280 status=ok
// SIG undefined FUN_144528dba(void)

undefined8 * FUN_144528dba(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  undefined4 local_190;
  undefined8 local_188;
  wchar_t *local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  code ****local_160;
  code *local_158;
  code *local_150;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  undefined1 local_f8 [8];
  longlong *local_f0 [2];
  code ***local_e0 [2];
  code **local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  uint local_b0;
  uint local_ac;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  code ****local_88;
  ulonglong *local_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  code ***local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1494947ba(param_3 + 0x70,&local_a8);
  pcVar3 = *(char **)(local_a8 + 0x18);
  if (*pcVar3 == '\x04') {
    FUN_149458d9c(pcVar3,&local_b8);
    uVar2 = local_b0;
    lVar12 = (longlong)(int)local_b0;
    local_b0 = local_b0 + 1;
    if (local_ac < local_b0) {
      FUN_14945b542(&local_b8,uVar2);
    }
    local_b8[lVar12] = (longlong)pcVar3;
    if ((longlong)(int)local_b0 != 0) {
      plVar11 = local_b8 + (int)local_b0;
      plVar10 = local_b8;
      do {
        lVar12 = *plVar10;
        FUN_140f4f540();
        FUN_140f4f5a6(&DAT_14cc1c7d8,&local_c8,*(undefined8 *)(lVar12 + 4));
        if (((((local_c8 != 0) && (*(int *)(local_c8 + 0x30) != 0)) &&
             (uVar2 = *(uint *)(local_c8 + 0x2c), -1 < (int)uVar2)) &&
            (((int)uVar2 < DAT_14c9647dc &&
             (plVar9 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar9 != (longlong *)0x0)))) &&
           (((int)plVar9[2] == *(int *)(local_c8 + 0x30) &&
            (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (lVar4 = *plVar9, lVar4 != 0)))))) {
          if (DAT_14c948fa0 == 0) {
            local_e0[0] = (code ***)&DAT_1427db2a2;
            DAT_14c948fa0 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            local_138 = DAT_14c948fa0;
            FUN_1446f470e(&local_98,L"ScriptStruct",1);
            local_160 = local_e0;
            local_168 = &LAB_1468915ce;
            local_170 = FUN_1427dc742;
            local_180 = L"Engine";
            local_178 = (wchar_t *)CONCAT44(local_178._4_4_,199);
            local_188 = 0x10;
            local_190 = 0x10000020;
            local_198._0_4_ = 8;
            FUN_14574b4b2(local_138);
            DAT_14c948fa0 = local_138;
            local_128 = DAT_14c927740;
            if (DAT_14c927740 == 0) {
              local_68 = (code ***)FUN_1449e2820;
              local_150 = FUN_14081d0ea;
              local_158 = FUN_14081d0ea;
              local_160 = &local_68;
              local_168 = &LAB_146856450;
              local_170 = FUN_1427b121c;
              local_178 = L"Engine";
              local_180 = (wchar_t *)0x0;
              local_188 = CONCAT44(local_188._4_4_,0x10000021);
              local_190 = 8;
              local_198._0_4_ = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
              local_138 = DAT_14c948fa0;
            }
            DAT_14c948fa0 = local_138;
            local_128 = DAT_14c927740;
            if (DAT_14c948f88 == 0) {
              local_88 = (code ****)&DAT_1427db2a2;
              DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              local_140 = DAT_14c948f88;
              FUN_1446f470e(&local_78,L"Struct",1);
              local_160 = (code ****)&local_88;
              local_168 = &LAB_146891313;
              local_170 = FUN_146272f63;
              local_180 = L"Engine";
              local_178 = (wchar_t *)CONCAT44(local_178._4_4_,199);
              local_188 = 8;
              local_190 = 0x10000020;
              local_198._0_4_ = 8;
              FUN_14574b4b2(local_140);
              DAT_14c948f88 = local_140;
              local_130 = DAT_14c927740;
              if (DAT_14c927740 == 0) {
                local_68 = (code ***)FUN_1449e2820;
                local_150 = FUN_14081d0ea;
                local_158 = FUN_14081d0ea;
                local_160 = &local_68;
                local_168 = &LAB_146856450;
                local_170 = FUN_1427b121c;
                local_178 = L"Engine";
                local_180 = (wchar_t *)0x0;
                local_188 = CONCAT44(local_188._4_4_,0x10000021);
                local_190 = 8;
                local_198._0_4_ = 0x28;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                local_140 = DAT_14c948f88;
              }
              DAT_14c948f88 = local_140;
              local_130 = DAT_14c927740;
              uVar5 = FUN_1400163b0();
              local_198 = L"Struct";
              FUN_14574b446(uVar5,local_140,local_130,L"/Script/CoreUObject");
            }
            local_198 = L"ScriptStruct";
            FUN_14574b446(DAT_14c948f88,local_138,local_128,L"/Script/CoreUObject");
          }
          if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) == DAT_14c948fa0 + 0x30)) {
            lVar12 = *(longlong *)(lVar12 + 4);
            FUN_146739dc5(&local_d0,lVar4,0);
            plVar9 = (longlong *)*param_1;
            if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
              uVar2 = (uint)((ulonglong)local_d0 >> 0x10);
              uVar7 = (uint)local_d0 & 0xffff;
              plVar6 = plVar9 + 7;
              if ((longlong *)plVar9[8] != (longlong *)0x0) {
                plVar6 = (longlong *)plVar9[8];
              }
              iVar8 = *(int *)((longlong)plVar6 +
                              (ulonglong)
                              ((int)plVar9[9] - 1U &
                              (int)((ulonglong)local_d0 >> 0x20) + ((uint)local_d0 << 0x10 | uVar7)
                              + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
              if (iVar8 != -1) {
                do {
                  plVar6 = (longlong *)(*plVar9 + (longlong)iVar8 * 0x18);
                  if ((code **)*plVar6 == local_d0) {
                    if (plVar6 + 1 != (longlong *)0x0 && plVar6 != (longlong *)0x0) {
                      if (plVar6[1] == lVar12) {
                        *param_2 = 0;
                        *(undefined4 *)(param_2 + 1) = 0;
                      }
                      else {
                        FUN_1494e66cc(param_3,local_f8);
                        FUN_145715fae(local_f0,local_f8);
                        local_68 = (code ***)0x14bd1afb4;
                        local_60 = 0x16;
                        FUN_1446e940c(local_11c,&local_68);
                        local_68 = (code ***)0x14bd0717a;
                        local_60 = 0x11;
                        FUN_1446e940c(local_120,&local_68);
                        local_68 = (code ***)0x14bd1af60;
                        local_60 = 0x29;
                        FUN_140208c1e(local_118,local_120,local_11c,&local_68);
                        FUN_14023409e(&local_108,local_118,1);
                        local_68 = (code ***)CONCAT44(local_68._4_4_,4);
                        FUN_14023423e(local_58,local_f0);
                        local_80 = &local_48;
                        local_88 = &local_68;
                        FUN_14010d304(&local_78);
                        local_98 = local_108;
                        local_90 = local_100;
                        if (local_100 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(local_100 + 1) = (int)local_100[1] + 1;
                          UNLOCK();
                        }
                        FUN_14010c016(local_e0,&local_98,&local_78);
                        FUN_14007f2db(CONCAT44(uStack_74,local_78),local_70);
                        if (CONCAT44(uStack_74,local_78) != 0) {
                          FUN_1400020a8();
                        }
                        if (local_58[0] != (longlong *)0x0) {
                          (**(code **)(*local_58[0] + 0x10))();
                        }
                        if (local_100 != (longlong *)0x0) {
                          LOCK();
                          plVar10 = local_100 + 1;
                          *(int *)plVar10 = (int)*plVar10 + -1;
                          UNLOCK();
                          if ((int)*plVar10 == 0) {
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
                        if (local_f0[0] != (longlong *)0x0) {
                          (**(code **)(*local_f0[0] + 0x10))();
                        }
                        FUN_14023423e(param_2,local_e0);
                        if ((code ****)local_e0[0] != (code ****)0x0) {
                          (*(*local_e0[0])[2])();
                        }
                        if (local_118[0] != (longlong *)0x0) {
                          (**(code **)(*local_118[0] + 0x10))();
                        }
                      }
                      if (local_c0 != (longlong *)0x0) {
                        LOCK();
                        plVar10 = local_c0 + 1;
                        *(int *)plVar10 = (int)*plVar10 + -1;
                        UNLOCK();
                        if ((int)*plVar10 == 0) {
                          (**(code **)*local_c0)(local_c0);
                          LOCK();
                          piVar1 = (int *)((longlong)local_c0 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*local_c0 + 0x10))(local_c0);
                          }
                        }
                      }
                      goto LAB_14452944c;
                    }
                    break;
                  }
                  iVar8 = (int)plVar6[2];
                } while (iVar8 != -1);
              }
            }
            local_68 = &local_d0;
            FUN_148088676(plVar9,&local_78,&local_68,0);
            *(longlong *)(*plVar9 + 8 + (longlong)local_78 * 0x18) = lVar12;
          }
        }
        plVar9 = local_c0;
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_c0 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar11);
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
LAB_14452944c:
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_a0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1445296a4 FUN_1445296a4 body=1095 status=ok
// SIG undefined FUN_1445296a4(void)

undefined8 *
FUN_1445296a4(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong *local_140;
  longlong *local_138 [2];
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  longlong *local_120 [2];
  undefined8 local_110;
  longlong *local_108;
  undefined1 local_100 [8];
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  wchar_t **local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  int local_a0;
  int local_74;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1494e6b1c(param_4,local_a8,param_1);
  if (local_a0 - local_74 < 2) {
    if (*(int *)(param_3 + 8) == *(int *)(param_3 + 0x34)) {
      FUN_1494cf0d0(param_3,local_a8);
    }
    else if ((local_a0 != local_74) &&
            ((*(int *)(param_3 + 8) - *(int *)(param_3 + 0x34) != local_a0 - local_74 ||
             (cVar3 = FUN_1494cf14a(param_3,local_a8), cVar3 == '\0')))) {
      FUN_1494e66cc(param_4,local_100);
      FUN_145715fae(local_138,local_100);
      local_58 = L"IncompatibleBindingsPinGroup";
      local_50 = 0x1c;
      FUN_1446e940c(local_124,&local_58);
      local_58 = L"OptimusKernelBase";
      local_50 = 0x11;
      FUN_1446e940c(local_128,&local_58);
      local_58 = 
      L"Component binding for pin \'{0}\' is different from the component bindings of the other pins in its group"
      ;
      local_50 = 0x67;
      FUN_140208c1e(local_120,local_128,local_124,&local_58);
      FUN_14023409e(&local_148,local_120,1);
      local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
      FUN_14023423e(local_48,local_138);
      local_c0 = &local_38;
      local_c8 = &local_58;
      FUN_14010d304(&local_b8);
      local_d8 = local_148;
      local_d0 = local_140;
      if (local_140 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_140 + 1) = (int)local_140[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_e8,&local_d8,&local_b8);
      FUN_14007f2db(local_b8,local_b0);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (local_48[0] != (longlong *)0x0) {
        (**(code **)(*local_48[0] + 0x10))();
      }
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_140 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar2 = (int *)((longlong)local_140 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_140 + 0x10))(local_140);
          }
        }
      }
      goto LAB_144529882;
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    FUN_1494e66cc(param_4,local_100);
    FUN_145715fae(local_f8,local_100);
    local_58 = L"MultipleBindingsOnPin";
    local_50 = 0x15;
    FUN_1446e940c(local_124,&local_58);
    local_58 = L"OptimusKernelBase";
    local_50 = 0x11;
    FUN_1446e940c(local_128,&local_58);
    local_58 = L"Multiple component bindings arriving into pin \'{0}\'";
    local_50 = 0x33;
    FUN_140208c1e(local_120,local_128,local_124,&local_58);
    FUN_14023409e(&local_110,local_120,1);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(local_48,local_f8);
    local_c0 = &local_38;
    local_c8 = &local_58;
    FUN_14010d304(&local_b8);
    local_d8 = local_110;
    local_d0 = local_108;
    if (local_108 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_e8,&local_d8,&local_b8);
    FUN_14007f2db(local_b8,local_b0);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    local_138[0] = local_f8[0];
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_108 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar2 = (int *)((longlong)local_108 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        local_138[0] = local_f8[0];
        if (*piVar2 == 0) {
          (**(code **)(*local_108 + 0x10))(local_108);
          local_138[0] = local_f8[0];
        }
      }
    }
LAB_144529882:
    if (local_138[0] != (longlong *)0x0) {
      (**(code **)(*local_138[0] + 0x10))();
    }
    FUN_14023423e(param_2,local_e8);
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_120[0] != (longlong *)0x0) {
      (**(code **)(*local_120[0] + 0x10))();
    }
  }
  local_60 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1494d6142(local_a8);
  if ((local_38 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144529aec FUN_144529aec body=96 status=ok
// SIG undefined FUN_144529aec(void)

undefined8 FUN_144529aec(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_140f4f540();
    FUN_1494947ba(param_1 + 8,local_28);
    uVar1 = FUN_14949c1ac(local_28);
  }
  else {
    uVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144529b4e FUN_144529b4e body=561 status=ok
// SIG undefined FUN_144529b4e(void)

ulonglong FUN_144529b4e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  int local_60;
  undefined8 *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1494e6c6c(param_2,&local_58);
  uVar3 = local_50;
  lVar5 = (longlong)(int)local_50;
  local_50 = local_50 + 1;
  if (local_4c < local_50) {
    FUN_149482de0(&local_58,uVar3);
  }
  local_58[lVar5] = param_2;
  lVar5 = (longlong)(int)local_50;
  if (1 < lVar5) {
    lVar7 = 0;
    puVar4 = local_58;
    do {
      uVar1 = *puVar4;
      *puVar4 = local_58[lVar5 + lVar7 + -1];
      local_58[lVar5 + lVar7 + -1] = uVar1;
      lVar7 = lVar7 + -1;
      puVar4 = puVar4 + 1;
    } while (-lVar7 != (ulonglong)(local_50 >> 1));
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    lVar7 = FUN_141155906();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) goto LAB_144529c0b;
  }
  lVar5 = 0;
LAB_144529c0b:
  puVar4 = local_58;
  lVar7 = (longlong)(int)local_50;
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      FUN_1494aca06(lVar5,&local_68,*(undefined8 *)((longlong)puVar4 + lVar8));
      iVar2 = local_60;
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (iVar2 != 0) {
        uVar6 = 0;
        goto LAB_144529c6a;
      }
      lVar8 = lVar8 + 8;
    } while (lVar7 * 8 != lVar8);
  }
  lVar5 = FUN_1494e639c(param_2);
  if (lVar5 == 0) {
    lVar5 = param_1 + 0x50;
  }
  else {
    lVar5 = FUN_1494e639c(param_2);
    lVar5 = lVar5 + 0xa0;
  }
  local_70 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_68 = &local_70;
  FUN_1494e352c(lVar5);
  FUN_1494e7236(param_2,8);
  puVar4 = local_58;
  lVar5 = (longlong)(int)local_50;
  if (lVar5 != 0) {
    param_2 = param_1 + 0x60;
    lVar7 = 0;
    do {
      uVar1 = *(undefined8 *)((longlong)puVar4 + lVar7);
      FUN_1494e66cc(uVar1,&local_78);
      FUN_144a8b5fe(param_2,local_78);
      FUN_1494acfa0(uVar1);
      lVar7 = lVar7 + 8;
    } while (lVar5 * 8 != lVar7);
  }
  uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  if (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xec)) {
    FUN_1494e32da(param_1 + 0xb8);
    FUN_1494e365c(param_1 + 0xb8);
  }
LAB_144529c6a:
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144529d80 FUN_144529d80 body=512 status=ok
// SIG undefined FUN_144529d80(void)

/* WARNING: Removing unreachable block (ram,0x000144529f53) */

void FUN_144529d80(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_2[1] != 0) {
    lVar9 = 0;
    uVar5 = 0;
    do {
      uVar1 = *(ulonglong *)(*param_2 + lVar9);
      uVar3 = (uint)(uVar1 >> 0x10);
      uVar5 = (ulonglong)
              ((int)(uVar1 >> 0x20) + (int)(uVar1 & 0xffff) +
               (int)(uVar5 >> 2) + (uint)uVar5 * 0x40 + (int)uVar1 * 0x10000 +
               (uVar3 << 0x13 | uVar3 & 0xffff) + (int)((uVar1 & 0xffff) >> 4) + 0x9e3779b9 ^
              (uint)uVar5);
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)param_2[1] * 8 != lVar9);
    iVar4 = FUN_1494cf57e(param_1[1],uVar5,param_2);
    if (iVar4 == -1) {
      local_58 = (undefined2 *)0x0;
      uStack_50 = 0;
      lVar9 = param_2[1];
      if ((longlong)(int)lVar9 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        lVar6 = *param_2;
        lVar7 = 0;
        local_78 = param_1;
        do {
          local_60 = *(undefined8 *)(lVar6 + lVar7);
          FUN_1400021e4(&local_60,&local_70);
          iVar4 = (int)local_68 + -1;
          if ((int)local_68 == 0) {
            iVar4 = 0;
          }
          FUN_1400020e8(&local_58,local_70,iVar4);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar9 * 8 != lVar7);
        puVar8 = local_58;
        param_1 = local_78;
        if ((int)uStack_50 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
      }
      plVar2 = (longlong *)*param_1;
      FUN_140002266(&local_70,L"uint Num%s();",puVar8);
      iVar4 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
        FUN_1447a1bd6(plVar2,iVar4);
      }
      lVar9 = *plVar2;
      lVar6 = (longlong)iVar4 * 0x10;
      *(undefined8 *)(lVar9 + lVar6) = 0;
      *(longlong *)(lVar9 + lVar6) = local_70;
      *(int *)(lVar9 + 8 + lVar6) = (int)local_68;
      *(undefined4 *)(lVar9 + 0xc + lVar6) = local_68._4_4_;
      local_68 = 0;
      local_70 = 0;
      FUN_1494d6f02(param_1[1],&local_70,param_2);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144529f81 FUN_144529f81 body=222 status=ok
// SIG undefined FUN_144529f81(void)

undefined8 FUN_144529f81(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  lVar2 = FUN_149466e92(param_2);
  if (((*(int *)(lVar2 + 0x30) != 0) && (uVar1 = *(uint *)(lVar2 + 0x2c), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(lVar2 + 0x30))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
      lVar3 = FUN_1408cc5f4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_146739dc5(&local_28,lVar2,0);
      }
    }
  }
  lVar2 = FUN_149466e92(param_2);
  FUN_149458322(*(undefined8 *)(lVar2 + 0x18),param_1,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452a060 FUN_14452a060 body=2709 status=ok
// SIG undefined FUN_14452a060(void)

void FUN_14452a060(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  char param_5)

{
  longlong *plVar1;
  ushort uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  void *pvVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  void *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  void *local_188;
  int local_180;
  undefined4 local_17c;
  void *local_178;
  int local_170;
  undefined4 local_16c;
  void *local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  undefined8 local_118;
  void *pvStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  void *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_140f4f540();
  local_1e8 = (longlong)*(int *)(param_2 + 4);
  plVar1 = param_2 + 1;
  iVar5 = *(int *)(param_2 + 2);
  local_200 = param_2;
  if (local_1e8 == 0) {
    uVar10 = 0;
    iVar6 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    if (iVar6 < 1) {
      iVar5 = FUN_1494d7978(param_3,0);
      if (iVar5 == -1) goto LAB_14452a0d8;
    }
    else {
      if (iVar5 == 0) {
        puVar11 = &DAT_149dfb77a;
      }
      else {
        puVar11 = (undefined2 *)*plVar1;
      }
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
      } while (iVar6 != iVar5);
      iVar5 = FUN_1494d7978(param_3);
      if (iVar5 == -1) goto LAB_14452a0d8;
      lVar7 = 0;
      uVar10 = 0;
      do {
        uVar12 = ((uint)(ushort)puVar11[lVar7] + (uint)(0x19 < (ushort)puVar11[lVar7] - 0x61) * 0x20
                 ) - 0x20;
        uVar10 = uVar10 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar10 ^ uVar12) & 0xff) * 4)
        ;
        uVar10 = uVar10 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar12 >> 8 & 0xff) * 4);
        lVar7 = lVar7 + 1;
      } while (iVar6 != (int)lVar7);
    }
    iVar5 = FUN_1494d7978(param_3,uVar10,plVar1);
    lVar7 = 0;
    if (iVar5 != -1) {
      lVar7 = (longlong)iVar5 * 0x20 + *param_3;
    }
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if ((*(char *)(lVar7 + 0x20) != '\x01') || (*(int *)(lVar7 + 0x18) != 1)) goto LAB_14452a0d8;
    FUN_14452aaf6(&DAT_14cc1c7d8,local_a0,*(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 0x20));
    FUN_140e6511c(&local_90,local_a0);
    cVar4 = FUN_14945fc10(&local_90);
    pvVar8 = local_70;
    if (cVar4 == '\0') goto LAB_14452a63b;
    if (param_5 == '\0') {
      local_148 = local_90;
      local_140 = local_88;
      local_138 = local_80;
      uStack_134 = uStack_7c;
      uStack_130 = uStack_78;
      uStack_12c = uStack_74;
      local_128 = (void *)0x0;
      local_120 = local_68;
      if ((longlong)local_68 == 0) {
        local_11c = 0;
      }
      else {
        FUN_1446dd670(&local_128,local_68,0);
        memcpy(local_128,pvVar8,(longlong)local_68 * 2);
      }
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      pvStack_110 = (void *)0x0;
      FUN_140e6507e(&local_118);
      local_210 = 0;
      uStack_208 = 0;
      local_218 = &local_148;
      FUN_149495630(param_1,*local_200,2,&local_118);
    }
    else {
      local_d0 = local_90;
      local_c8 = local_88;
      local_c0 = local_80;
      uStack_bc = uStack_7c;
      uStack_b8 = uStack_78;
      uStack_b4 = uStack_74;
      local_b0 = (void *)0x0;
      local_a8 = local_68;
      if ((longlong)local_68 == 0) {
        local_a4 = 0;
      }
      else {
        FUN_1446dd670(&local_b0,local_68,0);
        memcpy(local_b0,pvVar8,(longlong)local_68 * 2);
      }
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      pvStack_110 = (void *)0x0;
      FUN_140e6507e(&local_118);
      local_218 = &local_d0;
      local_210 = 0;
      FUN_144528bee(param_1,*local_200,2,&local_118);
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    pvVar8 = pvStack_110;
    if (local_f8 != 0) {
      FUN_1400020a8();
      pvVar8 = pvStack_110;
    }
LAB_14452a8f8:
    if (pvVar8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_1f8 = plVar1;
    local_1f0 = param_4;
    local_1e0 = param_1;
    if (iVar5 < 2) goto LAB_14452a0d8;
    lVar14 = param_2[3];
    lVar7 = lVar14 + local_1e8 * 0x18;
    do {
      iVar6 = *(int *)(lVar14 + 0x10) + -1;
      if (*(int *)(lVar14 + 0x10) == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        iVar13 = 0;
        do {
          param_4 = (longlong *)0x0;
          iVar13 = iVar13 + 1;
        } while (iVar6 != iVar13);
      }
      iVar6 = FUN_1494d7978(param_3);
      plVar1 = local_1f8;
      if (iVar6 == -1) goto LAB_14452a0d8;
      lVar14 = lVar14 + 0x18;
    } while (lVar14 != lVar7);
    uVar10 = 0;
    iVar6 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    if (iVar6 < 1) {
      iVar5 = FUN_1494d7978(param_3,0,local_1f8);
      if (iVar5 != -1) goto LAB_14452a5b4;
      uVar10 = 0;
      iVar5 = FUN_1494d7978(local_1f0,0,plVar1);
      if (iVar5 == -1) goto LAB_14452a0d8;
LAB_14452a318:
      plVar1 = local_1f0;
      iVar5 = FUN_1494d7978(local_1f0,uVar10,local_1f8);
      lVar7 = 0;
      if (iVar5 != -1) {
        lVar7 = (longlong)iVar5 * 0x20 + *plVar1;
      }
      lVar7 = *(longlong *)(lVar7 + 0x10);
      if ((*(char *)(lVar7 + 0x20) != '\0') || (*(int *)(lVar7 + 0x18) != (int)local_1e8 + 1))
      goto LAB_14452a0d8;
      uVar9 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      lVar14 = 0x50;
    }
    else {
      lVar7 = *local_1f8;
      lVar14 = 0;
      uVar9 = 0;
      do {
        uVar2 = *(ushort *)(lVar7 + lVar14 * 2);
        uVar10 = ((uint)(0x19 < uVar2 - 0x61) * 0x20 + (uint)uVar2) - 0x20;
        uVar12 = (uint)(uVar9 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar10) & 0xff) * 4);
        param_4 = (longlong *)0x0;
        uVar9 = (ulonglong)
                (uVar12 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar12 & 0xff ^ uVar10 >> 8 & 0xff) * 4));
        lVar14 = lVar14 + 1;
      } while (iVar6 != (int)lVar14);
      iVar5 = FUN_1494d7978(param_3,uVar9,local_1f8);
      if (iVar5 == -1) {
        lVar14 = 0;
        uVar9 = 0;
        do {
          uVar2 = *(ushort *)(lVar7 + lVar14 * 2);
          uVar10 = ((uint)(0x19 < uVar2 - 0x61) * 0x20 + (uint)uVar2) - 0x20;
          uVar12 = (uint)(uVar9 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar10) & 0xff) * 4);
          param_4 = (longlong *)0x0;
          uVar9 = (ulonglong)
                  (uVar12 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar12 & 0xff ^ uVar10 >> 8 & 0xff) * 4));
          lVar14 = lVar14 + 1;
        } while (iVar6 != (int)lVar14);
        iVar5 = FUN_1494d7978(local_1f0,uVar9,plVar1);
        if (iVar5 == -1) goto LAB_14452a0d8;
        if (iVar6 < 1) {
          uVar10 = 0;
        }
        else {
          lVar7 = 0;
          uVar10 = 0;
          do {
            uVar2 = *(ushort *)(*local_1f8 + lVar7 * 2);
            uVar12 = ((uint)(0x19 < uVar2 - 0x61) * 0x20 + (uint)uVar2) - 0x20;
            param_4 = (longlong *)(ulonglong)uVar12;
            uVar10 = uVar10 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar10 ^ uVar12) & 0xff) * 4);
            uVar10 = uVar10 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar12 >> 8 & 0xff) * 4)
            ;
            lVar7 = lVar7 + 1;
          } while (iVar6 != (int)lVar7);
        }
        goto LAB_14452a318;
      }
      lVar14 = 0;
      uVar10 = 0;
      do {
        uVar2 = *(ushort *)(lVar7 + lVar14 * 2);
        uVar12 = ((uint)uVar2 + (uint)(0x19 < uVar2 - 0x61) * 0x20) - 0x20;
        uVar10 = uVar10 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar10 ^ uVar12) & 0xff) * 4)
        ;
        uVar10 = uVar10 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar12 >> 8 & 0xff) * 4);
        lVar14 = lVar14 + 1;
      } while (iVar6 != (int)lVar14);
LAB_14452a5b4:
      iVar5 = FUN_1494d7978(param_3,uVar10,plVar1);
      lVar7 = 0;
      if (iVar5 != -1) {
        lVar7 = (longlong)iVar5 * 0x20 + *param_3;
      }
      lVar7 = *(longlong *)(lVar7 + 0x10);
      if ((*(char *)(lVar7 + 0x20) != '\x01') || (*(int *)(lVar7 + 0x18) != (int)local_1e8 + 1))
      goto LAB_14452a0d8;
      uVar9 = CONCAT71((int7)((ulonglong)param_4 >> 8),2);
      lVar14 = 0x20;
    }
    FUN_14452aaf6(&DAT_14cc1c7d8,local_158,*(undefined8 *)(*(longlong *)(lVar7 + 0x10) + lVar14));
    FUN_140e6511c(&local_90,local_158);
    cVar4 = FUN_14945fc10(&local_90);
    if (cVar4 != '\0') {
      local_168 = (void *)0x0;
      uStack_160 = 0;
      iVar5 = *(int *)(local_200 + 4);
      if ((longlong)iVar5 == 0) {
        local_170 = 0;
LAB_14452a799:
        local_178 = (void *)0x0;
        local_16c = 0;
      }
      else {
        lVar7 = local_200[3];
        lVar14 = 0;
        do {
          uVar3 = uStack_160;
          lVar15 = (longlong)(int)uStack_160;
          uVar10 = (int)uStack_160 + 1;
          uStack_160 = CONCAT44(uStack_160._4_4_,uVar10);
          if (uStack_160._4_4_ < uVar10) {
            FUN_1446f84a2(&local_168,uVar3 & 0xffffffff);
          }
          pvVar8 = local_168;
          *(undefined8 *)((longlong)local_168 + lVar15 * 8) = *(undefined8 *)(lVar7 + lVar14);
          lVar14 = lVar14 + 0x18;
        } while ((longlong)iVar5 * 0x18 != lVar14);
        lVar7 = (longlong)(int)uStack_160;
        local_178 = (void *)0x0;
        local_170 = (int)uStack_160;
        if (lVar7 == 0) goto LAB_14452a799;
        FUN_1401b309e(&local_178,uStack_160 & 0xffffffff,0);
        memcpy(local_178,pvVar8,lVar7 << 3);
      }
      FUN_1494a1964(&local_118,&local_178,*(undefined4 *)(local_200 + 5));
      pvVar8 = local_70;
      if (param_5 == '\0') {
        local_1d8 = local_90;
        local_1d0 = local_88;
        local_1c8 = local_80;
        uStack_1c4 = uStack_7c;
        uStack_1c0 = uStack_78;
        uStack_1bc = uStack_74;
        local_1b8 = (void *)0x0;
        local_1b0 = local_68;
        if ((longlong)local_68 == 0) {
          local_1ac = 0;
        }
        else {
          FUN_1446dd670(&local_1b8,local_68,0);
          memcpy(local_1b8,pvVar8,(longlong)local_68 * 2);
        }
        local_210 = 0;
        uStack_208 = 0;
        local_218 = &local_1d8;
        FUN_149495630(local_1e0,*local_200,uVar9 & 0xffffffff,&local_118);
      }
      else {
        local_1a8 = local_90;
        local_1a0 = local_88;
        local_198 = local_80;
        uStack_194 = uStack_7c;
        uStack_190 = uStack_78;
        uStack_18c = uStack_74;
        local_188 = (void *)0x0;
        local_180 = local_68;
        if ((longlong)local_68 == 0) {
          local_17c = 0;
        }
        else {
          FUN_1446dd670(&local_188,local_68,0);
          memcpy(local_188,pvVar8,(longlong)local_68 * 2);
        }
        local_218 = &local_1a8;
        local_210 = 0;
        FUN_144528bee(local_1e0,*local_200,uVar9 & 0xffffffff,&local_118);
      }
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
      pvVar8 = local_168;
      if (pvStack_110 != (void *)0x0) {
        FUN_1400020a8();
        pvVar8 = local_168;
      }
      goto LAB_14452a8f8;
    }
  }
LAB_14452a63b:
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14452a0d8:
  if ((local_60 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452aaf6 FUN_14452aaf6 body=290 status=ok
// SIG undefined FUN_14452aaf6(void)

longlong * FUN_14452aaf6(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x60);
    plVar3 = plVar10 + *(int *)(param_1 + 0x68);
    do {
      if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
        lVar6 = *plVar10;
        uVar5 = (uint)((ulonglong)lVar6 >> 0x10);
        uVar8 = (uint)lVar6 & 0xffff;
        lVar7 = *(longlong *)(param_1 + 0x50);
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar7 = param_1 + 0x48;
        }
        iVar9 = *(int *)(lVar7 + (ulonglong)
                                 (*(int *)(param_1 + 0x58) - 1U &
                                 (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar8) +
                                 (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar9 != -1) {
          do {
            lVar7 = *(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 0xc0;
            if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 0xc0) == lVar6)
            goto LAB_14452aba3;
            iVar9 = *(int *)(lVar7 + 0xb0);
          } while (iVar9 != -1);
        }
      }
      lVar7 = 0;
LAB_14452aba3:
      lVar6 = *(longlong *)(lVar7 + 0x10);
      *param_2 = lVar6;
      lVar7 = *(longlong *)(lVar7 + 0x18);
      param_2[1] = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
        lVar6 = *param_2;
      }
      if (*(longlong *)(lVar6 + 0x18) == param_3) {
        return param_2;
      }
      plVar4 = (longlong *)param_2[1];
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
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar3);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14452ac18 FUN_14452ac18 body=55 status=ok
// SIG undefined FUN_14452ac18(void)

void FUN_14452ac18(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c580 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c580 = FUN_14171c317(FUN_146739387,uVar1,L"EOptimusTerminalType");
  }
  return;
}



// FUNCTION 14452ac50 FUN_14452ac50 body=229 status=ok
// SIG undefined FUN_14452ac50(void)

void FUN_14452ac50(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_28 = param_3;
  if (param_3 == param_2 || param_2 == 0) goto LAB_14452ac83;
  if (param_3 == 0) {
    lVar1 = FUN_1494e639c(param_2);
    if (lVar1 == 0) {
      lVar1 = *(longlong *)
               (*(longlong *)(param_1 + 0x50) + (longlong)(*(int *)(param_1 + 0x58) + -1) * 8);
    }
    else {
      lVar1 = FUN_1494e639c(param_2);
      if (lVar1 == 0) goto LAB_14452acf2;
      lVar1 = FUN_1494e639c(param_2);
      lVar1 = *(longlong *)
               (*(longlong *)(lVar1 + 0xa0) + (longlong)(*(int *)(lVar1 + 0xa8) + -1) * 8);
    }
    if (lVar1 == param_2) goto LAB_14452ac83;
  }
  else {
    lVar1 = FUN_1494e63d6(param_3);
    lVar2 = FUN_1494e639c(param_2);
    if (lVar1 != lVar2) goto LAB_14452ac83;
  }
LAB_14452acf2:
  uVar3 = FUN_1494bd5e0(param_1);
  FUN_1494be808(uVar3,&local_30,&local_28);
LAB_14452ac83:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452ad36 FUN_14452ad36 body=166 status=ok
// SIG undefined FUN_14452ad36(void)

undefined8 FUN_14452ad36(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_2;
  FUN_1400021e4(&local_28,local_48);
  FUN_140ba7826(&local_38,L"(Hidden)",local_48);
  puVar1 = local_38;
  if (local_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar1,1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14452ade9 FUN_14452ade9 body=55 status=ok
// SIG undefined FUN_14452ade9(void)

void FUN_14452ade9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c740 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c740 = FUN_14171c317(FUN_146739b2c,uVar1,L"EOptimusDataDomainType");
  }
  return;
}



// FUNCTION 14452ae20 FUN_14452ae20 body=55 status=ok
// SIG undefined FUN_14452ae20(void)

void FUN_14452ae20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c780 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c780 = FUN_14171c317(FUN_146739bc4,uVar1,L"EOptimusDataTypeUsageFlags");
  }
  return;
}



// FUNCTION 14452ae57 FUN_14452ae57 body=55 status=ok
// SIG undefined FUN_14452ae57(void)

void FUN_14452ae57(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c798 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c798 = FUN_14171c317(FUN_146739bf3,uVar1,L"EOptimusDataTypeFlags");
  }
  return;
}



// FUNCTION 14452ae8e FUN_14452ae8e body=1438 status=ok
// SIG undefined FUN_14452ae8e(void)

ulonglong FUN_14452ae8e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined *puVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  code *local_c0;
  undefined1 local_b4 [4];
  longlong local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong *local_88 [2];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar6 = (longlong *)FUN_14016b782();
  if (plVar6 == param_2) {
    uVar10 = 0;
  }
  else {
    FUN_140f4f540();
    FUN_146739dc5(&local_98,param_2,1);
    FUN_140f4f5a6(&DAT_14cc1c7d8,&local_a8,local_98);
    if (local_a8 == (undefined8 *)0x0) {
      lVar12 = param_2[10];
      uVar10 = 0;
      if (lVar12 != 0) {
        local_78 = 0;
        local_70 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_6c = 0x80;
        uStack_68 = 0xffffffff;
        local_64 = 0;
        local_58 = (undefined1 *)0x0;
        local_50 = 0;
        plVar6 = param_2;
        if (param_2 != (longlong *)0x0) {
LAB_14452afd1:
          for (; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x18)) {
            if ((~*(uint *)(*(longlong *)(lVar12 + 8) + 0x18) & 0x8001) == 0) {
LAB_14452b039:
              lVar7 = FUN_1408cc5f4();
              if ((*(int *)(lVar7 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                  lVar7 + 0x30)) {
                FUN_1494ab432(&local_b0,param_2,lVar12);
                if ((int)uStack_90 != local_64) {
                  uVar3 = (uint)((ulonglong)local_b0 >> 0x10);
                  uVar9 = (uint)local_b0 & 0xffff;
                  puVar8 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar8 = local_60;
                  }
                  for (iVar2 = *(int *)(puVar8 + (ulonglong)
                                                 (local_50 - 1U &
                                                 (int)((ulonglong)local_b0 >> 0x20) +
                                                 ((uint)local_b0 << 0x10 | uVar9) +
                                                 (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) *
                                                 4); iVar2 != -1;
                      iVar2 = *(int *)((longlong)iVar2 * 0x10 + local_98 + 8)) {
                    if (*(longlong *)(local_98 + (longlong)iVar2 * 0x10) == local_b0)
                    goto LAB_14452b357;
                  }
                }
                FUN_144a13f80(&local_98,local_b4,&local_b0,0);
              }
              puVar13 = *(undefined **)(lVar12 + 8);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c952a58) &&
                 (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
                local_c8 = (undefined *)FUN_1446ddbd2();
                local_c0 = FUN_1403a682c;
                local_d0 = 0;
                local_d8 = 0x108001;
                FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000);
                atexit(FUN_142818c9e);
                _Init_thread_footer(&DAT_14c952a58);
              }
              if (DAT_14c952a10 == 0) {
                bVar14 = puVar13 != (undefined *)0x0;
                if (puVar13 != &DAT_14c952a08 && bVar14) {
                  do {
                    puVar13 = *(undefined **)(puVar13 + 0x30);
                    bVar14 = puVar13 != (undefined *)0x0;
                    if (puVar13 == &DAT_14c952a08) break;
                  } while (puVar13 != (undefined *)0x0);
                }
                if (!bVar14) goto LAB_14452b0d4;
LAB_14452b098:
                cVar5 = FUN_14452ae8e(param_1,*(undefined8 *)(lVar12 + 0x70));
              }
              else {
                if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c952a10) != 0) goto LAB_14452b098;
LAB_14452b0d4:
                puVar13 = *(undefined **)(lVar12 + 8);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c951ae0) &&
                   (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
                  FUN_1446ddbd2();
                  local_c0 = FUN_140b31576;
                  local_c8 = &DAT_14c951a38;
                  local_d0 = 0;
                  local_d8 = 0x208001;
                  FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000);
                  atexit(FUN_14280cbf7);
                  _Init_thread_footer(&DAT_14c951ae0);
                }
                if (DAT_14c951a98 == 0) {
                  bVar14 = puVar13 != (undefined *)0x0;
                  if (puVar13 != &DAT_14c951a90 && bVar14) {
                    do {
                      puVar13 = *(undefined **)(puVar13 + 0x30);
                      bVar14 = puVar13 != (undefined *)0x0;
                      if (puVar13 == &DAT_14c951a90) break;
                    } while (puVar13 != (undefined *)0x0);
                  }
                  if (bVar14) goto LAB_14452b10f;
LAB_14452b147:
                  cVar5 = FUN_14452ec4a(param_1,lVar12);
                }
                else {
                  if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c951a98) == 0) goto LAB_14452b147;
LAB_14452b10f:
                  cVar5 = FUN_14452ea10(param_1,lVar12);
                }
              }
              if (cVar5 != '\0') {
                plVar11 = (longlong *)(lVar12 + 0x18);
                do {
                  for (lVar12 = *plVar11; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x18)) {
                    if ((~*(uint *)(*(longlong *)(lVar12 + 8) + 0x18) & 0x8001) == 0)
                    goto LAB_14452b039;
                  }
                  if (*(code **)(*plVar6 + 0x2b0) == (code *)&LAB_1446e8c94) {
                    plVar6 = (longlong *)plVar6[8];
                  }
                  else {
                    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2b0))(plVar6);
                  }
                  plVar11 = plVar6 + 10;
                } while (plVar6 != (longlong *)0x0);
                goto LAB_14452b35b;
              }
LAB_14452b357:
              uVar10 = 0;
              goto LAB_14452b35e;
            }
          }
          if (*(code **)(*plVar6 + 0x2b0) == (code *)&LAB_1446e8c94) {
            plVar6 = (longlong *)plVar6[8];
          }
          else {
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2b0))(plVar6);
          }
          if (plVar6 != (longlong *)0x0) goto code_r0x00014452b00f;
        }
LAB_14452b35b:
        uVar10 = (ulonglong)*(byte *)(param_1 + 1);
LAB_14452b35e:
        local_50 = 0;
        if (local_58 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        uVar4 = uStack_90 >> 0x20;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        if ((int)uVar4 != 0) {
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
      }
    }
    else {
      FUN_140f4f540();
      FUN_140fc897e(&DAT_14cc1c7d8,&local_98,*local_a8);
      if (local_98 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = CONCAT71((int7)((ulonglong)&local_a8 >> 8),
                          *(byte *)(param_1 + 1) & *(byte *)(local_a8 + 9));
        if (local_88[0] == (longlong *)0x0) {
          local_88[0] = &local_78;
        }
        (**(code **)(*local_88[0] + 0x10))();
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_a0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_a0 + 0x10))(local_a0);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014452b00f:
  lVar12 = plVar6[10];
  goto LAB_14452afd1;
}



// FUNCTION 14452b4ce FUN_14452b4ce body=611 status=ok
// SIG undefined FUN_14452b4ce(void)

ulonglong FUN_14452b4ce(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  undefined7 uVar5;
  ulonglong uVar4;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined1 local_58 [14];
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  uVar5 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if ((*(uint *)(lVar2 + 8) >> 0x19 & 1) == 0) {
    uVar4 = CONCAT71(uVar5,1);
    while (param_1 != (longlong *)0x0) {
      for (lVar2 = param_1[10]; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar2 + 8);
        if ((~*(uint *)(puVar6 + 3) & 0x8001) == 0) goto LAB_14452b5cb;
      }
      if (*(code **)(*param_1 + 0x2b0) == (code *)&LAB_1446e8c94) {
        param_1 = (longlong *)param_1[8];
      }
      else {
        param_1 = (longlong *)(**(code **)(*param_1 + 0x2b0))(param_1);
      }
    }
  }
  else {
    plVar3 = (longlong *)param_1[0x17];
    if (plVar3 == (longlong *)0x0) {
LAB_14452b706:
      uVar4 = 0;
    }
    else {
      (**(code **)(*plVar3 + 8))(plVar3,local_58);
      uVar4 = CONCAT71(uVar5,local_4a) & 0xffffffffffffff10;
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 4);
    }
  }
  goto LAB_14452b708;
LAB_14452b5cb:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
    local_68 = FUN_1446ddbd2();
    local_60 = FUN_14067a048;
    local_70 = 0;
    local_78 = 0x28001;
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  if (DAT_14c951cd8 == 0) {
    bVar7 = puVar6 != (undefined8 *)0x0;
    if (puVar6 != &DAT_14c951cd0 && bVar7) {
      do {
        puVar6 = (undefined8 *)puVar6[6];
        bVar7 = puVar6 != (undefined8 *)0x0;
        if (puVar6 == &DAT_14c951cd0) break;
      } while (puVar6 != (undefined8 *)0x0);
    }
    if (!bVar7) {
LAB_14452b62f:
      if ((*(byte *)(lVar2 + 0x3e) & 8) == 0) goto LAB_14452b706;
    }
  }
  else if ((puVar6[3] & DAT_14c951cd8) == 0) goto LAB_14452b62f;
  plVar3 = (longlong *)(lVar2 + 0x18);
  do {
    for (lVar2 = *plVar3; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
      puVar6 = *(undefined8 **)(lVar2 + 8);
      if ((~*(uint *)(puVar6 + 3) & 0x8001) == 0) goto LAB_14452b5cb;
    }
    if (*(code **)(*param_1 + 0x2b0) == (code *)&LAB_1446e8c94) {
      param_1 = (longlong *)param_1[8];
    }
    else {
      param_1 = (longlong *)(**(code **)(*param_1 + 0x2b0))(param_1);
    }
    plVar3 = param_1 + 10;
  } while (param_1 != (longlong *)0x0);
LAB_14452b708:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14452b732 FUN_14452b732 body=87 status=ok
// SIG undefined FUN_14452b732(void)

void FUN_14452b732(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar3 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x30);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014452b77e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14452b789 FUN_14452b789 body=952 status=ok
// SIG undefined FUN_14452b789(void)

void FUN_14452b789(void)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined *local_108;
  code *local_100;
  undefined8 local_f8;
  undefined2 *local_f0;
  int local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 **local_78;
  ulonglong *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1d010) {
    FUN_144b3d300(&DAT_14cc1d010);
    if (DAT_14cc1d010 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c9523c8) {
        FUN_144b3d300(&DAT_14c9523c8);
        if (DAT_14c9523c8 == -1) {
          FUN_14475b26a();
          local_100 = FUN_1408a629c;
          local_108 = &DAT_14c9520b8;
          local_110 = 0;
          local_118 = 0x1008101;
          FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
          atexit(FUN_14281708e);
          _Init_thread_footer(&DAT_14c9523c8);
        }
      }
      local_80 = DAT_14c952378;
      local_88 = FUN_145cd07f8();
      local_60 = &local_88;
      local_68 = &local_80;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c952210) {
        FUN_144b3d300(&DAT_14c952210);
        if (DAT_14c952210 == -1) {
          FUN_14475b26a();
          local_100 = FUN_1405ebbb2;
          local_108 = &DAT_14c9520b8;
          local_110 = 0;
          local_118 = 0x1008081;
          FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
          atexit(FUN_142816fad);
          _Init_thread_footer(&DAT_14c952210);
        }
      }
      local_90 = DAT_14c9521c0;
      local_98 = FUN_145cd0522();
      local_50 = &local_98;
      local_58 = &local_90;
      plVar1 = (longlong *)FUN_140ce9674();
      (**(code **)(*plVar1 + 0x378))(plVar1,&local_b0,0);
      puVar2 = &DAT_149dfb77a;
      if (local_a8 != 0) {
        puVar2 = local_b0;
      }
      FUN_1446f470e(local_a0,puVar2,1);
      local_b8 = FUN_145cd0b36();
      local_40 = &local_b8;
      local_48 = local_a0;
      plVar1 = (longlong *)FUN_14068e11a();
      (**(code **)(*plVar1 + 0x378))(plVar1,&local_d0,0);
      puVar2 = &DAT_149dfb77a;
      if (local_c8 != 0) {
        puVar2 = local_d0;
      }
      FUN_1446f470e(local_c0,puVar2,1);
      local_d8 = FUN_145cd09d6();
      local_30 = &local_d8;
      local_38 = local_c0;
      plVar1 = (longlong *)FUN_1456aed04();
      (**(code **)(*plVar1 + 0x378))(plVar1,&local_f0,0);
      puVar2 = &DAT_149dfb77a;
      if (local_e8 != 0) {
        puVar2 = local_f0;
      }
      FUN_1446f470e(local_e0,puVar2,1);
      local_f8 = FUN_145cd0c96();
      local_20 = &local_f8;
      local_78 = &local_68;
      local_70 = &local_18;
      local_28 = local_e0;
      FUN_145c15fdc(&DAT_14cc1cfc0);
      if (local_f0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_d0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      atexit(FUN_14452edcd);
      _Init_thread_footer(&DAT_14cc1d010);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452bb42 FUN_14452bb42 body=55 status=ok
// SIG undefined FUN_14452bb42(void)

void FUN_14452bb42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1c8c0 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1c8c0 = FUN_14171c317(FUN_146739e9c,uVar1,L"EOptimusDeformerStatus");
  }
  return;
}



// FUNCTION 14452bb7a FUN_14452bb7a body=1415 status=ok
// SIG undefined FUN_14452bb7a(void)

void FUN_14452bb7a(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
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
  undefined1 auStack_b8 [32];
  code **local_98;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *(longlong *)(param_1 + 0x188);
  lVar5 = *(longlong *)(param_1 + 0x198);
  if (lVar5 == 0 && lVar4 == 0) goto LAB_14452bd52;
  puVar6 = *(undefined8 **)(param_1 + 400);
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar7 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_14452bbee;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_14452bbf7;
      goto LAB_14452bc89;
    }
  }
  else {
LAB_14452bbee:
    if (iVar9 != 0x10) {
LAB_14452bc89:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar7 + 0xc60), iVar9 == 2))
        goto LAB_14452bbf7;
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_14452bbf7;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar2;
        if (puVar13 != (uint *)0x0) goto LAB_14452be22;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_14453265b);
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
LAB_14452be22:
          puVar19 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar19 + 0x19);
          uVar15 = puVar13[0x12];
          if (puVar17 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar3 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar2;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            puVar19 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar19 + 0x19);
            uVar15 = 0;
            if (puVar17 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_14452bea4;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_14452bea4:
        *(uint **)(puVar13 + 0x10) = puVar17;
        puVar13[0x12] = uVar15;
        iVar9 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14bd1dfc0;
        puVar19[0x15] = lVar4;
        puVar19[0x16] = puVar6;
        puVar19[0x17] = lVar5;
        puVar19[0x18] = param_1;
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
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar8 = 1;
          if ((char)uVar18 != '\x06') {
            uVar8 = uVar18;
          }
          uVar18 = uVar8;
          uVar14 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar19[0xf] = uVar14;
        puVar19[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar9;
        if (puVar19 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
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
        local_88[0] = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x28,8);
        *local_78 = (longlong)&PTR_LAB_14bd1df70;
        local_78[1] = lVar4;
        local_78[2] = (longlong)puVar6;
        local_78[3] = lVar5;
        local_78[4] = param_1;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = FUN_1445325ae;
        }
        local_98 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"OptimusReleaseResources",&DAT_14cc1d7e4);
        if (local_88[0] != (code *)0x0) {
          plVar16 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar16 = local_68;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      goto LAB_14452bd52;
    }
  }
LAB_14452bbf7:
  if (lVar5 != 0) {
    FUN_144521b5a(lVar5,param_1);
  }
  if (lVar4 != 0) {
    FUN_1494ba03e(lVar4);
  }
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar6)(puVar6);
      LOCK();
      piVar1 = (int *)((longlong)puVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
    }
  }
LAB_14452bd52:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452c11e FUN_14452c11e body=2142 status=ok
// SIG undefined FUN_14452c11e(void)

void FUN_14452c11e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined ***pppuVar14;
  uint uVar15;
  longlong lVar16;
  uint *puVar17;
  ulonglong uVar18;
  byte bVar19;
  undefined8 *puVar20;
  longlong **pplVar21;
  undefined8 *puVar22;
  longlong **pplVar23;
  longlong *plVar24;
  longlong *plVar25;
  undefined1 auStack_148 [32];
  longlong **local_128;
  undefined8 *local_120;
  longlong local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  ulonglong uStack_e0;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  longlong *local_98 [2];
  undefined ***local_88;
  undefined **local_78;
  longlong *local_70;
  undefined4 local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (2 < (ulonglong)*(uint *)((longlong)param_2 + 0xc)) goto LAB_14452c596;
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    local_108 = *(undefined8 *)(&PTR_DAT_14bd1ee78)[*(uint *)((longlong)param_2 + 0xc)];
    if ((longlong)*(int *)(param_1 + 0x48) != 0) {
      lVar16 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10 + lVar16);
        if (*(int *)(lVar3 + 0x90) != *(int *)(lVar3 + 0xbc)) goto LAB_14452c3fd;
        lVar16 = lVar16 + 0x30;
      } while ((longlong)*(int *)(param_1 + 0x48) * 0x30 != lVar16);
    }
    bVar19 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = (longlong *)0x0;
    uStack_e0 = 0;
    local_bc = 0x80;
    uStack_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (undefined1 *)0x0;
    local_a0 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
    puVar20 = (undefined8 *)(param_1 + 0x110);
    pplVar21 = local_98;
    for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
      *pplVar21 = (longlong *)*puVar20;
      puVar20 = puVar20 + 1;
      pplVar21 = pplVar21 + 1;
    }
    pplVar21 = &local_e8;
    puVar20 = (undefined8 *)(param_1 + 0x110);
    for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar20 = *pplVar21;
      pplVar21 = pplVar21 + 1;
      puVar20 = puVar20 + 1;
    }
    pplVar21 = local_98;
    pplVar23 = &local_e8;
    for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
      *pplVar23 = *pplVar21;
      pplVar21 = pplVar21 + 1;
      pplVar23 = pplVar23 + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
    if ((longlong)*(int *)(param_1 + 0x48) != 0) {
      plVar24 = *(longlong **)(param_1 + 0x40);
      plVar25 = plVar24 + (longlong)*(int *)(param_1 + 0x48) * 6;
      local_100 = param_2 + 3;
      bVar19 = 0;
      do {
        if ((int)plVar24[1] == 1) {
LAB_14452c266:
          uVar2 = *(undefined1 *)(param_1 + 0x28);
          local_f8 = 0;
          local_f0 = 0;
          FUN_14009d848(&local_f8,local_100);
          local_128 = (longlong **)param_2[2];
          local_120 = &local_f8;
          local_118 = param_1;
          local_110 = uVar2;
          bVar5 = FUN_144522064(plVar24 + 3,plVar24[2],*param_2,local_108);
          bVar19 = bVar19 | bVar5;
        }
        else if ((int)uStack_e0 != local_b4) {
          lVar16 = *plVar24;
          uVar12 = (uint)((ulonglong)lVar16 >> 0x10);
          uVar15 = (uint)lVar16 & 0xffff;
          puVar13 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar13 = local_b0;
          }
          for (iVar6 = *(int *)(puVar13 +
                               (ulonglong)
                               (local_a0 - 1U &
                               (int)((ulonglong)lVar16 >> 0x20) + ((uint)lVar16 << 0x10 | uVar15) +
                               (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar15 >> 4)) * 4); iVar6 != -1
              ; iVar6 = (int)local_e8[(longlong)iVar6 * 2 + 1]) {
            if (local_e8[(longlong)iVar6 * 2] == lVar16) goto LAB_14452c266;
          }
        }
        plVar24 = plVar24 + 6;
      } while (plVar24 != plVar25);
    }
    local_a0 = 0;
    if (local_a8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar18 = uStack_e0 >> 0x20;
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    if ((int)uVar18 != 0) {
      FUN_14472eb64(&local_e8,0);
    }
    uStack_b8 = 0xffffffff;
    local_b4 = 0;
    local_c0 = 0;
    if (0x80 < local_bc) {
      local_bc = 0x80;
      FUN_1446efbd8(local_d8,0);
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if ((bVar19 & 1) != 0) {
      if (*(int *)((longlong)param_2 + 0xc) == 1) {
        FUN_1445215f3(*param_2,local_108);
      }
      goto LAB_14452c596;
    }
  }
LAB_14452c3fd:
  local_e8 = (longlong *)0x0;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  FUN_14009d848(&local_e8,param_2 + 3);
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar16 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14452c43e;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14452c443;
      goto LAB_14452c49f;
    }
LAB_14452c443:
    if (local_e8 != (longlong *)0x0 && (int)uStack_e0 != 0) {
      (**(code **)(*local_e8 + 0x60))();
      goto LAB_14452c552;
    }
  }
  else {
LAB_14452c43e:
    if (iVar6 == 0x10) goto LAB_14452c443;
LAB_14452c49f:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar16 + 0xc60), iVar6 == 2))
      goto LAB_14452c443;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_14452c443;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar20 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar10 = (uint *)*puVar20;
      if (puVar10 != (uint *)0x0) goto LAB_14452c664;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_14453265b);
        }
        lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar16 + 0x310);
        *(undefined8 *)(lVar16 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar20 = puVar9;
        FUN_140217a48(puVar20);
        puVar10 = (uint *)*puVar20;
LAB_14452c664:
        puVar22 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar17 = (uint *)(puVar22 + 0x17);
        uVar12 = puVar10[0x12];
        if (puVar17 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar15 = *puVar10;
          *puVar10 = *puVar10 + uVar12 + 1;
          UNLOCK();
          if ((uVar15 ^ uVar12) != 0xffffffff) break;
          puVar10 = (uint *)*puVar20;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar20 = puVar10;
          puVar22 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar22 + 0x17);
          uVar12 = 0;
          if (puVar17 <= puVar10 + 0x4000) {
            uVar12 = 1;
            goto LAB_14452c6e4;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_14452c6e4:
      *(uint **)(puVar10 + 0x10) = puVar17;
      puVar10[0x12] = uVar12;
      iVar6 = 0;
      FUN_1447247dc(puVar22,0);
      *puVar22 = &PTR_FUN_14bd1e030;
      puVar22[0x15] = local_e8;
      local_e8 = (longlong *)0x0;
      *(int *)(puVar22 + 0x16) = (int)uStack_e0;
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
          iVar6 = 0;
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar18 = 5;
      }
      if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
      }
      puVar22[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar22[9] = puVar22;
      puVar22[10] = puVar22;
      lVar16 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar16 == 0) {
        uVar4 = 1;
        if ((char)uVar18 != '\x06') {
          uVar4 = uVar18;
        }
        uVar18 = uVar4;
        uVar11 = 0;
      }
      else {
        if ((char)uVar18 == '\x06') {
          uVar18 = *(ulonglong *)(lVar16 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar16 + 0x30);
      }
      puVar22[0xf] = uVar11;
      puVar22[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar22 + 0x1c) = iVar6;
      if (puVar22 == (undefined8 *)0x0) {
        local_98[0] = (longlong *)CONCAT71(local_98[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
        UNLOCK();
        local_98[0] = (longlong *)CONCAT71(local_98[0]._1_7_,1);
        FUN_1447439e4(puVar22);
        LOCK();
        piVar1 = (int *)(puVar22 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar22)(puVar22,1);
        }
      }
    }
    else {
      local_128 = local_98;
      local_88 = (undefined ***)0x0;
      local_78 = &PTR_LAB_14bd1dfd0;
      local_70 = local_e8;
      local_e8 = (longlong *)0x0;
      local_68 = (int)uStack_e0;
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      local_98[0] = (longlong *)&LAB_144532832;
      FUN_14005a792(&DAT_14ca9a440,L"ComputeFrameworkEnqueueFallback",&DAT_14cc1d7e8);
      if (local_98[0] != (longlong *)0x0) {
        pppuVar14 = local_88;
        if (local_88 == (undefined ***)0x0) {
          pppuVar14 = &local_78;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
LAB_14452c552:
  }
  if ((int)uStack_e0 != 0) {
    if (local_e8 == (longlong *)0x0) goto LAB_14452c596;
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
  }
  if (local_e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14452c596:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452c97d FUN_14452c97d body=55 status=ok
// SIG undefined FUN_14452c97d(void)

void FUN_14452c97d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1cb18 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1cb18 = FUN_14171c317(FUN_14673aa2d,uVar1,L"EOptimusExecutionDomainType");
  }
  return;
}



// FUNCTION 14452c9d2 FUN_14452c9d2 body=387 status=ok
// SIG undefined FUN_14452c9d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14452c9d2(undefined8 *param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1d0fc) {
    FUN_144b3d300(&DAT_14cc1d0fc);
    if (DAT_14cc1d0fc == -1) {
      _DAT_14cc1d020 = 0x500000000;
      _DAT_14cc1d028 = 2;
      DAT_14cc1d030 = 1;
      _DAT_14cc1d034 = &DAT_100000001;
      puRam000000014cc1d03c = &DAT_100000001;
      DAT_14cc1d044 = 1;
      _DAT_14cc1d048 = &DAT_100000002;
      uRam000000014cc1d050 = 0x200000001;
      DAT_14cc1d058 = 1;
      _DAT_14cc1d05c = 0x200000003;
      uRam000000014cc1d064 = 0x300000001;
      DAT_14cc1d06c = 1;
      _DAT_14cc1d070 = 0x200000004;
      uRam000000014cc1d078 = 0x400000001;
      DAT_14cc1d080 = 1;
      _DAT_14cc1d084 = 0x300000005;
      uRam000000014cc1d08c = 0x500000001;
      DAT_14cc1d094 = 1;
      _DAT_14cc1d098 = 0x400000006;
      uRam000000014cc1d0a0 = 0x600000002;
      DAT_14cc1d0a8 = 1;
      _DAT_14cc1d0ac = 0x300000007;
      uRam000000014cc1d0b4 = 0x700000001;
      DAT_14cc1d0bc = 1;
      _DAT_14cc1d0c0 = 8;
      _DAT_14cc1d0c8 = 0;
      DAT_14cc1d0d0 = 0;
      _DAT_14cc1d0d4 = 9;
      _DAT_14cc1d0dc = 0;
      DAT_14cc1d0e4 = 0;
      _DAT_14cc1d0e8 = 10;
      _DAT_14cc1d0f0 = 0;
      DAT_14cc1d0f8 = 0;
      atexit((_func_5014 *)&LAB_14452ee34);
      _Init_thread_footer(&DAT_14cc1d0fc);
    }
  }
  lVar2 = (longlong)param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(&DAT_14cc1d028 + lVar2 * 0x14);
  *param_1 = *(undefined8 *)(&DAT_14cc1d020 + lVar2 * 0x14);
  cVar1 = (&DAT_14cc1d030)[lVar2 * 0x14];
  *(char *)(param_1 + 2) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(&DAT_14cc1d02c + lVar2 * 0x14);
  }
  return param_1;
}



// FUNCTION 14452cb56 FUN_14452cb56 body=213 status=ok
// SIG undefined FUN_14452cb56(void)

void FUN_14452cb56(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [36];
  undefined1 local_44 [12];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 8);
  FUN_14452c9d2(local_44,*param_2);
  iVar1 = *(int *)(lVar2 + 0x308);
  *(uint *)(lVar2 + 0x308) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x30c) < iVar1 + 1U) {
    FUN_1494e263e(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0x300);
  if (*(longlong *)(lVar2 + 0x300) == 0) {
    lVar3 = lVar2;
  }
  *(undefined1 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = 0;
  *(undefined4 *)(lVar3 + (longlong)iVar1 * 0xc) = local_38;
  lVar2 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(lVar2 + 0x208);
  *(uint *)(lVar2 + 0x208) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x20c) < iVar1 + 1U) {
    FUN_1494e275e(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (*(longlong *)(lVar2 + 0x200) == 0) {
    lVar3 = lVar2;
  }
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = *(undefined8 *)(param_2 + 1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452cc2c FUN_14452cc2c body=362 status=ok
// SIG undefined FUN_14452cc2c(void)

void FUN_14452cc2c(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong *local_80;
  undefined1 local_78 [48];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_3 != 0) {
    FUN_140f4f540();
    FUN_141907aa8(&DAT_14cc1c7d8,&local_48,param_3);
    if (local_48 != 0) {
      local_88 = local_48;
      local_80 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      FUN_140e6511c(local_78,&local_88);
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      lStack_c0 = 0;
      FUN_140e6507e(&local_c8);
      local_e0 = 0;
      local_e8 = local_78;
      local_d8 = param_4;
      FUN_149495630(param_1,*(undefined8 *)(param_3 + 0x20),param_2,&local_c8);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (lStack_c0 != 0) {
        FUN_1400020a8();
      }
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
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452cd97 FUN_14452cd97 body=55 status=ok
// SIG undefined FUN_14452cd97(void)

void FUN_14452cd97(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1cd48 == 0) {
    uVar1 = FUN_140c44346();
    DAT_14cc1cd48 = FUN_14171c317(FUN_146739f32,uVar1,L"EOptimusNodeGraphType");
  }
  return;
}



// FUNCTION 14452cdce FUN_14452cdce body=972 status=ok
// SIG undefined FUN_14452cdce(void)

/* WARNING: Removing unreachable block (ram,0x00014452cfad) */
/* WARNING: Removing unreachable block (ram,0x00014452cfbc) */

undefined8 FUN_14452cdce(longlong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_60;
  longlong local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != 0) {
    lVar5 = FUN_145ba6bd2();
    if ((((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
        (local_60 = param_2, *(int *)(param_2 + 0x1a8) != 0)) &&
       ((*(int *)(param_2 + 0x1b8) != 0 && (*(char *)(param_2 + 0xb0) != '\x03')))) {
      lVar6 = FUN_14001cc68(0x28,0x10);
      FUN_1494ad212(lVar6,L"Create Kernel Function");
      local_78 = 0;
      uStack_70 = 0;
      FUN_1494cd0aa(param_1,&local_58,param_2,0);
      lVar5 = local_58;
      if ((longlong)(int)local_50 != 0) {
        lVar10 = 0;
        do {
          lVar9 = *(longlong *)
                   (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(lVar5 + lVar10) * 8);
          local_80 = lVar9;
          FUN_1494e67ec(*(undefined8 *)(lVar9 + 0x30),&local_90);
          FUN_1494e67ec(*(undefined8 *)(lVar9 + 0x28),&local_a0);
          uVar2 = uStack_70;
          lVar9 = (longlong)(int)uStack_70;
          uVar4 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
          if (uStack_70._4_4_ < uVar4) {
            FUN_146272134(&local_78,uVar2 & 0xffffffff);
          }
          lVar9 = lVar9 * 0x20;
          *(undefined8 *)(local_78 + lVar9) = 0;
          *(undefined8 *)(local_78 + lVar9) = local_a0;
          *(undefined4 *)(local_78 + 8 + lVar9) = (undefined4)local_98;
          *(undefined4 *)(local_78 + 0xc + lVar9) = local_98._4_4_;
          *(undefined8 *)(local_78 + 0x10 + lVar9) = 0;
          *(undefined8 *)(local_78 + 0x10 + lVar9) = local_90;
          *(undefined4 *)(local_78 + 0x18 + lVar9) = (undefined4)local_88;
          *(undefined4 *)(local_78 + 0x1c + lVar9) = local_88._4_4_;
          local_88 = 0;
          local_90 = 0;
          local_98 = 0;
          local_a0 = 0;
          FUN_1494cbc10(lVar6,local_b0,&local_80);
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_a8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_a8 + 0x10))();
            }
          }
          lVar10 = lVar10 + 4;
        } while ((longlong)(int)local_50 * 4 != lVar10);
      }
      if (local_58 != 0) {
        FUN_1400020a8(local_58);
      }
      FUN_1494cbcfc(lVar6,local_c0,&local_60);
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b8 + 0x10))();
        }
      }
      lVar5 = FUN_14001cc68(0xb0,0x10);
      FUN_14946293c(lVar5,local_60,*(undefined8 *)(local_60 + 0x18));
      FUN_14945e160(lVar6,local_d0,lVar5);
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_c8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_c8 + 0x10))();
        }
      }
      if ((longlong)(int)uStack_70 != 0) {
        lVar9 = (longlong)(int)uStack_70 * 0x20 + local_78;
        lVar10 = local_78;
        do {
          FUN_1494cbde8(lVar6,local_e0,lVar10,lVar10 + 0x10);
          if (local_d8 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_d8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_d8 + 0x10))();
            }
          }
          lVar10 = lVar10 + 0x20;
        } while (lVar10 != lVar9);
      }
      uVar7 = FUN_1494c9ad6(param_1);
      local_58 = lVar6;
      local_50 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      local_50[1] = &DAT_100000001;
      *local_50 = &PTR_LAB_14bcfe3d0;
      local_50[2] = lVar6;
      cVar3 = FUN_1494a7e7c(uVar7,&local_58);
      if (cVar3 == '\0') {
        uVar7 = 0;
      }
      else {
        lVar6 = FUN_1494c9ad6();
        lVar6 = *(longlong *)(lVar6 + 0x20);
        if (lVar6 == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          uVar7 = FUN_145a96b14();
          plVar8 = (longlong *)FUN_144718840(lVar6,uVar7);
        }
        uVar7 = (**(code **)(*plVar8 + 0x20))(plVar8,lVar5 + 0xa0);
      }
      FUN_141535be2(local_78,uStack_70 & 0xffffffff);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14452cdfa;
    }
  }
  uVar7 = 0;
LAB_14452cdfa:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14452d19c FUN_14452d19c body=942 status=ok
// SIG undefined FUN_14452d19c(void)

/* WARNING: Removing unreachable block (ram,0x00014452d360) */
/* WARNING: Removing unreachable block (ram,0x00014452d36f) */

undefined8 FUN_14452d19c(longlong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_60;
  longlong local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != 0) {
    lVar5 = FUN_145ba6914();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) == lVar5 + 0x30)) {
      local_60 = param_2;
      lVar6 = FUN_14001cc68(0x28,0x10);
      FUN_1494ad212(lVar6,L"Unpack Kernel Function");
      local_78 = 0;
      uStack_70 = 0;
      FUN_1494cd0aa(param_1,&local_58,param_2,0);
      lVar5 = local_58;
      if ((longlong)(int)local_50 != 0) {
        lVar10 = 0;
        do {
          lVar9 = *(longlong *)
                   (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(lVar5 + lVar10) * 8);
          local_80 = lVar9;
          FUN_1494e67ec(*(undefined8 *)(lVar9 + 0x30),&local_90);
          FUN_1494e67ec(*(undefined8 *)(lVar9 + 0x28),&local_a0);
          uVar2 = uStack_70;
          lVar9 = (longlong)(int)uStack_70;
          uVar4 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
          if (uStack_70._4_4_ < uVar4) {
            FUN_146272134(&local_78,uVar2 & 0xffffffff);
          }
          lVar9 = lVar9 * 0x20;
          *(undefined8 *)(local_78 + lVar9) = 0;
          *(undefined8 *)(local_78 + lVar9) = local_a0;
          *(undefined4 *)(local_78 + 8 + lVar9) = (undefined4)local_98;
          *(undefined4 *)(local_78 + 0xc + lVar9) = local_98._4_4_;
          *(undefined8 *)(local_78 + 0x10 + lVar9) = 0;
          *(undefined8 *)(local_78 + 0x10 + lVar9) = local_90;
          *(undefined4 *)(local_78 + 0x18 + lVar9) = (undefined4)local_88;
          *(undefined4 *)(local_78 + 0x1c + lVar9) = local_88._4_4_;
          local_88 = 0;
          local_90 = 0;
          local_98 = 0;
          local_a0 = 0;
          FUN_1494cbc10(lVar6,local_b0,&local_80);
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_a8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_a8 + 0x10))();
            }
          }
          lVar10 = lVar10 + 4;
        } while ((longlong)(int)local_50 * 4 != lVar10);
      }
      if (local_58 != 0) {
        FUN_1400020a8(local_58);
      }
      FUN_1494cbedc(lVar6,local_c0,&local_60);
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b8 + 0x10))();
        }
      }
      lVar5 = FUN_14001cc68(0x60,0x10);
      FUN_149462d9c(lVar5,local_60,*(undefined8 *)(local_60 + 0x18));
      FUN_14945e160(lVar6,local_d0,lVar5);
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_c8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_c8 + 0x10))();
        }
      }
      if ((longlong)(int)uStack_70 != 0) {
        lVar9 = (longlong)(int)uStack_70 * 0x20 + local_78;
        lVar10 = local_78;
        do {
          FUN_1494cbde8(lVar6,local_e0,lVar10,lVar10 + 0x10);
          if (local_d8 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_d8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_d8 + 0x10))();
            }
          }
          lVar10 = lVar10 + 0x20;
        } while (lVar10 != lVar9);
      }
      uVar7 = FUN_1494c9ad6(param_1);
      local_58 = lVar6;
      local_50 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      local_50[1] = &DAT_100000001;
      *local_50 = &PTR_LAB_14bcfe3d0;
      local_50[2] = lVar6;
      cVar3 = FUN_1494a7e7c(uVar7,&local_58);
      if (cVar3 == '\0') {
        uVar7 = 0;
      }
      else {
        lVar6 = FUN_1494c9ad6();
        lVar6 = *(longlong *)(lVar6 + 0x20);
        if (lVar6 == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          uVar7 = FUN_145a96b14();
          plVar8 = (longlong *)FUN_144718840(lVar6,uVar7);
        }
        uVar7 = (**(code **)(*plVar8 + 0x20))(plVar8,lVar5 + 0x50);
      }
      FUN_141535be2(local_78,uStack_70 & 0xffffffff);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14452d1c8;
    }
  }
  uVar7 = 0;
LAB_14452d1c8:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14452d54c FUN_14452d54c body=70 status=ok
// SIG undefined FUN_14452d54c(void)

void FUN_14452d54c(longlong *param_1)

{
  FUN_141239a12(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14452d592 FUN_14452d592 body=4423 status=ok
// SIG undefined FUN_14452d592(void)

/* WARNING: Removing unreachable block (ram,0x00014452dc6d) */
/* WARNING: Removing unreachable block (ram,0x00014452e011) */
/* WARNING: Removing unreachable block (ram,0x00014452dc7f) */
/* WARNING: Removing unreachable block (ram,0x00014452e023) */

ulonglong FUN_14452d592(longlong param_1,longlong *param_2,double *param_3,ulonglong *param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 ***pppuVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 *****pppppuVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  undefined8 ****ppppuVar17;
  longlong *plVar18;
  uint uVar19;
  undefined2 *puVar20;
  int iVar21;
  longlong lVar22;
  longlong *plVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_2f8 [32];
  code **local_2d8;
  ulonglong *local_2c8;
  longlong *local_2c0;
  undefined8 local_2b8;
  longlong local_2b0 [2];
  undefined1 local_2a0 [8];
  longlong local_298 [2];
  undefined8 ****local_288;
  longlong *plStack_280;
  longlong local_278;
  undefined8 uStack_270;
  longlong local_268;
  undefined8 uStack_260;
  longlong local_250 [2];
  longlong local_240;
  longlong local_238;
  undefined8 uStack_230;
  longlong *local_228;
  undefined8 uStack_220;
  longlong *local_218;
  undefined8 uStack_210;
  ulonglong *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  longlong local_198;
  undefined4 local_190;
  code *local_188 [2];
  undefined8 *local_178;
  undefined8 ***local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  int local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if ((longlong)(int)param_2[1] != 0) {
    plVar18 = (longlong *)*param_2;
    plVar23 = plVar18 + (int)param_2[1];
    uVar8 = 0;
LAB_14452d609:
    uVar9 = *(ulonglong *)(*plVar18 + 0x20);
    if (uVar8 == 0) {
      if (uVar9 != 0) {
        lVar7 = FUN_141155906();
        if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_14452d678;
        goto LAB_14452d642;
      }
LAB_14452d678:
      plVar18 = plVar18 + 1;
      uVar8 = 0;
      if (plVar18 == plVar23) goto LAB_14452d689;
      goto LAB_14452d609;
    }
    if (uVar9 == 0) {
LAB_14452d63a:
      uVar9 = 0;
    }
    else {
      lVar7 = FUN_141155906();
      if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) != lVar7 + 0x30)) goto LAB_14452d63a;
    }
    bVar24 = uVar8 != uVar9;
    uVar9 = uVar8;
    if (bVar24) goto LAB_14452d686;
LAB_14452d642:
    plVar18 = plVar18 + 1;
    uVar8 = uVar9;
    if (plVar18 != plVar23) goto LAB_14452d609;
    local_208 = (ulonglong *)0x0;
    uStack_200 = 0;
    local_218 = (longlong *)0x0;
    uStack_210 = 0;
    local_228 = (longlong *)0x0;
    uStack_220 = 0;
    local_2c8 = param_4;
    FUN_1494c9ba8(param_2,&local_208);
    puVar15 = local_208;
    local_238 = 0;
    uStack_230 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_cc = 0xffffffff00000080;
    local_c4 = 0;
    local_b8 = (undefined1 *)0x0;
    local_b0 = 0;
    lVar7 = (longlong)(int)uStack_200;
    local_240 = param_1;
    if (lVar7 == 0) {
      uVar25 = 0xffffffff;
      uVar26 = 0x7fefffff;
      uVar27 = uVar25;
      uVar28 = uVar26;
    }
    else {
      uVar25 = 0xffffffff;
      uVar26 = 0x7fefffff;
      lVar22 = 0;
      uVar27 = uVar25;
      uVar28 = uVar26;
      do {
        local_148 = *(undefined8 ****)((longlong)puVar15 + lVar22);
        pppuVar5 = (undefined8 ***)local_148[9];
        if ((double)pppuVar5 <= (double)CONCAT44(uVar26,uVar25)) {
          uVar25 = SUB84(pppuVar5,0);
          uVar26 = (undefined4)((ulonglong)pppuVar5 >> 0x20);
        }
        pppuVar5 = (undefined8 ***)local_148[8];
        if ((double)pppuVar5 <= (double)CONCAT44(uVar28,uVar27)) {
          uVar27 = SUB84(pppuVar5,0);
          uVar28 = (undefined4)((ulonglong)pppuVar5 >> 0x20);
        }
        FUN_1494bcb44(&local_240,local_250,local_148[3]);
        local_1f8 = (undefined8 *****)&local_148;
        uStack_1f0 = local_250;
        FUN_1494e3ede(&local_f8,&local_268,&local_1f8);
        lVar22 = lVar22 + 8;
      } while (lVar7 * 8 != lVar22);
    }
    dVar1 = *param_3;
    dVar2 = param_3[1];
    local_2c0 = (longlong *)(param_1 + 0x28);
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(local_2c0,local_250);
    local_268 = 0;
    uStack_260 = 0;
    if ((longlong)(int)uStack_210 == 0) goto LAB_14452d859;
    plVar18 = local_218 + (int)uStack_210;
    plVar23 = local_218;
LAB_14452d988:
    if ((int)uStack_f0 != local_c4) {
      uVar8 = *(ulonglong *)(*plVar23 + 0x28);
      uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      puVar10 = local_b8;
      if (local_b8 == (undefined1 *)0x0) {
        puVar10 = local_c0;
      }
      uVar14 = (ulonglong)((uVar6 >> 0x10 ^ uVar6) & local_b0 - 1U);
      iVar21 = *(int *)(puVar10 + uVar14 * 4);
      if (iVar21 != -1) {
        uVar4 = *(ulonglong *)(*plVar23 + 0x30);
        do {
          if (*(ulonglong *)(local_f8 + (longlong)iVar21 * 0x18) == uVar8) {
            uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
            uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
            uVar6 = uVar6 >> 0x10 ^ uVar6;
            iVar21 = *(int *)(puVar10 + (ulonglong)(local_b0 - 1U & uVar6) * 4);
            goto LAB_14452da61;
          }
          iVar21 = *(int *)(local_f8 + (longlong)iVar21 * 0x18 + 0x10);
        } while (iVar21 != -1);
      }
    }
    goto LAB_14452da16;
  }
LAB_14452d686:
  uVar8 = 0;
  goto LAB_14452d689;
LAB_14452da61:
  if (iVar21 == -1) goto LAB_14452da16;
  if (*(ulonglong *)(local_f8 + (longlong)iVar21 * 0x18) == uVar4) {
    local_1f8 = (undefined8 *****)0x0;
    uStack_1f0 = (longlong *)0x0;
    iVar21 = *(int *)(puVar10 + uVar14 * 4);
    goto LAB_14452da8a;
  }
  iVar21 = *(int *)(local_f8 + (longlong)iVar21 * 0x18 + 0x10);
  goto LAB_14452da61;
LAB_14452da8a:
  if (iVar21 == -1) goto LAB_14452daa4;
  puVar15 = (ulonglong *)(local_f8 + (longlong)iVar21 * 0x18);
  if (*puVar15 == uVar8) goto LAB_14452daa6;
  iVar21 = (int)puVar15[2];
  goto LAB_14452da8a;
LAB_14452daa4:
  puVar15 = (ulonglong *)0x0;
LAB_14452daa6:
  FUN_1400021e4(puVar15 + 1,&local_278);
  FUN_1494bd7c2(&local_148,local_250,&local_278,&local_1f8);
  if (local_278 != 0) {
    FUN_1400020a8();
  }
  if (local_1f8 != (undefined8 *****)0x0) {
    FUN_1400020a8();
  }
  local_1f8 = (undefined8 *****)0x0;
  uStack_1f0 = (longlong *)0x0;
  if ((int)uStack_f0 != local_c4) {
    puVar10 = local_b8;
    if (local_b8 == (undefined1 *)0x0) {
      puVar10 = local_c0;
    }
    iVar21 = *(int *)(puVar10 + (ulonglong)(local_b0 - 1U & uVar6) * 4);
    while (iVar21 != -1) {
      puVar15 = (ulonglong *)(local_f8 + (longlong)iVar21 * 0x18);
      if (*puVar15 == uVar4) goto LAB_14452db5e;
      iVar21 = (int)puVar15[2];
    }
  }
  puVar15 = (ulonglong *)0x0;
LAB_14452db5e:
  FUN_1400021e4(puVar15 + 1,&local_288);
  FUN_1494bd7c2(&local_278,local_250,&local_288,&local_1f8);
  if ((undefined8 *****)local_288 != (undefined8 *****)0x0) {
    FUN_1400020a8();
  }
  if (local_1f8 != (undefined8 *****)0x0) {
    FUN_1400020a8();
  }
  FUN_149365e7c(&local_1f8,0,&local_148,&local_278);
  lVar7 = (longlong)(int)uStack_260;
  uVar6 = (int)uStack_260 + 1;
  uStack_260 = CONCAT44(uStack_260._4_4_,uVar6);
  if (uStack_260._4_4_ < uVar6) {
    FUN_146272134(&local_268);
  }
  lVar7 = lVar7 * 0x20;
  *(undefined8 *)(local_268 + lVar7) = 0;
  *(undefined8 ******)(local_268 + lVar7) = local_1f8;
  *(undefined4 *)(local_268 + 8 + lVar7) = (undefined4)uStack_1f0;
  *(undefined4 *)(local_268 + 0xc + lVar7) = uStack_1f0._4_4_;
  *(undefined8 *)(local_268 + 0x10 + lVar7) = 0;
  *(double *)(local_268 + 0x10 + lVar7) = local_1e8;
  *(undefined4 *)(local_268 + 0x18 + lVar7) = (undefined4)uStack_1e0;
  *(undefined4 *)(local_268 + 0x1c + lVar7) = uStack_1e0._4_4_;
  uStack_1e0 = 0.0;
  local_1e8 = 0.0;
  uStack_1f0 = (longlong *)0x0;
  local_1f8 = (undefined8 *****)0x0;
  if (local_278 != 0) {
    FUN_1400020a8();
  }
  if ((undefined8 ****)local_148 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
LAB_14452da16:
  plVar23 = plVar23 + 1;
  if (plVar23 == plVar18) goto LAB_14452d859;
  goto LAB_14452d988;
LAB_14452ddbe:
  if (iVar21 == -1) goto LAB_14452dd75;
  if (*(ulonglong *)(local_f8 + (longlong)iVar21 * 0x18) == uVar9) {
    FUN_1494e66cc(*(undefined8 *)(lVar7 + 0x28),local_2b0);
    FUN_1400021e4(local_2b0,&local_1f8);
    if ((int)uStack_f0 != local_c4) {
      puVar10 = local_b8;
      if (local_b8 == (undefined1 *)0x0) {
        puVar10 = local_c0;
      }
      iVar21 = *(int *)(puVar10 + (ulonglong)(local_b0 - 1U & uVar6) * 4);
      if (iVar21 != -1) goto LAB_14452e05f;
    }
    puVar15 = (ulonglong *)0x0;
    goto LAB_14452de42;
  }
  iVar21 = *(int *)(local_f8 + (longlong)iVar21 * 0x18 + 0x10);
  goto LAB_14452ddbe;
  while (iVar21 = (int)puVar15[2], iVar21 != -1) {
LAB_14452e05f:
    puVar15 = (ulonglong *)(local_f8 + (longlong)iVar21 * 0x18);
    if (*puVar15 == uVar8) goto LAB_14452de42;
  }
  puVar15 = (ulonglong *)0x0;
LAB_14452de42:
  FUN_1400021e4(puVar15 + 1,local_298);
  FUN_1494bd7c2(&local_288,local_250,local_298,&local_1f8);
  if (local_298[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1f8 != (undefined8 *****)0x0) {
    FUN_1400020a8();
  }
  FUN_1494e66cc(*(undefined8 *)(lVar7 + 0x30),local_2a0);
  FUN_1400021e4(local_2a0,&local_1f8);
  if ((int)uStack_f0 != local_c4) {
    puVar10 = local_b8;
    if (local_b8 == (undefined1 *)0x0) {
      puVar10 = local_c0;
    }
    iVar21 = *(int *)(puVar10 + (ulonglong)(local_b0 - 1U & uVar19) * 4);
    while (iVar21 != -1) {
      puVar15 = (ulonglong *)(local_f8 + (longlong)iVar21 * 0x18);
      if (*puVar15 == uVar9) goto LAB_14452df04;
      iVar21 = (int)puVar15[2];
    }
  }
  puVar15 = (ulonglong *)0x0;
LAB_14452df04:
  FUN_1400021e4(puVar15 + 1,local_2b0);
  FUN_1494bd7c2(local_298,local_250,local_2b0,&local_1f8);
  if (local_2b0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1f8 != (undefined8 *****)0x0) {
    FUN_1400020a8();
  }
  FUN_149365e7c(&local_1f8,0,&local_288,local_298);
  lVar7 = (longlong)(int)uStack_270;
  uVar6 = (int)uStack_270 + 1;
  uStack_270 = CONCAT44(uStack_270._4_4_,uVar6);
  if (uStack_270._4_4_ < uVar6) {
    FUN_146272134(&local_278);
  }
  lVar7 = lVar7 * 0x20;
  *(undefined8 *)(local_278 + lVar7) = 0;
  *(undefined8 ******)(local_278 + lVar7) = local_1f8;
  *(undefined4 *)(local_278 + 8 + lVar7) = (undefined4)uStack_1f0;
  *(undefined4 *)(local_278 + 0xc + lVar7) = uStack_1f0._4_4_;
  *(undefined8 *)(local_278 + 0x10 + lVar7) = 0;
  *(double *)(local_278 + 0x10 + lVar7) = local_1e8;
  *(undefined4 *)(local_278 + 0x18 + lVar7) = (undefined4)uStack_1e0;
  *(undefined4 *)(local_278 + 0x1c + lVar7) = uStack_1e0._4_4_;
  uStack_1e0 = 0.0;
  local_1e8 = 0.0;
  uStack_1f0 = (longlong *)0x0;
  local_1f8 = (undefined8 *****)0x0;
  if (local_298[0] != 0) {
    FUN_1400020a8();
  }
  if ((undefined8 *****)local_288 != (undefined8 *****)0x0) {
    FUN_1400020a8();
  }
LAB_14452dd75:
  plVar18 = plVar18 + 1;
  if (plVar18 == plVar23) goto LAB_14452d938;
  goto LAB_14452dccd;
LAB_14452d859:
  plVar23 = local_228;
  local_128 = 0;
  local_120 = 0;
  local_148 = (undefined8 ****)0x0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  lVar7 = (longlong)(int)uStack_220;
  if (lVar7 != 0) {
    lVar22 = 0;
    do {
      lVar3 = *(longlong *)((longlong)plVar23 + lVar22);
      FUN_1494bcb44(&local_240,&local_278,*(undefined8 *)(lVar3 + 0x18));
      local_288 = *(undefined8 *****)(lVar3 + 0x18);
      local_1f8 = &local_288;
      uStack_1f0 = &local_278;
      FUN_146873bc6(&local_148,local_298,&local_1f8,0);
      lVar22 = lVar22 + 8;
    } while (lVar7 * 8 != lVar22);
  }
  local_278 = 0;
  uStack_270 = 0;
  if ((longlong)*(int *)(uVar9 + 0x50) != 0) {
    plVar18 = *(longlong **)(uVar9 + 0x48);
    plVar23 = plVar18 + *(int *)(uVar9 + 0x50);
LAB_14452dccd:
    lVar7 = *plVar18;
    uVar8 = FUN_1494e64f0(*(undefined8 *)(lVar7 + 0x28));
    uVar9 = FUN_1494e64f0(*(undefined8 *)(lVar7 + 0x30));
    if ((int)uStack_f0 != local_c4) {
      uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      uVar6 = uVar6 >> 0x10 ^ uVar6;
      puVar10 = local_b8;
      if (local_b8 == (undefined1 *)0x0) {
        puVar10 = local_c0;
      }
      for (iVar21 = *(int *)(puVar10 + (ulonglong)(local_b0 - 1U & uVar6) * 4); iVar21 != -1;
          iVar21 = *(int *)(local_f8 + (longlong)iVar21 * 0x18 + 0x10)) {
        if (*(ulonglong *)(local_f8 + (longlong)iVar21 * 0x18) == uVar8) {
          uVar19 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
          uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
          uVar19 = uVar19 >> 0x10 ^ uVar19;
          iVar21 = *(int *)(puVar10 + (ulonglong)(local_b0 - 1U & uVar19) * 4);
          goto LAB_14452ddbe;
        }
      }
    }
    goto LAB_14452dd75;
  }
LAB_14452d938:
  local_288 = (undefined8 ****)0x0;
  plStack_280 = (longlong *)0x0;
  if ((int)uStack_200 == 1) {
    if ((int)local_2c8[1] == 0) {
      puVar20 = &DAT_149dfb77a;
    }
    else {
      puVar20 = (undefined2 *)*local_2c8;
    }
    FUN_140002266(&local_1f8,L"%s Node",puVar20);
  }
  else {
    if ((int)local_2c8[1] == 0) {
      puVar20 = &DAT_149dfb77a;
    }
    else {
      puVar20 = (undefined2 *)*local_2c8;
    }
    FUN_140002266(&local_1f8,L"%s %d Nodes",puVar20);
  }
  local_288 = local_1f8;
  plStack_280 = uStack_1f0;
  local_2b8 = FUN_1494c9ad6(param_1);
  FUN_1494a80f4(local_2b8);
  if ((longlong)(int)uStack_220 != 0) {
    plVar23 = local_228 + (int)uStack_220;
    plVar18 = local_228;
    do {
      lVar7 = *plVar18;
      if ((int)uStack_140 != local_114) {
        pppuVar5 = *(undefined8 ****)(lVar7 + 0x18);
        uVar6 = (uint)((ulonglong)pppuVar5 >> 0x10);
        uVar19 = (uint)pppuVar5 & 0xffff;
        puVar10 = local_108;
        if (local_108 == (undefined1 *)0x0) {
          puVar10 = local_110;
        }
        iVar21 = *(int *)(puVar10 +
                         (ulonglong)
                         (local_100 - 1U &
                         (int)((ulonglong)pppuVar5 >> 0x20) + ((uint)pppuVar5 << 0x10 | uVar19) +
                         (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar19 >> 4)) * 4);
        while (iVar21 != -1) {
          ppppuVar17 = (undefined8 ****)(local_148 + (longlong)iVar21 * 3);
          if (*ppppuVar17 == pppuVar5) goto LAB_14452e1a7;
          iVar21 = *(int *)(ppppuVar17 + 2);
        }
      }
      ppppuVar17 = (undefined8 ****)0x0;
LAB_14452e1a7:
      pppuVar5 = ppppuVar17[1];
      (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(local_2c0,&local_1f8);
      uVar11 = FUN_1494c9ad6(param_1);
      FUN_1494c9d96(uVar11,&local_1f8,lVar7,pppuVar5);
      if (local_1f8 != (undefined8 *****)0x0) {
        FUN_1400020a8();
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar23);
  }
  pppppuVar12 = (undefined8 *****)FUN_14001cc68(0x28,0x10);
  local_1f8 = (undefined8 *****)0x0;
  uStack_1f0 = (longlong *)0x0;
  FUN_14945e0fa(pppppuVar12);
  puVar15 = local_208;
  *pppppuVar12 = (undefined8 ****)&PTR_FUN_14bcfe1b0;
  pppppuVar12[3] = (undefined8 ****)0x0;
  pppppuVar12[4] = (undefined8 ****)0x0;
  lVar7 = (longlong)(int)uStack_200;
  if (lVar7 != 0) {
    lVar22 = 0;
    do {
      (**(code **)(**(longlong **)((longlong)puVar15 + lVar22) + 0x2e0))
                (*(longlong **)((longlong)puVar15 + lVar22),param_1,pppppuVar12);
      lVar22 = lVar22 + 8;
    } while (lVar7 * 8 != lVar22);
  }
  uVar11 = FUN_1494c9ad6(param_1);
  local_1f8 = pppppuVar12;
  uStack_1f0 = (longlong *)FUN_14001cc68(0x18,0x10);
  uStack_1f0[1] = (longlong)&DAT_100000001;
  *uStack_1f0 = (longlong)&PTR_LAB_14bcfe3d0;
  uStack_1f0[2] = (longlong)pppppuVar12;
  FUN_1494a7e7c(uVar11,&local_1f8);
  if ((longlong)(int)uStack_200 != 0) {
    local_2c8 = local_208 + (int)uStack_200;
    puVar15 = local_208;
    do {
      uVar8 = *puVar15;
      pppppuVar12 = (undefined8 *****)FUN_14001cc68(0xb0,0x10);
      local_1f8._0_4_ = *(undefined4 *)(uVar8 + 0x40);
      local_1f8._4_4_ = *(undefined4 *)(uVar8 + 0x44);
      uStack_1f0._0_4_ = *(undefined4 *)(uVar8 + 0x48);
      uStack_1f0._4_4_ = *(undefined4 *)(uVar8 + 0x4c);
      local_1b8 = 0;
      local_1b0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1ac = 0xffffffff00000080;
      local_1a4 = 0;
      local_198 = 0;
      local_190 = 0;
      local_1e8 = dVar1 - (double)CONCAT44(uVar28,uVar27);
      uStack_1e0 = dVar2 - (double)CONCAT44(uVar26,uVar25);
      FUN_141262aba(&local_1d8,&local_148);
      local_188[0] = (code *)0x0;
      local_178 = (undefined8 *)0x0;
      puVar13 = (undefined8 *)FUN_14001cc68(0x78,8);
      *puVar13 = &PTR_FUN_14bd1e400;
      *(undefined4 *)(puVar13 + 3) = (undefined4)local_1e8;
      *(undefined4 *)((longlong)puVar13 + 0x1c) = local_1e8._4_4_;
      *(undefined4 *)(puVar13 + 4) = (undefined4)uStack_1e0;
      *(undefined4 *)((longlong)puVar13 + 0x24) = uStack_1e0._4_4_;
      *(undefined4 *)(puVar13 + 1) = (undefined4)local_1f8;
      *(undefined4 *)((longlong)puVar13 + 0xc) = local_1f8._4_4_;
      *(undefined4 *)(puVar13 + 2) = (undefined4)uStack_1f0;
      *(undefined4 *)((longlong)puVar13 + 0x14) = uStack_1f0._4_4_;
      local_178 = puVar13;
      FUN_14105a876(puVar13 + 5,&local_1d8);
      if (puVar13 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_188[0] = FUN_144533c44;
      }
      if ((int)uStack_f0 != local_c4) {
        uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        puVar10 = local_b8;
        if (local_b8 == (undefined1 *)0x0) {
          puVar10 = local_c0;
        }
        iVar21 = *(int *)(puVar10 + (ulonglong)(local_b0 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
        while (iVar21 != -1) {
          puVar16 = (ulonglong *)(local_f8 + (longlong)iVar21 * 0x18);
          if (*puVar16 == uVar8) goto LAB_14452e46b;
          iVar21 = (int)puVar16[2];
        }
      }
      puVar16 = (ulonglong *)0x0;
LAB_14452e46b:
      uVar9 = puVar16[1];
      (**(code **)(*local_2c0 + 0x20))(local_2c0,local_298);
      local_2d8 = local_188;
      FUN_149461086(pppppuVar12,local_298,uVar8,uVar9);
      if (local_298[0] != 0) {
        FUN_1400020a8();
      }
      local_190 = 0;
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      FUN_140105116(&local_1d8);
      uVar11 = FUN_1494c9ad6(param_1);
      local_1f8 = pppppuVar12;
      uStack_1f0 = (longlong *)FUN_14001cc68(0x18,0x10);
      uStack_1f0[1] = (longlong)&DAT_100000001;
      *uStack_1f0 = (longlong)&PTR_LAB_14bcfe3d0;
      uStack_1f0[2] = (longlong)pppppuVar12;
      FUN_1494a7e7c(uVar11,&local_1f8);
      puVar15 = puVar15 + 1;
    } while (puVar15 != local_2c8);
  }
  if ((longlong)(int)uStack_260 != 0) {
    lVar22 = (longlong)(int)uStack_260 * 0x20 + local_268;
    lVar7 = local_268;
    do {
      uVar11 = FUN_1494c9ad6(param_1);
      FUN_1494cae26(uVar11,lVar7,lVar7 + 0x10);
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != lVar22);
  }
  lVar7 = 0;
  if ((longlong)(int)uStack_270 != 0) {
    lVar7 = (longlong)(int)uStack_270 * 0x20 + local_278;
    lVar22 = local_278;
    do {
      local_1f8 = (undefined8 *****)CONCAT71(local_1f8._1_7_,1);
      uVar11 = FUN_1494c9ad6(param_1);
      FUN_1494cb852(uVar11,lVar22,lVar22 + 0x10,&local_1f8);
      lVar22 = lVar22 + 0x20;
    } while (lVar22 != lVar7);
  }
  FUN_1494a81c6(local_2b8);
  if ((undefined8 *****)local_288 != (undefined8 *****)0x0) {
    FUN_1400020a8();
  }
  FUN_141535be2(local_278,uStack_270 & 0xffffffff);
  if (local_278 != 0) {
    FUN_1400020a8();
  }
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_148);
  FUN_141535be2(local_268,uStack_260 & 0xffffffff);
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  if (local_250[0] != 0) {
    FUN_1400020a8();
  }
  local_b0 = 0;
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1494d2726(&local_f8);
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  if (local_228 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_218 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_208 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
LAB_14452d689:
  if ((local_a0 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452e6da FUN_14452e6da body=210 status=ok
// SIG undefined FUN_14452e6da(void)

void FUN_14452e6da(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  *param_2 = param_3;
  param_1 = (longlong *)*param_1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar4 = (int)param_1[9] - 1;
    uVar6 = param_3 >> 0x20;
    uVar2 = (uint)(param_3 >> 0x10);
    uVar5 = (uint)param_3 & 0xffff;
    iVar7 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    (((uint)param_3 << 0x10 | uVar5) + (int)(param_3 >> 0x20) +
                     (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4) & uVar4) * 4);
    if (iVar7 != -1) {
      lVar1 = *param_1;
      do {
        if (*(ulonglong *)(lVar1 + (longlong)iVar7 * 0x10) == param_3) {
          *(int *)((longlong)param_2 + 4) = (int)uVar6 + 1;
          param_3 = *param_2;
          uVar6 = param_3 >> 0x20;
          uVar2 = (uint)(param_3 >> 0x10);
          uVar5 = (uint)param_3 & 0xffff;
          iVar7 = *(int *)((longlong)plVar3 +
                          (ulonglong)
                          (((uint)param_3 << 0x10 | uVar5) + (int)(param_3 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4) & uVar4) * 4);
        }
        else {
          iVar7 = *(int *)((longlong)iVar7 * 0x10 + lVar1 + 8);
        }
      } while (iVar7 != -1);
    }
  }
  return;
}



// FUNCTION 14452e7ac FUN_14452e7ac body=70 status=ok
// SIG undefined FUN_14452e7ac(void)

void FUN_14452e7ac(longlong *param_1)

{
  FUN_141239a12(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14452e7f2 FUN_14452e7f2 body=145 status=ok
// SIG undefined FUN_14452e7f2(void)

void FUN_14452e7f2(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *param_2;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar7 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar6 + lVar7);
      puVar2 = (undefined8 *)*param_1;
      puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = uVar1;
      if (puVar5 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar2;
        *puVar2 = puVar5;
        *puVar3 = puVar5;
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar7);
    lVar6 = *param_2;
  }
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
    return;
  }
  return;
}



// FUNCTION 14452e884 FUN_14452e884 body=116 status=ok
// SIG undefined FUN_14452e884(void)

longlong FUN_14452e884(longlong *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 == 4) {
    uVar2 = FUN_1458d08d2();
    lVar3 = FUN_1494cd356(param_1 + -5,uVar2,param_3);
    *(undefined4 *)(lVar3 + 0x30) = 4;
    if (*(char *)(param_4 + 1) != '\x01') goto LAB_14452e897;
    cVar1 = (**(code **)(*param_1 + 0x40))(param_1,lVar3,*param_4);
    if (cVar1 != '\0') goto LAB_14452e897;
    FUN_1494acfa0(lVar3);
  }
  lVar3 = 0;
LAB_14452e897:
  if (*(char *)(param_4 + 1) == '\x01') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  return lVar3;
}



// FUNCTION 14452ea10 FUN_14452ea10 body=569 status=ok
// SIG undefined FUN_14452ea10(void)

char FUN_14452ea10(char *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  bool bVar5;
  
  param_1[1] = param_1[1] & 0xfe;
  if (*param_1 != '\0') {
    return '\0';
  }
  lVar1 = *(longlong *)(param_2 + 0x78);
  if (lVar1 == 0) goto LAB_14452eb30;
  puVar4 = *(undefined **)(lVar1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    uVar3 = FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,uVar3,FUN_1403a682c);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  if (DAT_14c952a10 == 0) {
    bVar5 = puVar4 != (undefined *)0x0;
    if (puVar4 != &DAT_14c952a08 && bVar5) {
      do {
        puVar4 = *(undefined **)(puVar4 + 0x30);
        bVar5 = puVar4 != (undefined *)0x0;
        if (puVar4 == &DAT_14c952a08) break;
      } while (puVar4 != (undefined *)0x0);
    }
    if (!bVar5) goto LAB_14452eab4;
  }
  else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c952a10) == 0) {
LAB_14452eab4:
    puVar4 = *(undefined **)(lVar1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                    FUN_140b31576);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar5 = puVar4 != (undefined *)0x0;
      if (puVar4 != &DAT_14c951a90 && bVar5) {
        do {
          puVar4 = *(undefined **)(puVar4 + 0x30);
          bVar5 = puVar4 != (undefined *)0x0;
          if (puVar4 == &DAT_14c951a90) break;
        } while (puVar4 != (undefined *)0x0);
      }
      if (bVar5) goto LAB_14452eaef;
    }
    else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c951a98) != 0) {
LAB_14452eaef:
      cVar2 = FUN_14452ea10(param_1,lVar1);
      goto LAB_14452eb3b;
    }
LAB_14452eb30:
    cVar2 = FUN_14452ec4a(param_1,lVar1);
    goto LAB_14452eb3b;
  }
  cVar2 = FUN_14452ae8e(param_1,*(undefined8 *)(lVar1 + 0x70));
LAB_14452eb3b:
  if (cVar2 == '\0') {
    return '\0';
  }
  return param_1[1];
}



// FUNCTION 14452ec4a FUN_14452ec4a body=386 status=ok
// SIG undefined FUN_14452ec4a(void)

ulonglong FUN_14452ec4a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140f4f540();
  FUN_141907aa8(&DAT_14cc1c7d8,&local_78,param_2);
  if (local_78 != (longlong *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c951d20) {
      FUN_144b3d300(&DAT_14c951d20);
      if (DAT_14c951d20 == -1) {
        local_88 = FUN_1446ddbd2();
        local_80 = FUN_14067a048;
        local_90 = 0;
        local_98 = 0x28001;
        FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
        atexit(FUN_142811fe5);
        _Init_thread_footer(&DAT_14c951d20);
      }
    }
    if (*local_78 != DAT_14c951cd0) {
      FUN_140f4f540();
      FUN_140fc897e(&DAT_14cc1c7d8,local_68,*local_78);
      if (local_68[0] != 0) {
        uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                         *(byte *)(param_1 + 1) & *(byte *)(local_78 + 9));
        if (local_58 == (longlong *)0x0) {
          local_58 = local_48;
        }
        (**(code **)(*local_58 + 0x10))();
        goto LAB_14452ed05;
      }
    }
  }
  uVar3 = 0;
LAB_14452ed05:
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452edcd FUN_14452edcd body=47 status=ok
// SIG undefined FUN_14452edcd(void)

void FUN_14452edcd(void)

{
  DAT_14cc1d008 = 0;
  if (DAT_14cc1d000 != 0) {
    FUN_1400020a8();
  }
  FUN_145c09e38(&DAT_14cc1cfc0);
  return;
}



// FUNCTION 14452ef76 FUN_14452ef76 body=109 status=ok
// SIG undefined FUN_14452ef76(void)

undefined8 * FUN_14452ef76(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14bd1d0d0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  FUN_140d188f2(puVar1 + 1,param_1 + 8);
  return puVar1 + 1;
}



// FUNCTION 14452efea FUN_14452efea body=29 status=ok
// SIG undefined FUN_14452efea(void)

void FUN_14452efea(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14452f008 FUN_14452f008 body=73 status=ok
// SIG undefined FUN_14452f008(void)

undefined8 * FUN_14452f008(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd1d0d0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14452f20b FUN_14452f20b body=61 status=ok
// SIG undefined FUN_14452f20b(void)

void FUN_14452f20b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14452f248 FUN_14452f248 body=363 status=ok
// SIG undefined FUN_14452f248(void)

void FUN_14452f248(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14452f2de;
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
LAB_14452f2de:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 14452f3b4 FUN_14452f3b4 body=31 status=ok
// SIG undefined FUN_14452f3b4(void)

undefined8 FUN_14452f3b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14452f420 FUN_14452f420 body=362 status=ok
// SIG undefined FUN_14452f420(void)

undefined8 * FUN_14452f420(ulonglong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  ulonglong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_2;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
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
  puVar1[1] = &DAT_14c951cd0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e70e50;
  local_28 = *param_1;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14067a19c(puVar1,&local_28,&local_20,1);
  puVar1[7] = puVar1[7] | 0x1040000200;
  *(undefined4 *)((longlong)puVar1 + 0x34) = 1;
  *(undefined4 *)(puVar1 + 0xe) = 0xff010001;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452f58c FUN_14452f58c body=345 status=ok
// SIG undefined FUN_14452f58c(void)

undefined8 * FUN_14452f58c(ulonglong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  ulonglong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_2;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
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
  puVar1[1] = &DAT_14c9521c0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e71030;
  local_28 = *param_1;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1405ebd0e(puVar1,&local_28,&local_20,1);
  *(byte *)((longlong)puVar1 + 0x3e) = *(byte *)((longlong)puVar1 + 0x3e) | 8;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452f6e6 FUN_14452f6e6 body=343 status=ok
// SIG undefined FUN_14452f6e6(void)

undefined8 * FUN_14452f6e6(ulonglong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  ulonglong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_2;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952318) {
    FUN_144b3d300(&DAT_14c952318);
    if (DAT_14c952318 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1468e122c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008801;
      FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0);
      atexit(FUN_142817034);
      _Init_thread_footer(&DAT_14c952318);
    }
  }
  puVar1[1] = &DAT_14c9522c8;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e6f6a0;
  local_28 = *param_1;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468ec5aa(puVar1,&local_28,&local_20,1);
  *(byte *)((longlong)puVar1 + 0x3e) = *(byte *)((longlong)puVar1 + 0x3e) | 8;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452f83e FUN_14452f83e body=345 status=ok
// SIG undefined FUN_14452f83e(void)

undefined8 * FUN_14452f83e(ulonglong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  ulonglong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_2;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1408a629c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  puVar1[1] = &DAT_14c952378;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e71d60;
  local_28 = *param_1;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1408a63f8(puVar1,&local_28,&local_20,1);
  *(byte *)((longlong)puVar1 + 0x3e) = *(byte *)((longlong)puVar1 + 0x3e) | 8;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452f998 FUN_14452f998 body=352 status=ok
// SIG undefined FUN_14452f998(void)

undefined8 * FUN_14452f998(ulonglong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  ulonglong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_2;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  puVar1[1] = &DAT_14c9523d0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e712b0;
  local_28 = *param_1;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14079c746(puVar1,&local_28,&local_20,1);
  *(byte *)((longlong)puVar1 + 0x3e) = *(byte *)((longlong)puVar1 + 0x3e) | 8;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452fafa FUN_14452fafa body=522 status=ok
// SIG undefined FUN_14452fafa(void)

undefined8 FUN_14452fafa(undefined8 *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  float *pfVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  longlong lVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  
  iVar16 = *(int *)(param_1 + 1);
  lVar17 = FUN_140ce9674();
  if (iVar16 == *(int *)(*(longlong *)(lVar17 + 0xb8) + 8)) {
    lVar17 = param_2[1];
    uVar18 = FUN_1457dd274(3,4,4);
    iVar16 = FUN_145cc73c0(uVar18);
    uVar18 = 0;
    if ((int)lVar17 == iVar16) {
      pdVar6 = (double *)*param_1;
      dVar10 = *pdVar6;
      dVar11 = pdVar6[1];
      dVar12 = pdVar6[2];
      dVar19 = dVar11 + dVar11;
      dVar20 = dVar12 + dVar12;
      dVar8 = dVar10 * (dVar10 + dVar10);
      dVar13 = pdVar6[8];
      dVar14 = pdVar6[9];
      dVar15 = pdVar6[10];
      dVar1 = *pdVar6;
      dVar2 = pdVar6[3];
      dVar9 = dVar2 * (dVar10 + dVar10);
      dVar3 = pdVar6[4];
      pfVar7 = (float *)*param_2;
      dVar4 = pdVar6[5];
      dVar5 = pdVar6[6];
      *pfVar7 = (float)((1.0 - (dVar12 * dVar20 + dVar11 * dVar19)) * dVar13);
      pfVar7[1] = (float)((dVar19 * dVar10 + dVar2 * dVar20) * dVar13);
      pfVar7[2] = (float)((dVar1 * dVar20 - dVar19 * dVar2) * dVar13);
      pfVar7[3] = 0.0;
      pfVar7[4] = (float)((dVar19 * dVar10 - dVar2 * dVar20) * dVar14);
      pfVar7[5] = (float)((1.0 - (dVar12 * dVar20 + dVar8)) * dVar14);
      pfVar7[6] = (float)((dVar20 * dVar11 + dVar9) * dVar14);
      pfVar7[7] = 0.0;
      pfVar7[8] = (float)((dVar19 * dVar2 + dVar1 * dVar20) * dVar15);
      pfVar7[9] = (float)((dVar20 * dVar11 - dVar9) * dVar15);
      pfVar7[10] = (float)((1.0 - (dVar8 + dVar11 * dVar19)) * dVar15);
      pfVar7[0xb] = 0.0;
      pfVar7[0xc] = (float)dVar3;
      pfVar7[0xd] = (float)dVar4;
      pfVar7[0xe] = (float)dVar5;
      pfVar7[0xf] = 1.0;
      uVar18 = 1;
    }
  }
  else {
    uVar18 = 0;
  }
  return uVar18;
}



// FUNCTION 14452fd04 FUN_14452fd04 body=334 status=ok
// SIG undefined FUN_14452fd04(void)

undefined8 * FUN_14452fd04(ulonglong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  ulonglong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_2;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  puVar1[1] = &DAT_14c952060;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e71530;
  local_28 = *param_1;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1409e13f4(puVar1,&local_28,&local_20,1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14452fe54 FUN_14452fe54 body=450 status=ok
// SIG undefined FUN_14452fe54(void)

undefined8 * FUN_14452fe54(char *param_1,ulonglong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  ulonglong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *param_3;
  uVar2 = *param_2;
  if ((((uVar2 & 1) != 0) && ((uVar2 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  local_28 = uVar1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x78,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  puVar4[1] = &DAT_14c952a08;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  *puVar4 = &PTR_LAB_149e71fe0;
  local_30 = uVar2;
  if ((((uVar2 & 1) != 0) && ((uVar2 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar2 & 0xfffffffffffffffe);
  }
  FUN_1403a697c(puVar4,&local_30,&local_28,1);
  lVar3 = *(longlong *)(param_1 + 8);
  lVar5 = lVar3;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
    lVar5 = *(longlong *)(param_1 + 8);
  }
  puVar4[0xe] = lVar3;
  *(uint *)((longlong)puVar4 + 0x34) =
       -*(int *)(lVar5 + 0x5c) & (*(int *)(lVar5 + 0x58) + *(int *)(lVar5 + 0x5c)) - 1U;
  if (*param_1 == '\x01') {
    *(byte *)((longlong)puVar4 + 0x3e) = *(byte *)((longlong)puVar4 + 0x3e) | 8;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144530042 FUN_144530042 body=29 status=ok
// SIG undefined FUN_144530042(void)

undefined8 FUN_144530042(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453005f FUN_14453005f body=98 status=ok
// SIG undefined FUN_14453005f(void)

void FUN_14453005f(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x40);
    do {
      if (plVar4[-4] != 0) {
        plVar3 = (longlong *)plVar4[-2];
        if ((longlong *)plVar4[-2] == (longlong *)0x0) {
          plVar3 = plVar4;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      plVar3 = (longlong *)plVar4[-6];
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
      plVar4 = plVar4 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1445300c2 FUN_1445300c2 body=265 status=ok
// SIG undefined FUN_1445300c2(void)

void FUN_1445300c2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1445301cb FUN_1445301cb body=98 status=ok
// SIG undefined FUN_1445301cb(void)

void FUN_1445301cb(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x40);
    do {
      if (plVar4[-4] != 0) {
        plVar3 = (longlong *)plVar4[-2];
        if ((longlong *)plVar4[-2] == (longlong *)0x0) {
          plVar3 = plVar4;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      plVar3 = (longlong *)plVar4[-6];
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
      plVar4 = plVar4 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14453022e FUN_14453022e body=106 status=ok
// SIG undefined FUN_14453022e(void)

undefined8 * FUN_14453022e(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = param_2[4];
  param_1[4] = lVar1;
  param_1[6] = 0;
  if (lVar1 != 0) {
    puVar3 = param_2 + 8;
    if ((undefined8 *)param_2[6] != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)param_2[6];
    }
    (**(code **)*puVar3)(puVar3,param_1 + 6);
  }
  uVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  return param_1;
}



// FUNCTION 144530298 FUN_144530298 body=261 status=ok
// SIG undefined FUN_144530298(void)

void FUN_144530298(longlong param_1,int param_2)

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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0x10);
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
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14453039e FUN_14453039e body=217 status=ok
// SIG undefined FUN_14453039e(void)

undefined8 FUN_14453039e(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar2 = (longlong)param_2 * 0x70;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar2 < 0x7ff1) {
        uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
      }
      else {
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar2 = -uVar5 & (uVar2 + uVar5) - 1;
      }
    }
    else {
      uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0x10);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 4;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2492492492492493),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  iVar6 = 0x7fffffff;
  if ((iVar4 < param_2) || (iVar6 = iVar4, 0 < iVar4)) {
    uVar3 = FUN_1446f8d3c(param_1,0,iVar6,0x70,0x10);
  }
  else {
    iVar6 = 0;
  }
  *(int *)(param_1 + 0xc) = iVar6;
  return uVar3;
}



// FUNCTION 144530477 FUN_144530477 body=133 status=ok
// SIG undefined FUN_144530477(void)

void FUN_144530477(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined8 *)(param_1 + 0x30);
  puVar7 = (undefined8 *)(param_2 + 0x40);
  do {
    puVar6[-6] = puVar7[-8];
    puVar6[-5] = puVar7[-7];
    lVar1 = puVar7[-6];
    puVar6[-4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar1 = puVar7[-4];
    puVar6[-2] = lVar1;
    *puVar6 = 0;
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)puVar7[-2];
      if ((undefined8 *)puVar7[-2] == (undefined8 *)0x0) {
        puVar5 = puVar7;
      }
      (**(code **)*puVar5)(puVar5,puVar6);
    }
    uVar2 = *(undefined4 *)((longlong)puVar7 + 0x24);
    uVar3 = *(undefined4 *)(puVar7 + 5);
    uVar4 = *(undefined4 *)((longlong)puVar7 + 0x2c);
    *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(puVar7 + 4);
    *(undefined4 *)((longlong)puVar6 + 0x34) = uVar2;
    *(undefined4 *)(puVar6 + 7) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar4;
    puVar6 = puVar6 + 0xe;
    puVar7 = puVar7 + 0xe;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1445304fc FUN_1445304fc body=1006 status=ok
// SIG undefined FUN_1445304fc(void)

undefined8 FUN_1445304fc(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  char cVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  undefined *puVar14;
  size_t _Size;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  code *local_e0;
  byte local_d1;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong *local_a8;
  int local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar11 = 0;
  if (((int)param_2[1] == (int)param_1[2]) &&
     ((int)param_3[1] == *(int *)((longlong)param_1 + 0x14))) {
    uVar11 = 1;
    if ((longlong)(int)param_1[1] != 0) {
      local_c8 = *param_3;
      local_d0 = param_3[2];
      local_b8 = *param_2;
      plVar15 = (longlong *)*param_1;
      local_c0 = plVar15 + (longlong)(int)param_1[1] * 0xe;
      do {
        lVar5 = *plVar15;
        puVar13 = (ulonglong *)(*(int *)(lVar5 + 0x44) + local_b8);
        if (lVar5 == 0) {
LAB_144530773:
          lVar9 = plVar15[1];
          plVar1 = (longlong *)plVar15[2];
          if (plVar1 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
            UNLOCK();
          }
          lVar16 = (int)plVar15[0xc] + local_c8;
          uVar4 = *(undefined4 *)((longlong)plVar15 + 100);
          lVar17 = (longlong)*(int *)((longlong)plVar15 + 0x6c) * 0x10 + local_d0;
          local_80 = FUN_1457dcf50(lVar9);
          local_a0 = *(int *)(lVar5 + 0x34) * *(int *)(lVar5 + 0x30);
          pcVar6 = (code *)plVar15[4];
          plVar12 = plVar15 + 8;
          if ((longlong *)plVar15[6] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar15[6];
          }
          local_a8 = puVar13;
          local_98 = lVar16;
          local_90 = uVar4;
          local_88 = lVar17;
          uVar11 = (**(code **)(*plVar12 + 8))();
          cVar8 = (*pcVar6)(uVar11,&local_a8,&local_98);
          if (plVar1 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar1 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
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
          if (cVar8 == '\0') {
LAB_1445308b7:
            uVar11 = 0;
            goto LAB_1445308bd;
          }
        }
        else {
          puVar14 = *(undefined **)(lVar5 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
            FUN_1446ddbd2();
            local_e0 = FUN_140b31576;
            local_e8 = &DAT_14c951a38;
            local_f0 = 0;
            local_f8 = 0x208001;
            FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
            atexit(FUN_14280cbf7);
            _Init_thread_footer(&DAT_14c951ae0);
          }
          if (DAT_14c951a98 == 0) {
            bVar18 = puVar14 != (undefined *)0x0;
            if (puVar14 != &DAT_14c951a90 && bVar18) {
              do {
                puVar14 = *(undefined **)(puVar14 + 0x30);
                bVar18 = puVar14 != (undefined *)0x0;
                if (puVar14 == &DAT_14c951a90) break;
              } while (puVar14 != (undefined *)0x0);
            }
            if (!bVar18) goto LAB_144530773;
          }
          else if ((*(ulonglong *)(puVar14 + 0x18) & DAT_14c951a98) == 0) goto LAB_144530773;
          memset((void *)((int)plVar15[0xc] + local_c8),0,(longlong)(int)plVar15[0xd]);
          local_d1 = *(byte *)(lVar5 + 0x70);
          (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x178))();
          local_b0 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x78) + 0x34);
          lVar9 = (longlong)*(int *)((longlong)plVar15 + 0x6c) * 0x10;
          plVar1 = (longlong *)(local_d0 + lVar9);
          _Size = (longlong)(int)puVar13[1] * (longlong)*(int *)((longlong)plVar15 + 100);
          iVar3 = *(int *)(local_d0 + 8 + lVar9);
          uVar7 = (uint)_Size;
          *(uint *)(local_d0 + 8 + lVar9) = iVar3 + uVar7;
          if ((uint)(*(int *)(local_d0 + 0xc + lVar9) - iVar3) < uVar7) {
            FUN_1447403be(plVar1);
          }
          memset((void *)((longlong)iVar3 + *plVar1),0,_Size);
          if (0 < (int)puVar13[1]) {
            lVar16 = 0;
            lVar9 = 0;
            do {
              if ((local_d1 & 1) == 0) {
                uVar10 = *puVar13;
              }
              else {
                uVar10 = *puVar13;
                if ((uVar10 & 1) != 0) {
                  uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)puVar13;
                }
              }
              local_78 = uVar10 + lVar16;
              local_60 = *(int *)((longlong)plVar15 + 100);
              local_68 = (longlong)((int)lVar9 * local_60) + *plVar1;
              local_58 = 0;
              local_50 = 0;
              local_70 = *(int *)(*(longlong *)(lVar5 + 0x78) + 0x34) *
                         *(int *)(*(longlong *)(lVar5 + 0x78) + 0x30);
              pcVar6 = (code *)plVar15[4];
              plVar12 = (longlong *)plVar15[6];
              if ((longlong *)plVar15[6] == (longlong *)0x0) {
                plVar12 = plVar15 + 8;
              }
              uVar11 = (**(code **)(*plVar12 + 8))();
              cVar8 = (*pcVar6)(uVar11,&local_78,&local_68);
              FUN_145b26c9a(0,0);
              if (cVar8 == '\0') goto LAB_1445308b7;
              lVar9 = lVar9 + 1;
              lVar16 = lVar16 + local_b0;
            } while (lVar9 < (int)puVar13[1]);
          }
        }
        plVar15 = plVar15 + 0xe;
      } while (plVar15 != local_c0);
      uVar11 = 1;
    }
  }
LAB_1445308bd:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1445308ec FUN_1445308ec body=108 status=ok
// SIG undefined FUN_1445308ec(void)

undefined8 * FUN_1445308ec(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14bd1d880;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_14453039e(puVar1,iVar2);
    FUN_144530477(*puVar1,uVar3,iVar2);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 14453096a FUN_14453096a body=69 status=ok
// SIG undefined FUN_14453096a(void)

undefined8 * FUN_14453096a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd1d880;
  FUN_1445301cb(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445309b0 FUN_1445309b0 body=336 status=ok
// SIG undefined FUN_1445309b0(void)

void FUN_1445309b0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = *(undefined8 *)*param_1;
  plVar2 = (longlong *)param_1[1];
  plVar3 = (longlong *)*plVar2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != plVar3) {
    param_2[1] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(int *)(param_2 + 2) = (int)plVar2[1];
  param_2[3] = *(undefined8 *)param_1[2];
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)param_1[3];
  FUN_1446f470e(&local_30,L"struct",1);
  *(undefined8 *)((longlong)param_2 + 0x24) = local_30;
  if (*(longlong *)param_1[4] == 0) {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
    iVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)param_1[4] + 0xc);
    *(uint *)((longlong)param_2 + 0x2c) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)(param_2 + 6) = iVar5;
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)param_1[5];
  *(byte *)((longlong)param_2 + 0x49) = *(byte *)((longlong)param_2 + 0x49) | 1;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144530b02 FUN_144530b02 body=78 status=ok
// SIG undefined FUN_144530b02(void)

undefined8 * FUN_144530b02(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14bd1d8a0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 144530b56 FUN_144530b56 body=29 status=ok
// SIG undefined FUN_144530b56(void)

void FUN_144530b56(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144530b74 FUN_144530b74 body=29 status=ok
// SIG undefined FUN_144530b74(void)

undefined8 FUN_144530b74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144530b92 FUN_144530b92 body=316 status=ok
// SIG undefined FUN_144530b92(void)

void FUN_144530b92(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = *(undefined8 *)*param_1;
  plVar2 = (longlong *)param_1[1];
  plVar3 = (longlong *)*plVar2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != plVar3) {
    param_2[1] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(int *)(param_2 + 2) = (int)plVar2[1];
  FUN_1446f470e(&local_30,L"struct",1);
  *(undefined8 *)((longlong)param_2 + 0x24) = local_30;
  if (*(longlong *)param_1[2] == 0) {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
    iVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)param_1[2] + 0xc);
    *(uint *)((longlong)param_2 + 0x2c) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)(param_2 + 6) = iVar5;
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)param_1[3];
  *(byte *)((longlong)param_2 + 0x49) = *(byte *)((longlong)param_2 + 0x49) | 1;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144530cd0 FUN_144530cd0 body=70 status=ok
// SIG undefined FUN_144530cd0(void)

undefined8 * FUN_144530cd0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14bd1d8c0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 144530d1c FUN_144530d1c body=29 status=ok
// SIG undefined FUN_144530d1c(void)

void FUN_144530d1c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144530d3a FUN_144530d3a body=29 status=ok
// SIG undefined FUN_144530d3a(void)

undefined8 FUN_144530d3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144530d58 FUN_144530d58 body=491 status=ok
// SIG undefined FUN_144530d58(void)

undefined8 * FUN_144530d58(undefined8 *param_1,ulonglong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  undefined *local_68;
  code *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = *param_3;
  uVar1 = *param_2;
  if ((((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  local_40 = uVar4;
  puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951ae0) {
    FUN_144b3d300(&DAT_14c951ae0);
    if (DAT_14c951ae0 == -1) {
      FUN_1446ddbd2();
      local_60 = FUN_140b31576;
      local_68 = &DAT_14c951a38;
      local_70 = 0;
      local_78 = 0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
  }
  puVar3[1] = &DAT_14c951a90;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
  puVar3[0xd] = 0;
  *puVar3 = &PTR_LAB_149e70270;
  local_48 = uVar1;
  if ((((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar1 & 0xfffffffffffffffe);
  }
  local_78 = local_78 & 0xffffffffffffff00;
  FUN_140b316da(puVar3,&local_48,&local_40,0);
  FUN_1446f470e(&local_50,L"Inner",1);
  local_38 = local_50;
  pcVar2 = (code *)*param_1;
  plVar5 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[2];
  }
  local_58 = puVar3;
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  uVar4 = (*pcVar2)(uVar4,&local_58,&local_38);
  puVar3[0xf] = uVar4;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144530f44 FUN_144530f44 body=106 status=ok
// SIG undefined FUN_144530f44(void)

undefined8 * FUN_144530f44(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14bd1d8e0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 144530fb4 FUN_144530fb4 body=29 status=ok
// SIG undefined FUN_144530fb4(void)

void FUN_144530fb4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144530fd2 FUN_144530fd2 body=71 status=ok
// SIG undefined FUN_144530fd2(void)

undefined8 * FUN_144530fd2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd1d8e0;
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



// FUNCTION 14453101a FUN_14453101a body=746 status=ok
// SIG undefined FUN_14453101a(void)

ulonglong FUN_14453101a(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined *puVar10;
  undefined8 unaff_RBP;
  longlong lVar11;
  int iVar12;
  size_t _Size;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  code *local_a0;
  byte local_89;
  longlong local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  int local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = *(longlong **)(param_3 + 0x10);
  puVar2 = (ulonglong *)*param_2;
  iVar12 = 0;
  local_50 = 0;
  local_70 = 0;
  pcVar3 = (code *)*param_1;
  plVar9 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[2];
  }
  uVar6 = (**(code **)(*plVar9 + 8))();
  plVar7 = (longlong *)(*pcVar3)(uVar6,&local_50,&local_70);
  plVar9 = (longlong *)0x0;
  if (plVar7 != (longlong *)0x0) {
    puVar10 = (undefined *)plVar7[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      local_a0 = FUN_140b31576;
      local_a8 = &DAT_14c951a38;
      local_b0 = 0;
      local_b8 = 0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar14 = puVar10 != (undefined *)0x0;
      if (puVar10 != &DAT_14c951a90 && bVar14) {
        do {
          puVar10 = *(undefined **)(puVar10 + 0x30);
          bVar14 = puVar10 != (undefined *)0x0;
          if (puVar10 == &DAT_14c951a90) break;
        } while (puVar10 != (undefined *)0x0);
      }
    }
    else {
      bVar14 = (*(ulonglong *)(puVar10 + 0x18) & DAT_14c951a98) != 0;
    }
    plVar9 = (longlong *)0x0;
    if (bVar14) {
      plVar9 = plVar7;
    }
  }
  local_89 = *(byte *)(plVar9 + 0xe);
  (**(code **)(*(longlong *)plVar9[0xf] + 0x178))();
  local_88 = (longlong)*(int *)(plVar9[0xf] + 0x34);
  iVar4 = *(int *)((longlong)plVar1 + 0xc);
  *(undefined4 *)(plVar1 + 1) = 0;
  if (iVar4 < 0) {
    FUN_144893a1c(plVar1);
    iVar12 = (int)plVar1[1];
    iVar4 = *(int *)((longlong)plVar1 + 0xc);
  }
  _Size = (longlong)(int)puVar2[1] * (longlong)*(int *)(param_1 + 8);
  uVar5 = (uint)_Size;
  *(uint *)(plVar1 + 1) = uVar5 + iVar12;
  if ((uint)(iVar4 - iVar12) < uVar5) {
    FUN_1447403be(plVar1);
  }
  memset((void *)((longlong)iVar12 + *plVar1),0,_Size);
  if ((int)puVar2[1] < 1) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  }
  else {
    lVar13 = 0;
    lVar11 = 0;
    do {
      if ((local_89 & 1) == 0) {
        uVar8 = *puVar2;
      }
      else {
        uVar8 = *puVar2;
        if ((uVar8 & 1) != 0) {
          uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)puVar2;
        }
      }
      local_80 = uVar8 + lVar13;
      local_68 = *(int *)(param_1 + 8);
      local_70 = (longlong)((int)lVar11 * local_68) + *plVar1;
      local_60 = 0;
      local_58 = 0;
      local_78 = *(int *)(plVar9[0xf] + 0x34) * *(int *)(plVar9[0xf] + 0x30);
      pcVar3 = (code *)param_1[10];
      plVar7 = (longlong *)param_1[0xc];
      if ((longlong *)param_1[0xc] == (longlong *)0x0) {
        plVar7 = param_1 + 0xe;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      uVar5 = (*pcVar3)(uVar6,&local_80,&local_70);
      uVar8 = (ulonglong)uVar5;
      FUN_145b26c9a(0,0);
      if ((char)uVar5 == '\0') break;
      lVar11 = lVar11 + 1;
      lVar13 = lVar13 + local_88;
    } while (lVar11 < (int)puVar2[1]);
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9,1);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 144531306 FUN_144531306 body=161 status=ok
// SIG undefined FUN_144531306(void)

undefined8 * FUN_144531306(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14bd1d910;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(param_1 + 0x50);
  lVar1 = *(longlong *)(param_1 + 0x60);
  puVar2[0xc] = lVar1;
  puVar2[0xe] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x80);
    if (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x70);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 0xe);
  }
  return puVar2 + 2;
}



// FUNCTION 1445313ae FUN_1445313ae body=29 status=ok
// SIG undefined FUN_1445313ae(void)

void FUN_1445313ae(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445313cc FUN_1445313cc body=102 status=ok
// SIG undefined FUN_1445313cc(void)

undefined8 * FUN_1445313cc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd1d910;
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
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



// FUNCTION 144531432 FUN_144531432 body=166 status=ok
// SIG undefined FUN_144531432(void)

void FUN_144531432(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  *param_2 = *(undefined8 *)*param_1;
  plVar1 = (longlong *)param_1[1];
  plVar2 = (longlong *)*plVar1;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != plVar2) {
    param_2[1] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_2 + 2) = (int)plVar1[1];
  param_2[3] = *(undefined8 *)param_1[2];
  uVar5 = 0;
  if (*(longlong *)param_1[2] != 0) {
    uVar5 = FUN_145cc73c0();
  }
  *(undefined4 *)(param_2 + 4) = uVar5;
  *(undefined8 *)((longlong)param_2 + 0x24) = *(undefined8 *)param_1[3];
  if (*(char *)(param_1[4] + 0x10) == '\x01') {
    *(undefined1 *)((longlong)param_2 + 0x34) = 1;
    uVar4 = ((undefined8 *)param_1[4])[1];
    param_2[7] = *(undefined8 *)param_1[4];
    param_2[8] = uVar4;
  }
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)param_1[5];
  return;
}



// FUNCTION 1445314d8 FUN_1445314d8 body=78 status=ok
// SIG undefined FUN_1445314d8(void)

undefined8 * FUN_1445314d8(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14bd1d930;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 14453152c FUN_14453152c body=29 status=ok
// SIG undefined FUN_14453152c(void)

void FUN_14453152c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14453154a FUN_14453154a body=29 status=ok
// SIG undefined FUN_14453154a(void)

undefined8 FUN_14453154a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144531568 FUN_144531568 body=450 status=ok
// SIG undefined FUN_144531568(void)

undefined8 * FUN_144531568(char *param_1,ulonglong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  ulonglong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *param_3;
  uVar2 = *param_2;
  if ((((uVar2 & 1) != 0) && ((uVar2 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  local_28 = uVar1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x78,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  puVar4[1] = &DAT_14c952a08;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  *puVar4 = &PTR_LAB_149e71fe0;
  local_30 = uVar2;
  if ((((uVar2 & 1) != 0) && ((uVar2 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar2 & 0xfffffffffffffffe);
  }
  FUN_1403a697c(puVar4,&local_30,&local_28,1);
  lVar3 = *(longlong *)(param_1 + 8);
  lVar5 = lVar3;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
    lVar5 = *(longlong *)(param_1 + 8);
  }
  puVar4[0xe] = lVar3;
  *(uint *)((longlong)puVar4 + 0x34) =
       -*(int *)(lVar5 + 0x5c) & (*(int *)(lVar5 + 0x58) + *(int *)(lVar5 + 0x5c)) - 1U;
  if (*param_1 == '\x01') {
    *(byte *)((longlong)puVar4 + 0x3e) = *(byte *)((longlong)puVar4 + 0x3e) | 8;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144531756 FUN_144531756 body=29 status=ok
// SIG undefined FUN_144531756(void)

undefined8 FUN_144531756(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144531773 FUN_144531773 body=58 status=ok
// SIG undefined FUN_144531773(void)

void FUN_144531773(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1445317ae FUN_1445317ae body=265 status=ok
// SIG undefined FUN_1445317ae(void)

void FUN_1445317ae(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1445318b8 FUN_1445318b8 body=221 status=ok
// SIG undefined FUN_1445318b8(void)

undefined8 FUN_1445318b8(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  
  uVar4 = (longlong)param_2 * 0x50;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar6 & (uVar4 + uVar6) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar4;
  uVar2 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar6 = 0x7fffffff;
  iVar3 = (int)(uVar4 / 0x50);
  if ((iVar3 < param_2) || (uVar6 = uVar4 / 0x50 & 0xffffffff, 0 < iVar3)) {
    uVar5 = (undefined4)uVar6;
    uVar2 = FUN_1446f8d3c(param_1,0,uVar6,0x50,0x10);
  }
  else {
    uVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  return uVar2;
}



// FUNCTION 144531995 FUN_144531995 body=98 status=ok
// SIG undefined FUN_144531995(void)

void FUN_144531995(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_2 + 0x20);
  do {
    lVar1 = puVar3[-4];
    *param_1 = lVar1;
    param_1[2] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)puVar3[-2];
      if ((undefined8 *)puVar3[-2] == (undefined8 *)0x0) {
        puVar2 = puVar3;
      }
      (**(code **)*puVar2)(puVar2,param_1 + 2);
    }
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(puVar3 + 5);
    param_1[8] = puVar3[4];
    param_1 = param_1 + 10;
    puVar3 = puVar3 + 10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1445319f8 FUN_1445319f8 body=265 status=ok
// SIG undefined FUN_1445319f8(void)

undefined8 FUN_1445319f8(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = param_2[1];
  uVar11 = 0;
  if (((int)lVar7 <= (int)param_1[2]) && ((int)param_3[1] == *(int *)((longlong)param_1 + 0x14))) {
    lVar8 = param_1[1];
    uVar11 = 1;
    if ((longlong)(int)lVar8 != 0) {
      lVar14 = *param_3;
      lVar3 = *param_2;
      lVar4 = *param_1;
      lVar13 = 0;
      do {
        iVar1 = *(int *)(lVar4 + 0x40 + lVar13);
        lVar10 = (longlong)iVar1;
        iVar2 = *(int *)(lVar4 + 0x44 + lVar13);
        if (iVar2 + iVar1 <= (int)lVar7) {
          local_78 = lVar10 + lVar3;
          local_60 = *(undefined4 *)(lVar4 + 0x48 + lVar13);
          local_58 = 0;
          local_50 = 0;
          pcVar5 = *(code **)(lVar4 + lVar13);
          plVar6 = *(longlong **)(lVar4 + 0x10 + lVar13);
          plVar12 = (longlong *)(lVar4 + 0x20 + lVar13);
          if (plVar6 != (longlong *)0x0) {
            plVar12 = plVar6;
          }
          local_70 = iVar2;
          local_68 = lVar14;
          uVar11 = (**(code **)(*plVar12 + 8))();
          cVar9 = (*pcVar5)(uVar11,&local_78,&local_68);
          if (cVar9 == '\0') {
            uVar11 = 0;
            goto LAB_144531ada;
          }
          lVar10 = (longlong)*(int *)(lVar4 + 0x48 + lVar13);
          lVar14 = lVar14 + lVar10;
        }
        lVar13 = lVar13 + 0x50;
      } while ((longlong)(int)lVar8 * 0x50 != lVar13);
      uVar11 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
    }
  }
LAB_144531ada:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144531b02 FUN_144531b02 body=108 status=ok
// SIG undefined FUN_144531b02(void)

undefined8 * FUN_144531b02(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14bd1d970;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1445318b8(puVar1,iVar2);
    FUN_144531995(*puVar1,uVar3,iVar2);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 144531b80 FUN_144531b80 body=69 status=ok
// SIG undefined FUN_144531b80(void)

undefined8 * FUN_144531b80(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd1d970;
  FUN_144531773(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144531bc6 FUN_144531bc6 body=392 status=ok
// SIG undefined FUN_144531bc6(void)

void FUN_144531bc6(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = *(undefined8 *)*param_1;
  plVar3 = (longlong *)param_1[1];
  plVar4 = (longlong *)*plVar3;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != plVar4) {
    param_2[1] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  *(int *)(param_2 + 2) = (int)plVar3[1];
  param_2[3] = *(undefined8 *)param_1[2];
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)param_1[3];
  FUN_1446f470e(&local_30,L"struct",1);
  *(undefined8 *)((longlong)param_2 + 0x24) = local_30;
  if (*(longlong *)param_1[4] == 0) {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
    iVar10 = 0;
  }
  else {
    uVar2 = *(uint *)(*(longlong *)param_1[4] + 0xc);
    *(uint *)((longlong)param_2 + 0x2c) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar10 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar10 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar10 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar11;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar10 = iVar11;
      }
    }
  }
  *(int *)(param_2 + 6) = iVar10;
  if (*(char *)(param_1[5] + 0x10) == '\x01') {
    *(undefined1 *)((longlong)param_2 + 0x34) = 1;
    puVar6 = (undefined4 *)param_1[5];
    uVar7 = puVar6[1];
    uVar8 = puVar6[2];
    uVar9 = puVar6[3];
    *(undefined4 *)(param_2 + 7) = *puVar6;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar7;
    *(undefined4 *)(param_2 + 8) = uVar8;
    *(undefined4 *)((longlong)param_2 + 0x44) = uVar9;
  }
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)param_1[6];
  bVar1 = *(byte *)((longlong)param_2 + 0x49);
  *(byte *)((longlong)param_2 + 0x49) = bVar1 | 1;
  if (*(char *)param_1[7] == '\x01') {
    *(byte *)((longlong)param_2 + 0x49) = bVar1 | 3;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144531d50 FUN_144531d50 body=86 status=ok
// SIG undefined FUN_144531d50(void)

undefined8 * FUN_144531d50(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_2 = puVar8;
  *puVar8 = &PTR_FUN_14bd1d990;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  puVar8[7] = *(undefined8 *)(param_1 + 0x38);
  puVar8[8] = uVar7;
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  puVar8[3] = uVar3;
  puVar8[4] = uVar4;
  puVar8[1] = uVar1;
  puVar8[2] = uVar2;
  return puVar8 + 1;
}



// FUNCTION 144531dac FUN_144531dac body=29 status=ok
// SIG undefined FUN_144531dac(void)

void FUN_144531dac(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144531dca FUN_144531dca body=29 status=ok
// SIG undefined FUN_144531dca(void)

undefined8 FUN_144531dca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144531de8 FUN_144531de8 body=450 status=ok
// SIG undefined FUN_144531de8(void)

undefined8 * FUN_144531de8(char *param_1,ulonglong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  ulonglong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *param_3;
  uVar2 = *param_2;
  if ((((uVar2 & 1) != 0) && ((uVar2 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  local_28 = uVar1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x78,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  puVar4[1] = &DAT_14c952a08;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  *puVar4 = &PTR_LAB_149e71fe0;
  local_30 = uVar2;
  if ((((uVar2 & 1) != 0) && ((uVar2 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c(uVar2 & 0xfffffffffffffffe);
  }
  FUN_1403a697c(puVar4,&local_30,&local_28,1);
  lVar3 = *(longlong *)(param_1 + 8);
  lVar5 = lVar3;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
    lVar5 = *(longlong *)(param_1 + 8);
  }
  puVar4[0xe] = lVar3;
  *(uint *)((longlong)puVar4 + 0x34) =
       -*(int *)(lVar5 + 0x5c) & (*(int *)(lVar5 + 0x58) + *(int *)(lVar5 + 0x5c)) - 1U;
  if (*param_1 == '\x01') {
    *(byte *)((longlong)puVar4 + 0x3e) = *(byte *)((longlong)puVar4 + 0x3e) | 8;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144531fd6 FUN_144531fd6 body=29 status=ok
// SIG undefined FUN_144531fd6(void)

undefined8 FUN_144531fd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144531ff4 FUN_144531ff4 body=392 status=ok
// SIG undefined FUN_144531ff4(void)

void FUN_144531ff4(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = *(undefined8 *)*param_1;
  plVar3 = (longlong *)param_1[1];
  plVar4 = (longlong *)*plVar3;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != plVar4) {
    param_2[1] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  *(int *)(param_2 + 2) = (int)plVar3[1];
  param_2[3] = *(undefined8 *)param_1[2];
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)param_1[3];
  FUN_1446f470e(&local_30,L"struct",1);
  *(undefined8 *)((longlong)param_2 + 0x24) = local_30;
  if (*(longlong *)param_1[4] == 0) {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
    iVar10 = 0;
  }
  else {
    uVar2 = *(uint *)(*(longlong *)param_1[4] + 0xc);
    *(uint *)((longlong)param_2 + 0x2c) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar10 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar10 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar10 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar11;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar10 = iVar11;
      }
    }
  }
  *(int *)(param_2 + 6) = iVar10;
  if (*(char *)(param_1[5] + 0x10) == '\x01') {
    *(undefined1 *)((longlong)param_2 + 0x34) = 1;
    puVar6 = (undefined4 *)param_1[5];
    uVar7 = puVar6[1];
    uVar8 = puVar6[2];
    uVar9 = puVar6[3];
    *(undefined4 *)(param_2 + 7) = *puVar6;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar7;
    *(undefined4 *)(param_2 + 8) = uVar8;
    *(undefined4 *)((longlong)param_2 + 0x44) = uVar9;
  }
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)param_1[6];
  bVar1 = *(byte *)((longlong)param_2 + 0x49);
  *(byte *)((longlong)param_2 + 0x49) = bVar1 | 1;
  if (*(char *)param_1[7] == '\x01') {
    *(byte *)((longlong)param_2 + 0x49) = bVar1 | 3;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14453217e FUN_14453217e body=86 status=ok
// SIG undefined FUN_14453217e(void)

undefined8 * FUN_14453217e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_2 = puVar8;
  *puVar8 = &PTR_FUN_14bd1d9d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  puVar8[7] = *(undefined8 *)(param_1 + 0x38);
  puVar8[8] = uVar7;
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  puVar8[3] = uVar3;
  puVar8[4] = uVar4;
  puVar8[1] = uVar1;
  puVar8[2] = uVar2;
  return puVar8 + 1;
}



// FUNCTION 1445321da FUN_1445321da body=29 status=ok
// SIG undefined FUN_1445321da(void)

void FUN_1445321da(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445321f8 FUN_1445321f8 body=29 status=ok
// SIG undefined FUN_1445321f8(void)

undefined8 FUN_1445321f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144532216 FUN_144532216 body=333 status=ok
// SIG undefined FUN_144532216(void)

void FUN_144532216(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = *(undefined8 *)*param_1;
  plVar2 = (longlong *)param_1[1];
  plVar3 = (longlong *)*plVar2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != plVar3) {
    param_2[1] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(int *)(param_2 + 2) = (int)plVar2[1];
  FUN_1446f470e(&local_30,L"object",1);
  *(undefined8 *)((longlong)param_2 + 0x24) = local_30;
  if (*(longlong *)param_1[2] == 0) {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
    iVar9 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)param_1[2] + 0xc);
    *(uint *)((longlong)param_2 + 0x2c) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
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
      if (bVar12) {
        iVar9 = iVar10;
      }
    }
  }
  *(int *)(param_2 + 6) = iVar9;
  *(undefined1 *)((longlong)param_2 + 0x34) = 1;
  puVar5 = (undefined4 *)param_1[3];
  if (*(char *)(puVar5 + 4) == '\x01') {
    uVar6 = puVar5[1];
    uVar7 = puVar5[2];
    uVar8 = puVar5[3];
    *(undefined4 *)(param_2 + 7) = *puVar5;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar6;
    *(undefined4 *)(param_2 + 8) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0x44) = uVar8;
  }
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)param_1[4];
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144532364 FUN_144532364 body=78 status=ok
// SIG undefined FUN_144532364(void)

undefined8 * FUN_144532364(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14bd1d9f0;
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



// FUNCTION 1445323b8 FUN_1445323b8 body=29 status=ok
// SIG undefined FUN_1445323b8(void)

void FUN_1445323b8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445323d6 FUN_1445323d6 body=29 status=ok
// SIG undefined FUN_1445323d6(void)

undefined8 FUN_1445323d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445323f4 FUN_1445323f4 body=290 status=ok
// SIG undefined FUN_1445323f4(void)

void FUN_1445323f4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_2 = *(undefined8 *)*param_1;
  plVar2 = (longlong *)param_1[1];
  plVar3 = (longlong *)*plVar2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != plVar3) {
    param_2[1] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(int *)(param_2 + 2) = (int)plVar2[1];
  param_2[3] = *(undefined8 *)param_1[2];
  uVar6 = FUN_145cc73c0(*(undefined8 *)param_1[2]);
  *(undefined4 *)(param_2 + 4) = uVar6;
  *(undefined8 *)((longlong)param_2 + 0x24) = *(undefined8 *)param_1[3];
  if (*(longlong *)param_1[4] == 0) {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
    iVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)param_1[4] + 0xc);
    *(uint *)((longlong)param_2 + 0x2c) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar7 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar7 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar7 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar7 = iVar8;
      }
    }
  }
  *(int *)(param_2 + 6) = iVar7;
  *(undefined1 *)((longlong)param_2 + 0x34) = 1;
  uVar5 = ((undefined8 *)param_1[5])[1];
  param_2[7] = *(undefined8 *)param_1[5];
  param_2[8] = uVar5;
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)param_1[6];
  return;
}



// FUNCTION 144532516 FUN_144532516 body=86 status=ok
// SIG undefined FUN_144532516(void)

undefined8 * FUN_144532516(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14bd1da10;
  puVar6[7] = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 144532572 FUN_144532572 body=29 status=ok
// SIG undefined FUN_144532572(void)

void FUN_144532572(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144532590 FUN_144532590 body=29 status=ok
// SIG undefined FUN_144532590(void)

undefined8 FUN_144532590(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445325ae FUN_1445325ae body=50 status=ok
// SIG undefined FUN_1445325ae(void)

void FUN_1445325ae(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_144521b5a(param_1[2],param_1[3]);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1494ba03e();
  return;
}



// FUNCTION 1445325ea FUN_1445325ea body=29 status=ok
// SIG undefined FUN_1445325ea(void)

void FUN_1445325ea(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144532608 FUN_144532608 body=83 status=ok
// SIG undefined FUN_144532608(void)

undefined8 * FUN_144532608(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bd1df70;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144532682 FUN_144532682 body=282 status=ok
// SIG undefined FUN_144532682(void)

undefined8 * FUN_144532682(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14453265b);
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



// FUNCTION 14453279c FUN_14453279c body=150 status=ok
// SIG undefined FUN_14453279c(void)

ulonglong FUN_14453279c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar4 = (ulonglong)DAT_14c7585c8;
  if (param_1[0x17] != 0) {
    uVar4 = FUN_144521b5a(param_1[0x17],param_1[0x18]);
  }
  if (param_1[0x15] != 0) {
    uVar4 = FUN_1494ba03e();
  }
  plVar3 = (longlong *)param_1[0x16];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar4 = (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144532820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)*param_1)(param_1,1);
      return uVar4;
    }
  }
  return uVar4;
}



// FUNCTION 144532858 FUN_144532858 body=12 status=ok
// SIG undefined FUN_144532858(void)

void FUN_144532858(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144532861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144532864 FUN_144532864 body=111 status=ok
// SIG undefined FUN_144532864(void)

undefined8 * FUN_144532864(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14bd1dfd0;
  plVar1 = param_1 + 1;
  if (*(int *)(param_1 + 2) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1445328b5;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1445328b5:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445328d4 FUN_1445328d4 body=282 status=ok
// SIG undefined FUN_1445328d4(void)

undefined8 * FUN_1445328d4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14453265b);
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



// FUNCTION 1445329ee FUN_1445329ee body=176 status=ok
// SIG undefined FUN_1445329ee(void)

ulonglong FUN_1445329ee(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = (ulonglong)DAT_14c7585c8;
  plVar3 = (longlong *)param_1[0x15];
  if (*(int *)(param_1 + 0x16) != 0) {
    if (plVar3 == (longlong *)0x0) goto LAB_144532a6d;
    uVar2 = (**(code **)(*plVar3 + 0x60))();
    plVar3 = (longlong *)param_1[0x15];
    if (*(int *)(param_1 + 0x16) != 0) {
      if (plVar3 == (longlong *)0x0) goto LAB_144532a6d;
      (**(code **)*plVar3)(plVar3,0);
      uVar2 = FUN_1446efa72(param_1 + 0x15,0,0,0x10);
      *(undefined4 *)(param_1 + 0x16) = 0;
      plVar3 = (longlong *)param_1[0x15];
    }
  }
  if (plVar3 != (longlong *)0x0) {
    uVar2 = FUN_1400020a8();
  }
LAB_144532a6d:
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144532a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 144532a9e FUN_144532a9e body=356 status=ok
// SIG undefined FUN_144532a9e(void)

void FUN_144532a9e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x308);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  iVar8 = 0x20;
  if (0x20 < uVar3) {
    lVar4 = (longlong)(int)uVar3;
    if (0x20 < *(uint *)(param_1 + 0x30c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar5 = lVar4 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_144532b3a;
              lVar4 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar4 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_144532b3a:
    iVar6 = (int)(uVar5 / 0x18);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  *(int *)(param_1 + 0x30c) = iVar8;
  FUN_144532c02(param_1,param_2);
  return;
}



// FUNCTION 144532c02 FUN_144532c02 body=149 status=ok
// SIG undefined FUN_144532c02(void)

void FUN_144532c02(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x300);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x300,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x300),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x300,param_2,param_3,0x18);
  return;
}



// FUNCTION 144532c98 FUN_144532c98 body=404 status=ok
// SIG undefined FUN_144532c98(void)

void FUN_144532c98(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar3 = *(uint *)(param_1 + 0x308);
  uVar10 = *(uint *)(param_1 + 0x30c);
  uVar8 = 0x20;
  if (0x20 < (ulonglong)uVar3) {
    iVar4 = uVar10 - uVar3;
    if ((ulonglong)((longlong)iVar4 * 0x18) < 0x4000) {
      if (iVar4 < 0x41 || (int)(uVar10 * 2) <= (int)(uVar3 * 3)) {
        return;
      }
    }
    else if (iVar4 < 0x41) {
      return;
    }
    uVar8 = uVar3;
    if (0 < (int)uVar3) {
      uVar6 = (ulonglong)uVar3 * 0x18;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar5 = uVar6 + 0xf;
          if (uVar3 < 0x555) {
            uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
          }
          else {
            if ((uVar5 & 0x1ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_144532d56;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar6 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar6 = (ulonglong)DAT_14c841df8;
            }
            uVar6 = -uVar6 & ((uVar5 & 0x1ffffffff0) + uVar6) - 1;
          }
        }
        else {
          uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
          uVar10 = *(uint *)(param_1 + 0x30c);
        }
      }
LAB_144532d56:
      uVar8 = (uint)(uVar6 / 0x18);
    }
  }
  if (uVar8 == uVar10) {
    return;
  }
  *(uint *)(param_1 + 0x30c) = uVar8;
  FUN_144532c02(param_1,*(undefined4 *)(param_1 + 0x308));
  return;
}



// FUNCTION 144532e2c FUN_144532e2c body=362 status=ok
// SIG undefined FUN_144532e2c(void)

undefined8 FUN_144532e2c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_318 [32];
  undefined **local_2f8 [17];
  undefined8 local_270;
  undefined ***local_268;
  undefined2 local_260;
  undefined **local_258 [5];
  byte local_230;
  longlong *local_200;
  longlong local_1e0;
  undefined ***local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined **local_1b0;
  undefined ***local_1a8;
  undefined ***local_1a0;
  undefined ****local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_318;
  uVar1 = *param_2;
  memset(local_258,0,0x90);
  FUN_144869430(local_258);
  local_1c8 = 0;
  local_258[0] = &PTR_FUN_149e1e050;
  local_1b8 = 0x7fffffffffffffff;
  local_230 = local_230 | 1;
  local_1c0 = param_1;
  FUN_1449c2eca(local_258,0);
  FUN_1407134c4(local_2f8,local_258);
  local_270 = local_1d0;
  local_2f8[0] = &PTR_FUN_149eae6c0;
  local_260 = 1;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_268 = local_258;
  local_1d0 = local_2f8;
  local_1a8 = local_2f8;
  FUN_144938ae6(uVar1);
  FUN_14041e0ea(local_2f8);
  local_258[0] = &PTR__purecall_149e35f70;
  if (local_200 != (longlong *)0x0) {
    if (*local_200 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_200);
  }
  if (local_1e0 != 0) {
    if (*(longlong *)(local_1e0 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_1e0);
  }
  if ((local_20 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144532f98 FUN_144532f98 body=93 status=ok
// SIG undefined FUN_144532f98(void)

undefined8 * FUN_144532f98(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14bd1e120;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1447a127e(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2);
  }
  return puVar1;
}



// FUNCTION 144533008 FUN_144533008 body=57 status=ok
// SIG undefined FUN_144533008(void)

undefined8 * FUN_144533008(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd1e120;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144533042 FUN_144533042 body=123 status=ok
// SIG undefined FUN_144533042(void)

void FUN_144533042(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  pcVar2 = (code *)*param_1;
  if (pcVar2 != (code *)0x0) {
    plVar4 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[2];
    }
    local_30 = uVar1;
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,&local_30);
  }
  FUN_1494bd73c(uVar1,param_1 + 8);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445330be FUN_1445330be body=115 status=ok
// SIG undefined FUN_1445330be(void)

undefined8 * FUN_1445330be(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14bd1e140;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar3[2] = lVar1;
  puVar3[4] = 0;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar4)(puVar4,puVar3 + 4);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puVar3[10] = *(undefined8 *)(param_1 + 0x50);
  puVar3[0xb] = uVar2;
  return puVar3 + 2;
}



// FUNCTION 144533138 FUN_144533138 body=29 status=ok
// SIG undefined FUN_144533138(void)

void FUN_144533138(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144533156 FUN_144533156 body=71 status=ok
// SIG undefined FUN_144533156(void)

undefined8 * FUN_144533156(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd1e140;
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



// FUNCTION 14453319e FUN_14453319e body=58 status=ok
// SIG undefined FUN_14453319e(void)

undefined1 FUN_14453319e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  FUN_145ebd534(lVar1 + 0x98,param_1);
  FUN_145ebd534(lVar1 + 0xa8,param_1 + 0x10);
  return 1;
}



// FUNCTION 1445331d8 FUN_1445331d8 body=90 status=ok
// SIG undefined FUN_1445331d8(void)

undefined8 * FUN_1445331d8(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14bd1e180;
  FUN_1494cadd8(puVar1 + 1,param_1 + 8);
  FUN_1494cadd8(puVar1 + 3,param_1 + 0x18);
  return puVar1 + 1;
}



// FUNCTION 144533238 FUN_144533238 body=29 status=ok
// SIG undefined FUN_144533238(void)

void FUN_144533238(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144533256 FUN_144533256 body=95 status=ok
// SIG undefined FUN_144533256(void)

undefined8 * FUN_144533256(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd1e180;
  FUN_141239a12(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445332b6 FUN_1445332b6 body=78 status=ok
// SIG undefined FUN_1445332b6(void)

void FUN_1445332b6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145ba6e90();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1445332e9;
  }
  lVar2 = 0;
LAB_1445332e9:
  *(undefined4 *)(lVar2 + 0x128) = 1;
  FUN_1494bd73c(lVar2,param_1);
  return;
}



// FUNCTION 14453332e FUN_14453332e body=29 status=ok
// SIG undefined FUN_14453332e(void)

undefined8 FUN_14453332e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453334c FUN_14453334c body=78 status=ok
// SIG undefined FUN_14453334c(void)

void FUN_14453334c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145ba6e90();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14453337f;
  }
  lVar2 = 0;
LAB_14453337f:
  *(undefined4 *)(lVar2 + 0x128) = 2;
  FUN_1494bd73c(lVar2,param_1);
  return;
}



// FUNCTION 1445333c4 FUN_1445333c4 body=29 status=ok
// SIG undefined FUN_1445333c4(void)

undefined8 FUN_1445333c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445333e6 FUN_1445333e6 body=145 status=ok
// SIG undefined FUN_1445333e6(void)

void FUN_1445333e6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145a96ec4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_144533408;
  }
  param_2 = (longlong *)0x0;
LAB_144533408:
  local_20 = *param_1;
  if ((local_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_2 + 0x300))(param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144533478 FUN_144533478 body=63 status=ok
// SIG undefined FUN_144533478(void)

longlong FUN_144533478(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14bd1e280;
  lVar1 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_2 + 0x18) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_2 + 0x18;
}



// FUNCTION 1445334ca FUN_1445334ca body=29 status=ok
// SIG undefined FUN_1445334ca(void)

undefined8 FUN_1445334ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453352a FUN_14453352a body=29 status=ok
// SIG undefined FUN_14453352a(void)

undefined8 FUN_14453352a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144533548 FUN_144533548 body=102 status=ok
// SIG undefined FUN_144533548(void)

void FUN_144533548(double *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *param_2;
  *(undefined4 *)(lVar1 + 0x130) = 2;
  local_10 = param_1[1] + 0.0;
  local_18 = *param_1 + 300.0;
  FUN_1494bd73c(lVar1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445335da FUN_1445335da body=29 status=ok
// SIG undefined FUN_1445335da(void)

undefined8 FUN_1445335da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144533608 FUN_144533608 body=147 status=ok
// SIG undefined FUN_144533608(void)

undefined8 * FUN_144533608(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar5;
  *puVar5 = &PTR_FUN_14bd1e2e0;
  puVar5[1] = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
  *(undefined4 *)(puVar5 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
  puVar5[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar5 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar5 + 4,iVar1,0);
    memcpy((void *)puVar5[4],_Src,(longlong)iVar1 * 2);
  }
  return puVar5 + 1;
}



// FUNCTION 1445336a2 FUN_1445336a2 body=29 status=ok
// SIG undefined FUN_1445336a2(void)

void FUN_1445336a2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445336c0 FUN_1445336c0 body=57 status=ok
// SIG undefined FUN_1445336c0(void)

undefined8 * FUN_1445336c0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd1e2e0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445336fa FUN_1445336fa body=209 status=ok
// SIG undefined FUN_1445336fa(void)

void FUN_1445336fa(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = *param_2;
  if (lVar6 != 0) {
    lVar4 = FUN_145ba7064();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_14453370e;
  }
  lVar6 = 0;
LAB_14453370e:
  lVar4 = *param_1;
  if ((lVar4 != 0) && (lVar3 = FUN_149466e92(lVar4 + 0x30), (*(byte *)(lVar3 + 0x48) & 1) != 0)) {
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(lVar6 + 0x128) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar7 = iVar2 == 0;
      if (bVar7) {
        *(int *)(lVar4 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar2 = iVar5;
      }
    }
    *(int *)(lVar6 + 300) = iVar2;
  }
  return;
}



// FUNCTION 1445337f6 FUN_1445337f6 body=29 status=ok
// SIG undefined FUN_1445337f6(void)

undefined8 FUN_1445337f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144533814 FUN_144533814 body=209 status=ok
// SIG undefined FUN_144533814(void)

void FUN_144533814(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = *param_2;
  if (lVar6 != 0) {
    lVar4 = FUN_145ba6cbc();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_144533828;
  }
  lVar6 = 0;
LAB_144533828:
  lVar4 = *param_1;
  if ((lVar4 != 0) && (lVar3 = FUN_149466e92(lVar4 + 0x30), (*(byte *)(lVar3 + 0x48) & 1) != 0)) {
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(lVar6 + 0x128) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar7 = iVar2 == 0;
      if (bVar7) {
        *(int *)(lVar4 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar2 = iVar5;
      }
    }
    *(int *)(lVar6 + 300) = iVar2;
  }
  return;
}



// FUNCTION 144533910 FUN_144533910 body=29 status=ok
// SIG undefined FUN_144533910(void)

undefined8 FUN_144533910(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453392e FUN_14453392e body=209 status=ok
// SIG undefined FUN_14453392e(void)

void FUN_14453392e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = *param_2;
  if (lVar6 != 0) {
    lVar4 = FUN_145ba714e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_144533942;
  }
  lVar6 = 0;
LAB_144533942:
  lVar4 = *param_1;
  if ((lVar4 != 0) && (lVar3 = FUN_149466e92(lVar4 + 0x30), (*(byte *)(lVar3 + 0x48) & 1) != 0)) {
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(lVar6 + 0x128) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar7 = iVar2 == 0;
      if (bVar7) {
        *(int *)(lVar4 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar2 = iVar5;
      }
    }
    *(int *)(lVar6 + 300) = iVar2;
  }
  return;
}



// FUNCTION 144533a2a FUN_144533a2a body=29 status=ok
// SIG undefined FUN_144533a2a(void)

undefined8 FUN_144533a2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144533a48 FUN_144533a48 body=209 status=ok
// SIG undefined FUN_144533a48(void)

void FUN_144533a48(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = *param_2;
  if (lVar6 != 0) {
    lVar4 = FUN_145ba6da6();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_144533a5c;
  }
  lVar6 = 0;
LAB_144533a5c:
  lVar4 = *param_1;
  if ((lVar4 != 0) && (lVar3 = FUN_149466e92(lVar4 + 0x40), (*(byte *)(lVar3 + 0x48) & 0x42) != 0))
  {
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(lVar6 + 0x120) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar7 = iVar2 == 0;
      if (bVar7) {
        *(int *)(lVar4 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar2 = iVar5;
      }
    }
    *(int *)(lVar6 + 0x124) = iVar2;
  }
  return;
}



// FUNCTION 144533b44 FUN_144533b44 body=29 status=ok
// SIG undefined FUN_144533b44(void)

undefined8 FUN_144533b44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144533b62 FUN_144533b62 body=68 status=ok
// SIG undefined FUN_144533b62(void)

void FUN_144533b62(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145ba6740();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_144533b95;
  }
  lVar2 = 0;
LAB_144533b95:
  FUN_149495298(lVar2,*param_1);
  return;
}



// FUNCTION 144533bd0 FUN_144533bd0 body=29 status=ok
// SIG undefined FUN_144533bd0(void)

undefined8 FUN_144533bd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144533c26 FUN_144533c26 body=29 status=ok
// SIG undefined FUN_144533c26(void)

undefined8 FUN_144533c26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144533c44 FUN_144533c44 body=277 status=ok
// SIG undefined FUN_144533c44(void)

void FUN_144533c44(double *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  double *pdVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar3 = FUN_145ba7238();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      if (*(int *)(param_1 + 5) != *(int *)((longlong)param_1 + 0x54)) {
        lVar3 = *(longlong *)(lVar1 + 0x120);
        uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar7 = (uint)lVar3 & 0xffff;
        pdVar5 = param_1 + 0xb;
        if ((double *)param_1[0xc] != (double *)0x0) {
          pdVar5 = (double *)param_1[0xc];
        }
        iVar4 = *(int *)((longlong)pdVar5 +
                        (ulonglong)
                        (*(int *)(param_1 + 0xd) - 1U &
                        (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar4 != -1) {
          do {
            plVar6 = (longlong *)((longlong)param_1[4] + (longlong)iVar4 * 0x18);
            if (*plVar6 == lVar3) goto LAB_144533d08;
            iVar4 = (int)plVar6[2];
          } while (iVar4 != -1);
        }
      }
      plVar6 = (longlong *)0x0;
LAB_144533d08:
      *(longlong *)(lVar1 + 0x120) = plVar6[1];
    }
  }
  local_20 = param_1[1] + param_1[3];
  local_28 = *param_1 + param_1[2];
  FUN_1494bd73c(lVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144533d5a FUN_144533d5a body=126 status=ok
// SIG undefined FUN_144533d5a(void)

undefined8 * FUN_144533d5a(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x78);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14bd1e400;
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar1;
  *(undefined4 *)(puVar6 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar6 + 0x24) = uVar3;
  puVar6[1] = uVar4;
  puVar6[2] = uVar5;
  puVar6[9] = 0;
  *(undefined4 *)(puVar6 + 10) = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar6 + 0x5c) = 0;
  puVar6[0xd] = 0;
  *(undefined4 *)(puVar6 + 0xe) = 0;
  FUN_141262aba(puVar6 + 5,param_1 + 0x28);
  return puVar6 + 1;
}



// FUNCTION 144533dde FUN_144533dde body=29 status=ok
// SIG undefined FUN_144533dde(void)

void FUN_144533dde(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144533dfc FUN_144533dfc body=73 status=ok
// SIG undefined FUN_144533dfc(void)

undefined8 * FUN_144533dfc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd1e400;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144533e46 FUN_144533e46 body=97 status=ok
// SIG undefined FUN_144533e46(void)

undefined8 FUN_144533e46(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1458d08d2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_144533e79;
  }
  lVar2 = 0;
LAB_144533e79:
  FUN_145ebd534(lVar2 + 0x98,param_1);
  FUN_145ebd534(lVar2 + 0xa8,param_1 + 0x10);
  return 1;
}



// FUNCTION 144533ea8 FUN_144533ea8 body=185 status=ok
// SIG undefined FUN_144533ea8(void)

undefined8 * FUN_144533ea8(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14bd1e420;
  puVar1 = puVar4 + 1;
  puVar4[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(int *)(puVar4 + 2) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
  }
  else {
    FUN_149482bea(puVar1,iVar2,0);
    FUN_149482c4c(*puVar1,uVar3,iVar2);
  }
  puVar4[3] = 0;
  iVar2 = *(int *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(int *)(puVar4 + 4) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
  }
  else {
    FUN_149482bea(puVar4 + 3,iVar2,0);
    FUN_149482c4c(puVar4[3],uVar3,iVar2);
  }
  return puVar1;
}



// FUNCTION 144533f68 FUN_144533f68 body=29 status=ok
// SIG undefined FUN_144533f68(void)

void FUN_144533f68(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144533f86 FUN_144533f86 body=95 status=ok
// SIG undefined FUN_144533f86(void)

undefined8 * FUN_144533f86(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd1e420;
  FUN_141239a12(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144533fe6 FUN_144533fe6 body=157 status=ok
// SIG undefined FUN_144533fe6(void)

void FUN_144533fe6(double *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145ba6e90();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_144534028;
  }
  lVar2 = 0;
LAB_144534028:
  *(undefined4 *)(lVar2 + 0x128) = 1;
  local_28 = *param_1 + -450.0;
  local_20 = (param_1[1] + param_1[3]) * 0.5;
  FUN_1494bd73c(lVar2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144534084 FUN_144534084 body=78 status=ok
// SIG undefined FUN_144534084(void)

undefined8 * FUN_144534084(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14bd1e440;
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



// FUNCTION 1445340d8 FUN_1445340d8 body=29 status=ok
// SIG undefined FUN_1445340d8(void)

void FUN_1445340d8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445340f6 FUN_1445340f6 body=29 status=ok
// SIG undefined FUN_1445340f6(void)

undefined8 FUN_1445340f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144534114 FUN_144534114 body=158 status=ok
// SIG undefined FUN_144534114(void)

void FUN_144534114(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145ba6e90();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_144534156;
  }
  lVar2 = 0;
LAB_144534156:
  *(undefined4 *)(lVar2 + 0x128) = 2;
  local_28 = *(double *)(param_1 + 0x10) + 750.0;
  local_20 = (*(double *)(param_1 + 8) + *(double *)(param_1 + 0x18)) * 0.5;
  FUN_1494bd73c(lVar2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445341b4 FUN_1445341b4 body=78 status=ok
// SIG undefined FUN_1445341b4(void)

undefined8 * FUN_1445341b4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14bd1e460;
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



// FUNCTION 144534208 FUN_144534208 body=29 status=ok
// SIG undefined FUN_144534208(void)

void FUN_144534208(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144534226 FUN_144534226 body=29 status=ok
// SIG undefined FUN_144534226(void)

undefined8 FUN_144534226(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144534248 FUN_144534248 body=163 status=ok
// SIG undefined FUN_144534248(void)

void FUN_144534248(double *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145ba7238();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14453428a;
  }
  lVar2 = 0;
LAB_14453428a:
  *(double *)(lVar2 + 0x120) = param_1[5];
  local_20 = (param_1[1] + param_1[3]) * 0.5;
  local_28 = (*param_1 + param_1[2]) * 0.5;
  FUN_1494bd73c(lVar2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445342ec FUN_1445342ec body=78 status=ok
// SIG undefined FUN_1445342ec(void)

undefined8 * FUN_1445342ec(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14bd1e480;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 144534340 FUN_144534340 body=29 status=ok
// SIG undefined FUN_144534340(void)

void FUN_144534340(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14453435e FUN_14453435e body=29 status=ok
// SIG undefined FUN_14453435e(void)

undefined8 FUN_14453435e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453437c FUN_14453437c body=289 status=ok
// SIG undefined FUN_14453437c(void)

undefined8 FUN_14453437c(double *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  double *pdVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar3 = FUN_145ba7238();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      if (*(int *)(param_1 + 7) != *(int *)((longlong)param_1 + 100)) {
        lVar3 = *(longlong *)(lVar1 + 0x120);
        uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar7 = (uint)lVar3 & 0xffff;
        pdVar5 = param_1 + 0xd;
        if ((double *)param_1[0xe] != (double *)0x0) {
          pdVar5 = (double *)param_1[0xe];
        }
        iVar4 = *(int *)((longlong)pdVar5 +
                        (ulonglong)
                        (*(int *)(param_1 + 0xf) - 1U &
                        (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar4 != -1) {
          do {
            plVar6 = (longlong *)((longlong)param_1[6] + (longlong)iVar4 * 0x18);
            if (*plVar6 == lVar3) goto LAB_144534440;
            iVar4 = (int)plVar6[2];
          } while (iVar4 != -1);
        }
      }
      plVar6 = (longlong *)0x0;
LAB_144534440:
      *(longlong *)(lVar1 + 0x120) = plVar6[1];
    }
  }
  local_20 = (param_1[1] - param_1[3]) + param_1[5];
  local_28 = (*param_1 - param_1[2]) + param_1[4];
  FUN_1494bd73c(lVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453449e FUN_14453449e body=137 status=ok
// SIG undefined FUN_14453449e(void)

undefined8 * FUN_14453449e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar10 = (undefined8 *)FUN_14001cc68(0x88);
  *param_2 = puVar10;
  *puVar10 = &PTR_FUN_14bd1e4a0;
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  uVar6 = *(undefined4 *)(param_1 + 0x30);
  uVar7 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(puVar10 + 5) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar5;
  *(undefined4 *)(puVar10 + 6) = uVar6;
  *(undefined4 *)((longlong)puVar10 + 0x34) = uVar7;
  *(undefined4 *)(puVar10 + 3) = uVar1;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar2;
  *(undefined4 *)(puVar10 + 4) = uVar3;
  *(undefined4 *)((longlong)puVar10 + 0x24) = uVar4;
  puVar10[1] = uVar8;
  puVar10[2] = uVar9;
  puVar10[0xb] = 0;
  *(undefined4 *)(puVar10 + 0xc) = 0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  *(undefined8 *)((longlong)puVar10 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar10 + 0x6c) = 0;
  puVar10[0xf] = 0;
  *(undefined4 *)(puVar10 + 0x10) = 0;
  FUN_141262aba(puVar10 + 7,param_1 + 0x38);
  return puVar10 + 1;
}



// FUNCTION 14453452e FUN_14453452e body=29 status=ok
// SIG undefined FUN_14453452e(void)

void FUN_14453452e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14453454c FUN_14453454c body=76 status=ok
// SIG undefined FUN_14453454c(void)

undefined8 * FUN_14453454c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd1e4a0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 7);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144534598 FUN_144534598 body=57 status=ok
// SIG undefined FUN_144534598(void)

undefined1 FUN_144534598(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  FUN_145ebd534(lVar1 + 0x98,*param_1 + 0x98);
  FUN_145ebd534(lVar1 + 0xa8,*param_1 + 0xa8);
  return 1;
}



// FUNCTION 1445345fc FUN_1445345fc body=29 status=ok
// SIG undefined FUN_1445345fc(void)

undefined8 FUN_1445345fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453461a FUN_14453461a body=78 status=ok
// SIG undefined FUN_14453461a(void)

void FUN_14453461a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145ba6e90();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14453464d;
  }
  lVar2 = 0;
LAB_14453464d:
  *(undefined4 *)(lVar2 + 0x128) = 1;
  FUN_1494bd73c(lVar2,param_1);
  return;
}



// FUNCTION 144534692 FUN_144534692 body=29 status=ok
// SIG undefined FUN_144534692(void)

undefined8 FUN_144534692(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445346b0 FUN_1445346b0 body=78 status=ok
// SIG undefined FUN_1445346b0(void)

void FUN_1445346b0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145ba6e90();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1445346e3;
  }
  lVar2 = 0;
LAB_1445346e3:
  *(undefined4 *)(lVar2 + 0x128) = 2;
  FUN_1494bd73c(lVar2,param_1);
  return;
}



// FUNCTION 144534728 FUN_144534728 body=29 status=ok
// SIG undefined FUN_144534728(void)

undefined8 FUN_144534728(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453474a FUN_14453474a body=209 status=ok
// SIG undefined FUN_14453474a(void)

void FUN_14453474a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_2;
  if (lVar3 == 0) {
LAB_14453478d:
    lVar3 = 0;
  }
  else {
    lVar1 = FUN_1459f781e();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        != lVar1 + 0x30)) goto LAB_14453478d;
  }
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                    (*(longlong **)(param_1 + 0x20),param_1 + 0x10);
  if (lVar1 != 0) {
    lVar2 = FUN_14585e15a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_1445347c7;
  }
  lVar1 = 0;
LAB_1445347c7:
  FUN_1400bbfc4(local_48,lVar1);
  FUN_1494a2260(lVar3,local_48);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1494bd73c(lVar3,param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14453481c FUN_14453481c body=160 status=ok
// SIG undefined FUN_14453481c(void)

undefined8 * FUN_14453481c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar5;
  *puVar5 = &PTR_FUN_14bd1e520;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar5 + 0xc) = uVar2;
  *(undefined4 *)(puVar5 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar5 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar5 + 3,iVar1,0);
    memcpy((void *)puVar5[3],_Src,(longlong)iVar1 * 2);
  }
  puVar5[5] = *(undefined8 *)(param_1 + 0x28);
  return puVar5 + 1;
}



// FUNCTION 1445348c2 FUN_1445348c2 body=29 status=ok
// SIG undefined FUN_1445348c2(void)

void FUN_1445348c2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445348e0 FUN_1445348e0 body=57 status=ok
// SIG undefined FUN_1445348e0(void)

undefined8 * FUN_1445348e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd1e520;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453491a FUN_14453491a body=57 status=ok
// SIG undefined FUN_14453491a(void)

undefined1 FUN_14453491a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  FUN_145ebd534(lVar1 + 0x98,*param_1 + 0x98);
  FUN_145ebd534(lVar1 + 0xa8,*param_1 + 0xa8);
  return 1;
}



// FUNCTION 14453497e FUN_14453497e body=29 status=ok
// SIG undefined FUN_14453497e(void)

undefined8 FUN_14453497e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14453499c FUN_14453499c body=78 status=ok
// SIG undefined FUN_14453499c(void)

void FUN_14453499c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145ba6e90();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1445349cf;
  }
  lVar2 = 0;
LAB_1445349cf:
  *(undefined4 *)(lVar2 + 0x128) = 1;
  FUN_1494bd73c(lVar2,param_1);
  return;
}



// FUNCTION 144534a14 FUN_144534a14 body=29 status=ok
// SIG undefined FUN_144534a14(void)

undefined8 FUN_144534a14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144534a32 FUN_144534a32 body=78 status=ok
// SIG undefined FUN_144534a32(void)

void FUN_144534a32(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145ba6e90();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_144534a65;
  }
  lVar2 = 0;
LAB_144534a65:
  *(undefined4 *)(lVar2 + 0x128) = 2;
  FUN_1494bd73c(lVar2,param_1);
  return;
}



// FUNCTION 144534aaa FUN_144534aaa body=29 status=ok
// SIG undefined FUN_144534aaa(void)

undefined8 FUN_144534aaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144534acc FUN_144534acc body=79 status=ok
// SIG undefined FUN_144534acc(void)

void FUN_144534acc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145ba7238();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_144534aff;
  }
  lVar2 = 0;
LAB_144534aff:
  *(undefined8 *)(lVar2 + 0x120) = *(undefined8 *)(param_1 + 0x10);
  FUN_1494bd73c(lVar2,param_1);
  return;
}



// FUNCTION 144534b4e FUN_144534b4e body=29 status=ok
// SIG undefined FUN_144534b4e(void)

undefined8 FUN_144534b4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144534b6c FUN_144534b6c body=225 status=ok
// SIG undefined FUN_144534b6c(void)

undefined8 FUN_144534b6c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145a96ec4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (plVar2 = param_2,
       *(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
       lVar1 + 0x30)) goto LAB_144534bb4;
  }
  plVar2 = (longlong *)0x0;
LAB_144534bb4:
  local_30 = FUN_145ba439a();
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_30);
  }
  (**(code **)(*plVar2 + 0x300))(plVar2,&local_30);
  (**(code **)(*(longlong *)*param_1 + 0x170))((longlong *)*param_1,0,plVar2,0x34);
  lVar1 = *param_1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  plVar2[0x26] = lVar1;
  FUN_1494bd73c(param_2,param_1 + 1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144534c80 FUN_144534c80 body=29 status=ok
// SIG undefined FUN_144534c80(void)

undefined8 FUN_144534c80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144534c9d FUN_144534c9d body=3870 status=ok
// SIG undefined FUN_144534c9d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144534c9d(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined **ppuStack_90;
  undefined8 local_88;
  undefined4 local_7c;
  char *local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cc1c108);
  if (cVar1 == '\0') {
    _DAT_14cc1c108 = 0;
    uRam000000014cc1c110 = 0;
  }
  if (local_78 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcff010,2,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bcff930,2,0);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14bd01cc0;
  local_98 = 0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd01ce0,8,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd02910,2,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd03290,2,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd03b70,2,0);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14bd04780;
  local_98 = 0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd047a0,2,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd05170,2,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd05d70,2,0);
  local_78 = "bone";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd06520,1,0);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd06b60,1,&PTR_FUN_14bd06b30);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd070a0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd08240,2,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd08c00,2,0);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd09820,1,&PTR_FUN_14bd097f0);
  local_78 = "MyKernel";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1c4c8 = (ulonglong)uVar2;
  local_78 = "Group";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cc1c4d0 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cc1c4d8,L"InputBindingArray",1);
  FUN_1446f470e(&DAT_14cc1c4e0,L"OutputBindingArray",1);
  FUN_1446f470e(&DAT_14cc1c4e8,L"SecondaryInputBindingGroups",1);
  local_78 = "@NewGroup";
  uStack_70 = 9;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1c4f0 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cc1c4f8,L"Primary Group",1);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd0a490,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd0ad50,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd0b1b0,1,0);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd0b850,1,&PTR_FUN_14bd0b820);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14bd0bf70;
  local_98 = 0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd0bf90,1,0);
  FUN_1446f470e(&DAT_14cc1c5a8,L"Entry",1);
  FUN_1446f470e(&DAT_14cc1c5b0,L"Return",1);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 2;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd0ca10,1,&PTR_FUN_14bd0c9c0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd0cfd0,1,0);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd0d790,1,&PTR_FUN_14bd0d760);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd0ddb0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd0e2b0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd0e660,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd0eec0,2,0);
  local_78 = "Primary";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1c6c0 = (ulonglong)uVar2;
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd0f340,1,0);
  local_78 = "Data Interfaces";
  uStack_70 = 0xf;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1d808 = (ulonglong)uVar2;
  local_78 = "Execution Data Interfaces";
  uStack_70 = 0x19;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1c330 = (ulonglong)uVar2;
  local_78 = "Output Data Interfaces";
  uStack_70 = 0x16;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1c3b8 = (ulonglong)uVar2;
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd0f780,1,0);
  local_78 = "AssetRegistry";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cc1c6f8 = (ulonglong)uVar2;
  FUN_1446f470e(&local_78,PTR_u_bool_14c764e60,1);
  FUN_1446f470e(&local_78,PTR_u_float_14c764e68,1);
  FUN_1446f470e(&local_78,PTR_u_double_14c764e70,1);
  FUN_1446f470e(&local_78,PTR_DAT_14c764e78,1);
  FUN_1446f470e(&local_78,PTR_u_int32_14c764e80,1);
  FUN_1446f470e(&local_78,PTR_u_int64_14c764e88,1);
  FUN_1446f470e(&local_78,PTR_u_uint8_14c764e90,1);
  FUN_1446f470e(&local_78,PTR_u_uint32_14c764e98,1);
  FUN_1446f470e(&local_78,PTR_u_uint64_14c764ea0,1);
  FUN_1446f470e(&local_78,PTR_u_FName_14c764ea8,1);
  FUN_1446f470e(&local_78,PTR_u_FString_14c764eb0,1);
  FUN_1446f470e(&local_78,PTR_u_FText_14c764eb8,1);
  FUN_1446f470e(&local_78,PTR_u_TArray<bool>_14c764ec0,1);
  FUN_1446f470e(&local_78,PTR_u_TArray<float>_14c764ec8,1);
  FUN_1446f470e(&local_78,PTR_u_TArray<double>_14c764ed0,1);
  FUN_1446f470e(&local_78,PTR_u_TArray<int32>_14c764ed8,1);
  FUN_1446f470e(&local_78,PTR_u_TArray<uint32>_14c764ee0,1);
  FUN_1446f470e(&local_78,PTR_u_TArray<uint8>_14c764ee8,1);
  FUN_1446f470e(&local_78,PTR_u_TArray<FName>_14c764ef0,1);
  FUN_1446f470e(&local_78,PTR_u_TArray<FString>_14c764ef8,1);
  local_78 = (char *)0x10ca737593ede1aa;
  uStack_70 = 0x4df98a28;
  uStack_6c = 0x49b157a0;
  _DAT_14cc1c700 = 0x93ede1aa;
  uRam000000014cc1c704 = 0x10ca7375;
  uRam000000014cc1c708 = 0x4df98a28;
  uRam000000014cc1c70c = 0x49b157a0;
  FUN_141005458(&local_78,0xc,L"Dev-Optimus",0);
  atexit((_func_5014 *)&LAB_14452addd);
  local_78 = (char *)0x800000014bd0f7e0;
  local_7c = 0xb;
  uStack_70 = FUN_14577453c();
  uStack_6c._0_1_ = 1;
  FUN_146739a44(&local_78);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14bd0faf0;
  local_98 = 1;
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bd0fb10);
  local_78 = "Singleton";
  uStack_70 = 9;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cc1c768 = (ulonglong)uVar2;
  local_78 = "Vertex";
  uStack_70 = 6;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1d7f0 = (ulonglong)uVar2;
  local_78 = "Triangle";
  uStack_70 = 8;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cc1c770 = (ulonglong)uVar2;
  local_78 = "Bone";
  uStack_70 = 4;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1d7f8 = (ulonglong)uVar2;
  local_78 = "UVChannel";
  uStack_70 = 9;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1c2e0 = (ulonglong)uVar2;
  local_78 = "Index0";
  uStack_70 = 6;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78);
  DAT_14cc1d800 = (ulonglong)uVar2;
  local_88 = 2;
  ppuStack_90 = &PTR_FUN_14bd10320;
  local_98 = 2;
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bd10360);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14bd12020;
  local_98 = 1;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd12070,4,&PTR_FUN_14bd12040);
  local_78 = "Resource";
  uStack_70 = 8;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cc1c968 = (ulonglong)uVar2;
  local_78 = "Variable";
  uStack_70 = 8;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cc1c970 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cc1c978,L"PublicFunctions",1);
  FUN_1446f470e(&DAT_14cc1c728,L"FunctionReferences",1);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = 2;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd157c0,2,&PTR_FUN_14bd15770);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14bd15a40;
  local_98 = 1;
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bd15a60);
  FUN_146253a7a();
  atexit((_func_5014 *)&LAB_14452c9b4);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = 0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd16250,1,0);
  FUN_1446f470e(&DAT_14cc1c9c0,L"Public",1);
  FUN_1446f470e(&DAT_14cc1cc40);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = 4;
  FUN_14282b410(L"/Script/OptimusCore",0,0,&PTR_FUN_14bd167d0);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = 0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd17530,1,0);
  local_78 = "Data Interfaces";
  uStack_70 = 0xf;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1ccf8 = (ulonglong)uVar2;
  local_78 = "Deformers";
  uStack_70 = 9;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1c4c0 = (ulonglong)uVar2;
  local_78 = "Resources";
  uStack_70 = 9;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1cd00 = (ulonglong)uVar2;
  local_78 = "Variables";
  uStack_70 = 9;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1cd08 = (ulonglong)uVar2;
  local_78 = "Values";
  uStack_70 = 6;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1cd10 = (ulonglong)uVar2;
  local_78 = "Category";
  uStack_70 = 8;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cc1cd18 = (ulonglong)uVar2;
  local_78 = "Input";
  uStack_70 = 5;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cc1cd20 = (ulonglong)uVar2;
  local_78 = "Output";
  uStack_70 = 6;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cc1cd28 = (ulonglong)uVar2;
  local_78 = "Resource";
  uStack_70 = 8;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cc1cd30 = (ulonglong)uVar2;
  local_78 = "AllowParameters";
  uStack_70 = 0xf;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cc1cd38 = (ulonglong)uVar2;
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14bd1a980;
  local_98 = 0;
  FUN_14282b410(L"/Script/OptimusCore",&PTR_FUN_14bd1a9a0,1,0);
  local_78 = "SetupGraph";
  uStack_70 = 10;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1c988 = (ulonglong)uVar2;
  local_78 = "UpdateGraph";
  uStack_70 = 0xb;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1c980 = (ulonglong)uVar2;
  local_78 = "SubGraph";
  uStack_70 = 8;
  uStack_6c._0_1_ = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1ce90 = (ulonglong)uVar2;
  local_78 = "SubGraphNode";
  uStack_70 = 0xc;
  uStack_6c = (uint)uStack_6c._1_3_ << 8;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cc1ce98 = (ulonglong)uVar2;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


