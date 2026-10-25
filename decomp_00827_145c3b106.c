// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145c3b106 FUN_145c3b106 body=53 status=ok
// SIG undefined FUN_145c3b106(void)

void FUN_145c3b106(longlong *param_1)

{
  FUN_145c3b44e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3b13c FUN_145c3b13c body=53 status=ok
// SIG undefined FUN_145c3b13c(void)

void FUN_145c3b13c(longlong *param_1)

{
  FUN_145c3b2f2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3b172 FUN_145c3b172 body=382 status=ok
// SIG undefined FUN_145c3b172(void)

void FUN_145c3b172(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_147c5dc52(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c3b2f2 FUN_145c3b2f2 body=346 status=ok
// SIG undefined FUN_145c3b2f2(void)

void FUN_145c3b2f2(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 145c3b44e FUN_145c3b44e body=378 status=ok
// SIG undefined FUN_145c3b44e(void)

void FUN_145c3b44e(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x68;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_147c5fd02(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c3b5ca FUN_145c3b5ca body=24 status=ok
// SIG undefined FUN_145c3b5ca(void)

void FUN_145c3b5ca(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c3b5de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145c3b5e2 FUN_145c3b5e2 body=38 status=ok
// SIG undefined FUN_145c3b5e2(void)

undefined8 FUN_145c3b5e2(undefined8 param_1,int param_2)

{
  FUN_145c3b608();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3b608 FUN_145c3b608 body=115 status=ok
// SIG undefined FUN_145c3b608(void)

void FUN_145c3b608(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b95cba0;
  param_1[4] = &PTR_FUN_14b95cbc0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3b67c(param_1 + 6);
  FUN_140af926c(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c3b677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145c3b67c FUN_145c3b67c body=55 status=ok
// SIG undefined FUN_145c3b67c(void)

void FUN_145c3b67c(longlong *param_1)

{
  FUN_145c3b6b4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3b6b4 FUN_145c3b6b4 body=377 status=ok
// SIG undefined FUN_145c3b6b4(void)

void FUN_145c3b6b4(longlong *param_1,int param_2)

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
      FUN_1406fcf4a(*local_70 + (longlong)iStack_54 * 0x260 + 0x10);
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
    FUN_1414fc452(param_1,param_2);
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



// FUNCTION 145c3b830 FUN_145c3b830 body=96 status=ok
// SIG undefined FUN_145c3b830(void)

longlong * FUN_145c3b830(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
  FUN_145c3b890(plVar3);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
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
  return param_1;
}



// FUNCTION 145c3b890 FUN_145c3b890 body=101 status=ok
// SIG undefined FUN_145c3b890(void)

undefined8 * FUN_145c3b890(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = SharedPointerInternals::
             TIntrusiveReferenceController<TFutureState<FRunnableThread*___ptr64>,1>::vftable;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[8] = 0;
  param_1[10] = 0;
  uVar1 = FUN_1405d8a54(1);
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 145c3b900 FUN_145c3b900 body=185 status=ok
// SIG undefined FUN_145c3b900(void)

undefined8 * FUN_145c3b900(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40 [3];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b7d1de0;
  FUN_14480757c(local_40,&DAT_14cbce730);
  FUN_1404e49fa(param_1 + 5,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbce748);
  FUN_1446ddc76(local_40,"onlineprefs",1);
  param_1[0x10] = local_40[0];
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3b9ba FUN_145c3b9ba body=38 status=ok
// SIG undefined FUN_145c3b9ba(void)

undefined8 FUN_145c3b9ba(undefined8 param_1,int param_2)

{
  FUN_145c3b9e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3b9e0 FUN_145c3b9e0 body=273 status=ok
// SIG undefined FUN_145c3b9e0(void)

void FUN_145c3b9e0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  uVar2 = FUN_145c3bb50();
  FUN_14126849c(uVar2,param_1);
  puVar7 = *(undefined8 **)(param_1 + 8);
  if ((longlong)*(int *)(param_1 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    puVar5 = puVar7 + (longlong)*(int *)(param_1 + 0x10) * 8;
    do {
      pcVar1 = (code *)*puVar7;
      plVar3 = puVar7 + 4;
      if ((longlong *)puVar7[2] != (longlong *)0x0) {
        plVar3 = (longlong *)puVar7[2];
      }
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(uVar2);
      puVar7 = puVar7 + 8;
    } while (puVar7 != puVar5);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    puVar7 = *(undefined8 **)(param_1 + 8);
  }
  FUN_144a6a7e8(puVar7,uVar4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1414fc534(param_1 + 8,0);
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    lVar8 = 0;
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar8);
      (**(code **)(*plVar3 + 0x48))(plVar3,0xffffffff);
      *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x10 + lVar8) = 0;
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x18;
    } while (lVar6 < *(int *)(param_1 + 0x1c));
  }
  FUN_140f14872(&DAT_14c82ba00,1);
  TlsFree(*(DWORD *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6a7e8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3baf2 FUN_145c3baf2 body=93 status=ok
// SIG undefined FUN_145c3baf2(void)

void FUN_145c3baf2(longlong param_1,int param_2)

{
  if (*(longlong **)(param_1 + 0x188) != (longlong *)0x0) {
    if (param_2 == -1) {
      *(undefined1 *)(param_1 + 0x185) = 1;
      *(undefined1 *)(param_1 + 0x305) = 1;
      (**(code **)(**(longlong **)(param_1 + 0x188) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000145c3bb4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x308) + 0x10))();
      return;
    }
    *(undefined1 *)(param_1 + 0x184 + (longlong)param_2 * 0x180) = 1;
  }
  return;
}



// FUNCTION 145c3bb50 FUN_145c3bb50 body=147 status=ok
// SIG undefined FUN_145c3bb50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145c3bb50(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867b40) {
    FUN_144b3d300(&DAT_14c867b40);
    if (DAT_14c867b40 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c867b00);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c867b00,4000);
      DAT_14c867b28 = 0;
      _DAT_14c867b30 = 0;
      _DAT_14c867b38 = 2;
      atexit(FUN_14278019d);
      _Init_thread_footer(&DAT_14c867b40);
    }
  }
  return &DAT_14c867b00;
}



// FUNCTION 145c3bbee FUN_145c3bbee body=318 status=ok
// SIG undefined FUN_145c3bbee(void)

undefined8 * FUN_145c3bbee(undefined8 *param_1)

{
  FUN_1459a901c();
  *param_1 = &PTR_FUN_14a8b5020;
  param_1[5] = &PTR_FUN_14a8b54e0;
  param_1[0x129] = 0;
  *(undefined4 *)(param_1 + 0x12a) = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  *(undefined8 *)((longlong)param_1 + 0x954) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x95c) = 0;
  param_1[0x12d] = 0;
  *(undefined4 *)(param_1 + 0x12e) = 0;
  *(undefined1 *)(param_1 + 0x13c) = 0;
  param_1[0x159] = 0;
  *(undefined4 *)(param_1 + 0x15a) = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa24) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa2c) = 0;
  param_1[0x149] = 0;
  param_1[0x14a] = 0;
  param_1[0x156] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xad4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xadc) = 0;
  param_1[0x15d] = 0;
  *(undefined4 *)(param_1 + 0x15e) = 0;
  param_1[0x165] = 0;
  param_1[0x162] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  *(undefined4 *)(param_1 + 0x166) = 0;
  FUN_145c3bd2c(param_1 + 0x168);
  *(undefined1 *)(param_1 + 0x2b4) = 0;
  FUN_145c3c3c6(param_1);
  return param_1;
}



// FUNCTION 145c3bd2c FUN_145c3bd2c body=747 status=ok
// SIG undefined FUN_145c3bd2c(void)

undefined8 * FUN_145c3bd2c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  FUN_140810d00(param_1 + 0x18,0);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_145c3c0a0(param_1 + 0x31);
  FUN_145c3c16c(param_1 + 0x48);
  FUN_145c3c018(param_1 + 0xab);
  param_1[0xd1] = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined8 *)((longlong)param_1 + 0x694) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x69c) = 0;
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6ec) = 0;
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  param_1[0xeb] = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x764) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x76c) = 0;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  param_1[0xf5] = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7bc) = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x804) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x80c) = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  param_1[0x10c] = 0;
  *(undefined4 *)(param_1 + 0x10d) = 0;
  *(undefined4 *)(param_1 + 0x107) = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  *(undefined8 *)((longlong)param_1 + 0x86c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x874) = 0;
  param_1[0x110] = 0;
  *(undefined4 *)(param_1 + 0x111) = 0;
  *(undefined1 *)(param_1 + 0x112) = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0x800000000;
  param_1[0x122] = 0;
  param_1[300] = 0;
  *(undefined4 *)(param_1 + 0x12d) = 0;
  param_1[0x120] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  *(undefined8 *)((longlong)param_1 + 0x96c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x974) = 0;
  param_1[0x130] = 0;
  *(undefined4 *)(param_1 + 0x131) = 0;
  param_1[0x136] = 0;
  *(undefined4 *)(param_1 + 0x137) = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c4) = 0;
  param_1[0x13a] = 0;
  *(undefined4 *)(param_1 + 0x13b) = 0;
  param_1[0x142] = 0;
  *(undefined4 *)(param_1 + 0x143) = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa24) = 0;
  param_1[0x146] = 0;
  *(undefined4 *)(param_1 + 0x147) = 0;
  *(undefined1 *)(param_1 + 0x14a) = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  return param_1;
}



// FUNCTION 145c3c018 FUN_145c3c018 body=136 status=ok
// SIG undefined FUN_145c3c018(void)

void FUN_145c3c018(undefined8 *param_1)

{
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  return;
}



// FUNCTION 145c3c0a0 FUN_145c3c0a0 body=203 status=ok
// SIG undefined FUN_145c3c0a0(void)

undefined8 * FUN_145c3c0a0(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  *param_1 = 0x132cf5a13d;
  param_1[1] = 0x2400000000;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  puVar2 = (undefined8 *)FUN_144a8b586();
  param_1[0xc] = *puVar2;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(puVar2 + 1);
  param_1[0xe] = 0;
  iVar1 = *(int *)(puVar2 + 3);
  _Src = (void *)puVar2[2];
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = DAT_14c89603c;
  *(undefined4 *)(param_1 + 0x16) = 1;
  return param_1;
}



// FUNCTION 145c3c16c FUN_145c3c16c body=230 status=ok
// SIG undefined FUN_145c3c16c(void)

undefined4 * FUN_145c3c16c(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_145a3d396(param_1 + 2);
  *(undefined8 *)(param_1 + 0x4a) = 0;
  param_1[0x4c] = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4d) = 0xffffffff00000080;
  param_1[0x4f] = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x54] = 0;
  *(undefined8 *)(param_1 + 0x5b) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  param_1[0x60] = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  FUN_145c3c018(param_1 + 0x62);
  *(undefined8 *)(param_1 + 0xba) = 0;
  param_1[0xbc] = 0;
  *(undefined8 *)(param_1 + 0xa2) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa6) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xaa) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xae) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb2) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xbd) = 0xffffffff00000080;
  param_1[0xbf] = 0;
  *(undefined8 *)(param_1 + 0xc2) = 0;
  param_1[0xc4] = 0;
  return param_1;
}



// FUNCTION 145c3c252 FUN_145c3c252 body=353 status=ok
// SIG undefined FUN_145c3c252(void)

undefined4 * FUN_145c3c252(undefined4 *param_1)

{
  void **ppvVar1;
  void *pvVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar6 = FUN_145c3c3b7();
  FUN_140056680(&local_48,uVar6);
  uVar5 = FUN_145c3c3bf();
  bVar3 = FUN_145c3c3b4();
  pvVar2 = local_48;
  ppvVar1 = (void **)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *param_1 = 0x50005;
  *(undefined2 *)(param_1 + 1) = 4;
  param_1[2] = (uint)bVar3 << 0x1f | uVar5;
  if (ppvVar1 != &local_48) {
    lVar7 = (longlong)local_40;
    param_1[6] = local_40;
    if (lVar7 != 0) {
      FUN_1446dd670(ppvVar1,local_40,0);
      memcpy(*ppvVar1,pvVar2,lVar7 * 2);
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8(local_48);
  }
  uVar6 = FUN_145c3c3b7();
  FUN_140056680(&local_48,uVar6);
  uVar5 = FUN_145a36689();
  bVar3 = FUN_145c3c3b4();
  bVar4 = FUN_145c3c3b4();
  pvVar2 = local_48;
  ppvVar1 = (void **)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[8] = 0x50005;
  *(ushort *)(param_1 + 9) = (ushort)bVar4 << 2;
  param_1[10] = (uint)bVar3 << 0x1f | uVar5;
  if (ppvVar1 != &local_48) {
    param_1[0xe] = local_40;
    if ((longlong)local_40 != 0) {
      FUN_1446dd670(ppvVar1,local_40,0);
      memcpy(*ppvVar1,pvVar2,(longlong)local_40 * 2);
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145c3c3b4 FUN_145c3c3b4 body=3 status=ok
// SIG undefined FUN_145c3c3b4(void)

undefined1 FUN_145c3c3b4(void)

{
  return 1;
}



// FUNCTION 145c3c3b7 FUN_145c3c3b7 body=8 status=ok
// SIG undefined FUN_145c3c3b7(void)

undefined * FUN_145c3c3b7(void)

{
  return &DAT_149dfb700;
}



// FUNCTION 145c3c3bf FUN_145c3c3bf body=6 status=ok
// SIG undefined FUN_145c3c3bf(void)

undefined8 FUN_145c3c3bf(void)

{
  return 0x4ade3d;
}



// FUNCTION 145c3c3c6 FUN_145c3c3c6 body=428 status=ok
// SIG undefined FUN_145c3c3c6(void)

void FUN_145c3c3c6(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong local_48 [3];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412e3d1e(local_58);
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_1407c869a(local_58,local_48,0);
  FUN_144a6c01e(local_48,&local_30);
  if ((longlong *)(param_1 + 0xa48) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xa48) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xa48) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0xa50) = (undefined4)local_28;
    *(undefined4 *)(param_1 + 0xa54) = local_28._4_4_;
    local_28 = 0;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xca0) = 0;
  *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) & 0xcf;
  *(undefined8 *)(param_1 + 0xb18) = 0;
  *(byte *)(param_1 + 0x309) = *(byte *)(param_1 + 0x309) | 0xb0;
  *(undefined1 *)(param_1 + 0x15a0) = 0;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    if (*(int *)(param_1 + 0xaa4) < 0x200) {
      FUN_147a6fb7a(param_1 + 0xa98,0x200);
    }
    FUN_147cdd8d2(param_1 + 0xcc8);
  }
  *(undefined4 *)(param_1 + 0xb20) = *DAT_14cad5f20;
  lVar1 = DAT_14cad5ff8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  *(undefined4 *)(param_1 + 0xb24) = *(undefined4 *)(lVar1 + uVar3 * 4);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3c574 FUN_145c3c574 body=24 status=ok
// SIG undefined FUN_145c3c574(void)

void FUN_145c3c574(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c3c588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145c3c58c FUN_145c3c58c body=38 status=ok
// SIG undefined FUN_145c3c58c(void)

undefined8 FUN_145c3c58c(undefined8 param_1,int param_2)

{
  FUN_145c3c5b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3c5b2 FUN_145c3c5b2 body=86 status=ok
// SIG undefined FUN_145c3c5b2(void)

void FUN_145c3c5b2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e44270;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149e442a0;
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3c610 FUN_145c3c610 body=260 status=ok
// SIG undefined FUN_145c3c610(void)

undefined8 * FUN_145c3c610(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_140c444d0();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  *param_1 = &PTR_FUN_14a5b09f0;
  lVar2 = FUN_14001cc68(0x460,0x10);
  FUN_145c3c714(lVar2,param_1);
  param_1[7] = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a5b5a30;
  plVar3[2] = lVar2;
  param_1[8] = plVar3;
  if (lVar2 == 0) {
    return param_1;
  }
  if (((*(longlong *)(lVar2 + 0x10) != 0) && (*(longlong *)(lVar2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x18) + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 0x10) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x18);
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 0x10) = lVar2;
    if (*(longlong **)(lVar2 + 0x18) == plVar3) goto LAB_145c3c6b2;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(longlong **)(lVar2 + 0x18);
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(lVar2 + 0x18) = plVar3;
      goto LAB_145c3c6b2;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  *(longlong **)(lVar2 + 0x18) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_145c3c6b2:
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
  return param_1;
}



// FUNCTION 145c3c714 FUN_145c3c714 body=437 status=ok
// SIG undefined FUN_145c3c714(void)

undefined8 * FUN_145c3c714(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14a5b02c0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_145c3c8ca(param_1 + 0x4d,param_1);
  param_1[0x86] = 0;
  FUN_14485c47a(param_1 + 0x86,param_2);
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 2;
  *(undefined2 *)(param_1 + 0x8a) = 0x100;
  param_1[0x8b] = 0;
  return param_1;
}



// FUNCTION 145c3c8ca FUN_145c3c8ca body=183 status=ok
// SIG undefined FUN_145c3c8ca(void)

void FUN_145c3c8ca(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x8000000000;
  lVar2 = 200;
  do {
    *(undefined8 *)(param_1 + -0x28 + lVar2) = 0;
    *(undefined4 *)(param_1 + -0x20 + lVar2) = 0;
    puVar1 = (undefined8 *)(param_1 + -0x48 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + -0x1c + lVar2) = 0xffffffff00000080;
    *(undefined4 *)(param_1 + -0x14 + lVar2) = 0;
    *(undefined8 *)(param_1 + -8 + lVar2) = 0;
    *(undefined4 *)(param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0x168);
  lVar2 = 0x168;
  do {
    *(undefined8 *)(param_1 + -0x28 + lVar2) = 0;
    *(undefined4 *)(param_1 + -0x20 + lVar2) = 0;
    puVar1 = (undefined8 *)(param_1 + -0x48 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + -0x1c + lVar2) = 0xffffffff00000080;
    *(undefined4 *)(param_1 + -0x14 + lVar2) = 0;
    *(undefined8 *)(param_1 + -8 + lVar2) = 0;
    *(undefined4 *)(param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0x208);
  *(undefined8 *)(param_1 + 0x1c0) = param_2;
  return;
}



// FUNCTION 145c3c982 FUN_145c3c982 body=139 status=ok
// SIG undefined FUN_145c3c982(void)

undefined8 * FUN_145c3c982(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x250);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b403ec0;
  _Dst = puVar1 + 2;
  memset(_Dst,0,0x240);
  FUN_1411c3dfa(_Dst);
  puVar1[2] = &PTR_FUN_14b0ae760;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  *(undefined2 *)(puVar1 + 0x48) = 0;
  *param_2 = _Dst;
  param_2[1] = puVar1;
  FUN_145c3ca0e(param_2,_Dst);
  return param_2;
}



// FUNCTION 145c3ca0e FUN_145c3ca0e body=157 status=ok
// SIG undefined FUN_145c3ca0e(void)

void FUN_145c3ca0e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145c3ca48;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145c3ca48;
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
LAB_145c3ca48:
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
                    /* WARNING: Could not recover jumptable at 0x000145c3caa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145c3caac FUN_145c3caac body=9 status=ok
// SIG undefined FUN_145c3caac(void)

void FUN_145c3caac(longlong param_1)

{
  FUN_145c3cab6(param_1 + 0x10);
  return;
}



// FUNCTION 145c3cab6 FUN_145c3cab6 body=703 status=ok
// SIG undefined FUN_145c3cab6(void)

void FUN_145c3cab6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b96af90;
  if (param_1[0x1b] != 0) {
    FUN_14480f766(&DAT_14cbce5f8);
    param_1[0x1b] = 0;
  }
  if (((param_1[0x1e] != 0) && (param_1[0x1f] != 0)) && (0 < *(int *)(param_1[0x1f] + 8))) {
    FUN_1401cb356();
    local_28 = param_1[0x1e];
    local_20 = param_1[0x1f];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    plVar2 = (longlong *)param_1[0x1f];
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if (((param_1[0x20] != 0) && (param_1[0x21] != 0)) && (0 < *(int *)(param_1[0x21] + 8))) {
    FUN_1401cb356();
    local_38 = param_1[0x20];
    local_30 = param_1[0x21];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_38);
    plVar2 = (longlong *)param_1[0x21];
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if (param_1[0x1c] != 0) {
    cVar3 = FUN_144729dda(param_1 + 4);
    if (cVar3 != '\0') {
      uVar4 = FUN_14479d2ce(param_1 + 4);
      lVar5 = FUN_141285870(uVar4);
      if ((lVar5 != 0) && (param_1[0x1c] != 0)) {
        FUN_14480f766(lVar5 + 0x40);
      }
      param_1[0x1c] = 0;
    }
  }
  plVar2 = (longlong *)param_1[0x21];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0x1f];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3cd86(param_1 + 0x11);
  FUN_145ca4b2f(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3cdbc(param_1 + 5);
  if (param_1[2] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[2] + 0xc);
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



// FUNCTION 145c3cd86 FUN_145c3cd86 body=53 status=ok
// SIG undefined FUN_145c3cd86(void)

void FUN_145c3cd86(longlong *param_1)

{
  FUN_145c3cdf2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3cdbc FUN_145c3cdbc body=53 status=ok
// SIG undefined FUN_145c3cdbc(void)

void FUN_145c3cdbc(longlong *param_1)

{
  FUN_145ca4b98();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3cdf2 FUN_145c3cdf2 body=348 status=ok
// SIG undefined FUN_145c3cdf2(void)

void FUN_145c3cdf2(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 145c3cf50 FUN_145c3cf50 body=137 status=ok
// SIG undefined FUN_145c3cf50(void)

void FUN_145c3cf50(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_140032b16(0);
  FUN_145c3cfe0(uVar1,local_28);
  FUN_140c379ae(param_1 + 8,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_140032b16(0);
  uVar1 = FUN_145c3cfda(uVar1);
  local_28[0] = param_1;
  FUN_145c3d04a(uVar1,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3cfda FUN_145c3cfda body=5 status=ok
// SIG undefined FUN_145c3cfda(void)

longlong FUN_145c3cfda(longlong param_1)

{
  return param_1 + 0x60;
}



// FUNCTION 145c3cfe0 FUN_145c3cfe0 body=104 status=ok
// SIG undefined FUN_145c3cfe0(void)

undefined8 FUN_145c3cfe0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18);
    FUN_1400021e4(&local_18,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  FUN_140fde876(param_2);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145c3d04a FUN_145c3d04a body=220 status=ok
// SIG undefined FUN_145c3d04a(void)

undefined8 FUN_145c3d04a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14a9098d0;
  local_38[3] = *param_3;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3d132 FUN_145c3d132 body=322 status=ok
// SIG undefined FUN_145c3d132(void)

undefined8 * FUN_145c3d132(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_145943e5e();
  *param_1 = &PTR_FUN_14ac0aa10;
  FUN_14111896e(param_1 + 0x12);
  FUN_14111896e(param_1 + 0x19);
  FUN_145c3d274(param_1 + 0x20);
  FUN_145c3d274(param_1 + 0x27);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x179) = 0;
  *(undefined8 *)((longlong)param_1 + 0x181) = 0;
  FUN_14111896e(param_1 + 0x32);
  param_1[0x3a] = 0;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x3a] = lVar1;
  *(undefined4 *)(param_1 + 0x18) = 0x43960000;
  *(undefined4 *)(param_1 + 0x1f) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x26) = 3;
  *(undefined4 *)(param_1 + 0x2d) = 8;
  *(undefined1 *)(param_1 + 0x31) = 0;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x2e] = lVar1;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x30] = lVar1;
  *(undefined4 *)(param_1 + 0x38) = 0x43b40000;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)((longlong)param_1 + 0x85) = 0;
  return param_1;
}



// FUNCTION 145c3d274 FUN_145c3d274 body=62 status=ok
// SIG undefined FUN_145c3d274(void)

undefined8 * FUN_145c3d274(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14abfde30;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar1 = FUN_144a7452c();
  param_1[5] = uVar1;
  return param_1;
}



// FUNCTION 145c3d2b2 FUN_145c3d2b2 body=62 status=ok
// SIG undefined FUN_145c3d2b2(void)

void FUN_145c3d2b2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145c3d2f0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 145c3d2f0 FUN_145c3d2f0 body=111 status=ok
// SIG undefined FUN_145c3d2f0(void)

ulonglong FUN_145c3d2f0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0xc) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      uVar1 = uVar1 / 0xc;
    }
  }
  return uVar1;
}



// FUNCTION 145c3d360 FUN_145c3d360 body=626 status=ok
// SIG undefined FUN_145c3d360(void)

void FUN_145c3d360(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_50 = 0;
  local_48 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_50;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar2 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar6) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar6 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (bVar6) goto LAB_145c3d577;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_145c3d577:
      local_50 = *puVar3;
      local_48 = 0xffffffff;
      puVar3 = &local_50;
    }
  }
  local_60 = 0;
  local_58 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_60;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar2 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar6 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar6) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar6 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar6) goto LAB_145c3d492;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_145c3d492;
    local_60 = *puVar5;
    local_58 = 0xffffffff;
    puVar5 = &local_60;
  }
LAB_145c3d492:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414fd5fa(local_40,puVar3,puVar5);
  *param_3 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c3d5d4 FUN_145c3d5d4 body=4835 status=ok
// SIG undefined FUN_145c3d5d4(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c3d5d4(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_2358 [32];
  undefined4 local_2338;
  undefined ***local_2330;
  undefined8 local_2328;
  undefined8 local_2320;
  undefined8 local_2318;
  undefined **local_2310;
  undefined **local_2308 [20];
  longlong *local_2268;
  undefined **local_2250;
  undefined **local_2248 [20];
  longlong *local_21a8;
  undefined **local_2190;
  undefined **local_2188 [20];
  longlong *local_20e8;
  undefined **local_20d0;
  undefined8 local_20c8;
  undefined8 local_20c0;
  undefined8 local_20b8;
  undefined **local_20b0 [7];
  longlong *local_2078;
  undefined4 local_2064;
  undefined8 local_2050;
  undefined8 local_2048;
  undefined8 local_2040;
  undefined8 local_2038;
  undefined8 local_2030;
  undefined8 local_2028;
  undefined8 local_2020;
  undefined8 local_2018;
  undefined8 local_2010;
  undefined **local_2008 [20];
  longlong *local_1f68;
  undefined **local_1f58 [2];
  undefined1 local_1f48 [144];
  longlong *local_1eb8;
  undefined1 auStack_1e98 [176];
  undefined1 local_1de8 [176];
  undefined1 local_1d38 [176];
  undefined1 *local_1c88;
  undefined1 *puStack_1c80;
  undefined1 local_1c78;
  undefined1 *local_1c74;
  undefined1 *puStack_1c6c;
  undefined1 local_1c64;
  undefined1 *local_1c60;
  undefined1 *puStack_1c58;
  undefined1 local_1c50;
  undefined1 *local_1c4c;
  undefined1 *puStack_1c44;
  undefined1 local_1c3c;
  undefined8 local_1c38;
  undefined8 uStack_1c30;
  undefined8 local_1c28;
  undefined8 uStack_1c20;
  undefined **local_1be8;
  undefined1 local_1be0 [152];
  longlong *local_1b48;
  undefined8 local_18c8;
  undefined8 uStack_18c0;
  undefined4 local_18b8;
  undefined4 uStack_18b4;
  undefined4 uStack_18b0;
  undefined4 uStack_18ac;
  undefined **local_1878 [20];
  longlong *local_17d8;
  undefined1 local_17b8 [176];
  undefined1 local_1708 [432];
  undefined8 local_1558;
  undefined8 uStack_1550;
  undefined8 local_1548;
  undefined8 uStack_1540;
  undefined **local_1508 [2];
  undefined1 local_14f8 [144];
  longlong *local_1468;
  undefined1 local_1448 [176];
  undefined1 local_1398 [176];
  undefined1 local_12e8 [176];
  undefined8 local_1238;
  undefined8 uStack_1230;
  undefined4 local_1228;
  undefined4 local_1224;
  undefined4 uStack_1220;
  undefined4 uStack_121c;
  undefined4 uStack_1218;
  undefined4 local_1214;
  undefined4 local_1210;
  undefined4 uStack_120c;
  undefined4 uStack_1208;
  undefined4 uStack_1204;
  undefined4 local_1200;
  undefined8 local_11fc;
  undefined8 uStack_11f4;
  undefined4 local_11ec;
  undefined8 local_11e8;
  undefined8 uStack_11e0;
  undefined4 local_11d8;
  undefined4 uStack_11d4;
  undefined4 uStack_11d0;
  undefined4 uStack_11cc;
  undefined **local_1198 [2];
  undefined1 local_1188 [144];
  longlong *local_10f8;
  undefined1 local_10d8 [176];
  undefined1 local_1028 [512];
  undefined **local_e28 [2];
  undefined1 local_e18 [144];
  longlong *local_d88;
  undefined1 local_d68 [176];
  undefined1 local_cb8 [176];
  undefined1 local_c08 [176];
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined4 local_b48;
  undefined8 local_b44;
  undefined8 uStack_b3c;
  undefined4 local_b34;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined4 local_b20;
  undefined8 local_b1c;
  undefined8 uStack_b14;
  undefined4 local_b0c;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined4 local_af8;
  undefined4 uStack_af4;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  undefined **local_ab8 [20];
  longlong *local_a18;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined1 local_748 [16];
  undefined1 local_738 [176];
  undefined1 local_688 [176];
  undefined1 local_5d8 [176];
  undefined1 local_528 [176];
  undefined8 local_478;
  undefined8 uStack_470;
  undefined4 local_468;
  undefined8 local_464;
  undefined8 uStack_45c;
  undefined4 local_454;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined4 local_440;
  undefined8 local_43c;
  undefined8 uStack_434;
  undefined4 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined1 local_3d8 [888];
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x145c3d5ea;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2358;
  FUN_140ca8d78(local_748);
  local_2330 = local_1878;
  local_1878[0] = DAT_14c84635c;
  local_2338 = 0x3f800000;
  FUN_1414fd764(local_ab8,&DAT_14c98db10,0x40800000,&DAT_14c98dc00);
  FUN_140f13d9e(local_738,local_ab8);
  local_2330 = &local_1be8;
  local_1be8 = DAT_14c84635c;
  local_2338 = 0x3f800000;
  FUN_1414fd764(local_e28,&DAT_14c98dbec,0x40800000,&DAT_14c98dc00);
  FUN_140f13d9e(local_688,local_e28);
  local_1f58[0] = DAT_14c84635c;
  local_2338 = 0x3f800000;
  local_2330 = local_1f58;
  FUN_1414fd764(local_1198,&DAT_14c98dd18,0x40800000,&DAT_14c98dc00);
  FUN_140f13d9e(local_5d8,local_1198);
  local_2008[0] = DAT_14c84635c;
  local_2338 = 0x3f800000;
  local_2330 = local_2008;
  FUN_1414fd764(local_1508,&DAT_14c98dbc4,0x40800000,&DAT_14c98dc14);
  FUN_140f13d9e(local_528,local_1508);
  local_478 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_470 = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_468 = DAT_14c98db48;
  local_454 = DAT_14c98db48;
  local_440 = DAT_14c98db48;
  local_43c = _DAT_14c98dac0;
  uStack_434 = uRam000000014c98dac8;
  local_42c = DAT_14c98dad0;
  local_428 = _DAT_14c968034;
  uStack_420 = uRam000000014c96803c;
  local_418 = _DAT_14c968044;
  uStack_414 = uRam000000014c968048;
  uStack_410 = uRam000000014c96804c;
  uStack_40c = uRam000000014c968050;
  local_464 = local_478;
  uStack_45c = uStack_470;
  local_450 = local_478;
  uStack_448 = uStack_470;
  FUN_141478cf2(local_3d8,local_748);
  plVar1 = local_1468;
  local_1508[0] = &PTR_FUN_149ed05f0;
  if (local_1468 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1468 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1468)(local_1468);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_10f8;
  local_1198[0] = &PTR_FUN_149ed05f0;
  if (local_10f8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10f8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_10f8)(local_10f8);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_e28[0] = &PTR_FUN_149ed05f0;
  if (local_d88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d88)(local_d88);
      LOCK();
      piVar3 = (int *)((longlong)local_d88 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_d88 + 0x10))(local_d88);
      }
    }
  }
  local_ab8[0] = &PTR_FUN_149ed05f0;
  if (local_a18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a18)(local_a18);
      LOCK();
      piVar3 = (int *)((longlong)local_a18 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_a18 + 0x10))(local_a18);
      }
    }
  }
  FUN_140ffd6b6(local_748);
  FUN_141478cf2(local_ab8,local_3d8);
  local_798 = 0x3fc0000040800000;
  uStack_790 = 0x3fc0000040800000;
  local_788 = 0x40800000;
  uStack_784 = 0x40200000;
  uStack_780 = 0x40800000;
  uStack_77c = 0x3f000000;
  FUN_141478cf2(local_748,local_ab8);
  FUN_140ffd6b6(local_ab8);
  FUN_140ca8d78(local_e28);
  local_1f58[0] = DAT_14c84635c;
  local_2338 = 0x3f800000;
  local_2330 = local_1f58;
  FUN_1414fd764(local_1198,&DAT_14c98dc3c,0x40800000,&DAT_14c98dc00);
  FUN_140f13d9e(local_e18,local_1198);
  local_2008[0] = DAT_14c84635c;
  local_2338 = 0x3f800000;
  local_2330 = local_2008;
  FUN_1414fd764(local_1508,&DAT_14c98dae8,0x40800000,&DAT_14c98dc00);
  FUN_140f13d9e(local_d68,local_1508);
  local_2188[0] = DAT_14c84635c;
  local_2338 = 0x3f800000;
  local_2330 = local_2188;
  FUN_1414fd764(local_1878,&DAT_14c98dc78,0x40800000,&DAT_14c98dc00);
  FUN_140f13d9e(local_cb8,local_1878);
  local_2330 = local_2248;
  local_2248[0] = DAT_14c84635c;
  local_2338 = 0x3f800000;
  FUN_1414fd764(&local_1be8,&DAT_14c98dbc4,0x40800000,&DAT_14c98dc14);
  FUN_140f13d9e(local_c08,&local_1be8);
  local_b58 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_b50 = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_b48 = DAT_14c98db48;
  local_b34 = DAT_14c98db48;
  local_b20 = DAT_14c98db48;
  local_b1c = _DAT_14c98dac0;
  uStack_b14 = uRam000000014c98dac8;
  local_b0c = DAT_14c98dad0;
  local_b08 = _DAT_14c968034;
  uStack_b00 = uRam000000014c96803c;
  local_af8 = _DAT_14c968044;
  uStack_af4 = uRam000000014c968048;
  uStack_af0 = uRam000000014c96804c;
  uStack_aec = uRam000000014c968050;
  local_b44 = local_b58;
  uStack_b3c = uStack_b50;
  local_b30 = local_b58;
  uStack_b28 = uStack_b50;
  FUN_141478cf2(local_ab8,local_e28);
  plVar1 = local_1b48;
  local_1be8 = &PTR_FUN_149ed05f0;
  if (local_1b48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1b48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1b48)(local_1b48);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_17d8;
  local_1878[0] = &PTR_FUN_149ed05f0;
  if (local_17d8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_17d8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_17d8)(local_17d8);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_1468;
  local_1508[0] = &PTR_FUN_149ed05f0;
  if (local_1468 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1468 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1468)(local_1468);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_1198[0] = &PTR_FUN_149ed05f0;
  if (local_10f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_10f8)(local_10f8);
      LOCK();
      piVar3 = (int *)((longlong)local_10f8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_10f8 + 0x10))(local_10f8);
      }
    }
  }
  FUN_140ffd6b6(local_e28);
  FUN_141478cf2(local_1198,local_ab8);
  local_1f58[0] = DAT_14c967ffc;
  local_2338 = 0x3f800000;
  local_2330 = local_1f58;
  FUN_1414fd764(local_1508,&DAT_14c98dc3c,0x40800000,&DAT_14c98dc00);
  FUN_140f13d9e(local_1188,local_1508);
  local_2008[0] = DAT_14c967ffc;
  local_2330 = local_2008;
  local_2338 = 0x3f800000;
  FUN_1414fd764(local_1878,&DAT_14c98dae8,0x40800000,&DAT_14c98dc00);
  FUN_140f13d9e(local_10d8,local_1878);
  local_2188[0] = DAT_14c967ffc;
  local_2338 = 0x3f800000;
  local_2330 = local_2188;
  FUN_1414fd764(&local_1be8,&DAT_14c98dc78,0x40800000,&DAT_14c98dc00);
  FUN_140f13d9e(local_1028,&local_1be8);
  FUN_141478cf2(local_e28,local_1198);
  plVar1 = local_1b48;
  local_1be8 = &PTR_FUN_149ed05f0;
  if (local_1b48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1b48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1b48)(local_1b48);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_17d8;
  local_1878[0] = &PTR_FUN_149ed05f0;
  if (local_17d8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_17d8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_17d8)(local_17d8);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_1508[0] = &PTR_FUN_149ed05f0;
  if (local_1468 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1468 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1468)(local_1468);
      LOCK();
      piVar3 = (int *)((longlong)local_1468 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1468 + 0x10))(local_1468);
      }
    }
  }
  FUN_140ffd6b6(local_1198);
  FUN_140ca8d78(local_1508);
  local_2188[0] = DAT_14c84635c;
  FUN_1412ce202(local_1878);
  FUN_140f13d9e(local_14f8,local_1878);
  local_2248[0] = DAT_14c84635c;
  FUN_14154bc0c(&local_1be8,&DAT_14c98dbc4,0x40800000);
  FUN_140f13d9e(local_1448,&local_1be8);
  local_2308[0] = DAT_14c84635c;
  FUN_14154bc0c(local_1f58,&DAT_14c98dbc4,0x40800000);
  FUN_140f13d9e(local_1398,local_1f58);
  local_20b0[0] = DAT_14c84635c;
  FUN_1412ce202(local_2008);
  FUN_140f13d9e(local_12e8,local_2008);
  local_1238 = _DAT_14c98dac0;
  uStack_1230 = uRam000000014c98dac8;
  local_1228 = DAT_14c98dad0;
  local_1224 = _DAT_14c98db38;
  uStack_1220 = uRam000000014c98db3c;
  uStack_121c = uRam000000014c98db40;
  uStack_1218 = uRam000000014c98db44;
  local_1214 = DAT_14c98db48;
  local_1210 = _DAT_14c98db38;
  uStack_120c = uRam000000014c98db3c;
  uStack_1208 = uRam000000014c98db40;
  uStack_1204 = uRam000000014c98db44;
  local_1200 = DAT_14c98db48;
  local_11fc = _DAT_14c98dac0;
  uStack_11f4 = uRam000000014c98dac8;
  local_11ec = DAT_14c98dad0;
  local_11e8 = _DAT_14c968034;
  uStack_11e0 = uRam000000014c96803c;
  local_11d8 = _DAT_14c968044;
  uStack_11d4 = uRam000000014c968048;
  uStack_11d0 = uRam000000014c96804c;
  uStack_11cc = uRam000000014c968050;
  FUN_141478cf2(local_1198,local_1508);
  plVar1 = local_1f68;
  local_2008[0] = &PTR_FUN_149ed05f0;
  if (local_1f68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1f68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1f68)(local_1f68);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_1eb8;
  local_1f58[0] = &PTR_FUN_149ed05f0;
  if (local_1eb8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1eb8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1eb8)(local_1eb8);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_1be8 = &PTR_FUN_149ed05f0;
  if (local_1b48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1b48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1b48)(local_1b48);
      LOCK();
      piVar3 = (int *)((longlong)local_1b48 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1b48 + 0x10))(local_1b48);
      }
    }
  }
  local_1878[0] = &PTR_FUN_149ed05f0;
  if (local_17d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_17d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_17d8)(local_17d8);
      LOCK();
      piVar3 = (int *)((longlong)local_17d8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_17d8 + 0x10))(local_17d8);
      }
    }
  }
  FUN_140ffd6b6(local_1508);
  FUN_141478cf2(local_1878,local_1198);
  local_1558 = 0x3f80000040800000;
  uStack_1550 = 0x3f80000040800000;
  local_1548 = 0x4000000040800000;
  uStack_1540 = 0x40800000;
  FUN_141478cf2(local_1508,local_1878);
  FUN_140ffd6b6(local_1878);
  FUN_141478cf2(&local_1be8,local_1198);
  local_18c8 = 0x3f80000040000000;
  uStack_18c0 = 0x3f80000040000000;
  local_18b8 = 0x40000000;
  uStack_18b4 = 0x40000000;
  uStack_18b0 = 0x40000000;
  uStack_18ac = 0;
  FUN_141478cf2(local_1878,&local_1be8);
  FUN_140ffd6b6(&local_1be8);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_2010,"NormalText",1);
  uVar5 = FUN_140a57516(uVar4,local_2010,0,0);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_2018,"ButtonText",1);
  FUN_1412cc702(uVar4,local_2018,uVar5);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_2020,"PrimaryButton",1);
  FUN_1414fd860(uVar4,local_2020,local_3d8);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_2028,"PrimaryButtonLabelAndIcon",1);
  FUN_1414fd860(uVar4,local_2028,local_748);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_2030,"Button",1);
  FUN_1414fd860(uVar4,local_2030,local_ab8);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_2038,"EditorUtilityButton",1);
  FUN_1414fd860(uVar4,local_2038,local_e28);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_2040,"SimpleButton",1);
  FUN_1414fd860(uVar4,local_2040,local_1878);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_2048,"SimpleButtonLabelAndIcon",1);
  FUN_1414fd860(uVar4,local_2048,local_1508);
  uVar4 = *param_1;
  FUN_140e9ea3a(&local_1be8,uVar5);
  lVar6 = FUN_145a4e762();
  FUN_1412cc59c(local_1be0,lVar6 + 0xc0);
  FUN_1446ddc76(&local_2050,"PrimaryButtonText",1);
  FUN_1412cc702(uVar4,local_2050,&local_1be8);
  FUN_140e9e952(&local_1be8);
  lVar6 = FUN_145a4e762();
  FUN_144a87366(local_20b0,lVar6 + 0x1e0);
  local_2064 = 200;
  uVar4 = *param_1;
  FUN_1446ddc76(&local_20b8,"SecondaryButton",1);
  FUN_1414fd860(uVar4,local_20b8,local_ab8);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_20c0,"DialogButtonText",1);
  FUN_1412cc702(uVar4,local_20c0,uVar5);
  uVar4 = *param_1;
  FUN_140e9ea3a(&local_1be8,uVar5);
  FUN_1446ddc76(&local_20c8,"SmallButtonText",1);
  FUN_1412cc702(uVar4,local_20c8,&local_1be8);
  FUN_140e9e952(&local_1be8);
  FUN_140ca8d78(local_1f58);
  local_20d0 = DAT_14c84635c;
  FUN_1412ce202(local_2008);
  FUN_140f13d9e(local_1f48,local_2008);
  local_2190 = DAT_14c84635c;
  FUN_1412ce202(local_2188);
  FUN_140f13d9e(auStack_1e98,local_2188);
  local_2250 = DAT_14c84635c;
  FUN_1412ce202(local_2248);
  FUN_140f13d9e(local_1de8,local_2248);
  local_2310 = DAT_14c84635c;
  FUN_1412ce202(local_2308);
  FUN_140f13d9e(local_1d38,local_2308);
  local_1c88 = &DAT_3f8000003f800000;
  puStack_1c80 = &DAT_3f8000003f800000;
  local_1c78 = 0;
  local_1c74 = &DAT_3f8000003f800000;
  puStack_1c6c = &DAT_3f8000003f800000;
  local_1c64 = 0;
  local_1c60 = &DAT_3f8000003f800000;
  puStack_1c58 = &DAT_3f8000003f800000;
  local_1c50 = 0;
  local_1c4c = &DAT_3f8000003f800000;
  puStack_1c44 = &DAT_3f8000003f800000;
  local_1c3c = 0;
  local_1c38 = 0;
  uStack_1c30 = 0;
  local_1c28 = 0;
  uStack_1c20 = 0;
  FUN_141478cf2(&local_1be8,local_1f58);
  local_2308[0] = &PTR_FUN_149ed05f0;
  if (local_2268 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2268 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2268)(local_2268);
      LOCK();
      piVar3 = (int *)((longlong)local_2268 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_2268 + 0x10))(local_2268);
      }
    }
  }
  local_2248[0] = &PTR_FUN_149ed05f0;
  if (local_21a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_21a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_21a8)(local_21a8);
      LOCK();
      piVar3 = (int *)((longlong)local_21a8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_21a8 + 0x10))(local_21a8);
      }
    }
  }
  local_2188[0] = &PTR_FUN_149ed05f0;
  if (local_20e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20e8)(local_20e8);
      LOCK();
      piVar3 = (int *)((longlong)local_20e8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_20e8 + 0x10))(local_20e8);
      }
    }
  }
  plVar1 = local_1f68;
  local_2008[0] = &PTR_FUN_149ed05f0;
  if (local_1f68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1f68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1f68)(local_1f68);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_140ffd6b6(local_1f58);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_2318,"InvisibleButton",1);
  FUN_1414fd860(uVar4,local_2318,&local_1be8);
  local_2188[0] = DAT_14c84635c;
  FUN_1412ce202(local_1f58);
  FUN_140f13d9e(local_17b8,local_1f58);
  local_2248[0] = DAT_14c84635c;
  FUN_1412ce202(local_2008);
  FUN_140f13d9e(local_1708,local_2008);
  local_1558 = 0x40000000;
  uStack_1550 = 0x40000000;
  local_1548 = 0x40000000;
  uStack_1540 = 0x40000000;
  local_2008[0] = &PTR_FUN_149ed05f0;
  if (local_1f68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1f68)(local_1f68);
      LOCK();
      piVar3 = (int *)((longlong)local_1f68 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1f68 + 0x10))(local_1f68);
      }
    }
  }
  local_1f58[0] = &PTR_FUN_149ed05f0;
  if (local_1eb8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1eb8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1eb8)(local_1eb8);
      LOCK();
      piVar3 = (int *)((longlong)local_1eb8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1eb8 + 0x10))(local_1eb8);
      }
    }
  }
  uVar4 = *param_1;
  FUN_1446ddc76(&local_2320,"HoverOnlyButton",1);
  FUN_1414fd860(uVar4,local_2320,local_1878);
  local_1548 = 0;
  uStack_1540 = 0;
  local_1558 = 0;
  uStack_1550 = 0;
  uVar4 = *param_1;
  FUN_1446ddc76(&local_2328,"ThinHoverOnlyButton",1);
  FUN_1414fd860(uVar4,local_2328,local_1878);
  FUN_140ffd6b6(&local_1be8);
  if (local_2078 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2078 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2078)(local_2078);
      LOCK();
      piVar3 = (int *)((longlong)local_2078 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_2078 + 0x10))(local_2078);
      }
    }
  }
  FUN_140ffd6b6(local_1878);
  FUN_140ffd6b6(local_1508);
  FUN_140ffd6b6(local_1198);
  FUN_140ffd6b6(local_e28);
  FUN_140ffd6b6(local_ab8);
  FUN_140ffd6b6(local_748);
  FUN_140ffd6b6(local_3d8);
  if ((local_60 ^ (ulonglong)auStack_2358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3e8b8 FUN_145c3e8b8 body=33 status=ok
// SIG undefined FUN_145c3e8b8(void)

void FUN_145c3e8b8(void)

{
  if (DAT_14c952698 == 0) {
    DAT_14c952698 = FUN_145c3e8da();
  }
  return;
}



// FUNCTION 145c3e8da FUN_145c3e8da body=66 status=ok
// SIG undefined FUN_145c3e8da(void)

undefined8 FUN_145c3e8da(void)

{
  undefined8 uVar1;
  
  if (DAT_14c952578 == 0) {
    DAT_14c952578 = FUN_145d60116();
  }
  uVar1 = FUN_145b2b830();
  FUN_140aa7318(uVar1,1);
  FUN_140010366(uVar1,0);
  return uVar1;
}



// FUNCTION 145c3e91c FUN_145c3e91c body=33 status=ok
// SIG undefined FUN_145c3e91c(void)

void FUN_145c3e91c(void)

{
  if (DAT_14c9526e0 == 0) {
    DAT_14c9526e0 = FUN_145c3e93e();
  }
  return;
}



// FUNCTION 145c3e93e FUN_145c3e93e body=66 status=ok
// SIG undefined FUN_145c3e93e(void)

undefined8 FUN_145c3e93e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9526c8 == 0) {
    DAT_14c9526c8 = FUN_145d60606();
  }
  uVar1 = FUN_145bd325e();
  FUN_140aa7318(uVar1,1);
  FUN_140010366(uVar1,0);
  return uVar1;
}



// FUNCTION 145c3e980 FUN_145c3e980 body=33 status=ok
// SIG undefined FUN_145c3e980(void)

void FUN_145c3e980(void)

{
  if (DAT_14c9526f8 == 0) {
    DAT_14c9526f8 = FUN_145c3e9a2();
  }
  return;
}



// FUNCTION 145c3e9a2 FUN_145c3e9a2 body=66 status=ok
// SIG undefined FUN_145c3e9a2(void)

undefined8 FUN_145c3e9a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9526c8 == 0) {
    DAT_14c9526c8 = FUN_145d60606();
  }
  uVar1 = FUN_145bd334e();
  FUN_140aa7318(uVar1,1);
  FUN_140010366(uVar1,0);
  return uVar1;
}



// FUNCTION 145c3e9e4 FUN_145c3e9e4 body=33 status=ok
// SIG undefined FUN_145c3e9e4(void)

void FUN_145c3e9e4(void)

{
  if (DAT_14c952828 == 0) {
    DAT_14c952828 = FUN_145c3ea06();
  }
  return;
}



// FUNCTION 145c3ea06 FUN_145c3ea06 body=66 status=ok
// SIG undefined FUN_145c3ea06(void)

undefined8 FUN_145c3ea06(void)

{
  undefined8 uVar1;
  
  if (DAT_14c952578 == 0) {
    DAT_14c952578 = FUN_145d60116();
  }
  uVar1 = FUN_145b2be96();
  FUN_140aa7318(uVar1,1);
  FUN_140010366(uVar1,0);
  return uVar1;
}



// FUNCTION 145c3ea48 FUN_145c3ea48 body=66 status=ok
// SIG undefined FUN_145c3ea48(void)

longlong FUN_145c3ea48(void)

{
  longlong lVar1;
  
  if (DAT_14c952888 == 0) {
    FUN_145c3ea8a();
    lVar1 = FUN_145b2c06a();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c952888 = lVar1;
  }
  return DAT_14c952888;
}



// FUNCTION 145c3ea8a FUN_145c3ea8a body=66 status=ok
// SIG undefined FUN_145c3ea8a(void)

longlong FUN_145c3ea8a(void)

{
  longlong lVar1;
  
  if (DAT_14c952870 == 0) {
    FUN_145c3eacc();
    lVar1 = FUN_145a6277a();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c952870 = lVar1;
  }
  return DAT_14c952870;
}



// FUNCTION 145c3eacc FUN_145c3eacc body=66 status=ok
// SIG undefined FUN_145c3eacc(void)

longlong FUN_145c3eacc(void)

{
  longlong lVar1;
  
  if (DAT_14c952858 == 0) {
    FUN_141050fd7();
    lVar1 = FUN_145a50c3c();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c952858 = lVar1;
  }
  return DAT_14c952858;
}



// FUNCTION 145c3eb0e FUN_145c3eb0e body=40 status=ok
// SIG undefined FUN_145c3eb0e(void)

undefined8 FUN_145c3eb0e(undefined8 param_1,int param_2)

{
  FUN_145c3eb36();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3eb36 FUN_145c3eb36 body=59 status=ok
// SIG undefined FUN_145c3eb36(void)

void FUN_145c3eb36(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a15e7c0;
  FUN_1447a1747(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c3eb72 FUN_145c3eb72 body=40 status=ok
// SIG undefined FUN_145c3eb72(void)

undefined8 FUN_145c3eb72(undefined8 param_1,int param_2)

{
  FUN_145c3eb9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3eb9a FUN_145c3eb9a body=59 status=ok
// SIG undefined FUN_145c3eb9a(void)

void FUN_145c3eb9a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4eee50;
  FUN_145948d25(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c3ebd6 FUN_145c3ebd6 body=40 status=ok
// SIG undefined FUN_145c3ebd6(void)

undefined8 FUN_145c3ebd6(undefined8 param_1,int param_2)

{
  FUN_145c3ebfe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3ebfe FUN_145c3ebfe body=59 status=ok
// SIG undefined FUN_145c3ebfe(void)

void FUN_145c3ebfe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5a2330;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c3ec3a FUN_145c3ec3a body=40 status=ok
// SIG undefined FUN_145c3ec3a(void)

undefined8 FUN_145c3ec3a(undefined8 param_1,int param_2)

{
  FUN_145c3ec62();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3ec62 FUN_145c3ec62 body=59 status=ok
// SIG undefined FUN_145c3ec62(void)

void FUN_145c3ec62(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5ddc30;
  FUN_1447a1747(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c3ec9e FUN_145c3ec9e body=40 status=ok
// SIG undefined FUN_145c3ec9e(void)

undefined8 FUN_145c3ec9e(undefined8 param_1,int param_2)

{
  FUN_145c3ecc6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3ecc6 FUN_145c3ecc6 body=59 status=ok
// SIG undefined FUN_145c3ecc6(void)

void FUN_145c3ecc6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a632300;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c3ed06 FUN_145c3ed06 body=94 status=ok
// SIG undefined FUN_145c3ed06(void)

void FUN_145c3ed06(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a79d540;
  FUN_140056680(puVar1 + 5,&DAT_149e01fe8);
  *(undefined2 *)((longlong)puVar1 + 0x3c) = 0x100;
  *puVar1 = &PTR_FUN_14a7a1670;
  FUN_14020fad6(puVar1 + 5,L"Remove Every Second Key");
  *(undefined4 *)(puVar1 + 8) = 10;
  return;
}



// FUNCTION 145c3ed64 FUN_145c3ed64 body=40 status=ok
// SIG undefined FUN_145c3ed64(void)

undefined8 FUN_145c3ed64(undefined8 param_1,int param_2)

{
  FUN_145c3ed8c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3ed8c FUN_145c3ed8c body=59 status=ok
// SIG undefined FUN_145c3ed8c(void)

void FUN_145c3ed8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7cf9a0;
  FUN_1404eeb61(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c3edc8 FUN_145c3edc8 body=40 status=ok
// SIG undefined FUN_145c3edc8(void)

undefined8 FUN_145c3edc8(undefined8 param_1,int param_2)

{
  FUN_145c3edf0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3edf0 FUN_145c3edf0 body=59 status=ok
// SIG undefined FUN_145c3edf0(void)

void FUN_145c3edf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8228d0;
  FUN_145aa5488(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c3ee2b FUN_145c3ee2b body=59 status=ok
// SIG undefined FUN_145c3ee2b(void)

void FUN_145c3ee2b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c3ee66(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aef3ea0;
  *(undefined4 *)(puVar1 + 6) = 1;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  return;
}



// FUNCTION 145c3ee66 FUN_145c3ee66 body=40 status=ok
// SIG undefined FUN_145c3ee66(void)

undefined8 * FUN_145c3ee66(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aea2490;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 145c3ee8e FUN_145c3ee8e body=40 status=ok
// SIG undefined FUN_145c3ee8e(void)

undefined8 FUN_145c3ee8e(undefined8 param_1,int param_2)

{
  FUN_145c3eeb6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3eeb6 FUN_145c3eeb6 body=213 status=ok
// SIG undefined FUN_145c3eeb6(void)

void FUN_145c3eeb6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b060910;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3ef8b(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_14087196b(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c3ef8b FUN_145c3ef8b body=65 status=ok
// SIG undefined FUN_145c3ef8b(void)

void FUN_145c3ef8b(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x50);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_145c3efcc(puVar1 + -0x12);
      puVar1 = puVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c3efcc FUN_145c3efcc body=55 status=ok
// SIG undefined FUN_145c3efcc(void)

void FUN_145c3efcc(longlong *param_1)

{
  FUN_145c3f004(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3f004 FUN_145c3f004 body=121 status=ok
// SIG undefined FUN_145c3f004(void)

void FUN_145c3f004(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
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



// FUNCTION 145c3f07e FUN_145c3f07e body=65 status=ok
// SIG undefined FUN_145c3f07e(void)

void FUN_145c3f07e(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = DAT_14cb90bc0;
  lVar2 = (longlong)(int)DAT_14cb90bc0;
  DAT_14cb90bc0 = DAT_14cb90bc0 + 1;
  if (DAT_14cb90bc4 < DAT_14cb90bc0) {
    FUN_145c3f0c0(&DAT_14cb90bb8,iVar1);
  }
  *(undefined8 *)(DAT_14cb90bb8 + lVar2 * 8) = param_1;
  return;
}



// FUNCTION 145c3f0c0 FUN_145c3f0c0 body=132 status=ok
// SIG undefined FUN_145c3f0c0(void)

void FUN_145c3f0c0(longlong param_1,int param_2)

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



// FUNCTION 145c3f146 FUN_145c3f146 body=38 status=ok
// SIG undefined FUN_145c3f146(void)

undefined8 FUN_145c3f146(undefined8 param_1,int param_2)

{
  FUN_145c3f16c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3f16c FUN_145c3f16c body=61 status=ok
// SIG undefined FUN_145c3f16c(void)

void FUN_145c3f16c(IInternationalizationManager *param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_14b452200;
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000145c3f1a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::IInternationalizationManager::~IInternationalizationManager(param_1);
  return;
}



// FUNCTION 145c3f1aa FUN_145c3f1aa body=40 status=ok
// SIG undefined FUN_145c3f1aa(void)

undefined8 FUN_145c3f1aa(undefined8 param_1,int param_2)

{
  FUN_145c3f1d2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3f1d2 FUN_145c3f1d2 body=59 status=ok
// SIG undefined FUN_145c3f1d2(void)

void FUN_145c3f1d2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4f7d40;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1458fef78(param_1);
  return;
}



// FUNCTION 145c3f20d FUN_145c3f20d body=46 status=ok
// SIG undefined FUN_145c3f20d(void)

void FUN_145c3f20d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c3f23c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b565360;
  puVar1[5] = &PTR_FUN_14b565670;
  return;
}



// FUNCTION 145c3f23c FUN_145c3f23c body=53 status=ok
// SIG undefined FUN_145c3f23c(void)

undefined8 * FUN_145c3f23c(undefined8 *param_1)

{
  FUN_1459a3fe4();
  *param_1 = &PTR_FUN_14ae6df30;
  param_1[5] = &PTR_FUN_14ae6e240;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  return param_1;
}



// FUNCTION 145c3f271 FUN_145c3f271 body=46 status=ok
// SIG undefined FUN_145c3f271(void)

void FUN_145c3f271(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c3f2a0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5916c0;
  puVar1[5] = &PTR_FUN_14b5919e0;
  return;
}



// FUNCTION 145c3f2a0 FUN_145c3f2a0 body=53 status=ok
// SIG undefined FUN_145c3f2a0(void)

undefined8 * FUN_145c3f2a0(undefined8 *param_1)

{
  FUN_145826fb4();
  *param_1 = &PTR_FUN_14ae5ff00;
  param_1[5] = &PTR_FUN_14ae60220;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  return param_1;
}



// FUNCTION 145c3f2d6 FUN_145c3f2d6 body=40 status=ok
// SIG undefined FUN_145c3f2d6(void)

undefined8 FUN_145c3f2d6(undefined8 param_1,int param_2)

{
  FUN_145c3f2fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3f2fe FUN_145c3f2fe body=59 status=ok
// SIG undefined FUN_145c3f2fe(void)

void FUN_145c3f2fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb6f870;
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c3f33a FUN_145c3f33a body=40 status=ok
// SIG undefined FUN_145c3f33a(void)

undefined8 FUN_145c3f33a(undefined8 param_1,int param_2)

{
  FUN_145c3f362();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3f362 FUN_145c3f362 body=59 status=ok
// SIG undefined FUN_145c3f362(void)

void FUN_145c3f362(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb93960;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c3f39e FUN_145c3f39e body=40 status=ok
// SIG undefined FUN_145c3f39e(void)

undefined8 FUN_145c3f39e(undefined8 param_1,int param_2)

{
  FUN_145c3f3c6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3f3c6 FUN_145c3f3c6 body=59 status=ok
// SIG undefined FUN_145c3f3c6(void)

void FUN_145c3f3c6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc57c20;
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c3f402 FUN_145c3f402 body=40 status=ok
// SIG undefined FUN_145c3f402(void)

undefined8 FUN_145c3f402(undefined8 param_1,int param_2)

{
  FUN_145c3f42a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3f42a FUN_145c3f42a body=59 status=ok
// SIG undefined FUN_145c3f42a(void)

void FUN_145c3f42a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc64850;
  FUN_140861e20(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c3f466 FUN_145c3f466 body=92 status=ok
// SIG undefined FUN_145c3f466(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c3f466(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2d300) {
    FUN_144b3d300(&DAT_14cc2d300);
    if (DAT_14cc2d300 == -1) {
      _DAT_14cc2d2fc = FUN_145c3f4c2();
      _Init_thread_footer(&DAT_14cc2d300);
    }
  }
  _DAT_14cc2d2fc = _DAT_14cc2d2fc + 1;
  return;
}



// FUNCTION 145c3f4c2 FUN_145c3f4c2 body=7 status=ok
// SIG undefined FUN_145c3f4c2(void)

undefined4 FUN_145c3f4c2(void)

{
  return DAT_14cb1eb10;
}



// FUNCTION 145c3f4ca FUN_145c3f4ca body=72 status=ok
// SIG undefined FUN_145c3f4ca(void)

void FUN_145c3f4ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145c3f507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c3f512 FUN_145c3f512 body=9 status=ok
// SIG undefined FUN_145c3f512(void)

void FUN_145c3f512(longlong param_1)

{
  FUN_145c3f51c(param_1 + 0x10);
  return;
}



// FUNCTION 145c3f51c FUN_145c3f51c body=596 status=ok
// SIG undefined FUN_145c3f51c(void)

void FUN_145c3f51c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined1 *local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_FUN_14b4df350;
  local_68 = 0;
  local_60 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_145c3f772(local_88,param_1 + 3);
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  local_90 = 0;
  iVar3 = 0;
  local_a0 = local_78;
  if (local_60 != 0) {
    FUN_1449c0562(&local_a8);
    iVar3 = local_60;
  }
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_b0 = local_90;
  local_ac = local_8c;
  local_c8 = local_a8;
  local_c0 = local_a0;
  local_d0 = local_88;
  if ((iStack_94 != iVar3) || (local_a0 != local_78)) {
    do {
      do {
        FUN_145818a4e(param_1,*(undefined4 *)(*local_d0 + (longlong)iStack_b4 * 0xc));
        local_b8 = local_b8 & ~local_c8._4_4_;
        FUN_1449c0562(&local_c8);
      } while (iStack_b4 != iVar3);
    } while ((local_c0 != local_78) || (local_d0 != local_88));
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_88);
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3f864(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c3f772 FUN_145c3f772 body=120 status=ok
// SIG undefined FUN_145c3f772(void)

longlong FUN_145c3f772(longlong param_1,longlong param_2)

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
    FUN_145c3f7ea(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145c3f7ea FUN_145c3f7ea body=121 status=ok
// SIG undefined FUN_145c3f7ea(void)

undefined8 * FUN_145c3f7ea(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14068e078(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447cc1b4(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0xc);
    }
  }
  return param_1;
}



// FUNCTION 145c3f864 FUN_145c3f864 body=53 status=ok
// SIG undefined FUN_145c3f864(void)

void FUN_145c3f864(longlong *param_1)

{
  FUN_145c3f89a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3f89a FUN_145c3f89a body=315 status=ok
// SIG undefined FUN_145c3f89a(void)

void FUN_145c3f89a(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3f9d6 FUN_145c3f9d6 body=626 status=ok
// SIG undefined FUN_145c3f9d6(void)

void FUN_145c3f9d6(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined2 *local_70;
  int local_68;
  longlong local_60;
  int local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    FUN_140056680(&local_50,L"Body");
    if (*(longlong *)(param_1 + 8) == 0) {
      uVar7 = 0;
    }
    else {
      FUN_1400021e4((undefined8 *)(param_1 + 8),&local_70);
      puVar10 = local_70;
      if (local_68 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_60,L": %s",puVar10);
      iVar5 = local_58 + -1;
      if (local_58 == 0) {
        iVar5 = 0;
      }
      FUN_1400020e8(&local_50,local_60,iVar5);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar7 = *(undefined8 *)(param_1 + 8);
    }
    local_78 = 0;
    FUN_14084a140(*param_2,&local_60,&local_50,uVar7);
    FUN_1403c75f4(param_1 + 0xb0,&local_60);
    FUN_144a61ac8(&local_60);
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar3 = param_1 + 0x94;
  local_60 = param_1;
  cVar6 = FUN_144729dda(lVar3);
  if (cVar6 != '\0') {
    uVar7 = FUN_14479d2ce(lVar3);
    FUN_1414fd962(&local_60,uVar7);
    if (*(char *)(param_1 + 0x90) == '\x01') {
      lVar8 = FUN_14479d2ce(lVar3);
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,2,0x10);
      local_48 = 2;
      *local_50 = &PTR_LAB_14a7feda0;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_50[2] = lVar9;
      *local_50 = &PTR_FUN_14b405940;
      local_50[3] = param_1;
      FUN_1408278de(lVar8 + 0x200,&local_70,&local_50);
      FUN_1449db362(&local_50);
      *(undefined2 **)(param_1 + 0xa8) = local_70;
    }
  }
  FUN_140d27362(param_3,param_1 + 0xb0);
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
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c3fc4a FUN_145c3fc4a body=860 status=ok
// SIG undefined FUN_145c3fc4a(void)

void FUN_145c3fc4a(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar5 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cbe6228);
  uVar6 = FUN_144a06846(param_2,&DAT_14cbe61b0);
  lVar7 = 0;
  uVar6 = FUN_144a7cdd6(uVar6,0);
  local_88 = 0;
  lStack_80 = 0;
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,uVar6,0);
  if (DAT_14cbe61a8 != 0) {
    lVar7 = FUN_144837462(DAT_14cbe61a8,&local_88);
  }
  local_98 = lVar7;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  cVar2 = FUN_144a79b3c(puVar5);
  if (cVar2 != '\0') {
    pbVar1 = (byte *)*puVar5;
    plVar8 = &DAT_14c9a1270;
    if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
      plVar8 = *(longlong **)(pbVar1 + 8);
    }
    if ((longlong)(int)plVar8[2] != 0) {
      lVar7 = *plVar8;
      lVar14 = (longlong)(int)plVar8[2] * 0x10 + lVar7;
      do {
        uVar6 = FUN_144a06846(lVar7,&DAT_14cbe60c8);
        uVar6 = FUN_144a7cdd6(uVar6,0);
        local_88 = 0;
        lStack_80 = 0;
        local_78 = local_78 & 0xffffffff00000000;
        local_70 = 0;
        uStack_68 = 0;
        FUN_1446ddda2(&local_88,uVar6,0);
        if (((DAT_14cbe61a8 != 0) && (lVar9 = FUN_144837462(DAT_14cbe61a8,&local_88), lVar9 != 0))
           && ((longlong)*(int *)(param_1 + 0x80) != 0)) {
          lVar13 = *(longlong *)(param_1 + 0x78);
          lVar12 = (longlong)*(int *)(param_1 + 0x80) * 0xe8;
          do {
            lVar10 = FUN_140e44844(lVar13);
            if (lVar10 == lVar9) {
              if (local_70 != 0) {
                FUN_1400020a8();
              }
              if (lVar13 != 0) {
                FUN_145c4004a(lVar13,lVar7);
              }
              goto LAB_145c3fdf0;
            }
            lVar13 = lVar13 + 0xe8;
            lVar12 = lVar12 + -0xe8;
          } while (lVar12 != 0);
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
LAB_145c3fdf0:
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != lVar14);
    }
  }
  lVar7 = local_98;
  if (local_98 == 0) {
    local_88 = *(longlong *)(param_1 + 0x88);
    uVar6 = FUN_14477b664(*(undefined8 *)(param_1 + 0x90));
    lStack_80 = FUN_14477b664(uVar6);
    lVar7 = *(longlong *)(param_1 + 0x98);
  }
  else {
    local_88 = 0;
    lStack_80 = 0;
    local_78 = 0;
    uVar6 = FUN_141218768();
    lStack_80 = FUN_14477b664(uVar6);
    uVar6 = FUN_141218768();
    uVar11 = FUN_141218768();
    FUN_1402d1bfa(&local_90,uVar11,lVar7);
    if (local_88 != local_90) {
      local_78 = 0;
    }
    local_88 = local_90;
    uVar11 = FUN_141218768();
    lVar7 = FUN_141459e9e(uVar6,uVar11);
    if (lStack_80 != lVar7) {
      local_78 = 0;
    }
    uVar6 = FUN_14477b664(lVar7);
    lStack_80 = FUN_14477b664(uVar6);
    lVar7 = local_98;
    if (lStack_80 == 0 || local_90 == 0) goto LAB_145c3fe3c;
  }
  local_78 = lVar7;
LAB_145c3fe3c:
  FUN_1414fdd70(param_1,&local_88,0);
  uVar6 = FUN_144a06846(param_2,&DAT_14cbe6200);
  uVar3 = FUN_140e1edd4(uVar6,0);
  uVar6 = FUN_144a06846(param_2,&DAT_14cbe61d8);
  uVar4 = FUN_140e1edd4(uVar6,0);
  FUN_1414fdb4a(param_1,uVar4,uVar3);
  *(undefined1 *)(param_1 + 0xac) = 1;
  FUN_145c3ffa8(param_1 + 0x30,param_1);
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c3ffa8 FUN_145c3ffa8 body=162 status=ok
// SIG undefined FUN_145c3ffa8(void)

void FUN_145c3ffa8(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145c40035;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145c40035:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145c4004a FUN_145c4004a body=382 status=ok
// SIG undefined FUN_145c4004a(void)

void FUN_145c4004a(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar3 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cbe6168);
  pbVar1 = (byte *)*puVar3;
  plVar4 = &DAT_14c9a1270;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
    plVar4 = *(longlong **)(pbVar1 + 8);
  }
  if ((longlong)(int)plVar4[2] != 0) {
    lVar7 = *plVar4;
    lVar8 = (longlong)(int)plVar4[2] * 0x10 + lVar7;
    do {
      uVar5 = FUN_144a06846(lVar7,&DAT_14cbe60c8);
      uVar5 = FUN_144a7cdd6(uVar5,0);
      FUN_1446ddc76(&local_50,uVar5,1);
      if ((longlong)*(int *)(param_1 + 0x20) != 0) {
        plVar4 = *(longlong **)(param_1 + 0x18);
        lVar6 = (longlong)*(int *)(param_1 + 0x20) * 0xc;
        do {
          if (*plVar4 == local_50) {
            if (plVar4 != (longlong *)0x0) {
              uVar5 = FUN_144a06846(lVar7,&DAT_14cbe60f0);
              uVar2 = FUN_1410451c0(uVar5,0);
              *(undefined4 *)(plVar4 + 1) = uVar2;
            }
            break;
          }
          plVar4 = (longlong *)((longlong)plVar4 + 0xc);
          lVar6 = lVar6 + -0xc;
        } while (lVar6 != 0);
      }
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != lVar8);
  }
  uVar5 = FUN_144a06846(param_2,&DAT_14cbe6118);
  FUN_1414fdbd9(uVar5,param_1 + 0x28);
  FUN_1414fdca4(uVar5,param_1 + 0x38);
  uVar5 = FUN_144a06846(param_2,&DAT_14cbe6140);
  FUN_1414fdbd9(uVar5,param_1 + 0x88);
  FUN_1414fdca4(uVar5,param_1 + 0x98);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c401d0 FUN_145c401d0 body=147 status=ok
// SIG undefined FUN_145c401d0(void)

void FUN_145c401d0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144729dda(param_1 + 0x68);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  cVar1 = FUN_144729dda(param_1 + 0x78);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if ((*(int *)(param_1 + 0x88) != 0) &&
     (*(undefined4 *)(param_1 + 0x88) = 0, *(int *)(param_1 + 0x8c) != 0)) {
    FUN_145c40264(param_1 + 0x80);
  }
  if ((*(int *)(param_1 + 0x98) != 0) &&
     (*(undefined4 *)(param_1 + 0x98) = 0, *(int *)(param_1 + 0x9c) != 0)) {
    FUN_145c40294(param_1 + 0x90);
    return;
  }
  return;
}



// FUNCTION 145c40264 FUN_145c40264 body=48 status=ok
// SIG undefined FUN_145c40264(void)

void FUN_145c40264(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 145c40294 FUN_145c40294 body=48 status=ok
// SIG undefined FUN_145c40294(void)

void FUN_145c40294(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 145c402ce FUN_145c402ce body=40 status=ok
// SIG undefined FUN_145c402ce(void)

undefined8 FUN_145c402ce(undefined8 param_1,int param_2)

{
  FUN_145c402f6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c402f6 FUN_145c402f6 body=498 status=ok
// SIG undefined FUN_145c402f6(void)

void FUN_145c402f6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14b677990;
  param_1[0x72] = &PTR_FUN_14b678090;
  param_1[0x73] = &PTR_FUN_14b678110;
  param_1[0x74] = &PTR_FUN_14b678180;
  param_1[0x75] = &PTR_FUN_14b6781a8;
  param_1[0x76] = &PTR_FUN_14b6781c0;
  param_1[0xa4] = &PTR_FUN_14b6781f0;
  param_1[0xa5] = &PTR_FUN_14b678240;
  param_1[0xa6] = &PTR_FUN_14b678270;
  param_1[0xa7] = &PTR_FUN_14b6782a0;
  param_1[0xa8] = &PTR_FUN_14b6782b8;
  param_1[0x118] = &PTR_FUN_14b6782d0;
  param_1[0x119] = &PTR_FUN_14b678300;
  param_1[0x11a] = &PTR_FUN_14b6783c0;
  param_1[0x11b] = &PTR_FUN_14b6784b0;
  param_1[0x11c] = &PTR_FUN_14b6784e0;
  param_1[0x11d] = &PTR_FUN_14b678520;
  param_1[0x17c] = &PTR_FUN_14b678540;
  if (param_1[0x19a] != 0) {
    FUN_1400020a8();
  }
  FUN_1449e6b18(param_1 + 0x198);
  FUN_1449e6b18((longlong)param_1 + 0xcb4);
  FUN_1449e6b18(param_1 + 0x195);
  FUN_144a7b030(param_1 + 0x192);
  FUN_1449e6b18((longlong)param_1 + 0xc4c);
  FUN_1449e6b18(param_1 + 0x188);
  FUN_1449e6b18((longlong)param_1 + 0xc34);
  FUN_1449e6b18(param_1 + 0x185);
  lVar4 = 0xc20;
  do {
    plVar3 = *(longlong **)((longlong)param_1 + lVar4);
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
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0xc00);
  plVar3 = (longlong *)param_1[0x180];
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
  FUN_145c404e8(param_1);
  return;
}



// FUNCTION 145c404e8 FUN_145c404e8 body=604 status=ok
// SIG undefined FUN_145c404e8(void)

void FUN_145c404e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6940a0;
  param_1[0x72] = &PTR_FUN_14b6947a0;
  param_1[0x73] = &PTR_FUN_14b694820;
  param_1[0x74] = &PTR_FUN_14b694890;
  param_1[0x75] = &PTR_FUN_14b6948b8;
  param_1[0x76] = &PTR_FUN_14b6948d0;
  param_1[0xa4] = &PTR_FUN_14b694900;
  param_1[0xa5] = &PTR_FUN_14b694950;
  param_1[0xa6] = &PTR_FUN_14b694980;
  param_1[0xa7] = &PTR_FUN_14b6949b0;
  param_1[0xa8] = &PTR_FUN_14b6949c8;
  param_1[0x118] = &PTR_FUN_14b6949e0;
  param_1[0x119] = &PTR_FUN_14b694a10;
  param_1[0x11a] = &PTR_FUN_14b694ad0;
  param_1[0x11b] = &PTR_FUN_14b694bc0;
  param_1[0x11c] = &PTR_FUN_14b694bf0;
  param_1[0x11d] = &PTR_FUN_14b694c30;
  FUN_144760e21(param_1[0x176],*(undefined4 *)(param_1 + 0x177));
  if (param_1[0x176] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x173],*(undefined4 *)(param_1 + 0x174));
  if (param_1[0x173] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x170],*(undefined4 *)(param_1 + 0x171));
  if (param_1[0x170] != 0) {
    FUN_1400020a8();
  }
  FUN_1449e6b18(param_1 + 0x167);
  FUN_140a3299c(param_1 + 0x158);
  param_1[0x150] = &PTR_FUN_14b695510;
  FUN_1449e6b18((longlong)param_1 + 0xab4);
  FUN_1449e6b18(param_1 + 0x155);
  FUN_1449e6b18((longlong)param_1 + 0xa9c);
  FUN_1449e6b18(param_1 + 0x152);
  FUN_1449e6b18(param_1 + 0x145);
  *(undefined4 *)(param_1 + 0x143) = 0;
  if (param_1[0x142] != 0) {
    FUN_1400020a8();
  }
  FUN_140db05b0(param_1 + 0x13a);
  *(undefined4 *)(param_1 + 0x133) = 0;
  if (param_1[0x132] != 0) {
    FUN_1400020a8();
  }
  FUN_140db05b0(param_1 + 0x12a);
  FUN_140ef6a7a(param_1[0x122],*(undefined4 *)(param_1 + 0x123));
  if (param_1[0x122] != 0) {
    FUN_1400020a8();
  }
  FUN_140ef7316(param_1);
  return;
}



// FUNCTION 145c40744 FUN_145c40744 body=40 status=ok
// SIG undefined FUN_145c40744(void)

undefined8 FUN_145c40744(undefined8 param_1,int param_2)

{
  FUN_145c4076c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4076c FUN_145c4076c body=257 status=ok
// SIG undefined FUN_145c4076c(void)

void FUN_145c4076c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b44dc30;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_145c408a6(param_1 + 0x1a);
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 8))();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145c4086e(param_1 + 0xf);
  plVar3 = (longlong *)param_1[0xd];
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
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_145c408dd(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c4086e FUN_145c4086e body=55 status=ok
// SIG undefined FUN_145c4086e(void)

void FUN_145c4086e(longlong *param_1)

{
  FUN_145c4091c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c408a6 FUN_145c408a6 body=55 status=ok
// SIG undefined FUN_145c408a6(void)

void FUN_145c408a6(longlong *param_1)

{
  FUN_145c40ab6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c408dd FUN_145c408dd body=63 status=ok
// SIG undefined FUN_145c408dd(void)

void FUN_145c408dd(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c4091c FUN_145c4091c body=409 status=ok
// SIG undefined FUN_145c4091c(void)

void FUN_145c4091c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar4 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x10 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar3 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c40ab6 FUN_145c40ab6 body=410 status=ok
// SIG undefined FUN_145c40ab6(void)

void FUN_145c40ab6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar6 = (longlong)iStack_64;
      plVar3 = *(longlong **)(lVar2 + 0x10 + lVar6 * 0x20);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      if (*(longlong *)(lVar2 + lVar6 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
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
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar4 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar4 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c40c52 FUN_145c40c52 body=9 status=ok
// SIG undefined FUN_145c40c52(void)

void FUN_145c40c52(longlong param_1)

{
  FUN_145c40c5c(param_1 + 0x10);
  return;
}



// FUNCTION 145c40c5c FUN_145c40c5c body=183 status=ok
// SIG undefined FUN_145c40c5c(void)

void FUN_145c40c5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a161c60;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_145c40d14(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145c40d4a(param_1 + 0xf);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1[0xb]);
  FUN_1400020a8(param_1[0xc]);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000145c40d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 145c40d14 FUN_145c40d14 body=53 status=ok
// SIG undefined FUN_145c40d14(void)

void FUN_145c40d14(longlong *param_1)

{
  FUN_145d87d4e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c40d4a FUN_145c40d4a body=53 status=ok
// SIG undefined FUN_145c40d4a(void)

void FUN_145c40d4a(longlong *param_1)

{
  FUN_145d8979c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c40d88 FUN_145c40d88 body=290 status=ok
// SIG undefined FUN_145c40d88(void)

undefined8 * FUN_145c40d88(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar3 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar3);
  *param_1 = &PTR_FUN_14b72ba40;
  param_1[5] = &PTR_LAB_14b72c440;
  param_1[6] = &PTR_LAB_14b72c480;
  param_1[0x55] = &PTR_LAB_14b72c4d0;
  param_1[0x56] = &PTR_LAB_14b72c550;
  param_1[0x57] = &PTR_LAB_14b72c560;
  *(undefined4 *)(param_1 + 0xc4) = 0x461c4000;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0x414e0003;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  cVar2 = FUN_144a792c0(param_1,0x30);
  if ((cVar2 == '\0') && (param_1[0xca] == 0)) {
    plVar1 = param_1 + 200;
    param_1[0xcb] = &DAT_14cbc6560;
    param_1[0xca] = param_1;
    lVar4 = DAT_14cbc6560;
    while( true ) {
      param_1[200] = lVar4;
      LOCK();
      lVar5 = *(longlong *)param_1[0xcb];
      bVar6 = lVar4 == lVar5;
      if (bVar6) {
        *(longlong *)param_1[0xcb] = (longlong)plVar1;
        lVar5 = lVar4;
      }
      UNLOCK();
      if (bVar6) break;
      param_1[200] = lVar5;
      lVar4 = *(longlong *)param_1[0xcb];
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 145c40eb6 FUN_145c40eb6 body=276 status=ok
// SIG undefined FUN_145c40eb6(void)

undefined8 * FUN_145c40eb6(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  double dVar9;
  float fVar10;
  
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14bef28a0;
  param_1[0x1f] = 0;
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar3 = FUN_14073751e();
  lVar4 = FUN_144a78ede(param_1,uVar3);
  if (lVar4 == 0) {
    puVar5 = &DAT_100000018;
  }
  else {
    puVar5 = *(undefined1 **)(lVar4 + 0x118);
  }
  cVar1 = FUN_145c40fca(param_1,1);
  if (cVar1 != '\0') {
    dVar9 = ((double)(int)puVar5 * 0.5) / (double)(int)((ulonglong)puVar5 >> 0x20);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar9;
    auVar7 = roundpd(auVar7,auVar7,1);
    dVar6 = auVar7._0_8_;
    dVar9 = dVar9 - dVar6;
    iVar2 = (int)dVar9;
    fVar8 = (float)dVar9 - (float)iVar2;
    fVar10 = fVar8;
    if (0.99999994 <= fVar8) {
      fVar10 = 0.99999994;
    }
    fVar10 = (float)(~-(uint)(0.0 < fVar8) & (uint)fVar8 | (uint)fVar10 & -(uint)(0.0 < fVar8)) +
             0.5 + -0.5;
    if (0.99999994 <= fVar10) {
      fVar10 = 0.99999994;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (2147483647.0 <= dVar6) {
      dVar6 = 2147483647.0;
    }
    if (dVar6 <= -2147483648.0) {
      dVar6 = -2147483648.0;
    }
    *(uint *)(param_1 + 0x16) = (uint)(0.5 <= fVar10) + (int)dVar6 + iVar2;
  }
  return param_1;
}



// FUNCTION 145c40fca FUN_145c40fca body=11 status=ok
// SIG undefined FUN_145c40fca(void)

bool FUN_145c40fca(longlong param_1)

{
  return (*(byte *)(param_1 + 0xc0) & 2) == 0;
}



// FUNCTION 145c40fd6 FUN_145c40fd6 body=1368 status=ok
// SIG undefined FUN_145c40fd6(void)

void FUN_145c40fd6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  bool bVar16;
  undefined1 auStack_138 [32];
  undefined2 **local_118;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong local_d8;
  int local_d0;
  undefined2 *local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  byte local_96;
  undefined1 local_95;
  undefined4 local_94;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar6 = FUN_14479d2ce(param_1 + 0xd0);
  if (lVar6 != 0) goto LAB_145c4131d;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  lVar6 = FUN_14479d2ce(param_1 + 0xa8);
  if (((lVar6 == 0) || (lVar7 = FUN_14479d2ce(param_1 + 0xb0), lVar7 == 0)) ||
     (FUN_1403679b6(&local_c8,lVar6), plStack_c0 == (longlong *)0x0)) goto LAB_145c4131d;
  iVar5 = (int)plStack_c0[1];
  do {
    if (iVar5 == 0) {
      plVar14 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar3 = (int)plStack_c0[1];
    bVar16 = iVar5 == iVar3;
    if (bVar16) {
      *(int *)(plStack_c0 + 1) = iVar5 + 1;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
    plVar14 = plStack_c0;
  } while (!bVar16);
  LOCK();
  piVar1 = (int *)((longlong)plStack_c0 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plStack_c0 + 0x10))();
  }
  if (plVar14 == (longlong *)0x0) goto LAB_145c4131d;
  if (local_c8 != (undefined2 *)0x0) {
    lVar9 = *(longlong *)(param_1 + 0x98);
    if (lVar9 == 0) {
      uVar8 = FUN_141518b52();
      lVar9 = FUN_14477b664(uVar8);
      *(longlong *)(param_1 + 0x98) = lVar9;
    }
    plVar12 = (longlong *)(param_1 + 0x90);
    lVar10 = *(longlong *)(param_1 + 0xa0);
    if (lVar10 == 0) {
      if ((lVar9 != 0) && (*plVar12 != 0)) {
        plVar2 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
          *(undefined8 *)(param_1 + 0xa0) = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar10 = FUN_144aff482(uVar8,plVar12);
          *(longlong *)(param_1 + 0xa0) = lVar10;
          if (lVar10 != 0) {
            lVar9 = *(longlong *)(param_1 + 0x98);
            goto LAB_145c410cd;
          }
        }
      }
      local_f8 = *(longlong *)(lVar7 + 0x18);
      FUN_1400021e4(&local_f8,&local_c8);
    }
    else {
LAB_145c410cd:
      if (lVar9 == 0) {
        uVar8 = FUN_141518b52();
        lVar9 = FUN_14477b664(uVar8);
        *(longlong *)(param_1 + 0x98) = lVar9;
        lVar10 = *(longlong *)(param_1 + 0xa0);
        if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*plVar12 != 0)) {
          plVar2 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
            lVar10 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar10 = FUN_144aff482(uVar8,plVar12);
          }
          *(longlong *)(param_1 + 0xa0) = lVar10;
        }
      }
      puVar11 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar10 + 8) != (undefined4 *)0x0) {
        puVar11 = *(undefined4 **)(lVar10 + 8);
      }
      local_c8 = (undefined2 *)0x0;
      plStack_c0 = (longlong *)0x0;
      FUN_1400b2348(puVar11,&local_c8,1);
    }
    puVar15 = local_c8;
    if ((int)plStack_c0 == 0) {
      puVar15 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_d8,L"MigrationSpawner_%s",puVar15);
    if (local_c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = (undefined2 *)0x0;
    plStack_c0 = (longlong *)0x0;
    local_98 = 0x100;
    local_95 = 0;
    local_94 = 8;
    local_88 = 0;
    local_78 = (longlong *)0x0;
    local_96 = local_96 & 0xe0 | 6;
    iVar5 = local_d0 + -1;
    if (local_d0 == 0) {
      iVar5 = 0;
    }
    FUN_1446f82e2(&local_c8,iVar5,local_d8,1);
    local_95 = 3;
    lVar7 = *(longlong *)(lVar7 + 0x1c8);
    if (lVar7 == 0) {
      local_e8 = DAT_14c8464f0;
      local_f8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_f0 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_f8 = *(longlong *)(lVar7 + 0x260);
      uStack_f0 = *(longlong **)(lVar7 + 0x268);
      local_e8 = *(undefined8 *)(lVar7 + 0x270);
    }
    uVar8 = FUN_1409279ca();
    local_118 = &local_c8;
    lVar6 = FUN_141137228(lVar6,uVar8,&local_f8,&DAT_14c8464f8);
    if (lVar6 != 0) {
      plVar12 = *(longlong **)(lVar6 + 0x1c8);
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x588))(plVar12,2);
      }
      local_108 = FUN_14479d2ce(param_1 + 200);
      if ((local_108 == 0) || (DAT_14c950c29 == '\0')) {
        if (local_108 != 0) goto LAB_145c41246;
        local_100 = 0;
      }
      else {
        FUN_1456cec3c(local_108);
LAB_145c41246:
        local_100 = local_108 + 0x390;
      }
      FUN_145c41530(lVar6);
      lVar7 = *(longlong *)(lVar6 + 0x410);
      if (lVar7 != 0) {
        FUN_145c41572(lVar7,&local_c8);
        if ((*(byte *)(lVar6 + 100) & 1) == 0) {
          puVar13 = &DAT_14c846480;
          if (*(longlong *)(lVar6 + 0x1c8) != 0) {
            puVar13 = (undefined8 *)(*(longlong *)(lVar6 + 0x1c8) + 0x240);
          }
          local_118 = (undefined2 **)((ulonglong)local_118 & 0xffffffffffffff00);
          FUN_14113775c(lVar6,puVar13,0,0);
        }
        FUN_14092811c(lVar7);
        FUN_1448c1924(lVar7,&local_f8);
        if (local_f8 != 0) {
          FUN_140512c90();
        }
        plVar12 = uStack_f0;
        if (uStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar2 = uStack_f0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*uStack_f0)(uStack_f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        FUN_14485c47a(param_1 + 0xd0,lVar6);
      }
    }
    if (local_88 != 0) {
      plVar12 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar12 = local_68;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
  }
  LOCK();
  plVar12 = plVar14 + 1;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)*plVar12 == 0) {
    (**(code **)*plVar14)(plVar14);
    LOCK();
    piVar1 = (int *)((longlong)plVar14 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
LAB_145c4131d:
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c41530 FUN_145c41530 body=65 status=ok
// SIG undefined FUN_145c41530(void)

void FUN_145c41530(longlong param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*param_2 == 0) || ((longlong *)param_2[1] == (longlong *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)param_2[1] + 0x10))();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x420) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000145c4156a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 0x420,uVar1,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 145c41572 FUN_145c41572 body=109 status=ok
// SIG undefined FUN_145c41572(void)

void FUN_145c41572(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0xbe8) = *param_2;
  *(undefined1 *)(param_1 + 0x848) = 1;
  *(undefined1 *)(param_1 + 0x850) = 2;
  if ((*(byte *)(param_1 + 0x9f) & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x870) = *(undefined4 *)(param_1 + 0x850);
    *(undefined4 *)(param_1 + 0x874) = *(undefined4 *)(param_1 + 0x854);
    *(undefined4 *)(param_1 + 0x878) = *(undefined4 *)(param_1 + 0x858);
    *(undefined4 *)(param_1 + 0x87c) = *(undefined4 *)(param_1 + 0x85c);
    FUN_14053cb00(param_1 + 0x880,param_1 + 0x860);
  }
  *(undefined4 *)(param_1 + 0x950) = 1;
  *(undefined1 *)(param_1 + 0x849) = 2;
  *(undefined1 *)(param_1 + 0x946) = 2;
  return;
}



// FUNCTION 145c415e0 FUN_145c415e0 body=112 status=ok
// SIG undefined FUN_145c415e0(void)

void FUN_145c415e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x20) = param_2;
    if (param_2 == 0) {
      FUN_1404275c0(param_1 + -0x420);
      param_2 = *(longlong *)(param_1 + 0x20);
      if (param_2 == 0) {
        return;
      }
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x20) = param_2;
  }
  if (param_2 == lVar1) {
    return;
  }
  FUN_145c41650(param_1 + -0x420);
  return;
}



// FUNCTION 145c41650 FUN_145c41650 body=354 status=ok
// SIG undefined FUN_145c41650(void)

void FUN_145c41650(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_178 [40];
  longlong local_150;
  longlong *local_148;
  undefined1 local_140 [256];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FUN_1448c1924(*(longlong *)(param_1 + 0x410),&local_150);
    if (local_150 != 0) {
      local_40 = (undefined1 *)0x0;
      local_38 = 0x2000000000;
      FUN_145c417b4(local_150,local_140);
      puVar5 = local_40;
      if (local_40 == (undefined1 *)0x0) {
        puVar5 = local_140;
      }
      lVar6 = (longlong)(int)local_38;
      if (lVar6 != 0) {
        lVar7 = 0;
        do {
          plVar3 = *(longlong **)(puVar5 + lVar7);
          if (plVar3 != (longlong *)0x0) {
            uVar2 = FUN_140b066c4();
            plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
            if (plVar3 != (longlong *)0x0) {
              uVar2 = FUN_140b066c4();
              plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
              if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
                (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(param_1 + 0x440));
              }
            }
          }
          lVar7 = lVar7 + 8;
        } while (lVar6 * 8 != lVar7);
      }
      if (local_40 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_148 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c417b4 FUN_145c417b4 body=349 status=ok
// SIG undefined FUN_145c417b4(void)

void FUN_145c417b4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x50);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (uStack_58 != lVar2)) {
    do {
      if (*(char *)(*local_88 + 0x40 + (longlong)iStack_6c * 0x58) == '\0') {
        lVar4 = FUN_14479d2ce(*local_88 + (longlong)iStack_6c * 0x58 + 0x30);
        if (lVar4 != 0) {
          iVar3 = *(int *)(param_2 + 0x108);
          *(uint *)(param_2 + 0x108) = iVar3 + 1U;
          if (*(uint *)(param_2 + 0x10c) < iVar3 + 1U) {
            FUN_1478dc29e(param_2,iVar3);
          }
          lVar5 = *(longlong *)(param_2 + 0x100);
          if (*(longlong *)(param_2 + 0x100) == 0) {
            lVar5 = param_2;
          }
          *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c41912 FUN_145c41912 body=160 status=ok
// SIG undefined FUN_145c41912(void)

bool FUN_145c41912(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 145c419b4 FUN_145c419b4 body=13 status=ok
// SIG undefined FUN_145c419b4(void)

void FUN_145c419b4(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3a8) = param_2;
  FUN_14587625a();
  return;
}



// FUNCTION 145c419c2 FUN_145c419c2 body=96 status=ok
// SIG undefined FUN_145c419c2(void)

void FUN_145c419c2(longlong param_1)

{
  undefined8 uVar1;
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)FUN_14494321d(0x58);
  InitializeSRWLock(SRWLock);
  SRWLock[5].Ptr = (PVOID)0x0;
  *(undefined4 *)&SRWLock[6].Ptr = 0;
  SRWLock[1].Ptr = (PVOID)0x0;
  SRWLock[2].Ptr = (PVOID)0x0;
  *(undefined8 *)((longlong)&SRWLock[6].Ptr + 4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)&SRWLock[7].Ptr + 4) = 0;
  SRWLock[9].Ptr = (PVOID)0x0;
  *(undefined4 *)&SRWLock[10].Ptr = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(PSRWLOCK *)(param_1 + 8) = SRWLock;
  FUN_145c41a22(uVar1);
  FUN_145c41a22(0);
  return;
}



// FUNCTION 145c41a22 FUN_145c41a22 body=69 status=ok
// SIG undefined FUN_145c41a22(void)

void FUN_145c41a22(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_145c41a68(param_1 + 8);
  thunk_FUN_1400020a8(param_1,0x58);
  return;
}



// FUNCTION 145c41a68 FUN_145c41a68 body=53 status=ok
// SIG undefined FUN_145c41a68(void)

void FUN_145c41a68(longlong *param_1)

{
  FUN_145c41a9e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c41a9e FUN_145c41a9e body=378 status=ok
// SIG undefined FUN_145c41a9e(void)

void FUN_145c41a9e(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x70;
      *(undefined4 *)(lVar2 + 0x60 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x58 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_146fe1ad8(lVar2 + lVar3 + 0x18);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140875b54(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c41c1a FUN_145c41c1a body=119 status=ok
// SIG undefined FUN_145c41c1a(void)

undefined8 * FUN_145c41c1a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
      if (plVar3 != (longlong *)0x0) {
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
    }
  }
  FUN_145c41c92(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 145c41c92 FUN_145c41c92 body=80 status=ok
// SIG undefined FUN_145c41c92(void)

longlong * FUN_145c41c92(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_145d5707e(*param_1,(int)param_1[1]);
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



// FUNCTION 145c41ce2 FUN_145c41ce2 body=40 status=ok
// SIG undefined FUN_145c41ce2(void)

undefined8 FUN_145c41ce2(undefined8 param_1,int param_2)

{
  FUN_145c41d0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c41d0a FUN_145c41d0a body=159 status=ok
// SIG undefined FUN_145c41d0a(void)

void FUN_145c41d0a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b83cd40;
  param_1[6] = &PTR_FUN_14b83d000;
  param_1[7] = &PTR_LAB_14b83d090;
  FUN_1449db362(param_1 + 0x3e);
  plVar3 = (longlong *)param_1[0x39];
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
  FUN_1449db362(param_1 + 0x2f);
  FUN_145a1a852(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140e3eae6(param_1);
  return;
}



// FUNCTION 145c41daa FUN_145c41daa body=197 status=ok
// SIG undefined FUN_145c41daa(void)

void FUN_145c41daa(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c41e70();
  lVar1 = FUN_14030dc32();
  FUN_140056680(local_48,L"Weather");
  FUN_14084feb6(local_38,param_2,local_48);
  FUN_1403c75f4((undefined8 *)(param_1 + 0xa8),local_38);
  FUN_144a61ac8(local_38);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0xb0) = 0;
    local_68 = 0;
    FUN_14071ab80(*(undefined8 *)(param_1 + 0xa8),local_60,lVar1 + 0x580,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c41e70 FUN_145c41e70 body=1 status=ok
// SIG undefined FUN_145c41e70(void)

void FUN_145c41e70(void)

{
  return;
}



// FUNCTION 145c41e72 FUN_145c41e72 body=52 status=ok
// SIG undefined FUN_145c41e72(void)

void FUN_145c41e72(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x310);
  memset(_Dst,0,0x310);
  FUN_145c41ea6(_Dst);
  return;
}



// FUNCTION 145c41ea6 FUN_145c41ea6 body=147 status=ok
// SIG undefined FUN_145c41ea6(void)

undefined8 * FUN_145c41ea6(undefined8 *param_1)

{
  FUN_140e8cfb8();
  *param_1 = &PTR_FUN_14b9da570;
  *(undefined4 *)(param_1 + 0x56) = 0x10000;
  *(undefined1 *)((longlong)param_1 + 0x2b4) = 0;
  FUN_140056680(param_1 + 0x57,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x59,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x5b,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x5d,&DAT_149dfb77a);
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x30c) = 0;
  return param_1;
}



// FUNCTION 145c41f3a FUN_145c41f3a body=724 status=ok
// SIG undefined FUN_145c41f3a(void)

longlong * FUN_145c41f3a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  wchar_t *_Str;
  char cVar1;
  longlong lVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((1 < (int)param_2[1]) && (1 < (int)param_3[1])) {
    FUN_145c42226(&local_e0,*param_3);
    if (&local_e0 == param_3) {
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_e0;
      local_e0 = 0;
      *(undefined4 *)(param_3 + 1) = local_d8;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_d4;
    }
    _Str = (wchar_t *)*param_3;
    uVar4 = (int)param_2[1] - 1;
    if ((int)param_2[1] == 0) {
      uVar4 = 0;
    }
    iVar5 = (uVar4 & 0xfffffff0) + 0x10;
    lVar2 = FUN_144a7d36f(iVar5);
    cVar1 = FUN_1414fea96(param_2,lVar2,iVar5);
    if (cVar1 != '\0') {
      local_60 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_58 = 0;
        local_50 = 0;
      }
      else {
        sVar3 = wcslen(_Str);
        FUN_1449b853c(&local_e0,_Str,sVar3 & 0xffffffff,1);
      }
      FUN_145c42210(lVar2,iVar5,local_58);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      FUN_1414fe873(&local_e0,lVar2,iVar5);
      if (&local_e0 == param_2) {
        if (local_e0 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_e0;
        local_e0 = 0;
        *(undefined4 *)(param_2 + 1) = local_d8;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_d4;
      }
      FUN_1400b22c2(&local_e0,"EL@$@!");
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_110 = 0;
      local_118 = 0;
      FUN_1407cdbc6(param_2,&local_e0,&local_f8);
      iVar5 = (int)uStack_f0 + -1;
      if ((int)uStack_f0 == 0) {
        iVar5 = 0;
      }
      FUN_1402980a2(param_2,local_f8,iVar5);
      if (lVar2 != 0) {
        thunk_FUN_1400020a8(lVar2);
      }
      *param_1 = *param_2;
      *param_2 = 0;
      *(int *)(param_1 + 1) = (int)param_2[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      param_2[1] = 0;
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
      goto LAB_145c42148;
    }
    if (lVar2 != 0) {
      thunk_FUN_1400020a8(lVar2);
    }
  }
  FUN_1400b22c2(param_1,&DAT_149e02088);
LAB_145c42148:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c42210 FUN_145c42210 body=22 status=ok
// SIG undefined FUN_145c42210(void)

void FUN_145c42210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145c42223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_14c759068)(param_3,param_1,param_2,PTR_FUN_14c759068);
  return;
}



// FUNCTION 145c42226 FUN_145c42226 body=205 status=ok
// SIG undefined FUN_145c42226(void)

undefined8 FUN_145c42226(undefined8 param_1,wchar_t *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  sVar1 = wcslen(param_2);
  local_40 = 0;
  if (param_2 == (wchar_t *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar2 = wcslen(param_2);
    FUN_1449b853c(local_c0,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_1414fe8c0(param_1,local_38,(longlong)(int)sVar1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c422f4 FUN_145c422f4 body=1 status=ok
// SIG undefined FUN_145c422f4(void)

void FUN_145c422f4(void)

{
  return;
}



// FUNCTION 145c422f6 FUN_145c422f6 body=22 status=ok
// SIG undefined FUN_145c422f6(void)

undefined8 * FUN_145c422f6(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = 0xefcdab8967452301;
  param_1[1] = 0x1032547698badcfe;
  return param_1;
}



// FUNCTION 145c4230c FUN_145c4230c body=181 status=ok
// SIG undefined FUN_145c4230c(void)

void FUN_145c4230c(longlong param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong _Size;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = (ulonglong)((uint)(*(ulonglong *)(param_1 + 0x10) >> 3) & 0x3f);
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) + param_3 * 8;
  _Size = 0x40 - uVar1;
  if (param_3 < _Size) {
    _Size = 0;
  }
  else {
    memcpy((void *)(param_1 + uVar1 + 0x18),param_2,_Size);
    FUN_1414feb80(param_1,param_1 + 0x18);
    if ((uVar1 ^ 0x7f) < param_3) {
      uVar1 = 0;
      uVar2 = _Size;
      do {
        FUN_1414feb80(param_1,(longlong)param_2 + uVar2);
        _Size = uVar2 + 0x40;
        uVar3 = uVar2 + 0x7f;
        uVar2 = _Size;
      } while (uVar3 < param_3);
    }
    else {
      uVar1 = 0;
    }
  }
  memcpy((void *)(param_1 + uVar1 + 0x18),(void *)((longlong)param_2 + _Size),param_3 - _Size);
  return;
}



// FUNCTION 145c423c2 FUN_145c423c2 body=43 status=ok
// SIG undefined FUN_145c423c2(void)

undefined8 FUN_145c423c2(undefined8 param_1,int param_2)

{
  FUN_145c423ee();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 145c423ee FUN_145c423ee body=162 status=ok
// SIG undefined FUN_145c423ee(void)

void FUN_145c423ee(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a588e80;
  plVar3 = (longlong *)param_1[0x2c];
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
  FUN_144760e21(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_145c42506(param_1 + 0x19);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145c42490(param_1 + 3);
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c42490 FUN_145c42490 body=118 status=ok
// SIG undefined FUN_145c42490(void)

void FUN_145c42490(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a588d80;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  FUN_1448018bf(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1448018bf(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1448018bf(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c42506 FUN_145c42506 body=119 status=ok
// SIG undefined FUN_145c42506(void)

void FUN_145c42506(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a588dc0;
  param_1[1] = &PTR_FUN_14a588df0;
  FUN_14018802a(param_1[0xc]);
  param_1[0xc] = 0;
  FUN_145c4257d(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c4257d(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 145c4257d FUN_145c4257d body=56 status=ok
// SIG undefined FUN_145c4257d(void)

void FUN_145c4257d(longlong param_1,int param_2)

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



// FUNCTION 145c425b6 FUN_145c425b6 body=148 status=ok
// SIG undefined FUN_145c425b6(void)

void FUN_145c425b6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14101f11e();
  if (param_2 != 0) {
    lVar1 = FUN_1410e4c40();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_28 = *(longlong **)(param_1 + 0x60);
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 8))();
      }
      local_20 = *(undefined4 *)(param_1 + 0x68);
      FUN_145c4264c(param_2);
      *(undefined8 *)(param_2 + 0x160) = *(undefined8 *)(param_1 + 0x70);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4264c FUN_145c4264c body=100 status=ok
// SIG undefined FUN_145c4264c(void)

void FUN_145c4264c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x150);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x150) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x158) = (int)param_2[1];
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c426a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 145c426bc FUN_145c426bc body=454 status=ok
// SIG undefined FUN_145c426bc(void)

undefined8 * FUN_145c426bc(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b2a9380;
  *(undefined4 *)(param_1 + 0x16) = 0x68fad101;
  param_1[0x17] = "gbxsymphonicambientaudio";
  lVar4 = FUN_145c42884();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145c42793;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145c42793:
  FUN_1400b22c2(local_58,"Audio.SymphonicAmbientAudioDef");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c42884 FUN_145c42884 body=57 status=ok
// SIG undefined FUN_145c42884(void)

void FUN_145c42884(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67b08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67b08 = FUN_140002ddd(FUN_1465188ba,uVar1,L"GbxSymphonicAmbientAudioDef");
  }
  return;
}



// FUNCTION 145c428be FUN_145c428be body=91 status=ok
// SIG undefined FUN_145c428be(void)

void FUN_145c428be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1414ff50c();
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1d0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1d0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145c42915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c4291a FUN_145c4291a body=53 status=ok
// SIG undefined FUN_145c4291a(void)

void FUN_145c4291a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_140bc9634();
  plVar2 = *(longlong **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c4294b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145c42950 FUN_145c42950 body=337 status=ok
// SIG undefined FUN_145c42950(void)

undefined4 * FUN_145c42950(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_145c42bdc(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_145c42aa2(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 0xb) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_145c42b20(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x5c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb) =
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
      FUN_146554f5c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c42aa2 FUN_145c42aa2 body=125 status=ok
// SIG undefined FUN_145c42aa2(void)

undefined8 * FUN_145c42aa2(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1414ff5a8();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 145c42b20 FUN_145c42b20 body=188 status=ok
// SIG undefined FUN_145c42b20(void)

undefined8 FUN_145c42b20(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140bd50c4((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_1488dc1c2(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145c42bdc FUN_145c42bdc body=238 status=ok
// SIG undefined FUN_145c42bdc(void)

int * FUN_145c42bdc(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 145c42cca FUN_145c42cca body=727 status=ok
// SIG undefined FUN_145c42cca(void)

undefined8 * FUN_145c42cca(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar8 = (longlong *)FUN_14001cc68(0x198);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b99bc10;
  plVar1 = plVar8 + 2;
  memset(plVar1,0,0x188);
  FUN_145c42fa8(plVar1);
  plVar8[2] = (longlong)&PTR_FUN_14b634a30;
  plVar8[0x2f] = 0;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  plVar8[0x32] = 0;
  lVar5 = param_3[3];
  plVar6 = (longlong *)param_3[4];
  if (plVar6 == (longlong *)0x0) {
    plVar8[0x2f] = lVar5;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar9 = (longlong *)plVar8[0x30];
    plVar8[0x2f] = lVar5;
    if (plVar6 == plVar9) {
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar9 = plVar6;
joined_r0x000145c42e8e:
        if (iVar4 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    else {
      plVar8[0x30] = (longlong)plVar6;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3;
          UNLOCK();
          goto joined_r0x000145c42e8e;
        }
      }
    }
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  cVar7 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if (cVar7 == '\0') goto LAB_145c42e1d;
  FUN_145c43050(param_1 + 400,&local_50,param_3);
  plVar6 = local_48;
  if (local_48 == (longlong *)0x0) {
    plVar8[0x31] = local_50;
    plVar9 = (longlong *)plVar8[0x32];
    if (plVar9 != (longlong *)0x0) {
      plVar8[0x32] = 0;
LAB_145c42f37:
      LOCK();
      plVar6 = plVar9 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar3 = (int *)((longlong)plVar9 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
joined_r0x000145c42f72:
        if (iVar4 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    plVar8[0x31] = local_50;
    plVar9 = (longlong *)plVar8[0x32];
    if (local_48 == plVar9) {
      LOCK();
      plVar9 = local_48 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar9 = plVar6;
        goto joined_r0x000145c42f72;
      }
    }
    else {
      plVar8[0x32] = (longlong)local_48;
      if (plVar9 != (longlong *)0x0) goto LAB_145c42f37;
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)local_48 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
LAB_145c42e1d:
  *param_2 = plVar1;
  param_2[1] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c42fa8 FUN_145c42fa8 body=108 status=ok
// SIG undefined FUN_145c42fa8(void)

undefined8 * FUN_145c42fa8(undefined8 *param_1)

{
  FUN_145c43014();
  *param_1 = &PTR_FUN_14b626ef0;
  memset(param_1 + 0xb,0,0xdc);
  *(undefined1 *)((longlong)param_1 + 0x134) = 0xff;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0xff;
  FUN_1414ff806(param_1 + 0x2b);
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x162) = 0;
  return param_1;
}



// FUNCTION 145c43014 FUN_145c43014 body=60 status=ok
// SIG undefined FUN_145c43014(void)

void FUN_145c43014(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  *param_1 = &PTR_FUN_14b425680;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  return;
}



// FUNCTION 145c43050 FUN_145c43050 body=1887 status=ok
// SIG undefined FUN_145c43050(void)

longlong * FUN_145c43050(char *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  longlong *plVar9;
  byte bVar10;
  char cVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  char *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar13 = param_3[1];
  local_d0 = param_1;
  puVar12 = (undefined8 *)FUN_14001cc68(0x120,0x10);
  puVar12[1] = &DAT_100000001;
  *puVar12 = &PTR_LAB_14b99bf80;
  puVar15 = puVar12 + 2;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  FUN_14485c47a(puVar12 + 4,uVar13);
  pcVar8 = local_d0;
  puVar12[0xd] = 0;
  puVar12[0xe] = 0;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0;
  puVar12[9] = 0;
  puVar12[10] = 0;
  puVar12[7] = 0;
  puVar12[8] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0;
  *(undefined1 *)(puVar12 + 0x19) = 0;
  puVar12[0xf] = 0;
  puVar12[0x10] = 0;
  puVar12[0x1a] = 0;
  puVar12[0x1b] = 0;
  puVar12[0x1c] = 0;
  puVar12[0x1d] = 0;
  puVar12[0x1e] = 0;
  puVar12[0x1f] = 0;
  puVar12[0x20] = 0;
  puVar12[0x21] = 0;
  puVar12[0x22] = 0;
  *(byte *)(puVar12 + 0x23) = *(byte *)(puVar12 + 0x23) & 0xf0;
  *param_2 = (longlong)puVar15;
  param_2[1] = (longlong)puVar12;
  local_c8 = param_2;
  FUN_145c4386c(param_2,puVar15);
  uVar13 = FUN_14112c5dc(param_3[1]);
  FUN_14485c47a(puVar12 + 5,uVar13);
  FUN_145c43818(puVar12 + 0x1a,pcVar8 + 8);
  puVar12[10] = *(undefined8 *)(pcVar8 + 0x50);
  uVar5 = *(undefined4 *)(pcVar8 + 0x5c);
  uVar6 = *(undefined4 *)(pcVar8 + 0x60);
  uVar7 = *(undefined4 *)(pcVar8 + 100);
  *(undefined4 *)(puVar12 + 0xb) = *(undefined4 *)(pcVar8 + 0x58);
  *(undefined4 *)((longlong)puVar12 + 0x5c) = uVar5;
  *(undefined4 *)(puVar12 + 0xc) = uVar6;
  *(undefined4 *)((longlong)puVar12 + 100) = uVar7;
  FUN_144a787a6(puVar12 + 0xd,pcVar8 + 0x68);
  *(byte *)(puVar12 + 0x23) = *(byte *)(puVar12 + 0x23) & 0xf7 | *pcVar8 << 3;
  local_d8 = param_3;
  local_b0 = param_3;
  FUN_145c437b0();
  if (0 < *(int *)(pcVar8 + 0x80)) {
    lVar14 = 0;
    do {
      FUN_1414ff814();
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(pcVar8 + 0x80));
  }
  plVar9 = local_c8;
  bVar10 = 0;
  if (pcVar8[0x88] != '\0') {
    uStack_70 = 0;
    local_88 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_80 = 0;
    local_78 = 0;
    if ((*(byte *)(puVar12 + 0x19) & 1) == 0) {
      local_88._4_4_ = 0;
      local_88._0_4_ = 0;
      uStack_90 = 0;
      uStack_70._4_1_ = 0;
      local_78 = 0;
      uStack_80 = 0;
    }
    else {
      FUN_145aa9608(puVar12 + 0x11);
    }
    puVar12[0x11] = local_a8;
    *(undefined4 *)(puVar12 + 0x12) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)puVar12 + 0x94) = uStack_a0._4_4_;
    *(undefined4 *)(puVar12 + 0x13) = (undefined4)local_98;
    *(undefined4 *)((longlong)puVar12 + 0x9c) = local_98._4_4_;
    puVar12[0x14] = uStack_90;
    uStack_90 = 0;
    *(undefined4 *)(puVar12 + 0x15) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar12 + 0xac) = local_88._4_4_;
    local_88 = 0;
    puVar12[0x16] = uStack_80;
    puVar12[0x17] = local_78;
    uStack_80 = 0;
    local_78 = 0;
    *(byte *)((longlong)puVar12 + 0xc4) = uStack_70._4_1_;
    if ((uStack_70._4_1_ & 1) != 0) {
      *(undefined4 *)(puVar12 + 0x18) = (undefined4)uStack_70;
    }
    *(undefined1 *)(puVar12 + 0x19) = 1;
    FUN_145aa9608(&local_a8);
    bVar10 = pcVar8[0x88];
  }
  if (((bVar10 & 1) != 0) &&
     (cVar11 = FUN_1414ff814(&local_b0,puVar12 + 0x11,pcVar8 + 0x90), cVar11 != '\0')) {
    if (puVar12[0x16] != 0) {
      FUN_145c4390c(puVar12[0x16] + 0x18,plVar9,&LAB_140ed00b0);
    }
    if (pcVar8 + 0xd0 != (char *)(puVar12 + 0x18)) {
      *(undefined4 *)(puVar12 + 0x18) = *(undefined4 *)(pcVar8 + 0xd0);
      *(undefined1 *)((longlong)puVar12 + 0xc4) = 1;
    }
  }
  puVar12 = local_d8;
  lVar14 = *(longlong *)(pcVar8 + 0x20);
  if (lVar14 != 0) {
    plVar3 = *(longlong **)(pcVar8 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      local_a8 = *local_d8;
      local_98 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
      local_a8 = *puVar12;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      puVar15 = (undefined8 *)*plVar9;
      local_98 = plVar3;
    }
    uStack_a0 = lVar14;
    FUN_140f360c6(lVar14,&local_c0,&local_a8);
    plVar1 = local_b8;
    if (puVar15 + 4 != &local_c0) {
      puVar15[4] = local_c0;
      local_c0 = 0;
      plVar4 = (longlong *)puVar15[5];
      if (local_b8 != plVar4) {
        local_b8 = (longlong *)0x0;
        puVar15[5] = plVar1;
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
      }
    }
    plVar1 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    plVar1 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_98 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
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
    puVar15 = (undefined8 *)*plVar9;
    if (puVar15[4] != 0) {
      FUN_145c4390c(puVar15[4] + 0x18,plVar9,FUN_140ed00b8);
    }
  }
  lVar14 = *(longlong *)(pcVar8 + 0x38);
  if (lVar14 != 0) {
    plVar3 = *(longlong **)(pcVar8 + 0x40);
    if (plVar3 == (longlong *)0x0) {
      local_a8 = *puVar12;
      local_98 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
      local_a8 = *puVar12;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      puVar15 = (undefined8 *)*plVar9;
      local_98 = plVar3;
    }
    uStack_a0 = lVar14;
    FUN_140f360c6(lVar14,&local_c0,&local_a8);
    plVar1 = local_b8;
    if (puVar15 + 6 != &local_c0) {
      puVar15[6] = local_c0;
      local_c0 = 0;
      plVar4 = (longlong *)puVar15[7];
      if (local_b8 != plVar4) {
        local_b8 = (longlong *)0x0;
        puVar15[7] = plVar1;
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
      }
    }
    plVar1 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    plVar1 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_98 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
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
    if (*(longlong *)(*plVar9 + 0x30) != 0) {
      FUN_145c4390c(*(longlong *)(*plVar9 + 0x30) + 0x18,plVar9,FUN_140ed00b8);
    }
  }
  lVar14 = FUN_14112c5dc(puVar12[1]);
  if (lVar14 != 0) {
    FUN_145c43bac(&local_a8,plVar9);
    FUN_145c43aaa(lVar14 + 0x66e0,&local_c0,&local_a8);
    FUN_1449db362(&local_a8);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar9;
}



// FUNCTION 145c437b0 FUN_145c437b0 body=104 status=ok
// SIG undefined FUN_145c437b0(void)

void FUN_145c437b0(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_145c43a26(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x40 + *param_1);
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)((longlong)puVar2 + 0x3c) = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2 = puVar2 + 8;
  }
  return;
}



// FUNCTION 145c43818 FUN_145c43818 body=84 status=ok
// SIG undefined FUN_145c43818(void)

longlong * FUN_145c43818(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 145c4386c FUN_145c4386c body=159 status=ok
// SIG undefined FUN_145c4386c(void)

void FUN_145c4386c(longlong param_1,longlong *param_2)

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
    if ((longlong *)param_2[1] == plVar2) goto LAB_145c438a9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_145c438a9;
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
LAB_145c438a9:
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
                    /* WARNING: Could not recover jumptable at 0x000145c43907. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145c4390c FUN_145c4390c body=281 status=ok
// SIG undefined FUN_145c4390c(void)

void FUN_145c4390c(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b99bfa0;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b99bfa0;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
                    /* WARNING: Could not recover jumptable at 0x000145c43a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c43a26 FUN_145c43a26 body=132 status=ok
// SIG undefined FUN_145c43a26(void)

void FUN_145c43a26(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c43aaa FUN_145c43aaa body=216 status=ok
// SIG undefined FUN_145c43aaa(void)

undefined8 * FUN_145c43aaa(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145c43bac FUN_145c43bac body=298 status=ok
// SIG undefined FUN_145c43bac(void)

longlong * FUN_145c43bac(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_14b99c080;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b99c010;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = &LAB_141040e68;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b99c080;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b99c010;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_141040e68;
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



// FUNCTION 145c43cd6 FUN_145c43cd6 body=251 status=ok
// SIG undefined FUN_145c43cd6(void)

void FUN_145c43cd6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar2 = param_2;
    lVar1 = FUN_14479d2ce(param_1 + 0x120);
    if (lVar1 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))(*(longlong **)(param_1 + 0x48),lVar1);
      lVar2 = lVar1;
    }
    if (*(char *)(param_2 + 0xba8) == '\x01') {
      lVar1 = FUN_145c43e28(DAT_14c951640);
      if (lVar1 != 0) {
        FUN_145c43dd2(lVar1,*(undefined4 *)(param_2 + 0xc20));
        FUN_1414ffb2e(lVar1,*(undefined4 *)(param_2 + 0xc24));
        FUN_145c43de0(lVar1,*(undefined4 *)(param_2 + 0xc28));
        FUN_145c43dee(lVar1,*(undefined4 *)(param_2 + 0xc2c));
        FUN_145c43dfc(lVar1,*(undefined4 *)(param_2 + 0xc30));
        FUN_145c43e0a(lVar1,CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(param_2 + 0xc34))
                            & 0xffffffffffffff01);
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))
                  (*(longlong **)(param_1 + 0x48),lVar1,param_2 + 0xbc0,0);
        FUN_14485c47a(param_1 + 0x120,lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c43dd2 FUN_145c43dd2 body=13 status=ok
// SIG undefined FUN_145c43dd2(void)

void FUN_145c43dd2(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2a8) = param_2;
  FUN_1448c6f34();
  return;
}



// FUNCTION 145c43de0 FUN_145c43de0 body=13 status=ok
// SIG undefined FUN_145c43de0(void)

void FUN_145c43de0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2b0) = param_2;
  FUN_1448c6f34();
  return;
}



// FUNCTION 145c43dee FUN_145c43dee body=13 status=ok
// SIG undefined FUN_145c43dee(void)

void FUN_145c43dee(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2b4) = param_2;
  FUN_1448c6f34();
  return;
}



// FUNCTION 145c43dfc FUN_145c43dfc body=13 status=ok
// SIG undefined FUN_145c43dfc(void)

void FUN_145c43dfc(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2b8) = param_2;
  FUN_1448c6f34();
  return;
}



// FUNCTION 145c43e0a FUN_145c43e0a body=30 status=ok
// SIG undefined FUN_145c43e0a(void)

void FUN_145c43e0a(longlong param_1,char param_2)

{
  *(uint *)(param_1 + 700) = *(uint *)(param_1 + 700) & 0xfffffffe | (uint)(param_2 == '\x01');
  FUN_1448c6f34();
  return;
}



// FUNCTION 145c43e28 FUN_145c43e28 body=177 status=ok
// SIG undefined FUN_145c43e28(void)

undefined8 FUN_145c43e28(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140d011dc();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c43eda FUN_145c43eda body=40 status=ok
// SIG undefined FUN_145c43eda(void)

undefined8 FUN_145c43eda(undefined8 param_1,int param_2)

{
  FUN_145c43f02();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c43f02 FUN_145c43f02 body=70 status=ok
// SIG undefined FUN_145c43f02(void)

void FUN_145c43f02(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b127620;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_145c43f48(param_1 + 0x72);
  FUN_140bd4d6a(param_1);
  return;
}



// FUNCTION 145c43f48 FUN_145c43f48 body=53 status=ok
// SIG undefined FUN_145c43f48(void)

void FUN_145c43f48(longlong *param_1)

{
  FUN_1414ffb3c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c43f7e FUN_145c43f7e body=491 status=ok
// SIG undefined FUN_145c43f7e(void)

void FUN_145c43f7e(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + -0x30;
  lVar3 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(lVar1);
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x1f0), lVar3 != 0)) {
    lVar4 = FUN_1403ca142();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      if (*(longlong *)(param_1 + 0x28) == 0) {
        local_38 = FUN_145d74af4;
        local_30 = 0;
        FUN_145c4416a(lVar3 + 0x650,&local_48,lVar1);
        *(code **)(param_1 + 0x28) = local_48;
      }
      if (*(longlong *)(param_1 + 0x18) == 0) {
        local_48 = (code *)0x0;
        local_40 = 0;
        FUN_1446efa72(&local_48,0,3,0x10);
        pcVar2 = local_48;
        local_40 = 3;
        *(undefined ***)local_48 = &PTR_LAB_14b4f5500;
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
        *(longlong *)(local_48 + 0x10) = lVar6;
        *(undefined ***)local_48 = &PTR_FUN_14b9ae420;
        *(undefined8 *)(local_48 + 0x18) = 0;
        FUN_14485c47a(local_48 + 0x18,lVar1);
        *(longlong *)(pcVar2 + 0x20) = lVar1;
        if (*(longlong *)(lVar3 + 0x30) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
        }
        uVar5 = FUN_14001cc68(0xd8,0x10);
        local_38 = local_48;
        local_48 = (code *)0x0;
        local_30 = local_40;
        local_40 = 0;
        FUN_14127c25a(uVar5,uVar7);
        lVar1 = *(longlong *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        if (lVar1 != 0) {
          FUN_14127b218(lVar1);
          FUN_1400020a8(lVar1);
        }
        FUN_1449db362(&local_48);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4416a FUN_145c4416a body=254 status=ok
// SIG undefined FUN_145c4416a(void)

undefined8
FUN_145c4416a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9ae3b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9ae340;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c4426a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4426a FUN_145c4426a body=216 status=ok
// SIG undefined FUN_145c4426a(void)

undefined8 * FUN_145c4426a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145c44350 FUN_145c44350 body=24 status=ok
// SIG undefined FUN_145c44350(void)

bool FUN_145c44350(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145c44374 FUN_145c44374 body=199 status=ok
// SIG undefined FUN_145c44374(void)

undefined8 * FUN_145c44374(undefined8 *param_1)

{
  FUN_145c4443c();
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *param_1 = &PTR_FUN_14b178000;
  param_1[0x80] = &PTR_LAB_14b178670;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 2;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0x200000000;
  param_1[0x98] = 0;
  param_1[0x99] = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a1) = 0;
  *(undefined2 *)(param_1 + 0x9a) = 0;
  param_1[0xa1] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  return param_1;
}



// FUNCTION 145c4443c FUN_145c4443c body=989 status=ok
// SIG undefined FUN_145c4443c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145c4443c(undefined8 *param_1)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_145c4481a();
  *param_1 = &PTR_FUN_14a1b64f0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0x41f00000;
  *(undefined2 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  FUN_1405bab3a(param_1,0);
  for (puVar9 = param_1; puVar9 != (undefined8 *)0x0; puVar9 = (undefined8 *)puVar9[4]) {
    if ((*(uint *)(puVar9 + 1) & 0x30) != 0) goto LAB_145c444f6;
  }
  if (param_1[0x7e] == 0) {
    plVar1 = param_1 + 0x7c;
    param_1[0x7f] = &DAT_14c9a6780;
    param_1[0x7e] = param_1;
    lVar7 = DAT_14c9a6780;
    while( true ) {
      param_1[0x7c] = lVar7;
      LOCK();
      lVar8 = *(longlong *)param_1[0x7f];
      bVar10 = lVar7 == lVar8;
      if (bVar10) {
        *(longlong *)param_1[0x7f] = (longlong)plVar1;
        lVar8 = lVar7;
      }
      UNLOCK();
      if (bVar10) break;
      param_1[0x7c] = lVar8;
      lVar7 = *(longlong *)param_1[0x7f];
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
LAB_145c444f6:
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(undefined1 *)((longlong)param_1 + 0x3d6) = 1;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf9 | 2;
  FUN_140cbebe8(param_1 + 6,0);
  FUN_1446f470e(&local_a0,L"Text",1);
  uVar6 = FUN_1411bca8c();
  local_b8 = CONCAT71(local_b8._1_7_,1);
  local_b0 = 0;
  lVar7 = FUN_14048696c(param_1,local_a0,uVar6,uVar6);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  param_1[0x77] = lVar7;
  auVar11 = *(undefined1 (*) [16])(lVar7 + 0x1b0);
  dVar4 = auVar11._0_8_;
  dVar5 = auVar11._8_8_;
  dVar16 = *(double *)(lVar7 + 0x1c0);
  puVar9 = *(undefined8 **)(lVar7 + 0x230);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar6 = DAT_14c8463d8;
    *puVar9 = DAT_14c8463d0;
    puVar9[1] = uVar6;
    uVar6 = DAT_14c8463e8;
    puVar9[2] = DAT_14c8463e0;
    puVar9[3] = uVar6;
    uVar6 = DAT_14c846500;
    puVar9[4] = DAT_14c8464f8;
    puVar9[5] = uVar6;
    puVar9[6] = DAT_14c846508;
    *(undefined8 **)(lVar7 + 0x230) = puVar9;
  }
  if (((((double)puVar9[4] != dVar4) || (NAN((double)puVar9[4]) || NAN(dVar4))) ||
      ((double)puVar9[5] != dVar5)) ||
     (((NAN((double)puVar9[5]) || NAN(dVar5) || ((double)puVar9[6] != dVar16)) ||
      (NAN((double)puVar9[6]) || NAN(dVar16))))) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar16;
    dVar2 = (double)DAT_1499387d0;
    dVar3 = DAT_1499387d0._8_8_;
    auVar11 = divpd(auVar11,_DAT_1499387d0);
    auVar14 = divpd(auVar19,_DAT_1499387d0);
    auVar11 = roundpd(auVar11,auVar11,3);
    auVar14 = roundpd(auVar14,auVar14,3);
    dVar4 = dVar4 - auVar11._0_8_ * dVar2;
    dVar5 = dVar5 - auVar11._8_8_ * dVar3;
    auVar20._0_8_ = dVar16 - auVar14._0_8_ * dVar2;
    auVar20._8_8_ = 0.0 - auVar14._8_8_ * dVar3;
    auVar18._0_8_ = dVar4 + dVar2;
    auVar18._8_8_ = dVar5 + dVar3;
    auVar17._0_8_ = dVar2 + auVar20._0_8_;
    auVar17._8_8_ = dVar3 + auVar20._8_8_;
    auVar14._8_8_ = -(ulonglong)(0.0 <= dVar5);
    auVar14._0_8_ = -(ulonglong)(0.0 <= dVar4);
    auVar11._8_4_ = SUB84(dVar5,0);
    auVar11._0_8_ = dVar4;
    auVar11._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar14 = blendvpd(auVar18,auVar11,auVar14);
    auVar12._8_8_ = -(ulonglong)(0.0 <= auVar20._8_8_);
    auVar12._0_8_ = -(ulonglong)(0.0 <= auVar20._0_8_);
    auVar11 = blendvpd(auVar17,auVar20,auVar12);
    auVar15._0_8_ = auVar14._0_8_ + -360.0;
    auVar15._8_8_ = auVar14._8_8_ + -360.0;
    auVar13._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
    auVar13._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
    auVar14 = blendvpd(auVar14,auVar15,auVar13);
    dVar16 = auVar11._0_8_;
    *(undefined1 (*) [16])(puVar9 + 4) = auVar14;
    puVar9[6] = ~-(ulonglong)(180.0 < dVar16) & (ulonglong)dVar16 |
                (ulonglong)(dVar16 + -360.0) & -(ulonglong)(180.0 < dVar16);
    FUN_144a7484c(puVar9 + 4,&local_78);
    puVar9[2] = local_68;
    puVar9[3] = uStack_60;
    *puVar9 = local_78;
    puVar9[1] = uStack_70;
  }
  local_78 = *puVar9;
  uStack_70 = puVar9[1];
  local_68 = puVar9[2];
  uStack_60 = puVar9[3];
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0x4044000000000000;
  local_b0 = 0;
  local_b8 = 0;
  FUN_144927ad4(lVar7,&local_98,&local_78,0);
  FUN_140486fc4(param_1[0x77],param_1[0x39],0);
  *(undefined1 *)(param_1[0x77] + 0x640) = 1;
  *(undefined1 *)(param_1[0x77] + 0x641) = 2;
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4481a FUN_145c4481a body=198 status=ok
// SIG undefined FUN_145c4481a(void)

undefined8 * FUN_145c4481a(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"CollisionComp",1);
  uVar2 = FUN_140f974a4();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar2,0);
  FUN_140e2e5d6(param_1,param_2);
  *param_1 = &PTR_FUN_14a76cee0;
  plVar1 = (longlong *)param_1[0x72];
  *(undefined4 *)(plVar1 + 0xc5) = 0xff64ff64;
  *(undefined4 *)(plVar1 + 200) = 0x42200000;
  (**(code **)(*plVar1 + 0x728))(plVar1,DAT_14cb0be68,1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c448e2 FUN_145c448e2 body=255 status=ok
// SIG undefined FUN_145c448e2(void)

void FUN_145c448e2(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba3f790;
  FUN_145c449e2(plVar5 + 2,param_2,*param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c449e2 FUN_145c449e2 body=282 status=ok
// SIG undefined FUN_145c449e2(void)

undefined8 *
FUN_145c449e2(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_40,L"ShiftSDK::Rooms::LeaveRoom");
  FUN_145c44afe(param_1,local_40,param_2,param_4);
  *param_1 = &PTR_FUN_14ba3f150;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba3f7e0;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_14b4f3a00;
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
  local_50[2] = lVar2;
  *local_50 = &PTR_FUN_14ba3f7f0;
  local_50[3] = param_1;
  FUN_141500680(param_2,param_3,&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c44afe FUN_145c44afe body=459 status=ok
// SIG undefined FUN_145c44afe(void)

undefined8 *
FUN_145c44afe(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = &PTR_LAB_14ba3d1c8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x38);
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_14ba3f160;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_145c44cca(param_1 + 4,param_4);
  param_1[6] = 0;
  param_1[8] = 0;
  local_b8 = param_1[6];
  local_70 = param_1[7];
  local_a8 = (longlong *)param_1[8];
  uStack_60 = param_1[9];
  local_58 = param_1[10];
  uStack_50 = param_1[0xb];
  local_48 = param_1[0xc];
  uStack_40 = param_1[0xd];
  uVar3 = uStack_40;
  local_68 = local_a8;
  uVar2 = uStack_60;
  local_78 = local_b8;
  param_1[0xc] = 0x700000000;
  param_1[0xd] = CONCAT44(uStack_7c,uStack_80);
  param_1[10] = &PTR_LAB_14ba3f170;
  param_1[0xb] = param_1;
  param_1[8] = 0;
  param_1[9] = CONCAT44(uStack_9c,uStack_a0);
  param_1[6] = FUN_148fa4220;
  param_1[7] = uStack_b0;
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = local_48;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = local_58;
  uStack_90 = uStack_50;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = local_70;
  uStack_60 = uVar2;
  uStack_40 = uVar3;
  if (local_b8 != 0) {
    plVar4 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar4 = &local_98;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c44cca FUN_145c44cca body=124 status=ok
// SIG undefined FUN_145c44cca(void)

void FUN_145c44cca(longlong *param_1,longlong *param_2)

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



// FUNCTION 145c44d48 FUN_145c44d48 body=42 status=ok
// SIG undefined FUN_145c44d48(void)

void FUN_145c44d48(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145c44d72(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145c44d72 FUN_145c44d72 body=58 status=ok
// SIG undefined FUN_145c44d72(void)

void FUN_145c44d72(longlong param_1)

{
  FUN_14018802a(*(undefined8 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c44dac FUN_145c44dac body=38 status=ok
// SIG undefined FUN_145c44dac(void)

undefined8 FUN_145c44dac(undefined8 param_1,int param_2)

{
  FUN_145c44dd2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c44dd2 FUN_145c44dd2 body=87 status=ok
// SIG undefined FUN_145c44dd2(void)

void FUN_145c44dd2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e5de08;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149e5de10;
  puVar1 = TlsGetValue(DAT_14c75ebfc);
  if (puVar1 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x000145c44e15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsSetValue(DAT_14c75ebfc,(LPVOID)0x0);
    return;
  }
  return;
}



// FUNCTION 145c44e36 FUN_145c44e36 body=52 status=ok
// SIG undefined FUN_145c44e36(void)

void FUN_145c44e36(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_145c44e6a(_Dst);
  return;
}



// FUNCTION 145c44e6a FUN_145c44e6a body=137 status=ok
// SIG undefined FUN_145c44e6a(void)

undefined8 * FUN_145c44e6a(undefined8 *param_1)

{
  *param_1 = IModuleInterface::vftable;
  FUN_14118b488(param_1 + 1);
  *param_1 = &PTR_FUN_149f2aa00;
  param_1[1] = &PTR_FUN_149f2aa50;
  param_1[4] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 145c44ef4 FUN_145c44ef4 body=40 status=ok
// SIG undefined FUN_145c44ef4(void)

undefined8 FUN_145c44ef4(undefined8 param_1,int param_2)

{
  FUN_145c44f1c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c44f1c FUN_145c44f1c body=115 status=ok
// SIG undefined FUN_145c44f1c(void)

void FUN_145c44f1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f85060;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145c44f8f(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_140113f3a();
    param_1[6] = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c44f8f FUN_145c44f8f body=45 status=ok
// SIG undefined FUN_145c44f8f(void)

void FUN_145c44f8f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145c44fc4 FUN_145c44fc4 body=160 status=ok
// SIG undefined FUN_145c44fc4(void)

undefined8 * FUN_145c44fc4(undefined8 *param_1)

{
  FUN_145c45064();
  *param_1 = &PTR_FUN_14a566da0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1c),4000);
  return param_1;
}



// FUNCTION 145c45064 FUN_145c45064 body=32 status=ok
// SIG undefined FUN_145c45064(void)

undefined8 * FUN_145c45064(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14aac6f40;
  return param_1;
}



// FUNCTION 145c45090 FUN_145c45090 body=89 status=ok
// SIG undefined FUN_145c45090(void)

undefined8 * FUN_145c45090(undefined8 *param_1)

{
  FUN_144a0768c();
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f) = 0;
  *param_1 = &PTR_FUN_14a57eeb0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  FUN_14020fad6(param_1 + 0xb,L"{world}");
  return param_1;
}



// FUNCTION 145c450ea FUN_145c450ea body=53 status=ok
// SIG undefined FUN_145c450ea(void)

void FUN_145c450ea(longlong *param_1)

{
  FUN_145c45120();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c45120 FUN_145c45120 body=346 status=ok
// SIG undefined FUN_145c45120(void)

void FUN_145c45120(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x48) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
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



// FUNCTION 145c45286 FUN_145c45286 body=188 status=ok
// SIG undefined FUN_145c45286(void)

undefined8 * FUN_145c45286(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a667b30;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  FUN_1446f470e(&local_20,L"Result",1);
  param_1[0x16] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c4534e FUN_145c4534e body=89 status=ok
// SIG undefined FUN_145c4534e(void)

undefined8 * FUN_145c4534e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_144a0768c();
  puVar1 = (undefined8 *)FUN_14001cc68(8);
  *puVar1 = &PTR_FUN_14a8caed0;
  param_1[6] = puVar1;
  memset(param_1 + 7,0,0x7f0);
  *param_1 = &PTR_FUN_14a8c53f0;
  param_1[5] = &PTR_FUN_14a8c56a8;
  return param_1;
}



// FUNCTION 145c453b2 FUN_145c453b2 body=189 status=ok
// SIG undefined FUN_145c453b2(void)

undefined8 * FUN_145c453b2(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  FUN_140edf546();
  *param_1 = &PTR_FUN_14b2b5870;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[8] = DAT_14cb8ccb8;
  puVar2 = param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      plVar1 = param_1 + 0x13;
      param_1[0x16] = &DAT_14cb8cca8;
      param_1[0x15] = param_1;
      lVar3 = DAT_14cb8cca8;
      while( true ) {
        param_1[0x13] = lVar3;
        LOCK();
        lVar4 = *(longlong *)param_1[0x16];
        bVar5 = lVar3 == lVar4;
        if (bVar5) {
          *(longlong *)param_1[0x16] = (longlong)plVar1;
          lVar4 = lVar3;
        }
        UNLOCK();
        if (bVar5) break;
        param_1[0x13] = lVar4;
        lVar3 = *(longlong *)param_1[0x16];
      }
      if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 8) = plVar1;
      }
      return param_1;
    }
    if ((*(uint *)(puVar2 + 1) & 0x30) != 0) break;
    puVar2 = (undefined8 *)puVar2[4];
  }
  return param_1;
}



// FUNCTION 145c4546f FUN_145c4546f body=46 status=ok
// SIG undefined FUN_145c4546f(void)

void FUN_145c4546f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c4549e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b56f190;
  puVar1[5] = &PTR_FUN_14b56f4a0;
  return;
}



// FUNCTION 145c4549e FUN_145c4549e body=54 status=ok
// SIG undefined FUN_145c4549e(void)

undefined8 * FUN_145c4549e(undefined8 *param_1)

{
  FUN_14595f48a();
  *param_1 = &PTR_FUN_14a50da00;
  param_1[5] = &PTR_FUN_14a50dd10;
  param_1[0x49] = 0;
  return param_1;
}



// FUNCTION 145c454dc FUN_145c454dc body=92 status=ok
// SIG undefined FUN_145c454dc(void)

undefined8 * FUN_145c454dc(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1406046aa();
  *param_1 = &PTR_FUN_14b71ecb0;
  param_1[5] = &PTR_FUN_14b71efb0;
  param_1[6] = &PTR_FUN_14b71efe0;
  lVar1 = FUN_1459f3116();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[7] = lVar1;
  return param_1;
}



// FUNCTION 145c45538 FUN_145c45538 body=87 status=ok
// SIG undefined FUN_145c45538(void)

undefined1 FUN_145c45538(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145c455e0(param_2,param_3);
    FUN_145c45590(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 145c45590 FUN_145c45590 body=79 status=ok
// SIG undefined FUN_145c45590(void)

undefined8 * FUN_145c45590(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c05844(param_1,iVar1);
      FUN_148c058b7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145c455e0 FUN_145c455e0 body=84 status=ok
// SIG undefined FUN_145c455e0(void)

undefined8 * FUN_145c455e0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c057ea(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 145c45634 FUN_145c45634 body=40 status=ok
// SIG undefined FUN_145c45634(void)

undefined8 FUN_145c45634(undefined8 param_1,int param_2)

{
  FUN_145c4565c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c4565c FUN_145c4565c body=60 status=ok
// SIG undefined FUN_145c4565c(void)

void FUN_145c4565c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc6f530;
  FUN_140fed6e2(param_1 + 0x2c);
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed55c(param_1);
  return;
}



// FUNCTION 145c45698 FUN_145c45698 body=40 status=ok
// SIG undefined FUN_145c45698(void)

undefined8 FUN_145c45698(undefined8 param_1,int param_2)

{
  FUN_145c456c0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c456c0 FUN_145c456c0 body=60 status=ok
// SIG undefined FUN_145c456c0(void)

void FUN_145c456c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc8db70;
  FUN_140fed6e2(param_1 + 0x2c);
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed55c(param_1);
  return;
}



// FUNCTION 145c456fc FUN_145c456fc body=9 status=ok
// SIG undefined FUN_145c456fc(void)

void FUN_145c456fc(longlong param_1)

{
  FUN_145c45706(param_1 + 0x10);
  return;
}



// FUNCTION 145c45706 FUN_145c45706 body=91 status=ok
// SIG undefined FUN_145c45706(void)

void FUN_145c45706(PSRWLOCK param_1)

{
  FUN_1412d55ee(1);
  AcquireSRWLockExclusive(param_1);
  if (param_1[1].Ptr != (PVOID)0x0) {
    param_1[1].Ptr = (PVOID)0x0;
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive(param_1);
  FUN_1412d5698(1);
  if (param_1[1].Ptr == (PVOID)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c4576c FUN_145c4576c body=782 status=ok
// SIG undefined FUN_145c4576c(void)

undefined8 * FUN_145c4576c(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b87d800;
  *(undefined4 *)(param_1 + 0x16) = 0xdead0004;
  param_1[0x17] = "skilltrees_data";
  lVar4 = FUN_145c45a7c();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145c45843;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145c45843:
  lVar4 = FUN_145c45a7c();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_145c458d8;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_145c458d8:
  FUN_1400b22c2(local_58,"UI.SkillTreesData");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c45a7c FUN_145c45a7c body=57 status=ok
// SIG undefined FUN_145c45a7c(void)

void FUN_145c45a7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb5c10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb5c10 = FUN_140002ddd(FUN_146600366,uVar1,L"OakUISkillTreesDef");
  }
  return;
}



// FUNCTION 145c45ab6 FUN_145c45ab6 body=248 status=ok
// SIG undefined FUN_145c45ab6(void)

undefined8 FUN_145c45ab6(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a8ea680;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14a8ea610;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c45bb0(&DAT_14c967070,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c45bb0 FUN_145c45bb0 body=216 status=ok
// SIG undefined FUN_145c45bb0(void)

undefined8 * FUN_145c45bb0(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145c45c96 FUN_145c45c96 body=24 status=ok
// SIG undefined FUN_145c45c96(void)

bool FUN_145c45c96(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145c45cba FUN_145c45cba body=588 status=ok
// SIG undefined FUN_145c45cba(void)

undefined8 * FUN_145c45cba(undefined8 *param_1)

{
  longlong lVar1;
  size_t sVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined4 local_50;
  undefined8 local_48;
  wchar_t *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c45ff4();
  *param_1 = &PTR_FUN_14abb9a00;
  param_1[5] = &PTR_FUN_14abb9e90;
  param_1[6] = &PTR_LAB_14abb9ed0;
  param_1[0x22] = &PTR_FUN_14abb9f20;
  param_1[0x2c] = &PTR_FUN_14abb9fa0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_145c45f08(param_1 + 0x32,0x7fffffff);
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  param_1[0x33] = 0x4051800000000000;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0xc051800000000000;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  lVar1 = FUN_14142c306();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x30] = lVar1;
  lVar1 = FUN_145c45f0e();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x31] = lVar1;
  lVar1 = FUN_145c45f0e();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x40] = lVar1;
  param_1[0x3d] = 0x4049000000000000;
  param_1[0x3e] = 0x4049000000000000;
  param_1[0x3f] = 0x4049000000000000;
  *(uint *)((longlong)param_1 + 0x1cc) = (*(uint *)((longlong)param_1 + 0x1cc) & 0xfffffff0) + 1;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x42) = 2;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    uVar3 = 0;
    FUN_14010318a(param_1,&local_40,0);
    local_58 = local_40;
    if (local_38 == 0) {
      local_58 = L"";
    }
    if (local_58 != (wchar_t *)0x0) {
      sVar2 = wcslen(local_58);
      uVar3 = (int)sVar2;
    }
    local_50 = uVar3;
    FUN_145c46062(&local_48);
    param_1[0x2f] = local_48;
    if (local_40 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145c45f08 FUN_145c45f08 body=6 status=ok
// SIG undefined FUN_145c45f08(void)

undefined4 * FUN_145c45f08(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 145c45f0e FUN_145c45f0e body=228 status=ok
// SIG undefined FUN_145c45f0e(void)

longlong FUN_145c45f0e(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1d460 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146422fec;
    local_38 = &LAB_147e6dc65;
    local_40 = FUN_1464231b9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/NavigationSystem",L"NavArea_Null",&DAT_14cb1d460,&DAT_147e6dc64);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1d460;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c45ff4 FUN_145c45ff4 body=110 status=ok
// SIG undefined FUN_145c45ff4(void)

undefined8 * FUN_145c45ff4(undefined8 *param_1)

{
  FUN_144805d84();
  *param_1 = &PTR_FUN_14abc1c90;
  param_1[5] = &PTR_FUN_14abc2110;
  param_1[6] = &PTR_LAB_14abc2150;
  param_1[0x22] = &PTR_FUN_14abc21a0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(uint *)(param_1 + 0x2a) = (*(uint *)(param_1 + 0x2a) & 0xfffffff8) + 1;
  param_1[0x2b] = 0;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 0xc0;
  return param_1;
}



// FUNCTION 145c46062 FUN_145c46062 body=107 status=ok
// SIG undefined FUN_145c46062(void)

undefined8 * FUN_145c46062(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_141500794(&local_38,&local_48,0);
  local_28 = local_38;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  uVar1 = FUN_1447addd0(&local_28,0x10);
  *param_1 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c460d6 FUN_145c460d6 body=343 status=ok
// SIG undefined FUN_145c460d6(void)

undefined8 * FUN_145c460d6(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  FUN_140c8816c();
  *param_1 = &PTR_FUN_14b829870;
  param_1[6] = &PTR_FUN_14b829b30;
  param_1[7] = &PTR_FUN_14b829bc0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 2;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0x41400000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x11) = 0x3f7d70a4;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 5;
  param_1[0x12] = 0x427000003f19999a;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0xca) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd2) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  iVar1 = DAT_14cbb2220;
  _Src = DAT_14cbb2218;
  lVar2 = (longlong)DAT_14cbb2220;
  *(int *)(param_1 + 0x21) = DAT_14cbb2220;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x20,iVar1,0);
    memcpy((void *)param_1[0x20],_Src,lVar2 * 2);
  }
  param_1[0x22] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 300) = 0;
  param_1[0x26] = 0x44e1000044e10000;
  return param_1;
}



// FUNCTION 145c4622e FUN_145c4622e body=52 status=ok
// SIG undefined FUN_145c4622e(void)

void FUN_145c4622e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000145c4625f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 145c4638e FUN_145c4638e body=216 status=ok
// SIG undefined FUN_145c4638e(void)

void FUN_145c4638e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14050c909();
  *(double *)(param_1 + 0x88) =
       (double)*(float *)(lVar1 + 0x4b0) * (double)*(float *)(lVar1 + 0x4b0);
  lVar1 = FUN_14060e84c(param_1);
  if (lVar1 == 0) goto LAB_145c4643d;
  lVar2 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) goto LAB_145c4643d;
  FUN_145c46656(lVar1 + 0x9c0,local_20,param_1);
  lVar1 = *(longlong *)(lVar1 + 0xa08);
  if (lVar1 == 0) {
LAB_145c46463:
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_145c46463;
  }
  FUN_145c46468(param_1,lVar1);
LAB_145c4643d:
  FUN_14606f8b6(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c46468 FUN_145c46468 body=246 status=ok
// SIG undefined FUN_145c46468(void)

void FUN_145c46468(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1 + 0x58;
  cVar2 = FUN_140e8a950(lVar1);
  if (cVar2 == '\0') {
    cVar2 = FUN_144729dda(lVar1);
    if (cVar2 != '\0') {
      lVar3 = FUN_14479d2ce(lVar1);
      FUN_140457ffc(lVar3 + 0x8868,param_1);
      lVar3 = FUN_14479d2ce(lVar1);
      FUN_140457ffc(lVar3 + 0x8890,param_1);
      lVar3 = FUN_14479d2ce(lVar1);
      FUN_140457ffc(lVar3 + 35000,param_1);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (param_2 != 0) {
      FUN_14485c47a(lVar1,param_2);
      FUN_145c46560(param_2 + 0x8868,local_28,param_1);
      FUN_145c46560(param_2 + 0x8890,local_28,param_1);
      FUN_145c46560(param_2 + 35000,local_28,param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


