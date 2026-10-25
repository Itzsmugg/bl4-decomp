// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145fe2e6e FUN_145fe2e6e body=75 status=ok
// SIG undefined FUN_145fe2e6e(void)

undefined8 * FUN_145fe2e6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14add3990;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145fe2eba(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fe2eba FUN_145fe2eba body=53 status=ok
// SIG undefined FUN_145fe2eba(void)

void FUN_145fe2eba(longlong *param_1)

{
  FUN_145fe2ef0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fe2ef0 FUN_145fe2ef0 body=346 status=ok
// SIG undefined FUN_145fe2ef0(void)

void FUN_145fe2ef0(longlong *param_1)

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
      FUN_148180296(*local_68 + (longlong)iStack_4c * 0x98 + 8);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145fe304c FUN_145fe304c body=75 status=ok
// SIG undefined FUN_145fe304c(void)

undefined8 * FUN_145fe304c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14addc6a0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145fe3098(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fe3098 FUN_145fe3098 body=53 status=ok
// SIG undefined FUN_145fe3098(void)

void FUN_145fe3098(longlong *param_1)

{
  FUN_145fe30ce();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fe30ce FUN_145fe30ce body=346 status=ok
// SIG undefined FUN_145fe30ce(void)

void FUN_145fe30ce(longlong *param_1)

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
      FUN_148194c62(*local_68 + (longlong)iStack_4c * 0xb8 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14018c050(param_1,0);
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



// FUNCTION 145fe3234 FUN_145fe3234 body=299 status=ok
// SIG undefined FUN_145fe3234(void)

undefined8 * FUN_145fe3234(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcab630;
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
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 3;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x40000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x3f8000003f000000;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 6;
  param_1[0x34] = 0x3f80000000000000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13950) {
    FUN_144b3d300(&DAT_14cc13950);
    if (DAT_14cc13950 == -1) {
      FUN_1415b1d7c();
      atexit((_func_5014 *)&LAB_1444f211f);
      _Init_thread_footer(&DAT_14cc13950);
    }
  }
  return param_1;
}



// FUNCTION 145fe3360 FUN_145fe3360 body=1057 status=ok
// SIG undefined FUN_145fe3360(void)

void FUN_145fe3360(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  param_1[5] = param_2;
  lVar4 = FUN_14001cc68(0x70,0x10);
  FUN_1415b1e22(lVar4,param_1);
  lVar5 = param_1[8];
  param_1[8] = lVar4;
  if (lVar5 != 0) {
    FUN_145a2a418(lVar5);
    FUN_1400020a8(lVar5);
  }
  if (((-1 < *(int *)((longlong)param_1 + 0xd4)) ||
      (lVar5 = (**(code **)(*param_1 + 0x2f0))(param_1), lVar5 != 0)) &&
     (lVar5 = (**(code **)(*param_1 + 0x2f0))(param_1), lVar5 == 0)) goto LAB_145fe34a8;
  (**(code **)(*param_1 + 0x378))(param_1,&local_58);
  plVar1 = local_50;
  if (local_50 == (longlong *)0x0) {
    param_1[0x29] = local_58;
    plVar6 = (longlong *)param_1[0x2a];
    if (plVar6 != (longlong *)0x0) {
      param_1[0x2a] = 0;
LAB_145fe367d:
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000145fe36b4:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    param_1[0x29] = local_58;
    plVar6 = (longlong *)param_1[0x2a];
    if (local_50 == plVar6) {
      LOCK();
      plVar6 = local_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar6 = plVar1;
        goto joined_r0x000145fe36b4;
      }
    }
    else {
      param_1[0x2a] = (longlong)local_50;
      if (plVar6 != (longlong *)0x0) goto LAB_145fe367d;
    }
  }
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  (**(code **)(*param_1 + 0x380))(param_1,&local_58);
  plVar1 = local_50;
  if (local_50 == (longlong *)0x0) {
    param_1[0x2b] = local_58;
    plVar6 = (longlong *)param_1[0x2c];
    if (plVar6 != (longlong *)0x0) {
      param_1[0x2c] = 0;
LAB_145fe370a:
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000145fe3741:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    param_1[0x2b] = local_58;
    plVar6 = (longlong *)param_1[0x2c];
    if (local_50 == plVar6) {
      LOCK();
      plVar6 = local_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar6 = plVar1;
        goto joined_r0x000145fe3741;
      }
    }
    else {
      param_1[0x2c] = (longlong)local_50;
      if (plVar6 != (longlong *)0x0) goto LAB_145fe370a;
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
LAB_145fe34a8:
  if ((*(int *)((longlong)param_1 + 0xd4) < 0) &&
     (lVar5 = (**(code **)(*param_1 + 0x2f0))(param_1), lVar5 == 0)) {
    FUN_145fe3852(&DAT_14c9647a0,&local_58,param_1,FUN_145b2714e);
    param_1[0x20] = local_58;
    FUN_145fe3948(&DAT_14cb10a78,&local_58,param_1,FUN_1406e93b4);
    param_1[0x21] = local_58;
    FUN_145fe3948(&DAT_14cb10a90,&local_58,param_1,FUN_1406e93ee);
    param_1[0x22] = local_58;
    FUN_145fe3ce2(&local_58,param_1);
    FUN_14126834e(&DAT_14cb10ae8,&local_60,&local_58);
    FUN_1401cb1ee(&local_58);
    param_1[0x24] = local_60;
    FUN_145fe3dbc(&local_58,param_1);
    param_1[0x25] = local_58;
    FUN_145fe3eac(&local_58,param_1);
    param_1[0x27] = local_58;
    FUN_145fe3852(&DAT_14cb10938,&local_58,param_1,FUN_14895e48a);
    param_1[0x28] = local_58;
    FUN_145fe3f9c(DAT_14cb0d2b0 + 0xeb0,&local_58,param_1);
    param_1[0x26] = local_58;
  }
  else {
    *(undefined1 *)(param_1 + 0x1a) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe3782 FUN_145fe3782 body=103 status=ok
// SIG undefined FUN_145fe3782(void)

longlong * FUN_145fe3782(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x108,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b426040;
  puVar1 = puVar2 + 2;
  FUN_145fe3c0e(puVar1,param_1);
  *param_2 = (longlong)puVar1;
  param_2[1] = (longlong)puVar2;
  FUN_145fe3b6c(param_2,puVar1);
  return param_2;
}



// FUNCTION 145fe37ea FUN_145fe37ea body=103 status=ok
// SIG undefined FUN_145fe37ea(void)

longlong * FUN_145fe37ea(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xf8,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b426060;
  puVar1 = puVar2 + 2;
  FUN_145fe3a3e(puVar1,param_1);
  *param_2 = (longlong)puVar1;
  param_2[1] = (longlong)puVar2;
  FUN_145fe3acc(param_2,puVar1);
  return param_2;
}



// FUNCTION 145fe3852 FUN_145fe3852 body=244 status=ok
// SIG undefined FUN_145fe3852(void)

undefined8
FUN_145fe3852(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1e1a40;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b425da0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_141211c46(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe3948 FUN_145fe3948 body=244 status=ok
// SIG undefined FUN_145fe3948(void)

undefined8
FUN_145fe3948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1ca6c0;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b425e10;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1411df00c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe3a3e FUN_145fe3a3e body=141 status=ok
// SIG undefined FUN_145fe3a3e(void)

undefined8 * FUN_145fe3a3e(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  param_1[5] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x400000000;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  FUN_14485c47a(param_1 + 0x1c);
  return param_1;
}



// FUNCTION 145fe3acc FUN_145fe3acc body=159 status=ok
// SIG undefined FUN_145fe3acc(void)

void FUN_145fe3acc(longlong param_1,longlong *param_2)

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
    if ((longlong *)param_2[1] == plVar2) goto LAB_145fe3b09;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_145fe3b09;
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
LAB_145fe3b09:
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
                    /* WARNING: Could not recover jumptable at 0x000145fe3b67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145fe3b6c FUN_145fe3b6c body=162 status=ok
// SIG undefined FUN_145fe3b6c(void)

void FUN_145fe3b6c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x18) != 0) && (*(longlong *)(param_2 + 0x20) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x20) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x18) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x20);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x18) = param_2;
    if (*(longlong **)(param_2 + 0x20) == plVar2) goto LAB_145fe3bab;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x20);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x20) = plVar2;
      goto LAB_145fe3bab;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x20) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145fe3bab:
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
                    /* WARNING: Could not recover jumptable at 0x000145fe3c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145fe3c0e FUN_145fe3c0e body=211 status=ok
// SIG undefined FUN_145fe3c0e(void)

undefined8 * FUN_145fe3c0e(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  FUN_1409e1656(param_1 + 2);
  *param_1 = &PTR_FUN_14b40d720;
  param_1[2] = &PTR_FUN_14b40d740;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_2);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 145fe3ce2 FUN_145fe3ce2 body=218 status=ok
// SIG undefined FUN_145fe3ce2(void)

LPCRITICAL_SECTION FUN_145fe3ce2(LPCRITICAL_SECTION param_1,undefined8 param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
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
  *(undefined ***)p_Var1 = &PTR_FUN_14b425e80;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var1->ProcessLocksList).Blink,param_2);
  *(code **)&p_Var1->EntryCount = FUN_145ad79d4;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 145fe3dbc FUN_145fe3dbc body=239 status=ok
// SIG undefined FUN_145fe3dbc(void)

undefined8 FUN_145fe3dbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1ca5b0;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b425ef0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_14575692e;
  FUN_14123f6f0(&DAT_14cb10980,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe3eac FUN_145fe3eac body=239 status=ok
// SIG undefined FUN_145fe3eac(void)

undefined8 FUN_145fe3eac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a90a240;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b425f60;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_14895e272;
  FUN_1406baa38(&DAT_14cb10920,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe3f9c FUN_145fe3f9c body=244 status=ok
// SIG undefined FUN_145fe3f9c(void)

undefined8 FUN_145fe3f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14a90c0e0;
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
  *local_38 = &PTR_FUN_14b425fd0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_14895e4c4;
  FUN_145a465e6(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe4092 FUN_145fe4092 body=210 status=ok
// SIG undefined FUN_145fe4092(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe4092(void)

{
  if ((DAT_14cae1da7 & 2) == 0) {
    DAT_14cae1da7 = DAT_14cae1da7 | 2;
    _DAT_14cae1d48 = L"FRadixSortUpsweepCS";
    _DAT_14cae1d60 = FUN_146826540;
    _DAT_14cae1d68 = FUN_146825d77;
    _DAT_14cae1d70 = FUN_146825fd6;
    _DAT_14cae1d78 = FUN_1407e02ea;
    _DAT_14cae1d80 = FUN_146826273;
    _DAT_14cae1d58 = FUN_147adda76;
    _DAT_14cae1d98 = 0xffffffff000000f0;
    _DAT_14cae1da0 = 8;
    DAT_14cae1da4 = 0;
    _DAT_14cae1d88 = &LAB_147addaa0;
    FUN_145fe4164();
    FUN_145fe41de();
    FUN_1407e00cc(&DAT_14cae1d40);
    return;
  }
  return;
}



// FUNCTION 145fe4164 FUN_145fe4164 body=121 status=ok
// SIG undefined FUN_145fe4164(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe4164(void)

{
  FUN_145fe425a();
  _DAT_14cae2340 = L"RadixSortParameterBuffer";
  DAT_14cae236a = FUN_140850cc5();
  _DAT_14cae2348 = FUN_140fb78d0();
  _DAT_14cae2358 = &LAB_14682652b;
  _DAT_14cae2360 = 0x1000000e0;
  _DAT_14cae2368 = 0;
  _DAT_14cae2350 = DAT_14cae1d50;
  DAT_14cae1d50 = &DAT_14cae2340;
  return;
}



// FUNCTION 145fe41de FUN_145fe41de body=123 status=ok
// SIG undefined FUN_145fe41de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe41de(void)

{
  _DAT_14cae3960 = L"BASE";
  DAT_14cae398a = 4;
  _DAT_14cae3968 = FUN_140b35ae4();
  _DAT_14cae3970 = DAT_14cae1d50;
  _DAT_14cae3978 = &LAB_14682652b;
  DAT_14cae1d50 = &DAT_14cae3960;
  DAT_14cae1da5 = DAT_14cae1da5 + '\x01';
  _DAT_14cae3980 = 0x100000000;
  if (*(char *)(_DAT_14cae3968 + 100) != '\0') {
    DAT_14cae1da6 = DAT_14cae1da6 + '\x01';
  }
  return;
}



// FUNCTION 145fe425a FUN_145fe425a body=216 status=ok
// SIG undefined FUN_145fe425a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe425a(void)

{
  _DAT_14cae23a0 = L"OutOffsets";
  DAT_14cae23ca = FUN_140850cc5();
  _DAT_14cae23a8 = FUN_140fb78d0();
  _DAT_14cae23b8 = &LAB_14682652b;
  _DAT_14cae23c0 = 0x1000000e8;
  _DAT_14cae23c8 = 0;
  _DAT_14cae23b0 = DAT_14cae1d50;
  DAT_14cae1d50 = &DAT_14cae23a0;
  _DAT_14cae2370 = L"InKeys";
  DAT_14cae239a = FUN_140850cc5();
  _DAT_14cae2378 = FUN_140fb78d0();
  _DAT_14cae2388 = &LAB_14682652b;
  _DAT_14cae2390 = 0x1000000e4;
  _DAT_14cae2398 = 0;
  _DAT_14cae2380 = DAT_14cae1d50;
  DAT_14cae1d50 = &DAT_14cae2370;
  return;
}



// FUNCTION 145fe4332 FUN_145fe4332 body=281 status=ok
// SIG undefined FUN_145fe4332(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe4332(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae3f90) {
    FUN_144b3d300(&DAT_14cae3f90);
    if (DAT_14cae3f90 == -1) {
      FUN_145fe444c();
      FUN_140db5666(&DAT_14cae3ee8,0,&DAT_14cae3e80,L"FCopyUIntBufferCS",
                    L"/Engine/Private/CopyUIntBuffer.usf",L"MainCS",5,1,FUN_147ae4d56,FUN_147ae4d2e,
                    &LAB_147ae4d2a,&LAB_147ae4d26,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0);
      _DAT_14cae3ee8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143520eef);
      _Init_thread_footer(&DAT_14cae3f90);
    }
  }
  return &DAT_14cae3ee8;
}



// FUNCTION 145fe444c FUN_145fe444c body=210 status=ok
// SIG undefined FUN_145fe444c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe444c(void)

{
  if ((DAT_14cae3ee7 & 2) == 0) {
    DAT_14cae3ee7 = DAT_14cae3ee7 | 2;
    _DAT_14cae3e88 = L"FCopyUIntBufferCS";
    _DAT_14cae3ea0 = FUN_146826540;
    _DAT_14cae3ea8 = FUN_146825d77;
    _DAT_14cae3eb0 = FUN_146825fd6;
    _DAT_14cae3eb8 = FUN_1407e02ea;
    _DAT_14cae3ec0 = FUN_146826273;
    _DAT_14cae3e98 = FUN_147ae4cf8;
    _DAT_14cae3ed8 = 0xffffffff000000f8;
    _DAT_14cae3ee0 = 8;
    DAT_14cae3ee4 = 0;
    _DAT_14cae3ec8 = &LAB_147ae4d22;
    FUN_145fe451e();
    FUN_145fe4598();
    FUN_1407e00cc(&DAT_14cae3e80);
    return;
  }
  return;
}



// FUNCTION 145fe451e FUN_145fe451e body=121 status=ok
// SIG undefined FUN_145fe451e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe451e(void)

{
  FUN_145fe4614();
  _DAT_14cae4710 = L"CopyParams";
  DAT_14cae473a = FUN_140850cc5();
  _DAT_14cae4718 = FUN_140ec6960();
  _DAT_14cae4728 = &LAB_14682652b;
  _DAT_14cae4730 = 0x1000000e0;
  _DAT_14cae4738 = 0;
  _DAT_14cae4720 = DAT_14cae3e90;
  DAT_14cae3e90 = &DAT_14cae4710;
  return;
}



// FUNCTION 145fe4598 FUN_145fe4598 body=123 status=ok
// SIG undefined FUN_145fe4598(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe4598(void)

{
  _DAT_14cae4818 = L"BASE";
  DAT_14cae4842 = 4;
  _DAT_14cae4820 = FUN_140b35ae4();
  _DAT_14cae4828 = DAT_14cae3e90;
  _DAT_14cae4830 = &LAB_14682652b;
  DAT_14cae3e90 = &DAT_14cae4818;
  DAT_14cae3ee5 = DAT_14cae3ee5 + '\x01';
  _DAT_14cae4838 = 0x100000000;
  if (*(char *)(_DAT_14cae4820 + 100) != '\0') {
    DAT_14cae3ee6 = DAT_14cae3ee6 + '\x01';
  }
  return;
}



// FUNCTION 145fe4614 FUN_145fe4614 body=216 status=ok
// SIG undefined FUN_145fe4614(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe4614(void)

{
  _DAT_14cae4770 = L"DestData";
  DAT_14cae479a = FUN_140850cc5();
  _DAT_14cae4778 = FUN_140fb78d0();
  _DAT_14cae4788 = &LAB_14682652b;
  _DAT_14cae4790 = 0x3000000ea;
  _DAT_14cae4798 = 0;
  _DAT_14cae4780 = DAT_14cae3e90;
  DAT_14cae3e90 = &DAT_14cae4770;
  _DAT_14cae4740 = L"SourceData";
  DAT_14cae476a = FUN_140850cc5();
  _DAT_14cae4748 = FUN_140fb78d0();
  _DAT_14cae4758 = &LAB_14682652b;
  _DAT_14cae4760 = 0x1000000e6;
  _DAT_14cae4768 = 0;
  _DAT_14cae4750 = DAT_14cae3e90;
  DAT_14cae3e90 = &DAT_14cae4740;
  return;
}



// FUNCTION 145fe46ec FUN_145fe46ec body=40 status=ok
// SIG undefined FUN_145fe46ec(void)

undefined8 FUN_145fe46ec(undefined8 param_1,int param_2)

{
  FUN_145fe4714();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fe4714 FUN_145fe4714 body=198 status=ok
// SIG undefined FUN_145fe4714(void)

void FUN_145fe4714(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4f2190;
  param_1[5] = &PTR_LAB_14a4f2430;
  param_1[6] = &PTR_FUN_14a4f2540;
  FUN_140a07690(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x50],*(undefined4 *)(param_1 + 0x51));
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x49];
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
  FUN_140a076b8(param_1 + 0x44);
  FUN_140a076f8(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145fe47e6 FUN_145fe47e6 body=187 status=ok
// SIG undefined FUN_145fe47e6(void)

undefined8 * FUN_145fe47e6(undefined8 *param_1)

{
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
  *param_1 = &PTR_FUN_14a64a620;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb010) {
    FUN_144b3d300(&DAT_14caeb010);
    if (DAT_14caeb010 == -1) {
      FUN_1415b2000();
      atexit(FUN_14356db3a);
      _Init_thread_footer(&DAT_14caeb010);
    }
  }
  return param_1;
}



// FUNCTION 145fe48ac FUN_145fe48ac body=187 status=ok
// SIG undefined FUN_145fe48ac(void)

undefined8 * FUN_145fe48ac(undefined8 *param_1)

{
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
  *param_1 = &PTR_FUN_14a659430;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeade8) {
    FUN_144b3d300(&DAT_14caeade8);
    if (DAT_14caeade8 == -1) {
      FUN_1415b2116();
      atexit(FUN_14356d939);
      _Init_thread_footer(&DAT_14caeade8);
    }
  }
  return param_1;
}



// FUNCTION 145fe4972 FUN_145fe4972 body=187 status=ok
// SIG undefined FUN_145fe4972(void)

undefined8 * FUN_145fe4972(undefined8 *param_1)

{
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
  *param_1 = &PTR_FUN_14a6617f0;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeadc0) {
    FUN_144b3d300(&DAT_14caeadc0);
    if (DAT_14caeadc0 == -1) {
      FUN_1415b222c();
      atexit(FUN_14356d906);
      _Init_thread_footer(&DAT_14caeadc0);
    }
  }
  return param_1;
}



// FUNCTION 145fe4a2e FUN_145fe4a2e body=318 status=ok
// SIG undefined FUN_145fe4a2e(void)

void FUN_145fe4a2e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  FUN_145fe4b6e(param_1,param_2);
  plVar1 = (longlong *)(param_1 + 0x50);
  lVar2 = param_1 + 0x60;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar3 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x78);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (local_48 != lVar2)) {
    do {
      do {
        FUN_14006fee2(*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x10),&DAT_14ca85100,0);
        local_60 = local_60 & ~local_70._4_4_;
        FUN_1449c0562(&local_70);
      } while (iStack_5c != iVar3);
    } while ((local_68 != lVar2) || (local_78 != plVar1));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145fe4b6e FUN_145fe4b6e body=159 status=ok
// SIG undefined FUN_145fe4b6e(void)

undefined8 FUN_145fe4b6e(longlong *param_1,int *param_2)

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
        if ((((*(int *)(lVar1 + lVar4 * 0x48) == *param_2) &&
             (*(int *)(lVar1 + 4 + lVar4 * 0x48) == param_2[1])) &&
            (*(int *)(lVar1 + 8 + lVar4 * 0x48) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4 * 0x48) == param_2[3])) {
          FUN_145fe4c0e(param_1);
          return 1;
        }
        iVar2 = *(int *)(lVar1 + lVar4 * 0x48 + 0x40);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 145fe4c0e FUN_145fe4c0e body=120 status=ok
// SIG undefined FUN_145fe4c0e(void)

void FUN_145fe4c0e(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x48;
  lVar5 = (longlong)*(int *)(lVar1 + 0x44);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x48 + 0x40);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x40);
  FUN_14613bf3a(*param_1 + (longlong)param_2 * 0x48 + 0x10);
  FUN_145fe4c86(param_1,param_2);
  return;
}



// FUNCTION 145fe4c86 FUN_145fe4c86 body=116 status=ok
// SIG undefined FUN_145fe4c86(void)

void FUN_145fe4c86(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145fe4cfa FUN_145fe4cfa body=103 status=ok
// SIG undefined FUN_145fe4cfa(void)

void FUN_145fe4cfa(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  return;
}



// FUNCTION 145fe4d6c FUN_145fe4d6c body=227 status=ok
// SIG undefined FUN_145fe4d6c(void)

undefined8 * FUN_145fe4d6c(undefined8 *param_1)

{
  int iVar1;
  
  FUN_140307bf4();
  *param_1 = &PTR_FUN_14aafd310;
  param_1[0x19] = &PTR_LAB_14aafd6d0;
  param_1[0x1a] = &PTR_LAB_14aafd710;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) | 4;
  iVar1 = 0;
  do {
    *(uint *)(param_1 + 0x2c) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x164) < iVar1 + 1U) {
      FUN_140cd36ae(param_1 + 0x2b,iVar1);
    }
    *(undefined1 *)(param_1[0x2b] + (longlong)iVar1) = 0xff;
    iVar1 = *(int *)(param_1 + 0x2c);
  } while (iVar1 < 1);
  *(undefined1 *)param_1[0x2b] = 0;
  iVar1 = *(int *)(param_1 + 0x2c);
  while (iVar1 < 2) {
    *(uint *)(param_1 + 0x2c) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x164) < iVar1 + 1U) {
      FUN_140cd36ae(param_1 + 0x2b,iVar1);
    }
    *(undefined1 *)(param_1[0x2b] + (longlong)iVar1) = 0xff;
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  *(undefined1 *)(param_1[0x2b] + 1) = 1;
  return param_1;
}



// FUNCTION 145fe4e50 FUN_145fe4e50 body=75 status=ok
// SIG undefined FUN_145fe4e50(void)

undefined8 * FUN_145fe4e50(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adcb160;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145fe4e9c(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fe4e9c FUN_145fe4e9c body=53 status=ok
// SIG undefined FUN_145fe4e9c(void)

void FUN_145fe4e9c(longlong *param_1)

{
  FUN_145fe4ed2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fe4ed2 FUN_145fe4ed2 body=347 status=ok
// SIG undefined FUN_145fe4ed2(void)

void FUN_145fe4ed2(longlong *param_1)

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
      FUN_14816ba7c(*local_68 + (longlong)iStack_4c * 0x30 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145fe502e FUN_145fe502e body=75 status=ok
// SIG undefined FUN_145fe502e(void)

undefined8 * FUN_145fe502e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adeeb90;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145fe507a(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fe507a FUN_145fe507a body=53 status=ok
// SIG undefined FUN_145fe507a(void)

void FUN_145fe507a(longlong *param_1)

{
  FUN_145fe50b0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fe50b0 FUN_145fe50b0 body=347 status=ok
// SIG undefined FUN_145fe50b0(void)

void FUN_145fe50b0(longlong *param_1)

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
      FUN_1481bc766(*local_68 + (longlong)iStack_4c * 0x50 + 8);
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



// FUNCTION 145fe5218 FUN_145fe5218 body=227 status=ok
// SIG undefined FUN_145fe5218(void)

undefined8 * FUN_145fe5218(undefined8 *param_1)

{
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14b19d810;
  param_1[7] = 0x4000000040;
  *(undefined4 *)(param_1 + 8) = 0x20;
  param_1[9] = 0x40af400000000000;
  param_1[10] = 0x40af400000000000;
  param_1[0xb] = 0x409f400000000000;
  memset(param_1 + 0xc,0,0x88);
  FUN_1446f470e(param_1 + 0x1d,L"SimulationOrigin",1);
  FUN_1446f470e(param_1 + 0x1e,L"SimulationOrigin_PreviousFrame",1);
  FUN_1446f470e(param_1 + 0x1f,L"SimulationExtents",1);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return param_1;
}



// FUNCTION 145fe52fc FUN_145fe52fc body=26 status=ok
// SIG undefined FUN_145fe52fc(void)

undefined8 FUN_145fe52fc(longlong param_1,undefined8 param_2)

{
  FUN_145fe5316(param_1 + 0x18);
  return param_2;
}



// FUNCTION 145fe5316 FUN_145fe5316 body=438 status=ok
// SIG undefined FUN_145fe5316(void)

undefined8 * FUN_145fe5316(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  void *_Dst;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  void *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb8ab18 != (longlong *)0x0 && DAT_14cb8ab20 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb8ab18 + 0x30))(), cVar2 != '\0')) {
    plVar3 = DAT_14cb8ab18;
    if (DAT_14cb8ab20 == 0) {
      plVar3 = (longlong *)0x0;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_38);
    goto LAB_145fe53f7;
  }
  _Dst = (void *)FUN_14001cc68(0xd18);
  memset(_Dst,0,0xd18);
  FUN_145fe54ce(_Dst);
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4272d0;
  plVar3[2] = (longlong)_Dst;
  local_30 = plVar3;
  if (_Dst == (void *)0x0) {
    local_38 = (void *)0x0;
    goto LAB_145fe53f7;
  }
  local_38 = _Dst;
  if (((*(longlong *)((longlong)_Dst + 0x10) != 0) && (*(longlong *)((longlong)_Dst + 0x18) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)_Dst + 0x18) + 8))) goto LAB_145fe53f7;
  if (plVar3 == (longlong *)0x0) {
    *(void **)((longlong)_Dst + 0x10) = _Dst;
    plVar4 = *(longlong **)((longlong)_Dst + 0x18);
    if (plVar4 != (longlong *)0x0) {
LAB_145fe5472:
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      *(longlong **)((longlong)_Dst + 0x18) = plVar3;
      if (plVar3 != (longlong *)0x0) goto LAB_145fe53ed;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(void **)((longlong)_Dst + 0x10) = _Dst;
    if (*(longlong **)((longlong)_Dst + 0x18) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)((longlong)_Dst + 0x18);
      if (plVar4 != (longlong *)0x0) goto LAB_145fe5472;
      *(longlong **)((longlong)_Dst + 0x18) = plVar3;
    }
LAB_145fe53ed:
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
LAB_145fe53f7:
  *param_2 = local_38;
  param_2[1] = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145fe54ce FUN_145fe54ce body=249 status=ok
// SIG undefined FUN_145fe54ce(void)

undefined8 * FUN_145fe54ce(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b4272b0;
  FUN_1412cbb62(param_1 + 4);
  *param_1 = &PTR_FUN_14b427230;
  param_1[4] = &PTR_FUN_14b427250;
  param_1[0x186] = 0;
  param_1[0x187] = 0x8000000000;
  param_1[0x188] = 0;
  *(undefined4 *)(param_1 + 0x189) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4c) = 0;
  param_1[0x193] = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  *(undefined8 *)((longlong)param_1 + 0xca4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcac) = 0;
  param_1[0x197] = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  param_1[0x19d] = 0;
  *(undefined4 *)(param_1 + 0x19e) = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcfc) = 0;
  param_1[0x1a1] = 0;
  *(undefined4 *)(param_1 + 0x1a2) = 0;
  return param_1;
}



// FUNCTION 145fe55c8 FUN_145fe55c8 body=37 status=ok
// SIG undefined FUN_145fe55c8(void)

void FUN_145fe55c8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145fe55ee();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145fe55ee FUN_145fe55ee body=72 status=ok
// SIG undefined FUN_145fe55ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_145fe55ee(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    uVar3 = FUN_145fe5636(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c]);
    return uVar3;
  }
  return (ulonglong)(uint)(int)_DAT_14cbcf41c;
}



// FUNCTION 145fe5636 FUN_145fe5636 body=129 status=ok
// SIG undefined FUN_145fe5636(void)

char FUN_145fe5636(void)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = FUN_14588001a();
  fVar3 = DAT_14cbe45f4;
  if (lVar2 != 0) {
    fVar3 = *(float *)(lVar2 + 0x24);
  }
  cVar1 = '\0';
  if ((1e-08 < ABS(fVar3 + -1.0)) && (cVar1 = '\x01', 1e-08 < ABS(fVar3 + -1.1))) {
    cVar1 = (ABS(fVar3 + -1.2) <= 1e-08) * '\x02';
  }
  return cVar1;
}



// FUNCTION 145fe56c6 FUN_145fe56c6 body=40 status=ok
// SIG undefined FUN_145fe56c6(void)

undefined8 FUN_145fe56c6(undefined8 param_1,int param_2)

{
  FUN_1415b23ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fe56ee FUN_145fe56ee body=40 status=ok
// SIG undefined FUN_145fe56ee(void)

undefined8 FUN_145fe56ee(undefined8 param_1,int param_2)

{
  FUN_145fe5716();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fe5716 FUN_145fe5716 body=258 status=ok
// SIG undefined FUN_145fe5716(void)

void FUN_145fe5716(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b979980;
  plVar3 = (longlong *)param_1[0x86];
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
  if (*(char *)(param_1 + 0x83) == '\x01') {
    if (param_1[0x81] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x83) = 0;
  }
  if (param_1[0x7f] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0x7f] = 0;
  }
  if (param_1[0x7e] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0x7e] = 0;
  }
  plVar3 = (longlong *)param_1[0x7d];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145fe581e FUN_145fe581e body=284 status=ok
// SIG undefined FUN_145fe581e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe581e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca50240) {
    FUN_144b3d300(&DAT_14ca50240);
    if (DAT_14ca50240 == -1) {
      FUN_145fe593a();
      FUN_140db5666(&DAT_14ca50198,0,&DAT_14ca50130,L"FShadowVolumeBoundProjectionVS",
                    L"/Engine/Private/ShadowProjectionVertexShader.usf",
                    L"ShadowVolumeBoundProjectionVS",0,1,FUN_1472ee700,FUN_1472ee6d8,&LAB_1472ee6d4,
                    &LAB_1472ee6d0,&LAB_14712ac0c,&LAB_14712ac08,0x100,0);
      _DAT_14ca50198 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049ad2);
      _Init_thread_footer(&DAT_14ca50240);
    }
  }
  return &DAT_14ca50198;
}



// FUNCTION 145fe593a FUN_145fe593a body=210 status=ok
// SIG undefined FUN_145fe593a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe593a(void)

{
  if ((DAT_14ca50197 & 2) == 0) {
    DAT_14ca50197 = DAT_14ca50197 | 2;
    _DAT_14ca50138 = L"FShadowVolumeBoundProjectionVS";
    _DAT_14ca50150 = FUN_146826540;
    _DAT_14ca50158 = FUN_146825d77;
    _DAT_14ca50160 = FUN_146825fd6;
    _DAT_14ca50168 = FUN_1407e02ea;
    _DAT_14ca50170 = FUN_146826273;
    _DAT_14ca50148 = FUN_1472ee6a0;
    _DAT_14ca50188 = 0xffffffff00000100;
    _DAT_14ca50190 = 8;
    DAT_14ca50194 = 0;
    _DAT_14ca50178 = &LAB_1472ee6cc;
    FUN_145fe5a0c();
    FUN_145fe5a86();
    FUN_1407e00cc(&DAT_14ca50130);
    return;
  }
  return;
}



// FUNCTION 145fe5a0c FUN_145fe5a0c body=121 status=ok
// SIG undefined FUN_145fe5a0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe5a0c(void)

{
  FUN_145fe5b02();
  _DAT_14ca566b0 = L"StencilingGeometryParameters";
  DAT_14ca566da = FUN_140850cc5();
  _DAT_14ca566b8 = FUN_145dfa232();
  _DAT_14ca566c8 = &LAB_14682652b;
  _DAT_14ca566d0 = 0x1000000e0;
  _DAT_14ca566d8 = 0;
  _DAT_14ca566c0 = DAT_14ca50140;
  DAT_14ca50140 = &DAT_14ca566b0;
  return;
}



// FUNCTION 145fe5a86 FUN_145fe5a86 body=123 status=ok
// SIG undefined FUN_145fe5a86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe5a86(void)

{
  _DAT_14ca57300 = L"BASE";
  DAT_14ca5732a = 4;
  _DAT_14ca57308 = FUN_140b35ae4();
  _DAT_14ca57310 = DAT_14ca50140;
  _DAT_14ca57318 = &LAB_14682652b;
  DAT_14ca50140 = &DAT_14ca57300;
  DAT_14ca50195 = DAT_14ca50195 + '\x01';
  _DAT_14ca57320 = 0x100000000;
  if (*(char *)(_DAT_14ca57308 + 100) != '\0') {
    DAT_14ca50196 = DAT_14ca50196 + '\x01';
  }
  return;
}



// FUNCTION 145fe5b02 FUN_145fe5b02 body=216 status=ok
// SIG undefined FUN_145fe5b02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe5b02(void)

{
  _DAT_14ca56710 = L"PreShadowToPreViewTranslation";
  DAT_14ca5673a = FUN_140850cc5();
  _DAT_14ca56718 = FUN_140ec6960();
  _DAT_14ca56728 = &LAB_14682652b;
  _DAT_14ca56730 = 0x1000000f8;
  _DAT_14ca56738 = 0;
  _DAT_14ca56720 = DAT_14ca50140;
  DAT_14ca50140 = &DAT_14ca56710;
  _DAT_14ca566e0 = L"InvReceiverInnerMatrix";
  DAT_14ca5670a = FUN_140850cc5();
  _DAT_14ca566e8 = FUN_140ec6960();
  _DAT_14ca566f8 = &LAB_14682652b;
  _DAT_14ca56700 = 0x1000000f2;
  _DAT_14ca56708 = 0;
  _DAT_14ca566f0 = DAT_14ca50140;
  DAT_14ca50140 = &DAT_14ca566e0;
  return;
}



// FUNCTION 145fe5bda FUN_145fe5bda body=284 status=ok
// SIG undefined FUN_145fe5bda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe5bda(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca727c8) {
    FUN_144b3d300(&DAT_14ca727c8);
    if (DAT_14ca727c8 == -1) {
      FUN_145fe5cf6();
      FUN_140db5666(&DAT_14ca72720,0,&DAT_14ca726b8,L"FWideCustomResolve0_1x_falsePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_1473489d6,FUN_1473489ae,&LAB_147348996,&LAB_147348992,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca72720 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b1ef);
      _Init_thread_footer(&DAT_14ca727c8);
    }
  }
  return &DAT_14ca72720;
}



// FUNCTION 145fe5cf6 FUN_145fe5cf6 body=210 status=ok
// SIG undefined FUN_145fe5cf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe5cf6(void)

{
  if ((DAT_14ca7271f & 2) == 0) {
    DAT_14ca7271f = DAT_14ca7271f | 2;
    _DAT_14ca726c0 = L"FWideCustomResolve0_1x_falsePS";
    _DAT_14ca726d8 = FUN_146826540;
    _DAT_14ca726e0 = FUN_146825d77;
    _DAT_14ca726e8 = FUN_146825fd6;
    _DAT_14ca726f0 = FUN_1407e02ea;
    _DAT_14ca726f8 = FUN_146826273;
    _DAT_14ca726d0 = FUN_147348964;
    _DAT_14ca72710 = 0xffffffff000000f0;
    _DAT_14ca72718 = 8;
    DAT_14ca7271c = 0;
    _DAT_14ca72700 = &LAB_14734898e;
    FUN_145fe5dc8();
    FUN_145fe5e42();
    FUN_1407e00cc(&DAT_14ca726b8);
    return;
  }
  return;
}



// FUNCTION 145fe5dc8 FUN_145fe5dc8 body=121 status=ok
// SIG undefined FUN_145fe5dc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe5dc8(void)

{
  FUN_145fe5ebe();
  _DAT_14ca74778 = &DAT_14a235a78;
  DAT_14ca747a2 = FUN_140850cc5();
  _DAT_14ca74780 = FUN_140fb78d0();
  _DAT_14ca74790 = &LAB_14682652b;
  _DAT_14ca74798 = 0x1000000e0;
  _DAT_14ca747a0 = 0;
  _DAT_14ca74788 = DAT_14ca726c8;
  DAT_14ca726c8 = &DAT_14ca74778;
  return;
}



// FUNCTION 145fe5e42 FUN_145fe5e42 body=123 status=ok
// SIG undefined FUN_145fe5e42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe5e42(void)

{
  _DAT_14ca74808 = L"BASE";
  DAT_14ca74832 = 4;
  _DAT_14ca74810 = FUN_140b35ae4();
  _DAT_14ca74818 = DAT_14ca726c8;
  _DAT_14ca74820 = &LAB_14682652b;
  DAT_14ca726c8 = &DAT_14ca74808;
  DAT_14ca7271d = DAT_14ca7271d + '\x01';
  _DAT_14ca74828 = 0x100000000;
  if (*(char *)(_DAT_14ca74810 + 100) != '\0') {
    DAT_14ca7271e = DAT_14ca7271e + '\x01';
  }
  return;
}



// FUNCTION 145fe5ebe FUN_145fe5ebe body=216 status=ok
// SIG undefined FUN_145fe5ebe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe5ebe(void)

{
  _DAT_14ca747d8 = L"ResolveOrigin";
  DAT_14ca74802 = FUN_140850cc5();
  _DAT_14ca747e0 = FUN_140ec6960();
  _DAT_14ca747f0 = &LAB_14682652b;
  _DAT_14ca747f8 = 0x1000000e8;
  _DAT_14ca74800 = 0;
  _DAT_14ca747e8 = DAT_14ca726c8;
  DAT_14ca726c8 = &DAT_14ca747d8;
  _DAT_14ca747a8 = L"FMaskTex";
  DAT_14ca747d2 = FUN_140850cc5();
  _DAT_14ca747b0 = FUN_140fb78d0();
  _DAT_14ca747c0 = &LAB_14682652b;
  _DAT_14ca747c8 = 0x1000000e4;
  _DAT_14ca747d0 = 0;
  _DAT_14ca747b8 = DAT_14ca726c8;
  DAT_14ca726c8 = &DAT_14ca747a8;
  return;
}



// FUNCTION 145fe5f96 FUN_145fe5f96 body=284 status=ok
// SIG undefined FUN_145fe5f96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe5f96(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca728f0) {
    FUN_144b3d300(&DAT_14ca728f0);
    if (DAT_14ca728f0 == -1) {
      FUN_145fe60b2();
      FUN_140db5666(&DAT_14ca72848,0,&DAT_14ca727e0,L"FWideCustomResolve2_0x_falsePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147348a80,FUN_147348a58,&LAB_147348a40,&LAB_147348a3c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca72848 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b1fb);
      _Init_thread_footer(&DAT_14ca728f0);
    }
  }
  return &DAT_14ca72848;
}



// FUNCTION 145fe60b2 FUN_145fe60b2 body=210 status=ok
// SIG undefined FUN_145fe60b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe60b2(void)

{
  if ((DAT_14ca72847 & 2) == 0) {
    DAT_14ca72847 = DAT_14ca72847 | 2;
    _DAT_14ca727e8 = L"FWideCustomResolve2_0x_falsePS";
    _DAT_14ca72800 = FUN_146826540;
    _DAT_14ca72808 = FUN_146825d77;
    _DAT_14ca72810 = FUN_146825fd6;
    _DAT_14ca72818 = FUN_1407e02ea;
    _DAT_14ca72820 = FUN_146826273;
    _DAT_14ca727f8 = FUN_147348a0e;
    _DAT_14ca72838 = 0xffffffff000000f0;
    _DAT_14ca72840 = 8;
    DAT_14ca72844 = 0;
    _DAT_14ca72828 = &LAB_147348a38;
    FUN_145fe6184();
    FUN_145fe61fe();
    FUN_1407e00cc(&DAT_14ca727e0);
    return;
  }
  return;
}



// FUNCTION 145fe6184 FUN_145fe6184 body=121 status=ok
// SIG undefined FUN_145fe6184(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe6184(void)

{
  FUN_145fe627a();
  _DAT_14ca74838 = &DAT_14a235a78;
  DAT_14ca74862 = FUN_140850cc5();
  _DAT_14ca74840 = FUN_140fb78d0();
  _DAT_14ca74850 = &LAB_14682652b;
  _DAT_14ca74858 = 0x1000000e0;
  _DAT_14ca74860 = 0;
  _DAT_14ca74848 = DAT_14ca727f0;
  DAT_14ca727f0 = &DAT_14ca74838;
  return;
}



// FUNCTION 145fe61fe FUN_145fe61fe body=123 status=ok
// SIG undefined FUN_145fe61fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe61fe(void)

{
  _DAT_14ca748c8 = L"BASE";
  DAT_14ca748f2 = 4;
  _DAT_14ca748d0 = FUN_140b35ae4();
  _DAT_14ca748d8 = DAT_14ca727f0;
  _DAT_14ca748e0 = &LAB_14682652b;
  DAT_14ca727f0 = &DAT_14ca748c8;
  DAT_14ca72845 = DAT_14ca72845 + '\x01';
  _DAT_14ca748e8 = 0x100000000;
  if (*(char *)(_DAT_14ca748d0 + 100) != '\0') {
    DAT_14ca72846 = DAT_14ca72846 + '\x01';
  }
  return;
}



// FUNCTION 145fe627a FUN_145fe627a body=216 status=ok
// SIG undefined FUN_145fe627a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe627a(void)

{
  _DAT_14ca74898 = L"ResolveOrigin";
  DAT_14ca748c2 = FUN_140850cc5();
  _DAT_14ca748a0 = FUN_140ec6960();
  _DAT_14ca748b0 = &LAB_14682652b;
  _DAT_14ca748b8 = 0x1000000e8;
  _DAT_14ca748c0 = 0;
  _DAT_14ca748a8 = DAT_14ca727f0;
  DAT_14ca727f0 = &DAT_14ca74898;
  _DAT_14ca74868 = L"FMaskTex";
  DAT_14ca74892 = FUN_140850cc5();
  _DAT_14ca74870 = FUN_140fb78d0();
  _DAT_14ca74880 = &LAB_14682652b;
  _DAT_14ca74888 = 0x1000000e4;
  _DAT_14ca74890 = 0;
  _DAT_14ca74878 = DAT_14ca727f0;
  DAT_14ca727f0 = &DAT_14ca74868;
  return;
}



// FUNCTION 145fe6352 FUN_145fe6352 body=284 status=ok
// SIG undefined FUN_145fe6352(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe6352(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca72a18) {
    FUN_144b3d300(&DAT_14ca72a18);
    if (DAT_14ca72a18 == -1) {
      FUN_145fe646e();
      FUN_140db5666(&DAT_14ca72970,0,&DAT_14ca72908,L"FWideCustomResolve2_1x_falsePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147348b2a,FUN_147348b02,&LAB_147348aea,&LAB_147348ae6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca72970 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b207);
      _Init_thread_footer(&DAT_14ca72a18);
    }
  }
  return &DAT_14ca72970;
}



// FUNCTION 145fe646e FUN_145fe646e body=210 status=ok
// SIG undefined FUN_145fe646e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe646e(void)

{
  if ((DAT_14ca7296f & 2) == 0) {
    DAT_14ca7296f = DAT_14ca7296f | 2;
    _DAT_14ca72910 = L"FWideCustomResolve2_1x_falsePS";
    _DAT_14ca72928 = FUN_146826540;
    _DAT_14ca72930 = FUN_146825d77;
    _DAT_14ca72938 = FUN_146825fd6;
    _DAT_14ca72940 = FUN_1407e02ea;
    _DAT_14ca72948 = FUN_146826273;
    _DAT_14ca72920 = FUN_147348ab8;
    _DAT_14ca72960 = 0xffffffff000000f0;
    _DAT_14ca72968 = 8;
    DAT_14ca7296c = 0;
    _DAT_14ca72950 = &LAB_147348ae2;
    FUN_145fe6540();
    FUN_145fe65ba();
    FUN_1407e00cc(&DAT_14ca72908);
    return;
  }
  return;
}



// FUNCTION 145fe6540 FUN_145fe6540 body=121 status=ok
// SIG undefined FUN_145fe6540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe6540(void)

{
  FUN_145fe6636();
  _DAT_14ca748f8 = &DAT_14a235a78;
  DAT_14ca74922 = FUN_140850cc5();
  _DAT_14ca74900 = FUN_140fb78d0();
  _DAT_14ca74910 = &LAB_14682652b;
  _DAT_14ca74918 = 0x1000000e0;
  _DAT_14ca74920 = 0;
  _DAT_14ca74908 = DAT_14ca72918;
  DAT_14ca72918 = &DAT_14ca748f8;
  return;
}



// FUNCTION 145fe65ba FUN_145fe65ba body=123 status=ok
// SIG undefined FUN_145fe65ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe65ba(void)

{
  _DAT_14ca74988 = L"BASE";
  DAT_14ca749b2 = 4;
  _DAT_14ca74990 = FUN_140b35ae4();
  _DAT_14ca74998 = DAT_14ca72918;
  _DAT_14ca749a0 = &LAB_14682652b;
  DAT_14ca72918 = &DAT_14ca74988;
  DAT_14ca7296d = DAT_14ca7296d + '\x01';
  _DAT_14ca749a8 = 0x100000000;
  if (*(char *)(_DAT_14ca74990 + 100) != '\0') {
    DAT_14ca7296e = DAT_14ca7296e + '\x01';
  }
  return;
}



// FUNCTION 145fe6636 FUN_145fe6636 body=216 status=ok
// SIG undefined FUN_145fe6636(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe6636(void)

{
  _DAT_14ca74958 = L"ResolveOrigin";
  DAT_14ca74982 = FUN_140850cc5();
  _DAT_14ca74960 = FUN_140ec6960();
  _DAT_14ca74970 = &LAB_14682652b;
  _DAT_14ca74978 = 0x1000000e8;
  _DAT_14ca74980 = 0;
  _DAT_14ca74968 = DAT_14ca72918;
  DAT_14ca72918 = &DAT_14ca74958;
  _DAT_14ca74928 = L"FMaskTex";
  DAT_14ca74952 = FUN_140850cc5();
  _DAT_14ca74930 = FUN_140fb78d0();
  _DAT_14ca74940 = &LAB_14682652b;
  _DAT_14ca74948 = 0x1000000e4;
  _DAT_14ca74950 = 0;
  _DAT_14ca74938 = DAT_14ca72918;
  DAT_14ca72918 = &DAT_14ca74928;
  return;
}



// FUNCTION 145fe670e FUN_145fe670e body=284 status=ok
// SIG undefined FUN_145fe670e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe670e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca72b40) {
    FUN_144b3d300(&DAT_14ca72b40);
    if (DAT_14ca72b40 == -1) {
      FUN_145fe682a();
      FUN_140db5666(&DAT_14ca72a98,0,&DAT_14ca72a30,L"FWideCustomResolve2_2x_falsePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147348bd4,FUN_147348bac,&LAB_147348b94,&LAB_147348b90,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca72a98 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b213);
      _Init_thread_footer(&DAT_14ca72b40);
    }
  }
  return &DAT_14ca72a98;
}



// FUNCTION 145fe682a FUN_145fe682a body=210 status=ok
// SIG undefined FUN_145fe682a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe682a(void)

{
  if ((DAT_14ca72a97 & 2) == 0) {
    DAT_14ca72a97 = DAT_14ca72a97 | 2;
    _DAT_14ca72a38 = L"FWideCustomResolve2_2x_falsePS";
    _DAT_14ca72a50 = FUN_146826540;
    _DAT_14ca72a58 = FUN_146825d77;
    _DAT_14ca72a60 = FUN_146825fd6;
    _DAT_14ca72a68 = FUN_1407e02ea;
    _DAT_14ca72a70 = FUN_146826273;
    _DAT_14ca72a48 = FUN_147348b62;
    _DAT_14ca72a88 = 0xffffffff000000f0;
    _DAT_14ca72a90 = 8;
    DAT_14ca72a94 = 0;
    _DAT_14ca72a78 = &LAB_147348b8c;
    FUN_145fe68fc();
    FUN_145fe6976();
    FUN_1407e00cc(&DAT_14ca72a30);
    return;
  }
  return;
}



// FUNCTION 145fe68fc FUN_145fe68fc body=121 status=ok
// SIG undefined FUN_145fe68fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe68fc(void)

{
  FUN_145fe69f2();
  _DAT_14ca749b8 = &DAT_14a235a78;
  DAT_14ca749e2 = FUN_140850cc5();
  _DAT_14ca749c0 = FUN_140fb78d0();
  _DAT_14ca749d0 = &LAB_14682652b;
  _DAT_14ca749d8 = 0x1000000e0;
  _DAT_14ca749e0 = 0;
  _DAT_14ca749c8 = DAT_14ca72a40;
  DAT_14ca72a40 = &DAT_14ca749b8;
  return;
}



// FUNCTION 145fe6976 FUN_145fe6976 body=123 status=ok
// SIG undefined FUN_145fe6976(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe6976(void)

{
  _DAT_14ca74a48 = L"BASE";
  DAT_14ca74a72 = 4;
  _DAT_14ca74a50 = FUN_140b35ae4();
  _DAT_14ca74a58 = DAT_14ca72a40;
  _DAT_14ca74a60 = &LAB_14682652b;
  DAT_14ca72a40 = &DAT_14ca74a48;
  DAT_14ca72a95 = DAT_14ca72a95 + '\x01';
  _DAT_14ca74a68 = 0x100000000;
  if (*(char *)(_DAT_14ca74a50 + 100) != '\0') {
    DAT_14ca72a96 = DAT_14ca72a96 + '\x01';
  }
  return;
}



// FUNCTION 145fe69f2 FUN_145fe69f2 body=216 status=ok
// SIG undefined FUN_145fe69f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe69f2(void)

{
  _DAT_14ca74a18 = L"ResolveOrigin";
  DAT_14ca74a42 = FUN_140850cc5();
  _DAT_14ca74a20 = FUN_140ec6960();
  _DAT_14ca74a30 = &LAB_14682652b;
  _DAT_14ca74a38 = 0x1000000e8;
  _DAT_14ca74a40 = 0;
  _DAT_14ca74a28 = DAT_14ca72a40;
  DAT_14ca72a40 = &DAT_14ca74a18;
  _DAT_14ca749e8 = L"FMaskTex";
  DAT_14ca74a12 = FUN_140850cc5();
  _DAT_14ca749f0 = FUN_140fb78d0();
  _DAT_14ca74a00 = &LAB_14682652b;
  _DAT_14ca74a08 = 0x1000000e4;
  _DAT_14ca74a10 = 0;
  _DAT_14ca749f8 = DAT_14ca72a40;
  DAT_14ca72a40 = &DAT_14ca749e8;
  return;
}



// FUNCTION 145fe6aca FUN_145fe6aca body=284 status=ok
// SIG undefined FUN_145fe6aca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe6aca(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca72c68) {
    FUN_144b3d300(&DAT_14ca72c68);
    if (DAT_14ca72c68 == -1) {
      FUN_145fe6be6();
      FUN_140db5666(&DAT_14ca72bc0,0,&DAT_14ca72b58,L"FWideCustomResolve2_3x_falsePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147348c7e,FUN_147348c56,&LAB_147348c3e,&LAB_147348c3a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca72bc0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b21f);
      _Init_thread_footer(&DAT_14ca72c68);
    }
  }
  return &DAT_14ca72bc0;
}



// FUNCTION 145fe6be6 FUN_145fe6be6 body=210 status=ok
// SIG undefined FUN_145fe6be6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe6be6(void)

{
  if ((DAT_14ca72bbf & 2) == 0) {
    DAT_14ca72bbf = DAT_14ca72bbf | 2;
    _DAT_14ca72b60 = L"FWideCustomResolve2_3x_falsePS";
    _DAT_14ca72b78 = FUN_146826540;
    _DAT_14ca72b80 = FUN_146825d77;
    _DAT_14ca72b88 = FUN_146825fd6;
    _DAT_14ca72b90 = FUN_1407e02ea;
    _DAT_14ca72b98 = FUN_146826273;
    _DAT_14ca72b70 = FUN_147348c0c;
    _DAT_14ca72bb0 = 0xffffffff000000f0;
    _DAT_14ca72bb8 = 8;
    DAT_14ca72bbc = 0;
    _DAT_14ca72ba0 = &LAB_147348c36;
    FUN_145fe6cb8();
    FUN_145fe6d32();
    FUN_1407e00cc(&DAT_14ca72b58);
    return;
  }
  return;
}



// FUNCTION 145fe6cb8 FUN_145fe6cb8 body=121 status=ok
// SIG undefined FUN_145fe6cb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe6cb8(void)

{
  FUN_145fe6dae();
  _DAT_14ca74a78 = &DAT_14a235a78;
  DAT_14ca74aa2 = FUN_140850cc5();
  _DAT_14ca74a80 = FUN_140fb78d0();
  _DAT_14ca74a90 = &LAB_14682652b;
  _DAT_14ca74a98 = 0x1000000e0;
  _DAT_14ca74aa0 = 0;
  _DAT_14ca74a88 = DAT_14ca72b68;
  DAT_14ca72b68 = &DAT_14ca74a78;
  return;
}



// FUNCTION 145fe6d32 FUN_145fe6d32 body=123 status=ok
// SIG undefined FUN_145fe6d32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe6d32(void)

{
  _DAT_14ca74b08 = L"BASE";
  DAT_14ca74b32 = 4;
  _DAT_14ca74b10 = FUN_140b35ae4();
  _DAT_14ca74b18 = DAT_14ca72b68;
  _DAT_14ca74b20 = &LAB_14682652b;
  DAT_14ca72b68 = &DAT_14ca74b08;
  DAT_14ca72bbd = DAT_14ca72bbd + '\x01';
  _DAT_14ca74b28 = 0x100000000;
  if (*(char *)(_DAT_14ca74b10 + 100) != '\0') {
    DAT_14ca72bbe = DAT_14ca72bbe + '\x01';
  }
  return;
}



// FUNCTION 145fe6dae FUN_145fe6dae body=216 status=ok
// SIG undefined FUN_145fe6dae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe6dae(void)

{
  _DAT_14ca74ad8 = L"ResolveOrigin";
  DAT_14ca74b02 = FUN_140850cc5();
  _DAT_14ca74ae0 = FUN_140ec6960();
  _DAT_14ca74af0 = &LAB_14682652b;
  _DAT_14ca74af8 = 0x1000000e8;
  _DAT_14ca74b00 = 0;
  _DAT_14ca74ae8 = DAT_14ca72b68;
  DAT_14ca72b68 = &DAT_14ca74ad8;
  _DAT_14ca74aa8 = L"FMaskTex";
  DAT_14ca74ad2 = FUN_140850cc5();
  _DAT_14ca74ab0 = FUN_140fb78d0();
  _DAT_14ca74ac0 = &LAB_14682652b;
  _DAT_14ca74ac8 = 0x1000000e4;
  _DAT_14ca74ad0 = 0;
  _DAT_14ca74ab8 = DAT_14ca72b68;
  DAT_14ca72b68 = &DAT_14ca74aa8;
  return;
}



// FUNCTION 145fe6e86 FUN_145fe6e86 body=284 status=ok
// SIG undefined FUN_145fe6e86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe6e86(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca72d90) {
    FUN_144b3d300(&DAT_14ca72d90);
    if (DAT_14ca72d90 == -1) {
      FUN_145fe6fa2();
      FUN_140db5666(&DAT_14ca72ce8,0,&DAT_14ca72c80,L"FWideCustomResolve4_0x_falsePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147348d28,FUN_147348d00,&LAB_147348ce8,&LAB_147348ce4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca72ce8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b22b);
      _Init_thread_footer(&DAT_14ca72d90);
    }
  }
  return &DAT_14ca72ce8;
}



// FUNCTION 145fe6fa2 FUN_145fe6fa2 body=210 status=ok
// SIG undefined FUN_145fe6fa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe6fa2(void)

{
  if ((DAT_14ca72ce7 & 2) == 0) {
    DAT_14ca72ce7 = DAT_14ca72ce7 | 2;
    _DAT_14ca72c88 = L"FWideCustomResolve4_0x_falsePS";
    _DAT_14ca72ca0 = FUN_146826540;
    _DAT_14ca72ca8 = FUN_146825d77;
    _DAT_14ca72cb0 = FUN_146825fd6;
    _DAT_14ca72cb8 = FUN_1407e02ea;
    _DAT_14ca72cc0 = FUN_146826273;
    _DAT_14ca72c98 = FUN_147348cb6;
    _DAT_14ca72cd8 = 0xffffffff000000f0;
    _DAT_14ca72ce0 = 8;
    DAT_14ca72ce4 = 0;
    _DAT_14ca72cc8 = &LAB_147348ce0;
    FUN_145fe7074();
    FUN_145fe70ee();
    FUN_1407e00cc(&DAT_14ca72c80);
    return;
  }
  return;
}



// FUNCTION 145fe7074 FUN_145fe7074 body=121 status=ok
// SIG undefined FUN_145fe7074(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe7074(void)

{
  FUN_145fe716a();
  _DAT_14ca74b38 = &DAT_14a235a78;
  DAT_14ca74b62 = FUN_140850cc5();
  _DAT_14ca74b40 = FUN_140fb78d0();
  _DAT_14ca74b50 = &LAB_14682652b;
  _DAT_14ca74b58 = 0x1000000e0;
  _DAT_14ca74b60 = 0;
  _DAT_14ca74b48 = DAT_14ca72c90;
  DAT_14ca72c90 = &DAT_14ca74b38;
  return;
}



// FUNCTION 145fe70ee FUN_145fe70ee body=123 status=ok
// SIG undefined FUN_145fe70ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe70ee(void)

{
  _DAT_14ca74bc8 = L"BASE";
  DAT_14ca74bf2 = 4;
  _DAT_14ca74bd0 = FUN_140b35ae4();
  _DAT_14ca74bd8 = DAT_14ca72c90;
  _DAT_14ca74be0 = &LAB_14682652b;
  DAT_14ca72c90 = &DAT_14ca74bc8;
  DAT_14ca72ce5 = DAT_14ca72ce5 + '\x01';
  _DAT_14ca74be8 = 0x100000000;
  if (*(char *)(_DAT_14ca74bd0 + 100) != '\0') {
    DAT_14ca72ce6 = DAT_14ca72ce6 + '\x01';
  }
  return;
}



// FUNCTION 145fe716a FUN_145fe716a body=216 status=ok
// SIG undefined FUN_145fe716a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe716a(void)

{
  _DAT_14ca74b98 = L"ResolveOrigin";
  DAT_14ca74bc2 = FUN_140850cc5();
  _DAT_14ca74ba0 = FUN_140ec6960();
  _DAT_14ca74bb0 = &LAB_14682652b;
  _DAT_14ca74bb8 = 0x1000000e8;
  _DAT_14ca74bc0 = 0;
  _DAT_14ca74ba8 = DAT_14ca72c90;
  DAT_14ca72c90 = &DAT_14ca74b98;
  _DAT_14ca74b68 = L"FMaskTex";
  DAT_14ca74b92 = FUN_140850cc5();
  _DAT_14ca74b70 = FUN_140fb78d0();
  _DAT_14ca74b80 = &LAB_14682652b;
  _DAT_14ca74b88 = 0x1000000e4;
  _DAT_14ca74b90 = 0;
  _DAT_14ca74b78 = DAT_14ca72c90;
  DAT_14ca72c90 = &DAT_14ca74b68;
  return;
}



// FUNCTION 145fe7242 FUN_145fe7242 body=284 status=ok
// SIG undefined FUN_145fe7242(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe7242(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca72eb8) {
    FUN_144b3d300(&DAT_14ca72eb8);
    if (DAT_14ca72eb8 == -1) {
      FUN_145fe735e();
      FUN_140db5666(&DAT_14ca72e10,0,&DAT_14ca72da8,L"FWideCustomResolve4_1x_falsePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147348dd2,FUN_147348daa,&LAB_147348d92,&LAB_147348d8e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca72e10 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b237);
      _Init_thread_footer(&DAT_14ca72eb8);
    }
  }
  return &DAT_14ca72e10;
}



// FUNCTION 145fe735e FUN_145fe735e body=210 status=ok
// SIG undefined FUN_145fe735e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe735e(void)

{
  if ((DAT_14ca72e0f & 2) == 0) {
    DAT_14ca72e0f = DAT_14ca72e0f | 2;
    _DAT_14ca72db0 = L"FWideCustomResolve4_1x_falsePS";
    _DAT_14ca72dc8 = FUN_146826540;
    _DAT_14ca72dd0 = FUN_146825d77;
    _DAT_14ca72dd8 = FUN_146825fd6;
    _DAT_14ca72de0 = FUN_1407e02ea;
    _DAT_14ca72de8 = FUN_146826273;
    _DAT_14ca72dc0 = FUN_147348d60;
    _DAT_14ca72e00 = 0xffffffff000000f0;
    _DAT_14ca72e08 = 8;
    DAT_14ca72e0c = 0;
    _DAT_14ca72df0 = &LAB_147348d8a;
    FUN_145fe7430();
    FUN_145fe74aa();
    FUN_1407e00cc(&DAT_14ca72da8);
    return;
  }
  return;
}



// FUNCTION 145fe7430 FUN_145fe7430 body=121 status=ok
// SIG undefined FUN_145fe7430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe7430(void)

{
  FUN_145fe7526();
  _DAT_14ca74bf8 = &DAT_14a235a78;
  DAT_14ca74c22 = FUN_140850cc5();
  _DAT_14ca74c00 = FUN_140fb78d0();
  _DAT_14ca74c10 = &LAB_14682652b;
  _DAT_14ca74c18 = 0x1000000e0;
  _DAT_14ca74c20 = 0;
  _DAT_14ca74c08 = DAT_14ca72db8;
  DAT_14ca72db8 = &DAT_14ca74bf8;
  return;
}



// FUNCTION 145fe74aa FUN_145fe74aa body=123 status=ok
// SIG undefined FUN_145fe74aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe74aa(void)

{
  _DAT_14ca74c88 = L"BASE";
  DAT_14ca74cb2 = 4;
  _DAT_14ca74c90 = FUN_140b35ae4();
  _DAT_14ca74c98 = DAT_14ca72db8;
  _DAT_14ca74ca0 = &LAB_14682652b;
  DAT_14ca72db8 = &DAT_14ca74c88;
  DAT_14ca72e0d = DAT_14ca72e0d + '\x01';
  _DAT_14ca74ca8 = 0x100000000;
  if (*(char *)(_DAT_14ca74c90 + 100) != '\0') {
    DAT_14ca72e0e = DAT_14ca72e0e + '\x01';
  }
  return;
}



// FUNCTION 145fe7526 FUN_145fe7526 body=216 status=ok
// SIG undefined FUN_145fe7526(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe7526(void)

{
  _DAT_14ca74c58 = L"ResolveOrigin";
  DAT_14ca74c82 = FUN_140850cc5();
  _DAT_14ca74c60 = FUN_140ec6960();
  _DAT_14ca74c70 = &LAB_14682652b;
  _DAT_14ca74c78 = 0x1000000e8;
  _DAT_14ca74c80 = 0;
  _DAT_14ca74c68 = DAT_14ca72db8;
  DAT_14ca72db8 = &DAT_14ca74c58;
  _DAT_14ca74c28 = L"FMaskTex";
  DAT_14ca74c52 = FUN_140850cc5();
  _DAT_14ca74c30 = FUN_140fb78d0();
  _DAT_14ca74c40 = &LAB_14682652b;
  _DAT_14ca74c48 = 0x1000000e4;
  _DAT_14ca74c50 = 0;
  _DAT_14ca74c38 = DAT_14ca72db8;
  DAT_14ca72db8 = &DAT_14ca74c28;
  return;
}



// FUNCTION 145fe75fe FUN_145fe75fe body=284 status=ok
// SIG undefined FUN_145fe75fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe75fe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca72fe0) {
    FUN_144b3d300(&DAT_14ca72fe0);
    if (DAT_14ca72fe0 == -1) {
      FUN_145fe771a();
      FUN_140db5666(&DAT_14ca72f38,0,&DAT_14ca72ed0,L"FWideCustomResolve4_2x_falsePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147348e7c,FUN_147348e54,&LAB_147348e3c,&LAB_147348e38,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca72f38 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b243);
      _Init_thread_footer(&DAT_14ca72fe0);
    }
  }
  return &DAT_14ca72f38;
}



// FUNCTION 145fe771a FUN_145fe771a body=210 status=ok
// SIG undefined FUN_145fe771a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe771a(void)

{
  if ((DAT_14ca72f37 & 2) == 0) {
    DAT_14ca72f37 = DAT_14ca72f37 | 2;
    _DAT_14ca72ed8 = L"FWideCustomResolve4_2x_falsePS";
    _DAT_14ca72ef0 = FUN_146826540;
    _DAT_14ca72ef8 = FUN_146825d77;
    _DAT_14ca72f00 = FUN_146825fd6;
    _DAT_14ca72f08 = FUN_1407e02ea;
    _DAT_14ca72f10 = FUN_146826273;
    _DAT_14ca72ee8 = FUN_147348e0a;
    _DAT_14ca72f28 = 0xffffffff000000f0;
    _DAT_14ca72f30 = 8;
    DAT_14ca72f34 = 0;
    _DAT_14ca72f18 = &LAB_147348e34;
    FUN_145fe77ec();
    FUN_145fe7866();
    FUN_1407e00cc(&DAT_14ca72ed0);
    return;
  }
  return;
}



// FUNCTION 145fe77ec FUN_145fe77ec body=121 status=ok
// SIG undefined FUN_145fe77ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe77ec(void)

{
  FUN_145fe78e2();
  _DAT_14ca74cb8 = &DAT_14a235a78;
  DAT_14ca74ce2 = FUN_140850cc5();
  _DAT_14ca74cc0 = FUN_140fb78d0();
  _DAT_14ca74cd0 = &LAB_14682652b;
  _DAT_14ca74cd8 = 0x1000000e0;
  _DAT_14ca74ce0 = 0;
  _DAT_14ca74cc8 = DAT_14ca72ee0;
  DAT_14ca72ee0 = &DAT_14ca74cb8;
  return;
}



// FUNCTION 145fe7866 FUN_145fe7866 body=123 status=ok
// SIG undefined FUN_145fe7866(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe7866(void)

{
  _DAT_14ca74d48 = L"BASE";
  DAT_14ca74d72 = 4;
  _DAT_14ca74d50 = FUN_140b35ae4();
  _DAT_14ca74d58 = DAT_14ca72ee0;
  _DAT_14ca74d60 = &LAB_14682652b;
  DAT_14ca72ee0 = &DAT_14ca74d48;
  DAT_14ca72f35 = DAT_14ca72f35 + '\x01';
  _DAT_14ca74d68 = 0x100000000;
  if (*(char *)(_DAT_14ca74d50 + 100) != '\0') {
    DAT_14ca72f36 = DAT_14ca72f36 + '\x01';
  }
  return;
}



// FUNCTION 145fe78e2 FUN_145fe78e2 body=216 status=ok
// SIG undefined FUN_145fe78e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe78e2(void)

{
  _DAT_14ca74d18 = L"ResolveOrigin";
  DAT_14ca74d42 = FUN_140850cc5();
  _DAT_14ca74d20 = FUN_140ec6960();
  _DAT_14ca74d30 = &LAB_14682652b;
  _DAT_14ca74d38 = 0x1000000e8;
  _DAT_14ca74d40 = 0;
  _DAT_14ca74d28 = DAT_14ca72ee0;
  DAT_14ca72ee0 = &DAT_14ca74d18;
  _DAT_14ca74ce8 = L"FMaskTex";
  DAT_14ca74d12 = FUN_140850cc5();
  _DAT_14ca74cf0 = FUN_140fb78d0();
  _DAT_14ca74d00 = &LAB_14682652b;
  _DAT_14ca74d08 = 0x1000000e4;
  _DAT_14ca74d10 = 0;
  _DAT_14ca74cf8 = DAT_14ca72ee0;
  DAT_14ca72ee0 = &DAT_14ca74ce8;
  return;
}



// FUNCTION 145fe79ba FUN_145fe79ba body=284 status=ok
// SIG undefined FUN_145fe79ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe79ba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca73108) {
    FUN_144b3d300(&DAT_14ca73108);
    if (DAT_14ca73108 == -1) {
      FUN_145fe7ad6();
      FUN_140db5666(&DAT_14ca73060,0,&DAT_14ca72ff8,L"FWideCustomResolve4_3x_falsePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147348f26,FUN_147348efe,&LAB_147348ee6,&LAB_147348ee2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca73060 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b24f);
      _Init_thread_footer(&DAT_14ca73108);
    }
  }
  return &DAT_14ca73060;
}



// FUNCTION 145fe7ad6 FUN_145fe7ad6 body=210 status=ok
// SIG undefined FUN_145fe7ad6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe7ad6(void)

{
  if ((DAT_14ca7305f & 2) == 0) {
    DAT_14ca7305f = DAT_14ca7305f | 2;
    _DAT_14ca73000 = L"FWideCustomResolve4_3x_falsePS";
    _DAT_14ca73018 = FUN_146826540;
    _DAT_14ca73020 = FUN_146825d77;
    _DAT_14ca73028 = FUN_146825fd6;
    _DAT_14ca73030 = FUN_1407e02ea;
    _DAT_14ca73038 = FUN_146826273;
    _DAT_14ca73010 = FUN_147348eb4;
    _DAT_14ca73050 = 0xffffffff000000f0;
    _DAT_14ca73058 = 8;
    DAT_14ca7305c = 0;
    _DAT_14ca73040 = &LAB_147348ede;
    FUN_145fe7ba8();
    FUN_145fe7c22();
    FUN_1407e00cc(&DAT_14ca72ff8);
    return;
  }
  return;
}



// FUNCTION 145fe7ba8 FUN_145fe7ba8 body=121 status=ok
// SIG undefined FUN_145fe7ba8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe7ba8(void)

{
  FUN_145fe7c9e();
  _DAT_14ca74d78 = &DAT_14a235a78;
  DAT_14ca74da2 = FUN_140850cc5();
  _DAT_14ca74d80 = FUN_140fb78d0();
  _DAT_14ca74d90 = &LAB_14682652b;
  _DAT_14ca74d98 = 0x1000000e0;
  _DAT_14ca74da0 = 0;
  _DAT_14ca74d88 = DAT_14ca73008;
  DAT_14ca73008 = &DAT_14ca74d78;
  return;
}



// FUNCTION 145fe7c22 FUN_145fe7c22 body=123 status=ok
// SIG undefined FUN_145fe7c22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe7c22(void)

{
  _DAT_14ca74e08 = L"BASE";
  DAT_14ca74e32 = 4;
  _DAT_14ca74e10 = FUN_140b35ae4();
  _DAT_14ca74e18 = DAT_14ca73008;
  _DAT_14ca74e20 = &LAB_14682652b;
  DAT_14ca73008 = &DAT_14ca74e08;
  DAT_14ca7305d = DAT_14ca7305d + '\x01';
  _DAT_14ca74e28 = 0x100000000;
  if (*(char *)(_DAT_14ca74e10 + 100) != '\0') {
    DAT_14ca7305e = DAT_14ca7305e + '\x01';
  }
  return;
}



// FUNCTION 145fe7c9e FUN_145fe7c9e body=216 status=ok
// SIG undefined FUN_145fe7c9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe7c9e(void)

{
  _DAT_14ca74dd8 = L"ResolveOrigin";
  DAT_14ca74e02 = FUN_140850cc5();
  _DAT_14ca74de0 = FUN_140ec6960();
  _DAT_14ca74df0 = &LAB_14682652b;
  _DAT_14ca74df8 = 0x1000000e8;
  _DAT_14ca74e00 = 0;
  _DAT_14ca74de8 = DAT_14ca73008;
  DAT_14ca73008 = &DAT_14ca74dd8;
  _DAT_14ca74da8 = L"FMaskTex";
  DAT_14ca74dd2 = FUN_140850cc5();
  _DAT_14ca74db0 = FUN_140fb78d0();
  _DAT_14ca74dc0 = &LAB_14682652b;
  _DAT_14ca74dc8 = 0x1000000e4;
  _DAT_14ca74dd0 = 0;
  _DAT_14ca74db8 = DAT_14ca73008;
  DAT_14ca73008 = &DAT_14ca74da8;
  return;
}



// FUNCTION 145fe7d76 FUN_145fe7d76 body=284 status=ok
// SIG undefined FUN_145fe7d76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe7d76(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca73230) {
    FUN_144b3d300(&DAT_14ca73230);
    if (DAT_14ca73230 == -1) {
      FUN_145fe7e92();
      FUN_140db5666(&DAT_14ca73188,0,&DAT_14ca73120,L"FWideCustomResolve8_0x_falsePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147348fd0,FUN_147348fa8,&LAB_147348f90,&LAB_147348f8c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca73188 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b25b);
      _Init_thread_footer(&DAT_14ca73230);
    }
  }
  return &DAT_14ca73188;
}



// FUNCTION 145fe7e92 FUN_145fe7e92 body=210 status=ok
// SIG undefined FUN_145fe7e92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe7e92(void)

{
  if ((DAT_14ca73187 & 2) == 0) {
    DAT_14ca73187 = DAT_14ca73187 | 2;
    _DAT_14ca73128 = L"FWideCustomResolve8_0x_falsePS";
    _DAT_14ca73140 = FUN_146826540;
    _DAT_14ca73148 = FUN_146825d77;
    _DAT_14ca73150 = FUN_146825fd6;
    _DAT_14ca73158 = FUN_1407e02ea;
    _DAT_14ca73160 = FUN_146826273;
    _DAT_14ca73138 = FUN_147348f5e;
    _DAT_14ca73178 = 0xffffffff000000f0;
    _DAT_14ca73180 = 8;
    DAT_14ca73184 = 0;
    _DAT_14ca73168 = &LAB_147348f88;
    FUN_145fe7f64();
    FUN_145fe7fde();
    FUN_1407e00cc(&DAT_14ca73120);
    return;
  }
  return;
}



// FUNCTION 145fe7f64 FUN_145fe7f64 body=121 status=ok
// SIG undefined FUN_145fe7f64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe7f64(void)

{
  FUN_145fe805a();
  _DAT_14ca74e38 = &DAT_14a235a78;
  DAT_14ca74e62 = FUN_140850cc5();
  _DAT_14ca74e40 = FUN_140fb78d0();
  _DAT_14ca74e50 = &LAB_14682652b;
  _DAT_14ca74e58 = 0x1000000e0;
  _DAT_14ca74e60 = 0;
  _DAT_14ca74e48 = DAT_14ca73130;
  DAT_14ca73130 = &DAT_14ca74e38;
  return;
}



// FUNCTION 145fe7fde FUN_145fe7fde body=123 status=ok
// SIG undefined FUN_145fe7fde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe7fde(void)

{
  _DAT_14ca74ec8 = L"BASE";
  DAT_14ca74ef2 = 4;
  _DAT_14ca74ed0 = FUN_140b35ae4();
  _DAT_14ca74ed8 = DAT_14ca73130;
  _DAT_14ca74ee0 = &LAB_14682652b;
  DAT_14ca73130 = &DAT_14ca74ec8;
  DAT_14ca73185 = DAT_14ca73185 + '\x01';
  _DAT_14ca74ee8 = 0x100000000;
  if (*(char *)(_DAT_14ca74ed0 + 100) != '\0') {
    DAT_14ca73186 = DAT_14ca73186 + '\x01';
  }
  return;
}



// FUNCTION 145fe805a FUN_145fe805a body=216 status=ok
// SIG undefined FUN_145fe805a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe805a(void)

{
  _DAT_14ca74e98 = L"ResolveOrigin";
  DAT_14ca74ec2 = FUN_140850cc5();
  _DAT_14ca74ea0 = FUN_140ec6960();
  _DAT_14ca74eb0 = &LAB_14682652b;
  _DAT_14ca74eb8 = 0x1000000e8;
  _DAT_14ca74ec0 = 0;
  _DAT_14ca74ea8 = DAT_14ca73130;
  DAT_14ca73130 = &DAT_14ca74e98;
  _DAT_14ca74e68 = L"FMaskTex";
  DAT_14ca74e92 = FUN_140850cc5();
  _DAT_14ca74e70 = FUN_140fb78d0();
  _DAT_14ca74e80 = &LAB_14682652b;
  _DAT_14ca74e88 = 0x1000000e4;
  _DAT_14ca74e90 = 0;
  _DAT_14ca74e78 = DAT_14ca73130;
  DAT_14ca73130 = &DAT_14ca74e68;
  return;
}



// FUNCTION 145fe8132 FUN_145fe8132 body=284 status=ok
// SIG undefined FUN_145fe8132(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe8132(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca73358) {
    FUN_144b3d300(&DAT_14ca73358);
    if (DAT_14ca73358 == -1) {
      FUN_145fe824e();
      FUN_140db5666(&DAT_14ca732b0,0,&DAT_14ca73248,L"FWideCustomResolve8_1x_falsePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_14734907a,FUN_147349052,&LAB_14734903a,&LAB_147349036,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca732b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b267);
      _Init_thread_footer(&DAT_14ca73358);
    }
  }
  return &DAT_14ca732b0;
}



// FUNCTION 145fe824e FUN_145fe824e body=210 status=ok
// SIG undefined FUN_145fe824e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe824e(void)

{
  if ((DAT_14ca732af & 2) == 0) {
    DAT_14ca732af = DAT_14ca732af | 2;
    _DAT_14ca73250 = L"FWideCustomResolve8_1x_falsePS";
    _DAT_14ca73268 = FUN_146826540;
    _DAT_14ca73270 = FUN_146825d77;
    _DAT_14ca73278 = FUN_146825fd6;
    _DAT_14ca73280 = FUN_1407e02ea;
    _DAT_14ca73288 = FUN_146826273;
    _DAT_14ca73260 = FUN_147349008;
    _DAT_14ca732a0 = 0xffffffff000000f0;
    _DAT_14ca732a8 = 8;
    DAT_14ca732ac = 0;
    _DAT_14ca73290 = &LAB_147349032;
    FUN_145fe8320();
    FUN_145fe839a();
    FUN_1407e00cc(&DAT_14ca73248);
    return;
  }
  return;
}



// FUNCTION 145fe8320 FUN_145fe8320 body=121 status=ok
// SIG undefined FUN_145fe8320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe8320(void)

{
  FUN_145fe8416();
  _DAT_14ca74ef8 = &DAT_14a235a78;
  DAT_14ca74f22 = FUN_140850cc5();
  _DAT_14ca74f00 = FUN_140fb78d0();
  _DAT_14ca74f10 = &LAB_14682652b;
  _DAT_14ca74f18 = 0x1000000e0;
  _DAT_14ca74f20 = 0;
  _DAT_14ca74f08 = DAT_14ca73258;
  DAT_14ca73258 = &DAT_14ca74ef8;
  return;
}



// FUNCTION 145fe839a FUN_145fe839a body=123 status=ok
// SIG undefined FUN_145fe839a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe839a(void)

{
  _DAT_14ca74f88 = L"BASE";
  DAT_14ca74fb2 = 4;
  _DAT_14ca74f90 = FUN_140b35ae4();
  _DAT_14ca74f98 = DAT_14ca73258;
  _DAT_14ca74fa0 = &LAB_14682652b;
  DAT_14ca73258 = &DAT_14ca74f88;
  DAT_14ca732ad = DAT_14ca732ad + '\x01';
  _DAT_14ca74fa8 = 0x100000000;
  if (*(char *)(_DAT_14ca74f90 + 100) != '\0') {
    DAT_14ca732ae = DAT_14ca732ae + '\x01';
  }
  return;
}



// FUNCTION 145fe8416 FUN_145fe8416 body=216 status=ok
// SIG undefined FUN_145fe8416(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe8416(void)

{
  _DAT_14ca74f58 = L"ResolveOrigin";
  DAT_14ca74f82 = FUN_140850cc5();
  _DAT_14ca74f60 = FUN_140ec6960();
  _DAT_14ca74f70 = &LAB_14682652b;
  _DAT_14ca74f78 = 0x1000000e8;
  _DAT_14ca74f80 = 0;
  _DAT_14ca74f68 = DAT_14ca73258;
  DAT_14ca73258 = &DAT_14ca74f58;
  _DAT_14ca74f28 = L"FMaskTex";
  DAT_14ca74f52 = FUN_140850cc5();
  _DAT_14ca74f30 = FUN_140fb78d0();
  _DAT_14ca74f40 = &LAB_14682652b;
  _DAT_14ca74f48 = 0x1000000e4;
  _DAT_14ca74f50 = 0;
  _DAT_14ca74f38 = DAT_14ca73258;
  DAT_14ca73258 = &DAT_14ca74f28;
  return;
}



// FUNCTION 145fe84ee FUN_145fe84ee body=284 status=ok
// SIG undefined FUN_145fe84ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe84ee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca73480) {
    FUN_144b3d300(&DAT_14ca73480);
    if (DAT_14ca73480 == -1) {
      FUN_145fe860a();
      FUN_140db5666(&DAT_14ca733d8,0,&DAT_14ca73370,L"FWideCustomResolve8_2x_falsePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147349124,FUN_1473490fc,&LAB_1473490e4,&LAB_1473490e0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca733d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b273);
      _Init_thread_footer(&DAT_14ca73480);
    }
  }
  return &DAT_14ca733d8;
}



// FUNCTION 145fe860a FUN_145fe860a body=210 status=ok
// SIG undefined FUN_145fe860a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe860a(void)

{
  if ((DAT_14ca733d7 & 2) == 0) {
    DAT_14ca733d7 = DAT_14ca733d7 | 2;
    _DAT_14ca73378 = L"FWideCustomResolve8_2x_falsePS";
    _DAT_14ca73390 = FUN_146826540;
    _DAT_14ca73398 = FUN_146825d77;
    _DAT_14ca733a0 = FUN_146825fd6;
    _DAT_14ca733a8 = FUN_1407e02ea;
    _DAT_14ca733b0 = FUN_146826273;
    _DAT_14ca73388 = FUN_1473490b2;
    _DAT_14ca733c8 = 0xffffffff000000f0;
    _DAT_14ca733d0 = 8;
    DAT_14ca733d4 = 0;
    _DAT_14ca733b8 = &LAB_1473490dc;
    FUN_145fe86dc();
    FUN_145fe8756();
    FUN_1407e00cc(&DAT_14ca73370);
    return;
  }
  return;
}



// FUNCTION 145fe86dc FUN_145fe86dc body=121 status=ok
// SIG undefined FUN_145fe86dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe86dc(void)

{
  FUN_145fe87d2();
  _DAT_14ca74fb8 = &DAT_14a235a78;
  DAT_14ca74fe2 = FUN_140850cc5();
  _DAT_14ca74fc0 = FUN_140fb78d0();
  _DAT_14ca74fd0 = &LAB_14682652b;
  _DAT_14ca74fd8 = 0x1000000e0;
  _DAT_14ca74fe0 = 0;
  _DAT_14ca74fc8 = DAT_14ca73380;
  DAT_14ca73380 = &DAT_14ca74fb8;
  return;
}



// FUNCTION 145fe8756 FUN_145fe8756 body=123 status=ok
// SIG undefined FUN_145fe8756(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe8756(void)

{
  _DAT_14ca75048 = L"BASE";
  DAT_14ca75072 = 4;
  _DAT_14ca75050 = FUN_140b35ae4();
  _DAT_14ca75058 = DAT_14ca73380;
  _DAT_14ca75060 = &LAB_14682652b;
  DAT_14ca73380 = &DAT_14ca75048;
  DAT_14ca733d5 = DAT_14ca733d5 + '\x01';
  _DAT_14ca75068 = 0x100000000;
  if (*(char *)(_DAT_14ca75050 + 100) != '\0') {
    DAT_14ca733d6 = DAT_14ca733d6 + '\x01';
  }
  return;
}



// FUNCTION 145fe87d2 FUN_145fe87d2 body=216 status=ok
// SIG undefined FUN_145fe87d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe87d2(void)

{
  _DAT_14ca75018 = L"ResolveOrigin";
  DAT_14ca75042 = FUN_140850cc5();
  _DAT_14ca75020 = FUN_140ec6960();
  _DAT_14ca75030 = &LAB_14682652b;
  _DAT_14ca75038 = 0x1000000e8;
  _DAT_14ca75040 = 0;
  _DAT_14ca75028 = DAT_14ca73380;
  DAT_14ca73380 = &DAT_14ca75018;
  _DAT_14ca74fe8 = L"FMaskTex";
  DAT_14ca75012 = FUN_140850cc5();
  _DAT_14ca74ff0 = FUN_140fb78d0();
  _DAT_14ca75000 = &LAB_14682652b;
  _DAT_14ca75008 = 0x1000000e4;
  _DAT_14ca75010 = 0;
  _DAT_14ca74ff8 = DAT_14ca73380;
  DAT_14ca73380 = &DAT_14ca74fe8;
  return;
}



// FUNCTION 145fe88aa FUN_145fe88aa body=284 status=ok
// SIG undefined FUN_145fe88aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe88aa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca735a8) {
    FUN_144b3d300(&DAT_14ca735a8);
    if (DAT_14ca735a8 == -1) {
      FUN_145fe89c6();
      FUN_140db5666(&DAT_14ca73500,0,&DAT_14ca73498,L"FWideCustomResolve8_3x_falsePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_1473491ce,FUN_1473491a6,&LAB_14734918e,&LAB_14734918a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca73500 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b27f);
      _Init_thread_footer(&DAT_14ca735a8);
    }
  }
  return &DAT_14ca73500;
}



// FUNCTION 145fe89c6 FUN_145fe89c6 body=210 status=ok
// SIG undefined FUN_145fe89c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe89c6(void)

{
  if ((DAT_14ca734ff & 2) == 0) {
    DAT_14ca734ff = DAT_14ca734ff | 2;
    _DAT_14ca734a0 = L"FWideCustomResolve8_3x_falsePS";
    _DAT_14ca734b8 = FUN_146826540;
    _DAT_14ca734c0 = FUN_146825d77;
    _DAT_14ca734c8 = FUN_146825fd6;
    _DAT_14ca734d0 = FUN_1407e02ea;
    _DAT_14ca734d8 = FUN_146826273;
    _DAT_14ca734b0 = FUN_14734915c;
    _DAT_14ca734f0 = 0xffffffff000000f0;
    _DAT_14ca734f8 = 8;
    DAT_14ca734fc = 0;
    _DAT_14ca734e0 = &LAB_147349186;
    FUN_145fe8a98();
    FUN_145fe8b12();
    FUN_1407e00cc(&DAT_14ca73498);
    return;
  }
  return;
}



// FUNCTION 145fe8a98 FUN_145fe8a98 body=121 status=ok
// SIG undefined FUN_145fe8a98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe8a98(void)

{
  FUN_145fe8b8e();
  _DAT_14ca75078 = &DAT_14a235a78;
  DAT_14ca750a2 = FUN_140850cc5();
  _DAT_14ca75080 = FUN_140fb78d0();
  _DAT_14ca75090 = &LAB_14682652b;
  _DAT_14ca75098 = 0x1000000e0;
  _DAT_14ca750a0 = 0;
  _DAT_14ca75088 = DAT_14ca734a8;
  DAT_14ca734a8 = &DAT_14ca75078;
  return;
}



// FUNCTION 145fe8b12 FUN_145fe8b12 body=123 status=ok
// SIG undefined FUN_145fe8b12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe8b12(void)

{
  _DAT_14ca75108 = L"BASE";
  DAT_14ca75132 = 4;
  _DAT_14ca75110 = FUN_140b35ae4();
  _DAT_14ca75118 = DAT_14ca734a8;
  _DAT_14ca75120 = &LAB_14682652b;
  DAT_14ca734a8 = &DAT_14ca75108;
  DAT_14ca734fd = DAT_14ca734fd + '\x01';
  _DAT_14ca75128 = 0x100000000;
  if (*(char *)(_DAT_14ca75110 + 100) != '\0') {
    DAT_14ca734fe = DAT_14ca734fe + '\x01';
  }
  return;
}



// FUNCTION 145fe8b8e FUN_145fe8b8e body=216 status=ok
// SIG undefined FUN_145fe8b8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe8b8e(void)

{
  _DAT_14ca750d8 = L"ResolveOrigin";
  DAT_14ca75102 = FUN_140850cc5();
  _DAT_14ca750e0 = FUN_140ec6960();
  _DAT_14ca750f0 = &LAB_14682652b;
  _DAT_14ca750f8 = 0x1000000e8;
  _DAT_14ca75100 = 0;
  _DAT_14ca750e8 = DAT_14ca734a8;
  DAT_14ca734a8 = &DAT_14ca750d8;
  _DAT_14ca750a8 = L"FMaskTex";
  DAT_14ca750d2 = FUN_140850cc5();
  _DAT_14ca750b0 = FUN_140fb78d0();
  _DAT_14ca750c0 = &LAB_14682652b;
  _DAT_14ca750c8 = 0x1000000e4;
  _DAT_14ca750d0 = 0;
  _DAT_14ca750b8 = DAT_14ca734a8;
  DAT_14ca734a8 = &DAT_14ca750a8;
  return;
}



// FUNCTION 145fe8c66 FUN_145fe8c66 body=284 status=ok
// SIG undefined FUN_145fe8c66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe8c66(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca736d0) {
    FUN_144b3d300(&DAT_14ca736d0);
    if (DAT_14ca736d0 == -1) {
      FUN_145fe8d82();
      FUN_140db5666(&DAT_14ca73628,0,&DAT_14ca735c0,L"FWideCustomResolve0_1x_truePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147349278,FUN_147349250,&LAB_147349238,&LAB_147349234,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca73628 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b28b);
      _Init_thread_footer(&DAT_14ca736d0);
    }
  }
  return &DAT_14ca73628;
}



// FUNCTION 145fe8d82 FUN_145fe8d82 body=210 status=ok
// SIG undefined FUN_145fe8d82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe8d82(void)

{
  if ((DAT_14ca73627 & 2) == 0) {
    DAT_14ca73627 = DAT_14ca73627 | 2;
    _DAT_14ca735c8 = L"FWideCustomResolve0_1x_truePS";
    _DAT_14ca735e0 = FUN_146826540;
    _DAT_14ca735e8 = FUN_146825d77;
    _DAT_14ca735f0 = FUN_146825fd6;
    _DAT_14ca735f8 = FUN_1407e02ea;
    _DAT_14ca73600 = FUN_146826273;
    _DAT_14ca735d8 = FUN_147349206;
    _DAT_14ca73618 = 0xffffffff000000f0;
    _DAT_14ca73620 = 8;
    DAT_14ca73624 = 0;
    _DAT_14ca73608 = &LAB_147349230;
    FUN_145fe8e54();
    FUN_145fe8ece();
    FUN_1407e00cc(&DAT_14ca735c0);
    return;
  }
  return;
}



// FUNCTION 145fe8e54 FUN_145fe8e54 body=121 status=ok
// SIG undefined FUN_145fe8e54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe8e54(void)

{
  FUN_145fe8f4a();
  _DAT_14ca75138 = &DAT_14a235a78;
  DAT_14ca75162 = FUN_140850cc5();
  _DAT_14ca75140 = FUN_140fb78d0();
  _DAT_14ca75150 = &LAB_14682652b;
  _DAT_14ca75158 = 0x1000000e0;
  _DAT_14ca75160 = 0;
  _DAT_14ca75148 = DAT_14ca735d0;
  DAT_14ca735d0 = &DAT_14ca75138;
  return;
}



// FUNCTION 145fe8ece FUN_145fe8ece body=123 status=ok
// SIG undefined FUN_145fe8ece(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe8ece(void)

{
  _DAT_14ca751c8 = L"BASE";
  DAT_14ca751f2 = 4;
  _DAT_14ca751d0 = FUN_140b35ae4();
  _DAT_14ca751d8 = DAT_14ca735d0;
  _DAT_14ca751e0 = &LAB_14682652b;
  DAT_14ca735d0 = &DAT_14ca751c8;
  DAT_14ca73625 = DAT_14ca73625 + '\x01';
  _DAT_14ca751e8 = 0x100000000;
  if (*(char *)(_DAT_14ca751d0 + 100) != '\0') {
    DAT_14ca73626 = DAT_14ca73626 + '\x01';
  }
  return;
}



// FUNCTION 145fe8f4a FUN_145fe8f4a body=216 status=ok
// SIG undefined FUN_145fe8f4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe8f4a(void)

{
  _DAT_14ca75198 = L"ResolveOrigin";
  DAT_14ca751c2 = FUN_140850cc5();
  _DAT_14ca751a0 = FUN_140ec6960();
  _DAT_14ca751b0 = &LAB_14682652b;
  _DAT_14ca751b8 = 0x1000000e8;
  _DAT_14ca751c0 = 0;
  _DAT_14ca751a8 = DAT_14ca735d0;
  DAT_14ca735d0 = &DAT_14ca75198;
  _DAT_14ca75168 = L"FMaskTex";
  DAT_14ca75192 = FUN_140850cc5();
  _DAT_14ca75170 = FUN_140fb78d0();
  _DAT_14ca75180 = &LAB_14682652b;
  _DAT_14ca75188 = 0x1000000e4;
  _DAT_14ca75190 = 0;
  _DAT_14ca75178 = DAT_14ca735d0;
  DAT_14ca735d0 = &DAT_14ca75168;
  return;
}



// FUNCTION 145fe9022 FUN_145fe9022 body=284 status=ok
// SIG undefined FUN_145fe9022(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe9022(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca737f8) {
    FUN_144b3d300(&DAT_14ca737f8);
    if (DAT_14ca737f8 == -1) {
      FUN_145fe913e();
      FUN_140db5666(&DAT_14ca73750,0,&DAT_14ca736e8,L"FWideCustomResolve2_0x_truePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147349322,FUN_1473492fa,&LAB_1473492e2,&LAB_1473492de,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca73750 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b297);
      _Init_thread_footer(&DAT_14ca737f8);
    }
  }
  return &DAT_14ca73750;
}



// FUNCTION 145fe913e FUN_145fe913e body=210 status=ok
// SIG undefined FUN_145fe913e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe913e(void)

{
  if ((DAT_14ca7374f & 2) == 0) {
    DAT_14ca7374f = DAT_14ca7374f | 2;
    _DAT_14ca736f0 = L"FWideCustomResolve2_0x_truePS";
    _DAT_14ca73708 = FUN_146826540;
    _DAT_14ca73710 = FUN_146825d77;
    _DAT_14ca73718 = FUN_146825fd6;
    _DAT_14ca73720 = FUN_1407e02ea;
    _DAT_14ca73728 = FUN_146826273;
    _DAT_14ca73700 = FUN_1473492b0;
    _DAT_14ca73740 = 0xffffffff000000f0;
    _DAT_14ca73748 = 8;
    DAT_14ca7374c = 0;
    _DAT_14ca73730 = &LAB_1473492da;
    FUN_145fe9210();
    FUN_145fe928a();
    FUN_1407e00cc(&DAT_14ca736e8);
    return;
  }
  return;
}



// FUNCTION 145fe9210 FUN_145fe9210 body=121 status=ok
// SIG undefined FUN_145fe9210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe9210(void)

{
  FUN_145fe9306();
  _DAT_14ca751f8 = &DAT_14a235a78;
  DAT_14ca75222 = FUN_140850cc5();
  _DAT_14ca75200 = FUN_140fb78d0();
  _DAT_14ca75210 = &LAB_14682652b;
  _DAT_14ca75218 = 0x1000000e0;
  _DAT_14ca75220 = 0;
  _DAT_14ca75208 = DAT_14ca736f8;
  DAT_14ca736f8 = &DAT_14ca751f8;
  return;
}



// FUNCTION 145fe928a FUN_145fe928a body=123 status=ok
// SIG undefined FUN_145fe928a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe928a(void)

{
  _DAT_14ca75288 = L"BASE";
  DAT_14ca752b2 = 4;
  _DAT_14ca75290 = FUN_140b35ae4();
  _DAT_14ca75298 = DAT_14ca736f8;
  _DAT_14ca752a0 = &LAB_14682652b;
  DAT_14ca736f8 = &DAT_14ca75288;
  DAT_14ca7374d = DAT_14ca7374d + '\x01';
  _DAT_14ca752a8 = 0x100000000;
  if (*(char *)(_DAT_14ca75290 + 100) != '\0') {
    DAT_14ca7374e = DAT_14ca7374e + '\x01';
  }
  return;
}



// FUNCTION 145fe9306 FUN_145fe9306 body=216 status=ok
// SIG undefined FUN_145fe9306(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe9306(void)

{
  _DAT_14ca75258 = L"ResolveOrigin";
  DAT_14ca75282 = FUN_140850cc5();
  _DAT_14ca75260 = FUN_140ec6960();
  _DAT_14ca75270 = &LAB_14682652b;
  _DAT_14ca75278 = 0x1000000e8;
  _DAT_14ca75280 = 0;
  _DAT_14ca75268 = DAT_14ca736f8;
  DAT_14ca736f8 = &DAT_14ca75258;
  _DAT_14ca75228 = L"FMaskTex";
  DAT_14ca75252 = FUN_140850cc5();
  _DAT_14ca75230 = FUN_140fb78d0();
  _DAT_14ca75240 = &LAB_14682652b;
  _DAT_14ca75248 = 0x1000000e4;
  _DAT_14ca75250 = 0;
  _DAT_14ca75238 = DAT_14ca736f8;
  DAT_14ca736f8 = &DAT_14ca75228;
  return;
}



// FUNCTION 145fe93de FUN_145fe93de body=284 status=ok
// SIG undefined FUN_145fe93de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe93de(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca73920) {
    FUN_144b3d300(&DAT_14ca73920);
    if (DAT_14ca73920 == -1) {
      FUN_145fe94fa();
      FUN_140db5666(&DAT_14ca73878,0,&DAT_14ca73810,L"FWideCustomResolve2_1x_truePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_1473493cc,FUN_1473493a4,&LAB_14734938c,&LAB_147349388,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca73878 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b2a3);
      _Init_thread_footer(&DAT_14ca73920);
    }
  }
  return &DAT_14ca73878;
}



// FUNCTION 145fe94fa FUN_145fe94fa body=210 status=ok
// SIG undefined FUN_145fe94fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe94fa(void)

{
  if ((DAT_14ca73877 & 2) == 0) {
    DAT_14ca73877 = DAT_14ca73877 | 2;
    _DAT_14ca73818 = L"FWideCustomResolve2_1x_truePS";
    _DAT_14ca73830 = FUN_146826540;
    _DAT_14ca73838 = FUN_146825d77;
    _DAT_14ca73840 = FUN_146825fd6;
    _DAT_14ca73848 = FUN_1407e02ea;
    _DAT_14ca73850 = FUN_146826273;
    _DAT_14ca73828 = FUN_14734935a;
    _DAT_14ca73868 = 0xffffffff000000f0;
    _DAT_14ca73870 = 8;
    DAT_14ca73874 = 0;
    _DAT_14ca73858 = &LAB_147349384;
    FUN_145fe95cc();
    FUN_145fe9646();
    FUN_1407e00cc(&DAT_14ca73810);
    return;
  }
  return;
}



// FUNCTION 145fe95cc FUN_145fe95cc body=121 status=ok
// SIG undefined FUN_145fe95cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe95cc(void)

{
  FUN_145fe96c2();
  _DAT_14ca752b8 = &DAT_14a235a78;
  DAT_14ca752e2 = FUN_140850cc5();
  _DAT_14ca752c0 = FUN_140fb78d0();
  _DAT_14ca752d0 = &LAB_14682652b;
  _DAT_14ca752d8 = 0x1000000e0;
  _DAT_14ca752e0 = 0;
  _DAT_14ca752c8 = DAT_14ca73820;
  DAT_14ca73820 = &DAT_14ca752b8;
  return;
}



// FUNCTION 145fe9646 FUN_145fe9646 body=123 status=ok
// SIG undefined FUN_145fe9646(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe9646(void)

{
  _DAT_14ca75348 = L"BASE";
  DAT_14ca75372 = 4;
  _DAT_14ca75350 = FUN_140b35ae4();
  _DAT_14ca75358 = DAT_14ca73820;
  _DAT_14ca75360 = &LAB_14682652b;
  DAT_14ca73820 = &DAT_14ca75348;
  DAT_14ca73875 = DAT_14ca73875 + '\x01';
  _DAT_14ca75368 = 0x100000000;
  if (*(char *)(_DAT_14ca75350 + 100) != '\0') {
    DAT_14ca73876 = DAT_14ca73876 + '\x01';
  }
  return;
}



// FUNCTION 145fe96c2 FUN_145fe96c2 body=216 status=ok
// SIG undefined FUN_145fe96c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe96c2(void)

{
  _DAT_14ca75318 = L"ResolveOrigin";
  DAT_14ca75342 = FUN_140850cc5();
  _DAT_14ca75320 = FUN_140ec6960();
  _DAT_14ca75330 = &LAB_14682652b;
  _DAT_14ca75338 = 0x1000000e8;
  _DAT_14ca75340 = 0;
  _DAT_14ca75328 = DAT_14ca73820;
  DAT_14ca73820 = &DAT_14ca75318;
  _DAT_14ca752e8 = L"FMaskTex";
  DAT_14ca75312 = FUN_140850cc5();
  _DAT_14ca752f0 = FUN_140fb78d0();
  _DAT_14ca75300 = &LAB_14682652b;
  _DAT_14ca75308 = 0x1000000e4;
  _DAT_14ca75310 = 0;
  _DAT_14ca752f8 = DAT_14ca73820;
  DAT_14ca73820 = &DAT_14ca752e8;
  return;
}



// FUNCTION 145fe979a FUN_145fe979a body=284 status=ok
// SIG undefined FUN_145fe979a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe979a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca73a48) {
    FUN_144b3d300(&DAT_14ca73a48);
    if (DAT_14ca73a48 == -1) {
      FUN_145fe98b6();
      FUN_140db5666(&DAT_14ca739a0,0,&DAT_14ca73938,L"FWideCustomResolve2_2x_truePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147349476,FUN_14734944e,&LAB_147349436,&LAB_147349432,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca739a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b2af);
      _Init_thread_footer(&DAT_14ca73a48);
    }
  }
  return &DAT_14ca739a0;
}



// FUNCTION 145fe98b6 FUN_145fe98b6 body=210 status=ok
// SIG undefined FUN_145fe98b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe98b6(void)

{
  if ((DAT_14ca7399f & 2) == 0) {
    DAT_14ca7399f = DAT_14ca7399f | 2;
    _DAT_14ca73940 = L"FWideCustomResolve2_2x_truePS";
    _DAT_14ca73958 = FUN_146826540;
    _DAT_14ca73960 = FUN_146825d77;
    _DAT_14ca73968 = FUN_146825fd6;
    _DAT_14ca73970 = FUN_1407e02ea;
    _DAT_14ca73978 = FUN_146826273;
    _DAT_14ca73950 = FUN_147349404;
    _DAT_14ca73990 = 0xffffffff000000f0;
    _DAT_14ca73998 = 8;
    DAT_14ca7399c = 0;
    _DAT_14ca73980 = &LAB_14734942e;
    FUN_145fe9988();
    FUN_145fe9a02();
    FUN_1407e00cc(&DAT_14ca73938);
    return;
  }
  return;
}



// FUNCTION 145fe9988 FUN_145fe9988 body=121 status=ok
// SIG undefined FUN_145fe9988(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe9988(void)

{
  FUN_145fe9a7e();
  _DAT_14ca75378 = &DAT_14a235a78;
  DAT_14ca753a2 = FUN_140850cc5();
  _DAT_14ca75380 = FUN_140fb78d0();
  _DAT_14ca75390 = &LAB_14682652b;
  _DAT_14ca75398 = 0x1000000e0;
  _DAT_14ca753a0 = 0;
  _DAT_14ca75388 = DAT_14ca73948;
  DAT_14ca73948 = &DAT_14ca75378;
  return;
}



// FUNCTION 145fe9a02 FUN_145fe9a02 body=123 status=ok
// SIG undefined FUN_145fe9a02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe9a02(void)

{
  _DAT_14ca75408 = L"BASE";
  DAT_14ca75432 = 4;
  _DAT_14ca75410 = FUN_140b35ae4();
  _DAT_14ca75418 = DAT_14ca73948;
  _DAT_14ca75420 = &LAB_14682652b;
  DAT_14ca73948 = &DAT_14ca75408;
  DAT_14ca7399d = DAT_14ca7399d + '\x01';
  _DAT_14ca75428 = 0x100000000;
  if (*(char *)(_DAT_14ca75410 + 100) != '\0') {
    DAT_14ca7399e = DAT_14ca7399e + '\x01';
  }
  return;
}



// FUNCTION 145fe9a7e FUN_145fe9a7e body=216 status=ok
// SIG undefined FUN_145fe9a7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe9a7e(void)

{
  _DAT_14ca753d8 = L"ResolveOrigin";
  DAT_14ca75402 = FUN_140850cc5();
  _DAT_14ca753e0 = FUN_140ec6960();
  _DAT_14ca753f0 = &LAB_14682652b;
  _DAT_14ca753f8 = 0x1000000e8;
  _DAT_14ca75400 = 0;
  _DAT_14ca753e8 = DAT_14ca73948;
  DAT_14ca73948 = &DAT_14ca753d8;
  _DAT_14ca753a8 = L"FMaskTex";
  DAT_14ca753d2 = FUN_140850cc5();
  _DAT_14ca753b0 = FUN_140fb78d0();
  _DAT_14ca753c0 = &LAB_14682652b;
  _DAT_14ca753c8 = 0x1000000e4;
  _DAT_14ca753d0 = 0;
  _DAT_14ca753b8 = DAT_14ca73948;
  DAT_14ca73948 = &DAT_14ca753a8;
  return;
}



// FUNCTION 145fe9b56 FUN_145fe9b56 body=284 status=ok
// SIG undefined FUN_145fe9b56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe9b56(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca73b70) {
    FUN_144b3d300(&DAT_14ca73b70);
    if (DAT_14ca73b70 == -1) {
      FUN_145fe9c72();
      FUN_140db5666(&DAT_14ca73ac8,0,&DAT_14ca73a60,L"FWideCustomResolve2_3x_truePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147349520,FUN_1473494f8,&LAB_1473494e0,&LAB_1473494dc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca73ac8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b2bb);
      _Init_thread_footer(&DAT_14ca73b70);
    }
  }
  return &DAT_14ca73ac8;
}



// FUNCTION 145fe9c72 FUN_145fe9c72 body=210 status=ok
// SIG undefined FUN_145fe9c72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe9c72(void)

{
  if ((DAT_14ca73ac7 & 2) == 0) {
    DAT_14ca73ac7 = DAT_14ca73ac7 | 2;
    _DAT_14ca73a68 = L"FWideCustomResolve2_3x_truePS";
    _DAT_14ca73a80 = FUN_146826540;
    _DAT_14ca73a88 = FUN_146825d77;
    _DAT_14ca73a90 = FUN_146825fd6;
    _DAT_14ca73a98 = FUN_1407e02ea;
    _DAT_14ca73aa0 = FUN_146826273;
    _DAT_14ca73a78 = FUN_1473494ae;
    _DAT_14ca73ab8 = 0xffffffff000000f0;
    _DAT_14ca73ac0 = 8;
    DAT_14ca73ac4 = 0;
    _DAT_14ca73aa8 = &LAB_1473494d8;
    FUN_145fe9d44();
    FUN_145fe9dbe();
    FUN_1407e00cc(&DAT_14ca73a60);
    return;
  }
  return;
}



// FUNCTION 145fe9d44 FUN_145fe9d44 body=121 status=ok
// SIG undefined FUN_145fe9d44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe9d44(void)

{
  FUN_145fe9e3a();
  _DAT_14ca75438 = &DAT_14a235a78;
  DAT_14ca75462 = FUN_140850cc5();
  _DAT_14ca75440 = FUN_140fb78d0();
  _DAT_14ca75450 = &LAB_14682652b;
  _DAT_14ca75458 = 0x1000000e0;
  _DAT_14ca75460 = 0;
  _DAT_14ca75448 = DAT_14ca73a70;
  DAT_14ca73a70 = &DAT_14ca75438;
  return;
}



// FUNCTION 145fe9dbe FUN_145fe9dbe body=123 status=ok
// SIG undefined FUN_145fe9dbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe9dbe(void)

{
  _DAT_14ca754c8 = L"BASE";
  DAT_14ca754f2 = 4;
  _DAT_14ca754d0 = FUN_140b35ae4();
  _DAT_14ca754d8 = DAT_14ca73a70;
  _DAT_14ca754e0 = &LAB_14682652b;
  DAT_14ca73a70 = &DAT_14ca754c8;
  DAT_14ca73ac5 = DAT_14ca73ac5 + '\x01';
  _DAT_14ca754e8 = 0x100000000;
  if (*(char *)(_DAT_14ca754d0 + 100) != '\0') {
    DAT_14ca73ac6 = DAT_14ca73ac6 + '\x01';
  }
  return;
}



// FUNCTION 145fe9e3a FUN_145fe9e3a body=216 status=ok
// SIG undefined FUN_145fe9e3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe9e3a(void)

{
  _DAT_14ca75498 = L"ResolveOrigin";
  DAT_14ca754c2 = FUN_140850cc5();
  _DAT_14ca754a0 = FUN_140ec6960();
  _DAT_14ca754b0 = &LAB_14682652b;
  _DAT_14ca754b8 = 0x1000000e8;
  _DAT_14ca754c0 = 0;
  _DAT_14ca754a8 = DAT_14ca73a70;
  DAT_14ca73a70 = &DAT_14ca75498;
  _DAT_14ca75468 = L"FMaskTex";
  DAT_14ca75492 = FUN_140850cc5();
  _DAT_14ca75470 = FUN_140fb78d0();
  _DAT_14ca75480 = &LAB_14682652b;
  _DAT_14ca75488 = 0x1000000e4;
  _DAT_14ca75490 = 0;
  _DAT_14ca75478 = DAT_14ca73a70;
  DAT_14ca73a70 = &DAT_14ca75468;
  return;
}



// FUNCTION 145fe9f12 FUN_145fe9f12 body=284 status=ok
// SIG undefined FUN_145fe9f12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fe9f12(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca73c98) {
    FUN_144b3d300(&DAT_14ca73c98);
    if (DAT_14ca73c98 == -1) {
      FUN_145fea02e();
      FUN_140db5666(&DAT_14ca73bf0,0,&DAT_14ca73b88,L"FWideCustomResolve4_0x_truePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_1473495ca,FUN_1473495a2,&LAB_14734958a,&LAB_147349586,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca73bf0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b2c7);
      _Init_thread_footer(&DAT_14ca73c98);
    }
  }
  return &DAT_14ca73bf0;
}



// FUNCTION 145fea02e FUN_145fea02e body=210 status=ok
// SIG undefined FUN_145fea02e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fea02e(void)

{
  if ((DAT_14ca73bef & 2) == 0) {
    DAT_14ca73bef = DAT_14ca73bef | 2;
    _DAT_14ca73b90 = L"FWideCustomResolve4_0x_truePS";
    _DAT_14ca73ba8 = FUN_146826540;
    _DAT_14ca73bb0 = FUN_146825d77;
    _DAT_14ca73bb8 = FUN_146825fd6;
    _DAT_14ca73bc0 = FUN_1407e02ea;
    _DAT_14ca73bc8 = FUN_146826273;
    _DAT_14ca73ba0 = FUN_147349558;
    _DAT_14ca73be0 = 0xffffffff000000f0;
    _DAT_14ca73be8 = 8;
    DAT_14ca73bec = 0;
    _DAT_14ca73bd0 = &LAB_147349582;
    FUN_145fea100();
    FUN_145fea17a();
    FUN_1407e00cc(&DAT_14ca73b88);
    return;
  }
  return;
}



// FUNCTION 145fea100 FUN_145fea100 body=121 status=ok
// SIG undefined FUN_145fea100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fea100(void)

{
  FUN_145fea1f6();
  _DAT_14ca754f8 = &DAT_14a235a78;
  DAT_14ca75522 = FUN_140850cc5();
  _DAT_14ca75500 = FUN_140fb78d0();
  _DAT_14ca75510 = &LAB_14682652b;
  _DAT_14ca75518 = 0x1000000e0;
  _DAT_14ca75520 = 0;
  _DAT_14ca75508 = DAT_14ca73b98;
  DAT_14ca73b98 = &DAT_14ca754f8;
  return;
}



// FUNCTION 145fea17a FUN_145fea17a body=123 status=ok
// SIG undefined FUN_145fea17a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fea17a(void)

{
  _DAT_14ca75588 = L"BASE";
  DAT_14ca755b2 = 4;
  _DAT_14ca75590 = FUN_140b35ae4();
  _DAT_14ca75598 = DAT_14ca73b98;
  _DAT_14ca755a0 = &LAB_14682652b;
  DAT_14ca73b98 = &DAT_14ca75588;
  DAT_14ca73bed = DAT_14ca73bed + '\x01';
  _DAT_14ca755a8 = 0x100000000;
  if (*(char *)(_DAT_14ca75590 + 100) != '\0') {
    DAT_14ca73bee = DAT_14ca73bee + '\x01';
  }
  return;
}



// FUNCTION 145fea1f6 FUN_145fea1f6 body=216 status=ok
// SIG undefined FUN_145fea1f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fea1f6(void)

{
  _DAT_14ca75558 = L"ResolveOrigin";
  DAT_14ca75582 = FUN_140850cc5();
  _DAT_14ca75560 = FUN_140ec6960();
  _DAT_14ca75570 = &LAB_14682652b;
  _DAT_14ca75578 = 0x1000000e8;
  _DAT_14ca75580 = 0;
  _DAT_14ca75568 = DAT_14ca73b98;
  DAT_14ca73b98 = &DAT_14ca75558;
  _DAT_14ca75528 = L"FMaskTex";
  DAT_14ca75552 = FUN_140850cc5();
  _DAT_14ca75530 = FUN_140fb78d0();
  _DAT_14ca75540 = &LAB_14682652b;
  _DAT_14ca75548 = 0x1000000e4;
  _DAT_14ca75550 = 0;
  _DAT_14ca75538 = DAT_14ca73b98;
  DAT_14ca73b98 = &DAT_14ca75528;
  return;
}



// FUNCTION 145fea2ce FUN_145fea2ce body=284 status=ok
// SIG undefined FUN_145fea2ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fea2ce(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca73dc0) {
    FUN_144b3d300(&DAT_14ca73dc0);
    if (DAT_14ca73dc0 == -1) {
      FUN_145fea3ea();
      FUN_140db5666(&DAT_14ca73d18,0,&DAT_14ca73cb0,L"FWideCustomResolve4_1x_truePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147349674,FUN_14734964c,&LAB_147349634,&LAB_147349630,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca73d18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b2d3);
      _Init_thread_footer(&DAT_14ca73dc0);
    }
  }
  return &DAT_14ca73d18;
}



// FUNCTION 145fea3ea FUN_145fea3ea body=210 status=ok
// SIG undefined FUN_145fea3ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fea3ea(void)

{
  if ((DAT_14ca73d17 & 2) == 0) {
    DAT_14ca73d17 = DAT_14ca73d17 | 2;
    _DAT_14ca73cb8 = L"FWideCustomResolve4_1x_truePS";
    _DAT_14ca73cd0 = FUN_146826540;
    _DAT_14ca73cd8 = FUN_146825d77;
    _DAT_14ca73ce0 = FUN_146825fd6;
    _DAT_14ca73ce8 = FUN_1407e02ea;
    _DAT_14ca73cf0 = FUN_146826273;
    _DAT_14ca73cc8 = FUN_147349602;
    _DAT_14ca73d08 = 0xffffffff000000f0;
    _DAT_14ca73d10 = 8;
    DAT_14ca73d14 = 0;
    _DAT_14ca73cf8 = &LAB_14734962c;
    FUN_145fea4bc();
    FUN_145fea536();
    FUN_1407e00cc(&DAT_14ca73cb0);
    return;
  }
  return;
}



// FUNCTION 145fea4bc FUN_145fea4bc body=121 status=ok
// SIG undefined FUN_145fea4bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fea4bc(void)

{
  FUN_145fea5b2();
  _DAT_14ca755b8 = &DAT_14a235a78;
  DAT_14ca755e2 = FUN_140850cc5();
  _DAT_14ca755c0 = FUN_140fb78d0();
  _DAT_14ca755d0 = &LAB_14682652b;
  _DAT_14ca755d8 = 0x1000000e0;
  _DAT_14ca755e0 = 0;
  _DAT_14ca755c8 = DAT_14ca73cc0;
  DAT_14ca73cc0 = &DAT_14ca755b8;
  return;
}



// FUNCTION 145fea536 FUN_145fea536 body=123 status=ok
// SIG undefined FUN_145fea536(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fea536(void)

{
  _DAT_14ca75648 = L"BASE";
  DAT_14ca75672 = 4;
  _DAT_14ca75650 = FUN_140b35ae4();
  _DAT_14ca75658 = DAT_14ca73cc0;
  _DAT_14ca75660 = &LAB_14682652b;
  DAT_14ca73cc0 = &DAT_14ca75648;
  DAT_14ca73d15 = DAT_14ca73d15 + '\x01';
  _DAT_14ca75668 = 0x100000000;
  if (*(char *)(_DAT_14ca75650 + 100) != '\0') {
    DAT_14ca73d16 = DAT_14ca73d16 + '\x01';
  }
  return;
}



// FUNCTION 145fea5b2 FUN_145fea5b2 body=216 status=ok
// SIG undefined FUN_145fea5b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fea5b2(void)

{
  _DAT_14ca75618 = L"ResolveOrigin";
  DAT_14ca75642 = FUN_140850cc5();
  _DAT_14ca75620 = FUN_140ec6960();
  _DAT_14ca75630 = &LAB_14682652b;
  _DAT_14ca75638 = 0x1000000e8;
  _DAT_14ca75640 = 0;
  _DAT_14ca75628 = DAT_14ca73cc0;
  DAT_14ca73cc0 = &DAT_14ca75618;
  _DAT_14ca755e8 = L"FMaskTex";
  DAT_14ca75612 = FUN_140850cc5();
  _DAT_14ca755f0 = FUN_140fb78d0();
  _DAT_14ca75600 = &LAB_14682652b;
  _DAT_14ca75608 = 0x1000000e4;
  _DAT_14ca75610 = 0;
  _DAT_14ca755f8 = DAT_14ca73cc0;
  DAT_14ca73cc0 = &DAT_14ca755e8;
  return;
}



// FUNCTION 145fea68a FUN_145fea68a body=284 status=ok
// SIG undefined FUN_145fea68a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fea68a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca73ee8) {
    FUN_144b3d300(&DAT_14ca73ee8);
    if (DAT_14ca73ee8 == -1) {
      FUN_145fea7a6();
      FUN_140db5666(&DAT_14ca73e40,0,&DAT_14ca73dd8,L"FWideCustomResolve4_2x_truePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_14734971e,FUN_1473496f6,&LAB_1473496de,&LAB_1473496da,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca73e40 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b2df);
      _Init_thread_footer(&DAT_14ca73ee8);
    }
  }
  return &DAT_14ca73e40;
}



// FUNCTION 145fea7a6 FUN_145fea7a6 body=210 status=ok
// SIG undefined FUN_145fea7a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fea7a6(void)

{
  if ((DAT_14ca73e3f & 2) == 0) {
    DAT_14ca73e3f = DAT_14ca73e3f | 2;
    _DAT_14ca73de0 = L"FWideCustomResolve4_2x_truePS";
    _DAT_14ca73df8 = FUN_146826540;
    _DAT_14ca73e00 = FUN_146825d77;
    _DAT_14ca73e08 = FUN_146825fd6;
    _DAT_14ca73e10 = FUN_1407e02ea;
    _DAT_14ca73e18 = FUN_146826273;
    _DAT_14ca73df0 = FUN_1473496ac;
    _DAT_14ca73e30 = 0xffffffff000000f0;
    _DAT_14ca73e38 = 8;
    DAT_14ca73e3c = 0;
    _DAT_14ca73e20 = &LAB_1473496d6;
    FUN_145fea878();
    FUN_145fea8f2();
    FUN_1407e00cc(&DAT_14ca73dd8);
    return;
  }
  return;
}



// FUNCTION 145fea878 FUN_145fea878 body=121 status=ok
// SIG undefined FUN_145fea878(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fea878(void)

{
  FUN_145fea96e();
  _DAT_14ca75678 = &DAT_14a235a78;
  DAT_14ca756a2 = FUN_140850cc5();
  _DAT_14ca75680 = FUN_140fb78d0();
  _DAT_14ca75690 = &LAB_14682652b;
  _DAT_14ca75698 = 0x1000000e0;
  _DAT_14ca756a0 = 0;
  _DAT_14ca75688 = DAT_14ca73de8;
  DAT_14ca73de8 = &DAT_14ca75678;
  return;
}



// FUNCTION 145fea8f2 FUN_145fea8f2 body=123 status=ok
// SIG undefined FUN_145fea8f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fea8f2(void)

{
  _DAT_14ca75708 = L"BASE";
  DAT_14ca75732 = 4;
  _DAT_14ca75710 = FUN_140b35ae4();
  _DAT_14ca75718 = DAT_14ca73de8;
  _DAT_14ca75720 = &LAB_14682652b;
  DAT_14ca73de8 = &DAT_14ca75708;
  DAT_14ca73e3d = DAT_14ca73e3d + '\x01';
  _DAT_14ca75728 = 0x100000000;
  if (*(char *)(_DAT_14ca75710 + 100) != '\0') {
    DAT_14ca73e3e = DAT_14ca73e3e + '\x01';
  }
  return;
}



// FUNCTION 145fea96e FUN_145fea96e body=216 status=ok
// SIG undefined FUN_145fea96e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fea96e(void)

{
  _DAT_14ca756d8 = L"ResolveOrigin";
  DAT_14ca75702 = FUN_140850cc5();
  _DAT_14ca756e0 = FUN_140ec6960();
  _DAT_14ca756f0 = &LAB_14682652b;
  _DAT_14ca756f8 = 0x1000000e8;
  _DAT_14ca75700 = 0;
  _DAT_14ca756e8 = DAT_14ca73de8;
  DAT_14ca73de8 = &DAT_14ca756d8;
  _DAT_14ca756a8 = L"FMaskTex";
  DAT_14ca756d2 = FUN_140850cc5();
  _DAT_14ca756b0 = FUN_140fb78d0();
  _DAT_14ca756c0 = &LAB_14682652b;
  _DAT_14ca756c8 = 0x1000000e4;
  _DAT_14ca756d0 = 0;
  _DAT_14ca756b8 = DAT_14ca73de8;
  DAT_14ca73de8 = &DAT_14ca756a8;
  return;
}



// FUNCTION 145feaa46 FUN_145feaa46 body=284 status=ok
// SIG undefined FUN_145feaa46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145feaa46(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca74010) {
    FUN_144b3d300(&DAT_14ca74010);
    if (DAT_14ca74010 == -1) {
      FUN_145feab62();
      FUN_140db5666(&DAT_14ca73f68,0,&DAT_14ca73f00,L"FWideCustomResolve4_3x_truePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_1473497c8,FUN_1473497a0,&LAB_147349788,&LAB_147349784,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca73f68 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b2eb);
      _Init_thread_footer(&DAT_14ca74010);
    }
  }
  return &DAT_14ca73f68;
}



// FUNCTION 145feab62 FUN_145feab62 body=210 status=ok
// SIG undefined FUN_145feab62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feab62(void)

{
  if ((DAT_14ca73f67 & 2) == 0) {
    DAT_14ca73f67 = DAT_14ca73f67 | 2;
    _DAT_14ca73f08 = L"FWideCustomResolve4_3x_truePS";
    _DAT_14ca73f20 = FUN_146826540;
    _DAT_14ca73f28 = FUN_146825d77;
    _DAT_14ca73f30 = FUN_146825fd6;
    _DAT_14ca73f38 = FUN_1407e02ea;
    _DAT_14ca73f40 = FUN_146826273;
    _DAT_14ca73f18 = FUN_147349756;
    _DAT_14ca73f58 = 0xffffffff000000f0;
    _DAT_14ca73f60 = 8;
    DAT_14ca73f64 = 0;
    _DAT_14ca73f48 = &LAB_147349780;
    FUN_145feac34();
    FUN_145feacae();
    FUN_1407e00cc(&DAT_14ca73f00);
    return;
  }
  return;
}



// FUNCTION 145feac34 FUN_145feac34 body=121 status=ok
// SIG undefined FUN_145feac34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feac34(void)

{
  FUN_145fead2a();
  _DAT_14ca75738 = &DAT_14a235a78;
  DAT_14ca75762 = FUN_140850cc5();
  _DAT_14ca75740 = FUN_140fb78d0();
  _DAT_14ca75750 = &LAB_14682652b;
  _DAT_14ca75758 = 0x1000000e0;
  _DAT_14ca75760 = 0;
  _DAT_14ca75748 = DAT_14ca73f10;
  DAT_14ca73f10 = &DAT_14ca75738;
  return;
}



// FUNCTION 145feacae FUN_145feacae body=123 status=ok
// SIG undefined FUN_145feacae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feacae(void)

{
  _DAT_14ca757c8 = L"BASE";
  DAT_14ca757f2 = 4;
  _DAT_14ca757d0 = FUN_140b35ae4();
  _DAT_14ca757d8 = DAT_14ca73f10;
  _DAT_14ca757e0 = &LAB_14682652b;
  DAT_14ca73f10 = &DAT_14ca757c8;
  DAT_14ca73f65 = DAT_14ca73f65 + '\x01';
  _DAT_14ca757e8 = 0x100000000;
  if (*(char *)(_DAT_14ca757d0 + 100) != '\0') {
    DAT_14ca73f66 = DAT_14ca73f66 + '\x01';
  }
  return;
}



// FUNCTION 145fead2a FUN_145fead2a body=216 status=ok
// SIG undefined FUN_145fead2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fead2a(void)

{
  _DAT_14ca75798 = L"ResolveOrigin";
  DAT_14ca757c2 = FUN_140850cc5();
  _DAT_14ca757a0 = FUN_140ec6960();
  _DAT_14ca757b0 = &LAB_14682652b;
  _DAT_14ca757b8 = 0x1000000e8;
  _DAT_14ca757c0 = 0;
  _DAT_14ca757a8 = DAT_14ca73f10;
  DAT_14ca73f10 = &DAT_14ca75798;
  _DAT_14ca75768 = L"FMaskTex";
  DAT_14ca75792 = FUN_140850cc5();
  _DAT_14ca75770 = FUN_140fb78d0();
  _DAT_14ca75780 = &LAB_14682652b;
  _DAT_14ca75788 = 0x1000000e4;
  _DAT_14ca75790 = 0;
  _DAT_14ca75778 = DAT_14ca73f10;
  DAT_14ca73f10 = &DAT_14ca75768;
  return;
}



// FUNCTION 145feae02 FUN_145feae02 body=284 status=ok
// SIG undefined FUN_145feae02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145feae02(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca74138) {
    FUN_144b3d300(&DAT_14ca74138);
    if (DAT_14ca74138 == -1) {
      FUN_145feaf1e();
      FUN_140db5666(&DAT_14ca74090,0,&DAT_14ca74028,L"FWideCustomResolve8_0x_truePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147349872,FUN_14734984a,&LAB_147349832,&LAB_14734982e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca74090 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b2f7);
      _Init_thread_footer(&DAT_14ca74138);
    }
  }
  return &DAT_14ca74090;
}



// FUNCTION 145feaf1e FUN_145feaf1e body=210 status=ok
// SIG undefined FUN_145feaf1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feaf1e(void)

{
  if ((DAT_14ca7408f & 2) == 0) {
    DAT_14ca7408f = DAT_14ca7408f | 2;
    _DAT_14ca74030 = L"FWideCustomResolve8_0x_truePS";
    _DAT_14ca74048 = FUN_146826540;
    _DAT_14ca74050 = FUN_146825d77;
    _DAT_14ca74058 = FUN_146825fd6;
    _DAT_14ca74060 = FUN_1407e02ea;
    _DAT_14ca74068 = FUN_146826273;
    _DAT_14ca74040 = FUN_147349800;
    _DAT_14ca74080 = 0xffffffff000000f0;
    _DAT_14ca74088 = 8;
    DAT_14ca7408c = 0;
    _DAT_14ca74070 = &LAB_14734982a;
    FUN_145feaff0();
    FUN_145feb06a();
    FUN_1407e00cc(&DAT_14ca74028);
    return;
  }
  return;
}



// FUNCTION 145feaff0 FUN_145feaff0 body=121 status=ok
// SIG undefined FUN_145feaff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feaff0(void)

{
  FUN_145feb0e6();
  _DAT_14ca757f8 = &DAT_14a235a78;
  DAT_14ca75822 = FUN_140850cc5();
  _DAT_14ca75800 = FUN_140fb78d0();
  _DAT_14ca75810 = &LAB_14682652b;
  _DAT_14ca75818 = 0x1000000e0;
  _DAT_14ca75820 = 0;
  _DAT_14ca75808 = DAT_14ca74038;
  DAT_14ca74038 = &DAT_14ca757f8;
  return;
}



// FUNCTION 145feb06a FUN_145feb06a body=123 status=ok
// SIG undefined FUN_145feb06a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feb06a(void)

{
  _DAT_14ca75888 = L"BASE";
  DAT_14ca758b2 = 4;
  _DAT_14ca75890 = FUN_140b35ae4();
  _DAT_14ca75898 = DAT_14ca74038;
  _DAT_14ca758a0 = &LAB_14682652b;
  DAT_14ca74038 = &DAT_14ca75888;
  DAT_14ca7408d = DAT_14ca7408d + '\x01';
  _DAT_14ca758a8 = 0x100000000;
  if (*(char *)(_DAT_14ca75890 + 100) != '\0') {
    DAT_14ca7408e = DAT_14ca7408e + '\x01';
  }
  return;
}



// FUNCTION 145feb0e6 FUN_145feb0e6 body=216 status=ok
// SIG undefined FUN_145feb0e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feb0e6(void)

{
  _DAT_14ca75858 = L"ResolveOrigin";
  DAT_14ca75882 = FUN_140850cc5();
  _DAT_14ca75860 = FUN_140ec6960();
  _DAT_14ca75870 = &LAB_14682652b;
  _DAT_14ca75878 = 0x1000000e8;
  _DAT_14ca75880 = 0;
  _DAT_14ca75868 = DAT_14ca74038;
  DAT_14ca74038 = &DAT_14ca75858;
  _DAT_14ca75828 = L"FMaskTex";
  DAT_14ca75852 = FUN_140850cc5();
  _DAT_14ca75830 = FUN_140fb78d0();
  _DAT_14ca75840 = &LAB_14682652b;
  _DAT_14ca75848 = 0x1000000e4;
  _DAT_14ca75850 = 0;
  _DAT_14ca75838 = DAT_14ca74038;
  DAT_14ca74038 = &DAT_14ca75828;
  return;
}



// FUNCTION 145feb1be FUN_145feb1be body=284 status=ok
// SIG undefined FUN_145feb1be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145feb1be(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca74260) {
    FUN_144b3d300(&DAT_14ca74260);
    if (DAT_14ca74260 == -1) {
      FUN_145feb2da();
      FUN_140db5666(&DAT_14ca741b8,0,&DAT_14ca74150,L"FWideCustomResolve8_1x_truePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_14734991c,FUN_1473498f4,&LAB_1473498dc,&LAB_1473498d8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca741b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b303);
      _Init_thread_footer(&DAT_14ca74260);
    }
  }
  return &DAT_14ca741b8;
}



// FUNCTION 145feb2da FUN_145feb2da body=210 status=ok
// SIG undefined FUN_145feb2da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feb2da(void)

{
  if ((DAT_14ca741b7 & 2) == 0) {
    DAT_14ca741b7 = DAT_14ca741b7 | 2;
    _DAT_14ca74158 = L"FWideCustomResolve8_1x_truePS";
    _DAT_14ca74170 = FUN_146826540;
    _DAT_14ca74178 = FUN_146825d77;
    _DAT_14ca74180 = FUN_146825fd6;
    _DAT_14ca74188 = FUN_1407e02ea;
    _DAT_14ca74190 = FUN_146826273;
    _DAT_14ca74168 = FUN_1473498aa;
    _DAT_14ca741a8 = 0xffffffff000000f0;
    _DAT_14ca741b0 = 8;
    DAT_14ca741b4 = 0;
    _DAT_14ca74198 = &LAB_1473498d4;
    FUN_145feb3ac();
    FUN_145feb426();
    FUN_1407e00cc(&DAT_14ca74150);
    return;
  }
  return;
}



// FUNCTION 145feb3ac FUN_145feb3ac body=121 status=ok
// SIG undefined FUN_145feb3ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feb3ac(void)

{
  FUN_145feb4a2();
  _DAT_14ca758b8 = &DAT_14a235a78;
  DAT_14ca758e2 = FUN_140850cc5();
  _DAT_14ca758c0 = FUN_140fb78d0();
  _DAT_14ca758d0 = &LAB_14682652b;
  _DAT_14ca758d8 = 0x1000000e0;
  _DAT_14ca758e0 = 0;
  _DAT_14ca758c8 = DAT_14ca74160;
  DAT_14ca74160 = &DAT_14ca758b8;
  return;
}



// FUNCTION 145feb426 FUN_145feb426 body=123 status=ok
// SIG undefined FUN_145feb426(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feb426(void)

{
  _DAT_14ca75948 = L"BASE";
  DAT_14ca75972 = 4;
  _DAT_14ca75950 = FUN_140b35ae4();
  _DAT_14ca75958 = DAT_14ca74160;
  _DAT_14ca75960 = &LAB_14682652b;
  DAT_14ca74160 = &DAT_14ca75948;
  DAT_14ca741b5 = DAT_14ca741b5 + '\x01';
  _DAT_14ca75968 = 0x100000000;
  if (*(char *)(_DAT_14ca75950 + 100) != '\0') {
    DAT_14ca741b6 = DAT_14ca741b6 + '\x01';
  }
  return;
}



// FUNCTION 145feb4a2 FUN_145feb4a2 body=216 status=ok
// SIG undefined FUN_145feb4a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feb4a2(void)

{
  _DAT_14ca75918 = L"ResolveOrigin";
  DAT_14ca75942 = FUN_140850cc5();
  _DAT_14ca75920 = FUN_140ec6960();
  _DAT_14ca75930 = &LAB_14682652b;
  _DAT_14ca75938 = 0x1000000e8;
  _DAT_14ca75940 = 0;
  _DAT_14ca75928 = DAT_14ca74160;
  DAT_14ca74160 = &DAT_14ca75918;
  _DAT_14ca758e8 = L"FMaskTex";
  DAT_14ca75912 = FUN_140850cc5();
  _DAT_14ca758f0 = FUN_140fb78d0();
  _DAT_14ca75900 = &LAB_14682652b;
  _DAT_14ca75908 = 0x1000000e4;
  _DAT_14ca75910 = 0;
  _DAT_14ca758f8 = DAT_14ca74160;
  DAT_14ca74160 = &DAT_14ca758e8;
  return;
}



// FUNCTION 145feb57a FUN_145feb57a body=284 status=ok
// SIG undefined FUN_145feb57a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145feb57a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca74388) {
    FUN_144b3d300(&DAT_14ca74388);
    if (DAT_14ca74388 == -1) {
      FUN_145feb696();
      FUN_140db5666(&DAT_14ca742e0,0,&DAT_14ca74278,L"FWideCustomResolve8_2x_truePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_1473499c6,FUN_14734999e,&LAB_147349986,&LAB_147349982,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca742e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b30f);
      _Init_thread_footer(&DAT_14ca74388);
    }
  }
  return &DAT_14ca742e0;
}



// FUNCTION 145feb696 FUN_145feb696 body=210 status=ok
// SIG undefined FUN_145feb696(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feb696(void)

{
  if ((DAT_14ca742df & 2) == 0) {
    DAT_14ca742df = DAT_14ca742df | 2;
    _DAT_14ca74280 = L"FWideCustomResolve8_2x_truePS";
    _DAT_14ca74298 = FUN_146826540;
    _DAT_14ca742a0 = FUN_146825d77;
    _DAT_14ca742a8 = FUN_146825fd6;
    _DAT_14ca742b0 = FUN_1407e02ea;
    _DAT_14ca742b8 = FUN_146826273;
    _DAT_14ca74290 = FUN_147349954;
    _DAT_14ca742d0 = 0xffffffff000000f0;
    _DAT_14ca742d8 = 8;
    DAT_14ca742dc = 0;
    _DAT_14ca742c0 = &LAB_14734997e;
    FUN_145feb768();
    FUN_145feb7e2();
    FUN_1407e00cc(&DAT_14ca74278);
    return;
  }
  return;
}



// FUNCTION 145feb768 FUN_145feb768 body=121 status=ok
// SIG undefined FUN_145feb768(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feb768(void)

{
  FUN_145feb85e();
  _DAT_14ca75978 = &DAT_14a235a78;
  DAT_14ca759a2 = FUN_140850cc5();
  _DAT_14ca75980 = FUN_140fb78d0();
  _DAT_14ca75990 = &LAB_14682652b;
  _DAT_14ca75998 = 0x1000000e0;
  _DAT_14ca759a0 = 0;
  _DAT_14ca75988 = DAT_14ca74288;
  DAT_14ca74288 = &DAT_14ca75978;
  return;
}



// FUNCTION 145feb7e2 FUN_145feb7e2 body=123 status=ok
// SIG undefined FUN_145feb7e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feb7e2(void)

{
  _DAT_14ca75a08 = L"BASE";
  DAT_14ca75a32 = 4;
  _DAT_14ca75a10 = FUN_140b35ae4();
  _DAT_14ca75a18 = DAT_14ca74288;
  _DAT_14ca75a20 = &LAB_14682652b;
  DAT_14ca74288 = &DAT_14ca75a08;
  DAT_14ca742dd = DAT_14ca742dd + '\x01';
  _DAT_14ca75a28 = 0x100000000;
  if (*(char *)(_DAT_14ca75a10 + 100) != '\0') {
    DAT_14ca742de = DAT_14ca742de + '\x01';
  }
  return;
}



// FUNCTION 145feb85e FUN_145feb85e body=216 status=ok
// SIG undefined FUN_145feb85e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feb85e(void)

{
  _DAT_14ca759d8 = L"ResolveOrigin";
  DAT_14ca75a02 = FUN_140850cc5();
  _DAT_14ca759e0 = FUN_140ec6960();
  _DAT_14ca759f0 = &LAB_14682652b;
  _DAT_14ca759f8 = 0x1000000e8;
  _DAT_14ca75a00 = 0;
  _DAT_14ca759e8 = DAT_14ca74288;
  DAT_14ca74288 = &DAT_14ca759d8;
  _DAT_14ca759a8 = L"FMaskTex";
  DAT_14ca759d2 = FUN_140850cc5();
  _DAT_14ca759b0 = FUN_140fb78d0();
  _DAT_14ca759c0 = &LAB_14682652b;
  _DAT_14ca759c8 = 0x1000000e4;
  _DAT_14ca759d0 = 0;
  _DAT_14ca759b8 = DAT_14ca74288;
  DAT_14ca74288 = &DAT_14ca759a8;
  return;
}



// FUNCTION 145feb936 FUN_145feb936 body=284 status=ok
// SIG undefined FUN_145feb936(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145feb936(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca744b0) {
    FUN_144b3d300(&DAT_14ca744b0);
    if (DAT_14ca744b0 == -1) {
      FUN_145feba52();
      FUN_140db5666(&DAT_14ca74408,0,&DAT_14ca743a0,L"FWideCustomResolve8_3x_truePS",
                    L"/Engine/Private/WideCustomResolveShaders.usf",L"WideCustomResolvePS",3,1,
                    FUN_147349a70,FUN_147349a48,&LAB_147349a30,&LAB_147349a2c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca74408 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14313b31b);
      _Init_thread_footer(&DAT_14ca744b0);
    }
  }
  return &DAT_14ca74408;
}



// FUNCTION 145feba52 FUN_145feba52 body=210 status=ok
// SIG undefined FUN_145feba52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145feba52(void)

{
  if ((DAT_14ca74407 & 2) == 0) {
    DAT_14ca74407 = DAT_14ca74407 | 2;
    _DAT_14ca743a8 = L"FWideCustomResolve8_3x_truePS";
    _DAT_14ca743c0 = FUN_146826540;
    _DAT_14ca743c8 = FUN_146825d77;
    _DAT_14ca743d0 = FUN_146825fd6;
    _DAT_14ca743d8 = FUN_1407e02ea;
    _DAT_14ca743e0 = FUN_146826273;
    _DAT_14ca743b8 = FUN_1473499fe;
    _DAT_14ca743f8 = 0xffffffff000000f0;
    _DAT_14ca74400 = 8;
    DAT_14ca74404 = 0;
    _DAT_14ca743e8 = &LAB_147349a28;
    FUN_145febb24();
    FUN_145febb9e();
    FUN_1407e00cc(&DAT_14ca743a0);
    return;
  }
  return;
}



// FUNCTION 145febb24 FUN_145febb24 body=121 status=ok
// SIG undefined FUN_145febb24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145febb24(void)

{
  FUN_145febc1a();
  _DAT_14ca75a38 = &DAT_14a235a78;
  DAT_14ca75a62 = FUN_140850cc5();
  _DAT_14ca75a40 = FUN_140fb78d0();
  _DAT_14ca75a50 = &LAB_14682652b;
  _DAT_14ca75a58 = 0x1000000e0;
  _DAT_14ca75a60 = 0;
  _DAT_14ca75a48 = DAT_14ca743b0;
  DAT_14ca743b0 = &DAT_14ca75a38;
  return;
}



// FUNCTION 145febb9e FUN_145febb9e body=123 status=ok
// SIG undefined FUN_145febb9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145febb9e(void)

{
  _DAT_14ca75ac8 = L"BASE";
  DAT_14ca75af2 = 4;
  _DAT_14ca75ad0 = FUN_140b35ae4();
  _DAT_14ca75ad8 = DAT_14ca743b0;
  _DAT_14ca75ae0 = &LAB_14682652b;
  DAT_14ca743b0 = &DAT_14ca75ac8;
  DAT_14ca74405 = DAT_14ca74405 + '\x01';
  _DAT_14ca75ae8 = 0x100000000;
  if (*(char *)(_DAT_14ca75ad0 + 100) != '\0') {
    DAT_14ca74406 = DAT_14ca74406 + '\x01';
  }
  return;
}



// FUNCTION 145febc1a FUN_145febc1a body=216 status=ok
// SIG undefined FUN_145febc1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145febc1a(void)

{
  _DAT_14ca75a98 = L"ResolveOrigin";
  DAT_14ca75ac2 = FUN_140850cc5();
  _DAT_14ca75aa0 = FUN_140ec6960();
  _DAT_14ca75ab0 = &LAB_14682652b;
  _DAT_14ca75ab8 = 0x1000000e8;
  _DAT_14ca75ac0 = 0;
  _DAT_14ca75aa8 = DAT_14ca743b0;
  DAT_14ca743b0 = &DAT_14ca75a98;
  _DAT_14ca75a68 = L"FMaskTex";
  DAT_14ca75a92 = FUN_140850cc5();
  _DAT_14ca75a70 = FUN_140fb78d0();
  _DAT_14ca75a80 = &LAB_14682652b;
  _DAT_14ca75a88 = 0x1000000e4;
  _DAT_14ca75a90 = 0;
  _DAT_14ca75a78 = DAT_14ca743b0;
  DAT_14ca743b0 = &DAT_14ca75a68;
  return;
}



// FUNCTION 145febcfe FUN_145febcfe body=465 status=ok
// SIG undefined FUN_145febcfe(void)

undefined8 * FUN_145febcfe(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined **local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98 [10];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_14a4fd140;
  param_1[5] = &PTR_FUN_14a4fd470;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)((longlong)param_1 + 0x192) = 1;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0x38] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0x39) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uStack_cc;
  *(undefined4 *)(param_1 + 0x3a) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = uStack_c4;
  *(undefined4 *)(param_1 + 0x3b) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = uStack_bc;
  *(undefined4 *)(param_1 + 0x3c) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = uStack_b4;
  *(undefined4 *)(param_1 + 0x3d) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = uStack_ac;
  *(undefined4 *)(param_1 + 0x3e) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 500) = uStack_a4;
  param_1[0x3f] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar4 = local_98;
  puVar5 = param_1 + 0x40;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x254) = local_44;
  *(undefined4 *)(param_1 + 0x4a) = local_48;
  param_1[0x4b] = local_40;
  param_1[0x4c] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x4d] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x4d] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
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
  }
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  FUN_140e2f50a(param_1,4);
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145febed0 FUN_145febed0 body=284 status=ok
// SIG undefined FUN_145febed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145febed0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad4090) {
    FUN_144b3d300(&DAT_14cad4090);
    if (DAT_14cad4090 == -1) {
      FUN_145febfec();
      FUN_140db5666(&DAT_14cad3fe8,0,&DAT_14cad3f80,L"FIESLightProfilePS",
                    L"/Engine/Private/SimpleElementPixelShader.usf",L"IESLightProfileMain",3,1,
                    FUN_147a3c5be,FUN_147a3c596,&LAB_147a3c574,&LAB_147a3c570,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14cad3fe8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1434a7250);
      _Init_thread_footer(&DAT_14cad4090);
    }
  }
  return &DAT_14cad3fe8;
}



// FUNCTION 145febfec FUN_145febfec body=210 status=ok
// SIG undefined FUN_145febfec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145febfec(void)

{
  if ((DAT_14cad3fe7 & 2) == 0) {
    DAT_14cad3fe7 = DAT_14cad3fe7 | 2;
    _DAT_14cad3f88 = L"FIESLightProfilePS";
    _DAT_14cad3fa0 = FUN_146826540;
    _DAT_14cad3fa8 = FUN_146825d77;
    _DAT_14cad3fb0 = FUN_146825fd6;
    _DAT_14cad3fb8 = FUN_1407e02ea;
    _DAT_14cad3fc0 = FUN_146826273;
    _DAT_14cad3f98 = FUN_147a3c542;
    _DAT_14cad3fd8 = 0xffffffff000000f0;
    _DAT_14cad3fe0 = 8;
    DAT_14cad3fe4 = 0;
    _DAT_14cad3fc8 = &LAB_147a3c56c;
    FUN_145fec0be();
    FUN_145fec138();
    FUN_1407e00cc(&DAT_14cad3f80);
    return;
  }
  return;
}



// FUNCTION 145fec0be FUN_145fec0be body=121 status=ok
// SIG undefined FUN_145fec0be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fec0be(void)

{
  FUN_145fec1b4();
  _DAT_14cad57d8 = L"IESTexture";
  DAT_14cad5802 = FUN_140850cc5();
  _DAT_14cad57e0 = FUN_140fb78d0();
  _DAT_14cad57f0 = &LAB_14682652b;
  _DAT_14cad57f8 = 0x1000000e0;
  _DAT_14cad5800 = 0;
  _DAT_14cad57e8 = DAT_14cad3f90;
  DAT_14cad3f90 = &DAT_14cad57d8;
  return;
}



// FUNCTION 145fec138 FUN_145fec138 body=123 status=ok
// SIG undefined FUN_145fec138(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fec138(void)

{
  _DAT_14cad58c8 = L"BASE";
  DAT_14cad58f2 = 4;
  _DAT_14cad58d0 = FUN_140b35ae4();
  _DAT_14cad58d8 = DAT_14cad3f90;
  _DAT_14cad58e0 = &LAB_14682652b;
  DAT_14cad3f90 = &DAT_14cad58c8;
  DAT_14cad3fe5 = DAT_14cad3fe5 + '\x01';
  _DAT_14cad58e8 = 0x100000000;
  if (*(char *)(_DAT_14cad58d0 + 100) != '\0') {
    DAT_14cad3fe6 = DAT_14cad3fe6 + '\x01';
  }
  return;
}



// FUNCTION 145fec1b4 FUN_145fec1b4 body=216 status=ok
// SIG undefined FUN_145fec1b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fec1b4(void)

{
  _DAT_14cad5838 = L"BrightnessInLumens";
  DAT_14cad5862 = FUN_140850cc5();
  _DAT_14cad5840 = FUN_140ec6960();
  _DAT_14cad5850 = &LAB_14682652b;
  _DAT_14cad5858 = 0x1000000e8;
  _DAT_14cad5860 = 0;
  _DAT_14cad5848 = DAT_14cad3f90;
  DAT_14cad3f90 = &DAT_14cad5838;
  _DAT_14cad5808 = L"IESTextureSampler";
  DAT_14cad5832 = FUN_140850cc5();
  _DAT_14cad5810 = FUN_140fb78d0();
  _DAT_14cad5820 = &LAB_14682652b;
  _DAT_14cad5828 = 0x1000000e4;
  _DAT_14cad5830 = 0;
  _DAT_14cad5818 = DAT_14cad3f90;
  DAT_14cad3f90 = &DAT_14cad5808;
  return;
}



// FUNCTION 145fec28c FUN_145fec28c body=284 status=ok
// SIG undefined FUN_145fec28c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fec28c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb03c48) {
    FUN_144b3d300(&DAT_14cb03c48);
    if (DAT_14cb03c48 == -1) {
      FUN_145fec3a8();
      FUN_140db5666(&DAT_14cb03ba0,0,&DAT_14cb03b38,L"FScreenPSMipLevel",
                    L"/Engine/Private/ScreenPixelShader.usf",L"MainMipLevel",3,1,FUN_147cf13fc,
                    FUN_147cf13d4,&LAB_147cf13d0,&LAB_147cf13cc,&LAB_14712ac0c,&LAB_14712ac08,0xf0,0
                   );
      _DAT_14cb03ba0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436a4ed5);
      _Init_thread_footer(&DAT_14cb03c48);
    }
  }
  return &DAT_14cb03ba0;
}



// FUNCTION 145fec3a8 FUN_145fec3a8 body=210 status=ok
// SIG undefined FUN_145fec3a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fec3a8(void)

{
  if ((DAT_14cb03b9f & 2) == 0) {
    DAT_14cb03b9f = DAT_14cb03b9f | 2;
    _DAT_14cb03b40 = L"FScreenPSMipLevel";
    _DAT_14cb03b58 = FUN_146826540;
    _DAT_14cb03b60 = FUN_146825d77;
    _DAT_14cb03b68 = FUN_146825fd6;
    _DAT_14cb03b70 = FUN_1407e02ea;
    _DAT_14cb03b78 = FUN_146826273;
    _DAT_14cb03b50 = FUN_147cf139e;
    _DAT_14cb03b90 = 0xffffffff000000f0;
    _DAT_14cb03b98 = 8;
    DAT_14cb03b9c = 0;
    _DAT_14cb03b80 = &LAB_147cf13c8;
    FUN_145fec47a();
    FUN_145fec4f4();
    FUN_1407e00cc(&DAT_14cb03b38);
    return;
  }
  return;
}



// FUNCTION 145fec47a FUN_145fec47a body=121 status=ok
// SIG undefined FUN_145fec47a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fec47a(void)

{
  FUN_145fec570();
  _DAT_14cb05028 = L"InTexture";
  DAT_14cb05052 = FUN_140850cc5();
  _DAT_14cb05030 = FUN_140fb78d0();
  _DAT_14cb05040 = &LAB_14682652b;
  _DAT_14cb05048 = 0x1000000e0;
  _DAT_14cb05050 = 0;
  _DAT_14cb05038 = DAT_14cb03b48;
  DAT_14cb03b48 = &DAT_14cb05028;
  return;
}



// FUNCTION 145fec4f4 FUN_145fec4f4 body=123 status=ok
// SIG undefined FUN_145fec4f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fec4f4(void)

{
  _DAT_14cb05298 = L"BASE";
  DAT_14cb052c2 = 4;
  _DAT_14cb052a0 = FUN_140b35ae4();
  _DAT_14cb052a8 = DAT_14cb03b48;
  _DAT_14cb052b0 = &LAB_14682652b;
  DAT_14cb03b48 = &DAT_14cb05298;
  DAT_14cb03b9d = DAT_14cb03b9d + '\x01';
  _DAT_14cb052b8 = 0x100000000;
  if (*(char *)(_DAT_14cb052a0 + 100) != '\0') {
    DAT_14cb03b9e = DAT_14cb03b9e + '\x01';
  }
  return;
}



// FUNCTION 145fec570 FUN_145fec570 body=216 status=ok
// SIG undefined FUN_145fec570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fec570(void)

{
  _DAT_14cb05088 = L"InMipLevelParameter";
  DAT_14cb050b2 = FUN_140850cc5();
  _DAT_14cb05090 = FUN_140ec6960();
  _DAT_14cb050a0 = &LAB_14682652b;
  _DAT_14cb050a8 = 0x1000000e8;
  _DAT_14cb050b0 = 0;
  _DAT_14cb05098 = DAT_14cb03b48;
  DAT_14cb03b48 = &DAT_14cb05088;
  _DAT_14cb05058 = L"InTextureSampler";
  DAT_14cb05082 = FUN_140850cc5();
  _DAT_14cb05060 = FUN_140fb78d0();
  _DAT_14cb05070 = &LAB_14682652b;
  _DAT_14cb05078 = 0x1000000e4;
  _DAT_14cb05080 = 0;
  _DAT_14cb05068 = DAT_14cb03b48;
  DAT_14cb03b48 = &DAT_14cb05058;
  return;
}



// FUNCTION 145fec648 FUN_145fec648 body=284 status=ok
// SIG undefined FUN_145fec648(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fec648(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb03d70) {
    FUN_144b3d300(&DAT_14cb03d70);
    if (DAT_14cb03d70 == -1) {
      FUN_145fec764();
      FUN_140db5666(&DAT_14cb03cc8,0,&DAT_14cb03c60,L"FScreenPSsRGBSourceMipLevel",
                    L"/Engine/Private/ScreenPixelShader.usf",L"MainsRGBSourceMipLevel",3,1,
                    FUN_147cf1492,FUN_147cf146a,&LAB_147cf1466,&LAB_147cf1462,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14cb03cc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436a4ee1);
      _Init_thread_footer(&DAT_14cb03d70);
    }
  }
  return &DAT_14cb03cc8;
}



// FUNCTION 145fec764 FUN_145fec764 body=210 status=ok
// SIG undefined FUN_145fec764(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fec764(void)

{
  if ((DAT_14cb03cc7 & 2) == 0) {
    DAT_14cb03cc7 = DAT_14cb03cc7 | 2;
    _DAT_14cb03c68 = L"FScreenPSsRGBSourceMipLevel";
    _DAT_14cb03c80 = FUN_146826540;
    _DAT_14cb03c88 = FUN_146825d77;
    _DAT_14cb03c90 = FUN_146825fd6;
    _DAT_14cb03c98 = FUN_1407e02ea;
    _DAT_14cb03ca0 = FUN_146826273;
    _DAT_14cb03c78 = FUN_147cf1434;
    _DAT_14cb03cb8 = 0xffffffff000000f0;
    _DAT_14cb03cc0 = 8;
    DAT_14cb03cc4 = 0;
    _DAT_14cb03ca8 = &LAB_147cf145e;
    FUN_145fec836();
    FUN_145fec8b0();
    FUN_1407e00cc(&DAT_14cb03c60);
    return;
  }
  return;
}



// FUNCTION 145fec836 FUN_145fec836 body=121 status=ok
// SIG undefined FUN_145fec836(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fec836(void)

{
  FUN_145fec92c();
  _DAT_14cb050b8 = L"InTexture";
  DAT_14cb050e2 = FUN_140850cc5();
  _DAT_14cb050c0 = FUN_140fb78d0();
  _DAT_14cb050d0 = &LAB_14682652b;
  _DAT_14cb050d8 = 0x1000000e0;
  _DAT_14cb050e0 = 0;
  _DAT_14cb050c8 = DAT_14cb03c70;
  DAT_14cb03c70 = &DAT_14cb050b8;
  return;
}



// FUNCTION 145fec8b0 FUN_145fec8b0 body=123 status=ok
// SIG undefined FUN_145fec8b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fec8b0(void)

{
  _DAT_14cb052c8 = L"BASE";
  DAT_14cb052f2 = 4;
  _DAT_14cb052d0 = FUN_140b35ae4();
  _DAT_14cb052d8 = DAT_14cb03c70;
  _DAT_14cb052e0 = &LAB_14682652b;
  DAT_14cb03c70 = &DAT_14cb052c8;
  DAT_14cb03cc5 = DAT_14cb03cc5 + '\x01';
  _DAT_14cb052e8 = 0x100000000;
  if (*(char *)(_DAT_14cb052d0 + 100) != '\0') {
    DAT_14cb03cc6 = DAT_14cb03cc6 + '\x01';
  }
  return;
}



// FUNCTION 145fec92c FUN_145fec92c body=216 status=ok
// SIG undefined FUN_145fec92c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fec92c(void)

{
  _DAT_14cb05118 = L"InMipLevelParameter";
  DAT_14cb05142 = FUN_140850cc5();
  _DAT_14cb05120 = FUN_140ec6960();
  _DAT_14cb05130 = &LAB_14682652b;
  _DAT_14cb05138 = 0x1000000e8;
  _DAT_14cb05140 = 0;
  _DAT_14cb05128 = DAT_14cb03c70;
  DAT_14cb03c70 = &DAT_14cb05118;
  _DAT_14cb050e8 = L"InTextureSampler";
  DAT_14cb05112 = FUN_140850cc5();
  _DAT_14cb050f0 = FUN_140fb78d0();
  _DAT_14cb05100 = &LAB_14682652b;
  _DAT_14cb05108 = 0x1000000e4;
  _DAT_14cb05110 = 0;
  _DAT_14cb050f8 = DAT_14cb03c70;
  DAT_14cb03c70 = &DAT_14cb050e8;
  return;
}



// FUNCTION 145feca04 FUN_145feca04 body=284 status=ok
// SIG undefined FUN_145feca04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145feca04(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb07da8) {
    FUN_144b3d300(&DAT_14cb07da8);
    if (DAT_14cb07da8 == -1) {
      FUN_145fecb20();
      FUN_140db5666(&DAT_14cb07d00,0,&DAT_14cb07c98,L"FGPUMorphNormalizeCS",
                    L"/Engine/Private/MorphTargets.usf",L"GPUMorphNormalizeCS",5,1,FUN_147d23622,
                    FUN_147d235fa,&LAB_147d235e2,&LAB_147d235de,&LAB_14712ac0c,&LAB_14712ac08,0xf0,0
                   );
      _DAT_14cb07d00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436e5065);
      _Init_thread_footer(&DAT_14cb07da8);
    }
  }
  return &DAT_14cb07d00;
}



// FUNCTION 145fecb20 FUN_145fecb20 body=210 status=ok
// SIG undefined FUN_145fecb20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fecb20(void)

{
  if ((DAT_14cb07cff & 2) == 0) {
    DAT_14cb07cff = DAT_14cb07cff | 2;
    _DAT_14cb07ca0 = L"FGPUMorphNormalizeCS";
    _DAT_14cb07cb8 = FUN_146826540;
    _DAT_14cb07cc0 = FUN_146825d77;
    _DAT_14cb07cc8 = FUN_146825fd6;
    _DAT_14cb07cd0 = FUN_1407e02ea;
    _DAT_14cb07cd8 = FUN_146826273;
    _DAT_14cb07cb0 = FUN_147d235b0;
    _DAT_14cb07cf0 = 0xffffffff000000f0;
    _DAT_14cb07cf8 = 8;
    DAT_14cb07cfc = 0;
    _DAT_14cb07ce0 = &LAB_147d235da;
    FUN_145fecbf2();
    FUN_145fecc6c();
    FUN_1407e00cc(&DAT_14cb07c98);
    return;
  }
  return;
}



// FUNCTION 145fecbf2 FUN_145fecbf2 body=121 status=ok
// SIG undefined FUN_145fecbf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fecbf2(void)

{
  FUN_145fecce8();
  _DAT_14cb08240 = L"MorphVertexBufferParameter";
  DAT_14cb0826a = FUN_140850cc5();
  _DAT_14cb08248 = FUN_140fb78d0();
  _DAT_14cb08258 = &LAB_14682652b;
  _DAT_14cb08260 = 0x1000000e0;
  _DAT_14cb08268 = 0;
  _DAT_14cb08250 = DAT_14cb07ca8;
  DAT_14cb07ca8 = &DAT_14cb08240;
  return;
}



// FUNCTION 145fecc6c FUN_145fecc6c body=123 status=ok
// SIG undefined FUN_145fecc6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fecc6c(void)

{
  _DAT_14cb08388 = L"BASE";
  DAT_14cb083b2 = 4;
  _DAT_14cb08390 = FUN_140b35ae4();
  _DAT_14cb08398 = DAT_14cb07ca8;
  _DAT_14cb083a0 = &LAB_14682652b;
  DAT_14cb07ca8 = &DAT_14cb08388;
  DAT_14cb07cfd = DAT_14cb07cfd + '\x01';
  _DAT_14cb083a8 = 0x100000000;
  if (*(char *)(_DAT_14cb08390 + 100) != '\0') {
    DAT_14cb07cfe = DAT_14cb07cfe + '\x01';
  }
  return;
}



// FUNCTION 145fecce8 FUN_145fecce8 body=216 status=ok
// SIG undefined FUN_145fecce8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fecce8(void)

{
  _DAT_14cb082a0 = L"NumVerticesParameter";
  DAT_14cb082ca = FUN_140850cc5();
  _DAT_14cb082a8 = FUN_140ec6960();
  _DAT_14cb082b8 = &LAB_14682652b;
  _DAT_14cb082c0 = 0x1000000ea;
  _DAT_14cb082c8 = 0;
  _DAT_14cb082b0 = DAT_14cb07ca8;
  DAT_14cb07ca8 = &DAT_14cb082a0;
  _DAT_14cb08270 = L"PositionScaleParameter";
  DAT_14cb0829a = FUN_140850cc5();
  _DAT_14cb08278 = FUN_140ec6960();
  _DAT_14cb08288 = &LAB_14682652b;
  _DAT_14cb08290 = 0x1000000e4;
  _DAT_14cb08298 = 0;
  _DAT_14cb08280 = DAT_14cb07ca8;
  DAT_14cb07ca8 = &DAT_14cb08270;
  return;
}



// FUNCTION 145fecdc0 FUN_145fecdc0 body=91 status=ok
// SIG undefined FUN_145fecdc0(void)

void FUN_145fecdc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
  *puVar1 = &PTR_FUN_149e16880;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0x600000000;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa1) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa9) = 0;
  return;
}



// FUNCTION 145fece24 FUN_145fece24 body=584 status=ok
// SIG undefined FUN_145fece24(void)

undefined8 * FUN_145fece24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bec1d50;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0xfffffffe;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 0;
  param_1[0x4a] = 0;
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
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x5c] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x60] = DAT_14c846520;
  uVar1 = DAT_14c846518;
  param_1[0x5e] = DAT_14c846510;
  param_1[0x5f] = uVar1;
  param_1[0x61] = &DAT_3f8000003f800000;
  uVar1 = DAT_14c8464e8;
  param_1[0x62] = DAT_14c8464e0;
  param_1[99] = uVar1;
  param_1[100] = DAT_14c8464f0;
  uVar1 = DAT_14c846500;
  param_1[0x65] = DAT_14c8464f8;
  param_1[0x66] = uVar1;
  param_1[0x67] = DAT_14c846508;
  param_1[0x68] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6c) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6d] = 0x100000000;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  FUN_144a91fee(&local_48,"IKRetarget_",*(undefined4 *)((longlong)param_1 + 0xc));
  local_40 = L"IKRetargetLogName";
  local_38 = 0x11;
  FUN_1446e940c(local_4c,&local_40);
  local_40 = L"IKRetargetProcessor";
  local_38 = 0x13;
  FUN_1446e940c(local_50,&local_40);
  FUN_140208bae(&local_40,local_50,local_4c,L"IK Retarget Log");
  param_1[5] = local_48;
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fed06d FUN_145fed06d body=165 status=ok
// SIG undefined FUN_145fed06d(void)

void FUN_145fed06d(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1415b2b71();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_1415b2b20(param_1,param_2);
  return;
}



// FUNCTION 145fed112 FUN_145fed112 body=330 status=ok
// SIG undefined FUN_145fed112(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fed112(void)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  longlong lVar4;
  
  FUN_145fed25c();
  FUN_145fed2a6();
  puVar2 = DAT_14ca80b68;
  if (DAT_14ca80b68 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(DAT_14ca80b68 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (DAT_14ca80b48 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca80b38 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca80b28 != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14ca80b00);
  if (DAT_14ca80af0 != 0) {
    FUN_1400020a8();
  }
  lVar4 = -0x140;
  puVar3 = &DAT_14ca80a80;
  do {
    *(undefined4 *)(puVar3 + 0x48) = 0;
    if (*(longlong *)(puVar3 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140dab95c(puVar3);
    puVar3 = puVar3 + -0x50;
    lVar4 = lVar4 + 0x50;
  } while (lVar4 != 0);
  _DAT_14ca80988 = 0;
  if (DAT_14ca80980 != 0) {
    FUN_1400020a8();
  }
  FUN_140dab95c(&DAT_14ca80940);
  _DAT_14ca80938 = 0;
  if (DAT_14ca80930 != 0) {
    FUN_1400020a8();
  }
  FUN_140dab95c(&DAT_14ca808f0);
  if (DAT_14ca808d8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca808c8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145fed25c FUN_145fed25c body=74 status=ok
// SIG undefined FUN_145fed25c(void)

void FUN_145fed25c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  puVar2 = DAT_14ca80ba0;
  puVar3 = DAT_14ca80bb0;
  do {
    puVar1 = (undefined8 *)*puVar3;
    FUN_1400020a8(puVar3);
    bVar4 = puVar3 != puVar2;
    puVar3 = puVar1;
  } while (bVar4);
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1400020a8(puVar1);
    puVar1 = puVar2;
  }
  return;
}



// FUNCTION 145fed2a6 FUN_145fed2a6 body=74 status=ok
// SIG undefined FUN_145fed2a6(void)

void FUN_145fed2a6(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  puVar2 = DAT_14ca80b80;
  puVar3 = DAT_14ca80b90;
  do {
    puVar1 = (undefined8 *)*puVar3;
    FUN_1400020a8(puVar3);
    bVar4 = puVar3 != puVar2;
    puVar3 = puVar1;
  } while (bVar4);
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_1400020a8(puVar1);
    puVar1 = puVar2;
  }
  return;
}



// FUNCTION 145fed2fc FUN_145fed2fc body=228 status=ok
// SIG undefined FUN_145fed2fc(void)

undefined8 * FUN_145fed2fc(undefined8 *param_1)

{
  FUN_145d47d44();
  *param_1 = &PTR_FUN_14abc2ef0;
  param_1[5] = &PTR_FUN_14abc3380;
  param_1[6] = &PTR_LAB_14abc33c0;
  param_1[0x22] = &PTR_FUN_14abc3410;
  *(undefined1 *)(param_1 + 0x42) = 1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  FUN_14485c47a(param_1 + 0x47,0);
  param_1[0x48] = 0x407f400000000000;
  param_1[0x49] = 0x407f400000000000;
  *(undefined4 *)(param_1 + 0x4a) = 1;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x3ff00000;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0x3ff0000000000000;
  param_1[0x55] = 0x3ff0000000000000;
  param_1[0x56] = 0x3ff0000000000000;
  param_1[0x57] = 0;
  return param_1;
}



// FUNCTION 145fed3ec FUN_145fed3ec body=228 status=ok
// SIG undefined FUN_145fed3ec(void)

undefined8 * FUN_145fed3ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14af06690;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xd] = DAT_14c8464e0;
  param_1[0xe] = uVar1;
  param_1[0xf] = DAT_14c8464f0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3ff0000000000000;
  param_1[0x14] = 0x7fefffffffffffff;
  param_1[0x15] = 0x7fefffffffffffff;
  param_1[0x16] = 0x7fefffffffffffff;
  param_1[0x17] = 0xffefffffffffffff;
  param_1[0x18] = 0xffefffffffffffff;
  param_1[0x19] = 0xffefffffffffffff;
  param_1[0x1c] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1a] = DAT_14c8464e0;
  param_1[0x1b] = uVar1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return param_1;
}



// FUNCTION 145fed4d0 FUN_145fed4d0 body=112 status=ok
// SIG undefined FUN_145fed4d0(void)

void FUN_145fed4d0(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*param_1 + 0x240))();
  if (cVar1 == '\0') {
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)(*param_1 + 0x220))(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  (**(code **)(*param_1 + 0x240))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fed554 FUN_145fed554 body=230 status=ok
// SIG undefined FUN_145fed554(void)

undefined8 * FUN_145fed554(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bb93d70;
  param_1[5] = 0;
  param_1[6] = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_14020fad6(&local_48,L"ControlRig/Pose");
  iVar2 = *(int *)(param_1 + 6);
  *(uint *)(param_1 + 6) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x34) < iVar2 + 1U) {
    FUN_146027e50(param_1 + 5,iVar2);
  }
  _Src = local_48;
  lVar3 = param_1[5];
  lVar4 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = 0;
  lVar5 = (longlong)(int)uStack_40;
  *(int *)(lVar3 + 8 + lVar4) = (int)uStack_40;
  if (lVar5 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,uStack_40 & 0xffffffff,0);
    memcpy((void *)*puVar1,_Src,lVar5 * 2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fed644 FUN_145fed644 body=231 status=ok
// SIG undefined FUN_145fed644(void)

undefined8 * FUN_145fed644(undefined8 *param_1)

{
  FUN_1458de9a4();
  *param_1 = &PTR_FUN_14bd9dd90;
  param_1[5] = &PTR_FUN_14bd9e150;
  param_1[0x13] = &PTR_FUN_14bd9e170;
  param_1[0x16] = &PTR_FUN_14bd9e1a0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  memset(param_1 + 0x1b,0,0x98);
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3ff00000;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x3ff0000000000000;
  param_1[0x41] = 0x3ff0000000000000;
  param_1[0x42] = 0x3ff0000000000000;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  return param_1;
}



// FUNCTION 145fed736 FUN_145fed736 body=227 status=ok
// SIG undefined FUN_145fed736(void)

undefined8 * FUN_145fed736(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14be10740;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"DataflowComponent0",1);
  uVar2 = FUN_14599dc12();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_14689c22e(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fed822 FUN_145fed822 body=231 status=ok
// SIG undefined FUN_145fed822(void)

undefined8 * FUN_145fed822(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = FUN_14007ca06();
  FUN_1400ead26(param_1,uVar1);
  *param_1 = &PTR_FUN_14be7c6a0;
  param_1[5] = &PTR_LAB_14be7cc80;
  param_1[6] = &PTR_LAB_14be7ccc0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0x4248000042480000;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x3ff00000;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0x3ff0000000000000;
  param_1[0x67] = 0x3ff0000000000000;
  param_1[0x68] = 0x3ff0000000000000;
  param_1[0x69] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x6a;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(undefined2 *)(param_1 + 9) = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf8 | 6;
  return param_1;
}



// FUNCTION 145fed90a FUN_145fed90a body=192 status=ok
// SIG undefined FUN_145fed90a(void)

bool FUN_145fed90a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
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
    local_48 = param_5;
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



// FUNCTION 145fed9cc FUN_145fed9cc body=226 status=ok
// SIG undefined FUN_145fed9cc(void)

void FUN_145fed9cc(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *in_stack_00000028;
  
  *in_stack_00000028 = 1;
  *(undefined8 *)(param_1 + 0xf10) = 0;
  if (*(char *)(param_1 + 0x6b1) == '\x01') {
    *(undefined1 *)(param_1 + 0x6b1) = 0;
    return;
  }
  iVar3 = FUN_14487fd02(param_1);
  if (iVar3 == 3) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x168);
  if (lVar5 != 0) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_145feda36;
  }
  lVar5 = 0;
LAB_145feda36:
  lVar4 = FUN_1447210f0(param_1);
  if (((lVar4 != 0) && (cVar2 = FUN_1405e675c(lVar4), cVar2 == '\0')) &&
     (plVar1 = *(longlong **)(lVar4 + 0x170), plVar1 != (longlong *)0x0)) {
    lVar4 = FUN_140425b9a();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(plVar1[2] + 0x38)) && (lVar5 != 0)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000145feda99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x7a0))(plVar1,lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 145fedaae FUN_145fedaae body=169 status=ok
// SIG undefined FUN_145fedaae(void)

bool FUN_145fedaae(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_48);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fedb58 FUN_145fedb58 body=138 status=ok
// SIG undefined FUN_145fedb58(void)

code * FUN_145fedb58(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InCellDraws";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< FCellDraw >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000002b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147256b0e;
}



// FUNCTION 145fedbe2 FUN_145fedbe2 body=138 status=ok
// SIG undefined FUN_145fedbe2(void)

code * FUN_145fedbe2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InOccludedCellDraws";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FOccludedCellDraw>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc8000002b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fedb58;
}



// FUNCTION 145fedc6c FUN_145fedc6c body=138 status=ok
// SIG undefined FUN_145fedc6c(void)

code * FUN_145fedc6c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutStatsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FNaniteStats>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe8000002be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147256970;
}



// FUNCTION 145fedcf6 FUN_145fedcf6 body=232 status=ok
// SIG undefined FUN_145fedcf6(void)

longlong * FUN_145fedcf6(longlong *param_1)

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
  pcVar12 = FUN_146304c48;
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



// FUNCTION 145fedde4 FUN_145fedde4 body=232 status=ok
// SIG undefined FUN_145fedde4(void)

longlong * FUN_145fedde4(longlong *param_1)

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
  pcVar12 = FUN_146304cca;
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



// FUNCTION 145feded2 FUN_145feded2 body=144 status=ok
// SIG undefined FUN_145feded2(void)

bool FUN_145feded2(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 145fedf6e FUN_145fedf6e body=303 status=ok
// SIG undefined FUN_145fedf6e(void)

undefined8 * FUN_145fedf6e(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  *param_1 = &PTR_FUN_14a657720;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb478) {
    FUN_144b3d300(&DAT_14caeb478);
    if (DAT_14caeb478 == -1) {
      FUN_1415b3a98();
      atexit((_func_5014 *)&LAB_14356e0af);
      _Init_thread_footer(&DAT_14caeb478);
    }
  }
  FUN_1400b22c2(&local_30,"Collapsed Nodes");
  if (param_1 + 0x16 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x16] != 0) {
      FUN_1400020a8();
    }
    param_1[0x16] = local_30;
    *(undefined4 *)(param_1 + 0x17) = local_28;
    *(undefined4 *)((longlong)param_1 + 0xbc) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fee0a4 FUN_145fee0a4 body=55 status=ok
// SIG undefined FUN_145fee0a4(void)

void FUN_145fee0a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23440 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23440 = FUN_140002ddd(FUN_14643db59,uVar1,L"GpsTest_IsPlayer");
  }
  return;
}



// FUNCTION 145fee106 FUN_145fee106 body=78 status=ok
// SIG undefined FUN_145fee106(void)

void FUN_145fee106(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b00bdd0;
  param_1[4] = 0x3f800000459c4000;
  param_1[5] = &DAT_3f8000003f800000;
  param_1[6] = &DAT_3f8000003f800000;
  param_1[7] = &DAT_3f8000003f800000;
  param_1[8] = &DAT_3f8000003f800000;
  param_1[9] = &DAT_3f8000003f800000;
  param_1[10] = &DAT_3f8000003f800000;
  param_1[0xb] = &DAT_3f8000003f800000;
  param_1[0xc] = &DAT_3f8000003f800000;
  param_1[0xd] = &DAT_3f8000003f800000;
  param_1[0xe] = 0x417000003f800000;
  param_1[0xf] = 0x4270000041f00000;
  return;
}



// FUNCTION 145fee15a FUN_145fee15a body=55 status=ok
// SIG undefined FUN_145fee15a(void)

void FUN_145fee15a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60a50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60a50 = FUN_140002ddd(FUN_1464ee598,uVar1,L"GbxMomentNodeState_LookAtPlayer");
  }
  return;
}



// FUNCTION 145fee198 FUN_145fee198 body=55 status=ok
// SIG undefined FUN_145fee198(void)

void FUN_145fee198(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60f08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60f08 = FUN_140002ddd(FUN_1464f085e,uVar1,L"GbxMomentNodeState_SetFactValue");
  }
  return;
}



// FUNCTION 145fee1d6 FUN_145fee1d6 body=55 status=ok
// SIG undefined FUN_145fee1d6(void)

void FUN_145fee1d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69220 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69220 = FUN_140002ddd(FUN_14651f5be,uVar1,L"GpsGenerator_Projectiles");
  }
  return;
}



// FUNCTION 145fee20e FUN_145fee20e body=25 status=ok
// SIG undefined FUN_145fee20e(void)

undefined8 FUN_145fee20e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145fee228 FUN_145fee228 body=172 status=ok
// SIG undefined FUN_145fee228(void)

void FUN_145fee228(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 1;
  FUN_145fee31c(&local_48,0);
  lVar1 = local_48;
  FUN_14589e2aa(local_48,param_4);
  *(undefined4 *)(lVar1 + 0x118) = *(undefined4 *)(param_4 + 0x118);
  (**(code **)(*param_1 + 0x308))(param_1,param_2,param_3,&local_48);
  FUN_145fee2f2(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fee2f2 FUN_145fee2f2 body=41 status=ok
// SIG undefined FUN_145fee2f2(void)

void FUN_145fee2f2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14124efea(param_1);
    param_1 = param_1 + 0x120;
  }
  return;
}



// FUNCTION 145fee31c FUN_145fee31c body=147 status=ok
// SIG undefined FUN_145fee31c(void)

void FUN_145fee31c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x120,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x120)) {
      uVar5 = uVar4 / 0x120 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x120,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145fee3b0 FUN_145fee3b0 body=186 status=ok
// SIG undefined FUN_145fee3b0(void)

void FUN_145fee3b0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar6 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_145fee452;
      }
    }
    uVar5 = uVar6 - 1;
    bVar7 = true;
  } while (1 < uVar6);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145fee452:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145fee46a FUN_145fee46a body=26 status=ok
// SIG undefined FUN_145fee46a(void)

undefined8 FUN_145fee46a(longlong param_1,undefined8 param_2)

{
  FUN_145fee484(param_1 + 0x18);
  return param_2;
}



// FUNCTION 145fee484 FUN_145fee484 body=422 status=ok
// SIG undefined FUN_145fee484(void)

longlong * FUN_145fee484(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb1c830 != (longlong *)0x0 && DAT_14cb1c838 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb1c830 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb1c830;
    if (DAT_14cb1c838 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145fee555;
  }
  lVar3 = FUN_14001cc68(0x5e0,0x10);
  FUN_1415b3b3e(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ab9f8f0;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_145fee555;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_145fee555;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_145fee5d0:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145fee54b;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar3 + 0x18);
      if (plVar5 != (longlong *)0x0) goto LAB_145fee5d0;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_145fee54b:
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
LAB_145fee555:
  *param_2 = local_38;
  param_2[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145fee62c FUN_145fee62c body=144 status=ok
// SIG undefined FUN_145fee62c(void)

void FUN_145fee62c(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)FUN_1448c2e86();
    lVar3 = *(longlong *)(param_1 + 8) + 8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar3 = 0;
    }
    FUN_145e04a2a(&local_30);
    (**(code **)(*plVar2 + 0x30))(plVar2,local_30,lVar3);
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fee6be FUN_145fee6be body=38 status=ok
// SIG undefined FUN_145fee6be(void)

undefined8 FUN_145fee6be(undefined8 param_1,int param_2)

{
  FUN_145fee6e4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fee6e4 FUN_145fee6e4 body=712 status=ok
// SIG undefined FUN_145fee6e4(void)

void FUN_145fee6e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b528030;
  param_1[1] = &PTR_FUN_14b5282d0;
  if (param_1[2] != 0) {
    FUN_145feea36(param_1);
    FUN_145fee9ac(param_1[3],*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    if (*(int *)((longlong)param_1 + 0x24) != 0) {
      FUN_145feea06(param_1 + 3);
    }
  }
  FUN_144760e21(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_145fee9ac(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_1410c966c(param_1 + 1);
  return;
}


