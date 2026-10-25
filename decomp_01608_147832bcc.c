// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147832bcc FUN_147832bcc body=366 status=ok
// SIG undefined FUN_147832bcc(void)

void FUN_147832bcc(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *(undefined8 **)(param_1 + 0x18);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_58 = 0;
  }
  else {
    iVar7 = *(int *)(local_50 + 1);
    local_58 = 0;
    do {
      if (iVar7 == 0) {
        local_50 = (undefined8 *)0x0;
        goto LAB_147832c04;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 1);
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar9);
    local_58 = *(undefined8 *)(param_1 + 0x10);
  }
LAB_147832c04:
  local_34 = param_2;
  plVar8 = (longlong *)FUN_14001cc68(0xd0,0x10);
  local_68 = param_4;
  FUN_1478373ce(plVar8,&local_58,&local_34,param_3);
  plVar1 = plVar8 + 2;
  local_48 = plVar1;
  local_40 = plVar8;
  FUN_1478379f6(&local_48,plVar1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar7 + 1U) {
    FUN_147835e0c((longlong *)(param_1 + 0x188),iVar7);
  }
  plVar6 = local_40;
  lVar4 = *(longlong *)(param_1 + 0x188);
  *(longlong **)(lVar4 + (longlong)iVar7 * 0x10) = plVar1;
  *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar8;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_50 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147832d50 FUN_147832d50 body=366 status=ok
// SIG undefined FUN_147832d50(void)

void FUN_147832d50(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *(undefined8 **)(param_1 + 0x18);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_58 = 0;
  }
  else {
    iVar7 = *(int *)(local_50 + 1);
    local_58 = 0;
    do {
      if (iVar7 == 0) {
        local_50 = (undefined8 *)0x0;
        goto LAB_147832d88;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 1);
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar9);
    local_58 = *(undefined8 *)(param_1 + 0x10);
  }
LAB_147832d88:
  local_34 = param_2;
  plVar8 = (longlong *)FUN_14001cc68(0xc0,0x10);
  local_68 = param_4;
  FUN_147835e92(plVar8,&local_58,&local_34,param_3);
  plVar1 = plVar8 + 2;
  local_48 = plVar1;
  local_40 = plVar8;
  FUN_147836104(&local_48,plVar1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar7 + 1U) {
    FUN_147835e0c((longlong *)(param_1 + 0x188),iVar7);
  }
  plVar6 = local_40;
  lVar4 = *(longlong *)(param_1 + 0x188);
  *(longlong **)(lVar4 + (longlong)iVar7 * 0x10) = plVar1;
  *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar8;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_50 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147832eec FUN_147832eec body=139 status=ok
// SIG undefined FUN_147832eec(void)

undefined8 FUN_147832eec(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x168))();
  if (cVar1 == '\0') {
    if ((longlong)(int)param_1[0x32] != 0) {
      lVar2 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1[0x31] + lVar2) + 0x18) == 10) {
          return 0;
        }
        lVar2 = lVar2 + 0x10;
      } while ((longlong)(int)param_1[0x32] * 0x10 != lVar2);
    }
    if ((((param_1[0x33] == 0) || (*(int *)(param_1[0x33] + 0x18) != 10)) &&
        (*(int *)((longlong)param_1 + 0x17c) == 0)) &&
       ((((*(byte *)(param_1 + 0x50) & 1) != 0 && (param_1[0x60] < (longlong)(int)param_1[0x5e])) &&
        (0 < (int)param_1[0x29])))) {
      return CONCAT71((int7)(int3)((uint)(int)param_1[0x5e] >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 147832f80 FUN_147832f80 body=146 status=ok
// SIG undefined FUN_147832f80(void)

byte FUN_147832f80(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0xffffffff;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  bVar1 = FUN_143385e82(0,param_2,&local_a8);
  bVar1 = bVar1 & (byte)local_78;
  FUN_147832492(&local_a8);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783301c FUN_14783301c body=332 status=ok
// SIG undefined FUN_14783301c(void)

void FUN_14783301c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined ***pppuVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_80;
  pvVar1 = (void *)*param_2;
  local_90 = param_1;
  if (lVar3 == 0) {
    local_7c = 0;
    iVar4 = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar1,lVar3 * 2);
    iVar4 = local_80;
  }
  pvVar1 = local_88;
  local_78[0] = (code *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_FUN_14a5acff0;
  local_48 = (void *)0x0;
  local_50 = local_90;
  local_40 = iVar4;
  if (iVar4 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,iVar4,0);
    memcpy(local_48,pvVar1,(longlong)iVar4 * 2);
  }
  local_78[0] = FUN_14338ccce;
  FUN_147833170(param_1,param_3,local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar2 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar2 = &local_58;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147833170 FUN_147833170 body=204 status=ok
// SIG undefined FUN_147833170(void)

void FUN_147833170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_80 = 0;
  FUN_1478383b0(&local_88);
  local_78[0] = (undefined1 *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_FUN_14a5acfd0;
  local_50 = 0;
  local_48 = 0;
  FUN_1478383b0(&local_50,&local_88);
  local_78[0] = &LAB_147838434;
  FUN_147837a9e(param_1,param_3,local_78);
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  FUN_1449db362(&local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783323e FUN_14783323e body=380 status=ok
// SIG undefined FUN_14783323e(void)

void FUN_14783323e(longlong param_1,undefined8 *param_2)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 in_stack_00000030;
  undefined1 auStack_b8 [32];
  longlong local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  longlong local_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = (void *)0x0;
  local_88 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_88;
  pvVar1 = (void *)*param_2;
  local_98 = param_1;
  if (lVar3 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1446dd670(&local_90,local_88,0);
    memcpy(local_90,pvVar1,lVar3 * 2);
  }
  local_80 = param_2[2];
  local_78[0] = (code *)0x0;
  plVar2 = (longlong *)FUN_14001cc68(0x28,8);
  pvVar1 = local_90;
  *plVar2 = (longlong)&PTR_FUN_14a5ad0d0;
  plVar2[1] = local_98;
  plVar2[2] = 0;
  lVar3 = (longlong)local_88;
  *(int *)(plVar2 + 3) = local_88;
  local_68 = plVar2;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)plVar2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(plVar2 + 2,local_88,0);
    memcpy((void *)plVar2[2],pvVar1,lVar3 * 2);
  }
  plVar2[4] = local_80;
  if (plVar2 != (longlong *)&DAT_fffffffffffffff8) {
    local_78[0] = FUN_14338d36e;
  }
  FUN_1478333bc(param_1,in_stack_00000030,local_78);
  if (local_78[0] != (code *)0x0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478333bc FUN_1478333bc body=204 status=ok
// SIG undefined FUN_1478333bc(void)

void FUN_1478333bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_80 = 0;
  FUN_147838e1e(&local_88);
  local_78[0] = (undefined1 *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_FUN_14a5ad0b0;
  local_50 = 0;
  local_48 = 0;
  FUN_147838e1e(&local_50,&local_88);
  local_78[0] = &LAB_147838ea2;
  FUN_1478384d8(param_1,param_3,local_78);
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  FUN_1449db362(&local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147833494 FUN_147833494 body=522 status=ok
// SIG undefined FUN_147833494(void)

void FUN_147833494(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_90;
  pvVar1 = (void *)*param_2;
  local_a0 = param_1;
  if (lVar3 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,pvVar1,lVar3 * 2);
  }
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_80;
  pvVar1 = (void *)*param_3;
  if (lVar3 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar1,lVar3 * 2);
  }
  local_78[0] = (code *)0x0;
  plVar2 = (longlong *)FUN_14001cc68(0x30,8);
  pvVar1 = local_98;
  *plVar2 = (longlong)&PTR_FUN_14a5ad1f0;
  plVar2[1] = local_a0;
  plVar2[2] = 0;
  lVar3 = (longlong)local_90;
  *(int *)(plVar2 + 3) = local_90;
  local_68 = plVar2;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)plVar2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(plVar2 + 2,local_90,0);
    memcpy((void *)plVar2[2],pvVar1,lVar3 * 2);
  }
  pvVar1 = local_88;
  plVar2[4] = 0;
  lVar3 = (longlong)local_80;
  *(int *)(plVar2 + 5) = local_80;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)plVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(plVar2 + 4,local_80,0);
    memcpy((void *)plVar2[4],pvVar1,lVar3 * 2);
  }
  if (plVar2 != (longlong *)&DAT_fffffffffffffff8) {
    local_78[0] = FUN_14338ee40;
  }
  FUN_1478336ec(param_1,param_4,local_78);
  if (local_78[0] != (code *)0x0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478336a6 FUN_1478336a6 body=68 status=ok
// SIG undefined FUN_1478336a6(void)

void FUN_1478336a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  FUN_147833494(0,&local_18,param_2,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478336ec FUN_1478336ec body=204 status=ok
// SIG undefined FUN_1478336ec(void)

void FUN_1478336ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_80 = 0;
  FUN_147839a2e(&local_88);
  local_78[0] = (undefined1 *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_FUN_14a5ad1d0;
  local_50 = 0;
  local_48 = 0;
  FUN_147839a2e(&local_50,&local_88);
  local_78[0] = &LAB_147839ab2;
  FUN_1478390d6(param_1,param_3,local_78);
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  FUN_1449db362(&local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478337c4 FUN_1478337c4 body=522 status=ok
// SIG undefined FUN_1478337c4(void)

void FUN_1478337c4(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_90;
  pvVar1 = (void *)*param_2;
  local_a0 = param_1;
  if (lVar3 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,pvVar1,lVar3 * 2);
  }
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_80;
  pvVar1 = (void *)*param_3;
  if (lVar3 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar1,lVar3 * 2);
  }
  local_78[0] = (code *)0x0;
  plVar2 = (longlong *)FUN_14001cc68(0x30,8);
  pvVar1 = local_98;
  *plVar2 = (longlong)&PTR_FUN_14a5ad2d0;
  plVar2[1] = local_a0;
  plVar2[2] = 0;
  lVar3 = (longlong)local_90;
  *(int *)(plVar2 + 3) = local_90;
  local_68 = plVar2;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)plVar2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(plVar2 + 2,local_90,0);
    memcpy((void *)plVar2[2],pvVar1,lVar3 * 2);
  }
  pvVar1 = local_88;
  plVar2[4] = 0;
  lVar3 = (longlong)local_80;
  *(int *)(plVar2 + 5) = local_80;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)plVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(plVar2 + 4,local_80,0);
    memcpy((void *)plVar2[4],pvVar1,lVar3 * 2);
  }
  if (plVar2 != (longlong *)&DAT_fffffffffffffff8) {
    local_78[0] = FUN_14338f782;
  }
  FUN_147833a1c(param_1,param_4,local_78);
  if (local_78[0] != (code *)0x0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478339d6 FUN_1478339d6 body=68 status=ok
// SIG undefined FUN_1478339d6(void)

void FUN_1478339d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  FUN_1478337c4(0,&local_18,param_2,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147833a1c FUN_147833a1c body=204 status=ok
// SIG undefined FUN_147833a1c(void)

void FUN_147833a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_80 = 0;
  FUN_14783a4ec(&local_88);
  local_78[0] = (undefined1 *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_FUN_14a5ad2b0;
  local_50 = 0;
  local_48 = 0;
  FUN_14783a4ec(&local_50,&local_88);
  local_78[0] = &LAB_14783a570;
  FUN_147839b96(param_1,param_3,local_78);
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  FUN_1449db362(&local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147833aea FUN_147833aea body=90 status=ok
// SIG undefined FUN_147833aea(void)

void FUN_147833aea(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  (**(code **)(*param_1 + 0xd0))(0,local_28,param_2,param_3);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147833b46 FUN_147833b46 body=30 status=ok
// SIG undefined FUN_147833b46(void)

void FUN_147833b46(longlong *param_1)

{
  (**(code **)(*param_1 + 200))();
  return;
}



// FUNCTION 147833b64 FUN_147833b64 body=509 status=ok
// SIG undefined FUN_147833b64(void)

void FUN_147833b64(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_90;
  pvVar1 = (void *)*param_2;
  local_a0 = param_1;
  if (lVar3 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,pvVar1,lVar3 * 2);
  }
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_80;
  pvVar1 = (void *)*param_3;
  if (lVar3 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar1,lVar3 * 2);
  }
  local_78[0] = (code *)0x0;
  plVar2 = (longlong *)FUN_14001cc68(0x30,8);
  pvVar1 = local_98;
  *plVar2 = (longlong)&PTR_FUN_14a5ad3b0;
  plVar2[1] = local_a0;
  plVar2[2] = 0;
  lVar3 = (longlong)local_90;
  *(int *)(plVar2 + 3) = local_90;
  local_68 = plVar2;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)plVar2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(plVar2 + 2,local_90,0);
    memcpy((void *)plVar2[2],pvVar1,lVar3 * 2);
  }
  pvVar1 = local_88;
  plVar2[4] = 0;
  lVar3 = (longlong)local_80;
  *(int *)(plVar2 + 5) = local_80;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)plVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(plVar2 + 4,local_80,0);
    memcpy((void *)plVar2[4],pvVar1,lVar3 * 2);
  }
  if (plVar2 != (longlong *)&DAT_fffffffffffffff8) {
    local_78[0] = FUN_14339020e;
  }
  FUN_147833d62(param_1,param_5,local_78);
  if (local_78[0] != (code *)0x0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147833d62 FUN_147833d62 body=204 status=ok
// SIG undefined FUN_147833d62(void)

void FUN_147833d62(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_80 = 0;
  FUN_14783af5a(&local_88);
  local_78[0] = (undefined1 *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_FUN_14a5ad390;
  local_50 = 0;
  local_48 = 0;
  FUN_14783af5a(&local_50,&local_88);
  local_78[0] = &LAB_14783afde;
  FUN_14783a614(param_1,param_3,local_78);
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  FUN_1449db362(&local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147833e3a FUN_147833e3a body=332 status=ok
// SIG undefined FUN_147833e3a(void)

void FUN_147833e3a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined ***pppuVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_80;
  pvVar1 = (void *)*param_2;
  local_90 = param_1;
  if (lVar3 == 0) {
    local_7c = 0;
    iVar4 = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar1,lVar3 * 2);
    iVar4 = local_80;
  }
  pvVar1 = local_88;
  local_78[0] = (code *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_FUN_14a5ad490;
  local_48 = (void *)0x0;
  local_50 = local_90;
  local_40 = iVar4;
  if (iVar4 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,iVar4,0);
    memcpy(local_48,pvVar1,(longlong)iVar4 * 2);
  }
  local_78[0] = FUN_143390da4;
  FUN_147833f90(param_1,param_3,local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar2 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar2 = &local_58;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147833f90 FUN_147833f90 body=204 status=ok
// SIG undefined FUN_147833f90(void)

void FUN_147833f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_80 = 0;
  FUN_14783bab8(&local_88);
  local_78[0] = (undefined1 *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_FUN_14a5ad470;
  local_50 = 0;
  local_48 = 0;
  FUN_14783bab8(&local_50,&local_88);
  local_78[0] = &LAB_14783bb3c;
  FUN_14783b15c(param_1,param_3,local_78);
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  FUN_1449db362(&local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147834068 FUN_147834068 body=527 status=ok
// SIG undefined FUN_147834068(void)

void FUN_147834068(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_90;
  pvVar1 = (void *)*param_2;
  local_a0 = param_1;
  if (lVar3 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,pvVar1,lVar3 * 2);
  }
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_80;
  pvVar1 = (void *)*param_3;
  if (lVar3 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar1,lVar3 * 2);
  }
  local_78[0] = (code *)0x0;
  plVar2 = (longlong *)FUN_14001cc68(0x30,8);
  pvVar1 = local_98;
  *plVar2 = (longlong)&PTR_FUN_14a5ad570;
  plVar2[1] = local_a0;
  plVar2[2] = 0;
  lVar3 = (longlong)local_90;
  *(int *)(plVar2 + 3) = local_90;
  local_68 = plVar2;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)plVar2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(plVar2 + 2,local_90,0);
    memcpy((void *)plVar2[2],pvVar1,lVar3 * 2);
  }
  pvVar1 = local_88;
  plVar2[4] = 0;
  lVar3 = (longlong)local_80;
  *(int *)(plVar2 + 5) = local_80;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)plVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(plVar2 + 4,local_80,0);
    memcpy((void *)plVar2[4],pvVar1,lVar3 * 2);
  }
  if (plVar2 != (longlong *)&DAT_fffffffffffffff8) {
    local_78[0] = FUN_1433913d6;
  }
  FUN_14783427e(param_1,0x13,param_4,local_78);
  if (local_78[0] != (code *)0x0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783427e FUN_14783427e body=209 status=ok
// SIG undefined FUN_14783427e(void)

void FUN_14783427e(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined ***pppuVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_80 = 0;
  FUN_14783c4ee(&local_88,param_3);
  local_78[0] = (undefined1 *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_FUN_14a5ad550;
  local_50 = 0;
  local_48 = 0;
  FUN_14783c4ee(&local_50,&local_88);
  local_78[0] = &LAB_14783c572;
  FUN_14783bbe0(param_1,param_2,param_4,local_78);
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  FUN_1449db362(&local_88);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783435a FUN_14783435a body=527 status=ok
// SIG undefined FUN_14783435a(void)

void FUN_14783435a(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_90;
  pvVar1 = (void *)*param_2;
  local_a0 = param_1;
  if (lVar3 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,pvVar1,lVar3 * 2);
  }
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_80;
  pvVar1 = (void *)*param_3;
  if (lVar3 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar1,lVar3 * 2);
  }
  local_78[0] = (code *)0x0;
  plVar2 = (longlong *)FUN_14001cc68(0x30,8);
  pvVar1 = local_98;
  *plVar2 = (longlong)&PTR_FUN_14a5ad590;
  plVar2[1] = local_a0;
  plVar2[2] = 0;
  lVar3 = (longlong)local_90;
  *(int *)(plVar2 + 3) = local_90;
  local_68 = plVar2;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)plVar2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(plVar2 + 2,local_90,0);
    memcpy((void *)plVar2[2],pvVar1,lVar3 * 2);
  }
  pvVar1 = local_88;
  plVar2[4] = 0;
  lVar3 = (longlong)local_80;
  *(int *)(plVar2 + 5) = local_80;
  if (lVar3 == 0) {
    *(undefined4 *)((longlong)plVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(plVar2 + 4,local_80,0);
    memcpy((void *)plVar2[4],pvVar1,lVar3 * 2);
  }
  if (plVar2 != (longlong *)&DAT_fffffffffffffff8) {
    local_78[0] = FUN_143391838;
  }
  FUN_14783427e(param_1,0x12,param_4,local_78);
  if (local_78[0] != (code *)0x0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147834578 FUN_147834578 body=87 status=ok
// SIG undefined FUN_147834578(void)

void FUN_147834578(longlong param_1)

{
  if (*(int *)(param_1 + 0x9c) < 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_144893a1c(param_1 + 0x90,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}



// FUNCTION 1478345d0 FUN_1478345d0 body=409 status=ok
// SIG undefined FUN_1478345d0(void)

void FUN_1478345d0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined ***pppuVar7;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  longlong *local_a8;
  longlong local_98 [4];
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(char *)(param_1 + 0x3b8) == '\x01') && (iVar1 = *(int *)(param_1 + 0x3a0), iVar1 != 0)) {
    uVar2 = *(undefined4 *)(param_1 + 0xc0);
    uVar3 = *(undefined4 *)(param_1 + 0x154);
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad640;
    local_78[0] = FUN_143392b7e;
    lVar5 = *(longlong *)(param_1 + 0x398);
    uVar4 = *(undefined4 *)(param_1 + 0x3a4);
    *(undefined8 *)(param_1 + 0x398) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    local_b8[0] = (code *)0x0;
    local_50 = param_1;
    local_a8 = (longlong *)FUN_14001cc68(0x28,8);
    *local_a8 = (longlong)&PTR_FUN_14a5ad5f0;
    local_a8[1] = param_1;
    *(undefined4 *)(local_a8 + 2) = uVar3;
    *(undefined4 *)((longlong)local_a8 + 0x14) = uVar2;
    local_a8[3] = lVar5;
    *(int *)(local_a8 + 4) = iVar1;
    *(undefined4 *)((longlong)local_a8 + 0x24) = uVar4;
    if (local_a8 + 1 != (longlong *)0x0) {
      local_b8[0] = FUN_143392344;
    }
    FUN_147832bcc(param_1,9,local_b8,local_78);
    if (local_b8[0] != (code *)0x0) {
      plVar6 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar6 = local_98;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (local_78[0] != (code *)0x0) {
      pppuVar7 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar7 = &local_58;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    *(undefined4 *)(param_1 + 0x3a0) = 0;
    if (-1 < *(int *)(param_1 + 0x3a4)) goto LAB_147834628;
  }
  else {
    *(undefined4 *)(param_1 + 0x3a0) = 0;
    if (*(int *)(param_1 + 0x3a4) == 0) goto LAB_147834628;
  }
  FUN_144893a1c(param_1 + 0x398,0);
LAB_147834628:
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783476a FUN_14783476a body=381 status=ok
// SIG undefined FUN_14783476a(void)

void FUN_14783476a(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 10;
  local_50 = *(undefined8 **)(param_1 + 0x18);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_58 = 0;
  }
  else {
    iVar7 = *(int *)(local_50 + 1);
    local_58 = 0;
    do {
      if (iVar7 == 0) {
        local_50 = (undefined8 *)0x0;
        goto LAB_1478347aa;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 1);
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar9);
    local_58 = *(undefined8 *)(param_1 + 0x10);
  }
LAB_1478347aa:
  local_34 = param_2;
  plVar8 = (longlong *)FUN_14001cc68(0x1a0,0x10);
  local_68 = param_3;
  local_60 = param_4;
  FUN_14783d47c(plVar8,&local_34,&local_58,&local_38);
  plVar1 = plVar8 + 2;
  local_48 = plVar1;
  local_40 = plVar8;
  FUN_14783d78e(&local_48,plVar1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar7 + 1U) {
    FUN_147835e0c((longlong *)(param_1 + 0x188),iVar7);
  }
  plVar6 = local_40;
  lVar4 = *(longlong *)(param_1 + 0x188);
  *(longlong **)(lVar4 + (longlong)iVar7 * 0x10) = plVar1;
  *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar8;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_50 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478348fe FUN_1478348fe body=222 status=ok
// SIG undefined FUN_1478348fe(void)

void FUN_1478348fe(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_143389068();
  if (*(char *)(param_1 + 0x178) == '\0') {
    if (*(char *)(param_1 + 0x3b8) == '\x02') {
      if ((longlong)*(int *)(param_1 + 400) != 0) {
        lVar2 = 0;
        do {
          if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x188) + lVar2) + 0x18) == 5) {
            return;
          }
          lVar2 = lVar2 + 0x10;
        } while ((longlong)*(int *)(param_1 + 400) * 0x10 != lVar2);
      }
      if ((*(longlong *)(param_1 + 0x198) == 0) ||
         (*(int *)(*(longlong *)(param_1 + 0x198) + 0x18) != 5)) {
        uVar1 = *(uint *)(param_1 + 0x17c);
        if (uVar1 != 0) {
          if ((*(uint *)(param_1 + 0x150) <= *(uint *)(param_1 + 0x154)) &&
             (uVar1 <= *(uint *)(param_1 + 0x154) && *(uint *)(param_1 + 0x150) <= uVar1)) {
            *(undefined4 *)(param_1 + 0x17c) = 0;
          }
        }
        if ((*(int *)(param_1 + 0x148) <= *(int *)(param_1 + 0x160)) &&
           (*(char *)(param_1 + 0xf0) == '\0')) {
          *(undefined1 *)(param_1 + 0x2fc) = 1;
        }
        FUN_143389170(param_1);
        FUN_147834a7e(param_1);
        return;
      }
    }
    else if (*(char *)(param_1 + 0x3b8) == '\x01') {
      FUN_1478349dc(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1478349dc FUN_1478349dc body=161 status=ok
// SIG undefined FUN_1478349dc(void)

void FUN_1478349dc(longlong param_1)

{
  float fVar1;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x198) == 0) && (*(int *)(param_1 + 400) < 1)) {
    fVar1 = *DAT_14cabd2a8;
    QueryPerformanceCounter(&local_38);
    if ((double)fVar1 <
        ((double)local_38.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 0x168)) {
      FUN_14338832a(param_1,*(undefined4 *)(param_1 + 0xc0));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147834a7e FUN_147834a7e body=395 status=ok
// SIG undefined FUN_147834a7e(void)

void FUN_147834a7e(longlong param_1)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  undefined1 *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  LARGE_INTEGER local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((*(longlong *)(param_1 + 0x198) == 0) && (*(int *)(param_1 + 400) < 1)) &&
     (*(char *)(param_1 + 0xf0) == '\x01')) {
    QueryPerformanceCounter(local_68);
    if (10.0 < ((double)local_68[0].QuadPart * DAT_14c83f420 + 16777216.0) -
               *(double *)(param_1 + 0x170)) {
      uVar1 = *(undefined8 *)(param_1 + 0xe8);
      FUN_147832516(param_1,local_b8,param_1 + 0x3c0);
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a5ada80;
      local_68[0].QuadPart = (LONGLONG)&LAB_14339674c;
      local_98 = (undefined ***)0x0;
      local_88 = &PTR_LAB_14a5ada60;
      local_a8[0] = &LAB_1433966ee;
      local_80 = param_1;
      local_40 = param_1;
      local_38 = uVar1;
      FUN_147832bcc(param_1,0x10,local_a8);
      if (local_a8[0] != (undefined1 *)0x0) {
        pppuVar2 = local_98;
        if (local_98 == (undefined ***)0x0) {
          pppuVar2 = &local_88;
        }
        (*(code *)(*pppuVar2)[2])();
      }
      if ((undefined1 *)local_68[0].QuadPart != (undefined1 *)0x0) {
        pppuVar2 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar2 = &local_48;
        }
        (*(code *)(*pppuVar2)[2])();
      }
      QueryPerformanceCounter(local_68);
      *(double *)(param_1 + 0x170) = (double)local_68[0].QuadPart * DAT_14c83f420 + 16777216.0;
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147834c0a FUN_147834c0a body=207 status=ok
// SIG undefined FUN_147834c0a(void)

undefined8 * FUN_147834c0a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined2 *puVar7;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar6,puVar7);
  puVar4 = (undefined8 *)FUN_14783d934(param_1 + 1000,uVar2,param_2);
  if (*(int *)(puVar4 + 1) == 0) {
    plVar5 = (longlong *)FUN_14054d1d4();
    if (*(int *)(param_2 + 1) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5,puVar7,4);
    if (plVar5 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 0x30))(plVar5);
      iVar1 = *(int *)(puVar4 + 1);
      iVar6 = iVar1 + uVar3;
      *(int *)(puVar4 + 1) = iVar6;
      if ((uint)(*(int *)((longlong)puVar4 + 0xc) - iVar1) < uVar3) {
        FUN_1447403be(puVar4);
        iVar6 = *(int *)(puVar4 + 1);
      }
      (**(code **)(*plVar5 + 0x170))(plVar5,*puVar4,(longlong)iVar6);
      (**(code **)*plVar5)(plVar5,1);
    }
  }
  return puVar4;
}



// FUNCTION 147834cda FUN_147834cda body=114 status=ok
// SIG undefined FUN_147834cda(void)

undefined8 * FUN_147834cda(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  
  plVar1 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_3 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_3;
  }
  uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,puVar4,0x18);
  *param_2 = uVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_149f02130;
  puVar3[2] = uVar2;
  param_2[1] = puVar3;
  return param_2;
}



// FUNCTION 147834d4c FUN_147834d4c body=114 status=ok
// SIG undefined FUN_147834d4c(void)

undefined8 * FUN_147834d4c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  
  plVar1 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_3 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_3;
  }
  uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,puVar4,0x10);
  *param_2 = uVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_149f02130;
  puVar3[2] = uVar2;
  param_2[1] = puVar3;
  return param_2;
}



// FUNCTION 147834dbe FUN_147834dbe body=324 status=ok
// SIG undefined FUN_147834dbe(void)

undefined8 * FUN_147834dbe(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  char cVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [2];
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_1401aeb9c(param_3);
  if (cVar2 == '\0') {
    *param_1 = 0;
    iVar1 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140056680(local_58,L".replay");
    local_48 = L"";
    local_38 = L"";
    if (*(int *)(param_3 + 1) != 0) {
      local_38 = (wchar_t *)*param_3;
    }
    if (*(int *)(param_2 + 1) != 0) {
      local_48 = (wchar_t *)*param_2;
    }
    uVar4 = 0;
    local_40 = 0;
    if (local_48 != (wchar_t *)0x0) {
      sVar3 = wcslen(local_48);
      local_40 = (int)sVar3;
    }
    if (local_38 != (wchar_t *)0x0) {
      sVar3 = wcslen(local_38);
      uVar4 = (int)sVar3;
    }
    local_30 = uVar4;
    FUN_140bee87a(local_68,&local_48,2);
    FUN_1401c7f3e(param_1,local_68,local_58);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147834f0c FUN_147834f0c body=414 status=ok
// SIG undefined FUN_147834f0c(void)

void FUN_147834f0c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0xf1) == '\x01') {
    lVar4 = (longlong)*(int *)(param_1 + 0x108);
    if ((-1 < lVar4) && (*(int *)(param_1 + 0x108) < *(int *)(param_1 + 0x118))) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x10 + lVar4 * 0x18);
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x110) + 4 + lVar4 * 0x18);
      local_c8 = 0;
      local_c0 = 0;
      local_d0 = param_1;
      FUN_14783df50(&local_c8);
      local_78 = (undefined **)0x0;
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_FUN_14a5ad8e0;
      local_50 = local_d0;
      local_48 = 0;
      local_40 = 0;
      FUN_14783df50(&local_48,&local_c8);
      local_78 = (undefined **)FUN_1433952a0;
      local_a8 = (undefined ***)0x0;
      local_98 = &PTR_LAB_14a5ad8c0;
      local_b8[0] = FUN_1433950fc;
      local_90 = param_1;
      local_88 = uVar1;
      local_80 = uVar3;
      FUN_14783dfd4(param_1,local_b8,&local_78);
      if (local_b8[0] != (code *)0x0) {
        pppuVar5 = local_a8;
        if (local_a8 == (undefined ***)0x0) {
          pppuVar5 = &local_98;
        }
        (*(code *)(*pppuVar5)[2])();
      }
      if (local_78 != (undefined **)0x0) {
        pppuVar5 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar5 = &local_58;
        }
        (*(code *)(*pppuVar5)[2])();
      }
      FUN_1449db362(&local_c8);
      goto LAB_147834f8a;
    }
  }
  local_70 = 6;
  local_78 = &PTR_FUN_14a5abbb0;
  plVar2 = (longlong *)*param_2;
  if (plVar2 != (longlong *)0x0 && (int)param_2[1] != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_78);
  }
LAB_147834f8a:
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478350ac FUN_1478350ac body=212 status=ok
// SIG undefined FUN_1478350ac(void)

void FUN_1478350ac(undefined8 param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  undefined ***local_88;
  undefined **local_78;
  undefined *local_70;
  code *local_58;
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a5ad940;
  local_58 = FUN_143395978;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = &DAT_143395976;
  local_98[0] = FUN_140d11fbe;
  local_30 = param_1;
  FUN_147832d50(param_1,1,local_98);
  if (local_98[0] != (code *)0x0) {
    pppuVar1 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar1 = &local_78;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_58 != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783518a FUN_14783518a body=84 status=ok
// SIG undefined FUN_14783518a(void)

undefined4 FUN_14783518a(longlong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  cVar3 = (**(code **)(*param_1 + 0x168))();
  if (cVar3 == '\0') {
    uVar1 = *(uint *)(param_1 + 0x2a);
    uVar2 = *(uint *)((longlong)param_1 + 0x154);
    if ((uVar1 <= uVar2) && (param_2 <= uVar2 && uVar1 <= param_2)) {
      return CONCAT31((int3)(uVar2 >> 8),param_3 <= uVar2 && uVar1 <= param_3);
    }
  }
  return 0;
}



// FUNCTION 147835228 FUN_147835228 body=381 status=ok
// SIG undefined FUN_147835228(void)

void FUN_147835228(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 7;
  local_50 = *(undefined8 **)(param_1 + 0x18);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_58 = 0;
  }
  else {
    iVar7 = *(int *)(local_50 + 1);
    local_58 = 0;
    do {
      if (iVar7 == 0) {
        local_50 = (undefined8 *)0x0;
        goto LAB_147835268;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 1);
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar9);
    local_58 = *(undefined8 *)(param_1 + 0x10);
  }
LAB_147835268:
  local_34 = param_2;
  plVar8 = (longlong *)FUN_14001cc68(400,0x10);
  local_68 = param_3;
  local_60 = param_4;
  FUN_14783e8e6(plVar8,&local_34,&local_58,&local_38);
  plVar1 = plVar8 + 2;
  local_48 = plVar1;
  local_40 = plVar8;
  FUN_14783f12a(&local_48,plVar1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar7 + 1U) {
    FUN_147835e0c((longlong *)(param_1 + 0x188),iVar7);
  }
  plVar6 = local_40;
  lVar4 = *(longlong *)(param_1 + 0x188);
  *(longlong **)(lVar4 + (longlong)iVar7 * 0x10) = plVar1;
  *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar8;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_50 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478353bc FUN_1478353bc body=464 status=ok
// SIG undefined FUN_1478353bc(void)

void FUN_1478353bc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    plVar1 = (longlong *)(param_1 + 0x20);
    lVar2 = param_1 + 0x30;
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      local_80 = 0x100000000;
      local_70 = 0xffffffff;
      local_68 = 0;
      iVar12 = 0;
      local_78 = lVar2;
      if (*(int *)(param_1 + 0x48) != 0) {
        FUN_1449c0562(&local_80);
        iVar12 = *(int *)(param_1 + 0x48);
      }
      local_90 = local_70;
      uVar6 = local_90;
      local_88 = local_68;
      local_84 = local_64;
      local_a0 = local_80;
      local_98 = local_78;
      local_90._4_4_ = (int)((ulonglong)local_70 >> 0x20);
      local_a8 = plVar1;
      local_90 = uVar6;
      if ((local_90._4_4_ == iVar12) && (local_78 == lVar2)) {
        uVar11 = 0;
        iVar10 = -1;
      }
      else {
        uVar11 = 0;
        iVar10 = -1;
        uVar13 = 0;
        uVar14 = 0;
        iVar8 = local_90._4_4_;
        do {
          lVar5 = *(longlong *)(*local_a8 + 8 + (longlong)iVar8 * 0x20);
          if (lVar5 != 0) {
            dVar3 = *(double *)(lVar5 + 0x10);
            if ((iVar10 == -1) ||
               (dVar3 <= (double)CONCAT44(uVar14,uVar13) && (double)CONCAT44(uVar14,uVar13) != dVar3
               )) {
              iVar10 = *(int *)(*local_a8 + (longlong)iVar8 * 0x20);
              uVar13 = SUB84(dVar3,0);
              uVar14 = (undefined4)((ulonglong)dVar3 >> 0x20);
            }
            uVar11 = uVar11 + *(int *)(lVar5 + 8);
          }
          local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
          FUN_1449c0562(&local_a0);
          iVar8 = local_90._4_4_;
        } while (local_a8 != plVar1 || (local_98 != lVar2 || local_90._4_4_ != iVar12));
      }
      lVar5 = DAT_14cabd260;
      if (*(int *)(lVar4 + 0xc60) == 0x40000002) {
        uVar9 = 0;
      }
      else {
        bVar7 = FUN_144a61b4f();
        uVar9 = (ulonglong)(bVar7 ^ 1);
      }
    } while ((*(uint *)(lVar5 + uVar9 * 4) < uVar11) &&
            (FUN_14783f1d2(plVar1,iVar10), *(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)));
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783558e FUN_14783558e body=277 status=ok
// SIG undefined FUN_14783558e(void)

void FUN_14783558e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1c) == 0) && (lVar9 = *(longlong *)(param_1 + 8), lVar9 != 0)) {
    pcVar4 = *(code **)(param_1 + 0x70);
    if (pcVar4 != (code *)0x0) {
      plVar8 = (longlong *)(param_1 + 0x90);
      if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0x80);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7);
      lVar9 = *(longlong *)(param_1 + 8);
    }
    plStack_30 = *(longlong **)(param_1 + 0x28);
    if (plStack_30 == (longlong *)0x0) {
LAB_147835633:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plStack_30[1];
      do {
        if (iVar6 == 0) goto LAB_147835633;
        LOCK();
        iVar5 = (int)plStack_30[1];
        bVar10 = iVar6 == iVar5;
        if (bVar10) {
          *(int *)(plStack_30 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_38 = *(undefined8 *)(param_1 + 0x20);
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      bVar10 = false;
    }
    plVar8 = plStack_30;
    FUN_14338a410(lVar9,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar10) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478356ac FUN_1478356ac body=294 status=ok
// SIG undefined FUN_1478356ac(void)

void FUN_1478356ac(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  void *_Src;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_2 + 0x31) == '\x01') {
    puVar1 = (undefined4 *)(param_1 + 0xc0);
    local_58 = (void *)0x0;
    uVar2 = *(uint *)(param_1 + 0x100);
    _Src = *(void **)(param_1 + 0xf8);
    local_50 = CONCAT44(local_50._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      local_50 = (ulonglong)uVar2;
    }
    else {
      FUN_1447a127e(&local_58,uVar2,0);
      memcpy(local_58,_Src,(longlong)(int)uVar2);
    }
    uVar3 = *puVar1;
    FUN_1478357d4(puVar1,param_2);
    if (((param_3 & 1) == 0) && (*puVar1 = uVar3, (void **)(param_1 + 0xf8) != &local_58)) {
      if (*(longlong *)(param_1 + 0xf8) != 0) {
        FUN_1400020a8();
      }
      *(void **)(param_1 + 0xf8) = local_58;
      local_58 = (void *)0x0;
      *(undefined4 *)(param_1 + 0x100) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x104) = local_50._4_4_;
      local_50 = 0;
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478357d4 FUN_1478357d4 body=136 status=ok
// SIG undefined FUN_1478357d4(void)

undefined8 * FUN_1478357d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  FUN_1447a122a(param_1 + 7,param_2 + 7);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  FUN_1478361ac(param_1 + 10,param_2 + 10);
  FUN_147836206(param_1 + 0xc,param_2 + 0xc);
  FUN_147836206(param_1 + 0xe,param_2 + 0xe);
  FUN_147836266(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}



// FUNCTION 147835860 FUN_147835860 body=329 status=ok
// SIG undefined FUN_147835860(void)

longlong * FUN_147835860(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = (longlong *)FUN_14001cc68(0x4d8,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a5adc60;
  plVar1 = plVar7 + 2;
  FUN_147831f72(plVar1);
  local_48 = plVar1;
  local_40 = plVar7;
  FUN_14783f580(&local_48,plVar1);
  plVar6 = local_40;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar4 + 1U) {
    FUN_14783f628((longlong *)(param_1 + 0x10),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar1;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar7;
  if (plVar7 == (longlong *)0x0) {
    *param_2 = 0x10;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar7;
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478359ac FUN_1478359ac body=87 status=ok
// SIG undefined FUN_1478359ac(void)

void FUN_1478359ac(void)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  local_18 = 0;
  FUN_1478321fa();
  FUN_143389570(&DAT_14cabd320,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147835a0c FUN_147835a0c body=38 status=ok
// SIG undefined FUN_147835a0c(void)

undefined8 FUN_147835a0c(undefined8 param_1,int param_2)

{
  FUN_1478322e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147835a3c FUN_147835a3c body=89 status=ok
// SIG undefined FUN_147835a3c(void)

undefined8 * FUN_147835a3c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x3c8);
  _Src = *(void **)(param_1 + 0x3c0);
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



// FUNCTION 147835aa0 FUN_147835aa0 body=37 status=ok
// SIG undefined FUN_147835aa0(void)

undefined8 FUN_147835aa0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 6;
  if (*(int *)(param_1 + 0x3c8) < 2) {
    FUN_144a787a6(param_1 + 0x3d0);
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 147835ac6 FUN_147835ac6 body=29 status=ok
// SIG undefined FUN_147835ac6(void)

undefined8 FUN_147835ac6(longlong param_1,undefined8 param_2)

{
  FUN_144a787a6(param_2,param_1 + 0x3d0);
  return 0;
}



// FUNCTION 147835b10 FUN_147835b10 body=68 status=ok
// SIG undefined FUN_147835b10(void)

undefined8 * FUN_147835b10(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ac9f0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147835b54 FUN_147835b54 body=38 status=ok
// SIG undefined FUN_147835b54(void)

void FUN_147835b54(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147835b7a(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 147835b7a FUN_147835b7a body=62 status=ok
// SIG undefined FUN_147835b7a(void)

void FUN_147835b7a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147835bb8 FUN_147835bb8 body=52 status=ok
// SIG undefined FUN_147835bb8(void)

void FUN_147835bb8(longlong *param_1)

{
  FUN_147835bec();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147835bec FUN_147835bec body=343 status=ok
// SIG undefined FUN_147835bec(void)

void FUN_147835bec(longlong *param_1)

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



// FUNCTION 147835d44 FUN_147835d44 body=80 status=ok
// SIG undefined FUN_147835d44(void)

longlong * FUN_147835d44(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_147835b54(*param_1,(int)param_1[1]);
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



// FUNCTION 147835d94 FUN_147835d94 body=29 status=ok
// SIG undefined FUN_147835d94(void)

undefined8 FUN_147835d94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147835db2 FUN_147835db2 body=89 status=ok
// SIG undefined FUN_147835db2(void)

void FUN_147835db2(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 147835e0c FUN_147835e0c body=132 status=ok
// SIG undefined FUN_147835e0c(void)

void FUN_147835e0c(longlong param_1,int param_2)

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



// FUNCTION 147835e92 FUN_147835e92 body=191 status=ok
// SIG undefined FUN_147835e92(void)

undefined8 *
FUN_147835e92(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a5acc60;
  uVar3 = *param_3;
  local_28 = *param_2;
  plVar4 = (longlong *)param_2[1];
  local_20 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    local_38 = param_5;
    FUN_147835f52(param_1 + 2,&local_28,uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = param_5;
    FUN_147835f52(param_1 + 2,&local_28,uVar3);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147835f52 FUN_147835f52 body=188 status=ok
// SIG undefined FUN_147835f52(void)

void FUN_147835f52(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_LAB_14a5acca0;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a5acc80;
  param_1[6] = *param_4;
  param_1[8] = param_4[2];
  param_4[2] = 0;
  uVar2 = param_4[4];
  uVar3 = param_4[5];
  uVar4 = param_4[7];
  param_1[0xc] = param_4[6];
  param_1[0xd] = uVar4;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  if (param_1[6] != 0) {
    *param_4 = 0;
  }
  param_1[0xe] = *param_5;
  param_1[0x10] = param_5[2];
  param_5[2] = 0;
  uVar2 = param_5[4];
  uVar3 = param_5[5];
  uVar4 = param_5[7];
  param_1[0x14] = param_5[6];
  param_1[0x15] = uVar4;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  if (param_1[0xe] != 0) {
    *param_5 = 0;
  }
  return;
}



// FUNCTION 147836018 FUN_147836018 body=29 status=ok
// SIG undefined FUN_147836018(void)

undefined8 FUN_147836018(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147836036 FUN_147836036 body=38 status=ok
// SIG undefined FUN_147836036(void)

undefined8 FUN_147836036(undefined8 param_1,int param_2)

{
  FUN_147836062();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147836062 FUN_147836062 body=162 status=ok
// SIG undefined FUN_147836062(void)

void FUN_147836062(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5acc80;
  if (param_1[0xe] != 0) {
    plVar3 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[6] != 0) {
    plVar3 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a5acca0;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x0001478360f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147836104 FUN_147836104 body=167 status=ok
// SIG undefined FUN_147836104(void)

void FUN_147836104(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_14783617f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_14783617f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14783617f:
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
                    /* WARNING: Could not recover jumptable at 0x00014783619f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1478361ac FUN_1478361ac body=89 status=ok
// SIG undefined FUN_1478361ac(void)

undefined8 * FUN_1478361ac(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478362c0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 147836206 FUN_147836206 body=95 status=ok
// SIG undefined FUN_147836206(void)

undefined8 * FUN_147836206(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147835b54(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147836334(param_1,iVar1);
      FUN_1478363a7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147836266 FUN_147836266 body=89 status=ok
// SIG undefined FUN_147836266(void)

undefined8 * FUN_147836266(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478364e4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 1478362c0 FUN_1478362c0 body=115 status=ok
// SIG undefined FUN_1478362c0(void)

void FUN_1478362c0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147836334 FUN_147836334 body=115 status=ok
// SIG undefined FUN_147836334(void)

void FUN_147836334(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478363a7 FUN_1478363a7 body=52 status=ok
// SIG undefined FUN_1478363a7(void)

void FUN_1478363a7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1478363dc(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 1478363dc FUN_1478363dc body=264 status=ok
// SIG undefined FUN_1478363dc(void)

undefined4 * FUN_1478363dc(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  pvVar2 = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  return param_1;
}



// FUNCTION 1478364e4 FUN_1478364e4 body=115 status=ok
// SIG undefined FUN_1478364e4(void)

void FUN_1478364e4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147836557 FUN_147836557 body=73 status=ok
// SIG undefined FUN_147836557(void)

void FUN_147836557(longlong param_1,int param_2)

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



// FUNCTION 1478365a0 FUN_1478365a0 body=21 status=ok
// SIG undefined FUN_1478365a0(void)

void FUN_1478365a0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 1478365b6 FUN_1478365b6 body=147 status=ok
// SIG undefined FUN_1478365b6(void)

void FUN_1478365b6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14783664a FUN_14783664a body=34 status=ok
// SIG undefined FUN_14783664a(void)

void FUN_14783664a(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  return;
}



// FUNCTION 14783666c FUN_14783666c body=147 status=ok
// SIG undefined FUN_14783666c(void)

void FUN_14783666c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147836700 FUN_147836700 body=18 status=ok
// SIG undefined FUN_147836700(void)

void FUN_147836700(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 147836712 FUN_147836712 body=147 status=ok
// SIG undefined FUN_147836712(void)

void FUN_147836712(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1478367a6 FUN_1478367a6 body=130 status=ok
// SIG undefined FUN_1478367a6(void)

void FUN_1478367a6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 14783682a FUN_14783682a body=366 status=ok
// SIG undefined FUN_14783682a(void)

void FUN_14783682a(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *(undefined8 **)(param_1 + 0x18);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_58 = 0;
  }
  else {
    iVar7 = *(int *)(local_50 + 1);
    local_58 = 0;
    do {
      if (iVar7 == 0) {
        local_50 = (undefined8 *)0x0;
        goto LAB_147836862;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 1);
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar9);
    local_58 = *(undefined8 *)(param_1 + 0x10);
  }
LAB_147836862:
  local_34 = param_2;
  plVar8 = (longlong *)FUN_14001cc68(0x180,0x10);
  local_68 = param_4;
  FUN_1478369ae(plVar8,&local_58,&local_34,param_3);
  plVar1 = plVar8 + 2;
  local_48 = plVar1;
  local_40 = plVar8;
  FUN_147837180(&local_48,plVar1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar7 + 1U) {
    FUN_147835e0c((longlong *)(param_1 + 0x188),iVar7);
  }
  plVar6 = local_40;
  lVar4 = *(longlong *)(param_1 + 0x188);
  *(longlong **)(lVar4 + (longlong)iVar7 * 0x10) = plVar1;
  *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar8;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_50 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478369ae FUN_1478369ae body=191 status=ok
// SIG undefined FUN_1478369ae(void)

undefined8 *
FUN_1478369ae(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a5accc0;
  uVar3 = *param_3;
  local_28 = *param_2;
  plVar4 = (longlong *)param_2[1];
  local_20 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    local_38 = param_5;
    FUN_147836a6e(param_1 + 2,&local_28,uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = param_5;
    FUN_147836a6e(param_1 + 2,&local_28,uVar3);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147836a6e FUN_147836a6e body=352 status=ok
// SIG undefined FUN_147836a6e(void)

undefined8 *
FUN_147836a6e(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_LAB_14a5acca0;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a5acce0;
  memset(param_1 + 6,0,0xc0);
  *(undefined4 *)(param_1 + 7) = 6;
  param_1[6] = &PTR_FUN_14a5ab538;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = *param_4;
  param_1[0x20] = param_4[2];
  param_4[2] = 0;
  uVar2 = param_4[4];
  uVar3 = param_4[5];
  uVar4 = param_4[7];
  param_1[0x24] = param_4[6];
  param_1[0x25] = uVar4;
  param_1[0x22] = uVar2;
  param_1[0x23] = uVar3;
  if (param_1[0x1e] != 0) {
    *param_4 = 0;
  }
  param_1[0x26] = *param_5;
  param_1[0x28] = param_5[2];
  param_5[2] = 0;
  uVar2 = param_5[4];
  uVar3 = param_5[5];
  uVar4 = param_5[7];
  param_1[0x2c] = param_5[6];
  param_1[0x2d] = uVar4;
  param_1[0x2a] = uVar2;
  param_1[0x2b] = uVar3;
  if (param_1[0x26] != 0) {
    *param_5 = 0;
  }
  return param_1;
}



// FUNCTION 147836bd8 FUN_147836bd8 body=29 status=ok
// SIG undefined FUN_147836bd8(void)

undefined8 FUN_147836bd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147836bf6 FUN_147836bf6 body=38 status=ok
// SIG undefined FUN_147836bf6(void)

undefined8 FUN_147836bf6(undefined8 param_1,int param_2)

{
  FUN_147836d3c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147836c1c FUN_147836c1c body=287 status=ok
// SIG undefined FUN_147836c1c(void)

void FUN_147836c1c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1c) == 0) && (lVar9 = *(longlong *)(param_1 + 8), lVar9 != 0)) {
    pcVar4 = *(code **)(param_1 + 0x130);
    if (pcVar4 != (code *)0x0) {
      plVar8 = (longlong *)(param_1 + 0x150);
      if (*(longlong **)(param_1 + 0x140) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0x140);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7,param_1 + 0x30);
      lVar9 = *(longlong *)(param_1 + 8);
    }
    plStack_30 = *(longlong **)(param_1 + 0x28);
    if (plStack_30 == (longlong *)0x0) {
LAB_147836ccb:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plStack_30[1];
      do {
        if (iVar6 == 0) goto LAB_147836ccb;
        LOCK();
        iVar5 = (int)plStack_30[1];
        bVar10 = iVar6 == iVar5;
        if (bVar10) {
          *(int *)(plStack_30 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_38 = *(undefined8 *)(param_1 + 0x20);
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      bVar10 = false;
    }
    plVar8 = plStack_30;
    FUN_14338a410(lVar9,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar10) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147836d3c FUN_147836d3c body=200 status=ok
// SIG undefined FUN_147836d3c(void)

void FUN_147836d3c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5acce0;
  if (param_1[0x26] != 0) {
    plVar3 = param_1 + 0x2a;
    if ((longlong *)param_1[0x28] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x28];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x1e] != 0) {
    plVar3 = param_1 + 0x22;
    if ((longlong *)param_1[0x20] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x20];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_147832492(param_1 + 9);
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a5acca0;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x000147836df9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147836e04 FUN_147836e04 body=139 status=ok
// SIG undefined FUN_147836e04(void)

void FUN_147836e04(undefined8 *param_1)

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
  plVar4 = param_1 + 0x1a;
  if ((longlong *)param_1[0x18] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[0x18];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  *(undefined4 *)(param_1[0x1e] + 0x80) = 0;
  FUN_140b576f0();
  FUN_147836e90(param_1 + 0x16);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147836e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147836e90 FUN_147836e90 body=92 status=ok
// SIG undefined FUN_147836e90(void)

void FUN_147836e90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000147836ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    return;
  }
  return;
}



// FUNCTION 147836eec FUN_147836eec body=65 status=ok
// SIG undefined FUN_147836eec(void)

void FUN_147836eec(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xf0);
  plVar3 = (longlong *)(lVar1 + 0x110);
  if (*(longlong **)(lVar1 + 0x100) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x100);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000147836f2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar1 + 0x30);
  return;
}



// FUNCTION 147836f6a FUN_147836f6a body=83 status=ok
// SIG undefined FUN_147836f6a(void)

undefined8 * FUN_147836f6a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5acd10;
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



// FUNCTION 147836fce FUN_147836fce body=12 status=ok
// SIG undefined FUN_147836fce(void)

void FUN_147836fce(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147836fd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147836fda FUN_147836fda body=83 status=ok
// SIG undefined FUN_147836fda(void)

undefined8 * FUN_147836fda(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5acd30;
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



// FUNCTION 14783702e FUN_14783702e body=220 status=ok
// SIG undefined FUN_14783702e(void)

void FUN_14783702e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*param_1 + 0x1c) == 0) {
    local_30 = *param_1;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14a5acd50;
      local_28 = (longlong *)0x0;
      local_58 = &LAB_14783710c;
      FUN_1407461b0(1);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = 0;
      local_38 = &PTR_LAB_14a5acd50;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_58 = &LAB_14783710c;
      local_28 = plVar3;
      FUN_1407461b0(1);
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
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783712c FUN_14783712c body=83 status=ok
// SIG undefined FUN_14783712c(void)

undefined8 * FUN_14783712c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5acd50;
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



// FUNCTION 147837180 FUN_147837180 body=167 status=ok
// SIG undefined FUN_147837180(void)

void FUN_147837180(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_1478371fb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_1478371fb;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1478371fb:
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
                    /* WARNING: Could not recover jumptable at 0x00014783721b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147837228 FUN_147837228 body=209 status=ok
// SIG undefined FUN_147837228(void)

void FUN_147837228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_80 = 0;
  FUN_1478367a6(&local_88);
  local_78[0] = (undefined1 *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_FUN_14a5acdb0;
  local_50 = 0;
  local_48 = 0;
  FUN_1478367a6(&local_50,&local_88);
  local_78[0] = &LAB_1478372fa;
  FUN_14783682a(param_1,5,param_3,local_78);
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  FUN_1449db362(&local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783731c FUN_14783731c body=59 status=ok
// SIG undefined FUN_14783731c(void)

longlong FUN_14783731c(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a5acdb0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  FUN_1478367a6(param_2 + 0x18,param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 14783735e FUN_14783735e body=12 status=ok
// SIG undefined FUN_14783735e(void)

void FUN_14783735e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147837367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14783736a FUN_14783736a body=52 status=ok
// SIG undefined FUN_14783736a(void)

undefined8 * FUN_14783736a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5acdb0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783739e FUN_14783739e body=48 status=ok
// SIG undefined FUN_14783739e(void)

void FUN_14783739e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1478373ce FUN_1478373ce body=191 status=ok
// SIG undefined FUN_1478373ce(void)

undefined8 *
FUN_1478373ce(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a5ace30;
  uVar3 = *param_3;
  local_28 = *param_2;
  plVar4 = (longlong *)param_2[1];
  local_20 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    local_38 = param_5;
    FUN_14783748e(param_1 + 2,&local_28,uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = param_5;
    FUN_14783748e(param_1 + 2,&local_28,uVar3);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783748e FUN_14783748e body=201 status=ok
// SIG undefined FUN_14783748e(void)

void FUN_14783748e(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_LAB_14a5acca0;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a5ace50;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[8] = *param_4;
  param_1[10] = param_4[2];
  param_4[2] = 0;
  uVar2 = param_4[4];
  uVar3 = param_4[5];
  uVar4 = param_4[7];
  param_1[0xe] = param_4[6];
  param_1[0xf] = uVar4;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  if (param_1[8] != 0) {
    *param_4 = 0;
  }
  param_1[0x10] = *param_5;
  param_1[0x12] = param_5[2];
  param_5[2] = 0;
  uVar2 = param_5[4];
  uVar3 = param_5[5];
  uVar4 = param_5[7];
  param_1[0x16] = param_5[6];
  param_1[0x17] = uVar4;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar3;
  if (param_1[0x10] != 0) {
    *param_5 = 0;
  }
  return;
}



// FUNCTION 147837562 FUN_147837562 body=29 status=ok
// SIG undefined FUN_147837562(void)

undefined8 FUN_147837562(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147837580 FUN_147837580 body=38 status=ok
// SIG undefined FUN_147837580(void)

undefined8 FUN_147837580(undefined8 param_1,int param_2)

{
  FUN_1478376c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478375a6 FUN_1478375a6 body=287 status=ok
// SIG undefined FUN_1478375a6(void)

void FUN_1478375a6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1c) == 0) && (lVar9 = *(longlong *)(param_1 + 8), lVar9 != 0)) {
    pcVar4 = *(code **)(param_1 + 0x80);
    if (pcVar4 != (code *)0x0) {
      plVar8 = (longlong *)(param_1 + 0xa0);
      if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0x90);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7,param_1 + 0x30);
      lVar9 = *(longlong *)(param_1 + 8);
    }
    plStack_30 = *(longlong **)(param_1 + 0x28);
    if (plStack_30 == (longlong *)0x0) {
LAB_147837655:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plStack_30[1];
      do {
        if (iVar6 == 0) goto LAB_147837655;
        LOCK();
        iVar5 = (int)plStack_30[1];
        bVar10 = iVar6 == iVar5;
        if (bVar10) {
          *(int *)(plStack_30 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_38 = *(undefined8 *)(param_1 + 0x20);
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      bVar10 = false;
    }
    plVar8 = plStack_30;
    FUN_14338a410(lVar9,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar10) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478376c6 FUN_1478376c6 body=165 status=ok
// SIG undefined FUN_1478376c6(void)

void FUN_1478376c6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5ace50;
  if (param_1[0x10] != 0) {
    plVar3 = param_1 + 0x14;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x12];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[8] != 0) {
    plVar3 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a5acca0;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x000147837760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14783776c FUN_14783776c body=56 status=ok
// SIG undefined FUN_14783776c(void)

void FUN_14783776c(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40);
  plVar3 = (longlong *)(lVar1 + 0x60);
  if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x50);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001478377a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar1 + 0x30);
  return;
}



// FUNCTION 1478377e0 FUN_1478377e0 body=83 status=ok
// SIG undefined FUN_1478377e0(void)

undefined8 * FUN_1478377e0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ace70;
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



// FUNCTION 147837844 FUN_147837844 body=12 status=ok
// SIG undefined FUN_147837844(void)

void FUN_147837844(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014783784d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147837850 FUN_147837850 body=83 status=ok
// SIG undefined FUN_147837850(void)

undefined8 * FUN_147837850(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ace90;
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



// FUNCTION 1478378a4 FUN_1478378a4 body=220 status=ok
// SIG undefined FUN_1478378a4(void)

void FUN_1478378a4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*param_1 + 0x1c) == 0) {
    local_30 = *param_1;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14a5aceb0;
      local_28 = (longlong *)0x0;
      local_58 = &LAB_147837982;
      FUN_1407461b0(1);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = 0;
      local_38 = &PTR_LAB_14a5aceb0;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_58 = &LAB_147837982;
      local_28 = plVar3;
      FUN_1407461b0(1);
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
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478379a2 FUN_1478379a2 body=83 status=ok
// SIG undefined FUN_1478379a2(void)

undefined8 * FUN_1478379a2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5aceb0;
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



// FUNCTION 1478379f6 FUN_1478379f6 body=167 status=ok
// SIG undefined FUN_1478379f6(void)

void FUN_1478379f6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_147837a71;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_147837a71;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_147837a71:
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
                    /* WARNING: Could not recover jumptable at 0x000147837a91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147837a9e FUN_147837a9e body=370 status=ok
// SIG undefined FUN_147837a9e(void)

void FUN_147837a9e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = 0xf;
  local_50 = *(undefined8 **)(param_1 + 0x18);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_58 = 0;
  }
  else {
    iVar7 = *(int *)(local_50 + 1);
    local_58 = 0;
    do {
      if (iVar7 == 0) {
        local_50 = (undefined8 *)0x0;
        goto LAB_147837ada;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 1);
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar9);
    local_58 = *(undefined8 *)(param_1 + 0x10);
  }
LAB_147837ada:
  plVar8 = (longlong *)FUN_14001cc68(0x180,0x10);
  local_68 = param_3;
  FUN_147837c26(plVar8,&local_58,&local_34,param_2);
  plVar1 = plVar8 + 2;
  local_48 = plVar1;
  local_40 = plVar8;
  FUN_147838308(&local_48,plVar1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar7 + 1U) {
    FUN_147835e0c((longlong *)(param_1 + 0x188),iVar7);
  }
  plVar6 = local_40;
  lVar4 = *(longlong *)(param_1 + 0x188);
  *(longlong **)(lVar4 + (longlong)iVar7 * 0x10) = plVar1;
  *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar8;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_50 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147837c26 FUN_147837c26 body=191 status=ok
// SIG undefined FUN_147837c26(void)

undefined8 *
FUN_147837c26(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a5acf30;
  uVar3 = *param_3;
  local_28 = *param_2;
  plVar4 = (longlong *)param_2[1];
  local_20 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    local_38 = param_5;
    FUN_147837ce6(param_1 + 2,&local_28,uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = param_5;
    FUN_147837ce6(param_1 + 2,&local_28,uVar3);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147837ce6 FUN_147837ce6 body=343 status=ok
// SIG undefined FUN_147837ce6(void)

undefined8 *
FUN_147837ce6(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_LAB_14a5acca0;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a5acf50;
  memset(param_1 + 6,0,0xb8);
  *(undefined4 *)(param_1 + 7) = 6;
  param_1[6] = &PTR_FUN_14a5ab5f0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = *param_4;
  param_1[0x20] = param_4[2];
  param_4[2] = 0;
  uVar2 = param_4[4];
  uVar3 = param_4[5];
  uVar4 = param_4[7];
  param_1[0x24] = param_4[6];
  param_1[0x25] = uVar4;
  param_1[0x22] = uVar2;
  param_1[0x23] = uVar3;
  if (param_1[0x1e] != 0) {
    *param_4 = 0;
  }
  param_1[0x26] = *param_5;
  param_1[0x28] = param_5[2];
  param_5[2] = 0;
  uVar2 = param_5[4];
  uVar3 = param_5[5];
  uVar4 = param_5[7];
  param_1[0x2c] = param_5[6];
  param_1[0x2d] = uVar4;
  param_1[0x2a] = uVar2;
  param_1[0x2b] = uVar3;
  if (param_1[0x26] != 0) {
    *param_5 = 0;
  }
  return param_1;
}



// FUNCTION 147837e48 FUN_147837e48 body=29 status=ok
// SIG undefined FUN_147837e48(void)

undefined8 FUN_147837e48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147837e66 FUN_147837e66 body=38 status=ok
// SIG undefined FUN_147837e66(void)

undefined8 FUN_147837e66(undefined8 param_1,int param_2)

{
  FUN_147837fac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147837e8c FUN_147837e8c body=287 status=ok
// SIG undefined FUN_147837e8c(void)

void FUN_147837e8c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1c) == 0) && (lVar9 = *(longlong *)(param_1 + 8), lVar9 != 0)) {
    pcVar4 = *(code **)(param_1 + 0x130);
    if (pcVar4 != (code *)0x0) {
      plVar8 = (longlong *)(param_1 + 0x150);
      if (*(longlong **)(param_1 + 0x140) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0x140);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7,param_1 + 0x30);
      lVar9 = *(longlong *)(param_1 + 8);
    }
    plStack_30 = *(longlong **)(param_1 + 0x28);
    if (plStack_30 == (longlong *)0x0) {
LAB_147837f3b:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plStack_30[1];
      do {
        if (iVar6 == 0) goto LAB_147837f3b;
        LOCK();
        iVar5 = (int)plStack_30[1];
        bVar10 = iVar6 == iVar5;
        if (bVar10) {
          *(int *)(plStack_30 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_38 = *(undefined8 *)(param_1 + 0x20);
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      bVar10 = false;
    }
    plVar8 = plStack_30;
    FUN_14338a410(lVar9,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar10) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147837fac FUN_147837fac body=200 status=ok
// SIG undefined FUN_147837fac(void)

void FUN_147837fac(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5acf50;
  if (param_1[0x26] != 0) {
    plVar3 = param_1 + 0x2a;
    if ((longlong *)param_1[0x28] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x28];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x1e] != 0) {
    plVar3 = param_1 + 0x22;
    if ((longlong *)param_1[0x20] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x20];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_147832492(param_1 + 8);
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a5acca0;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x000147838069. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147838074 FUN_147838074 body=65 status=ok
// SIG undefined FUN_147838074(void)

void FUN_147838074(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xf0);
  plVar3 = (longlong *)(lVar1 + 0x110);
  if (*(longlong **)(lVar1 + 0x100) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x100);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001478380b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar1 + 0x30);
  return;
}



// FUNCTION 1478380f2 FUN_1478380f2 body=83 status=ok
// SIG undefined FUN_1478380f2(void)

undefined8 * FUN_1478380f2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5acf70;
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



// FUNCTION 147838156 FUN_147838156 body=12 status=ok
// SIG undefined FUN_147838156(void)

void FUN_147838156(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014783815f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147838162 FUN_147838162 body=83 status=ok
// SIG undefined FUN_147838162(void)

undefined8 * FUN_147838162(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5acf90;
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



// FUNCTION 1478381b6 FUN_1478381b6 body=220 status=ok
// SIG undefined FUN_1478381b6(void)

void FUN_1478381b6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*param_1 + 0x1c) == 0) {
    local_30 = *param_1;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14a5acfb0;
      local_28 = (longlong *)0x0;
      local_58 = &LAB_147838294;
      FUN_1407461b0(1);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = 0;
      local_38 = &PTR_LAB_14a5acfb0;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_58 = &LAB_147838294;
      local_28 = plVar3;
      FUN_1407461b0(1);
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
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478382b4 FUN_1478382b4 body=83 status=ok
// SIG undefined FUN_1478382b4(void)

undefined8 * FUN_1478382b4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5acfb0;
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



// FUNCTION 147838308 FUN_147838308 body=167 status=ok
// SIG undefined FUN_147838308(void)

void FUN_147838308(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_147838383;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_147838383;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_147838383:
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
                    /* WARNING: Could not recover jumptable at 0x0001478383a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1478383b0 FUN_1478383b0 body=130 status=ok
// SIG undefined FUN_1478383b0(void)

void FUN_1478383b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 147838456 FUN_147838456 body=59 status=ok
// SIG undefined FUN_147838456(void)

longlong FUN_147838456(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a5acfd0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  FUN_1478383b0(param_2 + 0x18,param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 147838498 FUN_147838498 body=12 status=ok
// SIG undefined FUN_147838498(void)

void FUN_147838498(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001478384a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1478384a4 FUN_1478384a4 body=52 status=ok
// SIG undefined FUN_1478384a4(void)

undefined8 * FUN_1478384a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5acfd0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478384d8 FUN_1478384d8 body=370 status=ok
// SIG undefined FUN_1478384d8(void)

void FUN_1478384d8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = 8;
  local_50 = *(undefined8 **)(param_1 + 0x18);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_58 = 0;
  }
  else {
    iVar7 = *(int *)(local_50 + 1);
    local_58 = 0;
    do {
      if (iVar7 == 0) {
        local_50 = (undefined8 *)0x0;
        goto LAB_147838514;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 1);
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar9);
    local_58 = *(undefined8 *)(param_1 + 0x10);
  }
LAB_147838514:
  plVar8 = (longlong *)FUN_14001cc68(0x1a0,0x10);
  local_68 = param_3;
  FUN_147838660(plVar8,&local_58,&local_34,param_2);
  plVar1 = plVar8 + 2;
  local_48 = plVar1;
  local_40 = plVar8;
  FUN_147838d76(&local_48,plVar1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar7 + 1U) {
    FUN_147835e0c((longlong *)(param_1 + 0x188),iVar7);
  }
  plVar6 = local_40;
  lVar4 = *(longlong *)(param_1 + 0x188);
  *(longlong **)(lVar4 + (longlong)iVar7 * 0x10) = plVar1;
  *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar8;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_50 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147838660 FUN_147838660 body=191 status=ok
// SIG undefined FUN_147838660(void)

undefined8 *
FUN_147838660(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a5ad010;
  uVar3 = *param_3;
  local_28 = *param_2;
  plVar4 = (longlong *)param_2[1];
  local_20 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    local_38 = param_5;
    FUN_147838720(param_1 + 2,&local_28,uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = param_5;
    FUN_147838720(param_1 + 2,&local_28,uVar3);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147838720 FUN_147838720 body=364 status=ok
// SIG undefined FUN_147838720(void)

undefined8 *
FUN_147838720(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_LAB_14a5acca0;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a5ad030;
  memset(param_1 + 6,0,0xd8);
  *(undefined4 *)(param_1 + 7) = 6;
  param_1[6] = &PTR_FUN_14a5ab608;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x22] = *param_4;
  param_1[0x24] = param_4[2];
  param_4[2] = 0;
  uVar2 = param_4[4];
  uVar3 = param_4[5];
  uVar4 = param_4[7];
  param_1[0x28] = param_4[6];
  param_1[0x29] = uVar4;
  param_1[0x26] = uVar2;
  param_1[0x27] = uVar3;
  if (param_1[0x22] != 0) {
    *param_4 = 0;
  }
  param_1[0x2a] = *param_5;
  param_1[0x2c] = param_5[2];
  param_5[2] = 0;
  uVar2 = param_5[4];
  uVar3 = param_5[5];
  uVar4 = param_5[7];
  param_1[0x30] = param_5[6];
  param_1[0x31] = uVar4;
  param_1[0x2e] = uVar2;
  param_1[0x2f] = uVar3;
  if (param_1[0x2a] != 0) {
    *param_5 = 0;
  }
  return param_1;
}



// FUNCTION 147838896 FUN_147838896 body=29 status=ok
// SIG undefined FUN_147838896(void)

undefined8 FUN_147838896(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478388b4 FUN_1478388b4 body=38 status=ok
// SIG undefined FUN_1478388b4(void)

undefined8 FUN_1478388b4(undefined8 param_1,int param_2)

{
  FUN_1478389fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478388da FUN_1478388da body=287 status=ok
// SIG undefined FUN_1478388da(void)

void FUN_1478388da(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1c) == 0) && (lVar9 = *(longlong *)(param_1 + 8), lVar9 != 0)) {
    pcVar4 = *(code **)(param_1 + 0x150);
    if (pcVar4 != (code *)0x0) {
      plVar8 = (longlong *)(param_1 + 0x170);
      if (*(longlong **)(param_1 + 0x160) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0x160);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7,param_1 + 0x30);
      lVar9 = *(longlong *)(param_1 + 8);
    }
    plStack_30 = *(longlong **)(param_1 + 0x28);
    if (plStack_30 == (longlong *)0x0) {
LAB_147838989:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plStack_30[1];
      do {
        if (iVar6 == 0) goto LAB_147838989;
        LOCK();
        iVar5 = (int)plStack_30[1];
        bVar10 = iVar6 == iVar5;
        if (bVar10) {
          *(int *)(plStack_30 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_38 = *(undefined8 *)(param_1 + 0x20);
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      bVar10 = false;
    }
    plVar8 = plStack_30;
    FUN_14338a410(lVar9,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar10) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478389fa FUN_1478389fa body=183 status=ok
// SIG undefined FUN_1478389fa(void)

void FUN_1478389fa(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5ad030;
  if (param_1[0x2a] != 0) {
    plVar3 = param_1 + 0x2e;
    if ((longlong *)param_1[0x2c] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x2c];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x22] != 0) {
    plVar3 = param_1 + 0x26;
    if ((longlong *)param_1[0x24] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x24];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FUN_147838ab2(param_1 + 6);
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a5acca0;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x000147838aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147838ab2 FUN_147838ab2 body=47 status=ok
// SIG undefined FUN_147838ab2(void)

void FUN_147838ab2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_147832492(param_1 + 0x30);
  FUN_14783040a(param_1);
  return;
}



// FUNCTION 147838ae2 FUN_147838ae2 body=65 status=ok
// SIG undefined FUN_147838ae2(void)

void FUN_147838ae2(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x110);
  plVar3 = (longlong *)(lVar1 + 0x130);
  if (*(longlong **)(lVar1 + 0x120) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x120);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000147838b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar1 + 0x30);
  return;
}



// FUNCTION 147838b60 FUN_147838b60 body=83 status=ok
// SIG undefined FUN_147838b60(void)

undefined8 * FUN_147838b60(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad050;
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



// FUNCTION 147838bc4 FUN_147838bc4 body=12 status=ok
// SIG undefined FUN_147838bc4(void)

void FUN_147838bc4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147838bcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147838bd0 FUN_147838bd0 body=83 status=ok
// SIG undefined FUN_147838bd0(void)

undefined8 * FUN_147838bd0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad070;
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



// FUNCTION 147838c24 FUN_147838c24 body=220 status=ok
// SIG undefined FUN_147838c24(void)

void FUN_147838c24(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*param_1 + 0x1c) == 0) {
    local_30 = *param_1;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad090;
      local_28 = (longlong *)0x0;
      local_58 = &LAB_147838d02;
      FUN_1407461b0(1);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad090;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_58 = &LAB_147838d02;
      local_28 = plVar3;
      FUN_1407461b0(1);
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
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147838d22 FUN_147838d22 body=83 status=ok
// SIG undefined FUN_147838d22(void)

undefined8 * FUN_147838d22(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad090;
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



// FUNCTION 147838d76 FUN_147838d76 body=167 status=ok
// SIG undefined FUN_147838d76(void)

void FUN_147838d76(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_147838df1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_147838df1;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_147838df1:
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
                    /* WARNING: Could not recover jumptable at 0x000147838e11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147838e1e FUN_147838e1e body=130 status=ok
// SIG undefined FUN_147838e1e(void)

void FUN_147838e1e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 147838ec4 FUN_147838ec4 body=59 status=ok
// SIG undefined FUN_147838ec4(void)

longlong FUN_147838ec4(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a5ad0b0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  FUN_147838e1e(param_2 + 0x18,param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 147838f06 FUN_147838f06 body=12 status=ok
// SIG undefined FUN_147838f06(void)

void FUN_147838f06(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147838f0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147838f12 FUN_147838f12 body=52 status=ok
// SIG undefined FUN_147838f12(void)

undefined8 * FUN_147838f12(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad0b0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147838f46 FUN_147838f46 body=63 status=ok
// SIG undefined FUN_147838f46(void)

longlong FUN_147838f46(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1478365b6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1478365a0(lVar2);
  return lVar2;
}



// FUNCTION 147838f86 FUN_147838f86 body=63 status=ok
// SIG undefined FUN_147838f86(void)

longlong FUN_147838f86(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14783666c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_14783664a(lVar2);
  return lVar2;
}



// FUNCTION 147838fc6 FUN_147838fc6 body=271 status=ok
// SIG undefined FUN_147838fc6(void)

ulonglong * FUN_147838fc6(ulonglong *param_1,uint param_2)

{
  wchar_t wVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  
  if (DAT_14cabd240 == 0) {
    uVar3 = FUN_14636a237();
    DAT_14cabd240 = FUN_14171c317(FUN_14636a266,uVar3,L"ELocalFileReplayResult");
  }
  uVar2 = DAT_14cabd240;
  *param_1 = (ulonglong)param_2;
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 1,uVar2);
  param_1[2] = uVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  switch((ulonglong)param_2) {
  case 0:
  case 0xb:
    goto switchD_147839021_caseD_0;
  case 1:
    pwVar4 = L"ELocalFileReplayResult::InvalidReplayInfo";
    break;
  case 2:
    pwVar4 = L"ELocalFileReplayResult::StreamChunkIndexMismatch";
    break;
  case 3:
    pwVar4 = L"ELocalFileReplayResult::DecompressBuffer";
    break;
  case 4:
    pwVar4 = L"ELocalFileReplayResult::CompressionNotSupported";
    break;
  case 5:
    pwVar4 = L"ELocalFileReplayResult::DecryptBuffer";
    break;
  case 6:
    pwVar4 = L"ELocalFileReplayResult::EncryptionNotSupported";
    break;
  case 7:
    pwVar4 = L"ELocalFileReplayResult::EncryptBuffer";
    break;
  case 8:
    pwVar4 = L"ELocalFileReplayResult::CompressBuffer";
    break;
  case 9:
    pwVar4 = L"ELocalFileReplayResult::InvalidName";
    break;
  case 10:
    pwVar4 = L"ELocalFileReplayResult::FileWriter";
    break;
  default:
    pwVar4 = L"::Invalid";
  }
  do {
    wVar1 = *pwVar4;
    pwVar4 = pwVar4 + 1;
  } while (wVar1 != L':');
  FUN_14020fad6(param_1 + 3);
switchD_147839021_caseD_0:
  return param_1;
}



// FUNCTION 1478390d6 FUN_1478390d6 body=370 status=ok
// SIG undefined FUN_1478390d6(void)

void FUN_1478390d6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = 0xc;
  local_50 = *(undefined8 **)(param_1 + 0x18);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_58 = 0;
  }
  else {
    iVar7 = *(int *)(local_50 + 1);
    local_58 = 0;
    do {
      if (iVar7 == 0) {
        local_50 = (undefined8 *)0x0;
        goto LAB_147839112;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 1);
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar9);
    local_58 = *(undefined8 *)(param_1 + 0x10);
  }
LAB_147839112:
  plVar8 = (longlong *)FUN_14001cc68(400,0x10);
  local_68 = param_3;
  FUN_14783925e(plVar8,&local_58,&local_34,param_2);
  plVar1 = plVar8 + 2;
  local_48 = plVar1;
  local_40 = plVar8;
  FUN_147839986(&local_48,plVar1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar7 + 1U) {
    FUN_147835e0c((longlong *)(param_1 + 0x188),iVar7);
  }
  plVar6 = local_40;
  lVar4 = *(longlong *)(param_1 + 0x188);
  *(longlong **)(lVar4 + (longlong)iVar7 * 0x10) = plVar1;
  *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar8;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_50 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783925e FUN_14783925e body=191 status=ok
// SIG undefined FUN_14783925e(void)

undefined8 *
FUN_14783925e(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a5ad130;
  uVar3 = *param_3;
  local_28 = *param_2;
  plVar4 = (longlong *)param_2[1];
  local_20 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    local_38 = param_5;
    FUN_14783931e(param_1 + 2,&local_28,uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = param_5;
    FUN_14783931e(param_1 + 2,&local_28,uVar3);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783931e FUN_14783931e body=368 status=ok
// SIG undefined FUN_14783931e(void)

undefined8 *
FUN_14783931e(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_LAB_14a5acca0;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a5ad150;
  memset(param_1 + 6,0,0xd0);
  *(undefined4 *)(param_1 + 7) = 6;
  param_1[6] = &PTR_FUN_14a5ab610;
  param_1[8] = &PTR_FUN_14a5ab620;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = *param_4;
  param_1[0x22] = param_4[2];
  param_4[2] = 0;
  uVar2 = param_4[4];
  uVar3 = param_4[5];
  uVar4 = param_4[7];
  param_1[0x26] = param_4[6];
  param_1[0x27] = uVar4;
  param_1[0x24] = uVar2;
  param_1[0x25] = uVar3;
  if (param_1[0x20] != 0) {
    *param_4 = 0;
  }
  param_1[0x28] = *param_5;
  param_1[0x2a] = param_5[2];
  param_5[2] = 0;
  uVar2 = param_5[4];
  uVar3 = param_5[5];
  uVar4 = param_5[7];
  param_1[0x2e] = param_5[6];
  param_1[0x2f] = uVar4;
  param_1[0x2c] = uVar2;
  param_1[0x2d] = uVar3;
  if (param_1[0x28] != 0) {
    *param_5 = 0;
  }
  return param_1;
}



// FUNCTION 147839498 FUN_147839498 body=29 status=ok
// SIG undefined FUN_147839498(void)

undefined8 FUN_147839498(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478394b6 FUN_1478394b6 body=38 status=ok
// SIG undefined FUN_1478394b6(void)

undefined8 FUN_1478394b6(undefined8 param_1,int param_2)

{
  FUN_1478395fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478394dc FUN_1478394dc body=287 status=ok
// SIG undefined FUN_1478394dc(void)

void FUN_1478394dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1c) == 0) && (lVar9 = *(longlong *)(param_1 + 8), lVar9 != 0)) {
    pcVar4 = *(code **)(param_1 + 0x140);
    if (pcVar4 != (code *)0x0) {
      plVar8 = (longlong *)(param_1 + 0x160);
      if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0x150);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7,param_1 + 0x30);
      lVar9 = *(longlong *)(param_1 + 8);
    }
    plStack_30 = *(longlong **)(param_1 + 0x28);
    if (plStack_30 == (longlong *)0x0) {
LAB_14783958b:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plStack_30[1];
      do {
        if (iVar6 == 0) goto LAB_14783958b;
        LOCK();
        iVar5 = (int)plStack_30[1];
        bVar10 = iVar6 == iVar5;
        if (bVar10) {
          *(int *)(plStack_30 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_38 = *(undefined8 *)(param_1 + 0x20);
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      bVar10 = false;
    }
    plVar8 = plStack_30;
    FUN_14338a410(lVar9,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar10) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478395fc FUN_1478395fc body=183 status=ok
// SIG undefined FUN_1478395fc(void)

void FUN_1478395fc(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5ad150;
  if (param_1[0x28] != 0) {
    plVar3 = param_1 + 0x2c;
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x2a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x20] != 0) {
    plVar3 = param_1 + 0x24;
    if ((longlong *)param_1[0x22] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x22];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FUN_1478396b4(param_1 + 6);
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a5acca0;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x0001478396a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1478396b4 FUN_1478396b4 body=61 status=ok
// SIG undefined FUN_1478396b4(void)

void FUN_1478396b4(undefined8 *param_1)

{
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_147832492(param_1 + 5);
  *param_1 = &PTR_FUN_14a5ab610;
  FUN_147831144(param_1 + 2);
  return;
}



// FUNCTION 1478396f2 FUN_1478396f2 body=65 status=ok
// SIG undefined FUN_1478396f2(void)

void FUN_1478396f2(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x100);
  plVar3 = (longlong *)(lVar1 + 0x120);
  if (*(longlong **)(lVar1 + 0x110) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x110);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000147839730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar1 + 0x30);
  return;
}



// FUNCTION 147839770 FUN_147839770 body=83 status=ok
// SIG undefined FUN_147839770(void)

undefined8 * FUN_147839770(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad170;
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



// FUNCTION 1478397d4 FUN_1478397d4 body=12 status=ok
// SIG undefined FUN_1478397d4(void)

void FUN_1478397d4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001478397dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1478397e0 FUN_1478397e0 body=83 status=ok
// SIG undefined FUN_1478397e0(void)

undefined8 * FUN_1478397e0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad190;
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



// FUNCTION 147839834 FUN_147839834 body=220 status=ok
// SIG undefined FUN_147839834(void)

void FUN_147839834(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*param_1 + 0x1c) == 0) {
    local_30 = *param_1;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad1b0;
      local_28 = (longlong *)0x0;
      local_58 = &LAB_147839912;
      FUN_1407461b0(1);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad1b0;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_58 = &LAB_147839912;
      local_28 = plVar3;
      FUN_1407461b0(1);
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
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147839932 FUN_147839932 body=83 status=ok
// SIG undefined FUN_147839932(void)

undefined8 * FUN_147839932(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad1b0;
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



// FUNCTION 147839986 FUN_147839986 body=167 status=ok
// SIG undefined FUN_147839986(void)

void FUN_147839986(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_147839a01;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_147839a01;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_147839a01:
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
                    /* WARNING: Could not recover jumptable at 0x000147839a21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147839a2e FUN_147839a2e body=130 status=ok
// SIG undefined FUN_147839a2e(void)

void FUN_147839a2e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 147839ad4 FUN_147839ad4 body=59 status=ok
// SIG undefined FUN_147839ad4(void)

longlong FUN_147839ad4(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a5ad1d0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  FUN_147839a2e(param_2 + 0x18,param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 147839b16 FUN_147839b16 body=12 status=ok
// SIG undefined FUN_147839b16(void)

void FUN_147839b16(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147839b1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147839b22 FUN_147839b22 body=52 status=ok
// SIG undefined FUN_147839b22(void)

undefined8 * FUN_147839b22(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad1d0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147839b56 FUN_147839b56 body=63 status=ok
// SIG undefined FUN_147839b56(void)

int FUN_147839b56(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147831394(param_1,iVar1);
  }
  FUN_147831366((longlong)iVar1 * 0x40 + *param_1,1);
  return iVar1;
}



// FUNCTION 147839b96 FUN_147839b96 body=370 status=ok
// SIG undefined FUN_147839b96(void)

void FUN_147839b96(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = 0xd;
  local_50 = *(undefined8 **)(param_1 + 0x18);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_58 = 0;
  }
  else {
    iVar7 = *(int *)(local_50 + 1);
    local_58 = 0;
    do {
      if (iVar7 == 0) {
        local_50 = (undefined8 *)0x0;
        goto LAB_147839bd2;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 1);
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar9);
    local_58 = *(undefined8 *)(param_1 + 0x10);
  }
LAB_147839bd2:
  plVar8 = (longlong *)FUN_14001cc68(400,0x10);
  local_68 = param_3;
  FUN_147839d1e(plVar8,&local_58,&local_34,param_2);
  plVar1 = plVar8 + 2;
  local_48 = plVar1;
  local_40 = plVar8;
  FUN_14783a444(&local_48,plVar1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar7 + 1U) {
    FUN_147835e0c((longlong *)(param_1 + 0x188),iVar7);
  }
  plVar6 = local_40;
  lVar4 = *(longlong *)(param_1 + 0x188);
  *(longlong **)(lVar4 + (longlong)iVar7 * 0x10) = plVar1;
  *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar8;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_50 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147839d1e FUN_147839d1e body=191 status=ok
// SIG undefined FUN_147839d1e(void)

undefined8 *
FUN_147839d1e(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a5ad210;
  uVar3 = *param_3;
  local_28 = *param_2;
  plVar4 = (longlong *)param_2[1];
  local_20 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    local_38 = param_5;
    FUN_147839dde(param_1 + 2,&local_28,uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = param_5;
    FUN_147839dde(param_1 + 2,&local_28,uVar3);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147839dde FUN_147839dde body=357 status=ok
// SIG undefined FUN_147839dde(void)

undefined8 *
FUN_147839dde(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_LAB_14a5acca0;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a5ad230;
  memset(param_1 + 6,0,200);
  *(undefined4 *)(param_1 + 7) = 6;
  param_1[6] = &PTR_FUN_14a5ab6b0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = *param_4;
  param_1[0x22] = param_4[2];
  param_4[2] = 0;
  uVar2 = param_4[4];
  uVar3 = param_4[5];
  uVar4 = param_4[7];
  param_1[0x26] = param_4[6];
  param_1[0x27] = uVar4;
  param_1[0x24] = uVar2;
  param_1[0x25] = uVar3;
  if (param_1[0x20] != 0) {
    *param_4 = 0;
  }
  param_1[0x28] = *param_5;
  param_1[0x2a] = param_5[2];
  param_5[2] = 0;
  uVar2 = param_5[4];
  uVar3 = param_5[5];
  uVar4 = param_5[7];
  param_1[0x2e] = param_5[6];
  param_1[0x2f] = uVar4;
  param_1[0x2c] = uVar2;
  param_1[0x2d] = uVar3;
  if (param_1[0x28] != 0) {
    *param_5 = 0;
  }
  return param_1;
}



// FUNCTION 147839f4e FUN_147839f4e body=29 status=ok
// SIG undefined FUN_147839f4e(void)

undefined8 FUN_147839f4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147839f6c FUN_147839f6c body=38 status=ok
// SIG undefined FUN_147839f6c(void)

undefined8 FUN_147839f6c(undefined8 param_1,int param_2)

{
  FUN_14783a0b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147839f92 FUN_147839f92 body=287 status=ok
// SIG undefined FUN_147839f92(void)

void FUN_147839f92(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1c) == 0) && (lVar9 = *(longlong *)(param_1 + 8), lVar9 != 0)) {
    pcVar4 = *(code **)(param_1 + 0x140);
    if (pcVar4 != (code *)0x0) {
      plVar8 = (longlong *)(param_1 + 0x160);
      if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0x150);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7,param_1 + 0x30);
      lVar9 = *(longlong *)(param_1 + 8);
    }
    plStack_30 = *(longlong **)(param_1 + 0x28);
    if (plStack_30 == (longlong *)0x0) {
LAB_14783a041:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plStack_30[1];
      do {
        if (iVar6 == 0) goto LAB_14783a041;
        LOCK();
        iVar5 = (int)plStack_30[1];
        bVar10 = iVar6 == iVar5;
        if (bVar10) {
          *(int *)(plStack_30 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_38 = *(undefined8 *)(param_1 + 0x20);
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      bVar10 = false;
    }
    plVar8 = plStack_30;
    FUN_14338a410(lVar9,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar10) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783a0b2 FUN_14783a0b2 body=183 status=ok
// SIG undefined FUN_14783a0b2(void)

void FUN_14783a0b2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5ad230;
  if (param_1[0x28] != 0) {
    plVar3 = param_1 + 0x2c;
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x2a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x20] != 0) {
    plVar3 = param_1 + 0x24;
    if ((longlong *)param_1[0x22] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x22];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FUN_14783a16a(param_1 + 6);
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a5acca0;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014783a15e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14783a16a FUN_14783a16a body=70 status=ok
// SIG undefined FUN_14783a16a(void)

void FUN_14783a16a(undefined8 *param_1)

{
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_147832492(param_1 + 4);
  *param_1 = &PTR_FUN_14a5ab6b0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14783a1b0 FUN_14783a1b0 body=65 status=ok
// SIG undefined FUN_14783a1b0(void)

void FUN_14783a1b0(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x100);
  plVar3 = (longlong *)(lVar1 + 0x120);
  if (*(longlong **)(lVar1 + 0x110) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x110);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014783a1ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar1 + 0x30);
  return;
}



// FUNCTION 14783a22e FUN_14783a22e body=83 status=ok
// SIG undefined FUN_14783a22e(void)

undefined8 * FUN_14783a22e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad250;
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



// FUNCTION 14783a292 FUN_14783a292 body=12 status=ok
// SIG undefined FUN_14783a292(void)

void FUN_14783a292(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014783a29b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14783a29e FUN_14783a29e body=83 status=ok
// SIG undefined FUN_14783a29e(void)

undefined8 * FUN_14783a29e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad270;
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



// FUNCTION 14783a2f2 FUN_14783a2f2 body=220 status=ok
// SIG undefined FUN_14783a2f2(void)

void FUN_14783a2f2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*param_1 + 0x1c) == 0) {
    local_30 = *param_1;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad290;
      local_28 = (longlong *)0x0;
      local_58 = &LAB_14783a3d0;
      FUN_1407461b0(1);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad290;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_58 = &LAB_14783a3d0;
      local_28 = plVar3;
      FUN_1407461b0(1);
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
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783a3f0 FUN_14783a3f0 body=83 status=ok
// SIG undefined FUN_14783a3f0(void)

undefined8 * FUN_14783a3f0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad290;
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



// FUNCTION 14783a444 FUN_14783a444 body=167 status=ok
// SIG undefined FUN_14783a444(void)

void FUN_14783a444(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_14783a4bf;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_14783a4bf;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14783a4bf:
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
                    /* WARNING: Could not recover jumptable at 0x00014783a4df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14783a4ec FUN_14783a4ec body=130 status=ok
// SIG undefined FUN_14783a4ec(void)

void FUN_14783a4ec(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 14783a592 FUN_14783a592 body=59 status=ok
// SIG undefined FUN_14783a592(void)

longlong FUN_14783a592(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a5ad2b0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  FUN_14783a4ec(param_2 + 0x18,param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 14783a5d4 FUN_14783a5d4 body=12 status=ok
// SIG undefined FUN_14783a5d4(void)

void FUN_14783a5d4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014783a5dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14783a5e0 FUN_14783a5e0 body=52 status=ok
// SIG undefined FUN_14783a5e0(void)

undefined8 * FUN_14783a5e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad2b0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783a614 FUN_14783a614 body=370 status=ok
// SIG undefined FUN_14783a614(void)

void FUN_14783a614(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = 0xd;
  local_50 = *(undefined8 **)(param_1 + 0x18);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_58 = 0;
  }
  else {
    iVar7 = *(int *)(local_50 + 1);
    local_58 = 0;
    do {
      if (iVar7 == 0) {
        local_50 = (undefined8 *)0x0;
        goto LAB_14783a650;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 1);
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar9);
    local_58 = *(undefined8 *)(param_1 + 0x10);
  }
LAB_14783a650:
  plVar8 = (longlong *)FUN_14001cc68(0x1a0,0x10);
  local_68 = param_3;
  FUN_14783a79c(plVar8,&local_58,&local_34,param_2);
  plVar1 = plVar8 + 2;
  local_48 = plVar1;
  local_40 = plVar8;
  FUN_14783aeb2(&local_48,plVar1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar7 + 1U) {
    FUN_147835e0c((longlong *)(param_1 + 0x188),iVar7);
  }
  plVar6 = local_40;
  lVar4 = *(longlong *)(param_1 + 0x188);
  *(longlong **)(lVar4 + (longlong)iVar7 * 0x10) = plVar1;
  *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar8;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_50 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783a79c FUN_14783a79c body=191 status=ok
// SIG undefined FUN_14783a79c(void)

undefined8 *
FUN_14783a79c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a5ad2f0;
  uVar3 = *param_3;
  local_28 = *param_2;
  plVar4 = (longlong *)param_2[1];
  local_20 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    local_38 = param_5;
    FUN_14783a85c(param_1 + 2,&local_28,uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = param_5;
    FUN_14783a85c(param_1 + 2,&local_28,uVar3);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783a85c FUN_14783a85c body=364 status=ok
// SIG undefined FUN_14783a85c(void)

undefined8 *
FUN_14783a85c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_LAB_14a5acca0;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a5ad310;
  memset(param_1 + 6,0,0xd8);
  *(undefined4 *)(param_1 + 7) = 6;
  param_1[6] = &PTR_FUN_14a5ab6b8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x22] = *param_4;
  param_1[0x24] = param_4[2];
  param_4[2] = 0;
  uVar2 = param_4[4];
  uVar3 = param_4[5];
  uVar4 = param_4[7];
  param_1[0x28] = param_4[6];
  param_1[0x29] = uVar4;
  param_1[0x26] = uVar2;
  param_1[0x27] = uVar3;
  if (param_1[0x22] != 0) {
    *param_4 = 0;
  }
  param_1[0x2a] = *param_5;
  param_1[0x2c] = param_5[2];
  param_5[2] = 0;
  uVar2 = param_5[4];
  uVar3 = param_5[5];
  uVar4 = param_5[7];
  param_1[0x30] = param_5[6];
  param_1[0x31] = uVar4;
  param_1[0x2e] = uVar2;
  param_1[0x2f] = uVar3;
  if (param_1[0x2a] != 0) {
    *param_5 = 0;
  }
  return param_1;
}



// FUNCTION 14783a9d2 FUN_14783a9d2 body=29 status=ok
// SIG undefined FUN_14783a9d2(void)

undefined8 FUN_14783a9d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783a9f0 FUN_14783a9f0 body=38 status=ok
// SIG undefined FUN_14783a9f0(void)

undefined8 FUN_14783a9f0(undefined8 param_1,int param_2)

{
  FUN_14783ab36();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783aa16 FUN_14783aa16 body=287 status=ok
// SIG undefined FUN_14783aa16(void)

void FUN_14783aa16(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1c) == 0) && (lVar9 = *(longlong *)(param_1 + 8), lVar9 != 0)) {
    pcVar4 = *(code **)(param_1 + 0x150);
    if (pcVar4 != (code *)0x0) {
      plVar8 = (longlong *)(param_1 + 0x170);
      if (*(longlong **)(param_1 + 0x160) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0x160);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7,param_1 + 0x30);
      lVar9 = *(longlong *)(param_1 + 8);
    }
    plStack_30 = *(longlong **)(param_1 + 0x28);
    if (plStack_30 == (longlong *)0x0) {
LAB_14783aac5:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plStack_30[1];
      do {
        if (iVar6 == 0) goto LAB_14783aac5;
        LOCK();
        iVar5 = (int)plStack_30[1];
        bVar10 = iVar6 == iVar5;
        if (bVar10) {
          *(int *)(plStack_30 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_38 = *(undefined8 *)(param_1 + 0x20);
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      bVar10 = false;
    }
    plVar8 = plStack_30;
    FUN_14338a410(lVar9,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar10) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783ab36 FUN_14783ab36 body=183 status=ok
// SIG undefined FUN_14783ab36(void)

void FUN_14783ab36(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5ad310;
  if (param_1[0x2a] != 0) {
    plVar3 = param_1 + 0x2e;
    if ((longlong *)param_1[0x2c] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x2c];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x22] != 0) {
    plVar3 = param_1 + 0x26;
    if ((longlong *)param_1[0x24] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x24];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FUN_14783abee(param_1 + 6);
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a5acca0;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014783abe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14783abee FUN_14783abee body=47 status=ok
// SIG undefined FUN_14783abee(void)

void FUN_14783abee(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_147832492(param_1 + 0x30);
  FUN_1478304b0(param_1);
  return;
}



// FUNCTION 14783ac1e FUN_14783ac1e body=65 status=ok
// SIG undefined FUN_14783ac1e(void)

void FUN_14783ac1e(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x110);
  plVar3 = (longlong *)(lVar1 + 0x130);
  if (*(longlong **)(lVar1 + 0x120) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x120);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014783ac5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar1 + 0x30);
  return;
}



// FUNCTION 14783ac9c FUN_14783ac9c body=83 status=ok
// SIG undefined FUN_14783ac9c(void)

undefined8 * FUN_14783ac9c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad330;
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



// FUNCTION 14783ad00 FUN_14783ad00 body=12 status=ok
// SIG undefined FUN_14783ad00(void)

void FUN_14783ad00(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014783ad09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14783ad0c FUN_14783ad0c body=83 status=ok
// SIG undefined FUN_14783ad0c(void)

undefined8 * FUN_14783ad0c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad350;
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



// FUNCTION 14783ad60 FUN_14783ad60 body=220 status=ok
// SIG undefined FUN_14783ad60(void)

void FUN_14783ad60(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*param_1 + 0x1c) == 0) {
    local_30 = *param_1;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad370;
      local_28 = (longlong *)0x0;
      local_58 = &LAB_14783ae3e;
      FUN_1407461b0(1);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad370;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_58 = &LAB_14783ae3e;
      local_28 = plVar3;
      FUN_1407461b0(1);
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
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783ae5e FUN_14783ae5e body=83 status=ok
// SIG undefined FUN_14783ae5e(void)

undefined8 * FUN_14783ae5e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad370;
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



// FUNCTION 14783aeb2 FUN_14783aeb2 body=167 status=ok
// SIG undefined FUN_14783aeb2(void)

void FUN_14783aeb2(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_14783af2d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_14783af2d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14783af2d:
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
                    /* WARNING: Could not recover jumptable at 0x00014783af4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14783af5a FUN_14783af5a body=130 status=ok
// SIG undefined FUN_14783af5a(void)

void FUN_14783af5a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 14783b000 FUN_14783b000 body=59 status=ok
// SIG undefined FUN_14783b000(void)

longlong FUN_14783b000(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a5ad390;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  FUN_14783af5a(param_2 + 0x18,param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 14783b042 FUN_14783b042 body=12 status=ok
// SIG undefined FUN_14783b042(void)

void FUN_14783b042(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014783b04b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14783b04e FUN_14783b04e body=52 status=ok
// SIG undefined FUN_14783b04e(void)

undefined8 * FUN_14783b04e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad390;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783b082 FUN_14783b082 body=59 status=ok
// SIG undefined FUN_14783b082(void)

longlong FUN_14783b082(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14783b0d6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_14783b0bd(lVar2);
  return lVar2;
}



// FUNCTION 14783b0bd FUN_14783b0bd body=25 status=ok
// SIG undefined FUN_14783b0bd(void)

void FUN_14783b0bd(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 6;
  *param_1 = &PTR_FUN_14a5ab6b0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 14783b0d6 FUN_14783b0d6 body=132 status=ok
// SIG undefined FUN_14783b0d6(void)

void FUN_14783b0d6(longlong param_1,int param_2)

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



// FUNCTION 14783b15c FUN_14783b15c body=370 status=ok
// SIG undefined FUN_14783b15c(void)

void FUN_14783b15c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = 0x11;
  local_50 = *(undefined8 **)(param_1 + 0x18);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_58 = 0;
  }
  else {
    iVar7 = *(int *)(local_50 + 1);
    local_58 = 0;
    do {
      if (iVar7 == 0) {
        local_50 = (undefined8 *)0x0;
        goto LAB_14783b198;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 1);
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar9);
    local_58 = *(undefined8 *)(param_1 + 0x10);
  }
LAB_14783b198:
  plVar8 = (longlong *)FUN_14001cc68(400,0x10);
  local_68 = param_3;
  FUN_14783b2e4(plVar8,&local_58,&local_34,param_2);
  plVar1 = plVar8 + 2;
  local_48 = plVar1;
  local_40 = plVar8;
  FUN_14783ba10(&local_48,plVar1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar7 + 1U) {
    FUN_147835e0c((longlong *)(param_1 + 0x188),iVar7);
  }
  plVar6 = local_40;
  lVar4 = *(longlong *)(param_1 + 0x188);
  *(longlong **)(lVar4 + (longlong)iVar7 * 0x10) = plVar1;
  *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar8;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_50 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783b2e4 FUN_14783b2e4 body=191 status=ok
// SIG undefined FUN_14783b2e4(void)

undefined8 *
FUN_14783b2e4(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a5ad3d0;
  uVar3 = *param_3;
  local_28 = *param_2;
  plVar4 = (longlong *)param_2[1];
  local_20 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    local_38 = param_5;
    FUN_14783b3a4(param_1 + 2,&local_28,uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = param_5;
    FUN_14783b3a4(param_1 + 2,&local_28,uVar3);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783b3a4 FUN_14783b3a4 body=363 status=ok
// SIG undefined FUN_14783b3a4(void)

undefined8 *
FUN_14783b3a4(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_LAB_14a5acca0;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a5ad3f0;
  memset(param_1 + 6,0,0xd0);
  *(undefined4 *)(param_1 + 7) = 6;
  param_1[6] = &PTR_FUN_14a5ab6c8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = *param_4;
  param_1[0x22] = param_4[2];
  param_4[2] = 0;
  uVar2 = param_4[4];
  uVar3 = param_4[5];
  uVar4 = param_4[7];
  param_1[0x26] = param_4[6];
  param_1[0x27] = uVar4;
  param_1[0x24] = uVar2;
  param_1[0x25] = uVar3;
  if (param_1[0x20] != 0) {
    *param_4 = 0;
  }
  param_1[0x28] = *param_5;
  param_1[0x2a] = param_5[2];
  param_5[2] = 0;
  uVar2 = param_5[4];
  uVar3 = param_5[5];
  uVar4 = param_5[7];
  param_1[0x2e] = param_5[6];
  param_1[0x2f] = uVar4;
  param_1[0x2c] = uVar2;
  param_1[0x2d] = uVar3;
  if (param_1[0x28] != 0) {
    *param_5 = 0;
  }
  return param_1;
}



// FUNCTION 14783b51a FUN_14783b51a body=29 status=ok
// SIG undefined FUN_14783b51a(void)

undefined8 FUN_14783b51a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783b538 FUN_14783b538 body=38 status=ok
// SIG undefined FUN_14783b538(void)

undefined8 FUN_14783b538(undefined8 param_1,int param_2)

{
  FUN_14783b67e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783b55e FUN_14783b55e body=287 status=ok
// SIG undefined FUN_14783b55e(void)

void FUN_14783b55e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1c) == 0) && (lVar9 = *(longlong *)(param_1 + 8), lVar9 != 0)) {
    pcVar4 = *(code **)(param_1 + 0x140);
    if (pcVar4 != (code *)0x0) {
      plVar8 = (longlong *)(param_1 + 0x160);
      if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0x150);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7,param_1 + 0x30);
      lVar9 = *(longlong *)(param_1 + 8);
    }
    plStack_30 = *(longlong **)(param_1 + 0x28);
    if (plStack_30 == (longlong *)0x0) {
LAB_14783b60d:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plStack_30[1];
      do {
        if (iVar6 == 0) goto LAB_14783b60d;
        LOCK();
        iVar5 = (int)plStack_30[1];
        bVar10 = iVar6 == iVar5;
        if (bVar10) {
          *(int *)(plStack_30 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_38 = *(undefined8 *)(param_1 + 0x20);
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      bVar10 = false;
    }
    plVar8 = plStack_30;
    FUN_14338a410(lVar9,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar10) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783b67e FUN_14783b67e body=183 status=ok
// SIG undefined FUN_14783b67e(void)

void FUN_14783b67e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5ad3f0;
  if (param_1[0x28] != 0) {
    plVar3 = param_1 + 0x2c;
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x2a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x20] != 0) {
    plVar3 = param_1 + 0x24;
    if ((longlong *)param_1[0x22] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x22];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FUN_14783b736(param_1 + 6);
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a5acca0;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014783b72a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14783b736 FUN_14783b736 body=70 status=ok
// SIG undefined FUN_14783b736(void)

void FUN_14783b736(undefined8 *param_1)

{
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_147832492(param_1 + 5);
  *param_1 = &PTR_FUN_14a5ab6c8;
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14783b77c FUN_14783b77c body=65 status=ok
// SIG undefined FUN_14783b77c(void)

void FUN_14783b77c(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x100);
  plVar3 = (longlong *)(lVar1 + 0x120);
  if (*(longlong **)(lVar1 + 0x110) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x110);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014783b7ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar1 + 0x30);
  return;
}



// FUNCTION 14783b7fa FUN_14783b7fa body=83 status=ok
// SIG undefined FUN_14783b7fa(void)

undefined8 * FUN_14783b7fa(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad410;
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



// FUNCTION 14783b85e FUN_14783b85e body=12 status=ok
// SIG undefined FUN_14783b85e(void)

void FUN_14783b85e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014783b867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14783b86a FUN_14783b86a body=83 status=ok
// SIG undefined FUN_14783b86a(void)

undefined8 * FUN_14783b86a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad430;
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



// FUNCTION 14783b8be FUN_14783b8be body=220 status=ok
// SIG undefined FUN_14783b8be(void)

void FUN_14783b8be(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*param_1 + 0x1c) == 0) {
    local_30 = *param_1;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad450;
      local_28 = (longlong *)0x0;
      local_58 = &LAB_14783b99c;
      FUN_1407461b0(1);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad450;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_58 = &LAB_14783b99c;
      local_28 = plVar3;
      FUN_1407461b0(1);
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
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783b9bc FUN_14783b9bc body=83 status=ok
// SIG undefined FUN_14783b9bc(void)

undefined8 * FUN_14783b9bc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad450;
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



// FUNCTION 14783ba10 FUN_14783ba10 body=167 status=ok
// SIG undefined FUN_14783ba10(void)

void FUN_14783ba10(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_14783ba8b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_14783ba8b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14783ba8b:
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
                    /* WARNING: Could not recover jumptable at 0x00014783baab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14783bab8 FUN_14783bab8 body=130 status=ok
// SIG undefined FUN_14783bab8(void)

void FUN_14783bab8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 14783bb5e FUN_14783bb5e body=59 status=ok
// SIG undefined FUN_14783bb5e(void)

longlong FUN_14783bb5e(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a5ad470;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  FUN_14783bab8(param_2 + 0x18,param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 14783bba0 FUN_14783bba0 body=12 status=ok
// SIG undefined FUN_14783bba0(void)

void FUN_14783bba0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014783bba9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14783bbac FUN_14783bbac body=52 status=ok
// SIG undefined FUN_14783bbac(void)

undefined8 * FUN_14783bbac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad470;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783bbe0 FUN_14783bbe0 body=366 status=ok
// SIG undefined FUN_14783bbe0(void)

void FUN_14783bbe0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *(undefined8 **)(param_1 + 0x18);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_58 = 0;
  }
  else {
    iVar7 = *(int *)(local_50 + 1);
    local_58 = 0;
    do {
      if (iVar7 == 0) {
        local_50 = (undefined8 *)0x0;
        goto LAB_14783bc18;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 1);
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar9);
    local_58 = *(undefined8 *)(param_1 + 0x10);
  }
LAB_14783bc18:
  local_34 = param_2;
  plVar8 = (longlong *)FUN_14001cc68(0x180,0x10);
  local_68 = param_4;
  FUN_14783bd64(plVar8,&local_58,&local_34,param_3);
  plVar1 = plVar8 + 2;
  local_48 = plVar1;
  local_40 = plVar8;
  FUN_14783c446(&local_48,plVar1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar7 + 1U) {
    FUN_147835e0c((longlong *)(param_1 + 0x188),iVar7);
  }
  plVar6 = local_40;
  lVar4 = *(longlong *)(param_1 + 0x188);
  *(longlong **)(lVar4 + (longlong)iVar7 * 0x10) = plVar1;
  *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar8;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_50 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783bd64 FUN_14783bd64 body=191 status=ok
// SIG undefined FUN_14783bd64(void)

undefined8 *
FUN_14783bd64(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a5ad4b0;
  uVar3 = *param_3;
  local_28 = *param_2;
  plVar4 = (longlong *)param_2[1];
  local_20 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    local_38 = param_5;
    FUN_14783be24(param_1 + 2,&local_28,uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = param_5;
    FUN_14783be24(param_1 + 2,&local_28,uVar3);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783be24 FUN_14783be24 body=343 status=ok
// SIG undefined FUN_14783be24(void)

undefined8 *
FUN_14783be24(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_LAB_14a5acca0;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a5ad4d0;
  memset(param_1 + 6,0,0xb8);
  *(undefined4 *)(param_1 + 7) = 6;
  param_1[6] = &PTR_FUN_14a5ab6d0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = *param_4;
  param_1[0x20] = param_4[2];
  param_4[2] = 0;
  uVar2 = param_4[4];
  uVar3 = param_4[5];
  uVar4 = param_4[7];
  param_1[0x24] = param_4[6];
  param_1[0x25] = uVar4;
  param_1[0x22] = uVar2;
  param_1[0x23] = uVar3;
  if (param_1[0x1e] != 0) {
    *param_4 = 0;
  }
  param_1[0x26] = *param_5;
  param_1[0x28] = param_5[2];
  param_5[2] = 0;
  uVar2 = param_5[4];
  uVar3 = param_5[5];
  uVar4 = param_5[7];
  param_1[0x2c] = param_5[6];
  param_1[0x2d] = uVar4;
  param_1[0x2a] = uVar2;
  param_1[0x2b] = uVar3;
  if (param_1[0x26] != 0) {
    *param_5 = 0;
  }
  return param_1;
}



// FUNCTION 14783bf86 FUN_14783bf86 body=29 status=ok
// SIG undefined FUN_14783bf86(void)

undefined8 FUN_14783bf86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783bfa4 FUN_14783bfa4 body=38 status=ok
// SIG undefined FUN_14783bfa4(void)

undefined8 FUN_14783bfa4(undefined8 param_1,int param_2)

{
  FUN_14783c0ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783bfca FUN_14783bfca body=287 status=ok
// SIG undefined FUN_14783bfca(void)

void FUN_14783bfca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1c) == 0) && (lVar9 = *(longlong *)(param_1 + 8), lVar9 != 0)) {
    pcVar4 = *(code **)(param_1 + 0x130);
    if (pcVar4 != (code *)0x0) {
      plVar8 = (longlong *)(param_1 + 0x150);
      if (*(longlong **)(param_1 + 0x140) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0x140);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7,param_1 + 0x30);
      lVar9 = *(longlong *)(param_1 + 8);
    }
    plStack_30 = *(longlong **)(param_1 + 0x28);
    if (plStack_30 == (longlong *)0x0) {
LAB_14783c079:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plStack_30[1];
      do {
        if (iVar6 == 0) goto LAB_14783c079;
        LOCK();
        iVar5 = (int)plStack_30[1];
        bVar10 = iVar6 == iVar5;
        if (bVar10) {
          *(int *)(plStack_30 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_38 = *(undefined8 *)(param_1 + 0x20);
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      bVar10 = false;
    }
    plVar8 = plStack_30;
    FUN_14338a410(lVar9,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar10) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783c0ea FUN_14783c0ea body=200 status=ok
// SIG undefined FUN_14783c0ea(void)

void FUN_14783c0ea(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5ad4d0;
  if (param_1[0x26] != 0) {
    plVar3 = param_1 + 0x2a;
    if ((longlong *)param_1[0x28] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x28];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x1e] != 0) {
    plVar3 = param_1 + 0x22;
    if ((longlong *)param_1[0x20] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x20];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_147832492(param_1 + 8);
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a5acca0;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014783c1a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14783c1b2 FUN_14783c1b2 body=65 status=ok
// SIG undefined FUN_14783c1b2(void)

void FUN_14783c1b2(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xf0);
  plVar3 = (longlong *)(lVar1 + 0x110);
  if (*(longlong **)(lVar1 + 0x100) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x100);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014783c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar1 + 0x30);
  return;
}



// FUNCTION 14783c230 FUN_14783c230 body=83 status=ok
// SIG undefined FUN_14783c230(void)

undefined8 * FUN_14783c230(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad4f0;
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



// FUNCTION 14783c294 FUN_14783c294 body=12 status=ok
// SIG undefined FUN_14783c294(void)

void FUN_14783c294(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014783c29d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14783c2a0 FUN_14783c2a0 body=83 status=ok
// SIG undefined FUN_14783c2a0(void)

undefined8 * FUN_14783c2a0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad510;
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



// FUNCTION 14783c2f4 FUN_14783c2f4 body=220 status=ok
// SIG undefined FUN_14783c2f4(void)

void FUN_14783c2f4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*param_1 + 0x1c) == 0) {
    local_30 = *param_1;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad530;
      local_28 = (longlong *)0x0;
      local_58 = &LAB_14783c3d2;
      FUN_1407461b0(1);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad530;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_58 = &LAB_14783c3d2;
      local_28 = plVar3;
      FUN_1407461b0(1);
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
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783c3f2 FUN_14783c3f2 body=83 status=ok
// SIG undefined FUN_14783c3f2(void)

undefined8 * FUN_14783c3f2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad530;
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



// FUNCTION 14783c446 FUN_14783c446 body=167 status=ok
// SIG undefined FUN_14783c446(void)

void FUN_14783c446(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_14783c4c1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_14783c4c1;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14783c4c1:
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
                    /* WARNING: Could not recover jumptable at 0x00014783c4e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14783c4ee FUN_14783c4ee body=130 status=ok
// SIG undefined FUN_14783c4ee(void)

void FUN_14783c4ee(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 14783c594 FUN_14783c594 body=59 status=ok
// SIG undefined FUN_14783c594(void)

longlong FUN_14783c594(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a5ad550;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  FUN_14783c4ee(param_2 + 0x18,param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 14783c5d6 FUN_14783c5d6 body=12 status=ok
// SIG undefined FUN_14783c5d6(void)

void FUN_14783c5d6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014783c5df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14783c5e2 FUN_14783c5e2 body=52 status=ok
// SIG undefined FUN_14783c5e2(void)

undefined8 * FUN_14783c5e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad550;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


