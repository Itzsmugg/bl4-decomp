// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145c0b376 FUN_145c0b376 body=40 status=ok
// SIG undefined FUN_145c0b376(void)

undefined8 FUN_145c0b376(undefined8 param_1,int param_2)

{
  FUN_145c0b39e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c0b39e FUN_145c0b39e body=83 status=ok
// SIG undefined FUN_145c0b39e(void)

void FUN_145c0b39e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5dd320;
  param_1[5] = &PTR_FUN_14a5dd720;
  *(undefined4 *)(param_1 + 0x3c6) = 0;
  if (param_1[0x3c5] != 0) {
    FUN_1400020a8();
  }
  FUN_145c0b3f2(param_1 + 0x3bd);
  FUN_141462d4a(param_1);
  return;
}



// FUNCTION 145c0b3f2 FUN_145c0b3f2 body=53 status=ok
// SIG undefined FUN_145c0b3f2(void)

void FUN_145c0b3f2(longlong *param_1)

{
  FUN_145c0b428();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c0b428 FUN_145c0b428 body=90 status=ok
// SIG undefined FUN_145c0b428(void)

void FUN_145c0b428(longlong param_1)

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



// FUNCTION 145c0b482 FUN_145c0b482 body=9 status=ok
// SIG undefined FUN_145c0b482(void)

void FUN_145c0b482(longlong param_1)

{
  FUN_145c0b48c(param_1 + 0x10);
  return;
}



// FUNCTION 145c0b48c FUN_145c0b48c body=124 status=ok
// SIG undefined FUN_145c0b48c(void)

void FUN_145c0b48c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4f30c0;
  param_1[4] = &PTR_FUN_14b4f30e8;
  FUN_14127b1cd(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x2f);
  FUN_14124efea(param_1 + 10);
  FUN_14127b1cd(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1411ebb9a(param_1);
  return;
}



// FUNCTION 145c0b508 FUN_145c0b508 body=237 status=ok
// SIG undefined FUN_145c0b508(void)

void FUN_145c0b508(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_1414e6830(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0b5f6 FUN_145c0b5f6 body=308 status=ok
// SIG undefined FUN_145c0b5f6(void)

void FUN_145c0b5f6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + -0x30;
  lVar2 = FUN_1400d7050();
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar2 = FUN_140d27aa0(lVar2);
      local_40 = FUN_145c34d4a;
      local_38 = 0;
      FUN_145c0b85e(lVar2 + 0x18,&local_30,lVar1);
      *(undefined8 *)(param_1 + 0x98) = local_30;
    }
  }
  lVar2 = FUN_1412bdaf0(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_1403ca142();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar2 = FUN_140d27a2a(lVar2);
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        local_40 = FUN_145c0b72c;
        local_38 = 0;
        FUN_145c0b95e(lVar2 + 0x48,&local_30,lVar1);
        *(undefined8 *)(param_1 + 0xa0) = local_30;
      }
      FUN_145c0b72c(lVar1,*(undefined1 *)(lVar2 + 0xb0));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0b72c FUN_145c0b72c body=304 status=ok
// SIG undefined FUN_145c0b72c(void)

void FUN_145c0b72c(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((byte)(param_2 - 5U) < 2) {
    lVar1 = FUN_145ccf426(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar2 = FUN_14030d660();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (*(longlong *)(param_1 + 0xb8) == 0)) {
        local_38 = FUN_145c34c8e;
        local_30 = 0;
        FUN_148e27e7e(lVar1 + 0x608,&local_28,param_1);
        *(undefined8 *)(param_1 + 0xb8) = local_28;
      }
    }
  }
  else if (*(longlong *)(param_1 + 0xb8) != 0) {
    lVar1 = FUN_145ccf426(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar2 = FUN_14030d660();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        if (*(longlong *)(param_1 + 0xb8) != 0) {
          FUN_14480f766(lVar1 + 0x608);
        }
        *(undefined8 *)(param_1 + 0xb8) = 0;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0b85e FUN_145c0b85e body=254 status=ok
// SIG undefined FUN_145c0b85e(void)

undefined8
FUN_145c0b85e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e06450;
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
  *local_48 = &PTR_FUN_14b9a9c50;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c6314c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0b95e FUN_145c0b95e body=254 status=ok
// SIG undefined FUN_145c0b95e(void)

undefined8
FUN_145c0b95e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9a9d30;
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
  *local_48 = &PTR_FUN_14b9a9cc0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c0ba5e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0ba5e FUN_145c0ba5e body=216 status=ok
// SIG undefined FUN_145c0ba5e(void)

undefined8 * FUN_145c0ba5e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145c0bb44 FUN_145c0bb44 body=24 status=ok
// SIG undefined FUN_145c0bb44(void)

bool FUN_145c0bb44(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145c0bb5c FUN_145c0bb5c body=26 status=ok
// SIG undefined FUN_145c0bb5c(void)

undefined8 FUN_145c0bb5c(longlong param_1,undefined8 param_2)

{
  FUN_145c0bb76(param_1 + 0x18);
  return param_2;
}



// FUNCTION 145c0bb76 FUN_145c0bb76 body=422 status=ok
// SIG undefined FUN_145c0bb76(void)

longlong * FUN_145c0bb76(undefined8 param_1,longlong *param_2)

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
  if ((DAT_14cb54780 != (longlong *)0x0 && DAT_14cb54788 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb54780 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb54780;
    if (DAT_14cb54788 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145c0bc47;
  }
  lVar3 = FUN_14001cc68(0x520,0x10);
  FUN_145c0bd1e(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14afe3420;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_145c0bc47;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_145c0bc47;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_145c0bcc2:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145c0bc3d;
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
      if (plVar5 != (longlong *)0x0) goto LAB_145c0bcc2;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_145c0bc3d:
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
LAB_145c0bc47:
  *param_2 = local_38;
  param_2[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145c0bd1e FUN_145c0bd1e body=618 status=ok
// SIG undefined FUN_145c0bd1e(void)

undefined8 * FUN_145c0bd1e(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14afe2870;
  FUN_1412cbb62(param_1 + 4);
  *param_1 = &PTR_FUN_14afe0540;
  param_1[4] = &PTR_FUN_14afe0560;
  FUN_145c0c506(param_1 + 6);
  *(undefined8 *)((longlong)param_1 + 500) = 0x4416000000000000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fe) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  FUN_1414e69c6(param_1 + 0x4c);
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x79) = 1;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x8a] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x51c) = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  FUN_145c0bf88(param_1);
  return param_1;
}



// FUNCTION 145c0bf88 FUN_145c0bf88 body=321 status=ok
// SIG undefined FUN_145c0bf88(void)

void FUN_145c0bf88(longlong param_1)

{
  int iVar1;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined4 local_60;
  code *local_58;
  undefined4 local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = FUN_14620fa16;
  local_50 = 0;
  FUN_145c0c16c(&DAT_14cade100,&local_68,param_1,&local_58);
  local_58 = (code *)&LAB_14620fa10;
  local_50 = 0;
  FUN_145c0c16c(&DAT_14cade118,&local_68,param_1,&local_58);
  local_68 = FUN_1415adef2;
  local_60 = 0;
  FUN_145c0c344(&local_58,param_1,&local_68);
  FUN_14126834e(&DAT_14cb10ae8,&local_68,&local_58);
  FUN_1401cb1ee(&local_58);
  if (DAT_14cb541e0 != 0) {
    local_58 = FUN_148606a6c;
    local_50 = 0;
    FUN_145c0c418(DAT_14cb541e0 + 0x380,&local_68,param_1);
  }
  iVar1 = rand();
  iVar1 = iVar1 + ((int)((longlong)iVar1 * 0x40000001 >> 0x3d) - (iVar1 >> 0x1f)) * -0x7fffffff;
  *(int *)(param_1 + 0x290) = iVar1;
  *(int *)(param_1 + 0x294) = iVar1;
  FUN_145c0c0ca(&DAT_14cb54798,param_1);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0c0ca FUN_145c0c0ca body=162 status=ok
// SIG undefined FUN_145c0c0ca(void)

void FUN_145c0c0ca(longlong *param_1,undefined8 param_2)

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
        goto LAB_145c0c157;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145c0c157:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145c0c16c FUN_145c0c16c body=237 status=ok
// SIG undefined FUN_145c0c16c(void)

undefined8
FUN_145c0c16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_14afe2d50;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14afe2ce0;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_145c0c25a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0c25a FUN_145c0c25a body=216 status=ok
// SIG undefined FUN_145c0c25a(void)

undefined8 * FUN_145c0c25a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145c0c344 FUN_145c0c344 body=211 status=ok
// SIG undefined FUN_145c0c344(void)

LPCRITICAL_SECTION
FUN_145c0c344(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,undefined8 *param_3)

{
  DWORD DVar1;
  undefined8 uVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong lVar4;
  _LIST_ENTRY *p_Var5;
  
  DVar1 = *(DWORD *)(param_3 + 1);
  uVar2 = *param_3;
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var3 = param_1[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_14a3cb240;
  LOCK();
  UNLOCK();
  p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar4 = DAT_14c758608 + 1;
  if (p_Var5 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  (p_Var3->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var3 = &PTR_FUN_14afe2dc0;
  (p_Var3->ProcessLocksList).Blink = param_2;
  p_Var3->EntryCount = (int)uVar2;
  p_Var3->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3->Flags = DVar1;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 145c0c418 FUN_145c0c418 body=237 status=ok
// SIG undefined FUN_145c0c418(void)

undefined8
FUN_145c0c418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14afe2e30;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0c506 FUN_145c0c506 body=346 status=ok
// SIG undefined FUN_145c0c506(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145c0c506(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  FUN_1412e3d1e(local_30);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  uVar3 = DAT_14cb54770;
  uVar2 = DAT_14cb5476c;
  uVar1 = uRam000000014cb54768;
  *(undefined4 *)((longlong)param_1 + 0x184) = _DAT_14cb54764;
  *(undefined4 *)(param_1 + 0x31) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x18c) = uVar2;
  *(undefined4 *)(param_1 + 0x32) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x194) = DAT_14cb54774;
  FUN_14093c894(param_1,0);
  FUN_14093c894(param_1,1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0c662 FUN_145c0c662 body=169 status=ok
// SIG undefined FUN_145c0c662(void)

bool FUN_145c0c662(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 145c0c70c FUN_145c0c70c body=52 status=ok
// SIG undefined FUN_145c0c70c(void)

void FUN_145c0c70c(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  
  if ((param_2 != (longlong *)0x0) && (param_3 != 0)) {
    uVar1 = (**(code **)(*param_2 + 0x6b0))(param_2);
    FUN_14586631c(param_1,uVar1);
    return;
  }
  return;
}



// FUNCTION 145c0c740 FUN_145c0c740 body=445 status=ok
// SIG undefined FUN_145c0c740(void)

void FUN_145c0c740(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_90);
  }
  puVar4 = local_78;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = local_60;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = local_48;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5;
  }
  puVar5 = local_90;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c0c8fe(puVar2,puVar3,puVar4,puVar5);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0c8fe FUN_145c0c8fe body=487 status=ok
// SIG undefined FUN_145c0c8fe(void)

void FUN_145c0c8fe(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = *param_1;
  dVar5 = param_1[1];
  dVar6 = param_1[2];
  dVar1 = sin(dVar4 * 0.01745329238474369);
  dVar2 = sin(dVar5 * 0.01745329238474369);
  dVar3 = sin(dVar6 * 0.01745329238474369);
  sin(0.0);
  dVar4 = cos(dVar4 * 0.01745329238474369);
  dVar5 = cos(dVar5 * 0.01745329238474369);
  dVar6 = cos(dVar6 * 0.01745329238474369);
  cos(0.0);
  *param_2 = dVar4 * dVar5;
  param_2[1] = dVar2 * dVar4;
  param_2[2] = dVar1;
  *param_3 = dVar1 * dVar3 * dVar5 - dVar2 * dVar6;
  param_3[1] = dVar1 * dVar3 * dVar2 + dVar5 * dVar6;
  param_3[2] = -dVar3 * dVar4;
  *param_4 = -(dVar1 * dVar6 * dVar5 + dVar2 * dVar3);
  param_4[1] = dVar5 * dVar3 - dVar2 * dVar1 * dVar6;
  param_4[2] = dVar4 * dVar6;
  return;
}



// FUNCTION 145c0cb02 FUN_145c0cb02 body=995 status=ok
// SIG undefined FUN_145c0cb02(void)

longlong * FUN_145c0cb02(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar13 = param_1 + 8;
  plVar9 = (longlong *)FUN_144729dda(lVar13);
  if ((((char)plVar9 == '\0') || (*(longlong *)(param_1 + 0x18) == 0)) ||
     (plVar9 = (longlong *)FUN_144729dda(param_1 + 0x10), (char)plVar9 == '\0')) goto LAB_145c0cd66;
  FUN_14479d2ce(lVar13);
  plVar9 = (longlong *)FUN_14479d2ce(lVar13);
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x700))(plVar9);
  if ((char)plVar9 != '\0') goto LAB_145c0cd66;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x160);
    if (((plVar10 != (longlong *)0x0) && (0 < (int)plVar10[1])) &&
       (*(longlong *)(param_1 + 0x168) != 0)) {
      plVar9 = (longlong *)(ulonglong)*(uint *)(plVar10 + 1);
      lVar12 = 0;
      do {
        uVar8 = (uint)plVar9;
        if (uVar8 == 0) {
          plVar10 = (longlong *)0x0;
          goto LAB_145c0ce6a;
        }
        LOCK();
        uVar3 = *(uint *)(plVar10 + 1);
        if (uVar8 == uVar3) {
          *(uint *)(plVar10 + 1) = uVar8 + 1;
        }
        else {
          plVar9 = (longlong *)(ulonglong)uVar3;
        }
        UNLOCK();
      } while (uVar8 != uVar3);
      lVar12 = *(longlong *)(param_1 + 0x158);
LAB_145c0ce6a:
      if (*(longlong *)(param_1 + 0x168) != 0) {
        plVar9 = (longlong *)FUN_14480f766(lVar12 + 0x18);
      }
      if (uVar8 != 0) {
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          plVar9 = (longlong *)(**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            plVar9 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      *(undefined8 *)(param_1 + 0x158) = 0;
      plVar10 = *(longlong **)(param_1 + 0x160);
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      if (plVar10 == (longlong *)0x0) goto LAB_145c0cb80;
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        plVar9 = (longlong *)(**(code **)(*plVar10 + 0x10))();
      }
    }
    if (*(longlong *)(param_1 + 0x158) != 0) {
      plVar9 = (longlong *)0x0;
      if (*(longlong *)(param_1 + 0x160) != 0) {
        plVar9 = (longlong *)(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x160) + 8);
      }
    }
  }
LAB_145c0cb80:
  if (DAT_14cb85860 == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    plVar9 = (longlong *)FUN_144837462(DAT_14cb85860,param_1 + 0x118);
    *(longlong **)(param_1 + 0x20) = plVar9;
    if ((plVar9 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x10c) != 0)) {
      plVar10 = (longlong *)FUN_14479d2ce(lVar13);
      plVar9 = (longlong *)0x0;
      if (plVar10 != (longlong *)0x0) {
        uVar11 = FUN_140e81900();
        plVar10 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,uVar11);
        plVar9 = (longlong *)0x0;
        if (plVar10 != (longlong *)0x0) {
          uVar11 = FUN_140e81900();
          plVar9 = (longlong *)FUN_144718840(plVar10,uVar11);
          if ((plVar10 != plVar9) && (plVar9 != (longlong *)0x0)) {
            uVar11 = FUN_14479d2ce(lVar13);
            local_58 = 0;
            uVar6 = (**(code **)(*plVar9 + 0x28))
                              (plVar9,*(undefined8 *)(param_1 + 0x10c),
                               *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x15c),uVar11);
            *(undefined1 *)(param_1 + 0x100) = uVar6;
            lVar12 = FUN_14479d2ce(lVar13);
            FUN_140dc01da(lVar12 + 0x1508,&local_40,*(undefined1 *)(param_1 + 0x100));
            plVar10 = local_38;
            *(longlong *)(param_1 + 0x158) = local_40;
            plVar9 = *(longlong **)(param_1 + 0x160);
            if (plVar9 != local_38) {
              if (local_38 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + 1;
                UNLOCK();
                plVar9 = *(longlong **)(param_1 + 0x160);
              }
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                piVar2 = (int *)((longlong)plVar9 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar9 + 0x10))();
                }
              }
              *(longlong **)(param_1 + 0x160) = plVar10;
              plVar10 = local_38;
            }
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar9 = plVar10 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
            if (((*(longlong *)(param_1 + 0x158) == 0) || (*(longlong *)(param_1 + 0x160) == 0)) ||
               (*(int *)(*(longlong *)(param_1 + 0x160) + 8) < 1)) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
            }
            uVar11 = FUN_14479d2ce(lVar13);
            local_48 = (longlong *)0x0;
            FUN_14485c47a(&local_48,uVar11);
            plVar10 = *(longlong **)(param_1 + 0x160);
            bVar4 = true;
            if (plVar10 == (longlong *)0x0) {
              plVar10 = (longlong *)0x0;
              lVar13 = 0;
            }
            else {
              iVar7 = (int)plVar10[1];
              lVar13 = 0;
              do {
                if (iVar7 == 0) {
                  plVar10 = (longlong *)0x0;
                  goto LAB_145c0cd2b;
                }
                LOCK();
                iVar5 = (int)plVar10[1];
                bVar14 = iVar7 == iVar5;
                if (bVar14) {
                  *(int *)(plVar10 + 1) = iVar7 + 1;
                  iVar5 = iVar7;
                }
                iVar7 = iVar5;
                UNLOCK();
              } while (!bVar14);
              lVar13 = *(longlong *)(param_1 + 0x158);
              bVar4 = false;
            }
LAB_145c0cd2b:
            local_38 = local_48;
            local_40 = param_1;
            FUN_1414e6d84(lVar13 + 0x18,&local_50);
            *(longlong **)(param_1 + 0x168) = local_50;
            plVar9 = local_50;
            if (!bVar4) {
              LOCK();
              plVar1 = plVar10 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                plVar9 = (longlong *)(**(code **)*plVar10)(plVar10);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  plVar9 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_145c0cd66:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar9;
}



// FUNCTION 145c0cef8 FUN_145c0cef8 body=391 status=ok
// SIG undefined FUN_145c0cef8(void)

void FUN_145c0cef8(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x398) != 0) {
    FUN_140521208();
    *(undefined8 *)(param_1 + 0x398) = 0;
    plVar4 = *(longlong **)(param_1 + 0x3a0);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x3a0) = 0;
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
  plVar4 = (longlong *)(param_1 + 0x3a8);
  lVar3 = param_1 + 0x3b8;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar3;
  if (*(int *)(param_1 + 0x3d0) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0x3d0);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar4;
  if ((iStack_44 != iVar5) || (uStack_50 != lVar3)) {
    do {
      if (*(longlong *)(*local_80 + 0x18 + (longlong)iStack_64 * 0x28) != 0) {
        FUN_145c0d080();
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar4 || (CONCAT44(uStack_6c,uStack_70) != lVar3 || iStack_64 != iVar5));
  }
  FUN_145c0d08e(plVar4);
  FUN_1403d8a98(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0d080 FUN_145c0d080 body=14 status=ok
// SIG undefined FUN_145c0d080(void)

void FUN_145c0d080(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 == 0) {
    return;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(lVar1 + 0x188) == '\x01') {
    FUN_140319860(lVar1,1);
    uStack_28 = 0;
    uStack_20 = 0;
    cVar2 = FUN_14493c216(&uStack_28,0);
    if (cVar2 == '\0') {
      uStack_20 = 0;
    }
    *(undefined8 *)(lVar1 + 0x178) = uStack_28;
    *(undefined8 *)(lVar1 + 0x180) = uStack_20;
    *(undefined1 *)(lVar1 + 0x188) = 0;
  }
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0d08e FUN_145c0d08e body=68 status=ok
// SIG undefined FUN_145c0d08e(void)

void FUN_145c0d08e(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1414e6ea8();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140549ad6(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145c0d0d2 FUN_145c0d0d2 body=89 status=ok
// SIG undefined FUN_145c0d0d2(void)

undefined2 * FUN_145c0d0d2(void)

{
  char cVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  
  if ((DAT_14c86aa48 != (longlong *)0x0 && DAT_14c86aa50 != 0) &&
     (cVar1 = (**(code **)(*DAT_14c86aa48 + 0x30))(), cVar1 != '\0')) {
    plVar3 = DAT_14c86aa48;
    if (DAT_14c86aa50 == 0) {
      plVar3 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x000145c0d11f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined2 *)(**(code **)(*plVar3 + 0x58))();
    return puVar2;
  }
  return &DAT_149dfb77a;
}



// FUNCTION 145c0d12c FUN_145c0d12c body=9 status=ok
// SIG undefined FUN_145c0d12c(void)

void FUN_145c0d12c(longlong param_1)

{
  FUN_145c0d136(param_1 + 0x10);
  return;
}



// FUNCTION 145c0d136 FUN_145c0d136 body=80 status=ok
// SIG undefined FUN_145c0d136(void)

void FUN_145c0d136(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ef15e8;
  FUN_1449db362(param_1 + 0xb);
  FUN_1449db362(param_1 + 9);
  FUN_1449db362(param_1 + 7);
  FUN_1449db362(param_1 + 5);
  FUN_1449db362(param_1 + 3);
  FUN_1449db362(param_1 + 1);
  return;
}



// FUNCTION 145c0d192 FUN_145c0d192 body=78 status=ok
// SIG undefined FUN_145c0d192(void)

void FUN_145c0d192(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar1 = &PTR_FUN_149f22540;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  return;
}



// FUNCTION 145c0d1e0 FUN_145c0d1e0 body=40 status=ok
// SIG undefined FUN_145c0d1e0(void)

undefined8 FUN_145c0d1e0(undefined8 param_1,int param_2)

{
  FUN_145c0d208();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c0d208 FUN_145c0d208 body=49 status=ok
// SIG undefined FUN_145c0d208(void)

void FUN_145c0d208(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f907d0;
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c0d244 FUN_145c0d244 body=166 status=ok
// SIG undefined FUN_145c0d244(void)

undefined8 * FUN_145c0d244(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1410fb170();
  *param_1 = &PTR_FUN_14a1c2a30;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x5e1ec7;
  param_1[0x17] = "defselector";
  param_1[0x18] = &PTR_s_state_14c75f7c0;
  FUN_1400b22c2(local_28,"Def Selector");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)((longlong)param_1 + 0x1d3) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0d2f6 FUN_145c0d2f6 body=166 status=ok
// SIG undefined FUN_145c0d2f6(void)

undefined8 * FUN_145c0d2f6(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a3c50e0;
  FUN_1446f470e(&local_20,L"RootComponent0",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x39] = lVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0d3a6 FUN_145c0d3a6 body=81 status=ok
// SIG undefined FUN_145c0d3a6(void)

undefined8 * FUN_145c0d3a6(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a4ecdd0;
  FUN_144a5dc74(param_1 + 6);
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_144a5dc74(param_1 + 10);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  *(undefined2 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 145c0d402 FUN_145c0d402 body=78 status=ok
// SIG undefined FUN_145c0d402(void)

undefined8 * FUN_145c0d402(undefined8 *param_1)

{
  FUN_140307bf4();
  *param_1 = &PTR_FUN_14a6b5350;
  param_1[0x19] = &PTR_FUN_14a6b5710;
  param_1[0x1a] = &PTR_FUN_14a6b5750;
  param_1[0x2b] = 0;
  *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) | 4;
  return param_1;
}



// FUNCTION 145c0d450 FUN_145c0d450 body=40 status=ok
// SIG undefined FUN_145c0d450(void)

undefined8 FUN_145c0d450(undefined8 param_1,int param_2)

{
  FUN_145c0d478();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c0d478 FUN_145c0d478 body=75 status=ok
// SIG undefined FUN_145c0d478(void)

void FUN_145c0d478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6b41d0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145c0d4c3(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c0d4c3 FUN_145c0d4c3 body=63 status=ok
// SIG undefined FUN_145c0d4c3(void)

void FUN_145c0d4c3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-3] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c0d502 thunk_FUN_145c0d508 body=5 status=ok
// SIG undefined thunk_FUN_145c0d508(void)

void thunk_FUN_145c0d508(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x620);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x620) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x628) = (int)param_2[1];
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 145c0d508 FUN_145c0d508 body=84 status=ok
// SIG undefined FUN_145c0d508(void)

void FUN_145c0d508(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x620);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x620) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x628) = (int)param_2[1];
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 145c0d55c FUN_145c0d55c body=55 status=ok
// SIG undefined FUN_145c0d55c(void)

void FUN_145c0d55c(longlong *param_1)

{
  FUN_145c0d594(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c0d594 FUN_145c0d594 body=123 status=ok
// SIG undefined FUN_145c0d594(void)

void FUN_145c0d594(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 145c0d61a FUN_145c0d61a body=78 status=ok
// SIG undefined FUN_145c0d61a(void)

undefined8 * FUN_145c0d61a(undefined8 *param_1)

{
  FUN_14142570c();
  *param_1 = &PTR_FUN_14b208260;
  param_1[0x1f] = &PTR_FUN_14b2085d0;
  param_1[0x20] = &PTR_FUN_14b208600;
  param_1[0x22] = 0;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) | 1;
  return param_1;
}



// FUNCTION 145c0d668 FUN_145c0d668 body=40 status=ok
// SIG undefined FUN_145c0d668(void)

undefined8 FUN_145c0d668(undefined8 param_1,int param_2)

{
  FUN_145c0d690();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c0d690 FUN_145c0d690 body=138 status=ok
// SIG undefined FUN_145c0d690(void)

void FUN_145c0d690(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5249b0;
  param_1[6] = &PTR_FUN_14b524c70;
  FUN_1414ac4aa(param_1 + 0x14);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c0d71a FUN_145c0d71a body=46 status=ok
// SIG undefined FUN_145c0d71a(void)

void FUN_145c0d71a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c0d748(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b564f40;
  puVar1[5] = &PTR_FUN_14b565250;
  return;
}



// FUNCTION 145c0d748 FUN_145c0d748 body=43 status=ok
// SIG undefined FUN_145c0d748(void)

undefined8 * FUN_145c0d748(undefined8 *param_1)

{
  FUN_1459a3fe4();
  *param_1 = &PTR_FUN_14ae6e320;
  param_1[5] = &PTR_FUN_14ae6e630;
  return param_1;
}



// FUNCTION 145c0d77a FUN_145c0d77a body=40 status=ok
// SIG undefined FUN_145c0d77a(void)

undefined8 FUN_145c0d77a(undefined8 param_1,int param_2)

{
  FUN_145c0d7a2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c0d7a2 FUN_145c0d7a2 body=89 status=ok
// SIG undefined FUN_145c0d7a2(void)

void FUN_145c0d7a2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd30e00;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145c0d7fb(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c0d7fb FUN_145c0d7fb body=49 status=ok
// SIG undefined FUN_145c0d7fb(void)

void FUN_145c0d7fb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c0d834 FUN_145c0d834 body=162 status=ok
// SIG undefined FUN_145c0d834(void)

undefined8 * FUN_145c0d834(undefined8 *param_1)

{
  FUN_140c444d0();
  *param_1 = &PTR_FUN_14be7ed40;
  FUN_141067f4a(param_1 + 6);
  param_1[6] = &PTR_FUN_14be80320;
  param_1[0xb] = 0;
  FUN_14485c47a(param_1 + 0xb,0);
  FUN_141067f4a(param_1 + 0xc);
  param_1[0xc] = &PTR_FUN_14be80350;
  param_1[0x11] = 0;
  FUN_14485c47a(param_1 + 0x11,0);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x12),4000);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_145c0d8d6(param_1 + 0x1a);
  return param_1;
}



// FUNCTION 145c0d8d6 FUN_145c0d8d6 body=364 status=ok
// SIG undefined FUN_145c0d8d6(void)

LPCRITICAL_SECTION FUN_145c0d8d6(LPCRITICAL_SECTION param_1)

{
  undefined8 *puVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  *(undefined1 *)&param_1[1].DebugInfo = 1;
  param_1[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[2].LockCount = 0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  *(undefined8 *)&param_1[2].RecursionCount = 0xffffffff00000080;
  *(undefined4 *)((longlong)&param_1[2].OwningThread + 4) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[2].LockSemaphore);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&param_1[2].LockSemaphore,4000);
  param_1[3].LockSemaphore = (HANDLE)0x0;
  param_1[3].SpinCount = 0;
  InitializeCriticalSection(param_1 + 4);
  SetCriticalSectionSpinCount(param_1 + 4,4000);
  param_1[5].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[5].LockCount = 0;
  param_1[5].RecursionCount = 0;
  *(undefined4 *)&param_1[5].OwningThread = 0x447a0000;
  *(undefined8 *)((longlong)&param_1[5].OwningThread + 4) = DAT_14c846330;
  *(undefined4 *)((longlong)&param_1[5].LockSemaphore + 4) = DAT_14c846338;
  InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[5].SpinCount);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&param_1[5].SpinCount,4000);
  param_1[6].SpinCount = 0;
  param_1[7].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[7].LockCount);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&param_1[7].LockCount,4000);
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  param_1[8].LockSemaphore = puVar1;
  param_1[8].OwningThread = puVar1;
  InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[8].SpinCount);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&param_1[8].SpinCount,4000);
  p_Var2 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_14001cc68(0x10,0x10);
  p_Var2->Type = 0;
  p_Var2->CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2->field_0x4 = 0;
  *(undefined4 *)&p_Var2->CriticalSection = 0xffffffff;
  *(PRTL_CRITICAL_SECTION_DEBUG *)&param_1[10].LockCount = p_Var2;
  param_1[10].DebugInfo = p_Var2;
  param_1[10].OwningThread = (HANDLE)0x0;
  param_1[10].LockSemaphore = (HANDLE)0x0;
  return param_1;
}



// FUNCTION 145c0da42 FUN_145c0da42 body=63 status=ok
// SIG undefined FUN_145c0da42(void)

void FUN_145c0da42(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145c0da82(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 145c0da82 FUN_145c0da82 body=93 status=ok
// SIG undefined FUN_145c0da82(void)

ulonglong FUN_145c0da82(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x7fffffffffffe00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 145c0daea FUN_145c0daea body=427 status=ok
// SIG undefined FUN_145c0daea(void)

longlong * FUN_145c0daea(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406ed334();
  *param_1 = (longlong)&PTR_FUN_14a4bc010;
  param_1[0x1f] = (longlong)&PTR_LAB_14a4bc380;
  FUN_1414e7042(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x1b) = 1;
  *(undefined2 *)(param_1 + 0xb) = 0x201;
  local_40 = (longlong *)0x2;
  local_38 = (longlong *)0x2;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_40);
  plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar4 + 2;
  FUN_141010aaa(plVar1,param_1 + 0x20);
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_140aec6f8(&local_40,plVar1);
  plVar1 = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x1c] = (longlong)local_40;
    plVar4 = (longlong *)param_1[0x1d];
    if (plVar4 == (longlong *)0x0) goto LAB_145c0dbdf;
    param_1[0x1d] = 0;
LAB_145c0dc37:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145c0dbdf;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x1c] = (longlong)local_40;
    plVar4 = (longlong *)param_1[0x1d];
    if (local_38 != plVar4) {
      param_1[0x1d] = (longlong)local_38;
      if (plVar4 == (longlong *)0x0) goto LAB_145c0dbdf;
      goto LAB_145c0dc37;
    }
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145c0dbdf;
    (**(code **)*local_38)(local_38);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_145c0dbdf:
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0dc96 FUN_145c0dc96 body=116 status=ok
// SIG undefined FUN_145c0dc96(void)

void FUN_145c0dc96(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = FUN_14487fd02(param_1 + -0xe48);
  if ((iVar3 != 3) && (*(longlong *)(param_1 + -0xab0) != 0)) {
    lVar4 = FUN_140082f10();
    lVar1 = *(longlong *)(param_1 + -0xab0);
    if (((lVar1 != 0) &&
        (((lVar4 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      FUN_145c0dd0a(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 145c0dd0a FUN_145c0dd0a body=261 status=ok
// SIG undefined FUN_145c0dd0a(void)

void FUN_145c0dd0a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_2[1] != 0) {
    lVar1 = FUN_14497e828();
    if (lVar1 != 0) {
      lVar2 = FUN_144a79464();
      if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
          (lVar1 = *(longlong *)(lVar1 + 0x1e0), lVar1 != 0)) &&
         (((*(longlong *)(lVar1 + 0x68) != 0 && (lVar2 = *(longlong *)(lVar1 + 0x30), lVar2 != 0))
          && (*(char *)(*param_2 + (longlong)((int)param_2[1] + -1)) == '\0')))) {
        local_4c = 0xffff;
        FUN_1413d8fde(param_1,*(longlong *)(lVar1 + 0x68),&local_4c);
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        local_30 = 0xf;
        FUN_1401d7cf8(&local_48,*param_2);
        thunk_FUN_145c0de16(lVar2,&local_4c,&local_48,1);
        FUN_1401d9a90(&local_48);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0de10 thunk_FUN_145c0de16 body=5 status=ok
// SIG undefined thunk_FUN_145c0de16(void)

int thunk_FUN_145c0de16(longlong *param_1,undefined4 *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_158 [32];
  longlong *plStack_138;
  undefined2 uStack_130;
  undefined1 uStack_12e;
  undefined8 uStack_128;
  wchar_t *pwStack_120;
  undefined4 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined2 uStack_100;
  undefined1 uStack_fe;
  undefined8 uStack_f8;
  wchar_t *pwStack_f0;
  undefined4 uStack_e8;
  longlong *plStack_e0;
  int iStack_d8;
  undefined4 uStack_d4;
  int iStack_cc;
  longlong *plStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined **ppuStack_98;
  longlong **applStack_90 [2];
  byte bStack_80;
  undefined1 auStack_70 [24];
  longlong lStack_58;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lStack_a0 = 0;
  uStack_a8 = 0;
  cVar5 = FUN_145c0e4ba(param_1[0x36]);
  uVar3 = uStack_a8;
  if (cVar5 == '\0') {
    iVar6 = -1;
    goto LAB_145c0e1f0;
  }
  lStack_b8 = lStack_a0;
  uStack_c0 = uStack_a8;
  uStack_b0 = *param_2;
  plStack_c8 = param_1;
  FUN_1447a97f4(auStack_70,lStack_a0 + 0x80);
  iVar6 = FUN_140b9fef0(uVar3,param_2,0);
  iStack_cc = iVar6;
  if (iVar6 < 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1,&ppuStack_98);
    ppuVar4 = ppuStack_98;
    if ((((ppuStack_98 == (undefined **)0x0) || (lVar7 = FUN_145978b04(), lVar7 == 0)) ||
        (*(int *)(ppuVar4 + 7) < *(int *)(lVar7 + 0x38))) ||
       (*(longlong *)(ppuVar4[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
      ppuStack_98 = (undefined **)0x0;
    }
    plVar8 = (longlong *)FUN_145c0e550(param_1,ppuStack_98);
    lVar7 = FUN_1414e7344(param_1,lStack_a0 + 0x58,auStack_70);
    plVar8[7] = lVar7;
    iVar6 = (int)param_1[0x2b] + 1;
    *(int *)(param_1 + 0x2b) = iVar6;
    *(int *)(plVar8 + 5) = iVar6;
    *(undefined4 *)((longlong)plVar8 + 0x2c) = 2;
    plStack_e0 = plVar8;
    if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(plVar8);
    }
    applStack_90[0] = &plStack_e0;
    ppuStack_98 = (undefined **)(plVar8 + 5);
    FUN_145c0e748(param_1 + 0x2c,&puStack_110);
    uVar3 = uStack_a8;
    FUN_1414e7524(uStack_a8,&ppuStack_98,param_2,plVar8 + 5);
    plStack_e0 = (longlong *)0x0;
    FUN_1413d9c32(uVar3,&ppuStack_98,param_2,&plStack_e0);
    if ((&DAT_149fc1b6e)[bStack_80] == '\x01') {
      if ((applStack_90[0] != (longlong **)0x0) &&
         (cVar5 = (*(code *)(*applStack_90[0])[5])(), cVar5 != '\0')) {
LAB_145c0e027:
        FUN_1405e6804(&ppuStack_98,&plStack_e0);
        iVar6 = 1;
        if (-1 < (int)param_1[0x37]) {
          iVar6 = (int)param_1[0x37];
        }
        plVar12 = plStack_e0;
        if (iStack_d8 == 0) {
          plVar12 = (longlong *)&DAT_149dfb77a;
        }
        if (iVar6 < 1) {
          if ((int)param_1[0x3b] == 0) {
            puVar11 = &DAT_149dfb77a;
          }
          else {
            puVar11 = (undefined2 *)param_1[0x3a];
          }
          FUN_140002266(&puStack_110,L"%lsserver_remote_%ls_OUTPUT",puVar11);
        }
        else {
          if ((int)param_1[0x3b] == 0) {
            puVar11 = &DAT_149dfb77a;
          }
          else {
            puVar11 = (undefined2 *)param_1[0x3a];
          }
          plStack_138 = plVar12;
          FUN_140002266(&puStack_110,L"%lsclient_%d_remote_%ls_OUTPUT",puVar11,iVar6 + -1);
        }
        if ((undefined8 **)(plVar8 + 10) == &puStack_110) {
          if (puStack_110 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (plVar8[10] != 0) {
            FUN_1400020a8();
          }
          plVar8[10] = (longlong)puStack_110;
          puStack_110 = (undefined8 *)0x0;
          *(undefined4 *)(plVar8 + 0xb) = (undefined4)uStack_108;
          *(undefined4 *)((longlong)plVar8 + 0x5c) = uStack_108._4_4_;
        }
        if (plStack_e0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else if (((ulonglong)applStack_90[0] & 0xffffff) != 0) goto LAB_145c0e027;
    ppuStack_98 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[bStack_80])(applStack_90);
    iStack_ac = (int)plVar8[5];
    ppuStack_98 = (undefined **)0x0;
    applStack_90[0] = (longlong **)0x0;
    plStack_138 = param_1;
    FUN_1414e7168(&ppuStack_98,plVar8,&DAT_14cb8dc00,auStack_70);
    pwStack_120 = L"UnspecifiedFile";
    uStack_118 = 0xf;
    uStack_130 = 0;
    uStack_12e = 0;
    uStack_128 = 0;
    uStack_108 = param_3[2];
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    puStack_110 = param_3;
    FUN_141183efe(&plStack_e0,&puStack_110,&uStack_130,&pwStack_120);
    FUN_1458e8c12(plVar8,&plStack_c8,&plStack_e0,0);
    FUN_141683dd2(param_1,&plStack_c8,plVar8,0xffffffff);
    iVar6 = (int)plVar8[5];
    plVar8 = (longlong *)CONCAT44(uStack_d4,iStack_d8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
LAB_145c0e1d6:
    FUN_1414e70fc(&ppuStack_98);
  }
  else {
    iStack_ac = iVar6;
    lVar7 = FUN_140b9ffa8(param_1,&iStack_cc);
    if (lVar7 != 0) {
      ppuStack_98 = (undefined **)0x0;
      applStack_90[0] = (longlong **)0x0;
      plStack_138 = param_1;
      FUN_1414e7168(&ppuStack_98,lVar7,&DAT_14cb8dc00,auStack_70);
      plVar8 = (longlong *)FUN_144a8232a(&DAT_14cb8dd48);
      iVar2 = (int)param_1[0x3f];
      if ((longlong)iVar2 != 0) {
        lVar10 = 0;
        do {
          if (*(longlong *)(param_1[0x3e] + lVar10) == *plVar8) {
            uVar9 = (int)(lVar10 >> 4) * -0x33333333;
            if ((((int)uVar9 < iVar2 && -1 < (int)uVar9) &&
                ((byte)(*(char *)(param_1[0x3e] + 8 + (ulonglong)(uVar9 & 0x7fffffff) * 0x50) - 1U)
                 < 2)) && ((int)uVar9 < *(int *)(lVar7 + 0x80))) {
              lVar10 = (ulonglong)(uVar9 & 0x7fffffff) * 0x70;
              iVar2 = *(int *)(*(longlong *)(lVar7 + 0x78) + 0x10 + lVar10);
              if ((iVar2 == 0) || (*(int *)(lVar10 + *(longlong *)(lVar7 + 0x78) + 0x14) == 0))
              goto LAB_145c0e418;
              bVar13 = iVar2 == DAT_14c948000;
              goto LAB_145c0e2c2;
            }
            break;
          }
          lVar10 = lVar10 + 0x50;
        } while ((longlong)iVar2 * 0x50 != lVar10);
      }
      bVar13 = false;
LAB_145c0e2c2:
      if ((bVar13) || (param_4 != '\0')) {
LAB_145c0e418:
        pwStack_f0 = L"UnspecifiedFile";
        uStack_e8 = 0xf;
        uStack_100 = 0;
        uStack_fe = 0;
        uStack_f8 = 0;
        uStack_108 = param_3[2];
        if (0xf < (ulonglong)param_3[3]) {
          param_3 = (undefined8 *)*param_3;
        }
        puStack_110 = param_3;
        FUN_141183efe(&plStack_e0,&puStack_110,&uStack_100,&pwStack_f0);
        FUN_1458e8c12(lVar7,&plStack_c8,&plStack_e0,0);
        plVar8 = (longlong *)CONCAT44(uStack_d4,iStack_d8);
        iVar6 = iStack_cc;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar8 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            iVar6 = iStack_cc;
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              iVar6 = iStack_cc;
            }
          }
        }
      }
      FUN_141683dd2(param_1,&plStack_c8,lVar7,0xffffffff);
      goto LAB_145c0e1d6;
    }
    iVar6 = -1;
  }
  if (lStack_58 != 0) {
    FUN_1400020a8();
  }
LAB_145c0e1f0:
  if ((uStack_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 145c0de16 FUN_145c0de16 body=1699 status=ok
// SIG undefined FUN_145c0de16(void)

int FUN_145c0de16(longlong *param_1,undefined4 *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined2 local_130;
  undefined1 local_12e;
  undefined8 local_128;
  wchar_t *local_120;
  undefined4 local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined1 local_fe;
  undefined8 local_f8;
  wchar_t *local_f0;
  undefined4 local_e8;
  longlong *local_e0;
  int local_d8;
  undefined4 uStack_d4;
  int local_cc;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  int local_ac;
  undefined8 local_a8;
  longlong local_a0;
  undefined **local_98;
  longlong **applStack_90 [2];
  byte local_80;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_a0 = 0;
  local_a8 = 0;
  cVar5 = FUN_145c0e4ba(param_1[0x36]);
  uVar3 = local_a8;
  if (cVar5 == '\0') {
    iVar6 = -1;
    goto LAB_145c0e1f0;
  }
  local_b8 = local_a0;
  local_c0 = local_a8;
  local_b0 = *param_2;
  local_c8 = param_1;
  FUN_1447a97f4(local_70,local_a0 + 0x80);
  iVar6 = FUN_140b9fef0(uVar3,param_2,0);
  local_cc = iVar6;
  if (iVar6 < 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1,&local_98);
    ppuVar4 = local_98;
    if ((((local_98 == (undefined **)0x0) || (lVar7 = FUN_145978b04(), lVar7 == 0)) ||
        (*(int *)(ppuVar4 + 7) < *(int *)(lVar7 + 0x38))) ||
       (*(longlong *)(ppuVar4[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
      local_98 = (undefined **)0x0;
    }
    plVar8 = (longlong *)FUN_145c0e550(param_1,local_98);
    lVar7 = FUN_1414e7344(param_1,local_a0 + 0x58,local_70);
    plVar8[7] = lVar7;
    iVar6 = (int)param_1[0x2b] + 1;
    *(int *)(param_1 + 0x2b) = iVar6;
    *(int *)(plVar8 + 5) = iVar6;
    *(undefined4 *)((longlong)plVar8 + 0x2c) = 2;
    local_e0 = plVar8;
    if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(plVar8);
    }
    applStack_90[0] = &local_e0;
    local_98 = (undefined **)(plVar8 + 5);
    FUN_145c0e748(param_1 + 0x2c,&local_110);
    uVar3 = local_a8;
    FUN_1414e7524(local_a8,&local_98,param_2,plVar8 + 5);
    local_e0 = (longlong *)0x0;
    FUN_1413d9c32(uVar3,&local_98,param_2,&local_e0);
    if ((&DAT_149fc1b6e)[local_80] == '\x01') {
      if ((applStack_90[0] != (longlong **)0x0) &&
         (cVar5 = (*(code *)(*applStack_90[0])[5])(), cVar5 != '\0')) {
LAB_145c0e027:
        FUN_1405e6804(&local_98,&local_e0);
        iVar6 = 1;
        if (-1 < (int)param_1[0x37]) {
          iVar6 = (int)param_1[0x37];
        }
        plVar12 = local_e0;
        if (local_d8 == 0) {
          plVar12 = (longlong *)&DAT_149dfb77a;
        }
        if (iVar6 < 1) {
          if ((int)param_1[0x3b] == 0) {
            puVar11 = &DAT_149dfb77a;
          }
          else {
            puVar11 = (undefined2 *)param_1[0x3a];
          }
          FUN_140002266(&local_110,L"%lsserver_remote_%ls_OUTPUT",puVar11);
        }
        else {
          if ((int)param_1[0x3b] == 0) {
            puVar11 = &DAT_149dfb77a;
          }
          else {
            puVar11 = (undefined2 *)param_1[0x3a];
          }
          local_138 = plVar12;
          FUN_140002266(&local_110,L"%lsclient_%d_remote_%ls_OUTPUT",puVar11,iVar6 + -1);
        }
        if ((undefined8 **)(plVar8 + 10) == &local_110) {
          if (local_110 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (plVar8[10] != 0) {
            FUN_1400020a8();
          }
          plVar8[10] = (longlong)local_110;
          local_110 = (undefined8 *)0x0;
          *(undefined4 *)(plVar8 + 0xb) = (undefined4)local_108;
          *(undefined4 *)((longlong)plVar8 + 0x5c) = local_108._4_4_;
        }
        if (local_e0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else if (((ulonglong)applStack_90[0] & 0xffffff) != 0) goto LAB_145c0e027;
    local_98 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_80])(applStack_90);
    local_ac = (int)plVar8[5];
    local_98 = (undefined **)0x0;
    applStack_90[0] = (longlong **)0x0;
    local_138 = param_1;
    FUN_1414e7168(&local_98,plVar8,&DAT_14cb8dc00,local_70);
    local_120 = L"UnspecifiedFile";
    local_118 = 0xf;
    local_130 = 0;
    local_12e = 0;
    local_128 = 0;
    local_108 = param_3[2];
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    local_110 = param_3;
    FUN_141183efe(&local_e0,&local_110,&local_130,&local_120);
    FUN_1458e8c12(plVar8,&local_c8,&local_e0,0);
    FUN_141683dd2(param_1,&local_c8,plVar8,0xffffffff);
    iVar6 = (int)plVar8[5];
    plVar8 = (longlong *)CONCAT44(uStack_d4,local_d8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
LAB_145c0e1d6:
    FUN_1414e70fc(&local_98);
  }
  else {
    local_ac = iVar6;
    lVar7 = FUN_140b9ffa8(param_1,&local_cc);
    if (lVar7 != 0) {
      local_98 = (undefined **)0x0;
      applStack_90[0] = (longlong **)0x0;
      local_138 = param_1;
      FUN_1414e7168(&local_98,lVar7,&DAT_14cb8dc00,local_70);
      plVar8 = (longlong *)FUN_144a8232a(&DAT_14cb8dd48);
      iVar2 = (int)param_1[0x3f];
      if ((longlong)iVar2 != 0) {
        lVar10 = 0;
        do {
          if (*(longlong *)(param_1[0x3e] + lVar10) == *plVar8) {
            uVar9 = (int)(lVar10 >> 4) * -0x33333333;
            if ((((int)uVar9 < iVar2 && -1 < (int)uVar9) &&
                ((byte)(*(char *)(param_1[0x3e] + 8 + (ulonglong)(uVar9 & 0x7fffffff) * 0x50) - 1U)
                 < 2)) && ((int)uVar9 < *(int *)(lVar7 + 0x80))) {
              lVar10 = (ulonglong)(uVar9 & 0x7fffffff) * 0x70;
              iVar2 = *(int *)(*(longlong *)(lVar7 + 0x78) + 0x10 + lVar10);
              if ((iVar2 == 0) || (*(int *)(lVar10 + *(longlong *)(lVar7 + 0x78) + 0x14) == 0))
              goto LAB_145c0e418;
              bVar13 = iVar2 == DAT_14c948000;
              goto LAB_145c0e2c2;
            }
            break;
          }
          lVar10 = lVar10 + 0x50;
        } while ((longlong)iVar2 * 0x50 != lVar10);
      }
      bVar13 = false;
LAB_145c0e2c2:
      if ((bVar13) || (param_4 != '\0')) {
LAB_145c0e418:
        local_f0 = L"UnspecifiedFile";
        local_e8 = 0xf;
        local_100 = 0;
        local_fe = 0;
        local_f8 = 0;
        local_108 = param_3[2];
        if (0xf < (ulonglong)param_3[3]) {
          param_3 = (undefined8 *)*param_3;
        }
        local_110 = param_3;
        FUN_141183efe(&local_e0,&local_110,&local_100,&local_f0);
        FUN_1458e8c12(lVar7,&local_c8,&local_e0,0);
        plVar8 = (longlong *)CONCAT44(uStack_d4,local_d8);
        iVar6 = local_cc;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar8 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            iVar6 = local_cc;
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              iVar6 = local_cc;
            }
          }
        }
      }
      FUN_141683dd2(param_1,&local_c8,lVar7,0xffffffff);
      goto LAB_145c0e1d6;
    }
    iVar6 = -1;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_145c0e1f0:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 145c0e4ba FUN_145c0e4ba body=149 status=ok
// SIG undefined FUN_145c0e4ba(void)

bool FUN_145c0e4ba(longlong param_1,undefined4 *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1 == 0) || (lVar2 = *(longlong *)(param_1 + 0x1e0), lVar2 == 0)) {
    *param_4 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar2 + 0x68);
    *param_4 = lVar1;
    if ((lVar1 != 0) && (local_1c = *param_2, -1 < (short)local_1c)) {
      lVar1 = FUN_14042ae8c(lVar1,&local_1c);
      *param_3 = lVar1;
      if (lVar1 == 0) {
        lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28);
        *param_3 = lVar2;
        bVar3 = lVar2 != 0;
      }
      else {
        bVar3 = true;
      }
      goto LAB_145c0e523;
    }
  }
  bVar3 = false;
LAB_145c0e523:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0e550 FUN_145c0e550 body=187 status=ok
// SIG undefined FUN_145c0e550(void)

undefined8 FUN_145c0e550(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0e60c FUN_145c0e60c body=183 status=ok
// SIG undefined FUN_145c0e60c(void)

void FUN_145c0e60c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
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
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return;
}



// FUNCTION 145c0e6c4 FUN_145c0e6c4 body=132 status=ok
// SIG undefined FUN_145c0e6c4(void)

void FUN_145c0e6c4(longlong param_1,int param_2)

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



// FUNCTION 145c0e748 FUN_145c0e748 body=313 status=ok
// SIG undefined FUN_145c0e748(void)

undefined4 * FUN_145c0e748(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c0e904(param_1,local_40);
  plVar1 = (longlong *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  lVar8 = *plVar1;
  *(longlong *)(local_38 + 2) = lVar8;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    uVar5 = *local_38;
  }
  local_38[4] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_145c0e882(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145c0e9ec(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0e882 FUN_145c0e882 body=129 status=ok
// SIG undefined FUN_145c0e882(void)

undefined8 FUN_145c0e882(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_145af7de4(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145c0e904 FUN_145c0e904 body=231 status=ok
// SIG undefined FUN_145c0e904(void)

int * FUN_145c0e904(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145c0e9ec FUN_145c0e9ec body=428 status=ok
// SIG undefined FUN_145c0e9ec(void)

void FUN_145c0e9ec(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 145c0eb9a FUN_145c0eb9a body=178 status=ok
// SIG undefined FUN_145c0eb9a(void)

void FUN_145c0eb9a(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_145c0ec4e(param_1,iVar1);
    }
    if (uVar3 != 0) {
      puVar2 = (undefined4 *)((longlong)iVar1 * 0x50 + *param_1 + 0x48);
      do {
        *(undefined8 *)(puVar2 + -10) = 0;
        puVar2[-8] = 0;
        *(undefined8 *)(puVar2 + -0x12) = 0;
        *(undefined8 *)(puVar2 + -0x10) = 0;
        *(undefined8 *)(puVar2 + -7) = 0xffffffff00000080;
        puVar2[-5] = 0;
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 0x14;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1489b3c44(param_1,param_2,iVar1 - param_2);
    FUN_1489b3caa(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145c0ec4e FUN_145c0ec4e body=147 status=ok
// SIG undefined FUN_145c0ec4e(void)

void FUN_145c0ec4e(longlong param_1,int param_2)

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



// FUNCTION 145c0ece1 FUN_145c0ece1 body=213 status=ok
// SIG undefined FUN_145c0ece1(void)

void FUN_145c0ece1(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong **local_48;
  undefined8 **local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1[1] != 0) && (*param_1 != 0)) {
    lVar1 = param_1[1] + 0xf8;
    local_50 = param_1;
    local_48 = &local_50;
    local_40 = &local_48;
    FUN_145c0edb8(lVar1);
    FUN_1414e81d0(lVar1);
    lVar1 = (longlong)*(int *)(param_1[1] + 0x150);
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(param_1[1] + 0x148);
      lVar1 = lVar1 * 0x50;
      do {
        local_50 = param_1;
        local_48 = &local_50;
        local_40 = &local_48;
        FUN_145c0edb8(lVar2,&local_40);
        FUN_1414e81d0(lVar2);
        lVar2 = lVar2 + 0x50;
        lVar1 = lVar1 + -0x50;
      } while (lVar1 != 0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0edb8 FUN_145c0edb8 body=56 status=ok
// SIG undefined FUN_145c0edb8(void)

void FUN_145c0edb8(undefined8 *param_1,undefined8 param_2)

{
  if (*(int *)((longlong)param_1 + 0x34) < *(int *)(param_1 + 1)) {
    FUN_145c0edf0();
    FUN_1414e8653(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34),param_2);
    return;
  }
  return;
}



// FUNCTION 145c0edf0 FUN_145c0edf0 body=352 status=ok
// SIG undefined FUN_145c0edf0(void)

void FUN_145c0edf0(longlong *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *_Dst;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 1);
    iVar11 = uVar4 - iVar3;
    iVar10 = iVar11;
    if ((int)param_1[6] != -1) {
      lVar6 = *param_1;
      iVar12 = (int)param_1[6];
      uVar14 = uVar4;
      do {
        iVar5 = *(int *)(lVar6 + 4 + (longlong)iVar12 * 0x18);
        if (iVar12 < iVar11) {
          puVar1 = (undefined8 *)(lVar6 + (longlong)iVar12 * 0x18);
          plVar17 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar17 = param_1 + 2;
          }
          puVar9 = (undefined8 *)(lVar6 + 0x18 + (longlong)(int)(uVar14 - 1) * 0x18);
          uVar13 = uVar14;
          do {
            puVar15 = puVar9;
            uVar14 = uVar13 - 1;
            uVar16 = uVar13 + 0x1e;
            if (-1 < (int)uVar14) {
              uVar16 = uVar14;
            }
            puVar9 = puVar15 + -3;
            uVar13 = uVar14;
          } while ((*(uint *)((longlong)plVar17 + (longlong)((int)uVar16 >> 5) * 4) >>
                    (uVar14 & 0x1f) & 1) == 0);
          uVar7 = puVar15[-3];
          uVar8 = puVar15[-2];
          puVar1[2] = puVar15[-1];
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          plVar17 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar17 = param_1 + 2;
          }
          iVar18 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar18 = iVar12;
          }
          puVar2 = (uint *)((longlong)plVar17 + (longlong)(iVar18 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar12 & 0x1f);
        }
        iVar12 = iVar5;
      } while (iVar5 != -1);
      iVar12 = (int)param_1[1] - uVar4;
      if (iVar12 != 0) {
        _Dst = (void *)((longlong)iVar11 * 0x18 + *param_1);
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 0x18),(longlong)iVar12 * 0x18);
        iVar10 = (int)param_1[1] - iVar3;
      }
    }
    *(int *)(param_1 + 1) = iVar10;
    FUN_144a6134a(param_1 + 2,iVar11,iVar3);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_144727cd0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145c0ef50 FUN_145c0ef50 body=199 status=ok
// SIG undefined FUN_145c0ef50(void)

undefined8 FUN_145c0ef50(longlong *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = *param_1;
  fVar6 = 3.4028235e+38;
  fVar7 = 3.4028235e+38;
  if ((longlong)*(int *)(param_2 + 0x10) != 0) {
    fVar7 = 3.4028235e+38;
    lVar5 = 0;
    do {
      uVar2 = *(ushort *)(*(longlong *)(param_2 + 8) + lVar5);
      if ((((-1 < (short)uVar2) && ((int)(short)uVar2 < (int)(*(longlong **)(lVar3 + 0x10))[1])) &&
          (lVar4 = *(longlong *)(**(longlong **)(lVar3 + 0x10) + (ulonglong)uVar2 * 8), lVar4 != 0))
         && (fVar1 = *(float *)(lVar4 + 0xe4), fVar1 < fVar7)) {
        fVar7 = fVar1;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(param_2 + 0x10) * 2 != lVar5);
  }
  if ((longlong)*(int *)(param_3 + 0x10) != 0) {
    fVar6 = 3.4028235e+38;
    lVar5 = 0;
    do {
      uVar2 = *(ushort *)(*(longlong *)(param_3 + 8) + lVar5);
      if (((-1 < (short)uVar2) && ((int)(short)uVar2 < (int)(*(longlong **)(lVar3 + 0x10))[1])) &&
         ((lVar4 = *(longlong *)(**(longlong **)(lVar3 + 0x10) + (ulonglong)uVar2 * 8), lVar4 != 0
          && (fVar1 = *(float *)(lVar4 + 0xe4), fVar1 < fVar6)))) {
        fVar6 = fVar1;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(param_3 + 0x10) * 2 != lVar5);
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),fVar7 < fVar6);
}



// FUNCTION 145c0f020 FUN_145c0f020 body=429 status=ok
// SIG undefined FUN_145c0f020(void)

void FUN_145c0f020(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_50;
  longlong local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145c0f1ce();
  uVar1 = FUN_144a52528();
  local_88 = (longlong *)(param_1 + 0x10);
  local_40 = param_1 + 0x20;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_70 = local_38;
  iStack_6c = iStack_34;
  local_68 = local_30;
  local_64 = local_2c;
  local_80 = local_48;
  local_78 = local_40;
  local_50 = 0;
  local_60 = local_88;
  local_58 = local_88;
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      (**(code **)(**(longlong **)(*local_88 + 8 + (longlong)iStack_6c * 0x18) + 0x10))();
      FUN_1400021e4((longlong)iStack_6c * 0x18 + *local_88,&local_48);
      FUN_1414e8b3a(&local_90,&local_48);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_14156ce54(uVar1,local_90,1,1);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_146b12bd6(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0f1ce FUN_145c0f1ce body=142 status=ok
// SIG undefined FUN_145c0f1ce(void)

void FUN_145c0f1ce(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_20,L"WINDOWS",1);
  (**(code **)(*param_1 + 0x58))(param_1,local_20);
  if (DAT_14c990938 != (longlong *)0x0) {
    (**(code **)(*DAT_14c990938 + 0x10))();
    if (DAT_14c990938 != (longlong *)0x0) {
      (**(code **)*DAT_14c990938)(DAT_14c990938,1);
    }
    DAT_14c990938 = (longlong *)0x0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0f266 FUN_145c0f266 body=38 status=ok
// SIG undefined FUN_145c0f266(void)

undefined8 FUN_145c0f266(undefined8 param_1,int param_2)

{
  FUN_145c0f28c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c0f28c FUN_145c0f28c body=67 status=ok
// SIG undefined FUN_145c0f28c(void)

void FUN_145c0f28c(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149f218e0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145c0f2d0(param_1 + 6);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 145c0f2d0 FUN_145c0f2d0 body=53 status=ok
// SIG undefined FUN_145c0f2d0(void)

void FUN_145c0f2d0(longlong *param_1)

{
  FUN_145c0f306();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c0f306 FUN_145c0f306 body=336 status=ok
// SIG undefined FUN_145c0f306(void)

void FUN_145c0f306(longlong *param_1)

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
      FUN_146b12950((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c0f55e FUN_145c0f55e body=85 status=ok
// SIG undefined FUN_145c0f55e(void)

void FUN_145c0f55e(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_145c0f5b4();
  return;
}



// FUNCTION 145c0f5b4 FUN_145c0f5b4 body=112 status=ok
// SIG undefined FUN_145c0f5b4(void)

void FUN_145c0f5b4(longlong *param_1,int param_2)

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



// FUNCTION 145c0f624 FUN_145c0f624 body=73 status=ok
// SIG undefined FUN_145c0f624(void)

undefined8 FUN_145c0f624(AkDeviceSettings *param_1)

{
  IAkFileLocationResolver *pIVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x18) == 2) {
    pIVar1 = AK::StreamMgr::GetFileLocationResolver();
    if (pIVar1 == (IAkFileLocationResolver *)0x0) {
      AK::StreamMgr::SetFileLocationResolver((IAkFileLocationResolver *)&DAT_14cb25958);
    }
    DAT_14cb2597c = AK::StreamMgr::CreateDevice(param_1,(IAkLowLevelIOHook *)&DAT_14cb25960);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,DAT_14cb2597c) >> 8),DAT_14cb2597c != 0xffffffff);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 145c0f66e FUN_145c0f66e body=241 status=ok
// SIG undefined FUN_145c0f66e(void)

void FUN_145c0f66e(ulonglong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  longlong lVar7;
  
  if (DAT_14cad4a10 != DAT_14cad4a3c) {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar5 = &DAT_14cad4a40;
    if (DAT_14cad4a48 != (undefined *)0x0) {
      puVar5 = DAT_14cad4a48;
    }
    for (iVar2 = *(int *)(puVar5 + ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) &
                                   (longlong)DAT_14cad4a50 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cad4a08 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(ulonglong *)(DAT_14cad4a08 + (longlong)iVar2 * 0x18) == param_1) {
        puVar5 = &DAT_14cad4a40;
        if (DAT_14cad4a48 != (undefined *)0x0) {
          puVar5 = DAT_14cad4a48;
        }
        lVar1 = DAT_14cad4a08 + (longlong)iVar2 * 0x18;
        lVar7 = (longlong)*(int *)(lVar1 + 0x14);
        iVar4 = *(int *)(puVar5 + lVar7 * 4);
        if (iVar4 == iVar2) {
          piVar6 = (int *)(puVar5 + lVar7 * 4);
        }
        else {
          do {
            piVar6 = (int *)(DAT_14cad4a08 + (longlong)iVar4 * 0x18 + 0x10);
            iVar4 = *piVar6;
          } while (iVar4 != iVar2);
        }
        *piVar6 = *(int *)(lVar1 + 0x10);
        FUN_145c0f760(&DAT_14cad4a08);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c0f760 FUN_145c0f760 body=116 status=ok
// SIG undefined FUN_145c0f760(void)

void FUN_145c0f760(longlong *param_1,int param_2)

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



// FUNCTION 145c0f7d4 FUN_145c0f7d4 body=40 status=ok
// SIG undefined FUN_145c0f7d4(void)

undefined8 FUN_145c0f7d4(undefined8 param_1,int param_2)

{
  FUN_145c0f7fc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c0f7fc FUN_145c0f7fc body=188 status=ok
// SIG undefined FUN_145c0f7fc(void)

void FUN_145c0f7fc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4b2c60;
  plVar3 = (longlong *)param_1[0x13];
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
  plVar3 = (longlong *)param_1[0x11];
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
  FUN_145c0f8b8(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 9);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c0f8b8 FUN_145c0f8b8 body=40 status=ok
// SIG undefined FUN_145c0f8b8(void)

void FUN_145c0f8b8(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148a34282(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 145c0f8ea FUN_145c0f8ea body=125 status=ok
// SIG undefined FUN_145c0f8ea(void)

void FUN_145c0f8ea(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99d350;
  param_1[4] = &PTR_FUN_14b99d390;
  plVar3 = (longlong *)param_1[0x16];
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
  *param_1 = &PTR_FUN_14b99d3a0;
  param_1[4] = &PTR_LAB_14b99d3e0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 145c0f968 FUN_145c0f968 body=160 status=ok
// SIG undefined FUN_145c0f968(void)

void FUN_145c0f968(void)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  
  plVar3 = (longlong *)FUN_1461ad688();
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    uVar1 = (uint)((ulonglong)DAT_14cc24300 >> 0x10);
    uVar5 = (uint)DAT_14cc24300 & 0xffff;
    plVar4 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar3[8];
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    ((longlong)
                     (int)(((uint)DAT_14cc24300 << 0x10 | uVar5) +
                           (int)((ulonglong)DAT_14cc24300 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) &
                    (longlong)(int)plVar3[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*plVar3 + (longlong)iVar2 * 0x18) == DAT_14cc24300) {
          FUN_145c0fa08(plVar3,iVar2);
          return;
        }
        iVar2 = *(int *)(*plVar3 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 145c0fa08 FUN_145c0fa08 body=85 status=ok
// SIG undefined FUN_145c0fa08(void)

void FUN_145c0fa08(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_145c0fa5e();
  return;
}



// FUNCTION 145c0fa5e FUN_145c0fa5e body=57 status=ok
// SIG undefined FUN_145c0fa5e(void)

void FUN_145c0fa5e(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 8 + (longlong)param_2 * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_145c0fab6(param_1,param_2);
  return;
}



// FUNCTION 145c0fa98 FUN_145c0fa98 body=29 status=ok
// SIG undefined FUN_145c0fa98(void)

undefined8 FUN_145c0fa98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c0fab6 FUN_145c0fab6 body=116 status=ok
// SIG undefined FUN_145c0fab6(void)

void FUN_145c0fab6(longlong *param_1,int param_2)

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



// FUNCTION 145c0fb36 FUN_145c0fb36 body=168 status=ok
// SIG undefined FUN_145c0fb36(void)

undefined8 * FUN_145c0fb36(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14ab975b0;
  param_1[6] = 0xffffffff40a00000;
  param_1[7] = 0x4120000041200000;
  param_1[8] = 0x100010042480000;
  *(undefined2 *)(param_1 + 9) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f80000041200000;
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  param_1[0xb] = 0xf42400000000a;
  param_1[0xc] = 0x3f8000000000007b;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x3f80000042c80000;
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0xf) = 0x4a989680;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x84) = 1;
  param_1[0x11] = 0x4974240049742400;
  *(undefined2 *)(param_1 + 0x12) = 1;
  return param_1;
}



// FUNCTION 145c0fbea FUN_145c0fbea body=167 status=ok
// SIG undefined FUN_145c0fbea(void)

undefined8 * FUN_145c0fbea(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1413f708e();
  *param_1 = &PTR_FUN_14abf7780;
  param_1[5] = &PTR_FUN_14abf7ab0;
  FUN_1400b22c2(&local_28,"Action Base");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0fc92 FUN_145c0fc92 body=37 status=ok
// SIG undefined FUN_145c0fc92(void)

void FUN_145c0fc92(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc0);
  FUN_145c0fcb8(param_2);
  return;
}



// FUNCTION 145c0fcb8 FUN_145c0fcb8 body=142 status=ok
// SIG undefined FUN_145c0fcb8(void)

undefined8 * FUN_145c0fcb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b35c370;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x10;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x2000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x461c4000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x459c4000;
  *(undefined4 *)(param_1 + 0xb) = 0x42f00000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x44e10000;
  FUN_14052b590(param_1 + 0xc);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 145c0fd46 FUN_145c0fd46 body=100 status=ok
// SIG undefined FUN_145c0fd46(void)

void FUN_145c0fd46(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_145894b8a(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c0fd5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_140a1a318();
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = &PTR_FUN_14b0ef120;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  return;
}



// FUNCTION 145c0fdaa FUN_145c0fdaa body=79 status=ok
// SIG undefined FUN_145c0fdaa(void)

void FUN_145c0fdaa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140a1a318();
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b0ef120;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  return;
}



// FUNCTION 145c0fdfa FUN_145c0fdfa body=95 status=ok
// SIG undefined FUN_145c0fdfa(void)

undefined8 FUN_145c0fdfa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_140427308(param_2 + -0x18,param_3 + -0x18);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_145c0fe5a(param_2,param_3);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      *(undefined1 *)(param_2 + 0x1c) = *(undefined1 *)(param_3 + 0x1c);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 145c0fe5a FUN_145c0fe5a body=84 status=ok
// SIG undefined FUN_145c0fe5a(void)

longlong * FUN_145c0fe5a(longlong *param_1,longlong *param_2)

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



// FUNCTION 145c0febc FUN_145c0febc body=160 status=ok
// SIG undefined FUN_145c0febc(void)

void FUN_145c0febc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_20 = 0;
  lVar1 = FUN_14124a572(param_2,&DAT_14cbd2d10);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_145c0ff1f;
  }
  lVar1 = 0;
LAB_145c0ff1f:
  FUN_145c0ff5d(param_1 + 0x98,lVar1);
  FUN_144a5ac3a(local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0ff5d FUN_145c0ff5d body=62 status=ok
// SIG undefined FUN_145c0ff5d(void)

void FUN_145c0ff5d(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0ff9c FUN_145c0ff9c body=131 status=ok
// SIG undefined FUN_145c0ff9c(void)

void FUN_145c0ff9c(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = (ulonglong)
          ((((uint)(param_2 >> 1) & 0x7fffffff) - 1) + (uint)((param_2 >> 1 & 0x7fffffff) == 0)) * 2
          + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 2) {
    iVar3 = 4;
  }
  if ((uint)param_2 < 4) {
    iVar3 = 4;
  }
  if ((((int)(uint)param_2 < 1) || (iVar3 <= *(int *)(param_1 + 0x108))) &&
     (*(int *)(param_1 + 0x108) <= iVar3)) {
    FUN_1488db83e(param_1);
    FUN_1458f99ce(param_1,param_2 & 0xffffffff);
    return;
  }
  FUN_1458f99ce(param_1,param_2 & 0xffffffff);
  *(int *)(param_1 + 0x108) = iVar3;
  FUN_145c10020(param_1);
  return;
}



// FUNCTION 145c10020 FUN_145c10020 body=543 status=ok
// SIG undefined FUN_145c10020(void)

void FUN_145c10020(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
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
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1446efa72(param_1 + 0x100,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 0x108);
  uVar2 = local_58;
  if (uVar7 != 0) {
    lVar1 = param_1 + 0xf0;
    uVar6 = 0;
    FUN_144a8ab24(lVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar5 = lVar1;
        }
        *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x108) + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = param_1 + 0xd0;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0xe0) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar2 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar3 = local_58._4_4_;
      local_58 = uVar2;
      do {
        lVar5 = *(longlong *)(local_70 + 0xc0);
        if (*(longlong *)(local_70 + 0xc0) == 0) {
          lVar5 = local_70;
        }
        lVar4 = (longlong)iVar3;
        uVar10 = *(ulonglong *)(lVar5 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)*(int *)(param_1 + 0x108) - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar5 + 0x14 + lVar4 * 0x18) = iVar9;
        lVar8 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar5 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x108) - 1U & uVar10) * 4);
        lVar5 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar5 = lVar1;
        }
        *(int *)(lVar5 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x108) - 1U) * 4) = iVar3;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar3 = local_58._4_4_;
        uVar2 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c10240 FUN_145c10240 body=40 status=ok
// SIG undefined FUN_145c10240(void)

undefined8 FUN_145c10240(undefined8 param_1,int param_2)

{
  FUN_145c10268();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c10268 FUN_145c10268 body=191 status=ok
// SIG undefined FUN_145c10268(void)

void FUN_145c10268(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4f8920;
  if (param_1[0xdb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xaf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa5] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  FUN_145c10328(param_1 + 0x67);
  *(undefined4 *)(param_1 + 0x66) = 0;
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  FUN_145c10366(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c10328 FUN_145c10328 body=62 status=ok
// SIG undefined FUN_145c10328(void)

void FUN_145c10328(longlong param_1)

{
  FUN_145c103a4(param_1,0);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c10366 FUN_145c10366 body=62 status=ok
// SIG undefined FUN_145c10366(void)

void FUN_145c10366(longlong param_1)

{
  FUN_145c104a6(param_1,0);
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x280) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c103a4 FUN_145c103a4 body=137 status=ok
// SIG undefined FUN_145c103a4(void)

void FUN_145c103a4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != param_2) {
    FUN_145c1042e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 200) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0xc4)) && (*(int *)(param_1 + 0xc4) < 0x21)) {
    return;
  }
  uVar1 = 0x20;
  if (0x20 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0xc4) = uVar1;
  FUN_14008f53c(param_1 + 0xb0,0);
  return;
}



// FUNCTION 145c1042e FUN_145c1042e body=120 status=ok
// SIG undefined FUN_145c1042e(void)

void FUN_145c1042e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x14,0);
      iVar2 = (int)(uVar1 / 0x14);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0xac)) {
    *(int *)(param_1 + 0xac) = iVar3;
    FUN_145c105a8(param_1,*(undefined4 *)(param_1 + 0xa8));
    return;
  }
  return;
}



// FUNCTION 145c104a6 FUN_145c104a6 body=137 status=ok
// SIG undefined FUN_145c104a6(void)

void FUN_145c104a6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x288) = 0;
  if (*(int *)(param_1 + 0x28c) != param_2) {
    FUN_145c10530(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x2a8) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2a4)) && (*(int *)(param_1 + 0x2a4) < 0x21)) {
    return;
  }
  uVar1 = 0x20;
  if (0x20 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2a4) = uVar1;
  FUN_14008f53c(param_1 + 0x290,0);
  return;
}



// FUNCTION 145c10530 FUN_145c10530 body=120 status=ok
// SIG undefined FUN_145c10530(void)

void FUN_145c10530(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = 0x20;
    if (0x20 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x14,0);
      iVar2 = (int)(uVar1 / 0x14);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x28c)) {
    *(int *)(param_1 + 0x28c) = iVar3;
    FUN_145c1063c(param_1,*(undefined4 *)(param_1 + 0x288));
    return;
  }
  return;
}



// FUNCTION 145c105a8 FUN_145c105a8 body=148 status=ok
// SIG undefined FUN_145c105a8(void)

void FUN_145c105a8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x14);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa0,0,param_3,0x14);
    memmove(*(void **)((longlong)param_1 + 0xa0),param_1,(longlong)param_2 * 0x14);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa0,param_2,param_3,0x14);
  return;
}



// FUNCTION 145c1063c FUN_145c1063c body=148 status=ok
// SIG undefined FUN_145c1063c(void)

void FUN_145c1063c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x280);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x14);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x280,0,param_3,0x14);
    memmove(*(void **)((longlong)param_1 + 0x280),param_1,(longlong)param_2 * 0x14);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x280,param_2,param_3,0x14);
  return;
}



// FUNCTION 145c106d0 FUN_145c106d0 body=158 status=ok
// SIG undefined FUN_145c106d0(void)

bool FUN_145c106d0(longlong param_1,undefined8 param_2)

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



// FUNCTION 145c1077a FUN_145c1077a body=26 status=ok
// SIG undefined FUN_145c1077a(void)

void FUN_145c1077a(undefined8 param_1)

{
  FUN_145c10878();
  FUN_145c10794(param_1);
  return;
}



// FUNCTION 145c10794 FUN_145c10794 body=72 status=ok
// SIG undefined FUN_145c10794(void)

void FUN_145c10794(longlong param_1)

{
  FUN_1413d8be4(&DAT_14cb896e0,param_1);
  FUN_1447f69b6(param_1 + 0x468);
  FUN_145c1092a(param_1);
  if (*(int *)(param_1 + 0x394) != -1) {
    FUN_145c107dc(param_1);
    return;
  }
  return;
}



// FUNCTION 145c107dc FUN_145c107dc body=154 status=ok
// SIG undefined FUN_145c107dc(void)

void FUN_145c107dc(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14497e828();
  if (lVar1 != 0) {
    lVar2 = FUN_144a79464();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (*(longlong *)(lVar1 + 0x1e0) != 0)) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1e0) + 0x68), lVar1 != 0)) {
      FUN_14042af24(lVar1,local_24,param_1);
      FUN_1414e90a2(lVar1,local_24,param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c10878 FUN_145c10878 body=177 status=ok
// SIG undefined FUN_145c10878(void)

void FUN_145c10878(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar5 = FUN_1447210f0();
  FUN_14027ab42(&local_28,uVar5);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_1414e9128(local_28,param_1);
      }
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c1092a FUN_145c1092a body=267 status=ok
// SIG undefined FUN_145c1092a(void)

void FUN_145c1092a(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  iVar3 = FUN_14487fd02();
  if (iVar3 == 3) {
    if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x3b8)] == '\x01') {
      if (*(longlong **)(param_1 + 0x3a8) == (longlong *)0x0) {
        return;
      }
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0x28))();
      if (cVar2 == '\0') {
        return;
      }
    }
    else if ((*(uint *)(param_1 + 0x3a8) & 0xffffff) == 0) {
      return;
    }
    lVar4 = FUN_1400d1928();
    lVar7 = *(longlong *)(lVar4 + 0x110);
    if (lVar7 == 0) {
      FUN_140aa6c08(lVar4);
      lVar7 = *(longlong *)(lVar4 + 0x110);
    }
    if (*(longlong *)(lVar7 + 0x3f0) != 0) {
      plVar5 = (longlong *)FUN_140489acc();
      uVar1 = *(undefined8 *)(lVar7 + 0x3f0);
      uVar6 = FUN_1447210f0(param_1);
      cVar2 = (**(code **)(*plVar5 + 0x328))(plVar5,uVar6,uVar1);
      if (cVar2 != '\0') {
        plVar5 = (longlong *)FUN_140489acc();
        uVar1 = *(undefined8 *)(lVar7 + 0x3f0);
        uVar6 = FUN_1447210f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000145c10a06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x348))(plVar5,uVar6,uVar1,param_1 + 0x3a0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c10a36 FUN_145c10a36 body=150 status=ok
// SIG undefined FUN_145c10a36(void)

longlong * FUN_145c10a36(longlong *param_1,longlong *param_2)

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



// FUNCTION 145c10acc FUN_145c10acc body=140 status=ok
// SIG undefined FUN_145c10acc(void)

undefined1 * FUN_145c10acc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c10b58();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedTraceParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"MegaLights::FCompactedTraceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x16f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca0e310;
  return &LAB_145dd957e;
}



// FUNCTION 145c10b58 FUN_145c10b58 body=258 status=ok
// SIG undefined FUN_145c10b58(void)

void FUN_145c10b58(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0e390) {
    FUN_144b3d300(&DAT_14ca0e390);
    if (DAT_14ca0e390 == -1) {
      FUN_145c10c5c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FCompactedTraceParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xdd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca0e310,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142deeb8b);
      _Init_thread_footer(&DAT_14ca0e390);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c10c5c FUN_145c10c5c body=226 status=ok
// SIG undefined FUN_145c10c5c(void)

longlong * FUN_145c10c5c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
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
  pcVar13 = FUN_1462ed218;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c10d44 FUN_145c10d44 body=132 status=ok
// SIG undefined FUN_145c10d44(void)

undefined1 * FUN_145c10d44(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xde;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145c10d40;
}



// FUNCTION 145c10dc8 FUN_145c10dc8 body=138 status=ok
// SIG undefined FUN_145c10dc8(void)

code * FUN_145c10dc8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedTraceTexelData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000df;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c10d44;
}



// FUNCTION 145c10e52 FUN_145c10e52 body=58 status=ok
// SIG undefined FUN_145c10e52(void)

void FUN_145c10e52(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c10e8c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3d5270;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 145c10e8c FUN_145c10e8c body=32 status=ok
// SIG undefined FUN_145c10e8c(void)

undefined8 * FUN_145c10e8c(undefined8 *param_1)

{
  FUN_140198756();
  *param_1 = &PTR_FUN_14aac3270;
  return param_1;
}



// FUNCTION 145c10eac FUN_145c10eac body=40 status=ok
// SIG undefined FUN_145c10eac(void)

undefined8 FUN_145c10eac(undefined8 param_1,int param_2)

{
  FUN_145c10ed4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c10ed4 FUN_145c10ed4 body=79 status=ok
// SIG undefined FUN_145c10ed4(void)

void FUN_145c10ed4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a576c80;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145c10f24(param_1 + 0xb);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c10f24 FUN_145c10f24 body=53 status=ok
// SIG undefined FUN_145c10f24(void)

void FUN_145c10f24(longlong *param_1)

{
  FUN_145c10f5a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c10f5a FUN_145c10f5a body=367 status=ok
// SIG undefined FUN_145c10f5a(void)

void FUN_145c10f5a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
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
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x60) != 0) {
        lVar3 = *local_68 + (longlong)iStack_4c * 0x60;
        plVar2 = *(longlong **)(lVar3 + 0x20);
        plVar4 = (longlong *)(lVar3 + 0x30);
        if (plVar2 != (longlong *)0x0) {
          plVar4 = plVar2;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1401283f4(param_1,0);
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



// FUNCTION 145c110ca FUN_145c110ca body=40 status=ok
// SIG undefined FUN_145c110ca(void)

undefined8 FUN_145c110ca(undefined8 param_1,int param_2)

{
  FUN_145c110f2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c110f2 FUN_145c110f2 body=50 status=ok
// SIG undefined FUN_145c110f2(void)

void FUN_145c110f2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a667b30;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140bc97f4(param_1);
  return;
}



// FUNCTION 145c11130 FUN_145c11130 body=79 status=ok
// SIG undefined FUN_145c11130(void)

undefined8 * FUN_145c11130(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a758d70;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 145c11180 FUN_145c11180 body=40 status=ok
// SIG undefined FUN_145c11180(void)

undefined8 FUN_145c11180(undefined8 param_1,int param_2)

{
  FUN_145c111a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c111a8 FUN_145c111a8 body=87 status=ok
// SIG undefined FUN_145c111a8(void)

void FUN_145c111a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a919440;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145c11200(param_1 + 7);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c11200 FUN_145c11200 body=53 status=ok
// SIG undefined FUN_145c11200(void)

void FUN_145c11200(longlong *param_1)

{
  FUN_145c11236();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c11236 FUN_145c11236 body=90 status=ok
// SIG undefined FUN_145c11236(void)

void FUN_145c11236(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 145c11296 FUN_145c11296 body=85 status=ok
// SIG undefined FUN_145c11296(void)

void FUN_145c11296(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab0a2e0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0x3ff0000000000000;
  *(undefined2 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)((longlong)puVar1 + 100) = 0x48fffff0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 145c112ec FUN_145c112ec body=37 status=ok
// SIG undefined FUN_145c112ec(void)

void FUN_145c112ec(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c11312();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c11312 FUN_145c11312 body=46 status=ok
// SIG undefined FUN_145c11312(void)

ulonglong FUN_145c11312(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1458f73f0();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145c11340(lVar2);
    bVar1 = bVar1 ^ 1;
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145c11340 FUN_145c11340 body=7 status=ok
// SIG undefined FUN_145c11340(void)

undefined1 FUN_145c11340(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x130);
}



// FUNCTION 145c11362 FUN_145c11362 body=82 status=ok
// SIG undefined FUN_145c11362(void)

undefined8 * FUN_145c11362(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14007ca06();
  FUN_140efea2e(param_1,uVar2);
  *param_1 = &PTR_FUN_14bcf1210;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 10000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 2000;
  *(undefined4 *)(param_1 + 7) = 2000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 8;
  cVar1 = FUN_141051ab2(DAT_14ca85550);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return param_1;
}



// FUNCTION 145c113bc FUN_145c113bc body=82 status=ok
// SIG undefined FUN_145c113bc(void)

undefined8 * FUN_145c113bc(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_145a02502();
  *param_1 = &PTR_FUN_14bd2f350;
  plVar1 = (longlong *)FUN_145988e1c();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(lVar2 + 0x8c);
  return param_1;
}



// FUNCTION 145c1140e FUN_145c1140e body=163 status=ok
// SIG undefined FUN_145c1140e(void)

undefined8 * FUN_145c1140e(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)*param_1)(param_1,&local_30);
  uVar1 = FUN_14001cc68(0x60,0x10);
  FUN_145c114b2(uVar1,local_30,local_2c,param_3);
  *param_2 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14a452890;
  puVar2[2] = uVar1;
  param_2[1] = puVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c114b2 FUN_145c114b2 body=177 status=ok
// SIG undefined FUN_145c114b2(void)

undefined8 * FUN_145c114b2(undefined8 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined8 *puVar1;
  
  FUN_145c11564();
  *param_1 = &PTR_FUN_14a44f190;
  param_1[1] = &PTR_LAB_14a44f1c0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *puVar1 = &PTR__purecall_14a453170;
  puVar1[1] = 0;
  FUN_1414e9958(puVar1 + 2);
  puVar1[0xb] = 0;
  *puVar1 = &PTR_LAB_14a44f080;
  puVar1[2] = &PTR_FUN_14a44f0b0;
  *(undefined4 *)(puVar1 + 0xc) = param_2;
  *(undefined4 *)((longlong)puVar1 + 100) = param_3;
  *(int *)(puVar1 + 0xd) = param_4;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  param_1[0xb] = puVar1;
  if (param_4 == 2) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  return param_1;
}



// FUNCTION 145c11564 FUN_145c11564 body=99 status=ok
// SIG undefined FUN_145c11564(void)

undefined8 *
FUN_145c11564(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_LAB_149ed8d20;
  uVar1 = 0;
  if (param_4 < 3) {
    uVar1 = *(undefined4 *)(&DAT_149eda730 + (ulonglong)param_4 * 4);
  }
  FUN_145c115c8(param_1 + 1,param_2,param_3,uVar1,param_5,1);
  *param_1 = &PTR_LAB_149ed2840;
  param_1[1] = &PTR_LAB_149ed2870;
  *(uint *)(param_1 + 10) = param_4;
  return param_1;
}



// FUNCTION 145c115c8 FUN_145c115c8 body=83 status=ok
// SIG undefined FUN_145c115c8(void)

undefined8 *
FUN_145c115c8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6)

{
  *param_1 = &PTR_LAB_149eee430;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 7) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_5;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41) = param_6;
  FUN_1414e999a(param_1);
  return param_1;
}



// FUNCTION 145c1161c FUN_145c1161c body=284 status=ok
// SIG undefined FUN_145c1161c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145c1161c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca974f8) {
    FUN_144b3d300(&DAT_14ca974f8);
    if (DAT_14ca974f8 == -1) {
      FUN_145c11738();
      FUN_140db5666(&DAT_14ca97450,0,&DAT_14ca973e8,L"FResolveDepthPS",
                    L"/Engine/Private/ResolvePixelShader.usf",L"MainDepth",3,1,FUN_1474314d2,
                    FUN_14743147a,&LAB_14743145c,&LAB_147431458,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14ca97450 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143226e17);
      _Init_thread_footer(&DAT_14ca974f8);
    }
  }
  return &DAT_14ca97450;
}



// FUNCTION 145c11738 FUN_145c11738 body=314 status=ok
// SIG undefined FUN_145c11738(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145c11738(void)

{
  if ((DAT_14ca9744f & 2) == 0) {
    DAT_14ca9744f = DAT_14ca9744f | 2;
    _DAT_14ca973f0 = L"FResolveDepthPS";
    _DAT_14ca97408 = FUN_146826540;
    _DAT_14ca97410 = FUN_146825d77;
    _DAT_14ca97418 = FUN_146825fd6;
    _DAT_14ca97420 = FUN_1407e02ea;
    _DAT_14ca97428 = FUN_146826273;
    _DAT_14ca97400 = FUN_147431428;
    _DAT_14ca97440 = 0xffffffff000000e8;
    _DAT_14ca97448 = 8;
    DAT_14ca9744c = 0;
    _DAT_14ca97430 = &LAB_147431454;
    _DAT_14ca98ac8 = L"UnresolvedSurface";
    DAT_14ca98af2 = FUN_140850cc5();
    _DAT_14ca98ad0 = FUN_140fb78d0();
    _DAT_14ca98ae0 = &LAB_14682652b;
    _DAT_14ca98ae8 = 0x1000000e0;
    _DAT_14ca98af0 = 0;
    _DAT_14ca98ad8 = DAT_14ca973f8;
    DAT_14ca973f8 = &DAT_14ca98ac8;
    FUN_145c11872();
    FUN_1407e00cc(&DAT_14ca973e8);
  }
  return &DAT_14ca973e8;
}



// FUNCTION 145c11872 FUN_145c11872 body=123 status=ok
// SIG undefined FUN_145c11872(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c11872(void)

{
  _DAT_14ca9a038 = L"BASE";
  DAT_14ca9a062 = 4;
  _DAT_14ca9a040 = FUN_140b35ae4();
  _DAT_14ca9a048 = DAT_14ca973f8;
  _DAT_14ca9a050 = &LAB_14682652b;
  DAT_14ca973f8 = &DAT_14ca9a038;
  DAT_14ca9744d = DAT_14ca9744d + '\x01';
  _DAT_14ca9a058 = 0x100000000;
  if (*(char *)(_DAT_14ca9a040 + 100) != '\0') {
    DAT_14ca9744e = DAT_14ca9744e + '\x01';
  }
  return;
}



// FUNCTION 145c118ee FUN_145c118ee body=40 status=ok
// SIG undefined FUN_145c118ee(void)

undefined8 FUN_145c118ee(undefined8 param_1,int param_2)

{
  FUN_145c11916();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c11916 FUN_145c11916 body=151 status=ok
// SIG undefined FUN_145c11916(void)

void FUN_145c11916(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae19580;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_145c119d8(param_1 + 0x34);
  FUN_145c119ad(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_145c11a0e(param_1 + 0x19);
  FUN_1459becf2(param_1 + 0xd);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c119ad FUN_145c119ad body=43 status=ok
// SIG undefined FUN_145c119ad(void)

void FUN_145c119ad(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1481ecda4(param_1);
    param_1 = param_1 + 0x160;
  }
  return;
}



// FUNCTION 145c119d8 FUN_145c119d8 body=53 status=ok
// SIG undefined FUN_145c119d8(void)

void FUN_145c119d8(longlong *param_1)

{
  FUN_145c11a74();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c11a0e FUN_145c11a0e body=58 status=ok
// SIG undefined FUN_145c11a0e(void)

void FUN_145c11a0e(longlong param_1)

{
  FUN_145c11a48(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0));
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_145c11ace(param_1);
  return;
}



// FUNCTION 145c11a48 FUN_145c11a48 body=43 status=ok
// SIG undefined FUN_145c11a48(void)

void FUN_145c11a48(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145c11ace(param_1);
    param_1 = param_1 + 0xb8;
  }
  return;
}



// FUNCTION 145c11a74 FUN_145c11a74 body=90 status=ok
// SIG undefined FUN_145c11a74(void)

void FUN_145c11a74(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145c11ace FUN_145c11ace body=154 status=ok
// SIG undefined FUN_145c11ace(void)

void FUN_145c11ace(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c11b68 FUN_145c11b68 body=54 status=ok
// SIG undefined FUN_145c11b68(void)

void FUN_145c11b68(void)

{
  FUN_145c11b9e();
  if (DAT_14cb8a750 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb8a730 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c11b9e FUN_145c11b9e body=104 status=ok
// SIG undefined FUN_145c11b9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c11b9e(void)

{
  DAT_14cb8a738 = 0;
  if (DAT_14cb8a73c != 0) {
    FUN_144727cd0(&DAT_14cb8a730,0);
  }
  _DAT_14cb8a760 = 0xffffffff;
  DAT_14cb8a758 = 0;
  if (DAT_14cb8a75c < 0x81) {
    return;
  }
  DAT_14cb8a75c = 0x80;
  FUN_1446efbd8(&DAT_14cb8a740,0);
  return;
}



// FUNCTION 145c11c06 FUN_145c11c06 body=64 status=ok
// SIG undefined FUN_145c11c06(void)

void FUN_145c11c06(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_145c11c46();
  lVar1 = *(longlong *)(param_1 + 0x4208);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x3b38) + 0x18))(lVar1 + 0x3b38);
    FUN_1409c9c98(uVar2,0);
    return;
  }
  return;
}



// FUNCTION 145c11c46 FUN_145c11c46 body=94 status=ok
// SIG undefined FUN_145c11c46(void)

void FUN_145c11c46(longlong param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (*(longlong *)(param_1 + 0x3b60) != 0) {
    uVar1 = FUN_144843108();
    FUN_1459e1ee6(param_1,uVar1,0,&DAT_14c8464e0);
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x3b60) + 0x48);
    if (puVar2 != (undefined4 *)(param_1 + 0x41d8)) {
      *(undefined4 *)(param_1 + 0x41d8) = *puVar2;
      *(undefined1 *)(param_1 + 0x41dc) = 1;
    }
  }
  return;
}



// FUNCTION 145c11ca4 FUN_145c11ca4 body=81 status=ok
// SIG undefined FUN_145c11ca4(void)

undefined8 * FUN_145c11ca4(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_1400b465c();
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  FUN_145c11cf6(puVar2,uVar1,param_3);
  *puVar2 = &PTR_FUN_14b983be0;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 145c11cf6 FUN_145c11cf6 body=77 status=ok
// SIG undefined FUN_145c11cf6(void)

undefined8 * FUN_145c11cf6(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_14b4edf00;
  param_1[10] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  FUN_14485c47a(param_1 + 10);
  *(undefined4 *)(param_1 + 0xb) = param_3;
  return param_1;
}



// FUNCTION 145c11d44 FUN_145c11d44 body=175 status=ok
// SIG undefined FUN_145c11d44(void)

bool FUN_145c11d44(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
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



// FUNCTION 145c11df4 FUN_145c11df4 body=53 status=ok
// SIG undefined FUN_145c11df4(void)

void FUN_145c11df4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_145c11e2a(param_1 + 200);
  if (cVar1 != '\0') {
    FUN_1414e9a52(param_1,param_4);
    return;
  }
  return;
}



// FUNCTION 145c11e2a FUN_145c11e2a body=120 status=ok
// SIG undefined FUN_145c11e2a(void)

ulonglong FUN_145c11e2a(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c11ea4 FUN_145c11ea4 body=225 status=ok
// SIG undefined FUN_145c11ea4(void)

void FUN_145c11ea4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 == (longlong *)0x0) {
    FUN_145c11f86(param_1,0);
  }
  else {
    if (((*(byte *)(param_2 + 0x84) & 2) == 0) ||
       (cVar3 = (**(code **)(*param_2 + 0x6c8))(param_2), cVar3 == '\0')) {
      uVar4 = FUN_1447210f0(param_1);
      FUN_1414ea07f(param_2,uVar4);
    }
    FUN_145c11f86(param_1,param_2);
    lVar5 = FUN_1449f3324();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      uVar4 = FUN_14479d2ce(param_2 + 0x181);
      FUN_145c12188(param_1,param_2,uVar4);
    }
  }
  FUN_145727f64(param_1);
  iVar1 = *(int *)(param_1 + 0x658);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x650);
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar5 + lVar6);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2d0))(plVar2,param_2);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 145c11f86 FUN_145c11f86 body=99 status=ok
// SIG undefined FUN_145c11f86(void)

void FUN_145c11f86(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a75eb4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_145c11fea(param_1,param_2);
      (**(code **)(*param_1 + 0x8d0))(param_1,*(undefined8 *)(param_2 + 0x398),param_2);
    }
  }
  FUN_145c1203c(param_1,param_2);
  return;
}



// FUNCTION 145c11fea FUN_145c11fea body=82 status=ok
// SIG undefined FUN_145c11fea(void)

void FUN_145c11fea(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_1414077a0();
  if (cVar2 == '\0') {
    uVar1 = FUN_1447210f0(param_1);
    cVar2 = FUN_1405e675c(uVar1);
    if ((cVar2 == '\0') && (cVar2 = FUN_140496a74(param_2), cVar2 == '\0')) {
      *(int *)(param_1 + 0x44c) = *(int *)(param_1 + 0x44c) + -1;
      return;
    }
    *(int *)(param_1 + 0x440) = *(int *)(param_1 + 0x440) + -1;
  }
  else {
    *(int *)(param_1 + 0x43c) = *(int *)(param_1 + 0x43c) + -1;
  }
  return;
}



// FUNCTION 145c1203c FUN_145c1203c body=172 status=ok
// SIG undefined FUN_145c1203c(void)

void FUN_145c1203c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar2 = FUN_144a75eb4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      FUN_1414e9fc0(param_1,param_2);
      local_28 = param_2;
      uVar3 = FUN_14477b072(param_1,DAT_14cadae58);
      (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_28);
      plVar1 = (longlong *)param_1[0x7d];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x678))(plVar1,param_2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c120f8 FUN_145c120f8 body=144 status=ok
// SIG undefined FUN_145c120f8(void)

void FUN_145c120f8(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_14487fd02();
  if (((param_2 != 0) && (iVar2 != 0)) && (lVar3 = *(longlong *)(param_2 + 0x398), lVar3 != 0)) {
    if ((&DAT_149fc1b6e)[*(byte *)(lVar3 + 0x3b8)] == '\x01') {
      if (*(longlong **)(lVar3 + 0x3a8) != (longlong *)0x0) {
        cVar1 = (**(code **)(**(longlong **)(lVar3 + 0x3a8) + 0x28))();
        if (cVar1 != '\0') {
          lVar3 = *(longlong *)(param_2 + 0x398);
          goto LAB_145c12150;
        }
      }
    }
    else if ((*(uint *)(lVar3 + 0x3a8) & 0xffffff) != 0) {
LAB_145c12150:
                    /* WARNING: Could not recover jumptable at 0x000145c12171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x688))(param_1,*(undefined8 *)(lVar3 + 0x3f0),lVar3 + 0x3a0);
      return;
    }
  }
  return;
}



// FUNCTION 145c12188 FUN_145c12188 body=114 status=ok
// SIG undefined FUN_145c12188(void)

void FUN_145c12188(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  
  if ((param_3 != (longlong *)0x0) && (*(char *)(param_1 + 0x57c) != '\0')) {
    FUN_14034eff0(param_1);
    if (*(longlong *)(param_2 + 0x398) != 0) {
      FUN_140082f10();
    }
    cVar1 = (**(code **)(*param_3 + 0x648))(param_3,param_2);
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(*param_3 + 0x660))(param_3);
      if (iVar2 == 0) {
        FUN_14885cc3a(param_1,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c121fa FUN_145c121fa body=160 status=ok
// SIG undefined FUN_145c121fa(void)

void FUN_145c121fa(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = FUN_1447210f0();
  iVar2 = FUN_14487fd02(param_1);
  if (iVar2 == 0) {
    return;
  }
  if ((&DAT_149fc1b6e)[*(byte *)(param_3 + 0x18)] == '\x01') {
    if (*(longlong **)(param_3 + 8) == (longlong *)0x0) {
      return;
    }
    cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x28))();
    if (cVar1 == '\0') {
      return;
    }
  }
  else if ((*(uint *)(param_3 + 8) & 0xffffff) == 0) {
    return;
  }
  plVar4 = (longlong *)FUN_140489acc();
  cVar1 = (**(code **)(*plVar4 + 0x328))(plVar4,uVar3,param_2);
  if (cVar1 == '\0') {
    return;
  }
  plVar4 = (longlong *)FUN_140489acc();
                    /* WARNING: Could not recover jumptable at 0x000145c12284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x348))(plVar4,uVar3,param_2,param_3);
  return;
}



// FUNCTION 145c122a6 FUN_145c122a6 body=130 status=ok
// SIG undefined FUN_145c122a6(void)

undefined8 * FUN_145c122a6(undefined8 *param_1)

{
  FUN_145c12328();
  *param_1 = &PTR_FUN_14aba8130;
  param_1[0x72] = &PTR_FUN_14aba8900;
  *(byte *)(param_1 + 0x85) = *(byte *)(param_1 + 0x85) & 0xe7;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    param_1[0x87] = FUN_147e6d104;
    param_1[0x88] = FUN_147e6d104;
    param_1[0x89] = &LAB_147e6d31c;
    param_1[0x8a] = &LAB_147e6d31c;
    param_1[0x8c] = FUN_147e6d320;
    FUN_147e6d358(param_1[0x9d]);
  }
  return param_1;
}



// FUNCTION 145c12328 FUN_145c12328 body=900 status=ok
// SIG undefined FUN_145c12328(void)

undefined8 * FUN_145c12328(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140312256();
  *param_1 = &PTR_FUN_14abadb10;
  param_1[0x72] = &PTR_FUN_14abae2e0;
  param_1[0x73] = 0;
  FUN_145c12714(param_1 + 0x74,0x420c0000,0x43100000);
  *(uint *)(param_1 + 0x85) = *(uint *)(param_1 + 0x85) & 0xffffffe0 | 0x18;
  *(undefined1 *)((longlong)param_1 + 0x42c) = 3;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0xd;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x93));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x93),4000);
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(undefined8 *)((longlong)param_1 + 0x584) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x58c) = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(byte *)(param_1 + 0xb5) = *(byte *)(param_1 + 0xb5) & 0xfa;
  uVar3 = FUN_145c126ae();
  *(undefined2 *)((longlong)param_1 + 0x5ac) = uVar3;
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xe0;
  *(undefined4 *)((longlong)param_1 + 0x5b4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xb7) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f000000;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) & 0xf7;
  FUN_1403121a6(param_1,0);
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = 0x800;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a79d2f0;
  plVar5[2] = (longlong)puVar4;
  if (puVar4 == (undefined8 *)0x0) {
LAB_145c1253a:
    param_1[0x9d] = puVar4;
    plVar8 = (longlong *)param_1[0x9e];
    if (plVar5 != plVar8) {
      param_1[0x9e] = plVar5;
      if (plVar8 == (longlong *)0x0) goto LAB_145c12561;
      goto LAB_145c12617;
    }
    if (plVar5 == (longlong *)0x0) goto LAB_145c12561;
    LOCK();
    plVar8 = plVar5 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_145c12561;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar8 = plVar5;
  }
  else {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *puVar4 = puVar4;
      if ((longlong *)puVar4[1] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)puVar4[1];
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
        puVar4[1] = plVar5;
      }
      LOCK();
      plVar8 = plVar5 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      goto LAB_145c1253a;
    }
    *puVar4 = puVar4;
    param_1[0x9d] = puVar4;
    plVar8 = (longlong *)param_1[0x9e];
    if (plVar8 == (longlong *)0x0) goto LAB_145c12561;
    param_1[0x9e] = 0;
LAB_145c12617:
    LOCK();
    plVar5 = plVar8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_145c12561;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_145c12561:
  *(undefined4 *)(param_1 + 0x86) = 0x3f000000;
  FUN_1446f470e(&local_38,L"SceneComp",1);
  uVar6 = FUN_144a799b0();
  local_40 = 0;
  local_48 = 1;
  lVar7 = FUN_14048696c(param_1,local_38,uVar6,uVar6);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  param_1[0x39] = lVar7;
  *(undefined1 *)(lVar7 + 0x1fb) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c126ae FUN_145c126ae body=102 status=ok
// SIG undefined FUN_145c126ae(void)

int FUN_145c126ae(void)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb1d614) {
    FUN_144b3d300(&DAT_14cb1d614);
    if (DAT_14cb1d614 == -1) {
      DAT_14cb1d610 = 0;
      _Init_thread_footer(&DAT_14cb1d614);
    }
  }
  iVar1 = DAT_14cb1d610;
  LOCK();
  DAT_14cb1d610 = DAT_14cb1d610 + 1;
  UNLOCK();
  return iVar1 + 1;
}



// FUNCTION 145c12714 FUN_145c12714 body=524 status=ok
// SIG undefined FUN_145c12714(void)

byte * FUN_145c12714(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = *param_1 & 0xe0;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x80;
  param_1[0xf] = 0xbf;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
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
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_1446f470e(param_1 + 0x38,L"Default",1);
  param_1[0x40] = 0;
  param_1[0x41] = 0x4b;
  param_1[0x42] = 0x26;
  param_1[0x43] = 0xa4;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0x49;
  param_1[0x4f] = 0x40;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0x49;
  param_1[0x57] = 0x40;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0x40;
  param_1[0x5e] = 0x6f;
  param_1[0x5f] = 0x40;
  plVar5 = DAT_14caca348;
  if (DAT_14caca350 == 0) {
    plVar5 = (longlong *)0x0;
  }
  pbVar1 = param_1 + 0x60;
  (**(code **)(*plVar5 + 0x58))(plVar5,&local_58);
  lVar6 = local_58;
  if ((((local_58 == 0) || (lVar4 = FUN_144a6c4d8(), lVar4 == 0)) ||
      (*(int *)(lVar6 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) {
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
  }
  else {
    param_1[0x70] = 0;
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    param_1[0x73] = 0;
    param_1[0x74] = 0;
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
    param_1[0x6f] = 0;
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    if (local_58 != 0) {
      FUN_1400bbfae(&local_50,local_58);
      *(undefined4 *)(param_1 + 0x68) = local_50;
      *(undefined4 *)(param_1 + 0x6c) = uStack_4c;
      *(undefined4 *)(param_1 + 0x70) = uStack_48;
      *(undefined4 *)(param_1 + 0x74) = uStack_44;
      if (param_1 + 0x68 == (byte *)&local_50) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x78) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x78) = local_40;
        local_40 = 0;
        *(undefined4 *)(param_1 + 0x80) = local_38;
        *(undefined4 *)(param_1 + 0x84) = local_34;
      }
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      if (cVar3 != '\0') {
        uVar2 = *(uint *)(local_58 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
          param_1[0x60] = 0;
          param_1[0x61] = 0;
          param_1[0x62] = 0;
          param_1[99] = 0;
          param_1[100] = 0;
          param_1[0x65] = 0;
          param_1[0x66] = 0;
          param_1[0x67] = 0;
          goto LAB_145c12880;
        }
      }
      FUN_14485c47a(pbVar1,local_58);
      goto LAB_145c12880;
    }
  }
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  pbVar1[4] = 0;
  pbVar1[5] = 0;
  pbVar1[6] = 0;
  pbVar1[7] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
LAB_145c12880:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145c12922 FUN_145c12922 body=49 status=ok
// SIG undefined FUN_145c12922(void)

longlong * FUN_145c12922(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a6c4d8();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 145c12954 FUN_145c12954 body=40 status=ok
// SIG undefined FUN_145c12954(void)

undefined8 FUN_145c12954(undefined8 param_1,int param_2)

{
  FUN_145c1297c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c1297c FUN_145c1297c body=141 status=ok
// SIG undefined FUN_145c1297c(void)

void FUN_145c1297c(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a5b0690;
  FUN_144760e21(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0xf0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0x30);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c12a0a FUN_145c12a0a body=40 status=ok
// SIG undefined FUN_145c12a0a(void)

undefined8 FUN_145c12a0a(undefined8 param_1,int param_2)

{
  FUN_145c12a32();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c12a32 FUN_145c12a32 body=101 status=ok
// SIG undefined FUN_145c12a32(void)

void FUN_145c12a32(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7c9d10;
  param_1[5] = &PTR_FUN_14a7ca100;
  param_1[6] = &PTR_FUN_14a7ca140;
  param_1[7] = &PTR_FUN_14a7ca170;
  FUN_145c12a97(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_14040f240(param_1);
  return;
}



// FUNCTION 145c12a97 FUN_145c12a97 body=40 status=ok
// SIG undefined FUN_145c12a97(void)

void FUN_145c12a97(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147932b9e(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 145c12ac0 FUN_145c12ac0 body=469 status=ok
// SIG undefined FUN_145c12ac0(void)

longlong * FUN_145c12ac0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [16];
  code *local_70;
  longlong *local_68;
  undefined1 local_59;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = (**(code **)(*(longlong *)*param_3 + 8))();
  FUN_1412cbf9c(&local_48,uVar5);
  lVar3 = local_48;
  if (local_48 != 0) {
    uVar4 = FUN_1414ea1d0(local_48,param_1 + 0x10);
    local_59 = FUN_1406758b4(param_1,uVar4);
    local_70 = (code *)param_3[1];
    local_68 = (longlong *)param_3[2];
    if (local_68 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    local_50 = (longlong *)FUN_145c12c96(&local_70,&local_59);
    local_58 = local_50 + 2;
    FUN_145c12dac();
    if (plVar6 != (longlong *)0x0) {
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
    local_70 = FUN_140675890;
    local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
    FUN_145c12e4e(local_80,&local_58);
    FUN_1412cc1ac(local_48,&local_70,param_1 + 0x10,local_80);
    plVar6 = local_50;
    *param_2 = (longlong)local_58;
    param_2[1] = (longlong)local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (lVar3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c12c96 FUN_145c12c96 body=149 status=ok
// SIG undefined FUN_145c12c96(void)

undefined8 * FUN_145c12c96(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b99fd30;
  uVar1 = *param_2;
  local_30 = *param_1;
  local_28 = param_1[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_145c12d2c(puVar2 + 2,&local_30,uVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c12d2c FUN_145c12d2c body=128 status=ok
// SIG undefined FUN_145c12d2c(void)

undefined8 * FUN_145c12d2c(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xf0 | param_3 * '\x02';
  *param_1 = &PTR_FUN_14b99fd70;
  param_1[6] = *param_2;
  lVar3 = param_2[1];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_14b99fd50;
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



// FUNCTION 145c12dac FUN_145c12dac body=162 status=ok
// SIG undefined FUN_145c12dac(void)

void FUN_145c12dac(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145c12deb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145c12deb;
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
LAB_145c12deb:
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
                    /* WARNING: Could not recover jumptable at 0x000145c12e4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145c12e4e FUN_145c12e4e body=300 status=ok
// SIG undefined FUN_145c12e4e(void)

longlong * FUN_145c12e4e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

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
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b99fe00;
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
    *puVar5 = &PTR_FUN_14b99fd90;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b99fe00;
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
    *puVar5 = &PTR_FUN_14b99fd90;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return param_1;
}



// FUNCTION 145c12f7a FUN_145c12f7a body=142 status=ok
// SIG undefined FUN_145c12f7a(void)

code * FUN_145c12f7a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145c13008();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"RadianceCacheMarkParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"LumenRadianceCache::FRadianceCacheMarkParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000009f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145eac1e6;
}



// FUNCTION 145c13008 FUN_145c13008 body=265 status=ok
// SIG undefined FUN_145c13008(void)

undefined * FUN_145c13008(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f21d0) {
    FUN_144b3d300(&DAT_14c9f21d0);
    if (DAT_14c9f21d0 == -1) {
      FUN_145c13112(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FRadianceCacheMarkParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0xf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f2150,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d26277);
      _Init_thread_footer(&DAT_14c9f21d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9f2150;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c13112 FUN_145c13112 body=226 status=ok
// SIG undefined FUN_145c13112(void)

longlong * FUN_145c13112(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
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
  pcVar13 = FUN_1462d80fc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c131fa FUN_145c131fa body=130 status=ok
// SIG undefined FUN_145c131fa(void)

undefined1 * FUN_145c131fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWRadianceProbeIndirectionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145c131f6;
}



// FUNCTION 145c1327c FUN_145c1327c body=138 status=ok
// SIG undefined FUN_145c1327c(void)

code * FUN_145c1327c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumRadianceProbeClipmapsForMark";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7400000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e1532;
}



// FUNCTION 145c13306 FUN_145c13306 body=72 status=ok
// SIG undefined FUN_145c13306(void)

void FUN_145c13306(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x7c0))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145c13336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x7c8))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerAmmoGivenToInterruptedReload_Validate");
  return;
}



// FUNCTION 145c1339e FUN_145c1339e body=54 status=ok
// SIG undefined FUN_145c1339e(void)

undefined8 * FUN_145c1339e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c133d4 FUN_145c133d4 body=63 status=ok
// SIG undefined FUN_145c133d4(void)

undefined1 FUN_145c133d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145c13414(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 145c13414 FUN_145c13414 body=116 status=ok
// SIG undefined FUN_145c13414(void)

longlong FUN_145c13414(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  FUN_145c13488(param_1 + 0x70,param_2 + 0x70);
  return param_1;
}



// FUNCTION 145c13488 FUN_145c13488 body=93 status=ok
// SIG undefined FUN_145c13488(void)

undefined8 * FUN_145c13488(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1456e4800(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1491ca478(param_1,iVar1);
      FUN_1491ca4e7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145c134e5 FUN_145c134e5 body=250 status=ok
// SIG undefined FUN_145c134e5(void)

void FUN_145c134e5(void)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14ca84e78 == '\0') && (DAT_14ca83900 != (longlong *)0x0)) {
    FUN_1414ea2d5();
    local_30 = 0;
    local_28 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_30,5);
    (**(code **)(*DAT_14ca83900 + 0x18))();
    if (DAT_14ca83900 != (longlong *)0x0) {
      (**(code **)*DAT_14ca83900)(DAT_14ca83900,1);
    }
    DAT_14ca83900 = (longlong *)0x0;
  }
  else if (DAT_14ca84e78 != '\0') {
    local_30 = 0;
    local_28 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_30,7);
    local_30 = 0;
    local_28 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_30,5);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_145c135e0(&DAT_14ca850c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 145c135e0 FUN_145c135e0 body=235 status=ok
// SIG undefined FUN_145c135e0(void)

void FUN_145c135e0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_1447b9e4a(param_1,0);
  puVar2 = *(undefined8 **)(param_1 + 0x378);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x378) = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x380);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x380) = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x388);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x388) = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x348);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x348) = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x360);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x360) = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c136b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 145c136cc FUN_145c136cc body=59 status=ok
// SIG undefined FUN_145c136cc(void)

void FUN_145c136cc(void)

{
  if (1 < DAT_14ca81360) {
    FUN_145bcc834();
    DAT_14ca81360 = 1;
    FUN_140161372(&DAT_14ca81318);
    return;
  }
  FUN_147411db6();
  FUN_145bcc834();
  return;
}



// FUNCTION 145c13707 FUN_145c13707 body=84 status=ok
// SIG undefined FUN_145c13707(void)

void FUN_145c13707(void)

{
  FUN_1414ea550(&DAT_14ca808c8);
  FUN_145c1375c(&DAT_14ca80bc8);
  FUN_1414ea784(&DAT_14ca80ec8);
  if (DAT_14ca811c8 != 0) {
    FUN_1414ea9be();
  }
  if (DAT_14ca811d0 != 0) {
    FUN_1414eac06();
    return;
  }
  return;
}



// FUNCTION 145c1375c FUN_145c1375c body=160 status=ok
// SIG undefined FUN_145c1375c(void)

void FUN_145c1375c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  iVar1 = *(int *)(param_1 + 0x268);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x260);
    lVar3 = 0;
    do {
      FUN_145c137fc(param_1,*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_145c137fc(param_1,*(undefined8 *)(param_1 + 0x210));
  FUN_145c137fc(param_1,*(undefined8 *)(param_1 + 0x208));
  FUN_145c137fc(param_1,*(undefined8 *)(param_1 + 0x220));
  FUN_145c137fc(param_1,*(undefined8 *)(param_1 + 0x218));
                    /* WARNING: Could not recover jumptable at 0x000145c137d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  return;
}



// FUNCTION 145c137fc FUN_145c137fc body=347 status=ok
// SIG undefined FUN_145c137fc(void)

void FUN_145c137fc(longlong param_1,longlong *param_2)

{
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  local_30 = param_2 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = local_28;
  iStack_5c = iStack_24;
  local_58 = local_20;
  local_54 = local_1c;
  local_70 = local_38;
  local_68 = local_30;
  local_40 = 0;
  local_78 = param_2;
  local_50 = param_2;
  local_48 = param_2;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_78 + 0x58 + (longlong)iStack_5c * 0x68) != 0) {
        FUN_1402ce13e();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
    if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
      FUN_14740f9f0(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c13958 FUN_145c13958 body=112 status=ok
// SIG undefined FUN_145c13958(void)

void FUN_145c13958(longlong param_1)

{
  FUN_1414ea9be();
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_145c139c8(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c139c8 FUN_145c139c8 body=53 status=ok
// SIG undefined FUN_145c139c8(void)

void FUN_145c139c8(longlong *param_1)

{
  FUN_145c139fe();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c139fe FUN_145c139fe body=89 status=ok
// SIG undefined FUN_145c139fe(void)

void FUN_145c139fe(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145c13a58 FUN_145c13a58 body=112 status=ok
// SIG undefined FUN_145c13a58(void)

void FUN_145c13a58(longlong param_1)

{
  FUN_1414eac06();
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_145c13ac8(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c13ac8 FUN_145c13ac8 body=53 status=ok
// SIG undefined FUN_145c13ac8(void)

void FUN_145c13ac8(longlong *param_1)

{
  FUN_145c13afe();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c13afe FUN_145c13afe body=89 status=ok
// SIG undefined FUN_145c13afe(void)

void FUN_145c13afe(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145c13b58 FUN_145c13b58 body=211 status=ok
// SIG undefined FUN_145c13b58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c13b58(void)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (DAT_14ca80b68 != (undefined8 *)0x0) {
    FUN_140082318();
    puVar2 = DAT_14ca80b68;
    if (DAT_14ca80b68 != (undefined8 *)0x0) {
      DAT_14ca80b68 = (undefined8 *)0x0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FUN_1414eae4e(&DAT_14ca808c8);
  }
  if ((*(int *)(DAT_14ca80ae0 + 8) != *(int *)(DAT_14ca80ae0 + 0x34)) ||
     (*(int *)(DAT_14ca80ae8 + 8) != *(int *)(DAT_14ca80ae8 + 0x34))) {
    FUN_145c13c2c(&DAT_14ca808c8);
  }
  FUN_1414eb738(&DAT_14ca808c8);
  FUN_1414ec2ec(&DAT_14ca808c8);
  _DAT_14ca80b70 = FUN_1402cef90(&DAT_14ca808c8,&DAT_14ca80ad0,&DAT_14ca80ad8);
  iVar3 = FUN_1402cef90(&DAT_14ca808c8,&DAT_14ca80ad0,&DAT_14ca80ad8);
  _DAT_14ca80b70 = _DAT_14ca80b70 + iVar3;
  DAT_14ca80b79 = 0;
  return;
}



// FUNCTION 145c13c2c FUN_145c13c2c body=84 status=ok
// SIG undefined FUN_145c13c2c(void)

void FUN_145c13c2c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  uVar2 = *(undefined8 *)(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x224);
  *(undefined8 *)(param_1 + 0x218) = uVar1;
  *(undefined8 *)(param_1 + 0x220) = uVar2;
  FUN_1402ce43e();
  FUN_1402ce43e(*(undefined8 *)(param_1 + 0x220));
  FUN_1402ce43e(param_1 + 0x28);
  return;
}



// FUNCTION 145c13c80 FUN_145c13c80 body=211 status=ok
// SIG undefined FUN_145c13c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c13c80(void)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (DAT_14ca80e68 != (undefined8 *)0x0) {
    FUN_140082318();
    puVar2 = DAT_14ca80e68;
    if (DAT_14ca80e68 != (undefined8 *)0x0) {
      DAT_14ca80e68 = (undefined8 *)0x0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FUN_1414eb048(&DAT_14ca80bc8);
  }
  if ((*(int *)(DAT_14ca80de0 + 8) != *(int *)(DAT_14ca80de0 + 0x34)) ||
     (*(int *)(DAT_14ca80de8 + 8) != *(int *)(DAT_14ca80de8 + 0x34))) {
    FUN_14740f4ac(&DAT_14ca80bc8);
  }
  FUN_145c14158(&DAT_14ca80bc8);
  FUN_1414ebb18(&DAT_14ca80bc8);
  _DAT_14ca80e70 = FUN_140454f1a(&DAT_14ca80bc8,&DAT_14ca80dd0,&DAT_14ca80dd8);
  iVar3 = FUN_140454f1a(&DAT_14ca80bc8,&DAT_14ca80dd0,&DAT_14ca80dd8);
  _DAT_14ca80e70 = _DAT_14ca80e70 + iVar3;
  DAT_14ca80e79 = 0;
  return;
}



// FUNCTION 145c13d54 FUN_145c13d54 body=211 status=ok
// SIG undefined FUN_145c13d54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c13d54(void)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (DAT_14ca81168 != (undefined8 *)0x0) {
    FUN_140082318();
    puVar2 = DAT_14ca81168;
    if (DAT_14ca81168 != (undefined8 *)0x0) {
      DAT_14ca81168 = (undefined8 *)0x0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FUN_1414eaf48(&DAT_14ca80ec8);
  }
  if ((*(int *)(DAT_14ca810e0 + 8) != *(int *)(DAT_14ca810e0 + 0x34)) ||
     (*(int *)(DAT_14ca810e8 + 8) != *(int *)(DAT_14ca810e8 + 0x34))) {
    FUN_145c13e28(&DAT_14ca80ec8);
  }
  FUN_1414eb380(&DAT_14ca80ec8);
  FUN_1414ecb60(&DAT_14ca80ec8);
  _DAT_14ca81170 = FUN_1404efa56(&DAT_14ca80ec8,&DAT_14ca810d0,&DAT_14ca810d8);
  iVar3 = FUN_1404efa56(&DAT_14ca80ec8,&DAT_14ca810d0,&DAT_14ca810d8);
  _DAT_14ca81170 = _DAT_14ca81170 + iVar3;
  DAT_14ca81179 = 0;
  return;
}



// FUNCTION 145c13e28 FUN_145c13e28 body=84 status=ok
// SIG undefined FUN_145c13e28(void)

void FUN_145c13e28(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  uVar2 = *(undefined8 *)(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x224);
  *(undefined8 *)(param_1 + 0x218) = uVar1;
  *(undefined8 *)(param_1 + 0x220) = uVar2;
  FUN_1404ef47c();
  FUN_1404ef47c(*(undefined8 *)(param_1 + 0x220));
  FUN_1404ef47c(param_1 + 0x28);
  return;
}



// FUNCTION 145c13e7c FUN_145c13e7c body=663 status=ok
// SIG undefined FUN_145c13e7c(void)

void FUN_145c13e7c(void)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  undefined *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca81218);
  local_58 = 0x100000000;
  local_50 = &DAT_14ca81250;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar2 = 0;
  if (DAT_14ca81268 != 0) {
    FUN_1449c0562(&local_58);
    iVar2 = DAT_14ca81268;
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = &DAT_14ca81240;
  if ((iStack_44 != iVar2) || (local_50 != &DAT_14ca81250)) {
    do {
      if (*(longlong *)(*local_80 + 0x30 + (longlong)iStack_64 * 0x40) != 0) {
        plVar3 = (longlong *)(*local_80 + (longlong)iStack_64 * 0x40 + 0x30);
        FUN_1431e4a06();
        puVar1 = (undefined8 *)*plVar3;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        *plVar3 = 0;
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar2) || (local_70 != &DAT_14ca81250)) || (local_80 != &DAT_14ca81240))
    ;
  }
  local_58 = 0x100000000;
  local_50 = &DAT_14ca812a0;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar2 = 0;
  if (DAT_14ca812b8 != 0) {
    FUN_1449c0562(&local_58);
    iVar2 = DAT_14ca812b8;
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = &DAT_14ca81290;
  if ((iStack_44 != iVar2) || (local_50 != &DAT_14ca812a0)) {
    do {
      if (*(longlong *)(*local_80 + 0x30 + (longlong)iStack_64 * 0x40) != 0) {
        plVar3 = (longlong *)(*local_80 + (longlong)iStack_64 * 0x40 + 0x30);
        FUN_1431e4a06();
        puVar1 = (undefined8 *)*plVar3;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        *plVar3 = 0;
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar2) || (local_70 != &DAT_14ca812a0)) || (local_80 != &DAT_14ca81290))
    ;
  }
  FUN_145c14114(&DAT_14ca81240);
  FUN_145c14114(&DAT_14ca81290);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca81218);
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c14114 FUN_145c14114 body=68 status=ok
// SIG undefined FUN_145c14114(void)

void FUN_145c14114(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14740cb40();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140b7ce44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145c14158 FUN_145c14158 body=1026 status=ok
// SIG undefined FUN_145c14158(void)

void FUN_145c14158(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong local_f0;
  longlong *plStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((longlong)(int)param_1[0x4d] != 0) {
    plVar12 = (longlong *)param_1[0x4c];
    local_f8 = plVar12 + (int)param_1[0x4d];
    do {
      plVar8 = (longlong *)*plVar12;
      plStack_e8 = plVar8 + 2;
      local_f0 = 0x100000000;
      local_e0 = 0xffffffff;
      local_d8 = local_d8 & 0xffffffff00000000;
      if ((int)plVar8[5] != 0) {
        FUN_1449c0562(&local_f0);
      }
      local_78 = local_e0;
      uVar4 = local_78;
      local_70 = (undefined4)local_d8;
      local_6c = local_d8._4_4_;
      local_88 = local_f0;
      local_80 = plStack_e8;
      local_58 = 0;
      local_78._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
      bVar3 = local_78._4_4_ < (int)plStack_e8[3];
      iVar6 = local_78._4_4_;
      local_90 = plVar8;
      local_78 = uVar4;
      local_68 = plVar8;
      local_60 = plVar8;
      if (bVar3) {
        do {
          lVar9 = *local_90 + (longlong)iVar6 * 0x68;
          puVar1 = (undefined8 *)(*local_90 + (longlong)iVar6 * 0x68);
          plVar10 = puVar1 + 0xb;
          plVar8 = (longlong *)param_1[0x41];
          iVar6 = FUN_145711cec(plVar8,(int)((ulonglong)puVar1[2] >> 0x20) * 0x17 + (int)puVar1[2] ^
                                       (int)((ulonglong)puVar1[1] >> 0x20) * 0x17 + (int)puVar1[1] ^
                                       (int)((ulonglong)*puVar1 >> 0x20) * 0x17 + (int)*puVar1,lVar9
                               );
          if ((iVar6 == -1) ||
             (lVar7 = (longlong)iVar6 * 0x68 + *plVar8, plVar8 = (longlong *)(lVar7 + 0x58),
             plVar8 == (longlong *)0x0 || lVar7 == 0)) {
            FUN_14740fc2e(param_1[0x42],lVar9);
            local_f0 = lVar9;
            plStack_e8 = plVar10;
            FUN_14740f640(param_1[0x41],local_4c,&local_f0,0);
            FUN_14740f91a(&local_f0,lVar9);
            local_98 = *(undefined8 *)(lVar9 + 0x58);
            iVar6 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar6 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
              FUN_14740fcf4(param_1,iVar6);
            }
            lVar9 = *param_1;
            lVar7 = (longlong)iVar6 * 0x60;
            *(undefined8 *)(lVar9 + 0x10 + lVar7) = local_e0;
            *(longlong *)(lVar9 + lVar7) = local_f0;
            ((longlong *)(lVar9 + lVar7))[1] = (longlong)plStack_e8;
            *(ulonglong *)(lVar9 + 0x18 + lVar7) = local_d8;
            local_d8 = 0;
            *(undefined8 *)(lVar9 + 0x20 + lVar7) = local_d0;
            *(undefined8 *)(lVar9 + 0x28 + lVar7) = 0;
            *(undefined8 *)(lVar9 + 0x28 + lVar7) = local_c8;
            local_c8 = 0;
            *(undefined4 *)(lVar9 + 0x30 + lVar7) = (undefined4)local_c0;
            *(undefined4 *)(lVar9 + 0x34 + lVar7) = local_c0._4_4_;
            local_c0 = 0;
            puVar2 = (undefined4 *)(lVar9 + 0x38 + lVar7);
            *puVar2 = local_b8;
            puVar2[1] = uStack_b4;
            puVar2[2] = uStack_b0;
            puVar2[3] = uStack_ac;
            *(undefined8 *)(lVar9 + 0x48 + lVar7) = 0;
            *(undefined8 *)(lVar9 + 0x48 + lVar7) = local_a8;
            local_a8 = 0;
            *(undefined4 *)(lVar9 + 0x50 + lVar7) = (undefined4)local_a0;
            *(undefined4 *)(lVar9 + 0x54 + lVar7) = local_a0._4_4_;
            local_a0 = 0;
            *(undefined8 *)(lVar9 + 0x58 + lVar7) = local_98;
            FUN_145711c9a(&local_f0);
          }
          else if (*plVar8 != *plVar10) {
            *(int *)((longlong)param_1 + 0x2ac) = *(int *)((longlong)param_1 + 0x2ac) + 1;
            iVar6 = (int)param_1[0x46];
            *(uint *)(param_1 + 0x46) = iVar6 + 1U;
            if (*(uint *)((longlong)param_1 + 0x234) < iVar6 + 1U) {
              FUN_14740f546(param_1 + 0x45,iVar6);
            }
            *(longlong *)(param_1[0x45] + (longlong)iVar6 * 8) = *plVar10;
          }
          FUN_145711ff2(local_68,local_78._4_4_);
          local_58 = CONCAT11(local_58._1_1_,1);
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar6 = local_78._4_4_;
        } while (local_78._4_4_ < (int)local_80[3]);
        if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
          FUN_14740f9f0(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != local_f8);
  }
  uVar11 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar11) {
    lVar9 = uVar11 * 0x60 + -8;
    do {
      cVar5 = FUN_1402ce39e(*(undefined8 *)(*param_1 + lVar9));
      if (cVar5 != '\0') {
        FUN_1402ce13e(*(undefined8 *)(*param_1 + lVar9));
        FUN_14740fdbc(param_1,(int)uVar11 + -1);
      }
      lVar9 = lVar9 + -0x60;
      bVar3 = 1 < uVar11;
      uVar11 = uVar11 - 1;
    } while (bVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c1455c FUN_145c1455c body=25 status=ok
// SIG undefined FUN_145c1455c(void)

undefined8 FUN_145c1455c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145c14576 FUN_145c14576 body=538 status=ok
// SIG undefined FUN_145c14576(void)

void FUN_145c14576(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_218 [40];
  longlong *local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0 [88];
  undefined1 local_188;
  longlong *local_130;
  undefined8 uStack_128;
  longlong local_110;
  undefined4 local_108;
  float local_104;
  float local_f8;
  undefined1 local_f0 [40];
  longlong *local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b4;
  longlong *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_141073488(local_1e0);
  local_188 = 3;
  if (*param_2 != 0) {
    FUN_1412e3d1e(&local_1f0);
    local_130 = local_1f0;
    uStack_128 = uStack_1e8;
    local_110 = *param_2;
    local_108 = (undefined4)param_2[1];
    local_104 = (float)*(int *)((longlong)param_2 + 0xc);
    local_f8 = (float)(int)param_2[2] / 100.0;
    FUN_1447715ec(local_f0,param_2 + 3);
    lVar4 = FUN_14060eaf6(local_f0);
    plVar5 = local_c8;
    if (lVar4 != 0) {
      plVar1 = (longlong *)
               (*(longlong *)(DAT_14cb86da8 + 0x370) + (ulonglong)*(ushort *)(lVar4 + 0x53a) * 0x18)
      ;
      plVar2 = (longlong *)*plVar1;
      if (local_c8 != plVar2) {
        local_c8 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      local_c0 = (undefined4)plVar1[1];
    }
    local_b8 = (undefined1)param_2[8];
    local_b4 = *(undefined8 *)((longlong)param_2 + 0x44);
    lVar4 = FUN_140e045c8();
    plVar5 = local_a8;
    if (lVar4 != 0) {
      plVar1 = *(longlong **)(lVar4 + 0x28);
      if (local_a8 != plVar1) {
        local_a8 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      local_a0 = *(undefined4 *)(lVar4 + 0x30);
    }
    FUN_1447715ec(local_98,param_2 + 10);
    cVar3 = FUN_144a7c5f6(&local_a8);
    if ((cVar3 != '\0') && (DAT_14cb8df08 != 0)) {
      plVar5 = (longlong *)FUN_144837462(DAT_14cb8df08,local_98);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_1f0);
        FUN_140008f88(&local_a8,&local_1f0);
        if (local_1f0 != (longlong *)0x0) {
          (**(code **)(*local_1f0 + 0x10))();
        }
      }
    }
  }
  FUN_145c14792(*(longlong *)(param_1 + 0x168) + 0x518,local_1e0);
  FUN_141072d6a(local_1e0);
  if ((local_28 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c14792 FUN_145c14792 body=162 status=ok
// SIG undefined FUN_145c14792(void)

void FUN_145c14792(longlong *param_1,undefined8 param_2)

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
        goto LAB_145c1481f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145c1481f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145c14834 FUN_145c14834 body=35 status=ok
// SIG undefined FUN_145c14834(void)

void FUN_145c14834(longlong *param_1)

{
  (**(code **)(*param_1 + 0x348))(param_1,0,0);
  FUN_145c14858(param_1);
  return;
}



// FUNCTION 145c14858 FUN_145c14858 body=117 status=ok
// SIG undefined FUN_145c14858(void)

void FUN_145c14858(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    puVar2 = local_30;
    FUN_140349be2(param_1,local_30);
    lVar1 = FUN_144a8ad80(local_30);
    uVar4 = (undefined7)((ulonglong)puVar2 >> 8);
    if (lVar1 == 0) {
      uVar3 = CONCAT71(uVar4,1);
    }
    else {
      uVar3 = CONCAT71(uVar4,*(undefined1 *)(lVar1 + 0x30)) ^ 1;
    }
    FUN_14057a3b2(*(undefined8 *)(param_1 + 0x140),uVar3,uVar3 & 0xffffffff,uVar3 & 0xffffffff);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c148ce FUN_145c148ce body=199 status=ok
// SIG undefined FUN_145c148ce(void)

void FUN_145c148ce(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140349be2(param_1,local_48);
  if (local_48[0] != 0) {
    FUN_144830e52(param_1 + 200,local_48,param_2);
    FUN_144830e52(param_1 + 0x100,local_48,param_2);
    if ((longlong)*(int *)(param_1 + 0x150) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x148);
      lVar2 = (longlong)*(int *)(param_1 + 0x150) * 0xa8;
      do {
        FUN_144830e52(lVar1,local_48,param_2);
        lVar1 = lVar1 + 0xa8;
        lVar2 = lVar2 + -0xa8;
      } while (lVar2 != 0);
    }
  }
  FUN_140349a5c(param_1,param_2,0);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c14996 FUN_145c14996 body=40 status=ok
// SIG undefined FUN_145c14996(void)

undefined8 FUN_145c14996(undefined8 param_1,int param_2)

{
  FUN_145c149be();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c149be FUN_145c149be body=169 status=ok
// SIG undefined FUN_145c149be(void)

void FUN_145c149be(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd28a00;
  param_1[5] = &PTR_FUN_14bd28cd0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  FUN_145c14a9a(param_1 + 0x3d);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_145c14ad0(param_1 + 0x33);
  FUN_145c14a67(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_145a4964c(param_1);
  return;
}



// FUNCTION 145c14a67 FUN_145c14a67 body=50 status=ok
// SIG undefined FUN_145c14a67(void)

void FUN_145c14a67(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x50);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c14a9a FUN_145c14a9a body=53 status=ok
// SIG undefined FUN_145c14a9a(void)

void FUN_145c14a9a(longlong *param_1)

{
  FUN_145c14b06();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c14ad0 FUN_145c14ad0 body=53 status=ok
// SIG undefined FUN_145c14ad0(void)

void FUN_145c14ad0(longlong *param_1)

{
  FUN_145c14b60();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c14b06 FUN_145c14b06 body=90 status=ok
// SIG undefined FUN_145c14b06(void)

void FUN_145c14b06(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
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



// FUNCTION 145c14b60 FUN_145c14b60 body=90 status=ok
// SIG undefined FUN_145c14b60(void)

void FUN_145c14b60(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14074f60a(param_1,0);
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



// FUNCTION 145c14bc0 FUN_145c14bc0 body=86 status=ok
// SIG undefined FUN_145c14bc0(void)

void FUN_145c14bc0(void)

{
  if (DAT_14caa88d8 != 0) {
    FUN_14480f766(&DAT_14cb10868);
  }
  if (DAT_14caa88e0 != 0) {
    FUN_14480f766(&DAT_14cad0f38);
  }
  if (DAT_14caa88e8 != 0) {
    FUN_14480f766(&DAT_14cad0f50);
    return;
  }
  return;
}



// FUNCTION 145c14c1c FUN_145c14c1c body=86 status=ok
// SIG undefined FUN_145c14c1c(void)

void FUN_145c14c1c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140ea0e34(puVar1,param_1);
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  *(undefined1 *)(puVar1 + 0x2f) = 0;
  *puVar1 = &PTR_FUN_14a5169d0;
  puVar1[5] = &PTR_FUN_14a516cf0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  *(undefined1 *)(puVar1 + 0x30) = 1;
  FUN_140e2f50a(puVar1,4);
  return;
}



// FUNCTION 145c14c7e FUN_145c14c7e body=80 status=ok
// SIG undefined FUN_145c14c7e(void)

undefined8 * FUN_145c14c7e(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6624c0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 145c14cda FUN_145c14cda body=80 status=ok
// SIG undefined FUN_145c14cda(void)

undefined8 * FUN_145c14cda(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6656c0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 145c14d36 FUN_145c14d36 body=80 status=ok
// SIG undefined FUN_145c14d36(void)

undefined8 * FUN_145c14d36(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a679370;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 145c14d92 FUN_145c14d92 body=80 status=ok
// SIG undefined FUN_145c14d92(void)

undefined8 * FUN_145c14d92(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a68e8b0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 145c14dee FUN_145c14dee body=80 status=ok
// SIG undefined FUN_145c14dee(void)

undefined8 * FUN_145c14dee(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6a41d0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 145c14e4a FUN_145c14e4a body=80 status=ok
// SIG undefined FUN_145c14e4a(void)

undefined8 * FUN_145c14e4a(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6a7870;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 145c14ea6 FUN_145c14ea6 body=80 status=ok
// SIG undefined FUN_145c14ea6(void)

undefined8 * FUN_145c14ea6(undefined8 *param_1)

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
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_14a6a5030;
  return param_1;
}


