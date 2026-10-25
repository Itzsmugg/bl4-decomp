// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141158f46 FUN_141158f46 body=468 status=ok
// SIG undefined FUN_141158f46(void)

void FUN_141158f46(byte *param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined2 *puVar2;
  int iVar3;
  
  pbVar1 = *(byte **)param_2[1];
  if ((byte *)((undefined8 *)param_2[1])[1] < pbVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *pbVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 2) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  if (((*(byte *)(param_2 + 5) & 1) == 0) || (0x40 < *param_1)) {
    puVar2 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 4,2);
      }
      else {
        thunk_FUN_1457251a8(param_2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 4) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
  }
  else {
    *(ushort *)(param_1 + 4) = (ushort)*param_1;
    *param_1 = 0x65;
  }
  iVar3 = FUN_1448332aa(param_2,&DAT_14bb46be0);
  if (1 < iVar3) {
    puVar2 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 6,2);
      }
      else {
        thunk_FUN_1457251a8(param_2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 6) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
    param_1 = param_1 + 8;
    puVar2 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001411590df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x170))(param_2,param_1,2);
        return;
      }
      thunk_FUN_1457251a8(param_2,param_1);
      return;
    }
    *(undefined2 *)param_1 = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  return;
}



// FUNCTION 14115911a FUN_14115911a body=132 status=ok
// SIG undefined FUN_14115911a(void)

void FUN_14115911a(void)

{
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 in_stack_00000040;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  code **local_48;
  undefined1 local_40;
  undefined8 local_30;
  code *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = &local_30;
  local_30 = in_stack_00000038;
  local_48 = &local_28;
  local_28 = FUN_1427ded96;
  local_40 = in_stack_00000040;
  local_50 = in_stack_00000030;
  local_58 = in_stack_00000028;
  FUN_1408de6dc();
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411591a0 FUN_1411591a0 body=223 status=ok
// SIG undefined FUN_1411591a0(void)

undefined8 FUN_1411591a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar1 = (longlong *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x60) == *(int *)(param_1 + 0x8c)) {
      lVar7 = *(longlong *)(param_1 + 0x28);
      lVar8 = (longlong)*(int *)(param_1 + 0x30) * 0x18;
      do {
        local_40 = *(undefined8 *)(lVar7 + 0xc);
        local_38 = *(undefined8 *)(lVar7 + 4);
        uVar2 = FUN_1490f1c03(&local_40);
        plVar5 = (longlong *)FUN_1490f165c(plVar1,uVar2,&local_40);
        *plVar5 = lVar7;
        lVar7 = lVar7 + 0x18;
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != 0);
    }
    uVar2 = FUN_1490f1c03(param_2);
    iVar3 = FUN_1490f16e2(plVar1,uVar2,param_2);
    if ((iVar3 != -1) &&
       (lVar7 = (longlong)iVar3 * 0x20 + *plVar1, puVar6 = (undefined8 *)(lVar7 + 0x10),
       puVar6 != (undefined8 *)0x0 && lVar7 != 0)) {
      uVar4 = *puVar6;
      goto LAB_1411591c5;
    }
  }
  uVar4 = 0;
LAB_1411591c5:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141159280 FUN_141159280 body=137 status=ok
// SIG undefined FUN_141159280(void)

undefined8 * FUN_141159280(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2b0))(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115930a FUN_14115930a body=43 status=ok
// SIG undefined FUN_14115930a(void)

undefined8 * FUN_14115930a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 141159336 FUN_141159336 body=611 status=ok
// SIG undefined FUN_141159336(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141159336(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)FUN_14001cc68(0x198);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b42f0e0;
  memset(plVar4 + 2,0,0x188);
  FUN_14115959a(plVar4 + 2);
  plVar4[0x2d] = 0;
  plVar4[0x2e] = 0;
  plVar4[0x2f] = 0;
  plVar4[0x30] = 0;
  plVar7 = plVar4 + 2;
  *plVar7 = (longlong)&PTR_FUN_14b42f100;
  plVar4[3] = (longlong)&PTR_FUN_14b42f1c0;
  plVar4[8] = (longlong)&PTR_FUN_14b42f1e0;
  plVar4[0x31] = 0;
  plVar4[0x32] = 0;
  if ((plVar7 != (longlong *)0x0) &&
     (((plVar4[9] == 0 || (plVar4[10] == 0)) || (*(int *)(plVar4[10] + 8) < 1)))) {
    if (plVar4 == (longlong *)0x0) {
      _DAT_00000048 = 0x10;
      plVar6 = (longlong *)&DAT_00000050;
      plVar5 = _DAT_00000050;
      if (_DAT_00000050 != (longlong *)0x0) {
LAB_1411594ef:
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        *plVar6 = (longlong)plVar4;
        if (plVar4 != (longlong *)0x0) goto LAB_141159405;
      }
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar4[9] = (longlong)plVar7;
      if ((longlong *)plVar4[10] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar4[10] != (longlong *)0x0) {
          plVar6 = plVar4 + 10;
          plVar5 = (longlong *)plVar4[10];
          goto LAB_1411594ef;
        }
        plVar4[10] = (longlong)plVar4;
      }
LAB_141159405:
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  }
  lVar3 = *(longlong *)(param_1 + 8);
  plVar6 = *(longlong **)(param_1 + 0x10);
  if (plVar6 == (longlong *)0x0) {
    plVar4[0x31] = lVar3;
    plVar5 = (longlong *)plVar4[0x32];
    if (plVar5 == (longlong *)0x0) goto LAB_141159451;
    plVar4[0x32] = 0;
LAB_141159498:
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_141159451;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    plVar4[0x31] = lVar3;
    plVar5 = (longlong *)plVar4[0x32];
    if (plVar6 != plVar5) {
      plVar4[0x32] = (longlong)plVar6;
      if (plVar5 == (longlong *)0x0) goto LAB_141159451;
      goto LAB_141159498;
    }
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_141159451;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_141159451:
  *param_2 = plVar7;
  param_2[1] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  return param_2;
}



// FUNCTION 14115959a FUN_14115959a body=243 status=ok
// SIG undefined FUN_14115959a(void)

undefined8 * FUN_14115959a(undefined8 *param_1)

{
  bool bVar1;
  
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_LAB_14b42da30;
  param_1[1] = &PTR_LAB_14b42f5a0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  FUN_1409e1656(param_1 + 6);
  *param_1 = &PTR_LAB_14b42d6b0;
  param_1[1] = &PTR_LAB_14b42d760;
  param_1[6] = &PTR_FUN_14b42d780;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 2;
  memset((void *)((longlong)param_1 + 0x5c),0,0x84);
  bVar1 = DAT_14cb8c3a0 != 0;
  *(uint *)(param_1 + 0x1c) = (uint)bVar1;
  *(uint *)((longlong)param_1 + 0xe4) = (uint)bVar1;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x20) = 2;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x141) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xc0;
  return param_1;
}



// FUNCTION 14115968e FUN_14115968e body=1699 status=ok
// SIG undefined FUN_14115968e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14115968e(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  char local_e0 [16];
  longlong *local_d0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x1b8);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b42ed10;
  memset(plVar4 + 2,0,0x1a8);
  FUN_14115959a(plVar4 + 2);
  plVar4[0x2d] = 0;
  plVar4[0x2e] = 0;
  plVar4[0x2f] = 0;
  plVar4[0x30] = 0;
  plVar8 = plVar4 + 2;
  *plVar8 = (longlong)&PTR_FUN_14b42ed30;
  plVar4[3] = (longlong)&PTR_FUN_14b42edf0;
  plVar4[8] = (longlong)&PTR_FUN_14b42ee10;
  plVar4[0x31] = 0;
  plVar4[0x32] = 0;
  plVar4[0x33] = 0;
  plVar4[0x34] = 0;
  *(undefined8 *)((longlong)plVar4 + 0x1a5) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x1ad) = 0;
  if ((plVar8 == (longlong *)0x0) ||
     (((plVar4[9] != 0 && (plVar4[10] != 0)) && (0 < *(int *)(plVar4[10] + 8)))))
  goto LAB_14115979c;
  if (plVar4 == (longlong *)0x0) {
    _DAT_00000048 = 0x10;
    plVar10 = (longlong *)&DAT_00000050;
    plVar6 = _DAT_00000050;
    if (_DAT_00000050 == (longlong *)0x0) goto LAB_14115979c;
LAB_141159c90:
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    *plVar10 = (longlong)plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_14115979c;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar4[9] = (longlong)plVar8;
    if ((longlong *)plVar4[10] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar4[10] != (longlong *)0x0) {
        plVar10 = plVar4 + 10;
        plVar6 = (longlong *)plVar4[10];
        goto LAB_141159c90;
      }
      plVar4[10] = (longlong)plVar4;
    }
  }
  LOCK();
  plVar10 = plVar4 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_14115979c:
  if ((*(longlong *)(*param_3 + 8) == 0) ||
     (plVar10 = *(longlong **)(*param_3 + 0x10), plVar10 == (longlong *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar10 + 8))();
  }
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_1456bb102(local_e0,uVar5);
  puVar9 = &local_b0;
  FUN_1448729ea(param_1 + 8,puVar9,local_e0);
  uVar11 = local_b0;
  if (local_90 != 3) {
    puVar7 = &local_88;
    FUN_1400b56fe(puVar7,&local_b0,3);
    uVar11 = 0;
    if (local_68 != 0) {
      uVar11 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(puVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(undefined4 *)(plVar4 + 0x32) = uVar11;
  FUN_14020a6cc(plVar4 + 0x31,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar9 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar2)(puVar9);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if ((*(longlong *)(*param_3 + 8) == 0) ||
     (plVar10 = *(longlong **)(*param_3 + 0x10), plVar10 == (longlong *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar10 + 8))();
  }
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_1456bb102(local_e0,uVar5);
  puVar9 = &local_b0;
  FUN_1448729ea(param_1 + 0x58,puVar9,local_e0);
  uVar11 = local_b0;
  if (local_90 != 3) {
    puVar7 = &local_88;
    FUN_1400b56fe(puVar7,&local_b0,3);
    uVar11 = 0;
    if (local_68 != 0) {
      uVar11 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(puVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(undefined4 *)((longlong)plVar4 + 0x19c) = uVar11;
  FUN_14020a6cc((longlong)plVar4 + 0x194,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar9 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar2)(puVar9);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if ((*(longlong *)(*param_3 + 8) == 0) ||
     (plVar10 = *(longlong **)(*param_3 + 0x10), plVar10 == (longlong *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar10 + 8))();
  }
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_1456bb102(local_e0,uVar5);
  puVar9 = &local_b0;
  FUN_1448729ea(param_1 + 0xa8,puVar9,local_e0);
  uVar11 = local_b0;
  if (local_90 != 3) {
    puVar7 = &local_88;
    FUN_1400b56fe(puVar7,&local_b0,3);
    uVar11 = 0;
    if (local_68 != 0) {
      uVar11 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(puVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(undefined4 *)(plVar4 + 0x35) = uVar11;
  FUN_14020a6cc(plVar4 + 0x34,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar9 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar2)(puVar9);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  puVar3 = local_e8;
  *local_e8 = plVar8;
  local_e8[1] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 141159d40 FUN_141159d40 body=190 status=ok
// SIG undefined FUN_141159d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141159d40(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b8e2600;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141159dfe FUN_141159dfe body=619 status=ok
// SIG undefined FUN_141159dfe(void)

void FUN_141159dfe(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1409f1a5c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_29);
            goto LAB_141159ee5;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_29) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_29,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_29,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_29,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_29,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
LAB_141159ee5:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14115a06a(param_1,local_29);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115a06a FUN_14115a06a body=996 status=ok
// SIG undefined FUN_14115a06a(void)

void FUN_14115a06a(longlong *param_1,byte param_2)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  byte bVar6;
  double dVar7;
  float fVar8;
  
  bVar4 = *(byte *)((longlong)param_1 + 0xc1);
  if (bVar4 != param_2) {
    bVar3 = bVar4 & 7;
    *(byte *)(param_1 + 0x18) = bVar3;
    bVar6 = param_2 & 7;
    *(uint *)((longlong)param_1 + 0xc4) = (uint)(bVar4 >> 3);
    if ((bVar4 >> 3 != param_2 >> 3) &&
       ((lVar5 = 0x360, 7 < bVar4 && (bVar4 & 6) == 2 || (lVar5 = 0x388, bVar3 == 1)))) {
      (**(code **)(*param_1 + lVar5))(param_1);
      bVar3 = *(byte *)(param_1 + 0x18);
    }
    if (bVar3 != bVar6) {
      if (1 < bVar3) {
        *(undefined1 *)((longlong)param_1 + 0xe6) = *(undefined1 *)(param_1[6] + 0xbd8);
      }
      bVar4 = *(byte *)(param_1[0xe] + 0x1c8);
      if ((bVar4 & 4) != 0) {
        lVar5 = param_1[6];
        bVar2 = *(byte *)(lVar5 + 0xbd8);
        if ((((int)(uint)bVar2 < *(int *)(lVar5 + 0xbf0)) &&
            (lVar5 = *(longlong *)
                      (*(longlong *)(lVar5 + 0xbe8) + 0x40 +
                      (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8), lVar5 != 0)) &&
           (-1 < (char)*(byte *)(lVar5 + 0xc4) == 1 < bVar3)) {
          *(byte *)(lVar5 + 0xc4) = *(byte *)(lVar5 + 0xc4) & 0x7f | (1 < bVar3) << 7;
          bVar4 = *(byte *)(param_1[0xe] + 0x1c8);
          bVar3 = *(byte *)(param_1 + 0x18);
        }
      }
      if ((bVar4 & 8) != 0) {
        FUN_148f108c8(param_1,1 < bVar3);
        bVar3 = *(byte *)(param_1 + 0x18);
      }
      switch(bVar3) {
      case 0:
        lVar5 = *param_1;
        if (bVar6 != 1) {
          if (bVar6 == 2) {
            (**(code **)(lVar5 + 0x350))(param_1);
            lVar5 = *param_1;
          }
                    /* WARNING: Could not recover jumptable at 0x00014115a392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x370))(param_1);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00014115a1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar5 + 0x380))(param_1,1);
        return;
      case 1:
        if (bVar6 == 2) {
          (**(code **)(*param_1 + 0x350))(param_1);
        }
        (**(code **)(*param_1 + 0x370))(param_1);
        fVar1 = *(float *)((longlong)param_1 + 0x84);
        fVar8 = 1.0;
        if (0.0 < fVar1) {
          lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
          dVar7 = (*(double *)(lVar5 + 0x6d0) - (double)param_1[0x1b]) / (double)fVar1;
          if (1.0 <= dVar7) {
            dVar7 = 1.0;
          }
          if (dVar7 <= 0.0) {
            dVar7 = 0.0;
          }
          fVar8 = (float)dVar7;
        }
        lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
        param_1[0x1b] =
             (longlong)
             (*(double *)(lVar5 + 0x6d0) - (double)((1.0 - fVar8) * *(float *)(param_1 + 0x12)));
                    /* WARNING: Could not recover jumptable at 0x00014115a2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x378))(param_1);
        return;
      case 2:
        FUN_141074a32(param_1);
        lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
        lVar5 = *(longlong *)(lVar5 + 0x6d0);
        param_1[0x1a] = lVar5;
        if (bVar6 == 1) {
          lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
          dVar7 = (*(double *)(lVar5 + 0x6d0) - (double)param_1[0x1b]) /
                  (double)*(float *)(param_1 + 0x12);
          if (1.0 <= dVar7) {
            dVar7 = 1.0;
          }
          if (dVar7 <= 0.0) {
            dVar7 = 0.0;
          }
          param_1[0x1b] =
               (longlong)
               ((double)param_1[0x1a] -
               (double)((float)(1.0 - dVar7) * *(float *)((longlong)param_1 + 0x84)));
          (**(code **)(*param_1 + 0x380))(param_1,0);
        }
        else {
          param_1[0x1b] = lVar5;
        }
                    /* WARNING: Could not recover jumptable at 0x00014115a15f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x348))(param_1);
        return;
      case 3:
                    /* WARNING: Could not recover jumptable at 0x00014115a35e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x358))(param_1);
        return;
      case 4:
                    /* WARNING: Could not recover jumptable at 0x00014115a447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x368))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14115a44e FUN_14115a44e body=299 status=ok
// SIG undefined FUN_14115a44e(void)

void FUN_14115a44e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x30);
  local_38 = DAT_14cbe7758;
  local_40 = lVar3;
  FUN_1447cd2ec(lVar3 + 0xaf0);
  FUN_140994e4c(lVar3,DAT_14cbe7708,*(undefined1 *)(param_1 + 0xe6),0);
  (**(code **)(*(longlong *)(lVar3 + 0x520) + 0x10))(lVar3 + 0x520,&local_40);
  plVar5 = local_38;
  lVar4 = local_40;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
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
  if (lVar4 != 0) {
    FUN_1408f4152(lVar4,0,*(undefined1 *)(param_1 + 0xe6));
  }
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
  if (*(char *)(param_1 + 200) != '\0') {
    FUN_14115b7bc(lVar3);
    *(undefined1 *)(param_1 + 200) = 0;
  }
  *(undefined1 *)(param_1 + 0xe2) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115a57a FUN_14115a57a body=2151 status=ok
// SIG undefined FUN_14115a57a(void)

void FUN_14115a57a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  double dVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  code *pcVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined *puVar17;
  uint *puVar18;
  longlong *plVar19;
  int iVar20;
  longlong lVar21;
  bool bVar22;
  uint uVar23;
  float fVar24;
  double dVar25;
  undefined1 auStack_168 [32];
  undefined2 *local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  undefined1 *local_108;
  code *local_100;
  undefined8 *local_f0;
  int local_e8;
  undefined2 local_e0 [2];
  undefined4 local_dc;
  code *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  byte local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar21 = param_1[6];
  if (lVar21 == 0) {
LAB_14115acb1:
    lVar21 = 0;
  }
  else {
    if (DAT_14cbbd498 == 0) {
      local_110 = &local_d8;
      local_d8 = FUN_140940982;
      local_100 = FUN_14081d0ea;
      local_108 = &LAB_146572ba2;
      local_118 = &LAB_148ca13ba;
      local_120 = &LAB_140e51436;
      local_128 = L"Engine";
      local_130 = 0;
      local_138 = 0x10000004;
      local_140 = 8;
      local_148 = (undefined2 *)CONCAT44(local_148._4_4_,0x1068);
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if ((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x38) < *(int *)(DAT_14cbbd498 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) != DAT_14cbbd498 + 0x30)) goto LAB_14115acb1;
  }
  lVar14 = param_1[6];
  FUN_140994e4c(lVar14,DAT_14cbe7708,*(undefined1 *)((longlong)param_1 + 0xe6),0);
  FUN_140994e4c(lVar14,DAT_14cbe7710,*(undefined1 *)((longlong)param_1 + 0xe6),0);
  FUN_140994e4c(lVar14,DAT_14cbe7718,*(undefined1 *)((longlong)param_1 + 0xe6),0);
  FUN_140994e4c(lVar14,DAT_14cbe7720,*(undefined1 *)((longlong)param_1 + 0xe6),0);
  (**(code **)(*(longlong *)(lVar14 + 0x520) + 0x10))(lVar14 + 0x520,&local_d8);
  pcVar10 = local_d8;
  plVar19 = (longlong *)CONCAT44(uStack_cc,local_d0);
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    UNLOCK();
    plVar9 = (longlong *)CONCAT44(uStack_cc,local_d0);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  if (pcVar10 != (code *)0x0) {
    FUN_1408f4152(pcVar10,0,*(undefined1 *)((longlong)param_1 + 0xe6));
    FUN_1408f4152(pcVar10,1,*(undefined1 *)((longlong)param_1 + 0xe6));
    FUN_1408f4152(pcVar10,2,*(undefined1 *)((longlong)param_1 + 0xe6));
  }
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar19 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar2 = (int *)((longlong)plVar19 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0xe3) == '\x01') {
    FUN_14115ae20(param_1,param_1[0xe] + 0x260);
    *(undefined1 *)((longlong)param_1 + 0xe3) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xe4) == '\x01') {
    FUN_14115ae20(param_1,param_1[0xe] + 0x278);
    *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if ((*(char *)(lVar21 + 0x178) != '\x03') &&
     ((*(longlong **)(lVar21 + 0x1b0) == (longlong *)0x0 ||
      (cVar11 = (**(code **)(**(longlong **)(lVar21 + 0x1b0) + 0x700))(), cVar11 == '\0'))))
  goto LAB_14115a74e;
  fVar3 = *(float *)(param_1 + 0x12);
  fVar24 = (float)FUN_140086a76(param_1);
  if ((fVar3 <= 0.0) ||
     (((char)param_1[0x18] == '\x01' || (fVar24 <= 0.0 && (char)param_1[0x18] != '\x02')))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_168);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  cVar11 = *(char *)((longlong)param_1 + 0xc4) * '\b' + '\x01';
  if (*(char *)((longlong)param_1 + 0xc1) != cVar11) {
    *(char *)((longlong)param_1 + 0xc1) = cVar11;
    uVar7 = param_1[0xd];
    if (uVar7 < 0xffffffff00000000) {
      plVar19 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar19 = (longlong *)0x0;
      }
      (**(code **)(*plVar19 + 0x58))(0,param_1,uVar7,1);
    }
    else {
      uVar23 = (uint)uVar7;
      if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c998088)) {
        puVar17 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar17 = DAT_14c998080;
        }
        if ((*(uint *)(puVar17 + ((uint)(uVar7 >> 3) & 0xffffffc)) >> (uVar23 & 0x1f) & 1) != 0) {
          lVar14 = DAT_14c998060 + (ulonglong)(uVar23 & 0x7fffffff) * 0x68;
          puVar18 = *(uint **)(lVar14 + 0x18);
          if (*(uint **)(lVar14 + 0x18) == (uint *)0x0) {
            puVar18 = (uint *)(lVar14 + 8);
          }
          *puVar18 = *puVar18 | 2;
          *(byte *)(lVar14 + 0x60) = *(byte *)(lVar14 + 0x60) | 1;
        }
      }
    }
  }
  lVar14 = (**(code **)(*param_1 + 0x180))();
  dVar4 = *(double *)(lVar14 + 0x6d0);
  fVar24 = (1.0 - fVar24) * fVar3;
  dVar25 = (double)((float)dVar4 - fVar24);
  param_1[0x1b] = (longlong)dVar25;
  if (0 < *(int *)((longlong)param_1 + 0xc4)) {
    iVar13 = *(int *)((longlong)param_1 + 0xc4) + -1;
    *(int *)((longlong)param_1 + 0xc4) = iVar13;
    bVar12 = (char)iVar13 << 3 | *(byte *)(param_1 + 0x18);
    if (*(byte *)((longlong)param_1 + 0xc1) != bVar12) {
      *(byte *)((longlong)param_1 + 0xc1) = bVar12;
      uVar7 = param_1[0xd];
      if (uVar7 < 0xffffffff00000000) {
        plVar19 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar19 = (longlong *)0x0;
        }
        (**(code **)(*plVar19 + 0x58))(fVar24,param_1,uVar7,1);
      }
      else {
        uVar23 = (uint)uVar7;
        if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c998088)) {
          puVar17 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar17 = DAT_14c998080;
          }
          if ((*(uint *)(puVar17 + ((uint)(uVar7 >> 3) & 0xffffffc)) >> (uVar23 & 0x1f) & 1) != 0) {
            lVar14 = DAT_14c998060 + (ulonglong)(uVar23 & 0x7fffffff) * 0x68;
            puVar18 = *(uint **)(lVar14 + 0x18);
            if (*(uint **)(lVar14 + 0x18) == (uint *)0x0) {
              puVar18 = (uint *)(lVar14 + 8);
            }
            *puVar18 = *puVar18 | 2;
            *(byte *)(lVar14 + 0x60) = *(byte *)(lVar14 + 0x60) | 1;
          }
        }
      }
      dVar25 = (double)param_1[0x1b];
    }
  }
  lVar14 = (**(code **)(*param_1 + 0x180))(param_1);
  if (*(longlong *)(lVar14 + 0x1f0) == 0) {
    puVar15 = (undefined8 *)(lVar14 + 0x458);
  }
  else {
    puVar15 = (undefined8 *)(*(longlong *)(lVar14 + 0x1f0) + 0xf0);
  }
  uVar8 = *puVar15;
  fVar24 = *(float *)(param_1[6] + 0x74);
  uVar23 = -(uint)(0.0001 < fVar24);
  local_f0 = (undefined8 *)0x0;
  local_e8 = 0;
  FUN_1446efa72(&local_f0,0,3,0x10);
  puVar15 = local_f0;
  local_e8 = 3;
  *local_f0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar16 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar16 == 0) {
    LOCK();
    UNLOCK();
    lVar16 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_f0[2] = lVar16;
  *local_f0 = &PTR_FUN_14b9df2a0;
  local_f0[3] = 0;
  iVar13 = 0;
  if (lVar21 != 0) {
    uVar6 = *(uint *)(lVar21 + 0xc);
    *(uint *)(local_f0 + 3) = uVar6;
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar21 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar21 = 0;
    }
    iVar13 = *(int *)(lVar21 + 0x10);
    if (*(int *)(lVar21 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar20 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar20);
      }
      LOCK();
      iVar13 = *(int *)(lVar21 + 0x10);
      bVar22 = iVar13 == 0;
      if (bVar22) {
        *(int *)(lVar21 + 0x10) = iVar20;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar13 = iVar20;
      }
    }
  }
  *(int *)((longlong)puVar15 + 0x1c) = iVar13;
  puVar15[4] = param_1;
  local_d8 = (code *)0x0;
  local_d0 = 0;
  FUN_14487d8d8(&local_d8,&local_f0);
  local_98 = 1;
  local_148 = local_e0;
  local_e0[0] = 0;
  local_dc = 0xbf800000;
  FUN_1406f4044(uVar8,param_1 + 0x1e,&local_d8,
                (float)(~uVar23 & 0x3f800000 | (uint)(1.0 / fVar24) & uVar23) *
                (float)((dVar25 - (double)(float)dVar4) + (double)fVar3));
  (*(code *)(&PTR_LAB_14a1c87a0)[local_98])(&local_d8);
  if (local_e8 == 0) {
LAB_14115aa51:
    if (local_f0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_f0 != (undefined8 *)0x0) {
    (**(code **)*local_f0)(local_f0,0);
    FUN_1446efa72(&local_f0,0,0,0x10);
    local_e8 = 0;
    goto LAB_14115aa51;
  }
  bVar12 = *(byte *)(param_1[0xe] + 0x1c8);
  if ((bVar12 & 4) != 0) {
    lVar21 = param_1[6];
    bVar5 = *(byte *)(lVar21 + 0xbd8);
    if ((((int)(uint)bVar5 < *(int *)(lVar21 + 0xbf0)) &&
        (lVar21 = *(longlong *)
                   (*(longlong *)(lVar21 + 0xbe8) + 0x40 +
                   (ulonglong)bVar5 * 0x80 + (ulonglong)bVar5 * 8), lVar21 != 0)) &&
       ((char)*(byte *)(lVar21 + 0xc4) < '\0')) {
      *(byte *)(lVar21 + 0xc4) = *(byte *)(lVar21 + 0xc4) & 0x7f;
      bVar12 = *(byte *)(param_1[0xe] + 0x1c8);
    }
  }
  if ((bVar12 & 8) != 0) {
    FUN_148f108c8(param_1,0);
  }
  FUN_141074ab4(param_1);
  (**(code **)(*param_1 + 0x378))(param_1);
LAB_14115a74e:
  if ((local_80 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14115ae20 FUN_14115ae20 body=357 status=ok
// SIG undefined FUN_14115ae20(void)

void FUN_14115ae20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1b0);
  if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x3c0), plVar2 != (longlong *)0x0)) {
    if (DAT_14cb61cd0 == 0) {
      local_50 = &local_20;
      local_20 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1463b31ae;
      local_58 = &LAB_1486dca4f;
      local_60 = &LAB_1464f50a6;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
        DAT_14cb61cd0 + 0x30)) {
      cVar3 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
      if (cVar3 != '\0') {
        local_38 = *param_2;
        local_30 = *(undefined4 *)(param_2 + 1);
        local_28 = 0;
        FUN_145815ce0(plVar2,&local_38,plVar2 + 300,0);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115af86 FUN_14115af86 body=476 status=ok
// SIG undefined FUN_14115af86(void)

void FUN_14115af86(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_78 [32];
  uint local_58;
  ulonglong local_50;
  ulonglong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
  cVar6 = (**(code **)(*param_1 + 0x340))();
  if (cVar6 != '\0') {
    FUN_14107507c(param_1,1);
  }
  uVar3 = param_1[6];
  local_38 = DAT_14cbe7768;
  local_40 = uVar3;
  FUN_1447cd2ec(uVar3 + 0xaf0);
  iVar7 = FUN_14487fd02(param_1[6]);
  if (iVar7 != 1) {
    local_58 = local_58 & 0xffffff00;
    FUN_140980406(uVar3,DAT_14cbe7720,*(undefined1 *)((longlong)param_1 + 0xe6),
                  *(undefined4 *)((longlong)param_1 + 0xec));
    (**(code **)(*(longlong *)(uVar3 + 0x520) + 0x10))(uVar3 + 0x520,&local_40);
    plVar5 = local_38;
    uVar4 = local_40;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_38)(local_38);
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
    if (uVar4 != 0) {
      FUN_1410eba38(uVar4,2,*(undefined1 *)((longlong)param_1 + 0xe6));
    }
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
    if (0 < *(int *)(param_1[0xe] + 600)) {
      uVar8 = FUN_140086a76(param_1);
      local_58 = 0x3f800000;
      local_50 = uVar3;
      FUN_148f10b34(param_1,param_1[0xe] + 0x250,DAT_14cbe7720,uVar8);
    }
    local_50 = local_50 & 0xffffffffffffff00;
    local_58 = local_58 & 0xffffff00;
    cVar6 = FUN_140dd024a(uVar3,DAT_14cbe7700,0x3f800000,0);
    if (cVar6 != '\0') {
      *(char *)(param_1 + 0x19) = cVar6;
    }
    *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115b164 FUN_14115b164 body=1143 status=ok
// SIG undefined FUN_14115b164(void)

void FUN_14115b164(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x388))();
  iVar2 = *(int *)((longlong)param_1 + 0xc4);
  if (iVar2 == 0) {
    if (*(char *)(param_1[6] + 0x179) == '\x02') {
      (**(code **)(*(longlong *)param_1[6] + 0x578))();
      cVar7 = *(char *)((longlong)param_1 + 0xc4) << 3;
    }
    else {
      cVar7 = '\0';
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    if (*(char *)((longlong)param_1 + 0xc1) != cVar7) {
      *(char *)((longlong)param_1 + 0xc1) = cVar7;
      uVar3 = param_1[0xd];
      if (uVar3 < 0xffffffff00000000) {
        plVar14 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar14 = (longlong *)0x0;
        }
        (**(code **)(*plVar14 + 0x58))(plVar14,param_1,uVar3,1);
      }
      else {
        uVar15 = (uint)uVar3;
        if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c998088)) {
          puVar10 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar10 = DAT_14c998080;
          }
          if ((*(uint *)(puVar10 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar15 & 0x1f) & 1) != 0) {
            lVar9 = DAT_14c998060 + (ulonglong)(uVar15 & 0x7fffffff) * 0x68;
            puVar11 = *(uint **)(lVar9 + 0x18);
            if (*(uint **)(lVar9 + 0x18) == (uint *)0x0) {
              puVar11 = (uint *)(lVar9 + 8);
            }
            *puVar11 = *puVar11 | 2;
            *(byte *)(lVar9 + 0x60) = *(byte *)(lVar9 + 0x60) | 1;
          }
        }
      }
    }
    bVar6 = *(byte *)(param_1[0xe] + 0x1c8);
    if ((bVar6 & 4) != 0) {
      lVar9 = param_1[6];
      bVar1 = *(byte *)(lVar9 + 0xbd8);
      if ((((int)(uint)bVar1 < *(int *)(lVar9 + 0xbf0)) &&
          (lVar9 = *(longlong *)
                    (*(longlong *)(lVar9 + 0xbe8) + 0x40 +
                    (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), lVar9 != 0)) &&
         ((char)*(byte *)(lVar9 + 0xc4) < '\0')) {
        *(byte *)(lVar9 + 0xc4) = *(byte *)(lVar9 + 0xc4) & 0x7f;
        bVar6 = *(byte *)(param_1[0xe] + 0x1c8);
      }
    }
    if ((bVar6 & 8) != 0) {
      FUN_148f108c8(param_1,0);
    }
    FUN_141074ab4(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
  }
  iVar8 = 1;
  if (1 < iVar2) {
    iVar8 = iVar2;
  }
  *(int *)((longlong)param_1 + 0xc4) = iVar8 + -1;
  bVar6 = (char)(iVar8 + -1) << 3 | *(byte *)(param_1 + 0x18);
  if (*(byte *)((longlong)param_1 + 0xc1) != bVar6) {
    *(byte *)((longlong)param_1 + 0xc1) = bVar6;
    uVar3 = param_1[0xd];
    if (uVar3 < 0xffffffff00000000) {
      plVar14 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar14 = (longlong *)0x0;
      }
      (**(code **)(*plVar14 + 0x58))(plVar14,param_1,uVar3,1);
    }
    else {
      uVar15 = (uint)uVar3;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c998088)) {
        puVar10 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar10 = DAT_14c998080;
        }
        if ((*(uint *)(puVar10 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar15 & 0x1f) & 1) != 0) {
          lVar9 = DAT_14c998060 + (ulonglong)(uVar15 & 0x7fffffff) * 0x68;
          puVar11 = *(uint **)(lVar9 + 0x18);
          if (*(uint **)(lVar9 + 0x18) == (uint *)0x0) {
            puVar11 = (uint *)(lVar9 + 8);
          }
          *puVar11 = *puVar11 | 2;
          *(byte *)(lVar9 + 0x60) = *(byte *)(lVar9 + 0x60) | 1;
        }
      }
    }
  }
  if (0.0 < *(float *)(param_1 + 0x12)) {
    lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar9 + 0x1f0) == 0) {
      puVar12 = (undefined8 *)(lVar9 + 0x458);
    }
    else {
      puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
    }
    uVar4 = *puVar12;
    lVar9 = param_1[6];
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar12 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_b0[2] = lVar13;
    *local_b0 = &PTR_FUN_14b9df3f0;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,lVar9);
    puVar12[4] = param_1;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 0;
    local_9c = 0xbf800000;
    FUN_1406f4044(uVar4,param_1 + 0x1e,&local_98);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_b0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014115b2eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1);
  return;
}



// FUNCTION 14115b614 FUN_14115b614 body=81 status=ok
// SIG undefined FUN_14115b614(void)

void FUN_14115b614(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(longlong *)(param_1 + 0x30);
  local_10 = DAT_14cbe7778;
  FUN_1447cd2ec(local_18 + 0xaf0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115b666 FUN_14115b666 body=341 status=ok
// SIG undefined FUN_14115b666(void)

void FUN_14115b666(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x30);
  local_40 = DAT_14cbe7770;
  local_48 = lVar3;
  FUN_1447cd2ec(lVar3 + 0xaf0);
  if (param_2 != '\0') {
    local_40 = DAT_14cbe7780;
    local_48 = lVar3;
    FUN_1447cd2ec(lVar3 + 0xaf0);
  }
  FUN_140994e4c(lVar3,DAT_14cbe7720,*(undefined1 *)(param_1 + 0xe6),0);
  (**(code **)(*(longlong *)(lVar3 + 0x520) + 0x10))(lVar3 + 0x520,&local_48);
  plVar5 = local_40;
  lVar4 = local_48;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
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
  if (lVar4 != 0) {
    FUN_1408f4152(lVar4,2,*(undefined1 *)(param_1 + 0xe6));
  }
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
  if (*(char *)(param_1 + 200) != '\0') {
    FUN_14115b7bc(lVar3);
    *(undefined1 *)(param_1 + 200) = 0;
  }
  *(undefined1 *)(param_1 + 0xe2) = 0;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115b7bc FUN_14115b7bc body=37 status=ok
// SIG undefined FUN_14115b7bc(void)

void FUN_14115b7bc(longlong param_1,char param_2)

{
  if (((param_2 != '\0') && (*(longlong *)(param_1 + 0xb38) != 0)) &&
     (*(longlong **)(param_1 + 0xb40) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014115b7dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0xb40) + 0x38))();
    return;
  }
  return;
}



// FUNCTION 14115b7e2 FUN_14115b7e2 body=92 status=ok
// SIG undefined FUN_14115b7e2(void)

undefined8 * FUN_14115b7e2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b05e750;
  plVar3 = (longlong *)param_1[3];
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
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14115b83e FUN_14115b83e body=134 status=ok
// SIG undefined FUN_14115b83e(void)

void FUN_14115b83e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x270);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x268);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_1401c38e0(lVar3);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x270) = 0;
  if (*(int *)(param_1 + 0x274) != 0) {
    FUN_14115b8c4(param_1 + 0x268,0);
    return;
  }
  return;
}



// FUNCTION 14115b8c4 FUN_14115b8c4 body=306 status=ok
// SIG undefined FUN_14115b8c4(void)

void FUN_14115b8c4(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14115b92d;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14115b92d:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 14115b9f6 FUN_14115b9f6 body=1154 status=ok
// SIG undefined FUN_14115b9f6(void)

void FUN_14115b9f6(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_20;
  undefined4 uStack_1c;
  undefined7 local_18;
  undefined1 uStack_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  uStack_11 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_18 = (undefined7)uVar2;
      uStack_11 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  uStack_1c = uStack_1c & 0xffffff;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_140a4831c;
      local_48 = 0x1000000008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,(longlong)&uStack_1c + 3);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,(longlong)&uStack_1c + 3);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,(longlong)&uStack_1c + 3);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_1c._3_1_ = (undefined1)uVar2;
      local_18 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,(longlong)&uStack_1c + 3);
    }
  }
  local_20 = 0;
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
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_20 = (int)uVar2;
      uStack_1c = (uint)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14115be7a(CONCAT17(uStack_11,local_18),uStack_1c._3_1_,local_20 != 0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115be7a FUN_14115be7a body=130 status=ok
// SIG undefined FUN_14115be7a(void)

void FUN_14115be7a(longlong *param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140da3b08();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140da3b08();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (*(char *)(lVar4 + 0x56) == '\0') {
          *(undefined1 *)(lVar4 + 0x56) = 1;
          if (param_3 == '\0') {
            if (param_2 != '\0') {
              *(undefined1 *)(lVar4 + 0x54) = 1;
              *(char *)(lVar4 + 0x55) = param_2;
            }
          }
          else {
            *(undefined1 *)(lVar4 + 0x54) = 2;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14115befc FUN_14115befc body=55 status=ok
// SIG undefined FUN_14115befc(void)

bool FUN_14115befc(ulonglong param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if ((((DAT_14ca964f0 == '\x01') && ((DAT_14c760e14 & 1) != 0)) ||
      ((&DAT_14ca814b8)[(param_1 & 0xffff) * 0xf] != 1)) || (DAT_14c760e10 != 2)) {
    return false;
  }
  cVar1 = FUN_14743086d();
  bVar6 = true;
  if (cVar1 == '\0') {
    uVar5 = 1 << ((byte)param_1 & 0x1f);
    uVar3 = (uint)(param_1 & 0xffff);
    if ((&DAT_14ca814b8)[(param_1 & 0xffff) * 0xf] == 1) {
      puVar2 = &DAT_14ca96938;
      if (DAT_14ca96988 != (undefined4 *)0x0) {
        puVar2 = DAT_14ca96988;
      }
      uVar4 = (ulonglong)(uVar3 >> 5);
      if ((puVar2[uVar4] & uVar5) != 0) {
        return true;
      }
    }
    else {
      uVar4 = (ulonglong)(uVar3 >> 5);
    }
    puVar2 = &DAT_14ca96b08;
    if (DAT_14ca96b58 != (undefined4 *)0x0) {
      puVar2 = DAT_14ca96b58;
    }
    if ((puVar2[uVar4] & uVar5) == 0) {
      bVar6 = DAT_14ca964d8 == 1;
    }
  }
  return bVar6;
}



// FUNCTION 14115bf34 FUN_14115bf34 body=181 status=ok
// SIG undefined FUN_14115bf34(void)

void FUN_14115bf34(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b2ed060;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3005;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3002;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3002;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xf00000d0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  param_1[0x19] = 0x3e4ccccd00000000;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x3dcccccd;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x101) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return;
}



// FUNCTION 14115bfea FUN_14115bfea body=96 status=ok
// SIG undefined FUN_14115bfea(void)

ulonglong FUN_14115bfea(longlong param_1)

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
LAB_14115c02d:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14115c02d;
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



// FUNCTION 14115c04a FUN_14115c04a body=114 status=ok
// SIG undefined FUN_14115c04a(void)

void FUN_14115c04a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  
  *(undefined8 *)(param_1 + 0xe0) = 0;
  plVar3 = *(longlong **)(param_1 + 0xe8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
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
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      bVar4 = *(char *)(*(longlong *)(param_1 + 0xe0) + 0xa0) == '\0';
      goto LAB_14115c089;
    }
  }
  bVar4 = false;
LAB_14115c089:
  FUN_14115c0bc(param_1,bVar4);
  return;
}



// FUNCTION 14115c0bc FUN_14115c0bc body=489 status=ok
// SIG undefined FUN_14115c0bc(void)

void FUN_14115c0bc(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar4 = *(longlong *)(param_1 + 200);
  if (lVar4 == 0) {
    uVar5 = FUN_14110242a();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 200) = lVar4;
  }
  plVar1 = (longlong *)(param_1 + 0xc0);
  lVar7 = *(longlong *)(param_1 + 0xd0);
  if (lVar7 == 0) {
    if (lVar4 == 0) {
      return;
    }
    if (*plVar1 == 0) {
      return;
    }
    plVar8 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
      return;
    }
    uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
    lVar7 = FUN_144aff482(uVar5,plVar1);
    *(longlong *)(param_1 + 0xd0) = lVar7;
    if (lVar7 == 0) {
      return;
    }
  }
  if (((((*(byte *)(param_1 + 0x108) & 2) == 0) && (*(int *)(param_1 + 0x14) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0x10), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar8 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar8 != (longlong *)0x0) && ((int)plVar8[2] == *(int *)(param_1 + 0x14))) &&
       (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar4 = *plVar8, lVar4 != 0)))) {
      if (*(longlong *)(param_1 + 200) == 0) {
        uVar5 = FUN_14110242a((ulonglong)(uVar2 >> 0x10),lVar7);
        lVar6 = FUN_14477b664(uVar5);
        *(longlong *)(param_1 + 200) = lVar6;
        lVar7 = *(longlong *)(param_1 + 0xd0);
        if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
          plVar8 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar8 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
            lVar7 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
            lVar7 = FUN_144aff482(uVar5,plVar1);
          }
          *(longlong *)(param_1 + 0xd0) = lVar7;
        }
      }
      cVar3 = FUN_14109961a(lVar4 + 0x48,lVar7,param_2,param_2 ^ 1);
      if (cVar3 != '\0') {
        FUN_1447f69b6(lVar4 + 0x1f0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14115c2a6 FUN_14115c2a6 body=489 status=ok
// SIG undefined FUN_14115c2a6(void)

void FUN_14115c2a6(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if (param_2 == 0) {
    return;
  }
  lVar9 = *(longlong *)(param_2 + 0x20);
  if (lVar9 == 0) {
    uVar5 = FUN_14110242a();
    lVar9 = FUN_14477b664(uVar5);
    *(longlong *)(param_2 + 0x20) = lVar9;
  }
  lVar7 = *(longlong *)(param_2 + 0x28);
  if (lVar7 == 0) {
    if ((lVar9 == 0) || (*(longlong *)(param_2 + 0x18) == 0)) goto LAB_14115c314;
    plVar8 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
      *(undefined8 *)(param_2 + 0x28) = 0;
      goto LAB_14115c314;
    }
    uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
    lVar7 = FUN_144aff482(uVar5,(longlong *)(param_2 + 0x18));
    *(longlong *)(param_2 + 0x28) = lVar7;
    if (lVar7 == 0) goto LAB_14115c314;
  }
  uVar4 = FUN_14115c490(param_1,lVar7,0);
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(*(longlong *)(param_1 + 8) + 0x50))) {
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + 0x48 + (ulonglong)uVar4 * 0x90) = param_3;
    pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + 0x88 +
                     (ulonglong)uVar4 * 0x90);
    *pbVar1 = *pbVar1 | 0x10;
  }
LAB_14115c314:
  if ((longlong)*(int *)(param_2 + 0x40) != 0) {
    lVar9 = (longlong)*(int *)(param_2 + 0x40) << 5;
    plVar8 = (longlong *)(*(longlong *)(param_2 + 0x38) + 8);
    do {
      lVar7 = plVar8[1];
      if (lVar7 == 0) {
        uVar5 = FUN_14110242a();
        lVar7 = FUN_14477b664(uVar5);
        plVar8[1] = lVar7;
      }
      lVar6 = plVar8[2];
      if (lVar6 == 0) {
        if ((lVar7 != 0) && (*plVar8 != 0)) {
          plVar2 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            plVar8[2] = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar5,plVar8);
            plVar8[2] = lVar6;
            if (lVar6 != 0) goto LAB_14115c34b;
          }
        }
      }
      else {
LAB_14115c34b:
        uVar4 = FUN_14115c490(param_1,lVar6,0);
        if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(*(longlong *)(param_1 + 8) + 0x50))) {
          *(undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + 0x48 + (ulonglong)uVar4 * 0x90) =
               param_3;
          pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + 0x88 +
                           (ulonglong)uVar4 * 0x90);
          *pbVar1 = *pbVar1 | 0x10;
        }
      }
      plVar8 = plVar8 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 14115c490 FUN_14115c490 body=492 status=ok
// SIG undefined FUN_14115c490(void)

undefined4 FUN_14115c490(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  
  uVar5 = 0xffffffff;
  if (param_3 < 0x33 && param_2 != 0) {
    uVar7 = FUN_14105478e(param_2 + 0x18);
    uVar6 = FUN_14115c490(param_1,uVar7,param_3 + 1);
    lVar13 = *(longlong *)(param_1 + 8);
    plVar8 = *(longlong **)(lVar13 + 0x48);
    iVar3 = *(int *)(lVar13 + 0x50);
    lVar11 = (longlong)iVar3;
    if (lVar11 != 0) {
      lVar10 = lVar11 * 0x90;
      plVar12 = plVar8;
      do {
        if (*plVar12 == param_2) {
          if (plVar12 != (longlong *)0x0) goto LAB_14115c665;
          break;
        }
        plVar12 = plVar12 + 0x12;
        lVar10 = lVar10 + -0x90;
      } while (lVar10 != 0);
    }
    puVar1 = (undefined8 *)(lVar13 + 0x48);
    *(uint *)(lVar13 + 0x50) = iVar3 + 1U;
    if (*(uint *)(lVar13 + 0x54) < iVar3 + 1U) {
      FUN_1418ab966(puVar1,iVar3);
      plVar8 = (longlong *)*puVar1;
    }
    lVar10 = lVar11 * 0x90;
    plVar8[lVar11 * 0x12] = param_2;
    plVar8[lVar11 * 0x12 + 1] = 0;
    (plVar8 + lVar11 * 0x12 + 1)[1] = 0;
    *(undefined4 *)(plVar8 + lVar11 * 0x12 + 3) = 2;
    puVar2 = (undefined8 *)((longlong)plVar8 + lVar10 + 0x1c);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)plVar8 + lVar10 + 0x2c);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)((longlong)plVar8 + lVar10 + 0x3c) = 0;
    plVar8[lVar11 * 0x12 + 8] = (longlong)puVar1;
    plVar8[lVar11 * 0x12 + 9] = 0;
    plVar8[lVar11 * 0x12 + 10] = -1;
    plVar8[lVar11 * 0x12 + 0xb] = 0;
    plVar8[lVar11 * 0x12 + 0xd] = 0;
    plVar8[lVar11 * 0x12 + 0xe] = 0x200000000;
    plVar8[lVar11 * 0x12 + 0xf] = 0;
    (plVar8 + lVar11 * 0x12 + 0xf)[1] = 0;
    *(byte *)(plVar8 + lVar11 * 0x12 + 0x11) = *(byte *)(plVar8 + lVar11 * 0x12 + 0x11) & 0xc0;
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
    *(int *)(lVar13 + 0x50 + lVar10) = iVar3;
    *(uint *)(lVar13 + 0x54 + lVar10) = uVar6;
    if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(*(longlong *)(param_1 + 8) + 0x50))) {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + (ulonglong)uVar6 * 0x90;
      iVar4 = *(int *)(lVar11 + 0x70);
      *(uint *)(lVar11 + 0x70) = iVar4 + 1U;
      if (*(uint *)(lVar11 + 0x74) < iVar4 + 1U) {
        FUN_140fadf14(lVar11 + 0x60,iVar4);
      }
      lVar9 = *(longlong *)(lVar11 + 0x68);
      if (*(longlong *)(lVar11 + 0x68) == 0) {
        lVar9 = lVar11 + 0x60;
      }
      *(int *)(lVar9 + (longlong)iVar4 * 4) = iVar3;
    }
    plVar12 = (longlong *)(lVar13 + lVar10);
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      iVar4 = *(int *)(param_1 + 0xc0);
      *(uint *)(param_1 + 0xc0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xc4) < iVar4 + 1U) {
        FUN_1418aba7a(param_1 + 0x18,iVar4);
      }
      lVar13 = param_1 + 0x18;
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        lVar13 = *(longlong *)(param_1 + 0xb8);
      }
      lVar11 = (longlong)iVar4 * 0x10;
      FUN_143e394c0(lVar13 + lVar11);
      *(longlong *)(lVar13 + lVar11) = param_2;
      *(int *)(lVar13 + 8 + lVar11) = iVar3;
    }
LAB_14115c665:
    uVar5 = (undefined4)plVar12[10];
  }
  return uVar5;
}



// FUNCTION 14115c67c FUN_14115c67c body=311 status=ok
// SIG undefined FUN_14115c67c(void)

undefined8 FUN_14115c67c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14115c7ac;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14115c7ac;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_14115c7ac:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14115c755;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_14115c755;
    }
  }
  uVar6 = 0;
LAB_14115c755:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115c7b4 FUN_14115c7b4 body=386 status=ok
// SIG undefined FUN_14115c7b4(void)

void FUN_14115c7b4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0xae8);
  if (lVar1 != 0) {
    if (DAT_14c9a51d8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1433d5220;
      local_30 = FUN_142b32f24;
      local_38 = &LAB_1462ac436;
      local_48 = &LAB_1470c7d1d;
      local_50 = &LAB_1462ac43b;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000008;
      local_70 = 0x10;
      local_78 = 0x560;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxEngineAnimInstance",&DAT_14c9a51d8,FUN_1462ac40e);
    }
    if ((*(int *)(DAT_14c9a51d8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c9a51d8 + 0x38) * 8) == DAT_14c9a51d8 + 0x30)) {
      FUN_1406c78ea(param_1);
      FUN_1406c6972(lVar1,param_1 + 0x1288);
    }
  }
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x1240) + 0x10))(param_1 + 0x1240);
  FUN_1406548f2(param_1);
  FUN_14150af62(param_1);
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x1240) + 0x10))(param_1 + 0x1240);
  if ((lVar1 == lVar2) && ((*(byte *)(param_1 + 0xc71) & 0x20) != 0)) {
    if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 14115c94c FUN_14115c94c body=132 status=ok
// SIG undefined FUN_14115c94c(void)

void FUN_14115c94c(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  puVar1 = (uint *)*param_2;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar6 = *(longlong *)(lVar2 + 0x20);
  lVar7 = 0;
  lVar3 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar3 = lVar7;
  }
  lVar5 = lVar6 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    lVar5 = lVar7;
  }
  lVar4 = lVar6 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    lVar4 = lVar7;
  }
  lVar6 = lVar6 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    lVar6 = lVar7;
  }
  FUN_14115c9d0(param_3 + 8,lVar2,lVar3,lVar5,lVar4,lVar6);
  return;
}



// FUNCTION 14115c9d0 FUN_14115c9d0 body=1656 status=ok
// SIG undefined FUN_14115c9d0(void)

void FUN_14115c9d0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong *plVar1;
  double dVar2;
  undefined2 uVar3;
  ushort uVar4;
  uint uVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  byte bVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  undefined8 unaff_R15;
  undefined1 auStack_168 [44];
  uint local_13c;
  longlong *local_138;
  undefined8 local_130;
  ulonglong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  int local_ec;
  undefined4 uStack_e8;
  int local_e4;
  undefined8 local_e0;
  int local_d8;
  uint local_d4;
  undefined1 local_d0;
  undefined2 local_ca;
  uint local_c8 [8];
  undefined8 local_a8;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_118 = param_3;
  local_110 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab5fa8) && (FUN_144b3d300(&DAT_14cab5fa8), DAT_14cab5fa8 == -1)) {
    lVar10 = DAT_14cab5fb0;
    if (DAT_14cab5fb0 == 0) {
      lVar10 = FUN_14570767c(&DAT_14cab5fb0,0);
    }
    DAT_14cab5fa0 = lVar10;
    _Init_thread_footer(&DAT_14cab5fa8);
  }
  lVar10 = FUN_14009d2a0();
  if (*(ushort *)(param_2 + 0xc) == 0) {
    uVar20 = 0;
  }
  else {
    lVar11 = *(longlong *)(param_2 + 0x28);
    lVar16 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)(lVar11 + 0x1e) == *(short *)(lVar10 + 0x10a)) goto LAB_14115ca6a;
      lVar11 = lVar11 + 0x20;
      lVar16 = lVar16 + -0x20;
    } while (lVar16 != 0);
    lVar11 = 0;
LAB_14115ca6a:
    uVar20 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),lVar11 != 0);
  }
  local_f8 = DAT_14cab5fa0;
  if ((ulonglong)*(ushort *)(param_2 + 0xe) != 0) {
    uVar19 = 0;
    local_13c = (uint)uVar20;
    local_138 = param_1;
    local_128 = (ulonglong)*(ushort *)(param_2 + 0xe);
    do {
      uVar5 = *(uint *)(local_110 + uVar19 * 4);
      lVar10 = *(longlong *)(*param_1 + 8);
      local_120 = (ulonglong)(uVar5 & 0xffff) * 0x128;
      lVar11 = *(longlong *)(lVar10 + 0x100 + local_120);
      plVar6 = *(longlong **)(lVar10 + 0x108 + local_120);
      if (plVar6 == (longlong *)0x0) {
        uVar12 = FUN_14479d2ce(lVar11 + 0x18);
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        if ((*(int *)(lVar11 + 0x1c) == 0) || (uVar23 = *(uint *)(lVar11 + 0x18), (int)uVar23 < 0))
        {
LAB_14115cebe:
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          if ((int)uVar23 < DAT_14c9647dc) {
            puVar18 = (undefined8 *)
                      ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
            if (((puVar18 == (undefined8 *)0x0) ||
                (*(int *)(puVar18 + 2) != *(int *)(lVar11 + 0x1c))) ||
               ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)) goto LAB_14115cebe;
            uVar12 = *puVar18;
          }
        }
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar17 = (int *)((longlong)plVar6 + 0xc);
          *piVar17 = *piVar17 + -1;
          UNLOCK();
          if (*piVar17 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      lVar16 = local_f8;
      lVar11 = param_1[1];
      piVar17 = *(int **)(lVar11 + 0xb0);
      local_130 = uVar12;
      if (*piVar17 == 0 && (char)uVar20 == '\0') {
        puVar18 = (undefined8 *)(lVar11 + 0xb0);
        uVar20 = (ulonglong)local_13c;
LAB_14115ccd5:
        param_1 = local_138;
        if (*(int *)(lVar11 + 0x20) != *(int *)(lVar11 + 0x4c)) {
          lVar16 = lVar11 + 0x50;
          if (*(longlong *)(lVar11 + 0x58) != 0) {
            lVar16 = *(longlong *)(lVar11 + 0x58);
          }
          iVar15 = *(int *)(lVar16 + (ulonglong)
                                     (*(int *)(lVar11 + 0x60) - 1U &
                                     (int)local_f8 + (int)((ulonglong)local_f8 >> 0x20) * 0x17) * 4)
          ;
          if (iVar15 != -1) {
            do {
              plVar6 = (longlong *)(*(longlong *)(lVar11 + 0x18) + (longlong)iVar15 * 0x18);
              if (*plVar6 == local_f8) {
                if (plVar6 != (longlong *)0x0) {
                  local_c8[2] = (uint)plVar6[1];
                  local_c8[0] = 0xffffffff;
                  local_c8[1] = *(undefined4 *)(lVar11 + 0xc0);
                  if ((local_c8[2] != -1) && (lVar16 = FUN_1400e4054(piVar17,local_c8), lVar16 != 0)
                     ) goto LAB_14115cd85;
                }
                break;
              }
              iVar15 = (int)plVar6[2];
            } while (iVar15 != -1);
          }
        }
      }
      else {
        uVar3 = *(undefined2 *)(local_118 + uVar19 * 2);
        local_a8 = 0x10000000000;
        local_80 = 0x10000000000;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        lVar13 = FUN_14009d2a0();
        uVar4 = *(ushort *)(lVar13 + 0x11a);
        iVar24 = uVar4 + 1;
        iVar15 = iVar24;
        if (0xff < uVar4) {
          local_a8 = CONCAT44(0x100,(int)local_a8);
          FUN_14497ddce(local_c8,0);
          iVar15 = (int)local_a8 + iVar24;
        }
        iVar9 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar9 = iVar15;
        }
        local_a8 = CONCAT44(local_a8._4_4_,iVar15);
        if (iVar15 % 0x20 != 0) {
          bVar14 = -(char)(iVar15 % 0x20);
          local_c8[iVar9 >> 5] = (local_c8[iVar9 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
        }
        FUN_1447c45ca(local_c8,0,iVar24,0);
        local_c8[uVar4 >> 5] = local_c8[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
        local_e0 = lVar16;
        FUN_14115d0ae(lVar11,&local_e4,&local_e0);
        local_ec = -1;
        uStack_e8 = *(undefined4 *)(lVar11 + 0xc0);
        uVar12 = FUN_140732858(*(undefined8 *)(lVar11 + 0xb0));
        local_d8 = local_e4;
        local_e0 = CONCAT44(uStack_e8,local_ec);
        uVar20 = (ulonglong)local_13c;
        local_d0 = (undefined1)local_13c;
        local_d4 = uVar5;
        local_ca = uVar3;
        FUN_1449da5a2(uVar12,&local_ca,&local_e0);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        lVar11 = local_138[1];
        puVar18 = (undefined8 *)(lVar11 + 0xb0);
        piVar17 = *(int **)(lVar11 + 0xb0);
        param_1 = local_138;
        if (*piVar17 == 0) goto LAB_14115ccd5;
LAB_14115cd85:
        FUN_14115d0ae(lVar11,&local_ec);
        local_e0 = CONCAT44(*(undefined4 *)(lVar11 + 0xc0),0xffffffff);
        local_d8 = local_ec;
        piVar17 = *(int **)(lVar11 + 0xb0);
        if (*piVar17 != 0) {
          thunk_FUN_140adeba6(piVar17,&local_e0);
          piVar17 = (int *)*puVar18;
        }
        cVar8 = FUN_14115d04a(piVar17);
        bVar14 = *(byte *)(*(longlong *)(lVar11 + 0x68) + 0x20 + (longlong)local_d8 * 0x28);
        if (cVar8 == '\0') {
          if ((bVar14 & 1) == 0) {
LAB_14115d01a:
            FUN_145815f88(local_c8,local_130);
            FUN_145815e0e(lVar11,local_ec,cVar8 + '\x01',local_c8);
          }
        }
        else if (((bVar14 & 2) == 0 & bVar14) == 0) {
          uVar5 = *(uint *)(lVar11 + 0xa8);
          lVar16 = *(longlong *)(lVar11 + 0xa0);
          uVar23 = 0;
          if (0 < (int)uVar5) {
            uVar20 = (ulonglong)uVar5;
            uVar21 = uVar5;
            do {
              uVar20 = uVar20 >> 1;
              uVar22 = (uint)uVar20 + uVar23;
              if (*(int *)(lVar16 + (ulonglong)uVar22 * 0x1c) < local_d8) {
                uVar23 = uVar22 + (uVar21 & 1);
              }
              bVar7 = 1 < uVar21;
              uVar21 = (uint)uVar20;
            } while (bVar7);
          }
          uVar20 = (ulonglong)local_13c;
          param_1 = local_138;
          if ((((int)uVar5 <= (int)uVar23) ||
              (local_d8 < *(int *)(lVar16 + (ulonglong)uVar23 * 0x1c))) ||
             (lVar16 + (ulonglong)uVar23 * 0x1c == -4)) goto LAB_14115d01a;
        }
      }
      dVar2 = *(double *)(param_6 + uVar19 * 8);
      local_108 = *(undefined8 *)(lVar10 + local_120 + 0x100);
      local_100 = *(longlong *)(lVar10 + local_120 + 0x108);
      if (local_100 != 0) {
        LOCK();
        *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
        UNLOCK();
      }
      FUN_14115d1aa(&local_108,(float)dVar2,param_5 + uVar19 * 0x14);
      uVar19 = uVar19 + 1;
    } while (uVar19 != local_128);
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14115d04a FUN_14115d04a body=99 status=ok
// SIG undefined FUN_14115d04a(void)

undefined8 FUN_14115d04a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x30));
  }
  return uVar2;
}



// FUNCTION 14115d0ae FUN_14115d0ae body=250 status=ok
// SIG undefined FUN_14115d0ae(void)

longlong * FUN_14115d0ae(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_3;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x18);
        if (*plVar1 == lVar2) {
          if ((plVar1 != (longlong *)0x0) &&
             (lVar4 = plVar1[1], *(int *)param_2 = (int)lVar4, (int)lVar4 != -1))
          goto LAB_14115d138;
          break;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
    }
  }
  FUN_145815ea0(param_1 + 0x68,&local_40);
  *local_38 = lVar2;
  *(undefined1 *)((longlong)local_38 + 0x1d) = 0;
  *(undefined1 *)(local_38 + 4) = 0;
  *(int *)param_2 = (int)local_40;
  local_40 = param_3;
  local_38 = param_2;
  FUN_1458160bc((longlong *)(param_1 + 0x18),local_44,&local_40,0);
LAB_14115d138:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115d1aa FUN_14115d1aa body=1212 status=ok
// SIG undefined FUN_14115d1aa(void)

void FUN_14115d1aa(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  longlong *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_bf;
  undefined3 uStack_bb;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_f8 = *param_3;
  uStack_f4 = param_3[1];
  uStack_f0 = param_3[2];
  uStack_ec = param_3[3];
  local_118 = *param_1;
  local_110 = param_1[1];
  if (local_110 != 0) {
    LOCK();
    *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
    UNLOCK();
  }
  FUN_14115d6de(&local_108,&local_118);
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  if (local_108 == (longlong *)0x0) {
    if (local_100 != (longlong *)0x0) {
      (**(code **)(*local_100 + 0x30))(local_100,&local_b8);
    }
  }
  else {
    (**(code **)(*local_108 + 8))(local_108,&local_b8);
  }
  local_e0 = 0x100000000;
  local_d0 = 0xffffffff;
  local_c8 = 0;
  iVar13 = 0;
  uStack_d8 = local_a8;
  if (local_90 != 0) {
    FUN_1449c0562(&local_e0);
    iVar13 = local_90;
  }
  local_128 = local_d0;
  uVar4 = local_128;
  local_120 = local_c8;
  local_11c = local_c4;
  local_138 = local_e0;
  local_130 = uStack_d8;
  local_128._4_4_ = (int)(local_d0 >> 0x20);
  local_140 = &local_b8;
  if ((local_128._4_4_ != iVar13) || (uStack_d8 != local_a8)) {
    iVar5 = local_128._4_4_;
    local_128 = uVar4;
    do {
      if ((int)uStack_b0 != local_84) {
        uVar4 = *(ulonglong *)(*local_140 + (longlong)iVar5 * 0x48);
        uVar8 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        puVar9 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar9 = local_80;
        }
        iVar5 = *(int *)(puVar9 + (ulonglong)(local_70 - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
        while (iVar5 != -1) {
          puVar10 = (ulonglong *)(local_b8 + (longlong)iVar5 * 0x48);
          if (*puVar10 == uVar4) goto LAB_14115d5ad;
          iVar5 = (int)puVar10[8];
        }
      }
      puVar10 = (ulonglong *)0x0;
LAB_14115d5ad:
      *(undefined4 *)(puVar10 + 1) = 3;
      *(undefined4 *)((longlong)puVar10 + 0xc) = param_2;
      puVar10[2] = CONCAT44(uStack_f4,local_f8);
      puVar10[3] = CONCAT44(uStack_ec,uStack_f0);
      *(undefined4 *)(puVar10 + 4) = (undefined4)local_e0;
      *(undefined4 *)((longlong)puVar10 + 0x24) = local_e0._4_4_;
      *(undefined4 *)(puVar10 + 5) = (undefined4)uStack_d8;
      *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_d8._4_4_;
      puVar10[6] = local_d0;
      *(undefined1 *)(puVar10 + 7) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x39) = local_bf;
      *(uint *)((longlong)puVar10 + 0x3c) = CONCAT31(uStack_bb,local_bf._3_1_);
      local_128 = CONCAT44(local_128._4_4_,(uint)local_128 & ~local_138._4_4_);
      FUN_1449c0562(&local_138);
      iVar5 = local_128._4_4_;
    } while (((local_128._4_4_ != iVar13) || (local_130 != local_a8)) ||
            (uVar4 = local_128, local_140 != &local_b8));
  }
  local_128 = uVar4;
  if (local_108 == (longlong *)0x0) {
    if (local_100 != (longlong *)0x0) {
      (**(code **)(*local_100 + 0x28))(local_100,&local_b8);
    }
  }
  else {
    (**(code **)*local_108)(local_108,&local_b8);
  }
  iVar13 = *(int *)(*param_1 + 0x1c);
  if (((((iVar13 != 0) && (uVar8 = *(uint *)(*param_1 + 0x18), -1 < (int)uVar8)) &&
       (((int)uVar8 < DAT_14c9647dc &&
        ((plVar11 = (longlong *)
                    ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
         plVar11 != (longlong *)0x0 && ((int)plVar11[2] == iVar13)))))) &&
      ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)) &&
     ((((longlong *)*plVar11 != (longlong *)0x0 &&
       (lVar6 = (**(code **)(*(longlong *)*plVar11 + 0x180))(), lVar6 != 0)) &&
      ((*(char *)(lVar6 + 0x152) == '\x01' || (*(char *)(lVar6 + 0x152) == '\x03')))))) {
    lVar7 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x1f0) + 0x40);
    if (lVar7 != 0) {
      lVar12 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x1f0) + 0x38) + lVar12);
        if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
          plVar11 = *(longlong **)(lVar3 + 0x448);
          if ((plVar11 != (longlong *)0x0) && ((*(uint *)(plVar11 + 1) >> 0x1e & 1) == 0)) {
            local_158 = *param_3;
            uStack_154 = param_3[1];
            uStack_150 = param_3[2];
            uStack_14c = param_3[3];
            (**(code **)(*plVar11 + 0x818))(plVar11,param_2,&local_158,param_4);
          }
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar7 * 8 != lVar12);
    }
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14115d668(&local_b8);
  plVar11 = (longlong *)param_1[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115d668 FUN_14115d668 body=118 status=ok
// SIG undefined FUN_14115d668(void)

void FUN_14115d668(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14115d6de FUN_14115d6de body=345 status=ok
// SIG undefined FUN_14115d6de(void)

undefined8 * FUN_14115d6de(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar10 = *(uint *)(*param_2 + 0x48);
  if ((uVar10 >> (DAT_14cab58a8 & 0x1f) & 1) != 0) {
    uVar10 = (1 << ((byte)DAT_14cab58a8 & 0x1f)) - 1U & uVar10;
    uVar11 = (ulonglong)uVar10 - (ulonglong)(uVar10 >> 1 & 0x55555555);
    uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
    uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    lVar4 = *(longlong *)(*param_2 + 0x38);
    uVar8 = (ulonglong)*(ushort *)(lVar4 + uVar11 * 6);
    puVar9 = (undefined8 *)(lVar4 + uVar8);
    if (uVar8 == 0xffff) {
      puVar9 = (undefined8 *)0x0;
    }
    puVar9 = (undefined8 *)((ulonglong)*(byte *)(lVar4 + 4 + uVar11 * 6) + (longlong)puVar9);
    puVar6 = (undefined8 *)0x0;
    if ((puVar9 == (undefined8 *)0x0) ||
       (cVar3 = *(char *)(lVar4 + uVar11 * 6 + 5), puVar6 = puVar9, cVar3 == '\0'))
    goto LAB_14115d797;
    if ((cVar3 == '\x02') || (cVar3 == '\x01')) {
      puVar6 = (undefined8 *)*puVar9;
      goto LAB_14115d797;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_14115d797:
  *param_1 = puVar6;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar7 = FUN_140165676(&local_28);
  param_1[1] = uVar7;
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14115d838 FUN_14115d838 body=1407 status=ok
// SIG undefined FUN_14115d838(void)

void FUN_14115d838(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  code *local_c0;
  longlong local_b0;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98 [13];
  
  local_98[9] = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[8] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_98);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_98);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_98[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_98);
    }
  }
  plVar4 = *(longlong **)(param_2 + 0x38);
  uStack_a0 = 0;
  uStack_9c = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_c8 = (undefined *)FUN_1446ddbd2();
    local_c0 = FUN_1468d96f0;
    local_d0 = 0;
    local_d8 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_a0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_a0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_a0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_a0 = (undefined4)uVar2;
      uStack_9c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_a0);
    }
  }
  local_a4 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
    FUN_14475b26a();
    local_c0 = FUN_1408a629c;
    local_c8 = &DAT_14c9520b8;
    local_d0 = 0;
    local_d8 = 0x1008101;
    FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
    atexit(FUN_14281708e);
    _Init_thread_footer(&DAT_14c9523c8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_a4);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_a4);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_a4 = (undefined4)uVar2;
      uStack_a0 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_a4);
    }
  }
  uVar6 = local_a4;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b0 = CONCAT44(uStack_9c,uStack_a0);
  if ((local_b0 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c();
  }
  plVar8 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    plVar8 = local_98;
  }
  FUN_14115ddb8(plVar8,&local_b0,uVar6);
  lVar7 = *plVar8;
  if (DAT_14c950c29 == 1) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar7 = *plVar8;
    }
  }
  bVar5 = DAT_14c950c29;
  *param_3 = lVar7;
  plVar8 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    plVar8 = local_98;
  }
  lVar7 = plVar8[1];
  if ((bVar5 & 1) != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar7 = plVar8[1];
    }
  }
  plVar8 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    plVar8 = local_98;
  }
  param_3[1] = lVar7;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = local_98;
  }
  FUN_1403de7ba(param_3 + 2,plVar4 + 2);
  FUN_1409ed7fc(param_3 + 6,plVar8 + 6);
  param_3[8] = plVar8[8];
  FUN_1409ed859(local_98[6],local_98[7] & 0xffffffff);
  if (local_98[6] != 0) {
    FUN_1400020a8();
  }
  if (local_98[4] != 0) {
    FUN_1400020a8();
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_98[9] ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115ddb8 FUN_14115ddb8 body=161 status=ok
// SIG undefined FUN_14115ddb8(void)

longlong FUN_14115ddb8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = &local_40;
  local_28 = 4;
  local_20 = 3;
  local_40 = param_3;
  FUN_14095c1ce(param_1 + 0x30,param_2,puVar2,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_28) {
      puVar2 = (undefined4 *)CONCAT44(uStack_3c,local_40);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(CONCAT44(uStack_3c,local_40));
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115de5a FUN_14115de5a body=600 status=ok
// SIG undefined FUN_14115de5a(void)

void FUN_14115de5a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)*param_2;
  if (plVar2 == (longlong *)0x0) {
LAB_14115dfd7:
    plVar9 = (longlong *)0x0;
  }
  else {
    lVar4 = (**(code **)(*plVar2 + 8))();
    lVar5 = FUN_1458166ae();
    if ((lVar5 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_14115dfd7;
    plVar9 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30) {
      plVar9 = plVar2;
    }
  }
  *(longlong **)(param_1 + 0x21f8) = plVar9;
  FUN_140655f5e(param_1,param_2);
  lVar4 = FUN_1447210f0(param_1 + -0x400);
  if (lVar4 == 0) goto LAB_14115dfb4;
  FUN_1458166e8(param_1 + -0x400);
  if ((*(longlong *)(param_1 + 0x21f8) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x21f8) + 0x4a0) == 0)) goto LAB_14115dfb4;
  uVar6 = thunk_FUN_14050fd64();
  lVar4 = *(longlong *)(param_1 + 0x21f8);
  lVar5 = *(longlong *)(lVar4 + 0x4a8);
  if (lVar5 == 0) {
    uVar7 = FUN_140de9e7e();
    lVar5 = FUN_14477b664(uVar7);
    *(longlong *)(lVar4 + 0x4a8) = lVar5;
  }
  lVar8 = *(longlong *)(lVar4 + 0x4b0);
  if (((lVar8 == 0) && (lVar8 = 0, lVar5 != 0)) && (*(longlong *)(lVar4 + 0x4a0) != 0)) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_14115e0ae:
      lVar8 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_14115e0ae;
      uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar8 = FUN_144aff482(uVar7,(longlong *)(lVar4 + 0x4a0));
    }
    *(longlong *)(lVar4 + 0x4b0) = lVar8;
  }
  local_48 = 0;
  FUN_14088df30(uVar6,&local_40,lVar8,0);
  plVar2 = local_38;
  if ((undefined8 *)(param_1 + 0x24a8) != &local_40) {
    *(undefined8 *)(param_1 + 0x24a8) = local_40;
    local_40 = 0;
    plVar9 = *(longlong **)(param_1 + 0x24b0);
    if (local_38 != plVar9) {
      local_38 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x24b0) = plVar2;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
  }
  plVar2 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_38 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_14115dfb4:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115e0b4 thunk_FUN_14050fd64 body=5 status=ok
// SIG undefined thunk_FUN_14050fd64(void)

void thunk_FUN_14050fd64(void)

{
  if (*(longlong *)(DAT_14cb0d2b0 + 0x360) != 0) {
    return;
  }
  FUN_140033559(".\\Runtime/Engine/Private/AssetManager.cpp",0x1e5,
                L"Cannot use AssetManager if no AssetManagerClassName is defined!");
  FUN_14795019f(DAT_14c951640);
  return;
}



// FUNCTION 14115e0ba FUN_14115e0ba body=95 status=ok
// SIG undefined FUN_14115e0ba(void)

longlong FUN_14115e0ba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  FUN_14093c00e(param_1 + 0x70,param_2 + 0x70);
  lVar1 = *(longlong *)(param_2 + 0x80);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x80);
    }
  }
  *(longlong *)(param_1 + 0x80) = lVar1;
  return param_1;
}



// FUNCTION 14115e11a FUN_14115e11a body=93 status=ok
// SIG undefined FUN_14115e11a(void)

undefined8 * FUN_14115e11a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1407778c7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14115e1e0(param_1,iVar1);
      FUN_14115e177(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14115e177 FUN_14115e177 body=104 status=ok
// SIG undefined FUN_14115e177(void)

void FUN_14115e177(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      puVar2 = (undefined8 *)(param_2 + -0x70);
      puVar3 = (undefined8 *)(param_1 + -0x70);
      for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_14034cca6(param_1,param_2);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
      param_1 = param_1 + 0xb0;
      param_2 = param_2 + 0xb0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14115e1e0 FUN_14115e1e0 body=232 status=ok
// SIG undefined FUN_14115e1e0(void)

void FUN_14115e1e0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0xb0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    iVar2 = (int)(uVar1 / 0xb0);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar4 = iVar2;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xb0,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14115e2c8 FUN_14115e2c8 body=260 status=ok
// SIG undefined FUN_14115e2c8(void)

void FUN_14115e2c8(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  if (((((*(int *)(param_1 + 0xc) != 0) && (uVar6 = *(uint *)(param_1 + 8), -1 < (int)uVar6)) &&
       ((int)uVar6 < DAT_14c9647dc)) &&
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0xc))))) &&
     (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar4 = *plVar5, lVar4 != 0)))) {
    FUN_14115e3cc();
    uVar1 = *(ulonglong *)(lVar4 + 0x28);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x00014115e3c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x58))(plVar5,lVar4,uVar1,0x3b);
      return;
    }
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        lVar4 = *(longlong *)(lVar2 + 0x18);
        if (*(longlong *)(lVar2 + 0x18) == 0) {
          lVar4 = lVar2 + 8;
        }
        *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 0x8000000;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 14115e3cc FUN_14115e3cc body=391 status=ok
// SIG undefined FUN_14115e3cc(void)

void FUN_14115e3cc(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined4 local_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((*(char *)(param_1 + 0x178) == '\x03') &&
      (*(longlong **)(param_1 + 0x3f70) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3f70) + 0x80))(), cVar1 != '\0')) {
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x10c0) + 0x28))(param_1 + 0x10c0);
    (**(code **)(*(longlong *)(param_1 + 0x10c0) + 0x20))(param_1 + 0x10c0,uVar2);
    local_a8[0] = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0xffffffff;
    local_2c = 0;
    local_2a = 1;
    local_29 = 0;
    lVar4 = FUN_140316ff8();
    uVar3 = FUN_1447210f0(param_1);
    local_b8 = local_a8;
    FUN_140bdce7c(uVar3,lVar4 + 0x150,param_1,0);
  }
  if ((*(byte *)(param_1 + 0x65) & 0x18) == 0x10) {
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0x3a20) + 0x10))(param_1 + 0x3a20);
    FUN_14115e554(uVar3);
    FUN_14115e5f6(param_1);
    FUN_140b54fee(param_1 + 0x4398);
    if ((longlong)*(int *)(param_1 + 0x3f88) != 0) {
      lVar4 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x3f80) + 8 + lVar4) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x3f80) + lVar4) != 0)) {
          FUN_1447f69b6(param_1 + 0x3f80);
          break;
        }
        lVar4 = lVar4 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x3f88) * 0x10 != lVar4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14115e554 FUN_14115e554 body=162 status=ok
// SIG undefined FUN_14115e554(void)

void FUN_14115e554(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if ((((*(longlong *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x2c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(param_1 + 0x2c))) &&
       ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar6;
      }
      else {
        lVar4 = 0;
      }
      if ((*(char *)(lVar4 + 0x178) == '\x03') &&
         (iVar2 = *(int *)(param_1 + 0x20), (longlong)iVar2 != 0)) {
        lVar4 = *(longlong *)(param_1 + 0x18);
        lVar5 = 0;
        do {
          lVar3 = *(longlong *)(lVar4 + lVar5);
          if (lVar3 != 0) {
            FUN_14115e90a(lVar3,1);
          }
          lVar5 = lVar5 + 0x10;
        } while ((longlong)iVar2 * 0x10 != lVar5);
      }
    }
  }
  return;
}



// FUNCTION 14115e5f6 FUN_14115e5f6 body=621 status=ok
// SIG undefined FUN_14115e5f6(void)

void FUN_14115e5f6(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  char local_80 [16];
  longlong *local_70;
  int local_58;
  char local_50;
  undefined8 local_48;
  longlong *local_40;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_1 + 0x3f70) != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    local_80[0] = '\0';
    local_58 = 0;
    FUN_1456bb102(local_80,param_1);
    local_50 = '\0';
    local_28 = 0;
    FUN_14115e864(*(longlong *)(param_1 + 0x3f70) + 0x710,param_1 + 0x9128,param_1,local_80);
    lVar3 = DAT_14c9a3da0;
    if ((longlong)local_28 != 0) {
      lVar7 = (longlong)local_28 + -1;
      lVar8 = lVar7 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8));
      if (*(longlong *)(lVar3 + lVar8) != 0) {
        FUN_1400020a8();
      }
      lVar3 = DAT_14c9a3da0;
      iVar6 = (int)lVar7;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
      }
      *(undefined4 *)(lVar3 + lVar8) = 0xffffffff;
      iVar4 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar4 = DAT_14c9a3dd0;
      }
      *(int *)(lVar3 + 4 + lVar8) = iVar4;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar5 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar5 = DAT_14c9a3dc0;
      }
      iVar4 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar4 = iVar6;
      }
      bVar2 = (byte)lVar7 & 0x1f;
      DAT_14c9a3dd0 = iVar6;
      *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
           *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) &
           (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      local_28 = 0;
    }
    if (local_50 != '\0') {
      if (local_50 == '\x01') {
        local_48 = 0;
      }
      else if ((local_50 == '\x03') && (local_40 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
      local_50 = '\0';
    }
    lVar3 = DAT_14c9a3da0;
    if ((longlong)local_58 != 0) {
      lVar7 = (longlong)local_58 + -1;
      lVar8 = lVar7 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8));
      if (*(longlong *)(lVar3 + lVar8) != 0) {
        FUN_1400020a8();
      }
      lVar3 = DAT_14c9a3da0;
      iVar6 = (int)lVar7;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
      }
      *(undefined4 *)(lVar3 + lVar8) = 0xffffffff;
      iVar4 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar4 = DAT_14c9a3dd0;
      }
      *(int *)(lVar3 + 4 + lVar8) = iVar4;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar5 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar5 = DAT_14c9a3dc0;
      }
      iVar4 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar4 = iVar6;
      }
      bVar2 = (byte)lVar7 & 0x1f;
      DAT_14c9a3dd0 = iVar6;
      *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
           *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) &
           (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      local_58 = 0;
    }
    if ((local_80[0] == '\x03') && (local_70 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115e864 FUN_14115e864 body=109 status=ok
// SIG undefined FUN_14115e864(void)

void FUN_14115e864(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((0 < (int)param_1[1]) && ((int)param_1[1] == (int)param_2[1])) {
    lVar3 = 0;
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_1470dbffc(*param_1 + lVar3,*param_2 + lVar1,param_3,param_4);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
      lVar3 = lVar3 + 0x70;
    } while (lVar2 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14115e8d2 FUN_14115e8d2 body=55 status=ok
// SIG undefined FUN_14115e8d2(void)

void FUN_14115e8d2(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_1449ce79a(param_1 + -0x10c0);
  plVar2 = (longlong *)(param_1 + 0x5778);
  if (cVar1 == '\0') {
    plVar2 = (longlong *)(param_1 + 0x5760);
  }
                    /* WARNING: Could not recover jumptable at 0x00014115e905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2);
  return;
}



// FUNCTION 14115e90a FUN_14115e90a body=4893 status=ok
// SIG undefined FUN_14115e90a(void)

void FUN_14115e90a(longlong param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_f8 [40];
  char local_d0 [16];
  longlong *local_c0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 == 0) goto LAB_14115f41d;
  if ((*(longlong *)(param_1 + 0xf8) == 0) || (*(int *)(param_1 + 0xf4) == 0)) {
LAB_14115f450:
    uVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xf0);
    uVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != *(int *)(param_1 + 0xf4))) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) ||
         ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_14115f450;
      uVar6 = *puVar7;
    }
  }
  local_d0[0] = '\0';
  local_a8[0] = 0;
  FUN_1456bb102(local_d0,uVar6);
  puVar8 = &local_a0;
  FUN_1448729ea(lVar3 + 0x38,puVar8,local_d0);
  uVar5 = local_a0;
  if (local_80 != 3) {
    puVar9 = &local_78;
    FUN_1400b56fe(puVar9,&local_a0,3);
    uVar5 = 0;
    if (local_58 != 0) {
      uVar5 = local_78;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar9 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar4)(puVar9);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  FUN_14020a6cc(param_1 + 0x2c,1);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar8 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar4)(puVar8);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  FUN_1448173f8(local_a8);
  if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if ((*(longlong *)(param_1 + 0xf8) == 0) || (*(int *)(param_1 + 0xf4) == 0)) {
LAB_14115f457:
    uVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xf0);
    uVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != *(int *)(param_1 + 0xf4))) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) ||
         ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_14115f457;
      uVar6 = *puVar7;
    }
  }
  local_d0[0] = '\0';
  local_a8[0] = 0;
  FUN_1456bb102(local_d0,uVar6);
  puVar8 = &local_78;
  FUN_1448729ea(lVar3 + 0x98,puVar8,local_d0);
  uVar5 = FUN_14005fbd2(puVar8,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  FUN_140841e14(param_1 + 0x44,1);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_60) {
      puVar8 = (undefined4 *)CONCAT44(uStack_74,local_78);
    }
    (*pcVar4)(puVar8);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(CONCAT44(uStack_74,local_78));
  }
  FUN_1448173f8(local_a8);
  if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x30);
    FUN_14020a6cc(param_1 + 0x20,1);
    lVar3 = *(longlong *)(param_1 + 0x10);
    if ((*(longlong *)(param_1 + 0xf8) == 0) || (*(int *)(param_1 + 0xf4) == 0)) {
LAB_14115f45e:
      uVar6 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xf0);
      uVar6 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != *(int *)(param_1 + 0xf4)))
            || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) ||
           ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_14115f45e;
        uVar6 = *puVar7;
      }
    }
    local_d0[0] = '\0';
    local_a8[0] = 0;
    FUN_1456bb102(local_d0,uVar6);
    puVar8 = &local_a0;
    FUN_1448729ea(lVar3 + 0xf0,puVar8,local_d0);
    uVar5 = local_a0;
    if (local_80 != 3) {
      puVar9 = &local_78;
      FUN_1400b56fe(puVar9,&local_a0,3);
      uVar5 = 0;
      if (local_58 != 0) {
        uVar5 = local_78;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (0x18 < local_60) {
          puVar9 = (undefined4 *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar4)(puVar9);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
    }
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    FUN_14020a6cc(param_1 + 0x50,1);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_88) {
        puVar8 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_a8);
    if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    if ((*(longlong *)(param_1 + 0xf8) == 0) || (*(int *)(param_1 + 0xf4) == 0)) {
LAB_14115f465:
      uVar6 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xf0);
      uVar6 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != *(int *)(param_1 + 0xf4)))
            || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) ||
           ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_14115f465;
        uVar6 = *puVar7;
      }
    }
    local_d0[0] = '\0';
    local_a8[0] = 0;
    FUN_1456bb102(local_d0,uVar6);
    puVar8 = &local_a0;
    FUN_1448729ea(lVar3 + 0x140,puVar8,local_d0);
    uVar5 = local_a0;
    if (local_80 != 3) {
      puVar9 = &local_78;
      FUN_1400b56fe(puVar9,&local_a0,3);
      uVar5 = 0;
      if (local_58 != 0) {
        uVar5 = local_78;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (0x18 < local_60) {
          puVar9 = (undefined4 *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar4)(puVar9);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
    }
    *(undefined4 *)(param_1 + 100) = uVar5;
    FUN_14020a6cc(param_1 + 0x5c,1);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_88) {
        puVar8 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_a8);
    if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    if ((*(longlong *)(param_1 + 0xf8) == 0) || (*(int *)(param_1 + 0xf4) == 0)) {
LAB_14115f46c:
      uVar6 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xf0);
      uVar6 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != *(int *)(param_1 + 0xf4)))
            || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) ||
           ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_14115f46c;
        uVar6 = *puVar7;
      }
    }
    local_d0[0] = '\0';
    local_a8[0] = 0;
    FUN_1456bb102(local_d0,uVar6);
    puVar8 = &local_a0;
    FUN_1448729ea(lVar3 + 0x280,puVar8,local_d0);
    uVar5 = local_a0;
    if (local_80 != 3) {
      puVar9 = &local_78;
      FUN_1400b56fe(puVar9,&local_a0,3);
      uVar5 = 0;
      if (local_58 != 0) {
        uVar5 = local_78;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (0x18 < local_60) {
          puVar9 = (undefined4 *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar4)(puVar9);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
    }
    *(undefined4 *)(param_1 + 0x70) = uVar5;
    FUN_14020a6cc(param_1 + 0x68,1);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_88) {
        puVar8 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_a8);
    if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    if ((*(longlong *)(param_1 + 0xf8) == 0) || (*(int *)(param_1 + 0xf4) == 0)) {
LAB_14115f473:
      uVar6 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xf0);
      uVar6 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != *(int *)(param_1 + 0xf4)))
            || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) ||
           ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_14115f473;
        uVar6 = *puVar7;
      }
    }
    local_d0[0] = '\0';
    local_a8[0] = 0;
    FUN_1456bb102(local_d0,uVar6);
    puVar8 = &local_a0;
    FUN_1448729ea(lVar3 + 0x2d0,puVar8,local_d0);
    uVar5 = local_a0;
    if (local_80 != 3) {
      puVar9 = &local_78;
      FUN_1400b56fe(puVar9,&local_a0,3);
      uVar5 = 0;
      if (local_58 != 0) {
        uVar5 = local_78;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (0x18 < local_60) {
          puVar9 = (undefined4 *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar4)(puVar9);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
    }
    *(undefined4 *)(param_1 + 0x7c) = uVar5;
    FUN_14020a6cc(param_1 + 0x74,1);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_88) {
        puVar8 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_a8);
    if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    if ((*(longlong *)(param_1 + 0xf8) == 0) || (*(int *)(param_1 + 0xf4) == 0)) {
LAB_14115f47a:
      uVar6 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xf0);
      uVar6 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != *(int *)(param_1 + 0xf4)))
            || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) ||
           ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_14115f47a;
        uVar6 = *puVar7;
      }
    }
    local_d0[0] = '\0';
    local_a8[0] = 0;
    FUN_1456bb102(local_d0,uVar6);
    puVar8 = &local_a0;
    FUN_1448729ea(lVar3 + 800,puVar8,local_d0);
    uVar5 = local_a0;
    if (local_80 != 3) {
      puVar9 = &local_78;
      FUN_1400b56fe(puVar9,&local_a0,3);
      uVar5 = 0;
      if (local_58 != 0) {
        uVar5 = local_78;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (0x18 < local_60) {
          puVar9 = (undefined4 *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar4)(puVar9);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
    }
    *(undefined4 *)(param_1 + 0x88) = uVar5;
    FUN_14020a6cc(param_1 + 0x80,1);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_88) {
        puVar8 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_a8);
    if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    if ((*(longlong *)(param_1 + 0xf8) == 0) || (*(int *)(param_1 + 0xf4) == 0)) {
LAB_14115f481:
      uVar6 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xf0);
      uVar6 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != *(int *)(param_1 + 0xf4)))
            || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) ||
           ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_14115f481;
        uVar6 = *puVar7;
      }
    }
    local_d0[0] = '\0';
    local_a8[0] = 0;
    FUN_1456bb102(local_d0,uVar6);
    puVar8 = &local_a0;
    FUN_1448729ea(lVar3 + 400,puVar8,local_d0);
    uVar5 = local_a0;
    if (local_80 != 3) {
      puVar9 = &local_78;
      FUN_1400b56fe(puVar9,&local_a0,3);
      uVar5 = 0;
      if (local_58 != 0) {
        uVar5 = local_78;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (0x18 < local_60) {
          puVar9 = (undefined4 *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar4)(puVar9);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
    }
    *(undefined4 *)(param_1 + 0x94) = uVar5;
    FUN_14020a6cc(param_1 + 0x8c,1);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_88) {
        puVar8 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_a8);
    if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    if ((*(longlong *)(param_1 + 0xf8) == 0) || (*(int *)(param_1 + 0xf4) == 0)) {
LAB_14115f488:
      uVar6 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xf0);
      uVar6 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != *(int *)(param_1 + 0xf4)))
            || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) ||
           ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_14115f488;
        uVar6 = *puVar7;
      }
    }
    local_d0[0] = '\0';
    local_a8[0] = 0;
    FUN_1456bb102(local_d0,uVar6);
    puVar8 = &local_a0;
    FUN_1448729ea(lVar3 + 0x1e0,puVar8,local_d0);
    uVar5 = local_a0;
    if (local_80 != 3) {
      puVar9 = &local_78;
      FUN_1400b56fe(puVar9,&local_a0,3);
      uVar5 = 0;
      if (local_58 != 0) {
        uVar5 = local_78;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (0x18 < local_60) {
          puVar9 = (undefined4 *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar4)(puVar9);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
    }
    *(undefined4 *)(param_1 + 0xa0) = uVar5;
    FUN_14020a6cc(param_1 + 0x98,1);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_88) {
        puVar8 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_a8);
    if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    if ((*(longlong *)(param_1 + 0xf8) == 0) || (*(int *)(param_1 + 0xf4) == 0)) {
LAB_14115f48f:
      uVar6 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xf0);
      uVar6 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != *(int *)(param_1 + 0xf4)))
            || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) ||
           ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_14115f48f;
        uVar6 = *puVar7;
      }
    }
    local_d0[0] = '\0';
    local_a8[0] = 0;
    FUN_1456bb102(local_d0,uVar6);
    puVar8 = &local_a0;
    FUN_1448729ea(lVar3 + 0x230,puVar8,local_d0);
    uVar5 = local_a0;
    if (local_80 != 3) {
      puVar9 = &local_78;
      FUN_1400b56fe(puVar9,&local_a0,3);
      uVar5 = 0;
      if (local_58 != 0) {
        uVar5 = local_78;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (0x18 < local_60) {
          puVar9 = (undefined4 *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar4)(puVar9);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
    }
    *(undefined4 *)(param_1 + 0xac) = uVar5;
    FUN_14020a6cc(param_1 + 0xa4,1);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_88) {
        puVar8 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar4)(puVar8);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_a8);
    if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_140841e14(param_1 + 0xb0,1);
  if (*(char *)(param_1 + 0x132) == '\0') {
    FUN_14060ba74(param_1);
  }
LAB_14115f41d:
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14115fc2e FUN_14115fc2e body=228 status=ok
// SIG undefined FUN_14115fc2e(void)

longlong FUN_14115fc2e(void)

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
  if (DAT_14cb0ad00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_146406b72;
    local_38 = &LAB_147d67b2f;
    local_40 = FUN_146406bcd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"LocalPlayerSubsystem",&DAT_14cb0ad00,&DAT_147d67b2e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0ad00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14115fd14 FUN_14115fd14 body=80 status=ok
// SIG undefined FUN_14115fd14(void)

void FUN_14115fd14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    lVar3 = FUN_1400c0742();
    lVar4 = *(longlong *)(lVar3 + 0x110);
    if (lVar4 == 0) {
      FUN_140aa6c08(lVar3);
      lVar4 = *(longlong *)(lVar3 + 0x110);
    }
    puVar1 = (undefined8 *)(lVar4 + 0x38 + (ulonglong)*(byte *)((longlong)param_1 + 0x11) * 0x10);
    uVar2 = puVar1[1];
    *param_1 = *puVar1;
    param_1[1] = uVar2;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 14115fd64 FUN_14115fd64 body=1018 status=ok
// SIG undefined FUN_14115fd64(void)

longlong FUN_14115fd64(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8 [2];
  longlong *local_a8 [2];
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_141160160(&local_98);
  uVar6 = (uint)local_98;
  iVar8 = (int)((ulonglong)local_98 >> 0x20);
  uVar3 = (uint)((ulonglong)local_98 >> 0x10);
  if ((int)param_1[0x44] != *(int *)((longlong)param_1 + 0x24c)) {
    plVar4 = param_1 + 0x4a;
    if ((longlong *)param_1[0x4b] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x4b];
    }
    iVar7 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[0x4c] - 1U &
                    iVar8 + (uVar6 << 0x10 | uVar6 & 0xffff) + (uVar3 << 0x13 | uVar3 & 0xffff) +
                    ((uVar6 & 0xffff) >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar4 = (longlong *)(param_1[0x43] + (longlong)iVar7 * 0x18);
        if (*plVar4 == local_98) {
          if ((plVar4 != (longlong *)0x0) && (lVar5 = plVar4[1], lVar5 != 0)) goto LAB_14115fe2f;
          break;
        }
        iVar7 = (int)plVar4[2];
      } while (iVar7 != -1);
    }
  }
  if ((int)param_1[0x62] != *(int *)((longlong)param_1 + 0x33c)) {
    plVar4 = param_1 + 0x68;
    if ((longlong *)param_1[0x69] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x69];
    }
    iVar8 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[0x6a] - 1U &
                    iVar8 + (uVar6 << 0x10 | uVar6 & 0xffff) + (uVar3 << 0x13 | uVar3 & 0xffff) +
                    ((uVar6 & 0xffff) >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        lVar5 = param_1[0x61] + (longlong)iVar8 * 0x20;
        if (*(longlong *)(param_1[0x61] + (longlong)iVar8 * 0x20) == local_98) {
          if ((lVar5 != 0) && (plVar4 = *(longlong **)(lVar5 + 0x10), plVar4 != (longlong *)0x0)) {
            lVar5 = *(longlong *)(lVar5 + 8);
            LOCK();
            *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
            UNLOCK();
            iVar8 = (int)plVar4[1];
            goto LAB_141160107;
          }
          break;
        }
        iVar8 = *(int *)(lVar5 + 0x18);
      } while (iVar8 != -1);
    }
  }
  goto LAB_14115fe79;
  while( true ) {
    LOCK();
    iVar7 = (int)plVar4[1];
    bVar9 = iVar8 == iVar7;
    if (bVar9) {
      *(int *)(plVar4 + 1) = iVar8 + 1;
      iVar7 = iVar8;
    }
    iVar8 = iVar7;
    UNLOCK();
    if (bVar9) break;
LAB_141160107:
    if (iVar8 == 0) {
      lVar5 = 0;
      goto LAB_14116013f;
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
LAB_14116013f:
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (lVar5 != 0) goto LAB_14115fe2f;
LAB_14115fe79:
  if ((param_1[0x75] == 0) ||
     (plVar4 = (longlong *)FUN_140a2b044(param_1 + 0x75), plVar4 == (longlong *)0x0)) {
    if (param_4 == (longlong *)0x0) {
      param_4 = param_1;
    }
    FUN_145715fae(local_b8,&local_98);
    local_60 = L"UknownBrush";
    local_58 = 0xb;
    FUN_1446e940c(local_dc,&local_60);
    local_60 = L"SlateStyleSet";
    local_58 = 0xd;
    FUN_1446e940c(local_e0,&local_60);
    FUN_140208bae(local_d8,local_e0,local_dc,L"Unable to find Brush \'{0}\'.");
    FUN_14023409e(&local_c8,local_d8,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_b8);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_c8;
    local_88 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a8,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    (**(code **)(*param_4 + 0xa8))(param_4,3,local_a8,&local_98);
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    lVar5 = (**(code **)(*param_1 + 0x78))(param_1);
  }
  else {
    lVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,param_2,param_3,0);
  }
LAB_14115fe2f:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 141160160 FUN_141160160 body=219 status=ok
// SIG undefined FUN_141160160(void)

undefined8 * FUN_141160160(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_2;
  if (param_3 == 0) {
    *param_1 = param_2;
  }
  else {
    FUN_1400b22c2(local_50,param_3);
    FUN_1400021e4(&local_30,local_60);
    FUN_1401c7f3e(&local_40,local_60,local_50);
    puVar1 = local_40;
    if (local_38 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(param_1,puVar1,1);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14116023c FUN_14116023c body=40 status=ok
// SIG undefined FUN_14116023c(void)

undefined8 FUN_14116023c(undefined8 param_1,int param_2)

{
  FUN_141160264();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141160264 FUN_141160264 body=585 status=ok
// SIG undefined FUN_141160264(void)

void FUN_141160264(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0bc9d0;
  param_1[5] = &PTR_FUN_14b0bd3f0;
  param_1[6] = &PTR_LAB_14b0bd430;
  param_1[0x55] = &PTR_FUN_14b0bd480;
  param_1[0x56] = &PTR_FUN_14b0bd500;
  param_1[0x57] = &PTR_FUN_14b0bd510;
  FUN_1407e878c(param_1 + 0xf2);
  if (param_1[0xf0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xef];
  if (plVar3 == (longlong *)0x0) goto LAB_141160314;
  *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + -1;
  if ((int)plVar3[0x26] < 1) {
    FUN_1400847bc(plVar3 + 0x17,0);
    if ((int)plVar3[0x21] == 0) {
      FUN_140087e46(plVar3);
      if (*plVar3 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_141160309;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar3);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar3);
      }
    }
  }
LAB_141160309:
  param_1[0xef] = 0;
LAB_141160314:
  plVar3 = (longlong *)param_1[0xee];
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
  FUN_140e5e0b3(param_1[0xdc],*(undefined4 *)(param_1 + 0xdd));
  if (param_1[0xdc] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0xdb] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xdb] + 0x50));
  }
  if ((param_1[0xd5] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xd5] + 0x50));
  }
  if ((param_1[0xcf] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xcf] + 0x50));
  }
  FUN_1447cd778(param_1[200],*(undefined4 *)(param_1 + 0xc9));
  if (param_1[200] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 1411604ae FUN_1411604ae body=22 status=ok
// SIG undefined FUN_1411604ae(void)

undefined8 FUN_1411604ae(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb1d1f0;
  if (DAT_14cb1d1f0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb1d1f0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb1d1f0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb1d1f0[0x3a] <= *(int *)((longlong)DAT_14cb1d1f0 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb1d1f0 + 0x300))(DAT_14cb1d1f0);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 1411604c4 FUN_1411604c4 body=175 status=ok
// SIG undefined FUN_1411604c4(void)

undefined8 FUN_1411604c4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44 [2];
  undefined4 local_3c;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    FUN_141160574(local_44,lVar1);
    if (local_44[0] != 0) {
      local_58 = *(undefined8 *)(param_1 + 0x18);
      FUN_1401533ba(&local_50,&local_58,1);
      if (DAT_14cb84f20 != 0) {
        local_20 = local_48;
        local_28 = local_50;
        local_30 = local_3c;
        uVar2 = FUN_1411605fc();
        goto LAB_141160552;
      }
    }
  }
  uVar2 = 0;
LAB_141160552:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141160574 FUN_141160574 body=135 status=ok
// SIG undefined FUN_141160574(void)

longlong FUN_141160574(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x18);
  FUN_1400021e4(&local_20,&local_30);
  *(undefined8 *)(param_1 + 4) = 0;
  puVar1 = local_30;
  if (local_28 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1405f0d29(param_1,puVar1,0);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1411605fc FUN_1411605fc body=176 status=ok
// SIG undefined FUN_1411605fc(void)

longlong * FUN_1411605fc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1402a67be();
  local_30 = *param_3;
  local_28 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_2;
  local_38 = *(undefined4 *)(param_2 + 1);
  plVar2 = (longlong *)FUN_14050b224(param_1,&local_40,&local_30,uVar1);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar4 = FUN_1402a67be();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      plVar5 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        plVar5 = plVar2;
      }
      goto LAB_14116068a;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_14116068a:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411606ae FUN_1411606ae body=185 status=ok
// SIG undefined FUN_1411606ae(void)

ulonglong FUN_1411606ae(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (longlong *)*param_2;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  local_28 = (undefined4)param_2[1];
  if (param_3 == (longlong *)0x0) {
    lVar2 = FUN_1467cf00e(&local_30);
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(int *)(lVar2 + 8) < 2);
  }
  else {
    local_40 = (longlong *)*param_3;
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 8))();
    }
    local_38 = (undefined4)param_3[1];
    uVar1 = FUN_141160768(&local_30,&local_40);
    uVar3 = (ulonglong)uVar1;
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141160768 FUN_141160768 body=729 status=ok
// SIG undefined FUN_141160768(void)

ulonglong FUN_141160768(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_78 [36];
  int local_54;
  longlong local_50;
  int local_44;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((*(uint *)(param_2 + 1) ^ *(uint *)(param_1 + 1)) & 2) == 0) &&
     (((*(uint *)(param_2 + 1) ^ *(uint *)(param_1 + 1)) & 1) == 0)) {
    plVar6 = (longlong *)*param_1;
    if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    plVar6 = (longlong *)*param_1;
    pcVar1 = *(code **)(*plVar6 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar9 = plVar6 + 3;
      if (plVar6[5] != 0) {
        plVar9 = (longlong *)(plVar6[5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar9 = plVar6 + 2;
    }
    else {
      plVar9 = (longlong *)(*pcVar1)(plVar6);
    }
    lVar2 = plVar9[1];
    plVar6 = (longlong *)*param_2;
    if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    plVar6 = (longlong *)*param_2;
    pcVar1 = *(code **)(*plVar6 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar9 = plVar6 + 3;
      if (plVar6[5] != 0) {
        plVar9 = (longlong *)(plVar6[5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar9 = plVar6 + 2;
    }
    else {
      plVar9 = (longlong *)(*pcVar1)(plVar6);
    }
    if ((int)plVar9[1] < 2 == (int)lVar2 < 2) {
      plVar6 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x48))();
      cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6);
      plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x48))();
      cVar4 = (**(code **)(*plVar6 + 0x58))(plVar6);
      if ((cVar4 == '\v') == (cVar3 == '\v')) {
        plVar6 = (longlong *)*param_1;
        if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
        }
        FUN_1447a1fc0(plVar6);
        plVar6 = (longlong *)*param_1;
        pcVar1 = *(code **)(*plVar6 + 0x28);
        if (pcVar1 == FUN_14482841c) {
          plVar9 = plVar6 + 3;
          if (plVar6[5] != 0) {
            plVar9 = (longlong *)(plVar6[5] + 8);
          }
        }
        else if (pcVar1 == (code *)&LAB_14010c34c) {
          plVar9 = plVar6 + 2;
        }
        else {
          plVar9 = (longlong *)(*pcVar1)(plVar6);
        }
        uVar10 = 0x144828401;
        if ((int)plVar9[1] < 2) goto LAB_1411608bf;
        plVar6 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x48))();
        cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6);
        if (cVar3 == '\v') {
          local_40 = 0;
          local_44 = -1;
          FUN_1467cf050(param_1,&local_40,&local_44);
          local_50 = 0;
          local_54 = -1;
          FUN_1467cf050(param_2,&local_50,&local_54);
          uVar10 = CONCAT71((int7)((ulonglong)&local_40 >> 8),
                            local_44 == local_54 && local_40 == local_50);
          goto LAB_1411608bf;
        }
        cVar3 = FUN_14010cee6(param_1,param_2,0);
        if (cVar3 != '\0') goto LAB_1411608bf;
        if ((*(byte *)(param_1 + 1) & 3) != 0) {
          puVar7 = (undefined8 *)FUN_1467cf00e(param_1);
          puVar8 = (undefined8 *)FUN_1467cf00e(param_2);
          iVar5 = *(int *)(puVar7 + 1);
          if (iVar5 == *(int *)(puVar8 + 1)) {
            if (iVar5 < 2) goto LAB_1411608bf;
            iVar5 = wcscmp((wchar_t *)*puVar7,(wchar_t *)*puVar8);
            bVar11 = iVar5 == 0;
          }
          else {
            bVar11 = *(int *)(puVar8 + 1) + iVar5 == 1;
          }
          uVar10 = CONCAT71(0x1448284,bVar11);
          goto LAB_1411608bf;
        }
      }
    }
  }
  uVar10 = 0;
LAB_1411608bf:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141160a42 FUN_141160a42 body=954 status=ok
// SIG undefined FUN_141160a42(void)

void FUN_141160a42(longlong *param_1,undefined4 param_2,longlong param_3,double *param_4,
                  undefined8 param_5,double *param_6,float param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_118 [32];
  double *local_f8;
  float local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_ec = param_2;
  fVar7 = powf(param_7,*(float *)((longlong)param_1 + 0xc));
  fVar8 = powf(1.0 - param_7,*(float *)((longlong)param_1 + 0xc));
  dVar3 = (double)(1.0 - fVar7);
  dVar4 = param_6[2] * dVar3;
  dVar5 = param_6[1] * dVar3;
  dVar1 = *param_6 * dVar3;
  dVar9 = param_6[5];
  dVar12 = param_6[4];
  dVar13 = param_6[3] * dVar3 + param_4[3];
  param_4[3] = dVar13;
  param_4[4] = dVar12 * dVar3 + param_4[4];
  param_4[5] = dVar9 * dVar3 + param_4[5];
  dVar9 = SQRT(dVar4 * dVar4 + dVar1 * dVar1 + dVar5 * dVar5);
  local_f0 = (float)(((double)*(float *)(param_1 + 4) - dVar9) * dVar3 + dVar9);
  dVar12 = (double)FUN_144719204(SUB84(dVar13,0),0x4076800000000000);
  dVar2 = (double)FUN_144719204(SUB84(param_4[4],0),0x4076800000000000);
  dVar9 = sin(dVar12 * 0.017453292519943295);
  dVar12 = cos(dVar12 * 0.017453292519943295);
  dVar13 = sin(dVar2 * 0.017453292519943295);
  dVar2 = cos(dVar2 * 0.017453292519943295);
  dVar10 = (double)local_f0;
  dVar11 = param_4[2] - dVar9 * dVar10;
  dVar13 = param_4[1] - dVar13 * dVar12 * dVar10;
  dVar12 = *param_4 - dVar2 * dVar12 * dVar10;
  dVar9 = (double)(1.0 - (1.0 - fVar8));
  *param_4 = ((dVar1 + *param_4) - dVar12) * dVar9 + dVar12;
  param_4[1] = ((dVar5 + param_4[1]) - dVar13) * dVar9 + dVar13;
  param_4[2] = ((dVar4 + param_4[2]) - dVar11) * dVar9 + dVar11;
  *(float *)(param_4 + 6) = (1.0 - fVar7) * *(float *)(param_6 + 6) + *(float *)(param_4 + 6);
  dVar9 = param_6[0x12f];
  param_4[0x12e] = param_6[0x12e] * dVar3 + param_4[0x12e];
  param_4[0x12f] = dVar9 * dVar3 + param_4[0x12f];
  dVar9 = param_6[0x131];
  param_4[0x130] = dVar3 * param_6[0x130] + param_4[0x130];
  param_4[0x131] = dVar9 * dVar3 + param_4[0x131];
  pdVar6 = param_4;
  if ((param_3 != 0) &&
     (pdVar6 = (double *)(*(longlong *)(param_3 + 0x28) + 200), *(longlong *)(param_3 + 0x28) == 0))
  {
    pdVar6 = param_4;
  }
  local_d8 = pdVar6[2];
  local_e8 = *(undefined4 *)pdVar6;
  uStack_e4 = *(undefined4 *)((longlong)pdVar6 + 4);
  uStack_e0 = *(undefined4 *)(pdVar6 + 1);
  uStack_dc = *(undefined4 *)((longlong)pdVar6 + 0xc);
  local_f8 = param_4;
  (**(code **)(*param_1 + 0x58))(param_1,local_ec,param_3);
  if ((local_d0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141160dfe FUN_141160dfe body=856 status=ok
// SIG undefined FUN_141160dfe(void)

void FUN_141160dfe(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  undefined8 *local_200;
  undefined4 *local_1f8;
  undefined8 *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1d8;
  float local_1d4;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_124;
  undefined4 local_f8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined2 local_b1;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if ((((param_3 != 0) && (*(longlong *)(param_3 + 0x28) != 0)) &&
      (*(longlong *)(*(longlong *)(param_3 + 0x28) + 0xe0) != 0)) &&
     (lVar3 = FUN_1447210f0(), lVar3 != 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0xe0);
    local_a4 = 0;
    local_c0 = 0;
    local_a0 = 0x101;
    local_78 = 0;
    local_70 = 0x800000000;
    local_58 = 0;
    local_50 = 0x400000000;
    local_b8 = 1;
    local_ac = 0;
    local_c8 = DAT_14cbc5100;
    local_b7 = 1;
    local_b5 = 0;
    local_a8 = 0;
    local_b4 = 0;
    local_b2 = 0;
    if (lVar4 != 0) {
      local_68 = *(undefined4 *)(lVar4 + 0xc);
      local_50 = 0x400000001;
      local_c0 = *(undefined8 *)(lVar4 + 0x18);
    }
    local_b1 = 0x101;
    bVar1 = *(byte *)(param_1 + 0x1c);
    if ((bVar1 & 1) != 0) {
      local_1c8 = 0;
      uStack_1c0 = 0;
      FUN_14490f2e4(lVar4,&local_1c8,0x400000001,0);
      FUN_140c5bf3a(*(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0xe0),&local_1c8,1);
      lVar4 = (longlong)(int)uStack_1c0;
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          FUN_144a85a22(&local_c8);
          lVar5 = lVar5 + 8;
        } while (lVar4 * 8 != lVar5);
      }
      if (local_1c8 != 0) {
        FUN_1400020a8(local_1c8);
      }
      bVar1 = *(byte *)(param_1 + 0x1c);
    }
    if (((bVar1 & 2) != 0) &&
       (lVar4 = FUN_144944cf2(*(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0xe0)), lVar4 != 0)) {
      FUN_144a85a22(&local_c8);
    }
    memset(&local_1c8,0,0x100);
    local_f8 = 0xffffffff;
    local_1c8 = CONCAT44(0x3f800000,(undefined4)local_1c8);
    local_124 = 0xffffffff;
    if (0.0 < *(float *)(param_1 + 0x18)) {
      local_1f8 = &local_1d8;
      local_1d8 = 2;
      local_1e8 = &DAT_14cad0f10;
      local_1f0 = &local_c8;
      local_208 = &DAT_14c8463d0;
      local_200 = (undefined8 *)CONCAT44(local_200._4_4_,4);
      local_1d4 = *(float *)(param_1 + 0x18);
      cVar2 = FUN_14021655c(lVar3,&local_1c8,param_4,param_5);
    }
    else {
      local_1f8 = (undefined4 *)&DAT_14cad0f10;
      local_200 = &local_c8;
      local_208 = (undefined8 *)CONCAT44(local_208._4_4_,4);
      cVar2 = FUN_1400b50cc(lVar3,&local_1c8,param_4,param_5);
    }
    if (cVar2 != '\0') {
      *(undefined8 *)(param_5 + 4) = local_1a8;
      *param_5 = local_1b8;
      param_5[1] = uStack_1b4;
      param_5[2] = uStack_1b0;
      param_5[3] = uStack_1ac;
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141161157 FUN_141161157 body=73 status=ok
// SIG undefined FUN_141161157(void)

void FUN_141161157(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x18);
    do {
      FUN_1411611a0(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1411611a0 FUN_1411611a0 body=63 status=ok
// SIG undefined FUN_1411611a0(void)

void FUN_1411611a0(longlong param_1,int param_2)

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



// FUNCTION 1411611ea FUN_1411611ea body=574 status=ok
// SIG undefined FUN_1411611ea(void)

undefined8 * FUN_1411611ea(undefined8 *param_1)

{
  FUN_14064ffa8();
  *param_1 = &PTR_FUN_14b686a00;
  param_1[0x72] = &PTR_FUN_14b687070;
  param_1[0x73] = &PTR_FUN_14b687090;
  param_1[0x74] = &PTR_FUN_14b6870c0;
  param_1[0x75] = &PTR_FUN_14b6870d0;
  param_1[0x76] = &PTR_FUN_14b687140;
  param_1[0x77] = &PTR_FUN_14b687170;
  param_1[0x78] = &PTR_FUN_14b6871a0;
  param_1[0x7f] = &PTR_FUN_14b687250;
  param_1[0x80] = &PTR_FUN_14b6872c0;
  param_1[0x81] = &PTR_FUN_14b687330;
  param_1[0x82] = &PTR_FUN_14b687360;
  param_1[0x83] = &PTR_FUN_14b6873a0;
  param_1[0x84] = &PTR_FUN_14b687440;
  param_1[0x85] = &PTR_FUN_14b687460;
  param_1[0x89] = &PTR_FUN_14b687480;
  param_1[0x8a] = &PTR_FUN_14b687540;
  param_1[0x8b] = &PTR_FUN_14b6875c0;
  param_1[0x8c] = &PTR_FUN_14b687610;
  param_1[0x8d] = &PTR_FUN_14b687650;
  param_1[0x8e] = &PTR_FUN_14b687670;
  param_1[0x8f] = &PTR_FUN_14b687690;
  param_1[0x90] = &PTR_FUN_14b6876b0;
  param_1[0x91] = &PTR_FUN_14b6876d0;
  param_1[0x92] = &PTR_FUN_14b6876f0;
  param_1[0x93] = &PTR_FUN_14b687710;
  param_1[0x94] = &PTR_FUN_14b687730;
  param_1[0x95] = &PTR_FUN_14b687750;
  param_1[0x96] = &PTR_FUN_14b687770;
  param_1[0x34b] = &PTR_FUN_14b687790;
  param_1[0x352] = &PTR_FUN_14b6877a0;
  param_1[0x353] = &PTR_FUN_14b6877e0;
  param_1[0x354] = &PTR_FUN_14b687820;
  param_1[0x355] = &PTR_FUN_14b687870;
  param_1[0x356] = &PTR_FUN_14b6878a0;
  param_1[0x359] = &PTR_FUN_14b6878e0;
  param_1[0x35a] = &PTR_FUN_14b6878f0;
  param_1[0x35b] = &PTR_FUN_14b687920;
  param_1[0x35c] = &PTR_FUN_14b6879c0;
  param_1[0x4c0] = 0;
  param_1[0x4c1] = 0;
  return param_1;
}



// FUNCTION 141161428 thunk_FUN_1404db954 body=5 status=ok
// SIG undefined thunk_FUN_1404db954(void)

void thunk_FUN_1404db954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a492200;
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14116142e FUN_14116142e body=66 status=ok
// SIG undefined FUN_14116142e(void)

undefined8 * FUN_14116142e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b256d10;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141161470 FUN_141161470 body=277 status=ok
// SIG undefined FUN_141161470(void)

undefined8 FUN_141161470(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14116157f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14116157f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14116157f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14116152d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_14116152d;
    }
  }
  uVar6 = 0;
LAB_14116152d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141161586 FUN_141161586 body=655 status=ok
// SIG undefined FUN_141161586(void)

void FUN_141161586(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  PSRWLOCK *local_80;
  undefined1 *local_78;
  code *local_70;
  longlong *local_68;
  longlong *local_60;
  PSRWLOCK local_58;
  int local_50;
  longlong *local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    if (DAT_14cba8288 == 0) {
      local_80 = &local_58;
      local_58 = (PSRWLOCK)FUN_141864c34;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1464cee30;
      local_88 = &LAB_148bfac22;
      local_90 = &LAB_140f21842;
      local_98 = &DAT_149e063b2;
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1401d61d6(&local_68,uVar7);
      plVar9 = (longlong *)*local_68;
      local_58 = (PSRWLOCK)(plVar9 + 9);
      local_50 = 1;
      AcquireSRWLockExclusive(local_58);
      local_40 = '\0';
      local_48 = plVar9;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_60 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      if (0 < (int)local_48[1]) {
        uVar2 = *(uint *)(lVar3 + 0xc);
        lVar11 = 0xd4;
        lVar10 = 0;
        plVar9 = local_48;
        do {
          lVar5 = plVar9[2];
          *(int *)(plVar9 + 2) = (int)lVar5 + 1;
          lVar4 = *plVar9;
          if (*(ulonglong *)(lVar4 + -0x9c + lVar11) == (ulonglong)uVar2) {
            *(int *)(plVar9 + 2) = (int)lVar5 + 2;
            iVar8 = *(int *)(lVar4 + lVar11);
            if (*(char *)(lVar4 + -4 + lVar11) == '\0') {
              if (iVar8 == 0) {
                iVar8 = 0;
                goto LAB_1411616ee;
              }
            }
            else {
LAB_1411616ee:
              *(undefined1 *)(lVar4 + -4 + lVar11) = 0;
              *(int *)(lVar4 + lVar11) = iVar8 + 1;
            }
            if (local_40 == '\0') {
              *(int *)(plVar9 + 8) = (int)plVar9[8] + 1;
              local_40 = '\x01';
            }
            cVar6 = FUN_1449ce79a(lVar3);
            if (cVar6 == '\0') {
              FUN_1410bb50a(param_1,&local_58);
              plVar9 = local_48;
            }
          }
          lVar10 = lVar10 + 1;
          lVar11 = lVar11 + 0x120;
        } while (lVar10 < (int)plVar9[1]);
      }
      if (local_50 == 0) {
        ReleaseSRWLockShared(local_58);
      }
      else {
        ReleaseSRWLockExclusive(local_58);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141161816 FUN_141161816 body=3250 status=ok
// SIG undefined FUN_141161816(void)

void FUN_141161816(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined1 *_Src;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined *local_168;
  code *local_160;
  undefined1 local_150 [4];
  undefined4 local_14c;
  undefined4 local_ac;
  undefined4 local_80;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_141161912;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_141161912:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_1411619e8;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_1411619e8:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_48);
            goto LAB_141161abe;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_48,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_48,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_48,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
LAB_141161abe:
  local_4c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_160 = FUN_1405ebbb2;
      local_168 = &DAT_14c9520b8;
      local_170 = 0;
      local_178 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_4c);
            goto LAB_141161b93;
          }
        }
        puVar7 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_4c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_4c,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_4c,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_4c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_4c,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
LAB_141161b93:
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_168 = (undefined *)FUN_1446ddbd2();
      local_160 = FUN_14067a048;
      local_170 = 0;
      local_178 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_50);
            goto LAB_141161c66;
          }
        }
        puVar7 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_50) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_50,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_50,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_50,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_50,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
LAB_141161c66:
  memset(local_150,0,0x100);
  local_80 = 0xffffffff;
  local_14c = 0x3f800000;
  local_ac = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_150);
            goto LAB_141161d37;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != local_150) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_150,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(local_150,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_150,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_150,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_150);
  }
LAB_141161d37:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1411624ca(param_1,local_40);
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411624ca FUN_1411624ca body=185 status=ok
// SIG undefined FUN_1411624ca(void)

void FUN_1411624ca(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*(longlong *)(param_1 + 0x760) != 0) && (*(int *)(param_1 + 0x75c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x758);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x75c))) &&
          ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (*plVar4 != 0)) {
        lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_1 + 0x760),1);
        if (lVar3 != 0) {
          cVar2 = FUN_141162583((uint *)(param_1 + 0x758),param_2);
          if (cVar2 != '\0') {
            cVar2 = FUN_14581881e(param_1,param_2);
            if (cVar2 == '\0') {
              FUN_145818788(param_1,param_2);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141162583 FUN_141162583 body=178 status=ok
// SIG undefined FUN_141162583(void)

undefined1 FUN_141162583(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    plVar3 = (longlong *)0x0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1411625ed;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar4 + 2) == param_1[1] && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      plVar3 = (longlong *)*puVar4;
      goto LAB_1411625ed;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1411625ed:
  local_28 = param_2;
  uVar2 = FUN_14477b072(plVar3,*(undefined8 *)(param_1 + 2));
  (**(code **)(*plVar3 + 0x248))(plVar3,uVar2,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141162636 FUN_141162636 body=84 status=ok
// SIG undefined FUN_141162636(void)

void FUN_141162636(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14116268c(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14116268c FUN_14116268c body=914 status=ok
// SIG undefined FUN_14116268c(void)

void FUN_14116268c(longlong *param_1,ushort *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar4 = *param_1;
  uVar2 = *param_2;
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_1411626d9:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1411626d9;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  lVar4 = *param_1;
  uVar2 = param_2[4];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_14116276b:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14116276b;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  lVar4 = *param_1;
  uVar2 = param_2[0x10];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_1411627f3:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1411627f3;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  lVar4 = *param_1;
  uVar2 = param_2[0x1c];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_141162885:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_141162885;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  if ((char)param_2[0x2b] != '\x01') {
    return;
  }
  lVar4 = *param_1;
  uVar2 = param_2[0x2a];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 == 0 || iVar6 < iVar3) goto LAB_14116294f;
  if (iVar3 == 0) {
LAB_141162910:
    if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(lVar4 + 0x24) = 0x100;
      FUN_14497ddce(lVar4,iVar3);
      iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
    }
    iVar7 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(lVar4 + 0x20) = iVar6;
    if (iVar6 % 0x20 != 0) {
      bVar5 = -(char)(iVar6 % 0x20);
      *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
    }
  }
  else {
    iVar7 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar7 = iVar3 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_141162910;
    *(int *)(lVar4 + 0x20) = iVar6;
  }
  FUN_1447c45ca(lVar4,iVar3,iVar8,0);
LAB_14116294f:
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 141162a1e FUN_141162a1e body=273 status=ok
// SIG undefined FUN_141162a1e(void)

longlong * FUN_141162a1e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x68);
    lVar7 = (longlong)*(int *)(param_1 + 0x70) * 0x18;
    do {
      lVar5 = plVar6[1];
      if (lVar5 == 0) {
        uVar4 = FUN_140c04244();
        lVar5 = FUN_14477b664(uVar4);
        plVar6[1] = lVar5;
      }
      lVar3 = plVar6[2];
      if (lVar3 == 0) {
        if ((lVar5 != 0) && (*plVar6 != 0)) {
          plVar1 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            plVar6[2] = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar3 = FUN_144aff482(uVar4,plVar6);
            plVar6[2] = lVar3;
            if (lVar3 != 0) goto LAB_141162a5e;
          }
        }
      }
      else {
LAB_141162a5e:
        cVar2 = FUN_141162b30(lVar3,param_3);
        if (cVar2 != '\0') {
          *param_2 = *plVar6;
          uVar4 = FUN_14477b664(plVar6[1]);
          lVar7 = FUN_14477b664(uVar4);
          param_2[1] = lVar7;
          param_2[2] = plVar6[2];
          return param_2;
        }
      }
      plVar6 = plVar6 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 141162b30 FUN_141162b30 body=608 status=ok
// SIG undefined FUN_141162b30(void)

undefined8 FUN_141162b30(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  longlong lVar15;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    lVar15 = 0;
    do {
      if (*(longlong *)(lVar2 + 8 + lVar15) == 0) {
        uVar13 = FUN_1407ad36c();
        uVar13 = FUN_14477b664(uVar13);
        *(undefined8 *)(lVar2 + 8 + lVar15) = uVar13;
      }
      lVar10 = param_2[1];
      if (lVar10 == 0) {
        lVar10 = FUN_1407ad36c();
      }
      lVar3 = *param_2;
      lVar10 = FUN_14477b664(lVar10);
      iVar8 = 0;
      if ((lVar10 != 0) && (plVar4 = *(longlong **)(lVar10 + 0xb8), plVar4 != (longlong *)0x0)) {
        lVar11 = *plVar4;
        pcVar5 = *(code **)(lVar11 + 0x108);
        if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
          cVar7 = (*pcVar5)(plVar4);
          iVar8 = 0;
          if (cVar7 == '\0') goto LAB_141162c02;
          lVar11 = *plVar4;
        }
        pcVar5 = *(code **)(lVar11 + 0x110);
        ppuVar14 = &PTR_PTR_14c763408;
        if ((pcVar5 != (code *)&LAB_144783426) &&
           (ppuVar14 = &PTR_PTR_14c75f798, pcVar5 != (code *)&LAB_144783432)) {
          ppuVar14 = (undefined **)(*pcVar5)(plVar4);
        }
        iVar8 = FUN_144aff48c(ppuVar14);
      }
LAB_141162c02:
      lVar11 = *(longlong *)(lVar2 + lVar15);
      lVar6 = *(longlong *)(lVar2 + 8 + lVar15);
      iVar9 = 0;
      if ((lVar6 != 0) &&
         (plVar4 = *(longlong **)(lVar6 + 0xb8), iVar9 = 0, plVar4 != (longlong *)0x0)) {
        lVar12 = *plVar4;
        pcVar5 = *(code **)(lVar12 + 0x108);
        if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
          cVar7 = (*pcVar5)(plVar4);
          if (cVar7 == '\0') goto LAB_141162c70;
          lVar12 = *plVar4;
        }
        pcVar5 = *(code **)(lVar12 + 0x110);
        ppuVar14 = &PTR_PTR_14c763408;
        if ((pcVar5 != (code *)&LAB_144783426) &&
           (ppuVar14 = &PTR_PTR_14c75f798, pcVar5 != (code *)&LAB_144783432)) {
          ppuVar14 = (undefined **)(*pcVar5)(plVar4);
        }
        iVar9 = FUN_144aff48c(ppuVar14);
      }
LAB_141162c70:
      if ((iVar9 == iVar8) && (lVar11 == lVar3)) {
        if (lVar6 == lVar10) {
          return 1;
        }
        if ((lVar10 != 0) && (lVar6 != 0)) {
          iVar8 = *(int *)(lVar10 + 0x38);
          iVar9 = *(int *)(lVar6 + 0x38);
          if ((iVar8 <= iVar9) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar8 * 8) == lVar10 + 0x30)) {
            return 1;
          }
          if ((iVar9 <= iVar8) &&
             (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar9 * 8) == lVar6 + 0x30)) {
            return 1;
          }
        }
      }
      lVar15 = lVar15 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar15);
  }
  return 0;
}



// FUNCTION 141162d90 FUN_141162d90 body=400 status=ok
// SIG undefined FUN_141162d90(void)

char FUN_141162d90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  undefined1 auStack_98 [32];
  int local_78;
  int iStack_74;
  int local_70;
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
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar4 = FUN_14021e994();
  cVar5 = '\x02';
  if (*(longlong *)(param_1 + 0x120) == 0) goto LAB_141162de8;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x1ea) == '\x01') {
    cVar5 = FUN_141162f22(*(longlong *)(param_1 + 0x120),*(undefined1 *)(lVar3 + 0x1e9));
    if (cVar5 == '\0') goto LAB_141162de1;
  }
  else {
LAB_141162de1:
    cVar5 = cVar4;
    if (cVar4 != '\x01') goto LAB_141162de8;
    if (*(int *)(param_1 + 0x130) != 0) {
      *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + -1;
      FUN_141033866(*(undefined8 *)(param_1 + 0x120),&local_78,*(undefined1 *)(lVar3 + 0x1e9));
      if (local_70 - 1U < 2) {
        if ((local_78 != -1) && (iStack_74 != -1)) {
LAB_141162e5c:
          cVar5 = FUN_144a872af(&local_68);
          if (cVar5 != '\0') {
            *(int *)(param_1 + 0x140) = local_70;
            *(ulonglong *)(param_1 + 0x138) = CONCAT44(iStack_74,local_78);
            *(undefined4 *)(param_1 + 0x148) = local_68;
            *(undefined4 *)(param_1 + 0x14c) = uStack_64;
            *(undefined4 *)(param_1 + 0x150) = uStack_60;
            *(undefined4 *)(param_1 + 0x154) = uStack_5c;
            *(undefined4 *)(param_1 + 0x158) = local_58;
            *(undefined4 *)(param_1 + 0x15c) = uStack_54;
            *(undefined4 *)(param_1 + 0x160) = uStack_50;
            *(undefined4 *)(param_1 + 0x164) = uStack_4c;
            *(undefined4 *)(param_1 + 0x168) = local_48;
            *(undefined4 *)(param_1 + 0x16c) = uStack_44;
            *(undefined4 *)(param_1 + 0x170) = uStack_40;
            *(undefined4 *)(param_1 + 0x174) = uStack_3c;
            FUN_14488c2fc(param_1 + 0x178,local_38);
            if (local_30 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_30 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_30)(local_30);
                LOCK();
                piVar2 = (int *)((longlong)local_30 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_30 + 0x10))(local_30);
                }
              }
            }
            cVar5 = '\0';
            goto LAB_141162de8;
          }
        }
      }
      else if (local_70 == 3) goto LAB_141162e5c;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
      cVar5 = '\x02';
      goto LAB_141162de8;
    }
  }
  cVar5 = '\x01';
LAB_141162de8:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return cVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141162f22 FUN_141162f22 body=275 status=ok
// SIG undefined FUN_141162f22(void)

undefined8 FUN_141162f22(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14070ca4c();
  uVar4 = 0;
  if ((1 < (byte)param_2) || (lVar2 == 0)) goto LAB_141162ff9;
  if (*(longlong **)(param_1 + 0x1720) != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x171c) != 0) {
      uVar1 = *(uint *)(param_1 + 0x1718);
      uVar4 = 0;
      if (((int)uVar1 < 0) || (uVar4 = 0, DAT_14c9647dc <= (int)uVar1)) goto LAB_141162ff9;
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x171c) &&
          ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x1720) + 0x10))();
        if (lVar3 != 0) {
          lVar2 = *(longlong *)(lVar2 + 0x1c8);
          if (lVar2 == 0) {
            local_28 = DAT_14c8464f0;
            local_38 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_30 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            local_38 = *(undefined8 *)(lVar2 + 0x260);
            uStack_30 = *(undefined8 *)(lVar2 + 0x268);
            local_28 = *(undefined8 *)(lVar2 + 0x270);
          }
          uVar4 = FUN_14488bfb8(lVar3,param_2,&local_38);
          goto LAB_141162ff9;
        }
      }
    }
  }
  uVar4 = 0;
LAB_141162ff9:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141163036 FUN_141163036 body=40 status=ok
// SIG undefined FUN_141163036(void)

undefined8 FUN_141163036(undefined8 param_1,int param_2)

{
  FUN_14116305e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14116305e FUN_14116305e body=441 status=ok
// SIG undefined FUN_14116305e(void)

void FUN_14116305e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adc8440;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)((longlong)param_1 + 0xe4) != 0) {
    FUN_144727cd0(param_1 + 0x1b,0);
  }
  param_1[0x21] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x104)) {
    *(undefined4 *)((longlong)param_1 + 0x104) = 0x80;
    FUN_1446efbd8(param_1 + 0x1d,0);
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    FUN_144727cd0(param_1 + 0x11,0);
  }
  param_1[0x17] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xb4)) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80;
    FUN_1446efbd8(param_1 + 0x13,0);
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  return;
}



// FUNCTION 141163218 FUN_141163218 body=100 status=ok
// SIG undefined FUN_141163218(void)

void FUN_141163218(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_145792cf6();
  uVar1 = *(undefined4 *)(param_2 + 0x5c);
  uVar2 = FUN_140b70546(param_1);
  lVar3 = FUN_14658115e(uVar2,uVar1);
  if (lVar3 == 0) {
    return;
  }
  FUN_143f285fe(lVar3,param_2);
  FUN_1410d422e(lVar3 + 0x18,param_2 + 0x10);
  FUN_145879b88(lVar3);
  return;
}



// FUNCTION 14116327c FUN_14116327c body=69 status=ok
// SIG undefined FUN_14116327c(void)

void FUN_14116327c(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1411632c2(param_1 + 3);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1411632c2 FUN_1411632c2 body=55 status=ok
// SIG undefined FUN_1411632c2(void)

void FUN_1411632c2(longlong *param_1)

{
  FUN_1411632fa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1411632fa FUN_1411632fa body=527 status=ok
// SIG undefined FUN_1411632fa(void)

void FUN_1411632fa(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar15 = 0;
    uVar13 = 1;
    iVar11 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar11 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar11 = iVar3 + -1;
      }
      uVar15 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar15) goto LAB_1411633f0;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar8[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar9 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
  }
  if (iVar7 < iVar3) {
    uVar14 = 0xffffffff;
    do {
      plVar2 = (longlong *)(*param_1 + (longlong)iVar7 * 0x38);
      FUN_140c3a2ac(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar7 = (int)uVar15;
      lVar12 = (longlong)iVar7;
      uVar4 = puVar8[lVar12] & uVar14;
      if (uVar4 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar8[lVar12 + lVar10 + 1];
          if (uVar4 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar6 - lVar12 == lVar10) goto LAB_1411633f0;
        }
        uVar15 = (ulonglong)(iVar7 + (int)lVar10 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_1411633f0:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar14 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar4 = 0x80;
  if (0x80 < (int)uVar14) {
    uVar4 = uVar14;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14116350a FUN_14116350a body=563 status=ok
// SIG undefined FUN_14116350a(void)

void FUN_14116350a(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar6 = FUN_1459ca56e();
  if (cVar6 != '\0') {
    FUN_1459ca5e2(param_1,&local_48,param_2);
    if (local_48 != 0) {
      *(undefined1 *)(local_48 + 0xa8) = 1;
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar5 = local_58;
      local_50 = 3;
      *local_58 = &PTR_LAB_149e35290;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      local_58[2] = lVar7;
      *local_58 = &PTR_FUN_14b4f67b0;
      local_58[3] = 0;
      iVar9 = 0;
      if (param_1 != 0) {
        uVar4 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_58 + 3) = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar9 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar9 = *(int *)(lVar10 + 0x10);
          bVar11 = iVar9 == 0;
          if (bVar11) {
            *(int *)(lVar10 + 0x10) = iVar8;
            iVar9 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar9 = iVar8;
          }
        }
      }
      plVar1 = local_40;
      *(int *)((longlong)puVar5 + 0x1c) = iVar9;
      puVar5[4] = &LAB_1458eb2da;
      local_68 = local_48;
      local_60 = local_40;
      if (local_40 == (longlong *)0x0) {
        FUN_1458eae66(param_1,&local_68,&local_58);
      }
      else {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
        FUN_1458eae66(param_1,&local_68,&local_58);
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar1 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14116373e FUN_14116373e body=943 status=ok
// SIG undefined FUN_14116373e(void)

void FUN_14116373e(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  longlong local_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_2[4] != 0) {
    plVar14 = *(longlong **)(param_2 + 2);
    plVar13 = plVar14 + (longlong)(int)param_2[4] * 0x12;
    do {
      if ((*plVar14 == 0) || (plVar14[2] == 0)) {
LAB_1411637c3:
        if ((plVar14[4] == param_1[3]) &&
           ((((lVar7 = FUN_141163aee(param_1,*param_2), lVar7 == 0 ||
              (cVar4 = FUN_141163cbe(plVar14 + 5,lVar7), cVar4 == '\0')) && (param_1[1] != 0)) &&
            ((param_1[2] != 0 && (0 < *(int *)(param_1[2] + 8))))))) {
          local_70 = plVar14[4];
          local_74 = *param_2;
          uVar8 = FUN_141163c00(param_1 + 0x19,local_74,&local_74);
          local_68 = &local_70;
          plStack_60 = plVar14 + 5;
          FUN_141163f5c(uVar8,local_4c,&local_68);
          (**(code **)(*param_1 + 0x20))(param_1,plVar14 + 5);
        }
      }
      else {
        lVar7 = plVar14[4];
        uVar10 = *param_2;
        lVar6 = FUN_141163aee(param_1,uVar10,lVar7);
        if (lVar6 != 0) {
          cVar4 = FUN_141163cbe(plVar14 + 5,lVar6);
          if (cVar4 != '\0') goto LAB_1411637c3;
          lVar7 = plVar14[4];
          uVar10 = *param_2;
        }
        local_74 = uVar10;
        local_70 = lVar7;
        uVar8 = FUN_141163c00(param_1 + 0x19,uVar10,&local_74);
        local_68 = &local_70;
        plStack_60 = plVar14 + 5;
        FUN_141163f5c(uVar8,local_4c,&local_68);
        if (((param_1[1] == 0) || (param_1[2] == 0)) || (*(int *)(param_1[2] + 8) < 1)) {
          local_68 = (longlong *)0x0;
          plStack_60 = (longlong *)0x0;
        }
        else {
          local_68 = (longlong *)0x0;
          plStack_60 = (longlong *)((ulonglong)plStack_60 & 0xffffffff00000000);
          FUN_1446efa72(&local_68,0,4,0x10);
          plStack_60 = (longlong *)CONCAT44(plStack_60._4_4_,4);
          plVar11 = (longlong *)param_1[2];
          bVar9 = true;
          if (plVar11 == (longlong *)0x0) {
LAB_141163a47:
            lVar7 = 0;
            plVar11 = (longlong *)0x0;
          }
          else {
            iVar5 = (int)plVar11[1];
            do {
              if (iVar5 == 0) goto LAB_141163a47;
              LOCK();
              iVar3 = (int)plVar11[1];
              bVar15 = iVar5 == iVar3;
              if (bVar15) {
                *(int *)(plVar11 + 1) = iVar5 + 1;
                iVar3 = iVar5;
              }
              iVar5 = iVar3;
              UNLOCK();
            } while (!bVar15);
            lVar7 = param_1[1];
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            bVar9 = false;
          }
          *local_68 = (longlong)&PTR_LAB_14b4f20d0;
          *(undefined4 *)(local_68 + 1) = *param_2;
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar12 == 0) {
            LOCK();
            UNLOCK();
            lVar12 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_68[2] = lVar12;
          *local_68 = (longlong)&PTR_FUN_14b4f2060;
          local_68[3] = lVar7;
          local_68[4] = (longlong)plVar11;
          if (bVar9) {
            local_68[5] = (longlong)FUN_1411af1e0;
            *(undefined4 *)(local_68 + 6) = 0;
          }
          else {
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            local_68[5] = (longlong)FUN_1411af1e0;
            *(undefined4 *)(local_68 + 6) = 0;
            LOCK();
            plVar1 = plVar11 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
            LOCK();
            plVar1 = plVar11 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
            LOCK();
            plVar1 = plVar11 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
        }
        (**(code **)(*(longlong *)plVar14[2] + 0x10))
                  ((longlong *)plVar14[2],*plVar14,plVar14 + 5,&local_68);
        if ((int)plStack_60 != 0) {
          if (local_68 == (longlong *)0x0) goto LAB_1411637cd;
          (**(code **)*local_68)(local_68,0);
          FUN_1446efa72(&local_68,0,0,0x10);
          plStack_60 = (longlong *)((ulonglong)plStack_60 & 0xffffffff00000000);
        }
        if (local_68 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_1411637cd:
      plVar14 = plVar14 + 0x12;
    } while (plVar14 != plVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141163aee FUN_141163aee body=273 status=ok
// SIG undefined FUN_141163aee(void)

longlong FUN_141163aee(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    lVar3 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x108);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      while (lVar3 = *(longlong *)(param_1 + 200) + (longlong)iVar4 * 0x60,
            *(uint *)(*(longlong *)(param_1 + 200) + (longlong)iVar4 * 0x60) != param_2) {
        iVar4 = *(int *)(lVar3 + 0x58);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (lVar3 == 0) {
        return 0;
      }
      if ((longlong *)(lVar3 + 8) == (longlong *)0x0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c)) {
        uVar1 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
        lVar2 = lVar3 + 0x40;
        if (*(longlong *)(lVar3 + 0x48) != 0) {
          lVar2 = *(longlong *)(lVar3 + 0x48);
        }
        iVar4 = *(int *)(lVar2 + (ulonglong)
                                 (*(int *)(lVar3 + 0x50) - 1U &
                                 (int)((ulonglong)param_3 >> 0x20) +
                                 ((int)param_3 << 0x10 | (uint)(ushort)param_3) +
                                 (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_3 >> 4)) * 4
                        );
        if (iVar4 != -1) {
          lVar3 = *(longlong *)(lVar3 + 8);
          do {
            lVar2 = lVar3 + (longlong)iVar4 * 0x78;
            if (*(longlong *)(lVar3 + (longlong)iVar4 * 0x78) == param_3) goto LAB_141163bde;
            iVar4 = *(int *)(lVar2 + 0x70);
          } while (iVar4 != -1);
        }
      }
      lVar2 = 0;
LAB_141163bde:
      lVar3 = lVar2 + 8;
      if (lVar2 == 0) {
        lVar3 = 0;
      }
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 141163c00 FUN_141163c00 body=188 status=ok
// SIG undefined FUN_141163c00(void)

longlong FUN_141163c00(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_141163c65;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_145819f7e(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_141163c65:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 141163cbe FUN_141163cbe body=670 status=ok
// SIG undefined FUN_141163cbe(void)

undefined8 FUN_141163cbe(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  if ((*(char *)(param_1 + 0x10) == *(char *)(param_2 + 0x10)) &&
     (uVar18 = 0,
     *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c) ==
     *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x4c))) {
    uVar11 = *(uint *)(param_1 + 0x40);
    uVar7 = (ulonglong)uVar11;
    if (uVar11 == 0) {
      uVar17 = 1;
      uVar12 = 0;
      iVar10 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x28);
      }
      uVar12 = *puVar8;
      if (uVar12 == 0) {
        iVar10 = uVar11 + 0x1e;
        if (-1 < (int)(uVar11 - 1)) {
          iVar10 = uVar11 - 1;
        }
        uVar18 = 0;
        uVar17 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar17 = uVar18;
        }
        iVar10 = 0;
        do {
          if (uVar17 == uVar18) goto LAB_141163f1e;
          iVar10 = iVar10 + 0x20;
          uVar12 = puVar8[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar18 = 0;
        iVar10 = 0;
      }
      uVar17 = (ulonglong)(-uVar12 & uVar12);
      uVar2 = uVar17 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar12 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if ((int)uVar11 <= (int)uVar12) {
        uVar12 = uVar11;
      }
    }
    if ((int)uVar12 < (int)uVar11) {
      uVar11 = 0xffffffff;
      do {
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar12 * 0x38);
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)(int)uVar12 * 0x38);
        iVar15 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar15 = 0;
        }
        uVar7 = 0;
        if (0 < iVar15) {
          puVar5 = &DAT_149dfb77a;
          if (iVar4 != 0) {
            puVar5 = (undefined2 *)*puVar1;
          }
          lVar13 = 0;
          uVar7 = 0;
          do {
            uVar12 = ((uint)(0x19 < (ushort)puVar5[lVar13] - 0x61) * 0x20 +
                     (uint)(ushort)puVar5[lVar13]) - 0x20;
            uVar14 = (uint)(uVar7 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar7 ^ uVar12) & 0xff) * 4);
            uVar7 = (ulonglong)
                    (uVar14 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar14 & 0xff ^ uVar12 >> 8 & 0xff) * 4))
            ;
            lVar13 = lVar13 + 1;
          } while (iVar15 != (int)lVar13);
        }
        iVar4 = FUN_140dfa800((longlong *)(param_2 + 0x18),uVar7,puVar1);
        if (iVar4 == -1) {
          return 0;
        }
        lVar13 = (longlong)iVar4 * 0x38 + *(longlong *)(param_2 + 0x18);
        if (lVar13 == 0) {
          return 0;
        }
        cVar3 = FUN_14097d526(lVar13 + 0x10,puVar1 + 2);
        if (cVar3 == '\0') goto LAB_141163f31;
        uVar11 = uVar11 & ~(uint)uVar17;
        puVar8 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar8 = (uint *)(param_1 + 0x28);
        }
        uVar14 = *(uint *)(param_1 + 0x40);
        uVar7 = (ulonglong)uVar14;
        iVar4 = (int)uVar18;
        lVar13 = (longlong)iVar4;
        uVar12 = puVar8[lVar13] & uVar11;
        if (uVar12 == 0) {
          iVar15 = uVar14 + 0x1e;
          if (-1 < (int)(uVar14 - 1)) {
            iVar15 = uVar14 - 1;
          }
          iVar15 = iVar15 >> 5;
          iVar16 = iVar15;
          if (iVar15 < iVar4) {
            iVar16 = iVar4;
          }
          if (iVar15 <= iVar4) break;
          lVar9 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar12 = puVar8[lVar13 + lVar9 + 1];
            if (uVar12 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar16 - lVar13 == lVar9) goto LAB_141163f1e;
          }
          uVar18 = (ulonglong)(iVar4 + (int)lVar9 + 1);
          uVar11 = 0xffffffff;
        }
        uVar17 = (ulonglong)(-uVar12 & uVar12);
        uVar2 = uVar17 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar12 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while ((int)uVar12 < (int)uVar14);
    }
LAB_141163f1e:
    uVar6 = CONCAT71((int7)(uVar7 >> 8),1);
  }
  else {
LAB_141163f31:
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 141163f5c FUN_141163f5c body=782 status=ok
// SIG undefined FUN_141163f5c(void)

int * FUN_141163f5c(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar13) {
      FUN_1410fd1ac(param_1,iVar13);
    }
    lVar15 = (longlong)iVar13;
    iVar14 = FUN_144a54ea4(param_1 + 2,1);
    plVar8 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar8 = param_1 + 2;
    }
    iVar6 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar6 = iVar14;
    }
    bVar5 = (byte)iVar14 & 0x1f;
    puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar6 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar13 = (int)param_1[6];
    lVar15 = (longlong)iVar13;
    iVar14 = *(int *)(*param_1 + 4 + lVar15 * 0x78);
    *(int *)(param_1 + 6) = iVar14;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar14 * 0x78) = 0xffffffff;
    }
  }
  plVar8 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[4];
  }
  iVar14 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar14 = iVar13;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar14 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  lVar2 = *param_1;
  lVar15 = lVar15 * 0x78;
  plVar8 = (longlong *)(lVar2 + lVar15);
  puVar3 = (undefined8 *)param_3[1];
  *(undefined8 *)(lVar2 + lVar15) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar2 + 8 + lVar15) = 0;
  iVar14 = *(int *)(puVar3 + 1);
  pvVar4 = (void *)*puVar3;
  *(int *)(lVar2 + 0x10 + lVar15) = iVar14;
  if ((longlong)iVar14 == 0) {
    *(undefined4 *)((longlong)plVar8 + 0x14) = 0;
  }
  else {
    puVar12 = (undefined8 *)(lVar2 + lVar15 + 8);
    FUN_1446dd670(puVar12,iVar14,0);
    memcpy((void *)*puVar12,pvVar4,(longlong)iVar14 * 2);
  }
  *(undefined1 *)(plVar8 + 3) = *(undefined1 *)(puVar3 + 2);
  plVar8[8] = 0;
  *(undefined4 *)(plVar8 + 9) = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  *(undefined8 *)((longlong)plVar8 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar8 + 0x54) = 0;
  plVar8[0xc] = 0;
  *(undefined4 *)(plVar8 + 0xd) = 0;
  FUN_140c39ec6(plVar8 + 4,puVar3 + 3);
  *(undefined4 *)(plVar8 + 0xe) = 0xffffffff;
  lVar15 = *plVar8;
  uVar7 = (uint)((ulonglong)lVar15 >> 0x10);
  uVar10 = (uint)lVar15 & 0xffff;
  uVar7 = ((uint)lVar15 << 0x10 | uVar10) + (int)((ulonglong)lVar15 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar10 >> 4);
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar10 != 0) && (uVar10 != 1)) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & uVar7) * 4);
    if (iVar14 != -1) {
      do {
        pvVar4 = (void *)(*param_1 + (longlong)iVar14 * 0x78);
        if (*(longlong *)(*param_1 + (longlong)iVar14 * 0x78) == lVar15) {
          *(undefined4 *)((longlong)pvVar4 + 0x68) = 0;
          if (*(longlong *)((longlong)pvVar4 + 0x60) != 0) {
            FUN_1400020a8();
          }
          FUN_1411632c2((longlong)pvVar4 + 0x20);
          if (*(longlong *)((longlong)pvVar4 + 8) != 0) {
            FUN_1400020a8();
          }
          memmove(pvVar4,plVar8,0x70);
          FUN_14116426a(param_1,iVar13);
          iVar13 = iVar14;
          goto LAB_141164170;
        }
        iVar14 = *(int *)((longlong)pvVar4 + 0x70);
      } while (iVar14 != -1);
    }
  }
  iVar14 = 1;
  if (3 < uVar10) {
    uVar9 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
    lVar15 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar14 = 1 << ((byte)lVar15 & 0x1f);
  }
  if (((int)uVar10 < 1) || (iVar14 <= (int)param_1[9])) {
    uVar7 = (int)param_1[9] - 1U & uVar7;
    *(uint *)((longlong)plVar8 + 0x74) = uVar7;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(plVar8 + 0xe) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar14;
    FUN_14581a6b6(param_1);
  }
LAB_141164170:
  *param_2 = iVar13;
  return param_2;
}



// FUNCTION 14116426a FUN_14116426a body=118 status=ok
// SIG undefined FUN_14116426a(void)

void FUN_14116426a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x78) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1411642e0 FUN_1411642e0 body=1603 status=ok
// SIG undefined FUN_1411642e0(void)

void FUN_1411642e0(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_141164df8(*param_3,(int)param_3[1]);
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_148aa0d8e(param_3);
  }
  local_e8 = 0;
  FUN_141164a58(param_1);
  plVar5 = (longlong *)FUN_1401e3228(&local_e8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 200))(plVar5,&local_f8);
    if (local_f8 != 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_100);
      cVar4 = FUN_1411649a2(param_1,param_2,local_100);
      if (cVar4 != '\0') {
        (**(code **)(*plVar5 + 0x10))(plVar5,&local_118);
        FUN_141164adc(param_1,&local_110,param_2,local_118);
        if (local_110 != 0) {
          local_e8 = local_110;
          plStack_e0 = local_108;
          if (local_108 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_108 + 1) = (int)local_108[1] + 1;
            UNLOCK();
          }
          local_d8 = local_f8;
          plStack_d0 = local_f0;
          if (local_f0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar5 + 0x10))(plVar5,&local_c8);
          local_c0 = 0;
          uStack_b8 = 0;
          local_b0 = 1;
          local_88 = 0;
          local_80 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_7c = 0xffffffff00000080;
          local_74 = 0;
          local_68 = 0;
          local_60 = 0;
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_141164ea0(param_3,iVar3);
          }
          plVar5 = (longlong *)((longlong)iVar3 * 0x90 + *param_3);
          *plVar5 = local_e8;
          plVar5[1] = (longlong)plStack_e0;
          local_e8 = 0;
          plStack_e0 = (longlong *)0x0;
          plVar5[2] = local_d8;
          plVar5[3] = (longlong)plStack_d0;
          local_d8 = 0;
          plStack_d0 = (longlong *)0x0;
          plVar5[4] = local_c8;
          plVar5[5] = 0;
          plVar5[5] = local_c0;
          local_c0 = 0;
          *(undefined4 *)(plVar5 + 6) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)plVar5 + 0x34) = uStack_b8._4_4_;
          uStack_b8 = 0;
          *(undefined1 *)(plVar5 + 7) = local_b0;
          FUN_141164924(plVar5 + 8,&local_a8);
          local_60 = 0;
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          FUN_1411632c2(&local_a8);
          if (local_c0 != 0) {
            FUN_1400020a8();
          }
          plVar5 = plStack_d0;
          if (plStack_d0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_d0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_d0)(plStack_d0);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          plVar5 = plStack_e0;
          if (plStack_e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_e0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_e0)(plStack_e0);
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
        plVar5 = local_108;
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_108 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_108)(local_108);
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
    }
    plVar5 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_f0)(local_f0);
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
  plVar5 = (longlong *)FUN_140a68038(1);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 200))(plVar5,&local_f8);
    if (local_f8 != 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_120);
      cVar4 = FUN_1411649a2(param_1,param_2,local_120);
      if (cVar4 != '\0') {
        (**(code **)(*plVar5 + 0x10))(plVar5,&local_128);
        FUN_141164adc(param_1,&local_110,param_2,local_128);
        if (local_110 != 0) {
          local_e8 = local_110;
          plStack_e0 = local_108;
          if (local_108 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_108 + 1) = (int)local_108[1] + 1;
            UNLOCK();
          }
          local_d8 = local_f8;
          plStack_d0 = local_f0;
          if (local_f0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar5 + 0x10))(plVar5,&local_c8);
          local_c0 = 0;
          uStack_b8 = 0;
          local_b0 = 1;
          local_88 = 0;
          local_80 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_7c = 0xffffffff00000080;
          local_74 = 0;
          local_68 = 0;
          local_60 = 0;
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_141164ea0(param_3,iVar3);
          }
          plVar5 = (longlong *)((longlong)iVar3 * 0x90 + *param_3);
          *plVar5 = local_e8;
          plVar5[1] = (longlong)plStack_e0;
          local_e8 = 0;
          plStack_e0 = (longlong *)0x0;
          plVar5[2] = local_d8;
          plVar5[3] = (longlong)plStack_d0;
          local_d8 = 0;
          plStack_d0 = (longlong *)0x0;
          plVar5[4] = local_c8;
          plVar5[5] = 0;
          plVar5[5] = local_c0;
          local_c0 = 0;
          *(undefined4 *)(plVar5 + 6) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)plVar5 + 0x34) = uStack_b8._4_4_;
          uStack_b8 = 0;
          *(undefined1 *)(plVar5 + 7) = local_b0;
          FUN_141164924(plVar5 + 8,&local_a8);
          local_60 = 0;
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          FUN_1411632c2(&local_a8);
          if (local_c0 != 0) {
            FUN_1400020a8();
          }
          plVar5 = plStack_d0;
          if (plStack_d0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_d0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_d0)(plStack_d0);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          plVar5 = plStack_e0;
          if (plStack_e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_e0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_e0)(plStack_e0);
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
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_108 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar2 = (int *)((longlong)local_108 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_108 + 0x10))(local_108);
            }
          }
        }
      }
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_f0 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_f0 + 0x10))(local_f0);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141164924 FUN_141164924 body=125 status=ok
// SIG undefined FUN_141164924(void)

undefined8 * FUN_141164924(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_141164ba4();
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



// FUNCTION 1411649a2 FUN_1411649a2 body=181 status=ok
// SIG undefined FUN_1411649a2(void)

undefined8 FUN_1411649a2(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141164a58();
  local_20 = param_3;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
    if (local_38 != (longlong *)0x0) {
      iVar3 = (**(code **)(*local_38 + 0x138))(local_38,param_2 & 0xffffffff);
      uVar5 = CONCAT71((int7)((param_2 & 0xffffffff) >> 8),1);
      if (iVar3 == 2) goto LAB_141164a03;
    }
  }
  uVar5 = 0;
LAB_141164a03:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141164a58 FUN_141164a58 body=132 status=ok
// SIG undefined FUN_141164a58(void)

undefined8 FUN_141164a58(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  cVar2 = FUN_14111b834((uint *)(param_1 + 0x20),0);
  if (cVar2 != '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_141164ab9;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == *(int *)(param_1 + 0x24) && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))
       ) {
      lVar3 = *plVar4;
      goto LAB_141164ab9;
    }
  }
  lVar3 = 0;
LAB_141164ab9:
  if (*(longlong *)(lVar3 + 0x30) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
  }
  return uVar5;
}



// FUNCTION 141164adc FUN_141164adc body=198 status=ok
// SIG undefined FUN_141164adc(void)

undefined8 *
FUN_141164adc(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141164a58();
  local_28 = param_4;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x110))(local_38,param_2,param_3);
      bVar3 = false;
      goto LAB_141164b40;
    }
  }
  bVar3 = true;
LAB_141164b40:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (bVar3) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141164ba4 FUN_141164ba4 body=596 status=ok
// SIG undefined FUN_141164ba4(void)

longlong * FUN_141164ba4(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (param_1 != param_2) {
    puVar1 = (uint *)(param_1 + 2);
    iVar3 = (int)param_1[5];
    if (iVar3 == 0) {
      uVar16 = 0;
      uVar17 = 1;
      iVar13 = 0;
      iVar12 = 0;
    }
    else {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      uVar18 = *puVar7;
      if (uVar18 == 0) {
        iVar13 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar13 = iVar3 + -1;
        }
        uVar16 = 0;
        uVar10 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar10 = uVar16;
        }
        iVar13 = 0;
        do {
          if (uVar10 == uVar16) goto LAB_141164cba;
          iVar13 = iVar13 + 0x20;
          uVar18 = puVar7[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar16 = 0;
        iVar13 = 0;
      }
      uVar17 = (ulonglong)(-uVar18 & uVar18);
      uVar10 = uVar17 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar12 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar12) {
        iVar12 = iVar3;
      }
    }
    if (iVar12 != iVar3) {
      uVar18 = 0xffffffff;
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar12 * 0x38);
        FUN_140c3a2ac(plVar2 + 2);
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
        uVar18 = uVar18 & ~(uint)uVar17;
        puVar7 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar7 = puVar1;
        }
        iVar4 = (int)param_1[5];
        iVar12 = (int)uVar16;
        lVar14 = (longlong)iVar12;
        uVar11 = puVar7[lVar14] & uVar18;
        if (uVar11 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar12) {
            iVar9 = iVar12;
          }
          if (iVar12 < iVar8) {
            lVar15 = 0;
            do {
              uVar11 = puVar7[lVar14 + lVar15 + 1];
              if (uVar11 != 0) {
                uVar16 = (ulonglong)(iVar12 + (int)lVar15 + 1);
                uVar18 = 0xffffffff;
                goto LAB_141164c8b;
              }
              iVar13 = iVar13 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar9 - lVar14 != lVar15);
            uVar18 = 0xffffffff;
            iVar12 = iVar9;
          }
          uVar16 = (ulonglong)(iVar12 + 1);
          iVar12 = iVar4;
        }
        else {
LAB_141164c8b:
          uVar17 = (ulonglong)(-uVar11 & uVar11);
          uVar10 = uVar17 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar12 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar12) {
            iVar12 = iVar4;
          }
        }
      } while (iVar12 != iVar3);
    }
LAB_141164cba:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar14 = param_2[3];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *puVar1 = *(uint *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)lVar14;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 141164df8 FUN_141164df8 body=167 status=ok
// SIG undefined FUN_141164df8(void)

void FUN_141164df8(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x88);
    do {
      *puVar4 = 0;
      if (*(longlong *)(puVar4 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_1411632c2(puVar4 + -0x12);
      if (*(longlong *)(puVar4 + -0x18) != 0) {
        FUN_1400020a8();
      }
      plVar3 = *(longlong **)(puVar4 + -0x1c);
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
      plVar3 = *(longlong **)(puVar4 + -0x20);
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
      puVar4 = puVar4 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141164ea0 FUN_141164ea0 body=272 status=ok
// SIG undefined FUN_141164ea0(void)

void FUN_141164ea0(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x90;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141164fb0 FUN_141164fb0 body=639 status=ok
// SIG undefined FUN_141164fb0(void)

void FUN_141164fb0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_80 = param_1;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar10 = 1;
    local_58._4_4_ = 0;
    uVar15 = 0xffffffff;
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar10 = local_68 >> 0x20;
    uVar15 = (uint)local_58;
    iVar16 = (int)local_68;
  }
  plVar6 = local_60;
  plVar7 = local_80;
  iVar11 = local_50;
  iVar13 = local_58._4_4_;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar12 = *plVar7;
      plVar8 = *(longlong **)(lVar12 + 0x18 + (longlong)iVar13 * 0x28);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar7 = local_80;
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            plVar7 = local_80;
          }
        }
      }
      plVar8 = *(longlong **)(lVar12 + (longlong)iVar13 * 0x28 + 8);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar7 = local_80;
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            plVar7 = local_80;
          }
        }
      }
      uVar15 = uVar15 & ~(uint)uVar10;
      plVar8 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar8 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar12 = (longlong)iVar16;
      uVar14 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar15;
      if (uVar14 == 0) {
        iVar13 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar13 = iVar4 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar5 = iVar13;
        if (iVar13 < iVar16) {
          iVar5 = iVar16;
        }
        if (iVar13 <= iVar16) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar14 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar14 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_14116519a;
        }
        iVar16 = iVar16 + (int)lVar9 + 1;
        uVar15 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar14 & uVar14);
      uVar3 = uVar10 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar13 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar4);
  }
LAB_14116519a:
  iVar16 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(plVar7 + 1) = 0;
  if (*(int *)((longlong)plVar7 + 0xc) != local_74) {
    FUN_140549ad6(plVar7,local_74);
    plVar7 = local_80;
  }
  plVar7[6] = 0xffffffff;
  uVar15 = iVar16 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(plVar7 + 5) = 0;
  if ((*(int *)((longlong)plVar7 + 0x2c) < (int)uVar15) ||
     (0x80 < *(int *)((longlong)plVar7 + 0x2c))) {
    uVar14 = 0x80;
    if (0x80 < (int)uVar15) {
      uVar14 = uVar15;
    }
    *(uint *)((longlong)plVar7 + 0x2c) = uVar14;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141165238 FUN_141165238 body=181 status=ok
// SIG undefined FUN_141165238(void)

void FUN_141165238(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb0b4d0 == 0) {
    FUN_1446f470e(&local_40,L"EPixelFormat",1);
    FUN_1446f470e(&local_48,L"/Script/CoreUObject",1);
    local_38 = 0;
    uStack_30 = 0;
    FUN_1411652ee(&local_38,local_48,local_40);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    uVar1 = FUN_140851d9a();
    DAT_14cb0b4d0 = FUN_140be8491(uVar1,&local_28,0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411652ee FUN_1411652ee body=14 status=ok
// SIG undefined FUN_1411652ee(void)

bool FUN_1411652ee(longlong *param_1,longlong param_2,longlong param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_2 != 0;
}



// FUNCTION 1411652fc FUN_1411652fc body=384 status=ok
// SIG undefined FUN_1411652fc(void)

undefined8
FUN_1411652fc(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    lVar1 = FUN_1400f6f32(lVar1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
      lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
      if (lVar1 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_40 = &local_20;
          local_20 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_1459f2e4c;
          local_48 = &LAB_148c39de3;
          local_50 = &LAB_1457a9eb2;
          local_58 = &DAT_149e063b2;
          local_60 = 0;
          local_68 = 0x10000004;
          local_70 = 0x10;
          local_78 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          lVar1 = FUN_14030d330(lVar1);
          if (lVar1 != 0) {
            lVar1 = FUN_140cee904(lVar1);
            if (lVar1 != 0) {
              FUN_14116547e(lVar1,param_4,param_5);
              uVar2 = 1;
              goto LAB_1411653b7;
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_1411653b7:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14116547e FUN_14116547e body=589 status=ok
// SIG undefined FUN_14116547e(void)

void FUN_14116547e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  FUN_14009b010(&local_78,3,0);
  if (param_3 != &DAT_14c9a1308) {
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    plVar3 = (longlong *)param_3[1];
    *param_3 = local_78;
    param_3[1] = (longlong)plStack_70;
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
  }
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    cVar4 = '\0';
    FUN_14009b010(&local_78,2,0);
    if (*param_3 != 0) {
      local_98 = 0;
      cVar4 = FUN_14014191c(*param_3,&DAT_14cbd8468,&local_78,0);
    }
    plVar3 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (cVar4 != '\0') {
      puVar5 = (undefined8 *)FUN_14039d0c8(param_3,&DAT_14cbd8468);
      FUN_1411656cc(puVar5);
      if ((longlong)*(int *)(param_1 + 0x60) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x58);
        lVar7 = (longlong)*(int *)(param_1 + 0x60) << 4;
        do {
          local_88 = 0;
          plStack_80 = (longlong *)0x0;
          FUN_14009b010(&local_88,1,0);
          FUN_14000bbd8(&local_78,lVar6);
          if (local_88 != 0) {
            FUN_1402afb64(local_88,&local_78);
          }
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          local_98 = 0;
          FUN_140141db6(*puVar5,&local_88,0,0);
          plVar3 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          lVar6 = lVar6 + 0x10;
          lVar7 = lVar7 + -0x10;
        } while (lVar7 != 0);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411656cc FUN_1411656cc body=55 status=ok
// SIG undefined FUN_1411656cc(void)

undefined8 FUN_1411656cc(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = (byte *)*param_1;
  if ((((pbVar1 == (byte *)0x0) || ((pbVar1[1] & 2) != 0)) || ((*pbVar1 & 0x83) != 2)) ||
     (0 < *(int *)(*(longlong *)(pbVar1 + 8) + 0x10))) {
    uVar2 = 0;
  }
  else {
    pbVar1[0x24] = 0;
    pbVar1[0x25] = 0;
    pbVar1[0x26] = 0;
    pbVar1[0x27] = 0;
    *pbVar1 = *pbVar1 | 0x80;
    uVar2 = CONCAT71((int7)((ulonglong)pbVar1 >> 8),1);
  }
  return uVar2;
}



// FUNCTION 141165704 FUN_141165704 body=103 status=ok
// SIG undefined FUN_141165704(void)

ulonglong FUN_141165704(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14116574e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14116574e;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 14116576c FUN_14116576c body=65 status=ok
// SIG undefined FUN_14116576c(void)

void FUN_14116576c(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  local_38 = 0;
  FUN_140f73374();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411657ae FUN_1411657ae body=75 status=ok
// SIG undefined FUN_1411657ae(void)

void FUN_1411657ae(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14581bbee();
  lVar2 = param_1 + 0x25d0;
  lVar1 = 6;
  do {
    *(undefined4 *)(lVar2 + 0x30) = 0;
    FUN_1401861f4(lVar2,0);
    lVar2 = lVar2 + 0x40;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14581bd3e(param_1 + 0x3910);
  return;
}



// FUNCTION 1411657fa FUN_1411657fa body=331 status=ok
// SIG undefined FUN_1411657fa(void)

void FUN_1411657fa(longlong param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar4 = (undefined8 *)*param_2;
    lVar5 = (longlong)*(int *)(param_2 + 1) * 0x18;
    do {
      local_78 = *puVar4;
      local_70 = *(undefined4 *)(puVar4 + 1);
      FUN_1448075d0(local_68,&local_78);
      if (DAT_14cb758b8 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_144837462(DAT_14cb758b8,local_68);
      }
      if (param_3 == 0) {
        if (lVar3 == 0) {
LAB_141165932:
          if (local_50 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          cVar1 = *(char *)(lVar3 + 0x41);
          if (local_50 != 0) {
            FUN_1400020a8();
          }
          if (cVar1 == '\0') goto LAB_1411658a6;
        }
      }
      else {
        if (param_3 == 1) {
          if (lVar3 == 0) goto LAB_141165932;
          cVar1 = *(char *)(lVar3 + 0x41);
          if (local_50 != 0) {
            FUN_1400020a8();
          }
          if (cVar1 != '\x01') goto LAB_1411658c0;
        }
        else if (local_50 != 0) {
          FUN_1400020a8();
        }
LAB_1411658a6:
        uVar2 = puVar4[2];
        puVar4[2] = 0;
        FUN_14105a360(param_1,puVar4,0,uVar2);
      }
LAB_1411658c0:
      puVar4 = puVar4 + 3;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141165946 FUN_141165946 body=62 status=ok
// SIG undefined FUN_141165946(void)

void FUN_141165946(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      FUN_140de863f(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141165984 FUN_141165984 body=24 status=ok
// SIG undefined FUN_141165984(void)

undefined8 FUN_141165984(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  longlong lStack_18;
  ulonglong uStack_10;
  
  if ((param_1 == 0) || (lVar1 = *(longlong *)(param_1 + 0x1f0), lVar1 == 0)) {
    return 0;
  }
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lStack_18 = FUN_141165a52();
  if ((lStack_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lStack_18);
  }
  uVar2 = FUN_141165a06(lVar1 + 0x100,&lStack_18);
  if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14116599c FUN_14116599c body=105 status=ok
// SIG undefined FUN_14116599c(void)

void FUN_14116599c(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_141165a52();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_141165a06(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141165a06 FUN_141165a06 body=76 status=ok
// SIG undefined FUN_141165a06(void)

void FUN_141165a06(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_141165a52();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_141165a43;
    }
  }
  lVar2 = 0;
LAB_141165a43:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 141165a52 FUN_141165a52 body=228 status=ok
// SIG undefined FUN_141165a52(void)

longlong FUN_141165a52(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbad250 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14657f1c8;
    local_38 = &LAB_148c358bf;
    local_40 = &LAB_145bdf5fc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x230;
    FUN_14081cfa3(L"/Script/OakGame",L"OakOnlineLoginManager",&DAT_14cbad250,&DAT_148c358be);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbad250;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141165b38 FUN_141165b38 body=138 status=ok
// SIG undefined FUN_141165b38(void)

byte FUN_141165b38(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar3 = FUN_1407c8d60(param_2);
    if ((lVar3 != 0) && (bVar2 = 1, *(char *)(lVar3 + 0x30) != '\0')) goto LAB_141165b70;
    cVar1 = FUN_14581c4de(param_2);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x178) == '\x03')) {
      bVar2 = FUN_14016169c(param_1,&local_1c);
      bVar2 = bVar2 ^ 1 | local_1c == 0;
      goto LAB_141165b70;
    }
  }
  bVar2 = 0;
LAB_141165b70:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141165bc4 FUN_141165bc4 body=26 status=ok
// SIG undefined FUN_141165bc4(void)

undefined8 FUN_141165bc4(undefined8 *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 == (byte *)0x0) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)pbVar1 >> 8),(*pbVar1 & 0x68) == 0 && (*pbVar1 & 3) != 0);
}



// FUNCTION 141165bde FUN_141165bde body=727 status=ok
// SIG undefined FUN_141165bde(void)

void FUN_141165bde(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
    iVar8 = *(int *)(param_1 + 0xa4);
    FUN_14474dad8(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if ((iVar8 < 0) && (*(int *)(param_1 + 0xa4) != 0)) {
      FUN_148949f3e(param_1 + 0x98,0);
    }
    plVar7 = (longlong *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) < 0) {
      FUN_1402191ca(plVar7,0);
    }
    local_60 = param_2;
    puVar2 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cb8a360);
    cVar1 = FUN_144a79b3c(puVar2);
    if (cVar1 != '\0') {
      pbVar4 = (byte *)*puVar2;
      puVar5 = &DAT_14c9a1270;
      if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 2) != 0)) {
        puVar5 = *(undefined8 **)(pbVar4 + 8);
      }
      iVar8 = *(int *)(puVar5 + 2);
      if (iVar8 < 0) goto LAB_141165e63;
      if (*(int *)(param_1 + 0x84) < iVar8) {
        FUN_1402191ca(plVar7);
        pbVar4 = (byte *)*puVar2;
      }
      plVar6 = &DAT_14c9a1270;
      if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 2) != 0)) {
        plVar6 = *(longlong **)(pbVar4 + 8);
      }
      lVar9 = plVar6[2];
      if ((longlong)(int)lVar9 != 0) {
        lVar11 = *plVar6;
        lVar10 = 0;
        do {
          local_58 = 0;
          if (*(longlong *)(lVar11 + lVar10) != 0) {
            FUN_1400bc2ec(*(longlong *)(lVar11 + lVar10),&local_50,&local_58);
            if (local_50 != 0) {
              iVar8 = *(int *)(param_1 + 0x80);
              *(uint *)(param_1 + 0x80) = iVar8 + 1U;
              if (*(uint *)(param_1 + 0x84) < iVar8 + 1U) {
                FUN_1446f84a2(plVar7,iVar8);
              }
              *(longlong *)(*plVar7 + (longlong)iVar8 * 8) = local_50;
              FUN_141165eb6(param_1 + 0x30,&local_50);
            }
          }
          lVar10 = lVar10 + 0x10;
        } while ((longlong)(int)lVar9 * 0x10 != lVar10);
      }
    }
    uVar3 = FUN_140dfc108(*(undefined8 *)(param_1 + 0x20));
    iVar8 = *(int *)(param_1 + 0x94);
    FUN_141165946(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
    if ((iVar8 < 0) && (*(int *)(param_1 + 0x94) != 0)) {
      FUN_14581d39c(param_1 + 0x88,0);
    }
    puVar2 = (undefined8 *)FUN_144a06846(local_60,&DAT_14cb8a388);
    cVar1 = FUN_144a79b3c(puVar2);
    if (cVar1 != '\0') {
      puVar5 = &DAT_14c9a1270;
      pbVar4 = (byte *)*puVar2;
      if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 2) != 0)) {
        puVar5 = *(undefined8 **)(pbVar4 + 8);
      }
      iVar8 = *(int *)(puVar5 + 2);
      if (iVar8 < 0) {
LAB_141165e63:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar8);
      }
      if (*(int *)(param_1 + 0x94) < iVar8) {
        FUN_14581d39c(param_1 + 0x88);
        pbVar4 = (byte *)*puVar2;
      }
      plVar7 = &DAT_14c9a1270;
      if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 2) != 0)) {
        plVar7 = *(longlong **)(pbVar4 + 8);
      }
      if ((longlong)(int)plVar7[2] != 0) {
        lVar9 = *plVar7;
        lVar11 = (longlong)(int)plVar7[2] << 4;
        do {
          FUN_14581c798(param_1,uVar3,lVar9);
          lVar9 = lVar9 + 0x10;
          lVar11 = lVar11 + -0x10;
        } while (lVar11 != 0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141165eb6 FUN_141165eb6 body=162 status=ok
// SIG undefined FUN_141165eb6(void)

void FUN_141165eb6(longlong *param_1,undefined8 param_2)

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
        goto LAB_141165f43;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_141165f43:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141165f58 FUN_141165f58 body=225 status=ok
// SIG undefined FUN_141165f58(void)

undefined1 FUN_141165f58(undefined1 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  *param_1 = 0;
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) {
    uVar5 = FUN_140c52150();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x20) = lVar4;
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
  if (lVar6 == 0) {
    if ((lVar4 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) goto LAB_141165fba;
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      goto LAB_141165fba;
    }
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,param_1 + 0x18);
    *(longlong *)(param_1 + 0x28) = lVar6;
    if (lVar6 == 0) goto LAB_141165fba;
  }
  iVar1 = *(int *)(lVar6 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(lVar6 + 0x18);
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar4 + lVar6);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,param_2), cVar3 != '\0')) {
        *param_1 = 1;
        break;
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
LAB_141165fba:
  return *param_1;
}



// FUNCTION 14116603a FUN_14116603a body=827 status=ok
// SIG undefined FUN_14116603a(void)

void FUN_14116603a(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined8 local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_1 == 0) || (*(char *)(param_1 + 0x32b8) != '\x01')) goto LAB_1411662cc;
  iVar3 = FUN_14487fd02(param_1);
  if (iVar3 != 3) {
LAB_1411660ce:
    FUN_141208f3a(&local_58);
    lVar5 = local_58;
    if ((longlong)local_50 != 0) {
      lVar9 = 0;
      do {
        lVar6 = *(longlong *)(lVar5 + lVar9);
        if (lVar6 != 0) {
          uVar4 = FUN_14125be1e(param_1,lVar6);
          FUN_14410b786(param_1,lVar6,uVar4);
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)local_50 * 8 != lVar9);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
    goto LAB_1411662cc;
  }
  lVar5 = FUN_1447210f0(param_1);
  if ((lVar5 == 0) || (lVar5 = FUN_1400f6f32(lVar5), lVar5 == 0)) {
    lVar5 = 0;
    FUN_140d27df6(0,local_3c,param_1);
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x68);
    FUN_140d27df6(lVar5,local_3c,param_1);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      iVar3 = FUN_1402d8968(lVar5,local_3c);
      if (iVar3 == 0xb) goto LAB_1411660ce;
    }
  }
  if (*(longlong *)(param_1 + 0x3240) != 0) goto LAB_1411662cc;
  local_58 = *(longlong *)(param_1 + 0x18);
  FUN_1400021e4(&local_58,&local_68);
  puVar8 = local_68;
  if (local_60 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_58,L"UpdateAllDLCUnlockables, %s",puVar8);
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,3,0x10);
  puVar2 = local_78;
  local_70 = 3;
  *local_78 = &PTR_LAB_14b3e9ca0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_78[2] = lVar6;
  *local_78 = &PTR_FUN_14b9688b0;
  local_78[3] = 0;
  uVar1 = *(uint *)(param_1 + 0xc);
  *(uint *)(local_78 + 3) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  iVar3 = *(int *)(lVar9 + 0x10);
  if (*(int *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar7 = DAT_14c964868 + 1;
    bVar10 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar10) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar7);
    }
    LOCK();
    iVar3 = *(int *)(lVar9 + 0x10);
    bVar10 = iVar3 == 0;
    if (bVar10) {
      *(int *)(lVar9 + 0x10) = iVar7;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar10) {
      iVar3 = iVar7;
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar3;
  local_88 = 1;
  local_90 = 0xffffffff;
  local_98 = &local_58;
  FUN_1413d987a(lVar5,&local_48,local_3c,&local_78);
  if (local_70 == 0) {
LAB_141166294:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70 = 0;
    goto LAB_141166294;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x3240) = local_48;
LAB_1411662cc:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141166376 FUN_141166376 body=1216 status=ok
// SIG undefined FUN_141166376(void)

void FUN_141166376(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char *_Str;
  ulonglong uVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  char *pcVar13;
  longlong lVar14;
  float fVar15;
  undefined1 auStack_78 [32];
  char *local_58;
  int local_50;
  undefined1 local_4c;
  uint local_48 [6];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 0x6b) != 3)) goto LAB_14116675d;
  local_50 = DAT_14cbcfaa8;
  local_58 = DAT_14cbcfaa0;
  FUN_1448075d0(local_48);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar12 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar6[9];
      }
      iVar5 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar6[10] - 1U & local_48[0]) * 4);
      if (iVar5 != -1) {
        do {
          lVar8 = *plVar6 + (longlong)iVar5 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar5 * 0x40) == local_48[0]) {
            if ((((lVar8 != 0) &&
                 (puVar7 = (undefined8 *)(lVar8 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
            goto LAB_141166456;
            break;
          }
          iVar5 = *(int *)(lVar8 + 0x38);
        } while (iVar5 != -1);
      }
    }
  }
  puVar7 = &DAT_14c9a1308;
LAB_141166456:
  fVar15 = (float)FUN_140b963dc(puVar7,0);
  *(double *)(param_1 + 0x3dc0) = (double)fVar15;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = DAT_14cbcfac0;
  local_58 = DAT_14cbcfab8;
  FUN_1448075d0(local_48);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar12 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar6[9];
      }
      iVar5 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar6[10] - 1U & local_48[0]) * 4);
      if (iVar5 != -1) {
        do {
          lVar8 = *plVar6 + (longlong)iVar5 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar5 * 0x40) == local_48[0]) {
            if (((lVar8 != 0) &&
                (puVar7 = (undefined8 *)(lVar8 + 0x28), puVar7 != (undefined8 *)0x0)) &&
               (((byte *)*puVar7 != (byte *)0x0 && ((*(byte *)*puVar7 & 0x40) == 0))))
            goto LAB_141166524;
            break;
          }
          iVar5 = *(int *)(lVar8 + 0x38);
        } while (iVar5 != -1);
      }
    }
  }
  puVar7 = &DAT_14c9a1308;
LAB_141166524:
  fVar15 = (float)FUN_140b963dc(puVar7,0);
  *(double *)(param_1 + 0x3dc8) = (double)fVar15;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = DAT_14cbcfad8;
  local_58 = DAT_14cbcfad0;
  FUN_1448075d0(local_48);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar12 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar6[9];
      }
      iVar5 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar6[10] - 1U & local_48[0]) * 4);
      if (iVar5 != -1) {
        do {
          lVar8 = *plVar6 + (longlong)iVar5 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar5 * 0x40) == local_48[0]) {
            if (((lVar8 != 0) &&
                (puVar7 = (undefined8 *)(lVar8 + 0x28), puVar7 != (undefined8 *)0x0)) &&
               (((byte *)*puVar7 != (byte *)0x0 && ((*(byte *)*puVar7 & 0x40) == 0))))
            goto LAB_1411665f2;
            break;
          }
          iVar5 = *(int *)(lVar8 + 0x38);
        } while (iVar5 != -1);
      }
    }
  }
  puVar7 = &DAT_14c9a1308;
LAB_1411665f2:
  fVar15 = (float)FUN_140b963dc(puVar7,0);
  *(double *)(param_1 + 0x3dd0) = (double)fVar15;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = DAT_14cbcfaf0;
  local_58 = DAT_14cbcfae8;
  FUN_1448075d0(local_48);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar12 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar6[9];
      }
      iVar5 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar6[10] - 1U & local_48[0]) * 4);
      if (iVar5 != -1) {
        do {
          lVar8 = *plVar6 + (longlong)iVar5 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar5 * 0x40) == local_48[0]) {
            if ((((lVar8 != 0) &&
                 (puVar7 = (undefined8 *)(lVar8 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
            goto LAB_1411666c0;
            break;
          }
          iVar5 = *(int *)(lVar8 + 0x38);
        } while (iVar5 != -1);
      }
    }
  }
  puVar7 = &DAT_14c9a1308;
LAB_1411666c0:
  pbVar1 = (byte *)*puVar7;
  if (((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) ||
     (_Str = *(char **)(pbVar1 + 8), _Str == (char *)0x0)) {
LAB_1411666c8:
    uVar2 = 0;
    uVar9 = 0;
  }
  else {
    sVar3 = strlen(_Str);
    iVar5 = (int)sVar3;
    if (iVar5 == 0) goto LAB_1411666c8;
    lVar8 = (longlong)iVar5;
    pcVar13 = _Str + lVar8 + -1;
    uVar4 = 0;
    if (pcVar13 < _Str) {
      lVar11 = 0;
    }
    else {
      do {
        if (9 < (byte)(*pcVar13 - 0x30U)) break;
        uVar4 = uVar4 + 1;
        pcVar13 = pcVar13 + -1;
      } while (_Str <= pcVar13);
      lVar11 = 0;
      if (((uVar4 != 0) && ((int)uVar4 < iVar5)) &&
         ((lVar11 = 0, uVar4 < 0xb && (lVar14 = -(ulonglong)uVar4, _Str[lVar14 + lVar8 + -1] == '_')
          ))) {
        if ((uVar4 == 1) || (_Str[lVar14 + lVar8] != '0')) {
          lVar10 = 0;
          do {
            lVar11 = (longlong)_Str[lVar14 + lVar8] + lVar10 * 10;
            lVar10 = lVar11 + -0x30;
            lVar14 = lVar14 + 1;
          } while (lVar14 != 0);
          if (lVar10 < 0x7fffffff) {
            iVar5 = ~uVar4 + iVar5;
            lVar11 = lVar11 + -0x2f;
            goto LAB_141166726;
          }
        }
        lVar11 = 0;
      }
LAB_141166726:
      if (iVar5 == 0) goto LAB_1411666c8;
    }
    local_4c = 0;
    local_58 = _Str;
    local_50 = iVar5;
    uVar4 = FUN_14001a6c0(&local_58,1);
    uVar9 = lVar11 << 0x20;
    uVar2 = (ulonglong)uVar4;
  }
  *(ulonglong *)(param_1 + 0x3dd8) = uVar2 | uVar9;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
LAB_14116675d:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141166838 FUN_141166838 body=1479 status=ok
// SIG undefined FUN_141166838(void)

undefined8 FUN_141166838(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *piVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *param_2;
  if ((param_1[0x47b] != lVar6) || ((int)param_1[0x47c] != (int)param_2[1])) {
    if (lVar6 == 0) {
      FUN_14581c4f8(param_1);
    }
    else {
      local_48 = lVar6;
      lVar6 = FUN_14050aea0();
      if ((lVar6 != 0) && (cVar4 = FUN_141165b38(param_1,lVar6), cVar4 != '\0')) {
        lVar7 = FUN_1447210f0(param_1);
        if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x170) != 0)) {
          lVar8 = FUN_140425b9a();
          lVar10 = *(longlong *)(lVar7 + 0x170);
          if ((((lVar10 != 0) && (lVar8 != 0)) && (lVar2 = *(longlong *)(lVar10 + 0x10), lVar2 != 0)
              ) && (((*(int *)(lVar8 + 0x38) <= *(int *)(lVar2 + 0x38) &&
                     (*(longlong *)
                       (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                      lVar8 + 0x30)) && (*(char *)(lVar10 + 0x731) != '\x01')))) goto LAB_141166c0f;
        }
        if (param_3 == '\0') {
          uVar9 = FUN_1447210f0(param_1);
          lVar10 = FUN_1411db1ae(uVar9);
          if (lVar10 != 0) {
            if (*(longlong *)(lVar10 + 200) == 0) {
              piVar11 = (int *)&DAT_14c948618;
            }
            else {
              piVar11 = (int *)(*(longlong *)(lVar10 + 200) + 8);
            }
            if ((*piVar11 != 0) ||
               ((*(longlong *)(lVar10 + 0xb8) != 0 &&
                (*(int *)(*(longlong *)(lVar10 + 0xb8) + 8) != 0)))) goto LAB_141166c0f;
          }
        }
        plVar1 = param_1 + 0x47b;
        lVar7 = FUN_14067bb54(lVar7);
        if ((lVar7 != 0) && (lVar7 = FUN_1457331aa(lVar7), lVar7 != 0)) {
          puVar12 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
            puVar12 = *(undefined4 **)(lVar7 + 8);
          }
          FUN_1447715ec(param_1 + 0x481,puVar12);
        }
        if ((*plVar1 != *param_2) || ((int)param_1[0x47c] != (int)param_2[1])) {
          param_1[0x47b] = *param_2;
          *(int *)(param_1 + 0x47c) = (int)param_2[1];
          param_1[0x47d] = 0;
        }
        FUN_144203c8e(&DAT_14cbd0b18,param_1);
        lVar7 = FUN_1407c8d60(lVar6);
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x2e) == '\x01')) {
          if (param_3 == '\0') {
            if ((param_1[0x478] != *param_2) || ((int)param_1[0x479] != (int)param_2[1])) {
              FUN_1441ff9d0(param_1,plVar1,0);
            }
          }
          else if ((((char)param_1[0x2f] == '\x03') &&
                   (cVar4 = (**(code **)(*param_1 + 0x6c8))(param_1), cVar4 != '\0')) &&
                  ((cVar4 = FUN_14016169c(param_1,&local_48), cVar4 == '\0' || ((int)local_48 == 0))
                  )) {
            uVar9 = FUN_1447210f0(param_1);
            FUN_1410d53f0(&local_48,uVar9);
            if (local_40 != (longlong *)0x0) {
              iVar5 = (int)local_40[1];
              do {
                if (iVar5 == 0) {
                  plVar13 = (longlong *)0x0;
                  break;
                }
                LOCK();
                iVar3 = (int)local_40[1];
                bVar14 = iVar5 == iVar3;
                if (bVar14) {
                  *(int *)(local_40 + 1) = iVar5 + 1;
                  iVar3 = iVar5;
                }
                iVar5 = iVar3;
                UNLOCK();
                plVar13 = local_40;
              } while (!bVar14);
              LOCK();
              piVar11 = (int *)((longlong)local_40 + 0xc);
              *piVar11 = *piVar11 + -1;
              UNLOCK();
              if (*piVar11 == 0) {
                (**(code **)(*local_40 + 0x10))();
              }
              if (plVar13 != (longlong *)0x0) {
                if ((local_48 != 0) &&
                   ((*(longlong *)(local_48 + 0xd0) != *plVar1 ||
                    (*(int *)(local_48 + 0xd8) != (int)param_1[0x47c])))) {
                  *(longlong *)(local_48 + 0xd0) = *plVar1;
                  *(int *)(local_48 + 0xd8) = (int)param_1[0x47c];
                  *(undefined8 *)(local_48 + 0xe0) = 0;
                }
                LOCK();
                plVar1 = plVar13 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar11 = (int *)((longlong)plVar13 + 0xc);
                  *piVar11 = *piVar11 + -1;
                  UNLOCK();
                  if (*piVar11 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                  }
                }
              }
            }
          }
        }
        lVar7 = FUN_14497e828(param_1);
        if (lVar7 == 0) {
LAB_141166a99:
          lVar6 = FUN_141450d48(lVar6);
          if (lVar6 != 0) {
            lVar7 = 0;
LAB_141166ab0:
            lVar10 = *(longlong *)(lVar6 + 0x10);
            if (lVar10 == 0) {
              uVar9 = FUN_14050b070();
              lVar10 = FUN_14477b664(uVar9);
              *(longlong *)(lVar6 + 0x10) = lVar10;
            }
            plVar1 = (longlong *)(lVar6 + 8);
            lVar8 = *(longlong *)(lVar6 + 0x18);
            if (lVar8 == 0) {
              if ((lVar10 != 0) && (*plVar1 != 0)) {
                plVar13 = *(longlong **)(lVar10 + 0xb8);
                if ((plVar13 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar4 == '\0')) {
                  *(undefined8 *)(lVar6 + 0x18) = 0;
                }
                else {
                  uVar9 = (**(code **)(*plVar13 + 0x110))(plVar13);
                  lVar8 = FUN_144aff482(uVar9,plVar1);
                  *(longlong *)(lVar6 + 0x18) = lVar8;
                  if (lVar8 != 0) {
                    lVar10 = *(longlong *)(lVar6 + 0x10);
                    goto LAB_141166ade;
                  }
                }
              }
              local_48 = 0;
            }
            else {
LAB_141166ade:
              if (lVar10 == 0) {
                uVar9 = FUN_14050b070();
                lVar10 = FUN_14477b664(uVar9);
                *(longlong *)(lVar6 + 0x10) = lVar10;
                lVar8 = *(longlong *)(lVar6 + 0x18);
                if (((lVar8 == 0) && (lVar8 = 0, lVar10 != 0)) && (*plVar1 != 0)) {
                  plVar13 = *(longlong **)(lVar10 + 0xb8);
                  if ((plVar13 == (longlong *)0x0) ||
                     (cVar4 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar4 == '\0')) {
                    lVar8 = 0;
                  }
                  else {
                    uVar9 = (**(code **)(*plVar13 + 0x110))(plVar13);
                    lVar8 = FUN_144aff482(uVar9,plVar1);
                  }
                  *(longlong *)(lVar6 + 0x18) = lVar8;
                }
              }
              puVar12 = &DAT_14c9485f0;
              if (*(undefined4 **)(lVar8 + 8) != (undefined4 *)0x0) {
                puVar12 = *(undefined4 **)(lVar8 + 8);
              }
              if (DAT_14c947fe0 == 0) {
                lVar6 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar6);
                DAT_14c947fe0 = lVar6;
              }
              FUN_140045924(DAT_14c947fe0,&local_48,puVar12,1);
              if ((local_48 != 0) && (FUN_14050aea0(&local_48), lVar7 != 0)) {
                lVar6 = *(longlong *)(lVar7 + 0x48);
                if (lVar6 != 0) {
                  lVar10 = FUN_140b6d0be();
                  if ((((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                         (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
                      (iVar5 = FUN_14133cd66(lVar6), 1 < iVar5)) &&
                     (cVar4 = FUN_14127c006(lVar6), cVar4 == '\0')) goto LAB_141166dd7;
                }
                local_58 = 0;
                FUN_145ae5ff2(lVar7,param_1,&local_48,0);
              }
            }
LAB_141166dd7:
            if (param_3 == '\0') {
              FUN_140f6472c(param_1);
            }
          }
        }
        else {
          lVar10 = FUN_1403ca142();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) goto LAB_141166a99;
          lVar6 = FUN_141450d48(lVar6);
          if (lVar6 != 0) goto LAB_141166ab0;
          local_48 = 0;
          local_58 = 0;
          FUN_145ae5ff2(lVar7,param_1,&local_48,0);
        }
        uVar9 = 1;
        goto LAB_141166c11;
      }
    }
  }
LAB_141166c0f:
  uVar9 = 0;
LAB_141166c11:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 141166e00 FUN_141166e00 body=271 status=ok
// SIG undefined FUN_141166e00(void)

void FUN_141166e00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b217ce0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    FUN_14472eb64(param_1 + 0x15,0);
  }
  param_1[0x1b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xd4)) {
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
    FUN_1446efbd8(param_1 + 0x17,0);
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dba90(param_1 + 0xe);
  FUN_141166f0f(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1);
  return;
}



// FUNCTION 141166f0f FUN_141166f0f body=43 status=ok
// SIG undefined FUN_141166f0f(void)

void FUN_141166f0f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 141166f3a FUN_141166f3a body=1232 status=ok
// SIG undefined FUN_141166f3a(void)

void FUN_141166f3a(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  void *_Src;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  code *local_120;
  undefined1 *local_118;
  undefined2 *local_110;
  code *local_108;
  code *local_100;
  undefined2 local_f2;
  int local_f0;
  int local_ec;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar8 = FUN_14116740c();
  if (DAT_14c951858 == 0) {
    local_110 = &local_88;
    local_88 = 0x2820;
    uStack_86 = 0x449e;
    uStack_84 = 1;
    uStack_82 = 0;
    local_100 = FUN_14081d0ea;
    local_108 = FUN_14081d0ea;
    local_118 = &LAB_1468c5283;
    local_120 = FUN_142809da0;
    local_128 = L"Engine";
    local_130 = 0x400000000;
    local_138 = 0x10000000;
    local_140 = 8;
    local_148 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar10 = *(longlong *)(param_1 + -0xd8);
  if (lVar10 == 0) {
    lVar12 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
         (lVar12 = lVar10,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
          ) != lVar8 + 0x30)) {
        lVar12 = 0;
      }
    } while ((lVar12 == 0) && (lVar10 = *(longlong *)(lVar10 + 0x20), lVar10 != 0));
  }
  lVar8 = FUN_14009d2a0();
  local_e8 = FUN_14038fb82();
  local_b8 = 0;
  local_c8 = 0;
  pvStack_c0 = (void *)0x0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_b0 = 0;
  local_e0 = param_4;
  if ((longlong)*(int *)(param_3 + 0x10) == -1) {
    FUN_14179cae6();
    lVar10 = local_b0;
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x70);
    lVar9 = (longlong)*(int *)(param_3 + 0x10) * 0x30;
    puVar11 = (undefined8 *)(lVar10 + lVar9);
    local_d8 = *(undefined8 *)(lVar10 + lVar9);
    puVar1 = (undefined8 *)(lVar10 + 8 + lVar9);
    uStack_d0 = *puVar1;
    local_c8 = puVar1[1];
    if (&local_d8 != puVar11) {
      uVar4 = *(uint *)(puVar11 + 4);
      _Src = (void *)puVar11[3];
      local_b8 = (ulonglong)uVar4;
      if ((longlong)(int)uVar4 == 0) {
        local_b8 = (ulonglong)uVar4;
      }
      else {
        FUN_1446dd670(&pvStack_c0,uVar4,0);
        memcpy(pvStack_c0,_Src,(longlong)(int)uVar4 * 2);
      }
    }
    lVar10 = puVar11[5];
    if (DAT_14c950c29 == 1) {
      if (puVar11[5] == 0) {
        lVar10 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar10 = puVar11[5];
      }
    }
  }
  local_b0 = lVar10;
  piVar5 = *(int **)(param_3 + 8);
  if (piVar5 == (int *)0x0) {
    local_ec = 0;
    iVar14 = 0;
    local_f0 = 0;
    iVar13 = 0;
  }
  else {
    iVar13 = *piVar5;
    local_f0 = piVar5[1];
    iVar14 = piVar5[2];
    local_ec = piVar5[3];
  }
  bVar7 = local_ec != 0;
  bVar6 = local_f0 != 0;
  uVar2 = *(undefined2 *)(lVar8 + 100);
  lVar10 = FUN_140cc2254(&local_d8);
  if (lVar10 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar10);
  }
  local_f2 = *(undefined2 *)(lVar8 + 0xea);
  if ((~DAT_14c950c29 & 1) == 0 && lVar10 != 0) {
    FUN_1456cec3c(lVar10);
  }
  if ((~DAT_14c950c29 & 1) == 0 && lVar10 != 0) {
    FUN_1456cec3c(lVar10);
  }
  uVar3 = *(undefined2 *)(local_e8 + 0xe6);
  uStack_86 = (undefined2)*(undefined4 *)(lVar12 + 0x128);
  uStack_84 = (undefined2)((uint)*(undefined4 *)(lVar12 + 0x128) >> 0x10);
  uStack_82 = (undefined2)*(undefined4 *)(lVar12 + 300);
  uStack_80 = (undefined2)((uint)*(undefined4 *)(lVar12 + 300) >> 0x10);
  uStack_7e = (undefined2)*(undefined4 *)(lVar12 + 0x130);
  uStack_7c = (undefined2)((uint)*(undefined4 *)(lVar12 + 0x130) >> 0x10);
  uStack_7a = (undefined2)*(undefined4 *)(lVar12 + 0x134);
  uStack_78 = (undefined2)((uint)*(undefined4 *)(lVar12 + 0x134) >> 0x10);
  if ((lVar10 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar10);
  }
  local_98 = CONCAT22(uStack_84,uStack_86);
  uStack_94 = CONCAT22(uStack_80,uStack_82);
  uStack_90 = CONCAT22(uStack_7c,uStack_7e);
  uStack_8c = CONCAT22(uStack_78,uStack_7a);
  puVar11 = (undefined8 *)FUN_14001cc68(0x60,8);
  *(uint *)(puVar11 + 1) = (uint)CONCAT12(((iVar14 != 0 || bVar7) || bVar6) || iVar13 != 0,uVar2);
  *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  *(int *)((longlong)puVar11 + 0xc) = iVar13;
  *(int *)(puVar11 + 2) = local_f0;
  *(int *)((longlong)puVar11 + 0x14) = iVar14;
  *(int *)(puVar11 + 3) = local_ec;
  *(undefined2 *)(puVar11 + 4) = local_f2;
  *(undefined1 *)(puVar11 + 7) = 1;
  puVar11[5] = lVar10;
  if ((lVar10 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar10);
  }
  lVar8 = local_e0;
  puVar11[6] = 0;
  *(undefined2 *)(puVar11 + 8) = uVar3;
  *(undefined1 *)((longlong)puVar11 + 0x54) = 1;
  *(undefined4 *)((longlong)puVar11 + 0x44) = local_98;
  *(undefined4 *)(puVar11 + 9) = uStack_94;
  *(undefined4 *)((longlong)puVar11 + 0x4c) = uStack_90;
  *(undefined4 *)(puVar11 + 10) = uStack_8c;
  *(undefined1 *)(puVar11 + 0xb) = 0;
  *puVar11 = &PTR_FUN_14a4c7960;
  iVar13 = *(int *)(local_e0 + 0x50);
  *(uint *)(local_e0 + 0x50) = iVar13 + 1U;
  if (*(uint *)(local_e0 + 0x54) < iVar13 + 1U) {
    FUN_140561fb4(local_e0,iVar13);
  }
  lVar10 = *(longlong *)(lVar8 + 0x48);
  if (lVar10 == 0) {
    lVar10 = lVar8;
  }
  puVar1 = (undefined8 *)(lVar10 + (longlong)iVar13 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
  *puVar1 = puVar11;
  puVar1[7] = local_58;
  *(undefined4 *)(puVar1 + 5) = local_68;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_64;
  *(undefined4 *)(puVar1 + 6) = uStack_60;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uStack_5c;
  *(uint *)(puVar1 + 3) = CONCAT22(uStack_76,uStack_78);
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_74;
  *(undefined4 *)(puVar1 + 4) = uStack_70;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_6c;
  *(uint *)(puVar1 + 1) = CONCAT22(uStack_86,local_88);
  *(uint *)((longlong)puVar1 + 0xc) = CONCAT22(uStack_82,uStack_84);
  *(uint *)(puVar1 + 2) = CONCAT22(uStack_7e,uStack_80);
  *(uint *)((longlong)puVar1 + 0x14) = CONCAT22(uStack_7a,uStack_7c);
  if (pvStack_c0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14116740c FUN_14116740c body=228 status=ok
// SIG undefined FUN_14116740c(void)

longlong FUN_14116740c(void)

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
  if (DAT_14cab66a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a00b8;
    local_38 = &LAB_1476c07bb;
    local_40 = FUN_1417a8def;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x138;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieScenePrimitiveMaterialTrack",&DAT_14cab66a0,
                  &DAT_1476c07ba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab66a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411674f6 FUN_1411674f6 body=228 status=ok
// SIG undefined FUN_1411674f6(void)

longlong FUN_1411674f6(void)

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
  if (DAT_14cb4c130 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145995a3e;
    local_38 = &LAB_1484b1b94;
    local_40 = &LAB_145c67f0f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x9e0;
    FUN_14081cfa3(L"/Script/GeometryFramework",L"DynamicMeshComponent",&DAT_14cb4c130,FUN_146491a86)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c130;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411675e0 FUN_1411675e0 body=228 status=ok
// SIG undefined FUN_1411675e0(void)

longlong FUN_1411675e0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5a120 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464c802e;
    local_38 = &LAB_1486629a7;
    local_40 = FUN_14574fc26;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxAttachableBodyData",&DAT_14cb5a120,&DAT_1486629a6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5a120;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411676c5 FUN_1411676c5 body=226 status=ok
// SIG undefined FUN_1411676c5(void)

void FUN_1411676c5(longlong *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  FUN_140312256(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b50b790;
  puVar1[0x72] = 0;
  FUN_1446f470e(&local_20,&DAT_149e3c97a,1);
  uVar3 = FUN_1411677a8();
  local_30 = 0;
  local_38 = 1;
  lVar4 = FUN_14048696c(puVar1,local_20,uVar3,uVar3);
  if (lVar4 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar4);
  }
  bVar2 = DAT_14c950c29;
  puVar1[0x72] = lVar4;
  if ((lVar4 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(lVar4);
    lVar4 = puVar1[0x72];
  }
  puVar1[0x39] = lVar4;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411677a8 FUN_1411677a8 body=228 status=ok
// SIG undefined FUN_1411677a8(void)

longlong FUN_1411677a8(void)

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
  if (DAT_14cb98cf8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b5764;
    local_38 = &LAB_148aca15e;
    local_40 = FUN_1402b9b74;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6a0;
    FUN_14081cfa3(L"/Script/GbxWorldPainter",L"GbxWorldPainterBoxComponent",&DAT_14cb98cf8,
                  FUN_14658acc6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb98cf8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141167894 FUN_141167894 body=221 status=ok
// SIG undefined FUN_141167894(void)

longlong FUN_141167894(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb08970 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d35c5f;
    local_40 = &LAB_146402db4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/Engine",L"SoundNode",&DAT_14cb08970,&DAT_147d35c5e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb08970;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141167972 FUN_141167972 body=221 status=ok
// SIG undefined FUN_141167972(void)

longlong FUN_141167972(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb55b08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148629cea;
    local_40 = &LAB_14598b29f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0xab0;
    FUN_14081cfa3(L"/Script/GbxGame",L"CameraModeState",&DAT_14cb55b08,FUN_1464b4852);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55b08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141167a50 FUN_141167a50 body=75 status=ok
// SIG undefined FUN_141167a50(void)

void FUN_141167a50(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141167aa0 FUN_141167aa0 body=221 status=ok
// SIG undefined FUN_141167aa0(void)

longlong FUN_141167aa0(void)

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
  if (DAT_14cbf7630 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14906f69c;
    local_40 = FUN_146678563;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x128;
    FUN_14081cfa3(L"/Script/HairStrandsCore",L"GroomAsset",&DAT_14cbf7630,FUN_14667853c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf7630;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141167b8c FUN_141167b8c body=132 status=ok
// SIG undefined FUN_141167b8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141167b8c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141167c10 FUN_141167c10 body=149 status=ok
// SIG undefined FUN_141167c10(void)

void FUN_141167c10(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1405f1eac();
  local_28 = (undefined4)DAT_14c8463f0;
  uStack_24 = DAT_14c8463f0._4_4_;
  uStack_20 = (undefined4)DAT_14c8463f8;
  uStack_1c = DAT_14c8463f8._4_4_;
  local_38 = (undefined4)DAT_14c8463f0;
  uStack_34 = DAT_14c8463f0._4_4_;
  uStack_30 = (undefined4)DAT_14c8463f8;
  uStack_2c = DAT_14c8463f8._4_4_;
  local_18 = 0;
  FUN_140aab646(param_1,0xffffffff);
  FUN_141167ca6(&DAT_14cb10a78,&local_38,param_1,&LAB_1401e2256);
  FUN_141167ca6(&DAT_14cb10a90,&local_38,param_1,&LAB_1401e225c);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141167ca6 FUN_141167ca6 body=774 status=ok
// SIG undefined FUN_141167ca6(void)

undefined8 * FUN_141167ca6(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar2 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_14a1ca6c0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_58[2] = lVar6;
  *local_58 = (longlong)&PTR_FUN_14aea0c90;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar4;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar2 + 0x1c) = iVar8;
  plVar2[4] = param_4;
  *param_2 = 0;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_58 + 0x30))(), cVar3 == '\0')) {
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_141167e4c;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_141167e36;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar8 = (int)param_1[1];
      iVar4 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar4;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
        if (0 < iVar8) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar4 = (int)param_1[1];
          } while (iVar7 < iVar4);
        }
        iVar7 = 2;
        if (2 < iVar4 * 2) {
          iVar7 = iVar4 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar8) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    uVar5 = 0;
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,&local_48);
      uVar5 = local_48;
    }
    *param_2 = uVar5;
    iVar8 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
      FUN_1447a71f6(param_1,iVar8);
    }
    lVar9 = *param_1;
    lVar6 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar9 + lVar6) = 0;
    *(undefined4 *)(lVar9 + 8 + lVar6) = 0;
    *(longlong **)(lVar9 + lVar6) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar9 + 8 + lVar6) = local_50;
LAB_141167e36:
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141167e4c:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141167ffc FUN_141167ffc body=76 status=ok
// SIG undefined FUN_141167ffc(void)

void FUN_141167ffc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3ae2c0;
  plVar3 = (longlong *)param_1[0x17];
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
  FUN_140753ab6(param_1);
  return;
}



// FUNCTION 141168048 FUN_141168048 body=2635 status=ok
// SIG undefined FUN_141168048(void)

void FUN_141168048(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_1 + 9) = param_2;
  lVar10 = param_1[3];
  if (*(char *)(lVar10 + 0x30) == '\x01') {
    plVar11 = (longlong *)param_1[1];
    bVar17 = true;
    if (plVar11 == (longlong *)0x0) {
LAB_1411688f3:
      lVar10 = 0;
      plVar11 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar11[1];
      do {
        if (iVar6 == 0) goto LAB_1411688f3;
        LOCK();
        iVar4 = (int)plVar11[1];
        bVar16 = iVar6 == iVar4;
        if (bVar16) {
          *(int *)(plVar11 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar16);
      lVar10 = *param_1;
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar11 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      bVar17 = false;
    }
    plVar7 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14b41ddd0;
    plVar9 = plVar7 + 2;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[4] = lVar10;
    plVar7[5] = (longlong)plVar11;
    if (!bVar17) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
    }
    plVar7[8] = 0;
    plVar7[9] = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    local_80 = plVar9;
    local_78 = plVar7;
    FUN_141168a94(&local_80,plVar9);
    iVar6 = (int)param_1[8];
    lVar10 = (longlong)iVar6;
    *(uint *)(param_1 + 8) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0x44) < iVar6 + 1U) {
      FUN_14581d9dc(param_1 + 5,iVar6);
    }
    plVar12 = local_78;
    plVar15 = param_1 + 5;
    if ((longlong *)param_1[7] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[7];
    }
    plVar15[lVar10 * 2] = (longlong)plVar9;
    plVar15[lVar10 * 2 + 1] = (longlong)plVar7;
    if (plVar7 == (longlong *)0x0) {
      local_68 = (longlong *)0x0;
      local_70 = 0x10;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      local_70 = plVar15[lVar10 * 2];
      local_68 = (longlong *)(plVar15 + lVar10 * 2)[1];
      if (local_68 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
      }
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_78 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (!bVar17) {
      LOCK();
      plVar9 = plVar11 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    lVar10 = (longlong)*(int *)(param_1[3] + 0x50);
    if (lVar10 != 0) {
      puVar13 = *(undefined8 **)(param_1[3] + 0x48);
      lVar10 = lVar10 << 4;
      do {
        (**(code **)(*(longlong *)*puVar13 + 0x20))((longlong *)*puVar13,&local_80);
        plVar9 = local_78;
        plVar11 = local_80;
        if (local_80 != (longlong *)0x0) {
          if (local_78 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_78 + 1) = (int)local_78[1] + 1;
            UNLOCK();
          }
          plVar7 = (longlong *)(local_70 + 0x20);
          iVar6 = *(int *)(local_70 + 0x28);
          *(uint *)(local_70 + 0x28) = iVar6 + 1U;
          if (*(uint *)(local_70 + 0x2c) < iVar6 + 1U) {
            FUN_141168bc8(plVar7,iVar6);
          }
          lVar14 = *plVar7;
          *(longlong **)(lVar14 + (longlong)iVar6 * 0x10) = plVar11;
          *(longlong **)(lVar14 + 8 + (longlong)iVar6 * 0x10) = plVar9;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            LOCK();
            plVar11 = plVar9 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          *(undefined1 *)(local_80 + 0xb) = 1;
          FUN_141168cd6(local_80,puVar13,&local_70,param_1[3] + 0x38);
        }
        plVar11 = local_78;
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_78 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        puVar13 = puVar13 + 2;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
    }
    plVar11 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_68 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    goto LAB_141168304;
  }
  iVar6 = *(int *)(lVar10 + 0x50);
  if ((longlong)iVar6 != 0) {
    lVar10 = *(longlong *)(lVar10 + 0x48);
    lVar14 = 0;
    do {
      cVar5 = (**(code **)(**(longlong **)(lVar10 + lVar14) + 0x18))();
      if (cVar5 != '\0') {
        plVar11 = (longlong *)param_1[1];
        if (plVar11 == (longlong *)0x0) goto LAB_1411688e3;
        iVar6 = (int)plVar11[1];
        goto LAB_141168569;
      }
      lVar14 = lVar14 + 0x10;
    } while ((longlong)iVar6 * 0x10 != lVar14);
  }
  goto LAB_1411680b7;
LAB_1411688e3:
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  goto LAB_141168596;
  while( true ) {
    LOCK();
    iVar4 = (int)plVar11[1];
    bVar17 = iVar6 == iVar4;
    if (bVar17) {
      *(int *)(plVar11 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
    if (bVar17) break;
LAB_141168569:
    if (iVar6 == 0) goto LAB_1411688e3;
  }
  local_98 = *param_1;
  LOCK();
  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  UNLOCK();
  LOCK();
  plVar9 = plVar11 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  plStack_90 = plVar11;
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
LAB_141168596:
  plVar9 = (longlong *)FUN_14581d980(&local_98);
  plVar11 = plVar9 + 2;
  local_80 = plVar11;
  local_78 = plVar9;
  FUN_141168a94(&local_80,plVar11);
  iVar6 = (int)param_1[8];
  lVar10 = (longlong)iVar6;
  *(uint *)(param_1 + 8) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0x44) < iVar6 + 1U) {
    FUN_14581d9dc(param_1 + 5,iVar6);
  }
  plVar7 = local_78;
  plVar12 = param_1 + 5;
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[7];
  }
  plVar12[lVar10 * 2] = (longlong)plVar11;
  plVar12[lVar10 * 2 + 1] = (longlong)plVar9;
  if (plVar9 == (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    local_70 = 0x10;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    local_70 = plVar12[lVar10 * 2];
    local_68 = (longlong *)(plVar12 + lVar10 * 2)[1];
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_78 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar11 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_90 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  lVar10 = (longlong)*(int *)(param_1[3] + 0x50);
  if (lVar10 != 0) {
    puVar13 = *(undefined8 **)(param_1[3] + 0x48);
    lVar10 = lVar10 << 4;
    do {
      (**(code **)(*(longlong *)*puVar13 + 0x20))((longlong *)*puVar13,&local_80);
      plVar9 = local_78;
      plVar11 = local_80;
      if (local_80 != (longlong *)0x0) {
        if (local_78 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_78 + 1) = (int)local_78[1] + 1;
          UNLOCK();
        }
        plVar7 = (longlong *)(local_70 + 0x20);
        iVar6 = *(int *)(local_70 + 0x28);
        *(uint *)(local_70 + 0x28) = iVar6 + 1U;
        if (*(uint *)(local_70 + 0x2c) < iVar6 + 1U) {
          FUN_141168bc8(plVar7,iVar6);
        }
        lVar14 = *plVar7;
        *(longlong **)(lVar14 + (longlong)iVar6 * 0x10) = plVar11;
        *(longlong **)(lVar14 + 8 + (longlong)iVar6 * 0x10) = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar11 = plVar9 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        *(undefined1 *)(local_80 + 0xb) = 1;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        FUN_141168cd6(local_80,puVar13,&local_70,&local_98);
        FUN_1403d9f56(0,0);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
      plVar11 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_78 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      puVar13 = puVar13 + 2;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
  }
  plVar11 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_68 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
LAB_1411680b7:
  lVar10 = (longlong)*(int *)(param_1[3] + 0x40);
  if (lVar10 != 0) {
    plVar11 = *(longlong **)(param_1[3] + 0x38);
    local_a0 = plVar11 + lVar10 * 2;
    local_b0 = param_1 + 5;
    local_a8 = param_1;
    do {
      plVar9 = (longlong *)param_1[1];
      bVar17 = true;
      if (plVar9 == (longlong *)0x0) {
LAB_141168778:
        lVar10 = 0;
        plVar9 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar9[1];
        do {
          if (iVar6 == 0) goto LAB_141168778;
          LOCK();
          iVar4 = (int)plVar9[1];
          bVar16 = iVar6 == iVar4;
          if (bVar16) {
            *(int *)(plVar9 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar16);
        lVar10 = *param_1;
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar9 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        bVar17 = false;
      }
      plVar7 = (longlong *)FUN_14001cc68(0x50,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14b41ddd0;
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[4] = lVar10;
      plVar7[5] = (longlong)plVar9;
      if (!bVar17) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
      }
      plVar12 = plVar7 + 2;
      plVar7[8] = 0;
      plVar7[9] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0;
      local_80 = plVar12;
      local_78 = plVar7;
      FUN_141168a94(&local_80,plVar12);
      plVar15 = local_a8;
      iVar6 = (int)local_a8[8];
      lVar10 = (longlong)iVar6;
      *(uint *)(local_a8 + 8) = iVar6 + 1U;
      if (*(uint *)((longlong)local_a8 + 0x44) < iVar6 + 1U) {
        FUN_14581d9dc(local_b0,iVar6);
      }
      plVar3 = local_78;
      plVar8 = (longlong *)plVar15[7];
      if ((longlong *)plVar15[7] == (longlong *)0x0) {
        plVar8 = local_b0;
      }
      plVar8[lVar10 * 2] = (longlong)plVar12;
      plVar8[lVar10 * 2 + 1] = (longlong)plVar7;
      if (plVar7 == (longlong *)0x0) {
        local_68 = (longlong *)0x0;
        local_70 = 0x10;
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        local_70 = plVar8[lVar10 * 2];
        local_68 = (longlong *)(plVar8 + lVar10 * 2)[1];
        if (local_68 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
          UNLOCK();
        }
      }
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_78 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      param_1 = local_a8;
      if (!bVar17) {
        LOCK();
        plVar7 = plVar9 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      (**(code **)(*(longlong *)*plVar11 + 0x10))((longlong *)*plVar11,&local_80);
      plVar9 = local_78;
      if (local_78 == (longlong *)0x0) {
        *(longlong **)(local_70 + 0x30) = local_80;
        plVar7 = *(longlong **)(local_70 + 0x38);
        if (plVar7 != (longlong *)0x0) {
          *(undefined8 *)(local_70 + 0x38) = 0;
LAB_14116881a:
          LOCK();
          plVar9 = plVar7 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar6 = *piVar1;
            UNLOCK();
joined_r0x000141168858:
            if (iVar6 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        UNLOCK();
        *(longlong **)(local_70 + 0x30) = local_80;
        plVar7 = *(longlong **)(local_70 + 0x38);
        if (local_78 == plVar7) {
          LOCK();
          plVar7 = local_78 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar6 = *piVar1;
            UNLOCK();
            plVar7 = plVar9;
            goto joined_r0x000141168858;
          }
        }
        else {
          *(longlong **)(local_70 + 0x38) = local_78;
          if (plVar7 != (longlong *)0x0) goto LAB_14116881a;
        }
      }
      plVar9 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_78 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      uVar2 = *(undefined8 *)(local_70 + 0x30);
      local_80 = (longlong *)*plVar11;
      plVar9 = (longlong *)plVar11[1];
      local_78 = plVar9;
      if (plVar9 == (longlong *)0x0) {
        FUN_141168b34(uVar2,&local_70,&local_80);
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        FUN_141168b34(uVar2,&local_70,&local_80);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar9 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      (**(code **)(**(longlong **)(local_70 + 0x30) + 0x18))();
      plVar9 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_68 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar11 = plVar11 + 2;
    } while (plVar11 != local_a0);
  }
LAB_141168304:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141168a94 FUN_141168a94 body=159 status=ok
// SIG undefined FUN_141168a94(void)

void FUN_141168a94(longlong param_1,longlong *param_2)

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
    if ((longlong *)param_2[1] == plVar2) goto LAB_141168ad1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_141168ad1;
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
LAB_141168ad1:
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
                    /* WARNING: Could not recover jumptable at 0x000141168b2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 141168b34 FUN_141168b34 body=147 status=ok
// SIG undefined FUN_141168b34(void)

void FUN_141168b34(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 0x48) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar5 = *(longlong **)(param_1 + 0x50);
  if (plVar5 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x50);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x50) = plVar2;
  }
  uVar3 = *param_3;
  lVar4 = param_3[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar2 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar4;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141168bb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141168bc8 FUN_141168bc8 body=269 status=ok
// SIG undefined FUN_141168bc8(void)

void FUN_141168bc8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141168cd6 FUN_141168cd6 body=1570 status=ok
// SIG undefined FUN_141168cd6(void)

void FUN_141168cd6(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    param_1[5] = lVar2;
    plVar9 = (longlong *)param_1[6];
    if (plVar9 == (longlong *)0x0) goto LAB_141168d39;
    param_1[6] = 0;
LAB_14116910e:
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_141168d39;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar7 = *piVar1;
    UNLOCK();
    plVar3 = plVar9;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[5] = lVar2;
    plVar9 = (longlong *)param_1[6];
    if (plVar3 != plVar9) {
      param_1[6] = (longlong)plVar3;
      if (plVar9 == (longlong *)0x0) goto LAB_141168d39;
      goto LAB_14116910e;
    }
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_141168d39;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar7 = *piVar1;
    UNLOCK();
  }
  if (iVar7 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_141168d39:
  param_1[3] = *param_3;
  plVar3 = (longlong *)param_3[1];
  plVar9 = (longlong *)param_1[4];
  if (plVar9 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar9 = (longlong *)param_1[4];
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    param_1[4] = (longlong)plVar3;
  }
  if (0 < (int)param_4[1]) {
    lVar2 = *param_3;
    plVar3 = *(longlong **)(lVar2 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_1411690bc;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar13 = iVar7 == iVar6;
        if (bVar13) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar13);
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if ((lVar2 != 0) && ((longlong)(int)param_4[1] != 0)) {
        puVar10 = (undefined8 *)*param_4;
        local_a8 = puVar10 + (longlong)(int)param_4[1] * 2;
        local_a0 = param_1 + 9;
        local_98 = lVar2;
        do {
          lVar2 = local_98;
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          plVar8 = (longlong *)FUN_14001cc68(0x50,0x10);
          plVar8[1] = (longlong)&DAT_100000001;
          *plVar8 = (longlong)&PTR_FUN_14b41ddd0;
          plVar9 = plVar8 + 2;
          plVar8[2] = 0;
          plVar8[3] = 0;
          plVar8[4] = lVar2;
          plVar8[5] = (longlong)plVar3;
          LOCK();
          *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
          UNLOCK();
          plVar8[8] = 0;
          plVar8[9] = 0;
          plVar8[6] = 0;
          plVar8[7] = 0;
          local_70 = plVar9;
          local_68 = plVar8;
          FUN_141168a94(&local_70,plVar9);
          plVar12 = local_a0;
          iVar7 = (int)param_1[10];
          *(uint *)(param_1 + 10) = iVar7 + 1U;
          if (*(uint *)((longlong)param_1 + 0x54) < iVar7 + 1U) {
            FUN_1411694a8(local_a0,iVar7);
          }
          plVar5 = local_68;
          lVar2 = *plVar12;
          lVar11 = (longlong)iVar7 * 0x10;
          *(longlong **)(lVar2 + lVar11) = plVar9;
          *(longlong **)(lVar2 + 8 + lVar11) = plVar8;
          if (plVar8 == (longlong *)0x0) {
            local_88 = (longlong *)0x0;
            local_90 = 0x10;
          }
          else {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            local_90 = *(longlong *)(lVar2 + lVar11);
            local_88 = (longlong *)((longlong *)(lVar2 + lVar11))[1];
            if (local_88 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_88 + 1) = (int)local_88[1] + 1;
              UNLOCK();
            }
          }
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_68 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          LOCK();
          plVar9 = plVar3 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
          (**(code **)(*(longlong *)*puVar10 + 0x10))((longlong *)*puVar10,&local_70);
          plVar9 = local_68;
          if (local_68 == (longlong *)0x0) {
            *(longlong **)(local_90 + 0x30) = local_70;
            plVar12 = *(longlong **)(local_90 + 0x38);
            if (plVar12 != (longlong *)0x0) {
              *(undefined8 *)(local_90 + 0x38) = 0;
LAB_1411691ef:
              LOCK();
              plVar9 = plVar12 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar7 = *piVar1;
                UNLOCK();
joined_r0x00014116922e:
                if (iVar7 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(local_68 + 1) = (int)local_68[1] + 1;
            UNLOCK();
            *(longlong **)(local_90 + 0x30) = local_70;
            plVar12 = *(longlong **)(local_90 + 0x38);
            if (local_68 == plVar12) {
              LOCK();
              plVar12 = local_68 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                (**(code **)*local_68)(local_68);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar7 = *piVar1;
                UNLOCK();
                plVar12 = plVar9;
                goto joined_r0x00014116922e;
              }
            }
            else {
              *(longlong **)(local_90 + 0x38) = local_68;
              if (plVar12 != (longlong *)0x0) goto LAB_1411691ef;
            }
          }
          plVar9 = local_68;
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_68 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          uVar4 = *(undefined8 *)(local_90 + 0x30);
          local_70 = (longlong *)*puVar10;
          plVar9 = (longlong *)puVar10[1];
          local_68 = plVar9;
          if (plVar9 == (longlong *)0x0) {
            FUN_141168b34(uVar4,&local_90,&local_70);
          }
          else {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            FUN_141168b34(uVar4,&local_90,&local_70);
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar12 = plVar9 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
          }
          lVar11 = local_90;
          lVar2 = *(longlong *)(local_90 + 0x30);
          local_80 = &LAB_14580ffb8;
          local_78 = 0;
          FUN_1411692fc(&local_70,param_1,&local_80);
          FUN_14490d954(lVar2 + 0x18,&local_80,&local_70);
          if ((int)local_68 == 0) {
LAB_141168fb9:
            if (local_70 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_70 != (longlong *)0x0) {
            (**(code **)*local_70)(local_70,0);
            FUN_1446efa72(&local_70,0,0,0x10);
            local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
            goto LAB_141168fb9;
          }
          lVar2 = *(longlong *)(lVar11 + 0x30);
          local_80 = &LAB_14580ffbe;
          local_78 = 0;
          FUN_1411692fc(&local_70,param_1,&local_80);
          FUN_14490d954(lVar2 + 0x30,&local_80,&local_70);
          if ((int)local_68 == 0) {
LAB_141169006:
            if (local_70 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_70 != (longlong *)0x0) {
            (**(code **)*local_70)(local_70,0);
            FUN_1446efa72(&local_70,0,0,0x10);
            local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
            goto LAB_141169006;
          }
          (**(code **)(**(longlong **)(lVar11 + 0x30) + 0x18))();
          plVar9 = local_88;
          if (local_88 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_88 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)*local_88)(local_88);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          puVar10 = puVar10 + 2;
        } while (puVar10 != local_a8);
      }
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
LAB_1411690bc:
  (**(code **)(*param_1 + 0x20))(param_1);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411692fc FUN_1411692fc body=428 status=ok
// SIG undefined FUN_1411692fc(void)

longlong * FUN_1411692fc(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1411693dc:
    *puVar5 = &PTR_LAB_14a3a3510;
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
    *puVar5 = &PTR_FUN_14b41ddf0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1411693dc;
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
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a3a3510;
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
    *puVar5 = &PTR_FUN_14b41ddf0;
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



// FUNCTION 1411694a8 FUN_1411694a8 body=269 status=ok
// SIG undefined FUN_1411694a8(void)

void FUN_1411694a8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1411695b6 FUN_1411695b6 body=250 status=ok
// SIG undefined FUN_1411695b6(void)

longlong * FUN_1411695b6(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1406ed334();
  *param_1 = (longlong)&PTR_FUN_14a4952a0;
  param_1[0x1f] = (longlong)&PTR_FUN_14a495610;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x23) = 100;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = (longlong)&DAT_ff7fffffff7fffff;
  *(undefined4 *)(param_1 + 0x27) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  lVar1 = 0x148;
  do {
    FUN_1406ed1bc((longlong)param_1 + lVar1);
    lVar1 = lVar1 + 0x118;
  } while (lVar1 != 0x490);
  lVar1 = 0x490;
  do {
    FUN_1406ed1bc((longlong)param_1 + lVar1);
    lVar1 = lVar1 + 0x118;
  } while (lVar1 != 0x7d8);
  param_1[0xfb] = 0;
  *(undefined1 *)((longlong)param_1 + 0x13c) = 3;
  (**(code **)(*param_1 + 0x2c0))(param_1,1);
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}



// FUNCTION 1411696b0 FUN_1411696b0 body=6 status=ok
// SIG undefined FUN_1411696b0(void)

bool FUN_1411696b0(byte *param_1,byte param_2)

{
  return (*param_1 & param_2) != 0;
}



// FUNCTION 1411696b6 FUN_1411696b6 body=98 status=ok
// SIG undefined FUN_1411696b6(void)

undefined8 FUN_1411696b6(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140234344(local_38);
  FUN_14116971a(param_1,param_2,local_38,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14116971a FUN_14116971a body=220 status=ok
// SIG undefined FUN_14116971a(void)

undefined8 *
FUN_14116971a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar4 = (undefined8 *)FUN_14001cc68(0x98,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_149e191c0;
  local_48 = *param_3;
  local_40 = param_3[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_1411697f8(puVar4 + 2,param_2,param_4,&local_48);
  *param_1 = puVar4 + 2;
  param_1[1] = puVar4;
  plVar3 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411697f8 FUN_1411697f8 body=364 status=ok
// SIG undefined FUN_1411697f8(void)

undefined1 *
FUN_1411697f8(undefined1 *param_1,undefined8 *param_2,undefined1 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = 1;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 8) = *param_4;
  lVar3 = param_4[1];
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar4 = DAT_14c844840;
  *(longlong **)(param_1 + 0x18) = DAT_14c844840;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x30) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_140234ee4(param_1);
  plVar4 = (longlong *)param_4[1];
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



// FUNCTION 141169964 FUN_141169964 body=342 status=ok
// SIG undefined FUN_141169964(void)

byte FUN_141169964(longlong param_1)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0x14);
  lVar3 = FUN_141169abc(param_1 + -0x30);
  lVar4 = FUN_1400d7050(param_1);
  if (lVar4 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      bVar5 = *(longlong *)(lVar4 + 0x398) != 0;
      goto LAB_1411699dd;
    }
  }
  bVar5 = false;
LAB_1411699dd:
  if (iVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = lVar3 != 0 & bVar5;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141169abc FUN_141169abc body=619 status=ok
// SIG undefined FUN_141169abc(void)

undefined8 FUN_141169abc(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_1 + 0x4c);
  if (((((iVar2 == 0) || (uVar1 = *(uint *)(param_1 + 0x48), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 == 0 ||
       (*(int *)(lVar3 + 0x10) != iVar2)))) || ((*(uint *)(lVar3 + 8) & 0x10200000) != 0)) {
    lVar3 = FUN_1400d7050(param_1 + 0x30);
    if (lVar3 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_40 = &local_28;
        local_28 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1459f2e4c;
        local_48 = &LAB_148c39de3;
        local_50 = &LAB_1457a9eb2;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
         ((*(longlong *)(lVar3 + 0x3cc8) != 0 && (lVar3 = FUN_140123f3e(), lVar3 != 0)))) {
        uVar1 = *(uint *)(lVar3 + 0xc);
        *(uint *)(param_1 + 0x48) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
        if (iVar2 == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          iVar6 = DAT_14c964868 + 1;
          bVar7 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar7) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar6);
          }
          uVar5 = 0;
          LOCK();
          iVar2 = *(int *)(lVar3 + 0x10);
          bVar7 = iVar2 == 0;
          if (bVar7) {
            *(int *)(lVar3 + 0x10) = iVar6;
            iVar2 = 0;
          }
          UNLOCK();
          if (bVar7) {
            iVar2 = iVar6;
          }
          *(int *)(param_1 + 0x4c) = iVar2;
          if (iVar2 == 0) goto LAB_141169b6d;
        }
        else {
          *(int *)(param_1 + 0x4c) = iVar2;
        }
        goto LAB_141169b24;
      }
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
LAB_141169b24:
    uVar1 = *(uint *)(param_1 + 0x48);
    uVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_141169b6d;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == iVar2 && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar5 = *puVar4;
      goto LAB_141169b6d;
    }
  }
  uVar5 = 0;
LAB_141169b6d:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 141169d28 FUN_141169d28 body=1656 status=ok
// SIG undefined FUN_141169d28(void)

void FUN_141169d28(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  code *local_c8;
  code *local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14116a3a2();
  plVar8 = (longlong *)FUN_14070ca4c(param_1);
  if (plVar8 != (longlong *)0x0) {
    if (((((*(int *)(param_1 + 0x1734) == 0) ||
          (uVar5 = *(uint *)(param_1 + 0x1730), (int)uVar5 < 0)) || (DAT_14c9647dc <= (int)uVar5))
        || ((plVar12 = (longlong *)
                       ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
            plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)(param_1 + 0x1734))))) ||
       (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (lVar9 = *plVar12, lVar9 == 0)))) {
      local_a8 = 0;
      local_b0 = 0xffffffffffffffff;
      uStack_a0 = CONCAT44(DAT_14cb7e378._4_4_,(undefined4)DAT_14cb7e378);
      uStack_98 = CONCAT44(DAT_14cb7e380._4_4_,(undefined4)DAT_14cb7e380);
      uStack_90 = DAT_14cb7e388;
      local_70 = 0;
      plStack_68 = (longlong *)0x0;
      uStack_60 = 0xffffffff;
      uStack_88 = uStack_a0;
      local_80 = uStack_98;
      uStack_78 = uStack_90;
    }
    else {
      lVar11 = *(longlong *)(lVar9 + 0x1518);
      plVar12 = *(longlong **)(lVar9 + 0x1520);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      if (lVar11 == 0) {
        local_a8 = 0;
        local_b0 = 0xffffffffffffffff;
        uStack_a0 = CONCAT44(DAT_14cb7e378._4_4_,(undefined4)DAT_14cb7e378);
        uStack_98 = CONCAT44(DAT_14cb7e380._4_4_,(undefined4)DAT_14cb7e380);
        uStack_90 = DAT_14cb7e388;
        uStack_88 = CONCAT44(DAT_14cb7e378._4_4_,(undefined4)DAT_14cb7e378);
        local_80 = CONCAT44(DAT_14cb7e380._4_4_,(undefined4)DAT_14cb7e380);
        uStack_78 = DAT_14cb7e388;
        local_70 = 0;
        plStack_68 = (longlong *)0x0;
        uStack_60 = 0xffffffff;
      }
      else {
        local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(lVar11 + 0x260));
        local_b0 = *(undefined8 *)(lVar11 + 600);
        uStack_a0 = *(undefined8 *)(lVar11 + 0x268);
        uStack_98 = *(undefined8 *)(lVar11 + 0x270);
        uStack_90 = *(undefined8 *)(lVar11 + 0x278);
        uStack_88 = *(undefined8 *)(lVar11 + 0x280);
        local_80 = *(undefined8 *)(lVar11 + 0x288);
        uStack_78 = *(undefined8 *)(lVar11 + 0x290);
        local_70 = *(undefined8 *)(lVar11 + 0x298);
        plStack_68 = *(longlong **)(lVar11 + 0x2a0);
        if (plStack_68 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
          UNLOCK();
        }
        uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(lVar11 + 0x2a8));
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
    if ((((int)local_a8 == 3) ||
        ((((int)local_a8 - 1U < 2 && ((int)local_b0 != -1)) && (local_b0._4_4_ != -1)))) &&
       (cVar6 = FUN_144a872af(&uStack_a0), cVar6 != '\0')) {
      lVar9 = 0;
      bVar15 = true;
      do {
        bVar14 = bVar15;
        lVar11 = lVar9 * 0xb70 + param_1 + 0x30;
        lVar9 = lVar9 * 0xb70 + param_1 + 0x30;
        *(int *)(lVar9 + 0xb18) = (int)local_a8;
        *(undefined8 *)(lVar9 + 0xb10) = local_b0;
        *(undefined4 *)(lVar9 + 0xb20) = (undefined4)uStack_a0;
        *(undefined4 *)(lVar9 + 0xb24) = uStack_a0._4_4_;
        *(undefined4 *)(lVar9 + 0xb28) = (undefined4)uStack_98;
        *(undefined4 *)(lVar9 + 0xb2c) = uStack_98._4_4_;
        *(undefined4 *)(lVar9 + 0xb30) = (undefined4)uStack_90;
        *(undefined4 *)(lVar9 + 0xb34) = uStack_90._4_4_;
        *(undefined4 *)(lVar9 + 0xb38) = (undefined4)uStack_88;
        *(undefined4 *)(lVar9 + 0xb3c) = uStack_88._4_4_;
        *(undefined4 *)(lVar9 + 0xb40) = (undefined4)local_80;
        *(undefined4 *)(lVar9 + 0xb44) = local_80._4_4_;
        *(undefined4 *)(lVar9 + 0xb48) = (undefined4)uStack_78;
        *(undefined4 *)(lVar9 + 0xb4c) = uStack_78._4_4_;
        FUN_14488c2fc(lVar9 + 0xb50,&local_70);
        iVar7 = *(int *)(lVar9 + 0xb08);
        *(uint *)(lVar9 + 0xb08) = iVar7 + 1U;
        if (*(uint *)(lVar9 + 0xb0c) < iVar7 + 1U) {
          FUN_14018247c(lVar11,iVar7);
        }
        lVar9 = *(longlong *)(lVar11 + 0xb00);
        if (*(longlong *)(lVar11 + 0xb00) == 0) {
          lVar9 = lVar11;
        }
        lVar11 = (longlong)iVar7 * 0x58;
        *(int *)(lVar9 + 8 + lVar11) = (int)local_a8;
        *(undefined8 *)(lVar9 + lVar11) = local_b0;
        puVar3 = (undefined4 *)(lVar9 + 0x10 + lVar11);
        *puVar3 = (undefined4)uStack_a0;
        puVar3[1] = uStack_a0._4_4_;
        puVar3[2] = (undefined4)uStack_98;
        puVar3[3] = uStack_98._4_4_;
        puVar4 = (undefined8 *)(lVar9 + 0x20 + lVar11);
        *puVar4 = uStack_90;
        puVar4[1] = uStack_88;
        puVar4 = (undefined8 *)(lVar9 + 0x30 + lVar11);
        *puVar4 = local_80;
        puVar4[1] = uStack_78;
        *(undefined8 *)(lVar9 + 0x40 + lVar11) = local_70;
        *(longlong **)(lVar9 + 0x48 + lVar11) = plStack_68;
        if (plStack_68 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(lVar9 + lVar11 + 0x50) = (undefined4)uStack_60;
        lVar9 = 1;
        bVar15 = false;
      } while (bVar14);
    }
    if (DAT_14cb22468 == 0) {
      local_d0 = &local_58;
      local_58 = FUN_1449e2820;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_1427b09ee;
      local_d8 = &LAB_147f2c44f;
      local_e0 = FUN_146438a21;
      local_e8 = L"Engine";
      local_f0 = 0;
      local_f8 = 0x10004001;
      local_100 = 8;
      local_108 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
    }
    lVar9 = (**(code **)(*plVar8 + 0x288))(plVar8,DAT_14cb22468);
    if (lVar9 == 0) {
      lVar11 = 0;
    }
    else {
      if (DAT_14cb22468 == 0) {
        local_d0 = &local_58;
        local_58 = FUN_1449e2820;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_1427b09ee;
        local_d8 = &LAB_147f2c44f;
        local_e0 = FUN_146438a21;
        local_e8 = L"Engine";
        local_f0 = 0;
        local_f8 = 0x10004001;
        local_100 = 8;
        local_108 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
      }
      lVar10 = FUN_144718840(lVar9,DAT_14cb22468);
      lVar11 = 0;
      if (lVar9 != lVar10) {
        lVar11 = lVar10;
      }
    }
    FUN_140d8c55c(&local_58,lVar11);
    *(undefined4 *)(param_1 + 0x1718) = (undefined4)local_58;
    *(undefined4 *)(param_1 + 0x171c) = local_58._4_4_;
    *(undefined4 *)(param_1 + 0x1720) = uStack_50;
    *(undefined4 *)(param_1 + 0x1724) = uStack_4c;
    lVar9 = FUN_140a40fb0(plVar8);
    if (lVar9 == 0) {
      *(undefined4 *)(param_1 + 0x1730) = 0;
      iVar7 = 0;
    }
    else {
      uVar5 = *(uint *)(lVar9 + 0xc);
      *(uint *)(param_1 + 0x1730) = uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar15 = iVar7 == 0;
        if (bVar15) {
          *(int *)(lVar9 + 0x10) = iVar13;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar7 = iVar13;
        }
      }
    }
    *(int *)(param_1 + 0x1734) = iVar7;
    FUN_1401825b2(param_1);
    plVar8 = plStack_68;
    if (plStack_68 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_68 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plStack_68)(plStack_68);
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
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14116a3a2 FUN_14116a3a2 body=239 status=ok
// SIG undefined FUN_14116a3a2(void)

void FUN_14116a3a2(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = (**(code **)(*param_1 + 8))();
  local_48 = *(undefined2 **)(lVar4 + 0x18);
  FUN_1400021e4(&local_48,&local_38);
  (**(code **)(*param_1 + 0x30))(param_1,&local_48);
  iVar6 = local_40 + -1;
  puVar5 = local_48;
  if (local_40 == 0) {
    puVar5 = &DAT_149dfb77a;
    iVar6 = 0;
  }
  FUN_140c540b4(&local_38,puVar5,iVar6,1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  iVar6 = local_30 + -1;
  if (local_30 == 0) {
    iVar6 = 0;
  }
  FUN_1446f82e2(&local_48,iVar6,local_38,1);
  param_1[3] = (longlong)local_48;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14116a492 FUN_14116a492 body=89 status=ok
// SIG undefined FUN_14116a492(void)

undefined8 * FUN_14116a492(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *param_2 = 0;
  iVar1 = DAT_14cb23fa0;
  _Src = DAT_14cb23f98;
  lVar2 = (longlong)DAT_14cb23fa0;
  *(int *)(param_2 + 1) = DAT_14cb23fa0;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,lVar2 * 2);
  }
  return param_2;
}



// FUNCTION 14116a4f6 FUN_14116a4f6 body=177 status=ok
// SIG undefined FUN_14116a4f6(void)

undefined8 * FUN_14116a4f6(undefined8 *param_1)

{
  FUN_1405ba846();
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *param_1 = &PTR_FUN_14afddb70;
  param_1[0x79] = &PTR_FUN_14afde1e0;
  *(undefined4 *)(param_1 + 0x7d) = 0x41200000;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0xdfd4fbca;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined8 *)((longlong)param_1 + 0x40d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x415) = 1;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cad0f30,1);
  *(byte *)(param_1[0x75] + 0x2d3) = *(byte *)(param_1[0x75] + 0x2d3) | 4;
  *(byte *)((longlong)param_1 + 0x39c) = *(byte *)((longlong)param_1 + 0x39c) | 1;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0xffffff00;
  return param_1;
}



// FUNCTION 14116a5a8 FUN_14116a5a8 body=311 status=ok
// SIG undefined FUN_14116a5a8(void)

undefined8 FUN_14116a5a8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14116a6d8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14116a6d8;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_14116a6d8:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14116a681;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_14116a681;
    }
  }
  uVar6 = 0;
LAB_14116a681:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14116a6e0 FUN_14116a6e0 body=617 status=ok
// SIG undefined FUN_14116a6e0(void)

void FUN_14116a6e0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar4 = (longlong *)FUN_1411a568a(param_2);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
    lVar6 = FUN_1406d3bdc();
    if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
         lVar6 + 0x30)) && (*(char *)((longlong)plVar4 + 0x24d) == '\x01')) {
      uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
      uVar8 = FUN_140279ac4(param_2);
      cVar3 = FUN_144105286(plVar4,uVar8,uVar7);
      if (((cVar3 != '\0') && (lVar5 = (**(code **)(*param_1 + 0x180))(param_1), lVar5 != 0)) &&
         (0 < *(int *)(lVar5 + 0x238))) {
        lVar6 = 0;
        do {
          iVar1 = *(int *)(*(longlong *)(lVar5 + 0x230) + 4 + lVar6 * 8);
          if (((iVar1 != 0) &&
              (uVar2 = *(uint *)(*(longlong *)(lVar5 + 0x230) + lVar6 * 8), -1 < (int)uVar2)) &&
             (((int)uVar2 < DAT_14c9647dc &&
              ((((plVar4 = (longlong *)
                           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar4 != (longlong *)0x0 && ((int)plVar4[2] == iVar1)) &&
                ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (lVar9 = *plVar4, lVar9 != 0)))))) {
            if (DAT_14cbadd90 == 0) {
              local_50 = FUN_141030f22;
              local_60 = FUN_14081d0ea;
              local_68 = &LAB_1459f2e4c;
              local_70 = &local_50;
              local_78 = &LAB_148c39de3;
              local_80 = &LAB_1457a9eb2;
              local_88 = &DAT_149e063b2;
              local_90 = 0;
              local_98 = 0x10000004;
              local_a0 = 0x10;
              local_a8 = 0x3de0;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            }
            if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                  (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
               ((*(char *)(lVar9 + 0x178) == '\x03' && (lVar9 = FUN_1402a1246(lVar9), lVar9 != 0))))
            {
              *(undefined1 *)(lVar9 + 0xf28) = 1;
            }
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < *(int *)(lVar5 + 0x238));
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14116a94a FUN_14116a94a body=7231 status=ok
// SIG undefined FUN_14116a94a(void)

void FUN_14116a94a(uint **param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  uint *puVar14;
  longlong lVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint **ppuVar21;
  uint **ppuVar22;
  longlong *plVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint **ppuVar28;
  ulonglong uVar29;
  ulonglong *puVar30;
  ushort *puVar31;
  uint **ppuVar32;
  ulonglong uVar33;
  bool bVar34;
  undefined1 auStack_2b8 [46];
  undefined2 local_28a;
  uint **local_288;
  undefined8 local_280;
  uint **local_278;
  undefined8 local_270;
  uint **local_268;
  longlong local_260;
  uint **local_258;
  uint **local_250;
  uint **local_248;
  uint **local_240;
  uint **local_238;
  uint **local_230;
  int local_228;
  uint local_224;
  uint **local_220;
  uint **local_218;
  uint *local_210;
  uint *local_208;
  undefined8 local_200;
  uint local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  uint local_1e0;
  uint local_1d8 [2];
  undefined8 local_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined1 local_1b0 [8];
  undefined8 local_1a8;
  longlong local_1a0;
  ulonglong uStack_198;
  undefined8 local_190;
  longlong local_188;
  ulonglong uStack_180;
  undefined1 local_178 [32];
  undefined8 local_158;
  undefined1 auStack_150 [32];
  undefined8 local_130;
  uint local_128;
  uint uStack_124;
  undefined4 uStack_120;
  uint uStack_11c;
  uint *local_118;
  uint local_110;
  uint local_10c;
  undefined8 local_f8;
  longlong local_f0;
  undefined1 local_e8 [24];
  longlong local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  int local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [24];
  undefined8 local_98;
  longlong local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  longlong local_68;
  uint *local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar10 = FUN_14009d2a0();
  lVar11 = FUN_14038fb82();
  uVar13 = *(undefined8 *)(param_1[5] + 0x152);
  uVar7 = *(ushort *)(lVar10 + 0x4e);
  iVar25 = uVar7 + 1;
  uVar3 = *(ushort *)(lVar10 + 0x11a);
  local_1f0 = CONCAT22(*(undefined2 *)(lVar11 + 0xde),uVar7);
  uStack_1ec = *(uint *)(lVar11 + 0xda) << 0x10 | *(uint *)(lVar11 + 0xda) >> 0x10;
  uStack_1e8._0_2_ = (ushort)(byte)uStack_1e8;
  uStack_1e4 = 0x6ff;
  local_1e0 = local_1e0 & 0xffffff00;
  local_1b8 = 0x10000000000;
  local_190 = 0x10000000000;
  local_158 = 0x10000000000;
  local_188 = 0;
  uStack_180 = 0;
  local_130 = 0x10000000000;
  iVar17 = iVar25;
  if (0xff < uVar7) {
    FUN_14497ddce(local_1d8,0);
    iVar17 = (int)local_1b8 + iVar25;
  }
  iVar26 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar26 = iVar17;
  }
  local_1b8._0_4_ = iVar17;
  if (iVar17 % 0x20 != 0) {
    bVar16 = -(char)(iVar17 % 0x20);
    local_1d8[iVar26 >> 5] = (local_1d8[iVar26 >> 5] << (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
  }
  local_288 = param_1;
  FUN_1447c45ca(local_1d8,0,iVar25,0);
  uVar8 = local_1f0;
  local_1d8[uVar7 >> 5] = local_1d8[uVar7 >> 5] | 1 << ((byte)uVar7 & 0x1f);
  iVar17 = (int)local_1b8;
  uVar7 = local_1f0._2_2_;
  iVar25 = local_1f0._2_2_ + 1;
  iVar26 = iVar25 - (int)local_1b8;
  if (iVar26 != 0 && (int)local_1b8 <= iVar25) {
    if ((int)local_1b8 == 0) {
LAB_14116aaa9:
      if (local_1b8._4_4_ <= (int)(uint)local_1f0._2_2_) {
        local_1b8._4_4_ = 0x100;
        FUN_14497ddce(local_1d8,(int)local_1b8);
        iVar25 = (int)local_1b8 + iVar26;
      }
      iVar18 = iVar25 + 0x1f;
      if (-1 < iVar25) {
        iVar18 = iVar25;
      }
      local_1b8._0_4_ = iVar25;
      iVar25 = (int)local_1b8;
      if (iVar25 % 0x20 != 0) {
        bVar16 = -(char)(iVar25 % 0x20);
        local_1d8[iVar18 >> 5] = (local_1d8[iVar18 >> 5] << (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
        iVar25 = (int)local_1b8;
      }
    }
    else {
      iVar18 = (int)local_1b8 + 0x1e;
      if (-1 < (int)local_1b8 + -1) {
        iVar18 = (int)local_1b8 + -1;
      }
      if (iVar18 >> 5 != (uint)(local_1f0._2_2_ >> 5)) goto LAB_14116aaa9;
    }
    local_1b8._0_4_ = iVar25;
    FUN_1447c45ca(local_1d8,iVar17,iVar26,0);
  }
  uVar27 = uStack_1ec;
  local_1d8[uVar7 >> 5] = local_1d8[uVar7 >> 5] | 1 << ((byte)(uVar8 >> 0x10) & 0x1f);
  iVar17 = (int)local_1b8;
  uVar7 = (ushort)uStack_1ec;
  iVar25 = (uStack_1ec & 0xffff) + 1;
  iVar26 = iVar25 - (int)local_1b8;
  if (iVar26 != 0 && (int)local_1b8 <= iVar25) {
    if ((int)local_1b8 == 0) {
LAB_14116ab4b:
      if (local_1b8._4_4_ <= (int)(uStack_1ec & 0xffff)) {
        local_1b8._4_4_ = 0x100;
        FUN_14497ddce(local_1d8,(int)local_1b8);
        iVar25 = (int)local_1b8 + iVar26;
      }
      iVar18 = iVar25 + 0x1f;
      if (-1 < iVar25) {
        iVar18 = iVar25;
      }
      local_1b8._0_4_ = iVar25;
      iVar25 = (int)local_1b8;
      if (iVar25 % 0x20 != 0) {
        bVar16 = -(char)(iVar25 % 0x20);
        local_1d8[iVar18 >> 5] = (local_1d8[iVar18 >> 5] << (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
        iVar25 = (int)local_1b8;
      }
    }
    else {
      iVar18 = (int)local_1b8 + 0x1e;
      if (-1 < (int)local_1b8 + -1) {
        iVar18 = (int)local_1b8 + -1;
      }
      if (iVar18 >> 5 != (uint)((ushort)uStack_1ec >> 5)) goto LAB_14116ab4b;
    }
    local_1b8._0_4_ = iVar25;
    FUN_1447c45ca(local_1d8,iVar17,iVar26,0);
  }
  uVar8 = uStack_1ec;
  local_1d8[uVar7 >> 5] = local_1d8[uVar7 >> 5] | 1 << ((byte)uVar27 & 0x1f);
  iVar17 = (int)local_1b8;
  uVar7 = uStack_1ec._2_2_;
  iVar25 = uStack_1ec._2_2_ + 1;
  iVar26 = iVar25 - (int)local_1b8;
  if (iVar26 != 0 && (int)local_1b8 <= iVar25) {
    if ((int)local_1b8 == 0) {
LAB_14116abf7:
      if (local_1b8._4_4_ <= (int)(uint)uStack_1ec._2_2_) {
        local_1b8._4_4_ = 0x100;
        FUN_14497ddce(local_1d8,(int)local_1b8);
        iVar25 = (int)local_1b8 + iVar26;
      }
      iVar18 = iVar25 + 0x1f;
      if (-1 < iVar25) {
        iVar18 = iVar25;
      }
      local_1b8._0_4_ = iVar25;
      iVar25 = (int)local_1b8;
      if (iVar25 % 0x20 != 0) {
        bVar16 = -(char)(iVar25 % 0x20);
        local_1d8[iVar18 >> 5] = (local_1d8[iVar18 >> 5] << (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
        iVar25 = (int)local_1b8;
      }
    }
    else {
      iVar18 = (int)local_1b8 + 0x1e;
      if (-1 < (int)local_1b8 + -1) {
        iVar18 = (int)local_1b8 + -1;
      }
      if (iVar18 >> 5 != (uint)(uStack_1ec._2_2_ >> 5)) goto LAB_14116abf7;
    }
    local_1b8._0_4_ = iVar25;
    FUN_1447c45ca(local_1d8,iVar17,iVar26,0);
  }
  ppuVar22 = local_288;
  local_1d8[uVar7 >> 5] = local_1d8[uVar7 >> 5] | 1 << ((byte)(uVar8 >> 0x10) & 0x1f);
  iVar17 = (int)local_1b8;
  iVar25 = uVar3 + 1;
  iVar26 = iVar25 - (int)local_1b8;
  if (iVar26 != 0 && (int)local_1b8 <= iVar25) {
    if ((int)local_1b8 == 0) {
LAB_14116ac93:
      if (local_1b8._4_4_ <= (int)(uint)uVar3) {
        local_1b8._4_4_ = 0x100;
        FUN_14497ddce(local_1d8,(int)local_1b8);
        iVar25 = (int)local_1b8 + iVar26;
      }
      iVar18 = iVar25 + 0x1f;
      if (-1 < iVar25) {
        iVar18 = iVar25;
      }
      local_1b8._0_4_ = iVar25;
      iVar25 = (int)local_1b8;
      if (iVar25 % 0x20 != 0) {
        bVar16 = -(char)(iVar25 % 0x20);
        local_1d8[iVar18 >> 5] = (local_1d8[iVar18 >> 5] << (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
        iVar25 = (int)local_1b8;
      }
    }
    else {
      iVar18 = (int)local_1b8 + 0x1e;
      if (-1 < (int)local_1b8 + -1) {
        iVar18 = (int)local_1b8 + -1;
      }
      if (iVar18 >> 5 != (uint)(uVar3 >> 5)) goto LAB_14116ac93;
    }
    local_1b8._0_4_ = iVar25;
    FUN_1447c45ca(local_1d8,iVar17,iVar26,0);
  }
  local_1d8[uVar3 >> 5] = local_1d8[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
  puVar14 = ppuVar22[5];
  local_200 = (uint *)uVar13;
  if (((((short)local_1f0 != -1) && (local_1f0._2_2_ != -1)) && ((ushort)uStack_1ec != -1)) &&
     (uStack_1ec._2_2_ != -1)) {
    local_118 = (uint *)CONCAT44(local_118._4_4_,local_1e0);
    local_128 = local_1f0;
    uStack_124 = uStack_1ec;
    uStack_120 = uStack_1e8;
    uStack_11c = uStack_1e4;
    local_f0 = 0;
    uVar8 = (int)local_1b8 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar8) {
      uVar27 = 0x100;
      if (0x100 < uVar8) {
        uVar27 = uVar8;
      }
      local_f0 = (ulonglong)uVar27 << 0x20;
      FUN_14497ddce(&local_110,0);
    }
    local_f0 = CONCAT44(local_f0._4_4_,(int)local_1b8);
    if ((int)local_1b8 != 0) {
      memcpy(&local_110,local_1d8,(ulonglong)((int)local_1b8 + 0x1fU >> 3 & 0xfffffffc));
    }
    local_c8 = 0;
    uVar8 = (int)local_190 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar8) {
      uVar27 = 0x100;
      if (0x100 < uVar8) {
        uVar27 = uVar8;
      }
      local_c8 = (ulonglong)uVar27 << 0x20;
      FUN_14497ddce(local_e8,0);
    }
    local_c8 = CONCAT44(local_c8._4_4_,(int)local_190);
    if ((int)local_190 != 0) {
      memcpy(local_e8,local_1b0,(ulonglong)((int)local_190 + 0x1fU >> 3 & 0xfffffffc));
    }
    uVar12 = uStack_180;
    lVar10 = local_188;
    uStack_c0 = 0;
    local_b8 = (int)uStack_180;
    if ((int)uStack_180 == 0) {
      local_b4 = 0;
    }
    else {
      FUN_1403b8c86(&uStack_c0,uStack_180 & 0xffffffff,0);
      FUN_1403b8bfd(uStack_c0,lVar10,uVar12 & 0xffffffff);
    }
    local_90 = 0;
    uVar8 = (int)local_158 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar8) {
      uVar27 = 0x100;
      if (0x100 < uVar8) {
        uVar27 = uVar8;
      }
      local_90 = (ulonglong)uVar27 << 0x20;
      FUN_14497ddce(local_b0,0);
    }
    local_90 = CONCAT44(local_90._4_4_,(int)local_158);
    if ((int)local_158 != 0) {
      memcpy(local_b0,local_178,(ulonglong)((int)local_158 + 0x1fU >> 3 & 0xfffffffc));
    }
    local_68 = 0;
    uVar8 = (int)local_130 + 0x1fU & 0xffffffe0;
    local_280 = lVar11;
    if (0 < (int)uVar8) {
      uVar27 = 0x100;
      if (0x100 < uVar8) {
        uVar27 = uVar8;
      }
      local_68 = (ulonglong)uVar27 << 0x20;
      FUN_14497ddce(auStack_88,0);
    }
    local_68 = CONCAT44(local_68._4_4_,(int)local_130);
    if ((int)local_130 != 0) {
      memcpy(auStack_88,auStack_150,(ulonglong)((int)local_130 + 0x1fU >> 3 & 0xfffffffc));
    }
    local_58 = *(undefined8 *)(puVar14 + 0x9c);
    uVar8 = puVar14[0xa6];
    if ((char)uVar8 == '\0') {
      puVar14[0xa3] = puVar14[0xa3] + 1;
    }
    else {
      LOCK();
      puVar14[0xa3] = puVar14[0xa3] + 1;
      UNLOCK();
    }
    local_220 = (uint **)&local_110;
    local_218 = (uint **)(puVar14 + 10);
    local_60 = puVar14 + 10;
    uVar9 = FUN_1403b8464(&local_220,0);
    ppuVar22 = local_218;
    local_210 = (uint *)CONCAT44(local_210._4_4_,uVar9);
    uVar27 = puVar14[0xe];
    if (uVar9 != uVar27) {
      do {
        lVar11 = *(longlong *)(*(longlong *)((longlong)ppuVar22 + 0x60) + (longlong)(int)uVar9 * 8);
        if ((char)uVar8 == '\0') {
          *(undefined4 *)(lVar11 + 0x14) = 0;
          FUN_14116c58a(&local_200,lVar11,local_58,&local_128);
          if (lVar11 != 0) {
            *(undefined4 *)(lVar11 + 0x14) = 1;
          }
        }
        else {
          FUN_14116c58a(&local_200,lVar11,local_58,&local_128);
        }
        uVar9 = FUN_1403b8464(&local_220,uVar9 + 1);
        local_210 = (uint *)CONCAT44(local_210._4_4_,uVar9);
      } while (uVar9 != uVar27);
    }
    lVar11 = local_280;
    ppuVar22 = local_288;
    if (local_220 != (uint **)0x0) {
      if ((char)*(uint *)((longlong)local_218 + 0x270) == '\0') {
        *(uint *)((longlong)local_218 + 0x264) = *(uint *)((longlong)local_218 + 0x264) - 1;
      }
      else {
        LOCK();
        *(uint *)((longlong)local_218 + 0x264) = *(uint *)((longlong)local_218 + 0x264) - 1;
        UNLOCK();
      }
    }
    if (uStack_c0 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  local_1d0 = 0x10000000000;
  local_1a8 = 0x10000000000;
  local_1a0 = 0;
  uStack_198 = 0;
  uVar7 = *(ushort *)(lVar11 + 0xdc);
  iVar25 = uVar7 + 1;
  iVar17 = iVar25;
  if (0xff < uVar7) {
    FUN_14497ddce(&local_1f0,0);
    iVar17 = (int)local_1d0 + iVar25;
  }
  iVar26 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar26 = iVar17;
  }
  local_1d0 = CONCAT44(local_1d0._4_4_,iVar17);
  if (iVar17 % 0x20 != 0) {
    bVar16 = -(char)(iVar17 % 0x20);
    (&local_1f0)[iVar26 >> 5] =
         (uint)((&local_1f0)[iVar26 >> 5] << (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
  }
  FUN_1447c45ca(&local_1f0,0,iVar25,0);
  (&local_1f0)[uVar7 >> 5] = (&local_1f0)[uVar7 >> 5] | 1 << ((byte)uVar7 & 0x1f);
  lVar11 = FUN_14009d2a0();
  uVar4 = *(undefined2 *)(lVar11 + 0x4a);
  puVar14 = ppuVar22[5];
  uVar12 = FUN_14009d2a0();
  uStack_124._0_2_ = (ushort)(byte)uStack_124;
  uStack_120 = 0x6ff;
  uStack_11c = uStack_11c & 0xffffff00;
  local_f8 = 0x10000000000;
  local_d0 = 0x10000000000;
  local_98 = 0x10000000000;
  local_c8 = 0;
  uStack_c0 = 0;
  local_70 = 0x10000000000;
  FUN_1406abdee(&local_118,&local_1f0);
  local_260 = CONCAT62(local_260._2_6_,uVar4);
  local_200._0_4_ = CONCAT22(uVar4,*(undefined2 *)(uVar12 + 0x11c));
  lVar11 = 0;
  local_280 = uVar12;
  do {
    uVar12 = local_f8;
    uVar7 = *(ushort *)((longlong)&local_200 + lVar11);
    iVar17 = uVar7 + 1;
    iVar25 = iVar17 - (int)local_f8;
    if (iVar25 != 0 && (int)local_f8 <= iVar17) {
      if ((int)local_f8 == 0) {
LAB_14116b178:
        if (local_f8._4_4_ <= (int)(uint)uVar7) {
          local_f8 = CONCAT44(0x100,(int)local_f8);
          FUN_14497ddce(&local_118,uVar12 & 0xffffffff);
          iVar17 = (int)local_f8 + iVar25;
        }
        iVar26 = iVar17 + 0x1f;
        if (-1 < iVar17) {
          iVar26 = iVar17;
        }
        local_f8 = CONCAT44(local_f8._4_4_,iVar17);
        if (iVar17 % 0x20 != 0) {
          bVar16 = -(char)(iVar17 % 0x20);
          *(uint *)((longlong)&local_118 + (longlong)(iVar26 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_118 + (longlong)(iVar26 >> 5) * 4) <<
                     (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
        }
      }
      else {
        iVar26 = (int)local_f8 + 0x1e;
        if (-1 < (int)local_f8 + -1) {
          iVar26 = (int)local_f8 + -1;
        }
        if (iVar26 >> 5 != (uint)(uVar7 >> 5)) goto LAB_14116b178;
        local_f8 = CONCAT44(local_f8._4_4_,iVar17);
      }
      FUN_1447c45ca(&local_118,uVar12 & 0xffffffff,iVar25,0);
    }
    puVar2 = (uint *)((longlong)&local_118 + (ulonglong)(uVar7 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar7 & 0x1f);
    lVar11 = lVar11 + 2;
  } while (lVar11 != 4);
  local_268 = (uint **)(puVar14 + 10);
  cVar6 = (char)puVar14[0xa6];
  if (cVar6 == '\0') {
    puVar14[0xa3] = puVar14[0xa3] + 1;
  }
  else {
    LOCK();
    puVar14[0xa3] = puVar14[0xa3] + 1;
    UNLOCK();
  }
  ppuVar28 = ppuVar22 + 9;
  local_220 = &local_118;
  local_218 = local_268;
  uVar8 = FUN_1403b8464(&local_220,0);
  local_210 = (uint *)CONCAT44(local_210._4_4_,uVar8);
  local_248 = ppuVar28;
  if (uVar8 != puVar14[0xe]) {
    local_278 = ppuVar22 + 0x13;
    local_270 = ppuVar22 + 0x2e;
    local_240 = (uint **)CONCAT44(local_240._4_4_,puVar14[0xe]);
    local_250 = local_218;
    do {
      if (cVar6 == '\0') {
        local_258 = *(uint ***)(local_250[0xc] + (longlong)(int)uVar8 * 2);
        *(uint *)((longlong)local_258 + 0x14) = 0;
      }
      else {
        local_258 = (uint **)0x0;
      }
      local_230 = (uint **)(ulonglong)
                           *(ushort *)
                            (*(longlong *)(local_250[0xc] + (longlong)(int)uVar8 * 2) + 0xe);
      if (local_230 != (uint **)0x0) {
        local_238 = *(uint ***)(*(longlong *)(local_250[0xc] + (longlong)(int)uVar8 * 2) + 0x18);
        ppuVar32 = (uint **)0x0;
        local_28a = CONCAT11(local_28a._1_1_,cVar6);
        do {
          local_208 = (uint *)CONCAT62(local_208._2_6_,
                                       *(undefined2 *)((longlong)local_238 + (longlong)ppuVar32 * 2)
                                      );
          uVar27 = FUN_14116cafa(ppuVar28);
          if ((short)uVar27 != -1) {
            uVar9 = uVar27 & 0xffff;
            FUN_14086b58e(local_278,uVar27,&local_208);
            FUN_140bbeb1c(ppuVar28,&local_208);
            iVar17 = uVar9 + 1;
            iVar25 = *(int *)(ppuVar22 + 0x31);
            iVar26 = iVar17 - iVar25;
            if (0 < iVar26) {
              if (iVar25 == 0) {
LAB_14116bd63:
                ppuVar22 = local_288;
                if (*(int *)((longlong)local_288 + 0x18c) <= (int)uVar9) {
                  if (uVar9 < 0x80) {
                    iVar18 = 0x80;
                    iVar17 = iVar25;
                  }
                  else {
                    uVar27 = uVar9 + 0x20 >> 5;
                    if (*(int *)((longlong)local_288 + 0x18c) + 0x1fU < 0xa0) {
                      uVar20 = 4;
                      if (4 < uVar27) {
                        uVar20 = uVar27;
                      }
                    }
                    else {
                      uVar20 = (uVar27 * 3 >> 3) + uVar27 + 0x10;
                    }
                    uVar12 = FUN_144a3809e(uVar20 << 2,0);
                    iVar17 = (int)(uVar12 >> 2);
                    iVar18 = -0x20;
                    if ((int)uVar27 <= iVar17) {
                      iVar18 = iVar17 << 5;
                    }
                    iVar17 = *(int *)(local_288 + 0x31);
                  }
                  ppuVar22 = local_288;
                  *(int *)((longlong)local_288 + 0x18c) = iVar18;
                  FUN_1446efbd8(local_270,iVar17);
                  iVar17 = *(int *)(ppuVar22 + 0x31) + iVar26;
                }
                iVar18 = iVar17 + 0x1f;
                if (-1 < iVar17) {
                  iVar18 = iVar17;
                }
                *(int *)(ppuVar22 + 0x31) = iVar17;
                ppuVar28 = local_248;
                if (iVar17 % 0x20 != 0) {
                  ppuVar22 = (uint **)local_288[0x30];
                  if ((uint **)local_288[0x30] == (uint **)0x0) {
                    ppuVar22 = local_270;
                  }
                  bVar16 = -(char)(iVar17 % 0x20);
                  *(uint *)((longlong)ppuVar22 + (longlong)(iVar18 >> 5) * 4) =
                       (uint)(*(int *)((longlong)ppuVar22 + (longlong)(iVar18 >> 5) * 4) <<
                             (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
                }
              }
              else {
                iVar18 = iVar25 + 0x1e;
                if (-1 < iVar25 + -1) {
                  iVar18 = iVar25 + -1;
                }
                if (uVar9 >> 5 != iVar18 >> 5) goto LAB_14116bd63;
                *(int *)(local_288 + 0x31) = iVar17;
              }
              FUN_1447c6044(local_270,iVar25,iVar26,0);
            }
            ppuVar22 = (uint **)local_288[0x30];
            if ((uint **)local_288[0x30] == (uint **)0x0) {
              ppuVar22 = local_270;
            }
            puVar2 = (uint *)((longlong)ppuVar22 + (ulonglong)(uVar9 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << ((byte)uVar9 & 0x1f);
            ppuVar22 = local_288;
          }
          ppuVar32 = (uint **)((longlong)ppuVar32 + 1);
          cVar6 = (char)local_28a;
        } while (local_230 != ppuVar32);
      }
      if (local_258 != (uint **)0x0) {
        *(uint *)((longlong)local_258 + 0x14) = 1;
      }
      uVar8 = FUN_1403b8464(&local_220,uVar8 + 1);
      local_210 = (uint *)CONCAT44(local_210._4_4_,uVar8);
    } while (uVar8 != (uint)local_240);
  }
  if (local_220 != (uint **)0x0) {
    if (*(char *)(local_218 + 0x4e) == '\0') {
      *(uint *)((longlong)local_218 + 0x264) = *(uint *)((longlong)local_218 + 0x264) - 1;
    }
    else {
      LOCK();
      *(uint *)((longlong)local_218 + 0x264) = *(uint *)((longlong)local_218 + 0x264) - 1;
      UNLOCK();
    }
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  local_128 = CONCAT22(local_128._2_2_,(undefined2)local_260);
  uStack_124._0_2_ = (ushort)(byte)uStack_124;
  uStack_120 = 0x6ff;
  uStack_11c = uStack_11c & 0xffffff00;
  local_f8 = 0;
  uVar8 = (int)local_1d0 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar8) {
    uVar27 = 0x100;
    if (0x100 < uVar8) {
      uVar27 = uVar8;
    }
    local_f8 = (ulonglong)uVar27 << 0x20;
    FUN_14497ddce(&local_118,0);
  }
  local_f8 = CONCAT44(local_f8._4_4_,(int)local_1d0);
  if ((int)local_1d0 != 0) {
    memcpy(&local_118,&local_1f0,(ulonglong)((int)local_1d0 + 0x1fU >> 3 & 0xfffffffc));
  }
  local_d0 = 0;
  uVar8 = (int)local_1a8 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar8) {
    uVar27 = 0x100;
    if (0x100 < uVar8) {
      uVar27 = uVar8;
    }
    local_d0 = (ulonglong)uVar27 << 0x20;
    FUN_14497ddce(&local_f0,0);
  }
  local_d0 = CONCAT44(local_d0._4_4_,(int)local_1a8);
  if ((int)local_1a8 != 0) {
    memcpy(&local_f0,local_1c8,(ulonglong)((int)local_1a8 + 0x1fU >> 3 & 0xfffffffc));
  }
  lVar11 = local_1a0;
  local_c8 = 0;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)uStack_198);
  if ((int)uStack_198 == 0) {
    uStack_c0 = uStack_198 & 0xffffffff;
  }
  else {
    FUN_1403b8c86(&local_c8,uStack_198 & 0xffffffff,0);
    ppuVar22 = local_288;
    FUN_1403b8bfd(local_c8,lVar11);
  }
  uVar12 = local_f8;
  uVar8 = local_128;
  local_98 = 0x10000000000;
  local_70 = 0x10000000000;
  uVar7 = (ushort)local_128;
  iVar17 = (local_128 & 0xffff) + 1;
  iVar25 = iVar17 - (int)local_f8;
  if (iVar25 != 0 && (int)local_f8 <= iVar17) {
    if ((int)local_f8 == 0) {
LAB_14116b429:
      if (local_f8._4_4_ <= (int)(local_128 & 0xffff)) {
        local_f8 = CONCAT44(0x100,(int)local_f8);
        FUN_14497ddce(&local_118,uVar12 & 0xffffffff);
        iVar17 = (int)local_f8 + iVar25;
      }
      iVar26 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar26 = iVar17;
      }
      local_f8 = CONCAT44(local_f8._4_4_,iVar17);
      if (iVar17 % 0x20 != 0) {
        bVar16 = -(char)(iVar17 % 0x20);
        *(uint *)((longlong)&local_118 + (longlong)(iVar26 >> 5) * 4) =
             (uint)(*(int *)((longlong)&local_118 + (longlong)(iVar26 >> 5) * 4) << (bVar16 & 0x1f))
             >> (bVar16 & 0x1f);
      }
    }
    else {
      iVar26 = (int)local_f8 + 0x1e;
      if (-1 < (int)local_f8 + -1) {
        iVar26 = (int)local_f8 + -1;
      }
      if (iVar26 >> 5 != (uint)((ushort)local_128 >> 5)) goto LAB_14116b429;
      local_f8 = CONCAT44(local_f8._4_4_,iVar17);
    }
    FUN_1447c45ca(&local_118,uVar12 & 0xffffffff,iVar25,0);
  }
  puVar2 = (uint *)((longlong)&local_118 + (ulonglong)(uVar7 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar8 & 0x1f);
  uVar12 = local_f8;
  uVar7 = *(ushort *)(local_280 + 0x11a);
  iVar17 = uVar7 + 1;
  iVar25 = iVar17 - (int)local_f8;
  if (iVar25 == 0 || iVar17 < (int)local_f8) goto LAB_14116b51f;
  if ((int)local_f8 == 0) {
LAB_14116b4d0:
    if (local_f8._4_4_ <= (int)(uint)uVar7) {
      local_f8 = CONCAT44(0x100,(int)local_f8);
      FUN_14497ddce(&local_118,uVar12 & 0xffffffff);
      iVar17 = (int)local_f8 + iVar25;
    }
    iVar26 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar26 = iVar17;
    }
    local_f8 = CONCAT44(local_f8._4_4_,iVar17);
    if (iVar17 % 0x20 != 0) {
      bVar16 = -(char)(iVar17 % 0x20);
      *(uint *)((longlong)&local_118 + (longlong)(iVar26 >> 5) * 4) =
           (uint)(*(int *)((longlong)&local_118 + (longlong)(iVar26 >> 5) * 4) << (bVar16 & 0x1f))
           >> (bVar16 & 0x1f);
    }
  }
  else {
    iVar26 = (int)local_f8 + 0x1e;
    if (-1 < (int)local_f8 + -1) {
      iVar26 = (int)local_f8 + -1;
    }
    if (iVar26 >> 5 != (uint)(uVar7 >> 5)) goto LAB_14116b4d0;
    local_f8 = CONCAT44(local_f8._4_4_,iVar17);
  }
  FUN_1447c45ca(&local_118,uVar12 & 0xffffffff,iVar25,0);
LAB_14116b51f:
  puVar2 = (uint *)((longlong)&local_118 + (ulonglong)(uVar7 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar7 & 0x1f);
  if ((ushort)local_128 != -1) {
    uVar8 = puVar14[0xa6];
    local_218 = local_268;
    if ((char)uVar8 == '\0') {
      puVar14[0xa3] = puVar14[0xa3] + 1;
    }
    else {
      LOCK();
      puVar14[0xa3] = puVar14[0xa3] + 1;
      UNLOCK();
    }
    local_220 = &local_118;
    uVar13 = FUN_1403b8464(&local_220,0);
    uVar9 = (uint)uVar13;
    local_210 = (uint *)CONCAT44(local_210._4_4_,uVar9);
    uVar27 = puVar14[0xe];
    ppuVar28 = local_218;
    while (local_218 = ppuVar28, uVar9 != uVar27) {
      lVar11 = *(longlong *)(ppuVar28[0xc] + (longlong)(int)uVar13 * 2);
      if ((char)uVar8 == '\0') {
        *(undefined4 *)(lVar11 + 0x14) = 0;
        local_260 = lVar11;
      }
      else {
        local_260 = 0;
      }
      if (*(ushort *)(lVar11 + 0xc) != 0) {
        puVar30 = *(ulonglong **)(lVar11 + 0x28);
        lVar10 = (ulonglong)*(ushort *)(lVar11 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar30 + 0x1e) == (ushort)local_128) goto LAB_14116c2c7;
          puVar30 = puVar30 + 4;
          lVar10 = lVar10 + -0x20;
        } while (lVar10 != 0);
      }
      puVar30 = (ulonglong *)0x0;
LAB_14116c2c7:
      local_270._4_4_ = (undefined4)((ulonglong)local_270 >> 0x20);
      local_270 = (uint **)CONCAT44(local_270._4_4_,*(int *)(lVar11 + 0x14));
      if (*(int *)(lVar11 + 0x14) == 1) {
        AcquireSRWLockShared((PSRWLOCK)(puVar30 + 1));
      }
      LOCK();
      *(int *)(puVar30 + 3) = (int)puVar30[3] + 1;
      UNLOCK();
      local_280 = *puVar30;
      lVar11 = *(longlong *)(ppuVar28[0xc] + (longlong)(int)uVar13 * 2);
      uVar12 = (ulonglong)*(ushort *)(lVar11 + 0xe);
      local_268 = *(uint ***)(lVar11 + 0x18);
      lVar10 = FUN_14009d2a0();
      if (*(ushort *)(lVar11 + 0xc) == 0) {
        uVar33 = 0;
      }
      else {
        lVar15 = *(longlong *)(lVar11 + 0x28);
        lVar24 = (ulonglong)*(ushort *)(lVar11 + 0xc) << 5;
        do {
          if (*(short *)(lVar15 + 0x1e) == *(short *)(lVar10 + 0x11a)) goto LAB_14116c331;
          lVar15 = lVar15 + 0x20;
          lVar24 = lVar24 + -0x20;
        } while (lVar24 != 0);
        lVar15 = 0;
LAB_14116c331:
        uVar33 = CONCAT71((int7)(int3)((ulonglong)uVar13 >> 8),lVar15 != 0);
      }
      lVar10 = FUN_14009d2a0();
      if (*(ushort *)(lVar11 + 0xc) != 0) {
        lVar15 = *(longlong *)(lVar11 + 0x28);
        lVar11 = (ulonglong)*(ushort *)(lVar11 + 0xc) << 5;
        do {
          if (*(short *)(lVar15 + 0x1e) == *(short *)(lVar10 + 0x10a)) {
            if (lVar15 != 0) {
              if (uVar12 != 0) {
                uVar29 = 0;
                do {
                  local_208 = (uint *)0x0;
                  if (*(longlong *)(local_280 + uVar29 * 8) != 0) {
                    local_200 = (uint *)0x0;
                    FUN_14485c47a(&local_200);
                    local_208 = local_200;
                  }
                  uVar7 = FUN_14116d690(local_248,*(undefined2 *)((longlong)local_268 + uVar29 * 2),
                                        &local_208,uVar33 & 0xffffffff);
                  *(undefined1 *)(local_288[0x27] + (ulonglong)uVar7 * 8 + 7) = 1;
                  uVar29 = uVar29 + 1;
                } while (uVar12 != uVar29);
              }
              goto LAB_14116c3fb;
            }
            break;
          }
          lVar15 = lVar15 + 0x20;
          lVar11 = lVar11 + -0x20;
        } while (lVar11 != 0);
      }
      if (uVar12 != 0) {
        uVar29 = 0;
        do {
          lVar11 = *(longlong *)(local_280 + uVar29 * 8);
          local_200 = (uint *)0x0;
          if (lVar11 != 0) {
            uVar9 = *(uint *)(lVar11 + 0xc);
            if ((int)uVar9 < DAT_14c9647dc) {
              lVar11 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
            }
            else {
              lVar11 = 0;
            }
            iVar17 = *(int *)(lVar11 + 0x10);
            if (*(int *)(lVar11 + 0x10) == 0) {
              LOCK();
              iVar17 = DAT_14c964868 + 1;
              UNLOCK();
              iVar25 = DAT_14c964868 + 1;
              bVar34 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar17;
              if (bVar34) {
                local_278 = (uint **)CONCAT44(local_278._4_4_,iVar25);
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar25);
                iVar25 = (int)local_278;
              }
              LOCK();
              iVar17 = *(int *)(lVar11 + 0x10);
              bVar34 = iVar17 == 0;
              if (bVar34) {
                *(int *)(lVar11 + 0x10) = iVar25;
                iVar17 = 0;
              }
              UNLOCK();
              if (bVar34) {
                iVar17 = iVar25;
              }
            }
            local_200 = (uint *)CONCAT44(iVar17,uVar9);
          }
          FUN_14116d690(local_248,*(undefined2 *)((longlong)local_268 + uVar29 * 2),&local_200,
                        uVar33 & 0xffffffff);
          uVar29 = uVar29 + 1;
        } while (uVar12 != uVar29);
      }
LAB_14116c3fb:
      if (puVar30 != (ulonglong *)0x0) {
        LOCK();
        *(int *)(puVar30 + 3) = (int)puVar30[3] + -1;
        UNLOCK();
        if ((uint)local_270 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(puVar30 + 1));
        }
      }
      if (local_260 != 0) {
        *(undefined4 *)(local_260 + 0x14) = 1;
      }
      uVar13 = FUN_1403b8464(&local_220,(int)local_210 + 1);
      uVar9 = (uint)uVar13;
      local_210 = (uint *)CONCAT44(local_210._4_4_,uVar9);
      ppuVar22 = local_288;
      ppuVar28 = local_218;
    }
    if (local_220 != (uint **)0x0) {
      if (*(char *)(ppuVar28 + 0x4e) == '\0') {
        *(uint *)((longlong)ppuVar28 + 0x264) = *(uint *)((longlong)ppuVar28 + 0x264) - 1;
      }
      else {
        LOCK();
        *(uint *)((longlong)ppuVar28 + 0x264) = *(uint *)((longlong)ppuVar28 + 0x264) - 1;
        UNLOCK();
      }
    }
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  local_210 = ppuVar22[5] + 10;
  local_220 = ppuVar22;
  local_218 = (uint **)FUN_14038fb82();
  ppuVar28 = ppuVar22 + 0x2e;
  if (*(int *)(ppuVar22 + 0x31) != 0) {
    ppuVar32 = (uint **)ppuVar22[5];
    local_118 = (uint *)0x0;
    local_10c = 8;
    lVar11 = FUN_14009d2a0();
    local_28a = *(undefined2 *)(lVar11 + 0x10a);
    uVar8 = *(uint *)(ppuVar22 + 0x31);
    if (uVar8 == 0) {
      uVar12 = 1;
      uVar27 = 0;
      iVar17 = 0;
      uVar33 = 0;
    }
    else {
      ppuVar21 = (uint **)ppuVar22[0x30];
      if ((uint **)ppuVar22[0x30] == (uint **)0x0) {
        ppuVar21 = ppuVar28;
      }
      uVar27 = *(uint *)ppuVar21;
      if (uVar27 == 0) {
        iVar17 = uVar8 + 0x1e;
        if (-1 < (int)(uVar8 - 1)) {
          iVar17 = uVar8 - 1;
        }
        uVar33 = 0;
        uVar12 = (ulonglong)(uint)(iVar17 >> 5);
        if (iVar17 >> 5 < 1) {
          uVar12 = uVar33;
        }
        iVar17 = 0;
        do {
          if (uVar12 == uVar33) goto LAB_14116baf8;
          iVar17 = iVar17 + 0x20;
          uVar27 = *(uint *)((longlong)ppuVar21 + (uVar33 + 1) * 4);
          uVar33 = uVar33 + 1;
        } while (uVar27 == 0);
      }
      else {
        iVar17 = 0;
        uVar33 = 0;
      }
      uVar12 = (ulonglong)(-uVar27 & uVar27);
      uVar29 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar27 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if ((int)uVar8 <= (int)uVar27) {
        uVar27 = uVar8;
      }
    }
    if ((int)uVar27 < (int)uVar8) {
      local_278 = ppuVar22 + 0x13;
      local_230 = ppuVar22 + 0x1a;
      local_268 = ppuVar22 + 0x27;
      uVar8 = 0xffffffff;
      local_238 = ppuVar32 + 5;
      local_240 = ppuVar22 + 0x32;
      do {
        local_270 = (uint **)CONCAT44(local_270._4_4_,uVar8);
        local_260 = CONCAT44(local_260._4_4_,iVar17);
        local_110 = 0;
        if ((int)local_10c < 0) {
          FUN_1475b398e(&local_128,0);
        }
        uVar8 = uVar27 & 0xffff;
        local_280 = CONCAT44(local_280._4_4_,uVar27) & 0xffffffff0000ffff;
        if (*(int *)(ppuVar22 + 0x1c) != 0) {
          ppuVar21 = (uint **)ppuVar22[0x1b];
          if ((uint **)ppuVar22[0x1b] == (uint **)0x0) {
            ppuVar21 = local_230;
          }
          uVar9 = *(uint *)((longlong)ppuVar21 +
                           (ulonglong)(*(int *)(ppuVar22 + 0x1c) - 1U & uVar8) * 4);
          do {
            uVar20 = uVar9;
            if (uVar20 == 0xffffffff) goto LAB_14116b833;
            puVar14 = *local_278;
            uVar9 = puVar14[(longlong)(int)uVar20 * 3 + 1];
          } while ((short)puVar14[(longlong)(int)uVar20 * 3] != (short)uVar27);
          do {
            uVar5 = local_110;
            puVar31 = (ushort *)((longlong)puVar14 + (longlong)(int)uVar20 * 0xc + 2);
            uVar7 = *puVar31;
            if ((uVar7 == 0xffff) ||
               (*(uint *)(ppuVar32 + 0x1d) == (uint)uVar7 ||
                (int)*(uint *)(ppuVar32 + 0x1d) < (int)(uint)uVar7)) {
LAB_14116c135:
              FUN_140bbeb1c(local_248,puVar31);
              FUN_14086b624(local_278,uVar20);
            }
            else {
              ppuVar22 = ppuVar32 + 0x1a;
              if ((uint **)ppuVar32[0x1c] != (uint **)0x0) {
                ppuVar22 = (uint **)ppuVar32[0x1c];
              }
              if ((*(uint *)((longlong)ppuVar22 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1
                  ) == 0) goto LAB_14116c135;
              lVar11 = (longlong)(int)local_110;
              local_110 = local_110 + 1;
              if (local_10c < local_110) {
                FUN_1475b3a76(&local_128,uVar5);
                uVar8 = (uint)local_280;
              }
              puVar14 = local_118;
              if (local_118 == (uint *)0x0) {
                puVar14 = &local_128;
              }
              *(ushort *)((longlong)puVar14 + lVar11 * 2) = *puVar31;
            }
            do {
              uVar20 = uVar9;
              ppuVar22 = local_288;
              if (uVar20 == 0xffffffff) goto LAB_14116b833;
              puVar14 = *local_278;
              uVar9 = puVar14[(longlong)(int)uVar20 * 3 + 1];
            } while ((short)puVar14[(longlong)(int)uVar20 * 3] != (short)uVar27);
          } while( true );
        }
LAB_14116b833:
        puVar30 = (ulonglong *)((ulonglong)(uVar8 << 5) + (longlong)*local_268);
        lVar11 = (longlong)(int)local_110;
        if (lVar11 < 1) {
          FUN_14116ccac(&local_220,*puVar30,puVar30 + 1,*(undefined1 *)((longlong)puVar30 + 0x1c));
        }
        else {
          puVar14 = local_118;
          if (local_118 == (uint *)0x0) {
            puVar14 = &local_128;
          }
          lVar10 = 0;
          local_250 = ppuVar32;
          do {
            cVar6 = FUN_140bbead8(local_238,*(undefined2 *)((longlong)puVar14 + lVar10),local_28a);
            ppuVar22 = local_288;
            if (cVar6 != '\0') break;
            bVar34 = lVar11 * 2 + -2 != lVar10;
            lVar10 = lVar10 + 2;
          } while (bVar34);
          *(char *)((longlong)puVar30 + 0x1c) = cVar6;
          if ((int)(uint)local_280 < *(int *)(local_288 + 0x35)) {
            ppuVar32 = (uint **)local_288[0x34];
            if ((uint **)local_288[0x34] == (uint **)0x0) {
              ppuVar32 = local_240;
            }
            if ((*(uint *)((longlong)ppuVar32 + (ulonglong)((uint)local_280 >> 5) * 4) >>
                 (uVar27 & 0x1f) & 1) != 0) {
              puVar14 = local_118;
              if (local_118 == (uint *)0x0) {
                puVar14 = &local_128;
              }
              uVar29 = *puVar30;
              if ((uVar29 >> 0x20 == 0) || (uVar8 = (uint)uVar29, (int)uVar8 < 0)) {
LAB_14116bfde:
                lVar11 = 0;
              }
              else {
                lVar11 = 0;
                if ((int)uVar8 < DAT_14c9647dc) {
                  plVar23 = (longlong *)
                            ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                            *(longlong *)
                             (DAT_14c9647c8 + (ulonglong)((uint)(uVar29 >> 0xd) & 0x3fff8)));
                  if (((plVar23 == (longlong *)0x0) || ((int)plVar23[2] != (int)(uVar29 >> 0x20)))
                     || ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)) goto LAB_14116bfde;
                  lVar11 = *plVar23;
                }
              }
              puVar1 = puVar30 + 1;
              uVar8 = local_110;
              local_258 = ppuVar28;
              if (*(longlong *)(lVar11 + 0x120) == 0) {
                *(uint *)puVar1 = 0;
                iVar17 = 0;
              }
              else {
                uVar27 = *(uint *)(*(longlong *)(lVar11 + 0x120) + 0xc);
                *(uint *)puVar1 = uVar27;
                if ((int)uVar27 < DAT_14c9647dc) {
                  lVar10 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
                }
                else {
                  lVar10 = 0;
                }
                iVar17 = *(int *)(lVar10 + 0x10);
                if (*(int *)(lVar10 + 0x10) == 0) {
                  LOCK();
                  iVar17 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar25 = DAT_14c964868 + 1;
                  bVar34 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar17;
                  if (bVar34) {
                    local_224 = local_110;
                    local_228 = iVar25;
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                 );
                    uVar8 = local_224;
                    iVar25 = local_228;
                  }
                  LOCK();
                  iVar17 = *(int *)(lVar10 + 0x10);
                  bVar34 = iVar17 == 0;
                  if (bVar34) {
                    *(int *)(lVar10 + 0x10) = iVar25;
                    iVar17 = 0;
                  }
                  UNLOCK();
                  if (bVar34) {
                    iVar17 = iVar25;
                  }
                }
              }
              *(int *)((longlong)puVar30 + 0xc) = iVar17;
              puVar30[2] = *(ulonglong *)(lVar11 + 0x128);
              local_200 = puVar14;
              local_1f8 = uVar8;
              FUN_14116cfa4(&local_220,uVar29,&local_200,puVar1);
              ppuVar22 = local_288;
              ppuVar28 = local_258;
              ppuVar32 = local_250;
              goto LAB_14116ba1a;
            }
          }
          local_200 = local_118;
          if (local_118 == (uint *)0x0) {
            local_200 = &local_128;
          }
          local_1f8 = local_110;
          FUN_14116cfa4(&local_220,*puVar30,&local_200,puVar30 + 1);
          ppuVar32 = local_250;
        }
LAB_14116ba1a:
        uVar29 = local_280;
        iVar17 = (int)local_260;
        uVar8 = (uint)local_270;
        if (local_110 == 0) {
          FUN_140bbebf2(ppuVar22 + 0x1d,(ulonglong)((uint)local_280 << 5) + (longlong)ppuVar22[0x27]
                       );
          FUN_14116cb60(local_268,uVar29 & 0xffffffff);
        }
        uVar8 = uVar8 & ~(uint)uVar12;
        ppuVar21 = (uint **)ppuVar22[0x30];
        if ((uint **)ppuVar22[0x30] == (uint **)0x0) {
          ppuVar21 = ppuVar28;
        }
        iVar25 = *(int *)(ppuVar22 + 0x31);
        iVar26 = (int)uVar33;
        lVar11 = (longlong)iVar26;
        uVar27 = *(uint *)((longlong)ppuVar21 + lVar11 * 4) & uVar8;
        if (uVar27 == 0) {
          iVar18 = iVar25 + 0x1e;
          if (-1 < iVar25 + -1) {
            iVar18 = iVar25 + -1;
          }
          iVar18 = iVar18 >> 5;
          iVar19 = iVar18;
          if (iVar18 < iVar26) {
            iVar19 = iVar26;
          }
          if (iVar18 <= iVar26) break;
          lVar10 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar27 = ((uint *)((longlong)ppuVar21 + (lVar11 + 1) * 4))[lVar10];
            if (uVar27 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar19 - lVar11 == lVar10) goto LAB_14116bae7;
          }
          uVar33 = (ulonglong)(iVar26 + (int)lVar10 + 1);
          uVar8 = 0xffffffff;
        }
        uVar12 = (ulonglong)(-uVar27 & uVar27);
        uVar29 = uVar12 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar27 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while ((int)uVar27 < iVar25);
LAB_14116bae7:
      if (local_118 != (uint *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14116baf8:
  *(undefined4 *)(ppuVar22 + 0x31) = 0;
  if (0x80 < *(uint *)((longlong)ppuVar22 + 0x18c)) {
    *(undefined4 *)((longlong)ppuVar22 + 0x18c) = 0x80;
    FUN_1446efbd8(ppuVar28,0);
  }
  *(undefined4 *)(ppuVar22 + 0x35) = 0;
  if (0x80 < *(uint *)((longlong)ppuVar22 + 0x1ac)) {
    *(undefined4 *)((longlong)ppuVar22 + 0x1ac) = 0x80;
    FUN_1446efbd8(ppuVar22 + 0x32,0);
  }
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14116c58a FUN_14116c58a body=1362 status=ok
// SIG undefined FUN_14116c58a(void)

void FUN_14116c58a(longlong *param_1,longlong param_2,ulonglong param_3,short *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  longlong local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  int local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == param_4[3]) goto LAB_14116c5e8;
      plVar10 = plVar10 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_14116c5e8:
  iVar3 = *(int *)(param_2 + 0x14);
  local_68 = param_1;
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar13 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar13 + 0x1e) == param_4[2]) goto LAB_14116c624;
      plVar13 = plVar13 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar13 = (longlong *)0x0;
LAB_14116c624:
  local_b8 = *plVar10;
  local_a8 = *(int *)(param_2 + 0x14);
  if (local_a8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
  }
  LOCK();
  *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar14 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar14 + 0x1e) == param_4[1]) goto LAB_14116c670;
      plVar14 = plVar14 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar14 = (longlong *)0x0;
LAB_14116c670:
  local_70 = *plVar13;
  local_ac = *(int *)(param_2 + 0x14);
  if (local_ac == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar14 + 1));
  }
  LOCK();
  *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *param_4) goto LAB_14116c6cb;
      plVar12 = plVar12 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_14116c6cb:
  local_78 = *plVar14;
  local_b0 = *(int *)(param_2 + 0x14);
  local_a4 = iVar3;
  local_90 = param_3;
  if (local_b0 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  local_80 = (ulonglong)*(ushort *)(param_2 + 0xe);
  if (local_80 != 0) {
    local_88 = *plVar12;
    uVar7 = 0;
    do {
      FUN_14116cbd2(local_78 + uVar7 * 0x18,&local_60,
                    (ulonglong)*(ushort *)(local_88 + uVar7 * 4) * 0x128 +
                    *(longlong *)(*local_68 + 8));
      lVar4 = (longlong)local_58;
      if (lVar4 != 0) {
        lVar9 = uVar7 * 0x18 + local_70;
        lVar11 = 0;
        local_98 = local_60;
        do {
          uVar1 = *(ulonglong *)(local_98 + lVar11);
          if (((((uVar1 >> 0x20 != 0) && (uVar5 = (uint)uVar1, -1 < (int)uVar5)) &&
               ((int)uVar5 < DAT_14c9647dc)) &&
              ((plVar6 = (longlong *)
                         ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0xd & 0x3fff8))),
               plVar6 != (longlong *)0x0 && ((int)plVar6[2] == (int)(uVar1 >> 0x20))))) &&
             (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar2 = *plVar6, lVar2 != 0)))) {
            if (DAT_14cac9ca8 == 0) {
              local_d0 = &local_50;
              local_50 = FUN_141030f22;
              local_c0 = FUN_14081d0ea;
              local_c8 = FUN_14081d0ea;
              local_d8 = &LAB_1478c0a72;
              local_e0 = &LAB_1417b2375;
              local_e8 = L"Engine";
              local_f0 = 0x1000000000;
              local_f8 = 0x10000004;
              local_100 = 8;
              local_108 = 0x390;
              local_a0 = lVar11;
              FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
              lVar11 = local_a0;
            }
            if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
              lVar4 = FUN_14116cd9a(lVar9,lVar2);
              if (lVar4 == 0) {
                *(undefined4 *)(local_b8 + uVar7 * 8) = 0;
                iVar3 = 0;
              }
              else {
                uVar5 = *(uint *)(lVar4 + 0xc);
                *(uint *)(local_b8 + uVar7 * 8) = uVar5;
                if ((int)uVar5 < DAT_14c9647dc) {
                  lVar4 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
                }
                else {
                  lVar4 = 0;
                }
                iVar3 = *(int *)(lVar4 + 0x10);
                if (*(int *)(lVar4 + 0x10) == 0) {
                  LOCK();
                  iVar3 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar8 = DAT_14c964868 + 1;
                  bVar15 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar3;
                  if (bVar15) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar8);
                  }
                  LOCK();
                  iVar3 = *(int *)(lVar4 + 0x10);
                  bVar15 = iVar3 == 0;
                  if (bVar15) {
                    *(int *)(lVar4 + 0x10) = iVar8;
                    iVar3 = 0;
                  }
                  UNLOCK();
                  if (bVar15) {
                    iVar3 = iVar8;
                  }
                }
              }
              *(int *)(local_b8 + 4 + uVar7 * 8) = iVar3;
              break;
            }
          }
          lVar11 = lVar11 + 8;
        } while (lVar4 * 8 != lVar11);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != local_80);
  }
  if (plVar10 != (longlong *)0x0) {
    uVar7 = plVar10[2];
    if ((ulonglong)plVar10[2] < local_90) {
      uVar7 = local_90;
    }
    plVar10[2] = uVar7;
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (local_a4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 3) = (int)plVar13[3] + -1;
    UNLOCK();
    if (local_a8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar13 + 1));
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 3) = (int)plVar14[3] + -1;
    UNLOCK();
    if (local_ac == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar14 + 1));
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (local_b0 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14116cafa FUN_14116cafa body=101 status=ok
// SIG undefined FUN_14116cafa(void)

ushort FUN_14116cafa(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0xc);
        if (*puVar1 == param_2) {
          if (puVar1 == (ushort *)0x0) {
            return 0xffff;
          }
          if (puVar1 + 1 == (ushort *)0x0) {
            return 0xffff;
          }
          return puVar1[1];
        }
        iVar2 = *(int *)(puVar1 + 2);
      } while (iVar2 != -1);
    }
  }
  return 0xffff;
}



// FUNCTION 14116cb60 FUN_14116cb60 body=114 status=ok
// SIG undefined FUN_14116cb60(void)

void FUN_14116cb60(longlong *param_1,int param_2)

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



// FUNCTION 14116cbd2 FUN_14116cbd2 body=214 status=ok
// SIG undefined FUN_14116cbd2(void)

undefined8 * FUN_14116cbd2(int *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1[1] == 0 && *param_1 == 0) && param_1[2] == 0) && param_1[3] == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    local_28 = *(undefined8 *)(param_3 + 0x100);
    plVar3 = *(longlong **)(param_3 + 0x108);
    if (plVar3 == (longlong *)0x0) {
      local_20 = (longlong *)0x0;
      FUN_1410cbcd8(param_1,param_2,*(undefined4 *)(param_3 + 0x110));
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_20 = plVar3;
      FUN_1410cbcd8(param_1,param_2,*(undefined4 *)(param_3 + 0x110));
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14116ccac FUN_14116ccac body=237 status=ok
// SIG undefined FUN_14116ccac(void)

void FUN_14116ccac(longlong *param_1,ulonglong param_2,undefined4 *param_3,byte param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_2 >> 0x20 != 0) && (uVar5 = (uint)param_2, -1 < (int)uVar5)) &&
      ((int)uVar5 < DAT_14c9647dc)) &&
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0xd & 0x3fff8))),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == (int)(param_2 >> 0x20))) &&
      ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
    lVar3 = *plVar7;
    if (lVar3 != 0 && (~param_4 & 1) == 0) {
      lVar4 = *param_1;
      local_28 = param_3[4];
      local_38 = *param_3;
      uStack_34 = param_3[1];
      uStack_30 = param_3[2];
      uStack_2c = param_3[3];
      iVar2 = *(int *)(lVar4 + 0x1c8);
      *(uint *)(lVar4 + 0x1c8) = iVar2 + 1U;
      if (*(uint *)(lVar4 + 0x1cc) < iVar2 + 1U) {
        FUN_14767ab76((longlong *)(lVar4 + 0x1c0),iVar2);
      }
      lVar4 = *(longlong *)(lVar4 + 0x1c0);
      lVar6 = (longlong)iVar2 * 0x20;
      *(longlong *)(lVar4 + lVar6) = lVar3;
      puVar1 = (undefined4 *)(lVar4 + 8 + lVar6);
      *puVar1 = local_38;
      puVar1[1] = uStack_34;
      puVar1[2] = uStack_30;
      puVar1[3] = uStack_2c;
      *(undefined4 *)(lVar4 + 0x18 + lVar6) = local_28;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14116cd9a FUN_14116cd9a body=520 status=ok
// SIG undefined FUN_14116cd9a(void)

longlong * FUN_14116cd9a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_128 [32];
  undefined1 local_108 [192];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      local_48 = (undefined1 *)0x0;
      local_40 = 0x1800000000;
      if (param_2 != (longlong *)0x0) {
        FUN_140a44582(param_2,local_108,0);
        puVar5 = local_108;
        if (local_48 != (undefined1 *)0x0) {
          puVar5 = local_48;
        }
        if ((longlong)(int)local_40 == 0) goto LAB_14116ced6;
        lVar6 = param_1[1];
        lVar4 = 0;
        do {
          plVar3 = *(longlong **)(puVar5 + lVar4);
          lVar1 = plVar3[3];
          if (lVar1 == lVar6) break;
          bVar7 = (longlong)(int)local_40 * 8 + -8 != lVar4;
          lVar4 = lVar4 + 8;
        } while (bVar7);
        if (local_48 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (lVar1 == lVar6) goto LAB_14116ce6c;
      }
    }
LAB_14116ce9f:
    lVar6 = (**(code **)(*param_2 + 0x3a8))(param_2);
    if (lVar6 != 0) {
      plVar3 = (longlong *)(**(code **)(*param_2 + 0x3a8))(param_2);
      goto LAB_14116ce6c;
    }
  }
  else {
    if (param_1[1] != 0) {
      local_48 = (undefined1 *)0x0;
      local_40 = 0x1800000000;
      if (param_2 != (longlong *)0x0) {
        FUN_140a44582(param_2,local_108,0);
        lVar6 = (longlong)(int)local_40;
        puVar5 = local_108;
        if (local_48 != (undefined1 *)0x0) {
          puVar5 = local_48;
        }
        if (lVar6 != 0) {
          lVar4 = 0;
          do {
            plVar3 = *(longlong **)(puVar5 + lVar4);
            if ((plVar3[3] == param_1[1]) &&
               (cVar2 = (**(code **)(*plVar3 + 0x4c8))(plVar3,*param_1), cVar2 != '\0')) {
              if (local_48 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_14116ce6c;
            }
            lVar4 = lVar4 + 8;
          } while (lVar6 * 8 != lVar4);
        }
LAB_14116ced6:
        if (local_48 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      goto LAB_14116ce9f;
    }
    cVar2 = (**(code **)(*(longlong *)param_2[0x39] + 0x4c8))();
    if (cVar2 == '\0') goto LAB_14116ce9f;
  }
  plVar3 = (longlong *)param_2[0x39];
LAB_14116ce6c:
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 14116cfa4 FUN_14116cfa4 body=1131 status=ok
// SIG undefined FUN_14116cfa4(void)

void FUN_14116cfa4(longlong param_1,ulonglong param_2,undefined8 *param_3,longlong param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint *puVar13;
  longlong lVar14;
  ushort *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  uint local_6c;
  ushort *local_68;
  ushort *local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = param_4;
  if (((((param_2 >> 0x20 != 0) && (uVar9 = (uint)param_2, -1 < (int)uVar9)) &&
       ((int)uVar9 < DAT_14c9647dc)) &&
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0xd & 0x3fff8))),
       plVar8 != (longlong *)0x0 && ((int)plVar8[2] == (int)(param_2 >> 0x20))))) &&
     (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar5 = *plVar8, lVar5 != 0)))) {
    if (DAT_14cac7648 == 0) {
      local_90 = &local_50;
      local_50 = FUN_144a7958c;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_143242436;
      local_98 = &LAB_14789ef1f;
      local_a0 = &LAB_1417b008f;
      local_a8 = L"Engine";
      local_b0 = 0x8000000000;
      local_b8 = 0x10000004;
      local_c0 = 0x10;
      local_c8 = 0x2b0;
      FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
    }
    if (((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) &&
       ((longlong)*(int *)(param_3 + 1) != 0)) {
      puVar15 = (ushort *)*param_3;
      local_68 = puVar15 + *(int *)(param_3 + 1);
      do {
        uVar16 = (ulonglong)*puVar15;
        lVar11 = *(longlong *)(param_1 + 8);
        lVar7 = *(longlong *)(param_1 + 0x10);
        uVar2 = *(ushort *)(lVar11 + 0xda);
        local_60 = puVar15;
        if (uVar2 != 0xffff) {
          uVar10 = (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x98) + uVar16 * 8);
          if (uVar10 != 0xffff) {
            uVar9 = *(uint *)(*(longlong *)(lVar7 + 8) + 0x20 + uVar10 * 0x28);
            if ((uVar9 != uVar2 && (int)(uint)uVar2 <= (int)uVar9) &&
               ((*(uint *)(*(longlong *)(lVar7 + 8) + uVar10 * 0x28 + (ulonglong)(uVar2 >> 5) * 4)
                 >> (uVar2 & 0x1f) & 1) != 0)) {
              lVar14 = *(longlong *)(*(longlong *)(lVar7 + 0x60) + uVar10 * 8);
              cVar1 = *(char *)(lVar7 + 0x270);
              uVar3 = *(ushort *)(lVar14 + 0xc);
              if (uVar3 != 0) {
                uVar4 = *(ushort *)(*(longlong *)(lVar7 + 0x98) + 2 + uVar16 * 8);
                plVar8 = *(longlong **)(lVar14 + 0x28);
                lVar14 = (ulonglong)uVar3 << 5;
                do {
                  if (*(ushort *)((longlong)plVar8 + 0x1e) == uVar2) {
                    if (plVar8 == (longlong *)0x0) goto LAB_14116d3c4;
                    if (cVar1 != '\0') {
                      AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
                    }
                    LOCK();
                    *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
                    UNLOCK();
                    puVar13 = (uint *)((ulonglong)uVar4 * 8 + *plVar8);
                    lVar11 = *(longlong *)(param_1 + 8);
                    lVar7 = *(longlong *)(param_1 + 0x10);
                    local_6c = (uint)(cVar1 != '\0');
                    goto LAB_14116d171;
                  }
                  plVar8 = plVar8 + 4;
                  lVar14 = lVar14 + -0x20;
                } while (lVar14 != 0);
              }
            }
          }
        }
        local_6c = 0;
LAB_14116d3c4:
        plVar8 = (longlong *)0x0;
        puVar13 = (uint *)0x0;
LAB_14116d171:
        uVar2 = *(ushort *)(lVar11 + 0xdc);
        bVar6 = true;
        if (uVar2 != 0xffff) {
          uVar10 = (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x98) + uVar16 * 8);
          if (uVar10 != 0xffff) {
            uVar9 = *(uint *)(*(longlong *)(lVar7 + 8) + 0x20 + uVar10 * 0x28);
            if ((uVar9 != uVar2 && (int)(uint)uVar2 <= (int)uVar9) &&
               ((*(uint *)(*(longlong *)(lVar7 + 8) + uVar10 * 0x28 + (ulonglong)(uVar2 >> 5) * 4)
                 >> (uVar2 & 0x1f) & 1) != 0)) {
              lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0x60) + uVar10 * 8);
              uVar3 = *(ushort *)(lVar11 + 0xc);
              if (uVar3 != 0) {
                uVar4 = *(ushort *)(*(longlong *)(lVar7 + 0x98) + 2 + uVar16 * 8);
                cVar1 = *(char *)(lVar7 + 0x270);
                plVar17 = *(longlong **)(lVar11 + 0x28);
                lVar11 = (ulonglong)uVar3 << 5;
                do {
                  if (*(ushort *)((longlong)plVar17 + 0x1e) == uVar2) {
                    if (plVar17 != (longlong *)0x0) {
                      if (cVar1 != '\0') {
                        AcquireSRWLockShared((PSRWLOCK)(plVar17 + 1));
                      }
                      LOCK();
                      *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
                      UNLOCK();
                      bVar6 = true;
                      if (((((puVar13 != (uint *)0x0) &&
                            (lVar11 = (ulonglong)((uint)uVar4 * 0x18) + *plVar17, lVar11 != 0)) &&
                           (puVar13[1] != 0)) &&
                          (((uVar9 = *puVar13, -1 < (int)uVar9 && ((int)uVar9 < DAT_14c9647dc)) &&
                           ((plVar12 = (longlong *)
                                       ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)
                                       ), plVar12 != (longlong *)0x0 &&
                            ((*(uint *)(plVar12 + 2) == puVar13[1] &&
                             ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))))))) && (*plVar12 != 0))
                      {
                        *(undefined1 *)(local_58 + 0x12) = *(undefined1 *)(lVar11 + 0x15);
                        *(undefined2 *)(local_58 + 0x10) = *(undefined2 *)(lVar11 + 0x13);
                        FUN_14116d410(lVar11 + 0x10,lVar5);
                        bVar6 = false;
                      }
                      LOCK();
                      *(int *)(plVar17 + 3) = (int)plVar17[3] + -1;
                      UNLOCK();
                      if (cVar1 != '\0') {
                        ReleaseSRWLockShared((PSRWLOCK)(plVar17 + 1));
                      }
                    }
                    break;
                  }
                  plVar17 = plVar17 + 4;
                  lVar11 = lVar11 + -0x20;
                } while (lVar11 != 0);
              }
            }
          }
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
          UNLOCK();
          if (local_6c == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar8 + 1));
          }
        }
      } while ((bVar6) && (puVar15 = local_60 + 1, puVar15 != local_68));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14116d410 FUN_14116d410 body=223 status=ok
// SIG undefined FUN_14116d410(void)

void FUN_14116d410(undefined2 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auStack_78 [44];
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)param_2[0x24];
  if ((plVar1 != param_3) || (param_2[0x25] != *param_4)) {
    FUN_14116d4f0(&local_48,param_2);
    local_4a = *(undefined1 *)(param_1 + 1);
    local_4c = *param_1;
    local_49 = 0;
    (**(code **)(*param_2 + 0x490))(param_2,param_3,&local_4c,*param_4);
    FUN_14116d584(&local_48);
    plVar1 = (longlong *)param_2[0x24];
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4e0))(plVar1,&local_48);
    param_2[0x3e] = local_38;
    *(undefined4 *)(param_2 + 0x3c) = local_48;
    *(undefined4 *)((longlong)param_2 + 0x1e4) = uStack_44;
    *(undefined4 *)(param_2 + 0x3d) = uStack_40;
    *(undefined4 *)((longlong)param_2 + 0x1ec) = uStack_3c;
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14116d4f0 FUN_14116d4f0 body=148 status=ok
// SIG undefined FUN_14116d4f0(void)

undefined8 * FUN_14116d4f0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a484d30;
  param_1[1] = param_2;
  if (param_2 == 0) {
    return param_1;
  }
  plVar3 = param_1 + 1;
LAB_14116d511:
  lVar2 = param_2;
  lVar1 = lVar2;
  if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x00014116d520;
  goto LAB_14116d52b;
code_r0x00014116d520:
  param_2 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) {
    lVar1 = FUN_142840154(lVar2);
LAB_14116d52b:
    if (lVar1 != 0) {
      do {
        lVar1 = *plVar3;
        do {
          lVar2 = lVar1;
          lVar1 = lVar2;
          if (*(longlong *)(lVar2 + 0x20) == 0) goto LAB_14116d54e;
          lVar1 = *(longlong *)(lVar2 + 0x20);
        } while ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0);
        lVar1 = FUN_142840154(lVar2);
LAB_14116d54e:
        plVar3 = (longlong *)(lVar2 + 0x20);
        if (lVar1 != 0) {
          *(byte *)(param_1 + 2) = *(byte *)(lVar1 + 0x28) & 1;
          return param_1;
        }
      } while( true );
    }
    param_2 = *(longlong *)(lVar2 + 0x20);
  }
  goto LAB_14116d511;
}



// FUNCTION 14116d584 FUN_14116d584 body=152 status=ok
// SIG undefined FUN_14116d584(void)

void FUN_14116d584(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a484d30;
  if (param_1[1] == 0) {
    return;
  }
  plVar3 = param_1 + 1;
  lVar2 = param_1[1];
LAB_14116d5a5:
  lVar1 = lVar2;
  lVar2 = lVar1;
  if (*(longlong *)(lVar1 + 0x20) != 0) goto code_r0x00014116d5b4;
  goto LAB_14116d5bf;
code_r0x00014116d5b4:
  lVar2 = *(longlong *)(lVar1 + 0x20);
  if ((*(uint *)(lVar1 + 8) >> 0x1c & 1) != 0) {
    lVar2 = FUN_142840154(lVar1);
LAB_14116d5bf:
    if (lVar2 != 0) {
      do {
        lVar2 = *plVar3;
        do {
          lVar1 = lVar2;
          lVar2 = lVar1;
          if (*(longlong *)(lVar1 + 0x20) == 0) goto LAB_14116d5e2;
          lVar2 = *(longlong *)(lVar1 + 0x20);
        } while ((*(uint *)(lVar1 + 8) >> 0x1c & 1) == 0);
        lVar2 = FUN_142840154();
LAB_14116d5e2:
        plVar3 = (longlong *)(lVar1 + 0x20);
        if (lVar2 != 0) {
          FUN_14116d61c(lVar2,*(undefined1 *)(param_1 + 2));
          return;
        }
      } while( true );
    }
    lVar2 = *(longlong *)(lVar1 + 0x20);
  }
  goto LAB_14116d5a5;
}



// FUNCTION 14116d61c FUN_14116d61c body=115 status=ok
// SIG undefined FUN_14116d61c(void)

void FUN_14116d61c(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != param_2) {
    lVar1 = FUN_144a79778();
    lVar2 = FUN_1409ffe1d();
    if (lVar1 != lVar2) {
      if (DAT_14c868730 != (longlong *)0x0) {
        lVar1 = FUN_144a79778(param_1);
        if ((*(uint *)(lVar1 + 0x2c) & 0x300010) == 0) {
          FUN_144757f48(param_1,8);
          (**(code **)(*DAT_14c868730 + 0x40))(DAT_14c868730,param_1);
        }
      }
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe | param_2;
    }
  }
  return;
}



// FUNCTION 14116d690 FUN_14116d690 body=2009 status=ok
// SIG undefined FUN_14116d690(void)

uint FUN_14116d690(longlong param_1,ushort param_2,ushort *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined1 auStack_98 [37];
  char local_73;
  ushort local_72;
  longlong *local_70;
  ushort local_64;
  ushort local_62;
  ushort *local_60;
  ushort *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_73 = param_4;
  local_64 = param_2;
  uVar7 = FUN_14116cafa();
  plVar1 = (longlong *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    uVar21 = *(uint *)(param_3 + 2);
    uVar13 = uVar21 >> 0xd ^ *(int *)param_3 - uVar21;
    uVar17 = uVar13 << 8 ^ (-0x61c88647 - uVar21) - uVar13;
    uVar18 = uVar17 >> 0xd ^ (uVar21 - uVar13) - uVar17;
    uVar19 = uVar18 >> 0xc ^ (uVar13 - uVar17) - uVar18;
    uVar13 = uVar19 << 0x10 ^ (uVar17 - uVar18) - uVar19;
    uVar17 = uVar13 >> 5 ^ (uVar18 - uVar19) - uVar13;
    uVar18 = uVar17 >> 3 ^ (uVar19 - uVar13) - uVar17;
    uVar13 = uVar18 << 10 ^ (uVar13 - uVar17) - uVar18;
    lVar10 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar10 = *(longlong *)(param_1 + 0xe0);
    }
    iVar16 = *(int *)(lVar10 + (ulonglong)
                               (*(int *)(param_1 + 0xe8) - 1U &
                               (uVar13 >> 0xf ^ uVar17 - (uVar18 + uVar13))) * 4);
    if (iVar16 != -1) {
      do {
        piVar2 = (int *)(*plVar1 + (longlong)iVar16 * 0x14);
        if ((*piVar2 == *(int *)param_3) &&
           (*(uint *)(*plVar1 + 4 + (longlong)iVar16 * 0x14) == uVar21)) {
          if ((piVar2 != (int *)0x0) &&
             (((ushort *)(piVar2 + 2) != (ushort *)0x0 &&
              (uVar6 = *(ushort *)(piVar2 + 2), uVar6 != 0xffff)))) goto LAB_14116d96f;
          break;
        }
        iVar16 = piVar2[3];
      } while (iVar16 != -1);
    }
  }
  uVar5 = *(undefined8 *)param_3;
  local_72 = (ushort)uVar7;
  local_70 = plVar1;
  if (*(int *)(param_1 + 0x124) == 0) {
    uVar7 = *(uint *)(param_1 + 0xf8);
    *(uint *)(param_1 + 0xf8) = uVar7 + 1;
    if (*(uint *)(param_1 + 0xfc) == uVar7) {
      FUN_1405b363e(param_1 + 0xf0,uVar7);
    }
    iVar16 = *(int *)(param_1 + 0x118);
    if (iVar16 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar8 = iVar16 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    lVar14 = param_1 + 0x100;
    iVar15 = iVar16 + 1;
    iVar20 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar20 = iVar16;
    }
    if (iVar20 >> 5 == iVar8) {
      *(int *)(param_1 + 0x118) = iVar15;
    }
    else {
      if (*(int *)(param_1 + 0x11c) <= iVar16) {
        if (iVar16 + 0x20U < 0xa0) {
          iVar15 = 0x80;
          iVar8 = iVar16;
        }
        else {
          uVar21 = iVar16 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x11c) + 0x1fU < 0xa0) {
            uVar13 = 4;
            if (4 < uVar21) {
              uVar13 = uVar21;
            }
          }
          else {
            uVar13 = (uVar21 * 3 >> 3) + uVar21 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar13 << 2,0);
          iVar8 = (int)(uVar11 >> 2);
          iVar15 = -0x20;
          if ((int)uVar21 <= iVar8) {
            iVar15 = iVar8 << 5;
          }
          iVar8 = *(int *)(param_1 + 0x118);
        }
        *(int *)(param_1 + 0x11c) = iVar15;
        FUN_1446efbd8(lVar14,iVar8);
        iVar15 = *(int *)(param_1 + 0x118) + 1;
      }
      iVar8 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar8 = iVar15;
      }
      *(int *)(param_1 + 0x118) = iVar15;
      if (iVar15 % 0x20 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          lVar10 = lVar14;
        }
        bVar12 = -(char)(iVar15 % 0x20);
        *(uint *)(lVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)(lVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar10 = (longlong)(int)uVar7;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x110);
    }
    bVar12 = (byte)iVar16 & 0x1f;
    puVar3 = (uint *)(lVar14 + (longlong)(iVar20 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x120);
    lVar10 = (longlong)(int)uVar7;
    iVar16 = *(int *)(*(longlong *)(param_1 + 0xf0) + 4 + lVar10 * 0x20);
    *(int *)(param_1 + 0x120) = iVar16;
    iVar8 = *(int *)(param_1 + 0x124) + -1;
    *(int *)(param_1 + 0x124) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar16 * 0x20) = 0xffffffff;
    }
  }
  uVar21 = 1 << ((byte)uVar7 & 0x1f);
  lVar14 = param_1 + 0x100;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar14 = *(longlong *)(param_1 + 0x110);
  }
  uVar13 = uVar7 + 0x1f;
  if (-1 < (int)uVar7) {
    uVar13 = uVar7;
  }
  puVar3 = (uint *)(lVar14 + (longlong)((int)uVar13 >> 5) * 4);
  *puVar3 = *puVar3 | uVar21;
  lVar14 = *(longlong *)(param_1 + 0xf0);
  lVar10 = lVar10 * 0x20;
  *(undefined8 *)(lVar14 + lVar10) = uVar5;
  *(undefined1 *)(lVar14 + 0x1c + lVar10) = 0;
  puVar4 = (undefined8 *)(lVar14 + 8 + lVar10);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(lVar14 + 0x17 + lVar10) = 0;
  local_62 = (ushort)uVar7;
  lVar10 = param_1 + 0x148;
  uVar13 = uVar7 & 0xffff;
  iVar16 = uVar13 + 1;
  iVar8 = *(int *)(param_1 + 0x160);
  iVar15 = iVar16 - iVar8;
  if (0 < iVar15) {
    if (iVar8 == 0) {
LAB_14116da8e:
      if (*(int *)(param_1 + 0x164) <= (int)uVar13) {
        if (uVar13 < 0x80) {
          iVar20 = 0x80;
          iVar16 = iVar8;
        }
        else {
          uVar13 = uVar13 + 0x20 >> 5;
          if (*(int *)(param_1 + 0x164) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar13) {
              uVar17 = uVar13;
            }
          }
          else {
            uVar17 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar17 << 2,0);
          iVar16 = (int)(uVar11 >> 2);
          iVar20 = -0x20;
          if ((int)uVar13 <= iVar16) {
            iVar20 = iVar16 << 5;
          }
          iVar16 = *(int *)(param_1 + 0x160);
        }
        *(int *)(param_1 + 0x164) = iVar20;
        FUN_1446efbd8(lVar10,iVar16);
        iVar16 = *(int *)(param_1 + 0x160) + iVar15;
      }
      iVar20 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar20 = iVar16;
      }
      *(int *)(param_1 + 0x160) = iVar16;
      if (iVar16 % 0x20 != 0) {
        lVar14 = *(longlong *)(param_1 + 0x158);
        if (*(longlong *)(param_1 + 0x158) == 0) {
          lVar14 = lVar10;
        }
        bVar12 = -(char)(iVar16 % 0x20);
        *(uint *)(lVar14 + (longlong)(iVar20 >> 5) * 4) =
             (uint)(*(int *)(lVar14 + (longlong)(iVar20 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    else {
      iVar20 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar20 = iVar8 + -1;
      }
      if (uVar13 >> 5 != iVar20 >> 5) goto LAB_14116da8e;
      *(int *)(param_1 + 0x160) = iVar16;
    }
    FUN_1447c6044(lVar10,iVar8,iVar15,0);
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x158);
  }
  puVar3 = (uint *)(lVar10 + (ulonglong)(uVar7 >> 3 & 0x1ffc));
  *puVar3 = *puVar3 | uVar21;
  local_58 = &local_62;
  local_60 = param_3;
  FUN_140bbfc70(local_70,local_4c);
  uVar7 = (uint)local_72;
  uVar6 = local_62;
LAB_14116d96f:
  local_62 = uVar6;
  if ((ushort)uVar7 == uVar6) {
    if (local_73 != '\0') {
      lVar10 = param_1 + 0x128;
      iVar16 = ((uint)uVar6 - *(int *)(param_1 + 0x140)) + 1;
      if (0 < iVar16) {
        uVar9 = FUN_144a54ea4(lVar10,iVar16);
        FUN_1447c6044(lVar10,uVar9,iVar16,0);
      }
      if (*(longlong *)(param_1 + 0x138) != 0) {
        lVar10 = *(longlong *)(param_1 + 0x138);
      }
      puVar3 = (uint *)(lVar10 + (ulonglong)(uVar6 >> 5) * 4);
      *puVar3 = *puVar3 | 1 << ((byte)uVar6 & 0x1f);
    }
    goto LAB_14116da52;
  }
  if ((ushort)uVar7 != 0xffff) {
    uVar21 = uVar7 & 0xffff;
    lVar10 = param_1 + 0x128;
    iVar16 = (uVar21 - *(int *)(param_1 + 0x140)) + 1;
    if (0 < iVar16) {
      uVar9 = FUN_144a54ea4(lVar10,iVar16);
      FUN_1447c6044(lVar10,uVar9,iVar16,0);
    }
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x138);
    }
    puVar3 = (uint *)(lVar10 + (ulonglong)(uVar21 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar21 & 0x1f);
    FUN_14086b58e(param_1 + 0x50,uVar7,&local_64);
    FUN_140bbeb1c(param_1,&local_64);
  }
  lVar10 = param_1 + 0x128;
  iVar8 = uVar6 + 1;
  iVar16 = *(int *)(param_1 + 0x140);
  iVar15 = iVar8 - iVar16;
  if (0 < iVar15) {
    if (iVar16 == 0) {
LAB_14116dadf:
      if (*(int *)(param_1 + 0x144) <= (int)(uint)uVar6) {
        if (uVar6 < 0x80) {
          iVar20 = 0x80;
          iVar8 = iVar16;
        }
        else {
          uVar7 = uVar6 + 0x20 >> 5;
          if (*(int *)(param_1 + 0x144) + 0x1fU < 0xa0) {
            uVar21 = 4;
            if (4 < uVar7) {
              uVar21 = uVar7;
            }
          }
          else {
            uVar21 = (uVar7 * 3 >> 3) + uVar7 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar21 << 2,0);
          iVar8 = (int)(uVar11 >> 2);
          iVar20 = -0x20;
          if ((int)uVar7 <= iVar8) {
            iVar20 = iVar8 << 5;
          }
          iVar8 = *(int *)(param_1 + 0x140);
        }
        *(int *)(param_1 + 0x144) = iVar20;
        FUN_1446efbd8(lVar10,iVar8);
        iVar8 = *(int *)(param_1 + 0x140) + iVar15;
      }
      iVar20 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar20 = iVar8;
      }
      *(int *)(param_1 + 0x140) = iVar8;
      if (iVar8 % 0x20 != 0) {
        lVar14 = *(longlong *)(param_1 + 0x138);
        if (*(longlong *)(param_1 + 0x138) == 0) {
          lVar14 = lVar10;
        }
        bVar12 = -(char)(iVar8 % 0x20);
        *(uint *)(lVar14 + (longlong)(iVar20 >> 5) * 4) =
             (uint)(*(int *)(lVar14 + (longlong)(iVar20 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    else {
      iVar20 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar20 = iVar16 + -1;
      }
      if ((uint)(uVar6 >> 5) != iVar20 >> 5) goto LAB_14116dadf;
      *(int *)(param_1 + 0x140) = iVar8;
    }
    FUN_1447c6044(lVar10,iVar16,iVar15,0);
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x138);
  }
  puVar3 = (uint *)(lVar10 + (ulonglong)(uVar6 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)uVar6 & 0x1f);
  local_60 = &local_64;
  local_58 = &local_62;
  FUN_140bbf6f4(param_1,local_4c,&local_60,0);
  local_60 = &local_62;
  local_58 = &local_64;
  FUN_140bbf5de(param_1 + 0x50,local_4c,&local_60,0);
  uVar7 = (uint)local_62;
LAB_14116da52:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14116de6a FUN_14116de6a body=286 status=ok
// SIG undefined FUN_14116de6a(void)

undefined8 FUN_14116de6a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14116df82;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14116df82;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14116df82:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14116df2f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_14116df2f;
    }
  }
  uVar6 = 0;
LAB_14116df2f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14116df8a FUN_14116df8a body=1157 status=ok
// SIG undefined FUN_14116df8a(void)

void FUN_14116df8a(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_98 [36];
  int local_74;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_2 == 0) goto LAB_14116e259;
  FUN_1449027d0();
  lVar2 = *(longlong *)(local_58 + 0x410);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x1b0));
  *(int *)(lVar2 + 0x1a8) = *(int *)(lVar2 + 0x1a8) + 1;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar8 = (int *)((longlong)local_50 + 0xc);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if (*(int *)((longlong)param_2 + 0xc) == 0) {
LAB_14116e2a2:
    uVar9 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 1);
    uVar9 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(int *)(puVar10 + 2) != *(int *)((longlong)param_2 + 0xc) ||
          ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_14116e2a2;
      uVar9 = *puVar10;
    }
  }
  lVar5 = FUN_14116e62e(uVar9);
  if (lVar5 == 0) {
    local_60 = 0;
  }
  else {
    puVar17 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
      puVar17 = *(undefined4 **)(lVar5 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,&local_60,puVar17,1);
  }
  uVar1 = (uint)((ulonglong)local_60 >> 0x10);
  uVar15 = (uint)local_60 & 0xffff;
  local_58 = local_60;
  plVar6 = (longlong *)
           FUN_14116e570(lVar2,((uint)local_60 << 0x10 | uVar15) +
                               (int)((ulonglong)local_60 >> 0x20) + (uVar1 << 0x13 | uVar1 & 0xffff)
                               + (uVar15 >> 4));
  if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
    iVar4 = (int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2;
    plVar11 = plVar6 + 7;
    if ((longlong *)plVar6[8] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar6[8];
    }
    iVar13 = *(int *)((longlong)plVar11 + ((longlong)iVar4 & (longlong)(int)plVar6[9] - 1U) * 4);
    if (iVar13 != -1) {
      lVar5 = *plVar6;
LAB_14116e120:
      lVar14 = (longlong)iVar13 * 0x160;
      lVar7 = lVar5 + lVar14;
      if (*(int *)(lVar5 + lVar14) != iVar4) goto code_r0x00014116e134;
      iVar4 = *(int *)((longlong)plVar11 + (longlong)*(int *)(lVar7 + 0x15c) * 4);
      if (iVar4 == iVar13) {
        piVar8 = (int *)((longlong)plVar11 + (longlong)*(int *)(lVar7 + 0x15c) * 4);
      }
      else {
        do {
          piVar8 = (int *)((longlong)iVar4 * 0x160 + lVar5 + 0x158);
          iVar4 = *piVar8;
        } while (iVar4 != iVar13);
      }
      *piVar8 = *(int *)(lVar7 + 0x158);
      FUN_14116e718(*plVar6 + lVar14 + 8);
      FUN_14116e410(plVar6,iVar13);
    }
  }
LAB_14116e17d:
  if ((((*(int *)((longlong)param_2 + 0xc) == 0) || (uVar1 = *(uint *)(param_2 + 1), (int)uVar1 < 0)
       ) || (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)((longlong)param_2 + 0xc))) ||
      (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))))) {
LAB_14116e1e4:
    *(undefined1 *)(lVar2 + 0x118) = 1;
  }
  else {
    lVar7 = FUN_14116e48a();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) goto LAB_14116e1e4;
  }
  if (*(int *)((longlong)param_2 + 0xc) == 0) {
LAB_14116e2a9:
    lVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 1);
    lVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != *(int *)((longlong)param_2 + 0xc) ||
          ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_14116e2a9;
      lVar5 = *plVar6;
    }
  }
  if (((*(char *)(lVar5 + 0x60) == '\x01') && (*(longlong *)(lVar5 + 0x50) != 0)) &&
     (*(char *)(*(longlong *)(lVar5 + 0x50) + 0xe5) == '\x01')) {
    iVar4 = *(int *)(lVar2 + 0x198);
    lVar5 = (longlong)iVar4;
    if (lVar5 != 0) {
      local_70 = *param_2;
      plVar6 = *(longlong **)(lVar2 + 400);
      local_68 = plVar6 + 0xc;
      local_74 = 0;
      bVar16 = *plVar6 == local_70;
      iVar13 = 0;
      do {
        lVar7 = (longlong)iVar13;
        iVar12 = iVar13 + 1;
        if (iVar13 + 1 < iVar4) {
          iVar12 = iVar4;
        }
        plVar11 = local_68 + lVar7 * 0xc;
        iVar19 = iVar13;
        lVar14 = lVar7;
        do {
          lVar14 = lVar14 + 1;
          iVar18 = iVar12;
          if (lVar5 <= lVar14) break;
          lVar3 = *plVar11;
          iVar19 = iVar19 + 1;
          plVar11 = plVar11 + 0xc;
          iVar18 = iVar19;
        } while (bVar16 == (lVar3 == local_70));
        iVar12 = iVar18 - iVar13;
        if (bVar16 == false) {
          if (local_74 != iVar13) {
            memmove(plVar6 + (longlong)local_74 * 0xc,plVar6 + lVar7 * 0xc,(longlong)iVar12 * 0x60);
          }
          local_74 = local_74 + iVar12;
        }
        else {
          FUN_14580f9f9(plVar6 + lVar7 * 0xc,iVar12);
        }
        bVar16 = (bool)(bVar16 ^ 1);
        iVar13 = iVar18;
      } while (lVar14 < lVar5);
      *(int *)(lVar2 + 0x198) = local_74;
      if (local_74 < iVar4) {
        *(int *)(lVar2 + 0x1a0) = *(int *)(lVar2 + 0x1a0) + 1;
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x1b0));
LAB_14116e259:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014116e134:
  iVar13 = *(int *)(lVar7 + 0x158);
  if (iVar13 == -1) goto LAB_14116e17d;
  goto LAB_14116e120;
}



// FUNCTION 14116e410 FUN_14116e410 body=122 status=ok
// SIG undefined FUN_14116e410(void)

void FUN_14116e410(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x160) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x160) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x160 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14116e48a FUN_14116e48a body=228 status=ok
// SIG undefined FUN_14116e48a(void)

longlong FUN_14116e48a(void)

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
  if (DAT_14cb5d290 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145885dac;
    local_38 = &LAB_1486962c9;
    local_40 = FUN_1464da938;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryProviderObject_CustomWaypoint",&DAT_14cb5d290,
                  &DAT_1486962c8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d290;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14116e570 FUN_14116e570 body=188 status=ok
// SIG undefined FUN_14116e570(void)

longlong FUN_14116e570(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_14116e60f;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14581dbb4(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_14116e60f:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14116e62e FUN_14116e62e body=232 status=ok
// SIG undefined FUN_14116e62e(void)

undefined8 FUN_14116e62e(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    uVar1 = *(uint *)(param_1 + 5);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14116e6eb;
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar2 != (longlong *)0x0) &&
       (((int)plVar2[2] == *(int *)((longlong)param_1 + 0x2c) &&
        ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar2;
      }
      else {
        lVar4 = 0;
      }
      (**(code **)(*param_1 + 0x2b0))(param_1,local_98);
      local_38 = local_78;
      uStack_30 = uStack_70;
      local_28 = local_68;
      if (*(longlong *)(lVar4 + 0x30) != 0) {
        uVar3 = FUN_14027a618(*(longlong *)(lVar4 + 0x30),&local_38);
        goto LAB_14116e6eb;
      }
    }
  }
  uVar3 = 0;
LAB_14116e6eb:
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14116e718 FUN_14116e718 body=299 status=ok
// SIG undefined FUN_14116e718(void)

void FUN_14116e718(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118));
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x100) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x100) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))();
  }
  if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x10))();
  }
  FUN_1407dde2a(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_14116e843(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_14116e870(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14116e843 FUN_14116e843 body=45 status=ok
// SIG undefined FUN_14116e843(void)

void FUN_14116e843(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14116e870 FUN_14116e870 body=75 status=ok
// SIG undefined FUN_14116e870(void)

void FUN_14116e870(longlong param_1,int param_2)

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



// FUNCTION 14116e8bc FUN_14116e8bc body=11528 status=ok
// SIG undefined FUN_14116e8bc(void)

void FUN_14116e8bc(longlong param_1,longlong *param_2)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  uint *puVar2;
  void *pvVar3;
  void *_Dst;
  ushort uVar4;
  double dVar5;
  undefined4 uVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  uint uVar28;
  undefined8 unaff_RBP;
  undefined7 uVar29;
  undefined4 *puVar30;
  ulonglong uVar31;
  code *pcVar32;
  int iVar33;
  longlong *plVar34;
  longlong lVar35;
  undefined4 uVar36;
  double dVar37;
  double dVar38;
  float fVar39;
  undefined1 auStack_448 [32];
  undefined8 *local_428;
  undefined4 local_420;
  undefined4 local_418;
  undefined8 local_410;
  wchar_t *local_408;
  code *local_400;
  undefined1 *local_3f8;
  code **local_3f0;
  undefined1 *local_3e8;
  code *local_3e0;
  longlong local_3d0;
  longlong local_3c8;
  ulonglong local_3c0;
  PSRWLOCK local_3b8;
  undefined1 local_3ac [12];
  undefined8 local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  void *local_388;
  int local_380;
  undefined4 local_37c;
  undefined8 local_378;
  longlong *plStack_370;
  longlong local_368 [3];
  undefined8 local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  void *local_338;
  int local_330;
  undefined4 local_32c;
  longlong local_328;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined4 local_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 local_2fc;
  undefined1 local_2f8;
  longlong local_2f4;
  longlong local_2e8;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined1 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined7 uStack_2b0;
  undefined1 uStack_2a9;
  undefined4 uStack_2a8;
  undefined1 uStack_2a4;
  char cStack_2a3;
  undefined1 uStack_2a2;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  longlong local_288;
  undefined8 uStack_280;
  code *local_278;
  undefined4 local_270;
  code *local_26c;
  undefined4 local_264;
  longlong *local_260;
  undefined4 local_258;
  longlong *local_250;
  undefined4 local_248;
  undefined1 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  longlong *local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined8 uStack_1e7;
  undefined4 local_1dc;
  code *local_1d8;
  longlong *plStack_1d0;
  ulonglong uStack_1c8;
  longlong local_1c0;
  undefined8 uStack_1b8;
  longlong local_1a0;
  longlong local_190;
  double local_100;
  double local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  uint uStack_dc;
  char local_d8;
  double local_d0;
  double local_c8;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  uint uStack_ac;
  char local_a8;
  undefined8 local_98;
  int iStack_90;
  uint uStack_8c;
  char local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_448;
  if (((((*param_2 == 0) || (*(int *)((longlong)param_2 + 0xc) == 0)) ||
       (uVar21 = *(uint *)(param_2 + 1), (int)uVar21 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar21 ||
       (lVar25 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8), lVar25 == 0)))) ||
     ((*(int *)(lVar25 + 0x10) != *(int *)((longlong)param_2 + 0xc) ||
      ((*(uint *)(lVar25 + 8) & 0x10200000) != 0)))) goto LAB_14116e949;
  lVar25 = param_1 + 0x30;
  lVar14 = FUN_1400d7050(lVar25);
  if (lVar14 == 0) goto LAB_14116e949;
  if (*(int *)((longlong)param_2 + 0xc) == 0) {
LAB_14116f2cf:
    plVar19 = (longlong *)0x0;
  }
  else {
    uVar21 = *(uint *)(param_2 + 1);
    plVar19 = (longlong *)0x0;
    if ((-1 < (int)uVar21) && ((int)uVar21 < DAT_14c9647dc)) {
      puVar26 = (undefined8 *)
                ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
      if ((puVar26 == (undefined8 *)0x0) ||
         ((*(int *)(puVar26 + 2) != *(int *)((longlong)param_2 + 0xc) ||
          ((*(uint *)(puVar26 + 1) & 0x10200000) != 0)))) goto LAB_14116f2cf;
      plVar19 = (longlong *)*puVar26;
    }
  }
  lVar14 = (**(code **)(*plVar19 + 0x358))(plVar19);
  uVar15 = FUN_141169abc(param_1);
  if (lVar14 == 0) {
    lVar17 = 0;
  }
  else {
    uVar16 = FUN_14125b292();
    cVar8 = FUN_1448093f4(lVar14,uVar16);
    lVar17 = 0;
    if (cVar8 != '\0') {
      lVar17 = lVar14;
    }
  }
  lVar14 = (**(code **)(*plVar19 + 0x2b8))(plVar19);
  if (lVar14 == 0) goto LAB_14116e949;
  lVar14 = (**(code **)(*plVar19 + 0x2b8))(plVar19);
  uVar16 = FUN_1406d3bdc();
  cVar8 = FUN_1448093f4(lVar14,uVar16);
  if ((lVar14 == 0) || (cVar8 == '\0')) goto LAB_14116e949;
  uVar29 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if ((char)plVar19[0xc] == '\x01') {
    iVar9 = (int)plVar19[9];
    lVar35 = plVar19[10];
    if (lVar35 == 0) {
      lVar35 = 0;
      uVar23 = CONCAT71(uVar29,1);
    }
    else {
      if (*(char *)(lVar35 + 0xe4) != '\0') {
        iVar9 = 1;
      }
      uVar23 = 0;
    }
  }
  else {
    lVar35 = 0;
    uVar23 = CONCAT71(uVar29,1);
    iVar9 = 0;
  }
  uStack_318 = 0;
  uStack_317 = 0;
  uStack_310 = 0;
  local_328 = 0;
  uStack_320 = 0;
  uStack_31f = 0;
  local_30c = 0;
  uStack_308 = 0;
  uStack_304 = 0;
  uStack_300 = 0;
  local_2fc = 0;
  local_2f8 = 1;
  local_2f4 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  uStack_2df = 0;
  local_2d8 = 0;
  uStack_2d4 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2a9 = 0;
  uStack_2a8 = 0;
  uStack_2a4 = 0;
  cStack_2a3 = '\0';
  uStack_2a2 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = 1;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = DAT_14c948618;
  local_270 = DAT_14c948620;
  local_264 = DAT_14c948620;
  local_26c = DAT_14c948618;
  local_3d0 = lVar25;
  local_3c8 = lVar14;
  local_3c0 = uVar15;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_260 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_258 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_250 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_228 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_220 = 0;
  local_1dc = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1ef = 0;
  uStack_1e8 = 0;
  uStack_1e7 = 0;
  if (iVar9 == 2) {
    lVar25 = *(longlong *)(local_3c8 + 0x1d0);
    if (lVar25 == 0) {
      uVar16 = FUN_1465d5758();
      lVar25 = FUN_14477b664(uVar16);
      *(longlong *)(local_3c8 + 0x1d0) = lVar25;
    }
    lVar14 = *(longlong *)(local_3c8 + 0x1d8);
    if (((lVar14 == 0) && (lVar14 = 0, lVar25 != 0)) &&
       (plVar34 = (longlong *)(local_3c8 + 0x1c8), *plVar34 != 0)) {
      local_3b8 = (PSRWLOCK)CONCAT44(local_3b8._4_4_,(int)uVar23);
      plVar18 = *(longlong **)(lVar25 + 0xb8);
      if ((plVar18 == (longlong *)0x0) ||
         (cVar8 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar8 == '\0')) {
        lVar14 = 0;
      }
      else {
        uVar16 = (**(code **)(*plVar18 + 0x110))(plVar18);
        lVar14 = FUN_144aff482(uVar16,plVar34);
      }
      *(longlong *)(local_3c8 + 0x1d8) = lVar14;
      uVar23 = (ulonglong)local_3b8 & 0xffffffff;
    }
    uStack_318 = (undefined1)lVar14;
    uStack_317 = (undefined7)((ulonglong)lVar14 >> 8);
    uStack_320 = (undefined1)lVar17;
    uStack_31f = (undefined7)((ulonglong)lVar17 >> 8);
    if ((char)uVar23 != '\0') goto LAB_14116ed86;
    local_290 = *(undefined1 *)(lVar35 + 0x140);
  }
  else {
    local_98 = "UI_LocationTypeName_Undiscovered";
    iStack_90 = 0x20;
    uStack_8c = uStack_8c & 0xffffff00;
    uVar21 = FUN_14001a6c0(&local_98,1);
    local_1d8 = (code *)(ulonglong)uVar21;
    plStack_1d0 = (longlong *)0x0;
    uStack_1c8 = 0;
    uVar16 = FUN_1465d5758();
    plStack_1d0 = (longlong *)FUN_14477b664(uVar16);
    uVar15 = uStack_1c8;
    if (((uStack_1c8 == 0) && (uVar15 = 0, plStack_1d0 != (longlong *)0x0)) &&
       (local_1d8 != (code *)0x0)) {
      plVar34 = *(longlong **)((longlong)plStack_1d0 + 0xb8);
      if ((plVar34 == (longlong *)0x0) ||
         (cVar8 = (**(code **)(*plVar34 + 0x108))(plVar34), cVar8 == '\0')) {
        uVar15 = 0;
      }
      else {
        uVar16 = (**(code **)(*plVar34 + 0x110))(plVar34);
        uVar15 = FUN_144aff482(uVar16,&local_1d8);
      }
    }
    uStack_318 = (undefined1)uVar15;
    uStack_317 = (undefined7)(uVar15 >> 8);
    local_98 = "UILocation_Undiscovered";
    iStack_90 = 0x17;
    uStack_8c = uStack_8c & 0xffffff00;
    uVar21 = FUN_14001a6c0(&local_98,1);
    local_1d8 = (code *)(ulonglong)uVar21;
    plStack_1d0 = (longlong *)0x0;
    uStack_1c8 = 0;
    uVar16 = FUN_14125b292();
    plStack_1d0 = (longlong *)FUN_14477b664(uVar16);
    uVar15 = uStack_1c8;
    if (((uStack_1c8 == 0) && (uVar15 = 0, plStack_1d0 != (longlong *)0x0)) &&
       (local_1d8 != (code *)0x0)) {
      plVar34 = (longlong *)plStack_1d0[0x17];
      if ((plVar34 == (longlong *)0x0) ||
         (cVar8 = (**(code **)(*plVar34 + 0x108))(plVar34), cVar8 == '\0')) {
        uVar15 = 0;
      }
      else {
        uVar16 = (**(code **)(*plVar34 + 0x110))(plVar34);
        uVar15 = FUN_144aff482(uVar16,&local_1d8);
      }
    }
    uStack_320 = (undefined1)uVar15;
    uStack_31f = (undefined7)(uVar15 >> 8);
LAB_14116ed86:
    local_290 = 0;
  }
  local_2f4 = param_2[1];
  local_2e8 = *param_2;
  local_328 = lVar35;
  lVar25 = FUN_14116e62e(plVar19);
  if (lVar25 == 0) {
    lVar25 = 0;
    lVar14 = local_3d0;
  }
  else {
    lVar17 = FUN_14116e62e(plVar19);
    uVar16 = FUN_14086ad12();
    cVar8 = FUN_1448093f4(lVar17,uVar16);
    lVar14 = local_3d0;
    lVar25 = 0;
    if ((lVar17 != 0) && (cVar8 != '\0')) {
      lVar35 = *(longlong *)(lVar17 + 0x178);
      if (lVar35 == 0) {
        uVar16 = FUN_1465d584e();
        lVar35 = FUN_14477b664(uVar16);
        *(longlong *)(lVar17 + 0x178) = lVar35;
      }
      lVar25 = *(longlong *)(lVar17 + 0x180);
      if (((lVar25 == 0) && (lVar25 = 0, lVar35 != 0)) && (*(longlong *)(lVar17 + 0x170) != 0)) {
        plVar34 = *(longlong **)(lVar35 + 0xb8);
        if ((plVar34 == (longlong *)0x0) ||
           (cVar8 = (**(code **)(*plVar34 + 0x108))(plVar34), cVar8 == '\0')) {
          lVar25 = 0;
        }
        else {
          uVar16 = (**(code **)(*plVar34 + 0x110))(plVar34);
          lVar25 = FUN_144aff482(uVar16,(longlong *)(lVar17 + 0x170));
        }
        *(longlong *)(lVar17 + 0x180) = lVar25;
        lVar14 = local_3d0;
      }
    }
  }
  uStack_308 = (undefined4)lVar25;
  uStack_304 = (undefined4)((ulonglong)lVar25 >> 0x20);
  if (iVar9 == 2) {
    FUN_1412dfe7a(&local_238,plVar19 + 0xd);
    lVar25 = FUN_1400d7050(lVar14);
    if (lVar25 == 0) {
LAB_14116eed7:
      lVar25 = 0;
    }
    else {
      if (DAT_14cb61cd0 == 0) {
        local_3f0 = &local_1d8;
        local_1d8 = FUN_141030f22;
        local_3e0 = FUN_14081d0ea;
        local_3e8 = &LAB_1463b31ae;
        local_3f8 = &LAB_1486dca4f;
        local_400 = (code *)&LAB_1464f50a6;
        local_408 = L"Game";
        local_410 = 0;
        local_418 = 0x10000004;
        local_420 = 8;
        local_428 = (undefined8 *)CONCAT44(local_428._4_4_,0xd70);
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
      }
      if ((*(int *)(*(longlong *)(lVar25 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30))
      goto LAB_14116eed7;
    }
    (**(code **)(*plVar19 + 0x2f8))(plVar19,&local_1d8,lVar25);
    FUN_14116e870(CONCAT71(uStack_2df,uStack_2e0),local_2d8);
    if (CONCAT71(uStack_2df,uStack_2e0) != 0) {
      FUN_1400020a8();
    }
    uStack_2e0 = SUB81(local_1d8,0);
    uStack_2df = (undefined7)((ulonglong)local_1d8 >> 8);
    local_2d8 = SUB84(plStack_1d0,0);
    uStack_2d4 = (undefined4)((ulonglong)plStack_1d0 >> 0x20);
    local_1d8 = (code *)0x0;
    plStack_1d0 = (longlong *)0x0;
    FUN_14116e870(0,0);
    if (local_1d8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_3c0 != 0) && (*(char *)(local_328 + 0xe5) != '\0')) {
    FUN_1449027d0(param_1,&local_1d8);
    lVar25 = *(longlong *)(local_1d8 + 0x410);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar25 + 0x1b0));
    plVar34 = plStack_1d0;
    if (plStack_1d0 != (longlong *)0x0) {
      LOCK();
      plVar18 = plStack_1d0 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*plStack_1d0)(plStack_1d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar34 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar34 + 0x10))(plVar34);
        }
      }
    }
    FUN_145aaae1a(local_3c0,&local_98,param_2);
    if (local_88 == '\x01') {
      if ((1.0 <= ABS((double)local_98)) || (1.0 <= ABS((double)CONCAT44(uStack_8c,iStack_90)))) {
        local_a8 = local_88;
        local_b8 = (undefined4)local_98;
        uStack_b4 = local_98._4_4_;
        iStack_b0 = iStack_90;
        uStack_ac = uStack_8c;
        FUN_148e24c4c(&local_1d8);
        uVar11 = 0;
        uVar36 = 0;
        dVar37 = 0.0 - ((double)plStack_1d0 + -1.0) * 0.5;
        dVar5 = ((double)local_1d8 + 1.0) * 0.5;
        dVar38 = dVar5 + 0.0;
        if ((dVar37 != 0.0) ||
           (((NAN(dVar37) || (dVar5 != 0.0)) || (lVar14 = local_3d0, NAN(dVar5)))))
        goto LAB_14116f3a2;
      }
      else {
        dVar37 = 0.5;
        dVar38 = 0.5;
LAB_14116f3a2:
        lVar14 = local_3d0;
        dVar5 = atan2(dVar37,dVar38);
        uVar11 = SUB84(dVar5,0);
        uVar36 = (undefined4)((ulonglong)dVar5 >> 0x20);
      }
      dVar5 = (double)CONCAT44(uVar36,uVar11) * 3.1415927410125732 * 57.29577951308232;
    }
    else {
      dVar5 = 0.0;
      dVar37 = 0.5;
      dVar38 = 0.5;
      lVar14 = local_3d0;
    }
    fVar39 = (float)dVar5;
    lVar17 = (longlong)*(int *)(lVar25 + 0x198);
    if (0 < lVar17) {
      puVar26 = (undefined8 *)(*(longlong *)(lVar25 + 400) + 0x38);
      do {
        if (puVar26[-7] == *param_2) {
          if (puVar26 != (undefined8 *)&DAT_00000038) {
            if (((1.0 < ABS((double)puVar26[-5] - dVar38)) ||
                (1.0 < ABS((double)puVar26[-4] - dVar37))) ||
               (0.1 < ABS(fVar39 - *(float *)(puVar26 + 4)))) {
              *(int *)(lVar25 + 0x1a0) = *(int *)(lVar25 + 0x1a0) + 1;
              puVar26[-5] = dVar38;
              puVar26[-4] = dVar37;
              *(byte *)((longlong)puVar26 + 0x24) =
                   (-(1.0 <= dVar37) | -(dVar37 <= 0.0) | -(1.0 <= dVar38) | -(dVar38 <= 0.0)) & 1;
              puVar26[-3] = *(undefined8 *)(local_328 + 0x18);
              uVar11 = *(undefined4 *)(local_328 + 0x24);
              uVar36 = *(undefined4 *)(local_328 + 0x28);
              uVar6 = *(undefined4 *)(local_328 + 0x2c);
              *(undefined4 *)(puVar26 + -2) = *(undefined4 *)(local_328 + 0x20);
              *(undefined4 *)((longlong)puVar26 + -0xc) = uVar11;
              *(undefined4 *)(puVar26 + -1) = uVar36;
              *(undefined4 *)((longlong)puVar26 + -4) = uVar6;
              if (puVar26 != (undefined8 *)(local_328 + 0x30)) {
                iVar9 = *(int *)(local_328 + 0x38);
                pvVar3 = *(void **)(local_328 + 0x30);
                *(int *)(puVar26 + 1) = iVar9;
                if (iVar9 == 0 && *(int *)((longlong)puVar26 + 0xc) == 0) {
                  *(undefined4 *)((longlong)puVar26 + 0xc) = 0;
                }
                else {
                  FUN_1446dd670(puVar26,iVar9);
                  if (iVar9 != 0) {
                    memcpy((void *)*puVar26,pvVar3,(longlong)iVar9 * 2);
                  }
                }
              }
              *(float *)(puVar26 + 4) = fVar39;
            }
            goto LAB_14116f6d0;
          }
          break;
        }
        puVar26 = puVar26 + 0xc;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    local_350 = *(undefined8 *)(local_328 + 0x18);
    local_348 = *(undefined4 *)(local_328 + 0x20);
    uStack_344 = *(undefined4 *)(local_328 + 0x24);
    uStack_340 = *(undefined4 *)(local_328 + 0x28);
    uStack_33c = *(undefined4 *)(local_328 + 0x2c);
    local_338 = (void *)0x0;
    local_330 = *(int *)(local_328 + 0x38);
    lVar14 = (longlong)local_330;
    pvVar3 = *(void **)(local_328 + 0x30);
    if (lVar14 == 0) {
      local_32c = 0;
    }
    else {
      FUN_1446dd670(&local_338,local_330,0);
      memcpy(local_338,pvVar3,lVar14 * 2);
    }
    local_c0 = 1;
    local_428 = (undefined8 *)CONCAT44(local_428._4_4_,fVar39);
    local_d0 = dVar38;
    local_c8 = dVar37;
    FUN_146638b4c(&local_1d8,*param_2,&local_d0,&local_350);
    iVar9 = FUN_14620b388((longlong *)(lVar25 + 400),&local_1d8);
    lVar14 = local_3d0;
    if (iVar9 != -1) {
      *(int *)(lVar25 + 0x1a0) = *(int *)(lVar25 + 0x1a0) + 1;
    }
    if (local_190 != 0) {
      FUN_1400020a8();
    }
    if (local_1a0 != 0) {
      FUN_1400020a8();
    }
    *(int *)(lVar25 + 0x1a8) = *(int *)(lVar25 + 0x1a8) + 1;
LAB_14116f6d0:
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar25 + 0x1b0));
  }
  uVar15 = local_3c0;
  if (plVar19 == (longlong *)0x0) {
LAB_1411709c3:
    FUN_1449027d0(param_1);
    lVar25 = *(longlong *)(local_1d8 + 0x410);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar25 + 0x1b0));
    plVar34 = plStack_1d0;
    if (plStack_1d0 != (longlong *)0x0) {
      LOCK();
      plVar18 = plStack_1d0 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*plStack_1d0)(plStack_1d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar34 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar34 + 0x10))(plVar34);
        }
      }
    }
    lVar14 = plVar19[6];
    if ((uVar15 != 0) &&
       (iVar9 = *(int *)(lVar25 + 0x114), iVar10 = FUN_140f904b2(uVar15), iVar9 != iVar10)) {
      uVar11 = FUN_140f904b2(uVar15);
      *(undefined4 *)(lVar25 + 0x114) = uVar11;
      *(int *)(lVar25 + 0x1a8) = *(int *)(lVar25 + 0x1a8) + 1;
    }
    lVar17 = FUN_14116e62e(plVar19);
    if (lVar17 == 0) {
      local_98 = (char *)0x0;
    }
    else {
      puVar30 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar17 + 8) != (undefined4 *)0x0) {
        puVar30 = *(undefined4 **)(lVar17 + 8);
      }
      if (DAT_14c947fe0 == 0) {
        lVar17 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar17);
        DAT_14c947fe0 = lVar17;
      }
      FUN_140045924(DAT_14c947fe0,&local_98,puVar30,1);
    }
    uVar28 = (int)((ulonglong)lVar14 >> 0x20) * 0x17 + (int)lVar14;
    uVar21 = (uint)((ulonglong)local_98 >> 0x10);
    uVar24 = (uint)local_98 & 0xffff;
    local_1d8 = (code *)local_98;
    plVar19 = (longlong *)
              FUN_14116e570(lVar25,((uint)local_98 << 0x10 | uVar24) +
                                   (int)((ulonglong)local_98 >> 0x20) +
                                   (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar24 >> 4));
    iVar9 = *(int *)((longlong)plVar19 + 0x34);
    iVar10 = (int)plVar19[1];
    if ((int)plVar19[1] != iVar9) {
      plVar34 = plVar19 + 7;
      if ((longlong *)plVar19[8] != (longlong *)0x0) {
        plVar34 = (longlong *)plVar19[8];
      }
      iVar12 = *(int *)((longlong)plVar34 + (ulonglong)((int)plVar19[9] - 1U & uVar28) * 4);
      iVar10 = iVar9;
      if (iVar12 != -1) {
        lVar14 = *plVar19;
        iVar9 = iVar12;
        do {
          if (*(uint *)(lVar14 + (longlong)iVar9 * 0x160) == uVar28) goto LAB_141170d3b;
          iVar9 = *(int *)((longlong)iVar9 * 0x160 + lVar14 + 0x158);
        } while (iVar9 != -1);
      }
    }
    goto LAB_141170b4e;
  }
  lVar25 = FUN_1414ba9b4();
  if ((*(int *)(plVar19[2] + 0x38) < *(int *)(lVar25 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(lVar25 + 0x38) * 8) !=
      lVar25 + 0x30)) {
LAB_14116ef9f:
    if (DAT_14cba14f0 == 0) {
      local_3f0 = &local_1d8;
      local_1d8 = FUN_1449e2820;
      local_3e0 = FUN_14081d0ea;
      local_3e8 = &LAB_145885dac;
      local_3f8 = &LAB_148b9e16b;
      local_400 = FUN_140f505de;
      local_408 = L"Engine";
      local_410 = 0;
      local_418 = 0x10000000;
      local_420 = 8;
      local_428 = (undefined8 *)CONCAT44(local_428._4_4_,0x110);
      FUN_14081cfa3(L"/Script/OakGame",L"GbxDiscoveryProviderObject_OakMissionWaypoint",
                    &DAT_14cba14f0,&DAT_148b9e16a);
    }
    if ((*(int *)(DAT_14cba14f0 + 0x38) <= *(int *)(plVar19[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(DAT_14cba14f0 + 0x38) * 8) ==
        DAT_14cba14f0 + 0x30)) {
      uStack_2a4 = 1;
      cStack_2a3 = (char)plVar19[0x1b];
      uStack_2a2 = 1;
      if (cStack_2a3 == '\x01') {
        FUN_1449027d0(param_1,&local_1d8);
        lVar25 = *(longlong *)(local_1d8 + 0x410);
        SRWLock = (PSRWLOCK)(lVar25 + 0x1b0);
        AcquireSRWLockExclusive(SRWLock);
        plVar34 = plStack_1d0;
        if (plStack_1d0 != (longlong *)0x0) {
          LOCK();
          plVar18 = plStack_1d0 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*plStack_1d0)(plStack_1d0);
            LOCK();
            piVar1 = (int *)((longlong)plVar34 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar34 + 0x10))(plVar34);
            }
          }
        }
        FUN_145aaae1a(local_3c0,&local_98,param_2);
        local_3b8 = SRWLock;
        if (local_88 == '\x01') {
          if ((1.0 <= ABS((double)local_98)) || (1.0 <= ABS((double)CONCAT44(uStack_8c,iStack_90))))
          {
            local_d8 = local_88;
            local_e8 = (undefined4)local_98;
            uStack_e4 = local_98._4_4_;
            iStack_e0 = iStack_90;
            uStack_dc = uStack_8c;
            FUN_148e24c4c(&local_1d8);
            uVar11 = 0;
            uVar36 = 0;
            dVar37 = 0.0 - ((double)plStack_1d0 + -1.0) * 0.5;
            dVar5 = ((double)local_1d8 + 1.0) * 0.5;
            dVar38 = dVar5 + 0.0;
            if ((dVar37 != 0.0) || (((NAN(dVar37) || (dVar5 != 0.0)) || (NAN(dVar5)))))
            goto LAB_14116faa8;
          }
          else {
            dVar37 = 0.5;
            dVar38 = 0.5;
LAB_14116faa8:
            dVar5 = atan2(dVar37,dVar38);
            uVar11 = SUB84(dVar5,0);
            uVar36 = (undefined4)((ulonglong)dVar5 >> 0x20);
          }
          dVar5 = (double)CONCAT44(uVar36,uVar11) * 3.1415927410125732 * 57.29577951308232;
        }
        else {
          dVar5 = 0.0;
          dVar37 = 0.5;
          dVar38 = 0.5;
        }
        fVar39 = (float)dVar5;
        lVar14 = (longlong)*(int *)(lVar25 + 0x198);
        if (0 < lVar14) {
          puVar26 = (undefined8 *)(*(longlong *)(lVar25 + 400) + 0x38);
          do {
            if (puVar26[-7] == *param_2) {
              if (puVar26 != (undefined8 *)&DAT_00000038) {
                if (((ABS((double)puVar26[-5] - dVar38) <= 1.0) &&
                    (ABS((double)puVar26[-4] - dVar37) <= 1.0)) &&
                   (lVar14 = local_3d0, ABS(fVar39 - *(float *)(puVar26 + 4)) <= 0.1))
                goto LAB_14116fddb;
                *(int *)(lVar25 + 0x1a0) = *(int *)(lVar25 + 0x1a0) + 1;
                puVar26[-5] = dVar38;
                puVar26[-4] = dVar37;
                *(byte *)((longlong)puVar26 + 0x24) =
                     (-(1.0 <= dVar37) | -(dVar37 <= 0.0) | -(1.0 <= dVar38) | -(dVar38 <= 0.0)) & 1
                ;
                puVar26[-3] = *(undefined8 *)(local_328 + 0x18);
                uVar11 = *(undefined4 *)(local_328 + 0x24);
                uVar36 = *(undefined4 *)(local_328 + 0x28);
                uVar6 = *(undefined4 *)(local_328 + 0x2c);
                *(undefined4 *)(puVar26 + -2) = *(undefined4 *)(local_328 + 0x20);
                *(undefined4 *)((longlong)puVar26 + -0xc) = uVar11;
                *(undefined4 *)(puVar26 + -1) = uVar36;
                *(undefined4 *)((longlong)puVar26 + -4) = uVar6;
                if (puVar26 != (undefined8 *)(local_328 + 0x30)) {
                  iVar9 = *(int *)(local_328 + 0x38);
                  pvVar3 = *(void **)(local_328 + 0x30);
                  *(int *)(puVar26 + 1) = iVar9;
                  if (iVar9 == 0 && *(int *)((longlong)puVar26 + 0xc) == 0) {
                    *(undefined4 *)((longlong)puVar26 + 0xc) = 0;
                  }
                  else {
                    FUN_1446dd670(puVar26,iVar9);
                    if (iVar9 != 0) {
                      memcpy((void *)*puVar26,pvVar3,(longlong)iVar9 * 2);
                    }
                  }
                }
                *(float *)(puVar26 + 4) = fVar39;
                lVar14 = local_3d0;
                goto LAB_14116fdd4;
              }
              break;
            }
            puVar26 = puVar26 + 0xc;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        local_3a0 = *(undefined8 *)(local_328 + 0x18);
        local_398 = *(undefined4 *)(local_328 + 0x20);
        uStack_394 = *(undefined4 *)(local_328 + 0x24);
        uStack_390 = *(undefined4 *)(local_328 + 0x28);
        uStack_38c = *(undefined4 *)(local_328 + 0x2c);
        local_388 = (void *)0x0;
        local_380 = *(int *)(local_328 + 0x38);
        lVar14 = (longlong)local_380;
        pvVar3 = *(void **)(local_328 + 0x30);
        if (lVar14 == 0) {
          local_37c = 0;
        }
        else {
          FUN_1446dd670(&local_388,local_380,0);
          memcpy(local_388,pvVar3,lVar14 * 2);
        }
        local_f0 = 1;
        local_428 = (undefined8 *)CONCAT44(local_428._4_4_,fVar39);
        local_100 = dVar38;
        local_f8 = dVar37;
        FUN_146638b4c(&local_1d8,*param_2,&local_100,&local_3a0);
        iVar9 = FUN_14620b388((longlong *)(lVar25 + 400),&local_1d8);
        lVar14 = local_3d0;
        if (iVar9 != -1) {
          *(int *)(lVar25 + 0x1a0) = *(int *)(lVar25 + 0x1a0) + 1;
        }
        if (local_190 != 0) {
          FUN_1400020a8();
        }
        if (local_1a0 != 0) {
          FUN_1400020a8();
        }
LAB_14116fdd4:
        *(int *)(lVar25 + 0x1a8) = *(int *)(lVar25 + 0x1a8) + 1;
LAB_14116fddb:
        ReleaseSRWLockExclusive(local_3b8);
      }
      plVar34 = (longlong *)FUN_1418e27ee(plVar19);
      if (plVar34 != (longlong *)0x0) {
        lVar25 = (**(code **)(*plVar34 + 8))(plVar34);
        lVar17 = FUN_140fa5e64();
        if (((lVar17 != 0) && (*(int *)(lVar17 + 0x38) <= *(int *)(lVar25 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar25 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) ==
            lVar17 + 0x30)) {
          FUN_14050cae0(plVar19,&local_1d8);
          local_270 = (int)plStack_1d0;
          local_278 = local_1d8;
          uVar4 = *(ushort *)((longlong)plVar34 + 0x53a);
          lVar25 = *(longlong *)(DAT_14cb86da8 + 0x370);
          uVar16 = FUN_1400d7050(lVar14);
          uVar16 = FUN_1447210f0(uVar16);
          FUN_143deff24((ulonglong)((uint)uVar4 * 0x18) + lVar25,&local_1d8,&local_278,uVar16);
          FUN_140008f88(&local_260,&local_1d8);
          if (local_1d8 != (code *)0x0) {
            (**(code **)(*(longlong *)local_1d8 + 0x10))();
          }
          if ((0 < (int)plVar34[0xd]) && (lVar25 = plVar34[0xc], lVar25 != 0)) {
            uVar16 = FUN_1400d7050(local_3d0);
            uVar16 = FUN_1447210f0(uVar16);
            FUN_143deff24(lVar25 + 0x10,&local_1d8,&local_278,uVar16);
            FUN_140008f88(&local_250,&local_1d8);
            if (local_1d8 != (code *)0x0) {
              (**(code **)(*(longlong *)local_1d8 + 0x10))();
            }
          }
          FUN_146638436(&local_328,plVar34);
          lVar25 = local_3d0;
          uVar16 = FUN_1400d7050(local_3d0);
          FUN_144275590(plVar34,uVar16,&local_2a0);
          lVar25 = FUN_1400d7050(lVar25);
          if (lVar25 != 0) {
            if (DAT_14cbadd90 == 0) {
              local_1d8 = FUN_141030f22;
              local_3e0 = FUN_14081d0ea;
              local_3e8 = &LAB_1459f2e4c;
              local_3f0 = &local_1d8;
              local_3f8 = &LAB_148c39de3;
              local_400 = (code *)&LAB_1457a9eb2;
              local_408 = L"Game";
              local_410 = 0;
              local_418 = 0x10000004;
              local_420 = 0x10;
              local_428 = (undefined8 *)CONCAT44(local_428._4_4_,0x3de0);
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            }
            if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar25 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
                (plVar18 = (longlong *)
                           (**(code **)(*(longlong *)(lVar25 + 0x958) + 0x10))(lVar25 + 0x958),
                plVar18 != (longlong *)0x0)) &&
               (((lVar25 = (**(code **)(*plVar18 + 0x2b8))(plVar18), lVar25 != 0 &&
                 (lVar25 = FUN_14133cf88(lVar25), lVar25 != 0)) &&
                (plVar18 = (longlong *)FUN_148d7eeca(lVar25), plVar18 == plVar34)))) {
              FUN_144250280(param_1,&local_328,lVar25);
              goto LAB_14116efd6;
            }
          }
          FUN_14050cae0(plVar19,local_3ac);
          uVar16 = FUN_1400d7050(local_3d0);
          FUN_140c51c1e(uVar16,local_3ac,&local_288);
          goto LAB_14116efd6;
        }
      }
      lVar25 = FUN_148d10a1a(plVar19);
      if (lVar25 != 0) {
        plVar34 = (longlong *)FUN_148d7eeca(lVar25);
        if (plVar34 != (longlong *)0x0) {
          uVar4 = *(ushort *)((longlong)plVar34 + 0x53a);
          lVar14 = *(longlong *)(DAT_14cb86da8 + 0x370);
          uVar16 = FUN_1400d7050(local_3d0);
          uVar16 = FUN_1447210f0(uVar16);
          FUN_143deff24((ulonglong)((uint)uVar4 * 0x18) + lVar14,&local_1d8,&local_278,uVar16);
          FUN_140008f88(&local_260,&local_1d8);
          if (local_1d8 != (code *)0x0) {
            (**(code **)(*(longlong *)local_1d8 + 0x10))();
          }
          lVar14 = (**(code **)(*plVar34 + 8))(plVar34);
          lVar17 = FUN_140fa5e64();
          if ((lVar17 == 0) || (*(int *)(lVar14 + 0x38) < *(int *)(lVar17 + 0x38))) {
            plVar18 = (longlong *)0x0;
          }
          else {
            plVar18 = (longlong *)0x0;
            if (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8)
                == lVar17 + 0x30) {
              plVar18 = plVar34;
            }
          }
          FUN_146638436(&local_328,plVar18);
        }
        FUN_144250280(param_1,&local_328,lVar25);
        FUN_14425062e(&local_328,lVar25);
      }
    }
LAB_14116efd6:
    uVar15 = local_3c0;
    if (DAT_14cb5d278 == 0) {
      local_3f0 = &local_1d8;
      local_1d8 = FUN_1449e2820;
      local_3e0 = FUN_14081d0ea;
      local_3e8 = &LAB_145885dac;
      local_3f8 = &LAB_1486962c5;
      local_400 = FUN_1464da8ae;
      local_408 = L"Engine";
      local_410 = 0;
      local_418 = 0x10000000;
      local_420 = 8;
      local_428 = (undefined8 *)CONCAT44(local_428._4_4_,0x118);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryProviderObject_DiscoveryLocation",
                    &DAT_14cb5d278,&DAT_1486962c4);
    }
    if ((*(int *)(DAT_14cb5d278 + 0x38) <= *(int *)(plVar19[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(DAT_14cb5d278 + 0x38) * 8) ==
        DAT_14cb5d278 + 0x30)) {
      local_240 = 1;
      local_368[0] = 0;
      FUN_140d749c4(plVar19,local_368);
      uVar11 = local_220;
      if ((local_368[0] != 0) && (lVar25 = FUN_145a2c21b(), uVar11 = local_220, lVar25 != 0)) {
        uVar16 = FUN_14086ad12();
        cVar8 = FUN_1448093f4(lVar25,uVar16);
        uVar11 = local_220;
        if (cVar8 != '\0') {
          plStack_1d0 = (longlong *)0x0;
          local_1d8 = *(code **)(lVar25 + 0x170);
          uStack_1c8 = 0;
          uVar16 = FUN_14477b664(*(undefined8 *)(lVar25 + 0x178));
          plStack_1d0 = (longlong *)FUN_14477b664(uVar16);
          uStack_1c8 = *(ulonglong *)(lVar25 + 0x180);
          if (plStack_1d0 == (longlong *)0x0) {
            uVar16 = FUN_1465d584e();
            plStack_1d0 = (longlong *)FUN_14477b664(uVar16);
          }
          if (uStack_1c8 == 0) {
            uStack_1c8 = 0;
            if ((plStack_1d0 != (longlong *)0x0) && (local_1d8 != (code *)0x0)) {
              plVar34 = (longlong *)plStack_1d0[0x17];
              if ((plVar34 == (longlong *)0x0) ||
                 (cVar8 = (**(code **)(*plVar34 + 0x108))(plVar34), cVar8 == '\0')) {
                uStack_1c8 = 0;
              }
              else {
                uVar16 = (**(code **)(*plVar34 + 0x110))(plVar34);
                uStack_1c8 = FUN_144aff482(uVar16,&local_1d8);
                if (uStack_1c8 != 0) goto LAB_14116f0c1;
              }
            }
            puVar26 = &DAT_14c844840;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
              DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
              DAT_14c844840[1] = 0;
              *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
              DAT_14c844840[2] = -1;
              DAT_14c844840[3] = 0;
              DAT_14c844840[4] = 0;
              DAT_14c844840[5] = 0;
              if (DAT_14c844840 != (longlong *)0x0) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                UNLOCK();
              }
              DAT_14c844848 = 0;
              atexit(FUN_142760bef);
              _Init_thread_footer(&DAT_14c844850);
            }
          }
          else {
LAB_14116f0c1:
            uVar15 = uStack_1c8;
            if (plStack_1d0 == (longlong *)0x0) {
              uVar16 = FUN_1465d584e();
              plStack_1d0 = (longlong *)FUN_14477b664(uVar16);
              uVar15 = uStack_1c8;
              if (((uStack_1c8 == 0) && (uVar15 = 0, plStack_1d0 != (longlong *)0x0)) &&
                 (local_1d8 != (code *)0x0)) {
                plVar34 = (longlong *)plStack_1d0[0x17];
                if ((plVar34 == (longlong *)0x0) ||
                   (cVar8 = (**(code **)(*plVar34 + 0x108))(plVar34), cVar8 == '\0')) {
                  uVar15 = 0;
                  uStack_1c8 = uVar15;
                }
                else {
                  uVar16 = (**(code **)(*plVar34 + 0x110))(plVar34);
                  uVar15 = FUN_144aff482(uVar16,&local_1d8);
                  uStack_1c8 = uVar15;
                }
              }
            }
            puVar26 = (undefined8 *)(uVar15 + 0x18);
          }
          plVar18 = local_228;
          plVar34 = (longlong *)*puVar26;
          if (plVar34 == (longlong *)0x0) {
            uVar11 = *(undefined4 *)(puVar26 + 1);
            if (local_228 != (longlong *)0x0) {
              local_228 = (longlong *)0x0;
              goto LAB_141170872;
            }
          }
          else {
            (**(code **)(*plVar34 + 8))(plVar34);
            plVar18 = local_228;
            uVar11 = *(undefined4 *)(puVar26 + 1);
            if ((local_228 != plVar34) &&
               (local_228 = plVar34, (**(code **)(*plVar34 + 8))(plVar34),
               plVar18 != (longlong *)0x0)) {
LAB_141170872:
              (**(code **)(*plVar18 + 0x10))(plVar18);
              if (plVar34 == (longlong *)0x0) goto LAB_141170892;
            }
            local_220 = uVar11;
            (**(code **)(*plVar34 + 0x10))(plVar34);
            uVar11 = local_220;
          }
        }
      }
LAB_141170892:
      local_220 = uVar11;
      lVar25 = *(longlong *)(local_3c8 + 0x20);
      if (lVar25 == 0) {
        uVar16 = FUN_145d88524();
        lVar25 = FUN_14477b664(uVar16);
        *(longlong *)(local_3c8 + 0x20) = lVar25;
      }
      lVar14 = *(longlong *)(local_3c8 + 0x28);
      if (((lVar14 == 0) && (lVar14 = 0, lVar25 != 0)) &&
         (plVar34 = (longlong *)(local_3c8 + 0x18), *plVar34 != 0)) {
        plVar18 = *(longlong **)(lVar25 + 0xb8);
        if ((plVar18 == (longlong *)0x0) ||
           (cVar8 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar8 == '\0')) {
          lVar14 = 0;
        }
        else {
          uVar16 = (**(code **)(*plVar18 + 0x110))(plVar18);
          lVar14 = FUN_144aff482(uVar16,plVar34);
        }
        *(longlong *)(local_3c8 + 0x28) = lVar14;
      }
      local_1d8 = (code *)0x0;
      plStack_1d0 = (longlong *)0x0;
      uStack_1c8 = uStack_1c8 & 0xffffffff00000000;
      local_1c0 = 0;
      uStack_1b8 = 0;
      lVar25 = 0;
      FUN_1446ddda2(&local_1d8,"DiscoveryCategory_Collectible",0);
      if (DAT_14cb77ec0 != 0) {
        lVar25 = FUN_144837462(DAT_14cb77ec0,&local_1d8);
      }
      if (local_1c0 != 0) {
        FUN_1400020a8();
      }
      if (((lVar14 == lVar25) && (lVar25 = FUN_1418f489e(param_1), lVar25 != 0)) &&
         (lVar14 = FUN_1400d7050(local_3d0), lVar14 != 0)) {
        if (DAT_14cbadd90 == 0) {
          local_1d8 = FUN_141030f22;
          local_3e0 = FUN_14081d0ea;
          local_3e8 = &LAB_1459f2e4c;
          local_3f8 = &LAB_148c39de3;
          local_400 = (code *)&LAB_1457a9eb2;
          local_408 = L"Game";
          local_410 = 0;
          local_418 = 0x10000004;
          local_420 = 0x10;
          local_428 = (undefined8 *)CONCAT44(local_428._4_4_,0x3de0);
          local_3f0 = &local_1d8;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
            (lVar17 = plVar19[0x19], lVar17 != 0)) && ((longlong)*(int *)(lVar17 + 0x250) != 0)) {
          lVar35 = *(longlong *)(lVar17 + 0x248) + 8;
          lVar17 = (longlong)*(int *)(lVar17 + 0x250) * 0x48;
          do {
            FUN_1446dcdd4(&local_1d8,lVar35);
            if (DAT_14cbc5818 == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = FUN_144837462(DAT_14cbc5818,&local_1d8);
            }
            if (local_1c0 != 0) {
              FUN_1400020a8();
            }
            plVar34 = (longlong *)FUN_14148eec0(lVar25,uVar16);
            if (plVar34 != (longlong *)0x0) {
              uVar11 = FUN_1408966e4(lVar14);
              lVar25 = FUN_1403362f0(lVar25,uVar11,plVar34);
              if (((lVar25 != 0) && (lVar17 = *plVar34, lVar17 != 0)) &&
                 ((*(byte *)(lVar25 + 0x10) < *(byte *)(lVar17 + 0x4a0) &&
                  (((ulonglong)((uint)*(byte *)(lVar25 + 0x10) * 0x50) +
                    *(longlong *)(lVar17 + 0x498) != -0x10 &&
                   (lVar25 = FUN_140c520a2(), lVar25 != 0)))))) {
                FUN_140eeff10(&local_98,lVar25,lVar14);
                pcVar7 = (code *)local_98;
                local_3c8 = (longlong)iStack_90;
                if (local_3c8 != 0) {
                  lVar25 = local_3c8 * 0xe0;
                  pcVar32 = (code *)local_98;
                  do {
                    FUN_140c5254a(pcVar32,&local_1d8);
                    uVar15 = uStack_280;
                    lVar14 = (longlong)(int)uStack_280;
                    uVar21 = (int)uStack_280 + 1;
                    uStack_280 = CONCAT44(uStack_280._4_4_,uVar21);
                    if (uStack_280._4_4_ < uVar21) {
                      FUN_140c71e7a(&local_288,uVar15 & 0xffffffff);
                    }
                    FUN_140c541bc(lVar14 * 0xd8 + local_288,&local_1d8);
                    FUN_1407dde54(&local_1d8);
                    pcVar32 = pcVar32 + 0xe0;
                    lVar25 = lVar25 + -0xe0;
                  } while (lVar25 != 0);
                }
                FUN_14087acb9(pcVar7,local_3c8);
                if (pcVar7 != (code *)0x0) {
                  FUN_1400020a8(pcVar7);
                }
              }
              break;
            }
            lVar35 = lVar35 + 0x48;
            lVar17 = lVar17 + -0x48;
          } while (lVar17 != 0);
        }
      }
      plVar34 = (longlong *)FUN_1418e27ee(plVar19);
      uVar15 = local_3c0;
      if (plVar34 != (longlong *)0x0) {
        lVar25 = (**(code **)(*plVar34 + 8))(plVar34);
        lVar14 = FUN_140fa5e64();
        uVar15 = local_3c0;
        if (((((lVar14 != 0) && (*(int *)(lVar14 + 0x38) <= *(int *)(lVar25 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar25 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
              lVar14 + 0x30)) &&
            ((lVar25 = FUN_1418f489e(param_1), uVar15 = local_3c0, lVar25 != 0 &&
             (plVar34 = (longlong *)FUN_14144cd92(lVar25,plVar34,0), uVar15 = local_3c0,
             plVar34 != (longlong *)0x0)))) &&
           (lVar14 = FUN_1400d7050(local_3d0), uVar15 = local_3c0, lVar14 != 0)) {
          if (DAT_14cbadd90 == 0) {
            local_1d8 = FUN_141030f22;
            local_3e0 = FUN_14081d0ea;
            local_3e8 = &LAB_1459f2e4c;
            local_3f8 = &LAB_148c39de3;
            local_400 = (code *)&LAB_1457a9eb2;
            local_408 = L"Game";
            local_410 = 0;
            local_418 = 0x10000004;
            local_420 = 0x10;
            local_428 = (undefined8 *)CONCAT44(local_428._4_4_,0x3de0);
            local_3f0 = &local_1d8;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          uVar15 = local_3c0;
          if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
            uVar11 = FUN_1408966e4(lVar14);
            lVar25 = FUN_1403362f0(lVar25,uVar11,plVar34);
            uVar15 = local_3c0;
            if (lVar25 != 0) {
              lVar17 = *plVar34;
              if ((lVar17 == 0) || (*(byte *)(lVar17 + 0x4a0) <= *(byte *)(lVar25 + 0x10))) {
                lVar25 = 0;
              }
              else {
                lVar25 = *(longlong *)(lVar17 + 0x498) +
                         (ulonglong)((uint)*(byte *)(lVar25 + 0x10) * 0x50) + 0x10;
              }
              lVar25 = FUN_140c520a2(lVar25);
              uVar15 = local_3c0;
              if (lVar25 != 0) {
                FUN_140eeff10(&local_98,lVar25,lVar14);
                iVar9 = iStack_90;
                pcVar7 = (code *)local_98;
                if ((longlong)iStack_90 != 0) {
                  lVar25 = (longlong)iStack_90 * 0xe0;
                  pcVar32 = (code *)local_98;
                  do {
                    FUN_140c5254a(pcVar32,&local_1d8);
                    uVar15 = uStack_280;
                    lVar14 = (longlong)(int)uStack_280;
                    uVar21 = (int)uStack_280 + 1;
                    uStack_280 = CONCAT44(uStack_280._4_4_,uVar21);
                    if (uStack_280._4_4_ < uVar21) {
                      FUN_140c71e7a(&local_288,uVar15 & 0xffffffff);
                    }
                    FUN_140c541bc(lVar14 * 0xd8 + local_288,&local_1d8);
                    FUN_1407dde54(&local_1d8);
                    pcVar32 = pcVar32 + 0xe0;
                    lVar25 = lVar25 + -0xe0;
                  } while (lVar25 != 0);
                }
                FUN_14087acb9(pcVar7,iVar9);
                uVar15 = local_3c0;
                if (pcVar7 != (code *)0x0) {
                  FUN_1400020a8(pcVar7);
                  uVar15 = local_3c0;
                }
              }
            }
          }
        }
      }
    }
    goto LAB_1411709c3;
  }
  local_2d0 = 1;
  local_2f8 = 0;
  if (((*(int *)((longlong)plVar19 + 0xcc) != 0) &&
      (((((uVar21 = *(uint *)(plVar19 + 0x19), -1 < (int)uVar21 && ((int)uVar21 < DAT_14c9647dc)) &&
         (plVar34 = (longlong *)
                    ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
         plVar34 != (longlong *)0x0)) &&
        (((int)plVar34[2] == *(int *)((longlong)plVar19 + 0xcc) &&
         ((*(uint *)(plVar34 + 1) & 0x10200000) == 0)))) && (lVar25 = *plVar34, lVar25 != 0)))) &&
     (lVar17 = *(longlong *)(lVar25 + 0x408), lVar17 != 0)) {
    if (DAT_14cba8288 == 0) {
      local_3f0 = &local_1d8;
      local_1d8 = FUN_141864c34;
      local_3e0 = FUN_14081d0ea;
      local_3e8 = &LAB_1464cee30;
      local_3f8 = &LAB_148bfac22;
      local_400 = (code *)&LAB_140f21842;
      local_408 = L"Game";
      local_410 = 0;
      local_418 = 0x10000004;
      local_420 = 0x10;
      local_428 = (undefined8 *)CONCAT44(local_428._4_4_,0x9cd0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) {
      lVar35 = FUN_1402095ca();
      if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(lVar35 + 0x38)) ||
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar35 + 0x38) * 8) != lVar35 + 0x30 ||
          (lVar17 = *(longlong *)(lVar17 + 0x1710), lVar17 == 0)))) goto LAB_141170d1a;
    }
    if (*(longlong *)(lVar17 + 0x13f8) != 0) {
      FUN_140cac256(*(undefined8 *)(lVar17 + 0x3f70),&local_2c8);
    }
    uStack_2a8 = (**(code **)(*(longlong *)(lVar17 + 0x10c0) + 0x28))(lVar17 + 0x10c0);
    if (DAT_14cbae3d8 == 0) {
      local_3f0 = &local_1d8;
      local_1d8 = FUN_141030f22;
      local_3e0 = FUN_14081d0ea;
      local_3e8 = &LAB_1464f5fc4;
      local_3f8 = &LAB_148c3dd26;
      local_400 = (code *)&LAB_1459673ba;
      local_408 = L"Engine";
      local_410 = 0;
      local_418 = 0x10000004;
      local_420 = 0x10;
      local_428 = (undefined8 *)CONCAT44(local_428._4_4_,0x1360);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar25 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
      FUN_141220240(lVar25,&local_1d8);
      FUN_1408e4d18(lVar25 + 0x3a0,&local_98);
      pcVar7 = (code *)local_98;
      if ((code *)local_98 != (code *)0x0) {
        local_368[0] = 0;
        local_368[1] = 0;
        local_378 = 0;
        plStack_370 = (longlong *)0x0;
        uVar16 = FUN_1447210f0(lVar17);
        local_428 = &local_378;
        cVar8 = FUN_145eef516(uVar16,pcVar7,&local_1d8,local_368);
        if (cVar8 != '\0') {
          FUN_145d1c6f4(local_368,&local_1d8);
        }
        plVar34 = plStack_370;
        if (plStack_370 != (longlong *)0x0) {
          LOCK();
          plVar18 = plStack_370 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*plStack_370)(plStack_370);
            LOCK();
            piVar1 = (int *)((longlong)plVar34 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar34 + 0x10))(plVar34);
            }
          }
        }
        if (local_368[0] != 0) {
          FUN_1400020a8();
        }
      }
      plVar34 = (longlong *)CONCAT44(uStack_8c,iStack_90);
      if (plVar34 != (longlong *)0x0) {
        LOCK();
        plVar18 = plVar34 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)*plVar34)(plVar34);
          LOCK();
          piVar1 = (int *)((longlong)plVar34 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar34 + 0x10))(plVar34);
          }
        }
      }
      iVar9 = (int)plStack_1d0 + -1;
      if ((int)plStack_1d0 == 0) {
        iVar9 = 0;
      }
      FUN_1402980a2(&local_2b8,local_1d8,iVar9);
      lVar14 = local_3d0;
      if (local_1d8 != (code *)0x0) {
        FUN_1400020a8();
        lVar14 = local_3d0;
      }
    }
    goto LAB_14116ef9f;
  }
  goto LAB_141170d1a;
  while (iVar12 = *(int *)(lVar17 + 0x158), iVar12 != -1) {
LAB_141170d3b:
    lVar17 = lVar14 + (longlong)iVar12 * 0x160;
    if (*(uint *)(lVar14 + (longlong)iVar12 * 0x160) == uVar28) goto LAB_141170ebe;
  }
  lVar17 = 0;
LAB_141170ebe:
  cVar8 = FUN_14593e738(lVar17 + 8,&local_328);
  if (cVar8 == '\0') {
    iVar10 = *(int *)((longlong)plVar19 + 0x34);
LAB_141170b4e:
    if (iVar10 == 0) {
      iVar9 = (int)plVar19[1];
      *(int *)(plVar19 + 1) = iVar9 + 1;
      if (*(int *)((longlong)plVar19 + 0xc) == iVar9) {
        FUN_1463fa432(plVar19,iVar9);
      }
      iVar10 = (int)plVar19[5];
      if (iVar10 == 0) {
        iVar12 = -1;
      }
      else {
        iVar12 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar12 = iVar10 + -1;
        }
        iVar12 = iVar12 >> 5;
      }
      plVar34 = plVar19 + 2;
      iVar22 = iVar10 + 1;
      iVar33 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar33 = iVar10;
      }
      if (iVar33 >> 5 == iVar12) {
        *(int *)(plVar19 + 5) = iVar22;
      }
      else {
        if (*(int *)((longlong)plVar19 + 0x2c) <= iVar10) {
          uVar21 = iVar10 + 0x20;
          local_3c0 = (ulonglong)uVar21;
          iVar12 = iVar10;
          if (uVar21 < 0xa0) {
            iVar22 = 0x80;
          }
          else {
            uVar21 = uVar21 >> 5;
            local_3c0 = (ulonglong)uVar21;
            if (*(int *)((longlong)plVar19 + 0x2c) + 0x1fU < 0xa0) {
              uVar24 = 4;
              if (4 < uVar21) {
                uVar24 = uVar21;
              }
            }
            else {
              uVar24 = uVar21 + (uVar21 * 3 >> 3) + 0x10;
            }
            uVar15 = (ulonglong)(uVar24 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar21 = (uint)(uVar15 + 0xf);
                if (uVar24 < 0x1ffd) {
                  uVar15 = (ulonglong)
                           (ushort)(&DAT_14c841d90)
                                   [0x32 - (byte)(&DAT_14c841e00)[uVar15 + 0xf >> 4]];
                }
                else {
                  uVar23 = (ulonglong)(uVar21 & 0xfffffff0);
                  if (uVar23 < 0x7ff1) {
                    bVar20 = (&DAT_14c841e00)[uVar21 >> 4];
                    uVar27 = 0x32;
                    if (0x32 < bVar20) {
                      uVar27 = (ulonglong)bVar20;
                    }
                    uVar31 = 0x32 - (ulonglong)bVar20;
                    do {
                      uVar15 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar31 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar31 & 0xffffffff] & 0xf) == 0) goto LAB_14117114a;
                      lVar14 = uVar27 + 1 + uVar31;
                      uVar31 = uVar31 - 1;
                    } while (lVar14 != 0x33);
                  }
                  uVar15 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar15 = (ulonglong)DAT_14c841df8;
                  }
                  uVar15 = -uVar15 & (uVar23 + uVar15) - 1;
                }
              }
              else {
                uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar15,0);
                iVar12 = (int)plVar19[5];
              }
            }
LAB_14117114a:
            iVar13 = (int)(uVar15 >> 2);
            iVar22 = -0x20;
            if ((int)local_3c0 <= iVar13) {
              iVar22 = iVar13 << 5;
            }
          }
          *(int *)((longlong)plVar19 + 0x2c) = iVar22;
          FUN_1446efbd8(plVar34,iVar12);
          iVar22 = (int)plVar19[5] + 1;
        }
        iVar12 = iVar22 + 0x1f;
        if (-1 < iVar22) {
          iVar12 = iVar22;
        }
        *(int *)(plVar19 + 5) = iVar22;
        if (iVar22 % 0x20 != 0) {
          plVar18 = (longlong *)plVar19[4];
          if ((longlong *)plVar19[4] == (longlong *)0x0) {
            plVar18 = plVar34;
          }
          bVar20 = -(char)(iVar22 % 0x20);
          *(uint *)((longlong)plVar18 + (longlong)(iVar12 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar12 >> 5) * 4) << (bVar20 & 0x1f))
               >> (bVar20 & 0x1f);
        }
      }
      lVar14 = (longlong)iVar9;
      if ((longlong *)plVar19[4] != (longlong *)0x0) {
        plVar34 = (longlong *)plVar19[4];
      }
      bVar20 = (byte)iVar10 & 0x1f;
      puVar2 = (uint *)((longlong)plVar34 + (longlong)(iVar33 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar20 | 0xfffffffeU >> 0x20 - bVar20);
    }
    else {
      iVar9 = (int)plVar19[6];
      lVar14 = (longlong)iVar9;
      iVar12 = *(int *)(*plVar19 + 4 + lVar14 * 0x160);
      *(int *)(plVar19 + 6) = iVar12;
      *(int *)((longlong)plVar19 + 0x34) = iVar10 + -1;
      if (iVar10 + -1 != 0) {
        *(undefined4 *)(*plVar19 + (longlong)iVar12 * 0x160) = 0xffffffff;
      }
    }
    iVar10 = 1;
    plVar34 = plVar19 + 2;
    if ((longlong *)plVar19[4] != (longlong *)0x0) {
      plVar34 = (longlong *)plVar19[4];
    }
    iVar12 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar12 = iVar9;
    }
    puVar2 = (uint *)((longlong)plVar34 + (longlong)(iVar12 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar9 & 0x1f);
    pvVar3 = (void *)(*plVar19 + lVar14 * 0x160);
    puVar2 = (uint *)(*plVar19 + lVar14 * 0x160);
    *puVar2 = uVar28;
    FUN_14106add8(puVar2 + 2,&local_328);
    puVar2[0x56] = 0xffffffff;
    uVar21 = *puVar2;
    uVar28 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34);
    if ((uVar28 != 0) && (uVar28 != 1)) {
      plVar34 = plVar19 + 7;
      if ((longlong *)plVar19[8] != (longlong *)0x0) {
        plVar34 = (longlong *)plVar19[8];
      }
      iVar12 = *(int *)((longlong)plVar34 + (ulonglong)((int)plVar19[9] - 1U & uVar21) * 4);
      if (iVar12 != -1) {
        do {
          _Dst = (void *)(*plVar19 + (longlong)iVar12 * 0x160);
          if (*(uint *)(*plVar19 + (longlong)iVar12 * 0x160) == uVar21) {
            FUN_14116e718((longlong)_Dst + 8);
            memmove(_Dst,pvVar3,0x158);
            FUN_14116e410(plVar19,iVar9);
            goto LAB_141170d09;
          }
          iVar12 = *(int *)((longlong)_Dst + 0x158);
        } while (iVar12 != -1);
      }
    }
    if (3 < uVar28) {
      uVar15 = (ulonglong)(uVar28 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar28 < 1) || (iVar10 <= (int)plVar19[9])) {
      uVar21 = (int)plVar19[9] - 1U & uVar21;
      *(uint *)((longlong)pvVar3 + 0x15c) = uVar21;
      plVar34 = (longlong *)plVar19[8];
      if ((longlong *)plVar19[8] == (longlong *)0x0) {
        plVar34 = plVar19 + 7;
      }
      *(undefined4 *)((longlong)pvVar3 + 0x158) =
           *(undefined4 *)
            ((longlong)plVar34 + ((longlong)(int)plVar19[9] - 1U & (longlong)(int)uVar21) * 4);
      plVar34 = plVar19 + 7;
      if ((longlong *)plVar19[8] != (longlong *)0x0) {
        plVar34 = (longlong *)plVar19[8];
      }
      *(int *)((longlong)plVar34 + ((longlong)(int)plVar19[9] - 1U & (longlong)(int)uVar21) * 4) =
           iVar9;
    }
    else {
      *(int *)(plVar19 + 9) = iVar10;
      FUN_1418f5128(plVar19);
    }
LAB_141170d09:
    *(undefined1 *)(lVar25 + 0x118) = 1;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar25 + 0x1b0));
LAB_141170d1a:
  FUN_14116e718(&local_328);
LAB_14116e949:
  if ((local_80 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411715c6 FUN_1411715c6 body=120 status=ok
// SIG undefined FUN_1411715c6(void)

undefined4 FUN_1411715c6(longlong *param_1)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_1 = (longlong *)*param_1;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_c,4);
    }
    else {
      FUN_14572512c(param_1,&local_c);
    }
  }
  else {
    local_c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141171640 FUN_141171640 body=403 status=ok
// SIG undefined FUN_141171640(void)

void FUN_141171640(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_21);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  local_38 = 0xfcf57afa;
  uStack_34 = 0x50764283;
  uStack_30 = 0xb9a9e658;
  uStack_2c = 0xffa02d32;
  iVar2 = FUN_1448a256a(param_1);
  if (iVar2 < 0x42) {
    if (*(int *)((longlong)param_1 + 0x2c) == 0) {
      param_1[7] = 0;
    }
    else {
      lVar5 = FUN_1481bbb82(param_1);
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar5);
      }
      param_1[7] = lVar5;
    }
  }
  lVar5 = param_1[0xb];
  if ((longlong)(int)lVar5 != 0) {
    lVar4 = param_1[10];
    lVar3 = 0;
    do {
      if (iVar2 < 0x47) {
        *(uint *)(lVar4 + 0x50 + lVar3) =
             *(uint *)(lVar4 + 0x50 + lVar3) & 0xfffffffe | *(uint *)(lVar4 + 0x38 + lVar3) & 1;
        *(undefined4 *)(lVar4 + 0x58 + lVar3) = *(undefined4 *)(lVar4 + 0x44 + lVar3);
      }
      lVar3 = lVar3 + 0x98;
    } while ((longlong)(int)lVar5 * 0x98 - lVar3 != 0);
    if ((longlong)(int)param_1[0xb] != 0) {
      lVar5 = param_1[10];
      lVar4 = (longlong)(int)param_1[0xb] * 0x98;
      do {
        FUN_1411717d4(lVar5);
        lVar5 = lVar5 + 0x98;
        lVar4 = lVar4 + -0x98;
      } while (lVar4 != 0);
    }
  }
  if ((longlong)(int)param_1[0xd] != 0) {
    lVar5 = param_1[0xc];
    lVar4 = (longlong)(int)param_1[0xd] * 0x38;
    do {
      FUN_1411717d4(lVar5);
      lVar5 = lVar5 + 0x38;
      lVar4 = lVar4 + -0x38;
    } while (lVar4 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411717d4 FUN_1411717d4 body=1056 status=ok
// SIG undefined FUN_1411717d4(void)

ulonglong FUN_1411717d4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  longlong *plVar11;
  void *_Dst;
  int iVar12;
  longlong lVar13;
  undefined8 unaff_RBX;
  ulonglong uVar14;
  undefined8 unaff_RBP;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  bool bVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong *plVar22;
  bool bVar23;
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
  longlong *local_60;
  longlong *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14cb366a0 == (longlong *)0x0) {
    local_80 = &local_50;
    local_50 = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = &LAB_140eca530;
    local_88 = &LAB_148063819;
    local_90 = &LAB_1460672b6;
    local_98 = L"Niagara";
    local_a0 = 0;
    local_a8 = 0x10000006;
    local_b0 = 8;
    local_b8 = 0x130;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
  }
  plVar22 = DAT_14cb366a0;
  lVar18 = DAT_14cb366a0[0x22];
  if (lVar18 == 0) {
    (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
    lVar18 = plVar22[0x22];
  }
  if ((longlong)*(int *)(lVar18 + 0x128) == 0) {
    uVar14 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    plVar22 = *(longlong **)(lVar18 + 0x120);
    plVar20 = plVar22 + (longlong)*(int *)(lVar18 + 0x128) * 0x10;
    local_60 = param_1 + 2;
    uVar15 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    local_58 = plVar20;
    do {
      uVar14 = 0;
      if ((char)plVar22[2] == '\0') {
        bVar9 = false;
        bVar19 = false;
        do {
          iVar10 = (int)param_1[1];
          uVar16 = (uint)uVar14;
          if (iVar10 <= (int)uVar16) break;
          if ((longlong)(int)plVar22[1] != 0) {
            plVar11 = (longlong *)(uVar14 * 0x10 + *param_1);
            lVar18 = 0;
            do {
              if (*(longlong *)(*plVar22 + lVar18) == *plVar11) {
                bVar23 = (int)plVar11[1] == 0;
                if (~uVar16 + iVar10 != 0) {
                  memmove(plVar11,plVar11 + 2,(longlong)(int)(~uVar16 + iVar10) << 4);
                  iVar10 = (int)param_1[1];
                }
                bVar19 = (bool)(bVar19 | bVar23);
                bVar9 = (bool)(bVar9 | !bVar23);
                *(int *)(param_1 + 1) = iVar10 + -1;
                FUN_1481d73ce(param_1);
                uVar16 = uVar16 - 1;
                plVar20 = local_58;
                break;
              }
              lVar18 = lVar18 + 8;
            } while ((longlong)(int)plVar22[1] * 8 != lVar18);
          }
          uVar14 = (ulonglong)(uVar16 + 1);
        } while (-2 < (int)uVar16);
        if (bVar9) {
          iVar10 = (int)param_1[3];
          *(uint *)(param_1 + 3) = iVar10 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1c) < iVar10 + 1U) {
            FUN_1481d746a(local_60,iVar10);
          }
          lVar18 = *local_60;
          lVar13 = (longlong)iVar10 * 0x30;
          lVar7 = plVar22[4];
          uVar2 = *(undefined4 *)((longlong)plVar22 + 0x24);
          lVar8 = plVar22[5];
          uVar3 = *(undefined4 *)((longlong)plVar22 + 0x2c);
          lVar4 = plVar22[6];
          lVar5 = plVar22[7];
          lVar6 = plVar22[9];
          plVar11 = (longlong *)(lVar18 + 0x20 + lVar13);
          *plVar11 = plVar22[8];
          plVar11[1] = lVar6;
          plVar11 = (longlong *)(lVar18 + 0x10 + lVar13);
          *plVar11 = lVar4;
          plVar11[1] = lVar5;
          puVar1 = (undefined4 *)(lVar18 + lVar13);
          *puVar1 = (int)lVar7;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar8;
          puVar1[3] = uVar3;
        }
        if (bVar19) {
          iVar10 = (int)param_1[3];
          *(uint *)(param_1 + 3) = iVar10 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1c) < iVar10 + 1U) {
            FUN_1481d746a(local_60,iVar10);
          }
          lVar18 = *local_60;
          lVar13 = (longlong)iVar10 * 0x30;
          lVar7 = plVar22[10];
          uVar2 = *(undefined4 *)((longlong)plVar22 + 0x54);
          lVar8 = plVar22[0xb];
          uVar3 = *(undefined4 *)((longlong)plVar22 + 0x5c);
          lVar4 = plVar22[0xc];
          lVar5 = plVar22[0xd];
          lVar6 = plVar22[0xf];
          plVar11 = (longlong *)(lVar18 + 0x20 + lVar13);
          *plVar11 = plVar22[0xe];
          plVar11[1] = lVar6;
          plVar11 = (longlong *)(lVar18 + 0x10 + lVar13);
          *plVar11 = lVar4;
          plVar11[1] = lVar5;
          puVar1 = (undefined4 *)(lVar18 + lVar13);
          *puVar1 = (int)lVar7;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar8;
          puVar1[3] = uVar3;
        }
LAB_141171a45:
        uVar14 = uVar15 & 0xffffffff;
      }
      else if ((char)plVar22[2] == '\x01') {
        bVar9 = false;
        iVar10 = -1;
        iVar17 = -1;
        uVar14 = 0;
        do {
          iVar12 = (int)param_1[1];
          uVar16 = (uint)uVar14;
          if (iVar12 <= (int)uVar16) break;
          if ((longlong)(int)plVar22[1] != 0) {
            plVar11 = (longlong *)(uVar14 * 0x10 + *param_1);
            lVar18 = 0;
            do {
              if (*(longlong *)(*plVar22 + lVar18) == *plVar11) {
                if (bVar9) {
                  uVar14 = 0;
                  if ((iVar10 != (int)plVar11[1]) ||
                     (uVar14 = 0, iVar17 != *(int *)((longlong)plVar11 + 0xc))) goto LAB_141171a47;
                  if (~uVar16 + iVar12 != 0) {
                    memmove(plVar11,plVar11 + 2,(longlong)(int)(~uVar16 + iVar12) << 4);
                    iVar12 = (int)param_1[1];
                  }
                  *(int *)(param_1 + 1) = iVar12 + -1;
                  FUN_1481d73ce(param_1);
                  uVar16 = uVar16 - 1;
                }
                else {
                  *plVar11 = *(longlong *)((longlong)plVar22 + 0x14);
                  iVar10 = (int)plVar11[1];
                  iVar17 = *(int *)((longlong)plVar11 + 0xc);
                }
                bVar9 = true;
                break;
              }
              lVar18 = lVar18 + 8;
            } while ((longlong)(int)plVar22[1] * 8 != lVar18);
          }
          uVar14 = (ulonglong)(uVar16 + 1);
        } while (-2 < (int)uVar16);
        goto LAB_141171a45;
      }
LAB_141171a47:
      plVar22 = plVar22 + 0x10;
      uVar15 = uVar14;
    } while (plVar22 != plVar20);
  }
  iVar10 = (int)param_1[1];
  if (0 < iVar10) {
    uVar15 = 0;
    do {
      uVar21 = uVar15 + 1;
      lVar18 = (longlong)iVar10;
      if ((longlong)uVar21 < lVar18) {
        plVar22 = (longlong *)(uVar15 * 0x10 + *param_1);
        uVar15 = uVar21 & 0xffffffff;
        do {
          lVar18 = *param_1;
          uVar16 = (uint)uVar15;
          if (((*plVar22 == *(longlong *)(lVar18 + (longlong)(int)uVar16 * 0x10)) &&
              (_Dst = (void *)((longlong)(int)uVar16 * 0x10 + lVar18),
              (int)plVar22[1] == *(int *)((longlong)_Dst + 8))) &&
             (*(int *)((longlong)plVar22 + 0xc) == *(int *)((longlong)_Dst + 0xc))) {
            iVar17 = ~uVar16 + iVar10;
            if (iVar17 != 0) {
              if (0 < iVar17) {
                iVar17 = 1;
              }
              memmove(_Dst,(void *)(lVar18 + (longlong)(iVar10 - iVar17) * 0x10),
                      (longlong)iVar17 << 4);
              iVar10 = (int)param_1[1];
            }
            *(int *)(param_1 + 1) = iVar10 + -1;
            FUN_1481d73ce(param_1);
            iVar10 = (int)param_1[1];
          }
          else {
            uVar15 = (ulonglong)(uVar16 + 1);
          }
        } while ((int)uVar15 < iVar10);
        lVar18 = (longlong)iVar10;
      }
      uVar15 = uVar21;
    } while ((longlong)uVar21 < lVar18);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffff01;
}



// FUNCTION 141171bf6 FUN_141171bf6 body=573 status=ok
// SIG undefined FUN_141171bf6(void)

void FUN_141171bf6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ushort *puVar3;
  char cVar4;
  undefined8 uVar5;
  wchar_t *_Str;
  size_t sVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_208 [40];
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  char local_1c8;
  undefined1 local_1c0 [256];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_1408d8aca();
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) goto LAB_141171cbd;
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_141171de5:
    lVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x30);
    lVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(param_1 + 0x34) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)
          ))) goto LAB_141171de5;
      lVar7 = *plVar8;
    }
  }
  cVar4 = FUN_14030d2b6(lVar7 + 0x3c0,&DAT_14cbd96b8);
  if (cVar4 == '\0') {
    FUN_141171e34(param_1);
  }
  else {
    FUN_1411721ae(*(undefined8 *)(param_1 + 0x318),*(undefined4 *)(param_1 + 800));
    *(undefined4 *)(param_1 + 800) = 0;
    if (*(int *)(param_1 + 0x324) != 0) {
      FUN_14117222c(param_1 + 0x318,0);
    }
    FUN_1411721ae(*(undefined8 *)(param_1 + 0x328),*(undefined4 *)(param_1 + 0x330));
    *(undefined4 *)(param_1 + 0x330) = 0;
    if (*(int *)(param_1 + 0x334) != 0) {
      FUN_14117222c(param_1 + 0x328,0);
    }
    uVar5 = FUN_14479d2ce((uint *)(param_1 + 0x30));
    local_1e0 = local_1c0;
    local_1c8 = '\0';
    local_1d0 = local_c0;
    local_1d8 = local_1e0;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"StopProcessing",&local_1e0);
    local_40 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_38 = 0;
      local_30 = 0;
    }
    else {
      sVar6 = wcslen(_Str);
      FUN_1446fe5a4(local_c0,_Str,sVar6 & 0xffffffff,1);
    }
    FUN_1412a486e(uVar5,local_38);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_1c8 == '\x01') {
      FUN_1400020a8(local_1e0);
    }
  }
  puVar3 = *(ushort **)(lVar2 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
  }
LAB_141171cbd:
  if ((local_28 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141171e34 FUN_141171e34 body=889 status=ok
// SIG undefined FUN_141171e34(void)

void FUN_141171e34(longlong param_1)

{
  wchar_t *pwVar1;
  size_t sVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auStack_228 [40];
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  char local_1e8;
  undefined1 local_1e0 [256];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (*(int *)(param_1 + 800) != 0) {
    uVar7 = FUN_14479d2ce(param_1 + 0x30);
    local_200 = local_1e0;
    local_1e8 = '\0';
    local_1f0 = local_e0;
    local_1f8 = local_200;
    pwVar1 = (wchar_t *)FUN_140c7f682(param_1,L"AddLootFeedEntries",&local_200);
    local_60 = (undefined1 *)0x0;
    if (pwVar1 == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
    }
    else {
      sVar2 = wcslen(pwVar1);
      FUN_1446fe5a4(local_e0,pwVar1,sVar2 & 0xffffffff,1);
    }
    FUN_14581e5f8(uVar7,local_58,param_1 + 0x318);
    if (local_60 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_1e8 == '\x01') {
      FUN_1400020a8(local_200);
    }
    FUN_1411721ae(*(undefined8 *)(param_1 + 0x318),*(undefined4 *)(param_1 + 800));
    *(undefined4 *)(param_1 + 800) = 0;
    if (*(int *)(param_1 + 0x324) != 0) {
      FUN_14117222c(param_1 + 0x318,0);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x330) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x328);
    lVar6 = (longlong)*(int *)(param_1 + 0x330) << 7;
    do {
      if ((*(int *)(param_1 + 0x34) == 0) || (uVar8 = *(uint *)(param_1 + 0x30), (int)uVar8 < 0)) {
LAB_141172116:
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        if ((int)uVar8 < DAT_14c9647dc) {
          puVar4 = (undefined8 *)
                   ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
          if (((puVar4 == (undefined8 *)0x0) || (*(int *)(puVar4 + 2) != *(int *)(param_1 + 0x34)))
             || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)) goto LAB_141172116;
          uVar7 = *puVar4;
        }
      }
      local_1e8 = '\0';
      local_200 = local_1e0;
      local_1f0 = local_e0;
      local_1f8 = local_200;
      pwVar1 = (wchar_t *)FUN_140c7f682(param_1,L"UpdateCurrencyEntry",&local_200);
      local_60 = (undefined1 *)0x0;
      if (pwVar1 == (wchar_t *)0x0) {
        local_58 = (undefined1 *)0x0;
        local_50 = 0;
      }
      else {
        sVar2 = wcslen(pwVar1);
        local_50 = FUN_14475aa65(0,pwVar1,sVar2 & 0xffffffff);
        uVar8 = local_50 + 1;
        puVar3 = (undefined1 *)0x0;
        if (0x80 < uVar8) {
          FUN_1446efa72(&local_60,0,uVar8,1);
          puVar3 = local_60;
        }
        local_58 = puVar3;
        if (puVar3 == (undefined1 *)0x0) {
          local_58 = local_e0;
        }
        FUN_14475a98a(local_58,uVar8,pwVar1,(int)sVar2 + 1);
      }
      FUN_14117228c(uVar7,local_58,lVar5);
      if (local_60 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_1e8 == '\x01') {
        FUN_1400020a8(local_200);
      }
      lVar5 = lVar5 + 0x80;
      lVar6 = lVar6 + -0x80;
    } while (lVar6 != 0);
    FUN_1411721ae(*(undefined8 *)(param_1 + 0x328),*(undefined4 *)(param_1 + 0x330));
    *(undefined4 *)(param_1 + 0x330) = 0;
    if (*(int *)(param_1 + 0x334) != 0) {
      FUN_14117222c(param_1 + 0x328,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411721ae FUN_1411721ae body=125 status=ok
// SIG undefined FUN_1411721ae(void)

void FUN_1411721ae(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x58);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)plVar1[-7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-7] + 0x10))();
      }
      if ((longlong *)plVar1[-9] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-9] + 0x10))();
      }
      if (plVar1[-0xb] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14117222c FUN_14117222c body=96 status=ok
// SIG undefined FUN_14117222c(void)

void FUN_14117222c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 7,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,8);
  }
  return;
}



// FUNCTION 14117228c FUN_14117228c body=610 status=ok
// SIG undefined FUN_14117228c(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x0001411724e4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14117228c(longlong param_1,char *param_2,undefined8 param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 auStack_238 [40];
  longlong local_210;
  undefined8 local_208;
  longlong local_200 [2];
  longlong *local_1f0;
  longlong *local_1e0;
  longlong local_1c8;
  longlong local_1b8;
  longlong local_1a8;
  undefined1 local_180 [256];
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  code *local_68;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_80 = 0;
  if (param_2 == (char *)0x0) {
    local_78 = 0;
    local_70 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    FUN_1446e6fe8(local_180,param_2,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(&local_210,local_78);
  FUN_1411724f0(local_200,param_3);
  pcVar4 = (code *)0x0;
  local_68 = (code *)0x0;
  local_58 = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x98,8);
  *puVar2 = &PTR_FUN_14b9c10e0;
  puVar2[1] = local_210;
  local_210 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_208;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_208._4_4_;
  local_208 = 0;
  FUN_1411724f0(puVar2 + 3,local_200);
  if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
    pcVar4 = FUN_141257da0;
    local_68 = FUN_141257da0;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = pcVar4;
  puVar3[4] = puVar2;
  local_58 = 0;
  *(undefined4 *)(puVar3 + 8) = local_38;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_34;
  *(undefined4 *)(puVar3 + 9) = uStack_30;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_2c;
  *(undefined4 *)(puVar3 + 6) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_44;
  *(undefined4 *)(puVar3 + 7) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_3c;
  if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_68 = (code *)0x0;
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    *puVar2 = puVar3;
    UNLOCK();
    if (local_68 != (code *)0x0) {
      (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))();
    }
  }
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  if (local_1e0 != (longlong *)0x0) {
    (**(code **)(*local_1e0 + 0x10))();
  }
  if (local_1f0 != (longlong *)0x0) {
    (**(code **)(*local_1f0 + 0x10))();
  }
  if (local_200[0] != 0) {
    FUN_1400020a8();
  }
  if (local_210 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411724f0 FUN_1411724f0 body=386 status=ok
// SIG undefined FUN_1411724f0(void)

undefined8 * FUN_1411724f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
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
  plVar3 = (longlong *)param_2[2];
  param_1[2] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  plVar3 = (longlong *)param_2[4];
  param_1[4] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar2 = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xf] = param_2[0xf];
  uVar4 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar4;
  return param_1;
}



// FUNCTION 141172672 FUN_141172672 body=195 status=ok
// SIG undefined FUN_141172672(void)

undefined8 FUN_141172672(ushort param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  lVar2 = DAT_14cae3fc8;
  uVar5 = (ulonglong)param_1;
  uVar6 = 0;
  if ((3 < (int)(&DAT_14ca814b8)[uVar5 * 0xf]) && (0 < DAT_14cae3fd0)) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if ((iVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar1 == 2)))) {
      uVar7 = 0;
    }
    else if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar7 = 1;
    }
    if ((((*(int *)(lVar2 + uVar7 * 4) < 1) ||
         ((*(byte *)((longlong)&DAT_14ca814d0 + uVar5 * 0x3c + 5) & 8) == 0)) ||
        ((int)(&DAT_14ca814b8)[uVar5 * 0xf] < 3)) ||
       (lVar2 = *(longlong *)(&DAT_14ca814b0 + uVar5 * 0x3c), lVar2 == DAT_14ca81498)) {
      uVar6 = 0;
    }
    else {
      uVar6 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 != DAT_14ca838f8);
    }
  }
  return uVar6;
}



// FUNCTION 141172736 FUN_141172736 body=24 status=ok
// SIG undefined FUN_141172736(void)

void FUN_141172736(void)

{
  FUN_14117274e();
  return;
}



// FUNCTION 14117274e FUN_14117274e body=2200 status=ok
// SIG undefined FUN_14117274e(void)

/* WARNING: Removing unreachable block (ram,0x000141172c91) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffe40 : 0x000141172909 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_14117274e(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4,longlong param_5)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_1e8 [32];
  char local_1c8 [8];
  longlong local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  int local_1a0;
  undefined8 local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  int local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  byte local_158;
  undefined1 local_130 [64];
  char local_f0 [16];
  longlong *local_e0;
  int local_c8;
  char local_c0 [8];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  int local_98 [2];
  undefined8 local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((param_5 == 0) &&
     (plVar5 = (longlong *)FUN_14117322c(param_1,param_2), plVar5 != (longlong *)0x0)) {
    uVar6 = FUN_1401fa540();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar6);
    if (plVar5 == (longlong *)0x0) goto LAB_1411727f4;
    uVar6 = FUN_1401fa540();
    plVar7 = (longlong *)FUN_144718840(plVar5,uVar6);
    if (((plVar5 == plVar7) || (plVar7 == (longlong *)0x0)) ||
       (lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7), lVar8 == 0)) goto LAB_1411727f4;
    FUN_141172fe8(lVar8,param_3);
LAB_141172c06:
    uVar6 = 1;
  }
  else {
LAB_1411727f4:
    if (*(int *)((longlong)param_1 + 0x54) != 0) {
      uVar2 = *(uint *)(param_1 + 10);
      uVar6 = 0;
      if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141172c08;
      plVar5 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((((plVar5 != (longlong *)0x0) &&
           (((int)plVar5[2] == *(int *)((longlong)param_1 + 0x54) &&
            ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) && (lVar8 = *plVar5, lVar8 != 0)) &&
         ((plVar5 = (longlong *)FUN_141173630(param_1,param_2), plVar5 != (longlong *)0x0 &&
          (puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x128))(plVar5),
          puVar9 != (undefined8 *)0x0)))) {
        local_f0[0] = '\0';
        local_c8 = 0;
        FUN_1456bb102(local_f0,lVar8);
        FUN_1411730a6(local_1c8,local_f0);
        local_168 = *puVar9;
        uStack_160 = *(undefined4 *)(puVar9 + 1);
        local_188 = puVar9[2];
        uStack_180 = *(undefined4 *)(puVar9 + 3);
        local_158 = param_4 << 3 | local_158 & 0xf7 | 1;
        local_c0[0] = local_1c8[0];
        if (local_1c8[0] == '\x01') {
          local_c0[0] = '\x02';
          if (local_1c0 == 0) {
            local_b8._0_4_ = 0;
            iVar4 = 0;
            uVar2 = (uint)local_b8;
          }
          else {
            uVar2 = *(uint *)(local_1c0 + 0xc);
            local_b8 = (ulonglong)uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar8 = 0;
            }
            iVar4 = *(int *)(lVar8 + 0x10);
            if (*(int *)(lVar8 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar12 = DAT_14c964868 + 1;
              bVar15 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar15) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar12);
              }
              LOCK();
              iVar4 = *(int *)(lVar8 + 0x10);
              bVar15 = iVar4 == 0;
              if (bVar15) {
                *(int *)(lVar8 + 0x10) = iVar12;
                iVar4 = 0;
              }
              UNLOCK();
              uVar2 = (uint)local_b8;
              if (bVar15) {
                iVar4 = iVar12;
              }
            }
          }
          local_b8._0_4_ = uVar2;
          local_b8 = CONCAT44(iVar4,(uint)local_b8);
        }
        else if (local_1c8[0] == '\x02') {
          local_b8 = local_1c0;
        }
        else if (local_1c8[0] == '\x03') {
          local_b0 = local_1b8;
          local_b8 = local_1c0;
          if (local_1b8 == (longlong *)0x0) {
            local_a8 = local_1b0;
            local_a0 = local_1a8;
          }
          else {
            LOCK();
            *(int *)((longlong)local_1b8 + 0xc) = *(int *)((longlong)local_1b8 + 0xc) + 1;
            UNLOCK();
            local_a8 = local_1b0;
            local_a0 = local_1a8;
          }
        }
        local_98[0] = 0;
        if (local_1a0 != 0) {
          uVar6 = FUN_1448174c4(local_98);
          FUN_1400e08b0(uVar6,DAT_14c9a3da0 + (longlong)local_1a0 * 0x10 + -0x10);
        }
        iVar4 = local_170;
        lVar8 = local_178;
        local_90 = local_198;
        local_88 = local_190;
        if (local_190 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_190 + 1) = (int)local_190[1] + 1;
          UNLOCK();
        }
        local_80 = (undefined4)local_188;
        uStack_7c = local_188._4_4_;
        uStack_78 = uStack_180;
        uStack_74 = uStack_17c;
        local_70 = 0;
        local_68 = local_170;
        if (local_170 == 0) {
          local_64 = 0;
          local_170 = 0;
        }
        else {
          FUN_14050dc9a(&local_70,local_170,0);
          FUN_14050dbeb(local_70,lVar8,iVar4);
        }
        local_50 = local_158;
        local_60 = (undefined4)local_168;
        uStack_5c = local_168._4_4_;
        uStack_58 = uStack_160;
        uStack_54 = uStack_15c;
        FUN_14050d869(local_178,local_170);
        if (local_178 != 0) {
          FUN_1400020a8();
        }
        if (local_190 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_190 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_190)(local_190);
            LOCK();
            piVar1 = (int *)((longlong)local_190 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_190 + 0x10))(local_190);
            }
          }
        }
        lVar8 = DAT_14c9a3da0;
        if ((longlong)local_1a0 != 0) {
          lVar14 = (longlong)local_1a0 + -1;
          lVar13 = lVar14 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
          if (*(longlong *)(lVar8 + lVar13) != 0) {
            FUN_1400020a8();
          }
          lVar8 = DAT_14c9a3da0;
          iVar4 = (int)lVar14;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar4;
          }
          *(undefined4 *)(lVar8 + lVar13) = 0xffffffff;
          iVar12 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar12 = DAT_14c9a3dd0;
          }
          *(int *)(lVar8 + 4 + lVar13) = iVar12;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar11 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar11 = DAT_14c9a3dc0;
          }
          iVar12 = iVar4 + 0x1f;
          if (-1 < iVar4) {
            iVar12 = iVar4;
          }
          bVar3 = (byte)lVar14 & 0x1f;
          DAT_14c9a3dd0 = iVar4;
          *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
               *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
               (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
          local_1a0 = 0;
        }
        if (local_1c8[0] != '\0') {
          if (local_1c8[0] == '\x01') {
            local_1c0 = 0;
          }
          else if ((local_1c8[0] == '\x03') && (local_1b8 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_1b8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_1b8 + 0x10))();
            }
          }
          local_1c8[0] = '\0';
        }
        lVar8 = DAT_14c9a3da0;
        if ((longlong)local_c8 != 0) {
          lVar14 = (longlong)local_c8 + -1;
          lVar13 = lVar14 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
          if (*(longlong *)(lVar8 + lVar13) != 0) {
            FUN_1400020a8();
          }
          lVar8 = DAT_14c9a3da0;
          iVar4 = (int)lVar14;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar4;
          }
          *(undefined4 *)(lVar8 + lVar13) = 0xffffffff;
          iVar12 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar12 = DAT_14c9a3dd0;
          }
          *(int *)(lVar8 + 4 + lVar13) = iVar12;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar11 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar11 = DAT_14c9a3dc0;
          }
          iVar12 = iVar4 + 0x1f;
          if (-1 < iVar4) {
            iVar12 = iVar4;
          }
          bVar3 = (byte)lVar14 & 0x1f;
          DAT_14c9a3dd0 = iVar4;
          *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
               *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
               (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
          local_c8 = 0;
        }
        if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_e0 + 0x10))();
          }
        }
        if (param_5 == 0) {
          if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
            lVar8 = *param_2;
            uVar2 = (uint)((ulonglong)lVar8 >> 0x10);
            uVar10 = (uint)lVar8 & 0xffff;
            plVar5 = param_1 + 7;
            if ((longlong *)param_1[8] != (longlong *)0x0) {
              plVar5 = (longlong *)param_1[8];
            }
            iVar4 = *(int *)((longlong)plVar5 +
                            (ulonglong)
                            ((int)param_1[9] - 1U &
                            (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar10) +
                            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar10 >> 4)) * 4);
            if (iVar4 != -1) {
              do {
                param_5 = *param_1 + (longlong)iVar4 * 0x20;
                if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x20) == lVar8) {
                  if ((param_5 != 0) && (param_5 = param_5 + 8, param_5 != 0)) goto LAB_141172f69;
                  break;
                }
                iVar4 = *(int *)(param_5 + 0x18);
              } while (iVar4 != -1);
            }
          }
        }
        else {
LAB_141172f69:
          FUN_1411739ca(local_c0,param_5);
        }
        FUN_14050efc4(local_c0,local_1c8);
        FUN_14099a466(param_3,local_130);
        FUN_14050f14e(local_1c8);
        FUN_14050d869(local_70,local_68);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        plVar5 = local_88;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_88 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        lVar8 = DAT_14c9a3da0;
        if ((longlong)local_98[0] != 0) {
          lVar13 = (longlong)local_98[0] + -1;
          lVar14 = lVar13 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
          if (*(longlong *)(lVar8 + lVar14) != 0) {
            FUN_1400020a8();
          }
          lVar8 = DAT_14c9a3da0;
          iVar4 = (int)lVar13;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar4;
          }
          *(undefined4 *)(lVar8 + lVar14) = 0xffffffff;
          iVar12 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar12 = DAT_14c9a3dd0;
          }
          *(int *)(lVar8 + 4 + lVar14) = iVar12;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar11 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar11 = DAT_14c9a3dc0;
          }
          iVar12 = iVar4 + 0x1f;
          if (-1 < iVar4) {
            iVar12 = iVar4;
          }
          bVar3 = (byte)lVar13 & 0x1f;
          DAT_14c9a3dd0 = iVar4;
          *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
               *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
               (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
          local_98[0] = 0;
        }
        if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b0 + 0x10))();
          }
        }
        goto LAB_141172c06;
      }
    }
    uVar6 = 0;
  }
LAB_141172c08:
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141172fe8 FUN_141172fe8 body=93 status=ok
// SIG undefined FUN_141172fe8(void)

void FUN_141172fe8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  FUN_14028f404(*param_2,*(undefined4 *)(param_2 + 1));
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1487bfb9e(param_2,0);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_141173046(param_2,*(longlong *)(param_1 + 0x40) + 0x38);
    return;
  }
  return;
}



// FUNCTION 141173046 FUN_141173046 body=96 status=ok
// SIG undefined FUN_141173046(void)

void FUN_141173046(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140950f1e(param_1,iVar2);
    }
    FUN_14099a4c3((longlong)iVar2 * 0x28 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1411730a6 FUN_1411730a6 body=390 status=ok
// SIG undefined FUN_1411730a6(void)

char * FUN_1411730a6(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  *param_1 = '\0';
  cVar1 = *param_2;
  *param_1 = cVar1;
  pcVar3 = param_2;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      goto LAB_14117311b;
    }
    if (cVar1 != '\x03') goto LAB_14117311b;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    lVar7 = *(longlong *)(param_2 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar7;
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      param_1[0x20] = param_2[0x20];
      goto LAB_14117311b;
    }
    LOCK();
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    param_1[0x20] = param_2[0x20];
    pcVar3 = param_1;
    if (*param_1 != '\x01') goto LAB_14117311b;
  }
  lVar7 = *(longlong *)(pcVar3 + 8);
  *param_1 = '\x02';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  if (lVar7 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar7 + 0xc);
    *(uint *)(param_1 + 8) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar4 = iVar6;
      }
    }
  }
  *(int *)(param_1 + 0xc) = iVar4;
LAB_14117311b:
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar5 = FUN_1448174c4(param_1 + 0x28);
    FUN_1400e08b0(uVar5,DAT_14c9a3da0 + (longlong)*(int *)(param_2 + 0x28) * 0x10 + -0x10);
  }
  param_1[0x70] = '\0';
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  param_1[0x48] = '\0';
  param_1[0x49] = '\0';
  param_1[0x4a] = '\0';
  param_1[0x4b] = '\0';
  param_1[0x50] = '\0';
  param_1[0x51] = '\0';
  param_1[0x52] = '\0';
  param_1[0x53] = '\0';
  param_1[0x54] = '\0';
  param_1[0x55] = '\0';
  param_1[0x56] = '\0';
  param_1[0x57] = '\0';
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  param_1[0x5c] = '\0';
  param_1[0x5d] = '\0';
  param_1[0x5e] = '\0';
  param_1[0x5f] = '\0';
  param_1[0x5c] = '\0';
  param_1[0x5d] = '\0';
  param_1[0x5e] = '\0';
  param_1[0x5f] = '\0';
  param_1[0x60] = '\0';
  param_1[0x61] = '\0';
  param_1[0x62] = '\0';
  param_1[99] = '\0';
  param_1[100] = '\0';
  param_1[0x65] = '\0';
  param_1[0x66] = '\0';
  param_1[0x67] = '\0';
  param_1[0x68] = '\0';
  param_1[0x69] = '\0';
  param_1[0x6a] = '\0';
  param_1[0x6b] = '\0';
  return param_1;
}



// FUNCTION 14117322c FUN_14117322c body=1011 status=ok
// SIG undefined FUN_14117322c(void)

undefined8 FUN_14117322c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar1 = *(uint *)(param_1 + 0x50);
    uVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1411733cb;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       ((((int)plVar4[2] == *(int *)(param_1 + 0x54) && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0))
        && (lVar2 = *plVar4, lVar2 != 0)))) {
      lVar3 = *param_2;
      if (lVar3 == DAT_14cbcfbd8) {
        lVar2 = *(longlong *)(lVar2 + 0x168);
        if (lVar2 != 0) {
          if (DAT_14cbadd90 == 0) {
            local_30 = &local_18;
            local_18 = FUN_141030f22;
            local_20 = FUN_14081d0ea;
            local_28 = &LAB_1459f2e4c;
            local_38 = &LAB_148c39de3;
            local_40 = &LAB_1457a9eb2;
            local_48 = &DAT_149e063b2;
            local_50 = 0;
            local_58 = 0x10000004;
            local_60 = 0x10;
            local_68 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
            uVar6 = *(undefined8 *)(lVar2 + 0xf48);
            goto LAB_1411733cb;
          }
        }
      }
      else if (lVar3 == DAT_14cbcfbe0) {
        lVar2 = *(longlong *)(lVar2 + 0x168);
        if (lVar2 != 0) {
          if (DAT_14cbadd90 == 0) {
            local_30 = &local_18;
            local_18 = FUN_141030f22;
            local_20 = FUN_14081d0ea;
            local_28 = &LAB_1459f2e4c;
            local_38 = &LAB_148c39de3;
            local_40 = &LAB_1457a9eb2;
            local_48 = &DAT_149e063b2;
            local_50 = 0;
            local_58 = 0x10000004;
            local_60 = 0x10;
            local_68 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
              (lVar2 = *(longlong *)(lVar2 + 0xf48), lVar2 != 0)) && (*(int *)(lVar2 + 0x4ef4) != 0)
             ) {
            uVar1 = *(uint *)(lVar2 + 0x4ef0);
            uVar6 = 0;
            if (((int)uVar1 < 0) || (uVar6 = 0, DAT_14c9647dc <= (int)uVar1)) goto LAB_1411733cb;
            puVar5 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar5 != (undefined8 *)0x0) &&
               ((*(int *)(puVar5 + 2) == *(int *)(lVar2 + 0x4ef4) &&
                ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
              uVar6 = *puVar5;
              goto LAB_1411733cb;
            }
          }
        }
      }
      else if ((lVar3 == DAT_14cbcfbe8) && (lVar2 = *(longlong *)(lVar2 + 0x168), lVar2 != 0)) {
        if (DAT_14cbadd90 == 0) {
          local_30 = &local_18;
          local_18 = FUN_141030f22;
          local_20 = FUN_14081d0ea;
          local_28 = &LAB_1459f2e4c;
          local_38 = &LAB_148c39de3;
          local_40 = &LAB_1457a9eb2;
          local_48 = &DAT_149e063b2;
          local_50 = 0;
          local_58 = 0x10000004;
          local_60 = 0x10;
          local_68 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
            DAT_14cbadd90 + 0x30)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  uVar6 = 0;
LAB_1411733cb:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141173630 FUN_141173630 body=920 status=ok
// SIG undefined FUN_141173630(void)

longlong FUN_141173630(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_14117387f:
    lVar6 = 0;
    goto LAB_1411737dc;
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  lVar6 = 0;
  if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1411737dc;
  plVar3 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if ((plVar3 == (longlong *)0x0) ||
     ((((int)plVar3[2] != *(int *)(param_1 + 0x54) || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))
      || (*plVar3 == 0)))) goto LAB_14117387f;
  lVar6 = *param_2;
  if (lVar6 != DAT_14cbcfbd8) {
    if (lVar6 != DAT_14cbcfbe0) {
      if ((lVar6 == DAT_14cbcfbe8) && (lVar6 = *(longlong *)(*plVar3 + 0x168), lVar6 != 0)) {
        if (DAT_14cbadd90 == 0) {
          local_50 = &local_38;
          local_38 = FUN_141030f22;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1459f2e4c;
          local_58 = &LAB_148c39de3;
          local_60 = &LAB_1457a9eb2;
          local_68 = &DAT_149e063b2;
          local_70 = 0;
          local_78 = 0x10000004;
          local_80 = 0x10;
          local_88 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          FUN_140a9b590(lVar6 + 0x3910,&local_38,0);
          if (local_30 == 0) {
            uVar5 = FUN_14037df6e();
            local_30 = FUN_14477b664(uVar5);
          }
          lVar6 = local_28;
          if (local_28 != 0) goto LAB_1411737dc;
          if (((local_38 != (code *)0x0) && (local_30 != 0)) &&
             (plVar3 = *(longlong **)(local_30 + 0xb8), plVar3 != (longlong *)0x0)) {
            cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3);
            if (cVar2 != '\0') {
              uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar6 = FUN_144aff482(uVar5,&local_38);
              goto LAB_1411737dc;
            }
          }
        }
      }
      goto LAB_14117387f;
    }
    lVar4 = FUN_1403ca227();
    lVar7 = *(longlong *)(lVar4 + 0x28);
    if (lVar7 == 0) {
      uVar5 = FUN_14121240e();
      lVar7 = FUN_14477b664(uVar5);
      *(longlong *)(lVar4 + 0x28) = lVar7;
    }
    lVar6 = *(longlong *)(lVar4 + 0x30);
    if (((*(longlong *)(lVar4 + 0x30) != 0) || (lVar6 = 0, lVar7 == 0)) ||
       (*(longlong *)(lVar4 + 0x20) == 0)) goto LAB_1411737dc;
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if (plVar3 == (longlong *)0x0) {
LAB_1411739c2:
      lVar6 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar2 == '\0') goto LAB_1411739c2;
      uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x20));
    }
    *(longlong *)(lVar4 + 0x30) = lVar6;
    goto LAB_1411737dc;
  }
  lVar4 = FUN_1403b0700();
  lVar7 = *(longlong *)(lVar4 + 0x40);
  if (lVar7 == 0) {
    uVar5 = FUN_140355b7c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x40) = lVar7;
  }
  lVar6 = *(longlong *)(lVar4 + 0x48);
  if (((lVar6 != 0) || (lVar6 = 0, lVar7 == 0)) || (*(longlong *)(lVar4 + 0x38) == 0))
  goto LAB_1411737dc;
  plVar3 = *(longlong **)(lVar7 + 0xb8);
  if (plVar3 == (longlong *)0x0) {
LAB_141173970:
    lVar6 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3);
    if (cVar2 == '\0') goto LAB_141173970;
    uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x38));
  }
  *(longlong *)(lVar4 + 0x48) = lVar6;
LAB_1411737dc:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411739ca FUN_1411739ca body=189 status=ok
// SIG undefined FUN_1411739ca(void)

longlong FUN_1411739ca(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141173a88(&local_30,param_2,0);
  plVar1 = local_28;
  *(undefined8 *)(param_1 + 0x30) = local_30;
  local_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (local_28 != plVar3) {
    local_28 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x38) = plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_141173a20;
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
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_141173a20:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141173a88 FUN_141173a88 body=140 status=ok
// SIG undefined FUN_141173a88(void)

undefined8 * FUN_141173a88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141173b16(&local_28,param_2,param_3,&DAT_14cb71050);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141173b16 FUN_141173b16 body=701 status=ok
// SIG undefined FUN_141173b16(void)

undefined8
FUN_141173b16(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t wVar1;
  char *pcVar2;
  wchar_t *pwVar3;
  int iVar4;
  char cVar5;
  size_t sVar6;
  uint uVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  uint uVar10;
  wchar_t *_Str;
  int iVar11;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  uint local_104;
  char local_100 [128];
  char *local_80;
  char *local_78;
  uint local_70;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_80 = (char *)0x0;
  local_110 = param_4;
  if (_Str == (wchar_t *)0x0) {
    local_78 = (char *)0x0;
    local_70 = 0;
  }
  else {
    sVar6 = wcslen(_Str);
    local_104 = 0;
    local_68 = (char *)CONCAT44(local_68._4_4_,0x7fffffff);
    uVar8 = sVar6 & 0xffffffff;
    pwVar9 = _Str;
    do {
      iVar11 = (int)uVar8;
      if (iVar11 < 1) {
LAB_141173c2b:
        local_70 = local_104;
        uVar7 = local_104 + 1;
        if (uVar7 < 0x81) goto LAB_141173c44;
        FUN_1446efa72(&local_80,0,uVar7,1);
        local_78 = local_80;
        goto LAB_141173c46;
      }
      wVar1 = *pwVar9;
      uVar7 = (uint)(ushort)wVar1;
      pwVar3 = pwVar9 + 1;
      uVar10 = iVar11 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar11 == 1) {
          cVar5 = FUN_140024707(uVar7,&local_104,&local_68);
          if (cVar5 != '\0') goto LAB_141173c2b;
          break;
        }
        if (((ushort)*pwVar3 & 0xfc00) == 0xdc00) {
          uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar3 + 0xfca02400;
          uVar10 = iVar11 - 2;
          pwVar3 = pwVar9 + 2;
        }
      }
      pwVar9 = pwVar3;
      cVar5 = FUN_140024707(uVar7,&local_104,&local_68);
      uVar8 = (ulonglong)uVar10;
    } while (cVar5 != '\0');
    local_70 = 0xffffffff;
    uVar7 = 0;
LAB_141173c44:
    local_78 = (char *)0x0;
LAB_141173c46:
    if (local_78 == (char *)0x0) {
      local_78 = local_100;
    }
    iVar11 = (int)sVar6 + 1;
    local_104 = uVar7;
    local_68 = local_78;
    do {
      if (iVar11 < 1) break;
      wVar1 = *_Str;
      uVar7 = (uint)(ushort)wVar1;
      pwVar9 = _Str + 1;
      iVar4 = iVar11 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar11 == 1) {
          FUN_1400247af(uVar7,&local_68,&local_104);
          break;
        }
        if (((ushort)*pwVar9 & 0xfc00) == 0xdc00) {
          uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar9 + 0xfca02400;
          pwVar9 = _Str + 2;
          iVar4 = iVar11 + -2;
        }
      }
      iVar11 = iVar4;
      cVar5 = FUN_1400247af(uVar7,&local_68,&local_104);
      _Str = pwVar9;
    } while (cVar5 != '\0');
  }
  pcVar2 = local_78;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (char *)0x0;
  uStack_60 = 0;
  sVar6 = strlen(local_78);
  FUN_140cd1a74(&local_68,pcVar2,sVar6);
  FUN_141173dd4(param_1,&local_68,param_3,local_110);
  FUN_1401d9a90(&local_68);
  if (local_80 != (char *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141173dd4 FUN_141173dd4 body=637 status=ok
// SIG undefined FUN_141173dd4(void)

longlong * FUN_141173dd4(longlong *param_1,longlong param_2,undefined4 *param_3,undefined2 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  local_80 = 0x10100;
  local_7c = 0xffff;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_58 = 0;
  uStack_50 = uStack_50 & 0xffffff00;
  local_48 = (undefined8 *)0x0;
  if (param_3 != (undefined4 *)0x0) {
    local_7c = *(undefined2 *)(param_3 + 1);
    local_80 = *param_3;
    FUN_1401d7e14(&local_78,param_3 + 2);
    local_58 = *(undefined8 *)(param_3 + 10);
    uStack_50 = param_3[0xc];
    uStack_4c = param_3[0xd];
    local_48 = *(undefined8 **)(param_3 + 0xe);
  }
  if (param_4 != (undefined2 *)0x0) {
    local_7c = *param_4;
    FUN_1401d7e14(&local_78,param_4 + 4);
  }
  plVar5 = (longlong *)FUN_14001cc68(0x120,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b3e6280;
  plVar6 = plVar5 + 2;
  FUN_143e26110(plVar6);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  cVar4 = FUN_143e1f778(plVar6,param_2,&local_80);
  if (cVar4 != '\0') {
    if (param_4 == (undefined2 *)0x0) {
      param_4 = (undefined2 *)FUN_143e1f5ee(plVar6);
      if (param_4 != (undefined2 *)0x0) goto LAB_141173f13;
LAB_141173f7f:
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
LAB_141173f13:
      if (*(code **)(param_4 + 0x30) == (code *)0x0) goto LAB_141173f7f;
      (**(code **)(param_4 + 0x30))(param_1);
      plVar2 = (longlong *)*param_1;
      if (plVar2 != (longlong *)0x0) {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        plVar3 = (longlong *)plVar2[3];
        plVar2[2] = (longlong)plVar6;
        plVar2[3] = (longlong)plVar5;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar3 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
          plVar6 = (longlong *)plVar2[2];
        }
        if (plVar6 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_3);
          if (cVar4 != '\0') goto LAB_141173fb3;
        }
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
    }
    plVar6 = (longlong *)param_1[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_141173fb3:
  if (plVar5 != (longlong *)0x0) {
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
  }
  if (((char)uStack_50 == '\x01') && (local_48 != (undefined8 *)0x0)) {
    (**(code **)*local_48)(local_48,1);
    local_48 = (undefined8 *)0x0;
  }
  FUN_1401d9a90(&local_78);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117405e FUN_14117405e body=228 status=ok
// SIG undefined FUN_14117405e(void)

longlong FUN_14117405e(void)

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
  if (DAT_14cba5260 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1465aab14;
    local_38 = &LAB_148bd4e1f;
    local_40 = &LAB_145833902;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2a40;
    FUN_14081cfa3(L"/Script/OakGame",L"LevelTravelStationObject",&DAT_14cba5260,FUN_1465c1ac8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba5260;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141174144 FUN_141174144 body=33 status=ok
// SIG undefined FUN_141174144(void)

undefined1 FUN_141174144(longlong param_1,undefined8 param_2,longlong param_3)

{
  if (-1 < param_3) {
    FUN_141174166();
    *(undefined1 *)(param_1 + 0xe4) = 0;
  }
  return 1;
}



// FUNCTION 141174166 FUN_141174166 body=308 status=ok
// SIG undefined FUN_141174166(void)

bool FUN_141174166(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = param_1 + 0x18;
  if (param_1[0x1a] == 0) {
    lVar2 = param_1[0x1b];
    if (lVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(lVar2);
    }
    if (lVar2 != 0) {
      FUN_140d2d4a8(plVar1);
    }
  }
  if (param_1[0x15] == param_2) {
    lVar3 = param_1[0x14] - param_2;
    if (param_1[0x1b] < param_1[0x14] - param_2) {
      lVar3 = param_1[0x1b];
    }
    if (lVar3 < 1) {
LAB_141174261:
      bVar4 = false;
      goto LAB_141174272;
    }
    if ((param_1[0x16] <= param_2) && (bVar4 = true, param_2 < param_1[0x16] + param_1[0x19]))
    goto LAB_141174272;
    FUN_1415d7a80(plVar1,lVar3,0);
    param_1[0x16] = param_1[0x15];
    local_30 = 0;
    (**(code **)(*param_1 + 0x270))(param_1,param_1[0x18],lVar3,&local_30);
    lVar2 = local_30;
    bVar4 = true;
    if (local_30 == lVar3) goto LAB_141174272;
    FUN_1415d7a80(plVar1,local_30,1);
    bVar5 = false;
    bVar4 = lVar2 == 0;
  }
  else {
    if (param_2 < param_1[0x16]) goto LAB_141174261;
    lVar3 = param_1[0x16] + param_1[0x19];
    bVar5 = SBORROW8(lVar3,param_2);
    lVar2 = lVar3 - param_2;
    bVar4 = lVar3 == param_2;
  }
  bVar4 = !bVar4 && bVar5 == lVar2 < 0;
LAB_141174272:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117429c FUN_14117429c body=176 status=ok
// SIG undefined FUN_14117429c(void)

void FUN_14117429c(int *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = param_1[6];
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 4);
    lVar4 = 0;
    do {
      *param_1 = *param_1 + *(int *)(lVar2 + 8 + lVar4);
      if (*(longlong *)(lVar2 + lVar4) != 0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
    param_1[6] = 0;
    if (param_1[7] != 0) {
      FUN_14117434c(param_1 + 4);
    }
    lVar2 = (longlong)*param_1 * 8;
    lVar4 = -1;
    if (-1 < (longlong)*param_1) {
      lVar4 = lVar2 + (ulonglong)(lVar2 == 0);
    }
    uVar3 = FUN_14001cc68(lVar4,0x10);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 14117434c FUN_14117434c body=48 status=ok
// SIG undefined FUN_14117434c(void)

void FUN_14117434c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14117437c FUN_14117437c body=699 status=ok
// SIG undefined FUN_14117437c(void)

void FUN_14117437c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    uVar3 = FUN_14019257c(lVar2);
    if (DAT_14cae8b20 == 0) {
      local_40 = &local_28;
      local_28 = (code *)&LAB_14355090c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147b8e16d;
      local_50 = (code *)&LAB_140810a38;
      local_58 = L"Engine";
      local_60 = 0x800000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar2 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1468c5283;
      local_50 = FUN_142809da0;
      local_58 = L"Engine";
      local_60 = 0x400000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      iVar1 = *(int *)(lVar2 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar1) ||
           (lVar6 = lVar5,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar2 + 0x30)) {
          lVar6 = 0;
        }
      } while ((lVar6 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
    }
    plVar4 = (longlong *)FUN_14477ba68(uVar3,lVar6);
    if (plVar4 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar4 + 8))(plVar4);
      if (lVar2 != 0) {
        lVar5 = FUN_141174638();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          FUN_1487af80e(lVar2,param_1);
          goto LAB_141174413;
        }
      }
      lVar2 = (**(code **)(*plVar4 + 8))(plVar4);
      if (lVar2 != 0) {
        lVar5 = FUN_140928036();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          FUN_14117471e(lVar2,param_1);
        }
      }
    }
  }
LAB_141174413:
  if (*(int *)(param_1 + 0x424) != 0) {
    iVar1 = FUN_14487fd02(param_1);
    if (iVar1 != 3) {
      FUN_1407bebdc(param_1 + 0x400,param_1 + 0x390,param_1);
    }
  }
  FUN_1405f1eac(param_1);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141174638 FUN_141174638 body=228 status=ok
// SIG undefined FUN_141174638(void)

longlong FUN_141174638(void)

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
  if (DAT_14cb580b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458f1416;
    local_38 = &LAB_14864bd1b;
    local_40 = &LAB_145ecdcb6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x4d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActivityAreaSwitch",&DAT_14cb580b8,&DAT_14864bd1a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb580b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117471e FUN_14117471e body=272 status=ok
// SIG undefined FUN_14117471e(void)

void FUN_14117471e(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  iVar4 = FUN_14487fd02();
  if (iVar4 < 4) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x5e8) = 0;
      iVar4 = 0;
    }
    else {
      uVar1 = *(uint *)(param_2 + 0xc);
      *(uint *)(param_1 + 0x5e8) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar4 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar4 = *(int *)(lVar5 + 0x10);
        bVar8 = iVar4 == 0;
        if (bVar8) {
          *(int *)(lVar5 + 0x10) = iVar6;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar4 = iVar6;
        }
      }
    }
    *(int *)(param_1 + 0x5ec) = iVar4;
    iVar4 = *(int *)(param_1 + 0x5e0);
    if ((longlong)iVar4 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x5d8);
      lVar7 = 0;
      bVar3 = DAT_14c950c29;
      do {
        lVar2 = *(longlong *)(lVar5 + lVar7);
        if ((lVar2 != 0 & bVar3) == 1) {
          FUN_1456cec3c(lVar2);
LAB_141174801:
          FUN_1487aec00(lVar2);
          bVar3 = DAT_14c950c29;
        }
        else if (lVar2 != 0) goto LAB_141174801;
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar4 * 8 != lVar7);
    }
  }
  return;
}



// FUNCTION 14117482e FUN_14117482e body=33 status=ok
// SIG undefined FUN_14117482e(void)

void FUN_14117482e(longlong param_1)

{
  FUN_1409dad52();
  FUN_141174850(param_1,*(undefined8 *)(param_1 + 0x128));
  return;
}



// FUNCTION 141174850 FUN_141174850 body=183 status=ok
// SIG undefined FUN_141174850(void)

void FUN_141174850(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  *(longlong *)(param_1 + 0x128) = param_2;
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        lVar4 = FUN_141174908();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          lVar4 = *(longlong *)(param_1 + 0x128);
          if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_14689c22e(lVar4);
          }
          *(longlong *)(lVar3 + 0x180) = lVar4;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 141174908 FUN_141174908 body=228 status=ok
// SIG undefined FUN_141174908(void)

longlong FUN_141174908(void)

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
  if (DAT_14cab4df0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14179c8d4;
    local_38 = &LAB_1475c41f5;
    local_40 = FUN_14127a2bf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x210;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneByteSection",&DAT_14cab4df0,&DAT_1475c41f4
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4df0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411749ee FUN_1411749ee body=132 status=ok
// SIG undefined FUN_1411749ee(void)

undefined8
FUN_1411749ee(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar2 != 0) && (lVar3 = FUN_1400f6e0c(lVar2), lVar3 != 0)) &&
      (lVar2 = FUN_1400f6f32(lVar2), lVar2 != 0)) &&
     ((*(longlong *)(lVar2 + 0x68) != 0 && (lVar3 = *(longlong *)(lVar3 + 0xb8), lVar3 != 0)))) {
    uVar1 = FUN_140def96c(*(longlong *)(lVar2 + 0x68),param_2 + 0x18);
    FUN_141174a72(lVar3,param_4,param_5,uVar1);
    return 1;
  }
  return 0;
}



// FUNCTION 141174a72 FUN_141174a72 body=2428 status=ok
// SIG undefined FUN_141174a72(void)

void FUN_141174a72(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined8 local_198;
  undefined4 local_190;
  longlong local_188;
  longlong *plStack_180;
  undefined8 local_178;
  undefined4 local_170;
  longlong local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148;
  longlong *plStack_140;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_128;
  longlong *plStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  FUN_14009b010(&local_58,3,0);
  if (param_3 != &DAT_14c9a1308) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    plVar3 = (longlong *)param_3[1];
    *param_3 = local_58;
    param_3[1] = (longlong)plStack_50;
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
  }
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  lVar4 = FUN_1411753f0(param_1,param_4);
  if (lVar4 != 0) {
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    FUN_14009b010(&local_68,1,0);
    if (local_68 != 0) {
      FUN_1406111c2(local_68,*(undefined4 *)(lVar4 + 0x24));
    }
    local_78 = DAT_14cbe4558;
    local_70 = DAT_14cbe4560;
    FUN_1448075d0(&local_58);
    if (*param_3 != 0) {
      local_1a8 = 0;
      FUN_14014191c(*param_3,&local_58,&local_68,0);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    FUN_14009b010(&local_88,2,0);
    FUN_140dbb4fa(&local_88,lVar4 + 0x14);
    local_98 = DAT_14cbe4564;
    local_90 = DAT_14cbe456c;
    FUN_1448075d0(&local_58);
    if (*param_3 != 0) {
      local_1a8 = 0;
      FUN_14014191c(*param_3,&local_58,&local_88,0);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    FUN_14009b010(&local_a8,1,0);
    if (local_a8 != 0) {
      FUN_1406111c2(local_a8,*(undefined4 *)(lVar4 + 0x28));
    }
    local_b8 = DAT_14cbe4570;
    local_b0 = DAT_14cbe4578;
    FUN_1448075d0(&local_58);
    if (*param_3 != 0) {
      local_1a8 = 0;
      FUN_14014191c(*param_3,&local_58,&local_a8,0);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    FUN_14009b010(&local_c8,2,0);
    FUN_140dbb4fa(&local_c8,lVar4 + 0x2c);
    local_d8 = DAT_14cbe457c;
    local_d0 = DAT_14cbe4584;
    FUN_1448075d0(&local_58);
    if (*param_3 != 0) {
      local_1a8 = 0;
      FUN_14014191c(*param_3,&local_58,&local_c8,0);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_e8 = 0;
    plStack_e0 = (longlong *)0x0;
    FUN_14009b010(&local_e8,1,0);
    if (local_e8 != 0) {
      FUN_1406111c2(local_e8,*(undefined4 *)(lVar4 + 0x3c));
    }
    local_f8 = DAT_14cbe4594;
    local_f0 = DAT_14cbe459c;
    FUN_1448075d0(&local_58);
    if (*param_3 != 0) {
      local_1a8 = 0;
      FUN_14014191c(*param_3,&local_58,&local_e8,0);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    FUN_14009b010(&local_108,2,0);
    FUN_140dbb4fa(&local_108,lVar4 + 0x44);
    local_118 = DAT_14cbe4588;
    local_110 = DAT_14cbe4590;
    FUN_1448075d0(&local_58);
    if (*param_3 != 0) {
      local_1a8 = 0;
      FUN_14014191c(*param_3,&local_58,&local_108,0);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_128 = 0;
    plStack_120 = (longlong *)0x0;
    FUN_14009b010(&local_128,1,0);
    if ((local_128 != 0) && ((*(byte *)(local_128 + 1) & 2) == 0)) {
      pcVar5 = "false";
      if (*(char *)(lVar4 + 0x40) != '\0') {
        pcVar5 = "true";
      }
      FUN_140126aca(local_128,pcVar5);
    }
    local_138 = DAT_14cbe45a0;
    local_130 = DAT_14cbe45a8;
    FUN_1448075d0(&local_58);
    if (*param_3 != 0) {
      local_1a8 = 0;
      FUN_14014191c(*param_3,&local_58,&local_128,0);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_148 = 0;
    plStack_140 = (longlong *)0x0;
    FUN_14009b010(&local_148,1,0);
    if ((local_148 != 0) && ((*(byte *)(local_148 + 1) & 2) == 0)) {
      pcVar5 = "false";
      if (*(char *)(lVar4 + 0x10) != '\0') {
        pcVar5 = "true";
      }
      FUN_140126aca(local_148,pcVar5);
    }
    local_158 = DAT_14cbe45ac;
    local_150 = DAT_14cbe45b4;
    FUN_1448075d0(&local_58);
    if (*param_3 != 0) {
      local_1a8 = 0;
      FUN_14014191c(*param_3,&local_58,&local_148,0);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_168 = 0;
    plStack_160 = (longlong *)0x0;
    FUN_14009b010(&local_168,1,0);
    if ((local_168 != 0) && ((*(byte *)(local_168 + 1) & 2) == 0)) {
      pcVar5 = "false";
      if (*(char *)(lVar4 + 0x11) != '\0') {
        pcVar5 = "true";
      }
      FUN_140126aca(local_168,pcVar5);
    }
    local_178 = DAT_14cbe45b8;
    local_170 = DAT_14cbe45c0;
    FUN_1448075d0(&local_58);
    if (*param_3 != 0) {
      local_1a8 = 0;
      FUN_14014191c(*param_3,&local_58,&local_168,0);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_188 = 0;
    plStack_180 = (longlong *)0x0;
    FUN_14009b010(&local_188,1,0);
    if ((local_188 != 0) && ((*(byte *)(local_188 + 1) & 2) == 0)) {
      pcVar5 = "false";
      if (*(char *)(lVar4 + 0x12) != '\0') {
        pcVar5 = "true";
      }
      FUN_140126aca(local_188,pcVar5);
    }
    local_198 = DAT_14cbe45c4;
    local_190 = DAT_14cbe45cc;
    FUN_1448075d0(&local_58);
    if (*param_3 != 0) {
      local_1a8 = 0;
      FUN_14014191c(*param_3,&local_58,&local_188,0);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_141175460(param_1 + 0x88,lVar4);
    plVar3 = plStack_180;
    if (plStack_180 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_180 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_180)(plStack_180);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = plStack_160;
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_160 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_160)(plStack_160);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = plStack_140;
    if (plStack_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_140 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_140)(plStack_140);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = plStack_120;
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_120 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_120)(plStack_120);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = plStack_100;
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_100 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_100)(plStack_100);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
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
  if ((local_28 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411753f0 FUN_1411753f0 body=112 status=ok
// SIG undefined FUN_1411753f0(void)

longlong FUN_1411753f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar1 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xe0);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0xa0) + (longlong)iVar3 * 0x78;
        if (*(uint *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar3 * 0x78) == param_2) break;
        iVar3 = *(int *)(lVar1 + 0x70);
        lVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_141175442;
    }
  }
  lVar1 = 0;
LAB_141175442:
  lVar2 = lVar1 + 8;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 141175460 FUN_141175460 body=162 status=ok
// SIG undefined FUN_141175460(void)

void FUN_141175460(longlong *param_1,undefined8 param_2)

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
        goto LAB_1411754ed;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1411754ed:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141175502 FUN_141175502 body=1143 status=ok
// SIG undefined FUN_141175502(void)

void FUN_141175502(longlong param_1)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  double dVar6;
  undefined8 *puVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_158 [32];
  undefined8 **local_138;
  undefined8 *local_128;
  int local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_e8;
  longlong *local_d8;
  longlong local_c8 [4];
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1401c3c2c();
  lVar10 = *(longlong *)(param_1 + 0xb0);
  if (lVar10 == 0) {
    lVar10 = FUN_1448abda6(param_1);
  }
  lVar9 = FUN_140a3d526(lVar10);
  if (lVar9 == 0) goto LAB_1411757f5;
  (**(code **)(*(longlong *)(lVar9 + 0x38) + 0x10))(lVar9 + 0x38,&local_108);
  plVar5 = local_100;
  if ((longlong *)(param_1 + 0x768) != &local_108) {
    *(longlong *)(param_1 + 0x768) = local_108;
    local_108 = 0;
    plVar4 = *(longlong **)(param_1 + 0x770);
    if (local_100 != plVar4) {
      local_100 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x770) = plVar5;
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
    }
  }
  plVar5 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_100 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x768);
  if (lVar9 == 0) goto LAB_1411757f5;
  local_110 = *(longlong *)(param_1 + 0x770);
  if (local_110 != 0) {
    LOCK();
    *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
    UNLOCK();
  }
  local_118 = lVar9;
  lVar9 = FUN_140206ee8(param_1 + 0x650);
  if (lVar9 == 0) {
    dVar6 = 0.0;
  }
  else {
    fVar2 = *(float *)(lVar9 + 0x4c);
    dVar6 = (double)fVar2;
    *(float *)(param_1 + 0x740) = fVar2 * fVar2;
  }
  iVar13 = *(int *)(param_1 + 0x628);
  if ((longlong)iVar13 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x620);
    lVar15 = 0;
    do {
      plVar5 = *(longlong **)(lVar9 + lVar15);
      if (plVar5 != (longlong *)0x0) {
        bVar8 = (**(code **)(*plVar5 + 0x2a8))();
        *(byte *)(param_1 + 0x735) = *(byte *)(param_1 + 0x735) | bVar8;
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)iVar13 * 8 != lVar15);
  }
  *(undefined8 *)(param_1 + 0x760) = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x758) = *(undefined8 *)(param_1 + 0x168);
  dVar6 = dVar6 + *(double *)(param_1 + 400);
  *(float *)(param_1 + 0x74c) = (float)(dVar6 * dVar6);
  lVar10 = FUN_140149a73(lVar10);
  if (lVar10 != 0) {
    local_128 = (undefined8 *)0x0;
    local_120 = 0;
    FUN_1446efa72(&local_128,0,3,0x10);
    puVar7 = local_128;
    local_120 = 3;
    *local_128 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar15 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar15 == 0) {
      LOCK();
      UNLOCK();
      lVar15 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_128[2] = lVar15;
    *local_128 = &PTR_FUN_14b3ef1e0;
    local_128[3] = 0;
    iVar13 = 0;
    if (param_1 != 0) {
      uVar3 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_128 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar13 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar13 = DAT_14c964868 + 1;
        UNLOCK();
        iVar14 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar13;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar14);
        }
        LOCK();
        iVar13 = *(int *)(lVar9 + 0x10);
        bVar16 = iVar13 == 0;
        if (bVar16) {
          *(int *)(lVar9 + 0x10) = iVar14;
          iVar13 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar13 = iVar14;
        }
      }
    }
    *(int *)((longlong)puVar7 + 0x1c) = iVar13;
    puVar7[4] = FUN_14117597a;
    *(undefined4 *)(puVar7 + 5) = 0;
    memset(&local_108,0,0xa0);
    uVar11 = FUN_140d84236(lVar10);
    uVar12 = FUN_140d84280(param_1 + 0x790);
    local_138 = &local_128;
    FUN_140d84456(uVar12,param_1 + 0x640,uVar11,&local_108);
    if (local_a8 != 0) {
      if (local_98 == (longlong *)0x0) {
        local_98 = local_88;
      }
      (**(code **)(*local_98 + 0x10))();
    }
    if (local_e8 != 0) {
      if (local_d8 == (longlong *)0x0) {
        local_d8 = local_c8;
      }
      (**(code **)(*local_d8 + 0x10))();
    }
    if (local_120 != 0) {
      if (local_128 == (undefined8 *)0x0) goto LAB_1411757ed;
      (**(code **)*local_128)(local_128,0);
      FUN_1446efa72(&local_128,0,0,0x10);
      local_120 = 0;
    }
    if (local_128 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1411757ed:
  FUN_14117597a(param_1);
LAB_1411757f5:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14117597a FUN_14117597a body=141 status=ok
// SIG undefined FUN_14117597a(void)

void FUN_14117597a(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  cVar1 = '\x01';
  if (*(int *)(param_1 + 0x648) != 0) {
    cVar1 = FUN_140a262da(param_1 + 0x790);
  }
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x734) != '\0')) {
    if (cVar1 == '\0' && *(char *)(param_1 + 0x734) == '\x01') {
      FUN_140d60e1c(param_1);
      return;
    }
  }
  else if (*(longlong *)(param_1 + 0x768) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
    }
    plVar2 = (longlong *)FUN_140a3d526(lVar3);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2c0))(plVar2,param_1);
    }
    *(undefined1 *)(param_1 + 0x734) = 1;
  }
  return;
}



// FUNCTION 141175a08 FUN_141175a08 body=211 status=ok
// SIG undefined FUN_141175a08(void)

void FUN_141175a08(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    uVar1 = *(uint *)(param_2 + 0xc);
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
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
    iVar3 = *(int *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x6c) < iVar3 + 1U) {
      FUN_14581ea1c((longlong *)(param_1 + 0x60),iVar3);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 8) = CONCAT44(iVar2,uVar1);
  }
  return;
}



// FUNCTION 141175adb FUN_141175adb body=111 status=ok
// SIG undefined FUN_141175adb(void)

void FUN_141175adb(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    do {
      FUN_141175be2(param_1);
      FUN_141175b88(*(undefined8 *)(param_1 + -0x10),*(undefined4 *)(param_1 + -8));
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x20) != 0) {
        FUN_1400020a8();
      }
      FUN_141175b4a(*(undefined8 *)(param_1 + -0x30),*(undefined4 *)(param_1 + -0x28));
      if (*(longlong *)(param_1 + -0x30) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x168;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141175b4a FUN_141175b4a body=62 status=ok
// SIG undefined FUN_141175b4a(void)

void FUN_141175b4a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
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



// FUNCTION 141175b88 FUN_141175b88 body=89 status=ok
// SIG undefined FUN_141175b88(void)

void FUN_141175b88(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x30);
    do {
      FUN_143f2ded4(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong **)(puVar1 + -6) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(puVar1 + -6) + 0x10))();
      }
      if (*(longlong **)(puVar1 + -10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(puVar1 + -10) + 0x10))();
      }
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141175be2 FUN_141175be2 body=335 status=ok
// SIG undefined FUN_141175be2(void)

void FUN_141175be2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_141175d66(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8));
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8));
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0xd9) == '\x01') {
    *(undefined1 *)(param_1 + 0xd9) = 0;
  }
  FUN_141175d32(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
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



// FUNCTION 141175d32 FUN_141175d32 body=52 status=ok
// SIG undefined FUN_141175d32(void)

void FUN_141175d32(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 141175d66 FUN_141175d66 body=103 status=ok
// SIG undefined FUN_141175d66(void)

void FUN_141175d66(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x38);
    do {
      FUN_141175dcd(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -0xe) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141175dcd FUN_141175dcd body=71 status=ok
// SIG undefined FUN_141175dcd(void)

void FUN_141175dcd(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 141175e14 FUN_141175e14 body=1123 status=ok
// SIG undefined FUN_141175e14(void)

void FUN_141175e14(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  ushort uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  PSRWLOCK local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined4 uStack_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) &&
      (lVar6 = FUN_141060562(), lVar6 != 0)) && (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0)) {
    FUN_1402815f4(param_1,&local_60);
    lVar8 = *(longlong *)(local_60 + 0x480);
    local_90 = (PSRWLOCK)(lVar8 + 0xc0);
    AcquireSRWLockExclusive(local_90);
    *(int *)(lVar8 + 0xb8) = *(int *)(lVar8 + 0xb8) + 1;
    plVar16 = (longlong *)CONCAT44(uStack_54,local_58);
    local_a0 = lVar8;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar16 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    lVar8 = local_a0;
    local_70 = local_a0 + 0x60;
    FUN_145c9f88a(local_70,(int)param_1[0xe]);
    piVar1 = (int *)(lVar8 + 0x70);
    *piVar1 = *piVar1 + 1;
    local_80 = lVar8 + 0x40;
    FUN_140bad112(local_80,&DAT_149dfb77a);
    if ((longlong)(int)param_1[0xe] != 0) {
      plVar16 = (longlong *)param_1[0xd];
      plVar9 = plVar16 + (longlong)(int)param_1[0xe] * 0x2d;
      local_88 = param_1 + 0xb;
      local_b8 = lVar6;
      local_b0 = lVar5;
      local_a8 = param_1;
      local_78 = plVar9;
      do {
        if ((int)plVar16[3] < 2) {
          *(int *)(local_a0 + 0x70) = *(int *)(local_a0 + 0x70) + 1;
          lVar6 = FUN_1411f3330(local_70);
          local_98 = plVar16 + 7;
          FUN_1449a0272(lVar6);
          local_68 = lVar6 + 0x18;
          FUN_1449a0272(local_68,plVar16 + 0x15);
          FUN_1449a0272(lVar6 + 0x30,plVar16 + 0x17);
          FUN_1449a0272(lVar6 + 0x48,plVar16 + 0xd);
          uVar7 = FUN_141546c72();
          FUN_143f3b0b2(uVar7,&local_60,lVar5,plVar16);
          lVar8 = (longlong)local_58;
          if (0 < lVar8) {
            lVar17 = 0x20;
            lVar5 = 0;
            do {
              *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
              iVar2 = *(int *)(lVar6 + 0x78);
              *(uint *)(lVar6 + 0x78) = iVar2 + 1U;
              if (*(uint *)(lVar6 + 0x7c) < iVar2 + 1U) {
                FUN_1418f7878((longlong *)(lVar6 + 0x70),iVar2);
              }
              lVar8 = *(longlong *)(lVar6 + 0x70);
              lVar11 = (longlong)iVar2 * 0x20;
              plVar9 = (longlong *)(lVar8 + lVar11);
              FUN_1418f77a1(plVar9);
              iVar2 = *(int *)(lVar8 + 0x1c + lVar11);
              if (iVar2 == 0 || *(char *)(local_60 + lVar5) != *(char *)(lVar8 + 0x18 + lVar11)) {
                *(char *)(plVar9 + 3) = *(char *)(local_60 + lVar5);
                *(int *)((longlong)plVar9 + 0x1c) = iVar2 + 1;
              }
              lVar8 = *plVar16;
              plVar10 = (longlong *)(lVar8 + lVar17);
              if (((int)plVar9[2] == 0) || (cVar4 = FUN_144722c14(plVar9,plVar10), cVar4 == '\0')) {
                plVar10 = (longlong *)*plVar10;
                plVar3 = (longlong *)*plVar9;
                if (plVar3 != plVar10) {
                  *plVar9 = (longlong)plVar10;
                  if (plVar10 != (longlong *)0x0) {
                    (**(code **)(*plVar10 + 8))();
                  }
                  if (plVar3 != (longlong *)0x0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
                *(undefined4 *)(plVar9 + 1) = *(undefined4 *)(lVar8 + 8 + lVar17);
                *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
              }
              lVar5 = lVar5 + 1;
              lVar8 = (longlong)local_58;
              lVar17 = lVar17 + 0x30;
            } while (lVar5 < lVar8);
          }
          plVar9 = local_a8;
          lVar5 = local_b0;
          lVar17 = local_b8;
          if (local_58 == 0) {
            bVar18 = false;
          }
          else {
            lVar11 = 0;
            do {
              bVar18 = *(char *)(local_60 + lVar11) == '\0';
              if (bVar18) break;
              bVar19 = lVar8 + -1 != lVar11;
              lVar11 = lVar11 + 1;
            } while (bVar19);
          }
          if (*(int *)(lVar6 + 100) == 0 || (bool)*(char *)(lVar6 + 0x60) != bVar18) {
            *(bool *)(lVar6 + 0x60) = bVar18;
            *(int *)(lVar6 + 100) = *(int *)(lVar6 + 100) + 1;
          }
          if (bVar18 != false) {
            local_50 = local_98;
            FUN_140c8411c(local_88,&local_50);
          }
          lVar8 = (longlong)(int)plVar9[0xc];
          if (lVar8 != 0) {
            plVar9 = (longlong *)plVar9[0xb];
            plVar10 = plVar9 + lVar8 * 2;
            iVar2 = (int)plVar16[8];
LAB_1411761da:
            if ((int)plVar9[1] == iVar2) {
              cVar4 = '\x01';
              if (1 < iVar2) {
                lVar8 = 0;
                do {
                  uVar14 = *(ushort *)(*plVar9 + lVar8);
                  uVar15 = (ulonglong)uVar14;
                  uVar12 = *(ushort *)(*local_98 + lVar8);
                  if (uVar14 == uVar12) {
                    if (uVar14 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar12 | uVar14)) goto LAB_141176254;
                    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                    uVar13 = (ulonglong)uVar12;
                    uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                    if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar13]) goto LAB_141176254;
                  }
                  lVar8 = lVar8 + 2;
                } while( true );
              }
            }
            else {
              if ((int)plVar9[1] + iVar2 != 1) goto LAB_1411761ea;
              cVar4 = '\x01';
            }
            goto LAB_141176164;
          }
          cVar4 = '\0';
LAB_141176164:
          if (*(int *)(lVar6 + 0x6c) == 0 || *(char *)(lVar6 + 0x68) != cVar4) {
            *(char *)(lVar6 + 0x68) = cVar4;
            *(int *)(lVar6 + 0x6c) = *(int *)(lVar6 + 0x6c) + 1;
          }
          if (*(int *)(lVar17 + 0x110) == (int)plVar16[6]) {
            FUN_140bb4432(local_80,local_68);
          }
          plVar9 = local_78;
          if (local_60 != 0) {
            FUN_1400020a8();
            plVar9 = local_78;
          }
        }
        plVar16 = plVar16 + 0x2d;
      } while (plVar16 != plVar9);
    }
    ReleaseSRWLockExclusive(local_90);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_141176254:
  if (uVar14 == uVar12) goto LAB_141176164;
LAB_1411761ea:
  plVar9 = plVar9 + 2;
  cVar4 = '\0';
  if (plVar9 == plVar10) goto LAB_141176164;
  goto LAB_1411761da;
}



// FUNCTION 141176278 FUN_141176278 body=1893 status=ok
// SIG undefined FUN_141176278(void)

longlong * FUN_141176278(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  void *_Src;
  void *pvVar11;
  int iVar12;
  longlong *plVar13;
  void *pvVar14;
  longlong *plVar15;
  longlong *plVar16;
  void *pvVar17;
  uint uVar18;
  void *pvVar19;
  ulonglong uVar20;
  longlong *plVar21;
  void *pvVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_4f8 [32];
  void *local_4d8;
  longlong *local_4d0;
  void *local_4c8;
  void *local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  undefined4 local_4a8 [190];
  undefined1 local_1b0 [360];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar16 = *(longlong **)(param_1 + 0x28);
    plVar21 = plVar16 + (longlong)*(int *)(param_1 + 0x30) * 0x2d;
    do {
      if ((((*(char *)((longlong)plVar16 + 0x10a) == '\x01') && ((char)plVar16[0x2a] == '\x01')) &&
          (1 < (int)plVar16[8])) && ((int)plVar16[6] != 0)) {
        if ((longlong)(int)plVar16[1] != 0) {
          plVar13 = (longlong *)*plVar16;
          plVar15 = plVar13 + (longlong)(int)plVar16[1] * 6;
          do {
            if ((*plVar13 == 0) || ((int)plVar13[1] == 0)) goto LAB_1411763b6;
            plVar5 = (longlong *)plVar13[4];
            if (*(code **)(*plVar5 + 0x50) != FUN_144828418) {
              plVar5 = (longlong *)(**(code **)(*plVar5 + 0x50))();
            }
            FUN_1447a1fc0(plVar5);
            plVar5 = (longlong *)plVar13[4];
            pcVar1 = *(code **)(*plVar5 + 0x28);
            if (pcVar1 == FUN_14482841c) {
              plVar6 = plVar5 + 3;
              if (plVar5[5] != 0) {
                plVar6 = (longlong *)(plVar5[5] + 8);
              }
            }
            else if (pcVar1 == (code *)&LAB_14010c34c) {
              plVar6 = plVar5 + 2;
            }
            else {
              plVar6 = (longlong *)(*pcVar1)(plVar5);
            }
            if ((int)plVar6[1] < 2) goto LAB_1411763b6;
            plVar13 = plVar13 + 6;
          } while (plVar13 != plVar15);
        }
        iVar12 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar12 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar12 + 1U) {
          FUN_14581ec00(param_2,iVar12);
        }
        FUN_1411769de((longlong)iVar12 * 0x168 + *param_2);
      }
LAB_1411763b6:
      plVar16 = plVar16 + 0x2d;
    } while (plVar16 != plVar21);
    iVar12 = (int)param_2[1];
    if (1 < (longlong)iVar12) {
      lVar2 = *param_2;
      memset(local_4a8,0,0x2f0);
      local_4b0 = (longlong)iVar12 * 0x168 + lVar2 + -0x168;
      local_4b8 = lVar2;
      fVar24 = logf((float)iVar12);
      local_4a8[0] = (int)(longlong)(fVar24 + fVar24);
      plVar16 = &local_4b8;
      do {
        pvVar14 = (void *)*plVar16;
        pvVar11 = (void *)plVar16[1];
        iVar12 = (int)plVar16[2];
        iVar4 = (int)((ulonglong)((longlong)pvVar11 - (longlong)pvVar14) >> 3) * -0x5b05b05b;
        uVar18 = iVar4 + 1;
        pvVar17 = pvVar14;
        pvVar22 = pvVar11;
        if (iVar12 != 0) {
LAB_141176453:
          local_4d0 = plVar16;
          if (8 < (int)uVar18) {
            pvVar19 = (void *)((ulonglong)(uVar18 >> 1) * 0x168 + (longlong)pvVar17);
            local_4c0 = pvVar11;
            memcpy(local_1b0,pvVar19,0x168);
            memcpy(pvVar19,pvVar17,0x168);
            memcpy(pvVar17,local_1b0,0x168);
            pvVar19 = (void *)((longlong)pvVar22 + 0x168);
            local_4d8 = pvVar17;
            do {
              pvVar11 = (void *)((longlong)local_4d8 + 0x168);
              pvVar8 = (void *)((longlong)local_4d8 + 0x168);
              do {
                _Src = pvVar8;
                pvVar7 = pvVar11;
                if (pvVar22 < _Src) break;
                pvVar11 = (void *)((longlong)pvVar7 + 0x168);
                pvVar8 = (void *)((longlong)_Src + 0x168);
              } while (*(longlong *)((longlong)_Src + 0x58) <=
                       *(longlong *)((longlong)pvVar17 + 0x58));
              pvVar3 = (void *)((longlong)pvVar19 + -0x2d0);
              pvVar8 = pvVar19;
              do {
                pvVar11 = pvVar3;
                pvVar19 = (void *)((longlong)pvVar8 + -0x168);
                if (pvVar19 <= pvVar17) break;
                plVar16 = (longlong *)((longlong)pvVar8 + -0x110);
                pvVar3 = (void *)((longlong)pvVar11 + -0x168);
                pvVar8 = pvVar19;
              } while (*(longlong *)((longlong)pvVar17 + 0x58) <= *plVar16);
              local_4d8 = _Src;
              if (pvVar19 < _Src) goto LAB_1411768cf;
              memcpy(local_1b0,_Src,0x168);
              memcpy(_Src,pvVar19,0x168);
              memcpy(pvVar19,local_1b0,0x168);
            } while( true );
          }
          for (; plVar16 = local_4d0, pvVar14 = pvVar17, pvVar11 = pvVar17, pvVar17 < pvVar22;
              pvVar22 = (void *)((longlong)pvVar22 + -0x168)) {
            while (pvVar19 = pvVar14, pvVar14 = (void *)((longlong)pvVar11 + 0x168),
                  pvVar14 <= pvVar22) {
              plVar16 = (longlong *)((longlong)pvVar11 + 0x1c0);
              pvVar11 = pvVar14;
              if (*plVar16 <= *(longlong *)((longlong)pvVar19 + 0x58)) {
                pvVar14 = pvVar19;
              }
            }
            memcpy(local_1b0,pvVar19,0x168);
            memcpy(pvVar19,pvVar22,0x168);
            memcpy(pvVar22,local_1b0,0x168);
          }
          goto LAB_1411764f3;
        }
LAB_14117654a:
        local_4d8 = pvVar17;
        if (uVar18 != 0) {
          iVar12 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
          pvVar22 = local_4d8;
          iVar4 = iVar12;
joined_r0x00014117657a:
          do {
            iVar10 = iVar12 * 2 + 1;
            local_4d8 = pvVar22;
            if (iVar10 < (int)uVar18) {
              iVar9 = iVar12 * 2 + 2;
              if ((iVar9 < (int)uVar18) &&
                 (*(longlong *)((longlong)pvVar22 + (longlong)iVar10 * 0x168 + 0x58) <=
                  *(longlong *)((longlong)pvVar22 + (longlong)iVar9 * 0x168 + 0x58))) {
                iVar10 = iVar9;
              }
              if (*(longlong *)((longlong)pvVar22 + (longlong)iVar12 * 0x168 + 0x58) <
                  *(longlong *)((longlong)pvVar22 + (longlong)iVar10 * 0x168 + 0x58)) {
                pvVar14 = (void *)((longlong)iVar12 * 0x168 + (longlong)pvVar22);
                pvVar22 = (void *)((longlong)iVar10 * 0x168 + (longlong)pvVar22);
                memcpy(local_1b0,pvVar14,0x168);
                memcpy(pvVar14,pvVar22,0x168);
                memcpy(pvVar22,local_1b0,0x168);
                iVar12 = iVar10;
                pvVar22 = local_4d8;
                goto joined_r0x00014117657a;
              }
            }
            bVar23 = iVar4 != 0;
            iVar12 = iVar4 + -1;
            iVar4 = iVar12;
          } while (bVar23);
          if (1 < (int)uVar18) {
            pvVar14 = (void *)(((ulonglong)uVar18 - 1) * 0x168 + (longlong)pvVar22);
            memcpy(local_1b0,pvVar22,0x168);
            memcpy(pvVar22,pvVar14,0x168);
            memcpy(pvVar14,local_1b0,0x168);
            uVar20 = (ulonglong)uVar18 - 1;
            if (uVar18 != 2) {
              do {
                iVar12 = 0;
                iVar10 = 1;
                iVar4 = 0;
                do {
                  iVar12 = iVar12 + 2;
                  iVar9 = iVar10;
                  if (((longlong)iVar12 < (longlong)uVar20) &&
                     (*(longlong *)((longlong)local_4d8 + (longlong)iVar10 * 0x168 + 0x58) <=
                      *(longlong *)((longlong)local_4d8 + (longlong)iVar12 * 0x168 + 0x58))) {
                    iVar9 = iVar12;
                  }
                  if (*(longlong *)((longlong)local_4d8 + (longlong)iVar9 * 0x168 + 0x58) <=
                      *(longlong *)((longlong)local_4d8 + (longlong)iVar4 * 0x168 + 0x58)) break;
                  pvVar22 = (void *)((longlong)iVar4 * 0x168 + (longlong)local_4d8);
                  pvVar14 = (void *)((longlong)iVar9 * 0x168 + (longlong)local_4d8);
                  memcpy(local_1b0,pvVar22,0x168);
                  memcpy(pvVar22,pvVar14,0x168);
                  memcpy(pvVar14,local_1b0,0x168);
                  iVar12 = iVar9 * 2;
                  iVar10 = iVar9 * 2 + 1;
                  iVar4 = iVar9;
                } while ((longlong)iVar10 < (longlong)uVar20);
                pvVar22 = local_4d8;
                pvVar14 = (void *)((uVar20 - 1) * 0x168 + (longlong)local_4d8);
                memcpy(local_1b0,local_4d8,0x168);
                memcpy(pvVar22,pvVar14,0x168);
                memcpy(pvVar14,local_1b0,0x168);
                bVar23 = 2 < uVar20;
                uVar20 = uVar20 - 1;
              } while (bVar23);
            }
          }
        }
LAB_1411764f3:
        plVar16 = plVar16 + -3;
      } while (&local_4b8 <= plVar16);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_1411768cf:
  memcpy(local_1b0,pvVar17,0x168);
  local_4c8 = pvVar19;
  memcpy(pvVar17,pvVar19,0x168);
  memcpy(local_4c8,local_1b0,0x168);
  iVar12 = iVar12 + -1;
  pvVar8 = (void *)((longlong)local_4c8 + -0x168);
  if ((longlong)pvVar11 - (longlong)pvVar14 < (longlong)local_4c0 - (longlong)pvVar7) {
    if (local_4d8 < pvVar22) {
      *local_4d0 = (longlong)local_4d8;
      local_4d0[1] = (longlong)pvVar22;
      *(int *)(local_4d0 + 2) = iVar12;
      local_4d0 = local_4d0 + 3;
    }
    plVar16 = local_4d0;
    pvVar14 = pvVar17;
    if (pvVar19 <= (void *)((longlong)pvVar17 + 0x168U)) goto LAB_1411764f3;
  }
  else {
    if ((void *)((longlong)pvVar17 + 0x168U) < pvVar19) {
      *local_4d0 = (longlong)pvVar17;
      local_4d0[1] = (longlong)pvVar8;
      *(int *)(local_4d0 + 2) = iVar12;
      local_4d0 = local_4d0 + 3;
    }
    plVar16 = local_4d0;
    pvVar17 = pvVar7;
    pvVar11 = pvVar22;
    pvVar8 = pvVar22;
    pvVar14 = local_4d8;
    if (pvVar22 <= local_4d8) goto LAB_1411764f3;
  }
  local_4d8 = pvVar14;
  iVar4 = (int)((ulonglong)((longlong)pvVar11 - (longlong)pvVar17) >> 3) * -0x5b05b05b;
  uVar18 = iVar4 + 1;
  plVar16 = local_4d0;
  pvVar14 = pvVar17;
  pvVar17 = local_4d8;
  pvVar22 = pvVar8;
  if (iVar12 == 0) goto LAB_14117654a;
  goto LAB_141176453;
}



// FUNCTION 1411769de FUN_1411769de body=233 status=ok
// SIG undefined FUN_1411769de(void)

undefined8 * FUN_1411769de(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1418bfb1a(param_1,iVar1,0);
    FUN_1418bfc03(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_143f2df04(param_1 + 4,iVar1,0);
    FUN_143f2e047(param_1[4],uVar2,iVar1);
  }
  FUN_1411e2282(param_1 + 6,param_2 + 6);
  return param_1;
}



// FUNCTION 141176ac8 FUN_141176ac8 body=1780 status=ok
// SIG undefined FUN_141176ac8(void)

void FUN_141176ac8(longlong *param_1,char param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1411771d2();
  lVar6 = param_1[6];
  if (*(char *)(lVar6 + 0x178) == '\x03') {
    if (param_2 == '\0') {
      if ((((*(int *)((longlong)param_1 + 0x13c) != 0) &&
           (uVar1 = *(uint *)(param_1 + 0x27), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
         (((plVar9 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)((longlong)param_1 + 0x13c))) &&
          (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))))) {
        lVar6 = FUN_14479d2ce();
        FUN_140457ffc((ulonglong)*(byte *)(param_1 + 0x22) * 0x40 + lVar6 + 0x25d0,param_1);
        param_1[0x27] = 0;
        lVar6 = param_1[6];
      }
      if (*(longlong *)(lVar6 + 0x1b0) == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = *(undefined4 *)(*(longlong *)(lVar6 + 0x1b0) + 0xc);
      }
      *(undefined4 *)(param_1 + 0x23) = uVar5;
      *(int *)((longlong)param_1 + 0x11c) = (int)param_1[0x20];
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + 0xf4);
      *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0xf7;
      goto LAB_141176bb5;
    }
    lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar6 != 0) {
      if ((*(byte *)(param_1 + 0x25) & 4) != 0) {
        if ((*(longlong *)(param_1[6] + 0x1b0) != 0) &&
           (lVar6 = *(longlong *)(*(longlong *)(param_1[6] + 0x1b0) + 0x3c0), lVar6 != 0)) {
          if (DAT_14cbadd90 == 0) {
            local_40 = &local_28;
            local_28 = FUN_141030f22;
            local_30 = FUN_14081d0ea;
            local_38 = &LAB_1459f2e4c;
            local_48 = &LAB_148c39de3;
            local_50 = &LAB_1457a9eb2;
            local_58 = &DAT_149e063b2;
            local_60 = 0;
            local_68 = 0x10000004;
            local_70 = 0x10;
            local_78 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
            uVar1 = *(uint *)(lVar6 + 0xc);
            *(uint *)(param_1 + 0x27) = uVar1;
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar6 = 0;
            }
            iVar4 = *(int *)(lVar6 + 0x10);
            if (iVar4 == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar10 = DAT_14c964868 + 1;
              bVar11 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar11) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar10);
              }
              LOCK();
              iVar4 = *(int *)(lVar6 + 0x10);
              bVar11 = iVar4 == 0;
              if (bVar11) {
                *(int *)(lVar6 + 0x10) = iVar10;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar11) {
                iVar4 = iVar10;
              }
              *(int *)((longlong)param_1 + 0x13c) = iVar4;
              if (iVar4 == 0) goto LAB_141176b4d;
            }
            else {
              *(int *)((longlong)param_1 + 0x13c) = iVar4;
            }
            uVar1 = *(uint *)(param_1 + 0x27);
            if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
              plVar9 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if ((plVar9 != (longlong *)0x0) &&
                 ((((int)plVar9[2] == iVar4 && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) &&
                  (*plVar9 != 0)))) {
                lVar6 = 0;
                lVar7 = *plVar9;
                if ((*(uint *)(plVar9 + 1) & 0x10200000) != 0) {
                  lVar7 = lVar6;
                }
                FUN_140457ffc((ulonglong)*(byte *)(param_1 + 0x22) * 0x40 + lVar7 + 0x25d0,param_1);
                if (*(int *)((longlong)param_1 + 0x13c) != 0) {
                  uVar1 = *(uint *)(param_1 + 0x27);
                  lVar6 = 0;
                  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                    plVar9 = (longlong *)
                             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                    if ((plVar9 == (longlong *)0x0) ||
                       (((int)plVar9[2] != *(int *)((longlong)param_1 + 0x13c) ||
                        ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) {
                      lVar6 = 0;
                    }
                    else {
                      lVar6 = *plVar9;
                    }
                  }
                }
                FUN_1411775e8(lVar6 + (ulonglong)*(byte *)(param_1 + 0x22) * 0x40 + 0x25d0,&local_28
                              ,param_1,FUN_140c71290);
              }
            }
            goto LAB_141176b4d;
          }
        }
        param_1[0x27] = 0;
      }
LAB_141176b4d:
      if ((((0.0 < (double)param_1[0x11]) &&
           (cVar3 = (**(code **)(*param_1 + 0x3e0))(param_1), cVar3 != '\0')) &&
          (cVar3 = (**(code **)(*param_1 + 0x398))(param_1), cVar3 != '\0')) &&
         (lVar6 = (**(code **)(*param_1 + 0x180))(param_1),
         (double)param_1[0x11] <= *(double *)(lVar6 + 0x6d0) &&
         *(double *)(lVar6 + 0x6d0) != (double)param_1[0x11])) {
        lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_148a196c2(param_1,(float)(*(double *)(lVar6 + 0x6d0) - (double)param_1[0x11]),0);
        *(int *)((longlong)param_1 + 0x11c) = (int)param_1[0x20];
      }
      if ((*(int *)((longlong)param_1 + 0x11c) == (int)param_1[0x24]) &&
         (iVar4 = (**(code **)(*param_1 + 0x2b8))(param_1), 0 < iVar4)) {
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + 0xf4);
      }
      (**(code **)(*param_1 + 0x3b8))(param_1,1);
    }
  }
  else {
    if (param_2 == '\0') {
      if (((((*(int *)((longlong)param_1 + 0x13c) != 0) &&
            (uVar1 = *(uint *)(param_1 + 0x27), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
          && ((plVar9 = (longlong *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
              plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)((longlong)param_1 + 0x13c))))
          ) && (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))) {
        lVar6 = FUN_14479d2ce();
        FUN_140457ffc((ulonglong)*(byte *)(param_1 + 0x22) * 0x40 + lVar6 + 0x25d0,param_1);
        param_1[0x27] = 0;
      }
      if (param_1[0x26] != 0) {
        plVar9 = param_1 + 0x26;
        lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
        if (lVar6 != 0) {
          if (*(longlong *)(lVar6 + 0x1f0) == 0) {
            puVar8 = (undefined8 *)(lVar6 + 0x458);
          }
          else {
            puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
          }
          uVar2 = *puVar8;
          lVar6 = FUN_144a61814(uVar2,plVar9);
          if (lVar6 != 0) {
            FUN_1405a424c(uVar2,*plVar9);
          }
        }
        *plVar9 = 0;
      }
      goto LAB_141176bb5;
    }
    if ((*(byte *)(param_1 + 0x25) & 4) != 0) {
      if ((*(longlong *)(lVar6 + 0x1b0) == 0) ||
         (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x1b0) + 0x3c0), lVar6 == 0)) {
LAB_14117708d:
        lVar6 = 0;
      }
      else {
        lVar7 = FUN_144a5dd5e();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_14117708d;
      }
      plVar9 = param_1 + 0x27;
      FUN_14485c47a(plVar9,lVar6);
      lVar6 = FUN_14479d2ce(plVar9);
      if (lVar6 != 0) {
        lVar6 = FUN_14479d2ce(plVar9);
        FUN_140457ffc((ulonglong)*(byte *)(param_1 + 0x22) * 0x40 + lVar6 + 0x25d0,param_1);
        lVar6 = FUN_14479d2ce(plVar9);
        FUN_1411775e8(lVar6 + 0x25d0 + (ulonglong)*(byte *)(param_1 + 0x22) * 0x40,&local_28,param_1
                      ,FUN_140c71256);
        lVar6 = FUN_14479d2ce(plVar9);
        *(undefined4 *)((longlong)param_1 + 0x114) =
             *(undefined4 *)(lVar6 + 0x2600 + (ulonglong)*(byte *)(param_1 + 0x22) * 0x40);
      }
    }
    if ((*(byte *)(param_1 + 0x25) & 1) == 0) {
      FUN_14581ed54(param_1);
    }
  }
  if (((*(byte *)(param_1 + 5) & 1) == 0) &&
     (cVar3 = (**(code **)(*param_1 + 0x3d8))(param_1), cVar3 != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
LAB_141176bb5:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411771d2 FUN_1411771d2 body=78 status=ok
// SIG undefined FUN_1411771d2(void)

void FUN_1411771d2(longlong *param_1,byte param_2)

{
  longlong lVar1;
  
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xfe | param_2;
  if (param_2 == 0) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
      param_1[0x11] = *(longlong *)(lVar1 + 0x6d0);
    }
  }
  return;
}



// FUNCTION 141177220 FUN_141177220 body=871 status=ok
// SIG undefined FUN_141177220(void)

void FUN_141177220(longlong *param_1,char param_2)

{
  double dVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined *puVar9;
  uint *puVar10;
  uint uVar11;
  float fVar12;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = param_1[0x20];
  if (((int)param_1[0x24] < 1 || *(int *)((longlong)param_1 + 0x11c) != (int)param_1[0x24]) ||
     (iVar4 = (**(code **)(*param_1 + 0x2b8))(param_1), iVar4 < 1)) {
    iVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if ((int)param_1[0x20] < iVar4) {
      iVar4 = (int)param_1[0x20];
    }
  }
  else {
    iVar4 = *(int *)((longlong)param_1 + 0xf4);
  }
  *(int *)(param_1 + 0x20) = iVar4;
  iVar4 = (**(code **)(*param_1 + 0x2e8))(param_1);
  if ((int)param_1[0x20] < iVar4) {
    iVar4 = (int)param_1[0x20];
  }
  *(int *)(param_1 + 0x20) = iVar4;
  iVar5 = (**(code **)(*param_1 + 0x2e8))();
  iVar5 = iVar5 - (int)param_1[0x20];
  iVar4 = 0;
  if (0 < iVar5) {
    iVar4 = iVar5;
  }
  if ((int)param_1[0x21] != iVar4) {
    *(int *)(param_1 + 0x21) = iVar4;
    uVar2 = param_1[7];
    if (uVar2 < 0xffffffff00000000) {
      plVar7 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar7 = (longlong *)0x0;
      }
      (**(code **)(*plVar7 + 0x58))(plVar7,param_1,uVar2,3);
    }
    else {
      uVar11 = (uint)uVar2;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
        puVar9 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar9 = DAT_14c998080;
        }
        if ((*(uint *)(puVar9 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0) {
          lVar6 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
          puVar10 = *(uint **)(lVar6 + 0x18);
          if (*(uint **)(lVar6 + 0x18) == (uint *)0x0) {
            puVar10 = (uint *)(lVar6 + 8);
          }
          *puVar10 = *puVar10 | 8;
          *(byte *)(lVar6 + 0x60) = *(byte *)(lVar6 + 0x60) | 1;
        }
      }
    }
  }
  plVar7 = (longlong *)param_1[6];
  lVar6 = (**(code **)(*plVar7 + 0x7e0))();
  if ((lVar6 == 0) || (lVar6 = (**(code **)(*plVar7 + 0x7e0))(), *(longlong *)(lVar6 + 0x3c0) == 0))
  {
    bVar3 = 0;
  }
  else {
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x7e0))(plVar7);
    bVar3 = (**(code **)(*plVar7 + 0x700))();
    bVar3 = bVar3 ^ 1;
  }
  if ((param_2 != '\0') || ((int)param_1[0x20] != (int)lVar8)) {
    *(int *)((longlong)param_1 + 0x11c) = (int)param_1[0x20];
    FUN_1447f69b6();
    if (bVar3 != 0) {
      lVar8 = (**(code **)(*param_1 + 0x180))(param_1);
      dVar1 = *(double *)(lVar8 + 0x6d0);
      local_48 = (undefined4)param_1[0x20];
      fVar12 = (float)FUN_141177588(param_1);
      local_44 = 0.0;
      if (dVar1 < (double)fVar12) {
        fVar12 = (float)FUN_141177588(param_1);
        local_44 = (float)((double)fVar12 - dVar1);
      }
      FUN_14581ec94();
    }
  }
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0xf7;
  if (*(int *)((longlong)param_1 + 0x10c) != (int)param_1[0x20]) {
    *(int *)((longlong)param_1 + 0x10c) = (int)param_1[0x20];
    uVar2 = param_1[7];
    if (uVar2 < 0xffffffff00000000) {
      plVar7 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar7 = (longlong *)0x0;
      }
      (**(code **)(*plVar7 + 0x58))(plVar7,param_1,uVar2,4);
    }
    else {
      uVar11 = (uint)uVar2;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
        puVar9 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar9 = DAT_14c998080;
        }
        if ((*(uint *)(puVar9 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0) {
          lVar8 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
          puVar10 = *(uint **)(lVar8 + 0x18);
          if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
            puVar10 = (uint *)(lVar8 + 8);
          }
          *puVar10 = *puVar10 | 0x10;
          *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
        }
      }
    }
  }
  if (((bVar3 != 0) && (*(int *)((longlong)param_1 + 0x94) != 2)) &&
     (0 < *(int *)((longlong)param_1 + 0xf4))) {
    *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) | 8;
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141177588 FUN_141177588 body=9 status=ok
// SIG undefined FUN_141177588(void)

undefined4 FUN_141177588(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}



// FUNCTION 141177592 FUN_141177592 body=85 status=ok
// SIG undefined FUN_141177592(void)

ulonglong FUN_141177592(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < (longlong)*(int *)(param_1 + 0xbf0)) {
    uVar1 = 0;
    do {
      lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0xbe8) + 0x50 + uVar1 * 0x88);
      if (lVar3 != 0) {
        lVar2 = 0;
        do {
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0xbe8) + 0x48 + uVar1 * 0x88) + lVar2) ==
              param_2) {
            return uVar1 & 0xffffffff;
          }
          lVar2 = lVar2 + 8;
        } while (lVar3 * 8 != lVar2);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != (longlong)*(int *)(param_1 + 0xbf0));
  }
  return 0xff;
}



// FUNCTION 1411775e8 FUN_1411775e8 body=765 status=ok
// SIG undefined FUN_1411775e8(void)

undefined8 * FUN_1411775e8(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar2 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_149e35290;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_58[2] = lVar6;
  *local_58 = (longlong)&PTR_FUN_14b9ded60;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar4;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar2 + 0x1c) = iVar8;
  plVar2[4] = param_4;
  *param_2 = 0;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_58 + 0x30))(), cVar3 == '\0')) {
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_141177794;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_14117777e;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar8 = (int)param_1[1];
      iVar4 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar4;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
        if (0 < iVar8) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar4 = (int)param_1[1];
          } while (iVar7 < iVar4);
        }
        iVar7 = 2;
        if (2 < iVar4 * 2) {
          iVar7 = iVar4 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar8) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    uVar5 = 0;
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,&local_48);
      uVar5 = local_48;
    }
    *param_2 = uVar5;
    iVar8 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
      FUN_1447a71f6(param_1,iVar8);
    }
    lVar9 = *param_1;
    lVar6 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar9 + lVar6) = 0;
    *(undefined4 *)(lVar9 + 8 + lVar6) = 0;
    *(longlong **)(lVar9 + lVar6) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar9 + 8 + lVar6) = local_50;
LAB_14117777e:
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141177794:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141177934 FUN_141177934 body=154 status=ok
// SIG undefined FUN_141177934(void)

void FUN_141177934(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_14472eb64((longlong *)(param_1 + 0x38),0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (0x80 < *(uint *)(param_1 + 100)) {
    *(undefined4 *)(param_1 + 100) = 0x80;
    FUN_1446efbd8(param_1 + 0x48,0);
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_1404dba90(param_1);
  return;
}



// FUNCTION 1411779e6 FUN_1411779e6 body=980 status=ok
// SIG undefined FUN_1411779e6(void)

void FUN_1411779e6(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,0xd);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_141177a2e;
      puVar1 = puVar1 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_141177a2e:
  lVar3 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar3 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar3 = *param_3;
  }
  lVar4 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar4 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar3 + lVar7 * 4 + 4 + lVar4 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  uVar2 = (uint)*(ushort *)(param_2 + 0xc);
  if (uVar2 != 0) {
    lVar3 = *param_3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar4 = 0;
    do {
      if (*(short *)((longlong)puVar1 + lVar4 + 0x1e) == param_1[4]) {
        if ((longlong)puVar1 + lVar4 != 0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + lVar4)) {
            *(int *)(lVar3 + 0x10 + lVar7 * 4) =
                 (int)*(ulonglong *)((longlong)puVar1 + lVar4) - (int)*(ulonglong *)(param_2 + 0x20)
            ;
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      lVar4 = lVar4 + 0x20;
    } while ((ulonglong)*(ushort *)(param_2 + 0xc) << 5 != lVar4);
    puVar5 = puVar1;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == param_1[5]) {
        if (puVar5 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
            *(int *)(lVar3 + 0x14 + lVar7 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
    puVar5 = puVar1;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == param_1[6]) {
        if (puVar5 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
            *(int *)(lVar3 + 0x18 + lVar7 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
    puVar5 = puVar1;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == param_1[7]) {
        if (puVar5 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
            *(int *)(lVar3 + 0x1c + lVar7 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
    puVar5 = puVar1;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == param_1[8]) {
        if (puVar5 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
            *(int *)(lVar3 + 0x20 + lVar7 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
    puVar5 = puVar1;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == param_1[9]) {
        if (puVar5 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
            *(int *)(lVar3 + 0x24 + lVar7 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
    puVar5 = puVar1;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == param_1[10]) {
        if (puVar5 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
            *(int *)(lVar3 + 0x28 + lVar7 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
    puVar5 = puVar1;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == param_1[0xb]) {
        if (puVar5 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
            *(int *)(lVar3 + 0x2c + lVar7 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (uVar2 == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
    puVar5 = (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[0xc]) {
        if (puVar1 == (ulonglong *)0x0) {
          return;
        }
        if (*puVar1 < *(ulonglong *)(param_2 + 0x20)) {
          return;
        }
        *(int *)(lVar3 + 0x30 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
        return;
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != puVar5);
  }
  return;
}



// FUNCTION 141177dc6 FUN_141177dc6 body=128 status=ok
// SIG undefined FUN_141177dc6(void)

undefined8 * FUN_141177dc6(undefined8 *param_1)

{
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a4b8650;
  param_1[0x1f] = &PTR_LAB_14a4b89c0;
  FUN_1406ed1bc(param_1 + 0x20);
  *(undefined2 *)(param_1 + 0xb) = 0x201;
  *param_1 = &PTR_FUN_14b2124e0;
  param_1[0x1f] = &PTR_FUN_14b212850;
  *(undefined1 *)((longlong)param_1 + 0xda) = 1;
  *(undefined2 *)(param_1 + 0x1b) = 0x201;
  *(undefined1 *)(param_1 + 0x30) = 1;
  param_1[0x2f] = 0x3ff0000000000000;
  return param_1;
}



// FUNCTION 141177e46 FUN_141177e46 body=297 status=ok
// SIG undefined FUN_141177e46(void)

undefined8 FUN_141177e46(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141177f68;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141177f68;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_141177f68:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141177f13;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_141177f13;
    }
  }
  uVar6 = 0;
LAB_141177f13:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141177f70 FUN_141177f70 body=457 status=ok
// SIG undefined FUN_141177f70(void)

void FUN_141177f70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_14011be0c(param_1 + 0x30);
  if (lVar4 == 0) {
LAB_141177fcd:
    lVar4 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_141177fcd;
  }
  cVar3 = FUN_14011bf50(lVar4);
  if (cVar3 == '\0') {
    if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1403adc5e(&local_38,lVar4);
  lVar4 = *(longlong *)(local_38 + 0x60);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
  *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((bool)*(char *)(lVar4 + 0x10) == (param_2 != 0)) {
    if (*(int *)(lVar4 + 0x14) != 0) goto LAB_14117805b;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(lVar4 + 0x14) + 1;
  }
  *(bool *)(lVar4 + 0x10) = param_2 != 0;
  *(int *)(lVar4 + 0x14) = iVar5;
LAB_14117805b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 141178150 FUN_141178150 body=1123 status=ok
// SIG undefined FUN_141178150(void)

void FUN_141178150(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_428 [32];
  undefined8 *local_408;
  undefined8 local_3f8 [2];
  undefined8 local_3e8;
  undefined1 local_3b8 [64];
  longlong local_378;
  undefined1 local_370 [60];
  undefined4 local_334;
  byte local_1f8;
  undefined2 local_138;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  lVar6 = FUN_1405831b2();
  lVar7 = FUN_1405faa04(lVar6 + 0xef0);
  if (lVar7 == 0) goto LAB_14117844f;
  if ((*(longlong *)(param_1 + 600) == 0) || (*(longlong **)(param_1 + 0x260) == (longlong *)0x0)) {
LAB_14117855e:
    lVar8 = 0;
    bVar5 = 0;
LAB_141178564:
    bVar15 = bVar5;
    if (*(int *)(param_1 + 0x64c) < 0) {
      *(undefined4 *)(param_1 + 0x648) = 0;
      FUN_145705dca(param_1 + 0x640,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x648) = 0;
    }
  }
  else {
    lVar8 = (**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
    if (lVar8 == 0) goto LAB_14117855e;
    fVar17 = (float)FUN_1411785b4(lVar8,lVar7 + 0xa0);
    bVar15 = 1;
    bVar5 = 1;
    if (1.0 <= fVar17) goto LAB_141178564;
  }
  if (*(longlong *)(param_1 + 0x250) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_1447210f0();
  }
  fVar17 = (float)*(double *)(lVar9 + 0x6d0);
  iVar14 = *(int *)(param_1 + 0x648);
  uVar13 = (ulonglong)iVar14;
  if ((longlong)uVar13 < 1) {
    fVar20 = 0.0;
  }
  else {
    fVar21 = fVar17 - *(float *)(param_1 + 0x63c);
    iVar14 = -iVar14;
    lVar9 = uVar13 * 0x10 + -4;
    fVar20 = 0.0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x640);
      fVar18 = *(float *)(lVar2 + -0xc + lVar9);
      fVar1 = *(float *)(param_1 + 0x63c);
      fVar19 = *(float *)(lVar2 + -4 + lVar9) - fVar21;
      *(float *)(lVar2 + -4 + lVar9) = fVar19;
      if (fVar19 <= 0.0) {
        fVar20 = fVar20 + *(float *)(lVar2 + -8 + lVar9);
        *(undefined4 *)(lVar2 + -8 + lVar9) = 0;
LAB_1411782ff:
        uVar16 = *(uint *)(param_1 + 0x648);
        if (uVar13 != uVar16) {
          iVar4 = uVar16 + iVar14;
          if (0 < (int)(uVar16 + iVar14)) {
            iVar4 = 1;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x640) + lVar9 + -0xc),
                  (void *)((longlong)(int)(uVar16 - iVar4) * 0x10 + *(longlong *)(param_1 + 0x640)),
                  (longlong)iVar4 << 4);
          uVar16 = *(uint *)(param_1 + 0x648);
        }
        *(uint *)(param_1 + 0x648) = uVar16 - 1;
      }
      else {
        uVar16 = -(uint)(fVar1 < fVar18);
        fVar1 = *(float *)(lVar2 + -8 + lVar9);
        fVar18 = (float)(~uVar16 & (uint)fVar21 | (uint)(fVar17 - fVar18) & uVar16) *
                 *(float *)(lVar2 + lVar9);
        if (fVar1 <= fVar18) {
          fVar18 = fVar1;
        }
        *(float *)(lVar2 + -8 + lVar9) = fVar1 - fVar18;
        fVar20 = fVar20 + fVar18;
        if (fVar1 - fVar18 < 0.0001) goto LAB_1411782ff;
      }
      iVar14 = iVar14 + 1;
      lVar9 = lVar9 + -0x10;
      bVar3 = 1 < uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar3);
    iVar14 = *(int *)(param_1 + 0x648);
  }
  *(float *)(param_1 + 0x63c) = fVar17;
  if (iVar14 == 0) {
    if (*(longlong *)(param_1 + 0x250) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = FUN_1447210f0();
    }
    if (*(longlong *)(lVar9 + 0x1f0) == 0) {
      plVar10 = (longlong *)(lVar9 + 0x458);
    }
    else {
      plVar10 = (longlong *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
    }
    lVar9 = *(longlong *)(param_1 + 0x650);
    if (lVar9 != 0) {
      lVar2 = *plVar10;
      uVar16 = (uint)lVar9;
      if ((int)(uVar16 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
        lVar12 = lVar2 + 0x18;
        if (*(longlong *)(lVar2 + 0x28) != 0) {
          lVar12 = *(longlong *)(lVar2 + 0x28);
        }
        if ((*(uint *)(lVar12 + (ulonglong)((uVar16 & 0xffffff) >> 5) * 4) >> (uVar16 & 0x1f) & 1)
            != 0) {
          lVar2 = *(longlong *)(lVar2 + 8);
          lVar12 = (ulonglong)(uVar16 & 0xffffff) * 0x70;
          if (((lVar2 + lVar12 != 0) && (*(longlong *)(lVar2 + 0x60 + lVar12) == lVar9)) &&
             (*(char *)(lVar2 + 1 + lVar12) != '\x04')) {
            FUN_1405a424c();
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x650) = 0;
  }
  if ((((bool)(bVar15 & 0.0 < fVar20)) && ((*(byte *)(param_1 + 0x471) & 4) == 0)) &&
     (-1 < *(char *)(param_1 + 0x470))) {
    if (*(int *)(lVar8 + 0x40) < 1) {
      fVar17 = -1.0;
    }
    else {
      fVar17 = (float)FUN_1405583ce(*(undefined8 *)(lVar8 + 0x38));
    }
    fVar17 = fVar17 * *(float *)(param_1 + 0x608);
    if (fVar17 <= fVar20) {
      fVar20 = fVar17;
    }
    FUN_14082cf0e(local_3b8,*(undefined8 *)(param_1 + 0x250),*(undefined8 *)(param_1 + 0x250),0);
    local_138 = 0x101;
    local_1f8 = local_1f8 | 0x20;
    local_378 = lVar7;
    if (local_370 != (undefined1 *)(lVar6 + 0xf08)) {
      puVar11 = (undefined1 *)(lVar6 + 0xf08);
      if (*(undefined1 **)(lVar6 + 0xf38) != (undefined1 *)0x0) {
        puVar11 = *(undefined1 **)(lVar6 + 0xf38);
      }
      FUN_1400709d4(local_370,puVar11,*(undefined4 *)(lVar6 + 0xf40),local_334);
    }
    local_408 = local_3f8;
    local_3f8[0] = 0;
    local_3e8 = 0;
    FUN_14082d216(local_3b8,fVar20,0,1);
    FUN_1403dfdc4(local_3b8);
  }
LAB_14117844f:
  if ((local_a0 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411785b4 FUN_1411785b4 body=291 status=ok
// SIG undefined FUN_1411785b4(void)

uint FUN_1411785b4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = 0.0;
  fVar8 = 0.0;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x38);
    lVar4 = (longlong)*(int *)(param_1 + 0x40) * 0x88 + lVar5;
    do {
      lVar2 = FUN_1409d448e(lVar5 + 0x18);
      if (lVar2 != 0) {
        if ((longlong)(int)param_2[1] != 0) {
          plVar3 = (longlong *)*param_2;
          plVar1 = plVar3 + (int)param_2[1];
          do {
            if (*(int *)(lVar2 + 0x78) != 0) {
              lVar6 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar2 + 0x70) + lVar6) == *plVar3)
                goto LAB_141178676;
                lVar6 = lVar6 + 8;
              } while ((longlong)*(int *)(lVar2 + 0x78) << 3 != lVar6);
            }
            if ((longlong)*(int *)(lVar2 + 0x88) == 0) goto LAB_141178698;
            lVar6 = 0;
            while (*(longlong *)(*(longlong *)(lVar2 + 0x80) + lVar6) != *plVar3) {
              lVar6 = lVar6 + 8;
              if ((longlong)*(int *)(lVar2 + 0x88) * 8 == lVar6) goto LAB_141178698;
            }
LAB_141178676:
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar1);
        }
        fVar7 = (float)FUN_14055830e(lVar5);
        fVar8 = fVar8 + fVar7;
        fVar7 = (float)FUN_1405583ce(lVar5);
        fVar9 = fVar9 + fVar7;
      }
LAB_141178698:
      lVar5 = lVar5 + 0x88;
    } while (lVar5 != lVar4);
  }
  return -(uint)(0.0 < fVar9) & (uint)(fVar8 / fVar9);
}


