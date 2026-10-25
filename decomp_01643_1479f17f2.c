// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1479f17f2 FUN_1479f17f2 body=220 status=ok
// SIG undefined FUN_1479f17f2(void)

void FUN_1479f17f2(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1479fd208(param_1,&local_30);
  if (local_30 != 0) {
    local_48 = *param_3;
    local_40 = param_3[1];
    local_38 = param_3[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1479fd314(local_30,param_2,&local_48);
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
  puVar3 = (undefined8 *)param_3[2];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar2 = (int *)((longlong)puVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f18e0 FUN_1479f18e0 body=220 status=ok
// SIG undefined FUN_1479f18e0(void)

void FUN_1479f18e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1479fd414(param_1,&local_30);
  if (local_30 != 0) {
    local_48 = *param_3;
    local_40 = param_3[1];
    local_38 = param_3[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1479fd520(local_30,param_2,&local_48);
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
  puVar3 = (undefined8 *)param_3[2];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar2 = (int *)((longlong)puVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f19ce FUN_1479f19ce body=364 status=ok
// SIG undefined FUN_1479f19ce(void)

void FUN_1479f19ce(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_1 + 0xa8);
  if ((((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) &&
      (-1 < *(int *)(*(longlong *)(lVar5 + 0x10) + 0xd4))) && ((*(byte *)(lVar5 + 0x348) & 2) == 0))
  {
    local_30 = *param_2;
    local_28 = param_2[1];
    local_20 = param_2[2];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_1478b7edc(lVar5,&local_30);
    lVar5 = *(longlong *)(param_1 + 0xa8);
    if (((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) &&
       ((-1 < *(int *)(*(longlong *)(lVar5 + 0x10) + 0xd4) && ((*(byte *)(lVar5 + 0x348) & 2) == 0))
       )) {
      lVar3 = lVar5 + 0x208;
      local_48 = *param_2;
      local_40 = param_2[1];
      local_38 = param_2[2];
      if (local_38 != 0) {
        LOCK();
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
        UNLOCK();
        lVar5 = *(longlong *)(param_1 + 0xa8);
      }
      FUN_1479f1b3c(lVar3,lVar5,&local_48);
    }
  }
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    local_60 = *param_2;
    local_58 = param_2[1];
    local_50 = param_2[2];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    FUN_1479f1c2a(param_1 + 0x5a2,param_1,&local_60);
  }
  plVar4 = (longlong *)param_2[2];
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f1b3c FUN_1479f1b3c body=220 status=ok
// SIG undefined FUN_1479f1b3c(void)

void FUN_1479f1b3c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1479fd620(param_1,&local_30);
  if (local_30 != 0) {
    local_48 = *param_3;
    local_40 = param_3[1];
    local_38 = param_3[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1479fd72c(local_30,param_2,&local_48);
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
  puVar3 = (undefined8 *)param_3[2];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar2 = (int *)((longlong)puVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f1c2a FUN_1479f1c2a body=220 status=ok
// SIG undefined FUN_1479f1c2a(void)

void FUN_1479f1c2a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1479fd82c(param_1,&local_30);
  if (local_30 != 0) {
    local_48 = *param_3;
    local_40 = param_3[1];
    local_38 = param_3[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1479fd938(local_30,param_2,&local_48);
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
  puVar3 = (undefined8 *)param_3[2];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar2 = (int *)((longlong)puVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f1d18 FUN_1479f1d18 body=166 status=ok
// SIG undefined FUN_1479f1d18(void)

void FUN_1479f1d18(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if ((((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
      (-1 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0xd4))) && ((*(byte *)(lVar1 + 0x348) & 2) == 0))
  {
    FUN_1478b808c(lVar1,param_2);
    lVar1 = *(longlong *)(param_1 + 0xa8);
    if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
       ((-1 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0xd4) && ((*(byte *)(lVar1 + 0x348) & 2) == 0))
       )) {
      FUN_1479f1dbe(lVar1 + 0x209,param_2);
    }
  }
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    FUN_1479f1e56(param_1 + 0x5a3,param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 1479f1dbe FUN_1479f1dbe body=134 status=ok
// SIG undefined FUN_1479f1dbe(void)

void FUN_1479f1dbe(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1479fda38(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1478ba8fe(local_30,param_2,param_3);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f1e56 FUN_1479f1e56 body=134 status=ok
// SIG undefined FUN_1479f1e56(void)

void FUN_1479f1e56(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1479fdbbc(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1478905fe(local_30,param_2,param_3);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f1eee FUN_1479f1eee body=166 status=ok
// SIG undefined FUN_1479f1eee(void)

void FUN_1479f1eee(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if ((((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
      (-1 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0xd4))) && ((*(byte *)(lVar1 + 0x348) & 2) == 0))
  {
    FUN_1478b80e8(lVar1,param_2);
    lVar1 = *(longlong *)(param_1 + 0xa8);
    if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
       ((-1 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0xd4) && ((*(byte *)(lVar1 + 0x348) & 2) == 0))
       )) {
      FUN_1479f1f94(lVar1 + 0x20a,param_2);
    }
  }
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    FUN_1479f202c(param_1 + 0x5a4,param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 1479f1f94 FUN_1479f1f94 body=134 status=ok
// SIG undefined FUN_1479f1f94(void)

void FUN_1479f1f94(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1479fdd40(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1478ba940(local_30,param_2,param_3);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f202c FUN_1479f202c body=134 status=ok
// SIG undefined FUN_1479f202c(void)

void FUN_1479f202c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1479fdec4(param_1,&local_30);
  if (local_30 != 0) {
    FUN_147890640(local_30,param_2,param_3);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f20c4 FUN_1479f20c4 body=87 status=ok
// SIG undefined FUN_1479f20c4(void)

void FUN_1479f20c4(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  switchD_143c3d4dc::caseD_38();
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FUN_147c48a58(param_1 + 0x410,param_2);
  }
  if (*(longlong **)(param_1 + 0x5a8) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x5a8) + 0x170))();
    FUN_14484255c(param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1479f211c FUN_1479f211c body=20 status=ok
// SIG undefined FUN_1479f211c(void)

void FUN_1479f211c(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x332) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x332) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479f2130 FUN_1479f2130 body=36 status=ok
// SIG undefined FUN_1479f2130(void)

void FUN_1479f2130(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x2d4) & 0x10) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2d4) = *(byte *)(param_1 + 0x2d4) & 0xef | param_2 << 4;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479f2154 FUN_1479f2154 body=36 status=ok
// SIG undefined FUN_1479f2154(void)

void FUN_1479f2154(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x2d4) & 0x20) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2d4) = *(byte *)(param_1 + 0x2d4) & 0xdf | param_2 << 5;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479f2178 FUN_1479f2178 body=36 status=ok
// SIG undefined FUN_1479f2178(void)

void FUN_1479f2178(longlong param_1,char param_2)

{
  if (-1 < (char)*(byte *)(param_1 + 0x2de) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2de) = *(byte *)(param_1 + 0x2de) & 0x7f | param_2 << 7;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479f219c FUN_1479f219c body=34 status=ok
// SIG undefined FUN_1479f219c(void)

void FUN_1479f219c(longlong param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x2df) & 1) != param_2) {
    *(byte *)(param_1 + 0x2df) = *(byte *)(param_1 + 0x2df) & 0xfe | param_2;
    FUN_1448215fa();
    return;
  }
  return;
}



// FUNCTION 1479f21be FUN_1479f21be body=20 status=ok
// SIG undefined FUN_1479f21be(void)

void FUN_1479f21be(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x2e0) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x2e0) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1479f21d2 FUN_1479f21d2 body=82 status=ok
// SIG undefined FUN_1479f21d2(void)

bool FUN_1479f21d2(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if ((*(byte *)(param_1 + 0x2d2) & 1) == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if ((lVar1 == 0) && (lVar1 = FUN_1448abda6(), lVar1 == 0)) {
      return true;
    }
    bVar2 = true;
    if ((*(longlong *)(lVar1 + 0x30) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b0), lVar1 != 0)) {
      bVar2 = *(longlong *)(lVar1 + 0x3f0) == 0;
    }
  }
  return bVar2;
}



// FUNCTION 1479f2224 FUN_1479f2224 body=24 status=ok
// SIG undefined FUN_1479f2224(void)

bool FUN_1479f2224(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7a0))();
  return lVar1 != 0;
}



// FUNCTION 1479f223c FUN_1479f223c body=70 status=ok
// SIG undefined FUN_1479f223c(void)

void FUN_1479f223c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  
  *(undefined1 *)(param_1 + 0x333) = 0;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    bVar4 = 0;
    do {
      if (*(int *)(lVar1 + lVar3) < 8) {
        bVar4 = bVar4 | (byte)(1 << ((byte)*(int *)(lVar1 + lVar3) & 0x1f));
        *(byte *)(param_1 + 0x333) = bVar4;
      }
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar3);
  }
  return;
}



// FUNCTION 1479f2282 FUN_1479f2282 body=37 status=ok
// SIG undefined FUN_1479f2282(void)

void FUN_1479f2282(longlong param_1,byte param_2,char param_3)

{
  byte bVar1;
  
  bVar1 = ~param_2 & *(byte *)(param_1 + 0x333);
  if (param_3 != '\0') {
    bVar1 = *(byte *)(param_1 + 0x333) | param_2;
  }
  *(byte *)(param_1 + 0x333) = bVar1;
  return;
}



// FUNCTION 1479f22a8 FUN_1479f22a8 body=98 status=ok
// SIG undefined FUN_1479f22a8(void)

longlong * FUN_1479f22a8(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = 0;
  do {
    if ((byte)((byte)(1 << ((byte)iVar2 & 0x1f)) & ~*(byte *)(param_1 + 0x333)) == 0) {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(param_2,iVar1);
      }
      *(int *)(*param_2 + (longlong)iVar1 * 4) = iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  return param_2;
}



// FUNCTION 1479f230a FUN_1479f230a body=14 status=ok
// SIG undefined FUN_1479f230a(void)

bool FUN_1479f230a(longlong param_1,byte param_2)

{
  return (param_2 & ~*(byte *)(param_1 + 0x333)) == 0;
}



// FUNCTION 1479f23b4 FUN_1479f23b4 body=74 status=ok
// SIG undefined FUN_1479f23b4(void)

undefined8 FUN_1479f23b4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + -0x398);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f2400 FUN_1479f2400 body=35 status=ok
// SIG undefined FUN_1479f2400(void)

undefined8 FUN_1479f2400(longlong param_1,undefined8 param_2)

{
  FUN_144750a86(param_1 + -0x3b0,param_2,0,0);
  return param_2;
}



// FUNCTION 1479f2424 FUN_1479f2424 body=26 status=ok
// SIG undefined FUN_1479f2424(void)

undefined8 * FUN_1479f2424(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)(param_1 + -0x170);
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 1479f246e FUN_1479f246e body=69 status=ok
// SIG undefined FUN_1479f246e(void)

float FUN_1479f246e(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  if ((*(int *)(param_1 + 0x24) < 0) &&
     ((lVar1 = *(longlong *)(param_1 + -0x300), lVar1 != 0 ||
      (lVar1 = FUN_1448abda6(param_1 + -0x3b0), lVar1 != 0)))) {
    fVar2 = (float)*(double *)(lVar1 + 0x6d0);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x18);
  }
  return fVar2;
}



// FUNCTION 1479f24fa FUN_1479f24fa body=495 status=ok
// SIG undefined FUN_1479f24fa(void)

ulonglong FUN_1479f24fa(longlong param_1,longlong *param_2,float *param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  int7 iVar8;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined1 local_160 [4];
  float local_15c;
  undefined4 local_bc;
  byte local_b3;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  bVar6 = 0;
  iVar8 = 0;
  memset(local_160,0,0x100);
  local_90 = 0xffffffff;
  local_15c = 1.0;
  local_bc = 0xffffffff;
  local_178 = param_6;
  uStack_170 = param_7;
  local_168 = 0;
  cVar5 = FUN_147c6896e(local_160,param_1 + 0x410,param_4,param_5);
  if (cVar5 != '\0') {
    if (*param_3 <= local_15c) {
      bVar6 = 0;
      iVar8 = 0;
    }
    else {
      if ((local_b3 & 1) != 0) {
        *param_3 = local_15c;
      }
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_144a3a3ee(param_2,iVar3);
      }
      lVar4 = *param_2;
      lVar7 = (longlong)iVar3 * 0x100;
      memcpy((void *)(lVar4 + lVar7),local_160,0xb8);
      puVar1 = (undefined8 *)(lVar4 + 0xb8 + lVar7);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar4 + 200 + lVar7) = 0;
      *(undefined4 *)(lVar4 + 0xd0 + lVar7) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0xd4 + lVar7) = 0;
      *(undefined8 *)(lVar4 + 0xb8 + lVar7) = local_a8;
      puVar1 = (undefined8 *)(lVar4 + 0xc0 + lVar7);
      *puVar1 = local_a0;
      puVar1[1] = uStack_98;
      *(undefined4 *)(lVar4 + 0xd0 + lVar7) = local_90;
      *(undefined1 *)(lVar4 + 0xd4 + lVar7) = local_8c;
      *(undefined8 *)(lVar4 + 0xf8 + lVar7) = local_68;
      puVar2 = (undefined4 *)(lVar4 + 0xe8 + lVar7);
      *puVar2 = local_78;
      puVar2[1] = uStack_74;
      puVar2[2] = uStack_70;
      puVar2[3] = uStack_6c;
      puVar2 = (undefined4 *)(lVar4 + 0xd8 + lVar7);
      *puVar2 = local_88;
      puVar2[1] = uStack_84;
      puVar2[2] = uStack_80;
      puVar2[3] = uStack_7c;
      iVar8 = (int7)iVar3;
      bVar6 = 1;
      if (param_8 != '\0') {
        FUN_1479b52d2(param_2);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return CONCAT71(iVar8,bVar6 & local_b3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f26fc FUN_1479f26fc body=524 status=ok
// SIG undefined FUN_1479f26fc(void)

ulonglong FUN_1479f26fc(longlong param_1,longlong *param_2,float *param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9,char param_10)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  int7 iVar8;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  undefined1 local_170 [4];
  float local_16c;
  undefined4 local_cc;
  byte local_c3;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  bVar6 = 0;
  iVar8 = 0;
  memset(local_170,0,0x100);
  local_a0 = 0xffffffff;
  local_16c = 1.0;
  local_cc = 0xffffffff;
  local_188 = param_8;
  uStack_180 = param_9;
  local_198 = param_6;
  uStack_190 = param_7;
  local_178 = 0;
  cVar5 = FUN_147c68c88(local_170,param_1 + 0x410,param_4,param_5);
  if (cVar5 != '\0') {
    if (*param_3 <= local_16c) {
      bVar6 = 0;
      iVar8 = 0;
    }
    else {
      if ((local_c3 & 1) != 0) {
        *param_3 = local_16c;
      }
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_144a3a3ee(param_2,iVar3);
      }
      lVar4 = *param_2;
      lVar7 = (longlong)iVar3 * 0x100;
      memcpy((void *)(lVar4 + lVar7),local_170,0xb8);
      puVar1 = (undefined8 *)(lVar4 + 0xb8 + lVar7);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar4 + 200 + lVar7) = 0;
      *(undefined4 *)(lVar4 + 0xd0 + lVar7) = 0xffffffff;
      *(undefined1 *)(lVar4 + 0xd4 + lVar7) = 0;
      *(undefined8 *)(lVar4 + 0xb8 + lVar7) = local_b8;
      puVar1 = (undefined8 *)(lVar4 + 0xc0 + lVar7);
      *puVar1 = local_b0;
      puVar1[1] = uStack_a8;
      *(undefined4 *)(lVar4 + 0xd0 + lVar7) = local_a0;
      *(undefined1 *)(lVar4 + 0xd4 + lVar7) = local_9c;
      *(undefined8 *)(lVar4 + 0xf8 + lVar7) = local_78;
      puVar2 = (undefined4 *)(lVar4 + 0xe8 + lVar7);
      *puVar2 = local_88;
      puVar2[1] = uStack_84;
      puVar2[2] = uStack_80;
      puVar2[3] = uStack_7c;
      puVar2 = (undefined4 *)(lVar4 + 0xd8 + lVar7);
      *puVar2 = local_98;
      puVar2[1] = uStack_94;
      puVar2[2] = uStack_90;
      puVar2[3] = uStack_8c;
      iVar8 = (int7)iVar3;
      bVar6 = 1;
      if (param_10 != '\0') {
        FUN_1479b52d2(param_2);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return CONCAT71(iVar8,bVar6 & local_c3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f290a FUN_1479f290a body=232 status=ok
// SIG undefined FUN_1479f290a(void)

undefined4
FUN_1479f290a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,byte param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  byte *local_40;
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &local_31;
  local_31 = 0;
  local_48 = param_6;
  uVar2 = FUN_147c6910a(param_1 + 0x410,param_3,param_4,param_5);
  if ((param_7 & (byte)uVar2) == 1) {
    iVar3 = FUN_1479f29f4(param_2);
    lVar1 = (longlong)iVar3 * 0x48;
    FUN_14485c47a(*param_2 + lVar1 + 0x20,param_1);
    thunk_FUN_140871de8(*param_2 + lVar1,*(undefined8 *)(param_1 + 0xa8));
    *(undefined4 *)(*param_2 + 0x28 + lVar1) = 0xffffffff;
    *(uint *)(*param_2 + 0x40 + lVar1) =
         *(uint *)(*param_2 + 0x40 + lVar1) & 0xfffffffe | (uint)local_31;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f29f4 FUN_1479f29f4 body=64 status=ok
// SIG undefined FUN_1479f29f4(void)

int FUN_1479f29f4(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1414fa4c8(param_1,iVar1);
  }
  FUN_1479fe048((longlong)iVar1 * 0x48 + *param_1,1);
  return iVar1;
}



// FUNCTION 1479f2a34 FUN_1479f2a34 body=45 status=ok
// SIG undefined FUN_1479f2a34(void)

longlong FUN_1479f2a34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145acebd6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2a62 FUN_1479f2a62 body=38 status=ok
// SIG undefined FUN_1479f2a62(void)

undefined8 FUN_1479f2a62(undefined8 param_1,int param_2)

{
  FUN_1479f3cfa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2a88 FUN_1479f2a88 body=45 status=ok
// SIG undefined FUN_1479f2a88(void)

longlong FUN_1479f2a88(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2b38 FUN_1479f2b38 body=45 status=ok
// SIG undefined FUN_1479f2b38(void)

longlong FUN_1479f2b38(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2b66 FUN_1479f2b66 body=48 status=ok
// SIG undefined FUN_1479f2b66(void)

longlong FUN_1479f2b66(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2b96 FUN_1479f2b96 body=48 status=ok
// SIG undefined FUN_1479f2b96(void)

longlong FUN_1479f2b96(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2bc6 FUN_1479f2bc6 body=48 status=ok
// SIG undefined FUN_1479f2bc6(void)

longlong FUN_1479f2bc6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2bf6 FUN_1479f2bf6 body=45 status=ok
// SIG undefined FUN_1479f2bf6(void)

longlong FUN_1479f2bf6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2c24 FUN_1479f2c24 body=48 status=ok
// SIG undefined FUN_1479f2c24(void)

longlong FUN_1479f2c24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  thunk_FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2c54 FUN_1479f2c54 body=48 status=ok
// SIG undefined FUN_1479f2c54(void)

longlong FUN_1479f2c54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  thunk_FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2c84 FUN_1479f2c84 body=48 status=ok
// SIG undefined FUN_1479f2c84(void)

longlong FUN_1479f2c84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  thunk_FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2cb4 FUN_1479f2cb4 body=45 status=ok
// SIG undefined FUN_1479f2cb4(void)

longlong FUN_1479f2cb4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cbb18c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2cec FUN_1479f2cec body=45 status=ok
// SIG undefined FUN_1479f2cec(void)

longlong FUN_1479f2cec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e32c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2d1a FUN_1479f2d1a body=48 status=ok
// SIG undefined FUN_1479f2d1a(void)

longlong FUN_1479f2d1a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e32c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2d4a FUN_1479f2d4a body=48 status=ok
// SIG undefined FUN_1479f2d4a(void)

longlong FUN_1479f2d4a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e32c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2d7a FUN_1479f2d7a body=48 status=ok
// SIG undefined FUN_1479f2d7a(void)

longlong FUN_1479f2d7a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e32c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2daa FUN_1479f2daa body=38 status=ok
// SIG undefined FUN_1479f2daa(void)

undefined8 FUN_1479f2daa(undefined8 param_1,int param_2)

{
  FUN_143479bba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2dec FUN_1479f2dec body=45 status=ok
// SIG undefined FUN_1479f2dec(void)

longlong FUN_1479f2dec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140ffc082(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2e20 FUN_1479f2e20 body=45 status=ok
// SIG undefined FUN_1479f2e20(void)

longlong FUN_1479f2e20(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ed1b10(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2e4e FUN_1479f2e4e body=76 status=ok
// SIG undefined FUN_1479f2e4e(void)

undefined8 * FUN_1479f2e4e(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Components/LightComponent.h",0x1a5,
                L"Pure virtual not implemented (%s)",L"ULightComponent::GetPosition");
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3ff0000000000000;
  return param_2;
}



// FUNCTION 1479f2e9a FUN_1479f2e9a body=45 status=ok
// SIG undefined FUN_1479f2e9a(void)

undefined8 FUN_1479f2e9a(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Components/LightComponent.h",0x1aa,
                L"Pure virtual not implemented (%s)",L"ULightComponent::GetLightType");
  return 4;
}



// FUNCTION 1479f2ec8 FUN_1479f2ec8 body=65 status=ok
// SIG undefined FUN_1479f2ec8(void)

undefined8 * FUN_1479f2ec8(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Components/LightComponent.h",0x1ac,
                L"Pure virtual not implemented (%s)",L"ULightComponent::GetLightmassSettings");
  *param_2 = 0x400000003f800000;
  *(undefined1 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 1479f2f0a FUN_1479f2f0a body=43 status=ok
// SIG undefined FUN_1479f2f0a(void)

undefined8 FUN_1479f2f0a(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Components/LightComponent.h",0x1ae,
                L"Pure virtual not implemented (%s)",L"ULightComponent::GetUniformPenumbraSize");
  return 0;
}



// FUNCTION 1479f2f44 FUN_1479f2f44 body=45 status=ok
// SIG undefined FUN_1479f2f44(void)

longlong FUN_1479f2f44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1411317c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2f72 FUN_1479f2f72 body=48 status=ok
// SIG undefined FUN_1479f2f72(void)

longlong FUN_1479f2f72(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1411317c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2fa2 FUN_1479f2fa2 body=48 status=ok
// SIG undefined FUN_1479f2fa2(void)

longlong FUN_1479f2fa2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1411317c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f2fd2 FUN_1479f2fd2 body=48 status=ok
// SIG undefined FUN_1479f2fd2(void)

longlong FUN_1479f2fd2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1411317c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f3002 FUN_1479f3002 body=45 status=ok
// SIG undefined FUN_1479f3002(void)

longlong FUN_1479f3002(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f305a FUN_1479f305a body=45 status=ok
// SIG undefined FUN_1479f305a(void)

longlong FUN_1479f305a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145edf9e0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f3088 FUN_1479f3088 body=45 status=ok
// SIG undefined FUN_1479f3088(void)

longlong FUN_1479f3088(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d49826(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f30b6 FUN_1479f30b6 body=48 status=ok
// SIG undefined FUN_1479f30b6(void)

longlong FUN_1479f30b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145d49826(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f30e6 FUN_1479f30e6 body=48 status=ok
// SIG undefined FUN_1479f30e6(void)

longlong FUN_1479f30e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145d49826(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f3116 FUN_1479f3116 body=48 status=ok
// SIG undefined FUN_1479f3116(void)

longlong FUN_1479f3116(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145d49826(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f3146 FUN_1479f3146 body=45 status=ok
// SIG undefined FUN_1479f3146(void)

longlong FUN_1479f3146(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e32c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f3174 FUN_1479f3174 body=48 status=ok
// SIG undefined FUN_1479f3174(void)

longlong FUN_1479f3174(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e32c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f31a4 FUN_1479f31a4 body=48 status=ok
// SIG undefined FUN_1479f31a4(void)

longlong FUN_1479f31a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e32c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f31d4 FUN_1479f31d4 body=48 status=ok
// SIG undefined FUN_1479f31d4(void)

longlong FUN_1479f31d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e32c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f3216 FUN_1479f3216 body=45 status=ok
// SIG undefined FUN_1479f3216(void)

longlong FUN_1479f3216(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458c3da6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f324a FUN_1479f324a body=48 status=ok
// SIG undefined FUN_1479f324a(void)

longlong FUN_1479f324a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1458c3da6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f3282 FUN_1479f3282 body=48 status=ok
// SIG undefined FUN_1479f3282(void)

longlong FUN_1479f3282(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1458c3da6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f32ba FUN_1479f32ba body=48 status=ok
// SIG undefined FUN_1479f32ba(void)

longlong FUN_1479f32ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1458c3da6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f32f6 FUN_1479f32f6 body=45 status=ok
// SIG undefined FUN_1479f32f6(void)

longlong FUN_1479f32f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f33be FUN_1479f33be body=45 status=ok
// SIG undefined FUN_1479f33be(void)

longlong FUN_1479f33be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f33ec FUN_1479f33ec body=45 status=ok
// SIG undefined FUN_1479f33ec(void)

longlong FUN_1479f33ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cdd708(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f348a FUN_1479f348a body=45 status=ok
// SIG undefined FUN_1479f348a(void)

longlong FUN_1479f348a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145df0e1e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f34be FUN_1479f34be body=48 status=ok
// SIG undefined FUN_1479f34be(void)

longlong FUN_1479f34be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145df0e1e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f34f6 FUN_1479f34f6 body=48 status=ok
// SIG undefined FUN_1479f34f6(void)

longlong FUN_1479f34f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145df0e1e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f352e FUN_1479f352e body=48 status=ok
// SIG undefined FUN_1479f352e(void)

longlong FUN_1479f352e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145df0e1e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f3566 FUN_1479f3566 body=38 status=ok
// SIG undefined FUN_1479f3566(void)

void FUN_1479f3566(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x0001479f3589. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  return;
}



// FUNCTION 1479f3594 FUN_1479f3594 body=45 status=ok
// SIG undefined FUN_1479f3594(void)

longlong FUN_1479f3594(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14583dbf2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f35c8 FUN_1479f35c8 body=48 status=ok
// SIG undefined FUN_1479f35c8(void)

longlong FUN_1479f35c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14583dbf2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f3600 FUN_1479f3600 body=45 status=ok
// SIG undefined FUN_1479f3600(void)

longlong FUN_1479f3600(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f362e FUN_1479f362e body=48 status=ok
// SIG undefined FUN_1479f362e(void)

longlong FUN_1479f362e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f365e FUN_1479f365e body=48 status=ok
// SIG undefined FUN_1479f365e(void)

longlong FUN_1479f365e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f368e FUN_1479f368e body=48 status=ok
// SIG undefined FUN_1479f368e(void)

longlong FUN_1479f368e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f3746 FUN_1479f3746 body=39 status=ok
// SIG undefined FUN_1479f3746(void)

undefined8 FUN_1479f3746(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479f3796 FUN_1479f3796 body=59 status=ok
// SIG undefined FUN_1479f3796(void)

undefined8 FUN_1479f3796(longlong *param_1)

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



// FUNCTION 1479f3838 FUN_1479f3838 body=162 status=ok
// SIG undefined FUN_1479f3838(void)

void FUN_1479f3838(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x158);
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0xffffffff00000080;
  param_2[0x1b] = 0;
  param_2[0x1d] = 0;
  *(undefined4 *)((longlong)param_2 + 0xf4) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x27) = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  *(undefined8 *)((longlong)param_2 + 0x13c) = 0xffffffff00000080;
  param_2[0x2a] = 0;
  *param_2 = &PTR_FUN_14a83e390;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 1479f39f4 FUN_1479f39f4 body=63 status=ok
// SIG undefined FUN_1479f39f4(void)

undefined1 FUN_1479f39f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1479f3b1e(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 1479f3a5c FUN_1479f3a5c body=59 status=ok
// SIG undefined FUN_1479f3a5c(void)

undefined8 FUN_1479f3a5c(longlong *param_1)

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



// FUNCTION 1479f3aa8 FUN_1479f3aa8 body=40 status=ok
// SIG undefined FUN_1479f3aa8(void)

void FUN_1479f3aa8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_1479f3cfa(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 1479f3b1e FUN_1479f3b1e body=277 status=ok
// SIG undefined FUN_1479f3b1e(void)

longlong FUN_1479f3b1e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_147764d36();
  FUN_147765084(param_1 + 0x110,param_2 + 0x110);
  lVar5 = *(longlong *)(param_2 + 0x160);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 0x160);
    }
  }
  *(longlong *)(param_1 + 0x160) = lVar5;
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  FUN_1479f3c34(param_1 + 0x170,param_2 + 0x170);
  uVar3 = *(undefined8 *)(param_2 + 0x180);
  lVar5 = *(longlong *)(param_2 + 0x188);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = uVar3;
  *(longlong *)(param_1 + 0x188) = lVar5;
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
  uVar3 = *(undefined8 *)(param_2 + 400);
  lVar5 = *(longlong *)(param_2 + 0x198);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 400) = uVar3;
  *(longlong *)(param_1 + 0x198) = lVar5;
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



// FUNCTION 1479f3c34 FUN_1479f3c34 body=85 status=ok
// SIG undefined FUN_1479f3c34(void)

undefined8 * FUN_1479f3c34(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1479f3c8a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x70);
      }
    }
  }
  return param_1;
}



// FUNCTION 1479f3c8a FUN_1479f3c8a body=111 status=ok
// SIG undefined FUN_1479f3c8a(void)

void FUN_1479f3c8a(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1479f3cfa FUN_1479f3cfa body=132 status=ok
// SIG undefined FUN_1479f3cfa(void)

void FUN_1479f3cfa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a83e390;
  plVar3 = (longlong *)param_1[0x33];
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
  plVar3 = (longlong *)param_1[0x31];
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
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_140595c52(param_1);
  return;
}



// FUNCTION 1479f3d94 FUN_1479f3d94 body=1224 status=ok
// SIG undefined FUN_1479f3d94(void)

undefined8 FUN_1479f3d94(longlong param_1,ulonglong *param_2,undefined1 (*param_3) [16])

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  float fVar8;
  double dVar9;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  undefined8 uStack_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  undefined8 local_338 [16];
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  double local_290;
  double local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  double local_270;
  double local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  double local_238;
  undefined8 local_230;
  double local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  ulonglong local_120;
  ulonglong uStack_118;
  ulonglong local_110;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  uVar1 = param_2[2];
  auVar4._8_4_ = (int)param_2[1];
  auVar4._0_8_ = *param_2 ^ 0x8000000000000000;
  auVar4._12_4_ = (uint)(param_2[1] >> 0x20) ^ 0x80000000;
  *param_3 = auVar4;
  *(ulonglong *)param_3[1] = uVar1 ^ 0x8000000000000000;
  local_358 = *(double *)(param_1 + 0x90);
  local_368 = *(double *)(param_1 + 0x50);
  uStack_360 = *(double *)(param_1 + 0x70);
  dVar9 = local_358 * local_358 + local_368 * local_368 + uStack_360 * uStack_360;
  if ((dVar9 != 1.0) || (NAN(dVar9))) {
    if (dVar9 < 9.99999993922529e-09) {
      local_358 = DAT_14c8464f0;
      local_368 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_360 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      dVar9 = 1.0 / SQRT(dVar9);
      local_358 = local_358 * dVar9;
      uStack_360 = uStack_360 * dVar9;
      local_368 = local_368 * dVar9;
    }
  }
  FUN_144a79a9c(&local_368,&local_350);
  dVar9 = cos((local_348 * 3.1415927410125732) / 180.0);
  dVar2 = sin((local_348 * 3.1415927410125732) / 180.0);
  dVar3 = sin((local_348 * 3.1415927410125732) / 180.0);
  local_1b8 = cos((local_348 * 3.1415927410125732) / 180.0);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0x3ff0000000000000;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0x3ff0000000000000;
  local_1b0 = -dVar3;
  local_198 = dVar2;
  local_190 = dVar9;
  dVar9 = cos((local_350 * 3.1415927410125732) / 180.0);
  dVar2 = sin((local_350 * 3.1415927410125732) / 180.0);
  dVar3 = sin((local_350 * 3.1415927410125732) / 180.0);
  local_238 = cos((local_350 * 3.1415927410125732) / 180.0);
  local_230 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0x3ff0000000000000;
  local_208 = 0;
  uStack_200 = 0;
  local_1f0 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0x3ff0000000000000;
  local_228 = -dVar3;
  local_1f8 = dVar2;
  local_1e8 = dVar9;
  FUN_1447fea8d(&local_138,&local_1b8);
  dVar9 = cos((local_340 * 3.1415927410125732) / 180.0);
  dVar2 = sin((local_340 * 3.1415927410125732) / 180.0);
  dVar3 = sin((local_340 * 3.1415927410125732) / 180.0);
  local_290 = cos((local_340 * 3.1415927410125732) / 180.0);
  local_2b8 = 0x3ff0000000000000;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_240 = 0x3ff0000000000000;
  local_288 = dVar3;
  local_270 = -dVar2;
  local_268 = dVar9;
  FUN_1447fea8d(local_338,&local_138);
  puVar6 = local_338;
  pauVar7 = param_3 + 2;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)*pauVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pauVar7 = (undefined1 (*) [16])(*pauVar7 + 8);
  }
  dVar9 = (double)param_2[6];
  *(double *)param_3[10] = 1.0 / dVar9;
  *(double *)(param_3[10] + 8) = 1.0 / dVar9;
  dVar9 = DAT_14c8464f0;
  uVar1 = param_2[6];
  local_128 = DAT_14c8464f0;
  local_138 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_130 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_110 = param_2[5];
  local_120 = param_2[3];
  uStack_118 = param_2[4];
  *(undefined8 *)param_3[0xb] = local_138;
  *(undefined8 *)(param_3[0xb] + 8) = uStack_130;
  *(ulonglong *)param_3[0xd] = uStack_118;
  *(ulonglong *)(param_3[0xd] + 8) = local_110;
  *(double *)param_3[0xc] = dVar9;
  *(ulonglong *)(param_3[0xc] + 8) = local_120;
  *(ulonglong *)param_3[0xe] = uVar1;
  *(undefined8 *)param_3[0x10] = 0;
  *(undefined8 *)param_3[0xf] = 0;
  *(undefined8 *)(param_3[0xf] + 8) = 0;
  *(undefined8 *)(param_3[0x10] + 8) = 0x3ff0000000000000;
  *(undefined4 *)param_3[0x11] = 0xc9800000;
  lVar5 = DAT_14cad1270;
  fVar8 = *(float *)(DAT_14cad1270 + 4);
  dVar9 = (double)*(float *)(DAT_14cad1258 + 4) * (double)param_2[6];
  if (8796093022208.0 <= dVar9) {
    dVar9 = 8796093022208.0;
  }
  if ((double)fVar8 < dVar9) {
    fVar8 = (float)dVar9;
  }
  *(float *)(param_3[0x11] + 4) = fVar8;
  if ((local_b0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
}



// FUNCTION 1479f426e FUN_1479f426e body=296 status=ok
// SIG undefined FUN_1479f426e(void)

float FUN_1479f426e(longlong param_1,char param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  float *pfVar5;
  float fVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1d78) {
    FUN_144b3d300(&DAT_14cad1d78);
    if (DAT_14cad1d78 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.DistanceScale",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14cad1d70 = 0;
      }
      else {
        DAT_14cad1d70 = (**(code **)(*plVar3 + 0x70))(plVar3);
      }
      _Init_thread_footer(&DAT_14cad1d78);
    }
  }
  lVar1 = DAT_14cad1210;
  if (param_3 < 1) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = *(float *)(DAT_14cad1d70 + 4);
    if (2.0 <= fVar6) {
      fVar6 = 2.0;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    if (param_2 == '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar4 = 0;
      }
      else {
        bVar2 = FUN_144a61b4f();
        uVar4 = (ulonglong)(bVar2 ^ 1);
      }
      pfVar5 = (float *)(lVar1 + uVar4 * 4);
    }
    else {
      pfVar5 = (float *)(param_1 + 0x2e4);
    }
    fVar6 = fVar6 * *pfVar5;
  }
  return fVar6;
}



// FUNCTION 1479f43ba FUN_1479f43ba body=29 status=ok
// SIG undefined FUN_1479f43ba(void)

void FUN_1479f43ba(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1479f43d8 FUN_1479f43d8 body=29 status=ok
// SIG undefined FUN_1479f43d8(void)

undefined8 FUN_1479f43d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f4484 FUN_1479f4484 body=12 status=ok
// SIG undefined FUN_1479f4484(void)

void FUN_1479f4484(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001479f448d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1479f4490 FUN_1479f4490 body=29 status=ok
// SIG undefined FUN_1479f4490(void)

undefined8 FUN_1479f4490(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f4504 FUN_1479f4504 body=38 status=ok
// SIG undefined FUN_1479f4504(void)

undefined8 FUN_1479f4504(undefined8 param_1,int param_2)

{
  FUN_140064e2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f4540 FUN_1479f4540 body=38 status=ok
// SIG undefined FUN_1479f4540(void)

undefined8 FUN_1479f4540(undefined8 param_1,int param_2)

{
  FUN_1479f4594();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f4566 FUN_1479f4566 body=45 status=ok
// SIG undefined FUN_1479f4566(void)

longlong FUN_1479f4566(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1479f4594(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f4594 FUN_1479f4594 body=81 status=ok
// SIG undefined FUN_1479f4594(void)

void FUN_1479f4594(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a860000;
  param_1[1] = &PTR_FUN_14a860050;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  param_1[1] = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 1);
  FUN_140af926c(param_1);
  return;
}



// FUNCTION 1479f4610 FUN_1479f4610 body=39 status=ok
// SIG undefined FUN_1479f4610(void)

undefined8 FUN_1479f4610(longlong param_1,undefined8 param_2)

{
  FUN_1447fea8d(param_2,param_1 + 0x20,*(longlong *)(param_1 + 0x10) + 0x100);
  return param_2;
}



// FUNCTION 1479f4722 FUN_1479f4722 body=89 status=ok
// SIG undefined FUN_1479f4722(void)

undefined8 FUN_1479f4722(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
    do {
      *(undefined4 *)(param_2 + -0x58) = *(undefined4 *)(param_3 + -0x58);
      *(undefined8 *)(param_2 + -0x60) = *(undefined8 *)(param_3 + -0x60);
      FUN_1479f490c(param_2 + -0x50,param_3 + -0x50);
      FUN_1479f48ae(param_2,param_3);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479f47a4 FUN_1479f47a4 body=59 status=ok
// SIG undefined FUN_1479f47a4(void)

undefined8 FUN_1479f47a4(longlong *param_1)

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



// FUNCTION 1479f47ea FUN_1479f47ea body=32 status=ok
// SIG undefined FUN_1479f47ea(void)

void FUN_1479f47ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140ffc366(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1479f4858 FUN_1479f4858 body=85 status=ok
// SIG undefined FUN_1479f4858(void)

void FUN_1479f4858(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140ffc319(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x0001479f48a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1479f48ae FUN_1479f48ae body=93 status=ok
// SIG undefined FUN_1479f48ae(void)

undefined8 * FUN_1479f48ae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ffc319(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1479f4ada(param_1,iVar1);
      FUN_1479f4b3c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1479f490c FUN_1479f490c body=122 status=ok
// SIG undefined FUN_1479f490c(void)

longlong FUN_1479f490c(longlong param_1,longlong param_2)

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
    FUN_1479f4986(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1479f4986 FUN_1479f4986 body=261 status=ok
// SIG undefined FUN_1479f4986(void)

longlong * FUN_1479f4986(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140ffc48e(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_140044672(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_2 + 0x18;
      lVar6 = *param_1 + 0x18;
      uVar5 = 0;
      do {
        plVar3 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar6 + -0x18) = *(undefined4 *)(lVar4 + -0x18);
          *(undefined4 *)(lVar6 + -0x14) = *(undefined4 *)(lVar4 + -0x14);
        }
        else {
          *(undefined8 *)(lVar6 + -0x18) = *(undefined8 *)(lVar4 + -0x18);
          *(undefined8 *)(lVar6 + -0x10) = *(undefined8 *)(lVar4 + -0x10);
          lVar2 = *(longlong *)(lVar4 + -8);
          *(longlong *)(lVar6 + -8) = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          FUN_1479f4a8c(lVar6,lVar4);
          *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x30;
        lVar6 = lVar6 + 0x30;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1479f4a8c FUN_1479f4a8c body=77 status=ok
// SIG undefined FUN_1479f4a8c(void)

undefined8 * FUN_1479f4a8c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1479f4ada(param_1,iVar1,0);
    FUN_1479f4b3c(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1479f4ada FUN_1479f4ada body=98 status=ok
// SIG undefined FUN_1479f4ada(void)

void FUN_1479f4ada(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1479f4b3c FUN_1479f4b3c body=45 status=ok
// SIG undefined FUN_1479f4b3c(void)

void FUN_1479f4b3c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1479f4c10 FUN_1479f4c10 body=59 status=ok
// SIG undefined FUN_1479f4c10(void)

undefined8 FUN_1479f4c10(longlong *param_1)

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



// FUNCTION 1479f4cb2 FUN_1479f4cb2 body=38 status=ok
// SIG undefined FUN_1479f4cb2(void)

undefined8 FUN_1479f4cb2(undefined8 param_1,int param_2)

{
  FUN_1401c051c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f4cf0 FUN_1479f4cf0 body=114 status=ok
// SIG undefined FUN_1479f4cf0(void)

undefined8 FUN_1479f4cf0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147764d36(param_2,param_3);
    FUN_147765084(param_2 + 0x110,param_3 + 0x110);
    memcpy((void *)(param_2 + 0x160),(void *)(param_3 + 0x160),0x84);
    param_2 = param_2 + 0x1f0;
    param_3 = param_3 + 0x1f0;
  }
  return 1;
}



// FUNCTION 1479f4d8a FUN_1479f4d8a body=59 status=ok
// SIG undefined FUN_1479f4d8a(void)

undefined8 FUN_1479f4d8a(longlong *param_1)

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



// FUNCTION 1479f4dd6 FUN_1479f4dd6 body=38 status=ok
// SIG undefined FUN_1479f4dd6(void)

void FUN_1479f4dd6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    FUN_140595c52(param_2);
    *(undefined1 *)(param_2 + 0x1f0) = 0;
  }
  return;
}



// FUNCTION 1479f4ea2 FUN_1479f4ea2 body=39 status=ok
// SIG undefined FUN_1479f4ea2(void)

undefined8 FUN_1479f4ea2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479f4ef2 FUN_1479f4ef2 body=59 status=ok
// SIG undefined FUN_1479f4ef2(void)

undefined8 FUN_1479f4ef2(longlong *param_1)

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



// FUNCTION 1479f5044 FUN_1479f5044 body=59 status=ok
// SIG undefined FUN_1479f5044(void)

undefined8 FUN_1479f5044(longlong *param_1)

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



// FUNCTION 1479f50fe FUN_1479f50fe body=47 status=ok
// SIG undefined FUN_1479f50fe(void)

void FUN_1479f50fe(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479f5144 FUN_1479f5144 body=67 status=ok
// SIG undefined FUN_1479f5144(void)

undefined1 FUN_1479f5144(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14054c6c4(param_2,param_3);
    FUN_14054c6c4(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1479f51b0 FUN_1479f51b0 body=59 status=ok
// SIG undefined FUN_1479f51b0(void)

undefined8 FUN_1479f51b0(longlong *param_1)

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



// FUNCTION 1479f524e FUN_1479f524e body=51 status=ok
// SIG undefined FUN_1479f524e(void)

void FUN_1479f524e(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 1479f52fe FUN_1479f52fe body=59 status=ok
// SIG undefined FUN_1479f52fe(void)

undefined8 FUN_1479f52fe(longlong *param_1)

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



// FUNCTION 1479f53a0 FUN_1479f53a0 body=59 status=ok
// SIG undefined FUN_1479f53a0(void)

void FUN_1479f53a0(longlong param_1)

{
  FUN_1479f53dc();
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479f53dc FUN_1479f53dc body=107 status=ok
// SIG undefined FUN_1479f53dc(void)

void FUN_1479f53dc(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) != 0) {
    FUN_1479f5448(param_1);
  }
  *(undefined8 *)(param_1 + 0x168) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (0x20 < *(uint *)(param_1 + 0x164)) {
    *(undefined4 *)(param_1 + 0x164) = 0x20;
    FUN_14008f53c(param_1 + 0x150,0);
    return;
  }
  return;
}



// FUNCTION 1479f5448 FUN_1479f5448 body=94 status=ok
// SIG undefined FUN_1479f5448(void)

void FUN_1479f5448(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x14c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
    if (*(void **)((longlong)param_1 + 0x140) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x140),
              (longlong)*(int *)((longlong)param_1 + 0x148) * 0x14);
      FUN_1446efa72((longlong)param_1 + 0x140,0,0,0x14);
      return;
    }
  }
  return;
}



// FUNCTION 1479f54a6 FUN_1479f54a6 body=149 status=ok
// SIG undefined FUN_1479f54a6(void)

void FUN_1479f54a6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x140);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x14);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x140,0,param_3,0x14);
    memmove(*(void **)((longlong)param_1 + 0x140),param_1,(longlong)param_2 * 0x14);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x140,param_2,param_3,0x14);
  return;
}



// FUNCTION 1479f5598 FUN_1479f5598 body=54 status=ok
// SIG undefined FUN_1479f5598(void)

undefined1 FUN_1479f5598(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1479f5696(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1479f55f6 FUN_1479f55f6 body=59 status=ok
// SIG undefined FUN_1479f55f6(void)

undefined8 FUN_1479f55f6(longlong *param_1)

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



// FUNCTION 1479f5696 FUN_1479f5696 body=141 status=ok
// SIG undefined FUN_1479f5696(void)

longlong * FUN_1479f5696(longlong *param_1,longlong *param_2)

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
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  *(int *)(param_1 + 3) = (int)param_2[3];
  param_1[2] = param_2[2];
  lVar2 = param_2[4];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[4];
    }
  }
  param_1[4] = lVar2;
  return param_1;
}



// FUNCTION 1479f5724 FUN_1479f5724 body=38 status=ok
// SIG undefined FUN_1479f5724(void)

undefined8 FUN_1479f5724(undefined8 param_1,int param_2)

{
  FUN_1479f5c94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f5752 FUN_1479f5752 body=124 status=ok
// SIG undefined FUN_1479f5752(void)

ulonglong * FUN_1479f5752(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  param_2[1] = 0;
  param_2[2] = 0;
  uVar3 = FUN_14480c900(0,param_3);
  bVar2 = FUN_144914152(param_1,param_3);
  uVar1 = *(ulonglong *)(param_1 + 0x3b0);
  *param_2 = uVar1;
  if ((((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) || ((*(byte *)(param_1 + 0x78) & 0x10) != 0)) ||
     ((*(byte *)(param_1 + 0x75) & 200) != 0)) {
    uVar4 = (uint)(uVar1 >> 0x1d) & 0x10;
  }
  else {
    uVar4 = 0;
  }
  *(uint *)(param_2 + 2) = (uint)bVar2 * 8 + (uVar3 & 0xff) * 4 | uVar4 | 0x82;
  return param_2;
}



// FUNCTION 1479f57e8 FUN_1479f57e8 body=115 status=ok
// SIG undefined FUN_1479f57e8(void)

void FUN_1479f57e8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1479f585b FUN_1479f585b body=52 status=ok
// SIG undefined FUN_1479f585b(void)

void FUN_1479f585b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1479f5890(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 1479f5890 FUN_1479f5890 body=136 status=ok
// SIG undefined FUN_1479f5890(void)

longlong * FUN_1479f5890(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
    bVar2 = DAT_14c950c29;
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  param_1[2] = param_2[2];
  lVar1 = param_2[4];
  param_1[4] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1479f5918 FUN_1479f5918 body=726 status=ok
// SIG undefined FUN_1479f5918(void)

void FUN_1479f5918(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_103;
  undefined2 local_102;
  longlong local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  char local_f3;
  char local_f2;
  undefined1 local_f1;
  longlong local_f0;
  undefined4 local_e8;
  char local_e4;
  char local_e3;
  char local_e2;
  undefined1 local_e1;
  undefined8 local_a0;
  longlong local_98;
  int7 iStack_90;
  undefined1 uStack_89;
  undefined8 *local_88;
  int6 iStack_80;
  undefined2 uStack_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_14006bf18(*param_1 + 800);
  FUN_140d00208(*param_1 + 0x298,param_2);
  FUN_14006bf18(*param_1 + 0x360,param_2);
  local_a0 = 0x400000000;
  local_98 = 0;
  _iStack_90 = 0;
  local_88 = (undefined8 *)0x0;
  _iStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0xff;
  uVar5 = 0;
  local_52 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  lVar3 = *param_1;
  local_110 = lVar3 + 800;
  local_103 = *(undefined1 *)(lVar3 + 0x350);
  local_108 = 0;
  local_104 = 0;
  local_102 = 3;
  local_78 = *(undefined8 *)(lVar3 + 0x338);
  uStack_70 = *(undefined8 *)(lVar3 + 0x2e0);
  cVar1 = *(char *)(lVar3 + 0x319);
  local_100 = lVar3 + 0x2a8;
  local_f3 = cVar1 * '\b' + '\b';
  local_f2 = (cVar1 != '\0') * '\t' + '\x05';
  local_f8 = 0;
  local_f4 = 0;
  local_f1 = 4;
  local_e4 = cVar1 * '\x04' + '\x04';
  local_e8 = 0;
  local_e1 = 4;
  local_f0 = local_100;
  local_e3 = local_f3;
  local_e2 = local_f2;
  FUN_14472d638(lVar3 + 0x298,lVar3 + 0x3c8,&local_110,0xffffffff);
  lVar3 = *param_1;
  uVar2 = *(uint *)(lVar3 + 0x310);
  uVar6 = uVar2 - 1;
  if (0 < (int)uVar2) {
    uVar6 = 0;
  }
  local_54 = CONCAT11((char)uVar2,(char)uVar6);
  local_68 = *(undefined8 *)(lVar3 + 0x2f0);
  if ((-1 < (int)uVar6) && (uVar6 < uVar2)) {
    bVar4 = *(char *)(lVar3 + 0x318) + 2;
    local_98 = lVar3 + 0x2c0;
    uVar8 = 0xc;
    if (*(char *)(lVar3 + 0x318) != '\0') {
      uVar8 = 2;
    }
    _iStack_90 = CONCAT17(4,(uint7)CONCAT12(uVar8,CONCAT11((char)(uVar2 << (bVar4 & 0x1f)),
                                                           (char)(uVar6 << (bVar4 & 0x1f)))) << 0x20
                         );
  }
  if (*(int *)(lVar3 + 0x394) == 0) {
    local_88 = &DAT_14ca94d98;
    puVar7 = &DAT_14ca94db0;
    bVar4 = 0;
  }
  else {
    local_88 = (undefined8 *)(lVar3 + 0x360);
    puVar7 = (undefined8 *)(lVar3 + 0x380);
    bVar4 = *(byte *)(lVar3 + 0x390);
    uVar5 = 0xffffffff;
  }
  uStack_60 = *puVar7;
  _iStack_80 = CONCAT26(0x408,(uint6)bVar4 << 0x28);
  local_58 = uVar5;
  FUN_140ba0b60(lVar3 + 0x3c8,param_2);
  FUN_14006bf18(*param_1 + 0x3c8,param_2);
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f5c00 FUN_1479f5c00 body=12 status=ok
// SIG undefined FUN_1479f5c00(void)

void FUN_1479f5c00(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001479f5c09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1479f5c0c FUN_1479f5c0c body=29 status=ok
// SIG undefined FUN_1479f5c0c(void)

undefined8 FUN_1479f5c0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f5c2a FUN_1479f5c2a body=105 status=ok
// SIG undefined FUN_1479f5c2a(void)

void FUN_1479f5c2a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1479f5918(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1479f5918(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001479f5c89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1479f5c94 FUN_1479f5c94 body=142 status=ok
// SIG undefined FUN_1479f5c94(void)

void FUN_1479f5c94(longlong param_1)

{
  FUN_144725486(param_1 + 0x3c8);
  FUN_144725486(param_1 + 800);
  FUN_1412db970(param_1 + 0x298);
  FUN_144725486(param_1 + 0x360);
  FUN_1412b7f2a(param_1 + 0x3c8);
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FUN_1400020a8();
  }
  FUN_140296b76(param_1 + 0x360);
  FUN_140296ab8(param_1 + 800);
  FUN_140296d44(param_1 + 0x298);
  FUN_140064e2c(param_1);
  return;
}



// FUNCTION 1479f5d22 FUN_1479f5d22 body=59 status=ok
// SIG undefined FUN_1479f5d22(void)

void FUN_1479f5d22(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479f5d5e(param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  FUN_140047b96(param_1,*(undefined4 *)(param_1 + 0x28),iVar1,0x10);
  return;
}



// FUNCTION 1479f5d5e FUN_1479f5d5e body=105 status=ok
// SIG undefined FUN_1479f5d5e(void)

ulonglong FUN_1479f5d5e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 2;
  if (2 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1479f5dc8 FUN_1479f5dc8 body=52 status=ok
// SIG undefined FUN_1479f5dc8(void)

void FUN_1479f5dc8(longlong *param_1)

{
  FUN_1479f5dfc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479f5dfc FUN_1479f5dfc body=89 status=ok
// SIG undefined FUN_1479f5dfc(void)

void FUN_1479f5dfc(longlong param_1)

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



// FUNCTION 1479f5f80 FUN_1479f5f80 body=272 status=ok
// SIG undefined FUN_1479f5f80(void)

undefined8 FUN_1479f5f80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar1 = (double)*(float *)(param_1 + 700);
  local_60 = *(double *)(param_1 + 0x90) * dVar1 * 0.5;
  local_68 = *(double *)(param_1 + 0x70) * dVar1 * 0.5;
  local_70 = dVar1 * *(double *)(param_1 + 0x50) * 0.5;
  local_48 = *(double *)(param_1 + 0x140) + local_60;
  local_50 = *(double *)(param_1 + 0x138) + local_68;
  local_58 = *(double *)(param_1 + 0x130) + local_70;
  local_60 = *(double *)(param_1 + 0x140) - local_60;
  local_68 = *(double *)(param_1 + 0x138) - local_68;
  local_70 = *(double *)(param_1 + 0x130) - local_70;
  FUN_144afdf0e(param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f6092 FUN_1479f6092 body=91 status=ok
// SIG undefined FUN_1479f6092(void)

void FUN_1479f6092(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1478d9026(param_1,iVar2);
  }
  FUN_1478d8c05((longlong)iVar2 * 0x70 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1479f60ee FUN_1479f60ee body=94 status=ok
// SIG undefined FUN_1479f60ee(void)

void FUN_1479f60ee(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1478dd0c2(param_1,iVar2);
  }
  FUN_1478d8d02((longlong)iVar2 * 0xb0 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1479f614c FUN_1479f614c body=103 status=ok
// SIG undefined FUN_1479f614c(void)

void FUN_1479f614c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1479f61b4(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x80 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 7);
    return;
  }
  return;
}



// FUNCTION 1479f61b4 FUN_1479f61b4 body=132 status=ok
// SIG undefined FUN_1479f61b4(void)

void FUN_1479f61b4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1479f623a FUN_1479f623a body=9 status=ok
// SIG undefined FUN_1479f623a(void)

void FUN_1479f623a(longlong param_1)

{
  FUN_140595d6e(param_1 + 0x10);
  return;
}



// FUNCTION 1479f6244 FUN_1479f6244 body=29 status=ok
// SIG undefined FUN_1479f6244(void)

undefined8 FUN_1479f6244(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f6262 FUN_1479f6262 body=9 status=ok
// SIG undefined FUN_1479f6262(void)

void FUN_1479f6262(longlong param_1)

{
  FUN_1478c1a5e(param_1 + 0x10);
  return;
}



// FUNCTION 1479f626c FUN_1479f626c body=29 status=ok
// SIG undefined FUN_1479f626c(void)

undefined8 FUN_1479f626c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f628a FUN_1479f628a body=143 status=ok
// SIG undefined FUN_1479f628a(void)

void FUN_1479f628a(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1479f631a FUN_1479f631a body=353 status=ok
// SIG undefined FUN_1479f631a(void)

undefined8 * FUN_1479f631a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  FUN_1479f647c();
  *param_1 = &PTR_FUN_14a544a90;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  FUN_147765084(param_1 + 0x22,param_2 + 0x110);
  *param_1 = &PTR_FUN_14a83e390;
  lVar2 = *(longlong *)(param_2 + 0x160);
  param_1[0x2c] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[0x2d] = *(undefined8 *)(param_2 + 0x168);
  param_1[0x2e] = 0;
  iVar1 = *(int *)(param_2 + 0x178);
  _Src = *(void **)(param_2 + 0x170);
  *(int *)(param_1 + 0x2f) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  }
  else {
    FUN_1479f3c8a(param_1 + 0x2e,iVar1,0);
    memcpy((void *)param_1[0x2e],_Src,(longlong)iVar1 * 0x70);
  }
  param_1[0x30] = *(undefined8 *)(param_2 + 0x180);
  lVar2 = *(longlong *)(param_2 + 0x188);
  param_1[0x31] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[0x32] = *(undefined8 *)(param_2 + 400);
  lVar2 = *(longlong *)(param_2 + 0x198);
  param_1[0x33] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1479f647c FUN_1479f647c body=181 status=ok
// SIG undefined FUN_1479f647c(void)

undefined8 * FUN_1479f647c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_1479f6532();
  *param_1 = &PTR_FUN_14a544ad0;
  lVar2 = *(longlong *)(param_2 + 0xe8);
  param_1[0x1d] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar3 = *(undefined4 *)(param_2 + 0xf4);
  uVar4 = *(undefined4 *)(param_2 + 0xf8);
  uVar5 = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar3;
  *(undefined4 *)(param_1 + 0x1f) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar5;
  param_1[0x20] = 0;
  iVar1 = *(int *)(param_2 + 0x108);
  _Src = *(void **)(param_2 + 0x100);
  *(int *)(param_1 + 0x21) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  }
  else {
    FUN_1401254a2(param_1 + 0x20,iVar1,0);
    memcpy((void *)param_1[0x20],_Src,(longlong)iVar1 * 0x28);
  }
  return param_1;
}



// FUNCTION 1479f6532 FUN_1479f6532 body=754 status=ok
// SIG undefined FUN_1479f6532(void)

undefined8 * FUN_1479f6532(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_14a544b10;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1);
  }
  lVar3 = *(longlong *)(param_2 + 0x18);
  param_1[3] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_147764f00(param_1 + 5,iVar1,0);
    FUN_147764f62(param_1[5],uVar4,iVar1);
  }
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1402ae8a8(param_1 + 7,iVar1,0);
    FUN_140160884(param_1[7],uVar4,iVar1);
  }
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  pvVar2 = *(void **)(param_2 + 0x48);
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_147764fc2(param_1 + 0xb,iVar1,0);
    FUN_147765024(param_1[0xb],uVar4,iVar1);
  }
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0x70);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  *(int *)(param_1 + 0xe) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_14584f60e(param_1 + 0xd,iVar1,0);
    FUN_14584f5e2(param_1[0xd],uVar4,iVar1);
  }
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x80);
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1457d1bce(param_1 + 0xf,iVar1,0);
    FUN_140f746fd(param_1[0xf],uVar4,iVar1);
  }
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x90);
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  *(int *)(param_1 + 0x12) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_1457d25ec(param_1 + 0x11,iVar1,0);
    FUN_1457d265f(param_1[0x11],uVar4,iVar1);
  }
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_140cae46a(param_1 + 0x13,param_2 + 0x98);
  return param_1;
}



// FUNCTION 1479f6824 FUN_1479f6824 body=58 status=ok
// SIG undefined FUN_1479f6824(void)

void FUN_1479f6824(longlong param_1,int param_2)

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



// FUNCTION 1479f6864 FUN_1479f6864 body=29 status=ok
// SIG undefined FUN_1479f6864(void)

bool FUN_1479f6864(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1479f6882 FUN_1479f6882 body=26 status=ok
// SIG undefined FUN_1479f6882(void)

bool FUN_1479f6882(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1479f689c FUN_1479f689c body=101 status=ok
// SIG undefined FUN_1479f689c(void)

void FUN_1479f689c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8614c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479f6902 FUN_1479f6902 body=134 status=ok
// SIG undefined FUN_1479f6902(void)

void FUN_1479f6902(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8614c0;
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
                    /* WARNING: Could not recover jumptable at 0x0001479f6979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1479f6988 FUN_1479f6988 body=146 status=ok
// SIG undefined FUN_1479f6988(void)

bool FUN_1479f6988(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f6a1c FUN_1479f6a1c body=132 status=ok
// SIG undefined FUN_1479f6a1c(void)

void FUN_1479f6a1c(longlong param_1,int param_2)

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



// FUNCTION 1479f6aa2 FUN_1479f6aa2 body=76 status=ok
// SIG undefined FUN_1479f6aa2(void)

void FUN_1479f6aa2(void)

{
  int iVar1;
  
  iVar1 = FUN_1479f6aee(DAT_14cad1370,DAT_14cad1374);
  if (iVar1 != DAT_14cad1374) {
    DAT_14cad1374 = iVar1;
    FUN_1446f8d3c(&DAT_14cad1368,DAT_14cad1370,iVar1,8,8);
  }
  return;
}



// FUNCTION 1479f6aee FUN_1479f6aee body=93 status=ok
// SIG undefined FUN_1479f6aee(void)

ulonglong FUN_1479f6aee(uint param_1,uint param_2)

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



// FUNCTION 1479f6b4c FUN_1479f6b4c body=190 status=ok
// SIG undefined FUN_1479f6b4c(void)

void FUN_1479f6b4c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1479f6c0a(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1479f6c0a FUN_1479f6c0a body=132 status=ok
// SIG undefined FUN_1479f6c0a(void)

void FUN_1479f6c0a(longlong param_1,int param_2)

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



// FUNCTION 1479f6c90 FUN_1479f6c90 body=62 status=ok
// SIG undefined FUN_1479f6c90(void)

void FUN_1479f6c90(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479f6cce(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1479f6cce FUN_1479f6cce body=93 status=ok
// SIG undefined FUN_1479f6cce(void)

ulonglong FUN_1479f6cce(uint param_1,uint param_2)

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



// FUNCTION 1479f6d2c FUN_1479f6d2c body=100 status=ok
// SIG undefined FUN_1479f6d2c(void)

void FUN_1479f6d2c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001479f6d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1479f6d90 FUN_1479f6d90 body=68 status=ok
// SIG undefined FUN_1479f6d90(void)

void FUN_1479f6d90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1457dfb3e(param_1 + 0x20);
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001479f6dc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1479f6dd4 FUN_1479f6dd4 body=68 status=ok
// SIG undefined FUN_1479f6dd4(void)

void FUN_1479f6dd4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1479f6e18(param_1 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x0001479f6e0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1479f6e18 FUN_1479f6e18 body=100 status=ok
// SIG undefined FUN_1479f6e18(void)

void FUN_1479f6e18(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001479f6e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1479f6e7c FUN_1479f6e7c body=68 status=ok
// SIG undefined FUN_1479f6e7c(void)

void FUN_1479f6e7c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1479f6ec0(param_1 + 0x20);
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001479f6eb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1479f6ec0 FUN_1479f6ec0 body=100 status=ok
// SIG undefined FUN_1479f6ec0(void)

void FUN_1479f6ec0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001479f6f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1479f6f24 FUN_1479f6f24 body=96 status=ok
// SIG undefined FUN_1479f6f24(void)

void FUN_1479f6f24(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1479f6f84 FUN_1479f6f84 body=188 status=ok
// SIG undefined FUN_1479f6f84(void)

longlong FUN_1479f6f84(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x30;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x30) == *param_3) {
          if (lVar3 != 0) goto LAB_1479f7023;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x28);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1479f7042(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x30 + *param_1;
LAB_1479f7023:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x18;
}



// FUNCTION 1479f7042 FUN_1479f7042 body=309 status=ok
// SIG undefined FUN_1479f7042(void)

undefined4 * FUN_1479f7042(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1479f7178(param_1,local_40);
  puVar1 = (undefined8 *)*param_4;
  *local_38 = *puVar1;
  local_38[1] = puVar1[1];
  lVar6 = puVar1[2];
  local_38[2] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  local_38[3] = 0;
  local_38[4] = 0;
  FUN_140ffc319(0,0);
  *(undefined4 *)(local_38 + 5) = 0xffffffff;
  cVar2 = FUN_1479f7266(param_1,param_3,local_38);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_38 + 0x2c) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 5) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1479f7386(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f7178 FUN_1479f7178 body=238 status=ok
// SIG undefined FUN_1479f7178(void)

int * FUN_1479f7178(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 1479f7266 FUN_1479f7266 body=165 status=ok
// SIG undefined FUN_1479f7266(void)

undefined8 FUN_1479f7266(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          FUN_1479f4858(puVar1);
          lVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_1479f730c(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 1479f730c FUN_1479f730c body=122 status=ok
// SIG undefined FUN_1479f730c(void)

void FUN_1479f730c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 1479f7386 FUN_1479f7386 body=477 status=ok
// SIG undefined FUN_1479f7386(void)

void FUN_1479f7386(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 1479f7564 FUN_1479f7564 body=132 status=ok
// SIG undefined FUN_1479f7564(void)

void FUN_1479f7564(longlong param_1,int param_2)

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



// FUNCTION 1479f75ea FUN_1479f75ea body=128 status=ok
// SIG undefined FUN_1479f75ea(void)

void FUN_1479f75ea(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x10;
    } while (lVar5 << 4 != uVar4);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1479f7564(param_1,iVar1);
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + lVar5 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + lVar5 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1479f766a FUN_1479f766a body=143 status=ok
// SIG undefined FUN_1479f766a(void)

void FUN_1479f766a(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14a8615f0;
  *(undefined1 *)(puVar2 + 2) = *param_1;
  uVar1 = *(undefined8 *)(param_1 + 1);
  puVar2[3] = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)((longlong)puVar2 + 0x11) = uVar1;
  puVar2[4] = *(undefined8 *)(param_1 + 0x10);
  puVar2[5] = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar2[6] = *(undefined8 *)(param_1 + 0x20);
  puVar2[7] = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar2[8] = *(undefined8 *)(param_1 + 0x30);
  puVar2[9] = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(puVar2 + 10) = param_1[0x40];
  return;
}



// FUNCTION 1479f7704 FUN_1479f7704 body=29 status=ok
// SIG undefined FUN_1479f7704(void)

undefined8 FUN_1479f7704(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f7722 FUN_1479f7722 body=118 status=ok
// SIG undefined FUN_1479f7722(void)

void FUN_1479f7722(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1479f7798 FUN_1479f7798 body=147 status=ok
// SIG undefined FUN_1479f7798(void)

void FUN_1479f7798(longlong param_1,int param_2)

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



// FUNCTION 1479f782c FUN_1479f782c body=48 status=ok
// SIG undefined FUN_1479f782c(void)

void FUN_1479f782c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1479f785c FUN_1479f785c body=262 status=ok
// SIG undefined FUN_1479f785c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479f785c(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_88 [40];
  undefined *local_60;
  undefined *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  if (((iVar2 == 0 && iVar1 == 0) && iVar3 == 0) && iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  uVar5 = *(undefined8 *)(param_2 + 4);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9c58);
  iVar7 = DAT_14cae9c3c;
  iVar6 = DAT_14cae9c10;
  local_60 = &DAT_14cae9c80;
  local_58 = &DAT_14cae9c88;
  _DAT_14cae9c80 = param_1;
  _DAT_14cae9c88 = iVar1;
  _DAT_14cae9c8c = iVar2;
  _DAT_14cae9c90 = iVar3;
  _DAT_14cae9c94 = iVar4;
  _DAT_14cae9c98 = uVar5;
  FUN_1479f7b92(local_4c);
  if (iVar6 == iVar7) {
    FUN_140f9708a(&DAT_14c9647b8,&DAT_14cae9c00);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001479f796e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9c58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 1479f7a0e FUN_1479f7a0e body=155 status=ok
// SIG undefined FUN_1479f7a0e(void)

undefined8 FUN_1479f7a0e(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x28) == param_2) {
          FUN_1479f7aaa(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1479f7aaa FUN_1479f7aaa body=93 status=ok
// SIG undefined FUN_1479f7aaa(void)

void FUN_1479f7aaa(longlong *param_1,int param_2)

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
  FUN_1479f7b08(param_1,param_2,1);
  return;
}



// FUNCTION 1479f7b08 FUN_1479f7b08 body=138 status=ok
// SIG undefined FUN_1479f7b08(void)

void FUN_1479f7b08(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1479f7b92 FUN_1479f7b92 body=353 status=ok
// SIG undefined FUN_1479f7b92(void)

undefined4 * FUN_1479f7b92(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1479f7cf4(local_40);
  puVar1 = (undefined4 *)param_2[1];
  uVar10 = *(ulonglong *)*param_2;
  *local_38 = uVar10;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_38 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_38 + 0xc) = uVar3;
  *(undefined4 *)(local_38 + 2) = uVar4;
  *(undefined4 *)((longlong)local_38 + 0x14) = uVar5;
  local_38[3] = *(ulonglong *)(puVar1 + 4);
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  cVar6 = FUN_1479f7e02(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar6 == '\0') {
    uVar8 = DAT_14cae9c10 - DAT_14cae9c3c;
    iVar11 = 1;
    if (3 < uVar8) {
      uVar10 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= DAT_14cae9c50)) {
      uVar7 = DAT_14cae9c50 - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x24) = uVar7;
      puVar9 = DAT_14cae9c48;
      if (DAT_14cae9c48 == (undefined *)0x0) {
        puVar9 = &DAT_14cae9c40;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)(puVar9 + ((longlong)DAT_14cae9c50 - 1U & (longlong)(int)uVar7) * 4);
      puVar9 = DAT_14cae9c48;
      if (DAT_14cae9c48 == (undefined *)0x0) {
        puVar9 = &DAT_14cae9c40;
      }
      *(undefined4 *)(puVar9 + ((longlong)DAT_14cae9c50 - 1U & (longlong)(int)uVar7) * 4) = local_44
      ;
    }
    else {
      DAT_14cae9c50 = iVar11;
      FUN_1479f7ea8(&DAT_14cae9c08);
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f7cf4 FUN_1479f7cf4 body=270 status=ok
// SIG undefined FUN_1479f7cf4(void)

int * FUN_1479f7cf4(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cae9c38;
  iVar4 = DAT_14cae9c10;
  if (DAT_14cae9c3c == 0) {
    iVar2 = DAT_14cae9c10 + 1;
    bVar7 = DAT_14cae9c14 == DAT_14cae9c10;
    DAT_14cae9c10 = iVar2;
    if (bVar7) {
      FUN_140549c28(&DAT_14cae9c08,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cae9c18,1);
    puVar3 = DAT_14cae9c28;
    if (DAT_14cae9c28 == (undefined *)0x0) {
      puVar3 = &DAT_14cae9c18;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cae9c38;
    DAT_14cae9c38 = *(int *)(DAT_14cae9c08 + 4 + lVar6 * 0x28);
    DAT_14cae9c3c = DAT_14cae9c3c + -1;
    iVar4 = iVar2;
    if (DAT_14cae9c3c != 0) {
      *(undefined4 *)(DAT_14cae9c08 + (longlong)DAT_14cae9c38 * 0x28) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cae9c18;
  if (DAT_14cae9c28 != (undefined *)0x0) {
    puVar3 = DAT_14cae9c28;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x28 + DAT_14cae9c08;
  return param_1;
}



// FUNCTION 1479f7e02 FUN_1479f7e02 body=165 status=ok
// SIG undefined FUN_1479f7e02(void)

undefined8 FUN_1479f7e02(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined *puVar10;
  
  if ((DAT_14cae9c10 - DAT_14cae9c3c != 1) && (DAT_14cae9c10 != DAT_14cae9c3c)) {
    puVar10 = &DAT_14cae9c40;
    if (DAT_14cae9c48 != (undefined *)0x0) {
      puVar10 = DAT_14cae9c48;
    }
    iVar9 = *(int *)(puVar10 + (ulonglong)(DAT_14cae9c50 - 1U & param_1) * 4);
    if (iVar9 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cae9c08 + (longlong)iVar9 * 0x28);
        if (*plVar1 == *param_2) {
          lVar6 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar7 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
          lVar8 = param_2[3];
          uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
          *(int *)(plVar1 + 2) = (int)param_2[2];
          *(undefined4 *)((longlong)plVar1 + 0x14) = uVar4;
          *(int *)(plVar1 + 3) = (int)lVar8;
          *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar5;
          *(int *)plVar1 = (int)lVar6;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar7;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_1479f7b08(&DAT_14cae9c08,*param_3,1);
          *param_3 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar1[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 1479f7ea8 FUN_1479f7ea8 body=474 status=ok
// SIG undefined FUN_1479f7ea8(void)

void FUN_1479f7ea8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x28);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x24 + lVar5 * 0x28) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479f8084 FUN_1479f8084 body=243 status=ok
// SIG undefined FUN_1479f8084(void)

void FUN_1479f8084(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  FUN_144aa17a4();
  if (DAT_14cad1658 == 0) {
    uVar4 = FUN_140002dac();
    DAT_14cad1658 = FUN_140002ddd(FUN_1463b8577,uVar4,L"PrecomputedLightInstanceData");
    if (DAT_14cad1658 == 0) {
      return;
    }
  }
  lVar2 = DAT_14cad1658;
  FUN_14485c47a(param_1 + 8,DAT_14cad1658);
  iVar1 = *(int *)(lVar2 + 0x5c);
  uVar5 = -iVar1 & (*(int *)(lVar2 + 0x58) + iVar1) - 1U;
  puVar3 = (undefined8 *)FUN_14001cc68((longlong)(int)(uVar5 + (uVar5 == 0)),0);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  lVar2 = *param_2;
  FUN_147a04442(puVar3,lVar2);
  *puVar3 = &PTR_FUN_14a860650;
  puVar7 = (undefined8 *)(lVar2 + 0x240);
  puVar8 = puVar3 + 0x2c;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x2b0);
  puVar3[0x38] = *(undefined8 *)(lVar2 + 0x2a8);
  puVar3[0x39] = uVar4;
  uVar4 = *(undefined8 *)(lVar2 + 0x2c0);
  puVar3[0x3a] = *(undefined8 *)(lVar2 + 0x2b8);
  puVar3[0x3b] = uVar4;
  *(undefined4 *)(puVar3 + 0x3c) = *(undefined4 *)(lVar2 + 0x304);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 1479f8178 FUN_1479f8178 body=105 status=ok
// SIG undefined FUN_1479f8178(void)

undefined8 FUN_1479f8178(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x50,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x50)) {
    uVar5 = uVar2 / 0x50 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x50,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1479f81e2 FUN_1479f81e2 body=98 status=ok
// SIG undefined FUN_1479f81e2(void)

undefined8 FUN_1479f81e2(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 3;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2492492492492493),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  iVar5 = 0x7fffffff;
  if (param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,iVar5,0x38,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return uVar3;
}



// FUNCTION 1479f8244 FUN_1479f8244 body=105 status=ok
// SIG undefined FUN_1479f8244(void)

undefined8 FUN_1479f8244(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x30,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x30)) {
    uVar5 = uVar2 / 0x30 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x30,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1479f82ad FUN_1479f82ad body=47 status=ok
// SIG undefined FUN_1479f82ad(void)

void FUN_1479f82ad(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_1479f82dc(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1479f82dc FUN_1479f82dc body=173 status=ok
// SIG undefined FUN_1479f82dc(void)

undefined8 * FUN_1479f82dc(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1405b70fe(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0x18);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  return param_1;
}



// FUNCTION 1479f838a FUN_1479f838a body=147 status=ok
// SIG undefined FUN_1479f838a(void)

void FUN_1479f838a(longlong param_1,int param_2)

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



// FUNCTION 1479f841e FUN_1479f841e body=143 status=ok
// SIG undefined FUN_1479f841e(void)

void FUN_1479f841e(longlong param_1,int param_2)

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



// FUNCTION 1479f84ae FUN_1479f84ae body=113 status=ok
// SIG undefined FUN_1479f84ae(void)

void FUN_1479f84ae(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 1479f8520 FUN_1479f8520 body=62 status=ok
// SIG undefined FUN_1479f8520(void)

void FUN_1479f8520(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479f855e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 1479f855e FUN_1479f855e body=112 status=ok
// SIG undefined FUN_1479f855e(void)

ulonglong FUN_1479f855e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1479f8598;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      param_2 = param_2 / 0x50;
    }
  }
LAB_1479f8598:
  return param_2 & 0xffffffff;
}



// FUNCTION 1479f85ce FUN_1479f85ce body=62 status=ok
// SIG undefined FUN_1479f85ce(void)

void FUN_1479f85ce(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479f860c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 1479f860c FUN_1479f860c body=104 status=ok
// SIG undefined FUN_1479f860c(void)

ulonglong FUN_1479f860c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1479f8642;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_1479f8642:
  return param_2 & 0xffffffff;
}



// FUNCTION 1479f8674 FUN_1479f8674 body=132 status=ok
// SIG undefined FUN_1479f8674(void)

void FUN_1479f8674(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (longlong *)(lVar1 + (longlong)(int)param_2 * 0x30);
  if (*(longlong *)(lVar1 + 0x10 + (longlong)(int)param_2 * 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x30),(longlong)iVar3 * 0x30);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1479f86f8 FUN_1479f86f8 body=62 status=ok
// SIG undefined FUN_1479f86f8(void)

void FUN_1479f86f8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479f8736(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 1479f8736 FUN_1479f8736 body=112 status=ok
// SIG undefined FUN_1479f8736(void)

ulonglong FUN_1479f8736(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1479f8770;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_1479f8770:
  return param_2 & 0xffffffff;
}



// FUNCTION 1479f87a6 FUN_1479f87a6 body=109 status=ok
// SIG undefined FUN_1479f87a6(void)

void FUN_1479f87a6(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 1479f8814 FUN_1479f8814 body=113 status=ok
// SIG undefined FUN_1479f8814(void)

void FUN_1479f8814(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 1479f88a0 FUN_1479f88a0 body=29 status=ok
// SIG undefined FUN_1479f88a0(void)

bool FUN_1479f88a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1479f88be FUN_1479f88be body=101 status=ok
// SIG undefined FUN_1479f88be(void)

void FUN_1479f88be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a861880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479f8924 FUN_1479f8924 body=101 status=ok
// SIG undefined FUN_1479f8924(void)

void FUN_1479f8924(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a861880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479f898a FUN_1479f898a body=134 status=ok
// SIG undefined FUN_1479f898a(void)

void FUN_1479f898a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a861880;
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
                    /* WARNING: Could not recover jumptable at 0x0001479f8a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1479f8a10 FUN_1479f8a10 body=44 status=ok
// SIG undefined FUN_1479f8a10(void)

void FUN_1479f8a10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001479f8a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1479f8a3c FUN_1479f8a3c body=156 status=ok
// SIG undefined FUN_1479f8a3c(void)

bool FUN_1479f8a3c(longlong param_1,undefined8 param_2)

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



// FUNCTION 1479f8af4 FUN_1479f8af4 body=29 status=ok
// SIG undefined FUN_1479f8af4(void)

bool FUN_1479f8af4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1479f8b12 FUN_1479f8b12 body=101 status=ok
// SIG undefined FUN_1479f8b12(void)

void FUN_1479f8b12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a861960;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8618f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479f8b78 FUN_1479f8b78 body=101 status=ok
// SIG undefined FUN_1479f8b78(void)

void FUN_1479f8b78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a861960;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8618f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479f8bde FUN_1479f8bde body=134 status=ok
// SIG undefined FUN_1479f8bde(void)

void FUN_1479f8bde(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a861960;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a8618f0;
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
                    /* WARNING: Could not recover jumptable at 0x0001479f8c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1479f8c64 FUN_1479f8c64 body=44 status=ok
// SIG undefined FUN_1479f8c64(void)

void FUN_1479f8c64(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001479f8c8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1479f8c92 FUN_1479f8c92 body=131 status=ok
// SIG undefined FUN_1479f8c92(void)

void FUN_1479f8c92(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 0x88) = 0;
  if (*(int *)(param_2 + 0x8c) < 0) {
    FUN_1479f8df8(param_2);
  }
  local_20 = FUN_144a3a302();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1479f8d16(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f8d16 FUN_1479f8d16 body=204 status=ok
// SIG undefined FUN_1479f8d16(void)

void FUN_1479f8d16(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1479f8d69;
    }
  }
  lVar2 = 0;
LAB_1479f8d69:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1479f9032(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f8df8 FUN_1479f8df8 body=90 status=ok
// SIG undefined FUN_1479f8df8(void)

void FUN_1479f8df8(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x80),
              (longlong)*(int *)((longlong)param_1 + 0x88) << 3);
      FUN_1446efa72((longlong)param_1 + 0x80,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 1479f8e52 FUN_1479f8e52 body=141 status=ok
// SIG undefined FUN_1479f8e52(void)

void FUN_1479f8e52(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 1479f9032 FUN_1479f9032 body=465 status=ok
// SIG undefined FUN_1479f9032(void)

void FUN_1479f9032(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1479f9161:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1479f9179;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_1479f9161;
LAB_1479f9179:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = *(int *)(param_3 + 0x88);
          *(uint *)(param_3 + 0x88) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0x8c) < iVar3 + 1U) {
            FUN_1479f9204(param_3,iVar3);
          }
          lVar5 = *(longlong *)(param_3 + 0x80);
          if (*(longlong *)(param_3 + 0x80) == 0) {
            lVar5 = param_3;
          }
          *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479f9204 FUN_1479f9204 body=119 status=ok
// SIG undefined FUN_1479f9204(void)

void FUN_1479f9204(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_1479f8e52(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1479f927c FUN_1479f927c body=321 status=ok
// SIG undefined FUN_1479f927c(void)

undefined4 * FUN_1479f927c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1479f93be(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar9 = ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4);
  cVar5 = FUN_1479f94e2(param_1,iVar9,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    cVar5 = FUN_1479f96a0(param_1,*(int *)(param_1 + 0x148) - *(int *)(param_1 + 0x16c));
    if (cVar5 == '\0') {
      uVar6 = (longlong)iVar9 & (longlong)*(int *)(param_1 + 0x198) - 1U;
      iVar9 = (int)uVar6;
      *(int *)(local_40 + 2) = iVar9;
      lVar8 = *(longlong *)(param_1 + 400);
      if (*(longlong *)(param_1 + 400) == 0) {
        lVar8 = param_1 + 0x170;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x198) - 1U & uVar6) * 4);
      lVar8 = *(longlong *)(param_1 + 400);
      if (*(longlong *)(param_1 + 400) == 0) {
        lVar8 = param_1 + 0x170;
      }
      *(undefined4 *)(lVar8 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x198) - 1U) * 4) =
           uVar4;
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f93be FUN_1479f93be body=291 status=ok
// SIG undefined FUN_1479f93be(void)

int * FUN_1479f93be(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x16c) == 0) {
    iVar6 = *(int *)(param_1 + 0x148);
    *(int *)(param_1 + 0x148) = iVar6 + 1;
    if (*(int *)(param_1 + 0x14c) == iVar6) {
      FUN_1479f9582(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_14489e6aa(param_1 + 0x150,1);
    lVar5 = *(longlong *)(param_1 + 0x158);
    if (*(longlong *)(param_1 + 0x158) == 0) {
      lVar5 = param_1 + 0x150;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x140);
    if (*(longlong *)(param_1 + 0x140) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x168);
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(lVar5 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 0x168) = iVar4;
    iVar3 = *(int *)(param_1 + 0x16c) + -1;
    *(int *)(param_1 + 0x16c) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar4 * 0x14) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 0x150;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x158);
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar5 + lVar7 * 0x14;
  return param_2;
}



// FUNCTION 1479f94e2 FUN_1479f94e2 body=160 status=ok
// SIG undefined FUN_1479f94e2(void)

undefined8 FUN_1479f94e2(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x148) - *(int *)(param_1 + 0x16c) != 1) &&
     (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x16c))) {
    lVar2 = param_1 + 0x170;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar2 = *(longlong *)(param_1 + 400);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x198) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x140);
      if (*(longlong *)(param_1 + 0x140) == 0) {
        lVar2 = param_1;
      }
      do {
        plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0x14);
        if (*plVar1 == *param_3) {
          lVar2 = *param_3;
          *(int *)(plVar1 + 1) = (int)param_3[1];
          *plVar1 = lVar2;
          FUN_1479f960c(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1479f9582 FUN_1479f9582 body=136 status=ok
// SIG undefined FUN_1479f9582(void)

void FUN_1479f9582(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x14c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x14,0);
      iVar4 = (int)(uVar3 / 0x14);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x14c) = iVar5;
    FUN_1479f54a6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1479f960c FUN_1479f960c body=148 status=ok
// SIG undefined FUN_1479f960c(void)

void FUN_1479f960c(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0x16c) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0x168) * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x14);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x16c) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x168);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0x168) = param_2;
  *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
  lVar5 = param_1 + 0x150;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x158);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1479f96a0 FUN_1479f96a0 body=100 status=ok
// SIG undefined FUN_1479f96a0(void)

undefined8 FUN_1479f96a0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 3) {
    iVar4 = 8;
  }
  if (param_2 < 4) {
    iVar4 = 8;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x198))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x198) = iVar4;
    FUN_1479f9704(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1479f9704 FUN_1479f9704 body=523 status=ok
// SIG undefined FUN_1479f9704(void)

void FUN_1479f9704(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1446efa72(param_1 + 400,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 0x198);
  uVar3 = local_58;
  if (uVar2 != 0) {
    lVar1 = param_1 + 0x170;
    uVar7 = 0;
    FUN_140a8e97c(lVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        lVar6 = *(longlong *)(param_1 + 400);
        if (*(longlong *)(param_1 + 400) == 0) {
          lVar6 = lVar1;
        }
        *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x198) + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = param_1 + 0x150;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x160) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar6 = *(longlong *)(local_70 + 0x140);
        if (*(longlong *)(local_70 + 0x140) == 0) {
          lVar6 = local_70;
        }
        lVar5 = (longlong)iVar4;
        uVar3 = *(undefined8 *)(lVar6 + lVar5 * 0x14);
        uVar2 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar7 = (uint)uVar3 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar3 << 0x10 | uVar7) + (int)((ulonglong)uVar3 >> 0x20) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) &
                (longlong)*(int *)(param_1 + 0x198) - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar6 + 0x10 + lVar5 * 0x14) = iVar8;
        lVar10 = *(longlong *)(param_1 + 400);
        if (*(longlong *)(param_1 + 400) == 0) {
          lVar10 = lVar1;
        }
        *(undefined4 *)(lVar6 + 0xc + lVar5 * 0x14) =
             *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x198) - 1U & uVar9) * 4);
        lVar6 = *(longlong *)(param_1 + 400);
        if (*(longlong *)(param_1 + 400) == 0) {
          lVar6 = lVar1;
        }
        *(int *)(lVar6 + ((longlong)iVar8 & (longlong)*(int *)(param_1 + 0x198) - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479f9910 FUN_1479f9910 body=58 status=ok
// SIG undefined FUN_1479f9910(void)

void FUN_1479f9910(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479f994a(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_1401fcd14(param_1,*(undefined4 *)(param_1 + 0x48),iVar1,4);
  return;
}



// FUNCTION 1479f994a FUN_1479f994a body=108 status=ok
// SIG undefined FUN_1479f994a(void)

ulonglong FUN_1479f994a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x10;
  if (0x10 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}


