// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148992bca FUN_148992bca body=123 status=ok
// SIG undefined FUN_148992bca(void)

undefined8 FUN_148992bca(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_1 + 8,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Script Event \'%s\'",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148992c46 FUN_148992c46 body=53 status=ok
// SIG undefined FUN_148992c46(void)

void FUN_148992c46(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(*param_2 + 0x138);
  if (lVar1 != 0) {
    FUN_148973ca4(lVar1,param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 148992c7c FUN_148992c7c body=474 status=ok
// SIG undefined FUN_148992c7c(void)

undefined8 FUN_148992c7c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  longlong local_118;
  int local_110;
  undefined2 *local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [24];
  longlong local_e0;
  undefined2 *local_d0;
  undefined2 *local_c8;
  undefined2 *local_c0;
  char local_b8;
  undefined2 local_b0 [50];
  undefined2 local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_140002266(param_2,L"Stop All Skill Actions");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_138);
  }
  local_108 = (undefined2 *)0x0;
  uStack_100 = 0;
  local_d0 = local_b0;
  local_b8 = '\0';
  local_c0 = local_4c;
  local_c8 = local_d0;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar3 = (longlong)*(int *)(param_1 + 0x18) * 0x10 + lVar4;
    do {
      if (local_c0 <= local_c8 + 1) {
        FUN_140213274(&local_d0,1);
      }
      *local_c8 = 0x20;
      local_c8 = local_c8 + 1;
      FUN_140ebdabe(local_f8,lVar4,lVar4 + 8);
      FUN_141710b0e(local_f8,&local_118,1);
      iVar1 = local_110 + -1;
      if (local_110 == 0) {
        iVar1 = 0;
      }
      FUN_1449668a2(&local_d0,local_118,iVar1);
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar3);
  }
  *local_c8 = 0;
  FUN_14020fad6(&local_108,local_d0);
  if (local_b8 == '\x01') {
    FUN_1400020a8(local_d0);
  }
  puVar2 = local_108;
  if ((int)uStack_100 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Stop Skill Actions - %s",puVar2);
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148992e58 FUN_148992e58 body=302 status=ok
// SIG undefined FUN_148992e58(void)

void FUN_148992e58(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b42de20;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b42de20;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000148992f0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148992f8c FUN_148992f8c body=197 status=ok
// SIG undefined FUN_148992f8c(void)

void FUN_148992f8c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar3 = *(byte *)(param_1 + 0x38);
  if (((bVar3 & 2) == 0) && (*(byte *)(param_1 + 0x38) = bVar3 | 2, (bVar3 & 1) != 0)) {
    local_18 = *(longlong **)(param_1 + 0x10);
    if (local_18 == (longlong *)0x0) {
      local_18 = (longlong *)0x0;
      local_20 = 0;
    }
    else {
      iVar6 = (int)local_18[1];
      local_20 = 0;
      do {
        if (iVar6 == 0) {
          local_18 = (longlong *)0x0;
          goto LAB_148992ff8;
        }
        LOCK();
        iVar5 = (int)local_18[1];
        bVar7 = iVar6 == iVar5;
        if (bVar7) {
          *(int *)(local_18 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar7);
      local_20 = *(undefined8 *)(param_1 + 8);
    }
LAB_148992ff8:
    if ((*(int *)(param_1 + 0x48) != 0) &&
       (plVar4 = *(longlong **)(param_1 + 0x40), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x60))(plVar4,&local_20);
    }
    plVar4 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
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
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148993052 FUN_148993052 body=346 status=ok
// SIG undefined FUN_148993052(void)

void FUN_148993052(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = (longlong *)0x0;
  uStack_70 = (longlong *)0x0;
  iVar5 = 0;
  FUN_143e3cdf0(param_2,0,&local_78);
  plVar3 = uStack_70;
  if (uStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_70)(uStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_143e3d07c(param_1,0);
  plVar3 = (longlong *)(param_1 + 0x50);
  lVar4 = param_1 + 0x60;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = lVar4;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_1449c0562(&local_48);
    iVar5 = *(int *)(param_1 + 0x78);
  }
  local_60 = local_38;
  iStack_5c = iStack_34;
  local_58 = local_30;
  local_54 = local_2c;
  uStack_70 = (longlong *)local_48;
  local_68 = local_40;
  local_78 = plVar3;
  if ((iStack_34 != iVar5) || (local_40 != lVar4)) {
    do {
      if (*(char *)(*local_78 + 8 + (longlong)iStack_5c * 0x18) != '\x05') {
        *(undefined1 *)(*local_78 + (longlong)iStack_5c * 0x18 + 8) = 2;
      }
      local_60 = local_60 & ~uStack_70._4_4_;
      FUN_1449c0562(&uStack_70);
    } while (local_78 != plVar3 || (local_68 != lVar4 || iStack_5c != iVar5));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489931ae FUN_1489931ae body=71 status=ok
// SIG undefined FUN_1489931ae(void)

undefined8 * FUN_1489931ae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140f99404(&DAT_14cb8bb90);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b26be90;
  memset(puVar1 + 4,0,0x98);
  return puVar1;
}



// FUNCTION 1489931f6 FUN_1489931f6 body=65 status=ok
// SIG undefined FUN_1489931f6(void)

void FUN_1489931f6(undefined8 *param_1)

{
  (**(code **)*param_1)();
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b26be90;
  memset(param_1 + 4,0,0x98);
  return;
}



// FUNCTION 148993238 FUN_148993238 body=38 status=ok
// SIG undefined FUN_148993238(void)

void FUN_148993238(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cbef6c(&DAT_14cb8bc80);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b26bec0;
  return;
}



// FUNCTION 14899325e FUN_14899325e body=38 status=ok
// SIG undefined FUN_14899325e(void)

void FUN_14899325e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b26bec0;
  return;
}



// FUNCTION 148993284 FUN_148993284 body=130 status=ok
// SIG undefined FUN_148993284(void)

void FUN_148993284(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140cbef0c();
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
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
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b26bef0;
  puVar1[5] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
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
  *(undefined2 *)(puVar1 + 0x11) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  return;
}



// FUNCTION 148993306 FUN_148993306 body=132 status=ok
// SIG undefined FUN_148993306(void)

void FUN_148993306(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b26bef0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}



// FUNCTION 14899338a FUN_14899338a body=291 status=ok
// SIG undefined FUN_14899338a(void)

void FUN_14899338a(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar3 = *(longlong **)(*param_2 + 0x38);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  uVar2 = FUN_144a7c80a();
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  uVar2 = FUN_144a7c80a();
  plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
  if (plVar4 == (longlong *)0x0 || plVar3 == plVar4) {
    return;
  }
  uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
  lVar6 = param_1[8];
  if (lVar6 == 0) {
    uVar5 = FUN_140feeb70();
    lVar6 = FUN_14477b664(uVar5);
    param_1[8] = lVar6;
  }
  lVar7 = param_1[9];
  if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (param_1[7] != 0)) {
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar1 == '\0')) {
      lVar7 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar7 = FUN_144aff482(uVar5,param_1 + 7);
    }
    param_1[9] = lVar7;
  }
  lVar6 = FUN_144b39ca2(uVar2,lVar7,0);
  if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x248) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000148993456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2b8))(param_1,param_2,lVar6,*(code **)(*param_1 + 0x2b8));
    return;
  }
  return;
}



// FUNCTION 1489934ae FUN_1489934ae body=629 status=ok
// SIG undefined FUN_1489934ae(void)

void FUN_1489934ae(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x58);
  if (lVar5 == 0) {
    uVar4 = FUN_140e391b0();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x58) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    if (lVar5 == 0) {
      return;
    }
    if (*plVar1 == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x60) = lVar5;
    if (lVar5 == 0) {
      return;
    }
  }
  cVar3 = *(char *)(param_1 + 0x68);
  if (cVar3 == '\0') {
    if (*(longlong *)(param_1 + 0x58) == 0) {
      uVar4 = FUN_140e391b0();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x58) = lVar5;
      if (((*(longlong *)(param_1 + 0x60) == 0) && (lVar5 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          uVar4 = FUN_144aff482(uVar4,plVar1);
        }
        *(undefined8 *)(param_1 + 0x60) = uVar4;
      }
    }
    FUN_1410b135e(param_3);
    return;
  }
  if (cVar3 == '\x01') {
    if (*(longlong *)(param_1 + 0x58) == 0) {
      uVar4 = FUN_140e391b0();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x58) = lVar5;
      if (((*(longlong *)(param_1 + 0x60) == 0) && (lVar5 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          uVar4 = FUN_144aff482(uVar4,plVar1);
        }
        *(undefined8 *)(param_1 + 0x60) = uVar4;
      }
    }
    FUN_1457f0af6(param_3);
    return;
  }
  if (cVar3 == '\x02') {
    if (*(longlong *)(param_1 + 0x58) == 0) {
      uVar4 = FUN_140e391b0();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x58) = lVar5;
      if (((*(longlong *)(param_1 + 0x60) == 0) && (lVar5 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          uVar4 = FUN_144aff482(uVar4,plVar1);
        }
        *(undefined8 *)(param_1 + 0x60) = uVar4;
      }
    }
    FUN_148973f94(param_3);
    return;
  }
  return;
}



// FUNCTION 148993724 FUN_148993724 body=81 status=ok
// SIG undefined FUN_148993724(void)

void FUN_148993724(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(longlong *)(param_2 + 0x30);
  if (local_10 != 0) {
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x44);
    FUN_145793e16(param_1,&local_10,param_2);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899379e FUN_14899379e body=50 status=ok
// SIG undefined FUN_14899379e(void)

void FUN_14899379e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414b4ac4(&DAT_14cb8bea0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b277b00;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



// FUNCTION 1489937d0 FUN_1489937d0 body=44 status=ok
// SIG undefined FUN_1489937d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489937d0(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8beac = _DAT_14cb8beac + -1;
  *param_1 = DAT_14cb8bea0;
  DAT_14cb8bea0 = param_1;
  return;
}



// FUNCTION 1489937fc FUN_1489937fc body=50 status=ok
// SIG undefined FUN_1489937fc(void)

void FUN_1489937fc(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b277b00;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 14899382e FUN_14899382e body=22 status=ok
// SIG undefined FUN_14899382e(void)

undefined8 FUN_14899382e(int *param_1)

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
  
  plVar4 = DAT_14cb8bfa0;
  if (DAT_14cb8bfa0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb8bfa0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8bfa0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb8bfa0[0x3a] <= *(int *)((longlong)DAT_14cb8bfa0 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb8bfa0 + 0x300))(DAT_14cb8bfa0);
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



// FUNCTION 148993844 FUN_148993844 body=32 status=ok
// SIG undefined FUN_148993844(void)

undefined8 FUN_148993844(undefined8 param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,&DAT_14cb8bf30);
  return param_2;
}



// FUNCTION 148993864 FUN_148993864 body=158 status=ok
// SIG undefined FUN_148993864(void)

longlong * FUN_148993864(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_148998c5a();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148998df6(&local_30,plVar1);
  plVar3 = local_28;
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
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148993906 FUN_148993906 body=158 status=ok
// SIG undefined FUN_148993906(void)

longlong * FUN_148993906(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_148998e9d();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148999012(&local_30,plVar1);
  plVar3 = local_28;
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
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489939d0 FUN_1489939d0 body=958 status=ok
// SIG undefined FUN_1489939d0(void)

undefined8 * FUN_1489939d0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  double dVar18;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8;
  undefined1 uStack_e7;
  undefined6 uStack_e6;
  double local_e0;
  double dStack_d8;
  double local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar16 = param_1[4];
  if (lVar16 == 0) {
LAB_148993b9e:
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
    uVar12 = DAT_14c8464e8._4_4_;
    uVar11 = (undefined4)DAT_14c8464e8;
    uVar10 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
    *(undefined4 *)(param_2 + 2) = uVar11;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar12;
    param_2[3] = DAT_14c8464f0;
LAB_148993bc8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_138);
  }
  lVar15 = *(longlong *)(lVar16 + 0x110);
  if (lVar15 == 0) {
    FUN_140aa6c08(lVar16);
    lVar15 = *(longlong *)(lVar16 + 0x110);
    if (lVar15 == 0) goto LAB_148993b9e;
  }
  plVar14 = (longlong *)FUN_14871a10c(lVar15,param_3);
  puVar1 = param_2 + 1;
  if (plVar14 == (longlong *)0x0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
    param_2[3] = DAT_14c8464f0;
    uVar12 = DAT_14c8464e8._4_4_;
    uVar11 = (undefined4)DAT_14c8464e8;
    uVar10 = DAT_14c8464e0._4_4_;
    *(undefined4 *)puVar1 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
    *(undefined4 *)(param_2 + 2) = uVar11;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar12;
    goto LAB_148993bc8;
  }
  param_2[3] = DAT_14c8464f0;
  uVar12 = DAT_14c8464e8._4_4_;
  uVar11 = (undefined4)DAT_14c8464e8;
  uVar10 = DAT_14c8464e0._4_4_;
  *(undefined4 *)puVar1 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
  *(undefined4 *)(param_2 + 2) = uVar11;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar12;
  *(undefined1 *)(param_2 + 4) = 1;
  *param_2 = plVar14;
  cVar13 = FUN_140d4f0da(plVar14[0x15],param_1 + 5);
  if (cVar13 == '\0') {
    cVar13 = (**(code **)(*plVar14 + 0x4c8))(plVar14,*param_1);
    if (cVar13 == '\0') {
      plVar14 = plVar14 + 0x48;
      plVar17 = &local_f8;
      for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
        *plVar17 = *plVar14;
        plVar14 = plVar14 + 1;
        plVar17 = plVar17 + 1;
      }
    }
    else {
      (**(code **)(*plVar14 + 0x4a8))(plVar14,&local_f8,*param_1,0);
    }
    dVar2 = (double)param_1[1];
    dVar3 = (double)param_1[2];
    dVar4 = (double)param_1[3];
    dVar9 = (double)CONCAT62(uStack_e6,CONCAT11(uStack_e7,local_e8));
    dVar7 = (double)CONCAT44(local_f8._4_4_,(undefined4)local_f8);
    dVar8 = (double)CONCAT44(uStack_ec,uStack_f0);
    dVar5 = dVar8 * dVar4 - dVar3 * dVar9;
    dVar5 = dVar5 + dVar5;
    dVar6 = dVar7 * dVar3 - dVar2 * dVar8;
    dVar6 = dVar6 + dVar6;
    dVar18 = dVar9 * dVar2 - dVar4 * dVar7;
    dVar18 = dVar18 + dVar18;
    param_2[1] = (dVar8 * dVar6 - dVar18 * dVar9) + local_e0 * dVar5 + dVar2 + dStack_d8;
    param_2[2] = (dVar9 * dVar5 - dVar6 * dVar7) + local_e0 * dVar18 + dVar3 + local_d0;
    param_2[3] = (dVar7 * dVar18 - dVar5 * dVar8) + local_e0 * dVar6 + dVar4 +
                 (double)CONCAT44(uStack_c4,local_c8);
    goto LAB_148993d71;
  }
  local_e8 = 0;
  uStack_e7 = 0;
  local_e0 = DAT_14c8464f8;
  dStack_d8 = DAT_14c846500;
  local_d0 = DAT_14c846508;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  lStack_a8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_a0 = DAT_14c8464f0;
  lVar16 = *param_1;
  local_f8._4_4_ = (undefined4)lVar16;
  uStack_f0 = (undefined4)((ulonglong)lVar16 >> 0x20);
  local_f8._0_4_ = CONCAT31(local_f8._1_3_,lVar16 != 0);
  if (((double)param_1[1] != 0.0) || (NAN((double)param_1[1]))) {
LAB_148993b31:
    local_a0 = param_1[3];
    local_b0 = param_1[1];
    lStack_a8 = param_1[2];
    local_e8 = 10;
    uStack_c4 = local_f8._4_4_;
    uStack_c0 = uStack_f0;
  }
  else {
    if (((double)param_1[2] != 0.0) || (NAN((double)param_1[2]))) goto LAB_148993b31;
    if (((double)param_1[3] != 0.0) || (NAN((double)param_1[3]))) goto LAB_148993b31;
  }
  local_108 = param_1[8];
  local_118 = (undefined4)param_1[6];
  uStack_114 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_110 = (undefined4)param_1[7];
  uStack_10c = *(undefined4 *)((longlong)param_1 + 0x3c);
  FUN_1412140b0(puVar1,plVar14[0x15],&local_f8);
LAB_148993d71:
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148993d90 FUN_148993d90 body=91 status=ok
// SIG undefined FUN_148993d90(void)

undefined8 *
FUN_148993d90(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,longlong *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  param_1[3] = *(undefined8 *)(param_3 + 4);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(param_1 + 1) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  lVar1 = *param_4;
  param_1[4] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar5 = *param_5;
  uVar6 = param_5[1];
  uVar7 = param_5[3];
  param_1[7] = param_5[2];
  param_1[8] = uVar7;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  return param_1;
}



// FUNCTION 148993e24 FUN_148993e24 body=40 status=ok
// SIG undefined FUN_148993e24(void)

undefined8 FUN_148993e24(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140eb10d0(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148993e58 FUN_148993e58 body=28 status=ok
// SIG undefined FUN_148993e58(void)

void FUN_148993e58(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_140f28720(param_1);
  return;
}



// FUNCTION 148993e74 FUN_148993e74 body=443 status=ok
// SIG undefined FUN_148993e74(void)

ulonglong FUN_148993e74(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  byte local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = param_1[0x15];
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    local_98 = param_1;
    FUN_140b8dfda(&local_70);
    uVar8 = 0;
    if (local_68 == 0) {
      plVar1 = (longlong *)(lVar7 + 0x240);
      lVar2 = lVar7 + 0x250;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_58 = lVar2;
      if (*(int *)(lVar7 + 0x268) != 0) {
        FUN_1449c0562(&local_60);
        uVar8 = (ulonglong)*(uint *)(lVar7 + 0x268);
      }
      local_80 = local_50;
      uVar4 = local_80;
      local_78 = local_48;
      local_74 = local_44;
      local_90 = local_60;
      local_88 = local_58;
      local_80._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      local_98 = plVar1;
      if ((local_80._4_4_ != (int)uVar8) || (local_58 != lVar2)) {
        iVar6 = local_80._4_4_;
        local_80 = uVar4;
        do {
          plVar3 = *(longlong **)(*local_98 + (longlong)iVar6 * 0x10);
          if (plVar3 != (longlong *)0x0) {
            lVar7 = FUN_1407be990();
            if ((((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) && (plVar3 != param_1)) &&
                (*(longlong *)
                  (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                 lVar7 + 0x30)) && (cVar5 = (*(code *)*param_2)(param_2[1],plVar3), cVar5 != '\0'))
            {
              uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
              goto LAB_148993f64;
            }
          }
          local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
          FUN_1449c0562(&local_90);
          iVar6 = local_80._4_4_;
          uVar4 = local_80;
        } while (local_98 != plVar1 || (local_88 != lVar2 || local_80._4_4_ != (int)uVar8));
      }
      local_80 = uVar4;
      uVar8 = 0;
    }
LAB_148993f64:
    if ((local_68 & 1) == 0) {
      *(int *)(local_70 + 0x28) = *(int *)(local_70 + 0x28) + -1;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 148994030 FUN_148994030 body=323 status=ok
// SIG undefined FUN_148994030(void)

void FUN_148994030(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a68e82();
  if (param_2 != 0) {
    local_28 = FUN_140db3394();
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_28);
    }
    local_38 = 0;
    lVar2 = FUN_140fae5dc(param_2,&local_28,0,&DAT_14c846480);
    if (lVar2 != 0) {
      lVar3 = FUN_140db3394();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        if ((*(longlong *)(param_1 + 200) == 0) && (0 < *(int *)(param_1 + 0xc0))) {
          plVar1 = *(longlong **)(param_1 + 0xb8);
          lVar3 = *plVar1;
          if (DAT_14c950c29 == '\x01') {
            if (lVar3 == 0) {
              lVar3 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar3 = *plVar1;
            }
          }
          *(longlong *)(param_1 + 200) = lVar3;
        }
        *(undefined1 *)(lVar2 + 0x968) = *(undefined1 *)(param_1 + 0xa8);
        *(undefined4 *)(lVar2 + 0x96c) = *(undefined4 *)(param_1 + 0xac);
        *(undefined1 *)(lVar2 + 0x695) = *(undefined1 *)(param_1 + 0xb0);
        lVar3 = *(longlong *)(param_1 + 200);
        if (DAT_14c950c29 == '\x01') {
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar3 = *(longlong *)(param_1 + 200);
          }
        }
        *(longlong *)(lVar2 + 0x970) = lVar3;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148994174 thunk_FUN_1404275c0 body=5 status=ok
// SIG undefined thunk_FUN_1404275c0(void)

void thunk_FUN_1404275c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  wchar_t *pwStack_58;
  code *pcStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x438);
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_1 + 0x438);
    }
  }
  *(longlong *)(param_1 + 0x440) = lVar3;
  plVar1 = *(longlong **)(param_1 + 0x430);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cb22468 == 0) {
      ppcStack_40 = &pcStack_20;
      pcStack_20 = FUN_1449e2820;
      pcStack_30 = FUN_14081d0ea;
      pcStack_38 = FUN_1427b09ee;
      puStack_48 = &LAB_147f2c44f;
      pcStack_50 = FUN_146438a21;
      pwStack_58 = L"Engine";
      uStack_60 = 0;
      uStack_68 = 0x10004001;
      uStack_70 = 8;
      uStack_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb22468);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb22468 == 0) {
        ppcStack_40 = &pcStack_20;
        pcStack_20 = FUN_1449e2820;
        pcStack_30 = FUN_14081d0ea;
        pcStack_38 = FUN_1427b09ee;
        puStack_48 = &LAB_147f2c44f;
        pcStack_50 = FUN_146438a21;
        pwStack_58 = L"Engine";
        uStack_60 = 0;
        uStack_68 = 0x10004001;
        uStack_70 = 8;
        uStack_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb22468);
      if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
        lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (lVar3 != 0) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar3);
          }
          *(longlong *)(param_1 + 0x440) = lVar3;
        }
      }
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148994192 FUN_148994192 body=128 status=ok
// SIG undefined FUN_148994192(void)

void FUN_148994192(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_147e243b2(param_1,&local_20,0);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148994214 FUN_148994214 body=32 status=ok
// SIG undefined FUN_148994214(void)

void FUN_148994214(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14071f5fc();
  if (lVar1 != 0) {
    FUN_147f5dcee(lVar1);
    return;
  }
  return;
}



// FUNCTION 148994234 FUN_148994234 body=102 status=ok
// SIG undefined FUN_148994234(void)

void FUN_148994234(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14071f5fc();
  if (lVar1 != 0) {
    FUN_144b2f36a(local_38,param_1 + 0xc78);
    FUN_140365a56(lVar1,local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489942a0 FUN_1489942a0 body=229 status=ok
// SIG undefined FUN_1489942a0(void)

void FUN_1489942a0(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  uVar1 = FUN_144a7b040();
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_144a7b040();
    plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
    if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
      lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      plVar2 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
      if (plVar2 == (longlong *)0x0) {
        if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148994382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + 0x5c8))(param_2,0);
          return;
        }
        FUN_14654a9e8(lVar4);
      }
      else {
        (**(code **)(*plVar2 + 0x40))(plVar2,0);
        if (lVar4 == 0) {
          return;
        }
      }
      if ((*(byte *)(lVar4 + 0x55) & 4) != 0) {
        return;
      }
      FUN_140961230(lVar4,1);
      return;
    }
  }
  FUN_147e246ae(param_1,param_2);
  return;
}



// FUNCTION 148994394 FUN_148994394 body=45 status=ok
// SIG undefined FUN_148994394(void)

void FUN_148994394(longlong param_1)

{
  FUN_1407fb560();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_140872868(param_1 + 0x520);
  }
  FUN_140633582(param_1);
  return;
}



// FUNCTION 1489943c6 FUN_1489943c6 body=130 status=ok
// SIG undefined FUN_1489943c6(void)

undefined8 * FUN_1489943c6(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0xbe8);
  lVar6 = (longlong)iVar3;
  if ((lVar6 < 0) || (*(int *)(param_1 + 0xbe0) <= iVar3)) {
    FUN_148994448();
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  else {
    *(int *)(param_1 + 0xbe8) = iVar3 + 1;
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xbd8) + lVar6 * 0x18);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x10 + lVar6 * 0x18);
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
    param_2[4] = uVar4;
    param_2[5] = uVar5;
    param_2[6] = uVar2;
    param_2[7] = 0;
    param_2[8] = 0x3ff0000000000000;
    param_2[9] = 0x3ff0000000000000;
    param_2[10] = 0x3ff0000000000000;
    param_2[0xb] = 0;
    *(undefined1 *)(param_2 + 0xc) = 1;
  }
  return param_2;
}



// FUNCTION 148994448 FUN_148994448 body=445 status=ok
// SIG undefined FUN_148994448(void)

void FUN_148994448(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  code *pcVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_48 [8];
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0xbc8) != 0) goto LAB_14899446b;
  lVar7 = *(longlong *)(param_1 + 0xb0);
  if (lVar7 == 0) {
    lVar7 = FUN_1448abda6(param_1);
  }
  FUN_1409e0c66(&local_40,lVar7);
  bVar4 = true;
  if (local_38 == (longlong *)0x0) {
LAB_1489944fb:
    plVar9 = (longlong *)0x0;
    pcVar8 = (code *)0x0;
  }
  else {
    iVar6 = (int)local_38[1];
    do {
      if (iVar6 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_38[1];
      bVar10 = iVar6 == iVar5;
      if (bVar10) {
        *(int *)(local_38 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar9 = local_38;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    if (plVar9 == (longlong *)0x0) goto LAB_1489944fb;
    bVar4 = false;
    pcVar8 = local_40;
  }
  local_58 = 0;
  FUN_140a41f04(pcVar8,&local_40,*(undefined8 *)(param_1 + 0xa8),param_1 + 0x950);
  plVar2 = local_38;
  if ((code **)(param_1 + 0xbc8) != &local_40) {
    *(code **)(param_1 + 0xbc8) = local_40;
    local_40 = (code *)0x0;
    plVar3 = *(longlong **)(param_1 + 0xbd0);
    if (local_38 != plVar3) {
      local_38 = (longlong *)0x0;
      *(longlong **)(param_1 + 0xbd0) = plVar2;
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
  plVar2 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  pcVar8 = *(code **)(param_1 + 0xbc8);
  if (pcVar8 != (code *)0x0) {
    local_40 = FUN_148994706;
    local_38 = (longlong *)((ulonglong)local_38 & 0xffffffff00000000);
    FUN_148994606(pcVar8 + 0x130,local_48,param_1);
  }
  if (!bVar4) {
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
LAB_14899446b:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148994606 FUN_148994606 body=254 status=ok
// SIG undefined FUN_148994606(void)

undefined8
FUN_148994606(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14ac8b4c0;
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
  *local_48 = &PTR_FUN_14b42e590;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140e0aeb0(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148994706 FUN_148994706 body=366 status=ok
// SIG undefined FUN_148994706(void)

void FUN_148994706(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = *(longlong *)(param_1 + 0xbc8);
  if ((lVar8 != 0) && (lVar8 == *param_2)) {
    plVar3 = (longlong *)(param_1 + 0xbd8);
    *(undefined4 *)(param_1 + 0xbe0) = 0;
    if (*(int *)(param_1 + 0xbe4) < 0) {
      FUN_1447a8aa0(plVar3,0);
      lVar8 = *(longlong *)(param_1 + 0xbc8);
    }
    *(undefined4 *)(param_1 + 0xbe8) = 0;
    lVar7 = FUN_1412e3d68(lVar8);
    lVar8 = *(longlong *)(lVar7 + 0x380);
    if (*(longlong *)(lVar7 + 0x380) == 0) {
      lVar8 = lVar7;
    }
    if ((longlong)*(int *)(lVar7 + 0x388) != 0) {
      lVar7 = (longlong)*(int *)(lVar7 + 0x388) * 0x38;
      do {
        if ((*(byte *)(lVar8 + 0x34) & 1) == 0) {
          FUN_144a7b7fe(lVar8,&local_50);
          iVar5 = *(int *)(param_1 + 0xbe0);
          *(uint *)(param_1 + 0xbe0) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0xbe4) < iVar5 + 1U) {
            FUN_1403e3958(plVar3,iVar5);
          }
          lVar6 = *plVar3;
          *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar5 * 0x18) = local_40;
          puVar4 = (undefined4 *)(lVar6 + (longlong)iVar5 * 0x18);
          *puVar4 = local_50;
          puVar4[1] = uStack_4c;
          puVar4[2] = uStack_48;
          puVar4[3] = uStack_44;
        }
        lVar8 = lVar8 + 0x38;
        lVar7 = lVar7 + -0x38;
      } while (lVar7 != 0);
    }
    *(undefined8 *)(param_1 + 0xbc8) = 0;
    plVar3 = *(longlong **)(param_1 + 0xbd0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xbd0) = 0;
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
    FUN_14899ac1b(*(longlong *)(param_1 + 0xbd8),
                  *(longlong *)(param_1 + 0xbd8) + (longlong)*(int *)(param_1 + 0xbe0) * 0x18,
                  &local_50);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148994876 FUN_148994876 body=100 status=ok
// SIG undefined FUN_148994876(void)

void FUN_148994876(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = FUN_14479d2ce(param_2 + 0x18);
    if (lVar1 != 0) {
      lVar2 = FUN_140fb15e0();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_141440cd6(lVar1 + 0x508,*(undefined8 *)(param_1 + 0x30));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1489948da FUN_1489948da body=526 status=ok
// SIG undefined FUN_1489948da(void)

void FUN_1489948da(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_60 = 0;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    if (*(longlong *)(param_1 + 0x40) == 0) goto LAB_14899491c;
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x410);
  }
  else {
    lVar5 = FUN_14479d2ce(param_2 + 0x18);
    if ((lVar5 == 0) || ((longlong)*(int *)(lVar5 + 0x498) < 1)) goto LAB_14899491c;
    puVar6 = (undefined8 *)
             (*(longlong *)(lVar5 + 0x490) + (longlong)*(int *)(lVar5 + 0x498) * 8 + -8);
  }
  FUN_148994aea(*puVar6,&local_58,&local_60);
  if ((local_58 != 0) && ((longlong)*(int *)(param_1 + 0x38) != 0)) {
    plVar11 = *(longlong **)(param_1 + 0x30);
    local_78 = plVar11 + *(int *)(param_1 + 0x38);
    do {
      lVar5 = *plVar11;
      if (lVar5 != 0) {
        iVar2 = *(int *)(lVar5 + 0x498);
        local_80 = lVar5;
        if ((longlong)iVar2 != 0) {
          lVar5 = *(longlong *)(lVar5 + 0x490);
          lVar10 = 0;
          do {
            lVar4 = local_60;
            lVar3 = *(longlong *)(lVar5 + lVar10);
            if ((local_60 != 0) &&
               (plVar8 = *(longlong **)(lVar3 + 0xa8), plVar8 != (longlong *)0x0)) {
              uVar7 = FUN_140b066c4();
              plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar7);
              if (plVar8 != (longlong *)0x0) {
                uVar7 = FUN_140b066c4();
                plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
                if (plVar9 != (longlong *)0x0 && plVar8 != plVar9) {
                  (**(code **)(*plVar9 + 0x10))(plVar9,lVar4);
                }
              }
            }
            FUN_1448c1924(lVar3,&local_70);
            if (local_70 != 0) {
              FUN_14092ac80(local_70,local_58);
            }
            plVar8 = local_68;
            if (local_68 != (longlong *)0x0) {
              LOCK();
              plVar9 = local_68 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)*local_68)(local_68);
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                }
              }
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)iVar2 * 8 != lVar10);
        }
        FUN_140af934a(local_80,0);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != local_78);
  }
LAB_14899491c:
  plVar11 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_50 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148994aea FUN_148994aea body=296 status=ok
// SIG undefined FUN_148994aea(void)

void FUN_148994aea(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    FUN_1448c1924(param_1,&local_38);
    plVar3 = local_30;
    if (&local_38 != param_2) {
      *param_2 = local_38;
      local_38 = 0;
      plVar4 = (longlong *)param_2[1];
      if (local_30 != plVar4) {
        local_30 = (longlong *)0x0;
        param_2[1] = plVar3;
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
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
    }
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = *(longlong **)(param_1 + 0xa8);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_1449a018c();
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
      if (plVar3 != (longlong *)0x0) {
        uVar2 = FUN_1449a018c();
        plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
        if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
          uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
          *param_3 = uVar2;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148994c14 FUN_148994c14 body=122 status=ok
// SIG undefined FUN_148994c14(void)

undefined8 * FUN_148994c14(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_2 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(undefined4 *)(param_1 + 0x9c);
  uVar3 = *(undefined4 *)(param_1 + 0xa0);
  uVar4 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  *(undefined4 *)(param_2 + 2) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
  param_2[3] = 0;
  iVar1 = *(int *)(param_1 + 0xb0);
  _Src = *(void **)(param_1 + 0xa8);
  *(int *)(param_2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 3,iVar1,0);
    memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 148994c9a FUN_148994c9a body=35 status=ok
// SIG undefined FUN_148994c9a(void)

undefined8 FUN_148994c9a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_147a1cb18(*(undefined8 *)(param_1 + 0x390),param_2,param_3,1);
  return param_2;
}



// FUNCTION 148994cbe FUN_148994cbe body=35 status=ok
// SIG undefined FUN_148994cbe(void)

undefined8 FUN_148994cbe(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_147a1cee2(*(undefined8 *)(param_1 + 0x390),param_2,param_3,1);
  return param_2;
}



// FUNCTION 148994ce2 FUN_148994ce2 body=41 status=ok
// SIG undefined FUN_148994ce2(void)

undefined8
FUN_148994ce2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  FUN_147a222da(*(undefined8 *)(param_1 + 0x390),param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 148994d0c FUN_148994d0c body=12 status=ok
// SIG undefined FUN_148994d0c(void)

void FUN_148994d0c(longlong param_1)

{
  FUN_147a21316(*(undefined8 *)(param_1 + 0x390));
  return;
}



// FUNCTION 148994d18 FUN_148994d18 body=26 status=ok
// SIG undefined FUN_148994d18(void)

void FUN_148994d18(undefined8 param_1)

{
  FUN_1405f1eac();
  FUN_148994d32(param_1);
  return;
}



// FUNCTION 148994d32 FUN_148994d32 body=355 status=ok
// SIG undefined FUN_148994d32(void)

void FUN_148994d32(longlong param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x3a8) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x3b0) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x3b8) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x3c0) = 0xc7efffffe0000000;
  *(undefined8 *)(param_1 + 0x3c8) = 0xc7efffffe0000000;
  *(undefined8 *)(param_1 + 0x3d0) = 0xc7efffffe0000000;
  iVar1 = FUN_14349c812(*(undefined8 *)(param_1 + 0x390));
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      FUN_141119a54(*(undefined8 *)(param_1 + 0x390),&local_38,iVar1,1);
      dVar4 = *(double *)(param_1 + 0x3b8);
      if (local_28 <= *(double *)(param_1 + 0x3b8)) {
        dVar4 = local_28;
      }
      dVar3 = *(double *)(param_1 + 0x3b0);
      if (local_30 <= *(double *)(param_1 + 0x3b0)) {
        dVar3 = local_30;
      }
      dVar5 = *(double *)(param_1 + 0x3a8);
      if (local_38 <= *(double *)(param_1 + 0x3a8)) {
        dVar5 = local_38;
      }
      *(double *)(param_1 + 0x3a8) = dVar5;
      *(double *)(param_1 + 0x3b0) = dVar3;
      *(double *)(param_1 + 0x3b8) = dVar4;
      dVar4 = *(double *)(param_1 + 0x3d0);
      if (*(double *)(param_1 + 0x3d0) <= local_28) {
        dVar4 = local_28;
      }
      dVar3 = *(double *)(param_1 + 0x3c8);
      if (*(double *)(param_1 + 0x3c8) <= local_30) {
        dVar3 = local_30;
      }
      dVar5 = *(double *)(param_1 + 0x3c0);
      if (*(double *)(param_1 + 0x3c0) <= local_38) {
        dVar5 = local_38;
      }
      *(double *)(param_1 + 0x3c0) = dVar5;
      *(double *)(param_1 + 0x3c8) = dVar3;
      *(double *)(param_1 + 0x3d0) = dVar4;
      iVar1 = iVar1 + 1;
      iVar2 = FUN_14349c812(*(undefined8 *)(param_1 + 0x390));
    } while (iVar1 < iVar2);
  }
  *(double *)(param_1 + 0x3d0) = (double)*(float *)(param_1 + 0x39c) + *(double *)(param_1 + 0x3d0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148994e96 FUN_148994e96 body=677 status=ok
// SIG undefined FUN_148994e96(void)

bool FUN_148994e96(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  bVar7 = false;
  if (*(char *)(param_1 + 0x398) == '\x01') {
    fVar10 = 0.0;
    iVar8 = 0;
    while( true ) {
      iVar5 = FUN_14349c812(*(undefined8 *)(param_1 + 0x390));
      bVar7 = iVar5 <= iVar8;
      if (iVar5 <= iVar8) break;
      iVar6 = FUN_14349c812(*(undefined8 *)(param_1 + 0x390));
      iVar5 = iVar8 + 1;
      if (iVar8 == iVar6 + -1) {
        iVar5 = 0;
      }
      FUN_141119a54(*(undefined8 *)(param_1 + 0x390),&local_e8,iVar5,1);
      FUN_141119a54(*(undefined8 *)(param_1 + 0x390),&local_100,iVar8,1);
      dVar2 = local_d8 - local_f0;
      dVar1 = local_e0 - local_f8;
      dVar3 = local_e8 - local_100;
      FUN_141119a54(*(undefined8 *)(param_1 + 0x390),&local_e8,iVar8,1);
      fVar9 = (float)((dVar1 * DAT_14c8462d0 - dVar2 * DAT_14c8462c8) * (*param_2 - local_e8) +
                      (DAT_14c8462c0 * dVar2 - dVar3 * DAT_14c8462d0) * (param_2[1] - local_e0) +
                     (dVar3 * DAT_14c8462c8 - DAT_14c8462c0 * dVar1) * (param_2[2] - local_d8));
      fVar10 = (float)(~-(uint)(fVar10 == 0.0) & (uint)fVar10 | -(uint)(fVar10 == 0.0) & (uint)fVar9
                      );
      fVar9 = (float)(-(uint)(0.0 < fVar9) & 0x3f800000 |
                     ~-(uint)(0.0 < fVar9) & -(uint)(fVar9 < 0.0) & 0xbf800000);
      fVar4 = (float)(-(uint)(0.0 < fVar10) & 0x3f800000 |
                     ~-(uint)(0.0 < fVar10) & -(uint)(fVar10 < 0.0) & 0xbf800000);
      if ((fVar9 != fVar4) || (iVar8 = iVar8 + 1, NAN(fVar9) || NAN(fVar4))) break;
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899513c FUN_14899513c body=399 status=ok
// SIG undefined FUN_14899513c(void)

ulonglong FUN_14899513c(longlong param_1,double *param_2)

{
  double dVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  double local_70;
  undefined1 local_60 [8];
  double local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar1 = *param_2;
  if (((((dVar1 < *(double *)(param_1 + 0x3a8)) ||
        (*(double *)(param_1 + 0x3c0) <= dVar1 && dVar1 != *(double *)(param_1 + 0x3c0))) ||
       (dVar1 = param_2[1], dVar1 < *(double *)(param_1 + 0x3b0))) ||
      (*(double *)(param_1 + 0x3c8) <= dVar1 && dVar1 != *(double *)(param_1 + 0x3c8))) ||
     (((*(char *)(param_1 + 0x3a0) == '\0' &&
       ((dVar1 = param_2[2], dVar1 < *(double *)(param_1 + 0x3b8) ||
        (*(double *)(param_1 + 0x3d0) <= dVar1 && dVar1 != *(double *)(param_1 + 0x3d0))))) ||
      (uVar3 = FUN_14349c812(*(undefined8 *)(param_1 + 0x390)), (int)uVar3 < 1)))) {
    uVar4 = 0;
  }
  else {
    uVar7 = 0;
    uVar4 = 0;
    iVar5 = uVar3 - 1;
    do {
      iVar6 = (int)uVar7;
      FUN_141119a54(*(undefined8 *)(param_1 + 0x390),local_60,uVar7 & 0xffffffff,1);
      FUN_141119a54(*(undefined8 *)(param_1 + 0x390),local_78,iVar5,1);
      dVar1 = param_2[1];
      if (((local_58 < dVar1) && (dVar1 <= local_70)) || ((dVar1 <= local_58 && (local_70 < dVar1)))
         ) {
        lVar2 = *(longlong *)(param_1 + 0x3f0);
        uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),
                         dVar1 * (double)*(float *)(lVar2 + 4 + uVar7 * 8) +
                         (double)*(float *)(lVar2 + uVar7 * 8) < *param_2 ^ (byte)uVar4) &
                0xffffffff;
      }
      uVar7 = uVar7 + 1;
      iVar5 = iVar6;
    } while (uVar3 != uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1489952cc FUN_1489952cc body=186 status=ok
// SIG undefined FUN_1489952cc(void)

void FUN_1489952cc(float *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (*param_1 <= 0.0) {
    dVar5 = *(double *)(param_1 + 0xc) - *(double *)(param_1 + 6);
    dVar1 = *(double *)(param_1 + 10) - *(double *)(param_1 + 4);
    dVar3 = *(double *)(param_1 + 8) - *(double *)(param_1 + 2);
    dVar2 = *(double *)(param_1 + 0x12) - *(double *)(param_1 + 6);
    dVar6 = *(double *)(param_1 + 0x10) - *(double *)(param_1 + 4);
    dVar7 = *(double *)(param_1 + 0xe) - *(double *)(param_1 + 2);
    dVar4 = dVar3 * dVar6 - dVar7 * dVar1;
    dVar3 = dVar5 * dVar7 - dVar2 * dVar3;
    dVar2 = dVar1 * dVar2 - dVar6 * dVar5;
    *param_1 = (float)(SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3) * 0.5);
  }
  return;
}



// FUNCTION 148995386 FUN_148995386 body=318 status=ok
// SIG undefined FUN_148995386(void)

double * FUN_148995386(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  
  uVar7 = rand();
  uVar8 = rand();
  uVar9 = rand();
  iVar15 = (int)(((float)(uVar9 & 0x7fff) / 32767.0) * 3.0);
  iVar13 = 2;
  if (iVar15 < 2) {
    iVar13 = iVar15;
  }
  iVar10 = iVar13 + 1;
  if (1 < iVar15) {
    iVar10 = 0;
  }
  fVar20 = (float)(uVar7 & 0x7fff) / 32767.0;
  fVar16 = 1.0 - fVar20;
  fVar18 = ((float)(uVar8 & 0x7fff) / 32767.0) * fVar16 + 0.0;
  iVar15 = iVar10 + 1;
  if (iVar10 == 2) {
    iVar15 = 0;
  }
  lVar14 = (longlong)iVar13;
  dVar21 = (double)fVar20;
  dVar1 = *(double *)(param_1 + 0x18 + lVar14 * 0x18);
  dVar2 = *(double *)(param_1 + 0x10 + lVar14 * 0x18);
  lVar11 = (longlong)iVar10;
  dVar19 = (double)fVar18;
  dVar3 = *(double *)(param_1 + 0x18 + lVar11 * 0x18);
  dVar4 = *(double *)(param_1 + 0x10 + lVar11 * 0x18);
  lVar12 = (longlong)iVar15;
  dVar17 = (double)(fVar16 - fVar18);
  dVar5 = *(double *)(param_1 + 0x18 + lVar12 * 0x18);
  dVar6 = *(double *)(param_1 + 0x10 + lVar12 * 0x18);
  *param_2 = dVar17 * *(double *)(param_1 + 8 + lVar12 * 0x18) +
             dVar19 * *(double *)(param_1 + 8 + lVar11 * 0x18) +
             dVar21 * *(double *)(param_1 + 8 + lVar14 * 0x18);
  param_2[1] = dVar6 * dVar17 + dVar4 * dVar19 + dVar2 * dVar21;
  param_2[2] = dVar5 * dVar17 + dVar3 * dVar19 + dVar1 * dVar21;
  return param_2;
}



// FUNCTION 1489954d4 FUN_1489954d4 body=213 status=ok
// SIG undefined FUN_1489954d4(void)

undefined8 * FUN_1489954d4(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  GUID local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14b284200;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_58.Data1 = 0;
  local_58.Data2 = 0;
  local_58.Data3 = 0;
  local_58.Data4[0] = '\0';
  local_58.Data4[1] = '\0';
  local_58.Data4[2] = '\0';
  local_58.Data4[3] = '\0';
  local_58.Data4[4] = '\0';
  local_58.Data4[5] = '\0';
  local_58.Data4[6] = '\0';
  local_58.Data4[7] = '\0';
  CoCreateGuid(&local_58);
  *(ulong *)(param_1 + 5) = local_58.Data1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_58._4_4_;
  *(undefined4 *)(param_1 + 6) = local_58.Data4._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_58.Data4._4_4_;
  *param_1 = &PTR_FUN_14b2910a0;
  param_1[7] = &PTR_FUN_14b2841e0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_58.Data1 = 0;
  local_58.Data2 = 0;
  local_58.Data3 = 0;
  local_58.Data4[0] = '\0';
  local_58.Data4[1] = '\0';
  local_58.Data4[2] = '\0';
  local_58.Data4[3] = '\0';
  local_58.Data4[4] = '\0';
  local_58.Data4[5] = '\0';
  local_58.Data4[6] = '\0';
  local_58.Data4[7] = '\0';
  CoCreateGuid(&local_58);
  *(ulong *)(param_1 + 8) = local_58.Data1;
  *(undefined4 *)((longlong)param_1 + 0x44) = local_58._4_4_;
  *(undefined4 *)(param_1 + 9) = local_58.Data4._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x4c) = local_58.Data4._4_4_;
  param_1[7] = &PTR_FUN_14b2910e0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489955aa FUN_1489955aa body=408 status=ok
// SIG undefined FUN_1489955aa(void)

longlong * FUN_1489955aa(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14899b36a(*param_3,&local_78);
  plVar3 = plStack_70;
  lVar5 = local_78;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  lVar4 = param_3[1];
  plVar6 = (longlong *)FUN_14001cc68(0xb0,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b42eaf0;
  plVar1 = plVar6 + 2;
  FUN_143e46808(plVar1,lVar4 + 8);
  plVar6[2] = (longlong)&PTR_FUN_14b42ebe0;
  plVar6[0x10] = lVar5;
  plVar6[0x11] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b42eb10;
  local_60 = plVar1;
  local_58 = plVar6;
  FUN_14899bc50(&local_60,plVar1);
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
  plVar1 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_70 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_58;
  *param_2 = (longlong)local_60;
  param_2[1] = (longlong)local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_58 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148995748 FUN_148995748 body=65 status=ok
// SIG undefined FUN_148995748(void)

undefined4 *
FUN_148995748(undefined4 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  lVar2 = FUN_14899578a(param_1,param_4,0);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    *param_2 = *(undefined4 *)(lVar2 + 4);
    uVar3 = 3;
    uVar1 = 4;
  }
  *(undefined2 *)(param_2 + 6) = uVar1;
  *(undefined1 *)(param_2 + 8) = uVar3;
  return param_2;
}



// FUNCTION 14899578a FUN_14899578a body=234 status=ok
// SIG undefined FUN_14899578a(void)

longlong FUN_14899578a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_140fecfdc(param_2);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_140eca14a();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_140eca14a();
      plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
      if (plVar4 != (longlong *)0x0 && plVar2 != plVar4) {
        lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
        if (lVar5 != 0) {
          FUN_1412f28e8(lVar5,&local_30,param_1 + 8,param_3);
          lVar5 = local_30 + 8;
          if (local_30 == 0) {
            lVar5 = 0;
          }
          if (local_28 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_28 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_28)(local_28);
              LOCK();
              piVar1 = (int *)((longlong)local_28 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_28 + 0x10))(local_28);
              }
            }
          }
          goto LAB_1489957f5;
        }
      }
    }
  }
  lVar5 = 0;
LAB_1489957f5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148995876 FUN_148995876 body=64 status=ok
// SIG undefined FUN_148995876(void)

bool FUN_148995876(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_14899578a(param_1,param_3,1);
  if (lVar1 != 0) {
    uVar2 = FUN_144a7ecd0(param_4);
    *(undefined4 *)(lVar1 + 8) = uVar2;
    FUN_14020a6cc(lVar1,1);
  }
  return lVar1 != 0;
}



// FUNCTION 1489958b6 FUN_1489958b6 body=473 status=ok
// SIG undefined FUN_1489958b6(void)

undefined8 FUN_1489958b6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  undefined4 uVar10;
  undefined1 auStack_78 [32];
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (lVar6 == 0) {
    uVar5 = FUN_1458c8590();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x10) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar5 = 0;
    if ((lVar6 == 0) || (*plVar1 == 0)) goto LAB_148995951;
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar4 != '\0') {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,plVar1);
        *(longlong *)(param_1 + 0x18) = lVar6;
        if (lVar6 != 0) goto LAB_148995974;
        goto LAB_14899594f;
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
LAB_148995974:
    lVar6 = FUN_14899578a(param_1,param_3,1);
    if (lVar6 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x10);
      if (lVar7 == 0) {
        uVar5 = FUN_1458c8590();
        lVar7 = FUN_14477b664(uVar5);
        *(longlong *)(param_1 + 0x10) = lVar7;
      }
      lVar8 = *(longlong *)(param_1 + 0x18);
      if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar7 + 0xb8);
        if (plVar2 == (longlong *)0x0) {
LAB_148995a8c:
          lVar8 = 0;
        }
        else {
          cVar4 = (**(code **)(*plVar2 + 0x108))();
          if (cVar4 == '\0') goto LAB_148995a8c;
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar8 = FUN_144aff482(uVar5,plVar1);
        }
        *(longlong *)(param_1 + 0x18) = lVar8;
      }
      FUN_1448729ea(lVar8 + 0x18,local_58,param_3);
      uVar10 = FUN_144a7b41a(local_58,0x3f800000);
      *(undefined4 *)(lVar6 + 8) = uVar10;
      FUN_14020a6cc(lVar6,1);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppuVar9 = local_58;
        if (0x18 < local_40) {
          ppppuVar9 = (undefined8 ****)local_58[0];
        }
        (*pcVar3)(ppppuVar9);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(local_58[0]);
      }
      uVar5 = 1;
      goto LAB_148995951;
    }
  }
LAB_14899594f:
  uVar5 = 0;
LAB_148995951:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148995a90 FUN_148995a90 body=75 status=ok
// SIG undefined FUN_148995a90(void)

undefined8
FUN_148995a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  
  lVar1 = FUN_14899578a(param_1,param_4,1);
  if (lVar1 == 0) {
    FUN_1414ff806(param_2);
  }
  else {
    FUN_1402a4426(lVar1,param_2,param_5,param_6,param_7);
  }
  return param_2;
}



// FUNCTION 148995adc FUN_148995adc body=86 status=ok
// SIG undefined FUN_148995adc(void)

undefined8
FUN_148995adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong lVar1;
  
  lVar1 = FUN_14899578a(param_1,param_4,1);
  if (lVar1 == 0) {
    FUN_1414ff806(param_2);
  }
  else {
    FUN_140cda184(lVar1,param_2,param_5,param_6,param_7,param_8);
  }
  return param_2;
}



// FUNCTION 148995b32 FUN_148995b32 body=58 status=ok
// SIG undefined FUN_148995b32(void)

ulonglong FUN_148995b32(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_14899578a(param_1,param_3,0);
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = thunk_FUN_1409d14a4(lVar2,param_4);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 148995bcc FUN_148995bcc body=117 status=ok
// SIG undefined FUN_148995bcc(void)

undefined8 * FUN_148995bcc(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_14115959a();
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *param_1 = &PTR_FUN_14b42d3e0;
  param_1[1] = &PTR_FUN_14b42d4a0;
  param_1[6] = &PTR_FUN_14b42d4c0;
  param_1[0x2f] = 0;
  param_1[0x30] = *param_2;
  lVar1 = param_2[1];
  param_1[0x31] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 148995c42 FUN_148995c42 body=89 status=ok
// SIG undefined FUN_148995c42(void)

ulonglong FUN_148995c42(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  longlong lVar5;
  longlong lVar6;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if ((longlong)*(int *)(param_1 + 0x170) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    lVar5 = *(longlong *)(param_1 + 0x168);
    lVar6 = (longlong)*(int *)(param_1 + 0x170) << 4;
    do {
      cVar2 = FUN_1409d2f40(lVar5,uVar1);
      if (cVar2 != '\0') {
        if (lVar5 != 0) {
          uVar3 = CONCAT71(uVar4,*(int *)(lVar5 + 0xc) == 0);
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 148995c9c FUN_148995c9c body=75 status=ok
// SIG undefined FUN_148995c9c(void)

void FUN_148995c9c(longlong param_1)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(byte *)(*(longlong *)(param_1 + 0x180) + 0x28) & 2) == 0) {
    local_c = 1;
    FUN_140ea9968();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148995ce8 FUN_148995ce8 body=408 status=ok
// SIG undefined FUN_148995ce8(void)

longlong * FUN_148995ce8(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined4 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(undefined8 *)(param_1 + 8);
  local_58 = (longlong *)*param_3;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  local_50 = (longlong *)uVar3;
  local_48 = plVar4;
  FUN_14899dad6(uVar3,&local_40,&local_58);
  plVar4 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar5 = (longlong *)FUN_14001cc68(0x1a0,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b42efd0;
  plVar4 = plVar5 + 2;
  FUN_148995bcc(plVar4,&local_40);
  local_58 = plVar4;
  local_50 = plVar5;
  FUN_14899c3b4(&local_58,plVar4);
  local_68 = FUN_148995c9c;
  local_60 = 0;
  FUN_148995e82(local_40 + 0x18,&local_58);
  plVar1 = local_50;
  *param_2 = (longlong)plVar4;
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_50)(local_50);
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148995e82 FUN_148995e82 body=302 status=ok
// SIG undefined FUN_148995e82(void)

void FUN_148995e82(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b42eff0;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b42eff0;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000148995f39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148995fc6 FUN_148995fc6 body=36 status=ok
// SIG undefined FUN_148995fc6(void)

void FUN_148995fc6(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  float fStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined2 uStack_48;
  undefined1 uStack_40;
  undefined2 uStack_38;
  ulonglong uStack_30;
  uint uStack_28;
  ulonglong uStack_20;
  
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == *(char *)(param_2 + 0x30)) {
    if (cVar1 == '\x03') {
      uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
      fVar3 = (float)FUN_144a7ecd0(param_1 + 0x10);
      fStack_60 = (float)FUN_144a7ecd0(param_2 + 0x10);
      fStack_60 = fStack_60 + fVar3;
      uStack_68 = 0;
      uStack_48 = 4;
      uStack_40 = 3;
      uStack_38 = CONCAT11(uStack_38._1_1_,((DAT_14c9a8874 & 0x20) == 0) * '\x03');
      FUN_1403719a4(param_1 + 8,&uStack_68);
      FUN_144a2da94(&uStack_68);
      if ((uStack_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (cVar1 == '\x02') {
      uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
      puStack_80 = (undefined *)0x14899600f;
      iVar2 = FUN_1405d5f74(param_1 + 0x10);
      puStack_80 = (undefined *)0x14899601d;
      iStack_50 = FUN_1405d5f74(param_2 + 0x10);
      iStack_50 = iStack_50 + iVar2;
      uStack_58 = 0;
      uStack_38 = 4;
      uStack_30 = CONCAT71(uStack_30._1_7_,2);
      uStack_28 = CONCAT31(uStack_28._1_3_,(byte)~DAT_14c9a8754 >> 4) & 0xffffff02;
      puStack_80 = (undefined *)0x148996053;
      FUN_1403719a4(param_1 + 8,&uStack_58);
      puStack_80 = (undefined *)0x14899605b;
      FUN_144a2da94(&uStack_58);
      if ((uStack_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      puStack_80 = &UNK_148996079;
      FUN_144d8e3a0();
    }
  }
  return;
}



// FUNCTION 148995fea FUN_148995fea body=143 status=ok
// SIG undefined FUN_148995fea(void)

void FUN_148995fea(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined2 local_38;
  undefined1 local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = FUN_1405d5f74(param_1 + 8);
  local_50 = FUN_1405d5f74(param_2 + 8);
  local_50 = local_50 + iVar1;
  local_58 = 0;
  local_38 = 4;
  local_30 = 2;
  local_28 = (byte)~DAT_14c9a8754 >> 4 & 2;
  FUN_1403719a4(param_1,&local_58);
  FUN_144a2da94(&local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899607a FUN_14899607a body=158 status=ok
// SIG undefined FUN_14899607a(void)

void FUN_14899607a(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  float local_60;
  undefined2 local_48;
  undefined1 local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  fVar1 = (float)FUN_144a7ecd0(param_1 + 8);
  local_60 = (float)FUN_144a7ecd0(param_2 + 8);
  local_60 = local_60 + fVar1;
  local_68 = 0;
  local_48 = 4;
  local_40 = 3;
  local_38 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  FUN_1403719a4(param_1,&local_68);
  FUN_144a2da94(&local_68);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148996120 FUN_148996120 body=52 status=ok
// SIG undefined FUN_148996120(void)

undefined8 FUN_148996120(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x60);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148996148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148996154 thunk_FUN_140ce80dc body=5 status=ok
// SIG undefined thunk_FUN_140ce80dc(void)

void thunk_FUN_140ce80dc(void)

{
  FUN_140ce80dc();
  return;
}



// FUNCTION 14899615a FUN_14899615a body=74 status=ok
// SIG undefined FUN_14899615a(void)

undefined8 FUN_14899615a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar4 = 0;
    do {
      uVar3 = (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x60))();
      if ((char)uVar3 != '\0') {
        return uVar3;
      }
      bVar5 = (longlong)iVar1 * 0x10 + -0x10 != lVar4;
      lVar4 = lVar4 + 0x10;
    } while (bVar5);
  }
  return uVar3;
}



// FUNCTION 1489961a4 FUN_1489961a4 body=122 status=ok
// SIG undefined FUN_1489961a4(void)

void FUN_1489961a4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_14899cc80(param_1 + 0x138,iVar1);
  }
  FUN_1401f3da4((longlong)iVar1 * 0x18 + *(longlong *)(param_1 + 0x138),param_2);
  if ((*(byte *)(param_1 + 0x150) & 8) == 0) {
    *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) | 8;
    FUN_144958d50(param_1 + 0x30);
    return;
  }
  return;
}



// FUNCTION 14899621e FUN_14899621e body=38 status=ok
// SIG undefined FUN_14899621e(void)

undefined8 FUN_14899621e(undefined8 param_1,int param_2)

{
  FUN_140e3909c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148996244 FUN_148996244 body=38 status=ok
// SIG undefined FUN_148996244(void)

undefined8 FUN_148996244(undefined8 param_1,int param_2)

{
  FUN_14582736c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899626a FUN_14899626a body=38 status=ok
// SIG undefined FUN_14899626a(void)

undefined8 FUN_14899626a(undefined8 param_1,int param_2)

{
  FUN_140d2194c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148996296 FUN_148996296 body=38 status=ok
// SIG undefined FUN_148996296(void)

undefined8 FUN_148996296(undefined8 param_1,int param_2)

{
  FUN_14899c2fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489962c4 FUN_1489962c4 body=143 status=ok
// SIG undefined FUN_1489962c4(void)

int FUN_1489962c4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x170) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x168);
    lVar4 = (longlong)*(int *)(param_1 + 0x170) << 4;
    do {
      cVar1 = FUN_1409d2f40(lVar2,param_2);
      if (cVar1 != '\0') {
        if (lVar2 == 0) {
          return 0;
        }
        if ((longlong)*(int *)(param_1 + 0x160) == 0) {
          return 0;
        }
        lVar4 = 0;
        iVar3 = 0;
        do {
          iVar3 = iVar3 + (uint)(*(int *)(*(longlong *)(param_1 + 0x158) + 4 + lVar4) ==
                                *(int *)(lVar2 + 8));
          lVar4 = lVar4 + 8;
        } while ((longlong)*(int *)(param_1 + 0x160) * 8 != lVar4);
        return iVar3;
      }
      lVar2 = lVar2 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 14899635e FUN_14899635e body=223 status=ok
// SIG undefined FUN_14899635e(void)

undefined4 FUN_14899635e(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  code *local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  local_68 = (code *)0x0;
  local_58 = (longlong *)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uVar2 = (**(code **)(*param_1 + 0xa8))();
  if ((char)uVar2 != '\0') {
    FUN_14899cd14(param_1,&local_b8);
    pcVar1 = local_68;
    *(undefined4 *)(param_2 + 100) = (undefined4)uStack_b0;
    if (local_68 == (code *)0x0) {
      uVar3 = (undefined4)param_1[0x2c];
    }
    else {
      plVar5 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar5 = local_48;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      uVar3 = (*pcVar1)(uVar4,param_2);
    }
    FUN_14899cde6(param_1,uVar3,&local_b8,param_2);
  }
  FUN_14899ceb4(&local_b8);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899643e FUN_14899643e body=231 status=ok
// SIG undefined FUN_14899643e(void)

int FUN_14899643e(longlong param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  
  iVar7 = DAT_14cb8c3a0;
  if (*param_2 == '\x01') {
    piVar9 = &DAT_14cb8c3a0;
    if ((longlong)*(int *)(param_1 + 0x170) != 0) {
      uVar2 = *(undefined8 *)(param_2 + 8);
      lVar6 = *(longlong *)(param_1 + 0x168);
      lVar8 = (longlong)*(int *)(param_1 + 0x170) << 4;
      do {
        cVar4 = FUN_1409d2f40(lVar6,uVar2);
        if (cVar4 != '\0') {
          piVar9 = &DAT_14cb8c3a0;
          if (lVar6 != 0) {
            piVar9 = (int *)(lVar6 + 8);
          }
          break;
        }
        lVar6 = lVar6 + 0x10;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
    }
    iVar7 = *piVar9;
    if (*piVar9 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x160);
  if ((longlong)iVar1 < 1) {
    return 0;
  }
  iVar5 = 0;
  uVar10 = (longlong)iVar1;
  do {
    if ((*param_2 != '\x01') ||
       (*(int *)(*(longlong *)(param_1 + 0x158) + -4 + uVar10 * 8) == iVar7)) {
      FUN_14899d5fe(param_1,(int)uVar10 + -1);
      iVar5 = iVar5 + 1;
    }
    bVar3 = 1 < uVar10;
    uVar10 = uVar10 - 1;
  } while (bVar3);
  if (*(int *)(param_1 + 0x160) != iVar1) {
    FUN_140c5ef80(param_1,*(int *)(param_1 + 0x160),iVar1);
    return iVar5;
  }
  return iVar5;
}



// FUNCTION 148996526 FUN_148996526 body=93 status=ok
// SIG undefined FUN_148996526(void)

undefined8 FUN_148996526(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x160);
  FUN_143e45ac8();
  *(undefined4 *)(param_1 + 0x160) = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0x164) != 0) {
    FUN_14899d754(param_1 + 0x158);
    iVar2 = *(int *)(param_1 + 0x160);
  }
  if (iVar2 != iVar1) {
    FUN_140c5ef80(param_1,iVar2,iVar1);
  }
  return 0;
}



// FUNCTION 148996584 FUN_148996584 body=85 status=ok
// SIG undefined FUN_148996584(void)

bool FUN_148996584(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar4 = 0;
    do {
      cVar3 = (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x60))();
      if (cVar3 != '\0') {
        return true;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return 0 < *(int *)(param_1 + 0x160);
}



// FUNCTION 1489965e6 FUN_1489965e6 body=45 status=ok
// SIG undefined FUN_1489965e6(void)

longlong FUN_1489965e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14899c2fc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148996618 FUN_148996618 body=45 status=ok
// SIG undefined FUN_148996618(void)

longlong FUN_148996618(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14899c2fc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899664c FUN_14899664c body=52 status=ok
// SIG undefined FUN_14899664c(void)

void FUN_14899664c(longlong *param_1)

{
  FUN_148996680();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148996680 FUN_148996680 body=310 status=ok
// SIG undefined FUN_148996680(void)

void FUN_148996680(longlong *param_1)

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
      FUN_140820a64(*local_68 + (longlong)iStack_4c * 0x38 + 8);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489967b8 FUN_1489967b8 body=29 status=ok
// SIG undefined FUN_1489967b8(void)

undefined8 FUN_1489967b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489967d6 FUN_1489967d6 body=29 status=ok
// SIG undefined FUN_1489967d6(void)

undefined8 FUN_1489967d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489967f4 FUN_1489967f4 body=29 status=ok
// SIG undefined FUN_1489967f4(void)

undefined8 FUN_1489967f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148996812 FUN_148996812 body=29 status=ok
// SIG undefined FUN_148996812(void)

undefined8 FUN_148996812(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148996830 FUN_148996830 body=136 status=ok
// SIG undefined FUN_148996830(void)

longlong * FUN_148996830(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b42d870;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b262a80;
  plVar3[7] = 0;
  plVar3[8] = 0;
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



// FUNCTION 1489968b8 FUN_1489968b8 body=9 status=ok
// SIG undefined FUN_1489968b8(void)

void FUN_1489968b8(longlong param_1)

{
  FUN_14871e246(param_1 + 0x10);
  return;
}



// FUNCTION 1489968c2 FUN_1489968c2 body=29 status=ok
// SIG undefined FUN_1489968c2(void)

undefined8 FUN_1489968c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489968e0 FUN_1489968e0 body=67 status=ok
// SIG undefined FUN_1489968e0(void)

void FUN_1489968e0(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  undefined2 *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined2 auStack_a0 [2];
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  byte bStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  ulonglong uStack_40;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    lVar8 = *(longlong *)(param_1 + 0x68);
    if (lVar8 == 0) {
      uVar7 = DAT_14c707940 ^ (ulonglong)auStack_48;
      bVar3 = *(byte *)(param_1 + 0x38);
      if (((bVar3 & 2) == 0) && (*(byte *)(param_1 + 0x38) = bVar3 | 2, (bVar3 & 1) != 0)) {
        plVar10 = *(longlong **)(param_1 + 0x10);
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          iVar6 = (int)plVar10[1];
          do {
            if (iVar6 == 0) {
              plVar10 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar5 = (int)plVar10[1];
            bVar12 = iVar6 == iVar5;
            if (bVar12) {
              *(int *)(plVar10 + 1) = iVar6 + 1;
              iVar5 = iVar6;
            }
            iVar6 = iVar5;
            UNLOCK();
          } while (!bVar12);
        }
        if ((*(int *)(param_1 + 0x48) != 0) &&
           (plVar4 = *(longlong **)(param_1 + 0x40), plVar4 != (longlong *)0x0)) {
          puStack_50 = (undefined *)0x14899301f;
          (**(code **)(*plVar4 + 0x60))(plVar4,&stack0xffffffffffffffe0);
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar10 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            puStack_50 = (undefined *)0x148993036;
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              puStack_50 = (undefined *)0x148993049;
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
      }
      if ((uVar7 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        puStack_50 = &UNK_148992fcf;
        FUN_144d8e3a0();
      }
      return;
    }
    if (*(char *)(param_1 + 0x61) == '\0') {
      if ((*(byte *)(lVar8 + 0x28) & 2) != 0) goto LAB_14899691e;
    }
    else {
      if (*(char *)(param_1 + 0x61) != '\x01') {
        uStack_40 = 0x148996a30;
        lVar8 = FUN_148996a66();
        if (lVar8 != 0) {
          puVar11 = (undefined8 *)(param_1 + 0x58);
          uStack_40 = 0x148996a47;
          lVar9 = FUN_144a61814(lVar8,puVar11);
          if (lVar9 != 0) {
            uStack_40 = 0x148996a57;
            FUN_1405a424c(lVar8,*puVar11);
          }
          *puVar11 = 0;
        }
        return;
      }
      if ((*(byte *)(lVar8 + 0x28) & 2) == 0) {
LAB_14899691e:
        FUN_148996a22();
        return;
      }
    }
  }
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar8 = FUN_148996a66();
  if (lVar8 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x78);
    puStack_98 = &LAB_148996c44;
    uStack_90 = 0;
    FUN_148996ac2(auStack_b0,param_1,&puStack_98);
    puStack_98 = (undefined1 *)0x0;
    uStack_90 = 0;
    FUN_14487d8d8(&puStack_98,auStack_b0);
    bStack_58 = 1;
    puStack_b8 = auStack_a0;
    auStack_a0[0] = 0;
    uStack_9c = 0xbf800000;
    FUN_1406f4044(lVar8,param_1 + 0x58,&puStack_98,uVar2);
    (*(code *)(&PTR_LAB_14a1c87a0)[bStack_58])(&puStack_98);
    FUN_1449db362(auStack_b0);
  }
  if ((uStack_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148996924 FUN_148996924 body=253 status=ok
// SIG undefined FUN_148996924(void)

void FUN_148996924(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined1 local_b0 [16];
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_148996a66();
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x78);
    local_98 = &LAB_148996c44;
    local_90 = 0;
    FUN_148996ac2(local_b0,param_1,&local_98);
    local_98 = (undefined1 *)0x0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 0;
    local_9c = 0xbf800000;
    FUN_1406f4044(lVar2,param_1 + 0x58,&local_98,uVar1);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(local_b0);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148996a22 FUN_148996a22 body=67 status=ok
// SIG undefined FUN_148996a22(void)

void FUN_148996a22(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_148996a66();
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x58);
    lVar2 = FUN_144a61814(lVar1,puVar3);
    if (lVar2 != 0) {
      FUN_1405a424c(lVar1,*puVar3);
    }
    *puVar3 = 0;
  }
  return;
}



// FUNCTION 148996a66 FUN_148996a66 body=92 status=ok
// SIG undefined FUN_148996a66(void)

undefined8 FUN_148996a66(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  cVar1 = FUN_144729dda(param_1 + 0x50);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x50);
    lVar3 = (**(code **)(*plVar2 + 0x180))(plVar2);
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      return *puVar4;
    }
  }
  return 0;
}



// FUNCTION 148996ac2 FUN_148996ac2 body=386 status=ok
// SIG undefined FUN_148996ac2(void)

longlong * FUN_148996ac2(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148996bd3:
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b42d890;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148996bd3;
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
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b42d890;
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



// FUNCTION 148996c4a FUN_148996c4a body=64 status=ok
// SIG undefined FUN_148996c4a(void)

undefined8 * FUN_148996c4a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42d890;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148996c8e FUN_148996c8e body=81 status=ok
// SIG undefined FUN_148996c8e(void)

undefined8 FUN_148996c8e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148996ce6 FUN_148996ce6 body=89 status=ok
// SIG undefined FUN_148996ce6(void)

bool FUN_148996ce6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148996d31;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148996d31:
  return lVar6 == param_2;
}



// FUNCTION 148996d5c FUN_148996d5c body=118 status=ok
// SIG undefined FUN_148996d5c(void)

void FUN_148996d5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42d890;
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



// FUNCTION 148996dd2 FUN_148996dd2 body=118 status=ok
// SIG undefined FUN_148996dd2(void)

void FUN_148996dd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42d890;
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



// FUNCTION 148996e48 FUN_148996e48 body=156 status=ok
// SIG undefined FUN_148996e48(void)

void FUN_148996e48(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42d890;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148996ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148996ee4 FUN_148996ee4 body=100 status=ok
// SIG undefined FUN_148996ee4(void)

void FUN_148996ee4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148996f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148996f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148996f48 FUN_148996f48 body=100 status=ok
// SIG undefined FUN_148996f48(void)

ulonglong FUN_148996f48(longlong param_1)

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
LAB_148996fa1:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148996fa1;
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



// FUNCTION 148996fb6 FUN_148996fb6 body=114 status=ok
// SIG undefined FUN_148996fb6(void)

void FUN_148996fb6(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 148997028 FUN_148997028 body=306 status=ok
// SIG undefined FUN_148997028(void)

undefined4 * FUN_148997028(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14899715c(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_14040c290(local_40 + 1,0,uVar1);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)*local_40 >> 0x20) ^ (uint)*local_40;
  cVar3 = FUN_14899723e(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x34) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
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
      FUN_14899744e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899715c FUN_14899715c body=226 status=ok
// SIG undefined FUN_14899715c(void)

int * FUN_14899715c(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 14899723e FUN_14899723e body=174 status=ok
// SIG undefined FUN_14899723e(void)

undefined8 FUN_14899723e(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar13 = FUN_1489972ee();
    if (iVar13 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x38);
      FUN_140820a64(puVar1 + 2);
      uVar2 = *(undefined4 *)param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 1);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar6 = *(undefined4 *)(param_3 + 2);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar8 = *(undefined4 *)(param_3 + 3);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x1c);
      uVar10 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar11 = *(undefined4 *)(param_3 + 5);
      uVar12 = *(undefined4 *)((longlong)param_3 + 0x2c);
      puVar1[8] = *(undefined4 *)(param_3 + 4);
      puVar1[9] = uVar10;
      puVar1[10] = uVar11;
      puVar1[0xb] = uVar12;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_1489973a4(param_1,*param_4);
      *param_4 = iVar13;
      uVar14 = 1;
      goto LAB_148997264;
    }
  }
  uVar14 = 0;
LAB_148997264:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489972ee FUN_1489972ee body=180 status=ok
// SIG undefined FUN_1489972ee(void)

int FUN_1489972ee(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x38);
        cVar1 = FUN_148997418(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14899737c;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x30 + (longlong)iVar4 * 0x38);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14899737c:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489973a4 FUN_1489973a4 body=116 status=ok
// SIG undefined FUN_1489973a4(void)

void FUN_1489973a4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 148997418 FUN_148997418 body=53 status=ok
// SIG undefined FUN_148997418(void)

ulonglong FUN_148997418(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14899744e FUN_14899744e body=436 status=ok
// SIG undefined FUN_14899744e(void)

void FUN_14899744e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 148997604 FUN_148997604 body=63 status=ok
// SIG undefined FUN_148997604(void)

void FUN_148997604(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145798042(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_145ec0b9e(param_1);
    return;
  }
  FUN_148997644(param_1);
  FUN_145798042(param_1);
  return;
}



// FUNCTION 148997644 FUN_148997644 body=322 status=ok
// SIG undefined FUN_148997644(void)

void FUN_148997644(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x44 + (longlong)iVar4 * 0x48) * 4) =
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



// FUNCTION 148997788 FUN_148997788 body=114 status=ok
// SIG undefined FUN_148997788(void)

void FUN_148997788(longlong *param_1,int param_2)

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



// FUNCTION 1489977fa FUN_1489977fa body=68 status=ok
// SIG undefined FUN_1489977fa(void)

undefined8 * FUN_1489977fa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42db70;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148997842 FUN_148997842 body=81 status=ok
// SIG undefined FUN_148997842(void)

undefined8 FUN_148997842(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 14899789a FUN_14899789a body=89 status=ok
// SIG undefined FUN_14899789a(void)

bool FUN_14899789a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1489978e5;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1489978e5:
  return lVar6 == param_2;
}



// FUNCTION 148997910 FUN_148997910 body=118 status=ok
// SIG undefined FUN_148997910(void)

void FUN_148997910(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42db70;
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



// FUNCTION 148997986 FUN_148997986 body=156 status=ok
// SIG undefined FUN_148997986(void)

void FUN_148997986(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42db70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148997a12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148997a22 FUN_148997a22 body=100 status=ok
// SIG undefined FUN_148997a22(void)

void FUN_148997a22(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148997a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148997a7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148997a86 FUN_148997a86 body=162 status=ok
// SIG undefined FUN_148997a86(void)

void FUN_148997a86(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148997ac5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148997ac5;
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
LAB_148997ac5:
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
                    /* WARNING: Could not recover jumptable at 0x000148997b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148997b28 FUN_148997b28 body=68 status=ok
// SIG undefined FUN_148997b28(void)

undefined8 * FUN_148997b28(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42dc00;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148997b70 FUN_148997b70 body=81 status=ok
// SIG undefined FUN_148997b70(void)

undefined8 FUN_148997b70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148997bc8 FUN_148997bc8 body=89 status=ok
// SIG undefined FUN_148997bc8(void)

bool FUN_148997bc8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148997c13;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148997c13:
  return lVar6 == param_2;
}



// FUNCTION 148997c3e FUN_148997c3e body=118 status=ok
// SIG undefined FUN_148997c3e(void)

void FUN_148997c3e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a950;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42dc00;
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



// FUNCTION 148997cb4 FUN_148997cb4 body=156 status=ok
// SIG undefined FUN_148997cb4(void)

void FUN_148997cb4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42a950;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42dc00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148997d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148997d50 FUN_148997d50 body=104 status=ok
// SIG undefined FUN_148997d50(void)

void FUN_148997d50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148997d9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148997dae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148997db8 FUN_148997db8 body=68 status=ok
// SIG undefined FUN_148997db8(void)

undefined8 * FUN_148997db8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42dc70;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148997e00 FUN_148997e00 body=81 status=ok
// SIG undefined FUN_148997e00(void)

undefined8 FUN_148997e00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148997e58 FUN_148997e58 body=91 status=ok
// SIG undefined FUN_148997e58(void)

bool FUN_148997e58(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148997e88;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148997e88:
  return lVar6 == param_2;
}



// FUNCTION 148997edc FUN_148997edc body=118 status=ok
// SIG undefined FUN_148997edc(void)

void FUN_148997edc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42dce0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b42dc70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148997f52 FUN_148997f52 body=118 status=ok
// SIG undefined FUN_148997f52(void)

void FUN_148997f52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42dce0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b42dc70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148997fc8 FUN_148997fc8 body=156 status=ok
// SIG undefined FUN_148997fc8(void)

void FUN_148997fc8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42dce0;
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar4;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar5;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b42dc70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148998054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148998064 FUN_148998064 body=106 status=ok
// SIG undefined FUN_148998064(void)

void FUN_148998064(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  (*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x0001489980b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489980c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0,param_2,*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1489980ce FUN_1489980ce body=98 status=ok
// SIG undefined FUN_1489980ce(void)

ulonglong FUN_1489980ce(longlong param_1,undefined8 param_2)

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
LAB_148998125:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148998125;
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
      (**(code **)(param_1 + 0x28))(lVar4,param_2,*(undefined8 *)(param_1 + 8));
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



// FUNCTION 148998132 FUN_148998132 body=48 status=ok
// SIG undefined FUN_148998132(void)

void FUN_148998132(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148998166 FUN_148998166 body=81 status=ok
// SIG undefined FUN_148998166(void)

undefined8 FUN_148998166(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1489981be FUN_1489981be body=89 status=ok
// SIG undefined FUN_1489981be(void)

bool FUN_1489981be(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148998209;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148998209:
  return lVar6 == param_2;
}



// FUNCTION 148998218 FUN_148998218 body=118 status=ok
// SIG undefined FUN_148998218(void)

void FUN_148998218(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42dd50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14899828e FUN_14899828e body=156 status=ok
// SIG undefined FUN_14899828e(void)

void FUN_14899828e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42dd50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014899831a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14899832a FUN_14899832a body=97 status=ok
// SIG undefined FUN_14899832a(void)

void FUN_14899832a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148998372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148998381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14899838c FUN_14899838c body=185 status=ok
// SIG undefined FUN_14899838c(void)

longlong * FUN_14899838c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406eeb88(param_1,&local_28,&DAT_14cb8baf0);
  if (local_28 != 0) {
    uVar4 = FUN_14650abee();
    cVar3 = FUN_1448093f4(local_28,uVar4);
    if (cVar3 != '\0') {
      *param_2 = local_28;
      param_2[1] = (longlong)local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      goto LAB_1489983f1;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1489983f1:
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148998448 FUN_148998448 body=118 status=ok
// SIG undefined FUN_148998448(void)

void FUN_148998448(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x18 + (ulonglong)param_2 * 0x20);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (ulonglong)param_2 * 0x20);
    memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)(int)(~param_2 + iVar5) << 5);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1489984be FUN_1489984be body=62 status=ok
// SIG undefined FUN_1489984be(void)

void FUN_1489984be(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1489984fc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 1489984fc FUN_1489984fc body=93 status=ok
// SIG undefined FUN_1489984fc(void)

ulonglong FUN_1489984fc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 14899855a FUN_14899855a body=132 status=ok
// SIG undefined FUN_14899855a(void)

void FUN_14899855a(longlong param_1,int param_2)

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



// FUNCTION 1489985e0 FUN_1489985e0 body=38 status=ok
// SIG undefined FUN_1489985e0(void)

undefined8 FUN_1489985e0(undefined8 param_1,int param_2)

{
  FUN_145af13c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148998614 FUN_148998614 body=162 status=ok
// SIG undefined FUN_148998614(void)

void FUN_148998614(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148998653;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148998653;
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
LAB_148998653:
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
                    /* WARNING: Could not recover jumptable at 0x0001489986b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489986b6 FUN_1489986b6 body=64 status=ok
// SIG undefined FUN_1489986b6(void)

undefined8 * FUN_1489986b6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42de20;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489986fa FUN_1489986fa body=81 status=ok
// SIG undefined FUN_1489986fa(void)

undefined8 FUN_1489986fa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148998752 FUN_148998752 body=89 status=ok
// SIG undefined FUN_148998752(void)

bool FUN_148998752(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14899879d;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14899879d:
  return lVar6 == param_2;
}



// FUNCTION 1489987c8 FUN_1489987c8 body=118 status=ok
// SIG undefined FUN_1489987c8(void)

void FUN_1489987c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42de20;
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



// FUNCTION 14899883e FUN_14899883e body=118 status=ok
// SIG undefined FUN_14899883e(void)

void FUN_14899883e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42de20;
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



// FUNCTION 1489988b4 FUN_1489988b4 body=156 status=ok
// SIG undefined FUN_1489988b4(void)

void FUN_1489988b4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42de20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148998940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148998950 FUN_148998950 body=100 status=ok
// SIG undefined FUN_148998950(void)

void FUN_148998950(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014899899c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489989a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489989b4 FUN_1489989b4 body=100 status=ok
// SIG undefined FUN_1489989b4(void)

ulonglong FUN_1489989b4(longlong param_1)

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
LAB_148998a0d:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148998a0d;
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



// FUNCTION 148998a1e FUN_148998a1e body=89 status=ok
// SIG undefined FUN_148998a1e(void)

bool FUN_148998a1e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148998a69;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148998a69:
  return lVar6 == param_2;
}



// FUNCTION 148998a78 FUN_148998a78 body=118 status=ok
// SIG undefined FUN_148998a78(void)

void FUN_148998a78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42de90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148998aee FUN_148998aee body=156 status=ok
// SIG undefined FUN_148998aee(void)

void FUN_148998aee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42de90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148998b7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148998b8a FUN_148998b8a body=93 status=ok
// SIG undefined FUN_148998b8a(void)

ulonglong FUN_148998b8a(longlong param_1)

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
LAB_148998bdc:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148998bdc;
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



// FUNCTION 148998be8 FUN_148998be8 body=114 status=ok
// SIG undefined FUN_148998be8(void)

void FUN_148998be8(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 148998c5a FUN_148998c5a body=104 status=ok
// SIG undefined FUN_148998c5a(void)

void FUN_148998c5a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b42df00;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 2;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = &PTR_FUN_14b42df20;
  return;
}



// FUNCTION 148998ccc FUN_148998ccc body=29 status=ok
// SIG undefined FUN_148998ccc(void)

undefined8 FUN_148998ccc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148998cea FUN_148998cea body=38 status=ok
// SIG undefined FUN_148998cea(void)

undefined8 FUN_148998cea(undefined8 param_1,int param_2)

{
  FUN_1459008ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148998d10 FUN_148998d10 body=174 status=ok
// SIG undefined FUN_148998d10(void)

void FUN_148998d10(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x58);
    if (cVar2 != '\0') {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
      if (lVar3 == 0) {
        local_28 = 0;
      }
      else {
        local_28 = *(undefined8 *)(lVar3 + 0x168);
      }
      pcVar1 = (code *)*param_2;
      plVar5 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar5 = (longlong *)param_2[2];
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar1)(uVar4,&local_28);
    }
  }
  if (*param_2 != 0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148998dc0 FUN_148998dc0 body=54 status=ok
// SIG undefined FUN_148998dc0(void)

undefined8 FUN_148998dc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x168);
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 == param_2 && lVar1 != 0);
}



// FUNCTION 148998df6 FUN_148998df6 body=167 status=ok
// SIG undefined FUN_148998df6(void)

void FUN_148998df6(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148998e71;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148998e71;
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
LAB_148998e71:
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
                    /* WARNING: Could not recover jumptable at 0x000148998e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148998e9d FUN_148998e9d body=104 status=ok
// SIG undefined FUN_148998e9d(void)

void FUN_148998e9d(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b42df50;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 2;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = &PTR_FUN_14b42df70;
  return;
}



// FUNCTION 148998f10 FUN_148998f10 body=29 status=ok
// SIG undefined FUN_148998f10(void)

undefined8 FUN_148998f10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148998f2e FUN_148998f2e body=38 status=ok
// SIG undefined FUN_148998f2e(void)

undefined8 FUN_148998f2e(undefined8 param_1,int param_2)

{
  FUN_1459008ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148998f54 FUN_148998f54 body=158 status=ok
// SIG undefined FUN_148998f54(void)

void FUN_148998f54(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x58);
    if (cVar2 != '\0') {
      local_28 = (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
      pcVar1 = (code *)*param_2;
      plVar4 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar4 = (longlong *)param_2[2];
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar3,&local_28);
    }
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148998ff4 FUN_148998ff4 body=29 status=ok
// SIG undefined FUN_148998ff4(void)

bool FUN_148998ff4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x58);
  return lVar1 == param_2;
}



// FUNCTION 148999012 FUN_148999012 body=167 status=ok
// SIG undefined FUN_148999012(void)

void FUN_148999012(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14899908d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14899908d;
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
LAB_14899908d:
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
                    /* WARNING: Could not recover jumptable at 0x0001489990ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489990ba FUN_1489990ba body=38 status=ok
// SIG undefined FUN_1489990ba(void)

undefined8 FUN_1489990ba(undefined8 param_1,int param_2)

{
  FUN_14590084e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489990e0 FUN_1489990e0 body=125 status=ok
// SIG undefined FUN_1489990e0(void)

ulonglong FUN_1489990e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (((*(longlong *)(param_1 + 0x68) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x70), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        uVar7 = FUN_140f722bc(0,*(undefined8 *)(param_1 + 0x78),param_2);
        return uVar7;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    uVar6 = FUN_140f722bc(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x78),param_2);
    uVar7 = (ulonglong)uVar6;
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
  return uVar7;
}



// FUNCTION 14899915e FUN_14899915e body=96 status=ok
// SIG undefined FUN_14899915e(void)

void FUN_14899915e(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  puVar1 = (undefined8 *)*param_1;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489991de FUN_1489991de body=68 status=ok
// SIG undefined FUN_1489991de(void)

undefined8 * FUN_1489991de(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42e010;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148999226 FUN_148999226 body=81 status=ok
// SIG undefined FUN_148999226(void)

undefined8 FUN_148999226(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 14899927e FUN_14899927e body=89 status=ok
// SIG undefined FUN_14899927e(void)

bool FUN_14899927e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1489992c9;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1489992c9:
  return lVar6 == param_2;
}



// FUNCTION 1489992f4 FUN_1489992f4 body=118 status=ok
// SIG undefined FUN_1489992f4(void)

void FUN_1489992f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a6d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e010;
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



// FUNCTION 14899936a FUN_14899936a body=156 status=ok
// SIG undefined FUN_14899936a(void)

void FUN_14899936a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42a6d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42e010;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489993f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148999406 FUN_148999406 body=104 status=ok
// SIG undefined FUN_148999406(void)

void FUN_148999406(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148999453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148999464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14899946e FUN_14899946e body=101 status=ok
// SIG undefined FUN_14899946e(void)

ulonglong FUN_14899946e(longlong param_1)

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
LAB_1489994c8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1489994c8;
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



// FUNCTION 1489994ee FUN_1489994ee body=29 status=ok
// SIG undefined FUN_1489994ee(void)

bool FUN_1489994ee(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14899950c FUN_14899950c body=101 status=ok
// SIG undefined FUN_14899950c(void)

void FUN_14899950c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e0f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148999572 FUN_148999572 body=101 status=ok
// SIG undefined FUN_148999572(void)

void FUN_148999572(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e0f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1489995d8 FUN_1489995d8 body=134 status=ok
// SIG undefined FUN_1489995d8(void)

void FUN_1489995d8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42e0f0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014899964f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14899965e FUN_14899965e body=52 status=ok
// SIG undefined FUN_14899965e(void)

void FUN_14899965e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014899968f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148999692 FUN_148999692 body=107 status=ok
// SIG undefined FUN_148999692(void)

void FUN_148999692(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = DAT_14cb8c160;
  if (param_1 <= (int)DAT_14cb8c160) {
    iVar2 = 4;
    if (4 < DAT_14cb8c160) {
      lVar5 = (longlong)(int)DAT_14cb8c160;
      if (4 < DAT_14cb8c164) {
        lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar2 = iVar3;
      }
    }
    DAT_14cb8c164 = iVar2;
    FUN_1489996fe(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14cb8c160);
}



// FUNCTION 1489996fe FUN_1489996fe body=142 status=ok
// SIG undefined FUN_1489996fe(void)

void FUN_1489996fe(int param_1,uint param_2)

{
  if (param_2 < 5) {
    if (DAT_14cb8c158 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14cb8c138,DAT_14cb8c158,(longlong)param_1 << 3);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14cb8c158 == (void *)0x0) {
    FUN_1446efa72(&DAT_14cb8c158,0,param_2,8);
    memmove(DAT_14cb8c158,&DAT_14cb8c138,(longlong)param_1 << 3);
    return;
  }
  FUN_1446efa72(&DAT_14cb8c158,param_1,param_2,8);
  return;
}



// FUNCTION 14899978c FUN_14899978c body=79 status=ok
// SIG undefined FUN_14899978c(void)

void FUN_14899978c(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    uVar1 = (uint)(uVar2 >> 3);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x14)) {
    return;
  }
  *(uint *)(param_1 + 0x14) = uVar3;
  FUN_1489997dc(param_1,*(undefined4 *)(param_1 + 0x10),uVar3);
  return;
}



// FUNCTION 1489997dc FUN_1489997dc body=132 status=ok
// SIG undefined FUN_1489997dc(void)

void FUN_1489997dc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,8);
  return;
}



// FUNCTION 148999860 FUN_148999860 body=631 status=ok
// SIG undefined FUN_148999860(void)

void FUN_148999860(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = *(int *)(param_3 + 0x10);
        *(uint *)(param_3 + 0x10) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
          FUN_148999f0c(param_3,iVar2);
        }
        lVar7 = *(longlong *)(param_3 + 8);
        if (*(longlong *)(param_3 + 8) == 0) {
          lVar7 = param_3;
        }
        *(longlong **)(lVar7 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_148999860(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148999c1a FUN_148999c1a body=752 status=ok
// SIG undefined FUN_148999c1a(void)

void FUN_148999c1a(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_148999d3e:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_148999d52;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_148999d3e;
LAB_148999d52:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = *(int *)(param_3 + 0x10);
          *(uint *)(param_3 + 0x10) = iVar2 + 1U;
          if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
            FUN_148999f0c(param_3,iVar2);
          }
          lVar8 = *(longlong *)(param_3 + 8);
          if (*(longlong *)(param_3 + 8) == 0) {
            lVar8 = param_3;
          }
          *(longlong **)(lVar8 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_148999c1a(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148999f0c FUN_148999f0c body=124 status=ok
// SIG undefined FUN_148999f0c(void)

void FUN_148999f0c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_1489997dc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148999f8c FUN_148999f8c body=132 status=ok
// SIG undefined FUN_148999f8c(void)

void FUN_148999f8c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 14899a010 FUN_14899a010 body=320 status=ok
// SIG undefined FUN_14899a010(void)

void FUN_14899a010(longlong param_1,longlong param_2)

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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x268);
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
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = *(int *)(param_2 + 0x28);
        *(uint *)(param_2 + 0x28) = iVar3 + 1U;
        if (*(uint *)(param_2 + 0x2c) < iVar3 + 1U) {
          FUN_14899a152(param_2,iVar3);
        }
        lVar5 = *(longlong *)(param_2 + 0x20);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar5 = param_2;
        }
        *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14899a152 FUN_14899a152 body=110 status=ok
// SIG undefined FUN_14899a152(void)

void FUN_14899a152(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_148999f8c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14899a1dc FUN_14899a1dc body=29 status=ok
// SIG undefined FUN_14899a1dc(void)

bool FUN_14899a1dc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14899a1fa FUN_14899a1fa body=26 status=ok
// SIG undefined FUN_14899a1fa(void)

bool FUN_14899a1fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14899a214 FUN_14899a214 body=101 status=ok
// SIG undefined FUN_14899a214(void)

void FUN_14899a214(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b42e340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14899a27a FUN_14899a27a body=101 status=ok
// SIG undefined FUN_14899a27a(void)

void FUN_14899a27a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b42e340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14899a2e0 FUN_14899a2e0 body=134 status=ok
// SIG undefined FUN_14899a2e0(void)

void FUN_14899a2e0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42e340;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014899a357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14899a366 FUN_14899a366 body=39 status=ok
// SIG undefined FUN_14899a366(void)

void FUN_14899a366(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014899a389. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14899a38e FUN_14899a38e body=38 status=ok
// SIG undefined FUN_14899a38e(void)

undefined8 FUN_14899a38e(undefined8 param_1,int param_2)

{
  FUN_145935d92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899a3ce FUN_14899a3ce body=29 status=ok
// SIG undefined FUN_14899a3ce(void)

bool FUN_14899a3ce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14899a3ec FUN_14899a3ec body=101 status=ok
// SIG undefined FUN_14899a3ec(void)

void FUN_14899a3ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42e440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e3d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14899a452 FUN_14899a452 body=101 status=ok
// SIG undefined FUN_14899a452(void)

void FUN_14899a452(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42e440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e3d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14899a4b8 FUN_14899a4b8 body=134 status=ok
// SIG undefined FUN_14899a4b8(void)

void FUN_14899a4b8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42e440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42e3d0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014899a52f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14899a53e FUN_14899a53e body=50 status=ok
// SIG undefined FUN_14899a53e(void)

void FUN_14899a53e(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014899a56d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14899a58c FUN_14899a58c body=29 status=ok
// SIG undefined FUN_14899a58c(void)

bool FUN_14899a58c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14899a5aa FUN_14899a5aa body=101 status=ok
// SIG undefined FUN_14899a5aa(void)

void FUN_14899a5aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8da20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e4b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14899a610 FUN_14899a610 body=101 status=ok
// SIG undefined FUN_14899a610(void)

void FUN_14899a610(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8da20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e4b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14899a676 FUN_14899a676 body=134 status=ok
// SIG undefined FUN_14899a676(void)

void FUN_14899a676(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8da20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42e4b0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014899a6ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14899a6fc FUN_14899a6fc body=44 status=ok
// SIG undefined FUN_14899a6fc(void)

void FUN_14899a6fc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014899a725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14899a728 FUN_14899a728 body=156 status=ok
// SIG undefined FUN_14899a728(void)

bool FUN_14899a728(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899a7e0 FUN_14899a7e0 body=29 status=ok
// SIG undefined FUN_14899a7e0(void)

bool FUN_14899a7e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14899a7fe FUN_14899a7fe body=101 status=ok
// SIG undefined FUN_14899a7fe(void)

void FUN_14899a7fe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b42e520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14899a864 FUN_14899a864 body=101 status=ok
// SIG undefined FUN_14899a864(void)

void FUN_14899a864(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b42e520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14899a8ca FUN_14899a8ca body=134 status=ok
// SIG undefined FUN_14899a8ca(void)

void FUN_14899a8ca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42e520;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014899a941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14899a950 FUN_14899a950 body=39 status=ok
// SIG undefined FUN_14899a950(void)

void FUN_14899a950(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014899a973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14899a978 FUN_14899a978 body=29 status=ok
// SIG undefined FUN_14899a978(void)

undefined8 FUN_14899a978(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899a9b0 FUN_14899a9b0 body=29 status=ok
// SIG undefined FUN_14899a9b0(void)

bool FUN_14899a9b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14899a9ce FUN_14899a9ce body=26 status=ok
// SIG undefined FUN_14899a9ce(void)

bool FUN_14899a9ce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14899a9e8 FUN_14899a9e8 body=24 status=ok
// SIG undefined FUN_14899a9e8(void)

bool FUN_14899a9e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14899aa00 FUN_14899aa00 body=101 status=ok
// SIG undefined FUN_14899aa00(void)

void FUN_14899aa00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14899aa66 FUN_14899aa66 body=101 status=ok
// SIG undefined FUN_14899aa66(void)

void FUN_14899aa66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42e590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14899aacc FUN_14899aacc body=134 status=ok
// SIG undefined FUN_14899aacc(void)

void FUN_14899aacc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b4c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b42e590;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014899ab43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14899ab52 FUN_14899ab52 body=44 status=ok
// SIG undefined FUN_14899ab52(void)

void FUN_14899ab52(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014899ab7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14899ab7e FUN_14899ab7e body=156 status=ok
// SIG undefined FUN_14899ab7e(void)

bool FUN_14899ab7e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899ac1b FUN_14899ac1b body=214 status=ok
// SIG undefined FUN_14899ac1b(void)

void FUN_14899ac1b(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = 0xffffffff;
  local_68 = 0x20;
  puVar7 = param_1 + 3;
  local_70 = param_3;
  if (puVar7 != param_2 && param_1 != param_2) {
    lVar6 = 1;
    do {
      lVar5 = FUN_14051345a(&local_70,lVar6 + 1);
      if (lVar6 != lVar5) {
        local_48 = puVar7[2];
        uVar2 = *puVar7;
        uVar3 = puVar7[1];
        puVar7[2] = param_1[lVar5 * 3 + 2];
        uVar4 = (param_1 + lVar5 * 3)[1];
        *puVar7 = param_1[lVar5 * 3];
        puVar7[1] = uVar4;
        param_1[lVar5 * 3 + 2] = local_48;
        local_58._0_4_ = (undefined4)uVar2;
        local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        uStack_50._0_4_ = (undefined4)uVar3;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        puVar1 = param_1 + lVar5 * 3;
        *(undefined4 *)puVar1 = (undefined4)local_58;
        *(undefined4 *)((longlong)puVar1 + 4) = local_58._4_4_;
        *(undefined4 *)(puVar1 + 1) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_50._4_4_;
        local_58 = uVar2;
        uStack_50 = uVar3;
      }
      puVar7 = puVar7 + 3;
      lVar6 = lVar6 + 1;
    } while (puVar7 != param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899acf2 FUN_14899acf2 body=132 status=ok
// SIG undefined FUN_14899acf2(void)

void FUN_14899acf2(longlong param_1,int param_2)

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



// FUNCTION 14899ad78 FUN_14899ad78 body=54 status=ok
// SIG undefined FUN_14899ad78(void)

longlong FUN_14899ad78(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899adae FUN_14899adae body=31 status=ok
// SIG undefined FUN_14899adae(void)

undefined8 FUN_14899adae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899ade8 FUN_14899ade8 body=93 status=ok
// SIG undefined FUN_14899ade8(void)

void FUN_14899ade8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b42e6c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14899ae46 FUN_14899ae46 body=93 status=ok
// SIG undefined FUN_14899ae46(void)

void FUN_14899ae46(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b42e6c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14899aea4 FUN_14899aea4 body=126 status=ok
// SIG undefined FUN_14899aea4(void)

void FUN_14899aea4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b42e6c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014899af13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14899af22 FUN_14899af22 body=35 status=ok
// SIG undefined FUN_14899af22(void)

void FUN_14899af22(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014899af41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14899af46 FUN_14899af46 body=109 status=ok
// SIG undefined FUN_14899af46(void)

void FUN_14899af46(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x70,8);
  }
  return;
}



// FUNCTION 14899afb4 FUN_14899afb4 body=71 status=ok
// SIG undefined FUN_14899afb4(void)

longlong FUN_14899afb4(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0xa0) = &PTR_LAB_14b42e910;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  FUN_14024cec2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899affc FUN_14899affc body=158 status=ok
// SIG undefined FUN_14899affc(void)

void FUN_14899affc(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(int *)(param_1 + 0x98);
  uVar2 = (ulonglong)local_30;
  local_38 = param_1;
  if (0 < (longlong)uVar2) {
    lVar3 = uVar2 * 0x28 + -0x24;
    do {
      if (*(int *)(param_1 + 0x84) < 1) break;
      if (*(longlong *)(*(longlong *)(param_1 + 0x90) + lVar3) == *param_2) {
        FUN_140dbdd56(param_1,(int)uVar2 + -1);
      }
      lVar3 = lVar3 + -0x28;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  FUN_140ce8090(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899b0c2 FUN_14899b0c2 body=65 status=ok
// SIG undefined FUN_14899b0c2(void)

undefined8 * FUN_14899b0c2(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x14;
  *param_1 = &PTR_LAB_14b42e910;
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  FUN_14024cec2(puVar1);
  if (param_2 != 0) {
    FUN_1400020a8(puVar1);
  }
  return puVar1;
}



// FUNCTION 14899b104 FUN_14899b104 body=38 status=ok
// SIG undefined FUN_14899b104(void)

undefined8 FUN_14899b104(undefined8 param_1,int param_2)

{
  FUN_14024cec2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899b146 FUN_14899b146 body=38 status=ok
// SIG undefined FUN_14899b146(void)

undefined8 FUN_14899b146(undefined8 param_1,int param_2)

{
  FUN_140ee7c2e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14899b16c FUN_14899b16c body=158 status=ok
// SIG undefined FUN_14899b16c(void)

void FUN_14899b16c(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(int *)(param_1 + 0x98);
  uVar2 = (ulonglong)local_30;
  local_38 = param_1;
  if (0 < (longlong)uVar2) {
    lVar3 = uVar2 * 0x48 + -0x44;
    do {
      if (*(int *)(param_1 + 0x84) < 1) break;
      if (*(longlong *)(*(longlong *)(param_1 + 0x90) + lVar3) == *param_2) {
        FUN_140924eba(param_1,(int)uVar2 + -1);
      }
      lVar3 = lVar3 + -0x48;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  FUN_140ea9bb6(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899b212 FUN_14899b212 body=171 status=ok
// SIG undefined FUN_14899b212(void)

void FUN_14899b212(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48 [2];
  longlong *local_38;
  undefined4 local_30;
  undefined1 local_24 [4];
  undefined8 local_20;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[0xe] + 0x38 != 0) {
    local_30 = (undefined4)param_1[0x13];
    local_58 = local_48;
    local_48[0] = 0;
    local_48[1] = 0;
    local_24[0] = 1;
    local_20 = 0xffffffff;
    local_14 = 0;
    local_38 = param_1;
    cVar1 = (**(code **)(*param_1 + 0xb8))(param_1,local_24,param_1[0xe] + 0x38,param_2);
    if (cVar1 != '\0') {
      FUN_143e44fcc(param_1,local_48);
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140ea9bb6(&local_38);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14899b2ce FUN_14899b2ce body=38 status=ok
// SIG undefined FUN_14899b2ce(void)

undefined8 FUN_14899b2ce(undefined8 param_1,int param_2)

{
  FUN_14899b2fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


