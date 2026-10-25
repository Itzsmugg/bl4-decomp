// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145ef87b6 FUN_145ef87b6 body=230 status=ok
// SIG undefined FUN_145ef87b6(void)

int * FUN_145ef87b6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_144869a3c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 145ef889c FUN_145ef889c body=431 status=ok
// SIG undefined FUN_145ef889c(void)

void FUN_145ef889c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ef8a4c FUN_145ef8a4c body=628 status=ok
// SIG undefined FUN_145ef8a4c(void)

undefined8 * FUN_145ef8a4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1409e1656();
  cohtml::IAsyncResourceHandler::IAsyncResourceHandler((IAsyncResourceHandler *)(param_1 + 1));
  *param_1 = &PTR_FUN_14b451ce0;
  param_1[1] = &PTR_FUN_14b451da0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xc),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x11),4000);
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  FUN_145ef8cc2(param_1 + 0x2c);
  puVar2 = (undefined8 *)FUN_14001cc68(0xa8,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b453310;
  puVar1 = puVar2 + 2;
  FUN_145ef8fe8(puVar1);
  param_1[0x42] = puVar1;
  param_1[0x43] = puVar2;
  FUN_145ef8f48(param_1 + 0x42,puVar1);
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  uVar3 = FUN_14001cc68(0x70,0x10);
  FUN_145ef8d42(uVar3);
  param_1[0x48] = uVar3;
  param_1[0x49] = 0;
  FUN_14158df5e();
  FUN_1446ddc76(&local_60,"CohtmlPlugin",1);
  uVar3 = local_60;
  uVar4 = FUN_144a52528();
  FUN_1402c9134(uVar4,uVar3,local_54,1);
  FUN_145ef8eb4(param_1 + 0x44);
  FUN_1446ddc76(&local_60,"CohtmlPlugin",1);
  uVar3 = FUN_144a52528();
  FUN_1402c9134(uVar3,local_60,local_54,1);
  param_1[0x49] = &DAT_14cb90c70;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef8cc2 FUN_145ef8cc2 body=127 status=ok
// SIG undefined FUN_145ef8cc2(void)

undefined8 * FUN_145ef8cc2(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = &PTR_FUN_14b452940;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf),4000);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0xe) = 10;
  return param_1;
}



// FUNCTION 145ef8d42 FUN_145ef8d42 body=145 status=ok
// SIG undefined FUN_145ef8d42(void)

longlong FUN_145ef8d42(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140f7cd62();
  FUN_1410f2562(param_1 + 0x10);
  FUN_145ef8e44(param_1 + 0x20);
  uVar1 = FUN_140d6ac5a();
  FUN_140056680(param_1 + 0x30,uVar1);
  FUN_145ef8dd4(param_1 + 0x40);
  FUN_1414927bc(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_145965c70(param_1);
  FUN_145ef908e(local_20,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef8dd4 FUN_145ef8dd4 body=110 status=ok
// SIG undefined FUN_145ef8dd4(void)

undefined8 FUN_145ef8dd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_140d6ac5a();
  FUN_140056680(local_28,uVar1);
  FUN_144a882a8(param_1,local_28,L"Plugins/");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef8e44 FUN_145ef8e44 body=110 status=ok
// SIG undefined FUN_145ef8e44(void)

undefined8 FUN_145ef8e44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_140d6afb0();
  FUN_140056680(local_28,uVar1);
  FUN_144a882a8(param_1,local_28,L"Plugins/");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef8eb4 FUN_145ef8eb4 body=146 status=ok
// SIG undefined FUN_145ef8eb4(void)

void FUN_145ef8eb4(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong **)param_1 != &DAT_14cb90c08) {
    local_28 = 0;
    local_20 = 0;
    if (DAT_14cb90c08 != (longlong *)0x0 && DAT_14cb90c10 != 0) {
      (**(code **)(*DAT_14cb90c08 + 0x40))(DAT_14cb90c08,&local_28);
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



// FUNCTION 145ef8f48 FUN_145ef8f48 body=159 status=ok
// SIG undefined FUN_145ef8f48(void)

void FUN_145ef8f48(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_145ef8f85;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_145ef8f85;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145ef8f85:
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
                    /* WARNING: Could not recover jumptable at 0x000145ef8fe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145ef8fe8 FUN_145ef8fe8 body=166 status=ok
// SIG undefined FUN_145ef8fe8(void)

undefined8 * FUN_145ef8fe8(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0xe));
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x11));
  *(undefined1 *)(param_1 + 0x12) = 0;
  plVar1 = (longlong *)FUN_144a7d136();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      return param_1;
    }
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(lVar2 + 0xb0);
  return param_1;
}



// FUNCTION 145ef908e FUN_145ef908e body=223 status=ok
// SIG undefined FUN_145ef908e(void)

undefined8 FUN_145ef908e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1ca5b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b453940;
  local_30[3] = param_2;
  local_30[4] = &LAB_145965c6a;
  FUN_14123f6f0(&DAT_14cb109f0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef917a FUN_145ef917a body=204 status=ok
// SIG undefined FUN_145ef917a(void)

undefined8 * FUN_145ef917a(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1457e6eec();
  *param_1 = &PTR_FUN_14b4b15d0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_1446efa72(param_1 + 0xb,0,3,0x10);
  *(undefined4 *)(param_1 + 0xc) = 3;
  puVar1 = (undefined8 *)param_1[0xb];
  *puVar1 = &PTR_LAB_149e06450;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b4c2310;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_1);
  puVar1[4] = FUN_148a319d0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 145ef9246 FUN_145ef9246 body=124 status=ok
// SIG undefined FUN_145ef9246(void)

longlong * FUN_145ef9246(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x2a8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b635520;
  FUN_145ef92c2(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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



// FUNCTION 145ef92c2 FUN_145ef92c2 body=91 status=ok
// SIG undefined FUN_145ef92c2(void)

undefined8 * FUN_145ef92c2(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_1458f2fc6(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_1458f2fc6();
  }
  FUN_145c6c602(param_1,param_2);
  *param_1 = &PTR_FUN_14b9994c0;
  return param_1;
}



// FUNCTION 145ef931e FUN_145ef931e body=124 status=ok
// SIG undefined FUN_145ef931e(void)

longlong * FUN_145ef931e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b939f10;
  FUN_145ef939a(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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



// FUNCTION 145ef939a FUN_145ef939a body=91 status=ok
// SIG undefined FUN_145ef939a(void)

undefined8 * FUN_145ef939a(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_1458bd4bc(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_1458bd4bc();
  }
  FUN_140aed1ce(param_1,param_2);
  *param_1 = &PTR_FUN_14b977270;
  return param_1;
}



// FUNCTION 145ef93f6 FUN_145ef93f6 body=205 status=ok
// SIG undefined FUN_145ef93f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef93f6(void)

{
  if ((DAT_14c9c701f & 2) == 0) {
    DAT_14c9c701f = DAT_14c9c701f | 2;
    _DAT_14c9c6fc0 = L"FDistanceFieldShadowingCS";
    _DAT_14c9c6fd8 = FUN_146826540;
    _DAT_14c9c6fe0 = FUN_146825d77;
    _DAT_14c9c6fe8 = FUN_146825fd6;
    _DAT_14c9c6ff0 = FUN_1407e02ea;
    _DAT_14c9c6ff8 = FUN_146826273;
    _DAT_14c9c6fd0 = FUN_14714f504;
    _DAT_14c9c7010 = 0xffffffff000000e0;
    _DAT_14c9c7018 = 8;
    DAT_14c9c701c = 0;
    _DAT_14c9c7000 = &LAB_14714f52e;
    FUN_145ef94c4();
    FUN_1407e00cc(&DAT_14c9c6fb8);
    return;
  }
  return;
}



// FUNCTION 145ef94c4 FUN_145ef94c4 body=123 status=ok
// SIG undefined FUN_145ef94c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef94c4(void)

{
  _DAT_14c9c9748 = L"BASE";
  DAT_14c9c9772 = 4;
  _DAT_14c9c9750 = FUN_140b35ae4();
  _DAT_14c9c9758 = DAT_14c9c6fc8;
  _DAT_14c9c9760 = &LAB_14682652b;
  DAT_14c9c6fc8 = &DAT_14c9c9748;
  DAT_14c9c701d = DAT_14c9c701d + '\x01';
  _DAT_14c9c9768 = 0x100000000;
  if (*(char *)(_DAT_14c9c9750 + 100) != '\0') {
    DAT_14c9c701e = DAT_14c9c701e + '\x01';
  }
  return;
}



// FUNCTION 145ef9540 FUN_145ef9540 body=130 status=ok
// SIG undefined FUN_145ef9540(void)

undefined1 * FUN_145ef9540(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWShadowFactors";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x126;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147153cfc;
}



// FUNCTION 145ef95c2 FUN_145ef95c2 body=136 status=ok
// SIG undefined FUN_145ef95c2(void)

code * FUN_145ef95c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DownsampleFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28c0000013a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715370e;
}



// FUNCTION 145ef964a FUN_145ef964a body=138 status=ok
// SIG undefined FUN_145ef964a(void)

code * FUN_145ef964a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowFactorsTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2980000013c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153684;
}



// FUNCTION 145ef96d4 FUN_145ef96d4 body=40 status=ok
// SIG undefined FUN_145ef96d4(void)

undefined8 FUN_145ef96d4(undefined8 param_1,int param_2)

{
  FUN_145ef96fc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ef96fc FUN_145ef96fc body=167 status=ok
// SIG undefined FUN_145ef96fc(void)

void FUN_145ef96fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1df690;
  if (param_1[0x95] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x93] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_145ef97a4(param_1 + 0x72);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145ef97a4 FUN_145ef97a4 body=55 status=ok
// SIG undefined FUN_145ef97a4(void)

void FUN_145ef97a4(longlong *param_1)

{
  FUN_145ef97dc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ef97dc FUN_145ef97dc body=383 status=ok
// SIG undefined FUN_145ef97dc(void)

void FUN_145ef97dc(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ef995c FUN_145ef995c body=144 status=ok
// SIG undefined FUN_145ef995c(void)

code * FUN_145ef995c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ef99ec();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DiffuseIndirect";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSSDSignalTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x70000000bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f15282;
}



// FUNCTION 145ef99ec FUN_145ef99ec body=265 status=ok
// SIG undefined FUN_145ef99ec(void)

undefined * FUN_145ef99ec(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e7408) {
    FUN_144b3d300(&DAT_14c9e7408);
    if (DAT_14c9e7408 == -1) {
      FUN_145ef9af6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSSDSignalTextures";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x2a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e7388,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccd910);
      _Init_thread_footer(&DAT_14c9e7408);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e7388;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef9af6 FUN_145ef9af6 body=232 status=ok
// SIG undefined FUN_145ef9af6(void)

longlong * FUN_145ef9af6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar12 = FUN_1462d349e;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145ef9be4 FUN_145ef9be4 body=285 status=ok
// SIG undefined FUN_145ef9be4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ef9be4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca041a0) {
    FUN_144b3d300(&DAT_14ca041a0);
    if (DAT_14ca041a0 == -1) {
      FUN_145ef9e4c();
      FUN_145ef9d02();
      FUN_140db5666(&DAT_14ca040f8,0,&DAT_14ca04090,L"FLumenVisualizeBucketRaysByMaterialIdCS",
                    L"/Engine/Private/Lumen/LumenVisualizeHardwareRayTracing.usf",
                    L"FLumenVisualizeBucketRaysByMaterialIdCS",5,1,FUN_14722632a,FUN_1472262ca,
                    &LAB_1462e7474,&LAB_1472262c6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca06de0)
      ;
      _DAT_14ca040f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc8dd8);
      _Init_thread_footer(&DAT_14ca041a0);
    }
  }
  return &DAT_14ca040f8;
}



// FUNCTION 145ef9d02 FUN_145ef9d02 body=205 status=ok
// SIG undefined FUN_145ef9d02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef9d02(void)

{
  if ((DAT_14ca040f7 & 2) == 0) {
    DAT_14ca040f7 = DAT_14ca040f7 | 2;
    _DAT_14ca04098 = L"FLumenVisualizeBucketRaysByMaterialIdCS";
    _DAT_14ca040b0 = FUN_146826540;
    _DAT_14ca040b8 = FUN_146825d77;
    _DAT_14ca040c0 = FUN_146825fd6;
    _DAT_14ca040c8 = FUN_1407e02ea;
    _DAT_14ca040d0 = FUN_146826273;
    _DAT_14ca040a8 = FUN_147226298;
    _DAT_14ca040e8 = 0xffffffff000000e0;
    _DAT_14ca040f0 = 8;
    DAT_14ca040f4 = 0;
    _DAT_14ca040d8 = &LAB_1472262c2;
    FUN_145ef9dd0();
    FUN_1407e00cc(&DAT_14ca04090);
    return;
  }
  return;
}



// FUNCTION 145ef9dd0 FUN_145ef9dd0 body=123 status=ok
// SIG undefined FUN_145ef9dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ef9dd0(void)

{
  _DAT_14ca08058 = L"BASE";
  DAT_14ca08082 = 4;
  _DAT_14ca08060 = FUN_140b35ae4();
  _DAT_14ca08068 = DAT_14ca040a0;
  _DAT_14ca08070 = &LAB_14682652b;
  DAT_14ca040a0 = &DAT_14ca08058;
  DAT_14ca040f5 = DAT_14ca040f5 + '\x01';
  _DAT_14ca08078 = 0x100000000;
  if (*(char *)(_DAT_14ca08060 + 100) != '\0') {
    DAT_14ca040f6 = DAT_14ca040f6 + '\x01';
  }
  return;
}



// FUNCTION 145ef9e4c FUN_145ef9e4c body=261 status=ok
// SIG undefined FUN_145ef9e4c(void)

void FUN_145ef9e4c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca06e60) {
    FUN_144b3d300(&DAT_14ca06e60);
    if (DAT_14ca06e60 == -1) {
      FUN_145ef9f52(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x159;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06de0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3af7);
      _Init_thread_footer(&DAT_14ca06e60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ef9f52 FUN_145ef9f52 body=226 status=ok
// SIG undefined FUN_145ef9f52(void)

longlong * FUN_145ef9f52(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462eab30;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efa036 FUN_145efa036 body=132 status=ok
// SIG undefined FUN_145efa036(void)

undefined1 * FUN_145efa036(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RayAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14722d1ce;
}



// FUNCTION 145efa0ba FUN_145efa0ba body=136 status=ok
// SIG undefined FUN_145efa0ba(void)

code * FUN_145efa0ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TraceDataPacked";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<LumenVisualize::FTraceDataPacked>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000015d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efa142;
}



// FUNCTION 145efa142 FUN_145efa142 body=138 status=ok
// SIG undefined FUN_145efa142(void)

code * FUN_145efa142(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RayDataPacked";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<LumenVisualize::FRayDataPacked>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000015c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efa036;
}



// FUNCTION 145efa1cc FUN_145efa1cc body=234 status=ok
// SIG undefined FUN_145efa1cc(void)

undefined8 * FUN_145efa1cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149f2a560;
  param_1[3] = &PTR_FUN_149f2a5b0;
  *(undefined1 *)((longlong)param_1 + 0x21) = 0;
  memset(param_1 + 6,0,0x4f0);
  FUN_145efa2b6(param_1 + 6);
  param_1[0x5e] = 0;
  param_1[0x5f] = 0x2000000000;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0x2000000000;
  param_1[0xa2] = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  param_1[0xa5] = puVar1;
  param_1[0xa4] = puVar1;
  param_1[0xa8] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54f) = 0;
  return param_1;
}



// FUNCTION 145efa2b6 FUN_145efa2b6 body=197 status=ok
// SIG undefined FUN_145efa2b6(void)

undefined8 * FUN_145efa2b6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  puVar1 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  param_1[0x13] = puVar1;
  param_1[0x12] = puVar1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  param_1[0x15] = puVar1;
  param_1[0x14] = puVar1;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 145efa37c FUN_145efa37c body=205 status=ok
// SIG undefined FUN_145efa37c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efa37c(void)

{
  if ((DAT_14c9c76d7 & 2) == 0) {
    DAT_14c9c76d7 = DAT_14c9c76d7 | 2;
    _DAT_14c9c7678 = L"FScatterUploadDistanceFieldAtlasCS";
    _DAT_14c9c7690 = FUN_146826540;
    _DAT_14c9c7698 = FUN_146825d77;
    _DAT_14c9c76a0 = FUN_146825fd6;
    _DAT_14c9c76a8 = FUN_1407e02ea;
    _DAT_14c9c76b0 = FUN_146826273;
    _DAT_14c9c7688 = FUN_14714f938;
    _DAT_14c9c76c8 = 0xffffffff000000e0;
    _DAT_14c9c76d0 = 8;
    DAT_14c9c76d4 = 0;
    _DAT_14c9c76b8 = &LAB_14714f962;
    FUN_145efa44a();
    FUN_1407e00cc(&DAT_14c9c7670);
    return;
  }
  return;
}



// FUNCTION 145efa44a FUN_145efa44a body=123 status=ok
// SIG undefined FUN_145efa44a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efa44a(void)

{
  _DAT_14c9c9948 = L"BASE";
  DAT_14c9c9972 = 4;
  _DAT_14c9c9950 = FUN_140b35ae4();
  _DAT_14c9c9958 = DAT_14c9c7680;
  _DAT_14c9c9960 = &LAB_14682652b;
  DAT_14c9c7680 = &DAT_14c9c9948;
  DAT_14c9c76d5 = DAT_14c9c76d5 + '\x01';
  _DAT_14c9c9968 = 0x100000000;
  if (*(char *)(_DAT_14c9c9950 + 100) != '\0') {
    DAT_14c9c76d6 = DAT_14c9c76d6 + '\x01';
  }
  return;
}



// FUNCTION 145efa4c6 FUN_145efa4c6 body=226 status=ok
// SIG undefined FUN_145efa4c6(void)

longlong * FUN_145efa4c6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c12dc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efa5aa FUN_145efa5aa body=132 status=ok
// SIG undefined FUN_145efa5aa(void)

undefined1 * FUN_145efa5aa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWDistanceFieldBrickAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<UNORM float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147154268;
}



// FUNCTION 145efa62e FUN_145efa62e body=136 status=ok
// SIG undefined FUN_145efa62e(void)

code * FUN_145efa62e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BrickUploadCoordinates";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000008f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efa5aa;
}



// FUNCTION 145efa6b6 FUN_145efa6b6 body=138 status=ok
// SIG undefined FUN_145efa6b6(void)

code * FUN_145efa6b6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BrickUploadData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000090;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efa62e;
}



// FUNCTION 145efa740 FUN_145efa740 body=205 status=ok
// SIG undefined FUN_145efa740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efa740(void)

{
  if ((DAT_14c9efc8f & 2) == 0) {
    DAT_14c9efc8f = DAT_14c9efc8f | 2;
    _DAT_14c9efc30 = L"FFixupBordersAndGenerateMipsCS";
    _DAT_14c9efc48 = FUN_146826540;
    _DAT_14c9efc50 = FUN_146825d77;
    _DAT_14c9efc58 = FUN_146825fd6;
    _DAT_14c9efc60 = FUN_1407e02ea;
    _DAT_14c9efc68 = FUN_146826273;
    _DAT_14c9efc40 = FUN_1471e01ac;
    _DAT_14c9efc80 = 0xffffffff000000e0;
    _DAT_14c9efc88 = 8;
    DAT_14c9efc8c = 0;
    _DAT_14c9efc70 = &LAB_1471e01d6;
    FUN_145efa80e();
    FUN_1407e00cc(&DAT_14c9efc28);
    return;
  }
  return;
}



// FUNCTION 145efa80e FUN_145efa80e body=123 status=ok
// SIG undefined FUN_145efa80e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efa80e(void)

{
  _DAT_14c9f1ee0 = L"BASE";
  DAT_14c9f1f0a = 4;
  _DAT_14c9f1ee8 = FUN_140b35ae4();
  _DAT_14c9f1ef0 = DAT_14c9efc38;
  _DAT_14c9f1ef8 = &LAB_14682652b;
  DAT_14c9efc38 = &DAT_14c9f1ee0;
  DAT_14c9efc8d = DAT_14c9efc8d + '\x01';
  _DAT_14c9f1f00 = 0x100000000;
  if (*(char *)(_DAT_14c9f1ee8 + 100) != '\0') {
    DAT_14c9efc8e = DAT_14c9efc8e + '\x01';
  }
  return;
}



// FUNCTION 145efa88a FUN_145efa88a body=226 status=ok
// SIG undefined FUN_145efa88a(void)

longlong * FUN_145efa88a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462dacfe;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efa96e FUN_145efa96e body=132 status=ok
// SIG undefined FUN_145efa96e(void)

undefined1 * FUN_145efa96e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWFinalRadianceAtlasMip0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471e6f32;
}



// FUNCTION 145efa9f2 FUN_145efa9f2 body=136 status=ok
// SIG undefined FUN_145efa9f2(void)

code * FUN_145efa9f2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWFinalRadianceAtlasMip2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e6ea8;
}



// FUNCTION 145efaa7a FUN_145efaa7a body=138 status=ok
// SIG undefined FUN_145efaa7a(void)

code * FUN_145efaa7a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ProbeTraceData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000003ff;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e6e1e;
}



// FUNCTION 145efab04 FUN_145efab04 body=205 status=ok
// SIG undefined FUN_145efab04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efab04(void)

{
  if ((DAT_14ca1577f & 2) == 0) {
    DAT_14ca1577f = DAT_14ca1577f | 2;
    _DAT_14ca15720 = L"FCalculateSafeRasterizerArgs_CS";
    _DAT_14ca15738 = FUN_146826540;
    _DAT_14ca15740 = FUN_146825d77;
    _DAT_14ca15748 = FUN_146825fd6;
    _DAT_14ca15750 = FUN_1407e02ea;
    _DAT_14ca15758 = FUN_146826273;
    _DAT_14ca15730 = FUN_147252f76;
    _DAT_14ca15770 = 0xffffffff000000e0;
    _DAT_14ca15778 = 8;
    DAT_14ca1577c = 0;
    _DAT_14ca15760 = &LAB_147252fa2;
    FUN_145efabd2();
    FUN_1407e00cc(&DAT_14ca15718);
    return;
  }
  return;
}



// FUNCTION 145efabd2 FUN_145efabd2 body=123 status=ok
// SIG undefined FUN_145efabd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efabd2(void)

{
  _DAT_14ca19280 = L"BASE";
  DAT_14ca192aa = 4;
  _DAT_14ca19288 = FUN_140b35ae4();
  _DAT_14ca19290 = DAT_14ca15728;
  _DAT_14ca19298 = &LAB_14682652b;
  DAT_14ca15728 = &DAT_14ca19280;
  DAT_14ca1577d = DAT_14ca1577d + '\x01';
  _DAT_14ca192a0 = 0x100000000;
  if (*(char *)(_DAT_14ca19288 + 100) != '\0') {
    DAT_14ca1577e = DAT_14ca1577e + '\x01';
  }
  return;
}



// FUNCTION 145efac4e FUN_145efac4e body=226 status=ok
// SIG undefined FUN_145efac4e(void)

longlong * FUN_145efac4e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f19b0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efad32 FUN_145efad32 body=132 status=ok
// SIG undefined FUN_145efad32(void)

undefined1 * FUN_145efad32(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InTotalPrevDrawClusters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< FUintVector2 >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147259156;
}



// FUNCTION 145efadb6 FUN_145efadb6 body=136 status=ok
// SIG undefined FUN_145efadb6(void)

code * FUN_145efadb6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutSafeRasterizerArgsSWHW";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000004ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efae3e;
}



// FUNCTION 145efae3e FUN_145efae3e body=138 status=ok
// SIG undefined FUN_145efae3e(void)

code * FUN_145efae3e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InRasterizerArgsSWHW";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000004aa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472590cc;
}



// FUNCTION 145efaec8 FUN_145efaec8 body=205 status=ok
// SIG undefined FUN_145efaec8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efaec8(void)

{
  if ((DAT_14ca16967 & 2) == 0) {
    DAT_14ca16967 = DAT_14ca16967 | 2;
    _DAT_14ca16908 = L"FNaniteFeedbackStatusCS";
    _DAT_14ca16920 = FUN_146826540;
    _DAT_14ca16928 = FUN_146825d77;
    _DAT_14ca16930 = FUN_146825fd6;
    _DAT_14ca16938 = FUN_1407e02ea;
    _DAT_14ca16940 = FUN_146826273;
    _DAT_14ca16918 = FUN_1472549ea;
    _DAT_14ca16958 = 0xffffffff000000e0;
    _DAT_14ca16960 = 8;
    DAT_14ca16964 = 0;
    _DAT_14ca16948 = &LAB_147254a16;
    FUN_145efaf96();
    FUN_1407e00cc(&DAT_14ca16900);
    return;
  }
  return;
}



// FUNCTION 145efaf96 FUN_145efaf96 body=123 status=ok
// SIG undefined FUN_145efaf96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efaf96(void)

{
  _DAT_14ca195d8 = L"BASE";
  DAT_14ca19602 = 4;
  _DAT_14ca195e0 = FUN_140b35ae4();
  _DAT_14ca195e8 = DAT_14ca16910;
  _DAT_14ca195f0 = &LAB_14682652b;
  DAT_14ca16910 = &DAT_14ca195d8;
  DAT_14ca16965 = DAT_14ca16965 + '\x01';
  _DAT_14ca195f8 = 0x100000000;
  if (*(char *)(_DAT_14ca195e0 + 100) != '\0') {
    DAT_14ca16966 = DAT_14ca16966 + '\x01';
  }
  return;
}



// FUNCTION 145efb012 FUN_145efb012 body=226 status=ok
// SIG undefined FUN_145efb012(void)

longlong * FUN_145efb012(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f28e0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efb0f6 FUN_145efb0f6 body=132 status=ok
// SIG undefined FUN_145efb0f6(void)

undefined1 * FUN_145efb0f6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutQueueState";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FQueueState>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x199a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14725aee6;
}



// FUNCTION 145efb17a FUN_145efb17a body=136 status=ok
// SIG undefined FUN_145efb17a(void)

code * FUN_145efb17a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InMainRasterizerArgsSWHW";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000199b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efb0f6;
}



// FUNCTION 145efb202 FUN_145efb202 body=138 status=ok
// SIG undefined FUN_145efb202(void)

code * FUN_145efb202(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InPostRasterizerArgsSWHW";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000199c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efb17a;
}



// FUNCTION 145efb28c FUN_145efb28c body=205 status=ok
// SIG undefined FUN_145efb28c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efb28c(void)

{
  if ((DAT_14ca42d6f & 2) == 0) {
    DAT_14ca42d6f = DAT_14ca42d6f | 2;
    _DAT_14ca42d10 = L"FComputeSkyEnvMapDiffuseIrradianceCS";
    _DAT_14ca42d28 = FUN_146826540;
    _DAT_14ca42d30 = FUN_146825d77;
    _DAT_14ca42d38 = FUN_146825fd6;
    _DAT_14ca42d40 = FUN_1407e02ea;
    _DAT_14ca42d48 = FUN_146826273;
    _DAT_14ca42d20 = FUN_1472c72e0;
    _DAT_14ca42d60 = 0xffffffff000000e0;
    _DAT_14ca42d68 = 8;
    DAT_14ca42d6c = 0;
    _DAT_14ca42d50 = &LAB_1472c730a;
    FUN_145efb35a();
    FUN_1407e00cc(&DAT_14ca42d08);
    return;
  }
  return;
}



// FUNCTION 145efb35a FUN_145efb35a body=123 status=ok
// SIG undefined FUN_145efb35a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efb35a(void)

{
  _DAT_14ca44ac0 = L"BASE";
  DAT_14ca44aea = 4;
  _DAT_14ca44ac8 = FUN_140b35ae4();
  _DAT_14ca44ad0 = DAT_14ca42d18;
  _DAT_14ca44ad8 = &LAB_14682652b;
  DAT_14ca42d18 = &DAT_14ca44ac0;
  DAT_14ca42d6d = DAT_14ca42d6d + '\x01';
  _DAT_14ca44ae0 = 0x100000000;
  if (*(char *)(_DAT_14ca44ac8 + 100) != '\0') {
    DAT_14ca42d6e = DAT_14ca42d6e + '\x01';
  }
  return;
}



// FUNCTION 145efb3d6 FUN_145efb3d6 body=226 status=ok
// SIG undefined FUN_145efb3d6(void)

longlong * FUN_145efb3d6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146304910;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efb4ba FUN_145efb4ba body=130 status=ok
// SIG undefined FUN_145efb4ba(void)

undefined1 * FUN_145efb4ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x95;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472ce576;
}



// FUNCTION 145efb53c FUN_145efb53c body=138 status=ok
// SIG undefined FUN_145efb53c(void)

code * FUN_145efb53c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UniformSampleSolidAngle";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000098;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efb5c6;
}



// FUNCTION 145efb5c6 FUN_145efb5c6 body=138 status=ok
// SIG undefined FUN_145efb5c6(void)

code * FUN_145efb5c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutIrradianceEnvMapSH";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000097;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ce4ec;
}



// FUNCTION 145efb650 FUN_145efb650 body=205 status=ok
// SIG undefined FUN_145efb650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efb650(void)

{
  if ((DAT_14ca6abdf & 2) == 0) {
    DAT_14ca6abdf = DAT_14ca6abdf | 2;
    _DAT_14ca6ab80 = L"FCloudShadowFilterCS";
    _DAT_14ca6ab98 = FUN_146826540;
    _DAT_14ca6aba0 = FUN_146825d77;
    _DAT_14ca6aba8 = FUN_146825fd6;
    _DAT_14ca6abb0 = FUN_1407e02ea;
    _DAT_14ca6abb8 = FUN_146826273;
    _DAT_14ca6ab90 = FUN_14733463c;
    _DAT_14ca6abd0 = 0xffffffff000000e0;
    _DAT_14ca6abd8 = 8;
    DAT_14ca6abdc = 0;
    _DAT_14ca6abc0 = &LAB_147334666;
    FUN_145efb71e();
    FUN_1407e00cc(&DAT_14ca6ab78);
    return;
  }
  return;
}



// FUNCTION 145efb71e FUN_145efb71e body=123 status=ok
// SIG undefined FUN_145efb71e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efb71e(void)

{
  _DAT_14ca6d408 = L"BASE";
  DAT_14ca6d432 = 4;
  _DAT_14ca6d410 = FUN_140b35ae4();
  _DAT_14ca6d418 = DAT_14ca6ab88;
  _DAT_14ca6d420 = &LAB_14682652b;
  DAT_14ca6ab88 = &DAT_14ca6d408;
  DAT_14ca6abdd = DAT_14ca6abdd + '\x01';
  _DAT_14ca6d428 = 0x100000000;
  if (*(char *)(_DAT_14ca6d410 + 100) != '\0') {
    DAT_14ca6abde = DAT_14ca6abde + '\x01';
  }
  return;
}



// FUNCTION 145efb79a FUN_145efb79a body=226 status=ok
// SIG undefined FUN_145efb79a(void)

longlong * FUN_145efb79a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146314852;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efb87e FUN_145efb87e body=132 status=ok
// SIG undefined FUN_145efb87e(void)

undefined1 * FUN_145efb87e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BilinearSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x608;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1473382b2;
}



// FUNCTION 145efb902 FUN_145efb902 body=136 status=ok
// SIG undefined FUN_145efb902(void)

code * FUN_145efb902(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CloudTextureSizeInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000060b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147338228;
}



// FUNCTION 145efb98a FUN_145efb98a body=138 status=ok
// SIG undefined FUN_145efb98a(void)

code * FUN_145efb98a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CloudShadowTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000609;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efb87e;
}



// FUNCTION 145efba14 FUN_145efba14 body=287 status=ok
// SIG undefined FUN_145efba14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145efba14(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d8218) {
    FUN_144b3d300(&DAT_14c9d8218);
    if (DAT_14c9d8218 == -1) {
      FUN_145efbb34();
      FUN_140db5666(&DAT_14c9d8170,2,&DAT_14c9d8108,
                    L"FHairVisibilityPS<HairVisibilityRenderMode_MSAA_Visibility>",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityPS.usf",L"MainVisibility",3,1
                    ,FUN_147182430,FUN_147182408,FUN_14176463e,&LAB_147182404,&LAB_14712ac0c,
                    &LAB_14712ac08,0x120,0);
      _DAT_14c9d8170 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142c660b7);
      _Init_thread_footer(&DAT_14c9d8218);
    }
  }
  return &DAT_14c9d8170;
}



// FUNCTION 145efbb34 FUN_145efbb34 body=210 status=ok
// SIG undefined FUN_145efbb34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efbb34(void)

{
  if ((DAT_14c9d816f & 2) == 0) {
    DAT_14c9d816f = DAT_14c9d816f | 2;
    _DAT_14c9d8110 = L"FHairVisibilityPS<HairVisibilityRenderMode_MSAA_Visibility>";
    _DAT_14c9d8128 = FUN_146826540;
    _DAT_14c9d8130 = FUN_146825d77;
    _DAT_14c9d8138 = FUN_146825fd6;
    _DAT_14c9d8140 = FUN_1407e02ea;
    _DAT_14c9d8148 = FUN_146826273;
    _DAT_14c9d8120 = FUN_1471823ca;
    _DAT_14c9d8160 = 0xffffffff00000120;
    _DAT_14c9d8168 = 8;
    DAT_14c9d816c = 0;
    _DAT_14c9d8150 = &LAB_147182400;
    FUN_145efbc06();
    FUN_145efbcfa();
    FUN_1407e00cc(&DAT_14c9d8108);
    return;
  }
  return;
}



// FUNCTION 145efbc06 FUN_145efbc06 body=121 status=ok
// SIG undefined FUN_145efbc06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efbc06(void)

{
  FUN_145efbc80();
  _DAT_14c9dbca8 = L"HairVisibilityPass_HairMacroGroupIndex";
  DAT_14c9dbcd2 = FUN_140850cc5();
  _DAT_14c9dbcb0 = FUN_140ec6960();
  _DAT_14c9dbcc0 = &LAB_14682652b;
  _DAT_14c9dbcc8 = &DAT_100000108;
  _DAT_14c9dbcd0 = 0;
  _DAT_14c9dbcb8 = DAT_14c9d8118;
  DAT_14c9d8118 = &DAT_14c9dbca8;
  return;
}



// FUNCTION 145efbc80 FUN_145efbc80 body=121 status=ok
// SIG undefined FUN_145efbc80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efbc80(void)

{
  FUN_145efbd76();
  _DAT_14c9dbcd8 = L"HairVisibilityPass_HairMaterialId";
  DAT_14c9dbd02 = FUN_140850cc5();
  _DAT_14c9dbce0 = FUN_140ec6960();
  _DAT_14c9dbcf0 = &LAB_14682652b;
  _DAT_14c9dbcf8 = 0x10000010e;
  _DAT_14c9dbd00 = 0;
  _DAT_14c9dbce8 = DAT_14c9d8118;
  DAT_14c9d8118 = &DAT_14c9dbcd8;
  return;
}



// FUNCTION 145efbcfa FUN_145efbcfa body=123 status=ok
// SIG undefined FUN_145efbcfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efbcfa(void)

{
  _DAT_14c9dbd68 = L"BASE";
  DAT_14c9dbd92 = 4;
  _DAT_14c9dbd70 = FUN_141092e92();
  _DAT_14c9dbd78 = DAT_14c9d8118;
  _DAT_14c9dbd80 = &LAB_14682652b;
  DAT_14c9d8118 = &DAT_14c9dbd68;
  DAT_14c9d816d = DAT_14c9d816d + '\x01';
  _DAT_14c9dbd88 = 0x100000000;
  if (*(char *)(_DAT_14c9dbd70 + 100) != '\0') {
    DAT_14c9d816e = DAT_14c9d816e + '\x01';
  }
  return;
}



// FUNCTION 145efbd76 FUN_145efbd76 body=216 status=ok
// SIG undefined FUN_145efbd76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efbd76(void)

{
  _DAT_14c9dbd38 = L"HairVisibilityPass_HairCoverageScale";
  DAT_14c9dbd62 = FUN_140850cc5();
  _DAT_14c9dbd40 = FUN_140ec6960();
  _DAT_14c9dbd50 = &LAB_14682652b;
  _DAT_14c9dbd58 = 0x10000011a;
  _DAT_14c9dbd60 = 0;
  _DAT_14c9dbd48 = DAT_14c9d8118;
  DAT_14c9d8118 = &DAT_14c9dbd38;
  _DAT_14c9dbd08 = L"HairVisibilityPass_LightChannelMask";
  DAT_14c9dbd32 = FUN_140850cc5();
  _DAT_14c9dbd10 = FUN_140ec6960();
  _DAT_14c9dbd20 = &LAB_14682652b;
  _DAT_14c9dbd28 = 0x100000114;
  _DAT_14c9dbd30 = 0;
  _DAT_14c9dbd18 = DAT_14c9d8118;
  DAT_14c9d8118 = &DAT_14c9dbd08;
  return;
}



// FUNCTION 145efbe4e FUN_145efbe4e body=287 status=ok
// SIG undefined FUN_145efbe4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145efbe4e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d8340) {
    FUN_144b3d300(&DAT_14c9d8340);
    if (DAT_14c9d8340 == -1) {
      FUN_145efbf6e();
      FUN_140db5666(&DAT_14c9d8298,2,&DAT_14c9d8230,
                    L"FHairVisibilityPS<HairVisibilityRenderMode_Transmittance>",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityPS.usf",L"MainVisibility",3,1
                    ,FUN_1471824e2,FUN_1471824ba,FUN_1417646ca,&LAB_1471824b6,&LAB_14712ac0c,
                    &LAB_14712ac08,0x120,0);
      _DAT_14c9d8298 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142c660c3);
      _Init_thread_footer(&DAT_14c9d8340);
    }
  }
  return &DAT_14c9d8298;
}



// FUNCTION 145efbf6e FUN_145efbf6e body=210 status=ok
// SIG undefined FUN_145efbf6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efbf6e(void)

{
  if ((DAT_14c9d8297 & 2) == 0) {
    DAT_14c9d8297 = DAT_14c9d8297 | 2;
    _DAT_14c9d8238 = L"FHairVisibilityPS<HairVisibilityRenderMode_Transmittance>";
    _DAT_14c9d8250 = FUN_146826540;
    _DAT_14c9d8258 = FUN_146825d77;
    _DAT_14c9d8260 = FUN_146825fd6;
    _DAT_14c9d8268 = FUN_1407e02ea;
    _DAT_14c9d8270 = FUN_146826273;
    _DAT_14c9d8248 = FUN_14718247c;
    _DAT_14c9d8288 = 0xffffffff00000120;
    _DAT_14c9d8290 = 8;
    DAT_14c9d8294 = 0;
    _DAT_14c9d8278 = &LAB_1471824b2;
    FUN_145efc040();
    FUN_145efc134();
    FUN_1407e00cc(&DAT_14c9d8230);
    return;
  }
  return;
}



// FUNCTION 145efc040 FUN_145efc040 body=121 status=ok
// SIG undefined FUN_145efc040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efc040(void)

{
  FUN_145efc0ba();
  _DAT_14c9dbd98 = L"HairVisibilityPass_HairMacroGroupIndex";
  DAT_14c9dbdc2 = FUN_140850cc5();
  _DAT_14c9dbda0 = FUN_140ec6960();
  _DAT_14c9dbdb0 = &LAB_14682652b;
  _DAT_14c9dbdb8 = &DAT_100000108;
  _DAT_14c9dbdc0 = 0;
  _DAT_14c9dbda8 = DAT_14c9d8240;
  DAT_14c9d8240 = &DAT_14c9dbd98;
  return;
}



// FUNCTION 145efc0ba FUN_145efc0ba body=121 status=ok
// SIG undefined FUN_145efc0ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efc0ba(void)

{
  FUN_145efc1b0();
  _DAT_14c9dbdc8 = L"HairVisibilityPass_HairMaterialId";
  DAT_14c9dbdf2 = FUN_140850cc5();
  _DAT_14c9dbdd0 = FUN_140ec6960();
  _DAT_14c9dbde0 = &LAB_14682652b;
  _DAT_14c9dbde8 = 0x10000010e;
  _DAT_14c9dbdf0 = 0;
  _DAT_14c9dbdd8 = DAT_14c9d8240;
  DAT_14c9d8240 = &DAT_14c9dbdc8;
  return;
}



// FUNCTION 145efc134 FUN_145efc134 body=123 status=ok
// SIG undefined FUN_145efc134(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efc134(void)

{
  _DAT_14c9dbe58 = L"BASE";
  DAT_14c9dbe82 = 4;
  _DAT_14c9dbe60 = FUN_141092e92();
  _DAT_14c9dbe68 = DAT_14c9d8240;
  _DAT_14c9dbe70 = &LAB_14682652b;
  DAT_14c9d8240 = &DAT_14c9dbe58;
  DAT_14c9d8295 = DAT_14c9d8295 + '\x01';
  _DAT_14c9dbe78 = 0x100000000;
  if (*(char *)(_DAT_14c9dbe60 + 100) != '\0') {
    DAT_14c9d8296 = DAT_14c9d8296 + '\x01';
  }
  return;
}



// FUNCTION 145efc1b0 FUN_145efc1b0 body=216 status=ok
// SIG undefined FUN_145efc1b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efc1b0(void)

{
  _DAT_14c9dbe28 = L"HairVisibilityPass_HairCoverageScale";
  DAT_14c9dbe52 = FUN_140850cc5();
  _DAT_14c9dbe30 = FUN_140ec6960();
  _DAT_14c9dbe40 = &LAB_14682652b;
  _DAT_14c9dbe48 = 0x10000011a;
  _DAT_14c9dbe50 = 0;
  _DAT_14c9dbe38 = DAT_14c9d8240;
  DAT_14c9d8240 = &DAT_14c9dbe28;
  _DAT_14c9dbdf8 = L"HairVisibilityPass_LightChannelMask";
  DAT_14c9dbe22 = FUN_140850cc5();
  _DAT_14c9dbe00 = FUN_140ec6960();
  _DAT_14c9dbe10 = &LAB_14682652b;
  _DAT_14c9dbe18 = 0x100000114;
  _DAT_14c9dbe20 = 0;
  _DAT_14c9dbe08 = DAT_14c9d8240;
  DAT_14c9d8240 = &DAT_14c9dbdf8;
  return;
}



// FUNCTION 145efc288 FUN_145efc288 body=287 status=ok
// SIG undefined FUN_145efc288(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145efc288(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d8468) {
    FUN_144b3d300(&DAT_14c9d8468);
    if (DAT_14c9d8468 == -1) {
      FUN_145efc3a8();
      FUN_140db5666(&DAT_14c9d83c0,2,&DAT_14c9d8358,
                    L"FHairVisibilityPS<HairVisibilityRenderMode_TransmittanceAndHairCount>",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityPS.usf",L"MainVisibility",3,1
                    ,FUN_147182594,FUN_14718256c,FUN_141764756,&LAB_147182568,&LAB_14712ac0c,
                    &LAB_14712ac08,0x120,0);
      _DAT_14c9d83c0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142c660cf);
      _Init_thread_footer(&DAT_14c9d8468);
    }
  }
  return &DAT_14c9d83c0;
}



// FUNCTION 145efc3a8 FUN_145efc3a8 body=210 status=ok
// SIG undefined FUN_145efc3a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efc3a8(void)

{
  if ((DAT_14c9d83bf & 2) == 0) {
    DAT_14c9d83bf = DAT_14c9d83bf | 2;
    _DAT_14c9d8360 = L"FHairVisibilityPS<HairVisibilityRenderMode_TransmittanceAndHairCount>";
    _DAT_14c9d8378 = FUN_146826540;
    _DAT_14c9d8380 = FUN_146825d77;
    _DAT_14c9d8388 = FUN_146825fd6;
    _DAT_14c9d8390 = FUN_1407e02ea;
    _DAT_14c9d8398 = FUN_146826273;
    _DAT_14c9d8370 = FUN_14718252e;
    _DAT_14c9d83b0 = 0xffffffff00000120;
    _DAT_14c9d83b8 = 8;
    DAT_14c9d83bc = 0;
    _DAT_14c9d83a0 = &LAB_147182564;
    FUN_145efc47a();
    FUN_145efc56e();
    FUN_1407e00cc(&DAT_14c9d8358);
    return;
  }
  return;
}



// FUNCTION 145efc47a FUN_145efc47a body=121 status=ok
// SIG undefined FUN_145efc47a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efc47a(void)

{
  FUN_145efc4f4();
  _DAT_14c9dbe88 = L"HairVisibilityPass_HairMacroGroupIndex";
  DAT_14c9dbeb2 = FUN_140850cc5();
  _DAT_14c9dbe90 = FUN_140ec6960();
  _DAT_14c9dbea0 = &LAB_14682652b;
  _DAT_14c9dbea8 = &DAT_100000108;
  _DAT_14c9dbeb0 = 0;
  _DAT_14c9dbe98 = DAT_14c9d8368;
  DAT_14c9d8368 = &DAT_14c9dbe88;
  return;
}



// FUNCTION 145efc4f4 FUN_145efc4f4 body=121 status=ok
// SIG undefined FUN_145efc4f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efc4f4(void)

{
  FUN_145efc5ea();
  _DAT_14c9dbeb8 = L"HairVisibilityPass_HairMaterialId";
  DAT_14c9dbee2 = FUN_140850cc5();
  _DAT_14c9dbec0 = FUN_140ec6960();
  _DAT_14c9dbed0 = &LAB_14682652b;
  _DAT_14c9dbed8 = 0x10000010e;
  _DAT_14c9dbee0 = 0;
  _DAT_14c9dbec8 = DAT_14c9d8368;
  DAT_14c9d8368 = &DAT_14c9dbeb8;
  return;
}



// FUNCTION 145efc56e FUN_145efc56e body=123 status=ok
// SIG undefined FUN_145efc56e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efc56e(void)

{
  _DAT_14c9dbf48 = L"BASE";
  DAT_14c9dbf72 = 4;
  _DAT_14c9dbf50 = FUN_141092e92();
  _DAT_14c9dbf58 = DAT_14c9d8368;
  _DAT_14c9dbf60 = &LAB_14682652b;
  DAT_14c9d8368 = &DAT_14c9dbf48;
  DAT_14c9d83bd = DAT_14c9d83bd + '\x01';
  _DAT_14c9dbf68 = 0x100000000;
  if (*(char *)(_DAT_14c9dbf50 + 100) != '\0') {
    DAT_14c9d83be = DAT_14c9d83be + '\x01';
  }
  return;
}



// FUNCTION 145efc5ea FUN_145efc5ea body=216 status=ok
// SIG undefined FUN_145efc5ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efc5ea(void)

{
  _DAT_14c9dbf18 = L"HairVisibilityPass_HairCoverageScale";
  DAT_14c9dbf42 = FUN_140850cc5();
  _DAT_14c9dbf20 = FUN_140ec6960();
  _DAT_14c9dbf30 = &LAB_14682652b;
  _DAT_14c9dbf38 = 0x10000011a;
  _DAT_14c9dbf40 = 0;
  _DAT_14c9dbf28 = DAT_14c9d8368;
  DAT_14c9d8368 = &DAT_14c9dbf18;
  _DAT_14c9dbee8 = L"HairVisibilityPass_LightChannelMask";
  DAT_14c9dbf12 = FUN_140850cc5();
  _DAT_14c9dbef0 = FUN_140ec6960();
  _DAT_14c9dbf00 = &LAB_14682652b;
  _DAT_14c9dbf08 = 0x100000114;
  _DAT_14c9dbf10 = 0;
  _DAT_14c9dbef8 = DAT_14c9d8368;
  DAT_14c9d8368 = &DAT_14c9dbee8;
  return;
}



// FUNCTION 145efc6c2 FUN_145efc6c2 body=287 status=ok
// SIG undefined FUN_145efc6c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145efc6c2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d8590) {
    FUN_144b3d300(&DAT_14c9d8590);
    if (DAT_14c9d8590 == -1) {
      FUN_145efc7e2();
      FUN_140db5666(&DAT_14c9d84e8,2,&DAT_14c9d8480,
                    L"FHairVisibilityPS<HairVisibilityRenderMode_PPLL>",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityPS.usf",L"MainVisibility",3,1
                    ,FUN_147182646,FUN_14718261e,FUN_1417647e2,&LAB_14718261a,&LAB_14712ac0c,
                    &LAB_14712ac08,0x120,0);
      _DAT_14c9d84e8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142c660db);
      _Init_thread_footer(&DAT_14c9d8590);
    }
  }
  return &DAT_14c9d84e8;
}



// FUNCTION 145efc7e2 FUN_145efc7e2 body=210 status=ok
// SIG undefined FUN_145efc7e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efc7e2(void)

{
  if ((DAT_14c9d84e7 & 2) == 0) {
    DAT_14c9d84e7 = DAT_14c9d84e7 | 2;
    _DAT_14c9d8488 = L"FHairVisibilityPS<HairVisibilityRenderMode_PPLL>";
    _DAT_14c9d84a0 = FUN_146826540;
    _DAT_14c9d84a8 = FUN_146825d77;
    _DAT_14c9d84b0 = FUN_146825fd6;
    _DAT_14c9d84b8 = FUN_1407e02ea;
    _DAT_14c9d84c0 = FUN_146826273;
    _DAT_14c9d8498 = FUN_1471825e0;
    _DAT_14c9d84d8 = 0xffffffff00000120;
    _DAT_14c9d84e0 = 8;
    DAT_14c9d84e4 = 0;
    _DAT_14c9d84c8 = &LAB_147182616;
    FUN_145efc8b4();
    FUN_145efc9a8();
    FUN_1407e00cc(&DAT_14c9d8480);
    return;
  }
  return;
}



// FUNCTION 145efc8b4 FUN_145efc8b4 body=121 status=ok
// SIG undefined FUN_145efc8b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efc8b4(void)

{
  FUN_145efc92e();
  _DAT_14c9dbf78 = L"HairVisibilityPass_HairMacroGroupIndex";
  DAT_14c9dbfa2 = FUN_140850cc5();
  _DAT_14c9dbf80 = FUN_140ec6960();
  _DAT_14c9dbf90 = &LAB_14682652b;
  _DAT_14c9dbf98 = &DAT_100000108;
  _DAT_14c9dbfa0 = 0;
  _DAT_14c9dbf88 = DAT_14c9d8490;
  DAT_14c9d8490 = &DAT_14c9dbf78;
  return;
}



// FUNCTION 145efc92e FUN_145efc92e body=121 status=ok
// SIG undefined FUN_145efc92e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efc92e(void)

{
  FUN_145efca24();
  _DAT_14c9dbfa8 = L"HairVisibilityPass_HairMaterialId";
  DAT_14c9dbfd2 = FUN_140850cc5();
  _DAT_14c9dbfb0 = FUN_140ec6960();
  _DAT_14c9dbfc0 = &LAB_14682652b;
  _DAT_14c9dbfc8 = 0x10000010e;
  _DAT_14c9dbfd0 = 0;
  _DAT_14c9dbfb8 = DAT_14c9d8490;
  DAT_14c9d8490 = &DAT_14c9dbfa8;
  return;
}



// FUNCTION 145efc9a8 FUN_145efc9a8 body=123 status=ok
// SIG undefined FUN_145efc9a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efc9a8(void)

{
  _DAT_14c9dc038 = L"BASE";
  DAT_14c9dc062 = 4;
  _DAT_14c9dc040 = FUN_141092e92();
  _DAT_14c9dc048 = DAT_14c9d8490;
  _DAT_14c9dc050 = &LAB_14682652b;
  DAT_14c9d8490 = &DAT_14c9dc038;
  DAT_14c9d84e5 = DAT_14c9d84e5 + '\x01';
  _DAT_14c9dc058 = 0x100000000;
  if (*(char *)(_DAT_14c9dc040 + 100) != '\0') {
    DAT_14c9d84e6 = DAT_14c9d84e6 + '\x01';
  }
  return;
}



// FUNCTION 145efca24 FUN_145efca24 body=216 status=ok
// SIG undefined FUN_145efca24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efca24(void)

{
  _DAT_14c9dc008 = L"HairVisibilityPass_HairCoverageScale";
  DAT_14c9dc032 = FUN_140850cc5();
  _DAT_14c9dc010 = FUN_140ec6960();
  _DAT_14c9dc020 = &LAB_14682652b;
  _DAT_14c9dc028 = 0x10000011a;
  _DAT_14c9dc030 = 0;
  _DAT_14c9dc018 = DAT_14c9d8490;
  DAT_14c9d8490 = &DAT_14c9dc008;
  _DAT_14c9dbfd8 = L"HairVisibilityPass_LightChannelMask";
  DAT_14c9dc002 = FUN_140850cc5();
  _DAT_14c9dbfe0 = FUN_140ec6960();
  _DAT_14c9dbff0 = &LAB_14682652b;
  _DAT_14c9dbff8 = 0x100000114;
  _DAT_14c9dc000 = 0;
  _DAT_14c9dbfe8 = DAT_14c9d8490;
  DAT_14c9d8490 = &DAT_14c9dbfd8;
  return;
}



// FUNCTION 145efcafc FUN_145efcafc body=254 status=ok
// SIG undefined FUN_145efcafc(void)

longlong *
FUN_145efcafc(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_145efcbfe(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145efcc76(&local_30,plVar1);
  plVar2 = local_28;
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
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efcbfe FUN_145efcbfe body=120 status=ok
// SIG undefined FUN_145efcbfe(void)

undefined8 * FUN_145efcbfe(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99d5d0;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b99d5f0;
  param_1[6] = &PTR_FUN_14b99d630;
  param_1[0x17] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 145efcc76 FUN_145efcc76 body=162 status=ok
// SIG undefined FUN_145efcc76(void)

void FUN_145efcc76(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x48) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x40) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x40) = param_2;
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_145efccb5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_145efccb5;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x48) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145efccb5:
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
                    /* WARNING: Could not recover jumptable at 0x000145efcd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145efcd18 FUN_145efcd18 body=254 status=ok
// SIG undefined FUN_145efcd18(void)

longlong *
FUN_145efcd18(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_145efce1a(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145efce92(&local_30,plVar1);
  plVar2 = local_28;
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
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efce1a FUN_145efce1a body=120 status=ok
// SIG undefined FUN_145efce1a(void)

undefined8 * FUN_145efce1a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99da80;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b99daa0;
  param_1[6] = &PTR_FUN_14b99dae0;
  param_1[0x17] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 145efce92 FUN_145efce92 body=162 status=ok
// SIG undefined FUN_145efce92(void)

void FUN_145efce92(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x48) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x40) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x40) = param_2;
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_145efced1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_145efced1;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x48) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145efced1:
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
                    /* WARNING: Could not recover jumptable at 0x000145efcf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145efcf3a FUN_145efcf3a body=143 status=ok
// SIG undefined FUN_145efcf3a(void)

undefined4 FUN_145efcf3a(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  FUN_1458d76ca(puVar2,param_1);
  *puVar2 = &PTR_FUN_14bd3eeb0;
  puVar2[5] = &PTR_FUN_14bd3f4d0;
  puVar2[6] = &PTR_LAB_14bd3f510;
  FUN_145efcfca();
  puVar2[0x134] = 0;
  puVar2[0x135] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x9c4) = 0;
  *(undefined4 *)(puVar2 + 0x139) = 0;
  *(undefined2 *)((longlong)puVar2 + 0x9b4) = 0;
  *(undefined4 *)(puVar2 + 0x136) = 0;
  *(undefined4 *)(puVar2 + 0x138) = 0;
  LOCK();
  *(undefined4 *)((longlong)puVar2 + 0x9c4) = 0;
  UNLOCK();
  LOCK();
  uVar1 = *(undefined4 *)(puVar2 + 0x139);
  *(undefined4 *)(puVar2 + 0x139) = 0;
  UNLOCK();
  *(undefined1 *)((longlong)puVar2 + 0x9b6) = 0;
  return uVar1;
}



// FUNCTION 145efcfca FUN_145efcfca body=104 status=ok
// SIG undefined FUN_145efcfca(void)

undefined8 * FUN_145efcfca(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3c250;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_14158ed7c(param_1 + 8);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 9),4000);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 145efd032 FUN_145efd032 body=205 status=ok
// SIG undefined FUN_145efd032(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efd032(void)

{
  if ((DAT_14c9cc18f & 2) == 0) {
    DAT_14c9cc18f = DAT_14c9cc18f | 2;
    _DAT_14c9cc130 = L"FClearIndirectArgBufferCS";
    _DAT_14c9cc148 = FUN_146826540;
    _DAT_14c9cc150 = FUN_146825d77;
    _DAT_14c9cc158 = FUN_146825fd6;
    _DAT_14c9cc160 = FUN_1407e02ea;
    _DAT_14c9cc168 = FUN_146826273;
    _DAT_14c9cc140 = FUN_14715ab24;
    _DAT_14c9cc180 = 0xffffffff000000e0;
    _DAT_14c9cc188 = 8;
    DAT_14c9cc18c = 0;
    _DAT_14c9cc170 = &LAB_14715ab4e;
    FUN_145efd100();
    FUN_1407e00cc(&DAT_14c9cc128);
    return;
  }
  return;
}



// FUNCTION 145efd100 FUN_145efd100 body=123 status=ok
// SIG undefined FUN_145efd100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efd100(void)

{
  _DAT_14c9cf4f0 = L"BASE";
  DAT_14c9cf51a = 4;
  _DAT_14c9cf4f8 = FUN_140b35ae4();
  _DAT_14c9cf500 = DAT_14c9cc138;
  _DAT_14c9cf508 = &LAB_14682652b;
  DAT_14c9cc138 = &DAT_14c9cf4f0;
  DAT_14c9cc18d = DAT_14c9cc18d + '\x01';
  _DAT_14c9cf510 = 0x100000000;
  if (*(char *)(_DAT_14c9cf4f8 + 100) != '\0') {
    DAT_14c9cc18e = DAT_14c9cc18e + '\x01';
  }
  return;
}



// FUNCTION 145efd17c FUN_145efd17c body=226 status=ok
// SIG undefined FUN_145efd17c(void)

longlong * FUN_145efd17c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c4342;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efd260 FUN_145efd260 body=132 status=ok
// SIG undefined FUN_145efd260(void)

undefined1 * FUN_145efd260(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageUpdateIndirectArgBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x601;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147162c4a;
}



// FUNCTION 145efd2e4 FUN_145efd2e4 body=138 status=ok
// SIG undefined FUN_145efd2e4(void)

code * FUN_145efd2e4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageComposeIndirectArgBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000603;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efd36e;
}



// FUNCTION 145efd36e FUN_145efd36e body=138 status=ok
// SIG undefined FUN_145efd36e(void)

code * FUN_145efd36e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWCullGridUpdateIndirectArgBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000602;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efd260;
}



// FUNCTION 145efd3f8 FUN_145efd3f8 body=205 status=ok
// SIG undefined FUN_145efd3f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efd3f8(void)

{
  if ((DAT_14c9ee23f & 2) == 0) {
    DAT_14c9ee23f = DAT_14c9ee23f | 2;
    _DAT_14c9ee1e0 = L"FComputeCulledObjectsStartOffsetCS";
    _DAT_14c9ee1f8 = FUN_146826540;
    _DAT_14c9ee200 = FUN_146825d77;
    _DAT_14c9ee208 = FUN_146825fd6;
    _DAT_14c9ee210 = FUN_1407e02ea;
    _DAT_14c9ee218 = FUN_146826273;
    _DAT_14c9ee1f0 = FUN_1471dee3e;
    _DAT_14c9ee230 = 0xffffffff000000e0;
    _DAT_14c9ee238 = 8;
    DAT_14c9ee23c = 0;
    _DAT_14c9ee220 = &LAB_1471dee68;
    FUN_145efd4c6();
    FUN_1407e00cc(&DAT_14c9ee1d8);
    return;
  }
  return;
}



// FUNCTION 145efd4c6 FUN_145efd4c6 body=123 status=ok
// SIG undefined FUN_145efd4c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efd4c6(void)

{
  _DAT_14c9f1a38 = L"BASE";
  DAT_14c9f1a62 = 4;
  _DAT_14c9f1a40 = FUN_140b35ae4();
  _DAT_14c9f1a48 = DAT_14c9ee1e8;
  _DAT_14c9f1a50 = &LAB_14682652b;
  DAT_14c9ee1e8 = &DAT_14c9f1a38;
  DAT_14c9ee23d = DAT_14c9ee23d + '\x01';
  _DAT_14c9f1a58 = 0x100000000;
  if (*(char *)(_DAT_14c9f1a40 + 100) != '\0') {
    DAT_14c9ee23e = DAT_14c9ee23e + '\x01';
  }
  return;
}



// FUNCTION 145efd542 FUN_145efd542 body=226 status=ok
// SIG undefined FUN_145efd542(void)

longlong * FUN_145efd542(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d8c72;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efd626 FUN_145efd626 body=132 status=ok
// SIG undefined FUN_145efd626(void)

undefined1 * FUN_145efd626(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumGridCulledMeshSDFObjects";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471e266a;
}



// FUNCTION 145efd6aa FUN_145efd6aa body=138 status=ok
// SIG undefined FUN_145efd6aa(void)

code * FUN_145efd6aa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumGridCulledHeightfieldObjects";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000142;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e2556;
}



// FUNCTION 145efd734 FUN_145efd734 body=138 status=ok
// SIG undefined FUN_145efd734(void)

code * FUN_145efd734(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWCulledHeightfieldObjectAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000144;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d8cfa;
}



// FUNCTION 145efd7be FUN_145efd7be body=205 status=ok
// SIG undefined FUN_145efd7be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efd7be(void)

{
  if ((DAT_14c9fb07f & 2) == 0) {
    DAT_14c9fb07f = DAT_14c9fb07f | 2;
    _DAT_14c9fb020 = L"FLumenCardCombineLightingCS";
    _DAT_14c9fb038 = FUN_146826540;
    _DAT_14c9fb040 = FUN_146825d77;
    _DAT_14c9fb048 = FUN_146825fd6;
    _DAT_14c9fb050 = FUN_1407e02ea;
    _DAT_14c9fb058 = FUN_146826273;
    _DAT_14c9fb030 = FUN_147207b32;
    _DAT_14c9fb070 = 0xffffffff000000e0;
    _DAT_14c9fb078 = 8;
    DAT_14c9fb07c = 0;
    _DAT_14c9fb060 = &LAB_147207b5c;
    FUN_145efd88c();
    FUN_1407e00cc(&DAT_14c9fb018);
    return;
  }
  return;
}



// FUNCTION 145efd88c FUN_145efd88c body=123 status=ok
// SIG undefined FUN_145efd88c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efd88c(void)

{
  _DAT_14ca00148 = L"BASE";
  DAT_14ca00172 = 4;
  _DAT_14ca00150 = FUN_140b35ae4();
  _DAT_14ca00158 = DAT_14c9fb028;
  _DAT_14ca00160 = &LAB_14682652b;
  DAT_14c9fb028 = &DAT_14ca00148;
  DAT_14c9fb07d = DAT_14c9fb07d + '\x01';
  _DAT_14ca00168 = 0x100000000;
  if (*(char *)(_DAT_14ca00150 + 100) != '\0') {
    DAT_14c9fb07e = DAT_14c9fb07e + '\x01';
  }
  return;
}



// FUNCTION 145efd908 FUN_145efd908 body=226 status=ok
// SIG undefined FUN_145efd908(void)

longlong * FUN_145efd908(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e468e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efd9ec FUN_145efd9ec body=132 status=ok
// SIG undefined FUN_145efd9ec(void)

undefined1 * FUN_145efd9ec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgsBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x87;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147214c82;
}



// FUNCTION 145efda70 FUN_145efda70 body=138 status=ok
// SIG undefined FUN_145efda70(void)

code * FUN_145efda70(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CardTiles";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000091;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e4716;
}



// FUNCTION 145efdafa FUN_145efdafa body=138 status=ok
// SIG undefined FUN_145efdafa(void)

code * FUN_145efdafa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectLightingAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000008e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147214a5a;
}



// FUNCTION 145efdb84 FUN_145efdb84 body=205 status=ok
// SIG undefined FUN_145efdb84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efdb84(void)

{
  if ((DAT_14c9fcbe7 & 2) == 0) {
    DAT_14c9fcbe7 = DAT_14c9fcbe7 | 2;
    _DAT_14c9fcb88 = L"FScreenProbeDownsampleDepthUniformCS";
    _DAT_14c9fcba0 = FUN_146826540;
    _DAT_14c9fcba8 = FUN_146825d77;
    _DAT_14c9fcbb0 = FUN_146825fd6;
    _DAT_14c9fcbb8 = FUN_1407e02ea;
    _DAT_14c9fcbc0 = FUN_146826273;
    _DAT_14c9fcb98 = FUN_147208d72;
    _DAT_14c9fcbd8 = 0xffffffff000000e0;
    _DAT_14c9fcbe0 = 8;
    DAT_14c9fcbe4 = 0;
    _DAT_14c9fcbc8 = &LAB_147208d9c;
    FUN_145efdc52();
    FUN_1407e00cc(&DAT_14c9fcb80);
    return;
  }
  return;
}



// FUNCTION 145efdc52 FUN_145efdc52 body=123 status=ok
// SIG undefined FUN_145efdc52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efdc52(void)

{
  _DAT_14ca00588 = L"BASE";
  DAT_14ca005b2 = 4;
  _DAT_14ca00590 = FUN_140b35ae4();
  _DAT_14ca00598 = DAT_14c9fcb90;
  _DAT_14ca005a0 = &LAB_14682652b;
  DAT_14c9fcb90 = &DAT_14ca00588;
  DAT_14c9fcbe5 = DAT_14c9fcbe5 + '\x01';
  _DAT_14ca005a8 = 0x100000000;
  if (*(char *)(_DAT_14ca00590 + 100) != '\0') {
    DAT_14c9fcbe6 = DAT_14c9fcbe6 + '\x01';
  }
  return;
}



// FUNCTION 145efdcce FUN_145efdcce body=226 status=ok
// SIG undefined FUN_145efdcce(void)

longlong * FUN_145efdcce(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e5a98;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efddb2 FUN_145efddb2 body=132 status=ok
// SIG undefined FUN_145efddb2(void)

undefined1 * FUN_145efddb2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWScreenProbeSceneDepth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x255;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14721736c;
}



// FUNCTION 145efde36 FUN_145efde36 body=138 status=ok
// SIG undefined FUN_145efde36(void)

code * FUN_145efde36(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWScreenProbeWorldNormal";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000256;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efddb2;
}



// FUNCTION 145efdec0 FUN_145efdec0 body=138 status=ok
// SIG undefined FUN_145efdec0(void)

code * FUN_145efdec0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWScreenProbeWorldSpeed";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000257;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efde36;
}



// FUNCTION 145efdf4a FUN_145efdf4a body=205 status=ok
// SIG undefined FUN_145efdf4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efdf4a(void)

{
  if ((DAT_14ca2fd37 & 2) == 0) {
    DAT_14ca2fd37 = DAT_14ca2fd37 | 2;
    _DAT_14ca2fcd8 = L"FFillMipsConditionBufferCS";
    _DAT_14ca2fcf0 = FUN_146826540;
    _DAT_14ca2fcf8 = FUN_146825d77;
    _DAT_14ca2fd00 = FUN_146825fd6;
    _DAT_14ca2fd08 = FUN_1407e02ea;
    _DAT_14ca2fd10 = FUN_146826273;
    _DAT_14ca2fce8 = FUN_14729974e;
    _DAT_14ca2fd28 = 0xffffffff000000e0;
    _DAT_14ca2fd30 = 8;
    DAT_14ca2fd34 = 0;
    _DAT_14ca2fd18 = &LAB_14729977a;
    FUN_145efe018();
    FUN_1407e00cc(&DAT_14ca2fcd0);
    return;
  }
  return;
}



// FUNCTION 145efe018 FUN_145efe018 body=123 status=ok
// SIG undefined FUN_145efe018(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efe018(void)

{
  _DAT_14ca34bf0 = L"BASE";
  DAT_14ca34c1a = 4;
  _DAT_14ca34bf8 = FUN_140b35ae4();
  _DAT_14ca34c00 = DAT_14ca2fce0;
  _DAT_14ca34c08 = &LAB_14682652b;
  DAT_14ca2fce0 = &DAT_14ca34bf0;
  DAT_14ca2fd35 = DAT_14ca2fd35 + '\x01';
  _DAT_14ca34c10 = 0x100000000;
  if (*(char *)(_DAT_14ca34bf8 + 100) != '\0') {
    DAT_14ca2fd36 = DAT_14ca2fd36 + '\x01';
  }
  return;
}



// FUNCTION 145efe094 FUN_145efe094 body=226 status=ok
// SIG undefined FUN_145efe094(void)

longlong * FUN_145efe094(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fdf2a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efe178 FUN_145efe178 body=132 status=ok
// SIG undefined FUN_145efe178(void)

undefined1 * FUN_145efe178(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MinGenerateMipsTileCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1de;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472a0456;
}



// FUNCTION 145efe1fc FUN_145efe1fc body=138 status=ok
// SIG undefined FUN_145efe1fc(void)

code * FUN_145efe1fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileTypeCountBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001e0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efe286;
}



// FUNCTION 145efe286 FUN_145efe286 body=138 status=ok
// SIG undefined FUN_145efe286(void)

code * FUN_145efe286(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Offset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000001df;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efe178;
}



// FUNCTION 145efe310 FUN_145efe310 body=205 status=ok
// SIG undefined FUN_145efe310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efe310(void)

{
  if ((DAT_14ca42c47 & 2) == 0) {
    DAT_14ca42c47 = DAT_14ca42c47 | 2;
    _DAT_14ca42be8 = L"FConvolveSpecularFaceCS";
    _DAT_14ca42c00 = FUN_146826540;
    _DAT_14ca42c08 = FUN_146825d77;
    _DAT_14ca42c10 = FUN_146825fd6;
    _DAT_14ca42c18 = FUN_1407e02ea;
    _DAT_14ca42c20 = FUN_146826273;
    _DAT_14ca42bf8 = FUN_1472c7202;
    _DAT_14ca42c38 = 0xffffffff000000e0;
    _DAT_14ca42c40 = 8;
    DAT_14ca42c44 = 0;
    _DAT_14ca42c28 = &LAB_1472c722c;
    FUN_145efe3de();
    FUN_1407e00cc(&DAT_14ca42be0);
    return;
  }
  return;
}



// FUNCTION 145efe3de FUN_145efe3de body=123 status=ok
// SIG undefined FUN_145efe3de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efe3de(void)

{
  _DAT_14ca44a90 = L"BASE";
  DAT_14ca44aba = 4;
  _DAT_14ca44a98 = FUN_140b35ae4();
  _DAT_14ca44aa0 = DAT_14ca42bf0;
  _DAT_14ca44aa8 = &LAB_14682652b;
  DAT_14ca42bf0 = &DAT_14ca44a90;
  DAT_14ca42c45 = DAT_14ca42c45 + '\x01';
  _DAT_14ca44ab0 = 0x100000000;
  if (*(char *)(_DAT_14ca44a98 + 100) != '\0') {
    DAT_14ca42c46 = DAT_14ca42c46 + '\x01';
  }
  return;
}



// FUNCTION 145efe45a FUN_145efe45a body=226 status=ok
// SIG undefined FUN_145efe45a(void)

longlong * FUN_145efe45a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146304800;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efe53e FUN_145efe53e body=132 status=ok
// SIG undefined FUN_145efe53e(void)

undefined1 * FUN_145efe53e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MipIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472ce4e8;
}



// FUNCTION 145efe5c2 FUN_145efe5c2 body=138 status=ok
// SIG undefined FUN_145efe5c2(void)

code * FUN_145efe5c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ValidDispatchCoord";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000074;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146304888;
}



// FUNCTION 145efe64c FUN_145efe64c body=138 status=ok
// SIG undefined FUN_145efe64c(void)

code * FUN_145efe64c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumMips";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000070;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efe53e;
}



// FUNCTION 145efe6d6 FUN_145efe6d6 body=205 status=ok
// SIG undefined FUN_145efe6d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efe6d6(void)

{
  if ((DAT_14ca6055f & 2) == 0) {
    DAT_14ca6055f = DAT_14ca6055f | 2;
    _DAT_14ca60500 = L"FClearUAVCS";
    _DAT_14ca60518 = FUN_146826540;
    _DAT_14ca60520 = FUN_146825d77;
    _DAT_14ca60528 = FUN_146825fd6;
    _DAT_14ca60530 = FUN_1407e02ea;
    _DAT_14ca60538 = FUN_146826273;
    _DAT_14ca60510 = FUN_1473213b4;
    _DAT_14ca60550 = 0xffffffff000000e0;
    _DAT_14ca60558 = 8;
    DAT_14ca6055c = 0;
    _DAT_14ca60540 = &LAB_1473213de;
    FUN_145efe7a4();
    FUN_1407e00cc(&DAT_14ca604f8);
    return;
  }
  return;
}



// FUNCTION 145efe7a4 FUN_145efe7a4 body=123 status=ok
// SIG undefined FUN_145efe7a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efe7a4(void)

{
  _DAT_14ca63448 = L"BASE";
  DAT_14ca63472 = 4;
  _DAT_14ca63450 = FUN_140b35ae4();
  _DAT_14ca63458 = DAT_14ca60508;
  _DAT_14ca63460 = &LAB_14682652b;
  DAT_14ca60508 = &DAT_14ca63448;
  DAT_14ca6055d = DAT_14ca6055d + '\x01';
  _DAT_14ca63468 = 0x100000000;
  if (*(char *)(_DAT_14ca63450 + 100) != '\0') {
    DAT_14ca6055e = DAT_14ca6055e + '\x01';
  }
  return;
}



// FUNCTION 145efe820 FUN_145efe820 body=226 status=ok
// SIG undefined FUN_145efe820(void)

longlong * FUN_145efe820(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630eba8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efe904 FUN_145efe904 body=132 status=ok
// SIG undefined FUN_145efe904(void)

undefined1 * FUN_145efe904(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x43;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147325e36;
}



// FUNCTION 145efe988 FUN_145efe988 body=138 status=ok
// SIG undefined FUN_145efe988(void)

code * FUN_145efe988(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectDispatchArgsBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efea12;
}



// FUNCTION 145efea12 FUN_145efea12 body=138 status=ok
// SIG undefined FUN_145efea12(void)

code * FUN_145efea12(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efe904;
}



// FUNCTION 145efea9c FUN_145efea9c body=289 status=ok
// SIG undefined FUN_145efea9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145efea9c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caacc88) {
    FUN_144b3d300(&DAT_14caacc88);
    if (DAT_14caacc88 == -1) {
      FUN_145efed08();
      FUN_145efebbe();
      FUN_140db5666(&DAT_14caacbe0,0,&DAT_14caacb78,L"FSlatePostProcessUpsamplePS",
                    L"/Engine/Private/SlatePostProcessPixelShader.usf",L"UpsampleMain",3,3,
                    FUN_14750cebe,FUN_14750ce5e,&LAB_14750ce5a,&LAB_14750ce56,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cab0320);
      _DAT_14caacbe0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432b95dc);
      _Init_thread_footer(&DAT_14caacc88);
    }
  }
  return &DAT_14caacbe0;
}



// FUNCTION 145efebbe FUN_145efebbe body=205 status=ok
// SIG undefined FUN_145efebbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efebbe(void)

{
  if ((DAT_14caacbdf & 2) == 0) {
    DAT_14caacbdf = DAT_14caacbdf | 2;
    _DAT_14caacb80 = L"FSlatePostProcessUpsamplePS";
    _DAT_14caacb98 = FUN_146826540;
    _DAT_14caacba0 = FUN_146825d77;
    _DAT_14caacba8 = FUN_146825fd6;
    _DAT_14caacbb0 = FUN_1407e02ea;
    _DAT_14caacbb8 = FUN_146826273;
    _DAT_14caacb90 = FUN_14750ce28;
    _DAT_14caacbd0 = 0xffffffff000000e0;
    _DAT_14caacbd8 = 8;
    DAT_14caacbdc = 0;
    _DAT_14caacbc0 = &LAB_14750ce52;
    FUN_145efec8c();
    FUN_1407e00cc(&DAT_14caacb78);
    return;
  }
  return;
}



// FUNCTION 145efec8c FUN_145efec8c body=123 status=ok
// SIG undefined FUN_145efec8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145efec8c(void)

{
  _DAT_14cab0d80 = L"BASE";
  DAT_14cab0daa = 4;
  _DAT_14cab0d88 = FUN_140b35ae4();
  _DAT_14cab0d90 = DAT_14caacb88;
  _DAT_14cab0d98 = &LAB_14682652b;
  DAT_14caacb88 = &DAT_14cab0d80;
  DAT_14caacbdd = DAT_14caacbdd + '\x01';
  _DAT_14cab0da0 = 0x100000000;
  if (*(char *)(_DAT_14cab0d88 + 100) != '\0') {
    DAT_14caacbde = DAT_14caacbde + '\x01';
  }
  return;
}



// FUNCTION 145efed08 FUN_145efed08 body=261 status=ok
// SIG undefined FUN_145efed08(void)

void FUN_145efed08(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab03a0) {
    FUN_144b3d300(&DAT_14cab03a0);
    if (DAT_14cab03a0 == -1) {
      FUN_145efee0e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0xbd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cab0320,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1432c71b0);
      _Init_thread_footer(&DAT_14cab03a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efee0e FUN_145efee0e body=226 status=ok
// SIG undefined FUN_145efee0e(void)

longlong * FUN_145efee0e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146337194;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145efeef2 FUN_145efeef2 body=130 status=ok
// SIG undefined FUN_145efeef2(void)

undefined1 * FUN_145efeef2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ElementTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xbe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147510ef8;
}



// FUNCTION 145efef74 FUN_145efef74 body=138 status=ok
// SIG undefined FUN_145efef74(void)

code * FUN_145efef74(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShaderParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efeffe;
}



// FUNCTION 145efeffe FUN_145efeffe body=138 status=ok
// SIG undefined FUN_145efeffe(void)

code * FUN_145efeffe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ElementTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efeef2;
}



// FUNCTION 145eff088 FUN_145eff088 body=58 status=ok
// SIG undefined FUN_145eff088(void)

void FUN_145eff088(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_145eff0c2(param_3);
  if (lVar1 != 0) {
    FUN_14158feea(param_1 + 0x10,param_2,*(undefined1 *)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 145eff0c2 FUN_145eff0c2 body=200 status=ok
// SIG undefined FUN_145eff0c2(void)

undefined8 FUN_145eff0c2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_1 == 0) || ((short)param_1[1] == -1)) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x548) + 8);
    local_28 = *(undefined8 *)(lVar3 + 0x100 + (ulonglong)*(ushort *)(param_1 + 1) * 0x128);
    plVar4 = *(longlong **)(lVar3 + 0x108 + (ulonglong)*(ushort *)(param_1 + 1) * 0x128);
    if (plVar4 == (longlong *)0x0) {
      local_20 = (longlong *)0x0;
      uVar5 = FUN_140165676();
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_20 = plVar4;
      uVar5 = FUN_140165676();
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eff196 FUN_145eff196 body=759 status=ok
// SIG undefined FUN_145eff196(void)

undefined8 * FUN_145eff196(undefined8 *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140553f2a();
  *(undefined1 *)((longlong)param_1 + 0x32) = 4;
  *param_1 = &PTR_FUN_14a4ce190;
  param_1[8] = &PTR_FUN_14a4ce470;
  FUN_145eff48e(param_1 + 9);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  uVar2 = FUN_1408bae02();
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | uVar2;
  lVar3 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar3 + 0xde);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_20 = param_1[2];
    if ((local_20 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_28 = FUN_140926940();
    if ((local_28 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_28);
    }
    FUN_140909372(&local_28,&local_20);
    local_30 = param_1[2];
    if ((local_30 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_38 = FUN_14090928c();
    if ((local_38 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_38);
    }
    FUN_140909372(&local_38,&local_30);
    local_40 = param_1[2];
    if ((local_40 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_48 = FUN_145a681d8();
    if ((local_48 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_48);
    }
    FUN_140909372(&local_48,&local_40);
    local_50 = param_1[2];
    if ((local_50 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_58 = FUN_1458849c2();
    if ((local_58 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_58);
    }
    FUN_140909372(&local_58,&local_50);
    local_60 = FUN_1458848dc();
    if (local_60 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_60);
    }
    local_68 = param_1[2];
    if ((local_68 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_68,&local_60);
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0x4a);
    local_70 = param_1[2];
    if ((local_70 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_70,uVar1);
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0x140);
    local_78 = param_1[2];
    if ((local_78 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_78,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eff48e FUN_145eff48e body=201 status=ok
// SIG undefined FUN_145eff48e(void)

void FUN_145eff48e(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0x8000000000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x8000000000;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  return;
}



// FUNCTION 145eff562 FUN_145eff562 body=255 status=ok
// SIG undefined FUN_145eff562(void)

undefined8 * FUN_145eff562(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a67c730;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebaa0) {
    FUN_144b3d300(&DAT_14caebaa0);
    if (DAT_14caebaa0 == -1) {
      FUN_141590580();
      atexit((_func_5014 *)&LAB_14356eedd);
      _Init_thread_footer(&DAT_14caebaa0);
    }
  }
  FUN_1446f470e(&local_20,L"Name",1);
  param_1[0x1b] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eff662 FUN_145eff662 body=275 status=ok
// SIG undefined FUN_145eff662(void)

void FUN_145eff662(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0xffff;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  local_48 = local_30;
  local_40 = local_28;
  FUN_141590626(local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eff776 FUN_145eff776 body=120 status=ok
// SIG undefined FUN_145eff776(void)

longlong FUN_145eff776(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_145eff7ee(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145eff7ee FUN_145eff7ee body=258 status=ok
// SIG undefined FUN_145eff7ee(void)

longlong * FUN_145eff7ee(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1407f63ba(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_1415c5ebe(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x20 + lVar6) = *(undefined8 *)(lVar2 + 0x20 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 145eff8f0 FUN_145eff8f0 body=40 status=ok
// SIG undefined FUN_145eff8f0(void)

undefined8 FUN_145eff8f0(undefined8 param_1,int param_2)

{
  FUN_145eff918();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145eff918 FUN_145eff918 body=176 status=ok
// SIG undefined FUN_145eff918(void)

void FUN_145eff918(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2cf1f0;
  param_1[0x73] = &PTR_FUN_14b2cf830;
  param_1[0x7a] = &PTR_FUN_14b2cf8e0;
  FUN_14028f4a8(param_1 + 0xa0);
  if (param_1[0x9e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x98] != 0) {
    FUN_1400020a8();
  }
  FUN_14063ace6(param_1 + 0x7b);
  FUN_14063a6a6(param_1 + 0x73);
  thunk_FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145eff9c8 FUN_145eff9c8 body=26 status=ok
// SIG undefined FUN_145eff9c8(void)

void FUN_145eff9c8(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000145eff9de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 145eff9e2 FUN_145eff9e2 body=172 status=ok
// SIG undefined FUN_145eff9e2(void)

void FUN_145eff9e2(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  iVar2 = FUN_140635a7c();
  if (iVar2 == 0) {
    cVar1 = FUN_145effa8e(param_1);
    if (cVar1 != '\0') {
      FUN_148a019f0(param_1);
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x288);
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0xf4) != '\x01') {
        if (*(char *)(lVar3 + 0xec) != '\x01') {
          FUN_145effa9a(param_1,1);
          return;
        }
        FUN_148ebf496(param_1);
        return;
      }
      lVar3 = FUN_140391552(param_1);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar4 = &PTR_FUN_14b9c6da0;
        *(undefined1 *)(puVar4 + 1) = 0;
        FUN_14039144e(lVar3,puVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145effa8e FUN_145effa8e body=11 status=ok
// SIG undefined FUN_145effa8e(void)

bool FUN_145effa8e(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x2a8);
}



// FUNCTION 145effa9a FUN_145effa9a body=141 status=ok
// SIG undefined FUN_145effa9a(void)

void FUN_145effa9a(undefined8 param_1,char param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    if (param_2 == '\0') {
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9d0570;
      FUN_14039144e(lVar1,puVar2);
    }
    puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar2 = &PTR_FUN_14b9b5de8;
    FUN_1447a97f4(puVar2 + 1,&DAT_14c9485f0);
    *(undefined1 *)(puVar2 + 6) = 0;
    FUN_14039144e(lVar1,puVar2);
  }
  FUN_1458343da(param_1);
  return;
}



// FUNCTION 145effb28 FUN_145effb28 body=68 status=ok
// SIG undefined FUN_145effb28(void)

void FUN_145effb28(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xf0);
  memset(_Dst,0,0xf0);
  FUN_145effb6c(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145effb6c FUN_145effb6c body=148 status=ok
// SIG undefined FUN_145effb6c(void)

undefined8 * FUN_145effb6c(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8cbf80;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x16] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x17) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x18] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x19) = (int)plVar2[1];
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  return param_1;
}



// FUNCTION 145effc08 FUN_145effc08 body=207 status=ok
// SIG undefined FUN_145effc08(void)

undefined8 * FUN_145effc08(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bec7ab0;
  *(undefined1 *)(param_1 + 5) = 1;
  FUN_144757f48(param_1,8);
  *param_1 = &PTR_FUN_14becb9e0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_1446f470e(&local_28,L"Effector",1);
  uVar1 = FUN_145989458();
  local_38 = 1;
  local_30 = 0;
  lVar2 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[8] = lVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145effcd8 FUN_145effcd8 body=289 status=ok
// SIG undefined FUN_145effcd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145effcd8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d6f48) {
    FUN_144b3d300(&DAT_14c9d6f48);
    if (DAT_14c9d6f48 == -1) {
      FUN_145efff44();
      FUN_145effdfa();
      FUN_140db5666(&DAT_14c9d6ea0,0,&DAT_14c9d6e38,L"FHairResourceTransitionPass",
                    L"/Engine/Private/HairStrands/HairStrandsMesh.usf",L"MainCS",5,5,FUN_1471807c0,
                    FUN_147180760,&LAB_1462ca3fa,&LAB_14718075c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9da460);
      _DAT_14c9d6ea0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c63c74);
      _Init_thread_footer(&DAT_14c9d6f48);
    }
  }
  return &DAT_14c9d6ea0;
}



// FUNCTION 145effdfa FUN_145effdfa body=205 status=ok
// SIG undefined FUN_145effdfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145effdfa(void)

{
  if ((DAT_14c9d6e9f & 2) == 0) {
    DAT_14c9d6e9f = DAT_14c9d6e9f | 2;
    _DAT_14c9d6e40 = L"FHairResourceTransitionPass";
    _DAT_14c9d6e58 = FUN_146826540;
    _DAT_14c9d6e60 = FUN_146825d77;
    _DAT_14c9d6e68 = FUN_146825fd6;
    _DAT_14c9d6e70 = FUN_1407e02ea;
    _DAT_14c9d6e78 = FUN_146826273;
    _DAT_14c9d6e50 = FUN_14718072e;
    _DAT_14c9d6e90 = 0xffffffff000000e0;
    _DAT_14c9d6e98 = 8;
    DAT_14c9d6e9c = 0;
    _DAT_14c9d6e80 = &LAB_147180758;
    FUN_145effec8();
    FUN_1407e00cc(&DAT_14c9d6e38);
    return;
  }
  return;
}



// FUNCTION 145effec8 FUN_145effec8 body=123 status=ok
// SIG undefined FUN_145effec8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145effec8(void)

{
  _DAT_14c9dba38 = L"BASE";
  DAT_14c9dba62 = 4;
  _DAT_14c9dba40 = FUN_140b35ae4();
  _DAT_14c9dba48 = DAT_14c9d6e48;
  _DAT_14c9dba50 = &LAB_14682652b;
  DAT_14c9d6e48 = &DAT_14c9dba38;
  DAT_14c9d6e9d = DAT_14c9d6e9d + '\x01';
  _DAT_14c9dba58 = 0x100000000;
  if (*(char *)(_DAT_14c9dba40 + 100) != '\0') {
    DAT_14c9d6e9e = DAT_14c9d6e9e + '\x01';
  }
  return;
}



// FUNCTION 145efff44 FUN_145efff44 body=261 status=ok
// SIG undefined FUN_145efff44(void)

void FUN_145efff44(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9da4e0) {
    FUN_144b3d300(&DAT_14c9da4e0);
    if (DAT_14c9da4e0 == -1) {
      FUN_145f0004a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x290;
      local_58 = 0x184;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da460,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71976);
      _Init_thread_footer(&DAT_14c9da4e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0004a FUN_145f0004a body=226 status=ok
// SIG undefined FUN_145f0004a(void)

longlong * FUN_145f0004a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cbd42;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0012e FUN_145f0012e body=132 status=ok
// SIG undefined FUN_145f0012e(void)

undefined1 * FUN_145f0012e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DummyValue";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x185;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14718ae1e;
}



// FUNCTION 145f001b2 FUN_145f001b2 body=138 status=ok
// SIG undefined FUN_145f001b2(void)

code * FUN_145f001b2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"StructuredBuffers";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18800000189;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0x10;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718ad94;
}



// FUNCTION 145f0023c FUN_145f0023c body=138 status=ok
// SIG undefined FUN_145f0023c(void)

code * FUN_145f0023c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VertexUIntBuffers";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000186;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0x10;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0012e;
}



// FUNCTION 145f002c6 FUN_145f002c6 body=287 status=ok
// SIG undefined FUN_145f002c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f002c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e8060) {
    FUN_144b3d300(&DAT_14c9e8060);
    if (DAT_14c9e8060 == -1) {
      FUN_145f003e6();
      FUN_140db5666(&DAT_14c9e7fb8,1,&DAT_14c9e7f50,L"FLightFunctionPS",
                    L"/Engine/Private/LightFunctionPixelShader.usf",L"Main",3,1,FUN_1471d0c2a,
                    FUN_1471d0c02,&LAB_142cdee18,&LAB_1471d0bfe,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14c9e7fb8 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142cdee38);
      _Init_thread_footer(&DAT_14c9e8060);
    }
  }
  return &DAT_14c9e7fb8;
}



// FUNCTION 145f003e6 FUN_145f003e6 body=210 status=ok
// SIG undefined FUN_145f003e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f003e6(void)

{
  if ((DAT_14c9e7fb7 & 2) == 0) {
    DAT_14c9e7fb7 = DAT_14c9e7fb7 | 2;
    _DAT_14c9e7f58 = L"FLightFunctionPS";
    _DAT_14c9e7f70 = FUN_146826540;
    _DAT_14c9e7f78 = FUN_146825d77;
    _DAT_14c9e7f80 = FUN_146825fd6;
    _DAT_14c9e7f88 = FUN_1407e02ea;
    _DAT_14c9e7f90 = FUN_146826273;
    _DAT_14c9e7f68 = FUN_1471d0bc4;
    _DAT_14c9e7fa8 = 0xffffffff00000118;
    _DAT_14c9e7fb0 = 8;
    DAT_14c9e7fb4 = 0;
    _DAT_14c9e7f98 = &LAB_1471d0bfa;
    FUN_145f004b8();
    FUN_145f00532();
    FUN_1407e00cc(&DAT_14c9e7f50);
    return;
  }
  return;
}



// FUNCTION 145f004b8 FUN_145f004b8 body=121 status=ok
// SIG undefined FUN_145f004b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f004b8(void)

{
  FUN_145f005ae();
  _DAT_14c9ea008 = L"SvPositionToLight";
  DAT_14c9ea032 = FUN_140850cc5();
  _DAT_14c9ea010 = FUN_140ec6960();
  _DAT_14c9ea020 = &LAB_14682652b;
  _DAT_14c9ea028 = 0x1000000f8;
  _DAT_14c9ea030 = 0;
  _DAT_14c9ea018 = DAT_14c9e7f60;
  DAT_14c9e7f60 = &DAT_14c9ea008;
  return;
}



// FUNCTION 145f00532 FUN_145f00532 body=123 status=ok
// SIG undefined FUN_145f00532(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f00532(void)

{
  _DAT_14c9eb1c8 = L"BASE";
  DAT_14c9eb1f2 = 4;
  _DAT_14c9eb1d0 = FUN_141526006();
  _DAT_14c9eb1d8 = DAT_14c9e7f60;
  _DAT_14c9eb1e0 = &LAB_14682652b;
  DAT_14c9e7f60 = &DAT_14c9eb1c8;
  DAT_14c9e7fb5 = DAT_14c9e7fb5 + '\x01';
  _DAT_14c9eb1e8 = 0x100000000;
  if (*(char *)(_DAT_14c9eb1d0 + 100) != '\0') {
    DAT_14c9e7fb6 = DAT_14c9e7fb6 + '\x01';
  }
  return;
}



// FUNCTION 145f005ae FUN_145f005ae body=128 status=ok
// SIG undefined FUN_145f005ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f005ae(void)

{
  FUN_145f0062e();
  _DAT_14c9ea038 = L"LightFunctionParameters";
  DAT_14c9ea062 = FUN_140850cc5();
  FUN_145f00780();
  _DAT_14c9ea040 = &DAT_14c9e9140;
  _DAT_14c9ea050 = &LAB_14682652b;
  _DAT_14c9ea058 = 0x1000000fe;
  _DAT_14c9ea060 = 0;
  _DAT_14c9ea048 = DAT_14c9e7f60;
  DAT_14c9e7f60 = &DAT_14c9ea038;
  return;
}



// FUNCTION 145f0062e FUN_145f0062e body=121 status=ok
// SIG undefined FUN_145f0062e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0062e(void)

{
  FUN_145f006a8();
  _DAT_14c9ea068 = L"LightFunctionParameters2";
  DAT_14c9ea092 = FUN_140850cc5();
  _DAT_14c9ea070 = FUN_140ec6960();
  _DAT_14c9ea080 = &LAB_14682652b;
  _DAT_14c9ea088 = 0x100000104;
  _DAT_14c9ea090 = 0;
  _DAT_14c9ea078 = DAT_14c9e7f60;
  DAT_14c9e7f60 = &DAT_14c9ea068;
  return;
}



// FUNCTION 145f006a8 FUN_145f006a8 body=216 status=ok
// SIG undefined FUN_145f006a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f006a8(void)

{
  _DAT_14c9ea0c8 = L"CameraRelativeLightPosition";
  DAT_14c9ea0f2 = FUN_140850cc5();
  _DAT_14c9ea0d0 = FUN_140ec6960();
  _DAT_14c9ea0e0 = &LAB_14682652b;
  _DAT_14c9ea0e8 = 0x10000010e;
  _DAT_14c9ea0f0 = 0;
  _DAT_14c9ea0d8 = DAT_14c9e7f60;
  DAT_14c9e7f60 = &DAT_14c9ea0c8;
  _DAT_14c9ea098 = L"HairOnlyDepthTexture";
  DAT_14c9ea0c2 = FUN_140850cc5();
  _DAT_14c9ea0a0 = FUN_140fb78d0();
  _DAT_14c9ea0b0 = &LAB_14682652b;
  _DAT_14c9ea0b8 = 0x10000010a;
  _DAT_14c9ea0c0 = 0;
  _DAT_14c9ea0a8 = DAT_14c9e7f60;
  DAT_14c9e7f60 = &DAT_14c9ea098;
  return;
}



// FUNCTION 145f00780 FUN_145f00780 body=308 status=ok
// SIG undefined FUN_145f00780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f00780(void)

{
  if ((DAT_14c9e91a7 & 2) == 0) {
    DAT_14c9e91a7 = DAT_14c9e91a7 | 2;
    _DAT_14c9e9148 = L"FLightFunctionSharedParameters";
    _DAT_14c9e9160 = FUN_146826540;
    _DAT_14c9e9168 = FUN_146825d77;
    _DAT_14c9e9170 = FUN_146825fd6;
    _DAT_14c9e9178 = FUN_1407e02ea;
    _DAT_14c9e9180 = FUN_146826273;
    _DAT_14c9e9158 = &LAB_1471d2302;
    _DAT_14c9e9198 = 0xffffffff00000006;
    _DAT_14c9e91a0 = 2;
    DAT_14c9e91a4 = 0;
    _DAT_14c9e9188 = &LAB_1471d2310;
    _DAT_14c9ea320 = L"LightFunctionParameters";
    DAT_14c9ea34a = FUN_140850cc5();
    _DAT_14c9ea328 = FUN_140ec6960();
    _DAT_14c9ea338 = &LAB_14682652b;
    _DAT_14c9ea340 = 0x100000000;
    _DAT_14c9ea348 = 0;
    _DAT_14c9ea330 = DAT_14c9e9150;
    DAT_14c9e9150 = &DAT_14c9ea320;
    FUN_1407e00cc(&DAT_14c9e9140);
    return;
  }
  return;
}



// FUNCTION 145f008b4 FUN_145f008b4 body=285 status=ok
// SIG undefined FUN_145f008b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f008b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca20b48) {
    FUN_144b3d300(&DAT_14ca20b48);
    if (DAT_14ca20b48 == -1) {
      FUN_145f00b1c();
      FUN_145f009d2();
      FUN_140db5666(&DAT_14ca20aa0,0,&DAT_14ca20a38,L"FVisualizeWarpingPS",
                    L"/Engine/Private/PathTracing/PathTracingSpatialTemporalDenoising.usf",
                    L"FVisualizeWarpingPS",3,1,FUN_147277eae,FUN_147277e4e,&LAB_1462f5236,
                    &LAB_147277e4a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca229b8);
      _DAT_14ca20aa0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e84459);
      _Init_thread_footer(&DAT_14ca20b48);
    }
  }
  return &DAT_14ca20aa0;
}



// FUNCTION 145f009d2 FUN_145f009d2 body=205 status=ok
// SIG undefined FUN_145f009d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f009d2(void)

{
  if ((DAT_14ca20a9f & 2) == 0) {
    DAT_14ca20a9f = DAT_14ca20a9f | 2;
    _DAT_14ca20a40 = L"FVisualizeWarpingPS";
    _DAT_14ca20a58 = FUN_146826540;
    _DAT_14ca20a60 = FUN_146825d77;
    _DAT_14ca20a68 = FUN_146825fd6;
    _DAT_14ca20a70 = FUN_1407e02ea;
    _DAT_14ca20a78 = FUN_146826273;
    _DAT_14ca20a50 = FUN_147277e1a;
    _DAT_14ca20a90 = 0xffffffff000000e0;
    _DAT_14ca20a98 = 8;
    DAT_14ca20a9c = 0;
    _DAT_14ca20a80 = &LAB_147277e46;
    FUN_145f00aa0();
    FUN_1407e00cc(&DAT_14ca20a38);
    return;
  }
  return;
}



// FUNCTION 145f00aa0 FUN_145f00aa0 body=123 status=ok
// SIG undefined FUN_145f00aa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f00aa0(void)

{
  _DAT_14ca25048 = L"BASE";
  DAT_14ca25072 = 4;
  _DAT_14ca25050 = FUN_140b35ae4();
  _DAT_14ca25058 = DAT_14ca20a48;
  _DAT_14ca25060 = &LAB_14682652b;
  DAT_14ca20a48 = &DAT_14ca25048;
  DAT_14ca20a9d = DAT_14ca20a9d + '\x01';
  _DAT_14ca25068 = 0x100000000;
  if (*(char *)(_DAT_14ca25050 + 100) != '\0') {
    DAT_14ca20a9e = DAT_14ca20a9e + '\x01';
  }
  return;
}



// FUNCTION 145f00b1c FUN_145f00b1c body=261 status=ok
// SIG undefined FUN_145f00b1c(void)

void FUN_145f00b1c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca22a38) {
    FUN_144b3d300(&DAT_14ca22a38);
    if (DAT_14ca22a38 == -1) {
      FUN_145f00c22(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1c0;
      local_58 = 0x858;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca229b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e98bc7);
      _Init_thread_footer(&DAT_14ca22a38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f00c22 FUN_145f00c22 body=226 status=ok
// SIG undefined FUN_145f00c22(void)

longlong * FUN_145f00c22(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f777e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f00d06 FUN_145f00d06 body=136 status=ok
// SIG undefined FUN_145f00d06(void)

code * FUN_145f00d06(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DenoisedTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000085d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f00e18;
}



// FUNCTION 145f00d8e FUN_145f00d8e body=138 status=ok
// SIG undefined FUN_145f00d8e(void)

code * FUN_145f00d8e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TemporalDenoisingMotionVector";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000085b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f7896;
}



// FUNCTION 145f00e18 FUN_145f00e18 body=138 status=ok
// SIG undefined FUN_145f00e18(void)

code * FUN_145f00e18(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000085c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f00d8e;
}



// FUNCTION 145f00ea2 FUN_145f00ea2 body=93 status=ok
// SIG undefined FUN_145f00ea2(void)

undefined8 * FUN_145f00ea2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1410d3d66(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_141590714(param_1,iVar1);
      FUN_14159085b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145f00f00 FUN_145f00f00 body=278 status=ok
// SIG undefined FUN_145f00f00(void)

undefined * FUN_145f00f00(void)

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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9df510) {
    FUN_144b3d300(&DAT_14c9df510);
    if (DAT_14c9df510 == -1) {
      FUN_145f01018(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"AVSMs";
      local_78 = L"FAdaptiveVolumetricShadowMaps";
      local_50 = 0x3a0;
      local_58 = 0x1c7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9df490,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c9b920);
      _Init_thread_footer(&DAT_14c9df510);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9df490;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f01018 FUN_145f01018 body=226 status=ok
// SIG undefined FUN_145f01018(void)

longlong * FUN_145f01018(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_145dda740;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f01100 FUN_145f01100 body=140 status=ok
// SIG undefined FUN_145f01100(void)

undefined1 * FUN_145f01100(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dda7d0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AVSM";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FAdaptiveVolumetricShadowMapParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9e0ed0;
  return &LAB_145f010fc;
}



// FUNCTION 145f0118c FUN_145f0118c body=138 status=ok
// SIG undefined FUN_145f0118c(void)

code * FUN_145f0118c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InTotalPrevDrawClusters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< FUintVector2 >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x78000005cc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725a4ce;
}



// FUNCTION 145f01216 FUN_145f01216 body=138 status=ok
// SIG undefined FUN_145f01216(void)

code * FUN_145f01216(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TessellationTable_VertsAndIndexes";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000005d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14725a2a6;
}



// FUNCTION 145f012a0 FUN_145f012a0 body=146 status=ok
// SIG undefined FUN_145f012a0(void)

code * FUN_145f012a0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c2eaca();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SplitWorkQueue";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGlobalWorkQueueParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000005d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca181b0;
  return FUN_1462f248c;
}



// FUNCTION 145f01332 FUN_145f01332 body=144 status=ok
// SIG undefined FUN_145f01332(void)

code * FUN_145f01332(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145f013c2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam34";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FCameraOffsetModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x27000000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145de157c;
}



// FUNCTION 145f013c2 FUN_145f013c2 body=268 status=ok
// SIG undefined FUN_145f013c2(void)

undefined * FUN_145f013c2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb34dc8) {
    FUN_144b3d300(&DAT_14cb34dc8);
    if (DAT_14cb34dc8 == -1) {
      FUN_145f014d0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FCameraOffsetModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x44;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34d48,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb924);
      _Init_thread_footer(&DAT_14cb34dc8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34d48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f014d0 FUN_145f014d0 body=232 status=ok
// SIG undefined FUN_145f014d0(void)

longlong * FUN_145f014d0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar12 = FUN_146462e92;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f015be FUN_145f015be body=205 status=ok
// SIG undefined FUN_145f015be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f015be(void)

{
  if ((DAT_14c9c5ce7 & 2) == 0) {
    DAT_14c9c5ce7 = DAT_14c9c5ce7 | 2;
    _DAT_14c9c5c88 = L"FUpdateHistoryDepthRejectionPS";
    _DAT_14c9c5ca0 = FUN_146826540;
    _DAT_14c9c5ca8 = FUN_146825d77;
    _DAT_14c9c5cb0 = FUN_146825fd6;
    _DAT_14c9c5cb8 = FUN_1407e02ea;
    _DAT_14c9c5cc0 = FUN_146826273;
    _DAT_14c9c5c98 = FUN_14714e8ea;
    _DAT_14c9c5cd8 = 0xffffffff000000e0;
    _DAT_14c9c5ce0 = 8;
    DAT_14c9c5ce4 = 0;
    _DAT_14c9c5cc8 = &LAB_14714e914;
    FUN_145f0168c();
    FUN_1407e00cc(&DAT_14c9c5c80);
    return;
  }
  return;
}



// FUNCTION 145f0168c FUN_145f0168c body=123 status=ok
// SIG undefined FUN_145f0168c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0168c(void)

{
  _DAT_14c9c93f0 = L"BASE";
  DAT_14c9c941a = 4;
  _DAT_14c9c93f8 = FUN_140b35ae4();
  _DAT_14c9c9400 = DAT_14c9c5c90;
  _DAT_14c9c9408 = &LAB_14682652b;
  DAT_14c9c5c90 = &DAT_14c9c93f0;
  DAT_14c9c5ce5 = DAT_14c9c5ce5 + '\x01';
  _DAT_14c9c9410 = 0x100000000;
  if (*(char *)(_DAT_14c9c93f8 + 100) != '\0') {
    DAT_14c9c5ce6 = DAT_14c9c5ce6 + '\x01';
  }
  return;
}



// FUNCTION 145f01708 FUN_145f01708 body=226 status=ok
// SIG undefined FUN_145f01708(void)

longlong * FUN_145f01708(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462be688;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f017ec FUN_145f017ec body=136 status=ok
// SIG undefined FUN_145f017ec(void)

code * FUN_145f017ec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HistoryUVMinMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000089;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471511ca;
}



// FUNCTION 145f01874 FUN_145f01874 body=138 status=ok
// SIG undefined FUN_145f01874(void)

code * FUN_145f01874(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BentNormalHistorySampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000085;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147151368;
}



// FUNCTION 145f018fe FUN_145f018fe body=138 status=ok
// SIG undefined FUN_145f018fe(void)

code * FUN_145f018fe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HistoryDistanceThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe40000008b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147151140;
}



// FUNCTION 145f01988 FUN_145f01988 body=292 status=ok
// SIG undefined FUN_145f01988(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f01988(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c78a8) {
    FUN_144b3d300(&DAT_14c9c78a8);
    if (DAT_14c9c78a8 == -1) {
      FUN_145f01bf6();
      FUN_145f01aac();
      FUN_140db5666(&DAT_14c9c7800,0,&DAT_14c9c7798,L"FScatterUploadDistanceFieldIndirectionAtlasCS"
                    ,L"/Engine/Private/DistanceFieldStreaming.usf",
                    L"ScatterUploadDistanceFieldIndirectionAtlasCS",5,1,FUN_14714fa90,FUN_14714fa30,
                    &LAB_1462bdce0,&LAB_14714fa2c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c8f38)
      ;
      _DAT_14c9c7800 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142be4397);
      _Init_thread_footer(&DAT_14c9c78a8);
    }
  }
  return &DAT_14c9c7800;
}



// FUNCTION 145f01aac FUN_145f01aac body=205 status=ok
// SIG undefined FUN_145f01aac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f01aac(void)

{
  if ((DAT_14c9c77ff & 2) == 0) {
    DAT_14c9c77ff = DAT_14c9c77ff | 2;
    _DAT_14c9c77a0 = L"FScatterUploadDistanceFieldIndirectionAtlasCS";
    _DAT_14c9c77b8 = FUN_146826540;
    _DAT_14c9c77c0 = FUN_146825d77;
    _DAT_14c9c77c8 = FUN_146825fd6;
    _DAT_14c9c77d0 = FUN_1407e02ea;
    _DAT_14c9c77d8 = FUN_146826273;
    _DAT_14c9c77b0 = FUN_14714f9fe;
    _DAT_14c9c77f0 = 0xffffffff000000e0;
    _DAT_14c9c77f8 = 8;
    DAT_14c9c77fc = 0;
    _DAT_14c9c77e0 = &LAB_14714fa28;
    FUN_145f01b7a();
    FUN_1407e00cc(&DAT_14c9c7798);
    return;
  }
  return;
}



// FUNCTION 145f01b7a FUN_145f01b7a body=123 status=ok
// SIG undefined FUN_145f01b7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f01b7a(void)

{
  _DAT_14c9c9978 = L"BASE";
  DAT_14c9c99a2 = 4;
  _DAT_14c9c9980 = FUN_140b35ae4();
  _DAT_14c9c9988 = DAT_14c9c77a8;
  _DAT_14c9c9990 = &LAB_14682652b;
  DAT_14c9c77a8 = &DAT_14c9c9978;
  DAT_14c9c77fd = DAT_14c9c77fd + '\x01';
  _DAT_14c9c9998 = 0x100000000;
  if (*(char *)(_DAT_14c9c9980 + 100) != '\0') {
    DAT_14c9c77fe = DAT_14c9c77fe + '\x01';
  }
  return;
}



// FUNCTION 145f01bf6 FUN_145f01bf6 body=261 status=ok
// SIG undefined FUN_145f01bf6(void)

void FUN_145f01bf6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c8fb8) {
    FUN_144b3d300(&DAT_14c9c8fb8);
    if (DAT_14c9c8fb8 == -1) {
      FUN_145f01cfc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xb0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8f38,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be77a2);
      _Init_thread_footer(&DAT_14c9c8fb8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f01cfc FUN_145f01cfc body=226 status=ok
// SIG undefined FUN_145f01cfc(void)

longlong * FUN_145f01cfc(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c1364;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f01de0 FUN_145f01de0 body=130 status=ok
// SIG undefined FUN_145f01de0(void)

undefined1 * FUN_145f01de0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWIndirectionAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471542f6;
}



// FUNCTION 145f01e62 FUN_145f01e62 body=138 status=ok
// SIG undefined FUN_145f01e62(void)

code * FUN_145f01e62(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectionUploadIndices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f01de0;
}



// FUNCTION 145f01eec FUN_145f01eec body=138 status=ok
// SIG undefined FUN_145f01eec(void)

code * FUN_145f01eec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectionAtlasSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715426c;
}



// FUNCTION 145f01f76 FUN_145f01f76 body=205 status=ok
// SIG undefined FUN_145f01f76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f01f76(void)

{
  if ((DAT_14c9cb827 & 2) == 0) {
    DAT_14c9cb827 = DAT_14c9cb827 | 2;
    _DAT_14c9cb7c8 = L"FMarkHeightfieldPagesCS";
    _DAT_14c9cb7e0 = FUN_146826540;
    _DAT_14c9cb7e8 = FUN_146825d77;
    _DAT_14c9cb7f0 = FUN_146825fd6;
    _DAT_14c9cb7f8 = FUN_1407e02ea;
    _DAT_14c9cb800 = FUN_146826273;
    _DAT_14c9cb7d8 = FUN_14715a680;
    _DAT_14c9cb818 = 0xffffffff000000e0;
    _DAT_14c9cb820 = 8;
    DAT_14c9cb824 = 0;
    _DAT_14c9cb808 = &LAB_14715a6aa;
    FUN_145f02044();
    FUN_1407e00cc(&DAT_14c9cb7c0);
    return;
  }
  return;
}



// FUNCTION 145f02044 FUN_145f02044 body=123 status=ok
// SIG undefined FUN_145f02044(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f02044(void)

{
  _DAT_14c9cf3d0 = L"BASE";
  DAT_14c9cf3fa = 4;
  _DAT_14c9cf3d8 = FUN_140b35ae4();
  _DAT_14c9cf3e0 = DAT_14c9cb7d0;
  _DAT_14c9cf3e8 = &LAB_14682652b;
  DAT_14c9cb7d0 = &DAT_14c9cf3d0;
  DAT_14c9cb825 = DAT_14c9cb825 + '\x01';
  _DAT_14c9cf3f0 = 0x100000000;
  if (*(char *)(_DAT_14c9cf3d8 + 100) != '\0') {
    DAT_14c9cb826 = DAT_14c9cb826 + '\x01';
  }
  return;
}



// FUNCTION 145f020c0 FUN_145f020c0 body=136 status=ok
// SIG undefined FUN_145f020c0(void)

code * FUN_145f020c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HeightfieldDescriptions";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x980000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f021d2;
}



// FUNCTION 145f02148 FUN_145f02148 body=138 status=ok
// SIG undefined FUN_145f02148(void)

code * FUN_145f02148(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisibilityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147160d98;
}



// FUNCTION 145f021d2 FUN_145f021d2 body=138 status=ok
// SIG undefined FUN_145f021d2(void)

code * FUN_145f021d2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisibilitySampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f02148;
}



// FUNCTION 145f0225c FUN_145f0225c body=292 status=ok
// SIG undefined FUN_145f0225c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0225c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d08c8) {
    FUN_144b3d300(&DAT_14c9d08c8);
    if (DAT_14c9d08c8 == -1) {
      FUN_145f024ca();
      FUN_145f02380();
      FUN_140db5666(&DAT_14c9d0820,0,&DAT_14c9d07b8,L"FHairPrintLODInfoCS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainCS",5,1,FUN_14716b108,
                    FUN_14716b0a8,FUN_1462c5d32,&LAB_14716b0a4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9d3c78);
      _DAT_14c9d0820 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c33ab5);
      _Init_thread_footer(&DAT_14c9d08c8);
    }
  }
  return &DAT_14c9d0820;
}



// FUNCTION 145f02380 FUN_145f02380 body=205 status=ok
// SIG undefined FUN_145f02380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f02380(void)

{
  if ((DAT_14c9d081f & 2) == 0) {
    DAT_14c9d081f = DAT_14c9d081f | 2;
    _DAT_14c9d07c0 = L"FHairPrintLODInfoCS";
    _DAT_14c9d07d8 = FUN_146826540;
    _DAT_14c9d07e0 = FUN_146825d77;
    _DAT_14c9d07e8 = FUN_146825fd6;
    _DAT_14c9d07f0 = FUN_1407e02ea;
    _DAT_14c9d07f8 = FUN_146826273;
    _DAT_14c9d07d0 = FUN_14716b074;
    _DAT_14c9d0810 = 0xffffffff000000e0;
    _DAT_14c9d0818 = 8;
    DAT_14c9d081c = 0;
    _DAT_14c9d0800 = &LAB_14716b0a0;
    FUN_145f0244e();
    FUN_1407e00cc(&DAT_14c9d07b8);
    return;
  }
  return;
}



// FUNCTION 145f0244e FUN_145f0244e body=123 status=ok
// SIG undefined FUN_145f0244e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0244e(void)

{
  _DAT_14c9d4db8 = L"BASE";
  DAT_14c9d4de2 = 4;
  _DAT_14c9d4dc0 = FUN_140b35ae4();
  _DAT_14c9d4dc8 = DAT_14c9d07c8;
  _DAT_14c9d4dd0 = &LAB_14682652b;
  DAT_14c9d07c8 = &DAT_14c9d4db8;
  DAT_14c9d081d = DAT_14c9d081d + '\x01';
  _DAT_14c9d4dd8 = 0x100000000;
  if (*(char *)(_DAT_14c9d4dc0 + 100) != '\0') {
    DAT_14c9d081e = DAT_14c9d081e + '\x01';
  }
  return;
}



// FUNCTION 145f024ca FUN_145f024ca body=261 status=ok
// SIG undefined FUN_145f024ca(void)

void FUN_145f024ca(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d3cf8) {
    FUN_144b3d300(&DAT_14c9d3cf8);
    if (DAT_14c9d3cf8 == -1) {
      FUN_145f025d0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x69;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d3c78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4946b);
      _Init_thread_footer(&DAT_14c9d3cf8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f025d0 FUN_145f025d0 body=226 status=ok
// SIG undefined FUN_145f025d0(void)

longlong * FUN_145f025d0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c6de6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f026b4 FUN_145f026b4 body=132 status=ok
// SIG undefined FUN_145f026b4(void)

undefined1 * FUN_145f026b4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471702e8;
}



// FUNCTION 145f02738 FUN_145f02738 body=136 status=ok
// SIG undefined FUN_145f02738(void)

code * FUN_145f02738(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PointCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000006f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f027c0;
}



// FUNCTION 145f027c0 FUN_145f027c0 body=138 status=ok
// SIG undefined FUN_145f027c0(void)

code * FUN_145f027c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CurveCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x240000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14717014a;
}



// FUNCTION 145f0284a FUN_145f0284a body=292 status=ok
// SIG undefined FUN_145f0284a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0284a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d0c40) {
    FUN_144b3d300(&DAT_14c9d0c40);
    if (DAT_14c9d0c40 == -1) {
      FUN_145f02ab8();
      FUN_145f0296e();
      FUN_140db5666(&DAT_14c9d0b98,0,&DAT_14c9d0b30,L"FHairDebugPS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainPS",3,1,FUN_14716b462,
                    FUN_14716b402,FUN_1462c5d72,&LAB_14716b3fe,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9d3e10);
      _DAT_14c9d0b98 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c33ad9);
      _Init_thread_footer(&DAT_14c9d0c40);
    }
  }
  return &DAT_14c9d0b98;
}



// FUNCTION 145f0296e FUN_145f0296e body=205 status=ok
// SIG undefined FUN_145f0296e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0296e(void)

{
  if ((DAT_14c9d0b97 & 2) == 0) {
    DAT_14c9d0b97 = DAT_14c9d0b97 | 2;
    _DAT_14c9d0b38 = L"FHairDebugPS";
    _DAT_14c9d0b50 = FUN_146826540;
    _DAT_14c9d0b58 = FUN_146825d77;
    _DAT_14c9d0b60 = FUN_146825fd6;
    _DAT_14c9d0b68 = FUN_1407e02ea;
    _DAT_14c9d0b70 = FUN_146826273;
    _DAT_14c9d0b48 = FUN_14716b3ce;
    _DAT_14c9d0b88 = 0xffffffff000000e0;
    _DAT_14c9d0b90 = 8;
    DAT_14c9d0b94 = 0;
    _DAT_14c9d0b78 = &LAB_14716b3fa;
    FUN_145f02a3c();
    FUN_1407e00cc(&DAT_14c9d0b30);
    return;
  }
  return;
}



// FUNCTION 145f02a3c FUN_145f02a3c body=123 status=ok
// SIG undefined FUN_145f02a3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f02a3c(void)

{
  _DAT_14c9d4e48 = L"BASE";
  DAT_14c9d4e72 = 4;
  _DAT_14c9d4e50 = FUN_140b35ae4();
  _DAT_14c9d4e58 = DAT_14c9d0b40;
  _DAT_14c9d4e60 = &LAB_14682652b;
  DAT_14c9d0b40 = &DAT_14c9d4e48;
  DAT_14c9d0b95 = DAT_14c9d0b95 + '\x01';
  _DAT_14c9d4e68 = 0x100000000;
  if (*(char *)(_DAT_14c9d4e50 + 100) != '\0') {
    DAT_14c9d0b96 = DAT_14c9d0b96 + '\x01';
  }
  return;
}



// FUNCTION 145f02ab8 FUN_145f02ab8 body=261 status=ok
// SIG undefined FUN_145f02ab8(void)

void FUN_145f02ab8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d3e90) {
    FUN_144b3d300(&DAT_14c9d3e90);
    if (DAT_14c9d3e90 == -1) {
      FUN_145f02bbe(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x1ca;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d3e10,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4948f);
      _Init_thread_footer(&DAT_14c9d3e90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f02bbe FUN_145f02bbe body=226 status=ok
// SIG undefined FUN_145f02bbe(void)

longlong * FUN_145f02bbe(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c7140;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f02ca2 FUN_145f02ca2 body=132 status=ok
// SIG undefined FUN_145f02ca2(void)

undefined1 * FUN_145f02ca2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147171206;
}



// FUNCTION 145f02d26 FUN_145f02d26 body=136 status=ok
// SIG undefined FUN_145f02d26(void)

code * FUN_145f02d26(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DepthStencilTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000001d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147170f54;
}



// FUNCTION 145f02dae FUN_145f02dae body=138 status=ok
// SIG undefined FUN_145f02dae(void)

code * FUN_145f02dae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxSampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000001cf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147171068;
}



// FUNCTION 145f02e38 FUN_145f02e38 body=292 status=ok
// SIG undefined FUN_145f02e38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f02e38(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dcc60) {
    FUN_144b3d300(&DAT_14c9dcc60);
    if (DAT_14c9dcc60 == -1) {
      FUN_145f030a6();
      FUN_145f02f5c();
      FUN_140db5666(&DAT_14c9dcbb8,0,&DAT_14c9dcb50,L"FVoxelAllocateVoxelPageCS",
                    L"/Engine/Private/HairStrands/HairStrandsVoxelRasterCompute.usf",L"AllocateCS",5
                    ,2,FUN_147198934,FUN_1471988d4,&LAB_1462ce32e,&LAB_1471988d0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9e00f8);
      _DAT_14c9dcbb8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c86204);
      _Init_thread_footer(&DAT_14c9dcc60);
    }
  }
  return &DAT_14c9dcbb8;
}



// FUNCTION 145f02f5c FUN_145f02f5c body=205 status=ok
// SIG undefined FUN_145f02f5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f02f5c(void)

{
  if ((DAT_14c9dcbb7 & 2) == 0) {
    DAT_14c9dcbb7 = DAT_14c9dcbb7 | 2;
    _DAT_14c9dcb58 = L"FVoxelAllocateVoxelPageCS";
    _DAT_14c9dcb70 = FUN_146826540;
    _DAT_14c9dcb78 = FUN_146825d77;
    _DAT_14c9dcb80 = FUN_146825fd6;
    _DAT_14c9dcb88 = FUN_1407e02ea;
    _DAT_14c9dcb90 = FUN_146826273;
    _DAT_14c9dcb68 = FUN_1471988a2;
    _DAT_14c9dcba8 = 0xffffffff000000e0;
    _DAT_14c9dcbb0 = 8;
    DAT_14c9dcbb4 = 0;
    _DAT_14c9dcb98 = &LAB_1471988cc;
    FUN_145f0302a();
    FUN_1407e00cc(&DAT_14c9dcb50);
    return;
  }
  return;
}



// FUNCTION 145f0302a FUN_145f0302a body=123 status=ok
// SIG undefined FUN_145f0302a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0302a(void)

{
  _DAT_14c9e1510 = L"BASE";
  DAT_14c9e153a = 4;
  _DAT_14c9e1518 = FUN_140b35ae4();
  _DAT_14c9e1520 = DAT_14c9dcb60;
  _DAT_14c9e1528 = &LAB_14682652b;
  DAT_14c9dcb60 = &DAT_14c9e1510;
  DAT_14c9dcbb5 = DAT_14c9dcbb5 + '\x01';
  _DAT_14c9e1530 = 0x100000000;
  if (*(char *)(_DAT_14c9e1518 + 100) != '\0') {
    DAT_14c9dcbb6 = DAT_14c9dcbb6 + '\x01';
  }
  return;
}



// FUNCTION 145f030a6 FUN_145f030a6 body=261 status=ok
// SIG undefined FUN_145f030a6(void)

void FUN_145f030a6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e0178) {
    FUN_144b3d300(&DAT_14c9e0178);
    if (DAT_14c9e0178 == -1) {
      FUN_145f031ac(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x141;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e00f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c9e6cb);
      _Init_thread_footer(&DAT_14c9e0178);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f031ac FUN_145f031ac body=226 status=ok
// SIG undefined FUN_145f031ac(void)

longlong * FUN_145f031ac(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cea88;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f03290 FUN_145f03290 body=132 status=ok
// SIG undefined FUN_145f03290(void)

undefined1 * FUN_145f03290(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CPU_PageIndexResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x142;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471a19ac;
}



// FUNCTION 145f03314 FUN_145f03314 body=136 status=ok
// SIG undefined FUN_145f03314(void)

code * FUN_145f03314(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PageIndexResolutionAndOffsetBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000148;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1784;
}



// FUNCTION 145f0339c FUN_145f0339c body=138 status=ok
// SIG undefined FUN_145f0339c(void)

code * FUN_145f0339c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PageCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000144;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1922;
}


