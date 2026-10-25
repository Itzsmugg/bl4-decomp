// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14589e104 FUN_14589e104 body=162 status=ok
// SIG undefined FUN_14589e104(void)

void FUN_14589e104(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14589e143;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14589e143;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14589e143:
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
                    /* WARNING: Could not recover jumptable at 0x00014589e1a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14589e1a6 FUN_14589e1a6 body=259 status=ok
// SIG undefined FUN_14589e1a6(void)

undefined8 *
FUN_14589e1a6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_14b4f30c0;
  param_1[4] = &PTR_FUN_14b4f30e8;
  param_1[7] = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1413eadba(param_1 + 7,iVar1,0);
    FUN_1413ead8c(param_1[7],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  FUN_14589e2aa(param_1 + 10,param_4);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_4 + 0x118);
  *(undefined4 *)(param_1 + 0x2e) = 5;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_1459dad1c(param_1 + 0x2f,param_5);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_1449db362(param_5);
  return param_1;
}



// FUNCTION 14589e2aa FUN_14589e2aa body=198 status=ok
// SIG undefined FUN_14589e2aa(void)

undefined8 * FUN_14589e2aa(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  *param_1 = &PTR_FUN_14b4c3b18;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x10);
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  FUN_1412c5ebc(param_1 + 5,param_2 + 0x28);
  param_1[0x20] = *(undefined8 *)(param_2 + 0x100);
  lVar2 = *(longlong *)(param_2 + 0x108);
  param_1[0x21] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[0x22] = *(undefined8 *)(param_2 + 0x110);
  return param_1;
}



// FUNCTION 14589e370 FUN_14589e370 body=26 status=ok
// SIG undefined FUN_14589e370(void)

void FUN_14589e370(undefined8 param_1)

{
  FUN_1410ea50c();
  FUN_14589e38a(param_1);
  return;
}



// FUNCTION 14589e38a FUN_14589e38a body=135 status=ok
// SIG undefined FUN_14589e38a(void)

void FUN_14589e38a(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  code *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1407f4ede();
  if (lVar1 != 0) {
    lVar2 = FUN_1407f4df8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_28 = FUN_140de0f20;
      local_20 = 0;
      FUN_14589e412(param_1,lVar1,param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589e412 FUN_14589e412 body=349 status=ok
// SIG undefined FUN_14589e412(void)

void FUN_14589e412(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  lVar1 = param_1 + 0x138;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1412c63d4(param_2,2);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1412c63d4(param_2,8,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar5 = FUN_1412c63d4(param_2,0x10,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589e580 FUN_14589e580 body=44 status=ok
// SIG undefined FUN_14589e580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14589e580(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14c9a1f14 = _DAT_14c9a1f14 + -1;
  *param_1 = DAT_14c9a1f08;
  DAT_14c9a1f08 = param_1;
  return;
}



// FUNCTION 14589e5bc FUN_14589e5bc body=44 status=ok
// SIG undefined FUN_14589e5bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14589e5bc(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14c9a215c = _DAT_14c9a215c + -1;
  *param_1 = DAT_14c9a2150;
  DAT_14c9a2150 = param_1;
  return;
}



// FUNCTION 14589e5f8 FUN_14589e5f8 body=44 status=ok
// SIG undefined FUN_14589e5f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14589e5f8(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14c9a226c = _DAT_14c9a226c + -1;
  *param_1 = DAT_14c9a2260;
  DAT_14c9a2260 = param_1;
  return;
}



// FUNCTION 14589e63a FUN_14589e63a body=40 status=ok
// SIG undefined FUN_14589e63a(void)

undefined8 FUN_14589e63a(undefined8 param_1,int param_2)

{
  FUN_14589e662();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14589e662 FUN_14589e662 body=107 status=ok
// SIG undefined FUN_14589e662(void)

void FUN_14589e662(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aea6b10;
  param_1[5] = &PTR_FUN_14aea6db0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_14589e6fa(param_1);
  return;
}



// FUNCTION 14589e6da FUN_14589e6da body=31 status=ok
// SIG undefined FUN_14589e6da(void)

undefined8 FUN_14589e6da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14589e6fa FUN_14589e6fa body=70 status=ok
// SIG undefined FUN_14589e6fa(void)

void FUN_14589e6fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aeca3d0;
  param_1[5] = &PTR_FUN_14aeca670;
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14589e74e FUN_14589e74e body=31 status=ok
// SIG undefined FUN_14589e74e(void)

undefined8 FUN_14589e74e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14589e76e FUN_14589e76e body=159 status=ok
// SIG undefined FUN_14589e76e(void)

longlong * FUN_14589e76e(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_1 == (longlong *)0x0) {
    param_1 = (longlong *)0x0;
  }
  else {
    lVar1 = FUN_14589e8f4();
    if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      uVar2 = FUN_14589e80e();
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
      if (plVar3 != (longlong *)0x0) {
        uVar2 = FUN_14589e80e();
        plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
        if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014589e7fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar3 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4);
          return plVar3;
        }
      }
      uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
      plVar3 = (longlong *)FUN_1406f625c(uVar2);
      return plVar3;
    }
  }
  return param_1;
}



// FUNCTION 14589e80e FUN_14589e80e body=228 status=ok
// SIG undefined FUN_14589e80e(void)

longlong FUN_14589e80e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb637b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1486f4d15;
    local_40 = FUN_1464fe202;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxShardProvider",&DAT_14cb637b8,&DAT_1486f4d14);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb637b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589e8f4 FUN_14589e8f4 body=221 status=ok
// SIG undefined FUN_14589e8f4(void)

longlong FUN_14589e8f4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb637a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486f4d11;
    local_40 = &LAB_1464fe1bd;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x168;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxShard",&DAT_14cb637a0,&DAT_1486f4d10);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb637a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589e9dc FUN_14589e9dc body=65 status=ok
// SIG undefined FUN_14589e9dc(void)

void FUN_14589e9dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4f0aa0;
  param_1[4] = &PTR_FUN_14b4f0ac8;
  FUN_1449db362(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14589ea1e(param_1);
  return;
}



// FUNCTION 14589ea1e FUN_14589ea1e body=76 status=ok
// SIG undefined FUN_14589ea1e(void)

void FUN_14589ea1e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_14b4f0380;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1411ebbe4();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014589ea66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14589ea78 FUN_14589ea78 body=40 status=ok
// SIG undefined FUN_14589ea78(void)

undefined8 FUN_14589ea78(undefined8 param_1,int param_2)

{
  FUN_14589eaa0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14589eaa0 FUN_14589eaa0 body=106 status=ok
// SIG undefined FUN_14589eaa0(void)

void FUN_14589eaa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5ea060;
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014589eaff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14589eb12 FUN_14589eb12 body=32 status=ok
// SIG undefined FUN_14589eb12(void)

undefined8 * FUN_14589eb12(undefined8 *param_1)

{
  FUN_141021b94();
  *param_1 = &PTR_FUN_14b9a1600;
  return param_1;
}



// FUNCTION 14589eb3a FUN_14589eb3a body=32 status=ok
// SIG undefined FUN_14589eb3a(void)

undefined8 * FUN_14589eb3a(undefined8 *param_1)

{
  FUN_141021b94();
  *param_1 = &PTR_FUN_14b9a1960;
  return param_1;
}



// FUNCTION 14589eb5a FUN_14589eb5a body=40 status=ok
// SIG undefined FUN_14589eb5a(void)

undefined8 FUN_14589eb5a(undefined8 param_1,int param_2)

{
  thunk_FUN_1402d9b92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14589eb82 thunk_FUN_1402d9b92 body=5 status=ok
// SIG undefined thunk_FUN_1402d9b92(void)

void thunk_FUN_1402d9b92(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5cfba0;
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 14589eb88 FUN_14589eb88 body=162 status=ok
// SIG undefined FUN_14589eb88(void)

void FUN_14589eb88(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xb40))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589ec40 FUN_14589ec40 body=32 status=ok
// SIG undefined FUN_14589ec40(void)

undefined8 * FUN_14589ec40(undefined8 *param_1)

{
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b956190;
  return param_1;
}



// FUNCTION 14589ec70 FUN_14589ec70 body=44 status=ok
// SIG undefined FUN_14589ec70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14589ec70(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbc5d9c = _DAT_14cbc5d9c + -1;
  *param_1 = DAT_14cbc5d90;
  DAT_14cbc5d90 = param_1;
  return;
}



// FUNCTION 14589ecac FUN_14589ecac body=44 status=ok
// SIG undefined FUN_14589ecac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14589ecac(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbe4124 = _DAT_14cbe4124 + -1;
  *param_1 = DAT_14cbe4118;
  DAT_14cbe4118 = param_1;
  return;
}



// FUNCTION 14589ece8 FUN_14589ece8 body=44 status=ok
// SIG undefined FUN_14589ece8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14589ece8(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbe6e6c = _DAT_14cbe6e6c + -1;
  *param_1 = DAT_14cbe6e60;
  DAT_14cbe6e60 = param_1;
  return;
}



// FUNCTION 14589ed14 FUN_14589ed14 body=40 status=ok
// SIG undefined FUN_14589ed14(void)

undefined8 FUN_14589ed14(undefined8 param_1,int param_2)

{
  FUN_14589ed3c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14589ed3c FUN_14589ed3c body=227 status=ok
// SIG undefined FUN_14589ed3c(void)

void FUN_14589ed3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b824100;
  param_1[6] = &PTR_FUN_14b8243f0;
  param_1[7] = &PTR_LAB_14b824480;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_14589ee26(param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14589ee5e(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_14589ee94(param_1 + 0x13);
  FUN_1449db362(param_1 + 0xf);
  FUN_1449db362(param_1 + 0xd);
  FUN_1449db362(param_1 + 0xb);
  FUN_1449db362(param_1 + 9);
  thunk_FUN_140b3fd78(param_1);
  return;
}



// FUNCTION 14589ee20 thunk_FUN_140b3fd78 body=5 status=ok
// SIG undefined thunk_FUN_140b3fd78(void)

void thunk_FUN_140b3fd78(longlong param_1)

{
  FUN_140af926c(param_1 + 0x38);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14589ee26 FUN_14589ee26 body=55 status=ok
// SIG undefined FUN_14589ee26(void)

void FUN_14589ee26(longlong *param_1)

{
  FUN_14589efa2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14589ee5e FUN_14589ee5e body=53 status=ok
// SIG undefined FUN_14589ee5e(void)

void FUN_14589ee5e(longlong *param_1)

{
  FUN_14589ef48();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14589ee94 FUN_14589ee94 body=55 status=ok
// SIG undefined FUN_14589ee94(void)

void FUN_14589ee94(longlong *param_1)

{
  FUN_14589eecc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14589eecc FUN_14589eecc body=123 status=ok
// SIG undefined FUN_14589eecc(void)

void FUN_14589eecc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14589ef48 FUN_14589ef48 body=90 status=ok
// SIG undefined FUN_14589ef48(void)

void FUN_14589ef48(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14589efa2 FUN_14589efa2 body=123 status=ok
// SIG undefined FUN_14589efa2(void)

void FUN_14589efa2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14589f026 FUN_14589f026 body=313 status=ok
// SIG undefined FUN_14589f026(void)

undefined8 * FUN_14589f026(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b8f0380;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x8b] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x8c) = (int)plVar2[1];
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  *(undefined4 *)(param_1 + 0x97) = 0x2010002;
  *(undefined2 *)((longlong)param_1 + 0x4bc) = 3;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  FUN_1446f470e(param_1 + 0x9b,L"IOTD",1);
  *(undefined1 *)(param_1 + 0x9c) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  *(undefined1 *)(param_1 + 0xa3) = 1;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x539) = 0;
  *(undefined8 *)((longlong)param_1 + 0x541) = 0;
  return param_1;
}



// FUNCTION 14589f160 FUN_14589f160 body=40 status=ok
// SIG undefined FUN_14589f160(void)

undefined8 FUN_14589f160(undefined8 param_1,int param_2)

{
  FUN_14589f188();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14589f188 FUN_14589f188 body=76 status=ok
// SIG undefined FUN_14589f188(void)

void FUN_14589f188(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14abd74c0;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_14589f1d4(param_1);
  return;
}



// FUNCTION 14589f1d4 FUN_14589f1d4 body=68 status=ok
// SIG undefined FUN_14589f1d4(void)

void FUN_14589f1d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abd55a0;
  FUN_1449db362(param_1 + 0xd);
  FUN_14589f218(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14589f218 FUN_14589f218 body=77 status=ok
// SIG undefined FUN_14589f218(void)

void FUN_14589f218(longlong param_1,int param_2)

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



// FUNCTION 14589f266 FUN_14589f266 body=88 status=ok
// SIG undefined FUN_14589f266(void)

undefined8 * FUN_14589f266(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14589f2be(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 14589f2be FUN_14589f2be body=98 status=ok
// SIG undefined FUN_14589f2be(void)

void FUN_14589f2be(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14589f320 FUN_14589f320 body=122 status=ok
// SIG undefined FUN_14589f320(void)

void FUN_14589f320(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7ea90(param_1,param_2,uVar5,0x40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14589f39c FUN_14589f39c body=279 status=ok
// SIG undefined FUN_14589f39c(void)

undefined4 FUN_14589f39c(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      local_68 = (void *)0x0;
      local_60 = *(int *)(param_2 + 1);
      lVar6 = (longlong)local_60;
      _Src = (void *)*param_2;
      if (lVar6 == 0) {
        local_5c = 0;
        iVar3 = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,_Src,lVar6 * 2);
        iVar3 = local_60;
      }
      local_50 = iVar3 + -1;
      if (iVar3 == 0) {
        local_50 = 0;
      }
      local_58 = local_68;
      uVar4 = FUN_1412c97f8(*(undefined8 *)(lVar1 + lVar5));
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      bVar7 = (longlong)(int)lVar2 * 8 + -8 == lVar5;
      lVar5 = lVar5 + 8;
    } while ((byte)(bVar7 | (byte)uVar4) != 1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589f4ba FUN_14589f4ba body=261 status=ok
// SIG undefined FUN_14589f4ba(void)

void FUN_14589f4ba(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 auStack_80 [3];
  undefined2 local_68;
  undefined1 local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  auStack_80[0] = 0;
  local_68 = 8;
  FUN_14485c47a(auStack_80,*(undefined8 *)*param_1);
  local_60 = 7;
  local_58 = 0;
  if ((DAT_14c9a8cf4 & 0x20) == 0) {
    local_58 = 7;
  }
  FUN_141109e26(param_2,&DAT_14cbd2e18,&local_88);
  FUN_144a2da94(&local_88);
  local_88 = 0;
  auStack_80[0] = 0;
  local_68 = 8;
  FUN_14485c47a(auStack_80,*(undefined8 *)param_1[1]);
  local_60 = 7;
  local_58 = 0;
  if ((DAT_14c9a8cf4 & 0x20) == 0) {
    local_58 = 7;
  }
  FUN_141109e26(param_2,&DAT_14cbd2e20,&local_88);
  FUN_144a2da94(&local_88);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589f5c0 FUN_14589f5c0 body=42 status=ok
// SIG undefined FUN_14589f5c0(void)

void FUN_14589f5c0(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_1412ca22e(param_1);
      param_1 = param_1 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14589f5ea FUN_14589f5ea body=309 status=ok
// SIG undefined FUN_14589f5ea(void)

undefined4 * FUN_14589f5ea(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14589f7a0(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14589f720(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14654932e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589f720 FUN_14589f720 body=127 status=ok
// SIG undefined FUN_14589f720(void)

undefined8 FUN_14589f720(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_148813c5a(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14589f7a0 FUN_14589f7a0 body=229 status=ok
// SIG undefined FUN_14589f7a0(void)

int * FUN_14589f7a0(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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



// FUNCTION 14589f886 FUN_14589f886 body=124 status=ok
// SIG undefined FUN_14589f886(void)

longlong * FUN_14589f886(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b958620;
  FUN_14589f902(plVar3 + 2,0);
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



// FUNCTION 14589f902 FUN_14589f902 body=91 status=ok
// SIG undefined FUN_14589f902(void)

undefined8 * FUN_14589f902(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_14589f95e(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_14589f95e();
  }
  FUN_141067fd6(param_1,param_2);
  *param_1 = &PTR_FUN_14b9a3ea0;
  return param_1;
}



// FUNCTION 14589f95e FUN_14589f95e body=228 status=ok
// SIG undefined FUN_14589f95e(void)

longlong FUN_14589f95e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc15e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1465aab14;
    local_38 = &LAB_148cc4f8b;
    local_40 = &LAB_145a5f2e7;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2930;
    FUN_14081cfa3(L"/Script/OakGame",L"ZoneTravelStationObject",&DAT_14cbc15e0,&DAT_148cc4f8a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc15e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589fa44 FUN_14589fa44 body=179 status=ok
// SIG undefined FUN_14589fa44(void)

bool FUN_14589fa44(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14589faf8 FUN_14589faf8 body=42 status=ok
// SIG undefined FUN_14589faf8(void)

void FUN_14589faf8(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_1403ae46b();
  if (iVar1 != param_3) {
    return;
  }
  FUN_145acb64c(param_1);
  return;
}



// FUNCTION 14589fb22 FUN_14589fb22 body=40 status=ok
// SIG undefined FUN_14589fb22(void)

undefined8 FUN_14589fb22(undefined8 param_1,int param_2)

{
  FUN_14589fb4a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14589fb4a FUN_14589fb4a body=56 status=ok
// SIG undefined FUN_14589fb4a(void)

void FUN_14589fb4a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad1c0d0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9f5c(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14589fb82 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14589fb90 FUN_14589fb90 body=25 status=ok
// SIG undefined FUN_14589fb90(void)

undefined8 FUN_14589fb90(undefined8 param_1,undefined8 param_2)

{
  FUN_14589fbaa(param_2);
  return param_2;
}



// FUNCTION 14589fbaa FUN_14589fbaa body=476 status=ok
// SIG undefined FUN_14589fbaa(void)

undefined8 * FUN_14589fbaa(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14cb8d3c8 != (longlong *)0x0 && DAT_14cb8d3d0 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb8d3c8 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb8d3c8;
    if (DAT_14cb8d3d0 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_40);
    goto LAB_14589fcb4;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *puVar3 = &PTR_FUN_14b432b50;
  FUN_1412cbb62(puVar3 + 4);
  *puVar3 = &PTR_FUN_14b432ad0;
  puVar3[4] = &PTR_FUN_14b432af0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b432b70;
  plVar4[2] = (longlong)puVar3;
  local_38 = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    local_40 = (undefined8 *)0x0;
    goto LAB_14589fcb4;
  }
  local_40 = puVar3;
  if (((puVar3[2] != 0) && (puVar3[3] != 0)) && (0 < *(int *)(puVar3[3] + 8))) goto LAB_14589fcb4;
  if (plVar4 == (longlong *)0x0) {
    puVar3[2] = puVar3;
    plVar5 = (longlong *)puVar3[3];
    if (plVar5 != (longlong *)0x0) {
LAB_14589fd2b:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      puVar3[3] = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_14589fcaa;
    }
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    puVar3[2] = puVar3;
    if ((longlong *)puVar3[3] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)puVar3[3];
      if (plVar5 != (longlong *)0x0) goto LAB_14589fd2b;
      puVar3[3] = plVar4;
    }
LAB_14589fcaa:
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
LAB_14589fcb4:
  *param_1 = local_40;
  param_1[1] = local_38;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14589fd88 FUN_14589fd88 body=96 status=ok
// SIG undefined FUN_14589fd88(void)

ulonglong FUN_14589fd88(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14589fdcb:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14589fdcb;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 14589fde8 FUN_14589fde8 body=92 status=ok
// SIG undefined FUN_14589fde8(void)

void FUN_14589fde8(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x161) == param_2) {
    return;
  }
  *(char *)((longlong)param_1 + 0x161) = param_2;
  if (param_2 != '\0') {
    FUN_14589ff12(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014589fe15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x90))(param_1);
    return;
  }
  (**(code **)(*param_1 + 0x98))(param_1);
  FUN_1412cbe56(param_1);
  FUN_14589ff8a(param_1);
  return;
}



// FUNCTION 14589fe5c FUN_14589fe5c body=61 status=ok
// SIG undefined FUN_14589fe5c(void)

void FUN_14589fe5c(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x108) & 1) != 0) {
    *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) & 0xfe;
    FUN_14589fe9a();
    FUN_140ed07b4(param_1);
    FUN_14103b596(param_1,0);
    return;
  }
  return;
}



// FUNCTION 14589fe9a FUN_14589fe9a body=119 status=ok
// SIG undefined FUN_14589fe9a(void)

void FUN_14589fe9a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_140ed01c6();
  if (lVar1 != 0) {
    lVar2 = FUN_144a61814(lVar1,(undefined8 *)(param_1 + 0xf0));
    if (lVar2 != 0) {
      FUN_1405a424c(lVar1,*(undefined8 *)(param_1 + 0xf0));
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
    puVar3 = (undefined8 *)(param_1 + 0x100);
    lVar2 = FUN_144a61814(lVar1,puVar3);
    if (lVar2 != 0) {
      FUN_1405a424c(lVar1,*puVar3);
    }
    *puVar3 = 0;
  }
  return;
}



// FUNCTION 14589ff12 FUN_14589ff12 body=120 status=ok
// SIG undefined FUN_14589ff12(void)

void FUN_14589ff12(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    param_2 = param_1;
    FUN_1466335ce(*(longlong *)(param_1 + 0xf8) + 0x18,param_1,FUN_148dcf968);
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    param_2 = param_1;
    FUN_1466335ce(*(longlong *)(param_1 + 0x108) + 0x18,param_1,&LAB_148dcfa3c);
  }
  if ((*(char *)(param_1 + 0x161) == '\x01') && (*(longlong *)(param_1 + 0x108) != 0)) {
    uVar1 = CONCAT71((int7)((ulonglong)param_2 >> 8),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x108) + 0x28)) & 0xffffffffffffff02;
    uVar2 = CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 1);
  }
  else {
    uVar2 = 0;
  }
  FUN_1458a00a0(param_1,uVar2);
  return;
}



// FUNCTION 14589ff8a FUN_14589ff8a body=141 status=ok
// SIG undefined FUN_14589ff8a(void)

void FUN_14589ff8a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  *(undefined1 *)(param_1 + 0x162) = 0;
  iVar1 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd0);
    lVar4 = 0;
    do {
      if (*(char *)(lVar2 + 4 + lVar4) == '\x01') {
        uVar3 = *(undefined1 *)(lVar2 + 5 + lVar4);
      }
      else {
        uVar3 = 0;
      }
      FUN_1458e9c68(param_1,*(undefined4 *)(lVar2 + lVar4),uVar3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_148dd7070(param_1 + 0xd0);
    return;
  }
  return;
}



// FUNCTION 1458a0018 FUN_1458a0018 body=75 status=ok
// SIG undefined FUN_1458a0018(void)

void FUN_1458a0018(longlong param_1)

{
  longlong lVar1;
  
  if ((((*(byte *)(param_1 + 0x30) & 2) != 0) && (*(longlong *)(param_1 + 400) != 0)) &&
     (*(longlong *)(param_1 + 0x170) != 0)) {
    lVar1 = FUN_14479d2ce(param_1 + 0x80);
    if (lVar1 != 0) {
      FUN_1458a0064(*(undefined8 *)(param_1 + 400));
      return;
    }
  }
  return;
}



// FUNCTION 1458a0064 FUN_1458a0064 body=60 status=ok
// SIG undefined FUN_1458a0064(void)

void FUN_1458a0064(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x108);
  if ((bVar1 & 1) == 0) {
    *(byte *)(param_1 + 0x108) = bVar1 | 1;
    uVar2 = CONCAT31((int3)((uint)param_2 >> 8),bVar1) & 0xffffff08;
    FUN_14103b596(param_1,CONCAT31((int3)(uVar2 >> 8),(byte)uVar2 >> 3));
    FUN_1458a015c(param_1);
    return;
  }
  return;
}



// FUNCTION 1458a00a0 FUN_1458a00a0 body=187 status=ok
// SIG undefined FUN_1458a00a0(void)

void FUN_1458a00a0(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = param_1 + 0x138;
  cVar1 = FUN_14486ea84(lVar2);
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)(param_1 + 0x158);
    cVar1 = FUN_1412cbf0e(puVar3);
    if (param_2 == '\0') {
      if (cVar1 == '\0') goto LAB_1458a00e5;
      lVar2 = FUN_14008e0ae(lVar2);
      thunk_FUN_1409d14a4(lVar2 + 0x50,puVar3);
      FUN_1414ff806(&local_28);
    }
    else {
      if (cVar1 != '\0') goto LAB_1458a00e5;
      lVar2 = FUN_14008e0ae(lVar2);
      local_38 = &local_29;
      FUN_1402a4426(lVar2 + 0x50,&local_28,3,0);
    }
    *puVar3 = local_28;
  }
LAB_1458a00e5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458a015c FUN_1458a015c body=226 status=ok
// SIG undefined FUN_1458a015c(void)

void FUN_1458a015c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined1 local_91;
  undefined1 local_90 [16];
  undefined2 local_80 [2];
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = FUN_140ed01c6();
  if (lVar1 != 0) {
    local_91 = 0;
    FUN_140ed0252(local_90,param_1);
    local_78 = 0;
    local_70 = 0;
    FUN_14487d8d8(&local_78,local_90);
    local_38 = 1;
    local_a8 = local_80;
    local_80[0] = 1;
    local_7c = 0xbf800000;
    FUN_1406f4044(lVar1,param_1 + 0xf0,&local_78,0x3f800000);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
    FUN_1449db362(local_90);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458a0240 FUN_1458a0240 body=441 status=ok
// SIG undefined FUN_1458a0240(void)

undefined8 * FUN_1458a0240(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  code *local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  longlong local_50;
  longlong *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1412cbf9c(&local_50,param_3);
  if (local_50 == 0) {
    *param_2 = 0;
    goto LAB_1458a0376;
  }
  local_78 = FUN_140675972;
  local_70 = local_70 & 0xffffffff00000000;
  FUN_1458a04ee(local_60,param_1,&local_78);
  uVar3 = FUN_1412cbf12(*(longlong *)(param_1 + 0xa8) + 8);
  local_70 = 0;
  uStack_68 = 0;
  uVar4 = FUN_1406eea5e();
  lVar5 = FUN_14477b664(uVar4);
  lVar6 = FUN_1406eea5e();
  uVar4 = FUN_1406eea5e();
  FUN_1402d1bfa(&local_40,uVar4,uVar3);
  if (local_40 != (code *)0x0) {
    uStack_68 = 0;
  }
  local_78 = local_40;
  lVar7 = FUN_1406eea5e();
  if (lVar6 == 0) {
LAB_1458a0330:
    lVar7 = lVar6;
  }
  else if (lVar7 == 0) {
    lVar7 = 0;
  }
  else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)) goto LAB_1458a0330;
  if (lVar5 != lVar7) {
    uStack_68 = 0;
  }
  uVar4 = FUN_14477b664(lVar7);
  local_70 = FUN_14477b664(uVar4);
  if (local_70 != 0 && local_40 != (code *)0x0) {
    uStack_68 = uVar3;
  }
  FUN_1412cc1ac(local_50,param_2,&local_78,local_60);
LAB_1458a0376:
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458a03fa FUN_1458a03fa body=124 status=ok
// SIG undefined FUN_1458a03fa(void)

void FUN_1458a03fa(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
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



// FUNCTION 1458a0478 FUN_1458a0478 body=118 status=ok
// SIG undefined FUN_1458a0478(void)

void FUN_1458a0478(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99fe00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a0890;
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



// FUNCTION 1458a04ee FUN_1458a04ee body=428 status=ok
// SIG undefined FUN_1458a04ee(void)

longlong * FUN_1458a04ee(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x48);
  if (plVar6 == (longlong *)0x0) {
LAB_1458a05ce:
    *puVar5 = &PTR_LAB_14b99fe00;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9a0890;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1458a05ce;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b99fe00;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9a0890;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1458a069a FUN_1458a069a body=216 status=ok
// SIG undefined FUN_1458a069a(void)

undefined8 * FUN_1458a069a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458a07b8 FUN_1458a07b8 body=118 status=ok
// SIG undefined FUN_1458a07b8(void)

void FUN_1458a07b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99fe00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99fd90;
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



// FUNCTION 1458a082e FUN_1458a082e body=40 status=ok
// SIG undefined FUN_1458a082e(void)

undefined8 FUN_1458a082e(undefined8 param_1,int param_2)

{
  FUN_1458a0856();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458a0856 FUN_1458a0856 body=96 status=ok
// SIG undefined FUN_1458a0856(void)

void FUN_1458a0856(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adc9d90;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1458a08b6(param_1 + 0x14);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1403159fa(param_1);
  return;
}



// FUNCTION 1458a08b6 FUN_1458a08b6 body=53 status=ok
// SIG undefined FUN_1458a08b6(void)

void FUN_1458a08b6(longlong *param_1)

{
  FUN_1458a08ec();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458a08ec FUN_1458a08ec body=90 status=ok
// SIG undefined FUN_1458a08ec(void)

void FUN_1458a08ec(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458a0946 FUN_1458a0946 body=9 status=ok
// SIG undefined FUN_1458a0946(void)

void FUN_1458a0946(longlong param_1)

{
  FUN_1458a0950(param_1 + 0x10);
  return;
}



// FUNCTION 1458a0950 FUN_1458a0950 body=131 status=ok
// SIG undefined FUN_1458a0950(void)

void FUN_1458a0950(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b63f570;
  FUN_1449e6b18(param_1 + 0x1c);
  FUN_144760e21(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1458a09d4(param_1);
  return;
}



// FUNCTION 1458a09d4 FUN_1458a09d4 body=73 status=ok
// SIG undefined FUN_1458a09d4(void)

void FUN_1458a09d4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b24d660;
  plVar3 = (longlong *)param_1[0xb];
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
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 1458a0a1e FUN_1458a0a1e body=176 status=ok
// SIG undefined FUN_1458a0a1e(void)

void FUN_1458a0a1e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = FUN_1412cc39e(*param_2);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar4 = FUN_145c05732();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  if (((*(longlong *)(param_1 + 0x18) != 0) || (lVar5 == 0)) || (*(longlong *)(param_1 + 8) == 0))
  goto LAB_1458a0a4c;
  plVar1 = *(longlong **)(lVar5 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_1458a0aca:
    uVar4 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_1458a0aca;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 0x18) = uVar4;
LAB_1458a0a4c:
  FUN_14114f37e(lVar3);
  return;
}



// FUNCTION 1458a0ace FUN_1458a0ace body=70 status=ok
// SIG undefined FUN_1458a0ace(void)

undefined8 * FUN_1458a0ace(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b74f5f0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1458a0b1a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458a0b14 thunk_FUN_1458a0b1a body=5 status=ok
// SIG undefined thunk_FUN_1458a0b1a(void)

void thunk_FUN_1458a0b1a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acc55a0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1458a0bd6(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1458a0c0c(param_1 + 0xf);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458a0b1a FUN_1458a0b1a body=182 status=ok
// SIG undefined FUN_1458a0b1a(void)

void FUN_1458a0b1a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acc55a0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1458a0bd6(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1458a0c0c(param_1 + 0xf);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458a0bd0 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(void)

{
  FUN_144760e82();
  return;
}



// FUNCTION 1458a0bd6 FUN_1458a0bd6 body=53 status=ok
// SIG undefined FUN_1458a0bd6(void)

void FUN_1458a0bd6(longlong *param_1)

{
  FUN_1458a0c9c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458a0c0c FUN_1458a0c0c body=53 status=ok
// SIG undefined FUN_1458a0c0c(void)

void FUN_1458a0c0c(longlong *param_1)

{
  FUN_1458a0c42();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458a0c42 FUN_1458a0c42 body=90 status=ok
// SIG undefined FUN_1458a0c42(void)

void FUN_1458a0c42(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458a0c9c FUN_1458a0c9c body=90 status=ok
// SIG undefined FUN_1458a0c9c(void)

void FUN_1458a0c9c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458a0cf6 FUN_1458a0cf6 body=40 status=ok
// SIG undefined FUN_1458a0cf6(void)

undefined8 FUN_1458a0cf6(undefined8 param_1,int param_2)

{
  FUN_1458a0d1e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458a0d1e FUN_1458a0d1e body=87 status=ok
// SIG undefined FUN_1458a0d1e(void)

void FUN_1458a0d1e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8d2e40;
  FUN_1458a0db1(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1458a0d75(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458a0d75 FUN_1458a0d75 body=60 status=ok
// SIG undefined FUN_1458a0d75(void)

void FUN_1458a0d75(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x30);
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



// FUNCTION 1458a0db1 FUN_1458a0db1 body=77 status=ok
// SIG undefined FUN_1458a0db1(void)

void FUN_1458a0db1(longlong param_1,int param_2)

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



// FUNCTION 1458a0dfe FUN_1458a0dfe body=99 status=ok
// SIG undefined FUN_1458a0dfe(void)

undefined8 FUN_1458a0dfe(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  iVar1 = *(int *)(lVar5 + 0x4f0);
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar5 + 0x880))) {
    lVar2 = *(longlong *)(lVar5 + 0x878);
    lVar5 = lVar5 + 0x4f8;
    if (lVar2 != 0) {
      lVar5 = lVar2;
    }
    lVar5 = (longlong)iVar1 * 0x38 + lVar5;
    if ((lVar5 != 0) &&
       (cVar3 = FUN_144a7b75a(CONCAT71((int7)(int3)((uint)iVar1 >> 8),*(undefined1 *)(lVar5 + 0x20))
                              ,CONCAT71((int7)((ulonglong)lVar2 >> 8),7)), cVar3 != '\0')) {
      uVar4 = FUN_14030a32e(lVar5);
      *param_2 = uVar4;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1458a0e62 FUN_1458a0e62 body=101 status=ok
// SIG undefined FUN_1458a0e62(void)

void FUN_1458a0e62(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  **(undefined1 **)(param_1 + 0x40) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x14);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0xc);
  *(undefined1 *)(param_2 + 0x60) = 1;
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
  return;
}



// FUNCTION 1458a0ec8 FUN_1458a0ec8 body=101 status=ok
// SIG undefined FUN_1458a0ec8(void)

void FUN_1458a0ec8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  **(undefined1 **)(param_1 + 0x40) = 1;
  uVar3 = *(undefined8 *)(param_1 + 0x14);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0xc);
  *(undefined1 *)(param_2 + 0x60) = 1;
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
  return;
}



// FUNCTION 1458a0f2e FUN_1458a0f2e body=7875 status=ok
// SIG undefined FUN_1458a0f2e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458a0f2e(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_73a8 [32];
  undefined ***local_7388;
  undefined ***local_7380;
  undefined1 *local_7378;
  undefined8 *local_7370;
  longlong local_7368;
  longlong local_7360;
  undefined8 local_7358;
  undefined **local_7350;
  longlong *local_7348;
  undefined8 local_7340;
  undefined8 local_7338;
  undefined8 local_7330;
  undefined8 local_7328;
  undefined8 local_7320;
  undefined8 local_7318;
  undefined8 local_7310;
  undefined8 local_7308;
  undefined8 local_7300;
  undefined8 local_72f8;
  undefined8 local_72f0;
  undefined8 local_72e8;
  undefined8 local_72e0;
  undefined8 local_72d8;
  undefined8 local_72d0;
  undefined1 *local_72c8 [2];
  undefined1 *local_72b8;
  undefined8 uStack_72b0;
  undefined1 *local_72a8;
  undefined1 *puStack_72a0;
  undefined1 *local_7298 [2];
  longlong local_7288 [2];
  undefined1 *local_7278;
  undefined1 *puStack_7270;
  undefined **local_7268 [2];
  undefined **local_7258;
  undefined1 *puStack_7250;
  undefined **local_7248;
  undefined1 *puStack_7240;
  undefined **local_7238 [2];
  undefined8 local_7228;
  undefined8 local_7220;
  undefined8 local_7218;
  undefined8 local_7210;
  undefined8 local_7208;
  undefined8 local_7200;
  undefined8 local_71f8;
  undefined8 local_71f0;
  undefined8 local_71e8;
  undefined8 local_71e0;
  undefined8 local_71d8;
  undefined8 local_71d0;
  undefined8 local_71c8;
  undefined8 local_71c0;
  undefined8 local_71b8;
  undefined8 local_71b0;
  undefined8 local_71a8;
  undefined8 local_71a0;
  undefined8 local_7198;
  undefined8 local_7190;
  undefined8 local_7188;
  undefined8 uStack_7180;
  longlong *local_7160;
  longlong *local_70f8;
  undefined1 auStack_6508 [736];
  undefined **local_6228;
  undefined8 uStack_6220;
  undefined8 local_6218;
  undefined8 uStack_6210;
  longlong *local_6188;
  undefined **local_55a8;
  undefined8 uStack_55a0;
  longlong *local_5508;
  undefined **local_52c8;
  undefined4 uStack_52c0;
  undefined4 uStack_52bc;
  undefined1 local_52b8 [40];
  longlong *local_5290;
  undefined8 local_5260;
  undefined1 *puStack_5258;
  undefined2 local_5250;
  undefined1 local_5248 [32];
  longlong *local_5228;
  undefined1 local_5198 [176];
  undefined1 local_50e8 [264];
  undefined1 local_4fe0 [2472];
  undefined1 auStack_4638 [736];
  undefined **local_4358;
  longlong *plStack_4350;
  longlong *local_42b8;
  undefined **local_4078;
  undefined1 *puStack_4070;
  undefined1 local_4068 [88];
  undefined8 local_4010;
  undefined1 *puStack_4008;
  ushort local_4000;
  undefined **local_3ffc;
  undefined8 uStack_3ff4;
  undefined8 uStack_3fec;
  undefined8 local_3fe4;
  undefined8 uStack_3fdc;
  undefined4 local_3fd4;
  undefined8 local_3fd0;
  undefined8 uStack_3fc8;
  uint local_3fc0;
  undefined1 local_3fb8 [176];
  undefined1 local_3f08 [176];
  undefined1 local_3e58 [176];
  undefined8 local_3da8;
  undefined8 uStack_3da0;
  undefined1 local_3d98 [8];
  undefined1 local_3d90 [728];
  undefined8 local_3ab8;
  undefined8 uStack_3ab0;
  undefined4 local_3aa8;
  undefined4 local_3aa4;
  undefined4 uStack_3aa0;
  undefined4 uStack_3a9c;
  undefined4 uStack_3a98;
  undefined4 local_3a94;
  undefined8 local_3a90;
  undefined1 *puStack_3a88;
  undefined2 local_3a80;
  undefined4 local_3a7c;
  undefined4 uStack_3a78;
  undefined4 uStack_3a74;
  undefined4 uStack_3a70;
  undefined4 local_3a6c;
  undefined1 local_3a48 [1632];
  undefined1 local_33e8 [96];
  undefined1 local_3388 [176];
  undefined1 local_32d8 [176];
  undefined1 local_3228 [176];
  undefined1 local_3178 [176];
  undefined8 local_30c8;
  undefined8 uStack_30c0;
  undefined8 local_30b8;
  undefined8 local_30b0;
  undefined1 local_30a8;
  undefined2 local_309f;
  undefined **local_3098;
  undefined1 *puStack_3090;
  longlong *local_2ff8;
  undefined4 local_2418;
  undefined3 uStack_2414;
  undefined8 local_2410;
  undefined8 local_2408;
  undefined8 uStack_2400;
  undefined1 local_1798 [736];
  undefined1 local_14b8 [736];
  undefined1 local_11d8 [736];
  undefined1 local_ef8 [736];
  longlong local_c18 [92];
  undefined1 local_938 [736];
  undefined1 local_658 [736];
  undefined1 local_378 [744];
  ulonglong local_90;
  undefined8 uStack_48;
  
  uStack_48 = 0x1458a0f44;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_73a8;
  uVar7 = *param_1;
  FUN_1446ddc76(&local_71a0,"Scrollbar",1);
  local_7378 = (undefined1 *)FUN_145817968(uVar7,local_71a0,0,0);
  lVar6 = FUN_145a4e762();
  FUN_140a581a0(&local_4078);
  FUN_1412cc59c(&puStack_4070,lVar6);
  local_4010 = 0x3f800000;
  puStack_4008 = &DAT_3f8000003f800000;
  local_4000 = 2;
  local_3ffc = DAT_14c84635c;
  local_3fe4 = _DAT_14c98da84;
  uStack_3fdc = uRam000000014c98da8c;
  local_3fd4 = DAT_14c98da94;
  local_3fd0 = CONCAT44(uRam000000014c98da9c,_DAT_14c98da98);
  uStack_3fc8 = CONCAT44(uRam000000014c98daa4,uRam000000014c98daa0);
  local_3fc0 = DAT_14c98daa8;
  FUN_1411bc404(&local_52c8,&DAT_14c98daac);
  FUN_140f13d9e(local_3fb8,&local_52c8);
  FUN_140e9ea3a(local_378,&local_4078);
  plVar2 = local_5228;
  local_52c8 = &PTR_FUN_149ed05f0;
  if (local_5228 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5228 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5228)(local_5228);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_140e9e952(&local_4078);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_71a8,"NormalFont",1);
  FUN_1412cc6a8(uVar7,local_71a8,lVar6);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_71b0,"SmallFont",1);
  local_7368 = lVar6 + 0x180;
  FUN_1412cc6a8(uVar7,local_71b0,lVar6 + 0x180);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_71b8,"Font.Large",1);
  local_7370 = (undefined8 *)(lVar6 + 0x240);
  FUN_1412cc6a8(uVar7,local_71b8,lVar6 + 0x240);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_71c0,"NormalFontBold",1);
  FUN_1412cc6a8(uVar7,local_71c0,lVar6 + 0xc0);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_71c8,"SmallFontBold",1);
  FUN_1412cc6a8(uVar7,local_71c8,lVar6 + 0x1e0);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_71d0,"Font.Large.Bold",1);
  FUN_1412cc6a8(uVar7,local_71d0,lVar6 + 0x2a0);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_71d8,"NormalFontItalic",1);
  FUN_1412cc6a8(uVar7,local_71d8,lVar6 + 0x60);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_71e0,"NormalFontBoldItalic",1);
  FUN_1412cc6a8(uVar7,local_71e0,lVar6 + 0x120);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_71e8,"HeadingMedium",1);
  FUN_1412cc6a8(uVar7,local_71e8,lVar6 + 0x300);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_71f0,"HeadingSmall",1);
  FUN_1412cc6a8(uVar7,local_71f0,lVar6 + 0x360);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_71f8,"HeadingExtraSmall",1);
  FUN_1412cc6a8(uVar7,local_71f8,lVar6 + 0x3c0);
  uVar7 = FUN_14001cc68(0xb0,0x10);
  local_52c8 = DAT_14c967f9c;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,&local_4078,"Old/White",&DAT_149eca162);
  local_7380 = (undefined ***)CONCAT44(local_7380._4_4_,1);
  local_7388 = (undefined ***)CONCAT44(local_7388._4_4_,3);
  FUN_14140806a(uVar7,&local_4078,&local_52c8,&DAT_149e1e2f8);
  if (local_4078 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  uVar8 = *param_1;
  FUN_1446ddc76(&local_7200,"DefaultTextUnderline",1);
  FUN_1414f0b62(uVar8,local_7200,uVar7);
  FUN_140e9ea3a(&local_4078,local_378);
  FUN_140f13d9e(local_3e58,uVar7);
  FUN_140e9ea3a(local_658,&local_4078);
  FUN_140e9e952(&local_4078);
  FUN_140a581a0(&local_4078);
  local_2410 = 0;
  local_2418 = 0;
  uStack_2414 = 0;
  local_2408 = 0;
  uStack_2400 = 0x3f80000000000000;
  FUN_1446ddc76(&local_7208,&DAT_149ee9dd9,1);
  FUN_1412ce59e(&local_7198,local_7208,0x41200000,&local_2418);
  FUN_1412cc59c(&puStack_4070,&local_7198);
  local_4010 = 0x3f800000;
  puStack_4008 = &DAT_3f8000003f800000;
  local_4000 = 2;
  local_3ffc = DAT_14c84635c;
  uStack_3ff4 = 0;
  uStack_3fec = 0x3f80000000000000;
  local_3fd0 = 0x3e99999a3ca3d70a;
  uStack_3fc8 = 0x3f80000000000000;
  local_3fc0 = local_3fc0 & 0xffffff00;
  local_3098 = (undefined **)&DAT_3f8000003f800000;
  puStack_3090 = &DAT_3f8000003f800000;
  local_6228 = (undefined **)0x3ec000003ec00000;
  uStack_6220 = 0x3ec000003ec00000;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,local_c18,"Common/TextBlockHighlightShape",&DAT_149eca162);
  local_7388 = (undefined ***)CONCAT44(local_7388._4_4_,1);
  FUN_1412cc804(&local_52c8,local_c18,&local_6228,&local_3098);
  FUN_140f13d9e(local_3fb8,&local_52c8);
  FUN_140e9ea3a(local_938,&local_4078);
  plVar2 = local_5228;
  local_52c8 = &PTR_FUN_149ed05f0;
  if (local_5228 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5228 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5228)(local_5228);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_c18[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_7160;
  if (local_7160 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_7160 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_7160)(local_7160);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_7360 = lVar6;
  FUN_140e9e952(&local_4078);
  FUN_140e9ea3a(&local_4078,local_938);
  FUN_140f13d9e(local_3e58,uVar7);
  FUN_140e9ea3a(local_c18,&local_4078);
  FUN_140e9e952(&local_4078);
  uVar8 = *param_1;
  FUN_1446ddc76(&local_7210,"MonospacedText",1);
  FUN_1412cc702(uVar8,local_7210,local_938);
  uVar8 = *param_1;
  FUN_1446ddc76(&local_7218,"MonospacedUnderlinedText",1);
  FUN_1412cc702(uVar8,local_7218,local_c18);
  FUN_140e9ea3a(&local_4078,local_378);
  FUN_1412cc59c(&puStack_4070,local_7368);
  FUN_140e9ea3a(local_ef8,&local_4078);
  FUN_140e9e952(&local_4078);
  FUN_140e9ea3a(&local_4078,local_ef8);
  FUN_140f13d9e(local_3e58,uVar7);
  FUN_140e9ea3a(local_11d8,&local_4078);
  FUN_140e9e952(&local_4078);
  FUN_140e9ea3a(&local_4078,local_378);
  FUN_1412cc59c(&puStack_4070,local_7370);
  FUN_140e9ea3a(local_14b8,&local_4078);
  FUN_140e9e952(&local_4078);
  FUN_140e9ea3a(&local_4078,local_14b8);
  FUN_140f13d9e(local_3e58,uVar7);
  FUN_140e9ea3a(local_1798,&local_4078);
  FUN_140e9e952(&local_4078);
  uVar7 = *param_1;
  FUN_140e9ea3a(&local_4078,local_378);
  local_7190 = 0;
  local_7198 = (undefined **)((ulonglong)local_7198._7_1_ << 0x38);
  local_7188 = 0;
  uStack_7180 = 0x3f80000000000000;
  FUN_1446ddc76(&local_7220,"Regular",1);
  FUN_1412ce59e(&local_52c8,local_7220,0x41c00000,&local_7198);
  FUN_1412cc59c(&puStack_4070,&local_52c8);
  local_4010 = 0;
  puStack_4008 = (undefined1 *)0x3f80000000000000;
  local_4000 = local_4000 & 0xff00;
  local_3ffc = (undefined **)0x3f80000000000000;
  uStack_3ff4 = 0x3f4ccccd3f4ccccd;
  uStack_3fec = 0x3f0000003f4ccccd;
  FUN_1446ddc76(&local_7228,"EmbossedText",1);
  FUN_1412cc702(uVar7,local_7228,&local_4078);
  if (local_5290 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_5290 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_5290)(local_5290);
      LOCK();
      piVar3 = (int *)((longlong)local_5290 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_5290 + 0x10))(local_5290);
      }
    }
  }
  FUN_140e9e952(&local_4078);
  FUN_1412cd24a(&local_4078);
  FUN_140a5e6b8(local_3d98,local_378);
  local_4358 = (undefined **)&DAT_3f8000003f800000;
  plStack_4350 = (longlong *)&DAT_3f8000003f800000;
  local_55a8 = (undefined **)0x3e8000003e800000;
  uStack_55a0 = 0x3e8000003e800000;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,local_7238,"Common/TextBox_Dark",&DAT_149eca162);
  local_7388._0_4_ = 1;
  FUN_1412cc804(&local_52c8,local_7238,&local_55a8,&local_4358);
  FUN_140f13d9e(local_4068,&local_52c8);
  local_7248 = (undefined **)&DAT_3f8000003f800000;
  puStack_7240 = &DAT_3f8000003f800000;
  local_7258 = (undefined **)0x3e8000003e800000;
  puStack_7250 = (undefined1 *)0x3e8000003e800000;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,local_7268,"Common/TextBox_Hovered_Dark",&DAT_149eca162);
  local_7388._0_4_ = 1;
  FUN_1412cc804(&local_7198,local_7268,&local_7258,&local_7248);
  FUN_140f13d9e(local_3fb8,&local_7198);
  local_7278 = &DAT_3f8000003f800000;
  puStack_7270 = &DAT_3f8000003f800000;
  local_7288[0] = 0x3e8000003e800000;
  local_7288[1] = 0x3e8000003e800000;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,local_7298,"Common/TextBox_Hovered_Dark",&DAT_149eca162);
  local_7388._0_4_ = 1;
  FUN_1412cc804(&local_3098,local_7298,local_7288,&local_7278);
  FUN_140f13d9e(local_3f08,&local_3098);
  local_72a8 = &DAT_3f8000003f800000;
  puStack_72a0 = &DAT_3f8000003f800000;
  local_72b8 = (undefined1 *)0x3e8000003e800000;
  uStack_72b0 = 0x3e8000003e800000;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,local_72c8,"Common/TextBox_ReadOnly",&DAT_149eca162);
  local_7388 = (undefined ***)CONCAT44(local_7388._4_4_,1);
  FUN_1412cc804(&local_6228,local_72c8,&local_72b8,&local_72a8);
  FUN_140f13d9e(local_3e58,&local_6228);
  FUN_1412cc8ca(local_3a48,local_7378);
  FUN_1414790b6(&local_2418,&local_4078);
  plVar2 = local_6188;
  local_6228 = &PTR_FUN_149ed05f0;
  if (local_6188 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6188 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6188)(local_6188);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_72c8[0] != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_3098 = &PTR_FUN_149ed05f0;
  if (local_2ff8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2ff8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2ff8)(local_2ff8);
      LOCK();
      piVar3 = (int *)((longlong)local_2ff8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_2ff8 + 0x10))(local_2ff8);
      }
    }
  }
  if (local_7298[0] != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = local_70f8;
  local_7198 = &PTR_FUN_149ed05f0;
  if (local_70f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70f8)(local_70f8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_7268[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar2 = local_5228;
  local_52c8 = &PTR_FUN_149ed05f0;
  if (local_5228 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5228 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5228)(local_5228);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_7238[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_140ffd7a4(&local_4078);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_72d0,"DarkEditableTextBox",1);
  FUN_1412ce49c(uVar7,local_72d0,&local_2418);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_72d8,"NormalText",1);
  FUN_1412cc702(uVar7,local_72d8,local_378);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_72e0,"NormalUnderlinedText",1);
  FUN_1412cc702(uVar7,local_72e0,local_658);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_72e8,"SmallText",1);
  FUN_1412cc702(uVar7,local_72e8,local_ef8);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_72f0,"SmallUnderlinedText",1);
  FUN_1412cc702(uVar7,local_72f0,local_11d8);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_72f8,"Text.Large",1);
  FUN_1412cc702(uVar7,local_72f8,local_14b8);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_7300,"Text.Large.Underlined",1);
  FUN_1412cc702(uVar7,local_7300,local_1798);
  uVar7 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar7,&DAT_14c98da84);
  uVar8 = FUN_14001cc68(0xb0,0x10);
  local_4078 = (undefined **)0x0;
  puStack_4070 = (undefined1 *)0x3f40000000000000;
  local_52c8 = (undefined **)0x3e4000003e400000;
  uStack_52c0 = 0x3e400000;
  uStack_52bc = 0x3e400000;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,&local_7198,"Old/DashedBorder",&DAT_149eca162);
  local_7388 = (undefined ***)CONCAT44(local_7388._4_4_,1);
  FUN_1412cc804(uVar8,&local_7198,&local_52c8,&local_4078);
  if (local_7198 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  uVar9 = FUN_14001cc68(0xb0,0x10);
  local_4078 = (undefined **)&DAT_3f8000003f800000;
  puStack_4070 = &DAT_3f8000003f800000;
  local_52c8 = (undefined **)0x0;
  uStack_52c0 = 0;
  uStack_52bc = 0x3e400000;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,&local_7198,"Old/HyperlinkDotted",&DAT_149eca162);
  local_7388 = (undefined ***)CONCAT44(local_7388._4_4_,1);
  FUN_1458a33d8(uVar9,&local_7198,&local_52c8,&local_4078);
  if (local_7198 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_145c2d572(&local_52c8);
  FUN_140f13d9e(local_5248,uVar7);
  FUN_140f13d9e(local_5198,uVar9);
  FUN_1411bc404(&local_7198,&DAT_14c98db4c);
  FUN_140f13d9e(local_50e8,&local_7198);
  FUN_1458a349e(&local_4078,&local_52c8);
  plVar2 = local_70f8;
  local_7198 = &PTR_FUN_149ed05f0;
  if (local_70f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70f8)(local_70f8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_1458a2df2(&local_52c8);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_7308,"NormalEditableText",1);
  FUN_1412cffe2(uVar4,local_7308,&local_4078);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_7310,"EditableText.SelectionBackground",1);
  FUN_1414f0b62(uVar4,local_7310,uVar7);
  uVar7 = *param_1;
  FUN_1446ddc76(&local_7318,"EditableText.SelectionTarget",1);
  FUN_1414f0b62(uVar7,local_7318,uVar8);
  uVar7 = *param_1;
  local_7370 = param_1;
  FUN_1446ddc76(&local_7320,"EditableText.CompositionBackground",1);
  FUN_1414f0b62(uVar7,local_7320,uVar9);
  FUN_1458a2df2(&local_4078);
  FUN_1412cd24a(&local_4078);
  FUN_140a5e6b8(local_3d98,local_378);
  local_55a8 = DAT_14c84635c;
  local_7380 = &local_55a8;
  local_7388._0_4_ = 0x3f800000;
  FUN_1414fd764(&local_52c8,&DAT_14c98dc00,0x40800000,&DAT_14c98dc28);
  FUN_140f13d9e(local_4068,&local_52c8);
  local_7238[0] = DAT_14c84635c;
  local_7380 = local_7238;
  local_7388._0_4_ = 0x3f800000;
  FUN_1414fd764(&local_7198,&DAT_14c98dc00,0x40800000,&DAT_14c98dae8);
  FUN_140f13d9e(local_3fb8,&local_7198);
  local_7248 = DAT_14c84635c;
  local_7380 = &local_7248;
  local_7388._0_4_ = 0x3f800000;
  FUN_1414fd764(&local_6228,&DAT_14c98dc00,0x40800000,&DAT_14c98db10);
  FUN_140f13d9e(local_3f08,&local_6228);
  local_7258 = DAT_14c84635c;
  local_7380 = &local_7258;
  local_7388 = (undefined ***)CONCAT44(local_7388._4_4_,0x3f800000);
  FUN_1414fd764(&local_4358,&DAT_14c98dc78,0x40800000,&DAT_14c98dc28);
  FUN_140f13d9e(local_3e58,&local_4358);
  FUN_1412cc59c(local_3d90,local_7360);
  local_3da8 = 0x4040000041000000;
  uStack_3da0 = 0x4080000041000000;
  local_3ab8 = _DAT_14c98dac0;
  uStack_3ab0 = uRam000000014c98dac8;
  local_3aa8 = DAT_14c98dad0;
  local_3aa4 = _DAT_14c98db4c;
  uStack_3aa0 = uRam000000014c98db50;
  uStack_3a9c = uRam000000014c98db54;
  uStack_3a98 = uRam000000014c98db58;
  local_3a94 = DAT_14c98db5c;
  local_3a90 = 0x3f800000;
  puStack_3a88 = &DAT_3f8000003f800000;
  local_3a80 = 2;
  local_3a7c = _DAT_14c98db4c;
  uStack_3a78 = uRam000000014c98db50;
  uStack_3a74 = uRam000000014c98db54;
  uStack_3a70 = uRam000000014c98db58;
  local_3a6c = DAT_14c98db5c;
  FUN_1412cc8ca(local_3a48,local_7378);
  FUN_1414790b6(&local_3098,&local_4078);
  plVar2 = local_42b8;
  local_4358 = &PTR_FUN_149ed05f0;
  if (local_42b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_42b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_42b8)(local_42b8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_6188;
  local_6228 = &PTR_FUN_149ed05f0;
  if (local_6188 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6188 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6188)(local_6188);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_70f8;
  puVar5 = local_7370;
  local_7198 = &PTR_FUN_149ed05f0;
  if (local_70f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70f8)(local_70f8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_52c8 = &PTR_FUN_149ed05f0;
  if (local_5228 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_5228 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_5228)(local_5228);
      LOCK();
      piVar3 = (int *)((longlong)local_5228 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_5228 + 0x10))(local_5228);
      }
    }
  }
  FUN_140ffd7a4(&local_4078);
  uVar7 = *puVar5;
  FUN_1446ddc76(&local_7328,"NormalEditableTextBox",1);
  FUN_1412ce49c(uVar7,local_7328,&local_3098);
  FUN_1414790b6(&local_4078,&local_3098);
  local_7238[0] = DAT_14c84635c;
  FUN_1458a2eda(&local_7198,&DAT_14c98dc00,&DAT_14c98dc3c);
  FUN_140f13d9e(local_4068,&local_7198);
  local_7248 = DAT_14c84635c;
  FUN_1458a2eda(&local_6228,&DAT_14c98dc00,&DAT_14c98dae8);
  FUN_140f13d9e(local_3fb8,&local_6228);
  local_7258 = DAT_14c84635c;
  FUN_1458a2eda(&local_4358,&DAT_14c98dc00,&DAT_14c98db10);
  FUN_140f13d9e(local_3f08,&local_4358);
  local_7268[0] = DAT_14c84635c;
  FUN_1458a2eda(&local_55a8,&DAT_14c98dc78,&DAT_14c98dc28);
  FUN_140f13d9e(local_3e58,&local_55a8);
  FUN_1414790b6(&local_52c8,&local_4078);
  plVar2 = local_5508;
  local_55a8 = &PTR_FUN_149ed05f0;
  if (local_5508 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5508 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5508)(local_5508);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_42b8;
  local_4358 = &PTR_FUN_149ed05f0;
  if (local_42b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_42b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_42b8)(local_42b8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_6188;
  local_6228 = &PTR_FUN_149ed05f0;
  if (local_6188 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6188 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_6188)(local_6188);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_70f8;
  local_7198 = &PTR_FUN_149ed05f0;
  if (local_70f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70f8)(local_70f8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_140ffd7a4(&local_4078);
  local_7378 = (undefined1 *)*puVar5;
  FUN_1458a3616(&local_4078);
  FUN_1458a2f9e(&local_4078,&local_52c8);
  local_7298[0] = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,local_7238,"Starship/Common/chevron-up",L".svg");
  local_7380._0_4_ = 3;
  local_7388 = (undefined ***)((ulonglong)local_7388 & 0xffffffff00000000);
  FUN_14154bb44(&local_7198,local_7238,local_7298,&DAT_14c98dac0);
  local_7198 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_3388,&local_7198);
  local_72a8 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_7248,"Starship/Common/chevron-down",L".svg");
  local_7380._0_4_ = 3;
  local_7388 = (undefined ***)((ulonglong)local_7388 & 0xffffffff00000000);
  FUN_14154bb44(&local_6228,&local_7248,&local_72a8,&DAT_14c98dac0);
  local_6228 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_32d8,&local_6228);
  local_7258 = (undefined **)&DAT_3f8000003f800000;
  puStack_7250 = &DAT_3f8000003f800000;
  local_72b8 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,local_7268,"Starship/Common/search",L".svg");
  local_7380._0_4_ = 3;
  local_7388 = (undefined ***)((ulonglong)local_7388 & 0xffffffff00000000);
  FUN_14140806a(&local_4358,local_7268,&local_72b8,&local_7258);
  local_4358 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_3228,&local_4358);
  local_7278 = &DAT_3f8000003f800000;
  puStack_7270 = &DAT_3f8000003f800000;
  local_72c8[0] = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,local_7288,"Starship/Common/close",L".svg");
  local_7380 = (undefined ***)CONCAT44(local_7380._4_4_,3);
  local_7388 = (undefined ***)((ulonglong)local_7388 & 0xffffffff00000000);
  FUN_14140806a(&local_55a8,local_7288,local_72c8,&local_7278);
  local_55a8 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_3178,&local_55a8);
  local_30c8 = 0x40800000;
  uStack_30c0 = 0;
  local_30b8 = 0x402c000000000000;
  local_30b0 = 0x402c000000000000;
  local_30a8 = 1;
  local_309f = 0x101;
  FUN_1446ddc76(&local_7330,"SearchBox",1);
  FUN_1412d00e4(local_7378,local_7330,&local_4078);
  local_55a8 = &PTR_FUN_149ed05f0;
  if (local_5508 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_5508 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_5508)(local_5508);
      LOCK();
      piVar3 = (int *)((longlong)local_5508 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_5508 + 0x10))(local_5508);
      }
    }
  }
  if (local_7288[0] != 0) {
    FUN_1400020a8();
  }
  local_4358 = &PTR_FUN_149ed05f0;
  if (local_42b8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_42b8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_42b8)(local_42b8);
      LOCK();
      piVar3 = (int *)((longlong)local_42b8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_42b8 + 0x10))(local_42b8);
      }
    }
  }
  if (local_7268[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_6228 = &PTR_FUN_149ed05f0;
  if (local_6188 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6188 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_6188)(local_6188);
      LOCK();
      piVar3 = (int *)((longlong)local_6188 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_6188 + 0x10))(local_6188);
      }
    }
  }
  if (local_7248 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_7198 = &PTR_FUN_149ed05f0;
  if (local_70f8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70f8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_70f8)(local_70f8);
      LOCK();
      piVar3 = (int *)((longlong)local_70f8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_70f8 + 0x10))(local_70f8);
      }
    }
  }
  if (local_7238[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_145c1658a(&local_4078);
  FUN_140ffd7a4(&local_52c8);
  FUN_140e9ea3a(&local_4358,local_378);
  local_52c8 = &PTR_FUN_149eeb490;
  FUN_1412cd24a(local_52b8);
  FUN_140a581a0(auStack_4638);
  FUN_140a5e6b8(auStack_4638,&local_4358);
  FUN_1458a2fee(local_52b8,&local_3098);
  local_4078 = &PTR_FUN_149eeb490;
  FUN_1414790b6(local_4068,local_52b8);
  local_7378 = local_33e8;
  FUN_140e9ea3a(local_7378,auStack_4638);
  local_52c8 = &PTR_FUN_149eeb490;
  FUN_140e9e952(auStack_4638);
  FUN_140ffd7a4(local_52b8);
  puVar5 = local_7370;
  uVar7 = *local_7370;
  FUN_1446ddc76(&local_7338,"InlineEditableTextBlockStyle",1);
  FUN_1412cfebc(uVar7,local_7338,&local_4078);
  FUN_140e9ea3a(&local_52c8,&local_4358);
  lVar6 = local_7368;
  FUN_1412cc59c(&uStack_52c0,local_7368);
  FUN_140e9ea3a(&local_55a8,&local_52c8);
  FUN_140e9e952(&local_52c8);
  FUN_1414790b6(&local_52c8,&local_3098);
  FUN_1412cc59c(local_4fe0,lVar6);
  FUN_1414790b6(&local_6228,&local_52c8);
  FUN_140ffd7a4(&local_52c8);
  local_7198 = &PTR_FUN_149eeb490;
  FUN_1412cd24a(&local_7188);
  FUN_140a581a0(auStack_6508);
  FUN_140a5e6b8(auStack_6508,&local_55a8);
  FUN_1458a2fee(&local_7188,&local_6228);
  local_52c8 = &PTR_FUN_149eeb490;
  FUN_1414790b6(local_52b8,&local_7188);
  FUN_140e9ea3a(auStack_4638,auStack_6508);
  local_7198 = &PTR_FUN_149eeb490;
  FUN_140e9e952(auStack_6508);
  FUN_140ffd7a4(&local_7188);
  uVar7 = *puVar5;
  FUN_1446ddc76(&local_7340,"InlineEditableTextBlockSmallStyle",1);
  FUN_1412cfebc(uVar7,local_7340,&local_52c8);
  local_52c8 = &PTR_FUN_149eeb490;
  FUN_140e9e952(auStack_4638);
  FUN_140ffd7a4(local_52b8);
  FUN_140ffd7a4(&local_6228);
  FUN_140e9e952(&local_55a8);
  local_4078 = &PTR_FUN_149eeb490;
  FUN_140e9e952(local_7378);
  FUN_140ffd7a4(local_4068);
  FUN_140e9e952(&local_4358);
  FUN_140e9ea3a(&local_52c8,local_378);
  uStack_6220 = 0;
  local_6228 = (undefined **)((ulonglong)local_6228 & 0xff00000000000000);
  local_6218 = 0;
  uStack_6210 = 0x3f80000000000000;
  FUN_1446ddc76(&local_55a8,"Italic",1);
  uVar7 = FUN_1412ce748();
  FUN_1412ce8e2(uVar7,&local_4358);
  local_7350 = local_4358;
  local_7348 = plStack_4350;
  if (plStack_4350 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_4350 + 1) = (int)plStack_4350[1] + 1;
    UNLOCK();
  }
  local_7388 = &local_6228;
  FUN_1412ce660(&local_7198,&local_7350,0x41000000,&local_55a8);
  FUN_1412cc59c(&uStack_52c0,&local_7198);
  local_5260 = 0x3f800000;
  puStack_5258 = &DAT_3f8000003f800000;
  local_5250 = 3;
  FUN_140e9ea3a(&local_4078,&local_52c8);
  if (local_7160 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_7160 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_7160)(local_7160);
      LOCK();
      piVar3 = (int *)((longlong)local_7160 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_7160 + 0x10))(local_7160);
      }
    }
  }
  plVar2 = plStack_4350;
  if (plStack_4350 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_4350 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_4350)(plStack_4350);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_140e9e952(&local_52c8);
  uVar7 = *local_7370;
  FUN_1446ddc76(&local_7358,"HintText",1);
  FUN_1412cc702(uVar7,local_7358,&local_4078);
  FUN_140e9e952(&local_4078);
  FUN_140ffd7a4(&local_3098);
  FUN_140ffd7a4(&local_2418);
  FUN_140e9e952(local_1798);
  FUN_140e9e952(local_14b8);
  FUN_140e9e952(local_11d8);
  FUN_140e9e952(local_ef8);
  FUN_140e9e952(local_c18);
  FUN_140e9e952(local_938);
  FUN_140e9e952(local_658);
  FUN_140e9e952(local_378);
  if ((local_90 ^ (ulonglong)auStack_73a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458a2df2 FUN_1458a2df2 body=231 status=ok
// SIG undefined FUN_1458a2df2(void)

void FUN_1458a2df2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ee3340;
  param_1[0x3c] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x50];
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
  param_1[0x26] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x3a];
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
  param_1[0x10] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x24];
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
  plVar3 = (longlong *)param_1[8];
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
                    /* WARNING: Could not recover jumptable at 0x0001458a2ed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458a2eda FUN_1458a2eda body=194 status=ok
// SIG undefined FUN_1458a2eda(void)

undefined8 *
FUN_1458a2eda(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  local_70 = 0;
  local_78 = 0;
  local_50 = 0;
  local_58 = 0;
  local_68 = param_4;
  local_60 = param_2;
  FUN_1411bc492(param_1,4,0,&local_48);
  *param_1 = &PTR_FUN_149eeb588;
  local_38 = *(undefined4 *)(param_3 + 2);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0xc) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_1 + 100) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0xd) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_40._4_4_;
  *(undefined4 *)(param_1 + 0xe) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xf) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
  local_48 = uVar1;
  uStack_40 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458a2f9e FUN_1458a2f9e body=62 status=ok
// SIG undefined FUN_1458a2f9e(void)

longlong FUN_1458a2f9e(longlong param_1)

{
  char cVar1;
  
  FUN_1458a2fee(param_1 + 0x10);
  cVar1 = FUN_1458a2fdc(param_1 + 0xc90);
  if (cVar1 == '\0') {
    FUN_1412cc59c(param_1 + 0xc90,param_1 + 0x2f8);
  }
  return param_1;
}



// FUNCTION 1458a2fdc FUN_1458a2fdc body=18 status=ok
// SIG undefined FUN_1458a2fdc(void)

bool FUN_1458a2fdc(longlong *param_1)

{
  if (param_1[6] == 0) {
    return *param_1 != 0;
  }
  return true;
}



// FUNCTION 1458a2fee FUN_1458a2fee body=164 status=ok
// SIG undefined FUN_1458a2fee(void)

longlong FUN_1458a2fee(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_140f13d9e(param_1 + 0x10,param_2 + 0x10);
  FUN_140f13d9e(param_1 + 0xc0,param_2 + 0xc0);
  FUN_140f13d9e(param_1 + 0x170,param_2 + 0x170);
  FUN_140f13d9e(param_1 + 0x220,param_2 + 0x220);
  uVar1 = *(undefined4 *)(param_2 + 0x2d4);
  uVar2 = *(undefined4 *)(param_2 + 0x2d8);
  uVar3 = *(undefined4 *)(param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2d4) = uVar1;
  *(undefined4 *)(param_1 + 0x2d8) = uVar2;
  *(undefined4 *)(param_1 + 0x2dc) = uVar3;
  FUN_140a5e6b8(param_1 + 0x2e0,param_2 + 0x2e0);
  puVar5 = (undefined8 *)(param_2 + 0x5c0);
  puVar6 = (undefined8 *)(param_1 + 0x5c0);
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_1412cc8ca(param_1 + 0x630,param_2 + 0x630);
  return param_1;
}



// FUNCTION 1458a3092 FUN_1458a3092 body=190 status=ok
// SIG undefined FUN_1458a3092(void)

longlong *
FUN_1458a3092(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
             undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1458a3260(param_1,iVar1);
  }
  lVar2 = *param_1;
  local_48 = *param_3;
  *param_3 = 0;
  local_40 = (undefined4)param_3[1];
  local_3c = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_58 = param_5;
  FUN_1458a3152((longlong)iVar1 * 0x30 + lVar2,param_2,&local_48,param_4);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458a3152 FUN_1458a3152 body=148 status=ok
// SIG undefined FUN_1458a3152(void)

undefined8 *
FUN_1458a3152(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = *param_2;
  local_28 = *param_3;
  *param_3 = 0;
  local_20 = (undefined4)param_3[1];
  local_1c = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_38 = 0;
  FUN_1458a31e8(param_1 + 1,&local_28,param_4,param_5);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458a31e8 FUN_1458a31e8 body=119 status=ok
// SIG undefined FUN_1458a31e8(void)

longlong *
FUN_1458a31e8(longlong *param_1,longlong *param_2,undefined1 param_3,undefined1 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = 0;
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x15) = param_4;
  *(undefined4 *)(param_1 + 3) = param_5;
  param_1[4] = 0;
  if ((int)param_1[1] == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
    iVar2 = (int)param_1[1] + -1;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar3);
  *(undefined4 *)(param_1 + 2) = uVar1;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1458a3260 FUN_1458a3260 body=147 status=ok
// SIG undefined FUN_1458a3260(void)

void FUN_1458a3260(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 1458a32f4 FUN_1458a32f4 body=60 status=ok
// SIG undefined FUN_1458a32f4(void)

int FUN_1458a32f4(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1458a3586(param_1,iVar1);
  }
  FUN_1458a3330((longlong)iVar1 * 0x38 + *param_1,1);
  return iVar1;
}



// FUNCTION 1458a3330 FUN_1458a3330 body=34 status=ok
// SIG undefined FUN_1458a3330(void)

void FUN_1458a3330(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0x3f800000;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1 = param_1 + 7;
  }
  return;
}



// FUNCTION 1458a3352 FUN_1458a3352 body=132 status=ok
// SIG undefined FUN_1458a3352(void)

void FUN_1458a3352(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458a33d8 FUN_1458a33d8 body=196 status=ok
// SIG undefined FUN_1458a33d8(void)

undefined8 *
FUN_1458a33d8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined2 *puVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = DAT_14c84635c;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_40,puVar1,1);
  local_68 = &local_38;
  local_70 = param_5;
  local_50 = 0;
  local_58 = 0;
  local_78 = 3;
  local_60 = param_4;
  FUN_1412ce282(param_1,2,local_40,param_3);
  *param_1 = &PTR_FUN_149eeb488;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458a349e FUN_1458a349e body=113 status=ok
// SIG undefined FUN_1458a349e(void)

undefined8 * FUN_1458a349e(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR_FUN_149ee3340;
  FUN_144a87366(param_1 + 1,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0xe) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  FUN_140e361c2(param_1 + 0x10,param_2 + 0x80);
  FUN_140e361c2(param_1 + 0x26,param_2 + 0x130);
  FUN_140e361c2(param_1 + 0x3c,param_2 + 0x1e0);
  return param_1;
}



// FUNCTION 1458a350f FUN_1458a350f body=119 status=ok
// SIG undefined FUN_1458a350f(void)

undefined8 * FUN_1458a350f(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_149eda430;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0x3f800000;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 1;
  puVar1[2] = &PTR_LAB_149e668b0;
  *(undefined2 *)(puVar1 + 3) = 0;
  FUN_1405bceb4(puVar1 + 2);
  puVar1[2] = &PTR_FUN_149eda450;
  return puVar1;
}



// FUNCTION 1458a3586 FUN_1458a3586 body=143 status=ok
// SIG undefined FUN_1458a3586(void)

void FUN_1458a3586(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458a3616 FUN_1458a3616 body=227 status=ok
// SIG undefined FUN_1458a3616(void)

undefined8 * FUN_1458a3616(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eeb710;
  FUN_1412cd24a(param_1 + 2);
  param_1[0x195] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9f) = 0;
  *(undefined4 *)(param_1 + 0x196) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcb4) = 0;
  *(undefined4 *)(param_1 + 0x197) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcbc) = 0x3f800000;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0x41c00000;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined2 *)((longlong)param_1 + 0xce4) = 2;
  *(undefined1 *)((longlong)param_1 + 0xce6) = 0;
  *(undefined4 *)(param_1 + 0x19d) = 0x3f800000;
  FUN_140ca8f8e(param_1 + 0x19e);
  FUN_140ca8f8e(param_1 + 0x1b4);
  FUN_140ca8f8e(param_1 + 0x1ca);
  FUN_140ca8f8e(param_1 + 0x1e0);
  *(undefined1 *)(param_1 + 0x1fa) = 0;
  *(undefined2 *)(param_1 + 0x1fb) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfda) = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f7] = 0;
  return param_1;
}



// FUNCTION 1458a36fa FUN_1458a36fa body=425 status=ok
// SIG undefined FUN_1458a36fa(void)

undefined8 * FUN_1458a36fa(undefined8 *param_1)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_149ed2890;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x18),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1d),4000);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  FUN_1414927bc(&local_60);
  FUN_1412cfe60(&local_50,&local_60,(local_58 == 0) + ' ');
  FUN_1401aebe8(&local_50,L"SlateDebug/Fonts/LastResort.ttf",0x1f);
  if (param_1 + 0x22 == &local_50) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x22] != 0) {
      FUN_1400020a8();
    }
    param_1[0x22] = local_50;
    local_50 = 0;
    *(undefined4 *)(param_1 + 0x23) = (undefined4)local_48;
    *(undefined4 *)((longlong)param_1 + 0x11c) = local_48._4_4_;
    local_48 = 0;
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458a38a4 FUN_1458a38a4 body=39565 status=FAIL
// SIG undefined FUN_1458a38a4(void)
/* DECOMPILE FAILED */

// FUNCTION 1458ad332 FUN_1458ad332 body=42 status=ok
// SIG undefined FUN_1458ad332(void)

undefined8
FUN_1458ad332(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             float param_5)

{
  FUN_140c84580(param_2,param_3,param_5 * 0.017453292);
  return param_2;
}



// FUNCTION 1458ad35c FUN_1458ad35c body=40 status=ok
// SIG undefined FUN_1458ad35c(void)

undefined8 FUN_1458ad35c(undefined8 param_1,int param_2)

{
  FUN_1458ad384();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ad384 FUN_1458ad384 body=63 status=ok
// SIG undefined FUN_1458ad384(void)

void FUN_1458ad384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eb8090;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1458ad3c4(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458ad3c4 FUN_1458ad3c4 body=53 status=ok
// SIG undefined FUN_1458ad3c4(void)

void FUN_1458ad3c4(longlong *param_1)

{
  FUN_1458ad3fa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458ad3fa FUN_1458ad3fa body=88 status=ok
// SIG undefined FUN_1458ad3fa(void)

void FUN_1458ad3fa(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458ad460 FUN_1458ad460 body=40 status=ok
// SIG undefined FUN_1458ad460(void)

undefined8 FUN_1458ad460(undefined8 param_1,int param_2)

{
  FUN_1458ad488();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ad488 FUN_1458ad488 body=105 status=ok
// SIG undefined FUN_1458ad488(void)

void FUN_1458ad488(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b302ec0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1458ad4f2(param_1);
  return;
}



// FUNCTION 1458ad4f2 FUN_1458ad4f2 body=85 status=ok
// SIG undefined FUN_1458ad4f2(void)

void FUN_1458ad4f2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b303900;
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
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1458ad550 FUN_1458ad550 body=53 status=ok
// SIG undefined FUN_1458ad550(void)

undefined8 * FUN_1458ad550(undefined8 *param_1)

{
  FUN_14593e65c();
  *param_1 = &PTR_FUN_14b964cf0;
  param_1[0x2d] = 0x4234000042480000;
  param_1[0x2e] = 0x3f34fdf442aa0000;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  return param_1;
}



// FUNCTION 1458ad586 FUN_1458ad586 body=183 status=ok
// SIG undefined FUN_1458ad586(void)

void FUN_1458ad586(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(*param_1 + 8 + (ulonglong)param_2 * 0x10);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  lVar4 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar4 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar4 + (ulonglong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar4 + (ulonglong)param_2 * 0x10 + 4) = uVar6;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar7 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[4];
  }
  bVar5 = (byte)param_2 & 0x1f;
  puVar3 = (uint *)((longlong)plVar7 + (ulonglong)(param_2 >> 5) * 4);
  *puVar3 = *puVar3 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  return;
}



// FUNCTION 1458ad644 FUN_1458ad644 body=228 status=ok
// SIG undefined FUN_1458ad644(void)

longlong FUN_1458ad644(void)

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
  if (DAT_14cba31f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458e0a44;
    local_38 = &LAB_148bbc92b;
    local_40 = &LAB_145ab997c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 600;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxSkillNetSpecializationComponent_Paladin",&DAT_14cba31f0,
                  &DAT_148bbc92a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba31f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ad72a FUN_1458ad72a body=63 status=ok
// SIG undefined FUN_1458ad72a(void)

void FUN_1458ad72a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458ad76a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1458ad76a FUN_1458ad76a body=105 status=ok
// SIG undefined FUN_1458ad76a(void)

ulonglong FUN_1458ad76a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x18) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 1458ad7d4 FUN_1458ad7d4 body=165 status=ok
// SIG undefined FUN_1458ad7d4(void)

void FUN_1458ad7d4(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_144a7eae6();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  FUN_1458ad8ca(&local_30,*param_1,param_2,lVar2 + 0xf8);
  FUN_1458ad87a(param_1 + 0xf0,&local_30);
  FUN_1412d1286(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ad87a FUN_1458ad87a body=80 status=ok
// SIG undefined FUN_1458ad87a(void)

longlong * FUN_1458ad87a(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1412d1286(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1458ad8ca FUN_1458ad8ca body=281 status=ok
// SIG undefined FUN_1458ad8ca(void)

longlong * FUN_1458ad8ca(longlong *param_1,undefined2 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = param_4[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_4;
    lVar6 = 0;
    do {
      if (*(char *)(lVar2 + lVar6) == '\x02') {
        if (DAT_14c7627bc != 0) {
          cVar4 = FUN_14498f84a();
          if (cVar4 != '\0') {
            puVar5 = (undefined8 *)FUN_14001cc68(0x240,0x10);
            *(undefined2 *)(puVar5 + 1) = param_2;
            puVar5[2] = param_3;
            *puVar5 = &PTR_FUN_14ad45b00;
            FUN_144a7ca2c(puVar5 + 4);
            puVar5[0x46] = 0;
LAB_1458ad94f:
            iVar1 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
              FUN_1458ad9e4(param_1,iVar1);
            }
            *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = puVar5;
          }
        }
      }
      else if ((*(char *)(lVar2 + lVar6) == '\x01') && (DAT_14c7627c0 != 0)) {
        cVar4 = FUN_144a7ebcb();
        if (cVar4 != '\0') {
          puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
          *(undefined2 *)(puVar5 + 1) = param_2;
          puVar5[2] = param_3;
          *puVar5 = &PTR_FUN_14ad45eb0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          goto LAB_1458ad94f;
        }
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar3 != lVar6);
  }
  return param_1;
}



// FUNCTION 1458ad9e4 FUN_1458ad9e4 body=132 status=ok
// SIG undefined FUN_1458ad9e4(void)

void FUN_1458ad9e4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458ada68 FUN_1458ada68 body=115 status=ok
// SIG undefined FUN_1458ada68(void)

bool FUN_1458ada68(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = *(uint *)(param_1 + 0x598) + 1;
  lVar7 = (ulonglong)*(uint *)(param_1 + 0x598) * 0x50 + -0x20;
  do {
    iVar8 = iVar8 + -1;
    if (iVar8 < 1) break;
    lVar1 = *(longlong *)(param_1 + 0x590);
    pcVar2 = *(code **)(lVar1 + -0x20 + lVar7);
    plVar3 = *(longlong **)(lVar1 + -0x10 + lVar7);
    plVar6 = (longlong *)(lVar1 + lVar7);
    if (plVar3 != (longlong *)0x0) {
      plVar6 = plVar3;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar4 = (*pcVar2)(uVar5,param_2);
    lVar7 = lVar7 + -0x50;
  } while (cVar4 == '\0');
  return 0 < iVar8;
}



// FUNCTION 1458adadc FUN_1458adadc body=69 status=ok
// SIG undefined FUN_1458adadc(void)

float FUN_1458adadc(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  
  uVar1 = FUN_140280ec4(param_1 + 0x5c0);
  fVar3 = (float)FUN_143d46e84(uVar1);
  lVar2 = FUN_140280ec4(param_1 + 0x5c0);
  return fVar3 - *(float *)(lVar2 + 200);
}



// FUNCTION 1458adb22 FUN_1458adb22 body=195 status=ok
// SIG undefined FUN_1458adb22(void)

void FUN_1458adb22(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  
  lVar1 = param_1 + 0x5c0;
  uVar2 = thunk_FUN_14008e0ae(lVar1);
  lVar3 = FUN_14008e0a4(uVar2);
  fVar5 = *(float *)(lVar3 + 200);
  if ((0.0001 < param_2) && (fVar5 < 0.0001)) {
    FUN_148c08d2c(param_1 + 0x548);
  }
  if (param_2 < 0.0001) {
    FUN_148c08d33(param_1 + 0x558,fVar5);
  }
  uVar2 = thunk_FUN_14008e0ae(lVar1);
  uVar2 = FUN_14008e0a4(uVar2);
  uVar4 = thunk_FUN_14008e0ae(lVar1);
  uVar4 = FUN_14008e0a4(uVar4);
  fVar5 = (float)FUN_143d46e84(uVar4);
  FUN_1409d461e(uVar2,fVar5 - param_2,1);
  return;
}



// FUNCTION 1458adbe6 FUN_1458adbe6 body=45 status=ok
// SIG undefined FUN_1458adbe6(void)

undefined8 FUN_1458adbe6(undefined8 param_1,int param_2)

{
  FUN_1458adc14();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1458adc14 FUN_1458adc14 body=57 status=ok
// SIG undefined FUN_1458adc14(void)

void FUN_1458adc14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b298350;
  FUN_14112093f(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1458adc4e FUN_1458adc4e body=427 status=ok
// SIG undefined FUN_1458adc4e(void)

void FUN_1458adc4e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x4db9) != '\0') goto LAB_1458addaf;
  *(undefined1 *)(param_1 + 0x4db9) = 1;
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  plVar5 = (longlong *)(param_1 + -0x3b48);
  if (plVar5 == (longlong *)0x0) {
LAB_1458addd5:
    lVar4 = 0;
  }
  else {
    uVar2 = FUN_140338614();
    lVar3 = (**(code **)(*plVar5 + 0x288))(plVar5,uVar2);
    if (lVar3 == 0) goto LAB_1458addd5;
    uVar2 = FUN_140338614();
    lVar4 = FUN_144718840(lVar3,uVar2);
    if (lVar3 == lVar4) goto LAB_1458addd5;
  }
  *(longlong *)(lVar1 + 0x20) = lVar4;
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  if ((plVar5 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    *(longlong **)(lVar1 + 0x18) = plVar5;
    if (plVar5 == (longlong *)0x0) {
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
  }
  else {
    FUN_1456cec3c(plVar5);
    *(longlong **)(lVar1 + 0x18) = plVar5;
  }
  (**(code **)(*param_2 + 0x40))(param_2,param_1,0);
  local_68 = 0;
  local_58 = &PTR_LAB_14b9639a0;
  local_78 = FUN_1440dd15a;
  local_50 = plVar5;
  local_48 = param_2;
  (**(code **)(*param_2 + 0x68))(param_2,plVar5);
  FUN_140cf9190(param_1 + 0x4d88,1);
  local_80 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_1447cd2ec(param_1 + 0x4d10);
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_1400da9ba(param_1 + 0x4d20,uVar2);
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_1458ae387(plVar5,uVar2);
LAB_1458addaf:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458addfa FUN_1458addfa body=132 status=ok
// SIG undefined FUN_1458addfa(void)

void FUN_1458addfa(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x100) != 6) {
    FUN_1446efa72((undefined8 *)(param_1 + 0xf8),0,6,0x10);
    *(undefined4 *)(param_1 + 0x100) = 6;
  }
  FUN_1458ade7e(*(undefined8 *)(param_1 + 0xf8),param_2,param_3);
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x0001458ade6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1458ade7e FUN_1458ade7e body=147 status=ok
// SIG undefined FUN_1458ade7e(void)

undefined8 * FUN_1458ade7e(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149e020b0;
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
  param_1[2] = lVar2;
  *param_1 = &PTR_FUN_14b9632c0;
  param_1[3] = 0;
  FUN_14485c47a(param_1 + 3);
  lVar1 = *param_3;
  param_1[4] = lVar1;
  param_1[6] = 0;
  if (lVar1 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,param_1 + 6);
  }
  return param_1;
}



// FUNCTION 1458adf12 FUN_1458adf12 body=254 status=ok
// SIG undefined FUN_1458adf12(void)

void FUN_1458adf12(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x1d4) = param_3;
    FUN_1458ae012(param_1 + -0x2600);
    FUN_1409b545e(param_1 + -0x2600,0);
    (**(code **)(*(longlong *)(param_1 + -0xb50) + 0x30))(param_1 + -0xb50);
    FUN_1412d3686(&local_38,param_2);
    *(undefined4 *)(param_1 + 0x138) = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x13c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x140) = uStack_30;
    *(undefined4 *)(param_1 + 0x144) = uStack_2c;
    local_24 = 0;
    local_38 = DAT_14c9a6400;
    uStack_30 = 0xffffffff;
    local_48 = DAT_14cbc54b0;
    local_40 = 0xffffffff;
    FUN_140f8b8f2(param_1 + -0x2128,&local_48,&local_38);
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_1412d3646(param_1 + 0x10,uVar1);
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_1400da9ba(param_1 + 0x20,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ae012 FUN_1458ae012 body=331 status=ok
// SIG undefined FUN_1458ae012(void)

void FUN_1458ae012(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar4 != 0) {
    lVar5 = FUN_144a2f878();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      FUN_1458ae15e(param_1);
      FUN_1458ae19c(param_1);
      FUN_14485c47a(param_1 + 0x2770,lVar4);
      lVar5 = *(longlong *)(param_1 + 0x1c8);
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x2780) = 0;
        *(undefined8 *)(param_1 + 0x2788) = 0;
        uVar6 = 0;
        uVar7 = 0x3ff00000;
        *(undefined4 *)(param_1 + 0x2790) = 0;
        *(undefined4 *)(param_1 + 0x2794) = 0;
        *(undefined4 *)(param_1 + 0x2798) = 0;
        *(undefined4 *)(param_1 + 0x279c) = 0x3ff00000;
        uVar2 = DAT_14c8464f0;
        uVar1 = DAT_14c8464e8;
        *(undefined8 *)(param_1 + 0x27a0) = DAT_14c8464e0;
        *(undefined8 *)(param_1 + 0x27a8) = uVar1;
        *(undefined8 *)(param_1 + 0x27b0) = uVar2;
        uVar8 = 0;
        uVar9 = 0x3ff00000;
        uVar10 = 0;
        uVar11 = 0x3ff00000;
      }
      else {
        uVar1 = *(undefined8 *)(lVar5 + 0x248);
        uVar2 = *(undefined8 *)(lVar5 + 0x250);
        uVar3 = *(undefined8 *)(lVar5 + 600);
        *(undefined8 *)(param_1 + 0x2780) = *(undefined8 *)(lVar5 + 0x240);
        *(undefined8 *)(param_1 + 0x2788) = uVar1;
        *(undefined8 *)(param_1 + 0x2790) = uVar2;
        *(undefined8 *)(param_1 + 0x2798) = uVar3;
        uVar1 = *(undefined8 *)(lVar5 + 0x270);
        uVar2 = *(undefined8 *)(lVar5 + 0x268);
        *(undefined8 *)(param_1 + 0x27a0) = *(undefined8 *)(lVar5 + 0x260);
        *(undefined8 *)(param_1 + 0x27a8) = uVar2;
        *(undefined8 *)(param_1 + 0x27b0) = uVar1;
        uVar8 = *(undefined4 *)(lVar5 + 0x280);
        uVar9 = *(undefined4 *)(lVar5 + 0x284);
        uVar10 = *(undefined4 *)(lVar5 + 0x288);
        uVar11 = *(undefined4 *)(lVar5 + 0x28c);
        uVar6 = (undefined4)*(undefined8 *)(lVar5 + 0x290);
        uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x290) >> 0x20);
      }
      *(undefined4 *)(param_1 + 0x27b8) = uVar8;
      *(undefined4 *)(param_1 + 0x27bc) = uVar9;
      *(undefined4 *)(param_1 + 0x27c0) = uVar10;
      *(undefined4 *)(param_1 + 0x27c4) = uVar11;
      *(ulonglong *)(param_1 + 0x27c8) = CONCAT44(uVar7,uVar6);
      *(undefined4 *)(param_1 + 0x27d0) = 0;
      *(undefined1 *)(param_1 + 0x27dc) = 0;
      FUN_1458ae29c(param_1,lVar4);
      FUN_140cbebe8(param_1 + 0x30,1);
      return;
    }
  }
  return;
}



// FUNCTION 1458ae15e FUN_1458ae15e body=62 status=ok
// SIG undefined FUN_1458ae15e(void)

void FUN_1458ae15e(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) == '\x03') {
    *(undefined1 *)(param_1 + 0x2832) = 1;
  }
  *(undefined1 *)(param_1 + 0x2831) = 1;
  FUN_140c7a916(param_1);
  FUN_1405ba932(param_1,0);
  FUN_140cc0454(param_1);
  return;
}



// FUNCTION 1458ae19c FUN_1458ae19c body=256 status=ok
// SIG undefined FUN_1458ae19c(void)

void FUN_1458ae19c(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x2600) + 0x30))(param_1 + 0x2600);
  if (lVar3 == 0) goto LAB_1458ae1f1;
  lVar6 = *(longlong *)(lVar3 + 400);
  if (lVar6 == 0) {
    uVar4 = FUN_140067708();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 400) = lVar6;
  }
  lVar5 = *(longlong *)(lVar3 + 0x198);
  if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*(longlong *)(lVar3 + 0x188) != 0)) {
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_1458ae298:
      lVar5 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_1458ae298;
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x188));
    }
    *(longlong *)(lVar3 + 0x198) = lVar5;
  }
  FUN_140bd765a(param_1 + 10000,lVar5,0);
LAB_1458ae1f1:
  *(undefined1 *)(param_1 + 0x2708) = 0;
  if (*(char *)(param_1 + 0x27dc) == '\x01') {
    FUN_140cbebe8(param_1 + 0x30,0);
    return;
  }
  return;
}



// FUNCTION 1458ae29c FUN_1458ae29c body=235 status=ok
// SIG undefined FUN_1458ae29c(void)

void FUN_1458ae29c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  
  if (*(char *)(param_1 + 0x27dd) == '\0') {
    fVar6 = *(float *)(param_1 + 0x27d4);
    if (fVar6 <= 1e-08) {
      return;
    }
    fVar4 = 1.0;
  }
  else {
    lVar2 = (**(code **)(*(longlong *)(param_1 + 0x2600) + 0x30))(param_1 + 0x2600);
    if (lVar2 == 0) {
      return;
    }
    lVar1 = *(longlong *)(param_2 + 0x1c8);
    if (lVar1 == 0) {
      pdVar3 = (double *)&DAT_14c8464e0;
      dVar5 = DAT_14c8464f0;
    }
    else {
      pdVar3 = (double *)(lVar1 + 0x260);
      dVar5 = *(double *)(lVar1 + 0x270);
    }
    dVar7 = *pdVar3 - *(double *)(param_1 + 0x27a0);
    dVar8 = pdVar3[1] - *(double *)(param_1 + 0x27a8);
    dVar5 = dVar5 - *(double *)(param_1 + 0x27b0);
    fVar6 = (float)SQRT(dVar5 * dVar5 + dVar8 * dVar8 + dVar7 * dVar7);
    if (fVar6 <= 1e-08) {
      fVar4 = 1000.0;
      goto LAB_1458ae33f;
    }
    fVar4 = *(float *)(lVar2 + 0x1c0);
  }
  fVar4 = fVar4 / fVar6;
LAB_1458ae33f:
  *(float *)(param_1 + 0x27d8) = fVar4;
  return;
}



// FUNCTION 1458ae387 FUN_1458ae387 body=547 status=ok
// SIG undefined FUN_1458ae387(void)

void FUN_1458ae387(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_de8 [40];
  longlong local_dc0 [2];
  undefined8 local_db0;
  byte local_b98;
  undefined1 local_b90 [560];
  undefined1 local_960;
  undefined6 local_95c;
  undefined2 uStack_956;
  undefined6 uStack_954;
  undefined1 local_94c;
  longlong local_948;
  undefined1 local_940 [1168];
  undefined1 local_4b0 [1152];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_de8;
  if (param_2 == (longlong *)0x0) goto LAB_1458ae506;
  plVar3 = (longlong *)FUN_140cf8aa6();
  if (plVar3 == (longlong *)0x0) goto LAB_1458ae506;
  cVar2 = (**(code **)(*plVar3 + 0x6c8))(plVar3);
  if (cVar2 == '\0') goto LAB_1458ae506;
  lVar4 = (**(code **)(*(longlong *)(param_1 + 0x3b48) + 0x28))(param_1 + 0x3b48);
  if (lVar4 == 0) goto LAB_1458ae506;
  uVar5 = FUN_144a800f8();
  lVar6 = (**(code **)(*param_2 + 0x288))(param_2,uVar5);
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    uVar5 = FUN_144a800f8();
    lVar7 = FUN_144718840(lVar6,uVar5);
    lVar8 = 0;
    if (lVar6 != lVar7) {
      lVar8 = lVar7;
    }
  }
  FUN_1458ae5ac(local_940,lVar8);
  FUN_140e386ea(local_dc0);
  FUN_140e386ea(local_b90);
  local_960 = 0;
  local_94c = 0;
  local_95c = 0;
  uStack_956 = 0;
  uStack_954 = 0;
  lVar6 = *(longlong *)(lVar4 + 0x30);
  if (lVar6 == 0) {
    uVar5 = FUN_141862950();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x30) = lVar6;
  }
  if (((*(longlong *)(lVar4 + 0x38) == 0) && (lVar6 != 0)) && (*(longlong *)(lVar4 + 0x28) != 0)) {
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_1458ae5a7:
      uVar5 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_1458ae5a7;
      uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar5 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x28));
    }
    *(undefined8 *)(lVar4 + 0x38) = uVar5;
  }
  FUN_144a79b68(&local_948);
  if (local_dc0[0] != local_948) {
    local_db0 = 0;
  }
  local_dc0[0] = local_948;
  local_b98 = local_b98 | 1;
  local_94c = 1;
  FUN_14007afac(local_4b0,local_dc0);
  FUN_1458ae5d0(plVar3,local_940);
  FUN_144908ac8(local_b90);
  FUN_144908ac8(local_dc0);
  FUN_14023c33c(local_940);
LAB_1458ae506:
  if ((local_30 ^ (ulonglong)auStack_de8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ae5ac FUN_1458ae5ac body=36 status=ok
// SIG undefined FUN_1458ae5ac(void)

longlong FUN_1458ae5ac(longlong param_1)

{
  FUN_144a44f9a();
  *(undefined1 *)(param_1 + 0x488) = 0;
  *(undefined1 *)(param_1 + 0x908) = 0;
  return param_1;
}



// FUNCTION 1458ae5d0 FUN_1458ae5d0 body=100 status=ok
// SIG undefined FUN_1458ae5d0(void)

void FUN_1458ae5d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x1870;
  if (lVar1 != param_2) {
    if (*(char *)(param_1 + 0x2180) == '\x01') {
      FUN_14023c33c(lVar1);
    }
    FUN_14023c3a2(lVar1,param_2);
    *(undefined1 *)(param_1 + 0x2180) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001458ae627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0xda8) + 0x58))(param_1 + 0xda8,param_1 + 0xf60);
  return;
}



// FUNCTION 1458ae634 FUN_1458ae634 body=151 status=ok
// SIG undefined FUN_1458ae634(void)

void FUN_1458ae634(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_1458ae910(param_1,4,0);
  }
  else {
    FUN_1458ae6da(param_1,4,0);
  }
  FUN_141418d4a(param_1);
  local_18 = param_1;
  FUN_1447cd2ec(param_1 + 0x1e70);
  FUN_1412d3752(param_1);
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ae6da FUN_1458ae6da body=229 status=ok
// SIG undefined FUN_1458ae6da(void)

void FUN_1458ae6da(longlong *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (param_1[0x2e2] != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x5d0))();
    if (plVar2 != (longlong *)0x0) {
      lVar3 = FUN_144a5dd5e();
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)) &&
         ((((*(byte *)(plVar2 + 0x84) & 2) != 0 &&
           (cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2), cVar1 != '\0')) ||
          ((char)param_1[0x2f] == '\x03')))) {
        if (param_3 == (undefined4 *)0x0) {
          uVar4 = FUN_1458aeb32(param_1);
        }
        else {
          uVar4 = *param_3;
        }
        FUN_1458aed22(plVar2 + 0x722,param_1,param_2,uVar4);
      }
    }
    FUN_1458ae7c0(param_1);
    FUN_1412d37be(param_1,param_2);
    param_1[0x2e2] = 0;
    FUN_1414a9a2a(param_1);
    if ((char)param_1[0x2f] == '\x03') {
      param_1[0x2e4] = 0;
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xf7;
    }
    return;
  }
  return;
}



// FUNCTION 1458ae7c0 FUN_1458ae7c0 body=193 status=ok
// SIG undefined FUN_1458ae7c0(void)

void FUN_1458ae7c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)((ulonglong)(*(longlong *)(param_1 + 0x1710) == 0) * 0x10 + 0x1710 + param_1)
  ;
  if ((lVar1 == 0) || (plVar5 = *(longlong **)(lVar1 + 0x3c0), plVar5 == (longlong *)0x0)) {
LAB_1458ae813:
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(plVar5[2] + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_1458ae813;
  }
  plVar4 = *(longlong **)(param_1 + 0x3c0);
  if (plVar4 != (longlong *)0x0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) goto LAB_1458ae823;
  }
  plVar4 = (longlong *)0x0;
LAB_1458ae823:
  if (plVar4 != (longlong *)0x0) {
    plVar5 = plVar4;
  }
  if (((lVar1 != 0) && (plVar5 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar5 + 0x6c8))(plVar5), cVar2 != '\0')) {
    FUN_1458ae882(lVar1,plVar5);
    return;
  }
  return;
}



// FUNCTION 1458ae882 FUN_1458ae882 body=141 status=ok
// SIG undefined FUN_1458ae882(void)

void FUN_1458ae882(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x508) != 0) {
      lVar3 = FUN_140dd10c4();
      plVar1 = *(longlong **)(param_2 + 0x508);
      if ((((plVar1 != (longlong *)0x0) && (lVar3 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
         ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)))) {
        (**(code **)(*plVar1 + 0x318))(plVar1,&DAT_14cbc9de8);
        (**(code **)(*plVar1 + 0x308))(plVar1,&DAT_14cbc9dd8);
      }
    }
    FUN_14030ec08(param_1);
    return;
  }
  return;
}



// FUNCTION 1458ae910 FUN_1458ae910 body=545 status=ok
// SIG undefined FUN_1458ae910(void)

void FUN_1458ae910(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_1[0x3c6];
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xa0) == '\0')) {
    if ((char)param_2 == '\x01') goto LAB_1458aeae5;
    FUN_14103b6f6(lVar3,1);
  }
  plVar1 = (longlong *)param_1[0x78];
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      FUN_141347200(param_1 + 0x454,0xff,0,0);
      if (*(byte *)(param_1 + 0x2f) < 3) {
        (**(code **)(*plVar1 + 0x680))(plVar1,&local_58);
        FUN_1458aecb6(param_1,param_2,&local_58);
      }
      else {
        FUN_145ada5ca(param_1,param_2);
        uVar4 = FUN_1458aeb32(param_1);
        FUN_141418d4a(param_1);
        if (param_1[0x2e2] != 0) {
          if (param_1[0x85] != 0) {
            FUN_1401c9320();
          }
          cVar2 = (**(code **)(*param_1 + 0x700))(param_1);
          if ((param_3 != (undefined8 *)0x0) || (cVar2 != '\0')) {
            cVar2 = (**(code **)(*param_1 + 0x700))(param_1);
            if (cVar2 == '\0') {
              local_48 = param_3[2];
              local_58 = *param_3;
              uStack_50 = param_3[1];
            }
            else {
              (**(code **)(*plVar1 + 0x680))(plVar1,&local_58);
            }
            param_1[0x2e8] = local_48;
            *(undefined4 *)(param_1 + 0x2e6) = (undefined4)local_58;
            *(undefined4 *)((longlong)param_1 + 0x1734) = local_58._4_4_;
            *(undefined4 *)(param_1 + 0x2e7) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)param_1 + 0x173c) = uStack_50._4_4_;
          }
          FUN_140457ffc(plVar1 + 0x64d,param_1);
          FUN_1414b167c(plVar1,param_1[0x2e2]);
          FUN_1458ae6da(param_1,param_2,0);
          if ((char)plVar1[0xd] == '\x02') {
            FUN_1458aec50(plVar1,param_1,param_2,uVar4);
          }
          if (param_1[0x2e0] != 0) {
            FUN_1458af080();
          }
          lVar3 = FUN_1402a1246(plVar1);
          if (lVar3 != 0) {
            *(undefined1 *)(lVar3 + 0xe0a) = 0;
          }
          if ((((char)param_2 == '\x04') && ((*(byte *)((longlong)param_1 + 0x65) & 2) == 0)) &&
             ((*(byte *)(param_1 + 0x69) & 2) == 0)) {
            (**(code **)(*param_1 + 0x5c8))(param_1,0);
          }
        }
      }
    }
  }
LAB_1458aeae5:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458aeb32 FUN_1458aeb32 body=199 status=ok
// SIG undefined FUN_1458aeb32(void)

uint FUN_1458aeb32(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  
  lVar1 = param_1 + 0x1420;
  fVar3 = (float)FUN_1458aebfa(lVar1);
  fVar4 = (float)FUN_140f8608e(lVar1);
  uVar6 = 0;
  if (fVar3 < fVar4) {
    lVar2 = *(longlong *)(param_1 + 0x1710);
    fVar7 = 0.0;
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x3c20) + 0x28))(lVar2 + 0x3c20);
      fVar7 = 0.0;
      if ((lVar2 != 0) && (fVar7 = *(float *)(lVar2 + 0xdc), *(int *)(lVar2 + 0xf4) != 0)) {
        fVar5 = (float)FUN_140f8608e(lVar1);
        fVar7 = fVar7 * fVar5;
      }
    }
    uVar6 = -(uint)(0.0 < fVar7) & (uint)((fVar4 - fVar3) / fVar7);
  }
  return uVar6;
}



// FUNCTION 1458aebfa FUN_1458aebfa body=86 status=ok
// SIG undefined FUN_1458aebfa(void)

float FUN_1458aebfa(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if ((longlong)*(int *)(param_1 + 0x40) == 0) {
    fVar4 = 0.0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x88;
    fVar4 = 0.0;
    do {
      fVar3 = (float)FUN_14055830e(lVar1);
      fVar4 = fVar4 + fVar3;
      lVar1 = lVar1 + 0x88;
      lVar2 = lVar2 + -0x88;
    } while (lVar2 != 0);
  }
  return fVar4;
}



// FUNCTION 1458aec50 FUN_1458aec50 body=101 status=ok
// SIG undefined FUN_1458aec50(void)

void FUN_1458aec50(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad870);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458aecb6 FUN_1458aecb6 body=107 status=ok
// SIG undefined FUN_1458aecb6(void)

void FUN_1458aecb6(longlong *param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  uStack_2c = param_3[1];
  uStack_28 = param_3[2];
  uStack_24 = param_3[3];
  local_20 = *(undefined8 *)(param_3 + 4);
  local_38[0] = param_2;
  uVar1 = FUN_14477b072(local_30,DAT_14cbbcbb8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458aed22 FUN_1458aed22 body=861 status=ok
// SIG undefined FUN_1458aed22(void)

void FUN_1458aed22(undefined8 ***param_1,undefined8 param_2,char param_3,float param_4)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 **ppuVar4;
  undefined8 ***pppuVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 ***pppuVar10;
  undefined8 ****ppppuVar11;
  uint uVar12;
  float fVar13;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  undefined8 ***local_100;
  undefined4 local_f8;
  ushort local_e8;
  byte local_e0;
  ulonglong local_d8;
  undefined4 local_d0;
  undefined4 local_b0;
  byte local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar6 = FUN_140a9a328();
  lVar7 = FUN_140a9b4e8(param_1);
  if ((lVar6 != 0) && (lVar7 != 0)) {
    pppuVar1 = param_1 + 0x27;
    if (param_1[0x27] != (undefined8 **)0x0) {
      if (*(longlong *)(lVar6 + 0x1f0) == 0) {
        puVar8 = (undefined8 *)(lVar6 + 0x458);
      }
      else {
        puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar8;
      lVar9 = FUN_144a61814(uVar2,pppuVar1);
      if (lVar9 != 0) {
        FUN_1405a424c(uVar2,*pppuVar1);
      }
      param_1[0x27] = (undefined8 **)0x0;
      local_d8 = DAT_14cbe7020;
      FUN_1400bc8c2(param_1 + 0x15);
    }
    if ((byte)(param_3 - 3U) < 0xfe) {
      lVar9 = lVar7 + 0xd8;
    }
    else {
      lVar9 = lVar7 + 0x88;
    }
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_b0 = 0;
    FUN_1456bb102(&local_d8,param_2);
    FUN_1448729ea(lVar9,&local_100,&local_d8);
    fVar13 = (float)FUN_144a7ecd0(&local_100);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e0 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar11 = &local_100;
      if (0x18 < local_e8) {
        ppppuVar11 = (undefined8 ****)local_100;
      }
      (*pcVar3)(ppppuVar11);
    }
    if (0x18 < local_e8) {
      FUN_1400020a8(local_100);
    }
    FUN_144a5ac3a(&local_d8);
    uVar12 = -(uint)(0.0 < *(float *)(lVar7 + 0x128));
    fVar13 = (float)(~uVar12 & (uint)fVar13 |
                    (uint)(param_4 * *(float *)(lVar7 + 0x128) + fVar13) & uVar12);
    if (0.0 < fVar13) {
      local_d8 = DAT_14cbe7020;
      FUN_1400bc96c(param_1 + 0x15);
      if (*(longlong *)(lVar6 + 0x1f0) == 0) {
        puVar8 = (undefined8 *)(lVar6 + 0x458);
      }
      else {
        puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar8;
      ppuVar4 = param_1[0x12];
      local_100 = (undefined8 ****)0x0;
      local_f8 = 0;
      FUN_1446efa72(&local_100,0,3,0x10);
      pppuVar5 = local_100;
      local_f8 = 3;
      *local_100 = (undefined8 **)&PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      pppuVar10 = (undefined8 ***)(DAT_14c758608 + 1);
      lVar6 = DAT_14c758608 + 1;
      if (pppuVar10 == (undefined8 ***)0x0) {
        LOCK();
        UNLOCK();
        pppuVar10 = (undefined8 ***)(DAT_14c758608 + 2);
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_100[2] = pppuVar10;
      *local_100 = (undefined8 **)&PTR_FUN_14b9dd820;
      local_100[3] = (undefined8 ***)0x0;
      FUN_14485c47a(local_100 + 3,ppuVar4);
      pppuVar5[4] = param_1;
      local_d8 = 0;
      local_d0 = 0;
      FUN_14487d8d8(&local_d8,&local_100);
      local_98 = 1;
      local_110 = 0xbf800000;
      local_118 = 0;
      FUN_1406f3fee(uVar2,pppuVar1,&local_d8,fVar13);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_98])(&local_d8);
      FUN_1449db362(&local_100);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458af080 FUN_1458af080 body=3246 status=ok
// SIG undefined FUN_1458af080(void)

void FUN_1458af080(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 ****ppppuVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = (**(code **)(*param_1 + 0x6d0))();
  lVar6 = param_1[0x332];
  if (((lVar6 != 0) && (lVar2 = *(longlong *)(lVar6 + 0x1a00), lVar2 != 0 && lVar5 != 0)) &&
     (*(char *)(lVar6 + 0x178) == '\x03')) {
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8);
    FUN_1448729ea(lVar2 + 0x250,local_88,&local_b8);
    uVar9 = FUN_144a7ecd0(local_88);
    *(undefined4 *)(lVar5 + 8) = uVar9;
    FUN_14020a6cc(lVar5,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar8 = local_88;
      if (0x18 < local_70) {
        ppppuVar8 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8,param_1[0x332]);
    FUN_1448729ea(lVar2 + 0x2a0,local_88,&local_b8);
    uVar9 = FUN_144a7ecd0(local_88);
    *(undefined4 *)(lVar5 + 0x14) = uVar9;
    FUN_14020a6cc(lVar5 + 0xc,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar8 = local_88;
      if (0x18 < local_70) {
        ppppuVar8 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8,param_1[0x332]);
    FUN_1448729ea(lVar2 + 0x2f0,local_88,&local_b8);
    uVar9 = FUN_144a7ecd0(local_88);
    *(undefined4 *)(lVar5 + 0x20) = uVar9;
    FUN_14020a6cc(lVar5 + 0x18,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar8 = local_88;
      if (0x18 < local_70) {
        ppppuVar8 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8,param_1[0x332]);
    FUN_1448729ea(lVar2 + 0x340,local_88,&local_b8);
    uVar9 = FUN_144a7ecd0(local_88);
    *(undefined4 *)(lVar5 + 0x2c) = uVar9;
    FUN_14020a6cc(lVar5 + 0x24,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar8 = local_88;
      if (0x18 < local_70) {
        ppppuVar8 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8,param_1[0x332]);
    FUN_1448729ea(lVar2 + 0x1a0,local_88,&local_b8);
    uVar9 = FUN_144a7ecd0(local_88);
    *(undefined4 *)(lVar5 + 0x38) = uVar9;
    FUN_14020a6cc(lVar5 + 0x30,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar8 = local_88;
      if (0x18 < local_70) {
        ppppuVar8 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8,param_1[0x332]);
    FUN_1448729ea(lVar2 + 0x200,local_88,&local_b8);
    uVar9 = FUN_144a7ecd0(local_88);
    *(undefined4 *)(lVar5 + 0x44) = uVar9;
    FUN_14020a6cc(lVar5 + 0x3c,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar8 = local_88;
      if (0x18 < local_70) {
        ppppuVar8 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8,param_1[0x332]);
    FUN_1448729ea(lVar2 + 0x3e0,local_88,&local_b8);
    uVar9 = FUN_144a7ecd0(local_88);
    *(undefined4 *)(lVar5 + 0x50) = uVar9;
    FUN_14020a6cc(lVar5 + 0x48,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar8 = local_88;
      if (0x18 < local_70) {
        ppppuVar8 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8,param_1[0x332]);
    FUN_1448729ea(lVar2 + 0x430,local_88,&local_b8);
    uVar9 = FUN_144a7ecd0(local_88);
    *(undefined4 *)(lVar5 + 0x5c) = uVar9;
    FUN_14020a6cc(lVar5 + 0x54,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar8 = local_88;
      if (0x18 < local_70) {
        ppppuVar8 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8,param_1[0x332]);
    FUN_1448729ea(lVar2 + 0x480,local_88,&local_b8);
    uVar9 = FUN_144a7ecd0(local_88);
    *(undefined4 *)(lVar5 + 0x68) = uVar9;
    FUN_14020a6cc(lVar5 + 0x60,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar8 = local_88;
      if (0x18 < local_70) {
        ppppuVar8 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8,param_1[0x332]);
    FUN_1448729ea(lVar2 + 0x4d0,local_88,&local_b8);
    uVar9 = FUN_144a7ecd0(local_88);
    *(undefined4 *)(lVar5 + 0x74) = uVar9;
    FUN_14020a6cc(lVar5 + 0x6c,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar8 = local_88;
      if (0x18 < local_70) {
        ppppuVar8 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8,param_1[0x332]);
    FUN_1448729ea(lVar2 + 0x528,local_88,&local_b8);
    uVar9 = FUN_144a7ecd0(local_88);
    *(undefined4 *)(lVar5 + 0x80) = uVar9;
    FUN_14020a6cc(lVar5 + 0x78,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar8 = local_88;
      if (0x18 < local_70) {
        ppppuVar8 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8,param_1[0x332]);
    FUN_1448729ea(lVar2 + 0x578,local_88,&local_b8);
    uVar9 = FUN_144a7ecd0(local_88);
    *(undefined4 *)(lVar5 + 0x8c) = uVar9;
    FUN_14020a6cc(lVar5 + 0x84,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar8 = local_88;
      if (0x18 < local_70) {
        ppppuVar8 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8,param_1[0x332]);
    FUN_1448729ea(lVar2 + 0x798,local_88,&local_b8);
    uVar9 = FUN_144a7ecd0(local_88);
    *(undefined4 *)(lVar5 + 0xbc) = uVar9;
    FUN_14020a6cc(lVar5 + 0xb4,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar8 = local_88;
      if (0x18 < local_70) {
        ppppuVar8 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8,param_1[0x332]);
    FUN_1448729ea(lVar2 + 0x7f8,local_88,&local_b8);
    uVar9 = FUN_144a7ecd0(local_88);
    *(undefined4 *)(lVar5 + 200) = uVar9;
    FUN_14020a6cc(lVar5 + 0xc0,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar8 = local_88;
      if (0x18 < local_70) {
        ppppuVar8 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_90 = 0;
    FUN_1456bb102(&local_b8,param_1[0x332]);
    FUN_1448729ea(lVar2 + 0x730,local_88,&local_b8);
    uVar9 = FUN_144a7ecd0(local_88);
    *(undefined4 *)(lVar5 + 0xd4) = uVar9;
    FUN_14020a6cc(lVar5 + 0xcc,1);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar8 = local_88;
      if (0x18 < local_70) {
        ppppuVar8 = (undefined8 ****)local_88[0];
      }
      (*pcVar3)(ppppuVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
    lVar6 = FUN_1412d53e0(*(undefined2 *)(lVar2 + 0xe12));
    if (0 < *(int *)(lVar6 + 8)) {
      plVar7 = (longlong *)FUN_1412d53e0(*(undefined2 *)(lVar2 + 0xe12));
      lVar6 = FUN_14011c2be(*plVar7 + 0x20);
      if (lVar6 != 0) {
        local_b8 = local_b8 & 0xffffffffffffff00;
        local_90 = 0;
        FUN_1456bb102(&local_b8,param_1[0x332]);
        FUN_1448729ea(lVar6 + 0x38,local_88,&local_b8);
        fVar10 = (float)FUN_144a7ecd0(local_88);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar8 = local_88;
          if (0x18 < local_70) {
            ppppuVar8 = (undefined8 ****)local_88[0];
          }
          (*pcVar3)(ppppuVar8);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(local_88[0]);
        }
        FUN_144a5ac3a(&local_b8);
        *(float *)(lVar5 + 0x98) = fVar10;
        FUN_14020a6cc(lVar5 + 0x90,1);
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        uStack_9c = CONCAT31(uStack_9c._1_3_,0xff);
        lVar6 = (**(code **)(*(longlong *)(param_1[0x332] + 0x4a0) + 0x10))(param_1[0x332] + 0x4a0);
        if (0 < *(int *)(lVar6 + 0x40)) {
          lVar6 = *(longlong *)(lVar6 + 0x38);
          local_b8 = *(ulonglong *)(lVar6 + 0x30);
          uStack_a8 = (undefined4)*(undefined8 *)(lVar6 + 0x40);
          uStack_a4 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x40) >> 0x20);
          uStack_a0 = (undefined4)*(undefined8 *)(lVar6 + 0x48);
          uStack_9c = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x48) >> 0x20);
          uStack_b0 = (undefined4)*(undefined8 *)(lVar6 + 0x38);
          uStack_ac = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x38) >> 0x20);
        }
        cVar4 = FUN_14486ea84(&local_b8);
        if (cVar4 != '\0') {
          lVar6 = FUN_14008e0ae(&local_b8);
          fVar1 = *(float *)(lVar6 + 0x70);
          fVar11 = fVar1;
          if (0 < *(int *)(lVar5 + 0xf4)) {
            fVar11 = (1.0 / fVar10) * fVar1;
          }
          *(uint *)(lVar5 + 0xe0) =
               ~-(uint)(0.0 < fVar10) & (uint)fVar1 | (uint)fVar11 & -(uint)(0.0 < fVar10);
          FUN_14020a6cc(lVar5 + 0xd8,1);
          lVar6 = FUN_14008e0ae(&local_b8);
          *(undefined4 *)(lVar5 + 0xec) = *(undefined4 *)(lVar6 + 0x7c);
          FUN_14020a6cc(lVar5 + 0xe4,1);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458afd38 FUN_1458afd38 body=84 status=ok
// SIG undefined FUN_1458afd38(void)

void FUN_1458afd38(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140e81e1c(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001458afd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458afd8c FUN_1458afd8c body=33 status=ok
// SIG undefined FUN_1458afd8c(void)

void FUN_1458afd8c(longlong param_1)

{
  FUN_1458afdae();
  FUN_141101e66(param_1 + 0x1218,param_1);
  return;
}



// FUNCTION 1458afdae FUN_1458afdae body=66 status=ok
// SIG undefined FUN_1458afdae(void)

void FUN_1458afdae(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x430) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x430) + 0x490))();
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x430) + 0x1e8) + 0x48))
              (*(longlong *)(param_1 + 0x430) + 0x1e8);
  }
  FUN_1458afdf0(param_1);
  return;
}



// FUNCTION 1458afdf0 FUN_1458afdf0 body=314 status=ok
// SIG undefined FUN_1458afdf0(void)

void FUN_1458afdf0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  (**(code **)(*param_1 + 0x6f0))();
  if (param_1[0x78] != 0) {
    lVar4 = FUN_144a75eb4();
    plVar1 = (longlong *)param_1[0x78];
    if (((((plVar1 != (longlong *)0x0) && (lVar4 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
        ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)))) && (cVar3 = (**(code **)(*plVar1 + 0x6c8))(plVar1), cVar3 != '\0')) {
      if ((char)plVar1[0x8b] == '\x01') {
        (**(code **)(*plVar1 + 0xe40))(plVar1,param_1);
      }
      if (param_1[0x31] == 0) {
        lVar4 = (**(code **)(*param_1 + 0x750))(param_1);
        if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
          param_1[0x31] = lVar4;
          if (lVar4 == 0) {
            return;
          }
        }
        else {
          FUN_1456cec3c(lVar4);
          param_1[0x31] = lVar4;
        }
        (**(code **)(*param_1 + 0x760))(param_1,lVar4);
        FUN_140b506a4(param_1[0x31]);
        cVar3 = FUN_1408c7dae(param_1[2]);
        if (cVar3 != '\0') {
          *(byte *)(param_1[0x31] + 0x194) =
               *(byte *)(param_1[0x31] + 0x194) & 0xfe |
               *(byte *)((longlong)param_1 + 0x62) >> 3 & 1;
          FUN_143533074(param_1,param_1[0x31]);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1458aff2c FUN_1458aff2c body=9 status=ok
// SIG undefined FUN_1458aff2c(void)

void FUN_1458aff2c(longlong param_1)

{
  FUN_1458aff36(param_1 + 0x10);
  return;
}



// FUNCTION 1458aff36 FUN_1458aff36 body=83 status=ok
// SIG undefined FUN_1458aff36(void)

void FUN_1458aff36(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6a0fc0;
  FUN_1447cd778(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1447cd778(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_140f4e84a(param_1);
  return;
}



// FUNCTION 1458aff94 FUN_1458aff94 body=199 status=ok
// SIG undefined FUN_1458aff94(void)

undefined8 * FUN_1458aff94(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1458b005c();
  *param_1 = &PTR_FUN_14b4bd1d0;
  param_1[0x72] = &PTR_LAB_14b4bd850;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  FUN_1446f470e(&local_20,L"BeaconDriverClient",1);
  param_1[0x2e] = local_20;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 4;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf1 | 6;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b005c FUN_1458b005c body=197 status=ok
// SIG undefined FUN_1458b005c(void)

undefined8 * FUN_1458b005c(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b4bc810;
  param_1[0x72] = &PTR_LAB_14b4bce70;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 1;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  FUN_1446f470e(&local_20,L"BeaconDriver",1);
  param_1[0x2e] = local_20;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  param_1[0x77] = (ulonglong)DAT_14c892fb0;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) & 0xdf;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b0122 FUN_1458b0122 body=40 status=ok
// SIG undefined FUN_1458b0122(void)

undefined8 FUN_1458b0122(undefined8 param_1,int param_2)

{
  FUN_1458b014a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458b014a FUN_1458b014a body=93 status=ok
// SIG undefined FUN_1458b014a(void)

void FUN_1458b014a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3c2290;
  param_1[5] = &PTR_FUN_14b3c2530;
  param_1[6] = &PTR_FUN_14b3c2570;
  plVar3 = (longlong *)param_1[9];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458b01a8 FUN_1458b01a8 body=157 status=ok
// SIG undefined FUN_1458b01a8(void)

undefined4 FUN_1458b01a8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f72344(param_1,&local_30,param_2);
  if (local_30 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = FUN_140f7223e(param_1 + 8);
    uVar3 = FUN_1412d5418(local_30,uVar4,param_3);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b0246 FUN_1458b0246 body=87 status=ok
// SIG undefined FUN_1458b0246(void)

void FUN_1458b0246(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Dst;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_2 < *(int *)(param_1 + 0x30)) {
    plVar3 = (longlong *)(param_1 + 0x28);
    if (*(int *)(*plVar3 + 0x10 + (ulonglong)param_2 * 0x30) == 0) {
      lVar4 = *plVar3 + (ulonglong)param_2 * 0x30;
      lVar2 = (longlong)*(int *)(lVar4 + 0x20);
      if (lVar2 == 0) {
        _Dst = (void *)((ulonglong)param_2 * 0x30 + *plVar3);
        FUN_1458b0336(_Dst);
        iVar1 = *(int *)(param_1 + 0x30);
        if (~param_2 + iVar1 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)(int)(~param_2 + iVar1) * 0x30);
          iVar1 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x30) = iVar1 + -1;
        FUN_1458b0374(plVar3);
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x18);
      lVar5 = 0;
      while ((*(int *)(lVar4 + 8 + lVar5) == 0 || (*(longlong *)(lVar4 + lVar5) == 0))) {
        lVar5 = lVar5 + 0x10;
        if (lVar2 * 0x10 == lVar5) {
          FUN_1458b02dc();
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1458b029e FUN_1458b029e body=62 status=ok
// SIG undefined FUN_1458b029e(void)

void FUN_1458b029e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458b041e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1458b02dc FUN_1458b02dc body=90 status=ok
// SIG undefined FUN_1458b02dc(void)

void FUN_1458b02dc(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x30 + *param_1);
  FUN_1458b0336(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)(int)(~param_2 + iVar1) * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_1458b0374(param_1);
  return;
}



// FUNCTION 1458b0336 FUN_1458b0336 body=61 status=ok
// SIG undefined FUN_1458b0336(void)

void FUN_1458b0336(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b0374 FUN_1458b0374 body=63 status=ok
// SIG undefined FUN_1458b0374(void)

void FUN_1458b0374(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458b03b4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 1458b03b4 FUN_1458b03b4 body=105 status=ok
// SIG undefined FUN_1458b03b4(void)

ulonglong FUN_1458b03b4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x30) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      uVar1 = uVar1 / 0x30;
    }
  }
  return uVar1;
}



// FUNCTION 1458b041e FUN_1458b041e body=89 status=ok
// SIG undefined FUN_1458b041e(void)

ulonglong FUN_1458b041e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1458b0478 FUN_1458b0478 body=315 status=ok
// SIG undefined FUN_1458b0478(void)

void FUN_1458b0478(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong local_48;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar10 = (ulonglong)(int)uVar1;
  if (uVar10 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar5 = FUN_14479d2ce(lVar2);
    if (lVar5 == 0) {
      uVar8 = 1;
    }
    else {
      uVar8 = *(uint *)(lVar5 + 8) >> 0x1e & 1;
    }
    iVar6 = 0;
    uVar7 = 0;
LAB_1458b04c1:
    do {
      iVar4 = (int)uVar7;
      uVar7 = (ulonglong)(iVar4 + 1U);
      if ((int)(iVar4 + 1U) < (int)uVar1) {
        uVar7 = (longlong)iVar4 + 1;
        local_48 = (longlong)iVar4 * 0x10 + lVar2 + 0x10;
        bVar3 = true;
        do {
          lVar5 = FUN_14479d2ce(local_48);
          if (lVar5 == 0) {
            if (uVar8 == 0) goto LAB_1458b04d3;
          }
          else if ((((byte)((uint)*(undefined4 *)(lVar5 + 8) >> 0x1e) ^ (byte)uVar8) & 1) != 0)
          goto LAB_1458b0589;
          uVar7 = uVar7 + 1;
          bVar3 = (longlong)uVar7 < (longlong)uVar10;
          local_48 = local_48 + 0x10;
        } while (uVar10 != uVar7);
        uVar7 = (ulonglong)uVar1;
LAB_1458b0589:
        if (uVar8 != 0) {
          uVar8 = 0;
          if (!bVar3) break;
          goto LAB_1458b04c1;
        }
      }
      else {
        if ((byte)uVar8 != 0) break;
        bVar3 = false;
      }
LAB_1458b04d3:
      iVar9 = (int)uVar7 - iVar4;
      if (iVar6 != iVar4) {
        memmove((void *)((longlong)iVar6 * 0x10 + lVar2),(void *)((longlong)iVar4 * 0x10 + lVar2),
                (longlong)iVar9 << 4);
      }
      iVar6 = iVar6 + iVar9;
      uVar8 = 1;
    } while (bVar3);
    *(int *)(param_1 + 0x10) = iVar6;
  }
  return;
}



// FUNCTION 1458b05bc FUN_1458b05bc body=1516 status=ok
// SIG undefined FUN_1458b05bc(void)

undefined8 * FUN_1458b05bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  _RTL_CRITICAL_SECTION local_78;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14bcd4ab0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x74) = 2;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3c9) = 1;
  *(undefined1 *)((longlong)param_1 + 0x3cb) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x12;
  *(undefined2 *)(param_1 + 0x7a) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0xf424000000001;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = DAT_14cbfea68;
  puVar6 = DAT_14cbfe9e0;
  if (DAT_14cbfe9e8 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_1446f470e((longlong)param_1 + 0x3e4,puVar6,1);
  *(undefined1 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  *(undefined2 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3fa) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 2;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x94) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4b4) = 0x200000000;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c4) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x50c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x55c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x564) = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xb2] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  puVar1 = param_1 + 0xcc;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  FUN_1458b0cb4(puVar1);
  FUN_1458b0c8a(param_1 + 0xce);
  FUN_1458b0bbe(param_1 + 0xd0);
  FUN_1458b0bbe(param_1 + 0xd1);
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x70c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x714) = 0;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x734) = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  FUN_1446f470e(&local_80,L"SceneComponent0",1);
  uVar4 = FUN_144a799b0();
  local_a0 = 0;
  local_a8 = CONCAT31(local_a8._1_3_,1);
  lVar5 = FUN_14048696c(param_1,local_80,uVar4,uVar4);
  if (lVar5 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar5);
  }
  bVar3 = DAT_14c950c29;
  param_1[0x98] = lVar5;
  *(undefined1 *)(lVar5 + 0x1fb) = 0;
  lVar5 = param_1[0x98];
  if ((bVar3 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_1[0x98];
    }
  }
  param_1[0x39] = lVar5;
  FUN_1446f470e(&local_90,L"Transactor",1);
  uVar4 = FUN_14594cce0();
  local_a8 = 0;
  FUN_140af9fb2(&local_88,param_1,uVar4,local_90);
  uVar4 = FUN_14594cce0();
  local_a0 = 0;
  local_a8 = CONCAT31(local_a8._1_3_,1);
  lVar5 = FUN_14048696c(param_1,local_88,uVar4,uVar4);
  if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar5);
  }
  param_1[0xb0] = lVar5;
  FUN_14485c47a(lVar5 + 0x28,param_1);
  FUN_1458b0fc6(param_1);
  for (puVar2 = param_1; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)puVar2[4]) {
    if ((*(uint *)(puVar2 + 1) & 0x30) != 0) goto LAB_1458b0b25;
  }
  FUN_1458b0dd4(param_1 + 0x95,&local_78,param_1);
  uVar4 = FUN_1458b0baa(puVar1);
  FUN_1458b0cfa(&local_78,param_1);
  FUN_1458b1148(uVar4,local_98,&local_78);
  FUN_1401cb1ee(&local_78);
  uVar4 = FUN_1458b0bb4(puVar1);
  InitializeCriticalSection(&local_78);
  SetCriticalSectionSpinCount(&local_78,4000);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  EnterCriticalSection(&local_78);
  if (local_48 != 2) {
    FUN_1446efa72(&local_50,0,2,0x10);
    local_48 = 2;
  }
  *local_50 = &PTR_LAB_14bcd6270;
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
  local_50[2] = lVar7;
  *local_50 = &PTR_FUN_14bcd6200;
  local_50[3] = param_1;
  LeaveCriticalSection(&local_78);
  FUN_1458b1288(uVar4,local_98,&local_78);
  FUN_1401cb1ee(&local_78);
LAB_1458b0b25:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b0baa FUN_1458b0baa body=10 status=ok
// SIG undefined FUN_1458b0baa(void)

longlong FUN_1458b0baa(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + 0x108;
}



// FUNCTION 1458b0bb4 FUN_1458b0bb4 body=10 status=ok
// SIG undefined FUN_1458b0bb4(void)

longlong FUN_1458b0bb4(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + 0x88;
}



// FUNCTION 1458b0bbe FUN_1458b0bbe body=157 status=ok
// SIG undefined FUN_1458b0bbe(void)

undefined2 ** FUN_1458b0bbe(undefined2 **param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = (undefined2 *)0x0;
  FUN_1412d55ee(0);
  puVar2 = (undefined2 *)FUN_14494321d(2);
  *puVar2 = 0;
  FUN_1458b0c5c(puVar2);
  local_20 = puVar2;
  if (&local_20 != param_1) {
    puVar1 = *param_1;
    *param_1 = puVar2;
    local_20 = (undefined2 *)0x0;
    FUN_1412d55b0(param_1,puVar1);
  }
  FUN_1412d55b0(&local_20,local_20);
  FUN_1412d5698(0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b0c5c FUN_1458b0c5c body=45 status=ok
// SIG undefined FUN_1458b0c5c(void)

longlong FUN_1458b0c5c(longlong param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_1412d55ee(1);
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_1412d5698(1);
  return param_1;
}



// FUNCTION 1458b0c8a FUN_1458b0c8a body=41 status=ok
// SIG undefined FUN_1458b0c8a(void)

undefined8 * FUN_1458b0c8a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14bcd51e8;
  uVar1 = FUN_14494321d(1);
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 1458b0cb4 FUN_1458b0cb4 body=70 status=ok
// SIG undefined FUN_1458b0cb4(void)

undefined8 * FUN_1458b0cb4(undefined8 *param_1)

{
  void *_Dst;
  
  *param_1 = FUsdListener::vftable;
  _Dst = (void *)FUN_14494321d(0x150);
  memset(_Dst,0,0x150);
  FUN_1458b0eca(_Dst);
  param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 1458b0cfa FUN_1458b0cfa body=218 status=ok
// SIG undefined FUN_1458b0cfa(void)

LPCRITICAL_SECTION FUN_1458b0cfa(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bcd6190;
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
  *(undefined ***)p_Var1 = &PTR_FUN_14bcd6120;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var1->ProcessLocksList).Blink,param_2);
  *(undefined **)&p_Var1->EntryCount = &DAT_149451a4c;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 1458b0dd4 FUN_1458b0dd4 body=244 status=ok
// SIG undefined FUN_1458b0dd4(void)

undefined8 FUN_1458b0dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  *local_38 = &PTR_FUN_14bcd60b0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &DAT_1445205c6;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b0eca FUN_1458b0eca body=252 status=ok
// SIG undefined FUN_1458b0eca(void)

undefined8 * FUN_1458b0eca(undefined8 *param_1)

{
  *param_1 = FUsdListenerImpl::vftable;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 9),4000);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x11),4000);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x19),4000);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x21));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x21),4000);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 2;
  *(undefined4 *)(param_1 + 0x29) = 0;
  return param_1;
}



// FUNCTION 1458b0fc6 FUN_1458b0fc6 body=288 status=ok
// SIG undefined FUN_1458b0fc6(void)

void FUN_1458b0fc6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x650) != 0) {
    return;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x3d4);
  plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14bcd62e0;
  FUN_1458b10e6(plVar4 + 2,(double)*(float *)(param_1 + 0x4c8),uVar3,1,0);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x650) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x658);
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x658) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x650) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x658);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      goto LAB_1458b1056;
    }
    *(longlong **)(param_1 + 0x658) = plVar4;
    if (plVar5 == (longlong *)0x0) goto LAB_1458b1056;
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
  if (plVar4 == (longlong *)0x0) {
    return;
  }
LAB_1458b1056:
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1458b10e6 FUN_1458b10e6 body=97 status=ok
// SIG undefined FUN_1458b10e6(void)

PSRWLOCK FUN_1458b10e6(PSRWLOCK param_1)

{
  PVOID pvVar1;
  PVOID pvVar2;
  
  InitializeSRWLock(param_1);
  param_1[1].Ptr = (PVOID)0x0;
  FUN_1412d55ee(1);
  AcquireSRWLockExclusive(param_1);
  pvVar2 = (PVOID)FUN_14494321d(1);
  pvVar1 = param_1[1].Ptr;
  param_1[1].Ptr = pvVar2;
  if (pvVar1 != (PVOID)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive(param_1);
  FUN_1412d5698(1);
  return param_1;
}



// FUNCTION 1458b1148 FUN_1458b1148 body=318 status=ok
// SIG undefined FUN_1458b1148(void)

undefined8 *
FUN_1458b1148(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  *param_2 = 0;
  EnterCriticalSection(param_3);
  if (param_3[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || param_3[1].LockCount == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_14109be94(param_1,1);
    EnterCriticalSection(param_3);
    p_Var2 = param_3[1].DebugInfo;
    if (p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || param_3[1].LockCount == 0) {
      local_40 = 0;
    }
    else {
      (**(code **)(*(longlong *)p_Var2 + 0x38))(p_Var2,&local_40);
    }
    if (param_3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_3);
    }
    *param_2 = local_40;
    iVar1 = param_1[1].LockCount;
    lVar4 = (longlong)iVar1;
    param_1[1].LockCount = iVar1 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
      FUN_1447a71f6(param_1 + 1,iVar1);
    }
    p_Var2 = param_1[1].DebugInfo;
    *(undefined8 *)(&p_Var2->Type + lVar4 * 8) = 0;
    *(undefined4 *)(&p_Var2->CriticalSection + lVar4 * 2) = 0;
    FUN_14109be38(&p_Var2->Type + lVar4 * 8,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b1288 FUN_1458b1288 body=318 status=ok
// SIG undefined FUN_1458b1288(void)

undefined8 *
FUN_1458b1288(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  *param_2 = 0;
  EnterCriticalSection(param_3);
  if (param_3[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || param_3[1].LockCount == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_14109be94(param_1,1);
    EnterCriticalSection(param_3);
    p_Var2 = param_3[1].DebugInfo;
    if (p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || param_3[1].LockCount == 0) {
      local_40 = 0;
    }
    else {
      (**(code **)(*(longlong *)p_Var2 + 0x38))(p_Var2,&local_40);
    }
    if (param_3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_3);
    }
    *param_2 = local_40;
    iVar1 = param_1[1].LockCount;
    lVar4 = (longlong)iVar1;
    param_1[1].LockCount = iVar1 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
      FUN_1447a71f6(param_1 + 1,iVar1);
    }
    p_Var2 = param_1[1].DebugInfo;
    *(undefined8 *)(&p_Var2->Type + lVar4 * 8) = 0;
    *(undefined4 *)(&p_Var2->CriticalSection + lVar4 * 2) = 0;
    FUN_14109be38(&p_Var2->Type + lVar4 * 8,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b13c8 FUN_1458b13c8 body=456 status=ok
// SIG undefined FUN_1458b13c8(void)

longlong * FUN_1458b13c8(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_c8 [32];
  float local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = param_2;
  fVar2 = *(float *)(param_2 + 8);
  fVar1 = (float)FUN_144a7ed88(fVar2 * 0.5,*(undefined4 *)(param_2 + 0xc));
  fVar4 = fVar2 * 0.125;
  fVar3 = (((fVar1 * 180.0) / 3.1415927) * 3.1415927) / 180.0;
  fVar1 = cosf(fVar3);
  fVar3 = sinf(fVar3);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (longlong)(double)(fVar2 * 0.5);
  param_1[4] = (longlong)(double)(fVar1 * fVar4);
  *(float *)(param_1 + 5) = (fVar4 * -2.0 * fVar3 + fVar2) * 0.5;
  *(float *)((longlong)param_1 + 0x2c) = fVar4;
  local_90 = param_1 + 0xd;
  local_98 = param_1 + 7;
  local_a0 = param_1 + 0xf;
  local_a8 = fVar4;
  FUN_1412d5910(0,0,param_1 + 3);
  *(undefined4 *)(param_1 + 6) = 0x41200000;
  FUN_1458b1592(param_1,0x3f800000,&local_84,&local_88);
  fVar2 = ABS(local_84);
  if (ABS(local_84) <= ABS(local_88)) {
    fVar2 = ABS(local_88);
  }
  *(float *)((longlong)param_1 + 0x34) = fVar2;
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b1592 FUN_1458b1592 body=186 status=ok
// SIG undefined FUN_1458b1592(void)

void FUN_1458b1592(longlong param_1,float param_2,float *param_3,float *param_4)

{
  FUN_1412d5910(CONCAT71((int7)((ulonglong)(param_1 + 0x38) >> 8),1),
                *(float *)(param_1 + 0x30) * param_2,param_1 + 0x18,*(undefined4 *)(param_1 + 0x28),
                *(undefined4 *)(param_1 + 0x2c),param_3,param_1 + 0x38,param_1 + 0x58);
  FUN_1412d5910(0,param_2 * *(float *)(param_1 + 0x30),param_1 + 0x18,
                *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),param_4,
                param_1 + 0x48,param_1 + 0x68);
  *param_3 = *param_3 - *(float *)(param_1 + 0x78);
  *param_4 = *param_4 - *(float *)(param_1 + 0x78);
  return;
}



// FUNCTION 1458b164c FUN_1458b164c body=38 status=ok
// SIG undefined FUN_1458b164c(void)

undefined8 FUN_1458b164c(undefined8 param_1,int param_2)

{
  FUN_1458b1672();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458b1672 FUN_1458b1672 body=836 status=ok
// SIG undefined FUN_1458b1672(void)

void FUN_1458b1672(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_149ed1e10;
  param_1[1] = &PTR_FUN_149ed1e30;
  lVar5 = FUN_140d5712e();
  FUN_140457ffc(lVar5 + 8,param_1);
  lVar5 = param_1[7];
  if (lVar5 != 0) {
    param_1[7] = 0;
    FUN_1458b1f60(lVar5);
    FUN_1400020a8(lVar5);
  }
  FUN_1458b1ae6(param_1 + 0xc);
  FUN_1458b1b26(param_1 + 0x16);
  lVar5 = param_1[10];
  if (lVar5 != 0) {
    param_1[10] = 0;
    FUN_1458b1bae(lVar5);
    FUN_1400020a8(lVar5);
  }
  if (param_1[9] != 0) {
    param_1[9] = 0;
    FUN_1400020a8();
  }
  lVar5 = param_1[8];
  if (lVar5 != 0) {
    param_1[8] = 0;
    FUN_1458b20aa(lVar5);
    FUN_1400020a8(lVar5);
  }
  if (param_1[6] != 0) {
    param_1[6] = 0;
    FUN_1458b19b6();
  }
  if ((longlong *)param_1[0x4c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4c] + 0x10))();
  }
  FUN_144760e21(param_1[0x48],*(undefined4 *)(param_1 + 0x49));
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x41));
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
  FUN_1458b1b65(param_1[0x3c],*(undefined4 *)(param_1 + 0x3d));
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_1458b1a0e(param_1 + 0x2a);
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_1458b1a44(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1458b1a7a(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1458b1ab0(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[0xb];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  lVar5 = param_1[10];
  if (lVar5 != 0) {
    FUN_1458b1bae(lVar5);
    FUN_1400020a8(lVar5);
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  lVar5 = param_1[8];
  if (lVar5 != 0) {
    FUN_1458b20aa(lVar5);
    FUN_1400020a8(lVar5);
  }
  lVar5 = param_1[7];
  if (lVar5 != 0) {
    FUN_1458b1f60(lVar5);
    FUN_1400020a8(lVar5);
  }
  FUN_1458b19b6(param_1[6]);
  return;
}



// FUNCTION 1458b19b6 FUN_1458b19b6 body=49 status=ok
// SIG undefined FUN_1458b19b6(void)

void FUN_1458b19b6(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_144b493c0(*param_1);
  FUN_1400020a8(param_1[1]);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1458b19e8 FUN_1458b19e8 body=38 status=ok
// SIG undefined FUN_1458b19e8(void)

undefined8 FUN_1458b19e8(undefined8 param_1,int param_2)

{
  FUN_1458b1e3e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458b1a0e FUN_1458b1a0e body=53 status=ok
// SIG undefined FUN_1458b1a0e(void)

void FUN_1458b1a0e(longlong *param_1)

{
  FUN_1458b24c8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b1a44 FUN_1458b1a44 body=53 status=ok
// SIG undefined FUN_1458b1a44(void)

void FUN_1458b1a44(longlong *param_1)

{
  FUN_1458b237a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b1a7a FUN_1458b1a7a body=53 status=ok
// SIG undefined FUN_1458b1a7a(void)

void FUN_1458b1a7a(longlong *param_1)

{
  FUN_1412d5d9e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b1ab0 FUN_1458b1ab0 body=53 status=ok
// SIG undefined FUN_1458b1ab0(void)

void FUN_1458b1ab0(longlong *param_1)

{
  FUN_1458b1c14();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b1ae6 FUN_1458b1ae6 body=63 status=ok
// SIG undefined FUN_1458b1ae6(void)

void FUN_1458b1ae6(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1458b1c14(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140325268(param_1);
    return;
  }
  FUN_1458b2f5e(param_1);
  FUN_1458b1c14(param_1);
  return;
}



// FUNCTION 1458b1b26 FUN_1458b1b26 body=63 status=ok
// SIG undefined FUN_1458b1b26(void)

void FUN_1458b1b26(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1412d5d9e(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1412d62cc(param_1);
    return;
  }
  FUN_1458b2e0e(param_1);
  FUN_1412d5d9e(param_1);
  return;
}



// FUNCTION 1458b1b65 FUN_1458b1b65 body=73 status=ok
// SIG undefined FUN_1458b1b65(void)

void FUN_1458b1b65(longlong param_1,int param_2)

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



// FUNCTION 1458b1bae FUN_1458b1bae body=101 status=ok
// SIG undefined FUN_1458b1bae(void)

void FUN_1458b1bae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  FUN_144b49210(*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458b1c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 1458b1c14 FUN_1458b1c14 body=319 status=ok
// SIG undefined FUN_1458b1c14(void)

void FUN_1458b1c14(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1458b1d54((longlong)iStack_4c * 0x98 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140f776e6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b1d54 FUN_1458b1d54 body=89 status=ok
// SIG undefined FUN_1458b1d54(void)

void FUN_1458b1d54(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x88);
  if (lVar3 != 0) {
    FUN_1458b1dae(lVar3);
    FUN_1400020a8(lVar3);
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x0001458b1da9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458b1dae FUN_1458b1dae body=89 status=ok
// SIG undefined FUN_1458b1dae(void)

void FUN_1458b1dae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x88);
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
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1458b1e08(param_1);
  return;
}



// FUNCTION 1458b1e08 FUN_1458b1e08 body=53 status=ok
// SIG undefined FUN_1458b1e08(void)

void FUN_1458b1e08(longlong *param_1)

{
  FUN_1412d5b60();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b1e3e FUN_1458b1e3e body=163 status=ok
// SIG undefined FUN_1458b1e3e(void)

void FUN_1458b1e3e(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  *param_1 = &PTR_FUN_149ed38d0;
  FUN_1412d60be();
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    FUN_14585b900(param_1 + 1,0);
  }
  plVar1 = param_1 + 5;
  FUN_1458b1ee1(param_1[5],*(undefined4 *)(param_1 + 6));
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_14585b960(plVar1,0);
    uVar2 = *(undefined4 *)(param_1 + 6);
  }
  FUN_1458b1ee1(*plVar1,uVar2);
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b1ee1 FUN_1458b1ee1 body=53 status=ok
// SIG undefined FUN_1458b1ee1(void)

void FUN_1458b1ee1(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1458b1f16 FUN_1458b1f16 body=74 status=ok
// SIG undefined FUN_1458b1f16(void)

undefined8 * FUN_1458b1f16(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149eda500;
  FUN_1412d5d5c(param_1 + 0x10);
  FUN_140187f4a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x140,0x40);
  }
  return param_1;
}



// FUNCTION 1458b1f60 FUN_1458b1f60 body=168 status=ok
// SIG undefined FUN_1458b1f60(void)

void FUN_1458b1f60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xf8);
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
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_1458b2008(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1458b203e(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1458b2074(param_1);
  return;
}



// FUNCTION 1458b2008 FUN_1458b2008 body=53 status=ok
// SIG undefined FUN_1458b2008(void)

void FUN_1458b2008(longlong *param_1)

{
  FUN_1458b285a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b203e FUN_1458b203e body=53 status=ok
// SIG undefined FUN_1458b203e(void)

void FUN_1458b203e(longlong *param_1)

{
  FUN_1458b2a74();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b2074 FUN_1458b2074 body=53 status=ok
// SIG undefined FUN_1458b2074(void)

void FUN_1458b2074(longlong *param_1)

{
  FUN_1458b2c8e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b20aa FUN_1458b20aa body=219 status=ok
// SIG undefined FUN_1458b20aa(void)

void FUN_1458b20aa(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_140d5712e();
  FUN_140457ffc(lVar3 + 8,param_1);
  lVar3 = *(longlong *)(param_1 + 0xa8);
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar4);
      FUN_140187fa0(plVar2,1,0);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    lVar3 = *(longlong *)(param_1 + 0xa8);
  }
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_1458b2186(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1458b21bc(param_1 + 8);
  return;
}



// FUNCTION 1458b2186 FUN_1458b2186 body=53 status=ok
// SIG undefined FUN_1458b2186(void)

void FUN_1458b2186(longlong *param_1)

{
  FUN_1458b21f2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b21bc FUN_1458b21bc body=53 status=ok
// SIG undefined FUN_1458b21bc(void)

void FUN_1458b21bc(longlong *param_1)

{
  FUN_1458b261a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b21f2 FUN_1458b21f2 body=306 status=ok
// SIG undefined FUN_1458b21f2(void)

void FUN_1458b21f2(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1458b2326((longlong)iStack_4c * 0x40 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b2326 FUN_1458b2326 body=73 status=ok
// SIG undefined FUN_1458b2326(void)

void FUN_1458b2326(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[6];
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
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b2370 FUN_1458b2370 body=9 status=ok
// SIG undefined FUN_1458b2370(void)

void FUN_1458b2370(longlong param_1)

{
  FUN_1412d5fce(param_1 + 0x10);
  return;
}



// FUNCTION 1458b237a FUN_1458b237a body=333 status=ok
// SIG undefined FUN_1458b237a(void)

void FUN_1458b237a(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_14694a59a((longlong)iStack_4c * 0x40 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458b24c8 FUN_1458b24c8 body=336 status=ok
// SIG undefined FUN_1458b24c8(void)

void FUN_1458b24c8(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_14694a546((longlong)iStack_4c * 0x50 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458b261a FUN_1458b261a body=345 status=ok
// SIG undefined FUN_1458b261a(void)

void FUN_1458b261a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b2774 FUN_1458b2774 body=9 status=ok
// SIG undefined FUN_1458b2774(void)

void FUN_1458b2774(longlong param_1)

{
  FUN_1458b277e(param_1 + 0x10);
  return;
}



// FUNCTION 1458b277e FUN_1458b277e body=79 status=ok
// SIG undefined FUN_1458b277e(void)

void FUN_1458b277e(longlong param_1)

{
  FUN_145738ef1(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_145738ef1(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_1458b27ce(param_1 + 8);
  return;
}



// FUNCTION 1458b27ce FUN_1458b27ce body=53 status=ok
// SIG undefined FUN_1458b27ce(void)

void FUN_1458b27ce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_1458b2803(lVar1,*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458b2803 FUN_1458b2803 body=73 status=ok
// SIG undefined FUN_1458b2803(void)

void FUN_1458b2803(longlong param_1,int param_2)

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



// FUNCTION 1458b284c FUN_1458b284c body=14 status=ok
// SIG undefined FUN_1458b284c(void)

void FUN_1458b284c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
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



// FUNCTION 1458b285a FUN_1458b285a body=349 status=ok
// SIG undefined FUN_1458b285a(void)

void FUN_1458b285a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x20 + (longlong)iStack_54 * 0x30);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b29b8 FUN_1458b29b8 body=46 status=ok
// SIG undefined FUN_1458b29b8(void)

void FUN_1458b29b8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1458b29e6(param_1 + 0x20);
  return;
}



// FUNCTION 1458b29e6 FUN_1458b29e6 body=53 status=ok
// SIG undefined FUN_1458b29e6(void)

void FUN_1458b29e6(longlong *param_1)

{
  FUN_1458b2a1c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b2a1c FUN_1458b2a1c body=88 status=ok
// SIG undefined FUN_1458b2a1c(void)

void FUN_1458b2a1c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458b2a74 FUN_1458b2a74 body=349 status=ok
// SIG undefined FUN_1458b2a74(void)

void FUN_1458b2a74(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x20 + (longlong)iStack_54 * 0x30);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458b2bd2 FUN_1458b2bd2 body=46 status=ok
// SIG undefined FUN_1458b2bd2(void)

void FUN_1458b2bd2(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1458b2c00(param_1 + 0x20);
  return;
}



// FUNCTION 1458b2c00 FUN_1458b2c00 body=53 status=ok
// SIG undefined FUN_1458b2c00(void)

void FUN_1458b2c00(longlong *param_1)

{
  FUN_1458b2c36();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458b2c36 FUN_1458b2c36 body=88 status=ok
// SIG undefined FUN_1458b2c36(void)

void FUN_1458b2c36(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458b2c8e FUN_1458b2c8e body=382 status=ok
// SIG undefined FUN_1458b2c8e(void)

void FUN_1458b2c8e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x20 + (longlong)iStack_54 * 0x30);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458b2e0e FUN_1458b2e0e body=335 status=ok
// SIG undefined FUN_1458b2e0e(void)

void FUN_1458b2e0e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 1458b2f5e FUN_1458b2f5e body=341 status=ok
// SIG undefined FUN_1458b2f5e(void)

void FUN_1458b2f5e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x94 + (longlong)iVar4 * 0x98) * 4) =
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



// FUNCTION 1458b30b4 FUN_1458b30b4 body=167 status=ok
// SIG undefined FUN_1458b30b4(void)

bool FUN_1458b30b4(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


