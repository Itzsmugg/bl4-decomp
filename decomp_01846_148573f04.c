// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148573f04 FUN_148573f04 body=128 status=ok
// SIG undefined FUN_148573f04(void)

void FUN_148573f04(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  local_28[0] = 0xb;
  FUN_1485735e2(param_3,local_28);
  plVar3 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 148573f86 FUN_148573f86 body=314 status=ok
// SIG undefined FUN_148573f86(void)

void FUN_148573f86(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong *local_48;
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485740c2(local_58,plVar2,local_3c);
  FUN_1485735e2(param_3,local_58);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485740c2 FUN_1485740c2 body=316 status=ok
// SIG undefined FUN_1485740c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1485740c2(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 9;
  plVar5 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af3e370;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  if (plVar5 == (longlong *)0x0) {
    FUN_1474537fe(0x10,param_2);
    _DAT_00000020 = param_3;
    *(undefined8 *)(param_1 + 8) = 0x10;
    return param_1;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  FUN_1474537fe(plVar5 + 2,param_2);
  *(undefined4 *)(plVar5 + 4) = param_3;
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(longlong **)(param_1 + 8) = plVar5 + 2;
  if (plVar5 == plVar4) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1485741d4;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    *(longlong **)(param_1 + 0x10) = plVar5;
    if (plVar4 == (longlong *)0x0) goto LAB_1485741d4;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_1485741d4;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1485741d4:
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



// FUNCTION 1485741fe FUN_1485741fe body=128 status=ok
// SIG undefined FUN_1485741fe(void)

void FUN_1485741fe(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  local_28[0] = 2;
  FUN_1485735e2(param_3,local_28);
  plVar3 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 148574280 FUN_148574280 body=128 status=ok
// SIG undefined FUN_148574280(void)

void FUN_148574280(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  local_28[0] = 5;
  FUN_1485735e2(param_3,local_28);
  plVar3 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 148574302 FUN_148574302 body=128 status=ok
// SIG undefined FUN_148574302(void)

void FUN_148574302(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  local_28[0] = 1;
  FUN_1485735e2(param_3,local_28);
  plVar3 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 148574384 FUN_148574384 body=285 status=ok
// SIG undefined FUN_148574384(void)

void FUN_148574384(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  longlong *local_30;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485744a2(local_40,local_20,local_24);
  FUN_1485735e2(param_3,local_40);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485744a2 FUN_1485744a2 body=325 status=ok
// SIG undefined FUN_1485744a2(void)

undefined1 * FUN_1485744a2(undefined1 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 8;
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14af3e350;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  plVar3[2] = param_2;
  *(undefined4 *)(plVar3 + 3) = param_3;
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 8) = plVar3 + 2;
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == plVar4) {
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
      goto LAB_148574575;
    }
    *(longlong **)(param_1 + 0x10) = plVar3;
    if (plVar4 == (longlong *)0x0) goto LAB_148574575;
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
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_148574575:
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



// FUNCTION 1485745e8 FUN_1485745e8 body=574 status=ok
// SIG undefined FUN_1485745e8(void)

void FUN_1485745e8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a0 = &local_78;
  local_78 = local_50;
  uStack_70 = uStack_48;
  local_a8 = &local_88;
  local_88 = local_40;
  uStack_80 = uStack_38;
  local_98 = local_30;
  uStack_94 = uStack_2c;
  uStack_90 = uStack_28;
  uStack_8c = uStack_24;
  FUN_148574828(local_68,local_1c,local_20);
  FUN_1485735e2(param_3,local_68);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148574828 FUN_148574828 body=438 status=ok
// SIG undefined FUN_148574828(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_148574828(undefined1 *param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
             longlong *param_5,undefined8 *param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 0xd;
  plVar9 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14af3e390;
  plVar9[2] = 0x3f80000000000000;
  plVar9[3] = 0;
  plVar9[4] = (longlong)&DAT_3f8000003f800000;
  *(undefined4 *)(plVar9 + 5) = 0x3f000000;
  *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x3f000000;
  *(undefined4 *)(plVar9 + 6) = 0x3f000000;
  *(undefined4 *)((longlong)plVar9 + 0x34) = 0x3f800000;
  plVar9[7] = 0;
  plVar9[8] = 0;
  if (plVar9 == (longlong *)0x0) {
    _DAT_00000018 = *param_4;
    _DAT_00000020 = param_4[1];
    _DAT_00000028 = *param_5;
    _DAT_00000030 = param_5[1];
    _DAT_00000038 = *param_6;
    _DAT_00000040 = param_6[1];
    _DAT_00000010 = param_2;
    _DAT_00000014 = param_3;
    *(undefined8 *)(param_1 + 8) = 0x10;
    return param_1;
  }
  LOCK();
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  UNLOCK();
  LOCK();
  plVar4 = plVar9 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  *(undefined4 *)(plVar9 + 2) = param_2;
  *(undefined4 *)((longlong)plVar9 + 0x14) = param_3;
  lVar8 = param_4[1];
  plVar9[3] = *param_4;
  plVar9[4] = lVar8;
  lVar8 = param_5[1];
  plVar9[5] = *param_5;
  plVar9[6] = lVar8;
  uVar5 = *(undefined4 *)((longlong)param_6 + 4);
  uVar6 = *(undefined4 *)(param_6 + 1);
  uVar7 = *(undefined4 *)((longlong)param_6 + 0xc);
  *(undefined4 *)(plVar9 + 7) = *(undefined4 *)param_6;
  *(undefined4 *)((longlong)plVar9 + 0x3c) = uVar5;
  *(undefined4 *)(plVar9 + 8) = uVar6;
  *(undefined4 *)((longlong)plVar9 + 0x44) = uVar7;
  LOCK();
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  UNLOCK();
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(longlong **)(param_1 + 8) = plVar9 + 2;
  if (plVar9 == plVar4) {
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1485749bf;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar4 = plVar9;
  }
  else {
    *(longlong **)(param_1 + 0x10) = plVar9;
    if (plVar4 == (longlong *)0x0) goto LAB_1485749bf;
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_1485749bf;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1485749bf:
  LOCK();
  plVar4 = plVar9 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  return param_1;
}



// FUNCTION 1485749de FUN_1485749de body=128 status=ok
// SIG undefined FUN_1485749de(void)

void FUN_1485749de(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  local_28[0] = 10;
  FUN_1485735e2(param_3,local_28);
  plVar3 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 148574a62 FUN_148574a62 body=119 status=ok
// SIG undefined FUN_148574a62(void)

char FUN_148574a62(longlong *param_1,char param_2)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  switch(uVar1) {
  case 0:
  case 3:
    cVar2 = '\x01';
    break;
  case 1:
    cVar2 = '\x05';
    break;
  case 2:
    cVar2 = '\x06';
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      cVar2 = ((*(byte *)(param_1 + 1) & 2) >> 1) * '\x05';
    }
    break;
  case 4:
    cVar2 = (int)param_1[1] - 1U < 4;
    break;
  case 5:
  case 6:
    cVar2 = '\a';
    if (param_2 != '\x01') {
      cVar2 = '\0';
    }
    break;
  default:
    cVar2 = '\0';
  }
  return cVar2;
}



// FUNCTION 148574ad9 FUN_148574ad9 body=339 status=ok
// SIG undefined FUN_148574ad9(void)

undefined8 FUN_148574ad9(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 == 0) {
    plVar5 = (longlong *)FUN_14001cc68(0x48,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14af3df30;
    plVar5[3] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[2] = param_1;
    if (plVar5 == (longlong *)0x0) {
      *param_2 = 0x10;
      plVar6 = (longlong *)param_2[1];
      if (plVar6 != (longlong *)0x0) {
        param_2[1] = 0;
LAB_148574b7e:
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
        if (plVar5 != (longlong *)0x0) goto LAB_148574bdc;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *param_2 = (longlong)(plVar5 + 2);
      plVar6 = (longlong *)param_2[1];
      if (plVar5 == plVar6) {
        LOCK();
        plVar6 = plVar5 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      else {
        param_2[1] = (longlong)plVar5;
        if (plVar6 != (longlong *)0x0) goto LAB_148574b7e;
      }
LAB_148574bdc:
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    FUN_146c3b4b2(*param_2,param_1);
    FUN_146c3a27e(local_48,param_1);
    cVar3 = FUN_146c3a31e(local_48,1);
    if (cVar3 == '\0') {
      uVar4 = 0;
      goto LAB_148574af9;
    }
  }
  uVar4 = 1;
LAB_148574af9:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148574c2d FUN_148574c2d body=628 status=ok
// SIG undefined FUN_148574c2d(void)

undefined8 *
FUN_148574c2d(undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8 [2];
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = *(longlong *)(param_2 + 8);
  if (lVar3 == 0) {
    *param_1 = 0;
  }
  else {
    puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    cVar4 = FUN_1484c23e9(lVar3,puVar5,1);
    if (cVar4 == '\0') {
      local_b8 = (longlong *)*param_3;
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 8))();
      }
      local_b0 = (undefined4)param_3[1];
      local_68 = L"Bake_InvalidSampleFilterMask";
      local_60 = 0x1c;
      FUN_1446e940c(local_dc,&local_68);
      local_68 = L"UGeometryScriptLibrary_MeshBakeFunctions";
      local_60 = 0x28;
      FUN_1446e940c(local_e0,&local_68);
      FUN_140208bae(local_d8,local_e0,local_dc,L"{0}: Failed to read SampleFilterMask");
      FUN_14023409e(&local_c8,local_d8,1);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(local_58,&local_b8);
      local_80 = &local_48;
      local_88 = &local_68;
      FUN_14010d304(&local_78);
      local_98 = local_c8;
      local_90 = local_c0;
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_a8,&local_98,&local_78);
      FUN_14007f2db(local_78,local_70);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar2 = (int *)((longlong)local_c0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_c0 + 0x10))(local_c0);
          }
        }
      }
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x10))();
      }
      FUN_143baeec1(param_4,local_a8);
      if (local_a8[0] != (longlong *)0x0) {
        (**(code **)(*local_a8[0] + 0x10))();
      }
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      *param_1 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        if (puVar5[1] != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(puVar5);
      }
    }
    else {
      *param_1 = puVar5;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148574ea2 FUN_148574ea2 body=1273 status=ok
// SIG undefined FUN_148574ea2(void)

void FUN_148574ea2(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  longlong *local_d0 [2];
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  uint local_54;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(char *)(param_1 + 0x58) != '\x01') || (*param_2 == 0)) goto LAB_148575155;
  plVar4 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14af3df50;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x50);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
LAB_148574f52:
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
      if (plVar4 != (longlong *)0x0) goto LAB_148574f7a;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x48) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x50);
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
    }
    else {
      *(longlong **)(param_1 + 0x50) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_148574f52;
    }
LAB_148574f7a:
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
  }
  cVar3 = FUN_1484c23e9(*param_2,*(undefined8 *)(param_1 + 0x48),0);
  if (cVar3 == '\0') {
    local_b0 = (longlong *)*param_3;
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 8))();
    }
    local_a8 = (undefined4)param_3[1];
    local_60 = L"Bake_InvalidSourceNormalMap";
    local_58 = 0x1b;
    FUN_1446e940c(local_d4,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshBakeFunctions";
    local_58 = 0x28;
    FUN_1446e940c(local_d8,&local_60);
    FUN_140208bae(local_d0,local_d8,local_d4,L"{0}: Failed to read SourceNormalMap");
    FUN_14023409e(&local_c0,local_d0,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,&local_b0);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_c0;
    local_88 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a0,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    plVar4 = local_b0;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_b8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar4 = local_b0;
        if (*piVar2 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
          plVar4 = local_b0;
        }
      }
    }
  }
  else {
    local_60 = *(wchar_t **)(param_1 + 0x48);
    local_58 = (undefined4)param_2[1];
    local_54 = (uint)(*(char *)((longlong)param_2 + 0xc) != '\0');
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
              (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
    cVar3 = FUN_148574ad9(*(undefined8 *)(param_1 + 8),param_1 + 0x28);
    if (cVar3 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),
                 *(undefined8 *)(param_1 + 0x28));
      goto LAB_148575155;
    }
    local_e8 = (longlong *)*param_3;
    if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 8))();
    }
    local_e0 = (undefined4)param_3[1];
    local_60 = L"Bake_InvalidSourceTangents";
    local_58 = 0x1a;
    FUN_1446e940c(local_d4,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshBakeFunctions";
    local_58 = 0x28;
    FUN_1446e940c(local_d8,&local_60);
    FUN_140208bae(local_d0,local_d8,local_d4,L"{0}: Source Mesh tangents are invalid.");
    FUN_14023409e(&local_f8,local_d0,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,&local_e8);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_f8;
    local_88 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a0,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    plVar4 = local_e8;
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
        plVar4 = local_e8;
        if (*piVar2 == 0) {
          (**(code **)(*local_f0 + 0x10))(local_f0);
          plVar4 = local_e8;
        }
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  FUN_143baeec1(param_4,local_a0);
  if (local_a0[0] != (longlong *)0x0) {
    (**(code **)(*local_a0[0] + 0x10))();
  }
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
LAB_148575155:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14857539c FUN_14857539c body=4059 status=ok
// SIG undefined FUN_14857539c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_14857539c(longlong *param_1,longlong param_2,undefined8 *param_3,byte *param_4,longlong *param_5
             ,wchar_t *param_6)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  char *pcVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 uVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  longlong *local_100 [2];
  undefined8 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  longlong *local_d0 [2];
  wchar_t *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  byte local_90;
  undefined7 uStack_8f;
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 local_78;
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_90 = *param_4;
  local_80 = param_6;
  cVar9 = (*(code *)*param_3)(param_3[1],&local_90,&local_80);
  if (cVar9 == '\0') {
LAB_148575ccb:
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_148575cd1;
  }
  local_c0 = param_6;
  local_b8 = param_5;
  switch(*param_4) {
  case 1:
    plVar11 = (longlong *)FUN_14001cc68(0x90,0x10);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14af3df70;
    plVar13 = plVar11 + 2;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    plVar11[0xe] = 0;
    plVar11[0xf] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[0xc] = 0;
    plVar11[0xd] = 0;
    plVar11[0x10] = 0;
    plVar11[0x11] = 0;
    plVar11[2] = (longlong)&PTR_FUN_14af3df90;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    *(undefined4 *)((longlong)plVar11 + 0x4c) = 0x80;
    *(undefined4 *)(plVar11 + 10) = 0xffffffff;
    *(undefined1 *)(plVar11 + 0xe) = 0;
    *(undefined4 *)(plVar11 + 0x11) = DAT_14c84636c;
    plVar11[0x10] = DAT_14c846364;
    if (plVar11 == (longlong *)0x0) {
      cVar9 = FUN_143bb0d92(&local_c0,param_2);
      if (cVar9 == '\0') goto LAB_148575ccb;
LAB_148575cc4:
      *(undefined1 *)(param_2 + 0x58) = 1;
      break;
    }
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar11 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    cVar9 = FUN_143bb0d92(&local_c0,param_2);
    if (cVar9 == '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_148575d36;
    }
    *(undefined1 *)(param_2 + 0x58) = 1;
    plVar12 = plVar11;
LAB_14857581d:
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    plVar11 = plVar12;
LAB_148575d3b:
    LOCK();
    plVar16 = plVar11 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    if (cVar9 == '\0') {
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar12 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
      goto LAB_148575cd1;
    }
    goto LAB_148575c96;
  case 2:
    plVar12 = (longlong *)FUN_148582953();
    plVar13 = plVar12 + 2;
    if (plVar12 == (longlong *)0x0) {
      _DAT_00000018 = 2;
      goto LAB_148575cc4;
    }
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar12 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    *(undefined4 *)(plVar12 + 3) = 2;
    *(undefined1 *)(param_2 + 0x58) = 1;
    goto LAB_148575bfc;
  case 3:
    plVar12 = (longlong *)FUN_148582953();
    plVar13 = plVar12 + 2;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar12 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      *(undefined4 *)(plVar12 + 3) = 3;
      goto LAB_148575bfc;
    }
    _DAT_00000018 = 3;
    break;
  case 4:
    puVar5 = *(undefined4 **)(param_4 + 8);
    plVar11 = (longlong *)FUN_14001cc68(0x70,0x10);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14af3dff0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    plVar11[2] = (longlong)&PTR_FUN_14af3e010;
    *(undefined1 *)(plVar11 + 3) = 3;
    *(undefined4 *)((longlong)plVar11 + 0x1c) = 0x20;
    plVar11[4] = 0x7fefffffffffffff;
    plVar11[5] = 0x4066800000000000;
    *(undefined4 *)(plVar11 + 6) = 1;
    plVar11[7] = 0x402e000000000000;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0x3fd0000000000000;
    plVar11[0xc] = 0;
    plVar11[0xd] = 0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      plVar13 = plVar11 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    *(undefined1 *)(plVar11 + 3) = 2;
    *(undefined4 *)((longlong)plVar11 + 0x1c) = *puVar5;
    uVar18 = -(uint)((float)puVar5[1] == 0.0);
    plVar11[4] = (longlong)(double)(float)(~uVar18 & puVar5[1] | uVar18 & 0x7f7fffff);
    plVar11[5] = (longlong)(double)(float)puVar5[2];
    bVar3 = *(byte *)(puVar5 + 4);
    uVar18 = (uint)bVar3;
    if (bVar3 == 0) {
LAB_1485757f0:
      *(uint *)(plVar11 + 8) = uVar18;
    }
    else if (bVar3 == 1) {
      uVar18 = 1;
      goto LAB_1485757f0;
    }
    cVar9 = FUN_143bb0d92(&local_c0,param_2);
    if (cVar9 == '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      if (plVar11 == (longlong *)0x0) goto LAB_148575cd1;
LAB_148575d36:
      plVar12 = (longlong *)0x0;
      plVar13 = (longlong *)0x0;
      goto LAB_148575d3b;
    }
    plVar13 = plVar11 + 2;
    plVar12 = plVar11;
    if (plVar11 != (longlong *)0x0) goto LAB_14857581d;
    break;
  case 5:
    plVar12 = (longlong *)FUN_148582953();
    plVar13 = plVar12 + 2;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar12 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      *(undefined4 *)(plVar12 + 3) = 1;
      goto LAB_148575bfc;
    }
    _DAT_00000018 = 1;
    break;
  case 6:
    pcVar4 = *(char **)(param_4 + 8);
    plVar12 = (longlong *)FUN_14001cc68(0xa8);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14af3e030;
    uVar15 = 0;
    memset(plVar12 + 4,0,0x88);
    plVar12[2] = (longlong)&PTR_FUN_14af3e050;
    *(undefined4 *)(plVar12 + 3) = 0;
    *(undefined4 *)((longlong)plVar12 + 0x1c) = 1;
    plVar12[5] = 0x3ff0000000000000;
    plVar12[8] = 0x3fb999999999999a;
    plVar12[9] = 0;
    plVar12[10] = 0;
    plVar12[0xb] = 0;
    plVar12[0xc] = -0x10000000000001;
    plVar12[0xd] = 0x7fefffffffffffff;
    plVar12[0xe] = 0x7fefffffffffffff;
    plVar12[0xf] = -0x10000000000001;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar13 = plVar12 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    if ((byte)(*pcVar4 - 1U) < 3) {
      uVar15 = *(undefined4 *)(&DAT_14af3e7ec + (ulonglong)(byte)(*pcVar4 - 1U) * 4);
    }
    *(undefined4 *)(plVar12 + 3) = uVar15;
    uVar18 = 2;
    if (pcVar4[1] != '\x01') {
      uVar18 = (uint)(pcVar4[1] == '\x02');
    }
    *(uint *)((longlong)plVar12 + 0x1c) = uVar18;
    plVar13 = plVar12 + 2;
    plVar12[5] = (longlong)(double)*(float *)(pcVar4 + 4);
    plVar12[6] = (longlong)(double)*(float *)(pcVar4 + 8);
    iVar10 = 1;
    if (pcVar4[0xc] != '\x01') {
      iVar10 = (uint)(pcVar4[0xc] == '\x02') * 2;
    }
    *(int *)(plVar12 + 4) = iVar10;
    goto LAB_148575bf3;
  case 7:
    puVar5 = *(undefined4 **)(param_4 + 8);
    plVar12 = (longlong *)FUN_14001cc68(0x70,0x10);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14af3dff0;
    plVar12[3] = 0;
    plVar12[4] = 0;
    plVar12[5] = 0;
    plVar12[6] = 0;
    plVar12[7] = 0;
    plVar12[8] = 0;
    plVar12[2] = (longlong)&PTR_FUN_14af3e010;
    *(undefined1 *)(plVar12 + 3) = 3;
    *(undefined4 *)((longlong)plVar12 + 0x1c) = 0x20;
    plVar12[4] = 0x7fefffffffffffff;
    plVar12[5] = 0x4066800000000000;
    *(undefined4 *)(plVar12 + 6) = 1;
    plVar12[7] = 0x402e000000000000;
    plVar12[9] = 0;
    plVar12[10] = 0;
    plVar12[0xb] = 0x3fd0000000000000;
    plVar12[0xc] = 0;
    plVar12[0xd] = 0;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar13 = plVar12 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    plVar13 = plVar12 + 2;
    *(undefined1 *)(plVar12 + 3) = 1;
    *(undefined4 *)((longlong)plVar12 + 0x1c) = *puVar5;
    uVar18 = -(uint)((float)puVar5[1] == 0.0);
    plVar12[4] = (longlong)(double)(float)(~uVar18 & puVar5[1] | uVar18 & 0x7f7fffff);
    plVar12[5] = (longlong)(double)(float)puVar5[2];
    plVar12[7] = (longlong)(double)(float)puVar5[3];
    goto LAB_148575bf3;
  case 8:
    plVar13 = *(longlong **)(param_4 + 8);
    plVar12 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14af3e070;
    plVar12[2] = 0;
    plVar12[3] = 0;
    plVar12[4] = 0;
    plVar12[5] = 0;
    plVar12[6] = 0;
    plVar12[7] = 0;
    plVar12[2] = (longlong)&PTR_FUN_14af3e090;
    *(undefined4 *)((longlong)plVar12 + 0x2c) = 0x3f800000;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar12 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    if ((*(longlong *)(param_2 + 0x38) == 0) && (*plVar13 != 0)) {
      plVar11 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_14af3df50;
      plVar11[2] = 0;
      plVar11[3] = 0;
      plVar11[4] = 0;
      plVar11[5] = 0;
      plVar11[6] = 0;
      plVar11[7] = 0;
      if (plVar11 == (longlong *)0x0) {
        *(undefined8 *)(param_2 + 0x38) = 0x10;
        plVar16 = *(longlong **)(param_2 + 0x40);
        if (plVar16 != (longlong *)0x0) {
          *(undefined8 *)(param_2 + 0x40) = 0;
LAB_14857562d:
          LOCK();
          plVar1 = plVar16 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar2 = (int *)((longlong)plVar16 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
          if (plVar11 != (longlong *)0x0) goto LAB_148575653;
        }
      }
      else {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        *(longlong **)(param_2 + 0x38) = plVar11 + 2;
        plVar16 = *(longlong **)(param_2 + 0x40);
        if (plVar11 == plVar16) {
          LOCK();
          plVar16 = plVar11 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
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
        else {
          *(longlong **)(param_2 + 0x40) = plVar11;
          if (plVar16 != (longlong *)0x0) goto LAB_14857562d;
        }
LAB_148575653:
        LOCK();
        plVar16 = plVar11 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
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
      cVar9 = FUN_1484c23e9(*plVar13,*(undefined8 *)(param_2 + 0x38),0);
      if (cVar9 == '\0') {
        local_80 = L"BakeTexture_InvalidSourceTexture";
        local_78 = 0x20;
        FUN_1446e940c(&local_90,&local_80);
        local_80 = L"UGeometryScriptLibrary_MeshBakeFunctions";
        local_78 = 0x28;
        FUN_1446e940c(&local_a0,&local_80);
        FUN_140208bae(&local_80,&local_a0,&local_90,L"BakeTexture: Failed to read SourceTexture");
        FUN_143baeec1(param_6,&local_80);
        if (local_80 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_80 + 0x10))();
        }
      }
      else {
        local_80 = *(wchar_t **)(param_2 + 0x38);
        local_78 = (undefined4)plVar13[1];
        (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                  (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      }
    }
    goto LAB_148575bef;
  case 9:
    plVar13 = *(longlong **)(param_4 + 8);
    plVar12 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14af3e0b0;
    plVar12[2] = 0;
    plVar12[3] = 0;
    *(undefined8 *)((longlong)plVar12 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar12 + 0x24) = 0;
    *(undefined4 *)((longlong)plVar12 + 0x2c) = 0x3f800000;
    plVar12[6] = 0;
    plVar12[2] = (longlong)&PTR_FUN_14af3e0d0;
    plVar12[7] = 0;
    plVar12[8] = 0;
    plVar12[9] = 0;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar12 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    if ((int)plVar13[1] != 0) {
      local_128 = plVar12 + 7;
      FUN_148576378(local_128,(int)plVar13[1],1);
      if (0 < (int)plVar12[8]) {
        lVar17 = 0;
        lVar14 = 0;
        local_120 = plVar13;
        do {
          lVar6 = *(longlong *)(*plVar13 + lVar14 * 8);
          if (lVar6 != 0) {
            local_118 = lVar14;
            local_110 = lVar6;
            plVar13 = (longlong *)FUN_14001cc68(0x40,0x10);
            plVar13[1] = (longlong)&DAT_100000001;
            *plVar13 = (longlong)&PTR_FUN_14af3df50;
            plVar13[2] = 0;
            plVar13[3] = 0;
            plVar13[4] = 0;
            plVar13[5] = 0;
            plVar13[6] = 0;
            plVar13[7] = 0;
            if (plVar13 == (longlong *)0x0) {
              lVar14 = *local_128;
              *(undefined8 *)(lVar14 + lVar17) = 0x10;
              plVar11 = *(longlong **)(lVar14 + 8 + lVar17);
              if (plVar11 != (longlong *)0x0) {
                *(undefined8 *)(lVar14 + 8 + lVar17) = 0;
LAB_14857604d:
                LOCK();
                plVar16 = plVar11 + 1;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)*plVar16 == 0) {
                  (**(code **)*plVar11)(plVar11);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar11 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar11 + 0x10))(plVar11);
                  }
                }
                if (plVar13 != (longlong *)0x0) goto LAB_148576071;
              }
            }
            else {
              LOCK();
              *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
              UNLOCK();
              lVar14 = *local_128;
              *(longlong **)(lVar14 + lVar17) = plVar13 + 2;
              plVar11 = *(longlong **)(lVar14 + 8 + lVar17);
              if (plVar13 == plVar11) {
                LOCK();
                plVar11 = plVar13 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
                  (**(code **)*plVar13)(plVar13);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                  }
                }
              }
              else {
                *(longlong **)(lVar14 + 8 + lVar17) = plVar13;
                if (plVar11 != (longlong *)0x0) goto LAB_14857604d;
              }
LAB_148576071:
              LOCK();
              plVar11 = plVar13 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
            }
            cVar9 = FUN_1484c23e9(local_110,*(undefined8 *)(*local_128 + lVar17),0);
            lVar14 = local_118;
            plVar13 = local_120;
            if (cVar9 == '\0') {
              local_e0 = (longlong *)*param_5;
              if (local_e0 != (longlong *)0x0) {
                (**(code **)(*local_e0 + 8))();
              }
              local_d8 = (undefined4)param_5[1];
              local_80 = L"Bake_InvalidMultiTexture";
              local_78 = 0x18;
              FUN_1446e940c(local_104,&local_80);
              local_80 = L"UGeometryScriptLibrary_MeshBakeFunctions";
              local_78 = 0x28;
              FUN_1446e940c(local_108,&local_80);
              FUN_140208bae(local_100,local_108,local_104,
                            L"{0}: Failed to read MaterialIDSourceTexture");
              FUN_14023409e(&local_f0,local_100,1);
              local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
              FUN_14023423e(local_70,&local_e0);
              local_98 = local_60;
              local_a0 = &local_80;
              FUN_14010d304(&local_90,&local_a0);
              local_b0 = local_f0;
              local_a8 = local_e8;
              if (local_e8 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_d0,&local_b0);
              FUN_14007f2db(CONCAT71(uStack_8f,local_90),local_88);
              if (CONCAT71(uStack_8f,local_90) != 0) {
                FUN_1400020a8();
              }
              plVar13 = local_120;
              if (local_70[0] != (longlong *)0x0) {
                (**(code **)(*local_70[0] + 0x10))();
              }
              plVar11 = local_e8;
              if (local_e8 != (longlong *)0x0) {
                LOCK();
                plVar16 = local_e8 + 1;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                if ((int)*plVar16 == 0) {
                  (**(code **)*local_e8)(local_e8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar11 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar11 + 0x10))(plVar11);
                  }
                }
              }
              if (local_e0 != (longlong *)0x0) {
                (**(code **)(*local_e0 + 0x10))();
              }
              FUN_143baeec1(param_6,local_d0);
              if (local_d0[0] != (longlong *)0x0) {
                (**(code **)(*local_d0[0] + 0x10))();
              }
              lVar14 = local_118;
              if (local_100[0] != (longlong *)0x0) {
                (**(code **)(*local_100[0] + 0x10))();
                lVar14 = local_118;
              }
            }
          }
          lVar14 = lVar14 + 1;
          lVar17 = lVar17 + 0x10;
        } while (lVar14 < (int)plVar12[8]);
      }
    }
LAB_148575bef:
    plVar13 = plVar12 + 2;
    goto LAB_148575bf3;
  case 10:
    plVar12 = (longlong *)FUN_148582953();
    plVar13 = plVar12 + 2;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar12 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      *(undefined4 *)(plVar12 + 3) = 6;
      goto LAB_148575bfc;
    }
    _DAT_00000018 = 6;
    break;
  case 0xb:
    plVar12 = (longlong *)FUN_148582953();
    plVar13 = plVar12 + 2;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar12 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      *(undefined4 *)(plVar12 + 3) = 5;
      goto LAB_148575bfc;
    }
    _DAT_00000018 = 5;
    break;
  case 0xc:
    plVar12 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14af3e130;
    plVar13 = plVar12 + 2;
    FUN_14837f4f6(plVar13);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar12 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      goto LAB_148575bfc;
    }
    break;
  case 0xd:
    puVar5 = *(undefined4 **)(param_4 + 8);
    plVar12 = (longlong *)FUN_14001cc68(0x70,0x10);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14af3e0f0;
    plVar12[4] = 0;
    plVar12[5] = 0;
    plVar12[6] = 0;
    plVar12[7] = 0;
    plVar12[8] = 0;
    plVar12[9] = 0;
    plVar12[10] = 0;
    plVar12[0xb] = 0;
    plVar12[0xc] = 0;
    plVar12[0xd] = 0;
    plVar12[2] = (longlong)&PTR_FUN_14af3e110;
    lVar14 = DAT_14c846328;
    plVar12[3] = DAT_14c846320;
    plVar12[4] = lVar14;
    *(undefined4 *)(plVar12 + 5) = 0x3f800000;
    plVar12[7] = (longlong)&DAT_3f8000003f800000;
    plVar12[8] = 0x3f0000003f000000;
    plVar12[9] = 0x3f8000003f000000;
    plVar12[10] = 0;
    plVar12[0xb] = 0;
    *(undefined4 *)(plVar12 + 0xc) = 0;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar13 = plVar12 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    plVar13 = plVar12 + 2;
    *(undefined4 *)(plVar12 + 0xc) = *puVar5;
    *(undefined4 *)(plVar12 + 5) = puVar5[1];
    lVar14 = *(longlong *)(puVar5 + 4);
    plVar12[6] = *(longlong *)(puVar5 + 2);
    plVar12[7] = lVar14;
    lVar14 = *(longlong *)(puVar5 + 8);
    plVar12[8] = *(longlong *)(puVar5 + 6);
    plVar12[9] = lVar14;
    uVar15 = puVar5[0xb];
    uVar7 = puVar5[0xc];
    uVar8 = puVar5[0xd];
    *(undefined4 *)(plVar12 + 10) = puVar5[10];
    *(undefined4 *)((longlong)plVar12 + 0x54) = uVar15;
    *(undefined4 *)(plVar12 + 0xb) = uVar7;
    *(undefined4 *)((longlong)plVar12 + 0x5c) = uVar8;
LAB_148575bf3:
    if (plVar12 == (longlong *)0x0) break;
LAB_148575bfc:
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar12 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    goto LAB_148575c96;
  default:
    plVar13 = (longlong *)0x0;
  }
  plVar12 = (longlong *)0x0;
LAB_148575c96:
  *param_1 = (longlong)plVar13;
  param_1[1] = (longlong)plVar12;
LAB_148575cd1:
  plVar13 = *(longlong **)(param_4 + 0x10);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar13 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_60[0] ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148576378 FUN_148576378 body=143 status=ok
// SIG undefined FUN_148576378(void)

void FUN_148576378(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148582cec(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_148582d72(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_148582dd2(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148576408 FUN_148576408 body=2202 status=ok
// SIG undefined FUN_148576408(void)

undefined8 *
FUN_148576408(undefined8 *param_1,longlong param_2,longlong *param_3,undefined4 param_4,
             longlong param_5,undefined8 *param_6,longlong *param_7,longlong *param_8,byte *param_9,
             undefined8 param_10)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *_Dst;
  longlong *plVar11;
  undefined4 uVar12;
  wchar_t **ppwVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  undefined1 auStack_4c8 [32];
  longlong **local_4a8;
  undefined8 local_4a0;
  int local_48c;
  wchar_t **local_488;
  code *local_480;
  longlong ***local_478;
  undefined1 local_470 [8];
  undefined8 local_468;
  longlong local_460;
  longlong **local_458;
  longlong local_450;
  undefined **local_448;
  wchar_t **local_440;
  undefined8 *local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined4 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  longlong *local_408 [2];
  longlong local_3f8;
  undefined8 uStack_3f0;
  undefined ***local_3e8;
  undefined8 uStack_3e0;
  longlong local_3d8;
  longlong lStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  longlong lStack_3b8;
  longlong local_3b0;
  undefined8 uStack_3a8;
  byte local_3a0;
  longlong local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  longlong *local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  longlong local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 local_310;
  wchar_t *local_280;
  undefined4 local_278;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  if (param_2 == 0) {
    local_280 = L"BakeTexture_InvalidTargetMesh";
    local_278 = 0x1d;
    FUN_1446e940c(&local_358,&local_280);
    local_280 = L"UGeometryScriptLibrary_MeshBakeFunctions";
    local_278 = 0x28;
    FUN_1446e940c(&local_3f8,&local_280);
    pwVar14 = L"BakeTexture: TargetMesh is Null";
LAB_148576548:
    FUN_140208bae(&local_280,&local_3f8,&local_358,pwVar14);
    FUN_143baeec1(param_10,&local_280);
  }
  else {
    if (param_5 == 0) {
      local_280 = L"BakeTexture_InvalidSourceMesh";
      local_278 = 0x1d;
      FUN_1446e940c(&local_358,&local_280);
      local_280 = L"UGeometryScriptLibrary_MeshBakeFunctions";
      local_278 = 0x28;
      FUN_1446e940c(&local_3f8,&local_280);
      pwVar14 = L"BakeTexture: SourceMesh is Null";
      goto LAB_148576548;
    }
    if ((int)param_8[1] != 0) {
      local_280 = L"BakeTexture_Prefix";
      local_278 = 0x12;
      FUN_1446e940c(&local_358,&local_280);
      local_280 = L"UGeometryScriptLibrary_MeshBakeFunctions";
      local_278 = 0x28;
      FUN_1446e940c(&local_3f8,&local_280);
      FUN_140208bae(local_408,&local_3f8,&local_358,L"BakeTexture");
      local_4a8 = (longlong **)((ulonglong)local_4a8 & 0xffffffffffffff00);
      FUN_1411b354a(&local_280,0,0,0);
      ppwVar13 = *(wchar_t ***)(param_5 + 0x98);
      if ((param_2 != param_5) && (param_9[0x18] != 0)) {
        local_4a0 = CONCAT71(local_4a0._1_7_,1);
        local_4a8 = (longlong **)CONCAT71(local_4a8._1_7_,1);
        FUN_146c005f0(&local_280,ppwVar13,1,1);
        local_358 = *param_6;
        uStack_350 = param_6[1];
        local_348 = param_6[2];
        uStack_340 = param_6[3];
        local_338 = param_6[4];
        uStack_330 = param_6[5];
        local_328 = param_6[6];
        local_320 = *(undefined4 *)(param_6 + 8);
        uStack_31c = *(undefined4 *)((longlong)param_6 + 0x44);
        uStack_318 = *(undefined4 *)(param_6 + 9);
        uStack_314 = *(undefined4 *)((longlong)param_6 + 0x4c);
        local_310 = param_6[10];
        FUN_146c3cd49(&local_280,&local_358,1);
        local_3f8 = *param_3;
        uStack_3f0 = (wchar_t **)param_3[1];
        local_3e8 = (undefined ***)param_3[2];
        uStack_3e0 = param_3[3];
        local_3d8 = param_3[4];
        lStack_3d0 = param_3[5];
        local_3c8 = param_3[6];
        uStack_3c0 = param_3[8];
        lStack_3b8 = param_3[9];
        local_3b0 = param_3[10];
        FUN_146c3cfa5(&local_280,&local_3f8,1);
        ppwVar13 = &local_280;
      }
      local_48c = 0x100;
      if ((ulonglong)*param_9 < 10) {
        local_48c = (&DAT_14af3e808)[*param_9];
      }
      FUN_146ba21d6(&local_358,ppwVar13,1);
      local_448 = &PTR_FUN_14af3d520;
      local_438 = &local_358;
      local_430 = 0;
      uStack_428 = 0;
      local_420 = 0;
      local_418 = 0;
      uStack_410 = 0;
      local_488 = ppwVar13;
      local_440 = ppwVar13;
      _Dst = (undefined8 *)FUN_14001cc68(0x570);
      memset(_Dst,0,0x570);
      FUN_1484d448a(_Dst);
      iVar9 = local_48c;
      _Dst[1] = *(undefined8 *)(param_2 + 0x98);
      *(undefined4 *)(_Dst + 4) = param_4;
      _Dst[7] = &local_448;
      FUN_14838049e(_Dst,CONCAT44(local_48c,local_48c));
      _Dst[5] = (double)*(float *)(param_9 + 0x14);
      uVar12 = 1;
      if ((byte)(param_9[2] - 1) < 4) {
        uVar12 = *(undefined4 *)(&DAT_14af3e7f8 + (ulonglong)(byte)(param_9[2] - 1) * 4);
      }
      FUN_1483804a6(_Dst,uVar12);
      FUN_1483804ae(_Dst,(param_9[0x10] != 1) + '\x01');
      FUN_148574c2d(&local_450,param_9,local_408,param_10);
      if (local_450 != 0) {
        local_3f8 = _Dst[0x20];
        uVar4 = _Dst[0x21];
        local_3e8 = (undefined ***)_Dst[0x22];
        uVar5 = _Dst[0x23];
        local_3d8 = _Dst[0x24];
        lStack_3d0 = _Dst[0x25];
        uVar6 = _Dst[0x26];
        uVar7 = _Dst[0x27];
        _Dst[0x26] = CONCAT44(uStack_364,local_368);
        _Dst[0x27] = CONCAT44(uStack_35c,uStack_360);
        _Dst[0x24] = &PTR_LAB_14af3e150;
        _Dst[0x25] = &local_450;
        _Dst[0x22] = 0;
        _Dst[0x23] = CONCAT44(uStack_37c,uStack_380);
        _Dst[0x20] = FUN_143bb4422;
        _Dst[0x21] = CONCAT44(uStack_38c,uStack_390);
        uStack_3f0._0_4_ = (undefined4)uVar4;
        uStack_3f0._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_3e0._0_4_ = (undefined4)uVar5;
        uStack_3e0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_3c8._0_4_ = (undefined4)uVar6;
        local_3c8._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_3c0._0_4_ = (undefined4)uVar7;
        uStack_3c0._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_368 = (undefined4)local_3c8;
        uStack_364 = local_3c8._4_4_;
        uStack_360 = (undefined4)uStack_3c0;
        uStack_35c = uStack_3c0._4_4_;
        local_378 = local_3d8;
        uStack_370 = lStack_3d0;
        uStack_380 = (undefined4)uStack_3e0;
        uStack_37c = uStack_3e0._4_4_;
        uStack_390 = (undefined4)uStack_3f0;
        uStack_38c = uStack_3f0._4_4_;
        local_398 = local_3f8;
        local_388 = (longlong *)local_3e8;
        if (local_3f8 != 0) {
          plVar11 = (longlong *)local_3e8;
          if (local_3e8 == (undefined ***)0x0) {
            plVar11 = &local_378;
          }
          uStack_3f0 = (wchar_t **)uVar4;
          uStack_3e0 = uVar5;
          local_3c8 = uVar6;
          uStack_3c0 = uVar7;
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      if (param_2 == param_5) {
        *(undefined4 *)(_Dst + 6) = 3;
      }
      local_458 = local_408;
      local_3b0 = 0;
      uStack_3a8 = 0;
      uStack_3c0 = 0;
      lStack_3b8 = 0;
      lStack_3d0 = 0;
      local_3c8 = 0;
      uStack_3e0 = 0;
      local_3d8 = 0;
      local_3a0 = 0;
      local_3f8 = *(longlong *)(param_2 + 0x98);
      uStack_3f0 = local_488;
      local_3e8 = &local_448;
      lVar8 = param_8[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar3 = *param_8;
        lVar15 = 0;
        do {
          local_470[0] = *(undefined1 *)(lVar3 + lVar15);
          local_468 = *(undefined8 *)(lVar3 + 8 + lVar15);
          local_460 = *(longlong *)(lVar3 + 0x10 + lVar15);
          if (local_460 != 0) {
            LOCK();
            *(int *)(local_460 + 8) = *(int *)(local_460 + 8) + 1;
            UNLOCK();
          }
          local_478 = &local_458;
          local_480 = FUN_143bb4530;
          local_4a0 = param_10;
          local_4a8 = local_408;
          FUN_14857539c(&local_398,&local_3f8,&local_480,local_470);
          lVar10 = local_398;
          if (local_398 == 0) {
            *param_1 = 0;
          }
          else {
            if (*(char *)(lVar3 + lVar15) == '\r') {
              *(double *)(local_398 + 8) = 1.0 / (double)iVar9;
              *(double *)(local_398 + 0x10) = 1.0 / (double)iVar9;
            }
            FUN_1483803f4(_Dst,&local_398);
          }
          plVar11 = (longlong *)CONCAT44(uStack_38c,uStack_390);
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
          if (lVar10 == 0) goto LAB_148576a8f;
          lVar15 = lVar15 + 0x18;
        } while ((longlong)(int)lVar8 * 0x18 != lVar15);
        if (((local_3a0 & 1) != 0) && (*param_7 != 0)) {
          FUN_148574ea2(&local_3f8,param_7,local_408,param_10);
        }
      }
      if (uStack_3e0 != 0) {
        if (local_3d8 != 0) {
          LOCK();
          *(int *)(local_3d8 + 8) = *(int *)(local_3d8 + 8) + 1;
          UNLOCK();
        }
        plVar11 = (longlong *)_Dst[3];
        _Dst[2] = uStack_3e0;
        _Dst[3] = local_3d8;
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
      }
      FUN_143b13eb0(_Dst);
      *param_1 = _Dst;
      _Dst = (undefined8 *)0x0;
LAB_148576a8f:
      FUN_148576ca4(&local_3f8);
      if (local_450 != 0) {
        if (*(longlong *)(local_450 + 8) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_450);
      }
      if (_Dst != (undefined8 *)0x0) {
        (**(code **)*_Dst)(_Dst,1);
      }
      FUN_1457e5b52(&local_358);
      FUN_141082778(&local_280);
      if (local_408[0] != (longlong *)0x0) {
        (**(code **)(*local_408[0] + 0x10))();
      }
      goto LAB_14857657e;
    }
    local_280 = L"BakeTexture_BakeTypesEmpty";
    local_278 = 0x1a;
    FUN_1446e940c(&local_358,&local_280);
    local_280 = L"UGeometryScriptLibrary_MeshBakeFunctions";
    local_278 = 0x28;
    FUN_1446e940c(&local_3f8,&local_280);
    FUN_140208bae(&local_280,&local_3f8,&local_358,L"BakeTexture: BakeTypes is empty");
    FUN_143baef49(param_10,&local_280);
  }
  if (local_280 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_280 + 0x10))();
  }
  *param_1 = 0;
LAB_14857657e:
  if ((local_60 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148576ca4 FUN_148576ca4 body=176 status=ok
// SIG undefined FUN_148576ca4(void)

void FUN_148576ca4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x50);
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
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000148576d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148576d54 FUN_148576d54 body=404 status=ok
// SIG undefined FUN_148576d54(void)

void FUN_148576d54(longlong param_1,undefined4 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong unaff_R14;
  undefined8 unaff_R15;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 *local_a8 [2];
  undefined **local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 != 0) {
    local_b0 = *(undefined8 *)(param_1 + 0x490);
    local_b4 = FUN_14838046a();
    if (0 < local_b4) {
      local_b8 = (uint)((char)param_2 == '\x01') * 3 + 2;
      iVar3 = 0;
      do {
        uVar2 = FUN_148380456(param_1,iVar3);
        iVar1 = FUN_148574a62(uVar2,param_2);
        local_98 = &PTR_FUN_14aefd850;
        local_90 = 0;
        local_88 = 0;
        local_70 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_68 = 2;
        FUN_1484c1c3e(&local_98,iVar1,local_b0);
        FUN_148380472(param_1,local_a8,iVar3);
        FUN_1484c2098(&local_98,*local_a8[0],
                      CONCAT71((int7)((ulonglong)unaff_R14 >> 8),iVar1 == 0) & 0xffffffff);
        FUN_1484c1f36(&local_98,0);
        FUN_148380472(param_1,local_a8,iVar3);
        FUN_1484c23e6(&local_98,*local_a8[0],local_b8,
                      CONCAT71((int7)((ulonglong)unaff_R15 >> 8),
                               (char)param_2 != '\x01' && iVar1 == 0) & 0xffffffff);
        unaff_R15 = local_80;
        iVar1 = (int)param_3[1];
        unaff_R14 = (longlong)iVar1;
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_147a76346(param_3,iVar1);
        }
        *(undefined8 *)(*param_3 + unaff_R14 * 8) = unaff_R15;
        iVar3 = iVar3 + 1;
      } while (local_b4 != iVar3);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148576ee9 FUN_148576ee9 body=2874 status=ok
// SIG undefined FUN_148576ee9(void)

undefined8 *
FUN_148576ee9(undefined8 *param_1,longlong param_2,longlong *param_3,undefined4 param_4,
             longlong param_5,undefined8 *param_6,longlong *param_7,char *param_8,longlong param_9,
             undefined8 param_10)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *_Dst;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  wchar_t *pwVar13;
  longlong *plVar14;
  undefined1 auStack_538 [32];
  longlong **local_518;
  undefined8 local_510;
  undefined4 local_4fc;
  longlong local_4f8;
  undefined8 *local_4f0;
  code *local_4e8;
  longlong ***local_4e0;
  char local_4d8 [8];
  undefined8 local_4d0;
  longlong local_4c8;
  code *local_4c0;
  longlong ***local_4b8;
  char local_4b0 [8];
  undefined8 local_4a8;
  longlong local_4a0;
  code *local_498;
  longlong ***local_490;
  char local_488 [8];
  undefined8 local_480;
  longlong local_478;
  code *local_470;
  longlong ***local_468;
  char local_460 [8];
  undefined8 local_458;
  longlong local_450;
  code *local_448;
  longlong ***local_440;
  char local_438 [8];
  undefined8 local_430;
  longlong local_428;
  undefined8 local_420;
  longlong *local_418;
  longlong **local_410;
  longlong local_408;
  wchar_t **ppwStack_400;
  undefined ***local_3f8;
  longlong lStack_3f0;
  longlong local_3e8;
  longlong lStack_3e0;
  longlong local_3d8;
  longlong local_3d0;
  longlong lStack_3c8;
  longlong local_3c0;
  undefined8 uStack_3b8;
  char local_3b0;
  code *local_3a8;
  longlong *local_3a0;
  code *local_398;
  longlong *local_390;
  undefined **local_388;
  wchar_t **local_380;
  undefined8 *local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined4 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  longlong *local_348 [2];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  wchar_t *local_268;
  undefined4 local_260;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_538;
  if (param_2 == 0) {
    local_268 = L"BakeVertex_InvalidTargetMesh";
    local_260 = 0x1c;
    FUN_1446e940c(&local_338,&local_268);
    local_268 = L"UGeometryScriptLibrary_MeshBakeFunctions";
    local_260 = 0x28;
    FUN_1446e940c(&local_408,&local_268);
    pwVar13 = L"BakeVertex: TargetMesh is Null";
  }
  else {
    if (param_5 != 0) {
      local_268 = L"BakeVertex_Prefix";
      local_260 = 0x11;
      local_4fc = param_4;
      FUN_1446e940c(&local_338,&local_268);
      local_268 = L"UGeometryScriptLibrary_MeshBakeFunctions";
      local_260 = 0x28;
      FUN_1446e940c(&local_408,&local_268);
      FUN_140208bae(local_348,&local_408,&local_338,L"BakeVertex");
      FUN_146bff712(&local_268,*(undefined8 *)(param_5 + 0x98));
      if ((param_2 != param_5) && (*(char *)(param_9 + 8) != '\0')) {
        local_338 = *param_6;
        uStack_330 = param_6[1];
        local_328 = param_6[2];
        uStack_320 = param_6[3];
        local_318 = param_6[4];
        uStack_310 = param_6[5];
        local_308 = param_6[6];
        local_300 = *(undefined4 *)(param_6 + 8);
        uStack_2fc = *(undefined4 *)((longlong)param_6 + 0x44);
        uStack_2f8 = *(undefined4 *)(param_6 + 9);
        uStack_2f4 = *(undefined4 *)((longlong)param_6 + 0x4c);
        local_2f0 = param_6[10];
        FUN_146c3cd49(&local_268,&local_338,1);
        local_408 = *param_3;
        ppwStack_400 = (wchar_t **)param_3[1];
        local_3f8 = (undefined ***)param_3[2];
        lStack_3f0 = param_3[3];
        local_3e8 = param_3[4];
        lStack_3e0 = param_3[5];
        local_3d8 = param_3[6];
        local_3d0 = param_3[8];
        lStack_3c8 = param_3[9];
        local_3c0 = param_3[10];
        FUN_146c3cfa5(&local_268,&local_408,1);
      }
      FUN_146ba21d6(&local_338);
      local_388 = &PTR_FUN_14af3d520;
      local_370 = 0;
      uStack_368 = 0;
      local_360 = 0;
      local_358 = 0;
      uStack_350 = 0;
      lVar4 = *(longlong *)(param_2 + 0x98);
      local_380 = &local_268;
      local_378 = &local_338;
      FUN_14582ed12(lVar4);
      FUN_146c18122(*(undefined8 *)(lVar4 + 0x208));
      FUN_146c17f82(*(undefined8 *)(lVar4 + 0x208));
      lVar5 = *(longlong *)(lVar4 + 0x208);
      if (*(int *)(lVar5 + 0x38) < 1) {
        ppwStack_400 = (wchar_t **)0x0;
      }
      else {
        ppwStack_400 = (wchar_t **)**(longlong **)(lVar5 + 0x30);
      }
      if (*(int *)(lVar5 + 0x28) < 1) {
        local_3f8 = (undefined ***)0x0;
      }
      else {
        local_3f8 = (undefined ***)**(undefined8 **)(lVar5 + 0x20);
      }
      local_408 = param_9;
      local_398 = FUN_143bb4838;
      local_4f0 = param_1;
      local_390 = &local_408;
      FUN_146c3345c(*(undefined8 *)(lVar5 + 0x40),&local_398,0);
      local_4f8 = param_2;
      if ((((param_2 == param_5) || (*param_8 == '\x01')) && (local_60 != 0)) &&
         (lVar5 = *(longlong *)(local_60 + 0x40), lVar5 != 0)) {
        uVar11 = *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24);
        uVar9 = 0;
        if ((uVar11 != 0) &&
           (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x28) - 1U))) {
          uVar10 = 1;
          uVar7 = 1;
          if (1 < (int)uVar11) {
            uVar10 = uVar11;
          }
          do {
            uVar9 = uVar10;
            if (uVar10 == uVar7) break;
            uVar8 = uVar7 >> 9;
            uVar12 = uVar7 & 0x1ff;
            uVar9 = uVar7;
            uVar7 = uVar7 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x28))[uVar8] +
                                               (ulonglong)uVar12 * 2) - 1U));
        }
        if (uVar9 != uVar11) {
          uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 0x208) + 0x40);
          do {
            local_408 = CONCAT44(local_408._4_4_,uVar9);
            local_3a8 = FUN_143bb4896;
            ppwStack_400 = (wchar_t **)lVar5;
            local_3f8 = (undefined ***)uVar6;
            local_3a0 = &local_408;
            FUN_146c03fd0(lVar4,uVar9,&local_3a8);
            uVar10 = uVar9 + 1;
            if ((int)(uVar9 + 1) < (int)uVar11) {
              uVar10 = uVar11;
            }
            do {
              uVar7 = uVar10;
              if (uVar10 - 1 == uVar9) break;
              uVar9 = uVar9 + 1;
              uVar7 = uVar9;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar4 + 0x28) +
                                                   (ulonglong)(uVar9 >> 9) * 8) +
                                                 (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
            uVar9 = uVar7;
          } while (uVar9 != uVar11);
        }
      }
      _Dst = (void *)FUN_14001cc68(0x140);
      memset(_Dst,0,0x140);
      FUN_148582ed8(_Dst);
      param_1 = local_4f0;
      cVar3 = *param_8;
      *(uint *)((longlong)_Dst + 0x40) = (uint)(cVar3 != '\0');
      local_408 = *(longlong *)(local_4f8 + 0x98);
      *(longlong *)((longlong)_Dst + 8) = local_408;
      *(undefined4 *)((longlong)_Dst + 0x20) = local_4fc;
      local_3f8 = &local_388;
      *(undefined ****)((longlong)_Dst + 0x38) = local_3f8;
      *(double *)((longlong)_Dst + 0x28) = (double)*(float *)(param_9 + 4);
      if (local_4f8 == param_5) {
        *(undefined4 *)((longlong)_Dst + 0x30) = 3;
      }
      local_3c0 = 0;
      uStack_3b8 = 0;
      local_3d0 = 0;
      lStack_3c8 = 0;
      lStack_3e0 = 0;
      local_3d8 = 0;
      lStack_3f0 = 0;
      local_3e8 = 0;
      local_3b0 = '\0';
      ppwStack_400 = &local_268;
      local_410 = local_348;
      if (cVar3 == '\0') {
        *(undefined4 *)((longlong)_Dst + 0x40) = 0;
        local_438[0] = param_8[8];
        local_430 = *(undefined8 *)(param_8 + 0x10);
        local_428 = *(longlong *)(param_8 + 0x18);
        if (local_428 != 0) {
          LOCK();
          *(int *)(local_428 + 8) = *(int *)(local_428 + 8) + 1;
          UNLOCK();
        }
        local_440 = &local_410;
        local_448 = FUN_143bb495c;
        local_510 = param_10;
        local_518 = local_348;
        FUN_14857539c(&local_420,&local_408,&local_448,local_438);
        *(undefined8 *)((longlong)_Dst + 0x48) = local_420;
        local_420 = 0;
        plVar14 = *(longlong **)((longlong)_Dst + 0x50);
        if (local_418 == plVar14) goto LAB_1485777a9;
        *(longlong **)((longlong)_Dst + 0x50) = local_418;
LAB_14857777d:
        local_418 = (longlong *)0x0;
        local_420 = 0;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar14 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          goto LAB_1485777a9;
        }
      }
      else {
        *(undefined4 *)((longlong)_Dst + 0x40) = 1;
        local_460[0] = param_8[0x20];
        local_458 = *(undefined8 *)(param_8 + 0x28);
        local_450 = *(longlong *)(param_8 + 0x30);
        if (local_450 != 0) {
          LOCK();
          *(int *)(local_450 + 8) = *(int *)(local_450 + 8) + 1;
          UNLOCK();
        }
        local_470 = FUN_143bb4c74;
        local_510 = param_10;
        local_518 = local_348;
        local_468 = &local_410;
        FUN_14857539c(&local_420,&local_408,&local_470,local_460);
        plVar1 = local_418;
        *(undefined8 *)((longlong)_Dst + 0x58) = local_420;
        local_420 = 0;
        plVar14 = *(longlong **)((longlong)_Dst + 0x60);
        if (local_418 == plVar14) {
LAB_148577521:
          plVar14 = local_418;
          if (local_418 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_418 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_418)(local_418);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
        }
        else {
          local_418 = (longlong *)0x0;
          *(longlong **)((longlong)_Dst + 0x60) = plVar1;
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar14 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
            goto LAB_148577521;
          }
        }
        local_488[0] = param_8[0x38];
        local_480 = *(undefined8 *)(param_8 + 0x40);
        local_478 = *(longlong *)(param_8 + 0x48);
        if (local_478 != 0) {
          LOCK();
          *(int *)(local_478 + 8) = *(int *)(local_478 + 8) + 1;
          UNLOCK();
        }
        local_498 = FUN_143bb4c74;
        local_510 = param_10;
        local_518 = local_348;
        local_490 = &local_410;
        FUN_14857539c(&local_420,&local_408,&local_498,local_488);
        plVar1 = local_418;
        *(undefined8 *)((longlong)_Dst + 0x68) = local_420;
        local_420 = 0;
        plVar14 = *(longlong **)((longlong)_Dst + 0x70);
        if (local_418 == plVar14) {
LAB_1485775e6:
          plVar14 = local_418;
          if (local_418 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_418 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_418)(local_418);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
        }
        else {
          local_418 = (longlong *)0x0;
          *(longlong **)((longlong)_Dst + 0x70) = plVar1;
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar14 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
            goto LAB_1485775e6;
          }
        }
        local_4b0[0] = param_8[0x50];
        local_4a8 = *(undefined8 *)(param_8 + 0x58);
        local_4a0 = *(longlong *)(param_8 + 0x60);
        if (local_4a0 != 0) {
          LOCK();
          *(int *)(local_4a0 + 8) = *(int *)(local_4a0 + 8) + 1;
          UNLOCK();
        }
        local_4c0 = FUN_143bb4c74;
        local_510 = param_10;
        local_518 = local_348;
        local_4b8 = &local_410;
        FUN_14857539c(&local_420,&local_408,&local_4c0,local_4b0);
        plVar1 = local_418;
        *(undefined8 *)((longlong)_Dst + 0x78) = local_420;
        local_420 = 0;
        plVar14 = *(longlong **)((longlong)_Dst + 0x80);
        if (local_418 == plVar14) {
LAB_1485776ab:
          plVar14 = local_418;
          if (local_418 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_418 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_418)(local_418);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
        }
        else {
          local_418 = (longlong *)0x0;
          *(longlong **)((longlong)_Dst + 0x80) = plVar1;
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar14 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
            goto LAB_1485776ab;
          }
        }
        local_4d8[0] = param_8[0x68];
        local_4d0 = *(undefined8 *)(param_8 + 0x70);
        local_4c8 = *(longlong *)(param_8 + 0x78);
        if (local_4c8 != 0) {
          LOCK();
          *(int *)(local_4c8 + 8) = *(int *)(local_4c8 + 8) + 1;
          UNLOCK();
        }
        local_4e8 = FUN_143bb4c74;
        local_510 = param_10;
        local_518 = local_348;
        local_4e0 = &local_410;
        FUN_14857539c(&local_420,&local_408,&local_4e8,local_4d8);
        *(undefined8 *)((longlong)_Dst + 0x88) = local_420;
        local_420 = 0;
        plVar14 = *(longlong **)((longlong)_Dst + 0x90);
        if (local_418 != plVar14) {
          *(longlong **)((longlong)_Dst + 0x90) = local_418;
          goto LAB_14857777d;
        }
LAB_1485777a9:
        plVar14 = local_418;
        if (local_418 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_418 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_418)(local_418);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      if ((local_3b0 == '\x01') && (*param_7 != 0)) {
        FUN_148574ea2(&local_408,param_7,local_348,param_10);
      }
      if (lStack_3f0 != 0) {
        if (local_3e8 != 0) {
          LOCK();
          *(int *)(local_3e8 + 8) = *(int *)(local_3e8 + 8) + 1;
          UNLOCK();
        }
        plVar14 = *(longlong **)((longlong)_Dst + 0x18);
        *(longlong *)((longlong)_Dst + 0x10) = lStack_3f0;
        *(longlong *)((longlong)_Dst + 0x18) = local_3e8;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar14 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      FUN_148382e16(_Dst);
      *param_1 = _Dst;
      FUN_148576ca4(&local_408);
      FUN_1457e5b52(&local_338);
      FUN_141082778(&local_268);
      if (local_348[0] != (longlong *)0x0) {
        (**(code **)(*local_348[0] + 0x10))();
      }
      goto LAB_148576fbc;
    }
    local_268 = L"BakeVertex_InvalidSourceMesh";
    local_260 = 0x1c;
    FUN_1446e940c(&local_338,&local_268);
    local_268 = L"UGeometryScriptLibrary_MeshBakeFunctions";
    local_260 = 0x28;
    FUN_1446e940c(&local_408,&local_268);
    pwVar13 = L"BakeVertex: SourceMesh is Null";
  }
  FUN_140208bae(&local_268,&local_408,&local_338,pwVar13);
  FUN_143baeec1(param_10,&local_268);
  if (local_268 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_268 + 0x10))();
  }
  *param_1 = 0;
LAB_148576fbc:
  FUN_148573142(param_8);
  if ((local_48 ^ (ulonglong)auStack_538) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148577a24 FUN_148577a24 body=761 status=ok
// SIG undefined FUN_148577a24(void)

void FUN_148577a24(longlong param_1,char *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_e8 [32];
  float local_c8 [6];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 != 0 && param_1 != 0) {
    if (*param_2 == '\x01') {
      fVar14 = 1.0;
      fVar15 = 1.0;
      fVar16 = 0.0;
      if (param_2[0x20] != '\0') {
        fVar15 = 0.0;
        fVar16 = 1.0;
      }
      fVar17 = 1.0;
      fVar18 = 0.0;
      if (param_2[0x38] != '\0') {
        fVar17 = 0.0;
        fVar18 = 1.0;
      }
      fVar19 = 1.0;
      fVar20 = 0.0;
      if (param_2[0x50] != '\0') {
        fVar19 = 0.0;
        fVar20 = 1.0;
      }
      if (param_2[0x68] == '\0') {
        fVar21 = 1.0;
        fVar14 = 0.0;
      }
      else {
        fVar21 = 0.0;
      }
      lVar2 = *(longlong *)(param_3 + 0x98);
      uVar10 = (ulonglong)*(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x208) + 0x40) + 0x38);
      lVar5 = FUN_148383564();
      if (0 < (longlong)uVar10) {
        iVar6 = 0;
        uVar8 = 0;
        do {
          lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x208) + 0x40);
          if (lVar7 != 0) {
            uVar11 = (ulonglong)((uint)(uVar8 >> 7) & 0x7fffff);
            puVar1 = (undefined8 *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x48) + uVar11 * 8) +
                     (ulonglong)(((uint)uVar8 & 0x7f) << 4));
            uVar3 = *puVar1;
            uVar4 = puVar1[1];
            local_c8[0] = (float)uVar3;
            local_c8[1] = (float)((ulonglong)uVar3 >> 0x20);
            local_c8[2] = (float)uVar4;
            local_c8[3] = (float)((ulonglong)uVar4 >> 0x20);
            lVar12 = *(longlong *)(lVar5 + 8);
            lVar9 = uVar8 * 0x10;
            local_c8[1] = *(float *)(lVar12 + 4 + lVar9) * fVar18 + local_c8[1] * fVar17;
            local_c8[0] = *(float *)(lVar12 + lVar9) * fVar16 + local_c8[0] * fVar15;
            local_c8[3] = *(float *)(lVar12 + 0xc + lVar9) * fVar14 + local_c8[3] * fVar21;
            local_c8[2] = *(float *)(lVar12 + 8 + lVar9) * fVar20 + local_c8[2] * fVar19;
            lVar12 = 0;
            do {
              *(float *)(*(longlong *)(*(longlong *)(lVar7 + 0x48) + uVar11 * 8) +
                         (ulonglong)(iVar6 * 4 & 0x7f0) + lVar12 * 4) = local_c8[lVar12];
              lVar12 = lVar12 + 1;
            } while (lVar12 != 4);
          }
          uVar8 = uVar8 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar8 != uVar10);
      }
    }
    else {
      lVar2 = *(longlong *)(param_3 + 0x98);
      lVar5 = FUN_148383564();
      uVar10 = (ulonglong)*(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x208) + 0x40) + 0x38);
      if (0 < (longlong)uVar10) {
        lVar7 = 0;
        iVar6 = 0;
        uVar8 = 0;
        do {
          lVar12 = *(longlong *)(*(longlong *)(lVar2 + 0x208) + 0x40);
          lVar9 = *(longlong *)(lVar5 + 8);
          lVar13 = 0;
          do {
            *(undefined4 *)
             (*(longlong *)
               (*(longlong *)(lVar12 + 0x48) + (ulonglong)((uint)(uVar8 >> 7) & 0x7fffff) * 8) +
              (ulonglong)(iVar6 * 4 & 0x7f0) + lVar13 * 4) =
                 *(undefined4 *)(lVar9 + lVar7 + lVar13 * 4);
            lVar13 = lVar13 + 1;
          } while (lVar13 != 4);
          uVar8 = uVar8 + 1;
          iVar6 = iVar6 + 4;
          lVar7 = lVar7 + 0x10;
        } while (uVar8 != uVar10);
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148577d1e FUN_148577d1e body=291 status=ok
// SIG undefined FUN_148577d1e(void)

undefined4 * FUN_148577d1e(undefined4 *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 auStack_58 [38];
  undefined1 local_32 [10];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0x400;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0x4046800000000000;
  *(undefined8 *)(param_1 + 4) = 0x3ff0000000000000;
  FUN_14851fd16();
  *(char *)(param_1 + 6) = (char)param_2[6];
  *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x31);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)((longlong)param_2 + 0x36);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)((longlong)param_2 + 0x37);
  *(char *)((longlong)param_1 + 0x21) = (char)param_2[7];
  cVar1 = *(char *)((longlong)param_2 + 0x32);
  *(char *)((longlong)param_1 + 0x1e) = cVar1;
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)((longlong)param_2 + 0x33);
    uVar3 = *(undefined1 *)((longlong)param_2 + 0x34);
    uVar5 = *(undefined1 *)((longlong)param_2 + 0x35);
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
    uVar5 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x1a) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x19) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x1b) = uVar5;
  if (*(float *)((longlong)param_2 + 0x2c) <= 0.0) {
    uVar2 = 0;
  }
  else {
    FUN_14851fd16(local_32);
    uVar2 = FUN_148523176(param_1 + 6,local_32);
  }
  *(undefined1 *)((longlong)param_1 + 0x1f) = uVar2;
  uVar4 = 0x100;
  if ((ulonglong)*(byte *)(param_2 + 2) < 10) {
    uVar4 = (&DAT_14af3e808)[*(byte *)(param_2 + 2)];
  }
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)((longlong)param_2 + 0x2a);
  *(longlong *)(param_1 + 2) = param_2[3];
  *(longlong *)(param_1 + 4) = param_2[4];
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148577e42 FUN_148577e42 body=62 status=ok
// SIG undefined FUN_148577e42(void)

void FUN_148577e42(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148577e86 FUN_148577e86 body=699 status=ok
// SIG undefined FUN_148577e86(void)

void FUN_148577e86(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_60[0] = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar6 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_64 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  iVar3 = local_68;
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  uVar5 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_48;
  local_78 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  local_98 = iVar3 != 0;
  local_90 = local_70;
  FUN_148578142(local_30,&local_80,puVar6,local_64);
  plVar4 = plStack_50;
  *param_3 = uVar5;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148578142 FUN_148578142 body=878 status=ok
// SIG undefined FUN_148578142(void)

longlong FUN_148578142(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,
                      undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 *local_90;
  longlong local_88;
  undefined4 local_7c;
  code *local_78;
  longlong **local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_7c = param_4;
  if ((*param_2 == 0) || (*(int *)(*param_2 + 8) == 0)) {
    local_68 = L"AddTrianglesToMesh_InvalidList";
    local_60._0_4_ = 0x1e;
    FUN_1446e940c(&local_98,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
    local_60 = CONCAT44(local_60._4_4_,0x2d);
    FUN_1446e940c(&local_78,&local_68);
    pwVar8 = L"AddTrianglesToMesh: NewTrianglesList is empty";
  }
  else {
    FUN_14856da48(param_3,1,0);
    if (param_1 != 0) {
      local_70 = &local_98;
      local_90 = &local_7c;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffff000000);
      local_78 = FUN_143bb553e;
      local_98 = param_2;
      local_88 = param_3;
      FUN_1484b8434(param_1,&local_78,&local_68,param_5);
      lVar7 = (longlong)(int)(*(longlong **)(param_3 + 8))[1];
      if (lVar7 != 0) {
        lVar5 = **(longlong **)(param_3 + 8);
        lVar9 = 0;
        do {
          iVar3 = *(int *)(lVar5 + lVar9);
          if (iVar3 < 0) {
            if (iVar3 == -3) {
              local_68 = L"AddTrianglesToMesh_Duplicate";
              local_60._0_4_ = 0x1c;
              FUN_1446e940c(&local_98,&local_68);
              local_68 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
              local_60 = CONCAT44(local_60._4_4_,0x2d);
              FUN_1446e940c(&local_78,&local_68);
              pwVar8 = 
              L"AddTrianglesToMesh: Triangle cannot be added because it is a duplicate of an existing Triangle"
              ;
LAB_148578416:
              FUN_140208bae(&local_68,&local_78,&local_98,pwVar8);
              uVar6 = 2;
            }
            else {
              if (iVar3 == -2) {
                local_68 = L"AddTrianglesToMesh_NonManifold";
                local_60._0_4_ = 0x1e;
                FUN_1446e940c(&local_98,&local_68);
                local_68 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
                local_60 = CONCAT44(local_60._4_4_,0x2d);
                FUN_1446e940c(&local_78,&local_68);
                pwVar8 = 
                L"AddTrianglesToMesh: Triangle cannot be added because it would create invalid Non-Manifold Mesh Topology"
                ;
                goto LAB_148578416;
              }
              local_68 = L"AddTrianglesToMesh_Unknown";
              local_60._0_4_ = 0x1a;
              FUN_1446e940c(&local_98,&local_68);
              local_68 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
              local_60 = CONCAT44(local_60._4_4_,0x2d);
              FUN_1446e940c(&local_78,&local_68);
              FUN_140208bae(&local_68,&local_78,&local_98,
                            L"AddTrianglesToMesh: adding Triangle Failed");
              uVar6 = 3;
            }
            FUN_143ba90d7(param_6,uVar6,&local_68);
            if (local_68 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_68 + 0x10))();
            }
            *(undefined4 *)(lVar5 + lVar9) = 0xffffffff;
          }
          lVar9 = lVar9 + 4;
        } while (lVar7 * 4 != lVar9);
      }
      goto LAB_148578207;
    }
    local_68 = L"AddTrianglesToMesh_InvalidMesh";
    local_60._0_4_ = 0x1e;
    FUN_1446e940c(&local_98,&local_68);
    local_68 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
    local_60 = CONCAT44(local_60._4_4_,0x2d);
    FUN_1446e940c(&local_78,&local_68);
    pwVar8 = L"AddTriangleToMesh: TargetMesh is Null";
  }
  FUN_140208bae(&local_68,&local_78,&local_98,pwVar8);
  FUN_143ba90d7(param_6,2,&local_68);
  if (local_68 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_68 + 0x10))();
  }
LAB_148578207:
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
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1485784b8 FUN_1485784b8 body=570 status=ok
// SIG undefined FUN_1485784b8(void)

void FUN_1485784b8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar2 = local_48;
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar3 = local_30;
  puVar4 = &local_40;
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_3c;
  local_58 = local_34;
  local_78 = iVar2 != 0;
  local_70 = local_50;
  FUN_1485786f4(local_30,&local_60,puVar4,local_44);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485786f4 FUN_1485786f4 body=675 status=ok
// SIG undefined FUN_1485786f4(void)

longlong FUN_1485786f4(longlong param_1,undefined8 param_2,int *param_3,undefined4 param_4,
                      undefined1 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  undefined1 auStack_a8 [32];
  int *local_88;
  undefined8 local_80;
  undefined4 *local_78;
  undefined4 local_6c;
  code *local_68;
  int **local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_3 = -1;
  local_6c = param_4;
  if (param_1 == 0) {
    local_58 = L"AddTriangleToMesh_InvalidMesh";
    local_50._0_4_ = 0x1d;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2d);
    FUN_1446e940c(&local_68,&local_58);
    FUN_140208bae(&local_58,&local_68,&local_88,L"AddTriangleToMesh: TargetMesh is Null");
    FUN_143ba90d7(param_6,2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    goto LAB_1485787ae;
  }
  local_60 = &local_88;
  local_78 = &local_6c;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffff000000);
  local_68 = FUN_143bb54d6;
  local_88 = param_3;
  local_80 = param_2;
  FUN_1484b8434(param_1,&local_68,&local_58,param_5);
  iVar1 = *param_3;
  if (-1 < iVar1) goto LAB_1485787ae;
  if (iVar1 == -3) {
    local_58 = L"AddTriangleToMesh_Duplicate";
    local_50._0_4_ = 0x1b;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2d);
    FUN_1446e940c(&local_68,&local_58);
    pwVar3 = 
    L"AddTriangleToMesh: Triangle cannot be added because it is a duplicate of an existing Triangle"
    ;
LAB_1485788ef:
    FUN_140208bae(&local_58,&local_68,&local_88,pwVar3);
    uVar2 = 2;
  }
  else {
    if (iVar1 == -2) {
      local_58 = L"AddTriangleToMesh_NonManifold";
      local_50._0_4_ = 0x1d;
      FUN_1446e940c(&local_88,&local_58);
      local_58 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
      local_50 = CONCAT44(local_50._4_4_,0x2d);
      FUN_1446e940c(&local_68,&local_58);
      pwVar3 = 
      L"AddTriangleToMesh: Triangle cannot be added because it would create invalid Non-Manifold Mesh Topology"
      ;
      goto LAB_1485788ef;
    }
    local_58 = L"AddTriangleToMesh_Unknown";
    local_50._0_4_ = 0x19;
    FUN_1446e940c(&local_88,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2d);
    FUN_1446e940c(&local_68,&local_58);
    FUN_140208bae(&local_58,&local_68,&local_88,L"AddTriangleToMesh: adding Triangle Failed");
    uVar2 = 3;
  }
  FUN_143ba90d7(param_6,uVar2,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  *param_3 = -1;
LAB_1485787ae:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857899e FUN_14857899e body=542 status=ok
// SIG undefined FUN_14857899e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14857899e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  int local_88 [3];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  longlong local_68;
  int *local_60;
  undefined4 *local_58;
  code *local_50;
  int **local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 2);
  }
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 1);
  }
  piVar2 = local_88 + 1;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar2 = *(int **)(param_2 + 0x38);
  }
  local_88[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  lVar1 = local_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_70;
  local_a8 = local_88[2];
  uStack_a4 = uStack_7c;
  uStack_a0 = uStack_78;
  uStack_9c = uStack_74;
  *piVar2 = -1;
  if (lVar1 != 0) {
    local_48 = &local_60;
    local_58 = &local_a8;
    local_3e = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_40 = 0;
    local_50 = FUN_143bb5290;
    local_60 = piVar2;
    FUN_1484b8434(lVar1,&local_50,&local_40,local_88[0] != 0);
  }
  *param_3 = lVar1;
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148578bc4 FUN_148578bc4 body=516 status=ok
// SIG undefined FUN_148578bc4(void)

void FUN_148578bc4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  int local_54;
  undefined1 local_50 [8];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50[0] = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar5 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  uVar4 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  local_60 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_148578dca(local_28,&local_68,puVar5,local_54 != 0);
  plVar3 = plStack_40;
  *param_3 = uVar4;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148578dca FUN_148578dca body=220 status=ok
// SIG undefined FUN_148578dca(void)

longlong FUN_148578dca(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  code *local_58;
  longlong **local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*param_2 != 0) && (*(int *)(*param_2 + 8) != 0)) {
    FUN_14856da48(param_3,3,0);
    if (param_1 != 0) {
      local_50 = &local_68;
      local_46 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
      local_48 = 0;
      local_58 = FUN_143bb531e;
      local_68 = param_2;
      local_60 = param_3;
      FUN_1484b8434(param_1,&local_58,&local_48,param_4);
    }
  }
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148578eb0 FUN_148578eb0 body=673 status=ok
// SIG undefined FUN_148578eb0(void)

void FUN_148578eb0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined8 local_140;
  undefined8 local_130;
  int local_128;
  undefined4 local_124;
  undefined1 local_120 [8];
  undefined8 local_118;
  longlong *plStack_110;
  undefined1 local_108 [208];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  memset(local_108,0,0xd0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_108);
  }
  puVar6 = local_108;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_120[0] = 0;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_120);
  }
  puVar7 = local_120;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_124 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_124);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_124);
  }
  local_128 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  iVar3 = local_128;
  local_130 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_130);
  }
  uVar5 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_148 = iVar3 != 0;
  local_140 = local_130;
  FUN_148579152(local_38,puVar6,puVar7,local_124);
  plVar4 = plStack_110;
  *param_3 = uVar5;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_1485792ac(local_108);
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148579152 FUN_148579152 body=344 status=ok
// SIG undefined FUN_148579152(void)

longlong FUN_148579152(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined4 *local_70;
  undefined4 local_64;
  code *local_60;
  undefined8 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar1 = param_6;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_64 = param_4;
  FUN_14856da48(param_3,1,0);
  if (param_1 == 0) {
    local_50 = L"AppendMeshRepeated_InvalidInput1";
    local_48._0_4_ = 0x20;
    FUN_1446e940c(&local_88,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2d);
    FUN_1446e940c(&local_60,&local_50);
    FUN_140208bae(&local_50,&local_60,&local_88,L"AppendMeshRepeated: TargetMesh is Null");
    FUN_143ba90d7(uVar1,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_58 = &local_88;
    local_78 = &param_6;
    local_70 = &local_64;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bb5738;
    local_88 = param_2;
    local_80 = param_3;
    FUN_1484b8434(param_1,&local_60,&local_50,param_5);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485792ac FUN_1485792ac body=216 status=ok
// SIG undefined FUN_1485792ac(void)

void FUN_1485792ac(longlong *param_1)

{
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 14857938a FUN_14857938a body=712 status=ok
// SIG undefined FUN_14857938a(void)

void FUN_14857938a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined1 local_fd;
  int local_fc;
  undefined8 local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_90 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b4 = 0x3ff00000;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  local_fc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fc);
  }
  iVar1 = local_fc;
  local_fd = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fd);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fd);
  }
  local_108 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  uVar2 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_f8;
  puVar5 = local_88;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_128 = iVar1 != 0;
  local_118 = local_108;
  local_120 = local_fd;
  FUN_143bb0fed(local_90,local_98,0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148579660 FUN_148579660 body=896 status=ok
// SIG undefined FUN_148579660(void)

void FUN_148579660(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_115;
  int local_114;
  int local_110;
  undefined4 local_10c;
  undefined8 local_108 [2];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_108[0] = 0;
  local_108[1] = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0x3ff00000;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0x3ff00000;
  uStack_c0 = 0;
  uStack_bc = 0x3ff00000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_108);
  }
  local_10c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10c);
  }
  local_110 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  iVar2 = local_110;
  local_114 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_114);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_114);
  }
  iVar1 = local_114;
  local_115 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_115);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_115);
  }
  local_120 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_120);
  }
  uVar3 = local_a0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = local_108;
  puVar6 = local_98;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_138 = iVar1 != 0;
  local_140 = iVar2 != 0;
  local_128 = local_120;
  local_130 = local_115;
  local_148 = local_10c;
  FUN_143bb152b(local_a0,local_a8,0);
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485799fa FUN_1485799fa body=1384 status=ok
// SIG undefined FUN_1485799fa(void)

void FUN_1485799fa(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  undefined8 *local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 *local_180;
  undefined8 local_178 [12];
  undefined8 local_118;
  int local_10c;
  undefined1 local_105;
  int local_104;
  int local_100;
  undefined4 local_fc;
  undefined8 local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98 [5];
  undefined8 local_70;
  longlong local_68 [3];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_50 = 0;
  local_180 = param_3;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar9 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_98[2] = 0;
  local_98[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 2);
  }
  plVar10 = local_98 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  plVar8 = local_98;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b4 = 0x3ff00000;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  local_fc = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fc);
  }
  local_100 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  iVar3 = local_100;
  local_104 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  iVar2 = local_104;
  local_105 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_105);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_105);
  }
  local_10c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10c);
  }
  iVar1 = local_10c;
  local_118 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  local_1b8 = local_fc;
  local_1a0 = local_105;
  local_190 = local_118;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1c0 = local_178;
  puVar6 = local_f8;
  puVar7 = local_1c0;
  for (lVar5 = 0xc; uVar4 = local_50, lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_1a8 = iVar2 != 0;
  local_198 = iVar1 != 0;
  local_1b0 = iVar3 != 0;
  local_1c8 = plVar8;
  FUN_148579f64(local_50,plVar9,local_70,plVar10);
  *local_180 = uVar4;
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148579f64 FUN_148579f64 body=253 status=ok
// SIG undefined FUN_148579f64(void)

undefined8
FUN_148579f64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined4 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10,undefined1 param_11,undefined8 param_12)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_b8 [12];
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58[0] = 0;
  local_58[1] = 0;
  local_e8 = param_5;
  FUN_143bb11b2(param_2,param_4,param_11,local_58);
  puVar2 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_6;
    param_6 = param_6 + 1;
    puVar2 = puVar2 + 1;
  }
  local_c8 = param_12;
  local_d0 = param_10;
  local_d8 = param_9;
  local_e0 = param_8;
  local_e8 = CONCAT44(local_e8._4_4_,param_7);
  FUN_143bb152b(param_1,param_3,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[2] ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857a072 FUN_14857a072 body=943 status=ok
// SIG undefined FUN_14857a072(void)

void FUN_14857a072(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_178 [32];
  longlong *local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_121;
  int local_120;
  int local_11c;
  longlong local_118 [2];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_b8[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8 + 3);
  }
  local_b8[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8 + 2);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  plVar7 = local_b8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_118[0] = 0;
  local_118[1] = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d4 = 0x3ff00000;
  uStack_d0 = 0;
  uStack_cc = 0x3ff00000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_118);
  }
  local_11c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11c);
  }
  iVar2 = local_11c;
  local_120 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_120);
  }
  iVar1 = local_120;
  local_121 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_121);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_121);
  }
  local_130 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_130);
  }
  lVar3 = local_b8[3];
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_158 = local_b8 + 4;
  plVar5 = local_118;
  plVar6 = local_158;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  local_148 = iVar1 != 0;
  local_150 = iVar2 != 0;
  local_138 = local_130;
  local_140 = local_121;
  FUN_143bb12e1(local_b8[3],local_b8[2],0,plVar7);
  *param_3 = lVar3;
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857a43a FUN_14857a43a body=1418 status=ok
// SIG undefined FUN_14857a43a(void)

void FUN_14857a43a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  longlong *local_1d0;
  undefined8 *local_1c8;
  undefined1 local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 *local_190;
  undefined8 local_188 [13];
  undefined8 local_120;
  int local_118;
  undefined1 local_111;
  int local_110;
  int local_10c;
  undefined8 local_108 [2];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [7];
  undefined8 local_70;
  longlong local_68 [3];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_50 = 0;
  local_190 = param_3;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar6 = (undefined8 *)(param_2 + 0x38);
  local_198 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_198 = *(longlong **)(param_2 + 0x38);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_a8[4] = 0;
  local_a8[5] = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 4);
  }
  plVar10 = local_a8 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x38);
  }
  local_a8[2] = 0;
  local_a8[3] = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 2);
  }
  plVar8 = local_a8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  plVar9 = local_a8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  local_108[0] = 0;
  local_108[1] = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0x3ff00000;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0x3ff00000;
  uStack_c0 = 0;
  uStack_bc = 0x3ff00000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_108);
  }
  local_10c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10c);
  }
  iVar3 = local_10c;
  local_110 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  iVar2 = local_110;
  local_111 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_111);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_111);
  }
  local_118 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  iVar1 = local_118;
  local_120 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_120);
  }
  local_1b0 = local_111;
  local_1a0 = local_120;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1c8 = local_188;
  puVar6 = local_108;
  puVar7 = local_1c8;
  for (lVar5 = 0xc; uVar4 = local_50, lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_1b8 = iVar2 != 0;
  local_1a8 = iVar1 != 0;
  local_1c0 = iVar3 != 0;
  local_1d8 = plVar8;
  local_1d0 = plVar9;
  FUN_14857a9c6(local_50,local_198,local_70,plVar10);
  *local_190 = uVar4;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[4] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857a9c6 FUN_14857a9c6 body=257 status=ok
// SIG undefined FUN_14857a9c6(void)

undefined8
FUN_14857a9c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10,undefined1 param_11,undefined8 param_12)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_b8 [12];
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_58[0] = 0;
  local_58[1] = 0;
  local_e8 = (undefined8 *)param_5;
  FUN_143bb11b2(param_2,param_4,param_11,local_58);
  local_e8 = local_b8;
  puVar2 = local_e8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_7;
    param_7 = param_7 + 1;
    puVar2 = puVar2 + 1;
  }
  local_c8 = param_12;
  local_d0 = param_10;
  local_d8 = param_9;
  local_e0 = param_8;
  FUN_143bb12e1(param_1,param_3,local_58,param_6);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[2] ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857aad8 FUN_14857aad8 body=1192 status=ok
// SIG undefined FUN_14857aad8(void)

void FUN_14857aad8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  undefined8 *local_1a0;
  undefined1 local_198;
  undefined1 local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 local_178 [13];
  undefined8 local_110;
  int local_104;
  undefined1 local_fd;
  int local_fc;
  undefined8 local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98 [5];
  undefined8 local_70;
  longlong local_68 [3];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar8 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_98[2] = 0;
  local_98[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 2);
  }
  plVar9 = local_98 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  plVar7 = local_98;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b4 = 0x3ff00000;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  local_fc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fc);
  }
  iVar2 = local_fc;
  local_fd = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fd);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fd);
  }
  local_104 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  iVar1 = local_104;
  local_110 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  local_190 = local_fd;
  local_180 = local_110;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1a0 = local_178;
  puVar5 = local_f8;
  puVar6 = local_1a0;
  for (lVar4 = 0xc; uVar3 = local_50, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_188 = iVar1 != 0;
  local_198 = iVar2 != 0;
  local_1a8 = plVar7;
  FUN_14857af82(local_50,plVar8,local_70,plVar9);
  *param_3 = uVar3;
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857af82 FUN_14857af82 body=231 status=ok
// SIG undefined FUN_14857af82(void)

undefined8
FUN_14857af82(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined8 param_10)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_b8 [12];
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_58[0] = 0;
  local_58[1] = 0;
  local_d8 = param_5;
  FUN_143bb11b2(param_2,param_4,param_9,local_58);
  puVar2 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_6;
    param_6 = param_6 + 1;
    puVar2 = puVar2 + 1;
  }
  local_c8 = param_10;
  local_d0 = param_8;
  local_d8 = CONCAT71(local_d8._1_7_,param_7);
  FUN_143bb0fed(param_1,param_3,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[2] ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857b070 FUN_14857b070 body=477 status=ok
// SIG undefined FUN_14857b070(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14857b070(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  int local_40 [2];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_148568536(&local_38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40 + 1);
  }
  piVar3 = local_40 + 1;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar3 = *(int **)(param_2 + 0x38);
  }
  local_40[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  uVar2 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  local_48 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  FUN_14857b24e(local_28,&local_50,piVar3,local_40[0] != 0);
  *param_3 = uVar2;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)local_30 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857b24e FUN_14857b24e body=196 status=ok
// SIG undefined FUN_14857b24e(void)

longlong FUN_14857b24e(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined4 *local_50;
  code *local_48;
  longlong **local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1 != 0) && (*(int *)(*param_2 + 0x10) != *(int *)(*param_2 + 0x3c))) {
    *param_3 = 0;
    local_40 = &local_58;
    local_36 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    local_38 = 0;
    local_48 = FUN_143bb5690;
    local_58 = param_2;
    local_50 = param_3;
    FUN_1484b8434(param_1);
  }
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857b320 FUN_14857b320 body=529 status=ok
// SIG undefined FUN_14857b320(void)

void FUN_14857b320(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_a8 [44];
  int local_7c;
  undefined1 local_75;
  undefined4 local_74;
  longlong local_70;
  undefined4 *local_68;
  undefined1 *local_60;
  undefined4 local_54;
  code *local_50;
  undefined4 **local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_75 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_75);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_75);
  }
  puVar2 = &local_75;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  lVar1 = local_70;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_54 = local_74;
  *puVar2 = 0;
  if (lVar1 != 0) {
    local_68 = &local_54;
    local_48 = &local_68;
    local_3e = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_40 = 0;
    local_50 = FUN_143bb5606;
    local_60 = puVar2;
    FUN_1484b8434(lVar1,&local_50,&local_40,local_7c != 0);
  }
  *param_3 = lVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857b538 FUN_14857b538 body=488 status=ok
// SIG undefined FUN_14857b538(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14857b538(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 local_58;
  longlong *local_50;
  int local_48 [2];
  undefined1 local_40 [8];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40[0] = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 1);
  }
  piVar4 = local_48 + 1;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar4 = *(int **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  uVar3 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60[0] = local_40[0];
  local_58 = local_38;
  local_50 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_14857b722(local_28,local_60,piVar4,local_48[0] != 0);
  plVar2 = plStack_30;
  *param_3 = uVar3;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar4 = (int *)((longlong)plVar2 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857b722 FUN_14857b722 body=200 status=ok
// SIG undefined FUN_14857b722(void)

longlong FUN_14857b722(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 *local_50;
  code *local_48;
  longlong *local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_2 + 8) != 0) && (*(int *)(*(longlong *)(param_2 + 8) + 8) != 0)) &&
     (*param_3 = 0, param_1 != 0)) {
    local_40 = &local_58;
    local_36 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    local_38 = 0;
    local_48 = FUN_143bb5634;
    local_58 = param_2;
    local_50 = param_3;
    FUN_1484b8434(param_1);
  }
  plVar3 = *(longlong **)(param_2 + 0x10);
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857b7f8 FUN_14857b7f8 body=529 status=ok
// SIG undefined FUN_14857b7f8(void)

void FUN_14857b7f8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_a8 [44];
  int local_7c;
  undefined1 local_75;
  undefined4 local_74;
  longlong local_70;
  undefined4 *local_68;
  undefined1 *local_60;
  undefined4 local_54;
  code *local_50;
  undefined4 **local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_75 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_75);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_75);
  }
  puVar2 = &local_75;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  lVar1 = local_70;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_54 = local_74;
  *puVar2 = 0;
  if (lVar1 != 0) {
    local_68 = &local_54;
    local_48 = &local_68;
    local_3e = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_40 = 0;
    local_50 = FUN_143bb5452;
    local_60 = puVar2;
    FUN_1484b8434(lVar1,&local_50,&local_40,local_7c != 0);
  }
  *param_3 = lVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857ba10 FUN_14857ba10 body=488 status=ok
// SIG undefined FUN_14857ba10(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14857ba10(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 local_58;
  longlong *local_50;
  int local_48 [2];
  undefined1 local_40 [8];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40[0] = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 1);
  }
  piVar4 = local_48 + 1;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar4 = *(int **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  uVar3 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60[0] = local_40[0];
  local_58 = local_38;
  local_50 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_14857bbfa(local_28,local_60,piVar4,local_48[0] != 0);
  plVar2 = plStack_30;
  *param_3 = uVar3;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar4 = (int *)((longlong)plVar2 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857bbfa FUN_14857bbfa body=212 status=ok
// SIG undefined FUN_14857bbfa(void)

longlong FUN_14857bbfa(longlong param_1,char *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined4 *local_50;
  code *local_48;
  char **local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((*(longlong *)(param_2 + 8) != 0) && (*(int *)(*(longlong *)(param_2 + 8) + 8) != 0)) &&
      ((*param_2 == '\x03' || (*param_2 == '\0')))) && (*param_3 = 0, param_1 != 0)) {
    local_40 = &local_58;
    local_36 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    local_38 = 0;
    local_48 = FUN_143bb547c;
    local_58 = param_2;
    local_50 = param_3;
    FUN_1484b8434(param_1);
  }
  plVar3 = *(longlong **)(param_2 + 0x10);
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857bcd6 FUN_14857bcd6 body=311 status=ok
// SIG undefined FUN_14857bcd6(void)

void FUN_14857bcd6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_88 [44];
  int local_5c;
  longlong local_58;
  undefined1 local_49;
  code *local_48;
  undefined1 *local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  lVar1 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_58 != 0) {
    local_36 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    local_38 = 0;
    local_48 = FUN_143bb4f82;
    local_40 = &local_49;
    FUN_1484b8434(local_58,&local_48,&local_38,local_5c != 0);
  }
  *param_3 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857be0e FUN_14857be0e body=378 status=ok
// SIG undefined FUN_14857be0e(void)

void FUN_14857be0e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
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
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar4 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  local_48 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_14857bf8a(local_20,&local_50,local_40);
  plVar3 = plStack_30;
  *param_3 = uVar4;
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857bf8a FUN_14857bf8a body=446 status=ok
// SIG undefined FUN_14857bf8a(void)

longlong FUN_14857bf8a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  code *local_68;
  longlong **local_60;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_3;
  if (param_1 == 0) {
    local_58 = L"SetAllMeshVertexPositions_InvalidMesh";
    local_50._0_4_ = 0x25;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2d);
    FUN_1446e940c(&local_80,&local_58);
    pwVar4 = L"SetAllMeshVertexPositions: TargetMesh is Null";
  }
  else {
    if ((*param_2 != 0) && (*(int *)(*param_2 + 8) != 0)) {
      local_60 = &local_80;
      local_78 = &local_70;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffff000000);
      local_68 = FUN_143bb5092;
      local_80 = param_2;
      FUN_1484b8434(param_1,&local_68,&local_58,0);
      goto LAB_14857c050;
    }
    local_58 = L"SetAllMeshVertexPositions_InvalidList";
    local_50._0_4_ = 0x25;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
    local_50 = CONCAT44(local_50._4_4_,0x2d);
    FUN_1446e940c(&local_80,&local_58);
    pwVar4 = L"SetAllMeshVertexPositions: List is empty";
  }
  FUN_140208bae(&local_58,&local_80,&local_68,pwVar4);
  FUN_143ba90d7(param_3,2,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
LAB_14857c050:
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857c156 FUN_14857c156 body=639 status=ok
// SIG undefined FUN_14857c156(void)

void FUN_14857c156(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  int local_a0;
  undefined1 local_99;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  longlong local_78;
  undefined4 *local_70;
  undefined1 *local_68;
  undefined4 *local_60;
  undefined4 local_54;
  code *local_50;
  undefined4 **local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_99 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  puVar2 = &local_99;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_a0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  lVar1 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_88;
  local_b8 = local_98;
  uStack_b4 = uStack_94;
  uStack_b0 = uStack_90;
  uStack_ac = uStack_8c;
  local_54 = local_7c;
  *puVar2 = 0;
  if (lVar1 != 0) {
    local_70 = &local_54;
    local_48 = &local_70;
    local_60 = &local_b8;
    local_3e = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_40 = 0;
    local_50 = FUN_143bb4fb8;
    local_68 = puVar2;
    FUN_1484b8434(lVar1,&local_50,&local_40,local_a0 != 0);
  }
  *param_3 = lVar1;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857c460 FUN_14857c460 body=59 status=ok
// SIG undefined FUN_14857c460(void)

undefined8 FUN_14857c460(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857c572 FUN_14857c572 body=59 status=ok
// SIG undefined FUN_14857c572(void)

undefined8 FUN_14857c572(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857c67a FUN_14857c67a body=86 status=ok
// SIG undefined FUN_14857c67a(void)

undefined1 FUN_14857c67a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1401842de(param_2);
    FUN_14058b698(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 14857c6f8 FUN_14857c6f8 body=59 status=ok
// SIG undefined FUN_14857c6f8(void)

undefined8 FUN_14857c6f8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857c744 FUN_14857c744 body=38 status=ok
// SIG undefined FUN_14857c744(void)

void FUN_14857c744(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1400d7d10(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 14857c7ca FUN_14857c7ca body=56 status=ok
// SIG undefined FUN_14857c7ca(void)

void FUN_14857c7ca(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014857c7f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14857c818 FUN_14857c818 body=54 status=ok
// SIG undefined FUN_14857c818(void)

undefined1 FUN_14857c818(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14857c950(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14857c87c FUN_14857c87c body=59 status=ok
// SIG undefined FUN_14857c87c(void)

undefined8 FUN_14857c87c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857c8c2 FUN_14857c8c2 body=64 status=ok
// SIG undefined FUN_14857c8c2(void)

void FUN_14857c8c2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14857c950 FUN_14857c950 body=80 status=ok
// SIG undefined FUN_14857c950(void)

undefined8 * FUN_14857c950(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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



// FUNCTION 14857ca24 FUN_14857ca24 body=59 status=ok
// SIG undefined FUN_14857ca24(void)

undefined8 FUN_14857ca24(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857cb62 FUN_14857cb62 body=39 status=ok
// SIG undefined FUN_14857cb62(void)

undefined8 FUN_14857cb62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14857cbb2 FUN_14857cbb2 body=59 status=ok
// SIG undefined FUN_14857cbb2(void)

undefined8 FUN_14857cbb2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857cd44 FUN_14857cd44 body=59 status=ok
// SIG undefined FUN_14857cd44(void)

undefined8 FUN_14857cd44(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857ce9c FUN_14857ce9c body=59 status=ok
// SIG undefined FUN_14857ce9c(void)

undefined8 FUN_14857ce9c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857cfaa FUN_14857cfaa body=59 status=ok
// SIG undefined FUN_14857cfaa(void)

undefined8 FUN_14857cfaa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857d0bc FUN_14857d0bc body=59 status=ok
// SIG undefined FUN_14857d0bc(void)

undefined8 FUN_14857d0bc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857d17a FUN_14857d17a body=56 status=ok
// SIG undefined FUN_14857d17a(void)

void FUN_14857d17a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014857d1a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14857d1c8 FUN_14857d1c8 body=54 status=ok
// SIG undefined FUN_14857d1c8(void)

undefined1 FUN_14857d1c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14857d30e(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 14857d23a FUN_14857d23a body=59 status=ok
// SIG undefined FUN_14857d23a(void)

undefined8 FUN_14857d23a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857d280 FUN_14857d280 body=64 status=ok
// SIG undefined FUN_14857d280(void)

void FUN_14857d280(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x10);
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
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14857d30e FUN_14857d30e body=86 status=ok
// SIG undefined FUN_14857d30e(void)

undefined1 * FUN_14857d30e(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
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



// FUNCTION 14857d376 FUN_14857d376 body=56 status=ok
// SIG undefined FUN_14857d376(void)

void FUN_14857d376(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014857d3a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14857d3c4 FUN_14857d3c4 body=54 status=ok
// SIG undefined FUN_14857d3c4(void)

undefined1 FUN_14857d3c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14857d4fc(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14857d428 FUN_14857d428 body=59 status=ok
// SIG undefined FUN_14857d428(void)

undefined8 FUN_14857d428(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857d46e FUN_14857d46e body=64 status=ok
// SIG undefined FUN_14857d46e(void)

void FUN_14857d46e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14857d4fc FUN_14857d4fc body=80 status=ok
// SIG undefined FUN_14857d4fc(void)

undefined8 * FUN_14857d4fc(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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



// FUNCTION 14857d55e FUN_14857d55e body=56 status=ok
// SIG undefined FUN_14857d55e(void)

void FUN_14857d55e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014857d58b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14857d5ac FUN_14857d5ac body=54 status=ok
// SIG undefined FUN_14857d5ac(void)

undefined1 FUN_14857d5ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14857d6e4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14857d610 FUN_14857d610 body=59 status=ok
// SIG undefined FUN_14857d610(void)

undefined8 FUN_14857d610(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857d656 FUN_14857d656 body=64 status=ok
// SIG undefined FUN_14857d656(void)

void FUN_14857d656(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14857d6e4 FUN_14857d6e4 body=80 status=ok
// SIG undefined FUN_14857d6e4(void)

undefined8 * FUN_14857d6e4(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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



// FUNCTION 14857d746 FUN_14857d746 body=56 status=ok
// SIG undefined FUN_14857d746(void)

void FUN_14857d746(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014857d773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14857d794 FUN_14857d794 body=54 status=ok
// SIG undefined FUN_14857d794(void)

undefined1 FUN_14857d794(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14857d8cc(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14857d7f8 FUN_14857d7f8 body=59 status=ok
// SIG undefined FUN_14857d7f8(void)

undefined8 FUN_14857d7f8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857d83e FUN_14857d83e body=64 status=ok
// SIG undefined FUN_14857d83e(void)

void FUN_14857d83e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14857d8cc FUN_14857d8cc body=80 status=ok
// SIG undefined FUN_14857d8cc(void)

undefined8 * FUN_14857d8cc(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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



// FUNCTION 14857d92e FUN_14857d92e body=56 status=ok
// SIG undefined FUN_14857d92e(void)

void FUN_14857d92e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014857d95b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14857d97c FUN_14857d97c body=54 status=ok
// SIG undefined FUN_14857d97c(void)

undefined1 FUN_14857d97c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14857dab4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14857d9e0 FUN_14857d9e0 body=59 status=ok
// SIG undefined FUN_14857d9e0(void)

undefined8 FUN_14857d9e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857da26 FUN_14857da26 body=64 status=ok
// SIG undefined FUN_14857da26(void)

void FUN_14857da26(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14857dab4 FUN_14857dab4 body=80 status=ok
// SIG undefined FUN_14857dab4(void)

undefined8 * FUN_14857dab4(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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



// FUNCTION 14857db16 FUN_14857db16 body=56 status=ok
// SIG undefined FUN_14857db16(void)

void FUN_14857db16(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014857db43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14857db64 FUN_14857db64 body=54 status=ok
// SIG undefined FUN_14857db64(void)

undefined1 FUN_14857db64(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14857dc9c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14857dbc8 FUN_14857dbc8 body=59 status=ok
// SIG undefined FUN_14857dbc8(void)

undefined8 FUN_14857dbc8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857dc0e FUN_14857dc0e body=64 status=ok
// SIG undefined FUN_14857dc0e(void)

void FUN_14857dc0e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14857dc9c FUN_14857dc9c body=80 status=ok
// SIG undefined FUN_14857dc9c(void)

undefined8 * FUN_14857dc9c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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



// FUNCTION 14857dd0a FUN_14857dd0a body=56 status=ok
// SIG undefined FUN_14857dd0a(void)

void FUN_14857dd0a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014857dd37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14857dd58 FUN_14857dd58 body=54 status=ok
// SIG undefined FUN_14857dd58(void)

undefined1 FUN_14857dd58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14857de9e(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 14857ddca FUN_14857ddca body=59 status=ok
// SIG undefined FUN_14857ddca(void)

undefined8 FUN_14857ddca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857de10 FUN_14857de10 body=64 status=ok
// SIG undefined FUN_14857de10(void)

void FUN_14857de10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14857de9e FUN_14857de9e body=91 status=ok
// SIG undefined FUN_14857de9e(void)

undefined8 * FUN_14857de9e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 14857df0a FUN_14857df0a body=56 status=ok
// SIG undefined FUN_14857df0a(void)

void FUN_14857df0a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014857df37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14857df58 FUN_14857df58 body=54 status=ok
// SIG undefined FUN_14857df58(void)

undefined1 FUN_14857df58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14857e090(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14857dfbc FUN_14857dfbc body=59 status=ok
// SIG undefined FUN_14857dfbc(void)

undefined8 FUN_14857dfbc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857e002 FUN_14857e002 body=64 status=ok
// SIG undefined FUN_14857e002(void)

void FUN_14857e002(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14857e090 FUN_14857e090 body=80 status=ok
// SIG undefined FUN_14857e090(void)

undefined8 * FUN_14857e090(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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



// FUNCTION 14857e0f2 FUN_14857e0f2 body=56 status=ok
// SIG undefined FUN_14857e0f2(void)

void FUN_14857e0f2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014857e11f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14857e140 FUN_14857e140 body=54 status=ok
// SIG undefined FUN_14857e140(void)

undefined1 FUN_14857e140(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14857e278(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14857e1a4 FUN_14857e1a4 body=59 status=ok
// SIG undefined FUN_14857e1a4(void)

undefined8 FUN_14857e1a4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857e1ea FUN_14857e1ea body=64 status=ok
// SIG undefined FUN_14857e1ea(void)

void FUN_14857e1ea(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14857e278 FUN_14857e278 body=80 status=ok
// SIG undefined FUN_14857e278(void)

undefined8 * FUN_14857e278(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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



// FUNCTION 14857e300 FUN_14857e300 body=54 status=ok
// SIG undefined FUN_14857e300(void)

undefined1 FUN_14857e300(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14857e42a(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14857e374 FUN_14857e374 body=59 status=ok
// SIG undefined FUN_14857e374(void)

undefined8 FUN_14857e374(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857e3ba FUN_14857e3ba body=34 status=ok
// SIG undefined FUN_14857e3ba(void)

void FUN_14857e3ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14855fa28(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14857e42a FUN_14857e42a body=148 status=ok
// SIG undefined FUN_14857e42a(void)

undefined8 * FUN_14857e42a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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
  uVar3 = param_2[2];
  lVar4 = param_2[3];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[3];
  param_1[2] = uVar3;
  param_1[3] = lVar4;
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



// FUNCTION 14857e57e FUN_14857e57e body=39 status=ok
// SIG undefined FUN_14857e57e(void)

undefined8 FUN_14857e57e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14857e5ce FUN_14857e5ce body=59 status=ok
// SIG undefined FUN_14857e5ce(void)

undefined8 FUN_14857e5ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857e6f6 FUN_14857e6f6 body=80 status=ok
// SIG undefined FUN_14857e6f6(void)

undefined8 FUN_14857e6f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -10) = *(undefined8 *)((longlong)puVar1 + 0xe);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_1405b70a4();
      lVar6 = lVar6 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14857e76e FUN_14857e76e body=59 status=ok
// SIG undefined FUN_14857e76e(void)

undefined8 FUN_14857e76e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857e7b4 FUN_14857e7b4 body=38 status=ok
// SIG undefined FUN_14857e7b4(void)

void FUN_14857e7b4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14857e87c FUN_14857e87c body=115 status=ok
// SIG undefined FUN_14857e87c(void)

undefined8 FUN_14857e87c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined2 *)(param_2 + lVar3) = *(undefined2 *)(param_3 + lVar3);
      plVar1 = *(longlong **)(param_3 + 8 + lVar3);
      plVar2 = *(longlong **)(param_2 + 8 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + 8 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14857e918 FUN_14857e918 body=59 status=ok
// SIG undefined FUN_14857e918(void)

undefined8 FUN_14857e918(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857e95e FUN_14857e95e body=39 status=ok
// SIG undefined FUN_14857e95e(void)

void FUN_14857e95e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14857ea52 FUN_14857ea52 body=59 status=ok
// SIG undefined FUN_14857ea52(void)

undefined8 FUN_14857ea52(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857eb58 FUN_14857eb58 body=59 status=ok
// SIG undefined FUN_14857eb58(void)

undefined8 FUN_14857eb58(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857ec5e FUN_14857ec5e body=59 status=ok
// SIG undefined FUN_14857ec5e(void)

undefined8 FUN_14857ec5e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857edf4 FUN_14857edf4 body=59 status=ok
// SIG undefined FUN_14857edf4(void)

undefined8 FUN_14857edf4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857eef2 FUN_14857eef2 body=48 status=ok
// SIG undefined FUN_14857eef2(void)

void FUN_14857eef2(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14857ef38 FUN_14857ef38 body=89 status=ok
// SIG undefined FUN_14857ef38(void)

undefined1 FUN_14857ef38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined1 *)(param_2 + -0x18) = *(undefined1 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0x24);
      uVar2 = *(undefined4 *)(param_3 + -0x20);
      uVar3 = *(undefined4 *)(param_3 + -0x1c);
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x24) = uVar1;
      *(undefined4 *)(param_2 + -0x20) = uVar2;
      *(undefined4 *)(param_2 + -0x1c) = uVar3;
      FUN_1405b70a4(param_2 + -0x10,param_3 + -0x10);
      FUN_14857f056(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14857efba FUN_14857efba body=59 status=ok
// SIG undefined FUN_14857efba(void)

undefined8 FUN_14857efba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857f056 FUN_14857f056 body=88 status=ok
// SIG undefined FUN_14857f056(void)

undefined8 * FUN_14857f056(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14857f0ae(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 14857f0ae FUN_14857f0ae body=98 status=ok
// SIG undefined FUN_14857f0ae(void)

void FUN_14857f0ae(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,0x10);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14857f112 FUN_14857f112 body=52 status=ok
// SIG undefined FUN_14857f112(void)

void FUN_14857f112(longlong param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14857f226 FUN_14857f226 body=56 status=ok
// SIG undefined FUN_14857f226(void)

void FUN_14857f226(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x00014857f253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14857f274 FUN_14857f274 body=110 status=ok
// SIG undefined FUN_14857f274(void)

undefined1 FUN_14857f274(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0x13);
      uVar6 = *(undefined4 *)(param_3 + -0xf);
      uVar7 = *(undefined4 *)(param_3 + -0xb);
      *(undefined4 *)(param_2 + -0x17) = *(undefined4 *)(param_3 + -0x17);
      *(undefined4 *)(param_2 + -0x13) = uVar5;
      *(undefined4 *)(param_2 + -0xf) = uVar6;
      *(undefined4 *)(param_2 + -0xb) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_14857c950(param_2,param_3);
      uVar9 = *(undefined8 *)(param_3 + 0x18);
      uVar10 = *(undefined8 *)(param_3 + 0x20);
      uVar11 = *(undefined8 *)(param_3 + 0x28);
      uVar1 = *(undefined4 *)(param_3 + 0x30);
      uVar2 = *(undefined4 *)(param_3 + 0x34);
      uVar3 = *(undefined4 *)(param_3 + 0x38);
      uVar4 = *(undefined4 *)(param_3 + 0x3c);
      uVar5 = *(undefined4 *)(param_3 + 0x40);
      uVar6 = *(undefined4 *)(param_3 + 0x44);
      uVar7 = *(undefined4 *)(param_3 + 0x48);
      uVar8 = *(undefined4 *)(param_3 + 0x4c);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar9;
      *(undefined8 *)(param_2 + 0x20) = uVar10;
      *(undefined8 *)(param_2 + 0x28) = uVar11;
      *(undefined4 *)(param_2 + 0x30) = uVar1;
      *(undefined4 *)(param_2 + 0x34) = uVar2;
      *(undefined4 *)(param_2 + 0x38) = uVar3;
      *(undefined4 *)(param_2 + 0x3c) = uVar4;
      *(undefined4 *)(param_2 + 0x40) = uVar5;
      *(undefined4 *)(param_2 + 0x44) = uVar6;
      *(undefined4 *)(param_2 + 0x48) = uVar7;
      *(undefined4 *)(param_2 + 0x4c) = uVar8;
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14857f30a FUN_14857f30a body=59 status=ok
// SIG undefined FUN_14857f30a(void)

undefined8 FUN_14857f30a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857f350 FUN_14857f350 body=64 status=ok
// SIG undefined FUN_14857f350(void)

void FUN_14857f350(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x70) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x28);
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
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14857f462 FUN_14857f462 body=59 status=ok
// SIG undefined FUN_14857f462(void)

undefined8 FUN_14857f462(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857f592 FUN_14857f592 body=59 status=ok
// SIG undefined FUN_14857f592(void)

undefined8 FUN_14857f592(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857f69e FUN_14857f69e body=59 status=ok
// SIG undefined FUN_14857f69e(void)

undefined8 FUN_14857f69e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857f740 FUN_14857f740 body=410 status=ok
// SIG undefined FUN_14857f740(void)

void FUN_14857f740(double *param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar5 = *(uint *)((longlong *)param_2[1] + 1);
  dVar16 = 0.0;
  dVar15 = 0.0;
  if (2 < (longlong)(int)uVar5) {
    uVar13 = 0;
    do {
      if (uVar13 < (ulonglong)(longlong)(int)uVar5) {
        lVar14 = *(longlong *)param_2[1];
        lVar12 = (longlong)*(int *)(lVar14 + uVar13 * 4);
        lVar6 = *(longlong *)*param_2;
        dVar1 = *(double *)(lVar6 + lVar12 * 0x18);
        dVar17 = *(double *)(lVar6 + 8 + lVar12 * 0x18);
        dVar2 = *(double *)(lVar6 + 0x10 + lVar12 * 0x18);
        lVar12 = (longlong)*(int *)(lVar14 + 4 + uVar13 * 4);
        dVar3 = *(double *)(lVar6 + lVar12 * 0x18);
        lVar14 = (longlong)*(int *)(lVar14 + 8 + uVar13 * 4);
        dVar4 = *(double *)(lVar6 + lVar14 * 0x18);
        dVar10 = *(double *)(lVar6 + 0x10 + lVar12 * 0x18) - dVar2;
        dVar9 = *(double *)(lVar6 + 8 + lVar12 * 0x18) - dVar17;
        dVar11 = dVar3 - dVar1;
        dVar2 = *(double *)(lVar6 + 0x10 + lVar14 * 0x18) - dVar2;
        dVar17 = *(double *)(lVar6 + 8 + lVar14 * 0x18) - dVar17;
        dVar7 = dVar4 - dVar1;
        dVar8 = dVar7 * dVar9 - dVar11 * dVar17;
        dVar7 = dVar2 * dVar11 - dVar10 * dVar7;
        dVar17 = dVar17 * dVar10 - dVar2 * dVar9;
        dVar16 = dVar16 + SQRT(dVar8 * dVar8 + dVar17 * dVar17 + dVar7 * dVar7);
        dVar15 = dVar15 + (dVar1 + dVar3 + dVar4) * dVar17;
      }
      uVar13 = uVar13 + 3;
    } while (((ulonglong)uVar5 / 3) * 3 != uVar13);
    dVar16 = dVar16 * 0.5;
    dVar15 = dVar15 * 0.16666666666666666;
  }
  *param_1 = dVar15;
  param_1[1] = dVar16;
  return;
}



// FUNCTION 14857f8da FUN_14857f8da body=132 status=ok
// SIG undefined FUN_14857f8da(void)

void FUN_14857f8da(longlong param_1,int param_2)

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



// FUNCTION 14857f9e6 FUN_14857f9e6 body=59 status=ok
// SIG undefined FUN_14857f9e6(void)

undefined8 FUN_14857f9e6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857fb3c FUN_14857fb3c body=59 status=ok
// SIG undefined FUN_14857fb3c(void)

undefined8 FUN_14857fb3c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857fcb8 FUN_14857fcb8 body=59 status=ok
// SIG undefined FUN_14857fcb8(void)

undefined8 FUN_14857fcb8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857fd6a FUN_14857fd6a body=56 status=ok
// SIG undefined FUN_14857fd6a(void)

void FUN_14857fd6a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014857fd97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14857fdb8 FUN_14857fdb8 body=54 status=ok
// SIG undefined FUN_14857fdb8(void)

undefined1 FUN_14857fdb8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14857fef0(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14857fe1c FUN_14857fe1c body=59 status=ok
// SIG undefined FUN_14857fe1c(void)

undefined8 FUN_14857fe1c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14857fe62 FUN_14857fe62 body=64 status=ok
// SIG undefined FUN_14857fe62(void)

void FUN_14857fe62(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14857fef0 FUN_14857fef0 body=80 status=ok
// SIG undefined FUN_14857fef0(void)

undefined8 * FUN_14857fef0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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



// FUNCTION 14857ff42 FUN_14857ff42 body=14 status=ok
// SIG undefined FUN_14857ff42(void)

void FUN_14857ff42(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
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



// FUNCTION 14857ff50 FUN_14857ff50 body=29 status=ok
// SIG undefined FUN_14857ff50(void)

undefined8 FUN_14857ff50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14857ff6e FUN_14857ff6e body=14 status=ok
// SIG undefined FUN_14857ff6e(void)

void FUN_14857ff6e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
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



// FUNCTION 14857ff7c FUN_14857ff7c body=29 status=ok
// SIG undefined FUN_14857ff7c(void)

undefined8 FUN_14857ff7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14857ff9a FUN_14857ff9a body=14 status=ok
// SIG undefined FUN_14857ff9a(void)

void FUN_14857ff9a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
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



// FUNCTION 14857ffa8 FUN_14857ffa8 body=29 status=ok
// SIG undefined FUN_14857ffa8(void)

undefined8 FUN_14857ffa8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14857ffc6 FUN_14857ffc6 body=14 status=ok
// SIG undefined FUN_14857ffc6(void)

void FUN_14857ffc6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
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



// FUNCTION 14857ffd4 FUN_14857ffd4 body=29 status=ok
// SIG undefined FUN_14857ffd4(void)

undefined8 FUN_14857ffd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14857fff2 FUN_14857fff2 body=14 status=ok
// SIG undefined FUN_14857fff2(void)

void FUN_14857fff2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
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



// FUNCTION 148580000 FUN_148580000 body=29 status=ok
// SIG undefined FUN_148580000(void)

undefined8 FUN_148580000(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14858008a FUN_14858008a body=59 status=ok
// SIG undefined FUN_14858008a(void)

undefined8 FUN_14858008a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485801ac FUN_1485801ac body=59 status=ok
// SIG undefined FUN_1485801ac(void)

undefined8 FUN_1485801ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858029e FUN_14858029e body=198 status=ok
// SIG undefined FUN_14858029e(void)

undefined8 FUN_14858029e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
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
  undefined4 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  
  if (param_4 != 0) {
    lVar15 = 0;
    do {
      uVar3 = *(undefined4 *)(param_3 + lVar15);
      *(undefined4 *)(param_2 + lVar15 + 3) = *(undefined4 *)(param_3 + lVar15 + 3);
      *(undefined4 *)(param_2 + lVar15) = uVar3;
      FUN_140c99494();
      lVar1 = param_2 + lVar15;
      lVar2 = param_3 + lVar15;
      FUN_1406fa324(lVar1 + 0x18,lVar2 + 0x18);
      uVar14 = *(undefined8 *)(lVar2 + 0x30);
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar1 + 0x30) = uVar14;
      uVar3 = *(undefined4 *)(lVar2 + 0x38);
      uVar4 = *(undefined4 *)(lVar2 + 0x3c);
      uVar5 = *(undefined4 *)(lVar2 + 0x40);
      uVar6 = *(undefined4 *)(lVar2 + 0x44);
      uVar7 = *(undefined4 *)(lVar2 + 0x48);
      uVar8 = *(undefined4 *)(lVar2 + 0x4c);
      uVar9 = *(undefined4 *)(lVar2 + 0x50);
      uVar10 = *(undefined4 *)(lVar2 + 0x54);
      uVar11 = *(undefined4 *)(lVar2 + 0x5c);
      uVar12 = *(undefined4 *)(lVar2 + 0x60);
      uVar13 = *(undefined4 *)(lVar2 + 100);
      *(undefined4 *)(lVar1 + 0x58) = *(undefined4 *)(lVar2 + 0x58);
      *(undefined4 *)(lVar1 + 0x5c) = uVar11;
      *(undefined4 *)(lVar1 + 0x60) = uVar12;
      *(undefined4 *)(lVar1 + 100) = uVar13;
      *(undefined4 *)(lVar1 + 0x48) = uVar7;
      *(undefined4 *)(lVar1 + 0x4c) = uVar8;
      *(undefined4 *)(lVar1 + 0x50) = uVar9;
      *(undefined4 *)(lVar1 + 0x54) = uVar10;
      *(undefined4 *)(lVar1 + 0x38) = uVar3;
      *(undefined4 *)(lVar1 + 0x3c) = uVar4;
      *(undefined4 *)(lVar1 + 0x40) = uVar5;
      *(undefined4 *)(lVar1 + 0x44) = uVar6;
      lVar1 = param_2 + 0x68 + lVar15;
      FUN_140820a14(lVar1,param_3 + lVar15 + 0x68);
      *(undefined2 *)(lVar1 + 0x10) = *(undefined2 *)(param_3 + lVar15 + 0x78);
      lVar15 = lVar15 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14858038c FUN_14858038c body=59 status=ok
// SIG undefined FUN_14858038c(void)

undefined8 FUN_14858038c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485803d8 FUN_1485803d8 body=40 status=ok
// SIG undefined FUN_1485803d8(void)

void FUN_1485803d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_14856faca(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 1485804ca FUN_1485804ca body=59 status=ok
// SIG undefined FUN_1485804ca(void)

undefined8 FUN_1485804ca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485805e6 FUN_1485805e6 body=59 status=ok
// SIG undefined FUN_1485805e6(void)

undefined8 FUN_1485805e6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148580688 FUN_148580688 body=93 status=ok
// SIG undefined FUN_148580688(void)

longlong FUN_148580688(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1485806e6(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 1485806e6 FUN_1485806e6 body=146 status=ok
// SIG undefined FUN_1485806e6(void)

longlong * FUN_1485806e6(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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



// FUNCTION 148580778 FUN_148580778 body=52 status=ok
// SIG undefined FUN_148580778(void)

void FUN_148580778(longlong *param_1)

{
  FUN_1485807ac();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1485807ac FUN_1485807ac body=89 status=ok
// SIG undefined FUN_1485807ac(void)

void FUN_1485807ac(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 148580806 FUN_148580806 body=109 status=ok
// SIG undefined FUN_148580806(void)

undefined4 * FUN_148580806(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
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
  undefined4 uVar13;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = param_2[9];
  uVar12 = param_2[10];
  uVar13 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar11;
  param_1[10] = uVar12;
  param_1[0xb] = uVar13;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = param_2[0xe];
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if (iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_147869ad8(param_1 + 0xc,iVar1,0);
    FUN_147869b3a(*(undefined8 *)(param_1 + 0xc),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148580890 FUN_148580890 body=56 status=ok
// SIG undefined FUN_148580890(void)

void FUN_148580890(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001485808bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485808de FUN_1485808de body=54 status=ok
// SIG undefined FUN_1485808de(void)

undefined1 FUN_1485808de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148580a10(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 14858093c FUN_14858093c body=59 status=ok
// SIG undefined FUN_14858093c(void)

undefined8 FUN_14858093c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148580982 FUN_148580982 body=64 status=ok
// SIG undefined FUN_148580982(void)

void FUN_148580982(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x10);
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
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148580a10 FUN_148580a10 body=86 status=ok
// SIG undefined FUN_148580a10(void)

undefined1 * FUN_148580a10(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
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



// FUNCTION 148580aba FUN_148580aba body=137 status=ok
// SIG undefined FUN_148580aba(void)

undefined1 FUN_148580aba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined1 *)(param_2 + 2 + lVar4) = *(undefined1 *)(param_3 + 2 + lVar4);
      *(undefined2 *)(param_2 + lVar4) = *(undefined2 *)(param_3 + lVar4);
      lVar3 = *(longlong *)(param_3 + 8 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + 8 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar4;
      *(longlong *)(lVar1 + 8) = lVar3;
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_3 + 0x10 + lVar4);
      *(undefined1 *)(lVar1 + 0x18) = *(undefined1 *)(param_3 + 0x18 + lVar4);
      lVar4 = lVar4 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148580b6c FUN_148580b6c body=59 status=ok
// SIG undefined FUN_148580b6c(void)

undefined8 FUN_148580b6c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148580c9a FUN_148580c9a body=59 status=ok
// SIG undefined FUN_148580c9a(void)

undefined8 FUN_148580c9a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148580daa FUN_148580daa body=63 status=ok
// SIG undefined FUN_148580daa(void)

undefined1 FUN_148580daa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148580ed4(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 148580e12 FUN_148580e12 body=59 status=ok
// SIG undefined FUN_148580e12(void)

undefined8 FUN_148580e12(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148580e5e FUN_148580e5e body=40 status=ok
// SIG undefined FUN_148580e5e(void)

void FUN_148580e5e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_148573142(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148580ed4 FUN_148580ed4 body=94 status=ok
// SIG undefined FUN_148580ed4(void)

undefined1 * FUN_148580ed4(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FUN_148580a10(param_1 + 8,param_2 + 8);
  FUN_148580a10(param_1 + 0x20,param_2 + 0x20);
  FUN_148580a10(param_1 + 0x38,param_2 + 0x38);
  FUN_148580a10(param_1 + 0x50,param_2 + 0x50);
  FUN_148580a10(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 148580fa0 FUN_148580fa0 body=59 status=ok
// SIG undefined FUN_148580fa0(void)

undefined8 FUN_148580fa0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148581076 FUN_148581076 body=109 status=ok
// SIG undefined FUN_148581076(void)

undefined1 FUN_148581076(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(param_3 + 8 + lVar4);
      *(undefined1 *)((longlong)plVar1 + 0xc) = *(undefined1 *)(param_3 + 0xc + lVar4);
      lVar4 = lVar4 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14858110c FUN_14858110c body=59 status=ok
// SIG undefined FUN_14858110c(void)

undefined8 FUN_14858110c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148581268 FUN_148581268 body=92 status=ok
// SIG undefined FUN_148581268(void)

undefined1 FUN_148581268(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1485813a6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    uVar4 = *(undefined4 *)(param_3 + 0x20);
    uVar5 = *(undefined4 *)(param_3 + 0x24);
    uVar6 = *(undefined4 *)(param_3 + 0x28);
    uVar7 = *(undefined4 *)(param_3 + 0x2c);
    uVar8 = *(undefined4 *)(param_3 + 0x29);
    uVar9 = *(undefined4 *)(param_3 + 0x2d);
    uVar10 = *(undefined4 *)(param_3 + 0x31);
    uVar11 = *(undefined4 *)(param_3 + 0x35);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined4 *)(param_2 + 0x20) = uVar4;
    *(undefined4 *)(param_2 + 0x24) = uVar5;
    *(undefined4 *)(param_2 + 0x28) = uVar6;
    *(undefined4 *)(param_2 + 0x2c) = uVar7;
    *(undefined4 *)(param_2 + 0x29) = uVar8;
    *(undefined4 *)(param_2 + 0x2d) = uVar9;
    *(undefined4 *)(param_2 + 0x31) = uVar10;
    *(undefined4 *)(param_2 + 0x35) = uVar11;
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1485812ec FUN_1485812ec body=59 status=ok
// SIG undefined FUN_1485812ec(void)

undefined8 FUN_1485812ec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148581332 FUN_148581332 body=37 status=ok
// SIG undefined FUN_148581332(void)

void FUN_148581332(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[8] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1485813a6 FUN_1485813a6 body=89 status=ok
// SIG undefined FUN_1485813a6(void)

undefined8 * FUN_1485813a6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148581400(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x48);
      }
    }
  }
  return param_1;
}



// FUNCTION 148581400 FUN_148581400 body=115 status=ok
// SIG undefined FUN_148581400(void)

void FUN_148581400(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1485814e4 FUN_1485814e4 body=63 status=ok
// SIG undefined FUN_1485814e4(void)

undefined1 FUN_1485814e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1485815f8(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 14858154c FUN_14858154c body=59 status=ok
// SIG undefined FUN_14858154c(void)

undefined8 FUN_14858154c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485815f8 FUN_1485815f8 body=475 status=ok
// SIG undefined FUN_1485815f8(void)

longlong * FUN_1485815f8(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  *(char *)(param_1 + 1) = (char)param_2[1];
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[2] = lVar2;
  *(char *)(param_1 + 3) = (char)param_2[3];
  lVar2 = param_2[4];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[4];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[4] = lVar2;
  *(char *)(param_1 + 5) = (char)param_2[5];
  lVar2 = param_2[6];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[6];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[6] = lVar2;
  *(char *)(param_1 + 7) = (char)param_2[7];
  lVar2 = param_2[8];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[8];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[8] = lVar2;
  *(char *)(param_1 + 9) = (char)param_2[9];
  lVar2 = param_2[10];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[10];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[10] = lVar2;
  *(char *)(param_1 + 0xb) = (char)param_2[0xb];
  lVar2 = param_2[0xc];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xc];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[0xc] = lVar2;
  *(char *)(param_1 + 0xd) = (char)param_2[0xd];
  lVar2 = param_2[0xe];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xe];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[0xe] = lVar2;
  *(char *)(param_1 + 0xf) = (char)param_2[0xf];
  lVar2 = param_2[0x10];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0x10];
    }
  }
  param_1[0x10] = lVar2;
  *(char *)(param_1 + 0x11) = (char)param_2[0x11];
  return param_1;
}



// FUNCTION 1485817d4 FUN_1485817d4 body=29 status=ok
// SIG undefined FUN_1485817d4(void)

undefined8 FUN_1485817d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14858185e FUN_14858185e body=63 status=ok
// SIG undefined FUN_14858185e(void)

undefined1 FUN_14858185e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148581988(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 1485818c6 FUN_1485818c6 body=59 status=ok
// SIG undefined FUN_1485818c6(void)

undefined8 FUN_1485818c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148581912 FUN_148581912 body=40 status=ok
// SIG undefined FUN_148581912(void)

void FUN_148581912(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_1485792ac(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148581988 FUN_148581988 body=206 status=ok
// SIG undefined FUN_148581988(void)

longlong FUN_148581988(longlong param_1,longlong param_2)

{
  FUN_1405b70a4();
  FUN_1405b70a4(param_1 + 0x10,param_2 + 0x10);
  FUN_144721cf4(param_1 + 0x20,param_2 + 0x20);
  FUN_144721cf4(param_1 + 0x30,param_2 + 0x30);
  FUN_144721cf4(param_1 + 0x40,param_2 + 0x40);
  FUN_144721cf4(param_1 + 0x50,param_2 + 0x50);
  FUN_144721cf4(param_1 + 0x60,param_2 + 0x60);
  FUN_144721cf4(param_1 + 0x70,param_2 + 0x70);
  FUN_144721cf4(param_1 + 0x80,param_2 + 0x80);
  FUN_144721cf4(param_1 + 0x90,param_2 + 0x90);
  FUN_14479f9aa(param_1 + 0xa0,param_2 + 0xa0);
  FUN_146ee0fe4(param_1 + 0xb0,param_2 + 0xb0);
  FUN_14054c6c4(param_1 + 0xc0,param_2 + 0xc0);
  return param_1;
}



// FUNCTION 148581abc FUN_148581abc body=59 status=ok
// SIG undefined FUN_148581abc(void)

undefined8 FUN_148581abc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148581b5e FUN_148581b5e body=147 status=ok
// SIG undefined FUN_148581b5e(void)

void FUN_148581b5e(longlong param_1,int param_2)

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



// FUNCTION 148581bf2 FUN_148581bf2 body=38 status=ok
// SIG undefined FUN_148581bf2(void)

void FUN_148581bf2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400d7d10(param_1);
    param_1 = param_1 + 0x80;
  }
  return;
}



// FUNCTION 148581c18 FUN_148581c18 body=62 status=ok
// SIG undefined FUN_148581c18(void)

void FUN_148581c18(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148581c56(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 148581c56 FUN_148581c56 body=93 status=ok
// SIG undefined FUN_148581c56(void)

ulonglong FUN_148581c56(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148581cb4 FUN_148581cb4 body=143 status=ok
// SIG undefined FUN_148581cb4(void)

void FUN_148581cb4(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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



// FUNCTION 148581d44 FUN_148581d44 body=235 status=ok
// SIG undefined FUN_148581d44(void)

void FUN_148581d44(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_2[2] - param_1[2];
  local_28 = param_2[1] - param_1[1];
  local_30 = *param_2 - *param_1;
  FUN_146bf2028(param_1 + 3,&local_48);
  dVar4 = ABS(local_38) - param_1[9];
  dVar3 = ABS(local_40) - param_1[8];
  dVar2 = ABS(local_48) - param_1[7];
  dVar1 = dVar2;
  if (dVar2 <= dVar3) {
    dVar1 = dVar3;
  }
  if (dVar1 <= dVar4) {
    dVar1 = dVar4;
  }
  if (0.0 <= dVar1) {
    dVar1 = 0.0;
    if (0.0 <= dVar4) {
      dVar1 = dVar4;
    }
    dVar4 = 0.0;
    if (0.0 <= dVar3) {
      dVar4 = dVar3;
    }
    dVar3 = 0.0;
    if (0.0 <= dVar2) {
      dVar3 = dVar2;
    }
    dVar1 = SQRT(dVar1 * dVar1 + dVar3 * dVar3 + dVar4 * dVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar1);
}



// FUNCTION 148581e30 FUN_148581e30 body=106 status=ok
// SIG undefined FUN_148581e30(void)

void FUN_148581e30(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x100 + lVar1);
  FUN_1400d7e72(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x100),(longlong)iVar3 << 8);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148581ebc FUN_148581ebc body=29 status=ok
// SIG undefined FUN_148581ebc(void)

undefined8 FUN_148581ebc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148581eda FUN_148581eda body=31 status=ok
// SIG undefined FUN_148581eda(void)

undefined8 FUN_148581eda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148581f16 FUN_148581f16 body=93 status=ok
// SIG undefined FUN_148581f16(void)

void FUN_148581f16(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14af3de20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148581f74 FUN_148581f74 body=125 status=ok
// SIG undefined FUN_148581f74(void)

void FUN_148581f74(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14af3de20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148581fe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148581ff2 FUN_148581ff2 body=21 status=ok
// SIG undefined FUN_148581ff2(void)

undefined8 FUN_148581ff2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148582008 FUN_148582008 body=46 status=ok
// SIG undefined FUN_148582008(void)

void FUN_148582008(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(param_1 + 0x18);
  return;
}



// FUNCTION 148582036 FUN_148582036 body=29 status=ok
// SIG undefined FUN_148582036(void)

undefined8 FUN_148582036(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148582054 FUN_148582054 body=48 status=ok
// SIG undefined FUN_148582054(void)

void FUN_148582054(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148582084 FUN_148582084 body=29 status=ok
// SIG undefined FUN_148582084(void)

undefined8 FUN_148582084(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485820a2 FUN_1485820a2 body=46 status=ok
// SIG undefined FUN_1485820a2(void)

void FUN_1485820a2(longlong param_1)

{
  FUN_148273bb4(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1485820d0 FUN_1485820d0 body=29 status=ok
// SIG undefined FUN_1485820d0(void)

undefined8 FUN_1485820d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485820ee FUN_1485820ee body=403 status=ok
// SIG undefined FUN_1485820ee(void)

void FUN_1485820ee(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x18 + -0x14);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(plVar7,0,uVar12,4);
        *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      if (uVar8 < 0x101) {
        uVar12 = uVar12 + (uVar12 == 0);
      }
      memset(_Dst,0,(ulonglong)(uVar12 << 2));
      iVar1 = (int)param_1[5];
      iVar10 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 148582282 FUN_148582282 body=455 status=ok
// SIG undefined FUN_148582282(void)

void FUN_148582282(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *local_90;
        lVar10 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar10 * 0x18);
        iVar6 = FUN_144a788f7();
        uVar7 = (longlong)(iVar6 + (int)((ulonglong)uVar4 >> 0x20)) & (longlong)(int)param_1[9] - 1U
        ;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x14 + lVar10 * 0x18) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14858244a FUN_14858244a body=306 status=ok
// SIG undefined FUN_14858244a(void)

undefined4 * FUN_14858244a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14858257e(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  iVar5 = FUN_144a788f7();
  uVar9 = iVar5 + (int)((ulonglong)uVar2 >> 0x20);
  cVar4 = FUN_148582664(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_148582282(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14858257e FUN_14858257e body=230 status=ok
// SIG undefined FUN_14858257e(void)

int * FUN_14858257e(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 148582664 FUN_148582664 body=128 status=ok
// SIG undefined FUN_148582664(void)

undefined8 FUN_148582664(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1485826e4((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1485826e4 FUN_1485826e4 body=114 status=ok
// SIG undefined FUN_1485826e4(void)

void FUN_1485826e4(longlong *param_1,int param_2)

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



// FUNCTION 148582756 FUN_148582756 body=73 status=ok
// SIG undefined FUN_148582756(void)

void FUN_148582756(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1485827a0 FUN_1485827a0 body=9 status=ok
// SIG undefined FUN_1485827a0(void)

void FUN_1485827a0(longlong param_1)

{
  FUN_146c3c4a6(param_1 + 0x10);
  return;
}



// FUNCTION 1485827aa FUN_1485827aa body=29 status=ok
// SIG undefined FUN_1485827aa(void)

undefined8 FUN_1485827aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485827c8 FUN_1485827c8 body=14 status=ok
// SIG undefined FUN_1485827c8(void)

void FUN_1485827c8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
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



// FUNCTION 1485827d6 FUN_1485827d6 body=29 status=ok
// SIG undefined FUN_1485827d6(void)

undefined8 FUN_1485827d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485827f4 FUN_1485827f4 body=57 status=ok
// SIG undefined FUN_1485827f4(void)

void FUN_1485827f4(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14af3df90;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_14858289c(param_1 + 0x20);
  return;
}



// FUNCTION 14858282e FUN_14858282e body=29 status=ok
// SIG undefined FUN_14858282e(void)

undefined8 FUN_14858282e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14858284c FUN_14858284c body=73 status=ok
// SIG undefined FUN_14858284c(void)

undefined8 * FUN_14858284c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14af3df90;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14858289c(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14858289c FUN_14858289c body=54 status=ok
// SIG undefined FUN_14858289c(void)

void FUN_14858289c(longlong *param_1)

{
  FUN_1485828d2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1485828d2 FUN_1485828d2 body=128 status=ok
// SIG undefined FUN_1485828d2(void)

void FUN_1485828d2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 148582953 FUN_148582953 body=212 status=ok
// SIG undefined FUN_148582953(void)

undefined8 * FUN_148582953(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xc0);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14af3dfb0;
  memset(puVar1 + 3,0,0xa8);
  puVar1[2] = &PTR_FUN_14af3dfd0;
  *(undefined4 *)(puVar1 + 3) = 2;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0x10] = 0x7fefffffffffffff;
  puVar1[0x11] = 0x7fefffffffffffff;
  puVar1[0x12] = 0x7fefffffffffffff;
  puVar1[0x13] = 0xffefffffffffffff;
  puVar1[0x14] = 0xffefffffffffffff;
  puVar1[0x15] = 0xffefffffffffffff;
  puVar1[0x16] = DAT_14c846330;
  *(undefined4 *)(puVar1 + 0x17) = DAT_14c846338;
  return puVar1;
}



// FUNCTION 148582a28 FUN_148582a28 body=57 status=ok
// SIG undefined FUN_148582a28(void)

void FUN_148582a28(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14af3dfd0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_14858289c(param_1 + 0x28);
  return;
}



// FUNCTION 148582a62 FUN_148582a62 body=29 status=ok
// SIG undefined FUN_148582a62(void)

undefined8 FUN_148582a62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148582a80 FUN_148582a80 body=73 status=ok
// SIG undefined FUN_148582a80(void)

undefined8 * FUN_148582a80(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14af3dfd0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14858289c(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148582ad0 FUN_148582ad0 body=25 status=ok
// SIG undefined FUN_148582ad0(void)

void FUN_148582ad0(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14af3e010;
  lVar1 = *(longlong *)(param_1 + 0x60);
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



// FUNCTION 148582aea FUN_148582aea body=29 status=ok
// SIG undefined FUN_148582aea(void)

undefined8 FUN_148582aea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148582b08 FUN_148582b08 body=57 status=ok
// SIG undefined FUN_148582b08(void)

undefined8 * FUN_148582b08(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14af3e010;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148582b48 FUN_148582b48 body=67 status=ok
// SIG undefined FUN_148582b48(void)

void FUN_148582b48(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14af3e050;
  plVar3 = *(longlong **)(param_1 + 0x50);
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
                    /* WARNING: Could not recover jumptable at 0x000148582b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148582b8c FUN_148582b8c body=29 status=ok
// SIG undefined FUN_148582b8c(void)

undefined8 FUN_148582b8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


