// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149856820 FUN_149856820 body=97 status=ok
// SIG undefined FUN_149856820(void)

void FUN_149856820(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14beb6e20;
  param_2[1] = &PTR_FUN_14beb2758;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0x3ff00000;
  uVar1 = DAT_14c8462c8;
  param_2[4] = DAT_14c8462c0;
  param_2[5] = uVar1;
  param_2[6] = DAT_14c8462d0;
  param_2[7] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}



// FUNCTION 149856882 FUN_149856882 body=97 status=ok
// SIG undefined FUN_149856882(void)

void FUN_149856882(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14beb6e20;
  param_2[1] = &PTR_FUN_14beb2758;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0x3ff00000;
  uVar1 = DAT_14c8462c8;
  param_2[4] = DAT_14c8462c0;
  param_2[5] = uVar1;
  param_2[6] = DAT_14c8462d0;
  param_2[7] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}



// FUNCTION 149856908 FUN_149856908 body=109 status=ok
// SIG undefined FUN_149856908(void)

undefined1 FUN_149856908(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_14985137e(param_2 + 8 + lVar2,param_3 + 8 + lVar2);
      puVar3 = (undefined8 *)(param_3 + 0x20 + lVar2);
      puVar4 = (undefined8 *)(param_2 + 0x20 + lVar2);
      for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar2 = lVar2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14985699e FUN_14985699e body=59 status=ok
// SIG undefined FUN_14985699e(void)

undefined8 FUN_14985699e(longlong *param_1)

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



// FUNCTION 149856a40 FUN_149856a40 body=99 status=ok
// SIG undefined FUN_149856a40(void)

undefined8 * FUN_149856a40(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb6e20;
  param_1[1] = &PTR_FUN_14beb2758;
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
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 149856aa4 FUN_149856aa4 body=91 status=ok
// SIG undefined FUN_149856aa4(void)

void FUN_149856aa4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *param_1 = &PTR_FUN_14beb6e20;
    param_1[1] = &PTR_FUN_14beb2758;
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
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}



// FUNCTION 149856b00 FUN_149856b00 body=103 status=ok
// SIG undefined FUN_149856b00(void)

void FUN_149856b00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14beb7010;
  param_2[1] = &PTR_FUN_14beb2758;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0xc;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[7] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[5] = DAT_14c8464e0;
  param_2[6] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[8] = DAT_14c8464e0;
  param_2[9] = uVar1;
  param_2[10] = DAT_14c8464f0;
  return;
}



// FUNCTION 149856b68 FUN_149856b68 body=103 status=ok
// SIG undefined FUN_149856b68(void)

void FUN_149856b68(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14beb7010;
  param_2[1] = &PTR_FUN_14beb2758;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0xc;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[7] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[5] = DAT_14c8464e0;
  param_2[6] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[8] = DAT_14c8464e0;
  param_2[9] = uVar1;
  param_2[10] = DAT_14c8464f0;
  return;
}



// FUNCTION 149856bf4 FUN_149856bf4 body=105 status=ok
// SIG undefined FUN_149856bf4(void)

undefined8 FUN_149856bf4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_14985137e(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      memcpy((void *)(param_2 + 0x20 + lVar1),(void *)(param_3 + 0x20 + lVar1),0xa0);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149856c86 FUN_149856c86 body=59 status=ok
// SIG undefined FUN_149856c86(void)

undefined8 FUN_149856c86(longlong *param_1)

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



// FUNCTION 149856d28 FUN_149856d28 body=99 status=ok
// SIG undefined FUN_149856d28(void)

undefined8 * FUN_149856d28(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb7010;
  param_1[1] = &PTR_FUN_14beb2758;
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
    thunk_FUN_1400020a8(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 149856d8c FUN_149856d8c body=91 status=ok
// SIG undefined FUN_149856d8c(void)

void FUN_149856d8c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *param_1 = &PTR_FUN_14beb7010;
    param_1[1] = &PTR_FUN_14beb2758;
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
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 149856e80 FUN_149856e80 body=105 status=ok
// SIG undefined FUN_149856e80(void)

undefined1 FUN_149856e80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      FUN_14985137e(param_2 + 8 + lVar10,param_3 + 8 + lVar10);
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar10);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x30 + lVar10);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x30 + lVar10);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      lVar10 = lVar10 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149856f12 FUN_149856f12 body=59 status=ok
// SIG undefined FUN_149856f12(void)

undefined8 FUN_149856f12(longlong *param_1)

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



// FUNCTION 149856fae FUN_149856fae body=99 status=ok
// SIG undefined FUN_149856fae(void)

undefined8 * FUN_149856fae(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb7200;
  param_1[1] = &PTR_FUN_14beb2758;
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



// FUNCTION 149857012 FUN_149857012 body=85 status=ok
// SIG undefined FUN_149857012(void)

void FUN_149857012(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    *param_1 = &PTR_FUN_14beb7200;
    param_1[1] = &PTR_FUN_14beb2758;
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
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 149857068 FUN_149857068 body=98 status=ok
// SIG undefined FUN_149857068(void)

void FUN_149857068(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14beb73f0;
  param_2[0x3e] = &PTR_FUN_14beb2758;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0x3f800000;
  param_2[0x42] = 0x3f80000000000000;
  param_2[0x43] = 0x103f800000;
  return;
}



// FUNCTION 1498570ca FUN_1498570ca body=98 status=ok
// SIG undefined FUN_1498570ca(void)

void FUN_1498570ca(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14beb73f0;
  param_2[0x3e] = &PTR_FUN_14beb2758;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0x3f800000;
  param_2[0x42] = 0x3f80000000000000;
  param_2[0x43] = 0x103f800000;
  return;
}



// FUNCTION 149857150 FUN_149857150 body=113 status=ok
// SIG undefined FUN_149857150(void)

undefined8 FUN_149857150(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x1f0;
    param_2 = param_2 + 0x1f0;
    do {
      FUN_1491c05d4(param_2 + -0x1e0,param_3 + -0x1e0);
      FUN_14985137e(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x1c);
      uVar2 = *(undefined4 *)(param_3 + 0x20);
      uVar3 = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_2 + 0x1c) = uVar1;
      *(undefined4 *)(param_2 + 0x20) = uVar2;
      *(undefined4 *)(param_2 + 0x24) = uVar3;
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
      param_3 = param_3 + 0x220;
      param_2 = param_2 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1498571ea FUN_1498571ea body=59 status=ok
// SIG undefined FUN_1498571ea(void)

undefined8 FUN_1498571ea(longlong *param_1)

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



// FUNCTION 149857236 FUN_149857236 body=40 status=ok
// SIG undefined FUN_149857236(void)

void FUN_149857236(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_1498572d8(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 1498572ac FUN_1498572ac body=43 status=ok
// SIG undefined FUN_1498572ac(void)

undefined8 FUN_1498572ac(undefined8 param_1,int param_2)

{
  FUN_1498572d8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 1498572d8 FUN_1498572d8 body=102 status=ok
// SIG undefined FUN_1498572d8(void)

void FUN_1498572d8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb73f0;
  param_1[0x3e] = &PTR_FUN_14beb2758;
  plVar3 = (longlong *)param_1[0x40];
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
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1498573ac FUN_1498573ac body=89 status=ok
// SIG undefined FUN_1498573ac(void)

undefined1 FUN_1498573ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_14985137e(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x20 + lVar1) = *(undefined4 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14985742e FUN_14985742e body=59 status=ok
// SIG undefined FUN_14985742e(void)

undefined8 FUN_14985742e(longlong *param_1)

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



// FUNCTION 1498574ca FUN_1498574ca body=99 status=ok
// SIG undefined FUN_1498574ca(void)

undefined8 * FUN_1498574ca(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb75e0;
  param_1[1] = &PTR_FUN_14beb2758;
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
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14985752e FUN_14985752e body=85 status=ok
// SIG undefined FUN_14985752e(void)

void FUN_14985752e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    *param_1 = &PTR_FUN_14beb75e0;
    param_1[1] = &PTR_FUN_14beb2758;
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
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1498575f4 FUN_1498575f4 body=85 status=ok
// SIG undefined FUN_1498575f4(void)

undefined8 FUN_1498575f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_14985137e(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x20 + lVar1) = *(undefined8 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149857672 FUN_149857672 body=59 status=ok
// SIG undefined FUN_149857672(void)

undefined8 FUN_149857672(longlong *param_1)

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



// FUNCTION 14985770e FUN_14985770e body=99 status=ok
// SIG undefined FUN_14985770e(void)

undefined8 * FUN_14985770e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb77d0;
  param_1[1] = &PTR_FUN_14beb2758;
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
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149857772 FUN_149857772 body=85 status=ok
// SIG undefined FUN_149857772(void)

void FUN_149857772(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    *param_1 = &PTR_FUN_14beb77d0;
    param_1[1] = &PTR_FUN_14beb2758;
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
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1498577fc FUN_1498577fc body=63 status=ok
// SIG undefined FUN_1498577fc(void)

undefined1 FUN_1498577fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149857b64(param_2,param_3);
    param_3 = param_3 + 0x3c0;
    param_2 = param_2 + 0x3c0;
  }
  return 1;
}



// FUNCTION 149857864 FUN_149857864 body=59 status=ok
// SIG undefined FUN_149857864(void)

undefined8 FUN_149857864(longlong *param_1)

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



// FUNCTION 1498578b0 FUN_1498578b0 body=40 status=ok
// SIG undefined FUN_1498578b0(void)

void FUN_1498578b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x3c0) == '\x01') {
    FUN_149857ad0(param_2);
    *(undefined1 *)(param_2 + 0x3c0) = 0;
  }
  return;
}



// FUNCTION 149857926 FUN_149857926 body=382 status=ok
// SIG undefined FUN_149857926(void)

undefined8 * FUN_149857926(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14beb79c0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = &PTR_FUN_14beb2758;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  memset(param_1 + 0x65,0,0x90);
  *(undefined1 *)(param_1 + 0x43) = 1;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0xc;
  param_1[0x45] = 0x3ff0000000000000;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x4b] = DAT_14c8464e0;
  param_1[0x4c] = uVar1;
  param_1[0x4d] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x51) = 1;
  uVar12 = uRam000000014c8464d8;
  uVar11 = DAT_14c8464d0;
  uVar10 = DAT_14c8464c8;
  uVar9 = DAT_14c8464c0;
  uVar8 = DAT_14c8464b8;
  uVar7 = DAT_14c8464b0;
  uVar6 = DAT_14c8464a8;
  uVar5 = DAT_14c8464a0;
  uVar4 = DAT_14c846498;
  uVar3 = DAT_14c846490;
  uVar2 = DAT_14c846488;
  uVar1 = DAT_14c846480;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x3f800000;
  param_1[0x53] = &DAT_3f8000003f800000;
  param_1[0x54] = 0x3f80000000000000;
  param_1[0x55] = 0x3f800000;
  param_1[0x56] = 0x3f80000000000000;
  param_1[0x58] = uVar1;
  param_1[0x59] = uVar2;
  param_1[0x5a] = uVar3;
  param_1[0x5b] = uVar4;
  param_1[0x5c] = uVar5;
  param_1[0x5d] = uVar6;
  param_1[0x5e] = uVar7;
  param_1[0x5f] = uVar8;
  param_1[0x60] = uVar9;
  param_1[0x61] = uVar10;
  param_1[0x62] = uVar11;
  param_1[99] = uVar12;
  return param_1;
}



// FUNCTION 149857aa4 FUN_149857aa4 body=43 status=ok
// SIG undefined FUN_149857aa4(void)

undefined8 FUN_149857aa4(undefined8 param_1,int param_2)

{
  FUN_149857ad0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x3c0);
  }
  return param_1;
}



// FUNCTION 149857ad0 FUN_149857ad0 body=148 status=ok
// SIG undefined FUN_149857ad0(void)

void FUN_149857ad0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb79c0;
  FUN_1492be06a(param_1 + 100);
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  param_1[0x40] = &PTR_FUN_14beb2758;
  plVar3 = (longlong *)param_1[0x42];
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
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 149857b64 FUN_149857b64 body=155 status=ok
// SIG undefined FUN_149857b64(void)

longlong FUN_149857b64(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1444888de(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_14985137e(param_1 + 0x200,param_2 + 0x200);
  puVar2 = (undefined8 *)(param_2 + 0x218);
  puVar3 = (undefined8 *)(param_1 + 0x218);
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1492be5ba(param_1 + 0x270,param_2 + 0x270);
  memcpy((void *)(param_1 + 0x280),(void *)(param_2 + 0x280),0xa0);
  FUN_1492be100(param_1 + 800,param_2 + 800);
  return param_1;
}



// FUNCTION 149857c34 FUN_149857c34 body=63 status=ok
// SIG undefined FUN_149857c34(void)

undefined1 FUN_149857c34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149857d5e(param_2,param_3);
    param_3 = param_3 + 0x3c0;
    param_2 = param_2 + 0x3c0;
  }
  return 1;
}



// FUNCTION 149857c9c FUN_149857c9c body=59 status=ok
// SIG undefined FUN_149857c9c(void)

undefined8 FUN_149857c9c(longlong *param_1)

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



// FUNCTION 149857ce8 FUN_149857ce8 body=40 status=ok
// SIG undefined FUN_149857ce8(void)

void FUN_149857ce8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x3c0) == '\x01') {
    FUN_14985531e(param_2);
    *(undefined1 *)(param_2 + 0x3c0) = 0;
  }
  return;
}



// FUNCTION 149857d5e FUN_149857d5e body=155 status=ok
// SIG undefined FUN_149857d5e(void)

longlong FUN_149857d5e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1444888de(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_14985137e(param_1 + 0x200,param_2 + 0x200);
  puVar2 = (undefined8 *)(param_2 + 0x218);
  puVar3 = (undefined8 *)(param_1 + 0x218);
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1492be5ba(param_1 + 0x270,param_2 + 0x270);
  memcpy((void *)(param_1 + 0x280),(void *)(param_2 + 0x280),0xa0);
  FUN_1492be100(param_1 + 800,param_2 + 800);
  return param_1;
}



// FUNCTION 149857e44 FUN_149857e44 body=119 status=ok
// SIG undefined FUN_149857e44(void)

undefined1 FUN_149857e44(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_144756208();
      FUN_144a67f5c(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      FUN_1492ad734(param_2 + lVar1 + 0x28,param_3 + lVar1 + 0x28);
      lVar1 = lVar1 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149857ee4 FUN_149857ee4 body=59 status=ok
// SIG undefined FUN_149857ee4(void)

undefined8 FUN_149857ee4(longlong *param_1)

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



// FUNCTION 149857f2a FUN_149857f2a body=34 status=ok
// SIG undefined FUN_149857f2a(void)

void FUN_149857f2a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_149857f9a(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 149857f9a FUN_149857f9a body=62 status=ok
// SIG undefined FUN_149857f9a(void)

void FUN_149857f9a(longlong param_1)

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



// FUNCTION 14985800e FUN_14985800e body=63 status=ok
// SIG undefined FUN_14985800e(void)

undefined1 FUN_14985800e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1498582ac(param_2,param_3);
    param_3 = param_3 + 0x2a0;
    param_2 = param_2 + 0x2a0;
  }
  return 1;
}



// FUNCTION 149858076 FUN_149858076 body=59 status=ok
// SIG undefined FUN_149858076(void)

undefined8 FUN_149858076(longlong *param_1)

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



// FUNCTION 1498580c2 FUN_1498580c2 body=40 status=ok
// SIG undefined FUN_1498580c2(void)

void FUN_1498580c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2a0) == '\x01') {
    FUN_149858228(param_2);
    *(undefined1 *)(param_2 + 0x2a0) = 0;
  }
  return;
}



// FUNCTION 149858138 FUN_149858138 body=195 status=ok
// SIG undefined FUN_149858138(void)

undefined8 * FUN_149858138(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14beb7e70;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = &PTR_FUN_14beb2758;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x43) = 1;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  uVar1 = DAT_14c8464e8;
  param_1[0x45] = DAT_14c8464e0;
  param_1[0x46] = uVar1;
  param_1[0x47] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x48] = DAT_14c8464e0;
  param_1[0x49] = uVar1;
  param_1[0x4a] = DAT_14c8464f0;
  return param_1;
}



// FUNCTION 1498581fc FUN_1498581fc body=43 status=ok
// SIG undefined FUN_1498581fc(void)

undefined8 FUN_1498581fc(undefined8 param_1,int param_2)

{
  FUN_149858228();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x2a0);
  }
  return param_1;
}



// FUNCTION 149858228 FUN_149858228 body=131 status=ok
// SIG undefined FUN_149858228(void)

void FUN_149858228(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb7e70;
  FUN_149857f9a(param_1 + 0x4c);
  param_1[0x40] = &PTR_FUN_14beb2758;
  plVar3 = (longlong *)param_1[0x42];
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
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1498582ac FUN_1498582ac body=179 status=ok
// SIG undefined FUN_1498582ac(void)

longlong FUN_1498582ac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1444888de(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_14985137e(param_1 + 0x200,param_2 + 0x200);
  puVar2 = (undefined8 *)(param_2 + 0x218);
  puVar3 = (undefined8 *)(param_1 + 0x218);
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 600) = *(undefined1 *)(param_2 + 600);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
  FUN_144756208(param_1 + 0x268,param_2 + 0x268);
  FUN_144a67f5c(param_1 + 0x278,param_2 + 0x278);
  FUN_1492ad734(param_1 + 0x288,param_2 + 0x288);
  return param_1;
}



// FUNCTION 149858360 FUN_149858360 body=74 status=ok
// SIG undefined FUN_149858360(void)

void FUN_149858360(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14beb8060;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = &PTR_FUN_14beb2758;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  return;
}



// FUNCTION 1498583aa FUN_1498583aa body=74 status=ok
// SIG undefined FUN_1498583aa(void)

void FUN_1498583aa(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14beb8060;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = &PTR_FUN_14beb2758;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  return;
}



// FUNCTION 149858418 FUN_149858418 body=110 status=ok
// SIG undefined FUN_149858418(void)

undefined8 FUN_149858418(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x200;
    param_2 = param_2 + 0x200;
    do {
      FUN_1491c05d4(param_2 + -0x1f0,param_3 + -0x1f0);
      FUN_1444888de(param_2 + -0x10,param_3 + -0x10);
      FUN_14985137e(param_2,param_3);
      param_3 = param_3 + 0x220;
      param_2 = param_2 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1498584ae FUN_1498584ae body=59 status=ok
// SIG undefined FUN_1498584ae(void)

undefined8 FUN_1498584ae(longlong *param_1)

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



// FUNCTION 1498584fa FUN_1498584fa body=40 status=ok
// SIG undefined FUN_1498584fa(void)

void FUN_1498584fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_14985859c(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 149858570 FUN_149858570 body=43 status=ok
// SIG undefined FUN_149858570(void)

undefined8 FUN_149858570(undefined8 param_1,int param_2)

{
  FUN_14985859c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 14985859c FUN_14985859c body=119 status=ok
// SIG undefined FUN_14985859c(void)

void FUN_14985859c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb8060;
  param_1[0x40] = &PTR_FUN_14beb2758;
  plVar3 = (longlong *)param_1[0x42];
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
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 149858614 FUN_149858614 body=74 status=ok
// SIG undefined FUN_149858614(void)

void FUN_149858614(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14beb86d0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = &PTR_FUN_14beb2758;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  return;
}



// FUNCTION 14985865e FUN_14985865e body=74 status=ok
// SIG undefined FUN_14985865e(void)

void FUN_14985865e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14beb86d0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = &PTR_FUN_14beb2758;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  return;
}



// FUNCTION 1498586cc FUN_1498586cc body=110 status=ok
// SIG undefined FUN_1498586cc(void)

undefined8 FUN_1498586cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x200;
    param_2 = param_2 + 0x200;
    do {
      FUN_1491c05d4(param_2 + -0x1f0,param_3 + -0x1f0);
      FUN_1444888de(param_2 + -0x10,param_3 + -0x10);
      FUN_14985137e(param_2,param_3);
      param_3 = param_3 + 0x220;
      param_2 = param_2 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149858762 FUN_149858762 body=59 status=ok
// SIG undefined FUN_149858762(void)

undefined8 FUN_149858762(longlong *param_1)

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



// FUNCTION 1498587ae FUN_1498587ae body=40 status=ok
// SIG undefined FUN_1498587ae(void)

void FUN_1498587ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_149855592(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 1498588be FUN_1498588be body=105 status=ok
// SIG undefined FUN_1498588be(void)

undefined1 FUN_1498588be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      FUN_14985137e(param_2 + 8 + lVar10,param_3 + 8 + lVar10);
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar10);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x2c + lVar10);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x2c + lVar10);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      lVar10 = lVar10 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149858950 FUN_149858950 body=59 status=ok
// SIG undefined FUN_149858950(void)

undefined8 FUN_149858950(longlong *param_1)

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



// FUNCTION 1498589ec FUN_1498589ec body=99 status=ok
// SIG undefined FUN_1498589ec(void)

undefined8 * FUN_1498589ec(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb83b0;
  param_1[1] = &PTR_FUN_14beb2758;
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



// FUNCTION 149858a50 FUN_149858a50 body=85 status=ok
// SIG undefined FUN_149858a50(void)

void FUN_149858a50(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    *param_1 = &PTR_FUN_14beb83b0;
    param_1[1] = &PTR_FUN_14beb2758;
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
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 149858b16 FUN_149858b16 body=85 status=ok
// SIG undefined FUN_149858b16(void)

undefined8 FUN_149858b16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_14985137e(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x20 + lVar1) = *(undefined8 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149858b94 FUN_149858b94 body=59 status=ok
// SIG undefined FUN_149858b94(void)

undefined8 FUN_149858b94(longlong *param_1)

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



// FUNCTION 149858c30 FUN_149858c30 body=99 status=ok
// SIG undefined FUN_149858c30(void)

undefined8 * FUN_149858c30(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14beb85b0;
  param_1[1] = &PTR_FUN_14beb2758;
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
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149858c94 FUN_149858c94 body=85 status=ok
// SIG undefined FUN_149858c94(void)

void FUN_149858c94(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    *param_1 = &PTR_FUN_14beb85b0;
    param_1[1] = &PTR_FUN_14beb2758;
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
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 149858cea FUN_149858cea body=43 status=ok
// SIG undefined FUN_149858cea(void)

undefined8 FUN_149858cea(undefined8 param_1,int param_2)

{
  FUN_14985531e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x3c0);
  }
  return param_1;
}



// FUNCTION 149858d16 FUN_149858d16 body=43 status=ok
// SIG undefined FUN_149858d16(void)

undefined8 FUN_149858d16(undefined8 param_1,int param_2)

{
  FUN_149855592();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 149858d42 FUN_149858d42 body=36 status=ok
// SIG undefined FUN_149858d42(void)

undefined8 FUN_149858d42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149858d82 FUN_149858d82 body=93 status=ok
// SIG undefined FUN_149858d82(void)

void FUN_149858d82(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14beb8760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149858de0 FUN_149858de0 body=123 status=ok
// SIG undefined FUN_149858de0(void)

void FUN_149858de0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14beb8760;
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



// FUNCTION 149858e5c FUN_149858e5c body=21 status=ok
// SIG undefined FUN_149858e5c(void)

undefined8 FUN_149858e5c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149858e72 FUN_149858e72 body=9 status=ok
// SIG undefined FUN_149858e72(void)

void FUN_149858e72(longlong param_1)

{
  FUN_149851208(param_1 + 0x10);
  return;
}



// FUNCTION 149858e7c FUN_149858e7c body=34 status=ok
// SIG undefined FUN_149858e7c(void)

undefined8 FUN_149858e7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 149858e9e FUN_149858e9e body=68 status=ok
// SIG undefined FUN_149858e9e(void)

void FUN_149858e9e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14beb26f0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14beb26c0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149858ee2 FUN_149858ee2 body=68 status=ok
// SIG undefined FUN_149858ee2(void)

void FUN_149858ee2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14beb2720;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14beb26c0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149858f2c FUN_149858f2c body=607 status=ok
// SIG undefined FUN_149858f2c(void)

void FUN_149858f2c(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    dVar7 = -*(double *)(lVar1 + 0x30);
    dVar9 = -*(double *)(lVar1 + 0x38);
    dVar12 = *(double *)(lVar1 + 0x40) * -1.0;
    dVar13 = *(double *)(lVar1 + 0x48) * 1.0;
    dVar2 = *(double *)(param_1 + 0x20) - *(double *)(lVar1 + 0x20);
    dVar10 = *(double *)(param_1 + 0x18) - *(double *)(lVar1 + 0x18);
    dVar4 = *(double *)(param_1 + 0x10) - *(double *)(lVar1 + 0x10);
    dVar15 = dVar9 * dVar2 - dVar10 * dVar12;
    dVar15 = dVar15 + dVar15;
    dVar16 = dVar7 * dVar10 - dVar4 * dVar9;
    dVar16 = dVar16 + dVar16;
    dVar14 = dVar12 * dVar4 - dVar2 * dVar7;
    dVar14 = dVar14 + dVar14;
    dVar8 = (dVar7 * dVar14 - dVar15 * dVar9) + dVar13 * dVar16 + dVar2;
    dVar11 = (dVar12 * dVar15 - dVar16 * dVar7) + dVar13 * dVar14 + dVar10;
    dVar10 = (dVar9 * dVar16 - dVar14 * dVar12) + dVar13 * dVar15 + dVar4;
    *(double *)(param_1 + 0x68) = dVar10;
    *(double *)(param_1 + 0x70) = dVar11;
    *(double *)(param_1 + 0x78) = dVar8;
    dVar12 = *(double *)(lVar1 + 0x40) * -1.0;
    dVar13 = *(double *)(lVar1 + 0x48) * 1.0;
    dVar15 = *(double *)(param_1 + 0x30);
    dVar16 = *(double *)(param_1 + 0x38);
    dVar5 = *(double *)(param_1 + 0x40);
    dVar6 = *(double *)(param_1 + 0x48);
    dVar4 = *(double *)(lVar1 + 0x38);
    dVar2 = *(double *)(lVar1 + 0x38);
    dVar7 = *(double *)(lVar1 + 0x30);
    dVar9 = *(double *)(lVar1 + 0x30);
    dVar14 = dVar5 * dVar12 * -1.0 + dVar2 * dVar16 + (dVar13 * dVar6 - dVar9 * dVar15 * -1.0);
    *(double *)(param_1 + 0x80) =
         dVar16 * dVar12 * -1.0 + ((dVar15 * dVar13 - dVar7 * dVar6 * 1.0) - dVar5 * dVar4);
    *(double *)(param_1 + 0x88) =
         dVar15 * dVar12 * 1.0 + ((dVar16 * dVar13 - dVar9 * dVar5 * -1.0) - dVar6 * dVar2);
    auVar3._8_4_ = SUB84(dVar14,0);
    auVar3._0_8_ = dVar6 * dVar12 * 1.0 + dVar4 * dVar15 + (dVar13 * dVar5 - dVar7 * dVar16 * 1.0);
    auVar3._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x90) = auVar3;
    *(float *)(param_1 + 0xdc) = (float)SQRT(dVar8 * dVar8 + dVar10 * dVar10 + dVar11 * dVar11);
  }
  return;
}



// FUNCTION 14985918c FUN_14985918c body=1215 status=ok
// SIG undefined FUN_14985918c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14985918c(longlong *param_1)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  lVar8 = *param_1;
  dVar2 = *(double *)(lVar8 + 0x10);
  dVar3 = *(double *)(lVar8 + 0x18);
  dVar4 = *(double *)(lVar8 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  iVar5 = *(int *)(lVar8 + 0xd0);
  if ((longlong)iVar5 == 0) {
    fVar11 = 1.0;
  }
  else {
    lVar10 = *(longlong *)(lVar8 + 200);
    auVar13 = ZEXT816(0);
    lVar9 = 0;
    do {
      lVar7 = *(longlong *)(lVar10 + lVar9);
      dVar20 = *(double *)(lVar8 + 0x18) - *(double *)(lVar7 + 0x18);
      dVar18 = *(double *)(lVar8 + 0x10) - *(double *)(lVar7 + 0x10);
      dVar16 = *(double *)(lVar8 + 0x20) - *(double *)(lVar7 + 0x20);
      auVar12._8_8_ = auVar13._8_8_;
      dVar2 = dVar2 + *(double *)(lVar7 + 0x10);
      auVar12._0_8_ =
           (double)auVar13._0_4_ + SQRT(dVar16 * dVar16 + dVar18 * dVar18 + dVar20 * dVar20);
      auVar13._4_12_ = auVar12._4_12_;
      auVar13._0_4_ = (float)auVar12._0_8_;
      dVar3 = dVar3 + *(double *)(lVar7 + 0x18);
      dVar4 = dVar4 + *(double *)(lVar7 + 0x20);
      *(float *)((longlong)param_1 + 0x10c) = auVar13._0_4_;
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar5 * 8 != lVar9);
    fVar11 = (float)*(int *)(lVar8 + 0xd0) + 1.0;
  }
  dVar16 = (double)(1.0 / fVar11);
  dVar4 = dVar4 * dVar16;
  dVar3 = dVar3 * dVar16;
  dVar2 = dVar2 * dVar16;
  param_1[0x14] = (longlong)dVar2;
  param_1[0x15] = (longlong)dVar3;
  param_1[0x16] = (longlong)dVar4;
  param_1[0xf] = param_1[0x16];
  param_1[0xd] = param_1[0x14];
  param_1[0xe] = param_1[0x15];
  lVar10 = *(longlong *)(lVar8 + 0x38);
  lVar9 = *(longlong *)(lVar8 + 0x40);
  lVar7 = *(longlong *)(lVar8 + 0x48);
  param_1[0x18] = *(longlong *)(lVar8 + 0x30);
  param_1[0x19] = lVar10;
  param_1[0x1a] = lVar9;
  param_1[0x1b] = lVar7;
  lVar10 = *(longlong *)(lVar8 + 0x30);
  lVar9 = *(longlong *)(lVar8 + 0x38);
  lVar7 = *(longlong *)(lVar8 + 0x48);
  param_1[0x12] = *(longlong *)(lVar8 + 0x40);
  param_1[0x13] = lVar7;
  param_1[0x10] = lVar10;
  param_1[0x11] = lVar9;
  dVar16 = -*(double *)(lVar8 + 0x30);
  dVar18 = -*(double *)(lVar8 + 0x38);
  dVar20 = *(double *)(lVar8 + 0x40) * -1.0;
  dVar14 = *(double *)(lVar8 + 0x48) * 1.0;
  dVar19 = *(double *)(lVar8 + 0x20) - dVar4;
  dVar17 = *(double *)(lVar8 + 0x18) - dVar3;
  dVar22 = *(double *)(lVar8 + 0x10) - dVar2;
  dVar21 = dVar18 * dVar19 - dVar17 * dVar20;
  dVar21 = dVar21 + dVar21;
  dVar23 = dVar16 * dVar17 - dVar22 * dVar18;
  dVar23 = dVar23 + dVar23;
  dVar15 = dVar20 * dVar22 - dVar19 * dVar16;
  dVar15 = dVar15 + dVar15;
  param_1[0x1c] = (longlong)((dVar18 * dVar23 - dVar15 * dVar20) + dVar14 * dVar21 + dVar22);
  param_1[0x1d] = (longlong)((dVar20 * dVar21 - dVar23 * dVar16) + dVar14 * dVar15 + dVar17);
  param_1[0x1e] = (longlong)((dVar16 * dVar15 - dVar21 * dVar18) + dVar14 * dVar23 + dVar19);
  iVar5 = *(int *)(lVar8 + 0xd0);
  if (-1 < iVar5) {
    plVar1 = param_1 + 0x1f;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)((longlong)param_1 + 0x104) != iVar5) {
      FUN_1447a8aa0(plVar1);
      lVar8 = *param_1;
    }
    iVar5 = *(int *)(lVar8 + 0xd0);
    if ((longlong)iVar5 != 0) {
      lVar8 = *(longlong *)(lVar8 + 200);
      lVar10 = 0;
      do {
        lVar9 = *(longlong *)(lVar8 + lVar10);
        auVar13 = *(undefined1 (*) [16])(param_1 + 0x10);
        dVar14 = (double)param_1[0x12] * -1.0;
        dVar15 = (double)param_1[0x13] * 1.0;
        dVar16 = *(double *)(lVar9 + 0x20);
        dVar18 = *(double *)(lVar9 + 0x10);
        dVar20 = *(double *)(lVar9 + 0x18);
        iVar6 = (int)param_1[0x20];
        lVar9 = (longlong)iVar6;
        *(uint *)(param_1 + 0x20) = iVar6 + 1U;
        if (*(uint *)((longlong)param_1 + 0x104) < iVar6 + 1U) {
          FUN_1403e3958(plVar1,iVar6);
        }
        dVar16 = dVar16 - dVar4;
        dVar20 = dVar20 - dVar3;
        dVar18 = dVar18 - dVar2;
        dVar19 = SUB168(auVar13 ^ _DAT_149931e80,8);
        dVar21 = SUB168(auVar13 ^ _DAT_149931e80,0);
        dVar22 = dVar21 * dVar20 - dVar18 * dVar19;
        dVar17 = dVar14 * dVar18 - dVar16 * dVar21;
        dVar23 = dVar19 * dVar16 - dVar20 * dVar14;
        dVar22 = dVar22 + dVar22;
        dVar17 = dVar17 + dVar17;
        dVar23 = dVar23 + dVar23;
        lVar7 = *plVar1;
        *(double *)(lVar7 + lVar9 * 0x18) =
             (dVar19 * dVar22 - dVar17 * dVar14) + dVar15 * dVar23 + dVar18;
        *(double *)(lVar7 + 8 + lVar9 * 0x18) =
             (dVar14 * dVar23 - dVar22 * dVar21) + dVar15 * dVar17 + dVar20;
        *(double *)(lVar7 + 0x10 + lVar9 * 0x18) =
             (dVar21 * dVar17 - dVar23 * dVar19) + dVar15 * dVar22 + dVar16;
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar5 * 8 != lVar10);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 14985964c FUN_14985964c body=243 status=ok
// SIG undefined FUN_14985964c(void)

void FUN_14985964c(longlong param_1,double *param_2,double *param_3)

{
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x114) == '\0') {
    if (1e-08 < *(float *)(param_1 + 0x108)) {
      local_58 = (double)(*(float *)(param_1 + 0x108) * (1.0 - *(float *)(param_1 + 8)));
      local_48 = (*param_3 * param_2[1] - *param_2 * param_3[1]) * local_58;
      local_50 = (*param_2 * param_3[2] - *param_3 * param_2[2]) * local_58;
      local_58 = (param_3[1] * param_2[2] - param_2[1] * param_3[2]) * local_58;
      local_40 = 0;
      FUN_149859740();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149859740 FUN_149859740 body=582 status=ok
// SIG undefined FUN_149859740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149859740(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((*(char *)(param_1 + 0x114) == '\0') && (1e-08 < *(float *)(param_1 + 0x108))) {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar6 = param_2[2];
    dVar7 = param_2[3];
    fVar8 = *(float *)(*(longlong *)(param_1 + 0x60) + 0x34) * 0.017453292;
    fVar11 = (float)SQRT(param_2[3] * param_2[3] + dVar6 * dVar6 + dVar1 * dVar1 + dVar2 * dVar2);
    if (fVar8 < fVar11) {
      fVar8 = fVar8 / fVar11;
      dVar9 = (double)fVar8;
      dVar10 = (double)fVar8;
      dVar1 = dVar1 * dVar9;
      dVar2 = dVar2 * dVar10;
      dVar6 = dVar6 * dVar9;
      dVar7 = dVar7 * dVar10;
    }
    dVar9 = *(double *)(param_1 + 0x80);
    dVar10 = *(double *)(param_1 + 0x88);
    dVar3 = *(double *)(param_1 + 0x90);
    dVar4 = *(double *)(param_1 + 0x98);
    *(double *)(param_1 + 0x80) =
         (dVar10 * dVar6 * -1.0 + dVar2 * dVar3 + dVar1 * dVar4 * 1.0 + dVar7 * dVar9) * 0.5 + dVar9
    ;
    *(double *)(param_1 + 0x88) =
         (dVar9 * dVar6 * 1.0 + dVar2 * dVar4 + dVar1 * dVar3 * -1.0 + dVar7 * dVar10) * 0.5 +
         *(double *)(param_1 + 0x88);
    *(double *)(param_1 + 0x90) =
         (dVar4 * dVar6 * 1.0 + ((dVar1 * dVar10 * 1.0 + dVar7 * dVar3) - dVar2 * dVar9)) * 0.5 +
         dVar3;
    *(double *)(param_1 + 0x98) =
         (dVar3 * dVar6 * -1.0 + ((dVar1 * dVar9 * -1.0 + dVar7 * dVar4) - dVar2 * dVar10)) * 0.5 +
         *(double *)(param_1 + 0x98);
    dVar1 = *(double *)(param_1 + 0x80);
    dVar2 = *(double *)(param_1 + 0x88);
    dVar6 = *(double *)(param_1 + 0x90);
    dVar7 = *(double *)(param_1 + 0x98);
    dVar9 = dVar6 * dVar6 + dVar1 * dVar1;
    dVar10 = dVar7 * dVar7 + dVar2 * dVar2;
    auVar12._0_8_ = dVar9 + dVar10;
    auVar12._8_8_ = dVar9 + dVar10;
    uVar5 = -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_);
    auVar13 = sqrtpd(auVar12,auVar12);
    auVar13 = divpd(_DAT_149934d80,auVar13);
    auVar14._0_8_ = auVar13._0_8_ * dVar6;
    auVar14._8_8_ = auVar13._8_8_ * dVar7;
    *(ulonglong *)(param_1 + 0x80) =
         (ulonglong)(dVar1 * auVar13._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
    *(ulonglong *)(param_1 + 0x88) = (ulonglong)(dVar2 * auVar13._8_8_) & uVar5;
    auVar13._8_4_ = (int)uVar5;
    auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
    auVar13._12_4_ = (int)(uVar5 >> 0x20);
    auVar13 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar14,auVar13);
    *(undefined1 (*) [16])(param_1 + 0x90) = auVar13;
  }
  return;
}



// FUNCTION 149859986 FUN_149859986 body=117 status=ok
// SIG undefined FUN_149859986(void)

void FUN_149859986(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if ((*(char *)(param_1 + 0x114) == '\0') && (1e-08 < *(float *)(param_1 + 0x108))) {
    dVar3 = (double)(1.0 - *(float *)(param_1 + 0xc));
    dVar1 = param_2[2];
    dVar2 = param_2[1];
    dVar4 = (double)*(float *)(*(longlong *)(param_1 + 0x60) + 0x38);
    *(double *)(param_1 + 0x68) = dVar3 * *param_2 * dVar4 + *(double *)(param_1 + 0x68);
    *(double *)(param_1 + 0x70) = dVar2 * dVar3 * dVar4 + *(double *)(param_1 + 0x70);
    *(double *)(param_1 + 0x78) = dVar1 * dVar3 * dVar4 + *(double *)(param_1 + 0x78);
  }
  return;
}



// FUNCTION 1498599fc FUN_1498599fc body=1381 status=ok
// SIG undefined FUN_1498599fc(void)

void FUN_1498599fc(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_14beb8ea0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  lVar2 = *param_3;
  dVar9 = *(double *)(lVar2 + 0x10);
  dVar1 = *(double *)(lVar2 + 0x18);
  dVar8 = *(double *)(lVar2 + 0x20);
  dVar7 = -*(double *)(param_2 + 0x80);
  dVar12 = -*(double *)(param_2 + 0x88);
  dVar13 = dVar8 - *(double *)(param_2 + 0x78);
  dVar3 = *(double *)(param_2 + 0x90) * -1.0;
  dVar4 = *(double *)(param_2 + 0x98) * 1.0;
  dVar5 = dVar1 - *(double *)(param_2 + 0x70);
  dVar6 = dVar9 - *(double *)(param_2 + 0x68);
  dVar14 = dVar12 * dVar13 - dVar5 * dVar3;
  dVar14 = dVar14 + dVar14;
  dVar10 = dVar7 * dVar5 - dVar6 * dVar12;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar3 * dVar6 - dVar13 * dVar7;
  dVar11 = dVar11 + dVar11;
  param_1[4] = (dVar12 * dVar10 - dVar11 * dVar3) + dVar4 * dVar14 + dVar6;
  param_1[5] = (dVar3 * dVar14 - dVar10 * dVar7) + dVar4 * dVar11 + dVar5;
  param_1[6] = (dVar7 * dVar11 - dVar14 * dVar12) + dVar4 * dVar10 + dVar13;
  dVar5 = -(double)param_3[0x10];
  dVar13 = -(double)param_3[0x11];
  dVar6 = (double)param_3[0x12] * -1.0;
  dVar7 = (double)param_3[0x13] * 1.0;
  dVar8 = dVar8 - (double)param_3[0xf];
  dVar1 = dVar1 - (double)param_3[0xe];
  dVar9 = dVar9 - (double)param_3[0xd];
  dVar12 = dVar13 * dVar8 - dVar1 * dVar6;
  dVar12 = dVar12 + dVar12;
  dVar4 = dVar5 * dVar1 - dVar9 * dVar13;
  dVar4 = dVar4 + dVar4;
  dVar3 = dVar6 * dVar9 - dVar8 * dVar5;
  dVar3 = dVar3 + dVar3;
  param_1[7] = (dVar13 * dVar4 - dVar3 * dVar6) + dVar7 * dVar12 + dVar9;
  param_1[8] = (dVar6 * dVar12 - dVar4 * dVar5) + dVar7 * dVar3 + dVar1;
  param_1[9] = (dVar5 * dVar3 - dVar12 * dVar13) + dVar7 * dVar4 + dVar8;
  dVar9 = (double)param_3[0x1a];
  dVar1 = (double)param_3[0x18];
  dVar8 = (double)param_3[0x19];
  dVar4 = dVar9 - dVar1 * 0.0;
  dVar5 = dVar1 * 0.0 - dVar8;
  dVar13 = dVar8 * 0.0 + dVar9 * -0.0;
  dVar5 = dVar5 + dVar5;
  dVar4 = dVar4 + dVar4;
  dVar13 = dVar13 + dVar13;
  dVar3 = (double)param_3[0x1b];
  param_1[10] = (dVar8 * dVar5 - dVar4 * dVar9) + dVar13 * dVar3 + 1.0;
  param_1[0xb] = (dVar9 * dVar13 - dVar5 * dVar1) + dVar3 * dVar4 + 0.0;
  param_1[0xc] = (dVar1 * dVar4 - dVar13 * dVar8) + dVar3 * dVar5 + 0.0;
  dVar9 = (double)param_3[0x1a];
  dVar1 = (double)param_3[0x18];
  dVar8 = (double)param_3[0x19];
  dVar5 = dVar1 - dVar8 * 0.0;
  dVar4 = dVar9 * 0.0 + dVar1 * -0.0;
  dVar13 = dVar8 * 0.0 - dVar9;
  dVar5 = dVar5 + dVar5;
  dVar4 = dVar4 + dVar4;
  dVar13 = dVar13 + dVar13;
  dVar3 = (double)param_3[0x1b];
  param_1[0xd] = (dVar8 * dVar5 - dVar4 * dVar9) + dVar13 * dVar3 + 0.0;
  param_1[0xe] = (dVar9 * dVar13 - dVar5 * dVar1) + dVar3 * dVar4 + 1.0;
  param_1[0xf] = (dVar1 * dVar4 - dVar13 * dVar8) + dVar3 * dVar5 + 0.0;
  dVar9 = (double)param_3[0x1a];
  dVar1 = (double)param_3[0x18];
  dVar8 = (double)param_3[0x19];
  dVar4 = dVar1 * 0.0 + dVar8 * -0.0;
  dVar5 = dVar8 - dVar9 * 0.0;
  dVar13 = dVar9 * 0.0 - dVar1;
  dVar4 = dVar4 + dVar4;
  dVar13 = dVar13 + dVar13;
  dVar5 = dVar5 + dVar5;
  dVar3 = (double)param_3[0x1b];
  param_1[0x10] = (dVar8 * dVar4 - dVar13 * dVar9) + dVar5 * dVar3 + 0.0;
  param_1[0x11] = (dVar9 * dVar5 - dVar4 * dVar1) + dVar3 * dVar13 + 0.0;
  param_1[0x12] = (dVar1 * dVar13 - dVar5 * dVar8) + dVar3 * dVar4 + 1.0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2e] = 0;
  return;
}



// FUNCTION 149859f62 FUN_149859f62 body=705 status=ok
// SIG undefined FUN_149859f62(void)

void FUN_149859f62(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_138 [32];
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_100 [16];
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if ((*(char *)(lVar3 + 0x114) != '\x01') ||
     (*(char *)(*(longlong *)(param_1 + 0x18) + 0x114) == '\0')) {
    FUN_14985a224(param_1,&local_e8,local_b8,local_d0);
    FUN_14985964c(lVar3,&local_e8,local_b8);
    local_f0 = -local_d8;
    local_100._8_4_ = SUB84(dStack_e0,0);
    local_100._0_8_ = -local_e8;
    local_100._12_4_ = (uint)((ulonglong)dStack_e0 >> 0x20) ^ 0x80000000;
    FUN_14985964c(*(undefined8 *)(param_1 + 0x18),local_100,local_d0);
    FUN_14985a490(param_1);
    lVar3 = *(longlong *)(param_1 + 0x10);
    fVar1 = *(float *)(lVar3 + 0x108);
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x108);
    fVar9 = fVar1 + fVar2;
    if (1e-08 < ABS(fVar9)) {
      FUN_14985a224(param_1,&local_e8,local_b8,local_d0);
      fVar8 = (float)SQRT(local_d8 * local_d8 + local_e8 * local_e8 + dStack_e0 * dStack_e0);
      dVar6 = DAT_14c8464f0;
      dVar7 = DAT_14c8464e8;
      dVar4 = DAT_14c8464e0;
      if (1e-08 < fVar8) {
        dVar4 = (double)(1.0 / fVar8);
        dVar6 = local_d8 * dVar4;
        dVar7 = dStack_e0 * dVar4;
        dVar4 = local_e8 * dVar4;
      }
      dVar5 = (double)((fVar1 / fVar9) * fVar8);
      local_f0 = dVar6 * dVar5;
      local_100._8_8_ = dVar7 * dVar5;
      local_100._0_8_ = dVar5 * dVar4;
      dVar5 = (double)((fVar2 / fVar9) * fVar8);
      FUN_149859986(lVar3);
      local_108 = -dVar6 * dVar5;
      local_110 = -dVar7 * dVar5;
      local_118 = -dVar4 * dVar5;
      FUN_149859986(*(undefined8 *)(param_1 + 0x18));
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14985a224 FUN_14985a224 body=619 status=ok
// SIG undefined FUN_14985a224(void)

double * FUN_14985a224(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  lVar7 = *(longlong *)(param_1 + 0x10);
  dVar1 = *(double *)(param_1 + 0x20);
  dVar2 = *(double *)(param_1 + 0x28);
  dVar3 = *(double *)(param_1 + 0x30);
  dVar4 = *(double *)(lVar7 + 0x90);
  dVar5 = *(double *)(lVar7 + 0x80);
  dVar6 = *(double *)(lVar7 + 0x88);
  dVar9 = dVar6 * dVar3 - dVar2 * dVar4;
  dVar9 = dVar9 + dVar9;
  dVar11 = *(double *)(lVar7 + 0x98);
  dVar10 = dVar5 * dVar2 - dVar1 * dVar6;
  dVar10 = dVar10 + dVar10;
  dVar12 = dVar4 * dVar1 - dVar3 * dVar5;
  dVar12 = dVar12 + dVar12;
  *param_3 = (dVar6 * dVar10 - dVar12 * dVar4) + dVar9 * dVar11 + dVar1;
  param_3[1] = (dVar4 * dVar9 - dVar10 * dVar5) + dVar11 * dVar12 + dVar2;
  param_3[2] = (dVar5 * dVar12 - dVar9 * dVar6) + dVar11 * dVar10 + dVar3;
  lVar7 = *(longlong *)(param_1 + 0x18);
  dVar1 = *(double *)(param_1 + 0x38);
  dVar2 = *(double *)(param_1 + 0x40);
  dVar3 = *(double *)(param_1 + 0x48);
  dVar4 = *(double *)(lVar7 + 0x90);
  dVar5 = *(double *)(lVar7 + 0x80);
  dVar6 = *(double *)(lVar7 + 0x88);
  dVar9 = dVar6 * dVar3 - dVar2 * dVar4;
  dVar9 = dVar9 + dVar9;
  dVar11 = *(double *)(lVar7 + 0x98);
  dVar10 = dVar5 * dVar2 - dVar1 * dVar6;
  dVar10 = dVar10 + dVar10;
  dVar13 = dVar4 * dVar1 - dVar3 * dVar5;
  dVar13 = dVar13 + dVar13;
  dVar12 = (dVar5 * dVar13 - dVar9 * dVar6) + dVar11 * dVar10 + dVar3;
  dVar14 = (dVar4 * dVar9 - dVar10 * dVar5) + dVar11 * dVar13 + dVar2;
  dVar11 = (dVar6 * dVar10 - dVar13 * dVar4) + dVar9 * dVar11 + dVar1;
  *param_4 = dVar11;
  param_4[1] = dVar14;
  param_4[2] = dVar12;
  lVar7 = *(longlong *)(param_1 + 0x10);
  lVar8 = *(longlong *)(param_1 + 0x18);
  dVar1 = *(double *)(lVar7 + 0x78);
  dVar2 = param_3[2];
  dVar3 = *(double *)(lVar7 + 0x70);
  dVar4 = param_3[1];
  dVar5 = *(double *)(lVar8 + 0x78);
  dVar6 = *(double *)(lVar8 + 0x70);
  *param_2 = (dVar11 + *(double *)(lVar8 + 0x68)) - (*(double *)(lVar7 + 0x68) + *param_3);
  param_2[1] = (dVar14 + dVar6) - (dVar3 + dVar4);
  param_2[2] = (dVar12 + dVar5) - (dVar1 + dVar2);
  return param_2;
}



// FUNCTION 14985a490 FUN_14985a490 body=1862 status=ok
// SIG undefined FUN_14985a490(void)

void FUN_14985a490(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar8;
  longlong lVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  longlong lVar23;
  undefined8 unaff_RBP;
  uint7 uVar24;
  longlong lVar25;
  bool bVar26;
  uint uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_238 [32];
  undefined4 *local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  ulonglong local_b0;
  double dVar7;
  double dVar9;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar10 = *(longlong *)(param_1 + 0x18);
  cVar20 = *(char *)(lVar10 + 0x10);
  if (((cVar20 == '\0') && (*(char *)(lVar10 + 0x1c) == '\0')) && (*(char *)(lVar10 + 0x28) == '\0')
     ) goto LAB_14985a6c2;
  fVar1 = *(float *)(lVar10 + 0x14);
  uVar27 = -(uint)(*(float *)(lVar10 + 0x18) < fVar1);
  fVar16 = (float)(~uVar27 & (uint)*(float *)(lVar10 + 0x18) | (uint)(fVar1 + 1.0) & uVar27);
  *(float *)(lVar10 + 0x18) = fVar16;
  fVar2 = *(float *)(lVar10 + 0x20);
  uVar27 = -(uint)(*(float *)(lVar10 + 0x24) < fVar2);
  fVar17 = (float)(~uVar27 & (uint)*(float *)(lVar10 + 0x24) | (uint)(fVar2 + 1.0) & uVar27);
  *(float *)(lVar10 + 0x24) = fVar17;
  fVar3 = *(float *)(lVar10 + 0x2c);
  uVar27 = -(uint)(*(float *)(lVar10 + 0x30) < fVar3);
  fVar15 = (float)(~uVar27 & (uint)*(float *)(lVar10 + 0x30) | (uint)(fVar3 + 1.0) & uVar27);
  *(float *)(lVar10 + 0x30) = fVar15;
  bVar14 = true;
  uVar24 = (uint7)((ulonglong)unaff_RBP >> 8);
  bVar13 = true;
  if (cVar20 != '\x02') {
    if (cVar20 == '\x01') {
      bVar13 = fVar16 - fVar1 < 2.0;
    }
    else {
      uVar24 = 0;
      bVar13 = false;
    }
  }
  cVar21 = *(char *)(lVar10 + 0x1c);
  if (cVar21 != '\x02') {
    if (cVar21 == '\x01') {
      bVar14 = fVar17 - fVar2 < 2.0;
    }
    else {
      bVar14 = false;
    }
  }
  cVar22 = *(char *)(lVar10 + 0x28);
  if (cVar22 == '\x02') {
    bVar26 = true;
LAB_14985a615:
    if (((bool)(bVar13 & bVar14)) && (bVar26)) {
      lVar10 = *(longlong *)(param_1 + 0x10);
      lVar23 = *(longlong *)(param_1 + 0x18);
      dVar18 = *(double *)(lVar23 + 0x80);
      dVar19 = *(double *)(lVar23 + 0x88);
      dVar12 = *(double *)(lVar23 + 0xc0);
      dVar34 = *(double *)(lVar23 + 200);
      dVar28 = *(double *)(lVar23 + 0xd0) * -1.0;
      dVar30 = *(double *)(lVar23 + 0xd8) * 1.0;
      dVar4 = *(double *)(lVar10 + 0xd8);
      dVar32 = *(double *)(lVar10 + 0xd8);
      dVar33 = *(double *)(lVar10 + 0xc0);
      dVar5 = *(double *)(lVar10 + 0xc0);
      dVar6 = *(double *)(lVar10 + 200);
      dVar7 = *(double *)(lVar10 + 200);
      dVar8 = *(double *)(lVar10 + 0xd0);
      dVar9 = *(double *)(lVar10 + 0xd0);
      dVar29 = (dVar28 * dVar6 + (dVar33 * dVar30 * 1.0 - dVar4 * dVar12)) - dVar34 * dVar8 * -1.0;
      dVar31 = (dVar30 * dVar7 + (dVar5 * dVar28 * -1.0 - dVar32 * dVar34)) - dVar12 * dVar9 * 1.0;
      dVar11 = dVar30 * dVar8 * 1.0 + dVar12 * dVar6 + (dVar28 * dVar4 - dVar33 * dVar34 * 1.0);
      dVar12 = dVar28 * dVar9 * -1.0 + dVar34 * dVar7 + (dVar30 * dVar32 - dVar5 * dVar12 * -1.0);
      dVar34 = *(double *)(lVar23 + 0x90) * -1.0;
      dVar30 = *(double *)(lVar23 + 0x98) * 1.0;
      dVar32 = *(double *)(lVar10 + 0x98);
      dVar4 = *(double *)(lVar10 + 0x98);
      dVar33 = *(double *)(lVar10 + 0x80);
      dVar5 = *(double *)(lVar10 + 0x80);
      dVar6 = *(double *)(lVar10 + 0x88);
      dVar7 = *(double *)(lVar10 + 0x88);
      dVar8 = *(double *)(lVar10 + 0x90);
      dVar9 = *(double *)(lVar10 + 0x90);
      dVar28 = (dVar34 * dVar6 + (dVar33 * dVar30 * 1.0 - dVar32 * dVar18)) - dVar19 * dVar8 * -1.0;
      dVar35 = (dVar30 * dVar7 + (dVar5 * dVar34 * -1.0 - dVar4 * dVar19)) - dVar18 * dVar9 * 1.0;
      dVar32 = (dVar30 * dVar8 * 1.0 + dVar18 * dVar6 + (dVar34 * dVar32 - dVar33 * dVar19 * 1.0)) *
               -1.0;
      dVar33 = (dVar34 * dVar9 * -1.0 + dVar19 * dVar7 + (dVar30 * dVar4 - dVar5 * dVar18 * -1.0)) *
               1.0;
      dVar4 = (dVar31 * dVar32 + (dVar29 * dVar33 * 1.0 - dVar12 * dVar28)) - dVar11 * dVar35 * -1.0
      ;
      dVar5 = (dVar31 * dVar33 + (dVar29 * dVar32 * -1.0 - dVar12 * dVar35)) - dVar11 * dVar28 * 1.0
      ;
      dVar33 = dVar33 * dVar11 + (dVar12 * dVar32 - dVar35 * dVar29) + dVar31 * dVar28;
      dVar4 = dVar4 + dVar4;
      dVar5 = dVar5 + dVar5;
      dVar33 = dVar33 + dVar33;
      dVar32 = (double)(1.0 - *(float *)(lVar10 + 8));
      local_d8._8_8_ = dVar32 * dVar5;
      local_d8._0_8_ = dVar32 * dVar4;
      local_c8._8_4_ = SUB84(dVar32 * 0.0,0);
      local_c8._0_8_ = dVar32 * dVar33;
      local_c8._12_4_ = (int)((ulonglong)(dVar32 * 0.0) >> 0x20);
      FUN_149859740(lVar10,local_d8);
      dVar32 = (double)(1.0 - *(float *)(*(longlong *)(param_1 + 0x18) + 8));
      dVar5 = -dVar5 * dVar32;
      local_d8._8_4_ = SUB84(dVar5,0);
      local_d8._0_8_ = -dVar4 * dVar32;
      local_d8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_c8._8_8_ = dVar32 * -0.0;
      local_c8._0_8_ = -dVar33 * dVar32;
      FUN_149859740(*(longlong *)(param_1 + 0x18),local_d8);
      goto LAB_14985a6c2;
    }
    if ((bool)(bVar14 & bVar26 & (bVar13 ^ 1U))) {
      bVar26 = true;
      FUN_14985af3c(param_1,1,0,0);
      lVar23 = 0x98;
      lVar25 = 0xe0;
    }
    else {
      if (!(bool)(bVar13 & bVar26 & (bVar14 ^ 1U))) goto LAB_14985a65e;
      bVar26 = true;
      FUN_14985af3c(param_1,0,CONCAT71(uVar24 & 0xffffff,1),0);
      lVar23 = 0xb0;
      lVar25 = 0xf8;
    }
LAB_14985a8ed:
    FUN_14985b6f6(param_1,lVar23 + param_1,lVar25 + param_1);
    cVar20 = *(char *)(lVar10 + 0x10);
    cVar21 = *(char *)(lVar10 + 0x1c);
    cVar22 = *(char *)(lVar10 + 0x28);
  }
  else {
    if (cVar22 == '\x01') {
      bVar26 = fVar15 - fVar3 < 2.0;
      goto LAB_14985a615;
    }
    bVar26 = false;
LAB_14985a65e:
    if (((bool)(bVar13 & bVar14)) && (!bVar26)) {
      bVar26 = false;
      FUN_14985af3c(param_1,0,0,1);
      lVar23 = 200;
      lVar25 = 0x110;
      goto LAB_14985a8ed;
    }
  }
  bVar13 = (bool)(cVar20 != '\x01' | bVar13);
  if (((!bVar13) || (cVar21 == '\x01' && !bVar14)) || (cVar22 == '\x01' && !bVar26)) {
    FUN_14985b8d8(param_1);
  }
  if (!bVar13) {
    local_e8 = *(undefined8 *)(param_1 + 0xd8);
    local_208 = &local_f8;
    local_f8 = *(undefined8 *)(param_1 + 200);
    uStack_f0 = *(undefined8 *)(param_1 + 0xd0);
    local_108 = *(undefined8 *)(param_1 + 0x138);
    local_210 = &local_118;
    local_118 = *(undefined8 *)(param_1 + 0x128);
    uStack_110 = *(undefined8 *)(param_1 + 0x130);
    local_138 = *(undefined4 *)(param_1 + 0x98);
    uStack_134 = *(undefined4 *)(param_1 + 0x9c);
    uStack_130 = *(undefined4 *)(param_1 + 0xa0);
    uStack_12c = *(undefined4 *)(param_1 + 0xa4);
    local_218 = &local_138;
    local_128 = *(undefined8 *)(param_1 + 0xa8);
    FUN_14985c4a6(param_1,local_210,*(undefined4 *)(lVar10 + 0x18));
  }
  if (cVar21 == '\x01' && !bVar14) {
    local_148 = *(undefined8 *)(param_1 + 0xd8);
    local_208 = &local_158;
    local_158 = *(undefined8 *)(param_1 + 200);
    uStack_150 = *(undefined8 *)(param_1 + 0xd0);
    local_168 = *(undefined8 *)(param_1 + 0x150);
    local_210 = &local_178;
    local_178 = *(undefined8 *)(param_1 + 0x140);
    uStack_170 = *(undefined8 *)(param_1 + 0x148);
    local_198 = *(undefined4 *)(param_1 + 0xb0);
    uStack_194 = *(undefined4 *)(param_1 + 0xb4);
    uStack_190 = *(undefined4 *)(param_1 + 0xb8);
    uStack_18c = *(undefined4 *)(param_1 + 0xbc);
    local_218 = &local_198;
    local_188 = *(undefined8 *)(param_1 + 0xc0);
    FUN_14985c4a6(param_1,local_210,*(undefined4 *)(lVar10 + 0x24));
  }
  if (cVar22 == '\x01' && !bVar26) {
    local_1a8 = *(undefined8 *)(param_1 + 0xc0);
    local_208 = &local_1b8;
    local_1b8 = *(undefined8 *)(param_1 + 0xb0);
    uStack_1b0 = *(undefined8 *)(param_1 + 0xb8);
    local_1c8 = *(undefined8 *)(param_1 + 0x168);
    local_210 = &local_1d8;
    local_1d8 = *(undefined8 *)(param_1 + 0x158);
    uStack_1d0 = *(undefined8 *)(param_1 + 0x160);
    local_1f8 = *(undefined4 *)(param_1 + 200);
    uStack_1f4 = *(undefined4 *)(param_1 + 0xcc);
    uStack_1f0 = *(undefined4 *)(param_1 + 0xd0);
    uStack_1ec = *(undefined4 *)(param_1 + 0xd4);
    local_218 = &local_1f8;
    local_1e8 = *(undefined8 *)(param_1 + 0xd8);
    FUN_14985c4a6(param_1,local_210,*(undefined4 *)(lVar10 + 0x30));
  }
LAB_14985a6c2:
  if ((local_b0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14985abd8 FUN_14985abd8 body=167 status=ok
// SIG undefined FUN_14985abd8(void)

void FUN_14985abd8(longlong param_1,float param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14985a224(param_1,&local_78,local_48,local_60);
  dVar2 = (double)param_2;
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(double *)(lVar1 + 0x68) = *(double *)(lVar1 + 0x68) - dVar2 * local_78;
  *(double *)(lVar1 + 0x70) = *(double *)(lVar1 + 0x70) - local_70 * dVar2;
  *(double *)(lVar1 + 0x78) = *(double *)(lVar1 + 0x78) - local_68 * dVar2;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14985ac80 FUN_14985ac80 body=700 status=ok
// SIG undefined FUN_14985ac80(void)

void FUN_14985ac80(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 0x18);
  lVar4 = *plVar3;
  dVar12 = *(double *)(lVar4 + 0x10);
  dVar1 = *(double *)(lVar4 + 0x18);
  dVar11 = *(double *)(lVar4 + 0x20);
  dVar10 = -*(double *)(lVar2 + 0x80);
  dVar15 = -*(double *)(lVar2 + 0x88);
  dVar8 = dVar11 - *(double *)(lVar2 + 0x78);
  dVar5 = *(double *)(lVar2 + 0x90) * -1.0;
  dVar6 = *(double *)(lVar2 + 0x98) * 1.0;
  dVar7 = dVar1 - *(double *)(lVar2 + 0x70);
  dVar9 = dVar12 - *(double *)(lVar2 + 0x68);
  dVar16 = dVar15 * dVar8 - dVar7 * dVar5;
  dVar16 = dVar16 + dVar16;
  dVar13 = dVar10 * dVar7 - dVar9 * dVar15;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar5 * dVar9 - dVar8 * dVar10;
  dVar14 = dVar14 + dVar14;
  *(double *)(param_1 + 0x20) = (dVar15 * dVar13 - dVar14 * dVar5) + dVar6 * dVar16 + dVar9;
  *(double *)(param_1 + 0x28) = (dVar5 * dVar16 - dVar13 * dVar10) + dVar6 * dVar14 + dVar7;
  *(double *)(param_1 + 0x30) = (dVar10 * dVar14 - dVar16 * dVar15) + dVar6 * dVar13 + dVar8;
  dVar7 = -(double)plVar3[0x10];
  dVar8 = -(double)plVar3[0x11];
  dVar9 = (double)plVar3[0x12] * -1.0;
  dVar10 = (double)plVar3[0x13] * 1.0;
  dVar11 = dVar11 - (double)plVar3[0xf];
  dVar1 = dVar1 - (double)plVar3[0xe];
  dVar12 = dVar12 - (double)plVar3[0xd];
  dVar15 = dVar8 * dVar11 - dVar1 * dVar9;
  dVar15 = dVar15 + dVar15;
  dVar6 = dVar7 * dVar1 - dVar12 * dVar8;
  dVar6 = dVar6 + dVar6;
  dVar5 = dVar9 * dVar12 - dVar11 * dVar7;
  dVar5 = dVar5 + dVar5;
  *(double *)(param_1 + 0x38) = (dVar8 * dVar6 - dVar5 * dVar9) + dVar10 * dVar15 + dVar12;
  *(double *)(param_1 + 0x40) = (dVar9 * dVar15 - dVar6 * dVar7) + dVar10 * dVar5 + dVar1;
  *(double *)(param_1 + 0x48) = (dVar7 * dVar5 - dVar15 * dVar8) + dVar10 * dVar6 + dVar11;
  return;
}



// FUNCTION 14985af3c FUN_14985af3c body=1977 status=ok
// SIG undefined FUN_14985af3c(void)

void FUN_14985af3c(longlong param_1,char param_2,char param_3,char param_4)

{
  double dVar1;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar2;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  lVar6 = *(longlong *)(param_1 + 0x18);
  dVar7 = *(double *)(lVar5 + 0xc0);
  dVar8 = *(double *)(lVar5 + 200);
  dVar9 = *(double *)(lVar5 + 0xd0) * -1.0;
  dVar12 = *(double *)(lVar5 + 0xd8) * 1.0;
  dVar17 = *(double *)(lVar5 + 0x98);
  dVar16 = *(double *)(lVar5 + 0x98);
  dVar1 = *(double *)(lVar5 + 0x80);
  dVar2 = *(double *)(lVar5 + 0x80);
  dVar3 = *(double *)(lVar5 + 0x88);
  dVar11 = *(double *)(lVar5 + 0x88);
  dVar4 = *(double *)(lVar5 + 0x90);
  dVar19 = *(double *)(lVar5 + 0x90);
  dVar10 = (dVar9 * dVar3 + (dVar1 * dVar12 * 1.0 - dVar17 * dVar7)) - dVar8 * dVar4 * -1.0;
  dVar13 = (dVar12 * dVar11 + (dVar2 * dVar9 * -1.0 - dVar16 * dVar8)) - dVar7 * dVar19 * 1.0;
  dVar18 = dVar12 * dVar4 * 1.0 + dVar7 * dVar3 + (dVar9 * dVar17 - dVar1 * dVar8 * 1.0);
  dVar20 = dVar9 * dVar19 * -1.0 + dVar8 * dVar11 + (dVar12 * dVar16 - dVar2 * dVar7 * -1.0);
  dVar7 = *(double *)(lVar6 + 0xc0);
  dVar8 = *(double *)(lVar6 + 200);
  dVar9 = *(double *)(lVar6 + 0xd0) * -1.0;
  dVar14 = *(double *)(lVar6 + 0xd8) * 1.0;
  dVar16 = *(double *)(lVar6 + 0x98);
  dVar17 = *(double *)(lVar6 + 0x98);
  dVar2 = *(double *)(lVar6 + 0x80);
  dVar1 = *(double *)(lVar6 + 0x80);
  dVar3 = *(double *)(lVar6 + 0x88);
  dVar11 = *(double *)(lVar6 + 0x88);
  dVar4 = *(double *)(lVar6 + 0x90);
  dVar19 = *(double *)(lVar6 + 0x90);
  dVar12 = (dVar9 * dVar3 + (dVar2 * dVar14 * 1.0 - dVar16 * dVar7)) - dVar8 * dVar4 * -1.0;
  dVar15 = (dVar14 * dVar11 + (dVar1 * dVar9 * -1.0 - dVar17 * dVar8)) - dVar7 * dVar19 * 1.0;
  dVar16 = dVar14 * dVar4 * 1.0 + dVar7 * dVar3 + (dVar9 * dVar16 - dVar2 * dVar8 * 1.0);
  dVar17 = dVar9 * dVar19 * -1.0 + dVar8 * dVar11 + (dVar14 * dVar17 - dVar1 * dVar7 * -1.0);
  if (param_2 != '\0') {
    dVar2 = *(double *)(param_1 + 0x50);
    dVar1 = *(double *)(param_1 + 0x58);
    dVar3 = *(double *)(param_1 + 0x60);
    dVar7 = dVar10 * dVar1 - dVar2 * dVar13;
    dVar19 = dVar18 * dVar2 - dVar3 * dVar10;
    dVar11 = dVar13 * dVar3 - dVar1 * dVar18;
    dVar7 = dVar7 + dVar7;
    dVar19 = dVar19 + dVar19;
    dVar11 = dVar11 + dVar11;
    *(double *)(param_1 + 0x98) = (dVar13 * dVar7 - dVar19 * dVar18) + dVar20 * dVar11 + dVar2;
    dVar8 = dVar15 * dVar3 - dVar1 * dVar16;
    dVar8 = dVar8 + dVar8;
    *(double *)(param_1 + 0xa0) = (dVar18 * dVar11 - dVar7 * dVar10) + dVar20 * dVar19 + dVar1;
    dVar4 = dVar12 * dVar1 - dVar2 * dVar15;
    dVar4 = dVar4 + dVar4;
    *(double *)(param_1 + 0xa8) = (dVar10 * dVar19 - dVar11 * dVar13) + dVar20 * dVar7 + dVar3;
    dVar11 = dVar16 * dVar2 - dVar3 * dVar12;
    dVar11 = dVar11 + dVar11;
    *(double *)(param_1 + 0xe0) = (dVar15 * dVar4 - dVar11 * dVar16) + dVar17 * dVar8 + dVar2;
    *(double *)(param_1 + 0xe8) = (dVar16 * dVar8 - dVar4 * dVar12) + dVar17 * dVar11 + dVar1;
    *(double *)(param_1 + 0xf0) = (dVar12 * dVar11 - dVar8 * dVar15) + dVar17 * dVar4 + dVar3;
  }
  if (param_3 != '\0') {
    dVar2 = *(double *)(param_1 + 0x68);
    dVar1 = *(double *)(param_1 + 0x70);
    dVar3 = *(double *)(param_1 + 0x78);
    dVar7 = dVar10 * dVar1 - dVar2 * dVar13;
    dVar19 = dVar18 * dVar2 - dVar3 * dVar10;
    dVar11 = dVar13 * dVar3 - dVar1 * dVar18;
    dVar7 = dVar7 + dVar7;
    dVar19 = dVar19 + dVar19;
    dVar11 = dVar11 + dVar11;
    *(double *)(param_1 + 0xb0) = (dVar13 * dVar7 - dVar19 * dVar18) + dVar20 * dVar11 + dVar2;
    dVar8 = dVar15 * dVar3 - dVar1 * dVar16;
    dVar8 = dVar8 + dVar8;
    *(double *)(param_1 + 0xb8) = (dVar18 * dVar11 - dVar7 * dVar10) + dVar20 * dVar19 + dVar1;
    dVar4 = dVar12 * dVar1 - dVar2 * dVar15;
    dVar4 = dVar4 + dVar4;
    *(double *)(param_1 + 0xc0) = (dVar10 * dVar19 - dVar11 * dVar13) + dVar20 * dVar7 + dVar3;
    dVar11 = dVar16 * dVar2 - dVar3 * dVar12;
    dVar11 = dVar11 + dVar11;
    *(double *)(param_1 + 0xf8) = (dVar15 * dVar4 - dVar11 * dVar16) + dVar17 * dVar8 + dVar2;
    *(double *)(param_1 + 0x100) = (dVar16 * dVar8 - dVar4 * dVar12) + dVar17 * dVar11 + dVar1;
    *(double *)(param_1 + 0x108) = (dVar12 * dVar11 - dVar8 * dVar15) + dVar17 * dVar4 + dVar3;
  }
  if (param_4 != '\0') {
    dVar2 = *(double *)(param_1 + 0x80);
    dVar1 = *(double *)(param_1 + 0x88);
    dVar3 = *(double *)(param_1 + 0x90);
    dVar7 = dVar10 * dVar1 - dVar2 * dVar13;
    dVar19 = dVar18 * dVar2 - dVar3 * dVar10;
    dVar11 = dVar13 * dVar3 - dVar1 * dVar18;
    dVar7 = dVar7 + dVar7;
    dVar19 = dVar19 + dVar19;
    dVar11 = dVar11 + dVar11;
    *(double *)(param_1 + 200) = (dVar13 * dVar7 - dVar19 * dVar18) + dVar20 * dVar11 + dVar2;
    *(double *)(param_1 + 0xd0) = (dVar18 * dVar11 - dVar7 * dVar10) + dVar20 * dVar19 + dVar1;
    dVar4 = dVar15 * dVar3 - dVar1 * dVar16;
    dVar4 = dVar4 + dVar4;
    *(double *)(param_1 + 0xd8) = (dVar10 * dVar19 - dVar11 * dVar13) + dVar20 * dVar7 + dVar3;
    dVar11 = dVar12 * dVar1 - dVar2 * dVar15;
    dVar11 = dVar11 + dVar11;
    dVar19 = dVar16 * dVar2 - dVar3 * dVar12;
    dVar19 = dVar19 + dVar19;
    *(double *)(param_1 + 0x110) = (dVar15 * dVar11 - dVar19 * dVar16) + dVar17 * dVar4 + dVar2;
    *(double *)(param_1 + 0x118) = (dVar16 * dVar4 - dVar11 * dVar12) + dVar17 * dVar19 + dVar1;
    *(double *)(param_1 + 0x120) = (dVar12 * dVar19 - dVar4 * dVar15) + dVar17 * dVar11 + dVar3;
  }
  return;
}



// FUNCTION 14985b6f6 FUN_14985b6f6 body=481 status=ok
// SIG undefined FUN_14985b6f6(void)

void FUN_14985b6f6(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar4 = *param_2 * param_3[1] - *param_3 * param_2[1];
  dVar1 = *param_3 * param_2[2] - *param_2 * param_3[2];
  dVar2 = param_2[1] * param_3[2] - param_3[1] * param_2[2];
  fVar6 = (float)SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar1 * dVar1);
  dVar5 = DAT_14c8464f0;
  dVar3 = DAT_14c8464e8;
  dVar8 = DAT_14c8464e0;
  if (1e-08 < fVar6) {
    dVar8 = (double)(1.0 / fVar6);
    dVar5 = dVar4 * dVar8;
    dVar3 = dVar1 * dVar8;
    dVar8 = dVar2 * dVar8;
  }
  fVar7 = (float)(dVar5 * dVar5 + dVar8 * dVar8 + dVar3 * dVar3);
  if (0.0001 <= fVar7) {
    dVar4 = (double)(fVar6 / fVar7);
    dVar1 = (double)(1.0 - *(float *)(*(longlong *)(param_1 + 0x10) + 8));
    local_78._8_8_ = dVar3 * dVar4 * dVar1;
    local_78._0_8_ = dVar8 * dVar4 * dVar1;
    local_68._8_4_ = SUB84(dVar1 * 0.0,0);
    local_68._0_8_ = dVar1 * dVar5 * dVar4;
    local_68._12_4_ = (int)((ulonglong)(dVar1 * 0.0) >> 0x20);
    FUN_149859740(*(longlong *)(param_1 + 0x10),local_78);
    dVar1 = (double)(1.0 - *(float *)(*(longlong *)(param_1 + 0x18) + 8));
    dVar2 = -(dVar3 * dVar4) * dVar1;
    local_78._8_4_ = SUB84(dVar2,0);
    local_78._0_8_ = -(dVar8 * dVar4) * dVar1;
    local_78._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_68._8_8_ = dVar1 * -0.0;
    local_68._0_8_ = -(dVar5 * dVar4) * dVar1;
    FUN_149859740(*(longlong *)(param_1 + 0x18),local_78);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14985b8d8 FUN_14985b8d8 body=3021 status=ok
// SIG undefined FUN_14985b8d8(void)

void FUN_14985b8d8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dStack_150;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  dVar4 = *(double *)(lVar1 + 0xc0);
  dVar9 = *(double *)(lVar1 + 200);
  dVar31 = *(double *)(lVar1 + 0xd0) * -1.0;
  dVar13 = *(double *)(lVar1 + 0xd8) * 1.0;
  dVar21 = *(double *)(lVar1 + 0x98);
  dVar16 = *(double *)(lVar1 + 0x98);
  dVar29 = *(double *)(lVar1 + 0x80);
  dVar20 = *(double *)(lVar1 + 0x80);
  dVar26 = *(double *)(lVar1 + 0x88);
  dVar30 = *(double *)(lVar1 + 0x88);
  dVar22 = *(double *)(lVar1 + 0x90);
  dVar25 = *(double *)(lVar1 + 0x90);
  dVar3 = (dVar31 * dVar26 + (dVar29 * dVar13 * 1.0 - dVar21 * dVar4)) - dVar9 * dVar22 * -1.0;
  dVar14 = (dVar13 * dVar30 + (dVar20 * dVar31 * -1.0 - dVar16 * dVar9)) - dVar4 * dVar25 * 1.0;
  dVar28 = dVar13 * dVar22 * 1.0 + dVar4 * dVar26 + (dVar31 * dVar21 - dVar29 * dVar9 * 1.0);
  dVar24 = dVar31 * dVar25 * -1.0 + dVar9 * dVar30 + (dVar13 * dVar16 - dVar20 * dVar4 * -1.0);
  dVar13 = *(double *)(lVar2 + 0xc0);
  dVar5 = *(double *)(lVar2 + 200);
  dVar31 = *(double *)(lVar2 + 0xd0) * -1.0;
  dVar4 = *(double *)(lVar2 + 0xd8) * 1.0;
  dVar16 = *(double *)(lVar2 + 0x98);
  dVar21 = *(double *)(lVar2 + 0x98);
  dVar20 = *(double *)(lVar2 + 0x80);
  dVar29 = *(double *)(lVar2 + 0x80);
  dVar30 = *(double *)(lVar2 + 0x88);
  dVar26 = *(double *)(lVar2 + 0x88);
  dVar22 = *(double *)(lVar2 + 0x90);
  dVar25 = *(double *)(lVar2 + 0x90);
  dVar8 = (dVar31 * dVar30 + (dVar20 * dVar4 * 1.0 - dVar16 * dVar13)) - dVar5 * dVar22 * -1.0;
  dVar9 = (dVar4 * dVar26 + (dVar29 * dVar31 * -1.0 - dVar21 * dVar5)) - dVar13 * dVar25 * 1.0;
  auVar7._8_4_ = SUB84(dVar9,0);
  auVar7._0_8_ = dVar8;
  auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  dVar17 = dVar4 * dVar22 * 1.0 + dVar13 * dVar30 + (dVar31 * dVar16 - dVar20 * dVar5 * 1.0);
  dVar23 = dVar31 * dVar25 * -1.0 + dVar5 * dVar26 + (dVar4 * dVar21 - dVar29 * dVar13 * -1.0);
  dVar16 = *(double *)(param_1 + 0x50);
  dVar21 = *(double *)(param_1 + 0x58);
  dVar20 = *(double *)(param_1 + 0x60);
  dVar30 = dVar14 * dVar20 - dVar21 * dVar28;
  dVar30 = dVar30 + dVar30;
  dVar29 = dVar3 * dVar21 - dVar16 * dVar14;
  dVar29 = dVar29 + dVar29;
  dVar26 = dVar28 * dVar16 - dVar20 * dVar3;
  dVar26 = dVar26 + dVar26;
  dVar9 = (dVar3 * dVar26 - dVar30 * dVar14) + dVar24 * dVar29 + dVar20;
  dVar18 = (dVar28 * dVar30 - dVar29 * dVar3) + dVar24 * dVar26 + dVar21;
  dVar13 = (dVar14 * dVar29 - dVar26 * dVar28) + dVar24 * dVar30 + dVar16;
  *(double *)(param_1 + 0x98) = dVar13;
  *(double *)(param_1 + 0xa0) = dVar18;
  *(double *)(param_1 + 0xa8) = dVar9;
  dVar29 = *(double *)(param_1 + 0x68);
  dVar26 = *(double *)(param_1 + 0x70);
  dVar25 = dVar3 * dVar26 - dVar29 * dVar14;
  dVar30 = *(double *)(param_1 + 0x78);
  dVar31 = dVar28 * dVar29 - dVar30 * dVar3;
  dVar22 = dVar14 * dVar30 - dVar26 * dVar28;
  dVar31 = dVar31 + dVar31;
  dVar22 = dVar22 + dVar22;
  dVar25 = dVar25 + dVar25;
  dVar5 = (dVar3 * dVar31 - dVar22 * dVar14) + dVar24 * dVar25 + dVar30;
  dVar19 = (dVar28 * dVar22 - dVar25 * dVar3) + dVar24 * dVar31 + dVar26;
  dVar11 = (dVar14 * dVar25 - dVar31 * dVar28) + dVar24 * dVar22 + dVar29;
  *(double *)(param_1 + 0xb0) = dVar11;
  *(double *)(param_1 + 0xb8) = dVar19;
  *(double *)(param_1 + 0xc0) = dVar5;
  dVar22 = *(double *)(param_1 + 0x80);
  dVar25 = *(double *)(param_1 + 0x88);
  dVar6 = dVar3 * dVar25 - dVar22 * dVar14;
  dVar31 = *(double *)(param_1 + 0x90);
  dVar10 = dVar28 * dVar22 - dVar31 * dVar3;
  dVar15 = dVar14 * dVar31 - dVar25 * dVar28;
  dVar6 = dVar6 + dVar6;
  dVar10 = dVar10 + dVar10;
  dVar15 = dVar15 + dVar15;
  dVar4 = (dVar3 * dVar10 - dVar15 * dVar14) + dVar24 * dVar6 + dVar31;
  dVar27 = (dVar28 * dVar15 - dVar6 * dVar3) + dVar24 * dVar10 + dVar25;
  dVar3 = (dVar14 * dVar6 - dVar10 * dVar28) + dVar24 * dVar15 + dVar22;
  dStack_150 = auVar7._8_8_;
  dVar6 = dStack_150 * dVar20 - dVar21 * dVar17;
  dVar6 = dVar6 + dVar6;
  dVar24 = dVar8 * dVar21 - dVar16 * dStack_150;
  dVar24 = dVar24 + dVar24;
  dVar28 = dVar17 * dVar16 - dVar20 * dVar8;
  dVar28 = dVar28 + dVar28;
  *(double *)(param_1 + 200) = dVar3;
  *(double *)(param_1 + 0xd0) = dVar27;
  *(double *)(param_1 + 0xd8) = dVar4;
  *(double *)(param_1 + 0xe0) = (dStack_150 * dVar24 - dVar28 * dVar17) + dVar23 * dVar6 + dVar16;
  *(double *)(param_1 + 0xe8) = (dVar17 * dVar6 - dVar24 * dVar8) + dVar23 * dVar28 + dVar21;
  *(double *)(param_1 + 0xf0) = (dVar8 * dVar28 - dVar6 * dStack_150) + dVar23 * dVar24 + dVar20;
  dVar21 = dStack_150 * dVar30 - dVar26 * dVar17;
  dVar21 = dVar21 + dVar21;
  dVar20 = dVar8 * dVar26 - dVar29 * dStack_150;
  dVar20 = dVar20 + dVar20;
  dVar16 = dVar17 * dVar29 - dVar30 * dVar8;
  dVar16 = dVar16 + dVar16;
  dVar28 = (dVar8 * dVar16 - dVar21 * dStack_150) + dVar23 * dVar20 + dVar30;
  dVar26 = (dVar17 * dVar21 - dVar20 * dVar8) + dVar23 * dVar16 + dVar26;
  dVar6 = (dStack_150 * dVar20 - dVar16 * dVar17) + dVar23 * dVar21 + dVar29;
  dVar20 = dStack_150 * dVar31 - dVar25 * dVar17;
  dVar20 = dVar20 + dVar20;
  dVar30 = dVar8 * dVar25 - dVar22 * dStack_150;
  dVar30 = dVar30 + dVar30;
  dVar21 = dVar17 * dVar22 - dVar31 * dVar8;
  dVar21 = dVar21 + dVar21;
  dVar16 = (dVar8 * dVar21 - dVar20 * dStack_150) + dVar23 * dVar30 + dVar31;
  dVar29 = (dVar17 * dVar20 - dVar30 * dVar8) + dVar23 * dVar21 + dVar25;
  dVar30 = (dStack_150 * dVar30 - dVar21 * dVar17) + dVar23 * dVar20 + dVar22;
  dVar21 = dVar16 * dVar9 + dVar30 * dVar13 + dVar18 * dVar29;
  dVar25 = dVar16 - dVar9 * dVar21;
  dVar20 = dVar29 - dVar18 * dVar21;
  dVar21 = dVar30 - dVar21 * dVar13;
  dVar22 = dVar25 * dVar25 + dVar21 * dVar21 + dVar20 * dVar20;
  *(double *)(param_1 + 0xf8) = dVar6;
  *(double *)(param_1 + 0x100) = dVar26;
  *(double *)(param_1 + 0x108) = dVar28;
  *(double *)(param_1 + 0x110) = dVar30;
  *(double *)(param_1 + 0x118) = dVar29;
  *(double *)(param_1 + 0x120) = dVar16;
  if (((dVar22 != 1.0) || (dVar13 = dVar25, dVar31 = dVar20, dVar9 = dVar21, NAN(dVar22))) &&
     (dVar13 = DAT_14c8464f0, dVar31 = DAT_14c8464e8, dVar9 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar22)) {
    dVar22 = 1.0 / SQRT(dVar22);
    dVar13 = dVar25 * dVar22;
    dVar31 = dVar20 * dVar22;
    dVar9 = dVar21 * dVar22;
  }
  *(double *)(param_1 + 0x128) = dVar9;
  *(double *)(param_1 + 0x130) = dVar31;
  *(double *)(param_1 + 0x138) = dVar13;
  dVar21 = dVar16 * dVar5 + dVar30 * dVar11 + dVar19 * dVar29;
  dVar16 = dVar16 - dVar5 * dVar21;
  dVar29 = dVar29 - dVar19 * dVar21;
  dVar30 = dVar30 - dVar21 * dVar11;
  dVar21 = dVar16 * dVar16 + dVar30 * dVar30 + dVar29 * dVar29;
  if (((dVar21 != 1.0) || (dVar25 = dVar30, dVar20 = dVar16, dVar22 = dVar29, NAN(dVar21))) &&
     (dVar25 = DAT_14c8464e0, dVar20 = DAT_14c8464f0, dVar22 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar21)) {
    dVar21 = 1.0 / SQRT(dVar21);
    dVar25 = dVar30 * dVar21;
    dVar20 = dVar16 * dVar21;
    dVar22 = dVar29 * dVar21;
  }
  lVar1 = param_1 + 200;
  *(double *)(param_1 + 0x140) = dVar25;
  *(double *)(param_1 + 0x148) = dVar22;
  *(double *)(param_1 + 0x150) = dVar20;
  dVar16 = dVar28 * dVar4 + dVar6 * dVar3 + dVar26 * dVar27;
  dVar28 = dVar28 - dVar4 * dVar16;
  dVar26 = dVar26 - dVar27 * dVar16;
  dVar6 = dVar6 - dVar16 * dVar3;
  dVar16 = dVar28 * dVar28 + dVar6 * dVar6 + dVar26 * dVar26;
  if (((dVar16 != 1.0) || (dVar29 = dVar28, dVar21 = dVar26, dVar20 = dVar6, NAN(dVar16))) &&
     (dVar29 = DAT_14c8464f0, dVar21 = DAT_14c8464e8, dVar20 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar16)) {
    dVar16 = 1.0 / SQRT(dVar16);
    dVar29 = dVar28 * dVar16;
    dVar21 = dVar26 * dVar16;
    dVar20 = dVar6 * dVar16;
  }
  *(double *)(param_1 + 0x158) = dVar20;
  *(double *)(param_1 + 0x160) = dVar21;
  *(double *)(param_1 + 0x168) = dVar29;
  uVar12 = FUN_14985c688(lVar1,param_1 + 0x128,param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x170) = uVar12;
  uVar12 = FUN_14985c688(lVar1,param_1 + 0x140,param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x174) = uVar12;
  uVar12 = FUN_14985c688(param_1 + 0xb0,param_1 + 0x158,lVar1);
  *(undefined4 *)(param_1 + 0x178) = uVar12;
  return;
}



// FUNCTION 14985c4a6 FUN_14985c4a6 body=481 status=ok
// SIG undefined FUN_14985c4a6(void)

void FUN_14985c4a6(undefined8 param_1,float param_2,float param_3,float param_4,double *param_5,
                  undefined8 param_6,double *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_4 < param_2) || (param_2 = param_3, param_3 < param_4)) {
    dVar1 = *param_5;
    dVar2 = param_5[1];
    dVar3 = param_5[2];
    dVar5 = (double)(param_2 * 0.017453292) * 0.5;
    dVar7 = sin(dVar5);
    dVar8 = cos(dVar5);
    dVar1 = dVar1 * dVar7;
    dVar2 = dVar2 * dVar7;
    dVar3 = dVar3 * dVar7;
    dVar5 = *param_7;
    dVar7 = param_7[1];
    dVar4 = param_7[2];
    dVar10 = dVar2 * dVar4 - dVar7 * dVar3;
    dVar10 = dVar10 + dVar10;
    dVar6 = dVar1 * dVar7 - dVar5 * dVar2;
    dVar6 = dVar6 + dVar6;
    dVar9 = dVar3 * dVar5 - dVar4 * dVar1;
    dVar9 = dVar9 + dVar9;
    local_88 = (dVar1 * dVar9 - dVar10 * dVar2) + dVar8 * dVar6 + dVar4;
    local_90 = (dVar3 * dVar10 - dVar6 * dVar1) + dVar8 * dVar9 + dVar7;
    local_98 = (dVar2 * dVar6 - dVar9 * dVar3) + dVar8 * dVar10 + dVar5;
    FUN_14985b6f6(param_1,&local_98,param_6);
  }
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14985c688 FUN_14985c688 body=266 status=ok
// SIG undefined FUN_14985c688(void)

ulonglong FUN_14985c688(double *param_1,double *param_2,double *param_3)

{
  uint uVar1;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  float fVar3;
  
  fVar2 = (float)(param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1]);
  fVar3 = fVar2;
  if (1.0 <= fVar2) {
    fVar3 = 1.0;
  }
  fVar3 = acosf((float)(-(uint)(fVar2 < -1.0) & 0xbf800000 | ~-(uint)(fVar2 < -1.0) & (uint)fVar3));
  uVar1 = -(uint)(0.0 <= (float)((*param_1 * param_2[1] - *param_2 * param_1[1]) * param_3[2] +
                                (param_1[1] * param_2[2] - param_2[1] * param_1[2]) * *param_3 +
                                (*param_2 * param_1[2] - *param_1 * param_2[2]) * param_3[1]));
  return (ulonglong)((uint)(fVar3 * 57.295776) & uVar1) |
         CONCAT44(extraout_XMM0_Db,~uVar1 & (uint)-(fVar3 * 57.295776)) ^ 0x8000000000000000;
}



// FUNCTION 14985c792 FUN_14985c792 body=594 status=ok
// SIG undefined FUN_14985c792(void)

void FUN_14985c792(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_14beb8ec0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  param_1[4] = param_3[2];
  uVar5 = param_3[1];
  param_1[2] = *param_3;
  param_1[3] = uVar5;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  param_1[6] = *param_4;
  param_1[7] = uVar5;
  param_1[8] = uVar6;
  param_1[9] = uVar7;
  param_1[10] = param_2;
  dVar8 = -*(double *)(param_2 + 0x80);
  dVar10 = -*(double *)(param_2 + 0x88);
  dVar12 = *(double *)(param_2 + 0x90) * -1.0;
  dVar13 = *(double *)(param_2 + 0x98) * 1.0;
  dVar2 = (double)param_1[4] - *(double *)(param_2 + 0x78);
  dVar15 = (double)param_1[3] - *(double *)(param_2 + 0x70);
  dVar3 = (double)param_1[2] - *(double *)(param_2 + 0x68);
  dVar16 = dVar10 * dVar2 - dVar15 * dVar12;
  dVar16 = dVar16 + dVar16;
  dVar17 = dVar8 * dVar15 - dVar3 * dVar10;
  dVar17 = dVar17 + dVar17;
  dVar14 = dVar12 * dVar3 - dVar2 * dVar8;
  dVar14 = dVar14 + dVar14;
  param_1[0xb] = (dVar10 * dVar17 - dVar14 * dVar12) + dVar13 * dVar16 + dVar3;
  param_1[0xc] = (dVar12 * dVar16 - dVar17 * dVar8) + dVar13 * dVar14 + dVar15;
  param_1[0xd] = (dVar8 * dVar14 - dVar16 * dVar10) + dVar13 * dVar17 + dVar2;
  dVar17 = (double)param_1[6];
  dVar4 = (double)param_1[7];
  dVar9 = (double)param_1[8] * -1.0;
  dVar11 = (double)param_1[9] * 1.0;
  dVar3 = *(double *)(param_2 + 0x98);
  dVar2 = *(double *)(param_2 + 0x98);
  dVar8 = *(double *)(param_2 + 0x80);
  dVar10 = *(double *)(param_2 + 0x80);
  dVar12 = *(double *)(param_2 + 0x88);
  dVar13 = *(double *)(param_2 + 0x88);
  dVar14 = *(double *)(param_2 + 0x90);
  dVar15 = *(double *)(param_2 + 0x90);
  dVar16 = dVar9 * dVar15 * -1.0 + dVar4 * dVar13 + (dVar11 * dVar2 - dVar10 * dVar17 * -1.0);
  param_1[0x10] = (dVar9 * dVar12 + (dVar8 * dVar11 * 1.0 - dVar3 * dVar17)) - dVar4 * dVar14 * -1.0
  ;
  param_1[0x11] =
       (dVar11 * dVar13 + (dVar10 * dVar9 * -1.0 - dVar2 * dVar4)) - dVar17 * dVar15 * 1.0;
  auVar1._8_4_ = SUB84(dVar16,0);
  auVar1._0_8_ = dVar11 * dVar14 * 1.0 + dVar17 * dVar12 + (dVar9 * dVar3 - dVar8 * dVar4 * 1.0);
  auVar1._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x12) = auVar1;
  return;
}



// FUNCTION 14985c9e4 FUN_14985c9e4 body=204 status=ok
// SIG undefined FUN_14985c9e4(void)

void FUN_14985c9e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + 8) == '\x01') && (0.0001 < *(float *)(param_1 + 0x70))) {
    FUN_14985cab2(param_1,&local_58,local_40);
    FUN_14985964c(*(undefined8 *)(param_1 + 0x50),&local_58,local_40);
    FUN_14985cab2(param_1,&local_58,local_40);
    dVar2 = (double)*(float *)(param_2 + 0x38);
    lVar1 = *(longlong *)(param_1 + 0x50);
    *(double *)(lVar1 + 0x68) = dVar2 * local_58 + *(double *)(lVar1 + 0x68);
    *(double *)(lVar1 + 0x70) = local_50 * dVar2 + *(double *)(lVar1 + 0x70);
    *(double *)(lVar1 + 0x78) = local_48 * dVar2 + *(double *)(lVar1 + 0x78);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14985cab2 FUN_14985cab2 body=382 status=ok
// SIG undefined FUN_14985cab2(void)

double * FUN_14985cab2(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar6 = *(longlong *)(param_1 + 0x50);
  dVar1 = *(double *)(param_1 + 0x58);
  dVar2 = *(double *)(param_1 + 0x60);
  dVar3 = *(double *)(param_1 + 0x68);
  dVar4 = *(double *)(lVar6 + 0x90);
  dVar9 = *(double *)(lVar6 + 0x80);
  dVar12 = *(double *)(lVar6 + 0x88);
  dVar7 = dVar12 * dVar3 - dVar2 * dVar4;
  dVar7 = dVar7 + dVar7;
  dVar5 = *(double *)(lVar6 + 0x98);
  dVar8 = dVar9 * dVar2 - dVar1 * dVar12;
  dVar8 = dVar8 + dVar8;
  dVar11 = dVar4 * dVar1 - dVar3 * dVar9;
  dVar11 = dVar11 + dVar11;
  dVar10 = (dVar9 * dVar11 - dVar7 * dVar12) + dVar5 * dVar8 + dVar3;
  dVar13 = (dVar4 * dVar7 - dVar8 * dVar9) + dVar5 * dVar11 + dVar2;
  dVar9 = (dVar12 * dVar8 - dVar11 * dVar4) + dVar7 * dVar5 + dVar1;
  *param_3 = dVar9;
  param_3[1] = dVar13;
  param_3[2] = dVar10;
  lVar6 = *(longlong *)(param_1 + 0x50);
  dVar1 = *(double *)(lVar6 + 0x78);
  dVar2 = *(double *)(lVar6 + 0x70);
  dVar3 = *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(param_1 + 0x18);
  dVar12 = (double)*(float *)(param_1 + 0x70);
  *param_2 = (*(double *)(param_1 + 0x10) - (dVar9 + *(double *)(lVar6 + 0x68))) * dVar12;
  param_2[1] = (dVar4 - (dVar13 + dVar2)) * dVar12;
  param_2[2] = (dVar3 - (dVar10 + dVar1)) * dVar12;
  return param_2;
}



// FUNCTION 14985cc30 FUN_14985cc30 body=920 status=ok
// SIG undefined FUN_14985cc30(void)

void FUN_14985cc30(longlong *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  longlong lVar15;
  double *pdVar16;
  longlong lVar17;
  double dVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_149862402(param_2);
  }
  lVar19 = (longlong)*(int *)(*param_1 + 0x20);
  if (lVar19 != 0) {
    lVar15 = *(longlong *)(*param_1 + 0x18);
    lVar21 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar15 + lVar21) + 0xd0) == 1) {
        dVar1 = *(double *)(lVar15 + 0xe0 + lVar21);
        dVar2 = *(double *)(lVar15 + 0xe8 + lVar21);
        dVar3 = *(double *)(lVar15 + 0xf0 + lVar21);
        dVar4 = *(double *)(lVar15 + 0x90 + lVar21);
        dVar5 = *(double *)(lVar15 + 0x88 + lVar21);
        dVar6 = *(double *)(lVar15 + 0x80 + lVar21);
        dVar7 = *(double *)(lVar15 + 0x98 + lVar21);
        dVar8 = *(double *)(lVar15 + 0x78 + lVar21);
        dVar9 = *(double *)(lVar15 + 0x68 + lVar21);
        dVar10 = *(double *)(lVar15 + 0x70 + lVar21);
        pdVar16 = *(double **)(lVar15 + 0xf8 + lVar21);
        dVar11 = *pdVar16;
        dVar12 = pdVar16[1];
        dVar13 = pdVar16[2];
        iVar14 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar14 + 1U) {
          FUN_149862432(param_2,iVar14);
        }
        dVar23 = dVar6 * dVar2 - dVar1 * dVar5;
        dVar25 = dVar4 * dVar1 - dVar3 * dVar6;
        dVar22 = dVar5 * dVar3 - dVar2 * dVar4;
        dVar23 = dVar23 + dVar23;
        dVar25 = dVar25 + dVar25;
        dVar22 = dVar22 + dVar22;
        dVar24 = dVar6 * dVar12 - dVar11 * dVar5;
        dVar26 = dVar4 * dVar11 - dVar13 * dVar6;
        dVar18 = dVar5 * dVar13 - dVar12 * dVar4;
        dVar24 = dVar24 + dVar24;
        dVar26 = dVar26 + dVar26;
        dVar18 = dVar18 + dVar18;
        lVar17 = *param_2;
        lVar20 = (longlong)iVar14 * 0x30;
        *(double *)(lVar17 + lVar20) =
             (dVar5 * dVar23 - dVar25 * dVar4) + dVar22 * dVar7 + dVar1 + dVar9;
        *(double *)(lVar17 + 8 + lVar20) =
             (dVar4 * dVar22 - dVar23 * dVar6) + dVar7 * dVar25 + dVar2 + dVar10;
        *(double *)(lVar17 + 0x10 + lVar20) =
             (dVar6 * dVar25 - dVar22 * dVar5) + dVar7 * dVar23 + dVar3 + dVar8;
        *(double *)(lVar17 + 0x18 + lVar20) =
             (dVar5 * dVar24 - dVar26 * dVar4) + dVar7 * dVar18 + dVar11 + dVar9;
        *(double *)(lVar17 + 0x20 + lVar20) =
             (dVar4 * dVar18 - dVar24 * dVar6) + dVar7 * dVar26 + dVar12 + dVar10;
        *(double *)(lVar17 + 0x28 + lVar20) =
             (dVar6 * dVar26 - dVar18 * dVar5) + dVar7 * dVar24 + dVar13 + dVar8;
      }
      lVar21 = lVar21 + 0x120;
    } while (lVar19 * 0x120 != lVar21);
  }
  return;
}



// FUNCTION 14985cfd4 FUN_14985cfd4 body=140 status=ok
// SIG undefined FUN_14985cfd4(void)

void FUN_14985cfd4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  *(undefined8 *)(param_1 + 0xf0) = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0xc0);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0xcc);
    iVar3 = 1;
    do {
      if (*(char *)(lVar2 + 0xd9) != '\x01') break;
      if ((*(char *)(lVar2 + 0xda) != '\0') ||
         (((0 < iVar1 && (iVar1 < iVar3)) || (*(char *)(lVar2 + 0xd8) != '\0')))) {
        *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar2 + 0xb8);
        break;
      }
      *(undefined1 *)(*(longlong *)(lVar2 + 0xb8) + 0x115) = 1;
      iVar3 = iVar3 + 1;
      lVar2 = *(longlong *)(lVar2 + 0xc0);
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0xcc);
  return;
}



// FUNCTION 14985d060 FUN_14985d060 body=840 status=ok
// SIG undefined FUN_14985d060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14985d060(double *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  double dVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  double *pdVar15;
  longlong lVar16;
  bool bVar17;
  ulonglong uVar18;
  float fVar19;
  double dVar20;
  double dVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_88 [32];
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar20 = (double)*(float *)(param_1 + 0x18);
  *param_1 = (param_1[0x10] - param_1[8]) * dVar20 + param_1[8];
  param_1[1] = (param_1[0x11] - param_1[9]) * dVar20 + param_1[9];
  param_1[2] = (param_1[0x12] - param_1[10]) * dVar20 + param_1[10];
  FUN_144a44da6(&local_68,param_1 + 0xc,param_1 + 0x14,(double)*(float *)((longlong)param_1 + 0xc4))
  ;
  dVar20 = local_58 * local_58 + local_68 * local_68;
  dVar23 = dStack_50 * dStack_50 + dStack_60 * dStack_60;
  auVar21._0_8_ = dVar20 + dVar23;
  auVar21._8_8_ = dVar20 + dVar23;
  uVar18 = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
  auVar22 = sqrtpd(auVar21,auVar21);
  auVar24 = divpd(_DAT_149934d80,auVar22);
  auVar25._0_8_ = auVar24._0_8_ * local_58;
  auVar25._8_8_ = auVar24._8_8_ * dStack_50;
  uVar7 = (ulonglong)(dStack_60 * auVar24._8_8_) & uVar18;
  auVar22._8_4_ = (int)uVar18;
  auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
  auVar22._12_4_ = (int)(uVar18 >> 0x20);
  auVar22 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar25,auVar22);
  auVar5._8_4_ = (int)uVar7;
  auVar5._0_8_ = (ulonglong)(local_68 * auVar24._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
  auVar5._12_4_ = (int)(uVar7 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 4) = auVar5;
  *(undefined1 (*) [16])(param_1 + 6) = auVar22;
  plVar4 = (longlong *)param_1[0x1d];
  if (plVar4 == (longlong *)0x0) {
LAB_14985d1e2:
    _DAT_00000070 = *(undefined4 *)(param_1 + 0x19);
    _DAT_00000020 = param_1[2];
    _DAT_00000010 = *param_1;
    _DAT_00000018 = param_1[1];
    _DAT_00000030 = param_1[4];
    _DAT_00000038 = param_1[5];
    _DAT_00000040 = param_1[6];
    _DAT_00000048 = param_1[7];
  }
  else {
    iVar13 = (int)plVar4[1];
    do {
      if (iVar13 == 0) goto LAB_14985d1e2;
      LOCK();
      iVar12 = (int)plVar4[1];
      bVar17 = iVar13 == iVar12;
      if (bVar17) {
        *(int *)(plVar4 + 1) = iVar13 + 1;
        iVar12 = iVar13;
      }
      iVar13 = iVar12;
      UNLOCK();
    } while (!bVar17);
    dVar20 = param_1[0x1c];
    uVar3 = *(undefined4 *)(param_1 + 0x19);
    *(double *)((longlong)dVar20 + 0x20) = param_1[2];
    dVar23 = param_1[1];
    *(double *)((longlong)dVar20 + 0x10) = *param_1;
    *(double *)((longlong)dVar20 + 0x18) = dVar23;
    uVar8 = *(undefined4 *)(param_1 + 4);
    uVar9 = *(undefined4 *)((longlong)param_1 + 0x24);
    uVar10 = *(undefined4 *)(param_1 + 5);
    uVar11 = *(undefined4 *)((longlong)param_1 + 0x2c);
    dVar23 = param_1[7];
    *(double *)((longlong)dVar20 + 0x40) = param_1[6];
    *(double *)((longlong)dVar20 + 0x48) = dVar23;
    *(undefined4 *)((longlong)dVar20 + 0x30) = uVar8;
    *(undefined4 *)((longlong)dVar20 + 0x34) = uVar9;
    *(undefined4 *)((longlong)dVar20 + 0x38) = uVar10;
    *(undefined4 *)((longlong)dVar20 + 0x3c) = uVar11;
    *(undefined4 *)((longlong)dVar20 + 0x70) = uVar3;
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
  dVar20 = param_1[0x1e];
  if (dVar20 == 0.0) {
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  }
  else {
    pdVar15 = (double *)((longlong)dVar20 + 0x68);
    if (*(longlong *)((longlong)dVar20 + 0x58) != 0) {
      pdVar15 = (double *)(*(longlong *)((longlong)dVar20 + 0x58) + 0x40);
    }
    dVar20 = param_1[0x1b];
    dVar6 = pdVar15[2] - *(double *)((longlong)dVar20 + 0x20);
    dVar23 = pdVar15[1] - *(double *)((longlong)dVar20 + 0x18);
    dVar20 = *pdVar15 - *(double *)((longlong)dVar20 + 0x10);
    *(float *)((longlong)param_1 + 0xfc) =
         (float)SQRT(dVar6 * dVar6 + dVar20 * dVar20 + dVar23 * dVar23);
    pdVar15 = param_1 + 0x20;
    uVar14 = *(uint *)((longlong)param_1 + 0x10c);
    iVar13 = 0;
    if ((int)uVar14 < 0) {
      *(undefined4 *)(param_1 + 0x21) = 0;
      FUN_14482f6fa(pdVar15,0);
      iVar13 = *(int *)(param_1 + 0x21);
      uVar14 = *(uint *)((longlong)param_1 + 0x10c);
    }
    *(uint *)(param_1 + 0x21) = iVar13 + 1U;
    if (uVar14 < iVar13 + 1U) {
      FUN_14475e4ac(pdVar15,iVar13);
    }
    *(undefined4 *)((longlong)param_1[0x20] + (longlong)iVar13 * 4) = 0;
    fVar19 = *(float *)((longlong)param_1[0x1b] + 0xdc);
    *(float *)(param_1 + 0x22) = fVar19;
    for (lVar16 = *(longlong *)((longlong)param_1[0x1b] + 0xc0);
        (lVar16 != 0 && (*(double *)(lVar16 + 0xb8) != param_1[0x1e]));
        lVar16 = *(longlong *)(lVar16 + 0xc0)) {
      iVar13 = *(int *)(param_1 + 0x21);
      *(uint *)(param_1 + 0x21) = iVar13 + 1U;
      if (*(uint *)((longlong)param_1 + 0x10c) < iVar13 + 1U) {
        FUN_14475e4ac(pdVar15,iVar13);
        fVar19 = *(float *)(param_1 + 0x22);
      }
      *(float *)((longlong)param_1[0x20] + (longlong)iVar13 * 4) = fVar19;
      fVar19 = *(float *)(lVar16 + 0xdc) + *(float *)(param_1 + 0x22);
      *(float *)(param_1 + 0x22) = fVar19;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14985d3aa FUN_14985d3aa body=1675 status=ok
// SIG undefined FUN_14985d3aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14985d3aa(double *param_1)

{
  double dVar1;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double *pdVar15;
  double dVar16;
  ulonglong uVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  double dVar30;
  undefined1 auVar29 [16];
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  ulonglong local_e0;
  double dVar2;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar16 = param_1[0x1e];
  if ((dVar16 != 0.0) && (fVar22 = *(float *)((longlong)param_1 + 0xfc), 1e-08 < fVar22)) {
    pdVar15 = (double *)((longlong)dVar16 + 0x68);
    if (*(double **)((longlong)dVar16 + 0x58) != (double *)0x0) {
      pdVar15 = *(double **)((longlong)dVar16 + 0x58);
    }
    fVar18 = (float)SQRT((pdVar15[2] - param_1[2]) * (pdVar15[2] - param_1[2]) +
                         (*pdVar15 - *param_1) * (*pdVar15 - *param_1) +
                         (pdVar15[1] - param_1[1]) * (pdVar15[1] - param_1[1]));
    if (fVar18 < fVar22) {
      fVar22 = (fVar22 - fVar18) / fVar22 + -1.0;
      fVar22 = 1.0 - fVar22 * fVar22;
      if (fVar22 < 0.0) {
        fVar22 = sqrtf(fVar22);
      }
      else {
        fVar22 = SQRT(fVar22);
      }
      if (1e-08 < ABS(fVar22)) {
        dVar16 = param_1[0x1b];
        dVar9 = (double)fVar22;
        local_168 = 0;
        uStack_164 = 0;
        uStack_160 = 0;
        uStack_15c = 0x3ff00000;
        do {
          dVar16 = *(double *)((longlong)dVar16 + 0xc0);
          if ((dVar16 == 0.0) || (*(char *)((longlong)dVar16 + 0xd9) != '\x01')) break;
          plVar3 = *(longlong **)((longlong)dVar16 + 0xb8);
          if (*(char *)((longlong)plVar3 + 0x34) == '\x01') {
            if (((*plVar3 == 0) || (lVar4 = *(longlong *)(*plVar3 + 0xc0), lVar4 == 0)) ||
               (lVar4 = *(longlong *)(lVar4 + 0xb8), lVar4 == 0)) {
              dVar23 = (double)plVar3[0x10];
              dVar21 = (double)plVar3[0x11];
              dVar19 = (double)plVar3[0x12];
              dVar20 = (double)plVar3[0x13];
              dVar28 = (double)plVar3[0x18];
              dVar30 = (double)plVar3[0x19];
              dVar24 = (double)plVar3[0x1a];
              dVar27 = (double)plVar3[0x1b];
            }
            else {
              dVar28 = *(double *)(lVar4 + 0x90) * -1.0;
              dVar30 = *(double *)(lVar4 + 0x98) * 1.0;
              dVar1 = (double)plVar3[0x10];
              dVar2 = (double)plVar3[0x11];
              dVar6 = (double)plVar3[0x12];
              dVar7 = (double)plVar3[0x13];
              dVar10 = (double)plVar3[0x18];
              dVar11 = (double)plVar3[0x19];
              dVar12 = (double)plVar3[0x1a];
              dVar13 = (double)plVar3[0x1b];
              dVar27 = *(double *)(lVar4 + 0x88);
              dVar24 = *(double *)(lVar4 + 0x88);
              dVar19 = *(double *)(lVar4 + 0x80);
              dVar20 = *(double *)(lVar4 + 0x80);
              dVar23 = dVar2 * dVar28 * -1.0 +
                       ((dVar1 * dVar30 - dVar19 * dVar7 * 1.0) - dVar6 * dVar27);
              dVar21 = dVar1 * dVar28 * 1.0 +
                       ((dVar2 * dVar30 - dVar20 * dVar6 * -1.0) - dVar7 * dVar24);
              dVar19 = dVar7 * dVar28 * 1.0 +
                       dVar27 * dVar1 + (dVar30 * dVar6 - dVar19 * dVar2 * 1.0);
              dVar20 = dVar6 * dVar28 * -1.0 +
                       dVar24 * dVar2 + (dVar30 * dVar7 - dVar20 * dVar1 * -1.0);
              dVar6 = *(double *)(lVar4 + 0xd0) * -1.0;
              dVar7 = *(double *)(lVar4 + 0xd8) * 1.0;
              dVar24 = *(double *)(lVar4 + 200);
              dVar27 = *(double *)(lVar4 + 200);
              dVar1 = *(double *)(lVar4 + 0xc0);
              dVar2 = *(double *)(lVar4 + 0xc0);
              dVar28 = dVar11 * dVar6 * -1.0 +
                       ((dVar10 * dVar7 - dVar1 * dVar13 * 1.0) - dVar12 * dVar24);
              dVar30 = dVar10 * dVar6 * 1.0 +
                       ((dVar11 * dVar7 - dVar2 * dVar12 * -1.0) - dVar13 * dVar27);
              dVar24 = dVar13 * dVar6 * 1.0 +
                       dVar24 * dVar10 + (dVar7 * dVar12 - dVar1 * dVar11 * 1.0);
              dVar27 = dVar12 * dVar6 * -1.0 +
                       dVar27 * dVar11 + (dVar7 * dVar13 - dVar2 * dVar10 * -1.0);
            }
            dVar24 = dVar24 * -1.0;
            dVar27 = dVar27 * 1.0;
            dVar1 = (dVar27 * dVar21 + (dVar23 * dVar24 * -1.0 - dVar20 * dVar30)) -
                    dVar28 * dVar19 * 1.0;
            local_f8 = dVar27 * dVar19 * 1.0 +
                       dVar21 * dVar28 + (dVar20 * dVar24 - dVar23 * dVar30 * 1.0);
            dStack_f0 = dVar24 * dVar19 * -1.0 +
                        dVar21 * dVar30 + (dVar20 * dVar27 - dVar23 * dVar28 * -1.0);
            local_108._8_4_ = SUB84(dVar1,0);
            local_108._0_8_ =
                 (dVar24 * dVar21 + (dVar23 * dVar27 * 1.0 - dVar20 * dVar28)) -
                 dVar30 * dVar19 * -1.0;
            local_108._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
            FUN_1448052ee(local_108,&local_120);
            dVar23 = ABS((double)plVar3[7] * dVar9);
            local_138 = -(ulonglong)(9.99999993922529e-09 < dVar23) &
                        -(ulonglong)(ABS(local_120) < dVar23) &
                        (ulonglong)((double)plVar3[7] * dVar9 - local_120);
            dVar23 = ABS((double)plVar3[8] * dVar9);
            local_130 = -(ulonglong)(9.99999993922529e-09 < dVar23) &
                        -(ulonglong)(ABS(local_118) < dVar23) &
                        (ulonglong)((double)plVar3[8] * dVar9 - local_118);
            dVar23 = ABS((double)plVar3[9] * dVar9);
            local_128 = -(ulonglong)(9.99999993922529e-09 < dVar23) &
                        -(ulonglong)(ABS(local_110) < dVar23) &
                        (ulonglong)((double)plVar3[9] * dVar9 - local_110);
            FUN_144a7484c(&local_138,&local_158);
            dVar23 = (double)plVar3[0x13];
            dVar21 = (double)plVar3[0x13];
            dVar27 = (double)plVar3[0x11];
            dVar24 = (double)plVar3[0x11];
            dVar19 = (double)plVar3[0x10];
            dVar20 = (double)plVar3[0x10];
            dVar28 = (double)plVar3[0x12];
            dVar30 = (double)plVar3[0x12];
            dVar1 = dStack_150 * dVar28 * -1.0 +
                    local_148 * dVar27 + dVar19 * dStack_140 * 1.0 + dVar23 * local_158;
            dVar2 = local_158 * dVar30 * 1.0 +
                    dStack_140 * dVar24 + dVar20 * local_148 * -1.0 + dVar21 * dStack_150;
            dVar23 = dStack_140 * dVar28 * 1.0 +
                     ((dVar19 * dStack_150 * 1.0 + dVar23 * local_148) - dVar27 * local_158);
            dVar21 = local_148 * dVar30 * -1.0 +
                     ((dVar20 * local_158 * -1.0 + dVar21 * dStack_140) - dVar24 * dStack_150);
            dVar24 = dVar23 * dVar23 + dVar1 * dVar1;
            dVar27 = dVar21 * dVar21 + dVar2 * dVar2;
            auVar25._0_8_ = dVar24 + dVar27;
            auVar25._8_8_ = dVar24 + dVar27;
            uVar17 = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
            auVar26 = sqrtpd(auVar25,auVar25);
            auVar26 = divpd(_DAT_149934d80,auVar26);
            auVar29._0_8_ = auVar26._0_8_ * dVar23;
            auVar29._8_8_ = auVar26._8_8_ * dVar21;
            uVar8 = (ulonglong)(dVar2 * auVar26._8_8_) & uVar17;
            auVar5._8_4_ = (int)uVar8;
            auVar5._0_8_ = (ulonglong)(dVar1 * auVar26._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
            auVar5._12_4_ = (int)(uVar8 >> 0x20);
            *(undefined1 (*) [16])(plVar3 + 0x10) = auVar5;
            auVar14._4_4_ = uStack_164;
            auVar14._0_4_ = local_168;
            auVar14._8_4_ = uStack_160;
            auVar14._12_4_ = uStack_15c;
            auVar26._8_4_ = (int)uVar17;
            auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
            auVar26._12_4_ = (int)(uVar17 >> 0x20);
            auVar26 = blendvpd(auVar14,auVar29,auVar26);
            *(undefined1 (*) [16])(plVar3 + 0x12) = auVar26;
          }
        } while (dVar16 != *(double *)param_1[0x1e]);
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14985da36 FUN_14985da36 body=217 status=ok
// SIG undefined FUN_14985da36(void)

void FUN_14985da36(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  
  *(undefined1 *)(param_1 + 0x48) = 0;
  lVar1 = (longlong)*(int *)(param_1 + 0x40);
  if (lVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar2 = lVar1 * 0x120 + lVar4;
    lVar3 = 0;
    bVar5 = false;
    do {
      if (param_2 == '\0') {
        iVar6 = *(int *)(lVar4 + 0xcc + lVar3);
        bVar5 = (bool)(bVar5 | *(int *)(lVar4 + 0xf8 + lVar3) != iVar6);
      }
      else {
        iVar6 = *(int *)(lVar4 + 0xcc + lVar3);
        bVar5 = true;
      }
      if (0 < iVar6) {
        *(undefined1 *)(param_1 + 0x48) = 1;
      }
      lVar3 = lVar3 + 0x120;
    } while (lVar1 * 0x120 != lVar3);
    if (bVar5) {
      iVar6 = *(int *)(param_1 + 0x20);
      if ((longlong)iVar6 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x18);
        lVar4 = 0;
        do {
          *(undefined2 *)(lVar1 + 0x114 + lVar4) = 0;
          lVar4 = lVar4 + 0x120;
        } while ((longlong)iVar6 * 0x120 != lVar4);
        if ((longlong)*(int *)(param_1 + 0x40) == 0) {
          return;
        }
        lVar4 = *(longlong *)(param_1 + 0x38);
        lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x120 + lVar4;
      }
      do {
        FUN_14985cfd4(lVar4);
        lVar4 = lVar4 + 0x120;
      } while (lVar4 != lVar2);
    }
  }
  return;
}



// FUNCTION 14985db10 FUN_14985db10 body=62 status=ok
// SIG undefined FUN_14985db10(void)

void FUN_14985db10(undefined8 param_1,longlong param_2)

{
  FUN_14985e2f6(param_1,*(undefined1 *)(param_2 + 0xd),param_2 + 0x10);
  FUN_14985edc0(param_1);
  FUN_14985ee44(param_1,*(undefined4 *)(param_2 + 0x30));
  FUN_14985f612(param_1,param_2);
  return;
}



// FUNCTION 14985db4e FUN_14985db4e body=1960 status=ok
// SIG undefined FUN_14985db4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14985db4e(longlong param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  longlong lVar21;
  ulonglong uVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  
  iVar11 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar11 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x18);
    lVar21 = 0;
    do {
      dVar4 = *(double *)(lVar12 + 0xe0 + lVar21);
      dVar5 = *(double *)(lVar12 + 0xe8 + lVar21);
      dVar6 = *(double *)(lVar12 + 0xf0 + lVar21);
      dVar7 = *(double *)(lVar12 + 0x90 + lVar21);
      dVar24 = *(double *)(lVar12 + 0x88 + lVar21);
      dVar25 = *(double *)(lVar12 + 0x80 + lVar21);
      dVar16 = dVar24 * dVar6 - dVar5 * dVar7;
      dVar16 = dVar16 + dVar16;
      dVar8 = *(double *)(lVar12 + 0x98 + lVar21);
      dVar17 = dVar25 * dVar5 - dVar4 * dVar24;
      dVar17 = dVar17 + dVar17;
      dVar31 = dVar7 * dVar4 - dVar6 * dVar25;
      dVar31 = dVar31 + dVar31;
      dVar9 = *(double *)(lVar12 + 0x78 + lVar21);
      dVar10 = *(double *)(lVar12 + 0x70 + lVar21);
      lVar13 = *(longlong *)(lVar12 + lVar21);
      *(double *)(lVar13 + 0x10) =
           (dVar24 * dVar17 - dVar31 * dVar7) + dVar16 * dVar8 + dVar4 +
           *(double *)(lVar12 + 0x68 + lVar21);
      *(double *)(lVar13 + 0x18) =
           (dVar7 * dVar16 - dVar17 * dVar25) + dVar8 * dVar31 + dVar5 + dVar10;
      *(double *)(lVar13 + 0x20) =
           (dVar25 * dVar31 - dVar16 * dVar24) + dVar8 * dVar17 + dVar6 + dVar9;
      lVar13 = *(longlong *)(lVar12 + lVar21);
      puVar1 = (undefined8 *)(lVar12 + 0x90 + lVar21);
      uVar20 = puVar1[1];
      *(undefined8 *)(lVar13 + 0x40) = *puVar1;
      *(undefined8 *)(lVar13 + 0x48) = uVar20;
      *(undefined1 (*) [16])(lVar13 + 0x30) = *(undefined1 (*) [16])(lVar12 + 0x80 + lVar21);
      lVar21 = lVar21 + 0x120;
    } while ((longlong)iVar11 * 0x120 != lVar21);
  }
  auVar15 = _DAT_149934d80;
  iVar11 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar11 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x38);
    lVar21 = 0;
    do {
      lVar13 = *(longlong *)(lVar12 + 0xd8 + lVar21);
      if (*(char *)(lVar13 + 0xd8) == '\0') {
        lVar14 = *(longlong *)(lVar13 + 0xc0);
        if (*(longlong *)(lVar13 + 0xb8) == 0) {
          if (lVar14 != 0) {
            dVar4 = *(double *)(lVar13 + 0x68);
            dVar5 = *(double *)(lVar13 + 0x70);
            dVar6 = *(double *)(lVar13 + 0x78);
            dVar7 = *(double *)(lVar14 + 0x40);
            dVar24 = *(double *)(lVar14 + 0x30);
            dVar25 = *(double *)(lVar14 + 0x38);
            dVar17 = dVar25 * dVar6 - dVar5 * dVar7;
            dVar17 = dVar17 + dVar17;
            dVar8 = *(double *)(lVar14 + 0x48);
            dVar31 = dVar24 * dVar5 - dVar4 * dVar25;
            dVar31 = dVar31 + dVar31;
            dVar16 = dVar7 * dVar4 - dVar6 * dVar24;
            dVar16 = dVar16 + dVar16;
            dVar9 = *(double *)(lVar14 + 0x20);
            dVar10 = *(double *)(lVar14 + 0x18);
            *(double *)(lVar13 + 0x10) =
                 (dVar25 * dVar31 - dVar16 * dVar7) + dVar17 * dVar8 + dVar4 +
                 *(double *)(lVar14 + 0x10);
            *(double *)(lVar13 + 0x18) =
                 (dVar7 * dVar17 - dVar31 * dVar24) + dVar8 * dVar16 + dVar5 + dVar10;
            *(double *)(lVar13 + 0x20) =
                 (dVar24 * dVar16 - dVar17 * dVar25) + dVar8 * dVar31 + dVar6 + dVar9;
            goto LAB_14985dd81;
          }
          puVar1 = (undefined8 *)(lVar12 + lVar21);
          *(undefined8 *)(lVar13 + 0x20) = puVar1[2];
          uVar20 = puVar1[1];
          *(undefined8 *)(lVar13 + 0x10) = *puVar1;
          *(undefined8 *)(lVar13 + 0x18) = uVar20;
LAB_14985e0a7:
          dVar10 = *(double *)(lVar13 + 0x30);
          dVar16 = *(double *)(lVar13 + 0x38);
          dVar4 = *(double *)(lVar13 + 0x40);
          dVar5 = *(double *)(lVar13 + 0x48);
        }
        else {
          if (lVar14 == 0) goto LAB_14985e0a7;
LAB_14985dd81:
          dVar17 = *(double *)(lVar13 + 0x80);
          dVar31 = *(double *)(lVar13 + 0x88);
          dVar18 = *(double *)(lVar13 + 0x90);
          dVar19 = *(double *)(lVar13 + 0x98);
          dVar4 = *(double *)(lVar14 + 0x48);
          dVar5 = *(double *)(lVar14 + 0x48);
          dVar6 = *(double *)(lVar14 + 0x38);
          dVar7 = *(double *)(lVar14 + 0x38);
          dVar25 = *(double *)(lVar14 + 0x30);
          dVar24 = *(double *)(lVar14 + 0x30);
          dVar8 = *(double *)(lVar14 + 0x40);
          dVar9 = *(double *)(lVar14 + 0x40);
          dVar10 = dVar31 * dVar8 * -1.0 + dVar18 * dVar6 + dVar25 * dVar19 * 1.0 + dVar4 * dVar17;
          dVar16 = dVar17 * dVar9 * 1.0 + dVar19 * dVar7 + dVar24 * dVar18 * -1.0 + dVar5 * dVar31;
          dVar4 = dVar19 * dVar8 * 1.0 + ((dVar25 * dVar31 * 1.0 + dVar4 * dVar18) - dVar6 * dVar17)
          ;
          dVar5 = dVar18 * dVar9 * -1.0 +
                  ((dVar24 * dVar17 * -1.0 + dVar5 * dVar19) - dVar7 * dVar31);
        }
        fVar23 = *(float *)(lVar12 + 0xd4 + lVar21);
        if (1.0 <= fVar23) {
          fVar23 = 1.0;
        }
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        dVar24 = (double)fVar23;
        pdVar2 = (double *)(lVar12 + 0x20 + lVar21);
        pdVar3 = (double *)(lVar12 + 0x30 + lVar21);
        uVar22 = -(ulonglong)
                  (0.0 <= dVar5 * *(double *)(lVar12 + 0x38 + lVar21) +
                          *(double *)(lVar12 + 0x30 + lVar21) * dVar4 +
                          *(double *)(lVar12 + 0x20 + lVar21) * dVar10 +
                          dVar16 * *(double *)(lVar12 + 0x28 + lVar21));
        dVar25 = (double)(~uVar22 & (ulonglong)-(1.0 - dVar24) | uVar22 & (ulonglong)(1.0 - dVar24))
        ;
        dVar6 = dVar10 * dVar25 + *pdVar2 * dVar24;
        dVar7 = dVar16 * dVar25 + pdVar2[1] * dVar24;
        dVar4 = dVar4 * dVar25 + dVar24 * *pdVar3;
        dVar5 = dVar5 * dVar25 + dVar24 * pdVar3[1];
        dVar24 = dVar4 * dVar4 + dVar6 * dVar6;
        dVar25 = dVar5 * dVar5 + dVar7 * dVar7;
        auVar26._0_8_ = dVar24 + dVar25;
        auVar26._8_8_ = dVar24 + dVar25;
        auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
        auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
        auVar27 = sqrtpd(auVar26,auVar26);
        auVar29 = divpd(auVar15,auVar27);
        auVar30._0_8_ = auVar29._0_8_ * dVar4;
        auVar30._8_8_ = auVar29._8_8_ * dVar5;
        uVar22 = (ulonglong)(dVar7 * auVar29._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
        auVar28 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar30,auVar28);
        auVar27._8_4_ = (int)uVar22;
        auVar27._0_8_ =
             (ulonglong)(dVar6 * auVar29._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
        auVar27._12_4_ = (int)(uVar22 >> 0x20);
        *(undefined1 (*) [16])(lVar13 + 0x30) = auVar27;
        *(undefined1 (*) [16])(lVar13 + 0x40) = auVar28;
      }
      lVar21 = lVar21 + 0x120;
    } while ((longlong)iVar11 * 0x120 != lVar21);
  }
  iVar11 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar11 != 0) {
    lVar12 = *(longlong *)(param_1 + 8);
    lVar21 = 0;
    do {
      if ((*(char *)(lVar12 + 0xd9 + lVar21) == '\0') &&
         (lVar13 = *(longlong *)(lVar12 + 0xc0 + lVar21), lVar13 != 0)) {
        dVar4 = *(double *)(lVar12 + 0x68 + lVar21);
        dVar5 = *(double *)(lVar12 + 0x70 + lVar21);
        dVar6 = *(double *)(lVar12 + 0x78 + lVar21);
        dVar7 = *(double *)(lVar13 + 0x40);
        dVar24 = *(double *)(lVar13 + 0x30);
        dVar25 = *(double *)(lVar13 + 0x38);
        dVar16 = dVar25 * dVar6 - dVar5 * dVar7;
        dVar16 = dVar16 + dVar16;
        dVar8 = *(double *)(lVar13 + 0x48);
        dVar17 = dVar24 * dVar5 - dVar4 * dVar25;
        dVar17 = dVar17 + dVar17;
        dVar31 = dVar7 * dVar4 - dVar6 * dVar24;
        dVar31 = dVar31 + dVar31;
        dVar9 = *(double *)(lVar13 + 0x20);
        dVar10 = *(double *)(lVar13 + 0x18);
        *(double *)(lVar12 + 0x10 + lVar21) =
             (dVar25 * dVar17 - dVar31 * dVar7) + dVar16 * dVar8 + dVar4 +
             *(double *)(lVar13 + 0x10);
        *(double *)(lVar12 + 0x18 + lVar21) =
             (dVar7 * dVar16 - dVar17 * dVar24) + dVar8 * dVar31 + dVar5 + dVar10;
        *(double *)(lVar12 + 0x20 + lVar21) =
             (dVar24 * dVar31 - dVar16 * dVar25) + dVar8 * dVar17 + dVar6 + dVar9;
        pdVar2 = (double *)(lVar12 + 0x80 + lVar21);
        dVar16 = *pdVar2;
        dVar17 = pdVar2[1];
        pdVar2 = (double *)(lVar12 + 0x90 + lVar21);
        dVar31 = *pdVar2;
        dVar18 = pdVar2[1];
        dVar5 = *(double *)(lVar13 + 0x48);
        dVar4 = *(double *)(lVar13 + 0x48);
        dVar7 = *(double *)(lVar13 + 0x38);
        dVar6 = *(double *)(lVar13 + 0x38);
        dVar25 = *(double *)(lVar13 + 0x30);
        dVar24 = *(double *)(lVar13 + 0x30);
        dVar9 = *(double *)(lVar13 + 0x40);
        dVar8 = *(double *)(lVar13 + 0x40);
        dVar10 = dVar16 * dVar8 * 1.0 + dVar18 * dVar6 + dVar24 * dVar31 * -1.0 + dVar4 * dVar17;
        auVar15._8_4_ = SUB84(dVar10,0);
        auVar15._0_8_ =
             dVar17 * dVar9 * -1.0 + dVar31 * dVar7 + dVar25 * dVar18 * 1.0 + dVar5 * dVar16;
        auVar15._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(lVar12 + 0x30 + lVar21) = auVar15;
        pdVar2 = (double *)(lVar12 + 0x40 + lVar21);
        *pdVar2 = dVar18 * dVar9 * 1.0 + ((dVar25 * dVar17 * 1.0 + dVar5 * dVar31) - dVar7 * dVar16)
        ;
        pdVar2[1] = dVar31 * dVar8 * -1.0 +
                    ((dVar24 * dVar16 * -1.0 + dVar4 * dVar18) - dVar6 * dVar17);
      }
      lVar21 = lVar21 + 0xe0;
    } while ((longlong)iVar11 * 0xe0 - lVar21 != 0);
  }
  return;
}



// FUNCTION 14985e2f6 FUN_14985e2f6 body=2760 status=ok
// SIG undefined FUN_14985e2f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14985e2f6(longlong *param_1,char param_2,float *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  double *pdVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar36;
  undefined1 auStack_4a8 [32];
  double *local_488;
  double local_478;
  double local_470;
  double local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  undefined1 local_418 [16];
  double local_408;
  double dStack_400;
  double local_3f8;
  ulonglong uStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  ulonglong uStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  ulonglong uStack_3b0;
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  undefined1 *local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  double local_318;
  double dStack_310;
  undefined1 *local_300;
  double local_2f8;
  double local_2f0;
  undefined1 local_2e8 [32];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined1 local_290 [192];
  undefined1 *local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [192];
  undefined1 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  if (param_2 == '\0') {
    local_100 = (undefined1 *)0x0;
    local_f8 = 0x800000000;
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = 0x800000000;
    uVar16 = *(uint *)(param_1 + 8);
    if ((int)uVar16 < 0) {
LAB_14985edb7:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar16);
    }
    if (8 < uVar16) {
      FUN_147f619b0(local_1c0);
      uVar16 = *(uint *)(param_1 + 8);
      if ((int)uVar16 < 0) goto LAB_14985edb7;
      if (8 < uVar16) {
        FUN_147f619b0(local_290);
        uVar16 = *(uint *)(param_1 + 8);
      }
    }
    if (uVar16 != 0) {
      lVar13 = param_1[7];
      lVar18 = 0;
      do {
        uVar7 = local_f8;
        lVar17 = (longlong)(int)local_f8;
        uVar14 = (int)local_f8 + 1;
        local_f8 = CONCAT44(local_f8._4_4_,uVar14);
        if (local_f8._4_4_ < uVar14) {
          FUN_146c5b08e(local_1c0,uVar7 & 0xffffffff);
        }
        uVar7 = local_1c8;
        puVar1 = (undefined8 *)(lVar13 + 0x40 + lVar18);
        puVar15 = local_100;
        if (local_100 == (undefined1 *)0x0) {
          puVar15 = local_1c0;
        }
        *(undefined8 *)(puVar15 + lVar17 * 0x18 + 0x10) = puVar1[2];
        uVar12 = puVar1[1];
        *(undefined8 *)(puVar15 + lVar17 * 0x18) = *puVar1;
        *(undefined8 *)((longlong)(puVar15 + lVar17 * 0x18) + 8) = uVar12;
        lVar17 = (longlong)(int)local_1c8;
        uVar14 = (int)local_1c8 + 1;
        local_1c8 = CONCAT44(local_1c8._4_4_,uVar14);
        if (local_1c8._4_4_ < uVar14) {
          FUN_146c5b08e(local_290,uVar7 & 0xffffffff);
        }
        puVar15 = local_1d0;
        if (local_1d0 == (undefined1 *)0x0) {
          puVar15 = local_290;
        }
        lVar2 = lVar13 + 0x40 + lVar18;
        *(undefined8 *)(puVar15 + lVar17 * 0x18 + 0x10) = *(undefined8 *)(lVar2 + -0x30);
        uVar12 = *(undefined8 *)(lVar2 + -0x38);
        *(undefined8 *)(puVar15 + lVar17 * 0x18) = *(undefined8 *)(lVar2 + -0x40);
        *(undefined8 *)((longlong)(puVar15 + lVar17 * 0x18) + 8) = uVar12;
        lVar18 = lVar18 + 0x120;
      } while ((longlong)(int)uVar16 * 0x120 != lVar18);
    }
    local_298 = DAT_14c8464f0;
    local_2a8 = DAT_14c8464e0;
    dStack_2a0 = DAT_14c8464e8;
    local_488 = &local_2c8;
    local_2b8 = DAT_14c8464f0;
    local_2c8 = DAT_14c8464e0;
    dStack_2c0 = DAT_14c8464e8;
    local_328 = local_1d0;
    if (local_1d0 == (undefined1 *)0x0) {
      local_328 = local_290;
    }
    uStack_320 = (int)local_1c8;
    local_300 = local_100;
    if (local_100 == (undefined1 *)0x0) {
      local_300 = local_1c0;
    }
    local_2f8 = (double)CONCAT44(local_2f8._4_4_,(int)local_f8);
    FUN_14985fb74(local_2e8,&local_300,&local_328,&local_2a8);
    dVar21 = local_2b8 - local_298;
    dVar22 = dStack_2c0 - dStack_2a0;
    dVar24 = local_2c8 - local_2a8;
    fVar4 = param_3[7];
    fVar5 = param_3[6];
    fVar6 = param_3[5];
    dVar23 = (double)param_3[4];
    FUN_1449413b4(local_2e8,&local_328);
    local_2f0 = (double)param_3[3] * local_318;
    local_2f8 = (double)param_3[2] * (double)CONCAT44(uStack_31c,uStack_320);
    local_300 = (undefined1 *)((double)param_3[1] * (double)local_328);
    FUN_144afe3ce(&local_328,&local_300);
    lVar13 = param_1[4];
    if ((longlong)(int)lVar13 != 0) {
      lVar18 = param_1[3];
      lVar17 = *(longlong *)(*param_1 + 0xb8);
      local_468 = *(double *)(lVar17 + 0x68);
      local_470 = *(double *)(lVar17 + 0x70);
      local_478 = *(double *)(lVar17 + 0x78);
      local_450 = dVar21 * (double)fVar4 * dVar23 + local_478;
      dVar27 = (double)*param_3;
      local_460 = dVar22 * (double)fVar5 * dVar23 + local_470;
      uVar7 = DAT_149931e80;
      uVar8 = DAT_149931e80._8_8_;
      uVar19 = -(ulonglong)
                (0.0 <= DAT_14c8463e8 * dStack_310 +
                        DAT_14c8463e0 * local_318 +
                        DAT_14c8463d0 * (double)local_328 +
                        DAT_14c8463d8 * (double)CONCAT44(uStack_31c,uStack_320));
      dVar28 = (double)(~uVar19 & ((ulonglong)(1.0 - dVar27) ^ uVar7) |
                       uVar19 & (ulonglong)(1.0 - dVar27));
      dVar21 = DAT_14c8463e0 * dVar28 + local_318 * dVar27;
      dVar22 = DAT_14c8463e8 * dVar28 + dStack_310 * dVar27;
      dVar29 = dVar28 * DAT_14c8463d0 + dVar27 * (double)local_328;
      dVar27 = dVar28 * DAT_14c8463d8 + dVar27 * (double)CONCAT44(uStack_31c,uStack_320);
      dVar28 = dVar29 * dVar29 + dVar21 * dVar21;
      dVar35 = dVar27 * dVar27 + dVar22 * dVar22;
      auVar33._0_8_ = dVar28 + dVar35;
      auVar33._8_8_ = dVar28 + dVar35;
      local_458 = dVar24 * (double)fVar6 * dVar23 + local_468;
      auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
      auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
      auVar34 = sqrtpd(auVar33,auVar33);
      auVar26 = divpd(_DAT_149934d80,auVar34);
      auVar34._8_8_ = dVar22 * auVar26._8_8_;
      auVar34._0_8_ = dVar21 * auVar26._0_8_;
      auVar34 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar34,auVar20);
      dVar24 = (double)((ulonglong)(auVar26._0_8_ * dVar29) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
      dVar22 = (double)((ulonglong)(auVar26._8_8_ * dVar27) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
      local_348 = *(double *)(lVar17 + 0x80);
      dStack_340 = *(double *)(lVar17 + 0x88);
      local_428 = *(double *)(lVar17 + 0x90);
      local_3e8 = *(double *)(lVar17 + 0x98);
      dVar23 = auVar34._0_8_;
      dVar21 = auVar34._8_8_;
      auVar26._8_4_ = SUB84(dVar22,0);
      auVar26._12_4_ = (undefined4)((ulonglong)dVar22 >> 0x20);
      auVar26._0_8_ = dVar22;
      local_448 = ((dStack_340 * dVar24 * 1.0 + local_428 * dVar21) - local_348 * dVar22) +
                  local_3e8 * dVar23 * 1.0;
      local_408 = ((local_348 * dVar24 * -1.0 + local_3e8 * dVar21) - dStack_340 * auVar26._8_8_) +
                  local_428 * dVar23 * -1.0;
      local_438 = local_3e8 * dVar24 * 1.0 + dVar21 * local_348 + dVar22 * local_428 +
                  dStack_340 * dVar23 * -1.0;
      local_3c8 = local_428 * dVar24 * -1.0 + dVar21 * dStack_340 + auVar26._8_8_ * local_3e8 +
                  local_348 * dVar23 * 1.0;
      dVar23 = (double)((ulonglong)local_348 ^ uVar7);
      dVar21 = (double)((ulonglong)dStack_340 ^ uVar8);
      uVar36 = (undefined4)((ulonglong)dVar21 >> 0x20);
      local_428 = local_428 * -1.0;
      local_3e8 = local_3e8 * 1.0;
      local_398._8_4_ = SUB84(dVar21,0);
      local_398._0_8_ = dVar21;
      local_398._12_4_ = uVar36;
      local_3a8 = local_398 ^ _DAT_149931e80;
      local_3b8 = (double)((ulonglong)local_428 ^ uVar7);
      uStack_3b0 = (ulonglong)local_3e8 ^ uVar8;
      local_3d8 = (double)((ulonglong)local_3c8 ^ uVar7);
      uStack_3d0 = (ulonglong)local_3c8 ^ uVar8;
      local_3f8 = (double)((ulonglong)local_438 ^ uVar7);
      uStack_3f0 = (ulonglong)local_3c8 ^ uVar8;
      dVar24 = (double)(uVar7 ^ (ulonglong)local_448);
      local_338._8_4_ = (int)(uVar8 ^ (ulonglong)local_408);
      local_338._0_8_ = dVar24;
      local_338._12_4_ = (int)((uVar8 ^ (ulonglong)local_408) >> 0x20);
      lVar17 = 0;
      local_388._8_4_ = SUB84(dVar21,0);
      local_388._0_8_ = dVar23;
      local_388._12_4_ = uVar36;
      local_418._8_4_ = SUB84(dVar23,0);
      local_418._0_8_ = dVar23;
      local_418._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      local_358._8_4_ = SUB84(local_3e8,0);
      local_358._0_8_ = local_428;
      local_358._12_4_ = (int)((ulonglong)local_3e8 >> 0x20);
      local_368._8_4_ = SUB84(local_3c8,0);
      local_368._0_8_ = local_438;
      local_368._12_4_ = (int)((ulonglong)local_3c8 >> 0x20);
      local_378._8_4_ = SUB84(local_408,0);
      local_378._0_8_ = local_448;
      local_378._12_4_ = (int)((ulonglong)local_408 >> 0x20);
      do {
        dVar27 = *(double *)(lVar18 + 0x78 + lVar17) - local_478;
        dVar22 = *(double *)(lVar18 + 0x70 + lVar17) - local_470;
        dVar29 = *(double *)(lVar18 + 0x68 + lVar17) - local_468;
        dVar28 = dVar21 * dVar27 + dVar22 * local_3b8;
        dVar28 = dVar28 + dVar28;
        dVar35 = dVar23 * dVar22 + dVar29 * (double)local_3a8._0_8_;
        dVar35 = dVar35 + dVar35;
        dVar30 = local_428 * dVar29 + dVar27 * local_348;
        dVar30 = dVar30 + dVar30;
        dVar27 = dVar23 * dVar30 + dVar28 * (double)local_3a8._0_8_ + local_3e8 * dVar35 + dVar27;
        dVar25 = dVar35 * local_348 + local_428 * dVar28 + local_3e8 * dVar30 + dVar22;
        dVar31 = dVar30 * local_3b8 + dVar21 * dVar35 + local_3e8 * dVar28 + dVar29;
        pdVar3 = (double *)(lVar18 + 0x80 + lVar17);
        dVar22 = *pdVar3;
        dVar28 = pdVar3[1];
        pdVar3 = (double *)(lVar18 + 0x90 + lVar17);
        dVar35 = *pdVar3;
        dVar32 = pdVar3[1];
        dVar30 = dVar28 * local_428 * -1.0 +
                 dVar23 * dVar32 * 1.0 + local_3e8 * dVar22 + dVar21 * dVar35;
        dVar11 = dVar22 * local_428 * 1.0 +
                 (double)local_418._8_8_ * dVar35 * -1.0 + local_3e8 * dVar28 +
                 (double)local_398._8_8_ * dVar32;
        dVar29 = dVar32 * local_428 * 1.0 +
                 ((dVar23 * dVar28 * 1.0 + local_3e8 * dVar35) - dVar21 * dVar22);
        dVar35 = dVar35 * local_428 * -1.0 +
                 (((double)local_418._8_8_ * dVar22 * -1.0 + local_3e8 * dVar32) -
                 (double)local_398._8_8_ * dVar28);
        dVar28 = local_3c8 * dVar27 + dVar25 * dVar24;
        dVar28 = dVar28 + dVar28;
        dVar32 = local_438 * dVar25 + dVar31 * local_3d8;
        dVar32 = dVar32 + dVar32;
        dVar22 = local_448 * dVar31 + dVar27 * local_3f8;
        dVar22 = dVar22 + dVar22;
        *(double *)(lVar18 + 0x68 + lVar17) =
             dVar22 * dVar24 + local_3c8 * dVar32 + local_408 * dVar28 + dVar31 + local_458;
        *(double *)(lVar18 + 0x70 + lVar17) =
             dVar32 * local_3f8 + local_448 * dVar28 + local_408 * dVar22 + dVar25 + local_460;
        *(double *)(lVar18 + 0x78 + lVar17) =
             local_438 * dVar22 + dVar28 * local_3d8 + local_408 * dVar32 + dVar27 + local_450;
        dVar27 = dVar30 * local_448 * 1.0 +
                 local_438 * dVar29 * -1.0 + local_408 * dVar11 + local_3c8 * dVar35;
        dVar22 = dVar29 * local_448 * -1.0 +
                 ((local_438 * dVar30 * -1.0 + local_408 * dVar35) - local_3c8 * dVar11);
        auVar10._8_4_ = SUB84(dVar27,0);
        auVar10._0_8_ =
             dVar11 * local_448 * -1.0 +
             local_438 * dVar35 * 1.0 + local_408 * dVar30 + local_3c8 * dVar29;
        auVar10._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        *(undefined1 (*) [16])(lVar18 + 0x80 + lVar17) = auVar10;
        auVar9._8_4_ = SUB84(dVar22,0);
        auVar9._0_8_ = dVar35 * local_448 * 1.0 +
                       ((local_438 * dVar11 * 1.0 + local_408 * dVar29) - local_3c8 * dVar30);
        auVar9._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        *(undefined1 (*) [16])(lVar18 + 0x90 + lVar17) = auVar9;
        lVar17 = lVar17 + 0x120;
        dStack_440 = local_448;
        dStack_430 = local_438;
        dStack_420 = local_428;
        dStack_400 = local_408;
        dStack_3e0 = local_3e8;
        dStack_3c0 = local_3c8;
      } while ((longlong)(int)lVar13 * 0x120 != lVar17);
    }
    if (local_1d0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_100 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14985edc0 FUN_14985edc0 body=132 status=ok
// SIG undefined FUN_14985edc0(void)

void FUN_14985edc0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x120;
    do {
      FUN_14985d3aa(lVar4);
      lVar4 = lVar4 + 0x120;
      lVar2 = lVar2 + -0x120;
    } while (lVar2 != 0);
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x30);
  if (0 < lVar4) {
    uVar3 = lVar4 + 1;
    lVar4 = lVar4 << 4;
    do {
      lVar4 = lVar4 + -0x10;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar4);
      (**(code **)(*plVar1 + 8))(plVar1,0x3f800000);
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 14985ee44 FUN_14985ee44 body=1996 status=ok
// SIG undefined FUN_14985ee44(void)

void FUN_14985ee44(longlong param_1,float param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_228 [44];
  float local_1fc;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  float local_1a8;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1a8 = param_2;
  if ((1e-08 < ABS(param_2)) && ((longlong)*(int *)(param_1 + 0x40) != 0)) {
    pdVar13 = *(double **)(param_1 + 0x38);
    pdVar14 = pdVar13 + (longlong)*(int *)(param_1 + 0x40) * 0x24;
    do {
      dVar19 = pdVar13[0x1e];
      if (((dVar19 != 0.0) &&
          (1e-08 < *(float *)(pdVar13 + 0x22) || *(float *)(pdVar13 + 0x22) == 1e-08)) &&
         (1e-08 < *(float *)(pdVar13 + 0x1a) || *(float *)(pdVar13 + 0x1a) == 1e-08)) {
        local_d8 = pdVar13[10] - *(double *)((longlong)dVar19 + 0xb0);
        dStack_e0 = pdVar13[9] - *(double *)((longlong)dVar19 + 0xa8);
        local_e8 = pdVar13[8] - *(double *)((longlong)dVar19 + 0xa0);
        fVar22 = (float)SQRT(local_d8 * local_d8 + local_e8 * local_e8 + dStack_e0 * dStack_e0);
        if (fVar22 <= 1e-08) {
          local_d8 = DAT_14c8464f0;
          local_e8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dStack_e0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          dVar18 = (double)(1.0 / fVar22);
          local_d8 = local_d8 * dVar18;
          dStack_e0 = dStack_e0 * dVar18;
          local_e8 = local_e8 * dVar18;
        }
        pdVar1 = *(double **)((longlong)dVar19 + 0x58);
        if (pdVar1 == (double *)0x0) {
          local_1d0 = *(double *)((longlong)dVar19 + 0x68);
          local_1d8 = *(double *)((longlong)dVar19 + 0x70);
          local_1f8 = *(double *)((longlong)dVar19 + 0x78);
        }
        else {
          local_1f8 = (pdVar1[2] - pdVar1[10]) + *(double *)((longlong)dVar19 + 0x78);
          local_1d8 = (pdVar1[1] - pdVar1[9]) + *(double *)((longlong)dVar19 + 0x70);
          local_1d0 = (*pdVar1 - pdVar1[8]) + *(double *)((longlong)dVar19 + 0x68);
        }
        local_f8 = pdVar13[2] - local_1f8;
        uStack_100 = pdVar13[1] - local_1d8;
        local_108 = *pdVar13 - local_1d0;
        fVar23 = (float)SQRT(local_f8 * local_f8 + local_108 * local_108 + uStack_100 * uStack_100);
        if (fVar23 <= 1e-08) {
          local_f8 = DAT_14c8464f0;
          local_108 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_100 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          dVar19 = (double)(1.0 / fVar23);
          local_f8 = local_f8 * dVar19;
          uStack_100 = uStack_100 * dVar19;
          local_108 = local_108 * dVar19;
        }
        FUN_144a9d448(&local_128,&local_e8,&local_108);
        dVar19 = (double)(*(float *)(pdVar13 + 0x1a) * *(float *)(pdVar13 + 0x19) * local_1a8);
        uVar15 = -(ulonglong)
                  (0.0 <= DAT_14c8463e8 * dStack_110 +
                          DAT_14c8463e0 * local_118 +
                          DAT_14c8463d0 * local_128 + DAT_14c8463d8 * dStack_120);
        dVar18 = (double)(~uVar15 & (ulonglong)-(1.0 - dVar19) | uVar15 & (ulonglong)(1.0 - dVar19))
        ;
        local_1b8 = DAT_14c8463d0 * dVar18 + local_128 * dVar19;
        dStack_1b0 = DAT_14c8463d8 * dVar18 + dStack_120 * dVar19;
        local_1c8 = dVar18 * DAT_14c8463e0 + dVar19 * local_118;
        dStack_1c0 = dVar18 * DAT_14c8463e8 + dVar19 * dStack_110;
        lVar11 = *(longlong *)((longlong)pdVar13[0x1b] + 0xc0);
        local_128 = local_1b8;
        dStack_120 = dStack_1b0;
        local_118 = local_1c8;
        dStack_110 = dStack_1c0;
        if (lVar11 != 0) {
          dVar18 = (double)(fVar23 - fVar22);
          local_1e8 = local_f8 * dVar18 * dVar19;
          local_1f0 = uStack_100 * dVar18 * dVar19;
          local_1e0 = dVar18 * local_108 * dVar19;
          local_1fc = 1.0 / *(float *)(pdVar13 + 0x22);
          uVar16 = SUB84(dStack_1b0,0);
          uVar17 = (uint)((ulonglong)dStack_1b0 >> 0x20);
          local_168._8_4_ = uVar16;
          local_168._0_8_ = dStack_1b0;
          local_168._12_4_ = uVar17;
          dVar19 = -dStack_1b0;
          local_138._8_4_ = uVar16;
          local_138._0_8_ = dVar19;
          local_138._12_4_ = uVar17 ^ 0x80000000;
          dVar18 = -local_1b8;
          local_148._8_4_ = uVar16;
          local_148._0_8_ = dVar18;
          local_148._12_4_ = uVar17 ^ 0x80000000;
          dVar6 = -local_1c8;
          uVar17 = (uint)((ulonglong)dStack_1c0 >> 0x20);
          local_158._8_4_ = SUB84(dStack_1c0,0);
          local_158._0_8_ = dVar6;
          local_158._12_4_ = uVar17 ^ 0x80000000;
          local_178._8_4_ = SUB84(local_1b8,0);
          local_178._0_8_ = local_1b8;
          local_178._12_4_ = (int)((ulonglong)local_1b8 >> 0x20);
          local_188._8_4_ = SUB84(local_1c8,0);
          local_188._0_8_ = local_1c8;
          local_188._12_4_ = (int)((ulonglong)local_1c8 >> 0x20);
          local_198._8_4_ = SUB84(dStack_1c0,0);
          local_198._0_8_ = dStack_1c0;
          local_198._12_4_ = uVar17;
          lVar12 = 0;
          do {
            dVar2 = *(double *)(lVar11 + 0xb8);
            if (dVar2 == pdVar13[0x1e]) break;
            dVar21 = *(double *)((longlong)dVar2 + 0x78) - local_1f8;
            dVar20 = *(double *)((longlong)dVar2 + 0x70) - local_1d8;
            dVar10 = *(double *)((longlong)dVar2 + 0x68) - local_1d0;
            dVar7 = dStack_1b0 * dVar21 + dVar20 * dVar6;
            dVar7 = dVar7 + dVar7;
            dVar9 = local_1b8 * dVar20 + dVar10 * dVar19;
            dVar9 = dVar9 + dVar9;
            dVar8 = local_1c8 * dVar10 + dVar21 * dVar18;
            dVar8 = dVar8 + dVar8;
            *(double *)((longlong)dVar2 + 0x68) =
                 dVar8 * dVar6 + dStack_1b0 * dVar9 + dStack_1c0 * dVar7 + dVar10 + local_1d0;
            *(double *)((longlong)dVar2 + 0x70) =
                 dVar9 * dVar18 + local_1c8 * dVar7 + dStack_1c0 * dVar8 + dVar20 + local_1d8;
            *(double *)((longlong)dVar2 + 0x78) =
                 local_1b8 * dVar8 + dVar7 * dVar19 + dStack_1c0 * dVar9 + dVar21 + local_1f8;
            lVar3 = *(longlong *)(lVar11 + 0xb8);
            dVar8 = *(double *)(lVar3 + 0x80);
            dVar9 = *(double *)(lVar3 + 0x88);
            dVar10 = *(double *)(lVar3 + 0x90);
            dVar20 = *(double *)(lVar3 + 0x98);
            dVar2 = dVar8 * (double)local_188._8_8_ * 1.0 +
                    (double)local_178._8_8_ * dVar10 * -1.0 + (double)local_198._8_8_ * dVar9 +
                    (double)local_168._8_8_ * dVar20;
            dVar7 = dVar10 * (double)local_188._8_8_ * -1.0 +
                    (((double)local_178._8_8_ * dVar8 * -1.0 + (double)local_198._8_8_ * dVar20) -
                    (double)local_168._8_8_ * dVar9);
            auVar4._8_4_ = SUB84(dVar2,0);
            auVar4._0_8_ = dVar9 * local_1c8 * -1.0 +
                           local_1b8 * dVar20 * 1.0 + dStack_1c0 * dVar8 + dStack_1b0 * dVar10;
            auVar4._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
            *(undefined1 (*) [16])(lVar3 + 0x80) = auVar4;
            auVar5._8_4_ = SUB84(dVar7,0);
            auVar5._0_8_ = dVar20 * local_1c8 * 1.0 +
                           ((local_1b8 * dVar9 * 1.0 + dStack_1c0 * dVar10) - dStack_1b0 * dVar8);
            auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
            *(undefined1 (*) [16])(lVar3 + 0x90) = auVar5;
            dVar2 = (double)(1.0 - *(float *)((longlong)pdVar13[0x20] + lVar12) * local_1fc);
            lVar3 = *(longlong *)(lVar11 + 0xb8);
            *(double *)(lVar3 + 0x68) = dVar2 * local_1e0 + *(double *)(lVar3 + 0x68);
            *(double *)(lVar3 + 0x70) = local_1f0 * dVar2 + *(double *)(lVar3 + 0x70);
            *(double *)(lVar3 + 0x78) = local_1e8 * dVar2 + *(double *)(lVar3 + 0x78);
            lVar11 = *(longlong *)(lVar11 + 0xc0);
            lVar12 = lVar12 + 4;
          } while (lVar11 != 0);
        }
      }
      pdVar13 = pdVar13 + 0x24;
    } while (pdVar13 != pdVar14);
  }
  if ((local_d0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14985f612 FUN_14985f612 body=1377 status=ok
// SIG undefined FUN_14985f612(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14985f612(longlong param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulonglong uVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar22;
  undefined1 auVar21 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar27 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar28 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar29 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  longlong lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_f8 [40];
  longlong local_d0;
  int *local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = param_1;
  local_c8 = param_2;
  if ((*(char *)(param_1 + 0x48) != '\x01') || (param_2[1] < 1)) goto LAB_14985faea;
  iVar19 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar19 == 0) {
LAB_14985f6e0:
    iVar19 = 0;
    do {
      FUN_14466ff84(&local_d0,iVar19);
      iVar19 = iVar19 + 1;
    } while (iVar19 < param_2[1]);
  }
  else {
    lVar33 = *(longlong *)(param_1 + 0x18);
    lVar18 = 0;
    do {
      *(byte *)(lVar33 + 0x114 + lVar18) = *(byte *)(lVar33 + 0x115 + lVar18) ^ 1;
      lVar18 = lVar18 + 0x120;
    } while ((longlong)iVar19 * 0x120 != lVar18);
    if (0 < param_2[1]) goto LAB_14985f6e0;
  }
  auVar14 = _DAT_149931e80;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    uVar15 = (longlong)*(int *)(param_1 + 0x20) * 0x120 - 0x120;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar15;
    uVar20 = SUB164(auVar23 * ZEXT816(0xe38e38e38e38e38f),8);
    uVar22 = (undefined4)(uVar15 / 0x120000000);
    auVar24._0_8_ = CONCAT44(uVar22,uVar20);
    auVar24._8_4_ = uVar20;
    auVar24._12_4_ = uVar22;
    auVar21._0_8_ = auVar24._0_8_ >> 8;
    auVar21._8_8_ = auVar24._8_8_ >> 8;
    puVar16 = (undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x11f4);
    uVar17 = 0;
    auVar23 = pmovsxbq(in_XMM1,0xf0e);
    auVar24 = pmovsxbq(in_XMM2,0xd0c);
    auVar25 = pmovsxbq(in_XMM3,0xb0a);
    auVar26 = pmovsxbq(in_XMM4,0x908);
    auVar27 = pmovsxbq(in_XMM5,0x706);
    auVar28 = pmovsxbq(unaff_XMM6,0x504);
    auVar29 = pmovsxbq(unaff_XMM7,0x302);
    auVar30 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar31._8_4_ = (int)uVar17;
      auVar31._0_8_ = uVar17;
      auVar31._12_4_ = (int)(uVar17 >> 0x20);
      auVar34 = auVar21 | auVar14;
      auVar35 = (auVar31 | auVar30) ^ auVar14;
      lVar33 = auVar34._0_8_;
      auVar36._0_8_ = -(ulonglong)(lVar33 < auVar35._0_8_);
      lVar18 = auVar34._8_8_;
      auVar36._8_8_ = -(ulonglong)(lVar18 < auVar35._8_8_);
      auVar43 = pshuflw(unaff_XMM14,auVar36,0xe8);
      auVar35._8_4_ = 0xffffffff;
      auVar35._0_8_ = 0xffffffffffffffff;
      auVar35._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar43 ^ auVar35,auVar43 ^ auVar35);
      if ((auVar35._0_4_ & 1) != 0) {
        puVar16[-0x10e0] = 0;
      }
      auVar36 = packssdw(auVar36,auVar36);
      auVar43._8_4_ = 0xffffffff;
      auVar43._0_8_ = 0xffffffffffffffff;
      auVar43._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar43,auVar36 ^ auVar43);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[1] & 1) != 0) {
        puVar16[-0xfc0] = 0;
      }
      auVar36 = (auVar31 | auVar29) ^ auVar14;
      auVar37._0_8_ = -(ulonglong)(lVar33 < auVar36._0_8_);
      auVar37._8_8_ = -(ulonglong)(lVar18 < auVar36._8_8_);
      auVar35 = packssdw(auVar35,auVar37);
      auVar1._8_4_ = 0xffffffff;
      auVar1._0_8_ = 0xffffffffffffffff;
      auVar1._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar1,auVar35 ^ auVar1);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[2] & 1) != 0) {
        puVar16[-0xea0] = 0;
      }
      auVar36 = pshufhw(auVar37,auVar37,0x84);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar2,auVar36 ^ auVar2);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[3] & 1) != 0) {
        puVar16[-0xd80] = 0;
      }
      auVar36 = (auVar31 | auVar28) ^ auVar14;
      auVar38._0_8_ = -(ulonglong)(lVar33 < auVar36._0_8_);
      auVar38._8_8_ = -(ulonglong)(lVar18 < auVar36._8_8_);
      auVar35 = pshuflw(auVar35,auVar38,0xe8);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar3,auVar35 ^ auVar3);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[4] & 1) != 0) {
        puVar16[-0xc60] = 0;
      }
      auVar36 = packssdw(auVar38,auVar38);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar4,auVar36 ^ auVar4);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[5] & 1) != 0) {
        puVar16[-0xb40] = 0;
      }
      auVar36 = (auVar31 | auVar27) ^ auVar14;
      auVar39._0_8_ = -(ulonglong)(lVar33 < auVar36._0_8_);
      auVar39._8_8_ = -(ulonglong)(lVar18 < auVar36._8_8_);
      auVar35 = packssdw(auVar35,auVar39);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar5,auVar35 ^ auVar5);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[6] & 1) != 0) {
        puVar16[-0xa20] = 0;
      }
      auVar36 = pshufhw(auVar39,auVar39,0x84);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar6,auVar36 ^ auVar6);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[7] & 1) != 0) {
        puVar16[-0x900] = 0;
      }
      auVar36 = (auVar31 | auVar26) ^ auVar14;
      auVar40._0_8_ = -(ulonglong)(lVar33 < auVar36._0_8_);
      auVar40._8_8_ = -(ulonglong)(lVar18 < auVar36._8_8_);
      auVar35 = pshuflw(auVar35,auVar40,0xe8);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar7,auVar35 ^ auVar7);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[8] & 1) != 0) {
        puVar16[-0x7e0] = 0;
      }
      auVar36 = packssdw(auVar40,auVar40);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar8,auVar36 ^ auVar8);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[9] & 1) != 0) {
        puVar16[-0x6c0] = 0;
      }
      auVar36 = (auVar31 | auVar25) ^ auVar14;
      auVar41._0_8_ = -(ulonglong)(lVar33 < auVar36._0_8_);
      auVar41._8_8_ = -(ulonglong)(lVar18 < auVar36._8_8_);
      auVar35 = packssdw(auVar35,auVar41);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar9,auVar35 ^ auVar9);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[10] & 1) != 0) {
        puVar16[-0x5a0] = 0;
      }
      auVar36 = pshufhw(auVar41,auVar41,0x84);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar10,auVar36 ^ auVar10);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[0xb] & 1) != 0) {
        puVar16[-0x480] = 0;
      }
      auVar36 = (auVar31 | auVar24) ^ auVar14;
      auVar42._0_8_ = -(ulonglong)(lVar33 < auVar36._0_8_);
      auVar42._8_8_ = -(ulonglong)(lVar18 < auVar36._8_8_);
      auVar35 = pshuflw(auVar35,auVar42,0xe8);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar11,auVar35 ^ auVar11);
      unaff_XMM14 = packsswb(auVar35,auVar35);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar16[-0x360] = 0;
      }
      auVar35 = packssdw(auVar42,auVar42);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar12,auVar35 ^ auVar12);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[0xd] & 1) != 0) {
        puVar16[-0x240] = 0;
      }
      auVar35 = (auVar31 | auVar23) ^ auVar14;
      auVar32._0_8_ = -(ulonglong)(lVar33 < auVar35._0_8_);
      auVar32._8_8_ = -(ulonglong)(lVar18 < auVar35._8_8_);
      auVar35 = packssdw(auVar34,auVar32);
      auVar34._8_4_ = 0xffffffff;
      auVar34._0_8_ = 0xffffffffffffffff;
      auVar34._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar34,auVar35 ^ auVar34);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[0xe] & 1) != 0) {
        puVar16[-0x120] = 0;
      }
      auVar35 = pshufhw(auVar32,auVar32,0x84);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar13,auVar35 ^ auVar13);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[0xf] & 1) != 0) {
        *puVar16 = 0;
      }
      uVar17 = uVar17 + 0x10;
      puVar16 = puVar16 + 0x1200;
    } while ((uVar15 / 0x120 + 0x10 & 0xfffffffffffffff0) != uVar17);
  }
LAB_14985faea:
  if (0 < *param_2) {
    iVar19 = 0;
    do {
      FUN_14466ff84(&local_d0,iVar19);
      iVar19 = iVar19 + 1;
    } while (iVar19 < *param_2);
  }
  if ((local_c0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14985fb74 FUN_14985fb74 body=2455 status=ok
// SIG undefined FUN_14985fb74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14985fb74(double *param_1,longlong *param_2,longlong *param_3,double *param_4,
                      double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  double *pdVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_1d8 [40];
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((int)param_2[1] < 2) {
    pdVar6 = &DAT_14c8464e0;
    pdVar10 = &DAT_14c8464e0;
    if ((int)param_2[1] == 1) {
      pdVar10 = (double *)*param_2;
    }
    param_4[2] = pdVar10[2];
    dVar20 = pdVar10[1];
    *param_4 = *pdVar10;
    param_4[1] = dVar20;
    if ((int)param_3[1] == 1) {
      pdVar6 = (double *)*param_3;
    }
    param_5[2] = pdVar6[2];
    dVar20 = pdVar6[1];
    *param_5 = *pdVar6;
    param_5[1] = dVar20;
    dVar20 = DAT_14c8463e8;
    param_1[2] = DAT_14c8463e0;
    param_1[3] = dVar20;
    uVar31 = DAT_14c8463d8._4_4_;
    uVar28 = (undefined4)DAT_14c8463d8;
    uVar27 = DAT_14c8463d0._4_4_;
    *(undefined4 *)param_1 = (undefined4)DAT_14c8463d0;
    *(undefined4 *)((longlong)param_1 + 4) = uVar27;
    *(undefined4 *)(param_1 + 1) = uVar28;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar31;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_1d8);
  }
  param_4[2] = DAT_14c8464f0;
  dVar20 = DAT_14c8464e8;
  *param_4 = DAT_14c8464e0;
  param_4[1] = dVar20;
  param_5[2] = DAT_14c8464f0;
  dVar20 = DAT_14c8464e8;
  *param_5 = DAT_14c8464e0;
  param_5[1] = dVar20;
  iVar8 = (int)param_2[1];
  if (0 < iVar8) {
    lVar7 = 0x10;
    lVar11 = 0;
    do {
      lVar9 = *param_2;
      *param_4 = *(double *)(lVar9 + -0x10 + lVar7) + *param_4;
      param_4[1] = *(double *)(lVar9 + -8 + lVar7) + param_4[1];
      param_4[2] = *(double *)(lVar9 + lVar7) + param_4[2];
      lVar9 = *param_3;
      *param_5 = *(double *)(lVar9 + -0x10 + lVar7) + *param_5;
      param_5[1] = *(double *)(lVar9 + -8 + lVar7) + param_5[1];
      param_5[2] = *(double *)(lVar9 + lVar7) + param_5[2];
      lVar11 = lVar11 + 1;
      iVar8 = (int)param_2[1];
      lVar7 = lVar7 + 0x18;
    } while (lVar11 < iVar8);
  }
  dVar14 = (double)(1.0 / (float)iVar8);
  *param_4 = *param_4 * dVar14;
  param_4[1] = param_4[1] * dVar14;
  param_4[2] = param_4[2] * dVar14;
  local_180 = *param_5 * dVar14;
  *param_5 = local_180;
  local_188 = param_5[1] * dVar14;
  param_5[1] = local_188;
  dVar20 = param_5[2];
  param_5[2] = dVar14 * dVar20;
  dVar21 = DAT_14c8463e8;
  dVar4 = DAT_14c8464e8;
  dVar3 = DAT_14c8464e0;
  dVar2 = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  local_198 = DAT_14c8464e0;
  if ((longlong)(int)param_2[1] < 1) {
    local_1a0 = DAT_14c8464e8;
    local_178 = DAT_14c8464f0;
    local_1a8 = DAT_14c8464e0;
    local_1b0 = DAT_14c8464f0;
  }
  else {
    lVar7 = *param_2;
    local_160 = param_4[2];
    local_168 = *param_4;
    local_170 = param_4[1];
    lVar11 = *param_3;
    lVar9 = 0;
    local_1b0 = DAT_14c8464f0;
    local_1a8 = DAT_14c8464e0;
    local_158 = DAT_14c8464f0;
    local_178 = DAT_14c8464f0;
    local_150 = DAT_14c8464e8;
    local_1a0 = DAT_14c8464e8;
    local_190 = DAT_14c8464e0;
    do {
      dVar24 = *(double *)(lVar7 + 0x10 + lVar9) - local_160;
      dVar18 = *(double *)(lVar7 + lVar9) - local_168;
      dVar15 = *(double *)(lVar7 + 8 + lVar9) - local_170;
      dVar26 = dVar24 * dVar24 + dVar18 * dVar18 + dVar15 * dVar15;
      uVar27 = SUB84(DAT_14c8464e8,0);
      uVar28 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
      if ((dVar26 != 1.0) || (NAN(dVar26))) {
        uVar33 = SUB84(DAT_14c8464e0,0);
        uVar34 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
        uVar29 = SUB84(DAT_14c8464f0,0);
        uVar30 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        uVar31 = uVar27;
        uVar32 = uVar28;
        if (9.99999993922529e-09 <= dVar26) {
          dVar26 = 1.0 / SQRT(dVar26);
          dVar24 = dVar24 * dVar26;
          dVar15 = dVar15 * dVar26;
          dVar18 = dVar18 * dVar26;
          goto LAB_14985ff05;
        }
      }
      else {
LAB_14985ff05:
        uVar33 = SUB84(dVar18,0);
        uVar34 = (undefined4)((ulonglong)dVar18 >> 0x20);
        uVar29 = SUB84(dVar24,0);
        uVar30 = (undefined4)((ulonglong)dVar24 >> 0x20);
        uVar31 = SUB84(dVar15,0);
        uVar32 = (int)((ulonglong)dVar15 >> 0x20);
      }
      dVar15 = *(double *)(lVar11 + 0x10 + lVar9) - dVar14 * dVar20;
      dVar18 = *(double *)(lVar11 + 8 + lVar9) - local_188;
      dVar24 = *(double *)(lVar11 + lVar9) - local_180;
      dVar26 = dVar15 * dVar15 + dVar24 * dVar24 + dVar18 * dVar18;
      if ((dVar26 != 1.0) || (NAN(dVar26))) {
        dVar5 = DAT_14c8464f0;
        dVar16 = DAT_14c8464e0;
        if (9.99999993922529e-09 <= dVar26) {
          dVar26 = 1.0 / SQRT(dVar26);
          dVar15 = dVar15 * dVar26;
          dVar18 = dVar18 * dVar26;
          dVar24 = dVar24 * dVar26;
          goto LAB_14985ff6a;
        }
      }
      else {
LAB_14985ff6a:
        uVar27 = SUB84(dVar18,0);
        uVar28 = (undefined4)((ulonglong)dVar18 >> 0x20);
        dVar5 = dVar15;
        dVar16 = dVar24;
      }
      local_1b0 = local_1b0 + (double)CONCAT44(uVar34,uVar33) * dVar5;
      dVar4 = dVar4 + (double)CONCAT44(uVar34,uVar33) * (double)CONCAT44(uVar28,uVar27);
      dVar3 = dVar3 + (double)CONCAT44(uVar34,uVar33) * dVar16;
      dVar2 = dVar2 + (double)CONCAT44(uVar32,uVar31) * dVar5;
      dVar1 = dVar1 + (double)CONCAT44(uVar32,uVar31) * (double)CONCAT44(uVar28,uVar27);
      local_1a8 = local_1a8 + (double)CONCAT44(uVar32,uVar31) * dVar16;
      local_178 = local_178 + dVar5 * (double)CONCAT44(uVar30,uVar29);
      local_1a0 = local_1a0 + (double)CONCAT44(uVar28,uVar27) * (double)CONCAT44(uVar30,uVar29);
      local_198 = local_198 + (double)CONCAT44(uVar30,uVar29) * dVar16;
      lVar9 = lVar9 + 0x18;
    } while ((longlong)(int)param_2[1] * 0x18 != lVar9);
  }
  param_1[2] = DAT_14c8463e0;
  param_1[3] = dVar21;
  uVar31 = DAT_14c8463d8._4_4_;
  uVar28 = (undefined4)DAT_14c8463d8;
  uVar27 = DAT_14c8463d0._4_4_;
  *(undefined4 *)param_1 = (undefined4)DAT_14c8463d0;
  *(undefined4 *)((longlong)param_1 + 4) = uVar27;
  *(undefined4 *)(param_1 + 1) = uVar28;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar31;
  iVar8 = 0x32;
  do {
    FUN_1498609f0(&local_148,param_1);
    local_160 = local_138;
    local_180 = local_120;
    local_190 = local_100;
    local_188 = local_108;
    local_168 = local_140;
    local_170 = local_128;
    dVar14 = 1.0 / (ABS(local_f8 * local_178 + local_108 * local_198 + local_100 * local_1a0 +
                        local_118 * dVar2 + local_128 * local_1a8 + local_120 * dVar1 +
                        local_138 * local_1b0 + local_148 * dVar3 + local_140 * dVar4) +
                   9.99999993922529e-09);
    dVar21 = ((local_100 * local_178 - local_1a0 * local_f8) +
             (local_120 * dVar2 - dVar1 * local_118) + (local_140 * local_1b0 - dVar4 * local_138))
             * dVar14;
    dVar20 = ((local_f8 * local_198 - local_178 * local_108) +
             (local_118 * local_1a8 - dVar2 * local_128) +
             (local_138 * dVar3 - local_1b0 * local_148)) * dVar14;
    dVar14 = dVar14 * ((local_108 * local_1a0 - local_198 * local_100) +
                      (local_128 * dVar1 - local_1a8 * local_120) +
                      (local_148 * dVar4 - dVar3 * local_140));
    fVar13 = (float)SQRT(dVar14 * dVar14 + dVar21 * dVar21 + dVar20 * dVar20);
    if (fVar13 < 1e-08) break;
    dVar24 = (double)fVar13;
    dVar15 = 1.0 / dVar24;
    dVar24 = dVar24 * 0.5;
    dVar18 = sin(dVar24);
    dVar24 = cos(dVar24);
    dVar21 = dVar21 * dVar15 * dVar18;
    dVar20 = dVar20 * dVar15 * dVar18;
    dVar18 = dVar14 * dVar15 * dVar18;
    dVar14 = *param_1;
    dVar15 = param_1[1];
    dVar26 = param_1[2];
    dVar5 = param_1[3];
    dVar16 = dVar15 * dVar18 * -1.0 + dVar26 * dVar20 + dVar21 * dVar5 * 1.0 + dVar14 * dVar24;
    dVar17 = dVar14 * dVar18 * 1.0 + dVar5 * dVar20 + dVar21 * dVar26 * -1.0 + dVar15 * dVar24;
    dVar19 = dVar5 * dVar18 * 1.0 + ((dVar21 * dVar15 * 1.0 + dVar24 * dVar26) - dVar14 * dVar20);
    dVar20 = dVar26 * dVar18 * -1.0 + ((dVar21 * dVar14 * -1.0 + dVar24 * dVar5) - dVar15 * dVar20);
    dVar21 = dVar19 * dVar19 + dVar16 * dVar16;
    dVar14 = dVar20 * dVar20 + dVar17 * dVar17;
    auVar22._0_8_ = dVar21 + dVar14;
    auVar22._8_8_ = dVar21 + dVar14;
    uVar12 = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
    auVar23 = sqrtpd(auVar22,auVar22);
    auVar23 = divpd(_DAT_149934d80,auVar23);
    auVar25._0_8_ = auVar23._0_8_ * dVar19;
    auVar25._8_8_ = auVar23._8_8_ * dVar20;
    *param_1 = (double)((ulonglong)(dVar16 * auVar23._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
    param_1[1] = (double)((ulonglong)(dVar17 * auVar23._8_8_) & uVar12);
    auVar23._8_4_ = (int)uVar12;
    auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
    auVar23._12_4_ = (int)(uVar12 >> 0x20);
    auVar23 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar25,auVar23);
    *(undefined1 (*) [16])(param_1 + 2) = auVar23;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if ((local_c0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986050c FUN_14986050c body=285 status=ok
// SIG undefined FUN_14986050c(void)

void FUN_14986050c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [44];
  undefined2 local_3c;
  undefined1 uStack_3a;
  byte bStack_39;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined3 uStack_2c;
  undefined8 uStack_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = *(longlong *)(param_1 + 0x18);
  lVar9 = (longlong)*(int *)(param_1 + 0x20);
  if (lVar9 != 0) {
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar6 + lVar8) == param_2) goto LAB_1498605f5;
      lVar8 = lVar8 + 0x120;
    } while (lVar9 * 0x120 != lVar8);
  }
  uVar7 = *(int *)(param_1 + 0x20) + 1;
  *(uint *)(param_1 + 0x20) = uVar7;
  if (*(uint *)(param_1 + 0x24) < uVar7) {
    FUN_149862bcc((longlong *)(param_1 + 0x18));
    lVar6 = *(longlong *)(param_1 + 0x18);
  }
  lVar9 = lVar9 * 0x120;
  *(undefined8 *)(lVar6 + 0x14 + lVar9) = 0;
  *(undefined8 *)(lVar6 + 0x20 + lVar9) = 0;
  *(undefined8 *)(lVar6 + lVar9) = 0;
  ((undefined8 *)(lVar6 + lVar9))[1] = 0;
  *(undefined8 *)(lVar6 + 0x2c + lVar9) = 0;
  *(undefined1 *)(lVar6 + 0x34 + lVar9) = 0;
  *(undefined4 *)(lVar6 + 0x118 + lVar9) = 0;
  puVar1 = (undefined8 *)(lVar6 + 0x50 + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar6 + 0xf8 + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar6 + 0x106 + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(longlong *)(lVar6 + lVar9) = param_2;
  uVar5 = DAT_14c846508;
  uVar4 = DAT_14c846500;
  uStack_3a = 0;
  local_3c = 0;
  bStack_39 = (byte)DAT_14c8464f8;
  iStack_38 = (int)((ulonglong)DAT_14c8464f8 >> 8);
  uStack_34._0_3_ = (undefined3)((ulonglong)DAT_14c8464f8 >> 0x28);
  uStack_34._3_1_ = (undefined1)DAT_14c846500;
  iStack_30 = (int)((ulonglong)DAT_14c846500 >> 8);
  uStack_2c = (undefined3)((ulonglong)DAT_14c846500 >> 0x28);
  uStack_29 = DAT_14c846508;
  puVar1 = (undefined8 *)(lVar6 + 0x25 + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar6 + 0x18 + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar6 + 8 + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  uStack_29._0_4_ = (undefined4)uVar5;
  uStack_29._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  piVar2 = (int *)(lVar6 + 0x35 + lVar9);
  *piVar2 = (uint)bStack_39 << 0x18;
  piVar2[1] = iStack_38;
  piVar2[2] = uStack_34;
  piVar2[3] = iStack_30;
  puVar3 = (undefined4 *)(lVar6 + 0x40 + lVar9);
  *puVar3 = (int)uVar4;
  puVar3[1] = (int)((ulonglong)uVar4 >> 0x20);
  puVar3[2] = (undefined4)uStack_29;
  puVar3[3] = uStack_29._4_4_;
  uStack_29 = uVar5;
LAB_1498605f5:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986062a FUN_14986062a body=4 status=ok
// SIG undefined FUN_14986062a(void)

undefined1 FUN_14986062a(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x49);
}



// FUNCTION 14986062e FUN_14986062e body=186 status=ok
// SIG undefined FUN_14986062e(void)

int FUN_14986062e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_149862dbe((longlong *)(param_1 + 8));
  }
  lVar3 = *(longlong *)(param_1 + 8);
  lVar7 = (longlong)iVar2 * 0xe0;
  *(undefined4 *)(lVar3 + 0xdc + lVar7) = 0;
  puVar1 = (undefined8 *)(lVar3 + 0xb8 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 200 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar3 + 0xd7 + lVar7) = 0;
  *(undefined8 *)(lVar3 + lVar7) = param_2;
  *(undefined4 *)(lVar3 + 8 + lVar7) = param_3;
  uVar4 = param_4[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = *param_4;
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x20 + lVar7) = param_4[2];
  uVar4 = param_5[1];
  uVar5 = param_5[2];
  uVar6 = param_5[3];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = *param_5;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar7);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  *(undefined1 *)(lVar3 + 0xd8 + lVar7) = param_6;
  return iVar2;
}



// FUNCTION 1498606e8 FUN_1498606e8 body=327 status=ok
// SIG undefined FUN_1498606e8(void)

int FUN_1498606e8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    plVar9 = *(longlong **)(param_1 + 8);
    lVar7 = (longlong)*(int *)(param_1 + 0x10) * 0xe0;
    do {
      if (*plVar9 == param_2) {
        iVar3 = *(int *)(param_1 + 0x40);
        *(uint *)(param_1 + 0x40) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x44) < iVar3 + 1U) {
          FUN_149862e52(param_1 + 0x38,iVar3);
        }
        lVar7 = *(longlong *)(param_1 + 0x38);
        lVar8 = (longlong)iVar3 * 0x120;
        puVar2 = (undefined8 *)(lVar7 + 0xc0 + lVar8);
        *puVar2 = &DAT_3f8000003f800000;
        puVar2[1] = 0x3f800000;
        *(undefined1 **)(lVar7 + 0xd0 + lVar8) = &DAT_3f8000003f800000;
        puVar2 = (undefined8 *)(lVar7 + 0xe0 + lVar8);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(lVar7 + 0xf0 + lVar8) = 0;
        *(undefined4 *)(lVar7 + 0xf8 + lVar8) = 0xffffffff;
        puVar2 = (undefined8 *)(lVar7 + 0x100 + lVar8);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(longlong **)(lVar7 + 0xd8 + lVar8) = plVar9;
        *(longlong *)(lVar7 + 0x50 + lVar8) = plVar9[4];
        lVar4 = plVar9[3];
        plVar1 = (longlong *)(lVar7 + 0x40 + lVar8);
        *plVar1 = plVar9[2];
        plVar1[1] = lVar4;
        lVar4 = plVar9[6];
        lVar5 = plVar9[7];
        lVar6 = plVar9[9];
        plVar1 = (longlong *)(lVar7 + 0x70 + lVar8);
        *plVar1 = plVar9[8];
        plVar1[1] = lVar6;
        plVar1 = (longlong *)(lVar7 + 0x60 + lVar8);
        *plVar1 = lVar4;
        plVar1[1] = lVar5;
        lVar4 = plVar9[3];
        plVar1 = (longlong *)(lVar7 + 0x80 + lVar8);
        *plVar1 = plVar9[2];
        plVar1[1] = lVar4;
        *(longlong *)(lVar7 + 0x90 + lVar8) = plVar9[4];
        lVar4 = plVar9[2];
        lVar5 = plVar9[3];
        *(longlong *)(lVar7 + 0x10 + lVar8) = plVar9[4];
        *(longlong *)(lVar7 + lVar8) = lVar4;
        ((longlong *)(lVar7 + lVar8))[1] = lVar5;
        lVar4 = plVar9[7];
        lVar5 = plVar9[8];
        lVar6 = plVar9[9];
        plVar1 = (longlong *)(lVar7 + 0xa0 + lVar8);
        *plVar1 = plVar9[6];
        plVar1[1] = lVar4;
        plVar1 = (longlong *)(lVar7 + 0xb0 + lVar8);
        *plVar1 = lVar5;
        plVar1[1] = lVar6;
        lVar4 = plVar9[6];
        lVar5 = plVar9[7];
        lVar6 = plVar9[9];
        plVar1 = (longlong *)(lVar7 + 0x30 + lVar8);
        *plVar1 = plVar9[8];
        plVar1[1] = lVar6;
        plVar9 = (longlong *)(lVar7 + 0x20 + lVar8);
        *plVar9 = lVar4;
        plVar9[1] = lVar5;
        return *(int *)(param_1 + 0x40) + -1;
      }
      plVar9 = plVar9 + 0x1c;
      lVar7 = lVar7 + -0xe0;
    } while (lVar7 != 0);
  }
  return -1;
}



// FUNCTION 149860830 FUN_149860830 body=86 status=ok
// SIG undefined FUN_149860830(void)

void FUN_149860830(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar4 = param_3[5];
  uVar2 = param_3[6];
  lVar3 = *(longlong *)(param_1 + 8);
  lVar6 = (longlong)param_2 * 0xe0;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar6);
  *puVar1 = param_3[4];
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x20 + lVar6) = uVar2;
  uVar2 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  lVar3 = *(longlong *)(param_1 + 8);
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar6);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar6);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  uVar4 = param_3[9];
  uVar2 = param_3[10];
  lVar3 = *(longlong *)(param_1 + 8);
  puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar6);
  *puVar1 = param_3[8];
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x60 + lVar6) = uVar2;
  return;
}



// FUNCTION 149860886 FUN_149860886 body=51 status=ok
// SIG undefined FUN_149860886(void)

longlong FUN_149860886(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(char *)(param_1 + 0x49) == '\x01') && (-1 < (int)param_2)) &&
     ((int)param_2 < *(int *)(param_1 + 0x10))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xb8 + (ulonglong)param_2 * 0xe0);
    lVar2 = lVar1 + 8;
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    return lVar2;
  }
  return 0;
}



// FUNCTION 1498608ba FUN_1498608ba body=76 status=ok
// SIG undefined FUN_1498608ba(void)

void FUN_1498608ba(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar4 = *(longlong *)(param_1 + 8);
  lVar7 = (longlong)param_2 * 0xe0;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar7);
  uVar5 = puVar1[1];
  uVar3 = *(undefined8 *)(lVar4 + 0x20 + lVar7);
  param_3[4] = *puVar1;
  param_3[5] = uVar5;
  param_3[6] = uVar3;
  param_3[7] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar7);
  uVar3 = puVar1[1];
  puVar2 = (undefined8 *)(lVar4 + 0x40 + lVar7);
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  *param_3 = *puVar1;
  param_3[1] = uVar3;
  param_3[2] = uVar5;
  param_3[3] = uVar6;
  puVar1 = (undefined8 *)(lVar4 + 0x50 + lVar7);
  uVar5 = puVar1[1];
  uVar3 = *(undefined8 *)(lVar4 + 0x60 + lVar7);
  param_3[8] = *puVar1;
  param_3[9] = uVar5;
  param_3[10] = uVar3;
  param_3[0xb] = 0;
  return;
}



// FUNCTION 149860906 FUN_149860906 body=57 status=ok
// SIG undefined FUN_149860906(void)

int FUN_149860906(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    uVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 8) + uVar1) == param_2) {
        return (int)(uVar1 >> 5) * -0x49249249;
      }
      uVar1 = uVar1 + 0xe0;
    } while ((longlong)*(int *)(param_1 + 0x10) * 0xe0 - uVar1 != 0);
  }
  return -1;
}



// FUNCTION 149860940 FUN_149860940 body=176 status=ok
// SIG undefined FUN_149860940(void)

void FUN_149860940(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  lVar7 = (longlong)param_2 * 0x120;
  lVar3 = *(longlong *)(lVar2 + 0xd8 + lVar7);
  *(undefined8 *)(lVar2 + 0x50 + lVar7) = *(undefined8 *)(lVar3 + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  puVar1 = (undefined8 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = *(undefined8 *)(lVar3 + 0x10);
  puVar1[1] = uVar4;
  uVar4 = *(undefined8 *)(lVar3 + 0x30);
  uVar5 = *(undefined8 *)(lVar3 + 0x38);
  uVar6 = *(undefined8 *)(lVar3 + 0x48);
  puVar1 = (undefined8 *)(lVar2 + 0x70 + lVar7);
  *puVar1 = *(undefined8 *)(lVar3 + 0x40);
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar2 + 0x60 + lVar7);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  uVar4 = param_3[1];
  puVar1 = (undefined8 *)(lVar2 + 0x80 + lVar7);
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar2 + 0x90 + lVar7) = param_3[2];
  uVar4 = *param_3;
  uVar5 = param_3[1];
  *(undefined8 *)(lVar2 + 0x10 + lVar7) = param_3[2];
  *(undefined8 *)(lVar2 + lVar7) = uVar4;
  ((undefined8 *)(lVar2 + lVar7))[1] = uVar5;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  puVar1 = (undefined8 *)(lVar2 + 0xa0 + lVar7);
  *puVar1 = *param_4;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(lVar2 + 0xb0 + lVar7);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  uVar4 = *param_4;
  uVar5 = param_4[1];
  uVar6 = param_4[3];
  puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar7);
  *puVar1 = param_4[2];
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar7);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  uVar4 = param_5[1];
  puVar1 = (undefined8 *)(lVar2 + 0xc0 + lVar7);
  *puVar1 = *param_5;
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar2 + 0xd0 + lVar7) = param_5[2];
  return;
}



// FUNCTION 1498609f0 FUN_1498609f0 body=401 status=ok
// SIG undefined FUN_1498609f0(void)

void FUN_1498609f0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar7 = DAT_14c8464f0;
  dVar6 = DAT_14c8464e8;
  dVar5 = DAT_14c8464e0;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar10 = dVar2 + dVar2;
  dVar3 = param_2[2];
  dVar9 = dVar3 + dVar3;
  dVar11 = dVar1 * (dVar1 + dVar1);
  dVar4 = param_2[3];
  dVar8 = (dVar1 + dVar1) * dVar4;
  *param_1 = 1.0 - (dVar2 * dVar10 + dVar3 * dVar9);
  param_1[1] = dVar9 * dVar4 + dVar1 * dVar10;
  param_1[2] = dVar1 * dVar9 - dVar10 * dVar4;
  param_1[3] = 0.0;
  param_1[4] = dVar1 * dVar10 - dVar9 * dVar4;
  param_1[5] = 1.0 - (dVar3 * dVar9 + dVar11);
  param_1[6] = dVar8 + dVar2 * dVar9;
  param_1[7] = 0.0;
  param_1[8] = dVar1 * dVar9 + dVar10 * dVar4;
  param_1[9] = dVar2 * dVar9 - dVar8;
  param_1[10] = 1.0 - (dVar2 * dVar10 + dVar11);
  param_1[0xb] = 0.0;
  param_1[0xc] = dVar5;
  param_1[0xd] = dVar6;
  param_1[0xe] = dVar7;
  param_1[0xf] = 1.0;
  return;
}



// FUNCTION 149860b90 FUN_149860b90 body=316 status=ok
// SIG undefined FUN_149860b90(void)

void FUN_149860b90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  puVar3 = (undefined8 *)puVar1[4];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar1 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = *param_2;
  puVar1 = *(undefined8 **)(lVar7 + 0x60);
  puVar4 = *(undefined8 **)(lVar7 + 0x80);
  uVar5 = *(undefined8 *)(lVar7 + 0xa0);
  uVar6 = *(undefined8 *)(lVar7 + 0xc0);
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_88 = FUN_144828ac0(lVar7 + 0xe0,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  local_58 = *puVar4;
  local_a0 = &local_58;
  local_50 = *(undefined4 *)(puVar4 + 1);
  local_68 = *puVar1;
  local_a8 = &local_68;
  local_60 = *(undefined4 *)(puVar1 + 1);
  local_78 = *puVar3;
  local_70 = *(undefined4 *)(puVar3 + 1);
  local_98 = uVar5;
  local_90 = uVar6;
  FUN_1446700ec(*(undefined8 *)(param_1 + 0xc0),uVar2,&local_78,uVar8);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149860cce FUN_149860cce body=223 status=ok
// SIG undefined FUN_149860cce(void)

void FUN_149860cce(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f8);
  local_20 = *(undefined4 *)(param_1 + 0x200);
  local_38 = *(undefined8 *)(param_1 + 0x218);
  local_78 = &local_38;
  local_30 = *(undefined4 *)(param_1 + 0x220);
  local_48 = *(undefined8 *)(param_1 + 0x228);
  local_70 = &local_48;
  local_40 = *(undefined4 *)(param_1 + 0x230);
  local_58 = param_1 + 0x280;
  local_60 = param_1 + 0x278;
  local_68 = param_1 + 0x238;
  FUN_1446700ec(param_1 + 0x10,param_1 + 0x1f0,&local_28,param_1 + 0x208);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149860dae FUN_149860dae body=428 status=ok
// SIG undefined FUN_149860dae(void)

void FUN_149860dae(float *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined1 *puStack_f0;
  longlong local_e8;
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
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  double local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *puStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_3 != 0 && param_2 != 0) && (*(char *)(param_1 + 1) == '\x01')) {
    local_78 = 0x3f80000000000000;
    puStack_70 = &DAT_3f8000003f800000;
    local_88 = (double)*param_1 * 0.10000000149011612;
    local_d8 = DAT_14c8463d0;
    uStack_d0 = DAT_14c8463d8;
    local_c8 = (undefined4)DAT_14c8463e0;
    uStack_c4 = DAT_14c8463e0._4_4_;
    uStack_c0 = (undefined4)DAT_14c8463e8;
    uStack_bc = DAT_14c8463e8._4_4_;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98._8_4_ = SUB84(local_88,0);
    local_98._0_8_ = local_88;
    local_98._12_4_ = (int)((ulonglong)local_88 >> 0x20);
    uStack_80 = 0;
    local_108 = (undefined8 *)((ulonglong)local_108 & 0xffffffff00000000);
    FUN_144467984(param_2,&DAT_14c846480);
    local_e8 = 0;
    uStack_e0 = 0;
    *(longlong *)(param_3 + 0x50) = param_3;
    FUN_14985cc30(param_3 + 0x50,&local_e8);
    lVar3 = local_e8;
    local_f8 = 0x3dcccccd3dcccccd;
    puStack_f0 = &DAT_3f8000003f800000;
    lVar4 = (longlong)(int)uStack_e0;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        local_d8 = *(undefined8 *)(lVar3 + lVar5);
        uStack_d0 = ((undefined8 *)(lVar3 + lVar5))[1];
        puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar5);
        local_c8 = *puVar1;
        uStack_c4 = puVar1[1];
        uStack_c0 = puVar1[2];
        uStack_bc = puVar1[3];
        puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar5);
        local_b8 = *puVar2;
        uStack_b0 = puVar2[1];
        local_100 = 0;
        local_108 = &local_f8;
        FUN_14446764a(param_2,&DAT_14c846480,&local_d8,&uStack_c0);
        lVar5 = lVar5 + 0x30;
      } while (lVar4 * 0x30 != lVar5);
    }
    if (local_e8 != 0) {
      FUN_1400020a8(local_e8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149860f5c FUN_149860f5c body=34 status=ok
// SIG undefined FUN_149860f5c(void)

undefined8 FUN_149860f5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 149860f82 FUN_149860f82 body=34 status=ok
// SIG undefined FUN_149860f82(void)

undefined8 FUN_149860f82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14986102c FUN_14986102c body=39 status=ok
// SIG undefined FUN_14986102c(void)

undefined8 FUN_14986102c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14986107c FUN_14986107c body=59 status=ok
// SIG undefined FUN_14986107c(void)

undefined8 FUN_14986107c(longlong *param_1)

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



// FUNCTION 1498611c4 FUN_1498611c4 body=59 status=ok
// SIG undefined FUN_1498611c4(void)

undefined8 FUN_1498611c4(longlong *param_1)

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



// FUNCTION 14986136e FUN_14986136e body=59 status=ok
// SIG undefined FUN_14986136e(void)

undefined8 FUN_14986136e(longlong *param_1)

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



// FUNCTION 149861466 FUN_149861466 body=1098 status=ok
// SIG undefined FUN_149861466(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_149861466(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 auVar18 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar25 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar39 [16];
  
  auVar14 = _DAT_149931e80;
  if (param_4 != 0) {
    lVar15 = (ulonglong)param_4 - 1;
    auVar18._8_4_ = (int)lVar15;
    auVar18._0_8_ = lVar15;
    auVar18._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
    puVar17 = (undefined1 *)(param_2 + 0x49);
    uVar16 = 0;
    auVar19 = pmovsxbq(in_XMM1,0xf0e);
    auVar20 = pmovsxbq(in_XMM2,0xd0c);
    auVar21 = pmovsxbq(in_XMM3,0xb0a);
    auVar22 = pmovsxbq(in_XMM4,0x908);
    auVar23 = pmovsxbq(in_XMM5,0x706);
    auVar24 = pmovsxbq(unaff_XMM6,0x504);
    auVar25 = pmovsxbq(unaff_XMM7,0x302);
    auVar26 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar27._8_4_ = (int)uVar16;
      auVar27._0_8_ = uVar16;
      auVar27._12_4_ = (int)(uVar16 >> 0x20);
      auVar29 = auVar18 ^ auVar14;
      auVar31 = (auVar27 | auVar26) ^ auVar14;
      lVar15 = auVar29._0_8_;
      auVar32._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      lVar30 = auVar29._8_8_;
      auVar32._8_8_ = -(ulonglong)(lVar30 < auVar31._8_8_);
      auVar39 = pshuflw(unaff_XMM14,auVar32,0xe8);
      auVar31._8_4_ = 0xffffffff;
      auVar31._0_8_ = 0xffffffffffffffff;
      auVar31._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar39 ^ auVar31,auVar39 ^ auVar31);
      if ((auVar31._0_4_ & 1) != 0) {
        *puVar17 = 0;
      }
      auVar32 = packssdw(auVar32,auVar32);
      auVar39._8_4_ = 0xffffffff;
      auVar39._0_8_ = 0xffffffffffffffff;
      auVar39._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar39,auVar32 ^ auVar39);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[1] & 1) != 0) {
        puVar17[0x58] = 0;
      }
      auVar32 = (auVar27 | auVar25) ^ auVar14;
      auVar33._0_8_ = -(ulonglong)(lVar15 < auVar32._0_8_);
      auVar33._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = packssdw(auVar31,auVar33);
      auVar1._8_4_ = 0xffffffff;
      auVar1._0_8_ = 0xffffffffffffffff;
      auVar1._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar1,auVar31 ^ auVar1);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[2] & 1) != 0) {
        puVar17[0xb0] = 0;
      }
      auVar32 = pshufhw(auVar33,auVar33,0x84);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar2,auVar32 ^ auVar2);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[3] & 1) != 0) {
        puVar17[0x108] = 0;
      }
      auVar32 = (auVar27 | auVar24) ^ auVar14;
      auVar34._0_8_ = -(ulonglong)(lVar15 < auVar32._0_8_);
      auVar34._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = pshuflw(auVar31,auVar34,0xe8);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar3,auVar31 ^ auVar3);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[4] & 1) != 0) {
        puVar17[0x160] = 0;
      }
      auVar32 = packssdw(auVar34,auVar34);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar4,auVar32 ^ auVar4);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[5] & 1) != 0) {
        puVar17[0x1b8] = 0;
      }
      auVar32 = (auVar27 | auVar23) ^ auVar14;
      auVar35._0_8_ = -(ulonglong)(lVar15 < auVar32._0_8_);
      auVar35._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = packssdw(auVar31,auVar35);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar5,auVar31 ^ auVar5);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[6] & 1) != 0) {
        puVar17[0x210] = 0;
      }
      auVar32 = pshufhw(auVar35,auVar35,0x84);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar6,auVar32 ^ auVar6);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[7] & 1) != 0) {
        puVar17[0x268] = 0;
      }
      auVar32 = (auVar27 | auVar22) ^ auVar14;
      auVar36._0_8_ = -(ulonglong)(lVar15 < auVar32._0_8_);
      auVar36._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = pshuflw(auVar31,auVar36,0xe8);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar7,auVar31 ^ auVar7);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[8] & 1) != 0) {
        puVar17[0x2c0] = 0;
      }
      auVar32 = packssdw(auVar36,auVar36);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar8,auVar32 ^ auVar8);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[9] & 1) != 0) {
        puVar17[0x318] = 0;
      }
      auVar32 = (auVar27 | auVar21) ^ auVar14;
      auVar37._0_8_ = -(ulonglong)(lVar15 < auVar32._0_8_);
      auVar37._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = packssdw(auVar31,auVar37);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar9,auVar31 ^ auVar9);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[10] & 1) != 0) {
        puVar17[0x370] = 0;
      }
      auVar32 = pshufhw(auVar37,auVar37,0x84);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar10,auVar32 ^ auVar10);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[0xb] & 1) != 0) {
        puVar17[0x3c8] = 0;
      }
      auVar32 = (auVar27 | auVar20) ^ auVar14;
      auVar38._0_8_ = -(ulonglong)(lVar15 < auVar32._0_8_);
      auVar38._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = pshuflw(auVar31,auVar38,0xe8);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar11,auVar31 ^ auVar11);
      unaff_XMM14 = packsswb(auVar31,auVar31);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar17[0x420] = 0;
      }
      auVar31 = packssdw(auVar38,auVar38);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar12,auVar31 ^ auVar12);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xd] & 1) != 0) {
        puVar17[0x478] = 0;
      }
      auVar31 = (auVar27 | auVar19) ^ auVar14;
      auVar28._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar28._8_8_ = -(ulonglong)(lVar30 < auVar31._8_8_);
      auVar31 = packssdw(auVar29,auVar28);
      auVar29._8_4_ = 0xffffffff;
      auVar29._0_8_ = 0xffffffffffffffff;
      auVar29._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar29,auVar31 ^ auVar29);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xe] & 1) != 0) {
        puVar17[0x4d0] = 0;
      }
      auVar31 = pshufhw(auVar28,auVar28,0x84);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar13,auVar31 ^ auVar13);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xf] & 1) != 0) {
        puVar17[0x528] = 0;
      }
      uVar16 = uVar16 + 0x10;
      puVar17 = puVar17 + 0x580;
    } while (((ulonglong)param_4 + 0xf & 0xfffffffffffffff0) != uVar16);
  }
  return 1;
}



// FUNCTION 1498618d8 FUN_1498618d8 body=59 status=ok
// SIG undefined FUN_1498618d8(void)

undefined8 FUN_1498618d8(longlong *param_1)

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



// FUNCTION 14986191e FUN_14986191e body=34 status=ok
// SIG undefined FUN_14986191e(void)

void FUN_14986191e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_145bfaff6(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 149861a06 FUN_149861a06 body=59 status=ok
// SIG undefined FUN_149861a06(void)

undefined8 FUN_149861a06(longlong *param_1)

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



// FUNCTION 149861b74 FUN_149861b74 body=68 status=ok
// SIG undefined FUN_149861b74(void)

undefined8 FUN_149861b74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x88);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149861be0 FUN_149861be0 body=59 status=ok
// SIG undefined FUN_149861be0(void)

undefined8 FUN_149861be0(longlong *param_1)

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



// FUNCTION 149861d00 FUN_149861d00 body=108 status=ok
// SIG undefined FUN_149861d00(void)

undefined8 FUN_149861d00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_14054c6c4();
      FUN_14054c6c4(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      *(undefined1 *)(param_2 + lVar1 + 0x71) = 0;
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149861d94 FUN_149861d94 body=59 status=ok
// SIG undefined FUN_149861d94(void)

undefined8 FUN_149861d94(longlong *param_1)

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



// FUNCTION 149861de0 FUN_149861de0 body=40 status=ok
// SIG undefined FUN_149861de0(void)

void FUN_149861de0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_149861e56(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 149861e56 FUN_149861e56 body=57 status=ok
// SIG undefined FUN_149861e56(void)

void FUN_149861e56(longlong param_1)

{
  FUN_145bfaff6(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149861ec4 FUN_149861ec4 body=63 status=ok
// SIG undefined FUN_149861ec4(void)

undefined1 FUN_149861ec4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14986219c(param_2,param_3);
    param_3 = param_3 + 0x300;
    param_2 = param_2 + 0x300;
  }
  return 1;
}



// FUNCTION 149861f2c FUN_149861f2c body=59 status=ok
// SIG undefined FUN_149861f2c(void)

undefined8 FUN_149861f2c(longlong *param_1)

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



// FUNCTION 149861f78 FUN_149861f78 body=40 status=ok
// SIG undefined FUN_149861f78(void)

void FUN_149861f78(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x300) == '\x01') {
    FUN_14986211e(param_2);
    *(undefined1 *)(param_2 + 0x300) = 0;
  }
  return;
}



// FUNCTION 149861fee FUN_149861fee body=260 status=ok
// SIG undefined FUN_149861fee(void)

undefined8 * FUN_149861fee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bebaf80;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0x14;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x49] = 0x3f80000000000000;
  param_1[0x4a] = &DAT_3f8000003f800000;
  param_1[0x4b] = &DAT_3f8000003f800000;
  param_1[0x4c] = &DAT_3f8000003f800000;
  param_1[0x4d] = 0x41f000003f800000;
  *(undefined4 *)(param_1 + 0x4e) = 0x3fa66666;
  *(undefined1 *)((longlong)param_1 + 0x274) = 1;
  *(undefined4 *)(param_1 + 0x4f) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x2e2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ea) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  return param_1;
}



// FUNCTION 1498620f2 FUN_1498620f2 body=43 status=ok
// SIG undefined FUN_1498620f2(void)

undefined8 FUN_1498620f2(undefined8 param_1,int param_2)

{
  FUN_14986211e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 14986211e FUN_14986211e body=125 status=ok
// SIG undefined FUN_14986211e(void)

void FUN_14986211e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bebaf80;
  FUN_149861e56(param_1 + 0x50);
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 14986219c FUN_14986219c body=201 status=ok
// SIG undefined FUN_14986219c(void)

longlong FUN_14986219c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  FUN_149862266(param_1 + 0x1f8,param_2 + 0x1f8);
  FUN_14054c6c4(param_1 + 0x208,param_2 + 0x208);
  FUN_1498622c0(param_1 + 0x218,param_2 + 0x218);
  FUN_1406fa324(param_1 + 0x228,param_2 + 0x228);
  puVar2 = (undefined8 *)(param_2 + 0x238);
  puVar3 = (undefined8 *)(param_1 + 0x238);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_2 + 0x280);
  FUN_14054c6c4(param_1 + 0x288,param_2 + 0x288);
  FUN_14054c6c4(param_1 + 0x298,param_2 + 0x298);
  *(undefined1 *)(param_1 + 0x2f1) = 0;
  return param_1;
}



// FUNCTION 149862266 FUN_149862266 body=89 status=ok
// SIG undefined FUN_149862266(void)

undefined8 * FUN_149862266(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14986231a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x90);
      }
    }
  }
  return param_1;
}



// FUNCTION 1498622c0 FUN_1498622c0 body=89 status=ok
// SIG undefined FUN_1498622c0(void)

undefined8 * FUN_1498622c0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14986238e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x50);
      }
    }
  }
  return param_1;
}



// FUNCTION 14986231a FUN_14986231a body=115 status=ok
// SIG undefined FUN_14986231a(void)

void FUN_14986231a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,0x10);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14986238e FUN_14986238e body=115 status=ok
// SIG undefined FUN_14986238e(void)

void FUN_14986238e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 149862402 FUN_149862402 body=48 status=ok
// SIG undefined FUN_149862402(void)

void FUN_149862402(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 149862432 FUN_149862432 body=147 status=ok
// SIG undefined FUN_149862432(void)

void FUN_149862432(longlong param_1,int param_2)

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



// FUNCTION 1498624c6 FUN_1498624c6 body=132 status=ok
// SIG undefined FUN_1498624c6(void)

void FUN_1498624c6(longlong param_1,int param_2)

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



// FUNCTION 14986254c FUN_14986254c body=48 status=ok
// SIG undefined FUN_14986254c(void)

void FUN_14986254c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x120,0x10);
  }
  return;
}



// FUNCTION 14986257c FUN_14986257c body=930 status=ok
// SIG undefined FUN_14986257c(void)

void FUN_14986257c(longlong param_1,uint param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  longlong *plVar7;
  void *pvVar8;
  void *_Src;
  void *pvVar9;
  void *_Src_00;
  int iVar10;
  void *pvVar11;
  float fVar12;
  undefined1 auStack_4a8 [32];
  longlong *local_488;
  int local_47c;
  void *local_478;
  void *local_470;
  longlong local_468;
  longlong local_460;
  undefined4 local_458 [188];
  undefined1 local_168 [288];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  if (1 < (int)param_2) {
    memset(local_458,0,0x2f0);
    local_460 = (ulonglong)param_2 * 0x120 + param_1 + -0x120;
    local_468 = param_1;
    fVar12 = logf((float)(int)param_2);
    local_458[0] = (int)(longlong)(fVar12 + fVar12);
    plVar7 = &local_468;
    do {
      pvVar5 = (void *)*plVar7;
      pvVar8 = (void *)plVar7[1];
      iVar10 = (int)plVar7[2];
      iVar3 = (int)((ulonglong)((longlong)pvVar8 - (longlong)pvVar5) >> 5);
      _Src = pvVar8;
      _Src_00 = pvVar5;
      pvVar11 = pvVar5;
      local_488 = plVar7;
      if (iVar10 != 0) {
LAB_14986265f:
        uVar6 = iVar3 * 0x38e38e39 + 1;
        plVar7 = local_488;
        if (8 < (int)uVar6) {
          pvVar11 = (void *)((ulonglong)(uVar6 >> 1) * 0x120 + (longlong)_Src_00);
          local_47c = iVar10;
          local_478 = pvVar5;
          local_470 = pvVar8;
          memcpy(local_168,pvVar11,0x120);
          memcpy(pvVar11,_Src_00,0x120);
          memcpy(_Src_00,local_168,0x120);
          pvVar5 = (void *)((longlong)_Src + 0x120);
          pvVar11 = _Src_00;
          do {
            pvVar8 = (void *)((longlong)pvVar11 + 0x120);
            pvVar2 = (void *)((longlong)pvVar11 + 0x120);
            do {
              pvVar11 = pvVar2;
              pvVar4 = pvVar8;
              if (_Src < pvVar11) break;
              pvVar8 = (void *)((longlong)pvVar4 + 0x120);
              pvVar2 = (void *)((longlong)pvVar11 + 0x120);
            } while (*(int *)((longlong)pvVar11 + 0x118) <= *(int *)((longlong)_Src_00 + 0x118));
            pvVar2 = (void *)((longlong)pvVar5 + -0x240);
            do {
              pvVar9 = pvVar5;
              pvVar8 = pvVar2;
              pvVar5 = (void *)((longlong)pvVar9 + -0x120);
              if (pvVar5 <= _Src_00) break;
              pvVar2 = (void *)((longlong)pvVar8 + -0x120);
            } while (*(int *)((longlong)_Src_00 + 0x118) <= *(int *)((longlong)pvVar9 + -8));
            if (pvVar5 < pvVar11) goto LAB_149862774;
            memcpy(local_168,pvVar11,0x120);
            memcpy(pvVar11,pvVar5,0x120);
            memcpy(pvVar5,local_168,0x120);
          } while( true );
        }
        for (; local_488 = plVar7, pvVar5 = _Src_00, pvVar8 = _Src_00, _Src_00 < _Src;
            _Src = (void *)((longlong)_Src + -0x120)) {
          while (pvVar11 = pvVar5, pvVar5 = (void *)((longlong)pvVar8 + 0x120), pvVar5 <= _Src) {
            piVar1 = (int *)((longlong)pvVar8 + 0x238);
            pvVar8 = pvVar5;
            if (*piVar1 <= *(int *)((longlong)pvVar11 + 0x118)) {
              pvVar5 = pvVar11;
            }
          }
          memcpy(local_168,pvVar11,0x120);
          memcpy(pvVar11,_Src,0x120);
          memcpy(_Src,local_168,0x120);
          plVar7 = local_488;
        }
        goto LAB_1498628f5;
      }
LAB_14986290f:
      FUN_14986291f(pvVar11);
      plVar7 = local_488;
LAB_1498628f5:
      plVar7 = plVar7 + -3;
    } while (&local_468 <= plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_149862774:
  memcpy(local_168,_Src_00,0x120);
  memcpy(_Src_00,pvVar5,0x120);
  memcpy(pvVar5,local_168,0x120);
  iVar10 = local_47c + -1;
  pvVar9 = (void *)((longlong)pvVar9 + -0x240);
  if ((longlong)pvVar8 - (longlong)local_478 < (longlong)local_470 - (longlong)pvVar4) {
    plVar7 = local_488;
    if (pvVar11 < _Src) {
      *local_488 = (longlong)pvVar11;
      local_488[1] = (longlong)_Src;
      *(int *)(local_488 + 2) = iVar10;
      plVar7 = local_488 + 3;
    }
    pvVar11 = _Src_00;
    if (pvVar5 <= (void *)((longlong)_Src_00 + 0x120U)) goto LAB_1498628f5;
  }
  else {
    if ((void *)((longlong)_Src_00 + 0x120U) < pvVar5) {
      *local_488 = (longlong)_Src_00;
      local_488[1] = (longlong)pvVar9;
      *(int *)(local_488 + 2) = iVar10;
      local_488 = local_488 + 3;
    }
    plVar7 = local_488;
    pvVar8 = _Src;
    pvVar9 = _Src;
    _Src_00 = pvVar4;
    if (_Src <= pvVar11) goto LAB_1498628f5;
  }
  local_488 = plVar7;
  iVar3 = (int)((ulonglong)((longlong)pvVar8 - (longlong)_Src_00) >> 5);
  _Src = pvVar9;
  pvVar5 = _Src_00;
  _Src_00 = pvVar11;
  if (iVar10 == 0) goto LAB_14986290f;
  goto LAB_14986265f;
}



// FUNCTION 14986291f FUN_14986291f body=684 status=ok
// SIG undefined FUN_14986291f(void)

void FUN_14986291f(void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_188 [32];
  undefined1 local_168 [296];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_2 != 0) {
    iVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar3 = iVar4;
joined_r0x000149862970:
    do {
      iVar2 = iVar4 * 2 + 1;
      if (iVar2 < (int)param_2) {
        iVar1 = iVar4 * 2 + 2;
        if ((iVar1 < (int)param_2) &&
           (*(int *)((longlong)param_1 + (longlong)iVar2 * 0x120 + 0x118) <=
            *(int *)((longlong)param_1 + (longlong)iVar1 * 0x120 + 0x118))) {
          iVar2 = iVar1;
        }
        if (*(int *)((longlong)param_1 + (longlong)iVar4 * 0x120 + 0x118) <
            *(int *)((longlong)param_1 + (longlong)iVar2 * 0x120 + 0x118)) {
          pvVar6 = (void *)((longlong)iVar4 * 0x120 + (longlong)param_1);
          pvVar5 = (void *)((longlong)iVar2 * 0x120 + (longlong)param_1);
          memcpy(local_168,pvVar6,0x120);
          memcpy(pvVar6,pvVar5,0x120);
          memcpy(pvVar5,local_168,0x120);
          iVar4 = iVar2;
          goto joined_r0x000149862970;
        }
      }
      bVar8 = iVar3 != 0;
      iVar4 = iVar3 + -1;
      iVar3 = iVar4;
    } while (bVar8);
    if (1 < (int)param_2) {
      pvVar5 = (void *)(((ulonglong)param_2 - 1) * 0x120 + (longlong)param_1);
      memcpy(local_168,param_1,0x120);
      memcpy(param_1,pvVar5,0x120);
      memcpy(pvVar5,local_168,0x120);
      if (param_2 != 2) {
        uVar7 = (ulonglong)param_2 - 1;
        do {
          iVar4 = 0;
          iVar2 = 1;
          iVar3 = 0;
          do {
            iVar4 = iVar4 + 2;
            iVar1 = iVar2;
            if (((longlong)iVar4 < (longlong)uVar7) &&
               (*(int *)((longlong)param_1 + (longlong)iVar2 * 0x120 + 0x118) <=
                *(int *)((longlong)param_1 + (longlong)iVar4 * 0x120 + 0x118))) {
              iVar1 = iVar4;
            }
            if (*(int *)((longlong)param_1 + (longlong)iVar1 * 0x120 + 0x118) <=
                *(int *)((longlong)param_1 + (longlong)iVar3 * 0x120 + 0x118)) break;
            pvVar6 = (void *)((longlong)iVar3 * 0x120 + (longlong)param_1);
            pvVar5 = (void *)((longlong)iVar1 * 0x120 + (longlong)param_1);
            memcpy(local_168,pvVar6,0x120);
            memcpy(pvVar6,pvVar5,0x120);
            memcpy(pvVar5,local_168,0x120);
            iVar4 = iVar1 * 2;
            iVar2 = iVar1 * 2 + 1;
            iVar3 = iVar1;
          } while ((longlong)iVar2 < (longlong)uVar7);
          pvVar5 = (void *)((uVar7 - 1) * 0x120 + (longlong)param_1);
          memcpy(local_168,param_1,0x120);
          memcpy(param_1,pvVar5,0x120);
          memcpy(pvVar5,local_168,0x120);
          bVar8 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149862bcc FUN_149862bcc body=147 status=ok
// SIG undefined FUN_149862bcc(void)

void FUN_149862bcc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x120,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x120)) {
      uVar5 = uVar4 / 0x120 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x120,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149862c60 FUN_149862c60 body=48 status=ok
// SIG undefined FUN_149862c60(void)

void FUN_149862c60(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 149862c90 FUN_149862c90 body=1 status=ok
// SIG undefined FUN_149862c90(void)

void FUN_149862c90(void)

{
  return;
}



// FUNCTION 149862c92 FUN_149862c92 body=34 status=ok
// SIG undefined FUN_149862c92(void)

undefined8 FUN_149862c92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 149862cb4 FUN_149862cb4 body=132 status=ok
// SIG undefined FUN_149862cb4(void)

void FUN_149862cb4(longlong param_1,int param_2)

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



// FUNCTION 149862d3a FUN_149862d3a body=1 status=ok
// SIG undefined FUN_149862d3a(void)

void FUN_149862d3a(void)

{
  return;
}



// FUNCTION 149862d3c FUN_149862d3c body=34 status=ok
// SIG undefined FUN_149862d3c(void)

undefined8 FUN_149862d3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,400);
  }
  return param_1;
}



// FUNCTION 149862d5e FUN_149862d5e body=48 status=ok
// SIG undefined FUN_149862d5e(void)

void FUN_149862d5e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xe0,0x10);
  }
  return;
}



// FUNCTION 149862d8e FUN_149862d8e body=48 status=ok
// SIG undefined FUN_149862d8e(void)

void FUN_149862d8e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x120,0x10);
  }
  return;
}



// FUNCTION 149862dbe FUN_149862dbe body=146 status=ok
// SIG undefined FUN_149862dbe(void)

void FUN_149862dbe(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0xe0,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149862e52 FUN_149862e52 body=147 status=ok
// SIG undefined FUN_149862e52(void)

void FUN_149862e52(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x120,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x120)) {
      uVar5 = uVar4 / 0x120 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x120,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149862ee6 FUN_149862ee6 body=36 status=ok
// SIG undefined FUN_149862ee6(void)

undefined8 FUN_149862ee6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149862f26 FUN_149862f26 body=93 status=ok
// SIG undefined FUN_149862f26(void)

void FUN_149862f26(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bebb070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149862f84 FUN_149862f84 body=123 status=ok
// SIG undefined FUN_149862f84(void)

void FUN_149862f84(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bebb070;
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



// FUNCTION 149863000 FUN_149863000 body=21 status=ok
// SIG undefined FUN_149863000(void)

undefined8 FUN_149863000(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14986304c FUN_14986304c body=242 status=ok
// SIG undefined FUN_14986304c(void)

void FUN_14986304c(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)*param_1)(param_1,puVar1);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_14988929e(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149863192 FUN_149863192 body=312 status=ok
// SIG undefined FUN_149863192(void)

void FUN_149863192(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a4 = 0xffffffff7fffffff;
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_80 = DAT_14c8464f8;
  uStack_78 = DAT_14c846500;
  local_70 = DAT_14c846508;
  local_68 = &DAT_3f8000003f800000;
  local_60 = 0x101;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_28 = DAT_14c8463e0;
  uStack_20 = DAT_14c8463e8;
  local_38 = (undefined4)DAT_14c8463d0;
  uStack_34 = DAT_14c8463d0._4_4_;
  uStack_30 = (undefined4)DAT_14c8463d8;
  uStack_2c = DAT_14c8463d8._4_4_;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar1 = &local_b8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14987f53a(param_1 + 0x118,puVar1);
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498632cc FUN_1498632cc body=668 status=ok
// SIG undefined FUN_1498632cc(void)

void FUN_1498632cc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_b0 [24];
  undefined4 local_98;
  undefined4 local_94;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_f0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  local_12c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_12c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_12c);
  }
  local_130 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_130);
  }
  uVar2 = local_12c;
  uVar1 = local_130;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_158 = local_128;
  uStack_150 = uStack_120;
  local_148 = local_118;
  uStack_144 = uStack_114;
  uStack_140 = uStack_110;
  uStack_13c = uStack_10c;
  local_178 = local_108;
  uStack_174 = uStack_104;
  uStack_170 = uStack_100;
  uStack_16c = uStack_fc;
  local_168 = local_f8;
  local_e8 = local_f0;
  local_e0 = 0;
  local_dc = 0;
  local_d4 = 0xffffffff7fffffff;
  local_c8 = local_108;
  uStack_c4 = uStack_104;
  uStack_c0 = uStack_100;
  uStack_bc = uStack_fc;
  local_b8 = local_f8;
  FUN_1448052ee(&local_158,local_b0);
  local_98 = uVar2;
  local_94 = uVar1;
  local_90 = 0;
  local_88 = CONCAT44(uStack_174,local_178);
  uStack_80 = CONCAT44(uStack_16c,uStack_170);
  local_78 = local_168;
  local_68 = (undefined4)local_158;
  uStack_64 = local_158._4_4_;
  uStack_60 = (undefined4)uStack_150;
  uStack_5c = uStack_150._4_4_;
  local_58 = local_148;
  uStack_54 = uStack_144;
  uStack_50 = uStack_140;
  uStack_4c = uStack_13c;
  FUN_14987f53a(param_1 + 0x118,&local_e8);
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986356a FUN_14986356a body=532 status=ok
// SIG undefined FUN_14986356a(void)

void FUN_14986356a(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined8 local_f8 [13];
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_90 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  uVar1 = local_8c;
  local_108 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_88;
  puVar4 = local_f8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_149863780(param_1,local_28,local_f8,uVar1);
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149863780 FUN_149863780 body=298 status=ok
// SIG undefined FUN_149863780(void)

void FUN_149863780(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar2 = param_3[4];
  uVar3 = param_3[5];
  uVar1 = param_3[6];
  local_128 = *param_3;
  uStack_120 = param_3[1];
  local_118 = *(undefined4 *)(param_3 + 2);
  uStack_114 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_110 = *(undefined4 *)(param_3 + 3);
  uStack_10c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_100 = 0;
  local_fc = 0;
  local_f4 = 0xffffffff7fffffff;
  local_108 = param_2;
  local_e8 = uVar2;
  uStack_e0 = uVar3;
  local_d8 = uVar1;
  FUN_1448052ee(&local_128,local_d0);
  local_b4 = param_5;
  local_b0 = 0;
  local_88 = (undefined4)local_128;
  uStack_84 = local_128._4_4_;
  uStack_80 = (undefined4)uStack_120;
  uStack_7c = uStack_120._4_4_;
  local_78 = local_118;
  uStack_74 = uStack_114;
  uStack_70 = uStack_110;
  uStack_6c = uStack_10c;
  local_b8 = param_4;
  local_a8 = uVar2;
  uStack_a0 = uVar3;
  local_98 = uVar1;
  FUN_14987f53a(param_1 + 0x118,&local_108);
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498638be FUN_1498638be body=307 status=ok
// SIG undefined FUN_1498638be(void)

undefined8 * FUN_1498638be(undefined8 *param_1)

{
  FUN_145af4fa4();
  *param_1 = &PTR_FUN_14bebe820;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x82) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8a) = 1;
  *(undefined1 **)((longlong)param_1 + 0x8c) = &DAT_3f8000003f800000;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9a) = 0;
  FUN_140416388(param_1 + 0x16,0x3e4ccccd);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x3f800000;
  param_1[0x1f] = &DAT_3f8000003f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0x412000003f800000;
  *(undefined4 *)(param_1 + 0x22) = 0x41200000;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  return param_1;
}



// FUNCTION 1498639f2 FUN_1498639f2 body=867 status=ok
// SIG undefined FUN_1498639f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498639f2(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  longlong lVar12;
  undefined4 uVar13;
  uint uVar14;
  double *pdVar16;
  double *pdVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_138 [32];
  double local_118 [2];
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  longlong *plVar15;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    if ((char)param_2[0x13] == '\x01') {
      FUN_142400d60(param_2[4],(int)param_2[5]);
    }
    else {
      FUN_1448859f0(param_2 + 4,param_2[6]);
    }
  }
  else {
    lVar12 = FUN_1433dc006(param_1 + 0x60);
    if (lVar12 != 0) {
      FUN_1447139fe(param_1 + 0x60,param_2);
    }
  }
  if ((((*(longlong *)(param_1 + 0x70) != 0) && (*(longlong *)(param_1 + 0x118) != 0)) &&
      (*(char *)(*(longlong *)(param_1 + 0x118) + 0x140) == '\x01')) &&
     (1e-05 < *(float *)(param_1 + 0x1e0))) {
    plVar15 = param_2 + 4;
    FUN_149863d56(param_1);
    uVar13 = SUB84(plVar15,0);
    lVar19 = param_1;
    FUN_149863e48();
    lVar12 = *param_2;
    auVar1 = *(undefined1 (*) [16])(lVar12 + 0x50);
    auVar2 = *(undefined1 (*) [16])(lVar12 + 0x60);
    lVar18 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
    auVar21._8_4_ = (int)lVar18;
    auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
    auVar21._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    iVar11 = movmskpd((int)lVar19,auVar21);
    lVar19 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
    auVar23._8_4_ = (int)lVar19;
    auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
    auVar23._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    uVar14 = movmskpd(uVar13,auVar23);
    if ((uVar14 & 0x3fffffff) == 0 && iVar11 == 0) {
      pdVar16 = (double *)&DAT_14c846480;
      pdVar17 = local_118;
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *pdVar17 = *pdVar16;
        pdVar16 = pdVar16 + 1;
        pdVar17 = pdVar17 + 1;
      }
    }
    else {
      auVar23 = divpd(_DAT_149934d80,auVar1);
      auVar21 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
      dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar23._0_8_);
      dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar23._8_8_);
      local_c8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar21._0_8_);
      local_118[0] = -*(double *)(lVar12 + 0x10);
      local_118[1] = -*(double *)(lVar12 + 0x18);
      dVar6 = *(double *)(lVar12 + 0x20) * -1.0;
      dVar7 = *(double *)(lVar12 + 0x28) * 1.0;
      dVar20 = *(double *)(lVar12 + 0x30) * dVar3;
      dVar22 = *(double *)(lVar12 + 0x38) * dVar4;
      dVar5 = *(double *)(lVar12 + 0x40) * local_c8;
      local_108._8_4_ = SUB84(dVar7,0);
      local_108._0_8_ = dVar6;
      local_108._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      dVar9 = dVar22 * local_118[0] - local_118[1] * dVar20;
      dVar10 = dVar5 * local_118[1] - dVar6 * dVar22;
      dVar8 = dVar20 * dVar6 - local_118[0] * dVar5;
      dVar10 = dVar10 + dVar10;
      dVar8 = dVar8 + dVar8;
      dVar9 = dVar9 + dVar9;
      local_f8 = 0.0 - ((dVar9 * local_118[1] - dVar8 * dVar6) + dVar7 * dVar10 + dVar20);
      dStack_f0 = 0.0 - (dVar9 * *(double *)(lVar12 + 0x10) + dVar6 * dVar10 +
                        dVar7 * dVar8 + dVar22);
      local_e8 = 0.0 - (dVar7 * dVar9 + dVar5 + (dVar8 * local_118[0] - dVar10 * local_118[1]));
      uStack_e0 = 0;
      local_d8._8_4_ = SUB84(dVar4,0);
      local_d8._0_8_ = dVar3;
      local_d8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      uStack_c0 = 0;
    }
    FUN_149863fa0(*(undefined8 *)(param_1 + 0x118),local_118);
    FUN_1498640ac(param_1,param_2 + 4);
  }
  if ((local_b0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149863d56 FUN_149863d56 body=241 status=ok
// SIG undefined FUN_149863d56(void)

void FUN_149863d56(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x118);
  if (*(char *)(param_1 + 0x88) == '\x01') {
    FUN_1498643aa(lVar2);
    return;
  }
  uVar1 = *(uint *)(param_2 + 1);
  if ((ulonglong)uVar1 != 0) {
    uVar5 = 0;
    do {
      if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x1b4)) {
        lVar3 = *(longlong *)(param_1 + 0x1c0);
        if (*(longlong *)(param_1 + 0x1c0) == 0) {
          lVar3 = param_1 + 0x1b8;
        }
        iVar6 = *(int *)(lVar3 + (ulonglong)((uint)uVar5 & *(int *)(param_1 + 0x1c8) + 0x7fffffffU)
                                 * 4);
        if (iVar6 != -1) {
          do {
            lVar3 = *(longlong *)(param_1 + 0x180) + (longlong)iVar6 * 0x10;
            if (uVar5 == *(uint *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar6 * 0x10)) {
              if (((int *)(lVar3 + 4) != (int *)0x0 && lVar3 != 0) &&
                 (lVar3 = (longlong)*(int *)(lVar3 + 4), lVar3 != -1)) {
                puVar7 = (undefined8 *)(uVar5 * 0x60 + *param_2);
                puVar8 = (undefined8 *)(lVar3 * 0x60 + *(longlong *)(lVar2 + 0x110));
                for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar8 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar8 = puVar8 + 1;
                }
              }
              break;
            }
            iVar6 = *(int *)(lVar3 + 8);
          } while (iVar6 != -1);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  FUN_149864424(lVar2 + 0xd0);
  return;
}



// FUNCTION 149863e48 FUN_149863e48 body=342 status=ok
// SIG undefined FUN_149863e48(void)

void FUN_149863e48(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x78);
    lVar2 = (longlong)*(int *)(param_1 + 0x80) * 0xa0;
    do {
      FUN_14987f53a(*(longlong *)(param_1 + 0x118) + 0x70,lVar4);
      lVar4 = lVar4 + 0xa0;
      lVar2 = lVar2 + -0xa0;
    } while (lVar2 != 0);
  }
  plVar1 = (longlong *)(param_1 + 0x130);
  lVar4 = param_1 + 0x140;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar4;
  if (*(int *)(param_1 + 0x158) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x158);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (uStack_48 != lVar4)) {
    do {
      FUN_14987f53a(*(longlong *)(param_1 + 0x118) + 0x70,
                    *local_78 + (longlong)iStack_5c * 0xc0 + 0x10);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar4 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149863fa0 FUN_149863fa0 body=267 status=ok
// SIG undefined FUN_149863fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149863fa0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double *pdVar10;
  double *pdVar11;
  longlong lVar12;
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  FUN_1498807cc();
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar12 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar12);
      (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1 + 0xd0,param_1 + 0x70);
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar1 * 8 != lVar12);
  }
  auVar9 = _DAT_149935300;
  auVar8 = _DAT_149934d80;
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    pdVar10 = *(double **)(param_1 + 0x100);
    pdVar11 = pdVar10 + (longlong)*(int *)(param_1 + 0x108) * 0xc;
    do {
      dVar4 = *pdVar10;
      dVar5 = pdVar10[1];
      dVar6 = pdVar10[2];
      dVar7 = pdVar10[3];
      dVar13 = dVar6 * dVar6 + dVar4 * dVar4;
      dVar16 = dVar7 * dVar7 + dVar5 * dVar5;
      auVar14._0_8_ = dVar13 + dVar16;
      auVar14._8_8_ = dVar13 + dVar16;
      auVar15 = sqrtpd(auVar14,auVar14);
      auVar17 = divpd(auVar8,auVar15);
      auVar18._0_8_ = auVar17._0_8_ * dVar6;
      auVar18._8_8_ = auVar17._8_8_ * dVar7;
      auVar15._8_8_ = -(ulonglong)(1e-08 <= auVar14._8_8_);
      auVar15._0_8_ = -(ulonglong)(1e-08 <= auVar14._0_8_);
      auVar15 = blendvpd(auVar9,auVar18,auVar15);
      *pdVar10 = (double)((ulonglong)(dVar4 * auVar17._0_8_) & -(ulonglong)(1e-08 <= auVar14._0_8_))
      ;
      pdVar10[1] = (double)((ulonglong)(dVar5 * auVar17._8_8_) &
                           -(ulonglong)(1e-08 <= auVar14._8_8_));
      *(undefined1 (*) [16])(pdVar10 + 2) = auVar15;
      pdVar10 = pdVar10 + 0xc;
    } while (pdVar10 != pdVar11);
  }
  return;
}



// FUNCTION 1498640ac FUN_1498640ac body=766 status=ok
// SIG undefined FUN_1498640ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1498640ac(longlong param_1,longlong *param_2)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  longlong lVar13;
  double *pdVar14;
  undefined1 (*pauVar15) [16];
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar24;
  undefined1 auVar23 [16];
  double dVar25;
  double dVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar29;
  double dVar30;
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar35 [16];
  
  lVar3 = *(longlong *)(param_1 + 0x118);
  FUN_149864498(lVar3 + 0xd0);
  auVar12 = _DAT_149935300;
  auVar11 = _DAT_149934d80;
  uVar2 = *(uint *)(param_2 + 1);
  if ((ulonglong)uVar2 != 0) {
    uVar16 = 0;
    dVar4 = (double)DAT_149934d80;
    dVar5 = DAT_149934d80._8_8_;
    do {
      if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x1b4)) {
        lVar13 = *(longlong *)(param_1 + 0x1c0);
        if (*(longlong *)(param_1 + 0x1c0) == 0) {
          lVar13 = param_1 + 0x1b8;
        }
        iVar17 = *(int *)(lVar13 + (ulonglong)
                                   ((uint)uVar16 & *(int *)(param_1 + 0x1c8) + 0x7fffffffU) * 4);
        if (iVar17 != -1) {
          do {
            lVar13 = *(longlong *)(param_1 + 0x180) + (longlong)iVar17 * 0x10;
            if (uVar16 == *(uint *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar17 * 0x10)) {
              if ((((int *)(lVar13 + 4) != (int *)0x0 && lVar13 != 0) &&
                  (lVar13 = (longlong)*(int *)(lVar13 + 4), lVar13 != -1)) &&
                 (fVar1 = *(float *)(param_1 + 0x1e0), 1e-05 < fVar1)) {
                pauVar15 = (undefined1 (*) [16])(uVar16 * 0x60 + *param_2);
                pdVar14 = (double *)(lVar13 * 0x60 + *(longlong *)(lVar3 + 0x110));
                if (0.99999 <= fVar1) {
                  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                    *(double *)*pauVar15 = *pdVar14;
                    pdVar14 = pdVar14 + 1;
                    pauVar15 = (undefined1 (*) [16])(*pauVar15 + 8);
                  }
                }
                else {
                  dVar25 = (double)fVar1;
                  dVar28 = (double)fVar1;
                  dVar22 = dVar4 - dVar25;
                  dVar24 = dVar5 - dVar28;
                  dVar30 = *(double *)pauVar15[3];
                  dVar33 = pdVar14[5] * dVar28 + *(double *)(pauVar15[2] + 8) * dVar24;
                  dVar34 = pdVar14[6];
                  dVar29 = pdVar14[7] * dVar28 + *(double *)(pauVar15[3] + 8) * dVar24;
                  auVar9._8_4_ = SUB84(dVar33,0);
                  auVar9._0_8_ = pdVar14[4] * dVar25 + *(double *)pauVar15[2] * dVar22;
                  auVar9._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
                  pauVar15[2] = auVar9;
                  auVar32._8_4_ = SUB84(dVar29,0);
                  auVar32._0_8_ = dVar34 * dVar25 + dVar30 * dVar22;
                  auVar32._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
                  pauVar15[3] = auVar32;
                  dVar30 = *(double *)pauVar15[5];
                  dVar33 = pdVar14[9] * dVar28 + *(double *)(pauVar15[4] + 8) * dVar24;
                  dVar34 = pdVar14[10];
                  dVar29 = pdVar14[0xb] * dVar28 + *(double *)(pauVar15[5] + 8) * dVar24;
                  auVar10._8_4_ = SUB84(dVar33,0);
                  auVar10._0_8_ = pdVar14[8] * dVar25 + *(double *)pauVar15[4] * dVar22;
                  auVar10._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
                  pauVar15[4] = auVar10;
                  auVar26._8_4_ = SUB84(dVar29,0);
                  auVar26._0_8_ = dVar34 * dVar25 + dVar30 * dVar22;
                  auVar26._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
                  pauVar15[5] = auVar26;
                  auVar32 = *pauVar15;
                  auVar26 = pauVar15[1];
                  dVar29 = pdVar14[2] * auVar26._0_8_ + *pdVar14 * auVar32._0_8_;
                  dVar33 = pdVar14[3] * auVar26._8_8_ + pdVar14[1] * auVar32._8_8_;
                  lVar13 = -(ulonglong)(0.0 <= dVar29 + dVar33);
                  lVar18 = -(ulonglong)(0.0 <= dVar29 + dVar33);
                  uVar20 = (undefined4)lVar18;
                  uVar21 = (undefined4)((ulonglong)lVar18 >> 0x20);
                  auVar31._0_8_ = 0.0 - auVar32._0_8_;
                  auVar31._8_8_ = 0.0 - auVar32._8_8_;
                  auVar6._8_4_ = uVar20;
                  auVar6._0_8_ = lVar13;
                  auVar6._12_4_ = uVar21;
                  auVar32 = blendvpd(auVar31,auVar32,auVar6);
                  auVar35._0_8_ = 0.0 - auVar26._0_8_;
                  auVar35._8_8_ = 0.0 - auVar26._8_8_;
                  dVar30 = auVar32._0_8_ * dVar22 + *pdVar14 * dVar25;
                  dVar34 = auVar32._8_8_ * dVar24 + pdVar14[1] * dVar28;
                  auVar7._8_4_ = uVar20;
                  auVar7._0_8_ = lVar13;
                  auVar7._12_4_ = uVar21;
                  auVar32 = blendvpd(auVar35,auVar26,auVar7);
                  dVar22 = auVar32._0_8_ * dVar22 + pdVar14[2] * dVar25;
                  dVar24 = auVar32._8_8_ * dVar24 + pdVar14[3] * dVar28;
                  dVar29 = dVar22 * dVar22 + dVar30 * dVar30;
                  dVar33 = dVar24 * dVar24 + dVar34 * dVar34;
                  auVar23._0_8_ = dVar29 + dVar33;
                  auVar23._8_8_ = dVar29 + dVar33;
                  uVar19 = -(ulonglong)(1e-08 <= auVar23._8_8_);
                  auVar32 = sqrtpd(auVar23,auVar23);
                  auVar26 = divpd(auVar11,auVar32);
                  auVar27._0_8_ = auVar26._0_8_ * dVar22;
                  auVar27._8_8_ = auVar26._8_8_ * dVar24;
                  auVar8._8_4_ = (int)uVar19;
                  auVar8._0_8_ = -(ulonglong)(1e-08 <= auVar23._0_8_);
                  auVar8._12_4_ = (int)(uVar19 >> 0x20);
                  auVar32 = blendvpd(auVar12,auVar27,auVar8);
                  *(ulonglong *)*pauVar15 =
                       (ulonglong)(dVar30 * auVar26._0_8_) & -(ulonglong)(1e-08 <= auVar23._0_8_);
                  *(ulonglong *)(*pauVar15 + 8) = (ulonglong)(dVar34 * auVar26._8_8_) & uVar19;
                  pauVar15[1] = auVar32;
                }
              }
              break;
            }
            iVar17 = *(int *)(lVar13 + 8);
          } while (iVar17 != -1);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar2);
  }
  return;
}



// FUNCTION 1498643aa FUN_1498643aa body=122 status=ok
// SIG undefined FUN_1498643aa(void)

void FUN_1498643aa(longlong param_1)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_1 + 0x128);
  _Src = *(void **)(param_1 + 0x120);
  *(int *)(param_1 + 0x108) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x10c) == 0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  else {
    FUN_144756262((undefined8 *)(param_1 + 0x100),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x100),_Src,(longlong)iVar1 * 0x60);
    }
  }
  FUN_149864498(param_1 + 0xd0);
  return;
}



// FUNCTION 149864424 FUN_149864424 body=115 status=ok
// SIG undefined FUN_149864424(void)

void FUN_149864424(longlong param_1)

{
  void *_Src;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  *(int *)(param_1 + 0x38) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x3c) == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    FUN_144756262((undefined8 *)(param_1 + 0x30),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x30),_Src,(longlong)iVar1 * 0x60);
    }
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar1 = 0;
    do {
      FUN_149881dc0(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 149864498 FUN_149864498 body=115 status=ok
// SIG undefined FUN_149864498(void)

void FUN_149864498(longlong param_1)

{
  void *_Src;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(param_1 + 0x48) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x4c) == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    FUN_144756262((undefined8 *)(param_1 + 0x40),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x40),_Src,(longlong)iVar1 * 0x60);
    }
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    iVar1 = 0;
    do {
      FUN_149882506(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 14986450c FUN_14986450c body=815 status=ok
// SIG undefined FUN_14986450c(void)

void FUN_14986450c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined2 *local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  FUN_14986483c(param_2,&local_a0);
  plVar9 = local_a0;
  if ((int)local_98 == 0) {
    plVar9 = (longlong *)&DAT_149dfb77a;
  }
  FUN_140002266(local_78,L"%s IK Rig evaluated with %d Goals.",plVar9,uVar2);
  iVar7 = 0;
  FUN_147906d4c(param_2,local_78,0);
  if (local_a0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar9 = (longlong *)(param_1 + 0x130);
  lVar1 = param_1 + 0x140;
  local_68 = (undefined2 *)0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = lVar1;
  if (*(int *)(param_1 + 0x158) != 0) {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x158);
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_a0 = plVar9;
  if ((iStack_54 != iVar7) || (local_60 != lVar1)) {
    do {
      FUN_14986493e(*local_a0 + (longlong)iStack_84 * 0xc0 + 0x10,&local_68);
      puVar10 = local_68;
      if ((int)local_60 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      FUN_140002266(local_b0,L"Goal supplied by actor component: %s",puVar10);
      FUN_147906d4c(param_2,local_b0,0);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar9 || (local_90 != lVar1 || iStack_84 != iVar7));
  }
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x78);
    plVar8 = plVar6 + (longlong)*(int *)(param_1 + 0x80) * 0x14;
    do {
      if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164)) {
        lVar1 = *plVar6;
        uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
        uVar5 = (uint)lVar1 & 0xffff;
        lVar4 = *(longlong *)(param_1 + 0x170);
        if (*(longlong *)(param_1 + 0x170) == 0) {
          lVar4 = param_1 + 0x168;
        }
        iVar7 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0x178) - 1U &
                                 (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                                 (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            if (*(longlong *)(*plVar9 + (longlong)iVar7 * 0xc0) == lVar1) goto LAB_1498647ef;
            iVar7 = *(int *)((longlong)iVar7 * 0xc0 + *plVar9 + 0xb0);
          } while (iVar7 != -1);
        }
      }
      FUN_14986493e(plVar6,&local_a0);
      plVar11 = (longlong *)&DAT_149dfb77a;
      if ((int)local_98 != 0) {
        plVar11 = local_a0;
      }
      FUN_140002266(local_c0,L"Goal supplied by node pin: %s",plVar11);
      FUN_147906d4c(param_2,local_c0,0);
      if (local_a0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
LAB_1498647ef:
      plVar6 = plVar6 + 0x14;
    } while (plVar6 != plVar8);
  }
  FUN_147906d38(param_1 + 0x60,param_2);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14986483c FUN_14986483c body=256 status=ok
// SIG undefined FUN_14986483c(void)

undefined8 FUN_14986483c(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cc2d968 == 0) {
    uVar2 = FUN_140f0d032();
    DAT_14cc2d968 = FUN_140002ddd(FUN_14676942b,uVar2,L"AnimNode_IKRig");
  }
  local_48 = *(undefined8 *)(DAT_14cc2d968 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14986493e FUN_14986493e body=377 status=ok
// SIG undefined FUN_14986493e(void)

undefined8 FUN_14986493e(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_c8 [32];
  double local_a8;
  undefined2 *puStack_a0;
  double local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar1 = *(float *)(param_1 + 0x54);
  local_a8 = *(double *)(param_1 + 0x90);
  puStack_a0 = *(undefined2 **)(param_1 + 0x98);
  FUN_140002266(&local_70,L"X=%.9f Y=%.9f Z=%.9f W=%.9f",*(undefined8 *)(param_1 + 0x80),
                *(undefined8 *)(param_1 + 0x88));
  puVar4 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar4 = local_70;
  }
  fVar2 = *(float *)(param_1 + 0x50);
  local_a8 = *(double *)(param_1 + 0x70);
  FUN_140002266(&local_80,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0x60),
                *(undefined8 *)(param_1 + 0x68));
  puVar5 = &DAT_149dfb77a;
  if (local_78 != 0) {
    puVar5 = local_80;
  }
  FUN_1400021e4(param_1,&local_90);
  puVar3 = &DAT_149dfb77a;
  if (local_88 != 0) {
    puVar3 = local_90;
  }
  local_a8 = (double)fVar2;
  puStack_a0 = puVar4;
  local_98 = (double)fVar1;
  FUN_140002266(param_2,L"Name=%s, Pos=(%s, Alpha=%3.3f), Rot=(%s, Alpha=%3.3f)",puVar3,puVar5);
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149864ab8 FUN_149864ab8 body=119 status=ok
// SIG undefined FUN_149864ab8(void)

void FUN_149864ab8(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_141339014();
  FUN_140320438(param_1 + 0xc,param_2);
  uVar1 = FUN_14477dc2a(param_1);
  FUN_14477dadc(uVar1,param_2);
  FUN_149864b30(param_1,*(undefined8 *)(*param_2 + 0x148));
  uVar1 = (**(code **)(*param_1 + 0x100))(param_1);
  uVar2 = FUN_1433dbfe6(param_2);
                    /* WARNING: Could not recover jumptable at 0x000149864b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,uVar2,uVar1,*(code **)(*param_1 + 0xf0));
  return;
}



// FUNCTION 149864b30 FUN_149864b30 body=82 status=ok
// SIG undefined FUN_149864b30(void)

void FUN_149864b30(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x118) == 0) {
    cVar1 = FUN_144a61b4f();
    if (cVar1 != '\0') {
      lVar2 = FUN_14986677d(param_2);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x118) = lVar2;
    }
  }
  return;
}



// FUNCTION 149864b82 FUN_149864b82 body=337 status=ok
// SIG undefined FUN_149864b82(void)

void FUN_149864b82(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar3 = FUN_14477dc2a();
  FUN_14477dadc(uVar3,param_2);
  cVar1 = *(char *)((longlong)param_1 + 0x89);
  if (cVar1 == '\x02') {
    lVar2 = *(longlong *)(*param_2 + 0x130);
    if (lVar2 == 0) goto LAB_149864c15;
    lVar4 = FUN_1402e44f4();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_149864c15;
    lVar4 = param_2[5];
    uVar5 = FUN_144945460(lVar2,param_1[0x1c]);
    uVar5 = FUN_144a85682(param_1 + 0x1d,uVar5,(int)lVar4);
  }
  else if (cVar1 == '\x01') {
    uVar5 = FUN_1447f0fd6(param_1 + 0x13,*(undefined1 *)((longlong)param_1 + 0x8a),(int)param_2[5]);
  }
  else {
    if (cVar1 != '\0') goto LAB_149864c15;
    FUN_144a85682(param_1 + 0x1d,*(undefined4 *)((longlong)param_1 + 0x8c),(int)param_2[5]);
    uVar5 = FUN_144b20854(param_1 + 0x12);
  }
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
LAB_149864c15:
  fVar6 = *(float *)(param_1 + 0x3c);
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(float *)(param_1 + 0x3c) = fVar6;
  (**(code **)(*param_1 + 0xf8))(param_1,*(undefined8 *)(*param_2 + 0x130));
  FUN_1433dbffa(param_1,param_2);
  FUN_14474897c(param_1 + 0xc,param_2);
  return;
}



// FUNCTION 149864cd4 FUN_149864cd4 body=494 status=ok
// SIG undefined FUN_149864cd4(void)

void FUN_149864cd4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x70) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x70) + 8) >> 0x1e & 1) == 0)) {
    lVar5 = *(longlong *)(param_1 + 0x118);
    if ((lVar5 == 0) || ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0)) {
      uVar4 = FUN_144a49ec8(param_2);
      FUN_149864b30(param_1,uVar4);
      lVar5 = *(longlong *)(param_1 + 0x118);
    }
    if (*(char *)(lVar5 + 0x140) == '\0') {
      local_58 = 0;
      uStack_50 = 0;
      uVar4 = FUN_144966fba(param_2);
      uVar4 = FUN_144a81888(uVar4);
      FUN_149864ec4(lVar5,*(undefined8 *)(param_1 + 0x70),uVar4,&local_58);
    }
    plVar1 = (longlong *)(param_1 + 0x120);
    *(undefined4 *)(param_1 + 0x128) = 0;
    if (*(int *)(param_1 + 300) < 0) {
      FUN_14988cac2(plVar1);
    }
    lVar5 = FUN_144966fba(param_2);
    uVar4 = *(undefined8 *)(lVar5 + 0xa8);
    local_60 = FUN_1459fd712();
    if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_60);
    }
    FUN_1406ca43a(uVar4,&local_58,&local_60);
    lVar5 = local_58;
    lVar8 = (longlong)(int)uStack_50;
    if (lVar8 != 0) {
      lVar7 = 0;
      do {
        lVar6 = *(longlong *)(lVar5 + lVar7);
        if (lVar6 != 0) {
          uVar4 = FUN_1459fd712();
          lVar6 = FUN_144718840(lVar6,uVar4);
          if (lVar6 != 0) {
            iVar2 = *(int *)(param_1 + 0x128);
            *(uint *)(param_1 + 0x128) = iVar2 + 1U;
            if (*(uint *)(param_1 + 300) < iVar2 + 1U) {
              FUN_14988caf2(plVar1,iVar2);
            }
            *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar6;
          }
        }
        lVar7 = lVar7 + 8;
      } while (lVar8 * 8 != lVar7);
    }
    FUN_14988cb78(param_1 + 0x130);
    iVar2 = *(int *)(param_1 + 0x128);
    if ((longlong)iVar2 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x120);
      lVar8 = 0;
      do {
        puVar3 = *(undefined8 **)(lVar5 + lVar8);
        (**(code **)*puVar3)(puVar3,param_1 + 0x130);
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar2 * 8 != lVar8);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149864ec4 FUN_149864ec4 body=6270 status=ok
// SIG undefined FUN_149864ec4(void)

void FUN_149864ec4(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  byte bVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined1 auStack_338 [32];
  undefined4 local_318;
  longlong *local_308;
  longlong local_300;
  longlong *local_2f8;
  longlong local_2f0;
  longlong *local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  longlong *local_2d0;
  longlong *local_2c8 [2];
  longlong *local_2b8 [2];
  undefined1 local_2a4 [4];
  longlong *local_2a0 [2];
  undefined8 local_290;
  longlong *local_288;
  longlong *local_280 [2];
  longlong *local_270 [2];
  undefined8 local_260;
  longlong *local_258;
  longlong *local_250 [2];
  undefined8 local_240;
  longlong *local_238;
  longlong *local_230 [2];
  longlong *local_220 [2];
  undefined8 local_210;
  longlong *local_208;
  longlong *local_200 [2];
  longlong *local_1f0 [2];
  longlong *local_1e0 [2];
  longlong *local_1d0 [2];
  undefined1 local_1bc [4];
  longlong *local_1b8 [2];
  undefined8 local_1a8;
  longlong *local_1a0;
  longlong *local_198 [2];
  longlong *local_188 [2];
  longlong *local_178 [2];
  undefined8 local_168;
  longlong *local_160;
  longlong *local_158 [2];
  longlong *local_148 [2];
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128 [2];
  longlong *local_118 [2];
  longlong *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong *local_f0;
  wchar_t **local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  wchar_t *local_c8;
  longlong **pplStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8 [4];
  undefined4 local_88 [4];
  undefined1 local_78 [16];
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_338;
  *(undefined1 *)(param_1 + 0x140) = 0;
  if (*(char *)(param_1 + 0x141) != '\0') goto LAB_149864ef9;
  *(undefined1 *)(param_1 + 0x141) = 1;
  local_2e8 = (longlong *)(param_1 + 0xd0);
  FUN_14987f8d8(local_2e8,param_3,param_2 + 0x78);
  lVar10 = param_1 + 0x28;
  if (*(int *)(param_2 + 0x60) == 0) {
    local_c8 = *(wchar_t **)(param_2 + 0x18);
    FUN_1400021e4(&local_c8,local_128);
    FUN_140233b1a(local_118,local_128);
    local_c8 = L"NoSkeleton";
    pplStack_c0._0_4_ = 10;
    FUN_1446e940c(local_1b8,&local_c8);
    local_c8 = L"IKRigProcessor";
    pplStack_c0 = (longlong **)CONCAT44(pplStack_c0._4_4_,0xe);
    FUN_1446e940c(local_2a0,&local_c8);
    FUN_140208bae(local_148,local_2a0,local_1b8,
                  L"Trying to initialize IK Rig, \'{0}\' that has no skeleton.");
    FUN_14023409e(&local_138,local_148,1);
    local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
    FUN_14023423e(&local_b8,local_118);
    local_e0 = local_a8;
    local_e8 = &local_c8;
    FUN_14010d304(&local_d8);
    local_f8 = local_138;
    local_f0 = local_130;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_130 + 1) = (int)local_130[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_108,&local_f8,&local_d8);
    FUN_14007f2db(local_d8,local_d0);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    local_158[0] = local_118[0];
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_130 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)local_130 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_158[0] = local_118[0];
        if (*piVar1 == 0) {
          (**(code **)(*local_130 + 0x10))(local_130);
          local_158[0] = local_118[0];
        }
      }
    }
LAB_1498650fe:
    if (local_158[0] != (longlong *)0x0) {
      (**(code **)(*local_158[0] + 0x10))();
    }
    FUN_149869152(lVar10,&local_108);
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 0x10))();
    }
    if (local_148[0] != (longlong *)0x0) {
      (**(code **)(*local_148[0] + 0x10))();
    }
  }
  else {
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    local_c8 = (wchar_t *)0x0;
    pplStack_c0 = (longlong **)0x0;
    local_a8[2] = 0;
    FUN_149880ed2(&local_c8,param_3);
    cVar4 = FUN_14987f94c(param_2,&local_c8,lVar10);
    FUN_1498805d2(&local_c8);
    if (cVar4 == '\0') {
      local_c8 = *(wchar_t **)(param_2 + 0x18);
      FUN_1400021e4(&local_c8,local_128);
      FUN_140233b1a(local_158,local_128);
      local_c8 = L"SkeletonMissingRequiredBones";
      pplStack_c0._0_4_ = 0x1c;
      FUN_1446e940c(local_1b8,&local_c8);
      local_c8 = L"IKRigProcessor";
      pplStack_c0 = (longlong **)CONCAT44(pplStack_c0._4_4_,0xe);
      FUN_1446e940c(local_2a0,&local_c8);
      FUN_140208bae(local_148,local_2a0,local_1b8,
                    L"Trying to initialize IKRig, \'{0}\' with a Skeleton that is missing required bones. See prior warnings."
                   );
      FUN_14023409e(&local_168,local_148,1);
      local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
      FUN_14023423e(&local_b8,local_158);
      local_e0 = local_a8;
      local_e8 = &local_c8;
      FUN_14010d304(&local_d8);
      local_f8 = local_168;
      local_f0 = local_160;
      if (local_160 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_160 + 1) = (int)local_160[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_108,&local_f8,&local_d8);
      FUN_14007f2db(local_d8,local_d0);
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x10))();
      }
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_160 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar1 = (int *)((longlong)local_160 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_160 + 0x10))(local_160);
          }
        }
      }
      goto LAB_1498650fe;
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    local_2e0 = param_3;
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_14988bbac(param_1 + 0x70);
    }
    if ((longlong)*(int *)(param_2 + 0xd0) != 0) {
      plVar16 = *(longlong **)(param_2 + 200);
      plVar11 = plVar16 + *(int *)(param_2 + 0xd0);
      do {
        if ((longlong)(int)param_4[1] != 0) {
          lVar14 = 0;
          do {
            if (*(longlong *)(*param_4 + lVar14) == *(longlong *)(*plVar16 + 0x28))
            goto LAB_149865210;
            lVar14 = lVar14 + 8;
          } while ((longlong)(int)param_4[1] * 8 != lVar14);
        }
        FUN_14987f5ba(param_1 + 0x70);
LAB_149865210:
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar11);
    }
    plVar11 = (longlong *)(param_1 + 0x80);
    FUN_14988e226(plVar11);
    local_300 = lVar10;
    local_2f0 = param_2;
    if ((longlong)*(int *)(param_2 + 0xd0) != 0) {
      plVar7 = *(longlong **)(param_2 + 200);
      plVar16 = plVar7 + *(int *)(param_2 + 0xd0);
      do {
        lVar14 = *plVar7;
        pwVar8 = (wchar_t *)(lVar14 + 0x28);
        if ((longlong)(int)param_4[1] != 0) {
          lVar15 = 0;
          do {
            if (*(longlong *)(*param_4 + lVar15) == *(longlong *)pwVar8) goto LAB_149865e66;
            lVar15 = lVar15 + 8;
          } while ((longlong)(int)param_4[1] * 8 != lVar15);
        }
        local_108 = *(longlong **)(lVar14 + 0x30);
        if ((longlong)*(int *)(param_1 + 0xd8) < 1) {
LAB_149865ee2:
          uStack_100 = 0xffffffffffffffff;
          FUN_145715fae(local_178,lVar14 + 0x30);
          FUN_145715fae(local_188,pwVar8);
          local_c8 = *(wchar_t **)(param_2 + 0x18);
          FUN_1400021e4(&local_c8,local_148);
          FUN_140233b1a(local_198,local_148);
          local_c8 = L"MissingGoalBone";
          pplStack_c0._0_4_ = 0xf;
          FUN_1446e940c(local_2a0,&local_c8);
          local_c8 = L"IKRigProcessor";
          pplStack_c0 = (longlong **)CONCAT44(pplStack_c0._4_4_,0xe);
          FUN_1446e940c(local_1bc,&local_c8);
          FUN_140208bae(local_1b8,local_1bc,local_2a0,
                        L"IK Rig, \'{0}\' has a Goal, \'{1}\' that references an unknown bone, \'{2}\'. Cannot evaluate."
                       );
          FUN_14023409e(&local_1a8,local_1b8,1);
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
          FUN_14023423e(&local_b8,local_198);
          local_a8[0] = CONCAT44(local_a8[0]._4_4_,4);
          FUN_14023423e(local_a8 + 2,local_188);
          local_88[0] = 4;
          FUN_14023423e(local_78,local_178);
          local_e0 = (ulonglong *)local_68;
          local_e8 = &local_c8;
          FUN_14010d304(&local_d8);
          local_f8 = local_1a8;
          local_f0 = local_1a0;
          if (local_1a0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1a0 + 1) = (int)local_1a0[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_128,&local_f8,&local_d8);
          FUN_14007f2db(local_d8,local_d0);
          lVar10 = local_300;
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          lVar14 = 0x50;
          do {
            if (*(longlong **)((longlong)&local_c8 + lVar14) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_c8 + lVar14) + 0x10))();
              *(undefined8 *)((longlong)&local_c8 + lVar14) = 0;
              *(undefined4 *)((longlong)&pplStack_c0 + lVar14) = 0;
            }
            lVar14 = lVar14 + -0x20;
          } while (lVar14 != -0x10);
          if (local_1a0 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_1a0 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*local_1a0)(local_1a0);
              LOCK();
              piVar1 = (int *)((longlong)local_1a0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_1a0 + 0x10))(local_1a0);
              }
            }
          }
          if (local_198[0] != (longlong *)0x0) {
            (**(code **)(*local_198[0] + 0x10))();
          }
          if (local_188[0] != (longlong *)0x0) {
            (**(code **)(*local_188[0] + 0x10))();
          }
          if (local_178[0] != (longlong *)0x0) {
            (**(code **)(*local_178[0] + 0x10))();
          }
LAB_149866144:
          FUN_149869152(lVar10,local_128);
          if (local_128[0] != (longlong *)0x0) {
            (**(code **)(*local_128[0] + 0x10))();
          }
          local_128[0] = local_148[0];
          if (local_1b8[0] != (longlong *)0x0) {
            (**(code **)(*local_1b8[0] + 0x10))();
            local_128[0] = local_148[0];
          }
          goto LAB_149865145;
        }
        lVar15 = 0;
        while (*(longlong **)(*local_2e8 + lVar15 * 8) != local_108) {
          lVar15 = lVar15 + 1;
          if (*(int *)(param_1 + 0xd8) == lVar15) goto LAB_149865ee2;
        }
        uStack_100 = CONCAT44(0xffffffff,(int)lVar15);
        if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
          lVar14 = *(longlong *)pwVar8;
          uVar3 = (uint)((ulonglong)lVar14 >> 0x10);
          uVar13 = (uint)lVar14 & 0xffff;
          lVar15 = param_1 + 0xb8;
          if (*(longlong *)(param_1 + 0xc0) != 0) {
            lVar15 = *(longlong *)(param_1 + 0xc0);
          }
          iVar12 = *(int *)(lVar15 + (ulonglong)
                                     (*(int *)(param_1 + 200) - 1U &
                                     (int)((ulonglong)lVar14 >> 0x20) +
                                     ((uint)lVar14 << 0x10 | uVar13) +
                                     (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4)) * 4);
          if (iVar12 != -1) {
LAB_149865ebe:
            lVar15 = *plVar11 + (longlong)iVar12 * 0x20;
            if (*(longlong *)(*plVar11 + (longlong)iVar12 * 0x20) != lVar14)
            goto code_r0x000149865ed3;
            puVar17 = (undefined8 *)(lVar15 + 8);
            if ((puVar17 != (undefined8 *)0x0 && lVar15 != 0) && ((longlong *)*puVar17 != local_108)
               ) {
              FUN_145715fae(local_1d0,&local_108);
              FUN_145715fae(local_1e0,puVar17);
              FUN_145715fae(local_1f0,pwVar8);
              local_c8 = *(wchar_t **)(param_2 + 0x18);
              FUN_1400021e4(&local_c8,local_148);
              FUN_140233b1a(local_200,local_148);
              local_c8 = L"DuplicateGoal";
              pplStack_c0._0_4_ = 0xd;
              FUN_1446e940c(local_2a0,&local_c8);
              local_c8 = L"IKRigProcessor";
              pplStack_c0 = (longlong **)CONCAT44(pplStack_c0._4_4_,0xe);
              FUN_1446e940c(local_1bc,&local_c8);
              FUN_140208bae(local_1b8,local_1bc,local_2a0,
                            L"IK Rig, \'{0}\' has a Goal, \'{1}\' that references different bones in different solvers, \'{2}\' and \'{3}\'. Cannot evaluate."
                           );
              FUN_14023409e(&local_210,local_1b8,1);
              local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
              FUN_14023423e(&local_b8,local_200);
              local_a8[0] = CONCAT44(local_a8[0]._4_4_,4);
              FUN_14023423e(local_a8 + 2,local_1f0);
              local_88[0] = 4;
              FUN_14023423e(local_78,local_1e0);
              local_68[0] = 4;
              FUN_14023423e(local_58,local_1d0);
              local_e0 = &local_48;
              local_e8 = &local_c8;
              FUN_14010d304(&local_d8);
              local_f8 = local_210;
              local_f0 = local_208;
              if (local_208 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_208 + 1) = (int)local_208[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_128,&local_f8,&local_d8);
              FUN_14007f2db(local_d8,local_d0);
              if (local_d8 != 0) {
                FUN_1400020a8();
              }
              lVar10 = 0x70;
              do {
                if (*(longlong **)((longlong)&local_c8 + lVar10) != (longlong *)0x0) {
                  (**(code **)(**(longlong **)((longlong)&local_c8 + lVar10) + 0x10))();
                  *(undefined8 *)((longlong)&local_c8 + lVar10) = 0;
                  *(undefined4 *)((longlong)&pplStack_c0 + lVar10) = 0;
                }
                lVar10 = lVar10 + -0x20;
              } while (lVar10 != -0x10);
              if (local_208 != (longlong *)0x0) {
                LOCK();
                plVar11 = local_208 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
                  (**(code **)*local_208)(local_208);
                  LOCK();
                  piVar1 = (int *)((longlong)local_208 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_208 + 0x10))(local_208);
                  }
                }
              }
              if (local_200[0] != (longlong *)0x0) {
                (**(code **)(*local_200[0] + 0x10))();
              }
              if (local_1f0[0] != (longlong *)0x0) {
                (**(code **)(*local_1f0[0] + 0x10))();
              }
              if (local_1e0[0] != (longlong *)0x0) {
                (**(code **)(*local_1e0[0] + 0x10))();
              }
              lVar10 = local_300;
              if (local_1d0[0] != (longlong *)0x0) {
                (**(code **)(*local_1d0[0] + 0x10))();
                lVar10 = local_300;
              }
              goto LAB_149866144;
            }
          }
        }
LAB_149865b94:
        iVar12 = *(int *)(param_2 + 0xe0);
        local_308 = plVar11;
        local_2f8 = plVar16;
        if ((longlong)iVar12 == 0) {
LAB_149865bae:
          FUN_145715fae(local_220,pwVar8);
          local_c8 = *(wchar_t **)(param_2 + 0x18);
          FUN_1400021e4(&local_c8,local_148);
          FUN_140233b1a(local_230,local_148);
          local_c8 = L"DisconnectedGoal";
          pplStack_c0._0_4_ = 0x10;
          FUN_1446e940c(local_2a0,&local_c8);
          local_c8 = L"IKRigProcessor";
          pplStack_c0 = (longlong **)CONCAT44(pplStack_c0._4_4_,0xe);
          FUN_1446e940c(local_1bc,&local_c8);
          FUN_140208bae(local_1b8,local_1bc,local_2a0);
          FUN_14023409e(&local_240,local_1b8,1);
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
          FUN_14023423e(&local_b8,local_230);
          local_a8[0] = CONCAT44(local_a8[0]._4_4_,4);
          FUN_14023423e(local_a8 + 2,local_220);
          local_e8 = &local_c8;
          local_e0 = (ulonglong *)local_88;
          FUN_14010d304(&local_d8,&local_e8);
          local_f8 = local_240;
          local_f0 = local_238;
          if (local_238 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_238 + 1) = (int)local_238[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_128,&local_f8,&local_d8);
          FUN_14007f2db(local_d8,local_d0);
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          lVar14 = 0x30;
          do {
            if (*(longlong **)((longlong)&local_c8 + lVar14) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_c8 + lVar14) + 0x10))();
              *(undefined8 *)((longlong)&local_c8 + lVar14) = 0;
              *(undefined4 *)((longlong)&pplStack_c0 + lVar14) = 0;
            }
            plVar11 = local_238;
            lVar14 = lVar14 + -0x20;
          } while (lVar14 != -0x10);
          if (local_238 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_238 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*local_238)(local_238);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          if (local_230[0] != (longlong *)0x0) {
            (**(code **)(*local_230[0] + 0x10))();
          }
          if (local_220[0] != (longlong *)0x0) {
            (**(code **)(*local_220[0] + 0x10))();
          }
          FUN_14986922e(lVar10,local_128);
          if (local_128[0] != (longlong *)0x0) {
            (**(code **)(*local_128[0] + 0x10))();
          }
          if (local_1b8[0] != (longlong *)0x0) {
            (**(code **)(*local_1b8[0] + 0x10))();
          }
          if (local_148[0] != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          lVar10 = *(longlong *)(param_2 + 0xd8);
          lVar14 = 0;
          bVar9 = 0;
          do {
            plVar11 = *(longlong **)(lVar10 + lVar14);
            bVar5 = (**(code **)(*plVar11 + 0x2d0))(plVar11,pwVar8);
            bVar9 = bVar9 | bVar5;
            lVar14 = lVar14 + 8;
          } while ((longlong)iVar12 * 8 != lVar14);
          param_2 = local_2f0;
          lVar10 = local_300;
          if ((bVar9 & 1) == 0) goto LAB_149865bae;
        }
        plVar11 = local_308;
        pplStack_c0 = &local_108;
        local_c8 = pwVar8;
        FUN_14988e3ae(local_308,&local_d8,&local_c8);
        plVar16 = local_2f8;
LAB_149865e66:
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar16);
    }
    local_2f8 = (longlong *)(param_1 + 0x60);
    FUN_149880610(local_2f8,*(undefined4 *)(param_2 + 0xe0));
    if ((longlong)*(int *)(param_2 + 0xe0) != 0) {
      plVar11 = *(longlong **)(param_2 + 0xd8);
      local_308 = plVar11 + *(int *)(param_2 + 0xe0);
      do {
        lVar10 = *plVar11;
        if (lVar10 == 0) {
          local_c8 = *(wchar_t **)(param_2 + 0x18);
          FUN_1400021e4(&local_c8,local_128);
          FUN_140233b1a(local_250,local_128);
          local_c8 = L"UnknownSolver";
          pplStack_c0._0_4_ = 0xd;
          FUN_1446e940c(local_1b8,&local_c8);
          local_c8 = L"IKRigProcessor";
          pplStack_c0 = (longlong **)CONCAT44(pplStack_c0._4_4_,0xe);
          FUN_1446e940c(local_2a0,&local_c8);
          FUN_140208bae(local_148,local_2a0,local_1b8,
                        L"IK Rig, \'{0}\' has null/unknown solver in it. Please remove it.");
          FUN_14023409e(&local_260,local_148,1);
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
          FUN_14023423e(&local_b8,local_250);
          local_e0 = local_a8;
          local_e8 = &local_c8;
          FUN_14010d304(&local_d8,&local_e8);
          local_f8 = local_260;
          local_f0 = local_258;
          if (local_258 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_258 + 1) = (int)local_258[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(&local_108,&local_f8,&local_d8);
          FUN_14007f2db(local_d8,local_d0);
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          param_2 = local_2f0;
          plVar16 = local_308;
          if (local_b8 != (longlong *)0x0) {
            (**(code **)(*local_b8 + 0x10))();
          }
          plVar7 = local_258;
          if (local_258 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_258 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_258)(local_258);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          if (local_250[0] != (longlong *)0x0) {
            (**(code **)(*local_250[0] + 0x10))();
          }
          FUN_14986922e(local_300,&local_108);
          if (local_108 != (longlong *)0x0) {
            (**(code **)(*local_108 + 0x10))();
          }
          if (local_148[0] != (longlong *)0x0) {
            (**(code **)(*local_148[0] + 0x10))();
          }
          if (local_128[0] != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          FUN_1400b22c2(&local_d8,"_SolverInstance_");
          local_c8 = *(wchar_t **)(lVar10 + 0x18);
          FUN_1400021e4(&local_c8,&local_e8);
          FUN_1401c7f3e(&local_c8,&local_e8,&local_d8);
          pwVar8 = L"";
          if ((int)pplStack_c0 != 0) {
            pwVar8 = local_c8;
          }
          FUN_1446f470e(&local_f8,pwVar8,1);
          plVar16 = local_308;
          if (local_c8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (local_e8 != (wchar_t **)0x0) {
            FUN_1400020a8();
          }
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          local_318 = 2;
          FUN_140af9fb2(&local_c8,param_1,*(undefined8 *)(lVar10 + 0x10),local_f8);
          pwVar8 = local_c8;
          uVar6 = FUN_145893a54();
          plVar7 = (longlong *)FUN_14092e757(uVar6,lVar10,param_1,pwVar8);
          if ((longlong)(int)param_4[1] != 0) {
            lVar10 = *param_4;
            lVar14 = (longlong)(int)param_4[1] << 3;
            do {
              (**(code **)(*plVar7 + 0x2c8))(plVar7,lVar10);
              lVar10 = lVar10 + 8;
              lVar14 = lVar14 + -8;
            } while (lVar14 != 0);
          }
          (**(code **)(*plVar7 + 0x2a0))(plVar7,local_2e8);
          if ((plVar7 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(plVar7);
          }
          iVar12 = *(int *)(param_1 + 0x68);
          *(uint *)(param_1 + 0x68) = iVar12 + 1U;
          if (*(uint *)(param_1 + 0x6c) < iVar12 + 1U) {
            FUN_14988e91e(local_2f8,iVar12);
          }
          *(longlong **)(*local_2f8 + (longlong)iVar12 * 8) = plVar7;
          if ((plVar7 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(plVar7);
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar16);
    }
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    if ((longlong)*(int *)(param_2 + 0xf8) != 0) {
      plVar11 = *(longlong **)(param_2 + 0xf0);
      plVar16 = plVar11 + (longlong)*(int *)(param_2 + 0xf8) * 6;
      local_308 = plVar16;
      do {
        cVar4 = FUN_14988063a(local_2e8,plVar11,&local_108);
        if (cVar4 == '\0') {
          local_c8 = *(wchar_t **)(local_2e0 + 0x18);
          FUN_1400021e4(&local_c8,local_148);
          FUN_140233b1a(local_270,local_148);
          FUN_1400021e4(plVar11,local_1b8);
          FUN_140233b1a(local_280,local_1b8);
          local_c8 = L"InvalidRetargetChain";
          pplStack_c0._0_4_ = 0x14;
          FUN_1446e940c(local_1bc,&local_c8);
          local_c8 = L"IKRigProcessor";
          pplStack_c0 = (longlong **)CONCAT44(pplStack_c0._4_4_,0xe);
          FUN_1446e940c(local_2a4,&local_c8);
          FUN_140208bae(local_2a0,local_2a4,local_1bc,
                        L"Invalid Retarget Chain: \'{0}\'. End bone is not a child of the start bone in Skeletal Mesh, \'{1}\'."
                       );
          FUN_14023409e(&local_290,local_2a0,1);
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
          FUN_14023423e(&local_b8,local_280);
          local_a8[0] = CONCAT44(local_a8[0]._4_4_,4);
          FUN_14023423e(local_a8 + 2,local_270);
          local_e0 = (ulonglong *)local_88;
          local_e8 = &local_c8;
          FUN_14010d304(&local_d8,&local_e8);
          local_f8 = local_290;
          local_f0 = local_288;
          if (local_288 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_288 + 1) = (int)local_288[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_128,&local_f8,&local_d8);
          FUN_14007f2db(local_d8,local_d0);
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          plVar16 = local_308;
          lVar10 = 0x30;
          do {
            if (*(longlong **)((longlong)&local_c8 + lVar10) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_c8 + lVar10) + 0x10))();
              *(undefined8 *)((longlong)&local_c8 + lVar10) = 0;
              *(undefined4 *)((longlong)&pplStack_c0 + lVar10) = 0;
            }
            plVar7 = local_288;
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != -0x10);
          if (local_288 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_288 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_288)(local_288);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          param_2 = local_2f0;
          if (local_280[0] != (longlong *)0x0) {
            (**(code **)(*local_280[0] + 0x10))();
          }
          if (local_270[0] != (longlong *)0x0) {
            (**(code **)(*local_270[0] + 0x10))();
          }
          FUN_14986922e(local_300,local_128);
          if (local_128[0] != (longlong *)0x0) {
            (**(code **)(*local_128[0] + 0x10))();
          }
          if (local_2a0[0] != (longlong *)0x0) {
            (**(code **)(*local_2a0[0] + 0x10))();
          }
          if (local_1b8[0] != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (local_148[0] != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        plVar11 = plVar11 + 6;
      } while (plVar11 != plVar16);
    }
    local_c8 = *(wchar_t **)(local_2e0 + 0x18);
    FUN_1400021e4(&local_c8,local_148);
    FUN_140233b1a(local_2b8,local_148);
    local_c8 = *(wchar_t **)(param_2 + 0x18);
    FUN_1400021e4(&local_c8,local_1b8);
    FUN_140233b1a(local_2c8,local_1b8);
    local_c8 = L"SuccessfulInit";
    pplStack_c0._0_4_ = 0xe;
    FUN_1446e940c(local_1bc,&local_c8);
    local_c8 = L"IKRigProcessor";
    pplStack_c0 = (longlong **)CONCAT44(pplStack_c0._4_4_,0xe);
    FUN_1446e940c(local_2a4,&local_c8);
    FUN_140208bae(local_2a0,local_2a4,local_1bc,L"IK Rig, \'{0}\' ready to run on {1}.");
    FUN_14023409e(&local_2d8,local_2a0,1);
    local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,4);
    FUN_14023423e(&local_b8,local_2c8);
    local_a8[0] = CONCAT44(local_a8[0]._4_4_,4);
    FUN_14023423e(local_a8 + 2,local_2b8);
    local_e0 = (ulonglong *)local_88;
    local_e8 = &local_c8;
    FUN_14010d304(&local_d8);
    local_f8 = local_2d8;
    local_f0 = local_2d0;
    if (local_2d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2d0 + 1) = (int)local_2d0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_128,&local_f8,&local_d8);
    FUN_14007f2db(local_d8,local_d0);
    lVar10 = local_300;
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    lVar14 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_c8 + lVar14) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_c8 + lVar14) + 0x10))();
        *(undefined8 *)((longlong)&local_c8 + lVar14) = 0;
        *(undefined4 *)((longlong)&pplStack_c0 + lVar14) = 0;
      }
      lVar14 = lVar14 + -0x20;
    } while (lVar14 != -0x10);
    if (local_2d0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_2d0 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_2d0)(local_2d0);
        LOCK();
        piVar1 = (int *)((longlong)local_2d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2d0 + 0x10))(local_2d0);
        }
      }
    }
    if (local_2c8[0] != (longlong *)0x0) {
      (**(code **)(*local_2c8[0] + 0x10))();
    }
    if (local_2b8[0] != (longlong *)0x0) {
      (**(code **)(*local_2b8[0] + 0x10))();
    }
    FUN_14986930a(lVar10,local_128);
    if (local_128[0] != (longlong *)0x0) {
      (**(code **)(*local_128[0] + 0x10))();
    }
    if (local_2a0[0] != (longlong *)0x0) {
      (**(code **)(*local_2a0[0] + 0x10))();
    }
    if (local_1b8[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_148[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x140) = 1;
    local_128[0] = local_108;
  }
LAB_149865145:
  if (local_128[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_149864ef9:
  if ((local_48 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000149865ed3:
  iVar12 = *(int *)(lVar15 + 0x18);
  if (iVar12 == -1) goto LAB_149865b94;
  goto LAB_149865ebe;
}



// FUNCTION 149866744 FUN_149866744 body=57 status=ok
// SIG undefined FUN_149866744(void)

void FUN_149866744(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_140ec6c7a();
  uVar1 = (**(code **)(*param_1 + 0x100))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014986677a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,param_3,uVar1,*(code **)(*param_1 + 0xf0));
  return;
}



// FUNCTION 14986677d FUN_14986677d body=148 status=ok
// SIG undefined FUN_14986677d(void)

undefined8 FUN_14986677d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14594cf8c();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149866812 FUN_149866812 body=363 status=ok
// SIG undefined FUN_149866812(void)

void FUN_149866812(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ushort uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1408112b8();
  FUN_1408112ba(param_1 + 0x60,param_2);
  plVar3 = *(longlong **)(*param_2 + 0x6a0);
  cVar5 = FUN_144729dda(plVar3 + 6);
  if (((cVar5 != '\0') && (plVar3[9] != 0)) && (0 < (int)plVar3[1])) {
    plVar1 = (longlong *)(param_1 + 0x180);
    FUN_14988cd08(plVar1);
    plVar7 = (longlong *)FUN_14479d2ce(plVar3 + 7);
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x308))(plVar7);
      lVar4 = plVar3[1];
      if (0 < (int)lVar4) {
        uVar11 = 0;
        do {
          uVar2 = *(ushort *)(*plVar3 + (ulonglong)uVar11 * 2);
          local_5c = 0xffffffff;
          if ((longlong)(int)plVar3[1] != 0) {
            lVar9 = (longlong)(int)plVar3[1] * 2;
            lVar10 = 0;
            do {
              if (uVar2 == *(ushort *)(*plVar3 + lVar10 * 2)) {
                local_5c = (undefined4)lVar10;
                break;
              }
              lVar10 = lVar10 + 1;
              lVar9 = lVar9 + -2;
            } while (lVar9 != 0);
          }
          local_68 = *(undefined8 *)(*(longlong *)(lVar8 + 0x20) + (ulonglong)uVar2 * 0xc);
          uVar6 = FUN_144a750a0(lVar8,&local_68);
          local_58 = &local_5c;
          FUN_14988ce90(plVar1,&local_4c,&local_58);
          *(undefined4 *)(*plVar1 + 4 + (longlong)local_4c * 0x10) = uVar6;
          uVar11 = uVar11 + 1;
        } while ((int)(uint)uVar11 < (int)lVar4);
      }
      *(undefined2 *)(*(longlong *)(param_1 + 0x118) + 0x140) = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14986697e FUN_14986697e body=1701 status=ok
// SIG undefined FUN_14986697e(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x000149866cec */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_14986697e(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined2 *local_98;
  int local_90;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc2d988) && (FUN_144b3d300(&DAT_14cc2d988), DAT_14cc2d988 == -1)) {
    FUN_1446f470e(local_88,L"PositionAlpha",1);
    FUN_1400021e4(local_88,&DAT_14cc2d978);
    atexit((_func_5014 *)&LAB_144670fcd);
    _Init_thread_footer(&DAT_14cc2d988);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc2d9a0) && (FUN_144b3d300(&DAT_14cc2d9a0), DAT_14cc2d9a0 == -1)) {
    FUN_1446f470e(local_88,L"RotationAlpha",1);
    FUN_1400021e4(local_88,&DAT_14cc2d990);
    atexit((_func_5014 *)&LAB_144670fde);
    _Init_thread_footer(&DAT_14cc2d9a0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc2d9b8) && (FUN_144b3d300(&DAT_14cc2d9b8), DAT_14cc2d9b8 == -1)) {
    FUN_1446f470e(local_88,L"Position",1);
    FUN_1400021e4(local_88,&DAT_14cc2d9a8);
    atexit((_func_5014 *)&LAB_144670fef);
    _Init_thread_footer(&DAT_14cc2d9b8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc2d9d0) && (FUN_144b3d300(&DAT_14cc2d9d0), DAT_14cc2d9d0 == -1)) {
    FUN_1446f470e(local_88,L"Rotation",1);
    FUN_1400021e4(local_88,&DAT_14cc2d9c0);
    atexit((_func_5014 *)&LAB_144671000);
    _Init_thread_footer(&DAT_14cc2d9d0);
  }
  local_b0 = param_1 + 0x40;
  FUN_1457c22ea(local_b0,*(undefined4 *)(param_1 + 0x20));
  local_b8 = (longlong *)(param_1 + 0x50);
  FUN_1457c22ea(local_b8,*(undefined4 *)(param_1 + 0x20));
  local_c0 = (longlong *)(param_1 + 0x1d0);
  FUN_149867024(local_c0,*(undefined4 *)(param_1 + 0x20));
  if (0 < *(int *)(param_1 + 0x20)) {
    local_a8 = *(undefined8 *)(param_2 + 0x10);
    lVar10 = 0;
    do {
      lVar5 = FUN_144a8e29b(local_a8,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8),3);
      iVar2 = *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x4c) < iVar2 + 1U) {
        FUN_140001000(local_b0,iVar2);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar2 * 8) = lVar5;
      iVar2 = *(int *)(param_1 + 0x58);
      *(uint *)(param_1 + 0x58) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
        FUN_140001000(local_b8,iVar2);
      }
      *(undefined8 *)(*local_b8 + (longlong)iVar2 * 8) = 0;
      local_a0 = lVar5;
      if ((lVar5 != 0) && (iVar2 = *(int *)(param_1 + 0x80), (longlong)iVar2 != 0)) {
        lVar9 = lVar10 * 8 + *(longlong *)(param_1 + 0x28);
        lVar5 = *(longlong *)(param_1 + 0x78);
        lVar8 = 0;
        do {
          FUN_1400021e4(lVar9,local_88);
          FUN_1400021e4(lVar8 + lVar5,&local_98);
          iVar3 = local_90 + -1;
          if (local_90 == 0) {
            iVar3 = 0;
          }
          puVar6 = &DAT_149dfb77a;
          if (local_90 != 0) {
            puVar6 = local_98;
          }
          cVar4 = FUN_144a38768(local_88,puVar6,iVar3,1);
          if (local_98 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_88[0] != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (cVar4 != '\0') {
            uVar7 = (int)(lVar8 >> 5) * -0x33333333;
            if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x80))) {
              lVar5 = (ulonglong)(uVar7 & 0x7fffffff) * 0xa0 + *(longlong *)(param_1 + 0x78);
              FUN_1400021e4(lVar9,&local_98);
              iVar2 = DAT_14cc2d980 + -1;
              if (DAT_14cc2d980 == 0) {
                iVar2 = 0;
              }
              puVar6 = &DAT_149dfb77a;
              if (DAT_14cc2d980 != 0) {
                puVar6 = DAT_14cc2d978;
              }
              cVar4 = FUN_144a791f8(&local_98,puVar6,iVar2,1);
              lVar8 = local_a0;
              if (cVar4 == '\0') {
                iVar2 = DAT_14cc2d998 + -1;
                if (DAT_14cc2d998 == 0) {
                  iVar2 = 0;
                }
                puVar6 = &DAT_149dfb77a;
                if (DAT_14cc2d998 != 0) {
                  puVar6 = DAT_14cc2d990;
                }
                cVar4 = FUN_144a791f8(&local_98,puVar6,iVar2,1);
                if (cVar4 != '\0') {
                  local_68 = &PTR_LAB_14bece870;
                  uStack_60 = lVar5;
                  local_58 = lVar8;
                  local_88[0] = &LAB_144672644;
                  goto LAB_149866c71;
                }
                iVar2 = DAT_14cc2d9b0 + -1;
                if (DAT_14cc2d9b0 == 0) {
                  iVar2 = 0;
                }
                puVar6 = &DAT_149dfb77a;
                if (DAT_14cc2d9b0 != 0) {
                  puVar6 = DAT_14cc2d9a8;
                }
                cVar4 = FUN_144a791f8(&local_98,puVar6,iVar2,1);
                if (cVar4 != '\0') {
                  local_68 = &PTR_LAB_14bece890;
                  uStack_60 = lVar5;
                  local_58 = lVar8;
                  local_88[0] = &LAB_1446726b4;
                  goto LAB_149866c71;
                }
                iVar2 = DAT_14cc2d9c8 + -1;
                if (DAT_14cc2d9c8 == 0) {
                  iVar2 = 0;
                }
                puVar6 = &DAT_149dfb77a;
                if (DAT_14cc2d9c8 != 0) {
                  puVar6 = DAT_14cc2d9c0;
                }
                cVar4 = FUN_144a791f8(&local_98,puVar6,iVar2,1);
                if (cVar4 != '\0') {
                  local_68 = &PTR_LAB_14bece8b0;
                  uStack_60 = lVar5;
                  local_58 = lVar8;
                  local_88[0] = &LAB_14467271c;
                  goto LAB_149866c71;
                }
              }
              else {
                local_68 = &PTR_LAB_14bece850;
                uStack_60 = lVar5;
                local_58 = local_a0;
                local_88[0] = &LAB_1446725d4;
LAB_149866c71:
                local_58 = lVar8;
                local_78 = 0;
                iVar2 = *(int *)(param_1 + 0x1d8);
                *(uint *)(param_1 + 0x1d8) = iVar2 + 1U;
                uStack_60 = lVar5;
                if (*(uint *)(param_1 + 0x1dc) < iVar2 + 1U) {
                  FUN_14988d3c6(local_c0,iVar2);
                }
                lVar5 = *local_c0;
                lVar8 = (longlong)iVar2 * 0x40;
                *(undefined1 **)(lVar5 + lVar8) = local_88[0];
                *(undefined8 *)(lVar5 + 0x10 + lVar8) = local_78;
                local_78 = 0;
                puVar1 = (undefined4 *)(lVar5 + 0x30 + lVar8);
                *puVar1 = (undefined4)local_58;
                puVar1[1] = local_58._4_4_;
                puVar1[2] = uStack_50;
                puVar1[3] = uStack_4c;
                puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar8);
                *puVar1 = (undefined4)local_68;
                puVar1[1] = local_68._4_4_;
                puVar1[2] = (undefined4)uStack_60;
                puVar1[3] = uStack_60._4_4_;
                if ((*(longlong *)(lVar5 + lVar8) == 0) && (local_88[0] != (undefined1 *)0x0)) {
                  (*(code *)local_68[2])();
                }
              }
              if (local_98 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            break;
          }
          lVar8 = lVar8 + 0xa0;
        } while ((longlong)iVar2 * 0xa0 != lVar8);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x20));
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149867024 FUN_149867024 body=61 status=ok
// SIG undefined FUN_149867024(void)

void FUN_149867024(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_14988d32c(param_1);
    return;
  }
  FUN_149889a3f(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 149867062 FUN_149867062 body=146 status=ok
// SIG undefined FUN_149867062(void)

void FUN_149867062(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x1d8) != 0)) {
    puVar5 = *(undefined8 **)(param_1 + 0x1d0);
    puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x1d8) * 8;
    do {
      pcVar1 = (code *)*puVar5;
      plVar3 = puVar5 + 4;
      if ((longlong *)puVar5[2] != (longlong *)0x0) {
        plVar3 = (longlong *)puVar5[2];
      }
      local_38 = param_2;
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(uVar2,&local_38);
      puVar5 = puVar5 + 8;
    } while (puVar5 != puVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986710e FUN_14986710e body=60 status=ok
// SIG undefined FUN_14986710e(void)

void FUN_14986710e(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  FUN_141339014();
  uVar1 = FUN_14477dc2a(param_1);
  FUN_14477dadc(uVar1,param_2);
  FUN_14986714a(param_1,*(undefined8 *)(*param_2 + 0x148));
  return;
}



// FUNCTION 14986714a FUN_14986714a body=82 status=ok
// SIG undefined FUN_14986714a(void)

void FUN_14986714a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x148) == 0) {
    cVar1 = FUN_144a61b4f();
    if (cVar1 != '\0') {
      lVar2 = FUN_149867b68(param_2);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x148) = lVar2;
    }
  }
  return;
}



// FUNCTION 14986719c FUN_14986719c body=350 status=ok
// SIG undefined FUN_14986719c(void)

void FUN_14986719c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = *(longlong **)(*param_2 + 0x6a0);
  cVar5 = FUN_144729dda(plVar3 + 6);
  if (((cVar5 != '\0') && (plVar3[9] != 0)) && (0 < (int)plVar3[1])) {
    lVar7 = FUN_144a81888(*(undefined8 *)(*param_2 + 0x148));
    if (lVar7 != 0) {
      plVar1 = (longlong *)(param_1 + 0x160);
      *(undefined4 *)(param_1 + 0x168) = 0;
      if (*(int *)(param_1 + 0x16c) < 0) {
        FUN_146b9c00c(plVar1,0);
      }
      lVar7 = plVar3[9];
      plVar8 = (longlong *)FUN_144a81888(*(undefined8 *)(*param_2 + 0x148));
      uVar9 = (**(code **)(*plVar8 + 0x310))(plVar8);
      if (0 < (int)plVar3[1]) {
        lVar10 = 0;
        do {
          local_50 = *(undefined8 *)
                      (*(longlong *)(lVar7 + 0x20) +
                      (ulonglong)*(ushort *)(*plVar3 + lVar10 * 2) * 0xc);
          iVar6 = FUN_144a750a0(uVar9,&local_50);
          if (iVar6 != -1) {
            iVar2 = *(int *)(param_1 + 0x168);
            *(uint *)(param_1 + 0x168) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x16c) < iVar2 + 1U) {
              FUN_1406b704c(plVar1,iVar2);
            }
            lVar4 = *plVar1;
            *(int *)(lVar4 + (longlong)iVar2 * 8) = (int)lVar10;
            *(int *)(lVar4 + 4 + (longlong)iVar2 * 8) = iVar6;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)plVar3[1]);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498672fc FUN_1498672fc body=64 status=ok
// SIG undefined FUN_1498672fc(void)

void FUN_1498672fc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1433dbffa();
  uVar1 = FUN_14477dc2a(param_1);
  FUN_14477dadc(uVar1,param_2);
  *(float *)(param_1 + 0x1e0) = *(float *)(param_2 + 0x28) + *(float *)(param_1 + 0x1e0);
  return;
}



// FUNCTION 14986733c FUN_14986733c body=120 status=ok
// SIG undefined FUN_14986733c(void)

undefined4 FUN_14986733c(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    uVar3 = 0;
    if ((*param_4 == *(longlong *)(param_1 + 0x70)) &&
       (*(int *)(param_1 + 100) == *(int *)(*param_4 + 0x28))) {
      uVar3 = 0;
      if (((longlong *)*param_2 == *(longlong **)(param_1 + 200)) &&
         (uVar3 = 0, *param_3 == *(longlong *)(param_1 + 0x140))) {
        lVar4 = (**(code **)(*(longlong *)*param_2 + 0x310))();
        uVar2 = *(uint *)(lVar4 + 0x28);
        uVar1 = *(uint *)(param_1 + 0x80);
        lVar4 = (**(code **)(*(longlong *)*param_3 + 0x310))();
        uVar2 = *(uint *)(lVar4 + 0x28) ^ *(uint *)(param_1 + 0xf8) | uVar2 ^ uVar1;
        uVar3 = CONCAT31((int3)(uVar2 >> 8),uVar2 == 0);
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1498673b4 FUN_1498673b4 body=73 status=ok
// SIG undefined FUN_1498673b4(void)

longlong FUN_1498673b4(longlong param_1,longlong param_2,char param_3)

{
  FUN_149868d64(param_2);
  FUN_149868e54(*(undefined8 *)(param_1 + 0x28),param_2);
  FUN_149868f9e(param_2,param_1 + 0x30);
  if (param_3 != '\0') {
    *(undefined1 *)(param_2 + 0xe6) = 0;
  }
  return param_2;
}



// FUNCTION 1498673fe FUN_1498673fe body=752 status=ok
// SIG undefined FUN_1498673fe(void)

longlong FUN_1498673fe(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  double *pdVar4;
  undefined4 *puVar5;
  double dVar6;
  double dVar7;
  void *_Src;
  longlong *plVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  double dVar22;
  
  FUN_1498797e6(param_1,param_5);
  if (*(char *)(param_1 + 0x60) != '\0') {
    puVar1 = (undefined8 *)(param_1 + 0x168);
    iVar18 = *(int *)(param_1 + 0x128);
    _Src = *(void **)(param_1 + 0x120);
    *(int *)(param_1 + 0x170) = iVar18;
    if (iVar18 == 0 && *(int *)(param_1 + 0x174) == 0) {
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    else {
      FUN_144756262(puVar1,iVar18);
      if (iVar18 != 0) {
        memcpy((void *)*puVar1,_Src,(longlong)iVar18 * 0x60);
      }
    }
    lVar2 = param_1 + 0xf0;
    if ((*(char *)(param_1 + 0x360) == '\x01') && (*(char *)(param_1 + 0x68) == '\x01')) {
      lVar19 = *param_2;
      lVar21 = (longlong)*(int *)(param_1 + 0x1b8) * 0x60;
      pdVar4 = (double *)(lVar19 + 0x20 + lVar21);
      dVar9 = *pdVar4;
      dVar10 = pdVar4[1];
      dVar6 = *(double *)(lVar19 + 0x30 + lVar21);
      dVar22 = (double)*(float *)(param_1 + 0x1e0);
      dVar7 = *(double *)(lVar19 + 0x28 + lVar21);
      *(double *)(param_1 + 0x200) = dVar9;
      *(double *)(param_1 + 0x208) = dVar10;
      *(double *)(param_1 + 0x210) = dVar6;
      *(double *)(param_1 + 0x218) = dVar9 * dVar22;
      *(double *)(param_1 + 0x220) = dVar7 * dVar22;
      *(double *)(param_1 + 0x228) = dVar6 * dVar22;
      puVar3 = (undefined4 *)(lVar19 + lVar21);
      uVar11 = puVar3[1];
      uVar12 = puVar3[2];
      uVar13 = puVar3[3];
      puVar5 = (undefined4 *)(lVar19 + 0x10 + lVar21);
      uVar14 = *puVar5;
      uVar15 = puVar5[1];
      uVar16 = puVar5[2];
      uVar17 = puVar5[3];
      *(undefined4 *)(param_1 + 0x230) = *puVar3;
      *(undefined4 *)(param_1 + 0x234) = uVar11;
      *(undefined4 *)(param_1 + 0x238) = uVar12;
      *(undefined4 *)(param_1 + 0x23c) = uVar13;
      *(undefined4 *)(param_1 + 0x240) = uVar14;
      *(undefined4 *)(param_1 + 0x244) = uVar15;
      *(undefined4 *)(param_1 + 0x248) = uVar16;
      *(undefined4 *)(param_1 + 0x24c) = uVar17;
      FUN_149874bc8(param_1 + 0x1b0,puVar1);
      iVar18 = *(int *)(param_1 + 600) + 1;
      if (iVar18 < *(int *)(param_1 + 0x170)) {
        do {
          FUN_14986cd82(lVar2,iVar18,param_1 + 0x110,puVar1);
          iVar18 = iVar18 + 1;
        } while (iVar18 < *(int *)(param_1 + 0x170));
      }
    }
    if ((*(char *)(param_1 + 0x361) == '\x01') && (*(char *)(param_1 + 0x69) == '\x01')) {
      FUN_149879966(param_1,param_2,puVar1);
      iVar18 = *(int *)(param_1 + 0x170);
      if (0 < iVar18) {
        uVar20 = 0;
        do {
          if (*(char *)(*(longlong *)(param_1 + 0x178) + uVar20) == '\0') {
            FUN_14986cd82(lVar2,uVar20 & 0xffffffff,param_1 + 0x110,puVar1);
            iVar18 = *(int *)(param_1 + 0x170);
          }
          uVar20 = uVar20 + 1;
        } while ((longlong)uVar20 < (longlong)iVar18);
      }
    }
    if ((*(char *)(param_1 + 0x69) == '\x01') && (*(char *)(param_1 + 0x6a) == '\x01')) {
      FUN_149879a1c(param_1,param_2,puVar1,param_3,param_4);
    }
    if (((*(char *)(param_1 + 0x361) == '\x01') && (*(char *)(param_1 + 0x69) == '\x01')) &&
       ((longlong)*(int *)(param_1 + 0x198) != 0)) {
      lVar19 = (longlong)*(int *)(param_1 + 0x198) * 0x280;
      lVar21 = *(longlong *)(param_1 + 400) + 0x260;
      do {
        FUN_149875610(lVar21,lVar21 + -0x228,lVar21 + -600,lVar21 + -0x248,param_2,puVar1,lVar2);
        lVar21 = lVar21 + 0x280;
        lVar19 = lVar19 + -0x280;
      } while (lVar19 != 0);
    }
    if ((*(char *)(param_1 + 0x363) == '\x01') &&
       (iVar18 = *(int *)(param_1 + 0x390), (longlong)iVar18 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x388);
      lVar19 = 0;
      do {
        plVar8 = *(longlong **)(lVar2 + lVar19);
        if (((char)plVar8[5] == '\x01') && (*(char *)((longlong)plVar8 + 0x29) == '\x01')) {
          (**(code **)(*plVar8 + 0x2a8))(plVar8,param_1,param_2,puVar1);
        }
        lVar19 = lVar19 + 8;
      } while ((longlong)iVar18 * 8 != lVar19);
    }
  }
  return param_1 + 0x168;
}



// FUNCTION 1498676ee FUN_1498676ee body=420 status=ok
// SIG undefined FUN_1498676ee(void)

void FUN_1498676ee(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(char *)(param_1 + 0x139) == '\x01') && (*(longlong *)(param_1 + 0x148) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x148) + 0x60) == '\x01')) {
    plVar1 = (longlong *)(param_1 + 0x170);
    FUN_140e4869c(param_2,plVar1);
    local_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x148) + 0x390);
    if (lVar10 != 0) {
      plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x148) + 0x388);
      plVar2 = plVar11 + lVar10;
      do {
        lVar10 = *plVar11;
        if (lVar10 != 0) {
          lVar8 = FUN_145bb1c3c();
          if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
             ((*(char *)(lVar10 + 0x28) == '\x01' &&
              (iVar4 = *(int *)(lVar10 + 0x38), (longlong)iVar4 != 0)))) {
            lVar10 = *(longlong *)(lVar10 + 0x30);
            lVar8 = 0;
            do {
              iVar6 = FUN_14988d44c(plVar1,*(undefined8 *)(lVar10 + lVar8));
              uVar5 = uStack_80;
              if ((iVar6 != -1) && (lVar9 = (longlong)iVar6 * 0x10 + *plVar1, lVar9 != 0)) {
                uVar3 = *(undefined4 *)(lVar9 + 8);
                lVar9 = (longlong)(int)uStack_80;
                uVar7 = (int)uStack_80 + 1;
                uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
                if (uStack_80._4_4_ < uVar7) {
                  FUN_1406de67a(&local_88,uVar5 & 0xffffffff);
                }
                lVar9 = lVar9 * 0x10;
                *(undefined8 *)(local_88 + lVar9) = *(undefined8 *)(lVar10 + 8 + lVar8);
                *(undefined4 *)(local_88 + 8 + lVar9) = uVar3;
                *(undefined1 *)(local_88 + 0xc + lVar9) = 0;
                local_78 = 0;
              }
              lVar8 = lVar8 + 0x10;
            } while ((longlong)iVar4 << 4 != lVar8);
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar2);
    }
    FUN_1449802a2(param_2,&local_88);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149867894 FUN_149867894 body=722 status=ok
// SIG undefined FUN_149867894(void)

void FUN_149867894(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
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
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (*(longlong *)(param_1 + 0x148) == 0) {
      uVar6 = FUN_144a49ec8(param_2);
      lVar7 = FUN_149867b68(uVar6);
      if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar7);
      }
      *(longlong *)(param_1 + 0x148) = lVar7;
    }
    lVar7 = FUN_144966fba(param_2);
    if (lVar7 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar7);
    }
    local_98 = lVar7;
    if ((lVar7 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar7);
    }
    cVar4 = FUN_149867bfe(param_1,&local_98);
    if ((cVar4 != '\0') && (FUN_149867ef2(param_1,lVar7), *(char *)(param_1 + 0x139) == '\x01')) {
      uVar6 = FUN_14479d2ce(param_1 + 0x18);
      lVar7 = FUN_144a7a45a(uVar6);
      if (lVar7 == 0) {
        if (*(int *)(param_1 + 0x17c) < 0) {
          *(undefined4 *)(param_1 + 0x178) = 0;
          FUN_140507fc4(param_1 + 0x170,0);
        }
        else {
          *(undefined4 *)(param_1 + 0x178) = 0;
        }
        *(undefined1 *)(param_1 + 0x180) = 0;
        uVar6 = local_78;
      }
      else {
        plVar8 = (longlong *)FUN_1478f6c60(lVar7,0);
        plVar2 = (longlong *)(param_1 + 0x170);
        *(undefined4 *)(param_1 + 0x178) = 0;
        if (*(int *)(param_1 + 0x17c) < 0) {
          FUN_140507fc4(plVar2,0);
        }
        *(undefined1 *)(param_1 + 0x180) = 0;
        iVar9 = (int)plVar8[1] - *(int *)((longlong)plVar8 + 0x34);
        if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar9);
        }
        if (*(int *)(param_1 + 0x17c) < iVar9) {
          FUN_140507fc4(plVar2);
        }
        plVar1 = plVar8 + 2;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        local_50 = 0;
        iVar9 = 0;
        local_60 = plVar1;
        if ((int)plVar8[5] != 0) {
          FUN_1449c0562(&local_68);
          iVar9 = (int)plVar8[5];
        }
        local_78 = local_58;
        uVar6 = local_78;
        local_70 = local_50;
        local_6c = local_4c;
        local_88 = local_68;
        local_80 = local_60;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        local_90 = plVar8;
        if ((local_78._4_4_ != iVar9) || (local_60 != plVar1)) {
          iVar5 = local_78._4_4_;
          local_78 = uVar6;
          do {
            puVar10 = (undefined8 *)((longlong)iVar5 * 0x14 + *local_90);
            iVar5 = *(int *)(param_1 + 0x178);
            *(uint *)(param_1 + 0x178) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x17c) < iVar5 + 1U) {
              FUN_14571eb8e(plVar2,iVar5);
            }
            lVar7 = *plVar2;
            lVar11 = (longlong)iVar5 * 0x10;
            uVar3 = *(undefined4 *)(puVar10 + 1);
            *(undefined8 *)(lVar7 + lVar11) = *puVar10;
            *(undefined4 *)(lVar7 + 8 + lVar11) = uVar3;
            *(undefined1 *)(lVar7 + 0xc + lVar11) = 0;
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
            FUN_1449c0562(&local_88);
            iVar5 = local_78._4_4_;
            uVar6 = local_78;
          } while (local_90 != plVar8 || (local_80 != plVar1 || local_78._4_4_ != iVar9));
        }
      }
      local_78 = uVar6;
      FUN_149868068(param_1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149867b68 FUN_149867b68 body=148 status=ok
// SIG undefined FUN_149867b68(void)

undefined8 FUN_149867b68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459d9c5a();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149867bfe FUN_149867bfe body=755 status=ok
// SIG undefined FUN_149867bfe(void)

undefined8 FUN_149867bfe(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined1 local_140 [4];
  undefined8 local_13c;
  undefined1 local_134;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  longlong local_e0;
  undefined4 local_d8;
  undefined1 local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar4 = param_1 + 0x18;
    cVar1 = FUN_144729dda(lVar4);
    if ((cVar1 == '\0') && (*(char *)(param_1 + 0x20) == '\x01')) {
      for (lVar5 = *(longlong *)(*param_2 + 0x120); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x120)
          ) {
        lVar2 = FUN_144a74fb4();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          FUN_14485c47a(lVar4,lVar5);
          break;
        }
      }
    }
    cVar1 = FUN_144729dda(lVar4);
    if (cVar1 != '\0') {
      uVar3 = FUN_14479d2ce(lVar4);
      lVar4 = FUN_144a81888(uVar3);
      if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar4);
      }
      lVar5 = FUN_144a81888(*param_2);
      if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar5);
      }
      if (lVar5 != 0 && lVar4 != 0) {
        local_148 = *(longlong *)(param_1 + 0x28);
        uVar3 = *(undefined8 *)(param_1 + 0x148);
        if ((local_148 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        local_150 = lVar5;
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(lVar5);
        }
        local_158 = lVar4;
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(lVar4);
        }
        cVar1 = FUN_14986733c(uVar3,&local_158,&local_150,&local_148);
        if (cVar1 == '\0') {
          local_140[0] = 0;
          local_100 = 0;
          local_f8 = 0;
          local_13c = 0;
          local_134 = 0;
          local_130 = 0;
          local_128 = 0;
          local_120 = 0;
          uStack_118 = 0;
          local_f4 = 0xffffffff00000080;
          local_ec = 0;
          local_e0 = 0;
          local_d8 = 0;
          local_d0 = 0;
          local_c8 = &DAT_3f8000003f800000;
          local_c0 = 0;
          local_b8 = DAT_14c846510;
          uStack_b0 = DAT_14c846518;
          local_a8 = DAT_14c846520;
          local_a0 = &DAT_3f8000003f800000;
          local_98 = DAT_14c8464e0;
          uStack_90 = DAT_14c8464e8;
          local_88 = DAT_14c8464f0;
          local_80 = DAT_14c8464f8;
          uStack_78 = DAT_14c846500;
          local_70 = DAT_14c846508;
          local_68 = 0x3f800000;
          local_60 = 0;
          local_5c = 0x1010101;
          local_58 = 0;
          local_54 = 0x100000000;
          uStack_4c = 0;
          local_44 = 0x3f800000;
          local_3c = 0x3f800000;
          FUN_149868e54(*(undefined8 *)(param_1 + 0x28),local_140);
          FUN_149868f9e(local_140,param_1 + 0x30);
          local_168 = local_140;
          FUN_149868168(*(undefined8 *)(param_1 + 0x148),lVar4,lVar5,*(undefined8 *)(param_1 + 0x28)
                       );
          local_d8 = 0;
          if (local_e0 != 0) {
            FUN_1400020a8();
          }
          FUN_14988a0a6(&local_120);
        }
        uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x148) >> 8),
                         *(undefined1 *)(*(longlong *)(param_1 + 0x148) + 0x60));
        goto LAB_149867ce2;
      }
    }
  }
  uVar3 = 0;
LAB_149867ce2:
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149867ef2 FUN_149867ef2 body=372 status=ok
// SIG undefined FUN_149867ef2(void)

void FUN_149867ef2(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char cVar10;
  longlong lVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149868ccc(param_1,&local_50);
  if ((local_50 != 0) && ((*(byte *)(local_50 + 0x9c) & 1) != 0)) {
    cVar10 = FUN_144b22262(local_50);
    if ((cVar10 != '\0') && (*(longlong *)(local_50 + 0x9c0) != 0)) {
      FUN_14479d2ce(param_1 + 0x18);
    }
    FUN_143491ba8(local_50);
    *(undefined4 *)(param_1 + 0x158) = 0;
    if (*(int *)(param_1 + 0x15c) < 0) {
      FUN_1401a2688(param_1 + 0x150,0);
    }
    FUN_1406f47cc(param_1 + 0x150);
    uVar9 = DAT_14c846520;
    uVar8 = DAT_14c846518._4_4_;
    uVar7 = (undefined4)DAT_14c846518;
    uVar6 = DAT_14c846510._4_4_;
    uVar5 = (undefined4)DAT_14c846510;
    iVar3 = *(int *)(param_1 + 0x158);
    if ((longlong)iVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x150);
      lVar11 = 0;
      do {
        puVar1 = (undefined4 *)(lVar4 + 0x40 + lVar11);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        puVar1[2] = uVar7;
        puVar1[3] = uVar8;
        puVar2 = (undefined8 *)(lVar4 + 0x50 + lVar11);
        *puVar2 = uVar9;
        puVar2[1] = 0;
        lVar11 = lVar11 + 0x60;
      } while ((longlong)iVar3 * 0x60 != lVar11);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149868068 FUN_149868068 body=254 status=ok
// SIG undefined FUN_149868068(void)

void FUN_149868068(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  longlong local_68;
  longlong *local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145bd9614(param_1 + 400);
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x98), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(lVar2 + 0x90);
    lVar5 = 0;
    do {
      local_68 = *(longlong *)(*(longlong *)(lVar2 + lVar5) + 0xd4);
      if (((local_68 != 0) && (iVar3 = FUN_14988d44c((longlong *)(param_1 + 0x170)), iVar3 != -1))
         && (lVar4 = (longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x170), lVar4 != 0)) {
        local_6c = *(undefined4 *)(lVar4 + 8);
        local_60 = &local_68;
        local_58 = &local_6c;
        FUN_144a405ac(param_1 + 400,local_4c,&local_60,0);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149868168 FUN_149868168 body=2915 status=ok
// SIG undefined FUN_149868168(void)

void FUN_149868168(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  longlong *local_180 [2];
  longlong *local_170 [2];
  undefined8 local_160;
  longlong *local_158;
  longlong *local_150 [2];
  longlong *local_140 [2];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  longlong *local_128 [2];
  undefined8 local_118;
  longlong *local_110;
  longlong local_108 [2];
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((((*(longlong *)(param_1 + 0x70) != param_4) ||
       (*(int *)(param_1 + 100) != *(int *)(param_4 + 0x28))) ||
      (*(longlong *)(param_1 + 0x140) != param_3)) || (*(longlong *)(param_1 + 200) != param_2)) {
    *(undefined1 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x6a) = 0;
    *(longlong *)(param_1 + 0x70) = param_4;
    lVar7 = FUN_14986bc2a(param_4,0);
    lVar8 = FUN_14986bc2a(*(undefined8 *)(param_1 + 0x70),1);
    if (lVar7 == 0) {
      local_88 = L"MissingSourceIKRig";
      local_80[0] = 0x12;
      FUN_1446e940c(&local_98,&local_88);
      local_88 = L"IKRetargetProcessor";
      local_80[0] = 0x13;
      FUN_1446e940c(&local_a8,&local_88);
      pwVar9 = L"IK Retargeter unable to initialize. Missing source IK Rig asset.";
    }
    else {
      if (lVar8 != 0) {
        local_198 = param_1 + 0xf0;
        uVar2 = *(undefined8 *)(lVar7 + 0xe8);
        lVar3 = *(longlong *)(param_1 + 0x70);
        local_88 = (wchar_t *)((ulonglong)local_88 & 0xffffffffffffff00);
        local_1a0 = lVar8;
        local_1b8 = FUN_14986c198(lVar3);
        lVar8 = local_1a0;
        local_1b0 = uVar2;
        FUN_14986c484(param_1 + 0x78,param_2,lVar7 + 0xf0,*(undefined8 *)(lVar3 + 0x1b0));
        uVar2 = *(undefined8 *)(lVar8 + 0xe8);
        lVar7 = *(longlong *)(param_1 + 0x70);
        local_88 = (wchar_t *)CONCAT71(local_88._1_7_,1);
        local_1b8 = FUN_14986c198(lVar7,&local_88);
        local_1b0 = uVar2;
        FUN_14986dd36(local_198,param_3,lVar8 + 0xf0,*(undefined8 *)(lVar7 + 0x1b8));
        uVar5 = FUN_149876812(param_1);
        *(undefined1 *)(param_1 + 0x68) = uVar5;
        cVar6 = FUN_149876db2(param_1,param_5 + 0x20);
        *(char *)(param_1 + 0x69) = cVar6;
        if (cVar6 == '\0') {
          local_88 = *(wchar_t **)(param_3 + 0x18);
          FUN_1400021e4(&local_88,local_e8);
          FUN_140233b1a(local_d8,local_e8);
          local_88 = *(wchar_t **)(param_2 + 0x18);
          FUN_1400021e4(&local_88,local_108);
          FUN_140233b1a(local_f8,local_108);
          local_88 = L"NoMappedChains";
          local_80[0] = 0xe;
          FUN_1446e940c(local_12c,&local_88);
          local_88 = L"IKRetargetProcessor";
          local_80[0] = 0x13;
          FUN_1446e940c(local_130,&local_88);
          FUN_140208bae(local_128,local_130,local_12c,
                        L"IK Retargeter unable to map any bone chains between source, {0} and target, {1}"
                       );
          FUN_14023409e(&local_118,local_128,1);
          local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
          FUN_14023423e(local_78,local_f8);
          local_68 = 4;
          FUN_14023423e(local_58,local_d8);
          local_a0 = &local_48;
          local_a8 = &local_88;
          FUN_14010d304(&local_98);
          local_b8 = local_118;
          local_b0 = local_110;
          if (local_110 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_110 + 1) = (int)local_110[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_c8,&local_b8,&local_98);
          FUN_14007f2db(local_98,local_90);
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          lVar8 = local_1a0;
          lVar7 = 0x30;
          do {
            plVar4 = *(longlong **)((longlong)local_80 + lVar7 + -8);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))();
              *(undefined8 *)((longlong)local_80 + lVar7 + -8) = 0;
              *(undefined4 *)((longlong)local_80 + lVar7) = 0;
            }
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != -0x10);
          if (local_110 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_110 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_110)(local_110);
              LOCK();
              piVar1 = (int *)((longlong)local_110 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_110 + 0x10))(local_110);
              }
            }
          }
          if (local_f8[0] != (longlong *)0x0) {
            (**(code **)(*local_f8[0] + 0x10))();
          }
          if (local_d8[0] != (longlong *)0x0) {
            (**(code **)(*local_d8[0] + 0x10))();
          }
          FUN_14986922e(param_1 + 0x28,local_c8);
          if (local_c8[0] != (longlong *)0x0) {
            (**(code **)(*local_c8[0] + 0x10))();
          }
          if (local_128[0] != (longlong *)0x0) {
            (**(code **)(*local_128[0] + 0x10))();
          }
          if (local_108[0] != 0) {
            FUN_1400020a8();
          }
          if (local_e8[0] != 0) {
            FUN_1400020a8();
          }
        }
        cVar6 = FUN_149878d18(param_1,param_1,param_3);
        *(char *)(param_1 + 0x6a) = cVar6;
        if (cVar6 == '\0') {
          local_88 = *(wchar_t **)(param_3 + 0x18);
          FUN_1400021e4(&local_88,local_e8);
          FUN_140233b1a(local_140,local_e8);
          local_88 = *(wchar_t **)(lVar8 + 0x18);
          FUN_1400021e4(&local_88,local_108);
          FUN_140233b1a(local_150,local_108);
          local_88 = L"CouldNotInitializeIKRig";
          local_80[0] = 0x17;
          FUN_1446e940c(local_12c,&local_88);
          local_88 = L"IKRetargetProcessor";
          local_80[0] = 0x13;
          FUN_1446e940c(local_130,&local_88);
          FUN_140208bae(local_128,local_130,local_12c,
                        L"IK Retargeter was unable to initialize the IK Rig, {0} for the Skeletal Mesh {1}. See previous warnings."
                       );
          FUN_14023409e(&local_160,local_128,1);
          local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
          FUN_14023423e(local_78,local_150);
          local_68 = 4;
          FUN_14023423e(local_58,local_140);
          local_a0 = &local_48;
          local_a8 = &local_88;
          FUN_14010d304(&local_98);
          local_b8 = local_160;
          local_b0 = local_158;
          if (local_158 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_158 + 1) = (int)local_158[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_c8,&local_b8,&local_98);
          FUN_14007f2db(local_98,local_90);
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          lVar7 = 0x30;
          do {
            plVar4 = *(longlong **)((longlong)local_80 + lVar7 + -8);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))();
              *(undefined8 *)((longlong)local_80 + lVar7 + -8) = 0;
              *(undefined4 *)((longlong)local_80 + lVar7) = 0;
            }
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != -0x10);
          if (local_158 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_158 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_158)(local_158);
              LOCK();
              piVar1 = (int *)((longlong)local_158 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_158 + 0x10))(local_158);
              }
            }
          }
          if (local_150[0] != (longlong *)0x0) {
            (**(code **)(*local_150[0] + 0x10))();
          }
          if (local_140[0] != (longlong *)0x0) {
            (**(code **)(*local_140[0] + 0x10))();
          }
          FUN_14986922e(param_1 + 0x28,local_c8);
          if (local_c8[0] != (longlong *)0x0) {
            (**(code **)(*local_c8[0] + 0x10))();
          }
          if (local_128[0] != (longlong *)0x0) {
            (**(code **)(*local_128[0] + 0x10))();
          }
          if (local_108[0] != 0) {
            FUN_1400020a8();
          }
          if (local_e8[0] != 0) {
            FUN_1400020a8();
          }
        }
        cVar6 = FUN_14987942a(param_1,*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xb0) + 0x28);
        if (cVar6 == '\0') {
          local_88 = L"PostOperationInitError";
          local_80[0] = 0x16;
          FUN_1446e940c(&local_98,&local_88);
          local_88 = L"IKRetargetProcessor";
          local_80[0] = 0x13;
          FUN_1446e940c(&local_a8,&local_88);
          FUN_140208bae(&local_88,&local_a8,&local_98,
                        L"One of the retarget post operations has warnings. See output log for details."
                       );
          FUN_14986922e(param_1 + 0x28,&local_88);
          if (local_88 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_88 + 0x10))();
          }
        }
        if ((*(char *)(param_1 + 0x68) == '\x01') && (*(char *)(param_1 + 0x69) == '\x01')) {
          local_88 = *(wchar_t **)(param_3 + 0x18);
          FUN_1400021e4(&local_88,local_e8);
          FUN_140233b1a(local_170,local_e8);
          local_88 = *(wchar_t **)(param_2 + 0x18);
          FUN_1400021e4(&local_88,local_108);
          FUN_140233b1a(local_180,local_108);
          local_88 = L"SuccessfulInit";
          local_80[0] = 0xe;
          FUN_1446e940c(local_12c,&local_88);
          local_88 = L"IKRetargetProcessor";
          local_80[0] = 0x13;
          FUN_1446e940c(local_130,&local_88);
          FUN_140208bae(local_128,local_130,local_12c,
                        L"Success! The IK Retargeter is ready to transfer animation from the source, {0} to the target, {1}"
                       );
          FUN_14023409e(&local_190,local_128,1);
          local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
          FUN_14023423e(local_78,local_180);
          local_68 = 4;
          FUN_14023423e(local_58,local_170);
          local_a0 = &local_48;
          local_a8 = &local_88;
          FUN_14010d304(&local_98);
          local_b8 = local_190;
          local_b0 = local_188;
          if (local_188 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_188 + 1) = (int)local_188[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_c8,&local_b8,&local_98);
          FUN_14007f2db(local_98,local_90);
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          lVar7 = 0x30;
          do {
            plVar4 = *(longlong **)((longlong)local_80 + lVar7 + -8);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))();
              *(undefined8 *)((longlong)local_80 + lVar7 + -8) = 0;
              *(undefined4 *)((longlong)local_80 + lVar7) = 0;
            }
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != -0x10);
          if (local_188 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_188 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_188)(local_188);
              LOCK();
              piVar1 = (int *)((longlong)local_188 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_188 + 0x10))(local_188);
              }
            }
          }
          if (local_180[0] != (longlong *)0x0) {
            (**(code **)(*local_180[0] + 0x10))();
          }
          if (local_170[0] != (longlong *)0x0) {
            (**(code **)(*local_170[0] + 0x10))();
          }
          FUN_14986930a(param_1 + 0x28,local_c8);
          if (local_c8[0] != (longlong *)0x0) {
            (**(code **)(*local_c8[0] + 0x10))();
          }
          if (local_128[0] != (longlong *)0x0) {
            (**(code **)(*local_128[0] + 0x10))();
          }
          if (local_108[0] != 0) {
            FUN_1400020a8();
          }
          if (local_e8[0] != 0) {
            FUN_1400020a8();
          }
        }
        uVar5 = 1;
        lVar7 = FUN_14986bc2a(*(undefined8 *)(param_1 + 0x70),1);
        if (lVar7 != 0) {
          FUN_14987ad3c(*(undefined8 *)(param_1 + 0x188),lVar7);
        }
        if (*(char *)(param_1 + 0x68) == '\0') {
          uVar5 = *(undefined1 *)(param_1 + 0x69);
        }
        *(undefined1 *)(param_1 + 0x60) = uVar5;
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x28);
        goto LAB_1498681b7;
      }
      local_88 = L"MissingTargetIKRig";
      local_80[0] = 0x12;
      FUN_1446e940c(&local_98,&local_88);
      local_88 = L"IKRetargetProcessor";
      local_80[0] = 0x13;
      FUN_1446e940c(&local_a8,&local_88);
      pwVar9 = L"IK Retargeter unable to initialize. Missing target IK Rig asset.";
    }
    FUN_140208bae(&local_88,&local_a8,&local_98,pwVar9);
    FUN_149869152(param_1 + 0x28,&local_88);
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
  }
LAB_1498681b7:
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149868ccc FUN_149868ccc body=152 status=ok
// SIG undefined FUN_149868ccc(void)

longlong * FUN_149868ccc(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_1 = param_1 + 0x18;
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1);
    lVar2 = FUN_14479d2ce(lVar2 + 0x668);
    if (lVar2 != 0) {
      lVar3 = FUN_144a74fb4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        *param_2 = lVar2;
        goto joined_r0x000149868d3c;
      }
    }
  }
  lVar2 = FUN_14479d2ce(param_1);
  *param_2 = lVar2;
  if (lVar2 == 0) {
    return param_2;
  }
joined_r0x000149868d3c:
  if (DAT_14c950c29 != '\0') {
    FUN_1456cec3c(lVar2);
  }
  return param_2;
}



// FUNCTION 149868d64 FUN_149868d64 body=240 status=ok
// SIG undefined FUN_149868d64(void)

void FUN_149868d64(undefined1 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x70] = 0;
  *(undefined1 **)(param_1 + 0x78) = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x80) = 0;
  uVar1 = DAT_14c846518;
  *(undefined8 *)(param_1 + 0x88) = DAT_14c846510;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = DAT_14c846520;
  *(undefined1 **)(param_1 + 0xa0) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_1 + 0xb8) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0xa8) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  uVar1 = DAT_14c846500;
  *(undefined8 *)(param_1 + 0xc0) = DAT_14c8464f8;
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = DAT_14c846508;
  *(undefined8 *)(param_1 + 0xd8) = 0x3f800000;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x1010101;
  param_1[0xe8] = 0;
  *(undefined8 *)(param_1 + 0xec) = 0x100000000;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  return;
}



// FUNCTION 149868e54 FUN_149868e54 body=301 status=ok
// SIG undefined FUN_149868e54(void)

void FUN_149868e54(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 1;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x1b8);
  param_2[0xc] = 1;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x1b0);
  param_2[0x18] = 1;
  iVar1 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar1 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x90);
    lVar10 = 0;
    do {
      local_60 = *(longlong *)(lVar9 + lVar10);
      local_58 = local_60 + 0x38;
      local_60 = local_60 + 0x30;
      FUN_14988c57c(param_2 + 0x20,local_4c,&local_60);
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
  param_2[0x70] = 1;
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x28);
  puVar12 = (undefined8 *)(param_2 + 0x78);
  for (lVar9 = 0xd; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  param_2[0xe0] = 1;
  lVar9 = *(longlong *)(param_1 + 0xa8);
  *(undefined4 *)(param_2 + 0x104) = *(undefined4 *)(lVar9 + 0x48);
  uVar2 = *(undefined4 *)(lVar9 + 0x28);
  uVar3 = *(undefined4 *)(lVar9 + 0x2c);
  uVar4 = *(undefined4 *)(lVar9 + 0x30);
  uVar5 = *(undefined4 *)(lVar9 + 0x34);
  uVar6 = *(undefined4 *)(lVar9 + 0x3c);
  uVar7 = *(undefined4 *)(lVar9 + 0x40);
  uVar8 = *(undefined4 *)(lVar9 + 0x44);
  *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(lVar9 + 0x38);
  *(undefined4 *)(param_2 + 0xf8) = uVar6;
  *(undefined4 *)(param_2 + 0xfc) = uVar7;
  *(undefined4 *)(param_2 + 0x100) = uVar8;
  *(undefined4 *)(param_2 + 0xe4) = uVar2;
  *(undefined4 *)(param_2 + 0xe8) = uVar3;
  *(undefined4 *)(param_2 + 0xec) = uVar4;
  *(undefined4 *)(param_2 + 0xf0) = uVar5;
  lVar9 = FUN_14986c3d4(param_1,param_1 + 0x108);
  if (lVar9 == 0) {
    if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 149868f9e FUN_149868f9e body=431 status=ok
// SIG undefined FUN_149868f9e(void)

void FUN_149868f9e(longlong param_1,char *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_2 == '\x01') {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  }
  if (param_2[0xc] == '\x01') {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  }
  uVar6 = local_80;
  if (param_2[0x18] == '\x01') {
    plVar1 = (longlong *)(param_2 + 0x20);
    pcVar10 = param_2 + 0x30;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    uStack_58 = 0;
    uStack_68 = pcVar10;
    if (*(int *)(param_2 + 0x48) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      iVar9 = *(int *)(param_2 + 0x48);
    }
    uStack_78 = CONCAT44(uStack_54,uStack_58);
    local_80 = local_60;
    uVar6 = local_80;
    local_90 = (undefined4)local_70;
    uStack_8c = local_70._4_4_;
    uStack_88 = (undefined4)uStack_68;
    uStack_84 = uStack_68._4_4_;
    local_80._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_98 = plVar1;
    if ((local_80._4_4_ != iVar9) || (uStack_68 != pcVar10)) {
      iVar7 = local_80._4_4_;
      local_80 = uVar6;
      do {
        local_70 = *local_98 + (longlong)iVar7 * 0xc0;
        uStack_68 = (char *)((longlong)iVar7 * 0xc0 + *local_98 + 8);
        FUN_14988c57c(param_1 + 0x20,local_4c,&local_70);
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
        FUN_1449c0562(&local_90);
        iVar7 = local_80._4_4_;
        uVar6 = local_80;
      } while (local_98 != plVar1 ||
               ((char *)CONCAT44(uStack_84,uStack_88) != pcVar10 || local_80._4_4_ != iVar9));
    }
  }
  local_80 = uVar6;
  if (param_2[0x70] == '\x01') {
    pcVar10 = param_2 + 0x78;
    puVar11 = (undefined8 *)(param_1 + 0x78);
    for (lVar8 = 0xd; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar11 = *(undefined8 *)pcVar10;
      pcVar10 = pcVar10 + 8;
      puVar11 = puVar11 + 1;
    }
  }
  if (param_2[0xe0] == '\x01') {
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
    uVar2 = *(undefined4 *)(param_2 + 0xe4);
    uVar3 = *(undefined4 *)(param_2 + 0xe8);
    uVar4 = *(undefined4 *)(param_2 + 0xec);
    uVar5 = *(undefined4 *)(param_2 + 0xf0);
    uVar6 = *(undefined8 *)(param_2 + 0xfc);
    *(undefined8 *)(param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
    *(undefined8 *)(param_1 + 0xfc) = uVar6;
    *(undefined4 *)(param_1 + 0xe4) = uVar2;
    *(undefined4 *)(param_1 + 0xe8) = uVar3;
    *(undefined4 *)(param_1 + 0xec) = uVar4;
    *(undefined4 *)(param_1 + 0xf0) = uVar5;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149869152 FUN_149869152 body=219 status=ok
// SIG undefined FUN_149869152(void)

void FUN_149869152(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [48];
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14276766e(local_68,param_1);
  uVar5 = FUN_1467e9994(local_68,1);
  FUN_142767974(uVar5,local_38,param_2);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  FUN_1427678c0(local_68);
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_14001d63e((longlong *)(param_1 + 8),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  plVar4 = (longlong *)*param_2;
  *(longlong **)(lVar3 + (longlong)iVar2 * 0x10) = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(int *)(lVar3 + (longlong)iVar2 * 0x10 + 8) = (int)param_2[1];
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986922e FUN_14986922e body=219 status=ok
// SIG undefined FUN_14986922e(void)

void FUN_14986922e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [48];
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14276766e(local_68,param_1);
  uVar5 = FUN_1467e9994(local_68,1);
  FUN_1427679d4(uVar5,local_38,param_2);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  FUN_1427678c0(local_68);
  iVar2 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
    FUN_14001d63e((longlong *)(param_1 + 0x18),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  plVar4 = (longlong *)*param_2;
  *(longlong **)(lVar3 + (longlong)iVar2 * 0x10) = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(int *)(lVar3 + (longlong)iVar2 * 0x10 + 8) = (int)param_2[1];
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986930a FUN_14986930a body=219 status=ok
// SIG undefined FUN_14986930a(void)

void FUN_14986930a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [48];
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14276766e(local_68,param_1);
  uVar5 = FUN_1467e9994(local_68,1);
  FUN_142767a34(uVar5,local_38,param_2);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  FUN_1427678c0(local_68);
  iVar2 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
    FUN_14001d63e((longlong *)(param_1 + 0x28),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  plVar4 = (longlong *)*param_2;
  *(longlong **)(lVar3 + (longlong)iVar2 * 0x10) = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(int *)(lVar3 + (longlong)iVar2 * 0x10 + 8) = (int)param_2[1];
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498693ea FUN_1498693ea body=99 status=ok
// SIG undefined FUN_1498693ea(void)

void FUN_1498693ea(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14bebede4);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986944e FUN_14986944e body=41 status=ok
// SIG undefined FUN_14986944e(void)

void FUN_14986944e(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_21();
                    /* WARNING: Could not recover jumptable at 0x000149869474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bebede4);
  return;
}



// FUNCTION 14986947c FUN_14986947c body=99 status=ok
// SIG undefined FUN_14986947c(void)

void FUN_14986947c(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14bebede4);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498694e0 FUN_1498694e0 body=41 status=ok
// SIG undefined FUN_1498694e0(void)

void FUN_1498694e0(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_21();
                    /* WARNING: Could not recover jumptable at 0x000149869506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bebede4);
  return;
}



// FUNCTION 14986950e FUN_14986950e body=378 status=ok
// SIG undefined FUN_14986950e(void)

void FUN_14986950e(undefined8 param_1,longlong param_2,void *param_3)

{
  undefined1 auStack_108 [40];
  undefined1 local_e0 [176];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14986968a(local_e0,local_20,local_28,local_30);
  memcpy(param_3,local_e0,0xb0);
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986968a FUN_14986968a body=771 status=ok
// SIG undefined FUN_14986968a(void)

undefined2 * FUN_14986968a(undefined2 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  void *_Src;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = DAT_14c846510;
  uStack_40 = DAT_14c846518;
  local_38 = DAT_14c846520;
  local_68 = DAT_14c8464e0;
  uStack_60 = DAT_14c8464e8;
  local_58 = DAT_14c8464f0;
  local_88 = DAT_14c8464e0;
  uStack_80 = DAT_14c8464e8;
  local_78 = DAT_14c8464f0;
  local_a8 = (undefined4)DAT_14c8464f8;
  uStack_a4 = DAT_14c8464f8._4_4_;
  uStack_a0 = (undefined4)DAT_14c846500;
  uStack_9c = DAT_14c846500._4_4_;
  local_98 = DAT_14c846508;
  local_30 = param_4;
  local_28 = param_3;
  if (param_2 != 0) {
    if (param_4 == 0) {
      FUN_14986c100(param_2,&local_20,&local_28);
      if (local_20 != 0) {
        _Src = (void *)(local_20 + 0x38);
LAB_149869832:
        memcpy(param_1,_Src,0xb0);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_c8);
      }
      *param_1 = 1;
      *(undefined4 *)(param_1 + 2) = 0x3f800000;
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 6) = 0x3f800000;
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined1 *)(param_1 + 0x10) = 1;
      *(undefined4 *)(param_1 + 0x12) = 0;
      *(undefined8 *)(param_1 + 0x1c) = local_38;
      *(undefined8 *)(param_1 + 0x14) = local_48;
      *(undefined8 *)(param_1 + 0x18) = uStack_40;
      *(undefined8 *)(param_1 + 0x28) = local_58;
      *(undefined8 *)(param_1 + 0x20) = local_68;
      *(undefined8 *)(param_1 + 0x24) = uStack_60;
      *(undefined8 *)(param_1 + 0x34) = local_78;
      *(undefined8 *)(param_1 + 0x2c) = local_88;
      *(undefined8 *)(param_1 + 0x30) = uStack_80;
      *(undefined8 *)(param_1 + 0x40) = local_98;
      uVar7 = local_a8;
      uVar8 = uStack_a4;
      uVar9 = uStack_a0;
      uVar10 = uStack_9c;
      goto LAB_149869798;
    }
    lVar3 = FUN_14986c3d4(param_2,&local_30);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x28) != *(int *)(lVar3 + 0x54))) {
      uVar1 = (uint)((ulonglong)param_3 >> 0x10);
      uVar6 = (uint)param_3 & 0xffff;
      lVar5 = lVar3 + 0x58;
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        lVar5 = *(longlong *)(lVar3 + 0x60);
      }
      iVar4 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(lVar3 + 0x68) - 1U &
                               (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          lVar5 = *(longlong *)(lVar3 + 0x20) + (longlong)iVar4 * 0xc0;
          if (*(longlong *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar4 * 0xc0) == param_3) {
            _Src = (void *)(lVar5 + 8);
            if (_Src != (void *)0x0 && lVar5 != 0) goto LAB_149869832;
            break;
          }
          iVar4 = *(int *)(lVar5 + 0xb8);
        } while (iVar4 != -1);
      }
    }
  }
  *param_1 = 1;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0x3f800000;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x1c) = DAT_14c846520;
  uVar2 = DAT_14c846518;
  *(undefined8 *)(param_1 + 0x14) = DAT_14c846510;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x20) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x24) = uVar2;
  *(undefined8 *)(param_1 + 0x34) = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x2c) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = DAT_14c846508;
  uVar7 = (undefined4)DAT_14c8464f8;
  uVar8 = DAT_14c8464f8._4_4_;
  uVar9 = (undefined4)DAT_14c846500;
  uVar10 = DAT_14c846500._4_4_;
LAB_149869798:
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  *(undefined4 *)(param_1 + 0x3a) = uVar8;
  *(undefined4 *)(param_1 + 0x3c) = uVar9;
  *(undefined4 *)(param_1 + 0x3e) = uVar10;
  *(undefined1 **)(param_1 + 0x44) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0x437a000041700000;
  *(undefined4 *)(param_1 + 0x56) = 0x3f800000;
  if ((local_18 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149869990 FUN_149869990 body=646 status=ok
// SIG undefined FUN_149869990(void)

void FUN_149869990(undefined8 param_1,longlong param_2,void *param_3)

{
  longlong lVar1;
  uint uVar2;
  void *_Src;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130 [4];
  undefined8 local_12c;
  undefined1 local_124;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  longlong local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_130[0] = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_12c = 0;
  local_124 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = &DAT_3f8000003f800000;
  local_b0 = 0;
  local_a8 = DAT_14c846510;
  uStack_a0 = DAT_14c846518;
  local_98 = DAT_14c846520;
  local_90 = &DAT_3f8000003f800000;
  local_78 = DAT_14c8464f0;
  local_88 = DAT_14c8464e0;
  uStack_80 = DAT_14c8464e8;
  local_60 = DAT_14c846508;
  local_70 = DAT_14c8464f8;
  uStack_68 = DAT_14c846500;
  local_58 = 0x3f800000;
  local_50 = 0;
  local_4c = 0x1010101;
  local_48 = 0;
  local_44 = 0x100000000;
  uStack_3c = 0;
  local_34 = 0x3f800000;
  local_2c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_130);
  }
  lVar1 = *(longlong *)(param_2 + 0x38);
  local_140 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_140);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_140);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = (undefined8 *)(lVar1 + 0x20);
  if (lVar1 == 0) {
    puVar3 = &local_110;
  }
  local_138 = local_140;
  uVar2 = (uint)((ulonglong)local_140 >> 0x10);
  uVar4 = (uint)local_140 & 0xffff;
  _Src = (void *)FUN_14988d71e(puVar3,((uint)local_140 << 0x10 | uVar4) +
                                      (int)((ulonglong)local_140 >> 0x20) +
                                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4));
  memmove(param_3,_Src,0xb0);
  local_c8 = 0;
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_14988a0a6(&local_110);
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149869c18 FUN_149869c18 body=290 status=ok
// SIG undefined FUN_149869c18(void)

void FUN_149869c18(undefined8 param_1,longlong param_2,void *param_3)

{
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [176];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149869d3c(local_d8,local_20,local_28);
  memcpy(param_3,local_d8,0xb0);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149869d3c FUN_149869d3c body=400 status=ok
// SIG undefined FUN_149869d3c(void)

void * FUN_149869d3c(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *_Src;
  longlong lVar3;
  undefined1 auStack_108 [40];
  undefined2 local_e0 [2];
  undefined4 local_dc;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined1 local_cc;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined1 *local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  _Src = local_e0;
  local_e0[0] = 1;
  local_dc = 0x3f800000;
  local_d8 = 0;
  local_d4 = 0x3f800000;
  local_cc = 0;
  local_c8 = 0;
  local_c0 = 1;
  local_bc = 0;
  local_b8 = DAT_14c846510;
  uStack_b0 = DAT_14c846518;
  local_a8 = DAT_14c846520;
  local_a0 = DAT_14c8464e0;
  uStack_98 = DAT_14c8464e8;
  local_90 = DAT_14c8464f0;
  local_78 = DAT_14c8464f0;
  local_88 = DAT_14c8464e0;
  uStack_80 = DAT_14c8464e8;
  local_60 = DAT_14c846508;
  local_70 = (undefined4)DAT_14c8464f8;
  uStack_6c = DAT_14c8464f8._4_4_;
  uStack_68 = (undefined4)DAT_14c846500;
  uStack_64 = DAT_14c846500._4_4_;
  local_58 = &DAT_3f8000003f800000;
  local_50 = 1;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0x437a000041700000;
  local_34 = 0x3f800000;
  if (((param_2 != 0) && (lVar1 = FUN_14986bc2a(param_2), lVar1 != 0)) &&
     ((longlong)*(int *)(lVar1 + 0xf8) != 0)) {
    lVar3 = *(longlong *)(lVar1 + 0xf0);
    lVar1 = (longlong)*(int *)(lVar1 + 0xf8) * 0x30;
    do {
      if (*(longlong *)(lVar3 + 0x28) == param_3) {
        if (lVar3 != 0) {
          FUN_14986c100(param_2,&local_30);
          puVar2 = (undefined2 *)(local_30 + 0x38);
          if (local_30 == 0) {
            puVar2 = (undefined2 *)0x0;
          }
          _Src = local_e0;
          if (puVar2 != (undefined2 *)0x0) {
            _Src = puVar2;
          }
        }
        break;
      }
      lVar3 = lVar3 + 0x30;
      lVar1 = lVar1 + -0x30;
    } while (lVar1 != 0);
  }
  memcpy(param_1,_Src,0xb0);
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149869ece FUN_149869ece body=347 status=ok
// SIG undefined FUN_149869ece(void)

void FUN_149869ece(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined1 local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_44 = 0x1010101;
  local_40 = 0;
  local_3c = 0x100000000;
  uStack_34 = 0;
  local_2c = 0x3f800000;
  local_24 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar1 = &local_44;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14986a02a(local_18,local_20,puVar1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986a02a FUN_14986a02a body=201 status=ok
// SIG undefined FUN_14986a02a(void)

void FUN_14986a02a(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if (param_1 != 0) {
    if (param_2 == 0) {
      lVar1 = *(longlong *)(param_1 + 0xa8);
      param_3[8] = *(undefined4 *)(lVar1 + 0x48);
      uVar2 = *(undefined4 *)(lVar1 + 0x28);
      uVar3 = *(undefined4 *)(lVar1 + 0x2c);
      uVar4 = *(undefined4 *)(lVar1 + 0x30);
      uVar5 = *(undefined4 *)(lVar1 + 0x34);
      uVar6 = *(undefined4 *)(lVar1 + 0x38);
      uVar7 = *(undefined4 *)(lVar1 + 0x3c);
      uVar8 = *(undefined4 *)(lVar1 + 0x40);
      uVar9 = *(undefined4 *)(lVar1 + 0x44);
    }
    else {
      lVar1 = FUN_14986c3d4(param_1,&local_18);
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0xe0) != '\x01')) goto LAB_14986a0b1;
      param_3[8] = *(undefined4 *)(lVar1 + 0x104);
      uVar2 = *(undefined4 *)(lVar1 + 0xe4);
      uVar3 = *(undefined4 *)(lVar1 + 0xe8);
      uVar4 = *(undefined4 *)(lVar1 + 0xec);
      uVar5 = *(undefined4 *)(lVar1 + 0xf0);
      uVar6 = *(undefined4 *)(lVar1 + 0xf4);
      uVar7 = *(undefined4 *)(lVar1 + 0xf8);
      uVar8 = *(undefined4 *)(lVar1 + 0xfc);
      uVar9 = *(undefined4 *)(lVar1 + 0x100);
    }
    param_3[4] = uVar6;
    param_3[5] = uVar7;
    param_3[6] = uVar8;
    param_3[7] = uVar9;
    *param_3 = uVar2;
    param_3[1] = uVar3;
    param_3[2] = uVar4;
    param_3[3] = uVar5;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
LAB_14986a0b1:
  *param_3 = 0x1010101;
  *(undefined8 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_3 + 3) = 1;
  param_3[5] = 0;
  *(undefined8 *)(param_3 + 6) = 0x3f800000;
  param_3[8] = 0x3f800000;
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14986a0f4 FUN_14986a0f4 body=471 status=ok
// SIG undefined FUN_14986a0f4(void)

void FUN_14986a0f4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 auStack_158 [40];
  undefined1 local_130 [4];
  undefined8 local_12c;
  undefined1 local_124;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  longlong local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 uStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_130[0] = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_12c = 0;
  local_124 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = &DAT_3f8000003f800000;
  local_b0 = 0;
  local_a8 = DAT_14c846510;
  uStack_a0 = DAT_14c846518;
  local_98 = DAT_14c846520;
  local_90 = &DAT_3f8000003f800000;
  local_78 = DAT_14c8464f0;
  local_88 = DAT_14c8464e0;
  uStack_80 = DAT_14c8464e8;
  local_60 = DAT_14c846508;
  local_70 = DAT_14c8464f8;
  uStack_68 = DAT_14c846500;
  local_58 = 0x3f800000;
  local_50 = 0;
  local_4c = 0x1010101;
  uStack_48 = 0;
  uStack_44 = 0x100000000;
  uStack_3c = 0;
  uStack_34 = 0x3f800000;
  local_2c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_130);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar9 = (undefined4 *)(*(longlong *)(param_2 + 0x38) + 0xe4);
  if (*(longlong *)(param_2 + 0x38) == 0) {
    puVar9 = &local_4c;
  }
  uVar1 = *puVar9;
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  uVar5 = puVar9[4];
  uVar6 = puVar9[5];
  uVar7 = puVar9[6];
  uVar8 = puVar9[7];
  param_3[8] = puVar9[8];
  param_3[4] = uVar5;
  param_3[5] = uVar6;
  param_3[6] = uVar7;
  param_3[7] = uVar8;
  *param_3 = uVar1;
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[3] = uVar4;
  local_c8 = 0;
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_14988a0a6(&local_110);
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986a2cc FUN_14986a2cc body=452 status=ok
// SIG undefined FUN_14986a2cc(void)

void FUN_14986a2cc(undefined8 param_1,longlong param_2)

{
  undefined1 **ppuVar1;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_88 = &DAT_3f8000003f800000;
  local_80 = 0;
  local_68 = DAT_14c846520;
  local_78 = DAT_14c846510;
  uStack_70 = DAT_14c846518;
  local_60 = &DAT_3f8000003f800000;
  local_58 = DAT_14c8464e0;
  uStack_50 = DAT_14c8464e8;
  local_48 = DAT_14c8464f0;
  local_40 = DAT_14c8464f8;
  uStack_38 = DAT_14c846500;
  local_30 = DAT_14c846508;
  local_28 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  ppuVar1 = &local_88;
  if (*(undefined1 ***)(param_2 + 0x38) != (undefined1 **)0x0) {
    ppuVar1 = *(undefined1 ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14986a492(local_18,local_20,ppuVar1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986a492 FUN_14986a492 body=239 status=ok
// SIG undefined FUN_14986a492(void)

void FUN_14986a492(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if (param_1 != 0) {
    if (param_2 == 0) {
      lVar6 = 0xd;
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x28);
    }
    else {
      lVar6 = FUN_14986c3d4(param_1,&local_20);
      if ((lVar6 == 0) || (*(char *)(lVar6 + 0x70) != '\x01')) goto LAB_14986a504;
      puVar5 = (undefined8 *)(lVar6 + 0x78);
      lVar6 = 0xd;
    }
    for (; lVar6 != 0; lVar6 = lVar6 + -1) {
      *param_3 = *puVar5;
      puVar5 = puVar5 + 1;
      param_3 = param_3 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
LAB_14986a504:
  *param_3 = &DAT_3f8000003f800000;
  param_3[1] = 0;
  uVar1 = DAT_14c846518;
  param_3[2] = DAT_14c846510;
  param_3[3] = uVar1;
  param_3[4] = DAT_14c846520;
  param_3[5] = &DAT_3f8000003f800000;
  uVar1 = DAT_14c8464e8;
  param_3[6] = DAT_14c8464e0;
  param_3[7] = uVar1;
  param_3[8] = DAT_14c8464f0;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_3 + 9) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_3 + 0x4c) = uVar2;
  *(undefined4 *)(param_3 + 10) = uVar3;
  *(undefined4 *)((longlong)param_3 + 0x54) = uVar4;
  param_3[0xb] = DAT_14c846508;
  param_3[0xc] = 0x3f800000;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14986a582 FUN_14986a582 body=435 status=ok
// SIG undefined FUN_14986a582(void)

void FUN_14986a582(undefined8 param_1,longlong param_2,void *param_3)

{
  undefined1 **_Src;
  undefined1 auStack_158 [40];
  undefined1 local_130 [4];
  undefined8 local_12c;
  undefined1 local_124;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  longlong local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_130[0] = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_12c = 0;
  local_124 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = &DAT_3f8000003f800000;
  local_b0 = 0;
  local_a8 = DAT_14c846510;
  uStack_a0 = DAT_14c846518;
  local_98 = DAT_14c846520;
  local_90 = &DAT_3f8000003f800000;
  local_78 = DAT_14c8464f0;
  local_88 = DAT_14c8464e0;
  uStack_80 = DAT_14c8464e8;
  local_60 = DAT_14c846508;
  local_70 = DAT_14c8464f8;
  uStack_68 = DAT_14c846500;
  local_58 = 0x3f800000;
  local_50 = 0;
  local_4c = 0x1010101;
  local_48 = 0;
  local_44 = 0x100000000;
  uStack_3c = 0;
  local_34 = 0x3f800000;
  local_2c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_130);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  _Src = (undefined1 **)(*(longlong *)(param_2 + 0x38) + 0x78);
  if (*(longlong *)(param_2 + 0x38) == 0) {
    _Src = &local_b8;
  }
  memmove(param_3,_Src,0x68);
  local_c8 = 0;
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_14988a0a6(&local_110);
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986a73a FUN_14986a73a body=37 status=ok
// SIG undefined FUN_14986a73a(void)

void FUN_14986a73a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14986a760();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14986a760 FUN_14986a760 body=170 status=ok
// SIG undefined FUN_14986a760(void)

bool FUN_14986a760(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar1 = param_1 + 0x30;
  lVar4 = FUN_14479d2ce(lVar1);
  if (lVar4 != 0) {
    return true;
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
LAB_14986a7e0:
    bVar6 = false;
  }
  else {
    lVar4 = FUN_140007850();
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar3 == '\0')) {
      FUN_14485c47a(lVar1,lVar4);
      if (lVar4 == 0) goto LAB_14986a7e0;
    }
    else {
      uVar2 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(lVar1,lVar4);
      }
    }
    bVar6 = (*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0;
  }
  return bVar6;
}



// FUNCTION 14986a80e FUN_14986a80e body=37 status=ok
// SIG undefined FUN_14986a80e(void)

void FUN_14986a80e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14986a834();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14986a834 FUN_14986a834 body=170 status=ok
// SIG undefined FUN_14986a834(void)

bool FUN_14986a834(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar1 = param_1 + 0x58;
  lVar4 = FUN_14479d2ce(lVar1);
  if (lVar4 != 0) {
    return true;
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
LAB_14986a8b4:
    bVar6 = false;
  }
  else {
    lVar4 = FUN_140007850();
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar3 == '\0')) {
      FUN_14485c47a(lVar1,lVar4);
      if (lVar4 == 0) goto LAB_14986a8b4;
    }
    else {
      uVar2 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(lVar1,lVar4);
      }
    }
    bVar6 = (*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0;
  }
  return bVar6;
}



// FUNCTION 14986a8de FUN_14986a8de body=775 status=ok
// SIG undefined FUN_14986a8de(void)

void FUN_14986a8de(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 auStack_188 [40];
  undefined8 local_160;
  undefined2 local_154 [2];
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined1 local_130 [4];
  undefined8 local_12c;
  undefined1 local_124;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  longlong local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_130[0] = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_12c = 0;
  local_124 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = &DAT_3f8000003f800000;
  local_b0 = 0;
  local_a8 = DAT_14c846510;
  uStack_a0 = DAT_14c846518;
  local_98 = DAT_14c846520;
  local_90 = &DAT_3f8000003f800000;
  local_78 = DAT_14c8464f0;
  local_88 = DAT_14c8464e0;
  uStack_80 = DAT_14c8464e8;
  local_60 = DAT_14c846508;
  local_70 = DAT_14c8464f8;
  uStack_68 = DAT_14c846500;
  local_58 = 0x3f800000;
  local_50 = 0;
  local_4c = 0x1010101;
  local_48 = 0;
  local_44 = 0x100000000;
  uStack_3c = 0;
  local_34 = 0x3f800000;
  local_2c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_130);
  }
  puVar11 = *(undefined1 **)(param_2 + 0x38);
  local_154[0] = 1;
  local_150 = 0x3f800000;
  local_14c = 0;
  local_148 = 0x3f800000;
  local_140 = 0;
  local_13c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_154);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_154);
  }
  puVar13 = (undefined4 *)local_154;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar13 = *(undefined4 **)(param_2 + 0x38);
  }
  local_160 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_160);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_160);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_138 = local_160;
  uVar9 = (uint)((ulonglong)local_160 >> 0x10);
  uVar12 = (uint)local_160 & 0xffff;
  puVar8 = (undefined8 *)(puVar11 + 0x20);
  if (puVar11 == (undefined1 *)0x0) {
    puVar11 = local_130;
    puVar8 = &local_110;
  }
  puVar10 = (undefined4 *)
            FUN_14988d71e(puVar8,((uint)local_160 << 0x10 | uVar12) +
                                 (int)((ulonglong)local_160 >> 0x20) +
                                 (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar12 >> 4));
  uVar1 = *puVar13;
  uVar2 = puVar13[1];
  uVar3 = puVar13[2];
  uVar4 = puVar13[3];
  uVar5 = puVar13[4];
  uVar6 = puVar13[5];
  uVar7 = puVar13[6];
  puVar10[3] = puVar13[3];
  puVar10[4] = uVar5;
  puVar10[5] = uVar6;
  puVar10[6] = uVar7;
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  puVar11[0x18] = 1;
  local_c8 = 0;
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_14988a0a6(&local_110);
  if ((local_28 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14986abe6 FUN_14986abe6 body=885 status=ok
// SIG undefined FUN_14986abe6(void)

void FUN_14986abe6(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 auStack_1e8 [40];
  undefined8 local_1c0;
  undefined1 local_1b8 [4];
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined1 local_138 [4];
  undefined8 local_134;
  undefined1 local_12c;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_138[0] = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_134 = 0;
  local_12c = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = &DAT_3f8000003f800000;
  local_b8 = 0;
  local_b0 = DAT_14c846510;
  uStack_a8 = DAT_14c846518;
  local_a0 = DAT_14c846520;
  local_98 = &DAT_3f8000003f800000;
  local_80 = DAT_14c8464f0;
  local_90 = DAT_14c8464e0;
  uStack_88 = DAT_14c8464e8;
  local_68 = DAT_14c846508;
  local_78 = DAT_14c8464f8;
  uStack_70 = DAT_14c846500;
  local_60 = 0x3f800000;
  local_58 = 0;
  local_54 = 0x1010101;
  local_50 = 0;
  local_4c = 0x100000000;
  uStack_44 = 0;
  local_3c = 0x3f800000;
  local_34 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
  puVar7 = *(undefined1 **)(param_2 + 0x38);
  local_1b8[0] = 1;
  local_1b4 = 0;
  local_1b0 = DAT_14c846510;
  uStack_1a8 = DAT_14c846518;
  local_1a0 = DAT_14c846520;
  local_198 = DAT_14c8464e0;
  uStack_190 = DAT_14c8464e8;
  local_188 = DAT_14c8464f0;
  local_180 = DAT_14c8464e0;
  uStack_178 = DAT_14c8464e8;
  local_170 = DAT_14c8464f0;
  local_168 = DAT_14c8464f8;
  uStack_160 = DAT_14c846500;
  local_158 = DAT_14c846508;
  local_150 = &DAT_3f8000003f800000;
  local_148 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1b8);
  }
  puVar4 = (undefined8 *)local_1b8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_1c0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_140 = local_1c0;
  uVar1 = (uint)((ulonglong)local_1c0 >> 0x10);
  uVar6 = (uint)local_1c0 & 0xffff;
  puVar5 = (undefined8 *)(puVar7 + 0x20);
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = local_138;
    puVar5 = &local_118;
  }
  lVar2 = FUN_14988d71e(puVar5,((uint)local_1c0 << 0x10 | uVar6) +
                               (int)((ulonglong)local_1c0 >> 0x20) +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4));
  puVar5 = (undefined8 *)(lVar2 + 0x20);
  for (lVar3 = 0xf; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar7[0x18] = 1;
  local_d0 = 0;
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_14988a0a6(&local_118);
  if ((local_30 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14986af5c FUN_14986af5c body=944 status=ok
// SIG undefined FUN_14986af5c(void)

void FUN_14986af5c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined2 local_200 [2];
  undefined4 local_1fc;
  undefined1 local_1f8;
  undefined8 local_1f4;
  undefined1 local_1ec;
  undefined4 local_1e8;
  undefined1 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 *local_178;
  undefined1 local_170;
  undefined1 local_168;
  undefined8 local_164;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 *local_148;
  undefined2 *local_140;
  undefined1 local_134 [4];
  undefined1 local_130 [4];
  undefined8 local_12c;
  undefined1 local_124;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  longlong local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_130[0] = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_12c = 0;
  local_124 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = &DAT_3f8000003f800000;
  local_b0 = 0;
  local_a8 = DAT_14c846510;
  uStack_a0 = DAT_14c846518;
  local_98 = DAT_14c846520;
  local_90 = &DAT_3f8000003f800000;
  local_78 = DAT_14c8464f0;
  local_88 = DAT_14c8464e0;
  uStack_80 = DAT_14c8464e8;
  local_60 = DAT_14c846508;
  local_70 = DAT_14c8464f8;
  uStack_68 = DAT_14c846500;
  local_58 = 0x3f800000;
  local_50 = 0;
  local_4c = 0x1010101;
  local_48 = 0;
  local_44 = 0x100000000;
  uStack_3c = 0;
  local_34 = 0x3f800000;
  local_2c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_130);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_200[0] = 1;
  local_1fc = 0x3f800000;
  local_1f8 = 0;
  local_1f4 = 0x3f800000;
  local_1ec = 0;
  local_1e8 = 0;
  local_1e0 = 1;
  local_1dc = 0;
  local_1d8 = DAT_14c846510;
  uStack_1d0 = DAT_14c846518;
  local_1c8 = DAT_14c846520;
  local_1c0 = DAT_14c8464e0;
  uStack_1b8 = DAT_14c8464e8;
  local_1b0 = DAT_14c8464f0;
  local_198 = DAT_14c8464f0;
  local_1a8 = DAT_14c8464e0;
  uStack_1a0 = DAT_14c8464e8;
  local_180 = DAT_14c846508;
  local_190 = DAT_14c8464f8;
  uStack_188 = DAT_14c846500;
  local_178 = &DAT_3f8000003f800000;
  local_170 = 1;
  local_168 = 0;
  local_164 = 0;
  local_15c = 0x437a000041700000;
  local_154 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_200);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_200);
  }
  puVar3 = local_200;
  if (*(undefined2 **)(param_2 + 0x38) != (undefined2 *)0x0) {
    puVar3 = *(undefined2 **)(param_2 + 0x38);
  }
  local_208 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_208);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_208);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_148 = &local_150;
  local_150 = local_208;
  puVar1 = (undefined8 *)(puVar2 + 0x20);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = local_130;
    puVar1 = &local_110;
  }
  local_140 = puVar3;
  FUN_14988c57c(puVar1,local_134);
  puVar2[0x18] = 1;
  local_c8 = 0;
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_14988a0a6(&local_110);
  if ((local_28 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14986b30e FUN_14986b30e body=776 status=ok
// SIG undefined FUN_14986b30e(void)

void FUN_14986b30e(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined8 local_14c;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined1 local_130 [4];
  undefined8 local_12c;
  undefined1 local_124;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  longlong local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_130[0] = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_12c = 0;
  local_124 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = &DAT_3f8000003f800000;
  local_b0 = 0;
  local_a8 = DAT_14c846510;
  uStack_a0 = DAT_14c846518;
  local_98 = DAT_14c846520;
  local_90 = &DAT_3f8000003f800000;
  local_78 = DAT_14c8464f0;
  local_88 = DAT_14c8464e0;
  uStack_80 = DAT_14c8464e8;
  local_60 = DAT_14c846508;
  local_70 = DAT_14c8464f8;
  uStack_68 = DAT_14c846500;
  local_58 = 0x3f800000;
  local_50 = 0;
  local_4c = 0x1010101;
  local_48 = 0;
  local_44 = 0x100000000;
  uStack_3c = 0;
  local_34 = 0x3f800000;
  local_2c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_130);
  }
  puVar7 = *(undefined1 **)(param_2 + 0x38);
  local_150[0] = 0;
  local_14c = 0;
  local_144 = 0x437a000041700000;
  local_13c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_150);
  }
  puVar9 = (undefined4 *)local_150;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(param_2 + 0x38);
  }
  local_158 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_158);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_158);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_138 = local_158;
  uVar5 = (uint)((ulonglong)local_158 >> 0x10);
  uVar8 = (uint)local_158 & 0xffff;
  puVar4 = (undefined8 *)(puVar7 + 0x20);
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = local_130;
    puVar4 = &local_110;
  }
  lVar6 = FUN_14988d71e(puVar4,((uint)local_158 << 0x10 | uVar8) +
                               (int)((ulonglong)local_158 >> 0x20) +
                               (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4));
  *(undefined8 *)(lVar6 + 0xa8) = *(undefined8 *)(puVar9 + 4);
  uVar1 = puVar9[1];
  uVar2 = puVar9[2];
  uVar3 = puVar9[3];
  *(undefined4 *)(lVar6 + 0x98) = *puVar9;
  *(undefined4 *)(lVar6 + 0x9c) = uVar1;
  *(undefined4 *)(lVar6 + 0xa0) = uVar2;
  *(undefined4 *)(lVar6 + 0xa4) = uVar3;
  puVar7[0x18] = 1;
  local_c8 = 0;
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_14988a0a6(&local_110);
  if ((local_28 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14986b618 FUN_14986b618 body=667 status=ok
// SIG undefined FUN_14986b618(void)

void FUN_14986b618(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_198 [44];
  undefined4 local_16c;
  undefined1 uStack_168;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined8 uStack_154;
  undefined4 local_14c;
  undefined1 local_148 [4];
  undefined8 local_144;
  undefined1 local_13c;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined1 local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined1 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_148[0] = 0;
  local_108 = 0;
  local_100 = 0;
  local_144 = 0;
  local_13c = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = &DAT_3f8000003f800000;
  local_c8 = 0;
  local_c0 = DAT_14c846510;
  uStack_b8 = DAT_14c846518;
  local_b0 = DAT_14c846520;
  local_a8 = &DAT_3f8000003f800000;
  local_90 = DAT_14c8464f0;
  local_a0 = DAT_14c8464e0;
  uStack_98 = DAT_14c8464e8;
  local_78 = DAT_14c846508;
  local_88 = (undefined4)DAT_14c8464f8;
  uStack_84 = DAT_14c8464f8._4_4_;
  uStack_80 = (undefined4)DAT_14c846500;
  uStack_7c = DAT_14c846500._4_4_;
  local_70 = 0x3f800000;
  local_68 = 0;
  local_64 = 0x1010101;
  uStack_60 = 0;
  uStack_5c = 0x100000000;
  uStack_54 = 0;
  uStack_4c = 0x3f800000;
  local_44 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_148);
  }
  puVar10 = *(undefined1 **)(param_2 + 0x38);
  local_16c = 0x1010101;
  uStack_168 = 0;
  uStack_164 = 0x100000000;
  uStack_15c = 0;
  uStack_154 = 0x3f800000;
  local_14c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_16c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_16c);
  }
  puVar9 = &local_16c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar8 = (undefined4 *)(puVar10 + 0xe4);
  if (puVar10 == (undefined1 *)0x0) {
    puVar8 = &local_64;
  }
  puVar8[8] = puVar9[8];
  uVar1 = *puVar9;
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  uVar5 = puVar9[5];
  uVar6 = puVar9[6];
  uVar7 = puVar9[7];
  puVar8[4] = puVar9[4];
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  puVar8[7] = uVar7;
  *puVar8 = uVar1;
  puVar8[1] = uVar2;
  puVar8[2] = uVar3;
  puVar8[3] = uVar4;
  if (puVar10 == (undefined1 *)0x0) {
    puVar10 = local_148;
  }
  puVar10[0xe0] = 1;
  local_e0 = 0;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_14988a0a6(&local_128);
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986b8b4 FUN_14986b8b4 body=739 status=ok
// SIG undefined FUN_14986b8b4(void)

void FUN_14986b8b4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c8 [32];
  undefined1 *local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined1 *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [4];
  undefined8 local_13c;
  undefined1 local_134;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  longlong local_e0;
  undefined4 local_d8;
  undefined1 local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_140[0] = 0;
  local_100 = 0;
  local_f8 = 0;
  local_13c = 0;
  local_134 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_f4 = 0xffffffff00000080;
  local_ec = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_b8 = DAT_14c846510;
  uStack_b0 = DAT_14c846518;
  local_a8 = DAT_14c846520;
  local_a0 = &DAT_3f8000003f800000;
  local_88 = DAT_14c8464f0;
  local_98 = DAT_14c8464e0;
  uStack_90 = DAT_14c8464e8;
  local_70 = DAT_14c846508;
  local_80 = DAT_14c8464f8;
  uStack_78 = DAT_14c846500;
  local_68 = 0x3f800000;
  local_60 = 0;
  local_5c = 0x1010101;
  local_58 = 0;
  local_54 = 0x100000000;
  uStack_4c = 0;
  local_44 = 0x3f800000;
  local_3c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_140);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_140);
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  local_1a8 = &DAT_3f8000003f800000;
  local_1a0 = 0;
  local_198 = DAT_14c846510;
  uStack_190 = DAT_14c846518;
  local_188 = DAT_14c846520;
  local_180 = &DAT_3f8000003f800000;
  local_178 = DAT_14c8464e0;
  uStack_170 = DAT_14c8464e8;
  local_168 = DAT_14c8464f0;
  local_160 = DAT_14c8464f8;
  uStack_158 = DAT_14c846500;
  local_150 = DAT_14c846508;
  local_148 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a8);
  }
  ppuVar2 = &local_1a8;
  if (*(undefined1 ***)(param_2 + 0x38) != (undefined1 **)0x0) {
    ppuVar2 = *(undefined1 ***)(param_2 + 0x38);
  }
  ppuVar3 = (undefined1 **)(puVar4 + 0x78);
  if (puVar4 == (undefined1 *)0x0) {
    ppuVar3 = &local_c8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
    *ppuVar3 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
  }
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = local_140;
  }
  puVar4[0x70] = 1;
  local_d8 = 0;
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  FUN_14988a0a6(&local_120);
  if ((local_38 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14986bb9c FUN_14986bb9c body=99 status=ok
// SIG undefined FUN_14986bb9c(void)

void FUN_14986bb9c(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14bebede4);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


