// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146b17adc FUN_146b17adc body=35 status=ok
// SIG undefined FUN_146b17adc(void)

undefined8 FUN_146b17adc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140002266(param_1,L"%s%d",param_2,param_3);
  return param_1;
}



// FUNCTION 146b17b00 FUN_146b17b00 body=71 status=ok
// SIG undefined FUN_146b17b00(void)

void FUN_146b17b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  local_18 = param_3;
  FUN_146b190f8(param_1,local_c,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b17b48 FUN_146b17b48 body=39 status=ok
// SIG undefined FUN_146b17b48(void)

undefined4 FUN_146b17b48(uint *param_1,uint *param_2)

{
  return CONCAT31((int3)((*param_1 ^ *param_2) >> 8),
                  param_1[3] == param_2[3] &&
                  (param_1[2] == param_2[2] &&
                  (param_1[1] == param_2[1] && (*param_1 ^ *param_2) == 0)));
}



// FUNCTION 146b17b70 FUN_146b17b70 body=62 status=ok
// SIG undefined FUN_146b17b70(void)

void FUN_146b17b70(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_146b197c4(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b17bb0 FUN_146b17bb0 body=34 status=ok
// SIG undefined FUN_146b17bb0(void)

undefined8 FUN_146b17bb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146b17bd2 FUN_146b17bd2 body=290 status=ok
// SIG undefined FUN_146b17bd2(void)

undefined8 FUN_146b17bd2(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50 [2];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_142914388(local_50);
  FUN_1446ddc76(&local_60,"Analytics",1);
  uVar2 = FUN_144a52528();
  plVar3 = (longlong *)FUN_14493e38c(uVar2,local_60);
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  puVar1 = local_60;
  local_58 = 3;
  *local_60 = &PTR_LAB_149f27760;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149f276f0;
  puVar1[3] = local_50;
  puVar1[4] = FUN_146b19a06;
  FUN_146b19a9c(local_68);
  (**(code **)(*plVar3 + 0x40))(plVar3,param_2,local_68,&local_60);
  FUN_1449db362(&local_60);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b17cf6 FUN_146b17cf6 body=4 status=ok
// SIG undefined FUN_146b17cf6(void)

undefined8 FUN_146b17cf6(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 146b17cfa FUN_146b17cfa body=24 status=ok
// SIG undefined FUN_146b17cfa(void)

void FUN_146b17cfa(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    *(double *)(param_1 + 0x20) = *(double *)(param_2 + 0x20) + *(double *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 146b17d12 FUN_146b17d12 body=168 status=ok
// SIG undefined FUN_146b17d12(void)

undefined8 * FUN_146b17d12(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  return param_1;
}



// FUNCTION 146b17dba FUN_146b17dba body=147 status=ok
// SIG undefined FUN_146b17dba(void)

void FUN_146b17dba(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b17e4e FUN_146b17e4e body=63 status=ok
// SIG undefined FUN_146b17e4e(void)

void FUN_146b17e4e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146b17e8e FUN_146b17e8e body=115 status=ok
// SIG undefined FUN_146b17e8e(void)

void FUN_146b17e8e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146b17f01 FUN_146b17f01 body=52 status=ok
// SIG undefined FUN_146b17f01(void)

void FUN_146b17f01(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146b17d12(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 146b17f35 FUN_146b17f35 body=135 status=ok
// SIG undefined FUN_146b17f35(void)

undefined8 FUN_146b17f35(undefined8 param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = SUB84((double)param_2,0);
  iVar1 = _finite((double)param_2);
  if (iVar1 == 0) {
    FUN_1400b22c2(param_1,&DAT_149dfc116);
  }
  else if (ABS(param_2) <= 1e+15) {
    FUN_1406112c4(param_1,uVar2,1);
  }
  else {
    FUN_140002266(param_1,L"%.9e",uVar2);
  }
  return param_1;
}



// FUNCTION 146b17fbc FUN_146b17fbc body=34 status=ok
// SIG undefined FUN_146b17fbc(void)

void FUN_146b17fbc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149f27400;
  return;
}



// FUNCTION 146b17fde FUN_146b17fde body=36 status=ok
// SIG undefined FUN_146b17fde(void)

undefined8 FUN_146b17fde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146b1801e FUN_146b1801e body=93 status=ok
// SIG undefined FUN_146b1801e(void)

void FUN_146b1801e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f27570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b1807c FUN_146b1807c body=123 status=ok
// SIG undefined FUN_146b1807c(void)

void FUN_146b1807c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_149f27570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b18104 FUN_146b18104 body=21 status=ok
// SIG undefined FUN_146b18104(void)

undefined8 FUN_146b18104(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b1811a FUN_146b1811a body=158 status=ok
// SIG undefined FUN_146b1811a(void)

undefined8 * FUN_146b1811a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f27600;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1b),4000);
  return param_1;
}



// FUNCTION 146b181b8 FUN_146b181b8 body=9 status=ok
// SIG undefined FUN_146b181b8(void)

void FUN_146b181b8(longlong param_1)

{
  FUN_146b18210(param_1 + 0x10);
  return;
}



// FUNCTION 146b181c2 FUN_146b181c2 body=34 status=ok
// SIG undefined FUN_146b181c2(void)

undefined8 FUN_146b181c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 146b181e4 FUN_146b181e4 body=43 status=ok
// SIG undefined FUN_146b181e4(void)

undefined8 FUN_146b181e4(undefined8 param_1,int param_2)

{
  FUN_146b18210();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 146b18210 FUN_146b18210 body=226 status=ok
// SIG undefined FUN_146b18210(void)

void FUN_146b18210(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f27600;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140731224(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_146b182f2(param_1 + 7);
  FUN_146b18477(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x000146b182e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b182f2 FUN_146b182f2 body=52 status=ok
// SIG undefined FUN_146b182f2(void)

void FUN_146b182f2(longlong *param_1)

{
  FUN_146b18326();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b18326 FUN_146b18326 body=336 status=ok
// SIG undefined FUN_146b18326(void)

void FUN_146b18326(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c;
      FUN_146b190c2(*(undefined8 *)(lVar2 + 0x10 + lVar3 * 0x28),
                    *(undefined4 *)(lVar2 + 0x18 + lVar3 * 0x28));
      if (*(longlong *)(lVar2 + 0x10 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b18477 FUN_146b18477 body=73 status=ok
// SIG undefined FUN_146b18477(void)

void FUN_146b18477(longlong param_1,int param_2)

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



// FUNCTION 146b184c0 FUN_146b184c0 body=322 status=ok
// SIG undefined FUN_146b184c0(void)

void FUN_146b184c0(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 146b18604 FUN_146b18604 body=284 status=ok
// SIG undefined FUN_146b18604(void)

void FUN_146b18604(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + (longlong)iStack_44 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b18722 FUN_146b18722 body=328 status=ok
// SIG undefined FUN_146b18722(void)

undefined4 *
FUN_146b18722(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14588ec7e(param_1,local_50);
  FUN_146b1886c(param_3,local_48);
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  iVar7 = *(int *)(local_48 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_48;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_68 = param_4;
  cVar2 = FUN_14588ebf0(param_1,uVar3,local_48,&local_54);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x1c) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1412a63d0(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1886c FUN_146b1886c body=99 status=ok
// SIG undefined FUN_146b1886c(void)

undefined8 * FUN_146b1886c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_2 + 2) = *puVar3;
  return param_2;
}



// FUNCTION 146b188cf FUN_146b188cf body=128 status=ok
// SIG undefined FUN_146b188cf(void)

undefined8 FUN_146b188cf(undefined8 param_1,double param_2)

{
  int iVar1;
  
  iVar1 = _finite(param_2);
  if (iVar1 == 0) {
    FUN_1400b22c2(param_1,&DAT_149dfc116);
  }
  else if (ABS(param_2) <= 999999986991104.0) {
    FUN_1406112c4(param_1,param_2,1);
  }
  else {
    FUN_140002266(param_1,L"%.9e",param_2);
  }
  return param_1;
}



// FUNCTION 146b18950 FUN_146b18950 body=51 status=ok
// SIG undefined FUN_146b18950(void)

void FUN_146b18950(undefined8 *param_1)

{
  FUN_146b18477(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_146b18984(param_1);
  return;
}



// FUNCTION 146b18984 FUN_146b18984 body=48 status=ok
// SIG undefined FUN_146b18984(void)

void FUN_146b18984(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 146b189be FUN_146b189be body=34 status=ok
// SIG undefined FUN_146b189be(void)

undefined8 FUN_146b189be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 146b189e0 FUN_146b189e0 body=43 status=ok
// SIG undefined FUN_146b189e0(void)

undefined8 FUN_146b189e0(undefined8 param_1,int param_2)

{
  FUN_146b18a0c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 146b18a0c FUN_146b18a0c body=95 status=ok
// SIG undefined FUN_146b18a0c(void)

void FUN_146b18a0c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f27670;
  FUN_146b17e4e(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[10];
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
                    /* WARNING: Could not recover jumptable at 0x000146b18a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b18a6c FUN_146b18a6c body=115 status=ok
// SIG undefined FUN_146b18a6c(void)

int FUN_146b18a6c(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x28) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x28) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x28) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146b18ae0 FUN_146b18ae0 body=132 status=ok
// SIG undefined FUN_146b18ae0(void)

void FUN_146b18ae0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b18b66 FUN_146b18b66 body=326 status=ok
// SIG undefined FUN_146b18b66(void)

undefined4 * FUN_146b18b66(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b18cae(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  *puVar2 = 0;
  local_40[6] = *(undefined4 *)(puVar2 + 1);
  local_40[7] = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_146b18d94(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[9] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[8] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146b18e86(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b18cae FUN_146b18cae body=230 status=ok
// SIG undefined FUN_146b18cae(void)

int * FUN_146b18cae(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 146b18d94 FUN_146b18d94 body=128 status=ok
// SIG undefined FUN_146b18d94(void)

undefined8 FUN_146b18d94(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_146b18a6c(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    FUN_146b190c2(*(undefined8 *)(puVar1 + 4),puVar1[6]);
    if (*(longlong *)(puVar1 + 4) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_146b18e14(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 146b18e14 FUN_146b18e14 body=114 status=ok
// SIG undefined FUN_146b18e14(void)

void FUN_146b18e14(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 146b18e86 FUN_146b18e86 body=443 status=ok
// SIG undefined FUN_146b18e86(void)

void FUN_146b18e86(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b19042 FUN_146b19042 body=88 status=ok
// SIG undefined FUN_146b19042(void)

void FUN_146b19042(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 146b1909a FUN_146b1909a body=40 status=ok
// SIG undefined FUN_146b1909a(void)

void FUN_146b1909a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 146b190c2 FUN_146b190c2 body=54 status=ok
// SIG undefined FUN_146b190c2(void)

void FUN_146b190c2(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146b190f8 FUN_146b190f8 body=350 status=ok
// SIG undefined FUN_146b190f8(void)

undefined4 * FUN_146b190f8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b19258(param_1,local_40);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_38 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_38 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_38 + 0xc) = uVar3;
  *(undefined4 *)(local_38 + 2) = uVar4;
  *(undefined4 *)((longlong)local_38 + 0x14) = uVar5;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar11 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar8 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar8) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar8 >> 4);
  local_58 = 0;
  cVar6 = FUN_146b1933e(param_1,uVar11,local_38);
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar8) {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_38 + 0x1c) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_146b19466(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b19258 FUN_146b19258 body=229 status=ok
// SIG undefined FUN_146b19258(void)

int * FUN_146b19258(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 146b1933e FUN_146b1933e body=157 status=ok
// SIG undefined FUN_146b1933e(void)

void FUN_146b1933e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_146b193dc((int)lVar4,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_146b193a9;
        }
        iVar8 = puVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_146b193a9:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 146b193dc FUN_146b193dc body=138 status=ok
// SIG undefined FUN_146b193dc(void)

void FUN_146b193dc(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146b19466 FUN_146b19466 body=476 status=ok
// SIG undefined FUN_146b19466(void)

void FUN_146b19466(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 146b19644 FUN_146b19644 body=154 status=ok
// SIG undefined FUN_146b19644(void)

undefined8 FUN_146b19644(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_146b196de(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b196de FUN_146b196de body=96 status=ok
// SIG undefined FUN_146b196de(void)

void FUN_146b196de(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_146b193dc(param_1,param_2,1);
  return;
}



// FUNCTION 146b1973e FUN_146b1973e body=132 status=ok
// SIG undefined FUN_146b1973e(void)

void FUN_146b1973e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b197c4 FUN_146b197c4 body=263 status=ok
// SIG undefined FUN_146b197c4(void)

void FUN_146b197c4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_146b18477(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 146b198cc FUN_146b198cc body=152 status=ok
// SIG undefined FUN_146b198cc(void)

void FUN_146b198cc(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1447addd0(param_2,0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((((*(int *)(lVar1 + lVar4 * 0x28) == *param_2) &&
             (*(int *)(lVar1 + 4 + lVar4 * 0x28) == param_2[1])) &&
            (*(int *)(lVar1 + 8 + lVar4 * 0x28) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4 * 0x28) == param_2[3])) {
          FUN_146b19964(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + lVar4 * 0x28 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146b19964 FUN_146b19964 body=87 status=ok
// SIG undefined FUN_146b19964(void)

void FUN_146b19964(longlong *param_1,int param_2)

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
  FUN_146b199bc();
  return;
}



// FUNCTION 146b199bc FUN_146b199bc body=73 status=ok
// SIG undefined FUN_146b199bc(void)

void FUN_146b199bc(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2;
  FUN_146b190c2(*(undefined8 *)(lVar1 + 0x10 + lVar2 * 0x28),
                *(undefined4 *)(lVar1 + 0x18 + lVar2 * 0x28));
  if (*(longlong *)(lVar1 + 0x10 + lVar2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_146b18e14(param_1,param_2);
  return;
}



// FUNCTION 146b19a06 FUN_146b19a06 body=148 status=ok
// SIG undefined FUN_146b19a06(void)

undefined8 FUN_146b19a06(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446ddc76(&local_38,"Analytics",1);
  uVar1 = FUN_144a52528();
  plVar2 = (longlong *)FUN_14493e38c(uVar1,local_38);
  local_48 = param_3;
  local_40 = param_4;
  (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_1,param_1 + 0x10);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b19a9c FUN_146b19a9c body=157 status=ok
// SIG undefined FUN_146b19a9c(void)

undefined8 FUN_146b19a9c(undefined8 param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  local_38 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"Analytics",L"ProviderModuleName",&local_28);
  puVar1 = local_28;
  if ((int)uStack_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar1,1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b19b3a FUN_146b19b3a body=34 status=ok
// SIG undefined FUN_146b19b3a(void)

undefined8 FUN_146b19b3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146b19b84 FUN_146b19b84 body=93 status=ok
// SIG undefined FUN_146b19b84(void)

void FUN_146b19b84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f27760;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f276f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b19be2 FUN_146b19be2 body=93 status=ok
// SIG undefined FUN_146b19be2(void)

void FUN_146b19be2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f27760;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f276f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b19c40 FUN_146b19c40 body=123 status=ok
// SIG undefined FUN_146b19c40(void)

void FUN_146b19c40(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f27760;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f276f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b19cbc FUN_146b19cbc body=27 status=ok
// SIG undefined FUN_146b19cbc(void)

undefined8 FUN_146b19cbc(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 146b19cd8 FUN_146b19cd8 body=87 status=ok
// SIG undefined FUN_146b19cd8(void)

undefined8 FUN_146b19cd8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18),local_20,param_2,param_3);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b19d36 FUN_146b19d36 body=29 status=ok
// SIG undefined FUN_146b19d36(void)

void FUN_146b19d36(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_149f27880;
  return;
}



// FUNCTION 146b19d54 FUN_146b19d54 body=36 status=ok
// SIG undefined FUN_146b19d54(void)

undefined8 FUN_146b19d54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146b19d94 FUN_146b19d94 body=93 status=ok
// SIG undefined FUN_146b19d94(void)

void FUN_146b19d94(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f27810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b19df2 FUN_146b19df2 body=123 status=ok
// SIG undefined FUN_146b19df2(void)

void FUN_146b19df2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_149f27810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b19e7a FUN_146b19e7a body=21 status=ok
// SIG undefined FUN_146b19e7a(void)

undefined8 FUN_146b19e7a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b19e90 FUN_146b19e90 body=34 status=ok
// SIG undefined FUN_146b19e90(void)

undefined8 FUN_146b19e90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146b19ebe FUN_146b19ebe body=56 status=ok
// SIG undefined FUN_146b19ebe(void)

void FUN_146b19ebe(longlong param_1)

{
  FUN_1458127ff(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  FUN_146b1a8cc(param_1 + 0x18);
  return;
}



// FUNCTION 146b19efe FUN_146b19efe body=470 status=ok
// SIG undefined FUN_146b19efe(void)

ulonglong FUN_146b19efe(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  char cVar1;
  int iVar2;
  ushort uVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined7 uVar8;
  int iVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_2 + 1);
  lVar6 = (longlong)local_48;
  _Src = (void *)*param_2;
  if (lVar6 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar6 * 2);
  }
  local_60 = 0xffffffff;
  local_68 = 1;
  iVar2 = FUN_1447ee042(param_2,&DAT_149e31048,1,1);
  if (-1 < iVar2) {
    iVar9 = local_48 + -1;
    if (local_48 == 0) {
      iVar9 = 0;
    }
    FUN_14496493a(&local_50,iVar2,iVar9 - iVar2,1);
  }
  if ((longlong)*(int *)(param_1 + 0x20) == 0) {
LAB_146b1a080:
    param_2 = (undefined8 *)0x0;
LAB_146b1a082:
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
      return (ulonglong)param_2 & 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  plVar12 = *(longlong **)(param_1 + 0x18);
  plVar7 = plVar12 + (longlong)*(int *)(param_1 + 0x20) * 4;
LAB_146b19fdf:
  psVar4 = (short *)*plVar12;
  uVar8 = (undefined7)((ulonglong)param_2 >> 8);
  if (*psVar4 == 0x2e) {
    iVar2 = (int)plVar12[1] + -1;
    if ((int)plVar12[1] == 0) {
      psVar4 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    cVar1 = FUN_144a38768(&local_50,psVar4,iVar2,1);
    if (cVar1 == '\0') goto LAB_146b1a013;
LAB_146b1a0c7:
    param_2 = (undefined8 *)CONCAT71(uVar8,1);
  }
  else {
LAB_146b1a013:
    if (local_48 != (int)plVar12[1]) {
      if ((int)plVar12[1] + local_48 == 1) goto LAB_146b1a0c7;
      goto LAB_146b1a073;
    }
    param_2 = (undefined8 *)CONCAT71(uVar8,1);
    if (1 < local_48) {
      lVar6 = 0;
      do {
        uVar3 = *(ushort *)((longlong)local_50 + lVar6);
        uVar5 = (ulonglong)uVar3;
        uVar10 = *(ushort *)(*plVar12 + lVar6);
        if (uVar3 == uVar10) {
          if (uVar3 == 0) break;
        }
        else {
          if (0x7f < (uVar10 | uVar3)) goto LAB_146b1a0cc;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar11 = (ulonglong)uVar10;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[uVar11]) goto LAB_146b1a0cc;
        }
        lVar6 = lVar6 + 2;
      } while( true );
    }
  }
  goto LAB_146b1a082;
LAB_146b1a0cc:
  if (uVar3 == uVar10) goto LAB_146b1a082;
LAB_146b1a073:
  plVar12 = plVar12 + 4;
  if (plVar12 == plVar7) goto LAB_146b1a080;
  goto LAB_146b19fdf;
}



// FUNCTION 146b1a0d6 FUN_146b1a0d6 body=1853 status=ok
// SIG undefined FUN_146b1a0d6(void)

void FUN_146b1a0d6(longlong param_1,longlong *param_2,longlong param_3)

{
  void *pvVar1;
  uint uVar2;
  ushort *puVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined2 *puVar8;
  int iVar9;
  ushort uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ushort uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  short *psVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  size_t _Size;
  bool bVar26;
  bool bVar27;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 *local_88;
  ulonglong uStack_80;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar23 = (int)param_2[1];
  uVar6 = (ulonglong)iVar23;
  local_a0 = param_2;
  if (1 < uVar6) {
    if (*(int *)(param_3 + 8) < 2) {
      uVar2 = *(uint *)(param_1 + 0x20);
      uVar6 = (ulonglong)(int)uVar2;
      if (uVar6 != 0) {
        plVar13 = *(longlong **)(param_1 + 0x18);
        if ((int)plVar13[1] == iVar23) {
          bVar27 = true;
          if (1 < iVar23) {
            lVar15 = 0;
            while( true ) {
              uVar10 = *(ushort *)(*plVar13 + lVar15);
              uVar7 = (uint)uVar10;
              uVar16 = *(ushort *)(*param_2 + lVar15);
              uVar18 = (uint)uVar16;
              if (uVar10 != uVar16) {
                if ((uVar16 | uVar10) < 0x80) {
                  uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar10];
                  uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar16];
                  if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar16]) goto LAB_146b1a19a;
                }
                iVar23 = uVar7 - uVar18;
                goto LAB_146b1a6d3;
              }
              if (uVar10 == 0) break;
LAB_146b1a19a:
              lVar15 = lVar15 + 2;
            }
            iVar23 = 0;
LAB_146b1a6d3:
            bVar27 = iVar23 == 0;
          }
        }
        else {
          bVar27 = (int)plVar13[1] + iVar23 == 1;
        }
        iVar23 = 0;
        uVar12 = 0;
        local_98 = param_1;
LAB_146b1a5a8:
        iVar19 = (int)uVar12;
        uVar12 = (ulonglong)(iVar19 + 1U);
        if ((int)(iVar19 + 1U) < (int)uVar2) {
          uVar12 = (longlong)iVar19 + 1;
          iVar9 = (int)local_a0[1];
          bVar4 = true;
LAB_146b1a5c9:
          if ((int)plVar13[uVar12 * 4 + 1] != iVar9) {
            bVar26 = (int)plVar13[uVar12 * 4 + 1] + iVar9 == 1;
            goto LAB_146b1a62b;
          }
          if (1 < iVar9) {
            lVar15 = 0;
            do {
              uVar10 = *(ushort *)(plVar13[uVar12 * 4] + lVar15);
              uVar16 = *(ushort *)(*local_a0 + lVar15);
              if (uVar10 == uVar16) {
                if (uVar10 == 0) goto LAB_146b1a64d;
              }
              else {
                if (0x7f < (uVar16 | uVar10)) {
                  iVar17 = (uint)uVar10 - (uint)uVar16;
                  goto LAB_146b1a650;
                }
                if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[(uint)uVar16]) {
                  iVar17 = (uint)(byte)(&DAT_149e05da0)[uVar10] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar16];
                  goto LAB_146b1a650;
                }
              }
              lVar15 = lVar15 + 2;
            } while( true );
          }
          if (bVar27) goto LAB_146b1a638;
          iVar9 = (int)uVar12 - iVar19;
          goto LAB_146b1a68f;
        }
        bVar4 = false;
        goto LAB_146b1a657;
      }
    }
    else {
      plVar13 = (longlong *)(param_1 + 0x18);
      uVar2 = *(uint *)(param_1 + 0x20);
      uVar12 = (ulonglong)(int)uVar2;
      if (0 < (longlong)uVar12) {
        lVar15 = *plVar13;
        puVar3 = (ushort *)*param_2;
        uVar24 = 0;
LAB_146b1a1f8:
        lVar25 = uVar24 * 0x20;
        iVar19 = *(int *)(lVar15 + 8 + lVar25);
        if (iVar19 == iVar23) {
          local_98 = param_1;
          if (1 < iVar23) {
            psVar22 = *(short **)(lVar15 + lVar25);
            lVar20 = 0;
            do {
              uVar10 = *(ushort *)((longlong)psVar22 + lVar20);
              uVar11 = (ulonglong)uVar10;
              uVar16 = *(ushort *)((longlong)puVar3 + lVar20);
              if (uVar10 == uVar16) {
                if (uVar10 == 0) break;
              }
              else {
                if (0x7f < (uVar16 | uVar10)) goto LAB_146b1a7c8;
                uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                uVar21 = (ulonglong)uVar16;
                uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
                if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar21]) goto LAB_146b1a7c8;
              }
              lVar20 = lVar20 + 2;
            } while( true );
          }
        }
        else {
          local_98 = param_1;
          if (iVar23 + iVar19 != 1) {
            psVar22 = *(short **)(lVar15 + lVar25);
            goto LAB_146b1a330;
          }
        }
        goto LAB_146b1a453;
      }
LAB_146b1a3e5:
      *(uint *)(param_1 + 0x20) = uVar2 + 1;
      local_98 = param_1;
      if (*(uint *)(param_1 + 0x24) < uVar2 + 1) {
        FUN_146b1a8fc(plVar13,uVar2);
      }
      lVar15 = *plVar13;
      lVar25 = uVar12 * 0x20;
      puVar14 = (undefined8 *)(lVar15 + lVar25);
      *(undefined8 *)(lVar15 + lVar25) = 0;
      iVar23 = (int)local_a0[1];
      pvVar1 = (void *)*local_a0;
      *(int *)(lVar15 + 8 + lVar25) = iVar23;
      if ((longlong)iVar23 == 0) {
        *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar14,iVar23,0);
        memcpy((void *)*puVar14,pvVar1,(longlong)iVar23 * 2);
      }
      puVar14[2] = 0;
      puVar14[3] = 0;
      uVar24 = (ulonglong)uVar2;
LAB_146b1a453:
      lVar15 = *plVar13 + (longlong)(int)uVar24 * 0x20;
      plVar13 = (longlong *)(lVar15 + 0x10);
      *(undefined4 *)(lVar15 + 0x18) = 0;
      if (*(int *)(lVar15 + 0x1c) < 0) {
        FUN_146b1a982(plVar13);
      }
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      FUN_1403de9f2(param_3,&local_88,&DAT_149e06120,1);
      if ((longlong)(int)uStack_80 == 0) {
        uVar6 = 0;
      }
      else {
        lVar25 = (longlong)(int)uStack_80 << 4;
        puVar14 = local_88;
        do {
          iVar23 = FUN_14607a29e(puVar14);
          if (iVar23 == 0x20) {
            local_50 = 0x2000000020;
            iVar23 = *(int *)(puVar14 + 1);
            iVar19 = iVar23 + -1;
            if (iVar23 == 0) {
              iVar19 = 0;
            }
            puVar8 = &DAT_149dfb77a;
            if (iVar23 != 0) {
              puVar8 = (undefined2 *)*puVar14;
            }
            cVar5 = FUN_1415cf884(puVar8,iVar19,local_70,0);
            if (cVar5 != '\0') {
              iVar23 = *(int *)(lVar15 + 0x18);
              *(uint *)(lVar15 + 0x18) = iVar23 + 1U;
              if (*(uint *)(lVar15 + 0x1c) < iVar23 + 1U) {
                FUN_14172385c(plVar13,iVar23);
              }
              pvVar1 = (void *)(*plVar13 + (longlong)iVar23 * 0x28);
              _Size = (size_t)(int)local_50;
              *(int *)((longlong)pvVar1 + 0x20) = (int)local_50;
              if (_Size == 0) {
                *(undefined4 *)((longlong)pvVar1 + 0x24) = 0x20;
              }
              else {
                FUN_142915928(pvVar1);
                memcpy(pvVar1,local_70,_Size);
              }
            }
          }
          puVar14 = puVar14 + 2;
          lVar25 = lVar25 + -0x10;
        } while (lVar25 != 0);
        uVar6 = uStack_80 & 0xffffffff;
      }
      FUN_1447a1747(local_88,uVar6);
      if (local_88 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_146b1a10a:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146b1a64d:
  iVar17 = 0;
LAB_146b1a650:
  bVar26 = iVar17 == 0;
LAB_146b1a62b:
  if ((bool)(bVar26 ^ bVar27)) goto LAB_146b1a657;
LAB_146b1a638:
  uVar12 = uVar12 + 1;
  bVar4 = (longlong)uVar12 < (longlong)uVar6;
  if (uVar12 == uVar6) goto LAB_146b1a681;
  goto LAB_146b1a5c9;
LAB_146b1a681:
  uVar12 = (ulonglong)uVar2;
LAB_146b1a657:
  iVar9 = (int)uVar12 - iVar19;
  if (bVar27) {
    FUN_1458127ff(plVar13 + (longlong)iVar19 * 4,iVar9);
    bVar27 = false;
  }
  else {
LAB_146b1a68f:
    if (iVar23 != iVar19) {
      memmove(plVar13 + (longlong)iVar23 * 4,plVar13 + (longlong)iVar19 * 4,(longlong)iVar9 << 5);
    }
    iVar23 = iVar23 + iVar9;
    bVar27 = true;
  }
  if (!bVar4) goto LAB_146b1a6c3;
  goto LAB_146b1a5a8;
LAB_146b1a6c3:
  *(int *)(local_98 + 0x20) = iVar23;
  goto LAB_146b1a10a;
LAB_146b1a7c8:
  if (uVar10 == uVar16) goto LAB_146b1a453;
LAB_146b1a330:
  uVar10 = *puVar3;
  if ((*psVar22 == 0x2e) == (uVar10 == 0x2e)) {
    if (uVar10 != 0x2e) {
      if (iVar19 == 0) {
        psVar22 = &DAT_149dfb77a;
      }
      lVar20 = 0;
      do {
        uVar7 = (uint)uVar10;
        uVar16 = *(ushort *)((longlong)psVar22 + lVar20);
        uVar18 = (uint)uVar16;
        if (uVar10 == uVar16) {
          if (uVar10 == 0) goto LAB_146b1a358;
        }
        else {
          if (0x7f < (uVar16 | uVar10)) goto LAB_146b1a3d4;
          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar10];
          uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar16];
          if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar16]) goto LAB_146b1a3d4;
        }
        uVar10 = *(ushort *)((longlong)puVar3 + lVar20 + 2);
        lVar20 = lVar20 + 2;
      } while( true );
    }
    if (puVar3 + (uVar6 - 1) == puVar3) {
      uVar11 = 0;
    }
    else {
      lVar20 = 0;
      uVar11 = 0;
      do {
        uVar11 = uVar11 + (*(short *)((longlong)puVar3 + lVar20) == 0x2e);
        lVar20 = lVar20 + 2;
      } while (uVar6 * 2 + -2 != lVar20);
    }
    if (psVar22 + (longlong)iVar19 + -1 == psVar22 || iVar19 == 0) {
      uVar21 = 0;
    }
    else {
      lVar20 = 0;
      uVar21 = 0;
      do {
        uVar21 = uVar21 + (*(short *)((longlong)psVar22 + lVar20) == 0x2e);
        lVar20 = lVar20 + 2;
      } while ((longlong)iVar19 * 2 + -2 != lVar20);
    }
    local_90 = plVar13;
    if (uVar11 == uVar21) {
      if (iVar19 == 0) {
        psVar22 = &DAT_149dfb77a;
      }
      uVar10 = 0x2e;
      lVar20 = 0;
      do {
        uVar16 = *(ushort *)((longlong)psVar22 + lVar20);
        if (uVar10 == uVar16) {
          if (uVar10 == 0) goto LAB_146b1a358;
        }
        else {
          if (0x7f < (uVar16 | uVar10)) {
            iVar19 = (uint)uVar10 - (uint)uVar16;
            goto LAB_146b1a3d7;
          }
          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar10];
          uVar18 = (uint)(byte)(&DAT_149e05da0)[(uint)uVar16];
          if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[(uint)uVar16]) goto LAB_146b1a3d4;
        }
        uVar10 = *(ushort *)((longlong)puVar3 + lVar20 + 2);
        lVar20 = lVar20 + 2;
      } while( true );
    }
    if (uVar21 < uVar11) goto LAB_146b1a734;
  }
  else if (*psVar22 == 0x2e) {
LAB_146b1a734:
    *(uint *)(param_1 + 0x20) = uVar2 + 1;
    local_98 = param_1;
    if (*(uint *)(param_1 + 0x24) == uVar2) {
      FUN_146b1a8fc(plVar13,uVar2);
      lVar15 = *plVar13;
    }
    memmove((void *)(lVar15 + lVar25 + 0x20),(void *)(lVar15 + lVar25),
            (ulonglong)(uVar2 - (int)uVar24) << 5);
    lVar15 = *plVar13;
    puVar14 = (undefined8 *)(lVar15 + lVar25);
    *(undefined8 *)(lVar15 + lVar25) = 0;
    iVar23 = (int)local_a0[1];
    pvVar1 = (void *)*local_a0;
    *(int *)(lVar15 + 8 + lVar25) = iVar23;
    if ((longlong)iVar23 == 0) {
      *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar14,iVar23,0);
      memcpy((void *)*puVar14,pvVar1,(longlong)iVar23 * 2);
    }
    puVar14[2] = 0;
    puVar14[3] = 0;
    goto LAB_146b1a453;
  }
LAB_146b1a358:
  uVar24 = uVar24 + 1;
  if (uVar24 == uVar12) goto LAB_146b1a3e5;
  goto LAB_146b1a1f8;
LAB_146b1a3d4:
  iVar19 = uVar7 - uVar18;
LAB_146b1a3d7:
  if (iVar19 < 0) goto LAB_146b1a734;
  goto LAB_146b1a358;
}



// FUNCTION 146b1a814 FUN_146b1a814 body=76 status=ok
// SIG undefined FUN_146b1a814(void)

void FUN_146b1a814(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b1a870 FUN_146b1a870 body=43 status=ok
// SIG undefined FUN_146b1a870(void)

undefined8 FUN_146b1a870(undefined8 param_1,int param_2)

{
  FUN_1458127b8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146b1a89c FUN_146b1a89c body=47 status=ok
// SIG undefined FUN_146b1a89c(void)

void FUN_146b1a89c(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b1a8cc FUN_146b1a8cc body=48 status=ok
// SIG undefined FUN_146b1a8cc(void)

void FUN_146b1a8cc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 146b1a8fc FUN_146b1a8fc body=132 status=ok
// SIG undefined FUN_146b1a8fc(void)

void FUN_146b1a8fc(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b1a982 FUN_146b1a982 body=48 status=ok
// SIG undefined FUN_146b1a982(void)

void FUN_146b1a982(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,4);
  }
  return;
}



// FUNCTION 146b1a9b2 FUN_146b1a9b2 body=93 status=ok
// SIG undefined FUN_146b1a9b2(void)

void FUN_146b1a9b2(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0x20;
    if (0x20 < param_2) {
      iVar1 = FUN_144a3809e((longlong)(int)param_2,0);
      iVar2 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar2 = iVar1;
      }
    }
  }
  if (param_3 < iVar2) {
    FUN_145cc9052(param_1,0,iVar2,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 146b1aa10 FUN_146b1aa10 body=102 status=ok
// SIG undefined FUN_146b1aa10(void)

void FUN_146b1aa10(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    iVar4 = 0x14;
    if (0x14 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x14 < *(uint *)(param_1 + 0x24)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      iVar2 = FUN_144a3809e(lVar3,0);
      iVar4 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)(param_1 + 0x24) = iVar4;
    FUN_146b1aa78(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146b1aa78 FUN_146b1aa78 body=124 status=ok
// SIG undefined FUN_146b1aa78(void)

void FUN_146b1aa78(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 0x15) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,1);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,1);
  return;
}



// FUNCTION 146b1aaf4 FUN_146b1aaf4 body=335 status=ok
// SIG undefined FUN_146b1aaf4(void)

void * FUN_146b1aaf4(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x28);
  pvVar3 = *(void **)((longlong)param_2 + 0x20);
  *(int *)((longlong)param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x20;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = param_2;
    }
    FUN_146b1a9b2(param_1,iVar1,0);
    pvVar2 = *(void **)((longlong)param_1 + 0x20);
    if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
      pvVar2 = param_1;
    }
    memcpy(pvVar2,pvVar3,(longlong)iVar1);
  }
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x50);
  pvVar3 = *(void **)((longlong)param_2 + 0x48);
  *(int *)((longlong)param_1 + 0x50) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0x14;
  }
  else {
    pvVar2 = (void *)((longlong)param_2 + 0x30);
    if (pvVar3 != (void *)0x0) {
      pvVar2 = pvVar3;
    }
    FUN_146b1acd4((void *)((longlong)param_1 + 0x30),iVar1);
    pvVar3 = *(void **)((longlong)param_1 + 0x48);
    if (*(void **)((longlong)param_1 + 0x48) == (void *)0x0) {
      pvVar3 = (void *)((longlong)param_1 + 0x30);
    }
    memcpy(pvVar3,pvVar2,(longlong)iVar1);
  }
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x60);
  pvVar3 = *(void **)((longlong)param_2 + 0x58);
  *(int *)((longlong)param_1 + 0x60) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)((longlong)param_1 + 0x58),iVar1,0);
    memcpy(*(void **)((longlong)param_1 + 0x58),pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x70);
  pvVar3 = *(void **)((longlong)param_2 + 0x68);
  *(int *)((longlong)param_1 + 0x70) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)((longlong)param_1 + 0x68),iVar1,0);
    memcpy(*(void **)((longlong)param_1 + 0x68),pvVar3,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 146b1ac44 FUN_146b1ac44 body=143 status=ok
// SIG undefined FUN_146b1ac44(void)

void FUN_146b1ac44(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b1acd4 FUN_146b1acd4 body=82 status=ok
// SIG undefined FUN_146b1acd4(void)

void FUN_146b1acd4(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0x15) {
    iVar1 = 0x14;
  }
  else {
    iVar2 = 0;
    iVar1 = FUN_144a3809e((longlong)(int)param_2,0);
    if (iVar1 < (int)param_2) {
      iVar1 = 0x7fffffff;
    }
    else if (iVar1 < 1) goto LAB_146b1acfd;
  }
  iVar2 = iVar1;
  FUN_146b1aa78(param_1,0,iVar2);
LAB_146b1acfd:
  *(int *)(param_1 + 0x24) = iVar2;
  return;
}



// FUNCTION 146b1ad26 FUN_146b1ad26 body=48 status=ok
// SIG undefined FUN_146b1ad26(void)

void FUN_146b1ad26(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146b1ad56 FUN_146b1ad56 body=36 status=ok
// SIG undefined FUN_146b1ad56(void)

undefined8 FUN_146b1ad56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146b1ad96 FUN_146b1ad96 body=93 status=ok
// SIG undefined FUN_146b1ad96(void)

void FUN_146b1ad96(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f27c10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b1adf4 FUN_146b1adf4 body=126 status=ok
// SIG undefined FUN_146b1adf4(void)

void FUN_146b1adf4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f27c10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b1ae63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b1ae72 FUN_146b1ae72 body=21 status=ok
// SIG undefined FUN_146b1ae72(void)

undefined8 FUN_146b1ae72(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b1ae88 FUN_146b1ae88 body=109 status=ok
// SIG undefined FUN_146b1ae88(void)

undefined8 FUN_146b1ae88(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"Content-Type");
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1af0c FUN_146b1af0c body=135 status=ok
// SIG undefined FUN_146b1af0c(void)

undefined8 * FUN_146b1af0c(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c990bc0) {
    FUN_144b3d300(&DAT_14c990bc0);
    if (DAT_14c990bc0 == -1) {
      DAT_14c990bb0 = 0;
      uRam000000014c990bb8 = 0;
      atexit((_func_5014 *)&LAB_142915c75);
      _Init_thread_footer(&DAT_14c990bc0);
    }
  }
  if (*(longlong **)(param_1 + 0x218) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b1af49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x218) + 0x10))();
    return puVar1;
  }
  return &DAT_14c990bb0;
}



// FUNCTION 146b1af94 FUN_146b1af94 body=86 status=ok
// SIG undefined FUN_146b1af94(void)

void FUN_146b1af94(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &local_28;
  local_28 = param_2;
  local_18 = param_3;
  FUN_146b21a24(param_1 + 0x220,local_c,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1afec FUN_146b1afec body=159 status=ok
// SIG undefined FUN_146b1afec(void)

void FUN_146b1afec(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  size_t _Size;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  _Size = (size_t)local_30;
  _Src = (void *)*param_2;
  if (_Size == 0) {
    local_2c = 0;
  }
  else {
    FUN_1447a127e(&local_38,local_30,0);
    memcpy(local_38,_Src,_Size);
  }
  (**(code **)(*param_1 + 0x80))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1b08c FUN_146b1b08c body=30 status=ok
// SIG undefined FUN_146b1b08c(void)

void FUN_146b1b08c(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142915f92();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x2b4) = 0;
  }
  return;
}



// FUNCTION 146b1b0aa FUN_146b1b0aa body=178 status=ok
// SIG undefined FUN_146b1b0aa(void)

void FUN_146b1b0aa(LPCRITICAL_SECTION param_1,undefined8 *param_2,undefined8 param_3,
                  undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection(param_1);
  if ((param_1[1].LockCount != 0) &&
     (p_Var3 = param_1[1].DebugInfo, p_Var3 != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    local_38 = *param_2;
    local_30 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (**(code **)(*(longlong *)p_Var3 + 0x60))(p_Var3,&local_38,param_3,param_4);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1b15e FUN_146b1b15e body=101 status=ok
// SIG undefined FUN_146b1b15e(void)

ulonglong FUN_146b1b15e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
  plVar1 = *(longlong **)(param_1 + 0x1d8);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x170))(plVar1,param_2,param_3);
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                     (*(byte *)(*(longlong *)(param_1 + 0x1d8) + 0x29) & 2) == 0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
  return uVar2 & 0xffffffff;
}



// FUNCTION 146b1b1c4 FUN_146b1b1c4 body=255 status=ok
// SIG undefined FUN_146b1b1c4(void)

void FUN_146b1b1c4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  if ((*(byte *)(param_1 + 0x2a8) & 1) == 0) {
    lVar8 = FUN_141054386();
    lVar8 = *(longlong *)(lVar8 + 0x20);
    cVar6 = FUN_146b1b2c4(lVar8,param_1);
    if (cVar6 == '\0') {
      FUN_146b1b324(param_1);
      return;
    }
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_146b1b29d:
                    /* WARNING: Could not recover jumptable at 0x000146b1b2b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar8 + 0x28) + 0x48))(*(longlong **)(lVar8 + 0x28),0);
      return;
    }
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_146b1b29d;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    uVar4 = *(undefined8 *)(param_1 + 8);
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
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(lVar8 + 0x28) + 0x48))(*(longlong **)(lVar8 + 0x28),uVar4);
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
                    /* WARNING: Could not recover jumptable at 0x000146b1b299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b1b2c4 FUN_146b1b2c4 body=96 status=ok
// SIG undefined FUN_146b1b2c4(void)

ulonglong FUN_146b1b2c4(ulonglong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar3;
  bool bVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x3e0);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)(param_1 + 0x20);
  if ((longlong)*piVar1 == 0) {
    param_1 = 0;
  }
  else {
    plVar2 = (longlong *)(param_1 + 0x18);
    lVar3 = 0;
    do {
      bVar4 = *(longlong *)(*plVar2 + lVar3) == param_2;
      param_1 = CONCAT71((int7)(param_1 >> 8),bVar4);
      if (bVar4) break;
      bVar4 = (longlong)*piVar1 * 0x10 + -0x10 != lVar3;
      lVar3 = lVar3 + 0x10;
    } while (bVar4);
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_1 & 0xffffffff;
}



// FUNCTION 146b1b324 FUN_146b1b324 body=548 status=ok
// SIG undefined FUN_146b1b324(void)

void FUN_146b1b324(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined ***pppuVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  longlong *plStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar6 = FUN_144a61b4f();
  if (cVar6 == '\0') {
    if (*(char *)(param_1 + 0x135) == '\x01') goto LAB_146b1b3ae;
    lVar8 = FUN_141054386();
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    plStack_38 = *(longlong **)(param_1 + 0x10);
    if (plStack_38 == (longlong *)0x0) {
LAB_146b1b4d2:
      local_40 = 0;
      plStack_38 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar7 = (int)plStack_38[1];
      do {
        if (iVar7 == 0) goto LAB_146b1b4d2;
        LOCK();
        iVar5 = (int)plStack_38[1];
        bVar10 = iVar7 == iVar5;
        if (bVar10) {
          *(int *)(plStack_38 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_40 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
      UNLOCK();
      bVar10 = false;
      LOCK();
      *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
      UNLOCK();
    }
    plVar4 = plStack_38;
    local_48 = &PTR_LAB_149f2a710;
    local_58 = (undefined ***)0x0;
    local_68[0] = &LAB_14291fa3e;
    FUN_146b1c66e(uVar3,local_68,0);
  }
  else {
    if (*(char *)(param_1 + 0x135) == '\0') {
LAB_146b1b3ae:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    lVar8 = FUN_141054386();
    lVar8 = *(longlong *)(lVar8 + 0x20);
    plStack_38 = *(longlong **)(param_1 + 0x10);
    if (plStack_38 == (longlong *)0x0) {
LAB_146b1b3d4:
      local_40 = 0;
      plStack_38 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar7 = (int)plStack_38[1];
      do {
        if (iVar7 == 0) goto LAB_146b1b3d4;
        LOCK();
        iVar5 = (int)plStack_38[1];
        bVar10 = iVar7 == iVar5;
        if (bVar10) {
          *(int *)(plStack_38 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_40 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
      UNLOCK();
      bVar10 = false;
      LOCK();
      *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
      UNLOCK();
    }
    plVar4 = plStack_38;
    local_48 = &PTR_LAB_149f2a6f0;
    local_58 = (undefined ***)0x0;
    local_68[0] = &LAB_14291f9a0;
    plVar2 = *(longlong **)(lVar8 + 0x28);
    (**(code **)(*plVar2 + 0x60))(plVar2,local_78,local_68,0);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar9 = &local_48;
    if (local_58 != (undefined ***)0x0) {
      pppuVar9 = local_58;
    }
    (*(code *)(*pppuVar9)[2])(pppuVar9);
  }
  if (!bVar10) {
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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b1b560 FUN_146b1b560 body=237 status=ok
// SIG undefined FUN_146b1b560(void)

void FUN_146b1b560(LPCRITICAL_SECTION param_1,undefined8 *param_2,undefined8 *param_3,
                  undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  if ((param_1[1].LockCount != 0) &&
     (p_Var3 = param_1[1].DebugInfo, p_Var3 != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    local_38 = *param_3;
    local_30 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    local_48 = *param_2;
    local_40 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (**(code **)(*(longlong *)p_Var3 + 0x60))(p_Var3,&local_48,&local_38,param_4);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1b64e FUN_146b1b64e body=107 status=ok
// SIG undefined FUN_146b1b64e(void)

void FUN_146b1b64e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  LOCK();
  *(undefined1 *)(param_1 + 0x2a8) = 1;
  UNLOCK();
  lVar3 = *(longlong *)(param_1 + 0x1c8);
  plVar4 = *(longlong **)(param_1 + 0x1d0);
  if (plVar4 == (longlong *)0x0) {
    *(undefined4 *)(lVar3 + 0xb4) = 1;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined4 *)(lVar3 + 0xb4) = 1;
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
                    /* WARNING: Could not recover jumptable at 0x000146b1b6a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b1b6ba FUN_146b1b6ba body=109 status=ok
// SIG undefined FUN_146b1b6ba(void)

undefined8 FUN_146b1b6ba(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"Content-Type");
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1b728 FUN_146b1b728 body=36 status=ok
// SIG undefined FUN_146b1b728(void)

void FUN_146b1b728(longlong param_1)

{
  FUN_14291af4c(param_1,0);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))();
  FUN_14154b5d6();
  return;
}



// FUNCTION 146b1b754 FUN_146b1b754 body=53 status=ok
// SIG undefined FUN_146b1b754(void)

void FUN_146b1b754(longlong param_1)

{
  char cVar1;
  
  FUN_142919612();
  cVar1 = FUN_146811c5a();
  if (cVar1 != '\0') {
    cVar1 = FUN_146811c5e();
    if (cVar1 != '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b1b785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))();
  return;
}



// FUNCTION 146b1b78c FUN_146b1b78c body=40 status=ok
// SIG undefined FUN_146b1b78c(void)

void FUN_146b1b78c(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_146811c5e();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000146b1b7a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))();
    return;
  }
  return;
}



// FUNCTION 146b1b7d0 FUN_146b1b7d0 body=232 status=ok
// SIG undefined FUN_146b1b7d0(void)

void FUN_146b1b7d0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = *(ulonglong *)(param_2 + 0x278);
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
    uVar2 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x118;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x120);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x128) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar4 * 0x18);
        if (*puVar1 == uVar5) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffff7) != 0) {
            FUN_144bba090(DAT_14c990be8,uVar5);
            FUN_1411e09ac((longlong *)(param_1 + 0xe0),uVar5);
            uVar5 = *(ulonglong *)(param_2 + 0x278);
          }
          break;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
    }
  }
  FUN_144b46fc0(uVar5,0x2774,0);
  return;
}



// FUNCTION 146b1b8c8 FUN_146b1b8c8 body=13 status=ok
// SIG undefined FUN_146b1b8c8(void)

void FUN_146b1b8c8(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
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



// FUNCTION 146b1b8d6 FUN_146b1b8d6 body=244 status=ok
// SIG undefined FUN_146b1b8d6(void)

undefined8 FUN_146b1b8d6(longlong param_1)

{
  byte bVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 extraout_var_00;
  uint7 uVar5;
  undefined7 uVar6;
  longlong lVar4;
  undefined7 extraout_var;
  bool bVar7;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  LOCK();
  bVar7 = *(char *)(param_1 + 0x54f) == '\0';
  if (bVar7) {
    *(char *)(param_1 + 0x54f) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    FUN_1447d2058(param_1 + 0x54f);
  }
  QueryPerformanceCounter(&local_28);
  *(longlong *)(param_1 + 0x540) =
       (longlong)(((double)local_28.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0);
  DVar2 = GetCurrentThreadId();
  LOCK();
  *(DWORD *)(param_1 + 0xe0) = DVar2;
  UNLOCK();
  DVar3 = GetCurrentThreadId();
  LOCK();
  DVar2 = *(DWORD *)(param_1 + 0x548);
  *(DWORD *)(param_1 + 0x548) = DVar3;
  UNLOCK();
  uVar5 = (uint7)(CONCAT44(extraout_var_00,DVar2) >> 8);
  lVar4 = CONCAT71(uVar5,1);
  LOCK();
  bVar7 = *(char *)(param_1 + 0x54f) == '\x01';
  if (bVar7) {
    *(char *)(param_1 + 0x54f) = '\0';
  }
  else {
    lVar4 = (ulonglong)uVar5 << 8;
  }
  UNLOCK();
  if (!bVar7) {
    lVar4 = FUN_14008cdb0(param_1 + 0x54f);
  }
  uVar6 = (undefined7)((ulonglong)lVar4 >> 8);
  if ((*(byte *)(param_1 + 0x54e) & 1) != 0) {
    LOCK();
    bVar1 = *(byte *)(param_1 + 0x21);
    *(byte *)(param_1 + 0x21) = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      FUN_1415a93f6(param_1 + 0x21);
      uVar6 = extraout_var;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar6,1);
}



// FUNCTION 146b1b9cc FUN_146b1b9cc body=4 status=ok
// SIG undefined FUN_146b1b9cc(void)

undefined1 FUN_146b1b9cc(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



// FUNCTION 146b1b9d0 FUN_146b1b9d0 body=65 status=ok
// SIG undefined FUN_146b1b9d0(void)

void FUN_146b1b9d0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined2 *)(param_1 + 0x18) = 0x101;
  return;
}



// FUNCTION 146b1ba14 FUN_146b1ba14 body=55 status=ok
// SIG undefined FUN_146b1ba14(void)

void FUN_146b1ba14(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,8);
  *puVar2 = 0;
  puVar2[1] = param_2;
  LOCK();
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  *(undefined8 **)(param_1 + 0x30) = puVar2;
  UNLOCK();
  *puVar1 = puVar2;
  return;
}



// FUNCTION 146b1ba4c FUN_146b1ba4c body=188 status=ok
// SIG undefined FUN_146b1ba4c(void)

void FUN_146b1ba4c(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,8);
  *puVar2 = 0;
  puVar2[1] = param_2;
  LOCK();
  puVar1 = (undefined8 *)param_1[8];
  param_1[8] = (longlong)puVar2;
  UNLOCK();
  *puVar1 = puVar2;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0xa8))(param_1);
  if (plVar3 != (longlong *)0x0) {
    local_48 = (undefined ***)0x0;
    local_38 = &PTR_LAB_149f2a660;
    local_58[0] = FUN_14291f774;
    local_30 = param_1;
    (**(code **)(*plVar3 + 0x28))(plVar3,local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar4 = local_48;
      if (local_48 == (undefined ***)0x0) {
        pppuVar4 = &local_38;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1bb0a FUN_146b1bb0a body=55 status=ok
// SIG undefined FUN_146b1bb0a(void)

void FUN_146b1bb0a(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,8);
  *puVar2 = 0;
  puVar2[1] = param_2;
  LOCK();
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  *(undefined8 **)(param_1 + 0x40) = puVar2;
  UNLOCK();
  *puVar1 = puVar2;
  return;
}



// FUNCTION 146b1bb42 FUN_146b1bb42 body=152 status=ok
// SIG undefined FUN_146b1bb42(void)

void FUN_146b1bb42(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(param_1 + -8);
  QueryPerformanceCounter(&local_28);
  dVar2 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
  dVar3 = dVar2 - *(double *)(param_1 + 0x18);
  *(double *)(param_1 + 0x18) = dVar2;
  (**(code **)(*(longlong *)(param_1 + -8) + 0x78))
            (plVar1,CONCAT44((int)((ulonglong)dVar3 >> 0x20),(float)dVar3));
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0xb0))(plVar1);
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1bbdc FUN_146b1bbdc body=122 status=ok
// SIG undefined FUN_146b1bbdc(void)

void FUN_146b1bbdc(longlong param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_28);
  dVar1 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
  dVar2 = dVar1 - *(double *)(param_1 + 0x18);
  *(double *)(param_1 + 0x18) = dVar1;
  (**(code **)(*(longlong *)(param_1 + -8) + 0x78))
            (param_1 + -8,CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1bc58 FUN_146b1bc58 body=104 status=ok
// SIG undefined FUN_146b1bc58(void)

undefined8 FUN_146b1bc58(longlong *param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_20);
  param_1[4] = (longlong)((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0);
  (**(code **)(*param_1 + 0x58))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1bcda FUN_146b1bcda body=22 status=ok
// SIG undefined FUN_146b1bcda(void)

void FUN_146b1bcda(longlong param_1)

{
  FUN_144a787a6();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}



// FUNCTION 146b1bcf0 FUN_146b1bcf0 body=4 status=ok
// SIG undefined FUN_146b1bcf0(void)

undefined4 FUN_146b1bcf0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// FUNCTION 146b1bcf4 FUN_146b1bcf4 body=1115 status=ok
// SIG undefined FUN_146b1bcf4(void)

undefined8 FUN_146b1bcf4(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  char *pcVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_238 [44];
  int local_20c;
  char *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8 [32];
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [128];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  uVar5 = *(uint *)(param_2 + 1);
  lVar9 = *param_2;
  local_60 = 0;
  if (lVar9 == 0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    if ((int)uVar5 < 1) {
      bVar13 = false;
    }
    else {
      bVar13 = *(short *)(lVar9 + (ulonglong)(uVar5 - 1) * 2) == 0;
      if (bVar13) {
        uVar5 = uVar5 - 1;
      }
    }
    FUN_1446fe5a4(local_e0,lVar9,uVar5,bVar13);
    uVar5 = *(uint *)(param_2 + 1);
  }
  lVar9 = local_58;
  local_208 = (char *)0x0;
  uStack_200 = 0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar5);
  }
  if (uVar5 != 0) {
    FUN_1467af346(&local_208,uVar5);
  }
  if (0 < local_50) {
    iVar10 = 0;
    do {
      uVar3 = uStack_200;
      lVar11 = (longlong)iVar10;
      if (*(char *)(lVar9 + lVar11) == '%') {
        local_20c = 0;
        if ((iVar10 < local_50 + -1) && (*(char *)(lVar9 + 1 + lVar11) == 'u')) {
          if (local_50 + -6 < iVar10) goto LAB_146b1be04;
          bVar1 = *(byte *)(lVar9 + 2 + lVar11);
          iVar7 = bVar1 - 0x30;
          if (9 < (ushort)iVar7) {
            if ((ushort)(bVar1 - 0x61) < 6) {
              iVar7 = bVar1 - 0x57;
            }
            else {
              iVar7 = bVar1 - 0x37;
              if (5 < (ushort)(bVar1 - 0x41)) {
                iVar7 = 0;
              }
            }
          }
          bVar1 = *(byte *)(lVar9 + 3 + lVar11);
          iVar4 = bVar1 - 0x30;
          if (9 < (ushort)iVar4) {
            if ((ushort)(bVar1 - 0x61) < 6) {
              iVar4 = bVar1 - 0x57;
            }
            else {
              iVar4 = bVar1 - 0x37;
              if (5 < (ushort)(bVar1 - 0x41)) {
                iVar4 = 0;
              }
            }
          }
          bVar1 = *(byte *)(lVar9 + 4 + lVar11);
          iVar8 = bVar1 - 0x30;
          if (9 < (ushort)iVar8) {
            if ((ushort)(bVar1 - 0x61) < 6) {
              iVar8 = bVar1 - 0x57;
            }
            else {
              iVar8 = bVar1 - 0x37;
              if (5 < (ushort)(bVar1 - 0x41)) {
                iVar8 = 0;
              }
            }
          }
          bVar1 = *(byte *)(lVar9 + 5 + lVar11);
          local_20c = bVar1 - 0x30;
          if (9 < (ushort)local_20c) {
            if ((ushort)(bVar1 - 0x61) < 6) {
              local_20c = bVar1 - 0x57;
            }
            else {
              local_20c = bVar1 - 0x37;
              if (5 < (ushort)(bVar1 - 0x41)) {
                local_20c = 0;
              }
            }
          }
          local_20c = local_20c + iVar8 * 0x10 + iVar4 * 0x100 + iVar7 * 0x1000;
          local_1f8[0] = 0;
          iVar7 = FUN_1467b8895(local_1f8,8,&local_20c,1);
          uVar3 = uStack_200;
          uVar5 = iVar7 - (int)local_1f8;
          iVar7 = (int)uStack_200;
          lVar11 = (longlong)(int)uStack_200;
          uStack_200 = CONCAT44(uStack_200._4_4_,(int)uStack_200 + uVar5);
          if (uStack_200._4_4_ - iVar7 < uVar5) {
            FUN_140067470(&local_208,uVar3 & 0xffffffff);
LAB_146b1bffa:
            memcpy(local_208 + lVar11,local_1f8,(longlong)(int)uVar5);
          }
          else if (uVar5 != 0) goto LAB_146b1bffa;
          iVar10 = iVar10 + 6;
        }
        else if (local_50 + -3 < iVar10) {
          iVar10 = iVar10 + 1;
        }
        else {
          bVar1 = *(byte *)(lVar9 + 1 + lVar11);
          iVar7 = bVar1 - 0x30;
          if (9 < (ushort)iVar7) {
            if ((ushort)(bVar1 - 0x61) < 6) {
              iVar7 = bVar1 - 0x57;
            }
            else {
              iVar7 = bVar1 - 0x37;
              if (5 < (ushort)(bVar1 - 0x41)) {
                iVar7 = 0;
              }
            }
          }
          bVar1 = *(byte *)(lVar9 + 2 + lVar11);
          iVar4 = bVar1 - 0x30;
          if (9 < (ushort)iVar4) {
            if ((ushort)(bVar1 - 0x61) < 6) {
              iVar4 = bVar1 - 0x57;
            }
            else {
              iVar4 = bVar1 - 0x37;
              if (5 < (ushort)(bVar1 - 0x41)) {
                iVar4 = 0;
              }
            }
          }
          iVar4 = iVar4 + iVar7 * 0x10;
          lVar11 = (longlong)(int)uStack_200;
          uVar5 = (int)uStack_200 + 1;
          uStack_200 = CONCAT44(uStack_200._4_4_,uVar5);
          local_20c = iVar4;
          if (uStack_200._4_4_ < uVar5) {
            FUN_140067470(&local_208,uVar3 & 0xffffffff);
          }
          iVar10 = iVar10 + 3;
          local_208[lVar11] = (char)iVar4;
        }
      }
      else {
        lVar12 = (longlong)(int)uStack_200;
        uVar5 = (int)uStack_200 + 1;
        uStack_200 = CONCAT44(uStack_200._4_4_,uVar5);
        if (uStack_200._4_4_ < uVar5) {
          FUN_140067470(&local_208,uVar3 & 0xffffffff);
        }
        local_208[lVar12] = *(char *)(lVar9 + lVar11);
LAB_146b1be04:
        iVar10 = iVar10 + 1;
      }
    } while (iVar10 < local_50);
  }
  uVar3 = uStack_200;
  lVar9 = (longlong)(int)uStack_200;
  uVar5 = (int)uStack_200 + 1;
  uStack_200 = CONCAT44(uStack_200._4_4_,uVar5);
  if (uStack_200._4_4_ < uVar5) {
    FUN_140067470(&local_208,uVar3 & 0xffffffff);
  }
  pcVar2 = local_208;
  local_208[lVar9] = '\0';
  local_f8 = 0;
  if (local_208 == (char *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
  }
  else {
    sVar6 = strlen(local_208);
    FUN_1446e6fe8(local_1f8,pcVar2,sVar6 & 0xffffffff,1);
  }
  FUN_140056680(param_1,local_f0);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_208 != (char *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b1c152 FUN_146b1c152 body=240 status=ok
// SIG undefined FUN_146b1c152(void)

undefined8 * FUN_146b1c152(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined *local_58;
  undefined4 local_50;
  longlong local_48;
  ulonglong uStack_40;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_58 = &DAT_149e3579e;
  local_50 = 3;
  local_68 = (undefined4)*param_2;
  uStack_64 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_60 = (undefined4)param_2[1];
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
  cVar1 = FUN_1413070f2(&local_68,&local_58,local_38);
  if (cVar1 == '\0') {
    local_48 = *param_2;
    uStack_40 = param_2[1];
  }
  uVar3 = uStack_40 & 0xffffffff;
  if (0 < (int)uStack_40) {
    uVar2 = 0;
    do {
      uVar4 = (ulonglong)*(ushort *)(local_48 + uVar2 * 2);
      if ((uVar4 < 0x40) && ((0x8000800800000000U >> (uVar4 & 0x3f) & 1) != 0)) {
        uVar3 = uVar2 & 0xffffffff;
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar3 != uVar2);
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14006620a(&local_28,local_48,uVar3);
  if ((undefined8 *)&local_28 == param_1) {
    if (CONCAT44(uStack_24,local_28) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_1 = local_28;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_24;
    *(undefined4 *)(param_1 + 1) = uStack_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b1c244 FUN_146b1c244 body=20 status=ok
// SIG undefined FUN_146b1c244(void)

undefined4 FUN_146b1c244(void)

{
  FUN_141505626();
  return DAT_14c990ee0;
}



// FUNCTION 146b1c258 FUN_146b1c258 body=57 status=ok
// SIG undefined FUN_146b1c258(void)

undefined8 FUN_146b1c258(undefined8 param_1)

{
  FUN_141505626();
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c990e78);
  FUN_146b212f6(param_1);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c990e78);
  return param_1;
}



// FUNCTION 146b1c292 FUN_146b1c292 body=531 status=ok
// SIG undefined FUN_146b1c292(void)

undefined8 * FUN_146b1c292(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  longlong local_68;
  uint local_60;
  undefined8 local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0xffffffff00000000;
  lVar6 = *param_2;
  uVar2 = *(uint *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_70 = param_1;
  local_58 = lVar6;
  uStack_50 = uVar2;
  uVar1 = FUN_144aff2e5(&local_58,0x3f,0);
  if (uVar1 != 0xffffffff) {
    uVar3 = ~uVar1 + uVar2;
    if ((int)uVar2 <= (int)(~uVar1 + uVar2)) {
      uVar3 = uVar2;
    }
    uVar9 = (ulonglong)uVar3;
    if ((int)uVar3 < 1) {
      uVar9 = 0;
    }
    uVar1 = (uint)uVar9;
    lVar6 = (lVar6 + (longlong)(int)uVar2 * 2) - (ulonglong)(uVar1 * 2);
    local_58 = lVar6;
    uStack_50 = uVar1;
    uVar2 = FUN_144aff2e5(&local_58,0x23,0);
    if (uVar2 != 0xffffffff) {
      if ((int)uVar2 < (int)uVar1) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (0 < (int)uVar1) {
        uVar2 = uVar1;
      }
      uVar9 = (ulonglong)uVar2;
    }
    do {
      uVar1 = (uint)uVar9;
      uVar2 = 0;
      local_58 = lVar6;
      uStack_50 = uVar1;
      uVar3 = FUN_144aff2e5(&local_58,0x26,0);
      if (uVar3 == 0xffffffff) {
        uVar9 = 0;
        lVar7 = 0;
      }
      else {
        uVar5 = uVar1;
        if ((int)uVar3 < (int)uVar1) {
          uVar5 = uVar3;
        }
        if ((int)uVar5 < 1) {
          uVar5 = 0;
        }
        uVar10 = (ulonglong)(~uVar3 + uVar1);
        if ((int)uVar1 <= (int)(~uVar3 + uVar1)) {
          uVar10 = uVar9;
        }
        if ((int)uVar10 < 1) {
          uVar10 = 0;
        }
        lVar7 = (lVar6 + uVar9 * 2) - (ulonglong)(uint)((int)uVar10 * 2);
        uVar9 = uVar10;
        uVar1 = uVar5;
      }
      local_58 = lVar6;
      uStack_50 = uVar1;
      uVar3 = FUN_144aff2e5(&local_58,0x3d,0);
      if (uVar3 == 0xffffffff) {
        lVar8 = 0;
      }
      else {
        uVar5 = uVar3;
        if ((int)uVar1 <= (int)uVar3) {
          uVar5 = uVar1;
        }
        if ((int)uVar5 < 1) {
          uVar5 = 0;
        }
        uVar2 = ~uVar3 + uVar1;
        if ((int)uVar1 <= (int)(~uVar3 + uVar1)) {
          uVar2 = uVar1;
        }
        if ((int)uVar2 < 1) {
          uVar2 = 0;
        }
        lVar8 = (lVar6 + (ulonglong)uVar1 * 2) - (ulonglong)(uVar2 * 2);
        uVar1 = uVar5;
      }
      if (uVar1 == *(uint *)(param_3 + 1)) {
        if (uVar1 != 0) {
          iVar4 = FUN_144a54874(lVar6,*param_3);
          if (iVar4 != 0) goto LAB_146b1c412;
        }
        if (uVar2 == 0) {
          uVar11 = 0;
          uVar12 = 0;
          uVar2 = 0;
          uVar13 = 0;
        }
        else {
          local_68 = lVar8;
          local_60 = uVar2;
          FUN_146b1bcf4(&local_58);
          if (&local_58 == local_70) {
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            break;
          }
          uVar11 = (undefined4)local_58;
          uVar12 = local_58._4_4_;
          uVar2 = uStack_50;
          uVar13 = uStack_4c;
        }
        *(undefined4 *)local_70 = uVar11;
        *(undefined4 *)((longlong)local_70 + 4) = uVar12;
        *(uint *)(local_70 + 1) = uVar2;
        *(undefined4 *)((longlong)local_70 + 0xc) = uVar13;
        break;
      }
LAB_146b1c412:
      lVar6 = lVar7;
    } while ((int)uVar9 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_70;
}



// FUNCTION 146b1c4a6 FUN_146b1c4a6 body=233 status=ok
// SIG undefined FUN_146b1c4a6(void)

undefined8 * FUN_146b1c4a6(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR__purecall_149f2a170;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 10),4000);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x11),4000);
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x18),4000);
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1f),4000);
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  return param_1;
}



// FUNCTION 146b1c590 FUN_146b1c590 body=220 status=ok
// SIG undefined FUN_146b1c590(void)

longlong * FUN_146b1c590(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined8 local_48;
  int local_40;
  longlong local_38;
  undefined4 local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  local_48 = *param_3;
  local_40 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)*param_1)(0,&local_68);
  local_58 = local_68;
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  FUN_146b1c292(&local_38,&local_58,&local_48);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (&local_38 == param_2 || local_2c == -1) {
    if ((local_2c != -1) && (local_38 != 0)) {
      FUN_1400020a8();
    }
  }
  else {
    *param_2 = local_38;
    *(undefined4 *)(param_2 + 1) = local_30;
    *(int *)((longlong)param_2 + 0xc) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1c66e FUN_146b1c66e body=419 status=ok
// SIG undefined FUN_146b1c66e(void)

void FUN_146b1c66e(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78;
  longlong *local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_2 != 0) {
    local_68[0] = (longlong *)0x0;
    plVar3 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[2];
    }
    local_78 = *param_2;
    (**(code **)*plVar3)(plVar3,local_68);
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,6,0x10);
    local_90 = 6;
    *local_98 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_98[2] = lVar4;
    *local_98 = &PTR_FUN_149f2a920;
    local_98[4] = local_78;
    local_98[6] = local_68[0];
    local_68[0] = (longlong *)0x0;
    *(undefined4 *)(local_98 + 10) = local_48;
    *(undefined4 *)((longlong)local_98 + 0x54) = uStack_44;
    *(undefined4 *)(local_98 + 0xb) = uStack_40;
    *(undefined4 *)((longlong)local_98 + 0x5c) = uStack_3c;
    *(undefined4 *)(local_98 + 8) = local_58;
    *(undefined4 *)((longlong)local_98 + 0x44) = uStack_54;
    *(undefined4 *)(local_98 + 9) = uStack_50;
    *(undefined4 *)((longlong)local_98 + 0x4c) = uStack_4c;
    if (local_78 != 0) {
      local_78 = 0;
    }
    local_a8 = param_3;
    FUN_1405f67fc(param_1 + 0x70,local_88,&local_98,L"FHttpManager_AddGameThreadTask_Lambda");
    if (local_80 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    FUN_1449db362(&local_98);
    if (local_78 != 0) {
      plVar3 = local_68[0];
      if (local_68[0] == (longlong *)0x0) {
        plVar3 = (longlong *)&local_58;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1c844 FUN_146b1c844 body=27 status=ok
// SIG undefined FUN_146b1c844(void)

undefined1 FUN_146b1c844(longlong param_1)

{
  undefined1 uVar1;
  
  FUN_146b1c860();
  LOCK();
  uVar1 = *(undefined1 *)(param_1 + 0x148);
  *(undefined1 *)(param_1 + 0x148) = 0;
  UNLOCK();
  return uVar1;
}



// FUNCTION 146b1c860 FUN_146b1c860 body=203 status=ok
// SIG undefined FUN_146b1c860(void)

void FUN_146b1c860(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  if (*(longlong *)(param_1 + 0x160) != 0) {
    lVar4 = FUN_141054386();
    lVar4 = *(longlong *)(lVar4 + 0x20);
    plVar2 = *(longlong **)(param_1 + 0x160);
    plVar3 = *(longlong **)(param_1 + 0x168);
    if (plVar3 == (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2,*(undefined8 *)(lVar4 + 0x28));
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      (**(code **)(*plVar2 + 8))(plVar2,*(undefined8 *)(lVar4 + 0x28));
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
    *(undefined8 *)(param_1 + 0x160) = 0;
    plVar2 = *(longlong **)(param_1 + 0x168);
    if (plVar2 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x168) = 0;
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
  }
                    /* WARNING: Could not recover jumptable at 0x000146b1c924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  return;
}



// FUNCTION 146b1c93c FUN_146b1c93c body=106 status=ok
// SIG undefined FUN_146b1c93c(void)

void FUN_146b1c93c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1e0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1e0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000146b1c99f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
  return;
}



// FUNCTION 146b1c9a6 FUN_146b1c9a6 body=42 status=ok
// SIG undefined FUN_146b1c9a6(void)

void FUN_146b1c9a6(undefined8 param_1)

{
  FUN_146b1c9d0();
  FUN_146b1c93c(param_1);
  FUN_14113cdca(param_1);
  FUN_146b1c860(param_1);
  return;
}



// FUNCTION 146b1c9d0 FUN_146b1c9d0 body=408 status=ok
// SIG undefined FUN_146b1c9d0(void)

void FUN_146b1c9d0(longlong *param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  LPCRITICAL_SECTION p_Var2;
  
  p_Var2 = (LPCRITICAL_SECTION)(**(code **)(*param_1 + 0xf0))();
  EnterCriticalSection(p_Var2);
  p_Var1 = p_Var2[1].DebugInfo;
  if (p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0 && p_Var2[1].LockCount != 0) {
    (*(code *)**(undefined8 **)p_Var1)(p_Var1,0);
    FUN_1446efa72(p_Var2 + 1,0,0,0x10);
    p_Var2[1].LockCount = 0;
  }
  if (p_Var2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var2);
  }
  p_Var2 = (LPCRITICAL_SECTION)(**(code **)(*param_1 + 0xf8))(param_1);
  EnterCriticalSection(p_Var2);
  p_Var1 = p_Var2[1].DebugInfo;
  if (p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0 && p_Var2[1].LockCount != 0) {
    (*(code *)**(undefined8 **)p_Var1)(p_Var1,0);
    FUN_1446efa72(p_Var2 + 1,0,0,0x10);
    p_Var2[1].LockCount = 0;
  }
  if (p_Var2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var2);
  }
  p_Var2 = (LPCRITICAL_SECTION)(**(code **)(*param_1 + 0x110))(param_1);
  EnterCriticalSection(p_Var2);
  p_Var1 = p_Var2[1].DebugInfo;
  if (p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0 && p_Var2[1].LockCount != 0) {
    (*(code *)**(undefined8 **)p_Var1)(p_Var1,0);
    FUN_1446efa72(p_Var2 + 1,0,0,0x10);
    p_Var2[1].LockCount = 0;
  }
  if (p_Var2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var2);
  }
  p_Var2 = (LPCRITICAL_SECTION)(**(code **)(*param_1 + 0x108))(param_1);
  EnterCriticalSection(p_Var2);
  p_Var1 = p_Var2[1].DebugInfo;
  if (p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0 && p_Var2[1].LockCount != 0) {
    (*(code *)**(undefined8 **)p_Var1)(p_Var1,0);
    FUN_1446efa72(p_Var2 + 1,0,0,0x10);
    p_Var2[1].LockCount = 0;
  }
  if (p_Var2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b1cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(p_Var2);
    return;
  }
  return;
}



// FUNCTION 146b1cb68 FUN_146b1cb68 body=228 status=ok
// SIG undefined FUN_146b1cb68(void)

void FUN_146b1cb68(longlong *param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  LPCRITICAL_SECTION lpCriticalSection;
  _LIST_ENTRY *p_Var4;
  
  (**(code **)(*param_1 + 0x138))(param_1,1);
  p_Var3 = (_LIST_ENTRY *)FUN_1405d8a54(1);
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*param_1 + 0xf0))(param_1);
  EnterCriticalSection(lpCriticalSection);
  if (lpCriticalSection[1].LockCount != 2) {
    FUN_1446efa72(lpCriticalSection + 1,0,2,0x10);
    lpCriticalSection[1].LockCount = 2;
  }
  p_Var1 = lpCriticalSection[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  LOCK();
  UNLOCK();
  p_Var4 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var4 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var4 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var4;
  *(undefined ***)p_Var1 = &PTR_FUN_149f2a790;
  (p_Var1->ProcessLocksList).Blink = p_Var3;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  (*(code *)p_Var3->Flink[2].Flink)(p_Var3,0xffffffff,0);
  FUN_14018802a(p_Var3);
  return;
}



// FUNCTION 146b1cc4c FUN_146b1cc4c body=168 status=ok
// SIG undefined FUN_146b1cc4c(void)

void FUN_146b1cc4c(LPCRITICAL_SECTION param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection(param_1);
  if ((param_1[1].LockCount != 0) &&
     (p_Var3 = param_1[1].DebugInfo, p_Var3 != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    local_30 = *param_2;
    local_28 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (**(code **)(*(longlong *)p_Var3 + 0x60))(p_Var3,&local_30,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1ccf6 FUN_146b1ccf6 body=240 status=ok
// SIG undefined FUN_146b1ccf6(void)

undefined8 FUN_146b1ccf6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1d8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x1e0);
    if (plVar5 == (longlong *)0x0) goto LAB_146b1cda1;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
LAB_146b1cd67:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146b1cda1;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x1d8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x1e0);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0x1e0) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_146b1cda1;
      goto LAB_146b1cd67;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_146b1cda1;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_146b1cda1:
  LOCK();
  *(undefined1 *)(param_1 + 0x210) = 1;
  UNLOCK();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  return 1;
}



// FUNCTION 146b1cdee FUN_146b1cdee body=102 status=ok
// SIG undefined FUN_146b1cdee(void)

undefined8 * FUN_146b1cdee(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_149f28d70;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = *param_2;
  lVar3 = param_2[1];
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 5) = 0;
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
  return param_1;
}



// FUNCTION 146b1ce54 FUN_146b1ce54 body=85 status=ok
// SIG undefined FUN_146b1ce54(void)

void FUN_146b1ce54(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f28d70;
  plVar3 = (longlong *)param_1[4];
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
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b1cebe FUN_146b1cebe body=106 status=ok
// SIG undefined FUN_146b1cebe(void)

undefined8 * FUN_146b1cebe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c990d40) {
    FUN_144b3d300(&DAT_14c990d40);
    if (DAT_14c990d40 == -1) {
      DAT_14c990d30 = 0;
      uRam000000014c990d38 = 0;
      atexit((_func_5014 *)&LAB_14291ad6a);
      _Init_thread_footer(&DAT_14c990d40);
    }
  }
  return &DAT_14c990d30;
}



// FUNCTION 146b1cf2c FUN_146b1cf2c body=71 status=ok
// SIG undefined FUN_146b1cf2c(void)

void FUN_146b1cf2c(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  (**(code **)(*param_1 + 0x20))(param_1,&local_18,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1cf74 FUN_146b1cf74 body=120 status=ok
// SIG undefined FUN_146b1cf74(void)

ulonglong FUN_146b1cf74(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_1[3] != 0) {
    lVar1 = (**(code **)(*param_1 + 8))();
    uVar2 = lVar1 - param_3;
    if ((ulonglong)(longlong)*(int *)(param_2 + 1) <= (ulonglong)(lVar1 - param_3)) {
      uVar2 = (longlong)*(int *)(param_2 + 1);
    }
    if (uVar2 != 0) {
      lVar1 = (**(code **)(*(longlong *)param_1[3] + 0x28))();
      if (lVar1 != param_3) {
        (**(code **)(*(longlong *)param_1[3] + 0x1a0))((longlong *)param_1[3],param_3);
      }
      (**(code **)(*(longlong *)param_1[3] + 0x170))((longlong *)param_1[3],*param_2,uVar2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 146b1cfec FUN_146b1cfec body=102 status=ok
// SIG undefined FUN_146b1cfec(void)

void FUN_146b1cfec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*(char *)(param_1 + 0x28) == '\x01') && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0))
  {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))();
    *(undefined8 *)(param_1 + 0x18) = 0;
    plVar3 = *(longlong **)(param_1 + 0x20);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000146b1d046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 146b1d0d8 FUN_146b1d0d8 body=190 status=ok
// SIG undefined FUN_146b1d0d8(void)

longlong * FUN_146b1d0d8(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  int local_30;
  longlong local_28;
  undefined4 local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  local_38 = *param_3;
  local_30 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    local_30 = 0;
  }
  local_48 = *(undefined8 *)(param_1 + 8);
  local_40 = *(int *)(param_1 + 0x10) + -1;
  if (*(int *)(param_1 + 0x10) == 0) {
    local_40 = 0;
  }
  FUN_146b1c292(&local_28,&local_48,&local_38);
  if (&local_28 == param_2 || local_1c == -1) {
    if ((local_1c != -1) && (local_28 != 0)) {
      FUN_1400020a8();
    }
  }
  else {
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(int *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1d198 FUN_146b1d198 body=83 status=ok
// SIG undefined FUN_146b1d198(void)

undefined8 * FUN_146b1d198(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 146b1d1fa FUN_146b1d1fa body=31 status=ok
// SIG undefined FUN_146b1d1fa(void)

void FUN_146b1d1fa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_142919c7a(uVar1);
  return;
}



// FUNCTION 146b1d21a FUN_146b1d21a body=93 status=ok
// SIG undefined FUN_146b1d21a(void)

undefined8 * FUN_146b1d21a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141214b54(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146b22382(param_1,iVar1);
      FUN_146b223e4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146b1d3c4 FUN_146b1d3c4 body=416 status=ok
// SIG undefined FUN_146b1d3c4(void)

void FUN_146b1d3c4(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar6 = (int)param_2[1];
  uVar2 = local_68;
  if (iVar6 == DAT_14c872cf0) {
    if (1 < iVar6) {
      lVar5 = 0;
      while( true ) {
        uVar7 = *(ushort *)(*param_2 + lVar5);
        uVar8 = (ulonglong)uVar7;
        uVar9 = *(ushort *)(DAT_14c872ce8 + lVar5);
        if (uVar7 != uVar9) break;
        if (uVar7 == 0) goto LAB_146b1d454;
LAB_146b1d41f:
        lVar5 = lVar5 + 2;
      }
      if ((uVar9 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar10 = (ulonglong)uVar9;
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_146b1d41f;
      }
      if (uVar7 != uVar9) goto LAB_146b1d4bd;
    }
  }
  else if (DAT_14c872cf0 + iVar6 != 1) goto LAB_146b1d4bd;
LAB_146b1d454:
  plVar1 = param_3 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_3[5] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar6 = (int)param_3[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  uVar2 = local_68;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
  local_80 = param_3;
  if ((local_68._4_4_ != iVar6) || (uStack_50 != plVar1)) {
    iVar4 = local_68._4_4_;
    local_68 = uVar2;
    do {
      cVar3 = FUN_144a791f8((longlong)iVar4 * 0x18 + *local_80,L"HTTP",4,1);
      if (cVar3 != '\0') {
        FUN_145d2b43e(param_1);
        uVar2 = local_68;
        break;
      }
      local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
      FUN_1449c0562(&local_78);
      iVar4 = local_68._4_4_;
      uVar2 = local_68;
    } while (local_80 != param_3 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar6));
  }
LAB_146b1d4bd:
  local_68 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b1d56a FUN_146b1d56a body=255 status=ok
// SIG undefined FUN_146b1d56a(void)

undefined8 *
FUN_146b1d56a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 param_5)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 6) = param_5;
  return param_1;
}



// FUNCTION 146b1d66a FUN_146b1d66a body=187 status=ok
// SIG undefined FUN_146b1d66a(void)

undefined8 * FUN_146b1d66a(undefined8 *param_1)

{
  FUN_146b1c4a6();
  *param_1 = &PTR_FUN_149f2a320;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16d) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 146b1d726 FUN_146b1d726 body=74 status=ok
// SIG undefined FUN_146b1d726(void)

void FUN_146b1d726(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f297d0;
  plVar3 = (longlong *)param_1[0x27];
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
  FUN_146b1d770(param_1);
  return;
}



// FUNCTION 146b1d770 FUN_146b1d770 body=105 status=ok
// SIG undefined FUN_146b1d770(void)

void FUN_146b1d770(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR__purecall_149f2a170;
  FUN_1401cb1ee(param_1 + 0x1f);
  FUN_1401cb1ee(param_1 + 0x18);
  FUN_1401cb1ee(param_1 + 0x11);
  FUN_1401cb1ee(param_1 + 10);
  FUN_1401cb1ee(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146b1d7d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146b1d7da FUN_146b1d7da body=29 status=ok
// SIG undefined FUN_146b1d7da(void)

undefined8 FUN_146b1d7da(longlong param_1,undefined8 param_2)

{
  (**(code **)**(undefined8 **)(param_1 + 0x130))();
  return param_2;
}



// FUNCTION 146b1d7f8 FUN_146b1d7f8 body=30 status=ok
// SIG undefined FUN_146b1d7f8(void)

undefined8 FUN_146b1d7f8(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x20))();
  return param_2;
}



// FUNCTION 146b1d816 FUN_146b1d816 body=30 status=ok
// SIG undefined FUN_146b1d816(void)

undefined8 FUN_146b1d816(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x28))();
  return param_2;
}



// FUNCTION 146b1d834 FUN_146b1d834 body=30 status=ok
// SIG undefined FUN_146b1d834(void)

undefined8 FUN_146b1d834(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x30))();
  return param_2;
}



// FUNCTION 146b1d852 FUN_146b1d852 body=30 status=ok
// SIG undefined FUN_146b1d852(void)

undefined8 FUN_146b1d852(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x38))();
  return param_2;
}



// FUNCTION 146b1d88c FUN_146b1d88c body=30 status=ok
// SIG undefined FUN_146b1d88c(void)

undefined8 FUN_146b1d88c(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x58))();
  return param_2;
}



// FUNCTION 146b1d8aa FUN_146b1d8aa body=30 status=ok
// SIG undefined FUN_146b1d8aa(void)

undefined8 FUN_146b1d8aa(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x70))();
  return param_2;
}



// FUNCTION 146b1d94e FUN_146b1d94e body=142 status=ok
// SIG undefined FUN_146b1d94e(void)

undefined4 FUN_146b1d94e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x130);
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = (**(code **)(*plVar3 + 0xa0))(plVar3,&local_28);
  plVar3 = (longlong *)param_2[1];
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
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1d9de FUN_146b1d9de body=142 status=ok
// SIG undefined FUN_146b1d9de(void)

undefined4 FUN_146b1d9de(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x130);
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = (**(code **)(*plVar3 + 0xa8))(plVar3,&local_28);
  plVar3 = (longlong *)param_2[1];
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
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1dace FUN_146b1dace body=33 status=ok
// SIG undefined FUN_146b1dace(void)

undefined8 FUN_146b1dace(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0xe0))();
  return param_2;
}



// FUNCTION 146b1db16 FUN_146b1db16 body=33 status=ok
// SIG undefined FUN_146b1db16(void)

undefined8 FUN_146b1db16(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x120))();
  return param_2;
}



// FUNCTION 146b1dbad FUN_146b1dbad body=510 status=ok
// SIG undefined FUN_146b1dbad(void)

double * FUN_146b1dbad(double *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  wchar_t *_Str;
  double dVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  longlong local_60 [2];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined1 *)(param_1 + 1) = 0;
  plVar3 = (longlong *)*param_2;
  if (plVar3 == (longlong *)0x0) goto LAB_146b1dd5d;
  FUN_140056680(&local_50,L"Retry-After");
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_40,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 < 2) {
    plVar3 = (longlong *)*param_2;
    FUN_140056680(local_60,L"X-Rate-Limit-Reset");
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_50,local_60);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (1 < local_48) {
      lVar5 = _wtoi64(local_50);
      local_70 = 0;
      local_78 = 0;
      local_80 = 0;
      local_88 = 0;
      FUN_14021300e(local_60,0x7b2,1,1);
      lVar5 = lVar5 * 10000000 + local_60[0];
      FUN_140212f8e(local_60);
      *param_1 = (double)(lVar5 - local_60[0]) / 10000000.0;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    if (local_50 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar4 = FUN_1405b43cc(&local_40);
    if (cVar4 == '\0') {
      local_50 = (wchar_t *)0x0;
      cVar4 = FUN_14680f338(&local_40);
      if (cVar4 == '\0') goto LAB_146b1dd4e;
      FUN_140212f8e(local_60);
      dVar6 = (double)((longlong)local_50 - local_60[0]) / 10000000.0;
    }
    else {
      _Str = local_40;
      if (local_38 == 0) {
        _Str = L"";
      }
      dVar6 = _wtof(_Str);
      dVar6 = (double)(float)dVar6;
    }
    *param_1 = dVar6;
    *(undefined1 *)(param_1 + 1) = 1;
  }
LAB_146b1dd4e:
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_146b1dd5d:
  plVar3 = (longlong *)param_2[1];
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
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b1ddac FUN_146b1ddac body=185 status=ok
// SIG undefined FUN_146b1ddac(void)

float FUN_146b1ddac(float *param_1,uint param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = powf(*param_1,(float)param_2 + param_1[1]);
  fVar4 = 1.0;
  if ((((1.0 < *param_1) && (0.0 <= param_1[1])) && (fVar5 = param_1[2], 0.0 <= fVar5)) &&
     ((fVar1 = param_1[3], fVar5 <= fVar1 && (0.001 < fVar1)))) {
    uVar2 = rand();
    fVar4 = ((float)(uVar2 & 0x7fff) / 32767.0) * (fVar1 - fVar5) + fVar5;
  }
  fVar5 = fVar3 * fVar4;
  if (param_1[4] <= fVar3 * fVar4) {
    fVar5 = param_1[4];
  }
  return fVar5;
}



// FUNCTION 146b1de66 FUN_146b1de66 body=625 status=ok
// SIG undefined FUN_146b1de66(void)

undefined8 *
FUN_146b1de66(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
             undefined4 *param_9,undefined4 *param_10)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_146b1c4a6();
  *param_1 = &PTR_FUN_149f297d0;
  param_1[0x26] = *param_3;
  lVar4 = param_3[1];
  param_1[0x27] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_149f29a20;
  *(undefined4 *)(param_1 + 0x28) = 0;
  cVar3 = *(char *)(param_4 + 1);
  *(char *)(param_1 + 0x29) = cVar3;
  if (cVar3 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x144) = *param_4;
  }
  cVar3 = *(char *)(param_9 + 1);
  *(char *)(param_1 + 0x2a) = cVar3;
  if (cVar3 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x14c) = *param_9;
  }
  cVar3 = *(char *)(param_5 + 1);
  *(char *)(param_1 + 0x2c) = cVar3;
  if (cVar3 == '\x01') {
    param_1[0x2b] = *param_5;
  }
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  FUN_145c3f772(param_1 + 0x2d,param_6);
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_144881636(param_1 + 0x37,param_7);
  param_1[0x41] = *param_8;
  lVar4 = param_8[1];
  param_1[0x42] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = *param_2;
  lVar4 = param_2[1];
  param_1[0x47] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  uVar6 = param_10[1];
  uVar7 = param_10[2];
  uVar8 = param_10[3];
  *(undefined4 *)((longlong)param_1 + 0x254) = *param_10;
  *(undefined4 *)(param_1 + 0x4b) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x25c) = uVar7;
  *(undefined4 *)(param_1 + 0x4c) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x264) = param_10[4];
  *(undefined1 *)(param_1 + 0x4d) = 0;
  lVar4 = param_1[0x41];
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 8) == 0) {
      param_1[0x41] = 0;
      plVar5 = (longlong *)param_1[0x42];
      if (plVar5 != (longlong *)0x0) {
        param_1[0x42] = 0;
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
    }
    else {
      *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(lVar4 + 0x10);
    }
  }
  plVar5 = (longlong *)param_2[1];
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



// FUNCTION 146b1e0d8 FUN_146b1e0d8 body=267 status=ok
// SIG undefined FUN_146b1e0d8(void)

void FUN_146b1e0d8(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x268) == '\0') {
    *(undefined1 *)(param_1 + 0x268) = 1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0xf0))();
    local_30 = FUN_14291bd30;
    local_28 = 0;
    FUN_146b1e1e4(uVar1,param_1,&local_30);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0xf8))();
    local_30 = FUN_146b1e520;
    local_28 = 0;
    FUN_146b1e382(uVar1,param_1,&local_30);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x110))();
    local_30 = FUN_146b1e7c8;
    local_28 = 0;
    FUN_146b1e62a(uVar1,param_1,&local_30);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x108))();
    local_30 = FUN_146b1eabc;
    local_28 = 0;
    FUN_146b1e91e(uVar1,param_1,&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1e1e4 FUN_146b1e1e4 body=414 status=ok
// SIG undefined FUN_146b1e1e4(void)

void FUN_146b1e1e4(LPCRITICAL_SECTION param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  _LIST_ENTRY *p_Var10;
  _LIST_ENTRY *p_Var11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 4) {
    FUN_1446efa72(param_1 + 1,0,4,0x10);
    param_1[1].LockCount = 4;
  }
  p_Var5 = param_1[1].DebugInfo;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146b1e2fa:
    *(undefined ***)p_Var5 = &PTR_LAB_149f2a800;
    LOCK();
    UNLOCK();
    p_Var10 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
    lVar8 = DAT_14c758608 + 1;
    if (p_Var10 == (_LIST_ENTRY *)0x0) {
      LOCK();
      UNLOCK();
      p_Var10 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    (p_Var5->ProcessLocksList).Flink = p_Var10;
    *(undefined ***)p_Var5 = &PTR_FUN_149f2ac80;
    (p_Var5->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
    p_Var5->EntryCount = 0;
    p_Var5->ContentionCount = 0;
    p_Var5->Flags = (int)uVar4;
    p_Var5->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar4 >> 0x20);
    p_Var5->SpareWORD = (short)((ulonglong)uVar4 >> 0x30);
    p_Var5[1].Type = (short)uVar3;
    p_Var5[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
  }
  else {
    iVar9 = (int)plVar6[1];
    do {
      if (iVar9 == 0) goto LAB_146b1e2fa;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar12 = iVar9 == iVar7;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar12);
    p_Var10 = *(_LIST_ENTRY **)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(undefined ***)p_Var5 = &PTR_LAB_149f2a800;
    LOCK();
    UNLOCK();
    p_Var11 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
    lVar8 = DAT_14c758608 + 1;
    if (p_Var11 == (_LIST_ENTRY *)0x0) {
      LOCK();
      UNLOCK();
      p_Var11 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    (p_Var5->ProcessLocksList).Flink = p_Var11;
    *(undefined ***)p_Var5 = &PTR_FUN_149f2ac80;
    (p_Var5->ProcessLocksList).Blink = p_Var10;
    *(longlong **)&p_Var5->EntryCount = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    p_Var5[1].Type = (short)uVar3;
    p_Var5[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
    p_Var5->Flags = (int)uVar4;
    p_Var5->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar4 >> 0x20);
    p_Var5->SpareWORD = (short)((ulonglong)uVar4 >> 0x30);
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
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146b1e34a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 146b1e382 FUN_146b1e382 body=414 status=ok
// SIG undefined FUN_146b1e382(void)

void FUN_146b1e382(LPCRITICAL_SECTION param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  _LIST_ENTRY *p_Var10;
  _LIST_ENTRY *p_Var11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 4) {
    FUN_1446efa72(param_1 + 1,0,4,0x10);
    param_1[1].LockCount = 4;
  }
  p_Var5 = param_1[1].DebugInfo;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146b1e498:
    *(undefined ***)p_Var5 = &PTR_LAB_149f2ad60;
    LOCK();
    UNLOCK();
    p_Var10 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
    lVar8 = DAT_14c758608 + 1;
    if (p_Var10 == (_LIST_ENTRY *)0x0) {
      LOCK();
      UNLOCK();
      p_Var10 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    (p_Var5->ProcessLocksList).Flink = p_Var10;
    *(undefined ***)p_Var5 = &PTR_FUN_149f2acf0;
    (p_Var5->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
    p_Var5->EntryCount = 0;
    p_Var5->ContentionCount = 0;
    p_Var5->Flags = (int)uVar4;
    p_Var5->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar4 >> 0x20);
    p_Var5->SpareWORD = (short)((ulonglong)uVar4 >> 0x30);
    p_Var5[1].Type = (short)uVar3;
    p_Var5[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
  }
  else {
    iVar9 = (int)plVar6[1];
    do {
      if (iVar9 == 0) goto LAB_146b1e498;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar12 = iVar9 == iVar7;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar12);
    p_Var10 = *(_LIST_ENTRY **)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(undefined ***)p_Var5 = &PTR_LAB_149f2ad60;
    LOCK();
    UNLOCK();
    p_Var11 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
    lVar8 = DAT_14c758608 + 1;
    if (p_Var11 == (_LIST_ENTRY *)0x0) {
      LOCK();
      UNLOCK();
      p_Var11 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    (p_Var5->ProcessLocksList).Flink = p_Var11;
    *(undefined ***)p_Var5 = &PTR_FUN_149f2acf0;
    (p_Var5->ProcessLocksList).Blink = p_Var10;
    *(longlong **)&p_Var5->EntryCount = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    p_Var5[1].Type = (short)uVar3;
    p_Var5[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
    p_Var5->Flags = (int)uVar4;
    p_Var5->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar4 >> 0x20);
    p_Var5->SpareWORD = (short)((ulonglong)uVar4 >> 0x30);
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
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146b1e4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 146b1e520 FUN_146b1e520 body=244 status=ok
// SIG undefined FUN_146b1e520(void)

void FUN_146b1e520(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar7 = (**(code **)(*param_1 + 0xf8))();
  plVar3 = (longlong *)param_1[2];
  if (plVar3 == (longlong *)0x0) {
LAB_146b1e5af:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_1429184d8(uVar7,&local_48,param_3,param_4);
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b1e5af;
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
    local_48 = param_1[1];
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plStack_40 = plVar3;
    FUN_1429184d8(uVar7,&local_48,param_3,param_4);
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
  puVar4 = *(undefined8 **)(param_2 + 8);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b1e62a FUN_146b1e62a body=414 status=ok
// SIG undefined FUN_146b1e62a(void)

void FUN_146b1e62a(LPCRITICAL_SECTION param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  _LIST_ENTRY *p_Var10;
  _LIST_ENTRY *p_Var11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 4) {
    FUN_1446efa72(param_1 + 1,0,4,0x10);
    param_1[1].LockCount = 4;
  }
  p_Var5 = param_1[1].DebugInfo;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146b1e740:
    *(undefined ***)p_Var5 = &PTR_LAB_149f2ae40;
    LOCK();
    UNLOCK();
    p_Var10 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
    lVar8 = DAT_14c758608 + 1;
    if (p_Var10 == (_LIST_ENTRY *)0x0) {
      LOCK();
      UNLOCK();
      p_Var10 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    (p_Var5->ProcessLocksList).Flink = p_Var10;
    *(undefined ***)p_Var5 = &PTR_FUN_149f2add0;
    (p_Var5->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
    p_Var5->EntryCount = 0;
    p_Var5->ContentionCount = 0;
    p_Var5->Flags = (int)uVar4;
    p_Var5->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar4 >> 0x20);
    p_Var5->SpareWORD = (short)((ulonglong)uVar4 >> 0x30);
    p_Var5[1].Type = (short)uVar3;
    p_Var5[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
  }
  else {
    iVar9 = (int)plVar6[1];
    do {
      if (iVar9 == 0) goto LAB_146b1e740;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar12 = iVar9 == iVar7;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar12);
    p_Var10 = *(_LIST_ENTRY **)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(undefined ***)p_Var5 = &PTR_LAB_149f2ae40;
    LOCK();
    UNLOCK();
    p_Var11 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
    lVar8 = DAT_14c758608 + 1;
    if (p_Var11 == (_LIST_ENTRY *)0x0) {
      LOCK();
      UNLOCK();
      p_Var11 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    (p_Var5->ProcessLocksList).Flink = p_Var11;
    *(undefined ***)p_Var5 = &PTR_FUN_149f2add0;
    (p_Var5->ProcessLocksList).Blink = p_Var10;
    *(longlong **)&p_Var5->EntryCount = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    p_Var5[1].Type = (short)uVar3;
    p_Var5[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
    p_Var5->Flags = (int)uVar4;
    p_Var5->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar4 >> 0x20);
    p_Var5->SpareWORD = (short)((ulonglong)uVar4 >> 0x30);
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
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146b1e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 146b1e7c8 FUN_146b1e7c8 body=318 status=ok
// SIG undefined FUN_146b1e7c8(void)

void FUN_146b1e7c8(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar8 = (longlong *)param_1[2];
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_146b1e7ff:
    lVar9 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_146b1e7ff;
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar10 = iVar6 == iVar5;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar10);
    lVar9 = param_1[1];
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
    bVar4 = false;
  }
  uVar7 = (**(code **)(*param_1 + 0x110))(param_1);
  local_48 = lVar9;
  local_40 = plVar8;
  if (bVar4) {
    FUN_146b1cc4c(uVar7,&local_48,param_3);
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    FUN_146b1cc4c(uVar7,&local_48,param_3);
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
  puVar3 = *(undefined8 **)(param_2 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b1e91e FUN_146b1e91e body=414 status=ok
// SIG undefined FUN_146b1e91e(void)

void FUN_146b1e91e(LPCRITICAL_SECTION param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  _LIST_ENTRY *p_Var10;
  _LIST_ENTRY *p_Var11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 4) {
    FUN_1446efa72(param_1 + 1,0,4,0x10);
    param_1[1].LockCount = 4;
  }
  p_Var5 = param_1[1].DebugInfo;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146b1ea34:
    *(undefined ***)p_Var5 = &PTR_LAB_149f2af20;
    LOCK();
    UNLOCK();
    p_Var10 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
    lVar8 = DAT_14c758608 + 1;
    if (p_Var10 == (_LIST_ENTRY *)0x0) {
      LOCK();
      UNLOCK();
      p_Var10 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    (p_Var5->ProcessLocksList).Flink = p_Var10;
    *(undefined ***)p_Var5 = &PTR_FUN_149f2aeb0;
    (p_Var5->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
    p_Var5->EntryCount = 0;
    p_Var5->ContentionCount = 0;
    p_Var5->Flags = (int)uVar4;
    p_Var5->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar4 >> 0x20);
    p_Var5->SpareWORD = (short)((ulonglong)uVar4 >> 0x30);
    p_Var5[1].Type = (short)uVar3;
    p_Var5[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
  }
  else {
    iVar9 = (int)plVar6[1];
    do {
      if (iVar9 == 0) goto LAB_146b1ea34;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar12 = iVar9 == iVar7;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar12);
    p_Var10 = *(_LIST_ENTRY **)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(undefined ***)p_Var5 = &PTR_LAB_149f2af20;
    LOCK();
    UNLOCK();
    p_Var11 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
    lVar8 = DAT_14c758608 + 1;
    if (p_Var11 == (_LIST_ENTRY *)0x0) {
      LOCK();
      UNLOCK();
      p_Var11 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    (p_Var5->ProcessLocksList).Flink = p_Var11;
    *(undefined ***)p_Var5 = &PTR_FUN_149f2aeb0;
    (p_Var5->ProcessLocksList).Blink = p_Var10;
    *(longlong **)&p_Var5->EntryCount = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    p_Var5[1].Type = (short)uVar3;
    p_Var5[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
    p_Var5->Flags = (int)uVar4;
    p_Var5->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar4 >> 0x20);
    p_Var5->SpareWORD = (short)((ulonglong)uVar4 >> 0x30);
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
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146b1ea84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 146b1eabc FUN_146b1eabc body=385 status=ok
// SIG undefined FUN_146b1eabc(void)

void FUN_146b1eabc(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  lVar10 = DAT_14c990db0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar8 = 0;
  }
  else {
    bVar6 = FUN_144a61b4f();
    uVar8 = (ulonglong)(bVar6 ^ 1);
  }
  if (*(char *)(lVar10 + uVar8) == '\x01') {
    plVar11 = (longlong *)param_1[2];
    bVar4 = true;
    if (plVar11 == (longlong *)0x0) {
LAB_146b1eb9a:
      lVar10 = 0;
      plVar11 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar11[1];
      do {
        if (iVar7 == 0) goto LAB_146b1eb9a;
        LOCK();
        iVar5 = (int)plVar11[1];
        bVar12 = iVar7 == iVar5;
        if (bVar12) {
          *(int *)(plVar11 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar12);
      lVar10 = param_1[1];
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
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
      bVar4 = false;
    }
    uVar9 = (**(code **)(*param_1 + 0x108))(param_1);
    local_50 = lVar10;
    local_48 = plVar11;
    if (bVar4) {
      FUN_146b1b0aa(uVar9,&local_50,param_3,param_4);
    }
    else {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      FUN_146b1b0aa(uVar9,&local_50,param_3,param_4);
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
  puVar3 = *(undefined8 **)(param_2 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b1ec56 FUN_146b1ec56 body=402 status=ok
// SIG undefined FUN_146b1ec56(void)

ulonglong FUN_146b1ec56(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_146b1ec77:
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b1ec77;
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
    local_28 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plStack_20 = plVar3;
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
  (**(code **)**(undefined8 **)(param_1 + 0x130))(*(undefined8 **)(param_1 + 0x130),&local_38);
  if ((longlong *)(param_1 + 0x220) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x220) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x220) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x228) = local_30;
    *(undefined4 *)(param_1 + 0x22c) = local_2c;
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FUN_146b1edea(param_1);
  }
  FUN_146b1e0d8(param_1);
  plVar3 = *(longlong **)(param_1 + 0x238);
  if (plVar3 == (longlong *)0x0) {
LAB_146b1eda0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146b1eda0;
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
    lVar4 = *(longlong *)(param_1 + 0x230);
    uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      FUN_14291c334(lVar4,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146b1edea FUN_146b1edea body=233 status=ok
// SIG undefined FUN_146b1edea(void)

void FUN_146b1edea(longlong param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48 [2];
  undefined8 local_38;
  int local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined8 *)(param_1 + 0x220);
  local_30 = *(int *)(param_1 + 0x228) + -1;
  if (*(int *)(param_1 + 0x228) == 0) {
    local_30 = 0;
  }
  FUN_146b1c152(&local_28);
  if (1 < local_20) {
    lVar1 = (longlong)*(int *)(param_1 + 0x218) * 0x10;
    if (*(int *)(**(longlong **)(param_1 + 0x208) + 8 + lVar1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = *(undefined2 **)(**(longlong **)(param_1 + 0x208) + lVar1);
    }
    local_58 = 1;
    FUN_140807d8e(param_1 + 0x220,local_48,local_28,puVar2);
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x68))(*(longlong **)(param_1 + 0x130),local_48)
    ;
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1eed4 FUN_146b1eed4 body=328 status=ok
// SIG undefined FUN_146b1eed4(void)

void FUN_146b1eed4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 == (longlong *)0x0) {
LAB_146b1eefa:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar5[1];
    do {
      if (iVar4 == 0) goto LAB_146b1eefa;
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(plVar5 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar7);
    local_38 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plStack_30 = plVar5;
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
  FUN_146b1e0d8(param_1);
  plVar5 = *(longlong **)(param_1 + 0x238);
  bVar7 = true;
  if (plVar5 == (longlong *)0x0) {
LAB_146b1ef45:
    plVar5 = (longlong *)0x0;
LAB_146b1ef47:
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x118))();
    if (bVar7) goto LAB_146b1ef78;
  }
  else {
    iVar4 = (int)plVar5[1];
    do {
      if (iVar4 == 0) goto LAB_146b1ef45;
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar6);
    if (*(longlong *)(param_1 + 0x230) == 0) {
      bVar7 = false;
      goto LAB_146b1ef47;
    }
    FUN_14291c516(*(longlong *)(param_1 + 0x230),&local_38);
  }
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
LAB_146b1ef78:
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b1f02e FUN_146b1f02e body=929 status=ok
// SIG undefined FUN_146b1f02e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146b1f02e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 **ppuVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  longlong lVar11;
  undefined8 **ppuVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 *puStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x120))(*(longlong **)(param_1 + 0x20),&local_40);
  ppuVar12 = *(undefined8 ***)(param_1 + 0x20);
  if (local_40 == (longlong *)0x0) {
    iVar6 = (*(code *)(*ppuVar12)[2])(ppuVar12);
    if (iVar6 == 2) {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
      ppuVar12 = (undefined8 **)CONCAT71((int7)((ulonglong)ppuVar12 >> 8),1);
      if (cVar4 == '\x01') goto LAB_146b1f29f;
      ppuVar12 = &local_58;
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),ppuVar12)
      ;
      puVar9 = local_58;
      if (local_50 == 0) {
        puVar9 = (undefined8 *)&DAT_149dfb77a;
      }
      FUN_1446f470e(&local_48,puVar9,1);
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (*(int *)(lVar3 + 0x1c0) == *(int *)(lVar3 + 0x1ec)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c990e08) &&
           (FUN_144b3d300(&DAT_14c990e08), DAT_14c990e08 == -1)) {
          FUN_1446f470e(&local_30,&DAT_149e8e77a,1);
          ppuVar12 = &puStack_28;
          FUN_1446f470e(ppuVar12,&DAT_149f28100,1);
          local_58 = (undefined8 *)0x0;
          local_50 = 2;
          FUN_1401b309e(&local_58,2,0);
          *local_58 = local_30;
          local_58[1] = puStack_28;
          DAT_14c990dd8 = 0;
          _DAT_14c990de0 = 0;
          DAT_14c990db8 = 0;
          _DAT_14c990dc0 = 0;
          _DAT_14c990de4 = 0xffffffff00000080;
          DAT_14c990dec = 0;
          DAT_14c990df8 = (undefined *)0x0;
          DAT_14c990e00 = 0;
          FUN_146b23f68(&DAT_14c990db8,&local_58);
          if (local_58 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          atexit(FUN_14291c6be);
          _Init_thread_footer(&DAT_14c990e08);
        }
        if (DAT_14c990dc0 != DAT_14c990dec) {
          uVar5 = (uint)((ulonglong)local_48 >> 0x10);
          uVar8 = (uint)local_48 & 0xffff;
          puVar10 = &DAT_14c990df0;
          if (DAT_14c990df8 != (undefined *)0x0) {
            puVar10 = DAT_14c990df8;
          }
          iVar6 = *(int *)(puVar10 +
                          (ulonglong)
                          (DAT_14c990e00 - 1U &
                          (int)((ulonglong)local_48 >> 0x20) + ((uint)local_48 << 0x10 | uVar8) +
                          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
          if (iVar6 != -1) {
            do {
              bVar13 = *(longlong *)(DAT_14c990db8 + (longlong)iVar6 * 0x10) == local_48;
              ppuVar12 = (undefined8 **)CONCAT71((int7)((ulonglong)ppuVar12 >> 8),bVar13);
              if (bVar13) break;
              iVar6 = *(int *)((longlong)iVar6 * 0x10 + DAT_14c990db8 + 8);
            } while (iVar6 != -1);
            goto LAB_146b1f29f;
          }
        }
      }
      else {
        uVar5 = (uint)((ulonglong)local_48 >> 0x10);
        uVar8 = (uint)local_48 & 0xffff;
        lVar11 = lVar3 + 0x1f0;
        if (*(longlong *)(lVar3 + 0x1f8) != 0) {
          lVar11 = *(longlong *)(lVar3 + 0x1f8);
        }
        iVar6 = *(int *)(lVar11 + (ulonglong)
                                  (*(int *)(lVar3 + 0x200) - 1U &
                                  (int)((ulonglong)local_48 >> 0x20) +
                                  ((uint)local_48 << 0x10 | uVar8) +
                                  (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            bVar13 = *(longlong *)(*(longlong *)(lVar3 + 0x1b8) + (longlong)iVar6 * 0x10) ==
                     local_48;
            ppuVar12 = (undefined8 **)CONCAT71((int7)((ulonglong)ppuVar12 >> 8),bVar13);
            if (bVar13) break;
            iVar6 = *(int *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar3 + 0x1b8) + 8);
          } while (iVar6 != -1);
          goto LAB_146b1f29f;
        }
      }
    }
  }
  else {
    uVar5 = (**(code **)(*local_40 + 0x58))();
    if (*(int *)(ppuVar12 + 0x2e) != *(int *)((longlong)ppuVar12 + 0x19c)) {
      ppuVar7 = ppuVar12 + 0x34;
      if ((undefined8 **)ppuVar12[0x35] != (undefined8 **)0x0) {
        ppuVar7 = (undefined8 **)ppuVar12[0x35];
      }
      iVar6 = *(int *)((longlong)ppuVar7 + (ulonglong)(*(int *)(ppuVar12 + 0x36) - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        ppuVar7 = ppuVar12 + 0x2d;
        do {
          bVar13 = *(uint *)((longlong)*ppuVar7 + (longlong)iVar6 * 0xc) == uVar5;
          ppuVar12 = (undefined8 **)CONCAT71((int7)((ulonglong)ppuVar12 >> 8),bVar13);
          if (bVar13) break;
          iVar6 = *(int *)((longlong)*ppuVar7 + (longlong)iVar6 * 0xc + 4);
        } while (iVar6 != -1);
        goto LAB_146b1f29f;
      }
    }
  }
  ppuVar12 = (undefined8 **)0x0;
LAB_146b1f29f:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppuVar12 & 0xffffffff;
}



// FUNCTION 146b1f3d0 FUN_146b1f3d0 body=127 status=ok
// SIG undefined FUN_146b1f3d0(void)

undefined4 FUN_146b1f3d0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  uint *puVar4;
  bool bVar5;
  uint local_14;
  
  cVar3 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x18))();
  lVar2 = *(longlong *)(param_2 + 0x20);
  if ((cVar3 == '\x01') &&
     ((*(char *)(lVar2 + 0x150) != '\0' || ((*(byte *)(param_1 + 0x2c) & 1) != 0)))) {
    puVar4 = (uint *)(param_1 + 0x28);
    if (*(char *)(lVar2 + 0x150) != '\0') {
      puVar4 = (uint *)(lVar2 + 0x14c);
    }
    uVar1 = *(uint *)(param_2 + 8);
    bVar5 = uVar1 < *puVar4;
  }
  else {
    local_14 = 0;
    puVar4 = (uint *)(param_1 + 0x20);
    if (*(char *)(param_1 + 0x24) == '\0') {
      puVar4 = &local_14;
    }
    if (*(char *)(lVar2 + 0x148) != '\0') {
      puVar4 = (uint *)(lVar2 + 0x144);
    }
    uVar1 = *puVar4;
    bVar5 = *(uint *)(param_2 + 4) < uVar1;
  }
  return CONCAT31((int3)(uVar1 >> 8),bVar5);
}



// FUNCTION 146b1f450 FUN_146b1f450 body=182 status=ok
// SIG undefined FUN_146b1f450(void)

void FUN_146b1f450(longlong param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  double local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x120))(*(longlong **)(param_1 + 0x20),local_40);
  FUN_146b1dbad(&local_30,local_40);
  if (local_28 == '\0') {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)local_30;
  }
  if (fVar3 <= 0.0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    uVar4 = extraout_XMM0_Da;
    if (iVar2 == 2) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
      uVar4 = extraout_XMM0_Da_00;
      if ((cVar1 == '\x01') &&
         (uVar4 = 0, *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x208) != 0)) goto LAB_146b1f4a7;
    }
    FUN_146b1ddac(uVar4,*(int *)(param_1 + 4) + 1);
  }
LAB_146b1f4a7:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1f508 FUN_146b1f508 body=241 status=ok
// SIG undefined FUN_146b1f508(void)

void FUN_146b1f508(LPCRITICAL_SECTION param_1,undefined8 *param_2,undefined8 *param_3,
                  undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection(param_1);
  if ((param_1[1].LockCount != 0) &&
     (p_Var3 = param_1[1].DebugInfo, p_Var3 != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    local_40 = *param_3;
    local_38 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    local_50 = *param_2;
    local_48 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (**(code **)(*(longlong *)p_Var3 + 0x60))(p_Var3,&local_50,&local_40,param_4);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1f5fa FUN_146b1f5fa body=429 status=ok
// SIG undefined FUN_146b1f5fa(void)

void FUN_146b1f5fa(longlong param_1,float param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  LARGE_INTEGER *pLVar6;
  undefined ***pppuVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  longlong *local_90;
  LARGE_INTEGER local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xe0))(*(longlong **)(param_1 + 0x20),local_88);
  lVar5 = FUN_141054386();
  pLVar6 = (LARGE_INTEGER *)(lVar5 + 0x14);
  if ((undefined1)local_88[0].s.HighPart != '\0') {
    pLVar6 = local_88;
  }
  fVar8 = *(float *)pLVar6;
  if ((fVar8 != 0.0) || (NAN(fVar8))) {
    QueryPerformanceCounter(local_88);
    fVar8 = fVar8 - (float)(((double)local_88[0].QuadPart * DAT_14c83f420 + 16777216.0) -
                           *(double *)(param_1 + 0x10));
    if (fVar8 < param_2) {
      FUN_146b1fbb4(param_1,param_3,fVar8);
      goto LAB_146b1f759;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  plVar4 = *(longlong **)(param_1 + 0x28);
  if (plVar4 == (longlong *)0x0) {
    lVar5 = FUN_141054386();
    lVar5 = *(longlong *)(lVar5 + 0x20);
  }
  else {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    lVar5 = FUN_141054386();
    lVar5 = *(longlong *)(lVar5 + 0x20);
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149f2afb0;
  local_50 = (undefined1)param_3;
  local_88[0].QuadPart = (LONGLONG)FUN_14292080a;
  local_60 = uVar3;
  local_58 = plVar4;
  (**(code **)(**(longlong **)(lVar5 + 0x28) + 0x60))
            (*(longlong **)(lVar5 + 0x28),local_98,local_88,param_2);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
      }
    }
  }
  if ((code *)local_88[0].QuadPart != (code *)0x0) {
    pppuVar7 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar7 = &local_68;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_146b1f759:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1f7a8 FUN_146b1f7a8 body=96 status=ok
// SIG undefined FUN_146b1f7a8(void)

void FUN_146b1f7a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c990e48) {
    FUN_144b3d300(&DAT_14c990e48);
    if (DAT_14c990e48 == -1) {
      FUN_146b1fdea();
      atexit(FUN_14291d09c);
      _Init_thread_footer(&DAT_14c990e48);
      return;
    }
  }
  return;
}



// FUNCTION 146b1f808 FUN_146b1f808 body=127 status=ok
// SIG undefined FUN_146b1f808(void)

undefined8 *
FUN_146b1f808(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  char cVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149f29b78;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  cVar1 = *(char *)(param_2 + 1);
  *(char *)((longlong)param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 4) = *param_2;
  }
  cVar1 = *(char *)(param_4 + 1);
  *(char *)((longlong)param_1 + 0x2c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 5) = *param_4;
  }
  cVar1 = *(char *)(param_3 + 1);
  *(char *)(param_1 + 7) = cVar1;
  if (cVar1 == '\x01') {
    param_1[6] = *param_3;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 10),4000);
  return param_1;
}



// FUNCTION 146b1f888 FUN_146b1f888 body=277 status=ok
// SIG undefined FUN_146b1f888(void)

void FUN_146b1f888(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_149f29b78;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 10);
  EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)(param_1 + 9);
  if ((longlong)iVar2 != 0) {
    lVar4 = param_1[8];
    lVar5 = 0;
    do {
      if (*(int *)(lVar4 + 4 + lVar5) != 0) {
        FUN_146b1f7a8();
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c990e18);
        DAT_14c990e10 = DAT_14c990e10 + -1;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c990e18);
      }
      lVar5 = lVar5 + 0x30;
    } while ((longlong)iVar2 * 0x30 != lVar5);
  }
  LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection(lpCriticalSection);
  FUN_146b23ee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146b1f935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146b1f99e FUN_146b1f99e body=533 status=ok
// SIG undefined FUN_146b1f99e(void)

longlong *
FUN_146b1f99e(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_14001cc68(0x270,0x10);
  plVar5 = (longlong *)FUN_141054386();
  (**(code **)(*plVar5 + 0x40))(plVar5,local_58);
  local_60 = *(longlong *)(param_1 + 0x10);
  if (local_60 == 0) {
    local_60 = 0;
    local_68 = 0;
  }
  else {
    iVar3 = *(int *)(local_60 + 8);
    local_68 = 0;
    do {
      if (iVar3 == 0) {
        local_60 = 0;
        goto LAB_146b1fa2c;
      }
      LOCK();
      iVar2 = *(int *)(local_60 + 8);
      bVar7 = iVar3 == iVar2;
      if (bVar7) {
        *(int *)(local_60 + 8) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar7);
    local_68 = *(undefined8 *)(param_1 + 8);
  }
LAB_146b1fa2c:
  local_70 = param_9;
  local_78 = param_8;
  local_80 = param_7;
  local_88 = param_6;
  local_90 = param_5;
  local_98 = param_4;
  FUN_146b1de66(lVar4,&local_68,local_58,param_3);
  *param_2 = lVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149f2af90;
  plVar5[2] = lVar4;
  param_2[1] = (longlong)plVar5;
  if ((lVar4 == 0) ||
     (((*(longlong *)(lVar4 + 8) != 0 && (*(longlong *)(lVar4 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar4 + 0x10) + 8))))) goto LAB_146b1fb62;
  if (plVar5 == (longlong *)0x0) {
    *(longlong *)(lVar4 + 8) = lVar4;
    plVar6 = *(longlong **)(lVar4 + 0x10);
    if (plVar6 == (longlong *)0x0) goto LAB_146b1fb62;
LAB_146b1fae2:
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    *(longlong **)(lVar4 + 0x10) = plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_146b1fb62;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong *)(lVar4 + 8) = lVar4;
    if (*(longlong **)(lVar4 + 0x10) != plVar5) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (plVar6 != (longlong *)0x0) goto LAB_146b1fae2;
      *(longlong **)(lVar4 + 0x10) = plVar5;
    }
  }
  LOCK();
  plVar6 = plVar5 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_146b1fb62:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b1fbb4 FUN_146b1fbb4 body=318 status=ok
// SIG undefined FUN_146b1fbb4(void)

void FUN_146b1fbb4(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined ***pppuVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  longlong *local_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = *(longlong **)(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x28);
  plVar5 = local_50;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_149f2afd0;
  local_78[0] = FUN_142920aac;
  local_48 = plVar2;
  local_40 = param_2;
  cVar3 = (**(code **)(*plVar5 + 0x140))();
  lVar4 = FUN_141054386();
  if (cVar3 == '\0') {
    FUN_146b1c66e(*(longlong *)(lVar4 + 0x20),local_78,param_3);
  }
  else {
    plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0x20) + 0x28);
    (**(code **)(*plVar5 + 0x60))(plVar5,local_88,local_78,param_3);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_80 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  }
  if (local_78[0] != (code *)0x0) {
    pppuVar6 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar6 = &local_58;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b1fcf4 FUN_146b1fcf4 body=244 status=ok
// SIG undefined FUN_146b1fcf4(void)

void FUN_146b1fcf4(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  fVar3 = 0.0;
  if (0.0 < param_2) {
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
      iVar1 = *(int *)(param_1 + 0x48);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
      if (iVar1 == 0) break;
      lVar2 = FUN_141054386();
      (**(code **)(**(longlong **)(lVar2 + 0x20) + 8))(*(longlong **)(lVar2 + 0x20),0x3c83126f);
      local_98 = local_90;
      FUN_14291c86c(param_1,local_84,local_88,local_8c);
      FUN_14000f986(0x3c83126f);
      fVar3 = fVar3 + 0.016;
    } while (fVar3 < param_2);
  }
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1fdea FUN_146b1fdea body=159 status=ok
// SIG undefined FUN_146b1fdea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146b1fdea(void)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  DAT_14c990e10 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c990e18);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c990e18,4000);
  _DAT_14c990e40 = 2;
  FUN_146b1fe8a(&DAT_14c990e10);
  uVar1 = FUN_145857cde();
  FUN_146b240de(local_50);
  FUN_145aa4344(uVar1,local_58,local_50);
  FUN_1401cb1ee(local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1fe8a FUN_146b1fe8a body=137 status=ok
// SIG undefined FUN_146b1fe8a(void)

void FUN_146b1fe8a(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  local_38 = &DAT_14c872ce8;
  cVar1 = FUN_1449da20c(DAT_14c872ce0,L"HTTP.Retry",L"RetryManagerVerbosityLevel");
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1467e9064(local_28);
  }
  *(undefined1 *)(param_1 + 0x31) = uVar2;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b1ff14 FUN_146b1ff14 body=268 status=ok
// SIG undefined FUN_146b1ff14(void)

void FUN_146b1ff14(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = (int)param_2[1];
  if (iVar2 == DAT_14c872cf0) {
    if (1 < iVar2) {
      lVar3 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*param_2 + lVar3);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(DAT_14c872ce8 + lVar3);
        if (uVar5 != uVar7) break;
        if (uVar5 == 0) goto LAB_146b1ff9f;
LAB_146b1ff6a:
        lVar3 = lVar3 + 2;
      }
      if ((uVar7 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar8 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_146b1ff6a;
      }
      if (uVar5 != uVar7) goto LAB_146b1fff8;
    }
  }
  else if (DAT_14c872cf0 + iVar2 != 1) goto LAB_146b1fff8;
LAB_146b1ff9f:
  FUN_140056680(&local_30,L"HTTP.Retry");
  puVar4 = local_30;
  if (local_28 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_28 + -1;
  if (local_28 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_1456cf568(param_3,uVar1,&local_30);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (iVar2 != -1) {
    FUN_146b1fe8a(param_1);
  }
LAB_146b1fff8:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b20022 FUN_146b20022 body=172 status=ok
// SIG undefined FUN_146b20022(void)

void FUN_146b20022(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
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
  *(undefined ***)p_Var1 = &PTR_FUN_149f2b060;
  (p_Var1->ProcessLocksList).Blink = param_2;
  *(code **)&p_Var1->EntryCount = FUN_14291d0c6;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b200ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 146b200ce FUN_146b200ce body=61 status=ok
// SIG undefined FUN_146b200ce(void)

void FUN_146b200ce(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b2011c FUN_146b2011c body=65 status=ok
// SIG undefined FUN_146b2011c(void)

void FUN_146b2011c(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined2 *)(param_1 + 0x18) = 0x101;
  return;
}



// FUNCTION 146b2015e FUN_146b2015e body=55 status=ok
// SIG undefined FUN_146b2015e(void)

void FUN_146b2015e(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,8);
  *puVar2 = 0;
  puVar2[1] = param_2;
  LOCK();
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  *(undefined8 **)(param_1 + 0x30) = puVar2;
  UNLOCK();
  *puVar1 = puVar2;
  return;
}



// FUNCTION 146b20196 FUN_146b20196 body=55 status=ok
// SIG undefined FUN_146b20196(void)

void FUN_146b20196(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,8);
  *puVar2 = 0;
  puVar2[1] = param_2;
  LOCK();
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  *(undefined8 **)(param_1 + 0x40) = puVar2;
  UNLOCK();
  *puVar1 = puVar2;
  return;
}



// FUNCTION 146b201d4 FUN_146b201d4 body=189 status=ok
// SIG undefined FUN_146b201d4(void)

void FUN_146b201d4(longlong param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  LARGE_INTEGER local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  QueryPerformanceCounter(&local_38);
  dVar1 = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  dVar2 = dVar1 - *(double *)(param_1 + 0x18);
  *(double *)(param_1 + 0x18) = dVar1;
  (**(code **)(*(longlong *)(param_1 + -8) + 0x78))
            (param_1 + -8,CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2));
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_38.QuadPart = 0;
    uStack_30 = 0;
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_14291a130(param_1 + -8,&local_38,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38.QuadPart != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b20292 FUN_146b20292 body=509 status=ok
// SIG undefined FUN_146b20292(void)

undefined8 *
FUN_146b20292(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  longlong local_a8;
  longlong local_98;
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = *param_3;
  lVar4 = param_3[2];
  param_3[2] = 0;
  local_68 = param_3[6];
  uStack_60 = param_3[7];
  local_78 = (undefined4)param_3[4];
  uStack_74 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_70 = (undefined4)param_3[5];
  uStack_6c = *(undefined4 *)((longlong)param_3 + 0x2c);
  if (lVar3 != 0) {
    *param_3 = 0;
  }
  local_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  local_a8 = param_1;
  local_98 = lVar3;
  FUN_1446efa72(&local_c8,0,7,0x10);
  local_c0 = 7;
  *local_c8 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_c8[2] = lVar7;
  *local_c8 = &PTR_FUN_149f2b0d0;
  local_c8[4] = param_1;
  local_c8[6] = lVar3;
  local_c8[8] = lVar4;
  local_88 = (longlong *)0x0;
  *(undefined4 *)(local_c8 + 0xc) = (undefined4)local_68;
  *(undefined4 *)((longlong)local_c8 + 100) = local_68._4_4_;
  *(undefined4 *)(local_c8 + 0xd) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)local_c8 + 0x6c) = uStack_60._4_4_;
  *(undefined4 *)(local_c8 + 10) = local_78;
  *(undefined4 *)((longlong)local_c8 + 0x54) = uStack_74;
  *(undefined4 *)(local_c8 + 0xb) = uStack_70;
  *(undefined4 *)((longlong)local_c8 + 0x5c) = uStack_6c;
  if (lVar3 != 0) {
    local_98 = 0;
  }
  local_d8 = param_4;
  FUN_1405f67fc(param_1 + 0xb8,local_b8,&local_c8,L"FLegacyHttpThread_AddHttpThreadTask");
  plVar6 = (longlong *)FUN_146b2473f(local_b8);
  *param_2 = plVar6 + 2;
  param_2[1] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_b0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  FUN_1449db362(&local_c8);
  if (local_98 != 0) {
    plVar6 = (longlong *)&local_78;
    if (local_88 != (longlong *)0x0) {
      plVar6 = local_88;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b20490 FUN_146b20490 body=108 status=ok
// SIG undefined FUN_146b20490(void)

void FUN_146b20490(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_20);
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b20500 FUN_146b20500 body=112 status=ok
// SIG undefined FUN_146b20500(void)

undefined8 FUN_146b20500(longlong *param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  LOCK();
  *(undefined4 *)(param_1 + 0x12) = 0;
  UNLOCK();
  QueryPerformanceCounter(&local_20);
  param_1[4] = (longlong)((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0);
  (**(code **)(*param_1 + 0x58))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b20572 FUN_146b20572 body=3 status=ok
// SIG undefined FUN_146b20572(void)

undefined4 FUN_146b20572(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 146b20582 FUN_146b20582 body=89 status=ok
// SIG undefined FUN_146b20582(void)

undefined8 * FUN_146b20582(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x138);
  _Src = *(void **)(param_1 + 0x130);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 146b205e6 FUN_146b205e6 body=185 status=ok
// SIG undefined FUN_146b205e6(void)

undefined8 * FUN_146b205e6(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *_Src;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  
  iVar4 = *(int *)(param_3 + 1);
  if (iVar4 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar5);
  iVar4 = FUN_1457511aa((longlong *)(param_1 + 0x178),uVar3,param_3);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x178);
    if ((lVar1 + (longlong)iVar4 * 0x28 + 0x10U & 0xffffffffffffffef) != 0) {
      lVar1 = lVar1 + (longlong)iVar4 * 0x28;
      *param_2 = 0;
      iVar4 = *(int *)(lVar1 + 0x18);
      _Src = *(void **)(lVar1 + 0x10);
      *(int *)(param_2 + 1) = iVar4;
      if ((longlong)iVar4 != 0) {
        FUN_1446dd670(param_2,iVar4,0);
        memcpy((void *)*param_2,_Src,(longlong)iVar4 * 2);
        return param_2;
      }
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 146b206a0 FUN_146b206a0 body=444 status=ok
// SIG undefined FUN_146b206a0(void)

/* WARNING: Removing unreachable block (ram,0x000146b207f8) */

longlong * FUN_146b206a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  local_58 = param_1 + 0x188;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x1a0) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = (longlong *)(param_1 + 0x178);
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    do {
      lVar2 = *local_88;
      lVar3 = (longlong)iStack_6c;
      FUN_1449b8608(local_98,lVar2 + lVar3 * 0x28,&DAT_149e35320);
      FUN_144a7dea0(&local_60,local_98,lVar2 + lVar3 * 0x28 + 0x10);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(param_2,iVar1);
      }
      lVar2 = *param_2;
      lVar3 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar2 + lVar3) = 0;
      *(undefined8 *)(lVar2 + lVar3) = local_60;
      *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_58;
      *(undefined4 *)(lVar2 + 0xc + lVar3) = local_58._4_4_;
      local_58 = 0;
      local_60 = 0;
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b2085e FUN_146b2085e body=109 status=ok
// SIG undefined FUN_146b2085e(void)

undefined8 FUN_146b2085e(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"Content-Type");
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b208dc FUN_146b208dc body=89 status=ok
// SIG undefined FUN_146b208dc(void)

undefined8 * FUN_146b208dc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x158);
  _Src = *(void **)(param_1 + 0x150);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 146b2094e FUN_146b2094e body=260 status=ok
// SIG undefined FUN_146b2094e(void)

undefined8 * FUN_146b2094e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  void *_Src;
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1d0) != *(int *)(param_1 + 0x1fc)) {
    uVar1 = (uint)((ulonglong)param_3 >> 0x10);
    uVar3 = (uint)param_3 & 0xffff;
    lVar2 = param_1 + 0x200;
    if (*(longlong *)(param_1 + 0x208) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x208);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x210) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar3) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x1c8) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar4 * 0x20) == param_3) {
          if ((lVar2 + 8U & 0xfffffffffffffff7) != 0) {
            *param_2 = 0;
            iVar4 = *(int *)(lVar2 + 0x10);
            _Src = *(void **)(lVar2 + 8);
            *(int *)(param_2 + 1) = iVar4;
            if ((longlong)iVar4 != 0) {
              FUN_1446dd670(param_2,iVar4,0);
              memcpy((void *)*param_2,_Src,(longlong)iVar4 * 2);
              return param_2;
            }
            *(undefined4 *)((longlong)param_2 + 0xc) = 0;
            return param_2;
          }
          break;
        }
        iVar4 = *(int *)(lVar2 + 0x18);
      } while (iVar4 != -1);
    }
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 146b20a52 FUN_146b20a52 body=86 status=ok
// SIG undefined FUN_146b20a52(void)

void FUN_146b20a52(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &local_28;
  local_28 = param_2;
  local_18 = param_3;
  FUN_146b21a24(param_1 + 0x1c8,local_c,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b20ab6 FUN_146b20ab6 body=85 status=ok
// SIG undefined FUN_146b20ab6(void)

void FUN_146b20ab6(longlong param_1,undefined8 *param_2)

{
  if ((undefined8 *)(param_1 + 0x160) != param_2) {
    if (*(longlong *)(param_1 + 0x160) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x160) = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return;
}



// FUNCTION 146b20b0c FUN_146b20b0c body=124 status=ok
// SIG undefined FUN_146b20b0c(void)

void FUN_146b20b0c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_2 + 1);
  iVar6 = 0;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = iVar6;
  }
  puVar4 = &DAT_149dfb77a;
  puVar3 = &DAT_149dfb77a;
  if (iVar1 != 0) {
    puVar3 = (undefined2 *)*param_2;
  }
  uVar2 = FUN_14475aa65(0,puVar3,iVar5);
  FUN_140393c76(param_1 + 0x160,uVar2,1);
  if (*(int *)(param_2 + 1) != 0) {
    puVar4 = (undefined2 *)*param_2;
    iVar6 = *(int *)(param_2 + 1) + -1;
  }
  FUN_14475a98a(*(undefined8 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x168),puVar4,iVar6);
  return;
}



// FUNCTION 146b20b88 FUN_146b20b88 body=81 status=ok
// SIG undefined FUN_146b20b88(void)

void FUN_146b20b88(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  local_18 = param_3;
  FUN_140ac5c08(param_1 + 0x178,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b20bda FUN_146b20bda body=302 status=ok
// SIG undefined FUN_146b20bda(void)

void FUN_146b20bda(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_2 + 1);
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  if ((iVar4 < 1) || (0x7ffffffe < *(int *)(param_3 + 1) - 2U)) goto LAB_146b20ce8;
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar2 = FUN_144a49b4a(iVar4,puVar5);
  iVar3 = FUN_1457511aa(param_1 + 0x2f,uVar2,param_2);
  if (iVar3 == -1) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
LAB_146b20ca6:
    local_38 = CONCAT44(uStack_44,local_48);
    uStack_30 = CONCAT44(uStack_3c,uStack_40);
  }
  else {
    lVar1 = param_1[0x2f] + (longlong)iVar3 * 0x28;
    local_38 = 0;
    uStack_30 = 0;
    if ((lVar1 + 0x10 != 0 && lVar1 != 0) && (*(int *)(lVar1 + 0x18) - 2U < 0x7fffffff)) {
      FUN_1449b8608(&local_48,lVar1 + 0x10,&DAT_149e19f34);
      goto LAB_146b20ca6;
    }
  }
  iVar3 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar3 = 0;
  }
  FUN_1400020e8(&local_38,*param_3,iVar3);
  (**(code **)(*param_1 + 0xb0))(param_1,param_2,&local_38);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_146b20ce8:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b20d0a FUN_146b20d0a body=334 status=ok
// SIG undefined FUN_146b20d0a(void)

void FUN_146b20d0a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined ***pppuVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  longlong *plStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar6 = FUN_144a61b4f();
  if (cVar6 != '\0') {
    if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_14291d55a(param_1);
    return;
  }
  lVar8 = FUN_141054386();
  uVar3 = *(undefined8 *)(lVar8 + 0x20);
  plStack_38 = *(longlong **)(param_1 + 0x10);
  if (plStack_38 == (longlong *)0x0) {
LAB_146b20d68:
    local_40 = 0;
    plStack_38 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar7 = (int)plStack_38[1];
    do {
      if (iVar7 == 0) goto LAB_146b20d68;
      LOCK();
      iVar5 = (int)plStack_38[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plStack_38 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
    local_40 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
    UNLOCK();
    bVar10 = false;
    LOCK();
    *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
    UNLOCK();
  }
  plVar4 = plStack_38;
  local_48 = &PTR_LAB_149f2b170;
  local_58 = (undefined ***)0x0;
  local_68[0] = &LAB_142920fc2;
  FUN_146b1c66e(uVar3,local_68,0);
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar9 = &local_48;
    if (local_58 != (undefined ***)0x0) {
      pppuVar9 = local_58;
    }
    (*(code *)(*pppuVar9)[2])(pppuVar9);
  }
  if (!bVar10) {
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
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 146b20edc FUN_146b20edc body=38 status=ok
// SIG undefined FUN_146b20edc(void)

undefined8 FUN_146b20edc(undefined8 param_1,int param_2)

{
  FUN_146b216be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b20f08 FUN_146b20f08 body=38 status=ok
// SIG undefined FUN_146b20f08(void)

undefined8 FUN_146b20f08(undefined8 param_1,int param_2)

{
  FUN_146b2488e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b20f2e FUN_146b20f2e body=45 status=ok
// SIG undefined FUN_146b20f2e(void)

longlong FUN_146b20f2e(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_146b2488e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b20f5c FUN_146b20f5c body=61 status=ok
// SIG undefined FUN_146b20f5c(void)

longlong FUN_146b20f5c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    plVar1 = (longlong *)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x40);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b20f9a FUN_146b20f9a body=45 status=ok
// SIG undefined FUN_146b20f9a(void)

longlong FUN_146b20f9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145d8b206(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b20fce FUN_146b20fce body=38 status=ok
// SIG undefined FUN_146b20fce(void)

undefined8 FUN_146b20fce(undefined8 param_1,int param_2)

{
  FUN_146b1ce54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b20ff6 FUN_146b20ff6 body=38 status=ok
// SIG undefined FUN_146b20ff6(void)

undefined8 FUN_146b20ff6(undefined8 param_1,int param_2)

{
  FUN_145d8af42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b2101e FUN_146b2101e body=38 status=ok
// SIG undefined FUN_146b2101e(void)

undefined8 FUN_146b2101e(undefined8 param_1,int param_2)

{
  FUN_146b24900();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b21044 FUN_146b21044 body=38 status=ok
// SIG undefined FUN_146b21044(void)

undefined8 FUN_146b21044(undefined8 param_1,int param_2)

{
  FUN_146b1f888();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b2106e FUN_146b2106e body=74 status=ok
// SIG undefined FUN_146b2106e(void)

undefined8 * FUN_146b2106e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f29f80;
  param_1[1] = &PTR_LAB_149f2a010;
  FUN_141504946(param_1 + 0x17);
  FUN_145d8b308(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b210c2 FUN_146b210c2 body=154 status=ok
// SIG undefined FUN_146b210c2(void)

void FUN_146b210c2(PSRWLOCK param_1)

{
  undefined1 auStack_48 [32];
  RTL_SRWLOCK local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  AcquireSRWLockExclusive(param_1);
  FUN_145c57fa4(param_1,&local_28);
  if (param_1 + 0xe == &local_28) {
    if (local_28.Ptr != (PVOID)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0xe].Ptr != (PVOID)0x0) {
      FUN_1400020a8();
    }
    param_1[0xe].Ptr = local_28.Ptr;
    local_28.Ptr = (PVOID)0x0;
    *(undefined4 *)&param_1[0xf].Ptr = local_20;
    *(undefined4 *)((longlong)&param_1[0xf].Ptr + 4) = local_1c;
  }
  ReleaseSRWLockExclusive(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2115e FUN_146b2115e body=29 status=ok
// SIG undefined FUN_146b2115e(void)

undefined8 FUN_146b2115e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b21198 FUN_146b21198 body=93 status=ok
// SIG undefined FUN_146b21198(void)

void FUN_146b21198(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2a0b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b211f6 FUN_146b211f6 body=93 status=ok
// SIG undefined FUN_146b211f6(void)

void FUN_146b211f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2a0b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146b21254 FUN_146b21254 body=126 status=ok
// SIG undefined FUN_146b21254(void)

void FUN_146b21254(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2a0b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b212c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146b212e0 FUN_146b212e0 body=21 status=ok
// SIG undefined FUN_146b212e0(void)

undefined8 FUN_146b212e0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146b212f6 FUN_146b212f6 body=492 status=ok
// SIG undefined FUN_146b212f6(void)

undefined8 * FUN_146b212f6(undefined8 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *param_1 = 0;
  iVar2 = DAT_14c990e88;
  pvVar1 = DAT_14c990e80;
  lVar4 = (longlong)DAT_14c990e88;
  *(int *)(param_1 + 1) = DAT_14c990e88;
  if (lVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,pvVar1,lVar4 * 2);
  }
  param_1[2] = 0;
  iVar2 = DAT_14c990e98;
  pvVar1 = DAT_14c990e90;
  lVar4 = (longlong)DAT_14c990e98;
  *(int *)(param_1 + 3) = DAT_14c990e98;
  if (lVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar2,0);
    memcpy((void *)param_1[2],pvVar1,lVar4 * 2);
  }
  param_1[4] = 0;
  iVar2 = DAT_14c990ea8;
  uVar3 = DAT_14c990ea0;
  *(int *)(param_1 + 5) = DAT_14c990ea8;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 4,iVar2,0);
    FUN_140b8566a(param_1[4],uVar3,iVar2);
  }
  param_1[6] = 0;
  iVar2 = DAT_14c990eb8;
  pvVar1 = DAT_14c990eb0;
  lVar4 = (longlong)DAT_14c990eb8;
  *(int *)(param_1 + 7) = DAT_14c990eb8;
  if (lVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar2,0);
    memcpy((void *)param_1[6],pvVar1,lVar4 * 2);
  }
  param_1[8] = 0;
  iVar2 = DAT_14c990ec8;
  pvVar1 = DAT_14c990ec0;
  lVar4 = (longlong)DAT_14c990ec8;
  *(int *)(param_1 + 9) = DAT_14c990ec8;
  if (lVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar2,0);
    memcpy((void *)param_1[8],pvVar1,lVar4 * 2);
  }
  param_1[10] = 0;
  iVar2 = DAT_14c990ed8;
  uVar3 = DAT_14c990ed0;
  *(int *)(param_1 + 0xb) = DAT_14c990ed8;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 10,iVar2,0);
    FUN_140b8566a(param_1[10],uVar3,iVar2);
  }
  *(undefined4 *)(param_1 + 0xc) = DAT_14c990ee0;
  return param_1;
}



// FUNCTION 146b214e4 FUN_146b214e4 body=38 status=ok
// SIG undefined FUN_146b214e4(void)

undefined8 FUN_146b214e4(undefined8 param_1,int param_2)

{
  FUN_146b2150a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b2150a FUN_146b2150a body=201 status=ok
// SIG undefined FUN_146b2150a(void)

void FUN_146b2150a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f2a320;
  if (*(char *)(param_1 + 0x44) == '\x01') {
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  *(undefined4 *)(param_1 + 0x42) = 0;
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_141191868(param_1 + 0x39);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x2f);
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_146b1d770(param_1);
  return;
}



// FUNCTION 146b215d4 FUN_146b215d4 body=37 status=ok
// SIG undefined FUN_146b215d4(void)

void FUN_146b215d4(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 800)) {
    *(undefined4 *)(param_1 + 0x324) = 0x32;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b215fa FUN_146b215fa body=84 status=ok
// SIG undefined FUN_146b215fa(void)

void FUN_146b215fa(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 == (undefined8 *)param_1[3]) {
    param_1[3] = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 == (undefined8 *)*param_1) {
      puVar1 = (undefined8 *)FUN_14001cc68(0x28,8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      return;
    }
  }
  param_1[2] = *puVar1;
  *puVar1 = 0;
  return;
}



// FUNCTION 146b2164e FUN_146b2164e body=111 status=ok
// SIG undefined FUN_146b2164e(void)

longlong * FUN_146b2164e(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 146b216be FUN_146b216be body=163 status=ok
// SIG undefined FUN_146b216be(void)

void FUN_146b216be(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f28210;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0xb);
  plVar3 = (longlong *)param_1[10];
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
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f28df0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b21762 FUN_146b21762 body=38 status=ok
// SIG undefined FUN_146b21762(void)

undefined8 FUN_146b21762(undefined8 param_1,int param_2)

{
  FUN_145dcd442();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b2179c FUN_146b2179c body=107 status=ok
// SIG undefined FUN_146b2179c(void)

void FUN_146b2179c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58 [2];
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[0] = 0;
  local_48 = (longlong *)0x0;
  FUN_1412dda24(param_1,local_68,*param_2,local_58);
  if (local_58[0] != 0) {
    plVar1 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar1 = local_38;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b21808 FUN_146b21808 body=38 status=ok
// SIG undefined FUN_146b21808(void)

undefined8 FUN_146b21808(undefined8 param_1,int param_2)

{
  FUN_145a5b346();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b2182e FUN_146b2182e body=236 status=ok
// SIG undefined FUN_146b2182e(void)

void FUN_146b2182e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  DWORD DVar2;
  longlong lVar3;
  DWORD DVar4;
  longlong lVar5;
  int iVar6;
  
  DVar2 = *(DWORD *)(param_1 + 0xe0);
  DVar4 = GetCurrentThreadId();
  if (((DVar4 == DVar2) && (*(char *)(param_1 + 0x518) == '\x01')) &&
     (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c))) {
    lVar3 = *param_2;
    lVar5 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xa8);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xb0) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar3) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            lVar3 = *(longlong *)(param_1 + 0x30);
            lVar5 = (longlong)(int)plVar1[1] * 0x80;
            if (lVar3 + lVar5 != -0x10) {
              *(undefined1 *)(lVar3 + 0x70 + lVar5) = 2;
            }
          }
          break;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  FUN_14113d03e((longlong *)(param_1 + 0x30),*param_2,param_3);
  *param_2 = 0;
  FUN_145f98130(param_1);
  return;
}



// FUNCTION 146b2191a FUN_146b2191a body=111 status=ok
// SIG undefined FUN_146b2191a(void)

void FUN_146b2191a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar10 = 0;
  lVar2 = *param_2;
  puVar10[2] = lVar2;
  puVar10[4] = param_2[2];
  param_2[2] = 0;
  lVar7 = param_2[4];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar8 = param_2[5];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar9 = param_2[7];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(puVar10 + 8) = (int)param_2[6];
  *(undefined4 *)((longlong)puVar10 + 0x44) = uVar5;
  *(int *)(puVar10 + 9) = (int)lVar9;
  *(undefined4 *)((longlong)puVar10 + 0x4c) = uVar6;
  *(int *)(puVar10 + 6) = (int)lVar7;
  *(undefined4 *)((longlong)puVar10 + 0x34) = uVar3;
  *(int *)(puVar10 + 7) = (int)lVar8;
  *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar4;
  if (lVar2 != 0) {
    *param_2 = 0;
  }
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x520);
    *(undefined8 **)(param_1 + 0x520) = puVar10;
    UNLOCK();
    LOCK();
    *puVar1 = puVar10;
    UNLOCK();
  }
  FUN_145f98130(param_1);
  return;
}



// FUNCTION 146b2199e FUN_146b2199e body=29 status=ok
// SIG undefined FUN_146b2199e(void)

undefined8 FUN_146b2199e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b219d8 FUN_146b219d8 body=46 status=ok
// SIG undefined FUN_146b219d8(void)

void FUN_146b219d8(longlong param_1,longlong param_2)

{
  FUN_141701220(param_1 + 9,(double)param_2 / 10000000.0);
  LOCK();
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfe;
  UNLOCK();
  return;
}



// FUNCTION 146b21a06 FUN_146b21a06 body=29 status=ok
// SIG undefined FUN_146b21a06(void)

undefined8 FUN_146b21a06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b21a24 FUN_146b21a24 body=329 status=ok
// SIG undefined FUN_146b21a24(void)

undefined4 * FUN_146b21a24(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b21b6e(param_1,local_48);
  FUN_146b21cf2(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_146b21c54(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146b21dd0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b21b6e FUN_146b21b6e body=229 status=ok
// SIG undefined FUN_146b21b6e(void)

int * FUN_146b21b6e(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 146b21c54 FUN_146b21c54 body=158 status=ok
// SIG undefined FUN_146b21c54(void)

undefined8 FUN_146b21c54(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_146b21d5e(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b21cf2 FUN_146b21cf2 body=107 status=ok
// SIG undefined FUN_146b21cf2(void)

undefined8 * FUN_146b21cf2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 1,iVar1,0);
    memcpy((void *)param_2[1],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 146b21d5e FUN_146b21d5e body=114 status=ok
// SIG undefined FUN_146b21d5e(void)

void FUN_146b21d5e(longlong *param_1,int param_2)

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


