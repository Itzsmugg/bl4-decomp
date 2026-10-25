// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146018468 FUN_146018468 body=283 status=ok
// SIG undefined FUN_146018468(void)

undefined4 * FUN_146018468(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1413235ac(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  FUN_1413f55b8(0,0);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_1413234f6(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_141323792(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146018584 FUN_146018584 body=747 status=ok
// SIG undefined FUN_146018584(void)

undefined8 * FUN_146018584(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_LAB_14a157ce0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = 0;
  puVar4[4] = 0;
  param_1[0x3b] = puVar4;
  param_1[0x3a] = puVar4;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 2;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x44] = 2;
  uVar5 = FUN_1405d8a54(0);
  param_1[0xe] = uVar5;
  uVar5 = FUN_1401cb356();
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  local_58 = 3;
  *local_60 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_60[2] = lVar6;
  *local_60 = &PTR_FUN_14a158510;
  local_60[3] = param_1;
  local_60[4] = &LAB_14006f33e;
  local_68 = 0;
  FUN_1405f67fc(uVar5,&local_50,&local_60,L"FMessageTracer_Tick");
  if (param_1 + 0x38 != &local_50) {
    param_1[0x38] = local_50;
    local_50 = 0;
    plVar2 = (longlong *)param_1[0x39];
    param_1[0x39] = local_48;
    local_48 = (longlong *)0x0;
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
  if (local_48 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  FUN_1449db362(&local_60);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146018878 FUN_146018878 body=781 status=ok
// SIG undefined FUN_146018878(void)

undefined8 * FUN_146018878(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400841f8();
  FUN_1409e1656(param_1 + 5);
  *param_1 = &PTR_FUN_14b4ff700;
  param_1[5] = &PTR_FUN_14b4ff9a0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x200000000;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 2;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x200000000;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x173) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 1;
  *(undefined2 *)((longlong)param_1 + 0x17e) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x52] = 0;
  FUN_1400b22c2(param_1 + 0x54,&DAT_14b4ff9f0);
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    if (DAT_14c98e618 != 0) {
      uVar1 = (**(code **)(**(longlong **)(DAT_14c98e618 + 0x720) + 8))();
      *(undefined4 *)(param_1 + 0x2f) = uVar1;
    }
    plVar2 = (longlong *)FUN_1459d8286();
    lVar4 = plVar2[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar4 = plVar2[0x22];
    }
    *(undefined1 *)((longlong)param_1 + 0x17d) = *(undefined1 *)(lVar4 + 0x3c);
    local_40 = FUN_1461d2414;
    local_38 = 0;
    FUN_146018c86(local_30,param_1,&local_40);
    local_40 = FUN_1461293a4;
    local_38 = 0;
    FUN_146018d80(local_30,param_1,&local_40);
    if (*(char *)(lVar4 + 0x3d) == '\x01') {
      plVar2 = (longlong *)FUN_1414dac37();
      uVar3 = (**(code **)(*plVar2 + 0x98))(plVar2);
      local_40 = FUN_146172a7c;
      local_38 = 0;
      FUN_146018b86(uVar3,local_30,param_1,&local_40);
      plVar2 = (longlong *)FUN_1414dac37();
      uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2);
      local_40 = FUN_146172a2a;
      local_38 = 0;
      FUN_146018b86(uVar3,local_30,param_1,&local_40);
    }
    *(undefined1 *)((longlong)param_1 + 0x17e) = *(undefined1 *)(lVar4 + 0x3e);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146018b86 FUN_146018b86 body=254 status=ok
// SIG undefined FUN_146018b86(void)

undefined8
FUN_146018b86(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b504900;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146018c86 FUN_146018c86 body=248 status=ok
// SIG undefined FUN_146018c86(void)

undefined8 FUN_146018c86(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_149e063e0;
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
  *local_40 = &PTR_FUN_14b504820;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14134bd86(&DAT_14c964278,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146018d80 FUN_146018d80 body=248 status=ok
// SIG undefined FUN_146018d80(void)

undefined8 FUN_146018d80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a1e1a40;
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
  *local_40 = &PTR_FUN_14b504890;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146018e94 FUN_146018e94 body=162 status=ok
// SIG undefined FUN_146018e94(void)

void FUN_146018e94(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146018ed3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146018ed3;
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
LAB_146018ed3:
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
                    /* WARNING: Could not recover jumptable at 0x000146018f32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146018f36 FUN_146018f36 body=188 status=ok
// SIG undefined FUN_146018f36(void)

void FUN_146018f36(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146018ff4 FUN_146018ff4 body=241 status=ok
// SIG undefined FUN_146018ff4(void)

undefined8 * FUN_146018ff4(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4c1a40;
  param_1[0x1b] = &PTR_FUN_14a4c1a88;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460190e6 FUN_1460190e6 body=278 status=ok
// SIG undefined FUN_1460190e6(void)

undefined * FUN_1460190e6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1d780) {
    FUN_144b3d300(&DAT_14ca1d780);
    if (DAT_14ca1d780 == -1) {
      FUN_1460191fe(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"PathTracingCloudParameters";
      local_78 = L"FPathTracingCloudParameterGlobals";
      local_50 = 0x70;
      local_58 = 0x439;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1d700,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e70a24);
      _Init_thread_footer(&DAT_14ca1d780);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca1d700;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460191fe FUN_1460191fe body=232 status=ok
// SIG undefined FUN_1460191fe(void)

longlong * FUN_1460191fe(longlong *param_1)

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
  pcVar12 = FUN_145d388bc;
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



// FUNCTION 1460192ec FUN_1460192ec body=278 status=ok
// SIG undefined FUN_1460192ec(void)

undefined * FUN_1460192ec(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa73d8) {
    FUN_144b3d300(&DAT_14caa73d8);
    if (DAT_14caa73d8 == -1) {
      FUN_146019404(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"LandscapeMVF";
      local_78 = L"FLandscapeVertexFactoryMVFParameters";
      local_50 = 0x10;
      local_58 = 0x81;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa7358,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143267d85);
      _Init_thread_footer(&DAT_14caa73d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caa7358;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146019404 FUN_146019404 body=232 status=ok
// SIG undefined FUN_146019404(void)

longlong * FUN_146019404(longlong *param_1)

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
  pcVar12 = FUN_146326454;
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



// FUNCTION 1460194f2 FUN_1460194f2 body=284 status=ok
// SIG undefined FUN_1460194f2(void)

void FUN_1460194f2(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0x47];
  param_1[0x46] = lVar2;
  param_1[0x47] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_1460196a4(param_1 + 0x2c,&local_28);
  lVar2 = param_1[0x42];
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
    UNLOCK();
  }
  FUN_146019648(lVar2,&local_38);
  if (((param_1[0x46] == 0) || (param_1[0x47] == 0)) || (*(int *)(param_1[0x47] + 8) < 1)) {
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  (**(code **)(*param_1 + 0x78))(param_1);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 0xc);
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



// FUNCTION 146019620 FUN_146019620 body=39 status=ok
// SIG undefined FUN_146019620(void)

void FUN_146019620(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
                    /* WARNING: Could not recover jumptable at 0x000146019640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  return;
}



// FUNCTION 146019648 FUN_146019648 body=92 status=ok
// SIG undefined FUN_146019648(void)

void FUN_146019648(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(longlong *)(param_1 + 0x18) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001460196a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1460196a4 FUN_1460196a4 body=101 status=ok
// SIG undefined FUN_1460196a4(void)

void FUN_1460196a4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(longlong *)(param_1 + 0xa8) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146019705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14601970a FUN_14601970a body=618 status=ok
// SIG undefined FUN_14601970a(void)

void FUN_14601970a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
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
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  plVar1 = (longlong *)(param_1 + 0x10);
  lVar2 = param_1 + 0x20;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x38);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar6 = (longlong)iStack_74;
      lVar4 = *(longlong *)(lVar3 + 8 + lVar6 * 0x20);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
        FUN_140886972();
        plVar5 = *(longlong **)(*(longlong *)(lVar3 + lVar6 * 0x20 + 8) + 0x20);
        (**(code **)(*plVar5 + 0x40))(plVar5,1);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar7) || (CONCAT44(uStack_7c,uStack_80) != lVar2)) ||
            (local_90 != plVar1));
  }
  FUN_146019976(plVar1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  plVar1 = (longlong *)(param_1 + 0xb0);
  lVar2 = param_1 + 0xc0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0xd8) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0xd8);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      do {
        plVar5 = *(longlong **)(*local_90 + 0x78 + (longlong)iStack_74 * 0x88);
        (**(code **)(*plVar5 + 0x40))(plVar5,1);
        local_78 = local_78 & ~uStack_84;
        FUN_1449c0562(&local_88);
      } while (iStack_74 != iVar7);
    } while ((CONCAT44(uStack_7c,uStack_80) != lVar2) || (local_90 != plVar1));
  }
  FUN_1460199b6(plVar1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  FUN_1415bba3a(param_1 + 0x160);
  FUN_1415bb5ee(*(undefined8 *)(param_1 + 0x210));
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146019976 FUN_146019976 body=63 status=ok
// SIG undefined FUN_146019976(void)

void FUN_146019976(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145cbf6c4(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140ba9d5a(param_1);
    return;
  }
  FUN_1489d5db4(param_1);
  FUN_145cbf6c4(param_1);
  return;
}



// FUNCTION 1460199b6 FUN_1460199b6 body=63 status=ok
// SIG undefined FUN_1460199b6(void)

void FUN_1460199b6(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145cbf57e(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1415bb810(param_1);
    return;
  }
  FUN_1489d5ef8(param_1);
  FUN_145cbf57e(param_1);
  return;
}



// FUNCTION 1460199f6 FUN_1460199f6 body=126 status=ok
// SIG undefined FUN_1460199f6(void)

void FUN_1460199f6(longlong *param_1,longlong *param_2)

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
    FUN_146019a74(param_1,iVar1);
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



// FUNCTION 146019a74 FUN_146019a74 body=132 status=ok
// SIG undefined FUN_146019a74(void)

void FUN_146019a74(longlong param_1,int param_2)

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



// FUNCTION 146019b04 FUN_146019b04 body=246 status=ok
// SIG undefined FUN_146019b04(void)

undefined8 * FUN_146019b04(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4cf110;
  param_1[8] = 0;
  param_1[9] = 0;
  lVar2 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar2 + 0xd8);
  *(undefined1 *)((longlong)param_1 + 0x32) = 0x2c;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_20 = FUN_145920b2e();
    if (local_20 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_20);
    }
    local_28 = param_1[2];
    if ((local_28 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_28,&local_20);
    lVar2 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar2 + 0x54);
    local_30 = param_1[2];
    if ((local_30 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_30,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146019bfc FUN_146019bfc body=40 status=ok
// SIG undefined FUN_146019bfc(void)

undefined8 FUN_146019bfc(undefined8 param_1,int param_2)

{
  FUN_146019c24();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146019c24 FUN_146019c24 body=218 status=ok
// SIG undefined FUN_146019c24(void)

void FUN_146019c24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad117b0;
  param_1[5] = &PTR_FUN_14ad11a50;
  param_1[6] = &PTR_FUN_14ad11a90;
  param_1[7] = &PTR_FUN_14ad11ab0;
  param_1[8] = &PTR_FUN_14ad11ac0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 146019cfe FUN_146019cfe body=205 status=ok
// SIG undefined FUN_146019cfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146019cfe(void)

{
  if ((DAT_14cb32d17 & 2) == 0) {
    DAT_14cb32d17 = DAT_14cb32d17 | 2;
    _DAT_14cb32cb8 = L"FNiagaraDataInterfaceParamRef";
    _DAT_14cb32cd0 = FUN_146826540;
    _DAT_14cb32cd8 = FUN_146825d77;
    _DAT_14cb32ce0 = FUN_146825fd6;
    _DAT_14cb32ce8 = FUN_1407e02ea;
    _DAT_14cb32cf0 = FUN_146826273;
    _DAT_14cb32cc8 = FUN_14804e932;
    _DAT_14cb32d08 = 0xffffffff00000018;
    _DAT_14cb32d10 = 8;
    DAT_14cb32d14 = 0;
    _DAT_14cb32cf8 = &LAB_14804e968;
    FUN_146019dcc();
    FUN_1407e00cc(&DAT_14cb32cb0);
    return;
  }
  return;
}



// FUNCTION 146019dcc FUN_146019dcc body=276 status=ok
// SIG undefined FUN_146019dcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146019dcc(void)

{
  FUN_146019ee0();
  _DAT_14cb341b8 = L"ShaderParametersOffset";
  DAT_14cb341e2 = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14cb341c0 = &DAT_14c87e638;
  _DAT_14cb341d0 = &LAB_14682652b;
  _DAT_14cb341d8 = 0x100000000;
  _DAT_14cb341e0 = 0;
  _DAT_14cb341c8 = DAT_14cb32cc0;
  DAT_14cb32cc0 = &DAT_14cb341b8;
  return;
}



// FUNCTION 146019ee0 FUN_146019ee0 body=121 status=ok
// SIG undefined FUN_146019ee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146019ee0(void)

{
  FUN_146019ffc();
  _DAT_14cb341e8 = L"DIType";
  DAT_14cb34212 = FUN_140850cc5();
  _DAT_14cb341f0 = FUN_146019f5a();
  _DAT_14cb34200 = &LAB_14682652b;
  _DAT_14cb34208 = &DAT_100000008;
  _DAT_14cb34210 = 0;
  _DAT_14cb341f8 = DAT_14cb32cc0;
  DAT_14cb32cc0 = &DAT_14cb341e8;
  return;
}



// FUNCTION 146019f5a FUN_146019f5a body=162 status=ok
// SIG undefined FUN_146019f5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146019f5a(void)

{
  if ((DAT_14cb2be37 & 2) == 0) {
    DAT_14cb2be37 = DAT_14cb2be37 | 3;
    _DAT_14cb2bdd8 = L"TIndexedPtr<UNiagaraDataInterfaceBase>";
    _DAT_14cb2bdf0 = &LAB_148042426;
    _DAT_14cb2bdf8 = FUN_1480424c8;
    _DAT_14cb2be00 = &LAB_1480424ec;
    _DAT_14cb2be08 = &LAB_1480424fa;
    _DAT_14cb2be10 = &LAB_148042508;
    _DAT_14cb2bde8 = &LAB_14804250e;
    _DAT_14cb2be28 = 0x800000008;
    _DAT_14cb2be30 = 8;
    DAT_14cb2be34 = 0;
  }
  return &DAT_14cb2bdd0;
}



// FUNCTION 146019ffc FUN_146019ffc body=268 status=ok
// SIG undefined FUN_146019ffc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146019ffc(void)

{
  _DAT_14cb34218 = L"Parameters";
  DAT_14cb34242 = FUN_140850cc5();
  if ((DAT_14cb342af & 2) == 0) {
    DAT_14cb342af = DAT_14cb342af | 3;
    _DAT_14cb34250 = L"TMemoryImagePtr<T>";
    _DAT_14cb34268 = &LAB_148054484;
    _DAT_14cb34270 = FUN_14805448a;
    _DAT_14cb34278 = &LAB_1480544a0;
    _DAT_14cb34280 = &LAB_1480544ae;
    _DAT_14cb34288 = &LAB_1480544bc;
    _DAT_14cb34260 = &LAB_1480544c8;
    _DAT_14cb342a0 = 0x800000008;
    _DAT_14cb342a8 = 8;
    DAT_14cb342ac = 0;
  }
  _DAT_14cb34220 = &DAT_14cb34248;
  _DAT_14cb34230 = &LAB_148054476;
  _DAT_14cb34238 = &DAT_100000010;
  DAT_14cb34240 = 0;
  _DAT_14cb34228 = DAT_14cb32cc0;
  DAT_14cb32cc0 = &DAT_14cb34218;
  return;
}



// FUNCTION 14601a108 FUN_14601a108 body=67 status=ok
// SIG undefined FUN_14601a108(void)

void FUN_14601a108(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x178);
  FUN_14601a14c(param_2);
  *param_2 = &PTR_FUN_14b1b1a90;
  FUN_14044066a(param_2 + 0x28,0x11,7);
  return;
}



// FUNCTION 14601a14c FUN_14601a14c body=191 status=ok
// SIG undefined FUN_14601a14c(void)

undefined8 * FUN_14601a14c(undefined8 *param_1)

{
  FUN_1410df32e();
  *param_1 = &PTR_FUN_14b1b1b80;
  FUN_14044066a(param_1 + 0x10,0x11,7);
  param_1[0x17] = DAT_14cb72628;
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 4;
  *(undefined4 *)(param_1 + 0x1a) = 0x40000000;
  *(undefined1 *)(param_1 + 0x1e) = 3;
  *(char *)(param_1 + 0x1f) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined4 *)(param_1 + 0x21) = 0x41200000;
  *(undefined1 *)(param_1 + 0x25) = 3;
  *(char *)(param_1 + 0x26) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 14601a20c FUN_14601a20c body=25 status=ok
// SIG undefined FUN_14601a20c(void)

undefined8 FUN_14601a20c(undefined8 param_1,undefined8 param_2)

{
  FUN_14601a226(param_2);
  return param_2;
}



// FUNCTION 14601a226 FUN_14601a226 body=361 status=ok
// SIG undefined FUN_14601a226(void)

undefined8 * FUN_14601a226(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb8cb10 == (longlong *)0x0 || DAT_14cb8cb18 == 0) ||
     (cVar3 = (**(code **)(*DAT_14cb8cb10 + 0x30))(), cVar3 == '\0')) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    puVar4[10] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_14b42ffa0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    *(undefined1 *)(puVar4 + 10) = 0;
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b42ffc0;
    plVar5[2] = (longlong)puVar4;
    local_28 = plVar5;
    if (puVar4 == (undefined8 *)0x0) {
      local_30 = (undefined8 *)0x0;
    }
    else {
      local_30 = puVar4;
      if (plVar5 == (longlong *)0x0) {
        puVar4[2] = puVar4;
        local_28 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        puVar4[2] = puVar4;
        if ((longlong *)puVar4[3] != plVar5) {
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          plVar2 = (longlong *)puVar4[3];
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))();
            }
          }
          puVar4[3] = plVar5;
        }
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
    }
  }
  else {
    plVar5 = DAT_14cb8cb10;
    if (DAT_14cb8cb18 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,&local_30);
  }
  *param_1 = local_30;
  param_1[1] = local_28;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14601a390 FUN_14601a390 body=287 status=ok
// SIG undefined FUN_14601a390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14601a390(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9de7e8) {
    FUN_144b3d300(&DAT_14c9de7e8);
    if (DAT_14c9de7e8 == -1) {
      FUN_14601a4b0();
      FUN_140db5666(&DAT_14c9de740,2,&DAT_14c9de6d8,L"FRenderExistenceMaskWithLiveShadingCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesAmbientOcclusionPipeline.usf"
                    ,L"RenderExistenceMaskWithLiveShadingCS",5,1,FUN_14719ac44,FUN_14719ac1c,
                    &LAB_142c975c4,&LAB_14719ac18,&LAB_14712ac0c,&LAB_14712ac08,0x110,0);
      _DAT_14c9de740 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142c97618);
      _Init_thread_footer(&DAT_14c9de7e8);
    }
  }
  return &DAT_14c9de740;
}



// FUNCTION 14601a4b0 FUN_14601a4b0 body=320 status=ok
// SIG undefined FUN_14601a4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14601a4b0(void)

{
  if ((DAT_14c9de73f & 2) == 0) {
    DAT_14c9de73f = DAT_14c9de73f | 2;
    _DAT_14c9de6e0 = L"FRenderExistenceMaskWithLiveShadingCS";
    _DAT_14c9de6f8 = FUN_146826540;
    _DAT_14c9de700 = FUN_146825d77;
    _DAT_14c9de708 = FUN_146825fd6;
    _DAT_14c9de710 = FUN_1407e02ea;
    _DAT_14c9de718 = FUN_146826273;
    _DAT_14c9de6f0 = FUN_14719abde;
    _DAT_14c9de730 = 0xffffffff00000110;
    _DAT_14c9de738 = 8;
    DAT_14c9de73c = 0;
    _DAT_14c9de720 = &LAB_14719ac14;
    _DAT_14c9e0740 = L"ShaderLooseBindings";
    DAT_14c9e076a = FUN_140850cc5();
    FUN_14601a66c();
    _DAT_14c9e0748 = &DAT_14c9de668;
    _DAT_14c9e0758 = &LAB_14682652b;
    _DAT_14c9e0760 = &DAT_100000108;
    _DAT_14c9e0768 = 0;
    _DAT_14c9e0750 = DAT_14c9de6e8;
    DAT_14c9de6e8 = &DAT_14c9e0740;
    FUN_14601a5f0();
    FUN_1407e00cc(&DAT_14c9de6d8);
    return;
  }
  return;
}



// FUNCTION 14601a5f0 FUN_14601a5f0 body=123 status=ok
// SIG undefined FUN_14601a5f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14601a5f0(void)

{
  _DAT_14c9e18d0 = L"BASE";
  DAT_14c9e18fa = 4;
  _DAT_14c9e18d8 = FUN_141092e92();
  _DAT_14c9e18e0 = DAT_14c9de6e8;
  _DAT_14c9e18e8 = &LAB_14682652b;
  DAT_14c9de6e8 = &DAT_14c9e18d0;
  DAT_14c9de73d = DAT_14c9de73d + '\x01';
  _DAT_14c9e18f0 = 0x100000000;
  if (*(char *)(_DAT_14c9e18d8 + 100) != '\0') {
    DAT_14c9de73e = DAT_14c9de73e + '\x01';
  }
  return;
}



// FUNCTION 14601a66c FUN_14601a66c body=303 status=ok
// SIG undefined FUN_14601a66c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14601a66c(void)

{
  if ((DAT_14c9de6cf & 2) != 0) {
    return;
  }
  DAT_14c9de6cf = DAT_14c9de6cf | 2;
  _DAT_14c9de670 = L"FRenderAmbientOcclusionLooseBindings";
  _DAT_14c9de688 = FUN_146826540;
  _DAT_14c9de690 = FUN_146825d77;
  _DAT_14c9de698 = FUN_146825fd6;
  _DAT_14c9de6a0 = FUN_1407e02ea;
  _DAT_14c9de6a8 = FUN_146826273;
  _DAT_14c9de680 = &LAB_14719abd2;
  _DAT_14c9de6c0 = 0xffffffff00000004;
  _DAT_14c9de6c8 = 2;
  DAT_14c9de6cc = 0;
  _DAT_14c9de6b0 = &LAB_14719abda;
  _DAT_14c9e0710 = L"SceneDepthTextureBinding";
  DAT_14c9e073a = FUN_140850cc5();
  _DAT_14c9e0718 = FUN_140fb78d0();
  _DAT_14c9e0728 = &LAB_14682652b;
  _DAT_14c9e0730 = 0x100000000;
  _DAT_14c9e0738 = 0;
  _DAT_14c9e0720 = DAT_14c9de678;
  DAT_14c9de678 = &DAT_14c9e0710;
  FUN_1407e00cc(&DAT_14c9de668);
  return;
}



// FUNCTION 14601a7a6 FUN_14601a7a6 body=311 status=ok
// SIG undefined FUN_14601a7a6(void)

undefined8 * FUN_14601a7a6(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140553f06();
  *param_1 = &PTR_FUN_14a476ed0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x8000000000;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_20 = param_1[2];
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_28 = FUN_1459e4118();
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_28);
    }
    FUN_140909372(&local_28,&local_20);
    lVar2 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar2 + 0x4a);
    local_30 = param_1[2];
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_30,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601a8de FUN_14601a8de body=11243 status=ok
// SIG undefined FUN_14601a8de(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14601a8de(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_5f78 [32];
  undefined *local_5f58;
  undefined ***local_5f50;
  undefined8 *local_5f48;
  undefined8 local_5f40;
  undefined **local_5f38;
  undefined **local_5f30 [2];
  undefined8 local_5f20;
  undefined **local_5f18;
  undefined **local_5f10;
  undefined **local_5f08;
  undefined1 *puStack_5f00;
  longlong local_5ef8;
  longlong local_5ef0;
  longlong local_5ee8;
  longlong local_5ee0;
  undefined8 local_5ed8;
  undefined8 local_5ed0;
  undefined8 local_5ec8;
  undefined8 local_5ec0;
  undefined8 local_5eb8;
  undefined8 local_5eb0;
  undefined8 local_5ea8;
  undefined8 local_5ea0;
  undefined1 *local_5e98;
  undefined1 *puStack_5e90;
  undefined **local_5e88;
  undefined1 *puStack_5e80;
  longlong *local_5de8;
  undefined8 local_5dd0;
  undefined1 *local_5dc8;
  undefined1 *puStack_5dc0;
  undefined1 *local_5db8;
  undefined1 *puStack_5db0;
  undefined **local_5da8 [20];
  longlong *local_5d08;
  undefined1 *local_5cf8;
  undefined1 *puStack_5cf0;
  undefined1 *local_5ce8;
  undefined1 *puStack_5ce0;
  undefined **local_5cd8 [20];
  longlong *local_5c38;
  undefined1 *local_5c28;
  undefined1 *puStack_5c20;
  undefined1 *local_5c18;
  undefined1 *puStack_5c10;
  undefined **local_5c08 [20];
  longlong *local_5b68;
  undefined **local_5b58 [20];
  longlong *local_5ab8;
  undefined **local_5aa8 [20];
  longlong *local_5a08;
  undefined **local_59f8 [20];
  longlong *local_5958;
  undefined **local_5948;
  undefined8 uStack_5940;
  longlong *plStack_58a8;
  undefined1 *local_5890;
  undefined1 *puStack_5888;
  undefined8 local_5880;
  undefined8 local_5878;
  undefined8 local_5870;
  undefined8 local_5868;
  undefined1 local_585c [20];
  undefined8 local_5848;
  undefined1 local_583c [20];
  undefined **local_5828 [2];
  undefined **local_5818;
  undefined4 local_5810;
  undefined4 uStack_580c;
  undefined4 uStack_5808;
  undefined4 uStack_5804;
  uint local_5800;
  undefined4 local_57fc;
  undefined8 local_57f8;
  undefined8 local_57f0;
  undefined8 uStack_57e8;
  longlong local_57e0;
  undefined8 auStack_57d8 [4];
  undefined1 uStack_57b8;
  undefined7 uStack_57b7;
  undefined1 uStack_57b0;
  undefined8 uStack_57af;
  undefined4 local_57a4;
  undefined2 local_57a0;
  undefined **local_5798;
  undefined **local_5790;
  uint local_5788;
  byte local_5784;
  undefined8 local_5780;
  longlong *plStack_5778;
  undefined8 local_5770;
  undefined **local_5768;
  undefined4 local_5760;
  undefined4 uStack_575c;
  undefined4 uStack_5758;
  undefined4 uStack_5754;
  uint local_5750;
  undefined4 uStack_574c;
  undefined8 uStack_5748;
  undefined8 local_5740;
  undefined8 uStack_5738;
  longlong local_5730;
  undefined8 auStack_5728 [4];
  undefined1 uStack_5708;
  undefined7 uStack_5707;
  undefined1 uStack_5700;
  undefined8 uStack_56ff;
  undefined4 local_56f4;
  undefined2 local_56f0;
  undefined **local_56e8;
  undefined **local_56e0;
  uint local_56d8;
  byte local_56d4;
  undefined8 local_56d0;
  longlong lStack_56c8;
  undefined8 local_56c0;
  undefined1 local_56b8 [176];
  undefined1 local_5608 [176];
  undefined1 local_5558 [176];
  undefined1 local_54a8 [16];
  undefined1 local_5498 [160];
  undefined1 local_53f8 [16];
  undefined1 local_53e8 [160];
  undefined1 local_5348 [16];
  undefined1 local_5338 [160];
  undefined1 local_5298 [16];
  undefined1 local_5288 [176];
  undefined1 local_51d8 [176];
  undefined1 local_5128 [176];
  undefined8 local_5078;
  undefined8 uStack_5070;
  undefined4 local_5068;
  undefined4 local_5064;
  undefined4 uStack_5060;
  undefined4 uStack_505c;
  undefined4 uStack_5058;
  undefined4 local_5054;
  undefined1 local_5048 [176];
  undefined1 local_4f98 [176];
  undefined1 local_4ee8 [176];
  undefined1 local_4e38 [176];
  undefined1 local_4d88 [512];
  undefined1 local_4b88 [176];
  undefined1 local_4ad8 [176];
  undefined4 local_4a28;
  undefined1 local_4a18 [176];
  undefined4 local_4968;
  undefined4 uStack_4964;
  undefined4 uStack_4960;
  undefined4 uStack_495c;
  undefined4 local_4958;
  undefined1 local_4948 [176];
  undefined4 local_4898;
  undefined **local_4888 [2];
  undefined **local_4878;
  undefined4 local_4870;
  undefined4 uStack_486c;
  undefined4 uStack_4868;
  undefined4 uStack_4864;
  uint local_4860;
  undefined4 uStack_485c;
  undefined4 uStack_4858;
  undefined4 uStack_4854;
  undefined4 local_4850;
  undefined4 uStack_484c;
  undefined4 uStack_4848;
  undefined4 uStack_4844;
  longlong local_4840;
  undefined8 local_4838 [10];
  uint local_47e8;
  undefined4 uStack_47e4;
  undefined8 local_47e0;
  longlong local_47d8;
  undefined8 local_47d0;
  undefined **local_47c8;
  undefined4 local_47c0;
  undefined4 uStack_47bc;
  undefined4 uStack_47b8;
  undefined4 uStack_47b4;
  uint local_47b0;
  undefined4 uStack_47ac;
  undefined4 uStack_47a8;
  undefined4 uStack_47a4;
  undefined4 local_47a0;
  undefined4 uStack_479c;
  undefined4 uStack_4798;
  undefined4 uStack_4794;
  longlong local_4790;
  undefined8 local_4788 [10];
  uint local_4738;
  byte local_4734;
  undefined8 local_4730;
  longlong local_4728;
  undefined8 local_4720;
  undefined **local_4718;
  undefined8 uStack_4710;
  longlong *local_4678;
  undefined **local_40d8 [20];
  longlong *local_4038;
  undefined **local_3a98 [20];
  longlong *local_39f8;
  undefined **local_2f48 [20];
  longlong *local_2ea8;
  undefined **local_23f8 [20];
  longlong *local_2358;
  undefined **local_18a8 [20];
  longlong *local_1808;
  undefined **local_d58 [20];
  longlong *local_cb8;
  undefined **local_208 [2];
  undefined **local_1f8;
  longlong *local_158;
  undefined **local_148 [2];
  undefined **local_138;
  longlong *local_98;
  ulonglong local_80;
  undefined8 uStack_48;
  
  uStack_48 = 0x14601a8f4;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_5f78;
  plVar3 = (longlong *)*param_1;
  FUN_1446ddc76(&local_5848,"SelectionColor",1);
  local_5f50 = (undefined ***)0x0;
  local_5f58 = &DAT_14c98de74;
  (**(code **)(*plVar3 + 0x40))(plVar3,local_583c,local_5848,0);
  plVar3 = (longlong *)*param_1;
  FUN_1446ddc76(&local_5868,"SelectorColor",1);
  local_5f50 = (undefined ***)0x0;
  local_5f58 = &DAT_14c98de74;
  (**(code **)(*plVar3 + 0x40))(plVar3,local_585c,local_5868,0);
  FUN_141266cde(local_148);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_5870,"ListView",1);
  FUN_1415bc29c(uVar4,local_5870,local_148);
  uVar4 = *param_1;
  local_5f48 = param_1;
  FUN_141266cde(local_5828);
  local_18a8[0] = DAT_14c84635c;
  FUN_1412ce202(local_d58);
  FUN_140f13d9e(&local_5818,local_d58);
  FUN_1446ddc76(&local_5878,"SimpleListView",1);
  FUN_1415bc29c(uVar4,local_5878,local_5828);
  local_d58[0] = &PTR_FUN_149ed05f0;
  if (local_cb8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_cb8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_cb8)(local_cb8);
      LOCK();
      piVar2 = (int *)((longlong)local_cb8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_cb8 + 0x10))(local_cb8);
      }
    }
  }
  local_5828[0] = &PTR_FUN_149eeb4b0;
  local_5818 = &PTR_FUN_149ed05f0;
  if (plStack_5778 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_5778 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_5778)(plStack_5778);
      LOCK();
      piVar2 = (int *)((longlong)plStack_5778 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_5778 + 0x10))(plStack_5778);
      }
    }
  }
  FUN_141266cde(local_208);
  puVar5 = local_5f48;
  uVar4 = *local_5f48;
  FUN_1446ddc76(&local_5880,"TreeView",1);
  FUN_1415bc29c(uVar4,local_5880,local_208);
  FUN_1457c724e(local_5828);
  FUN_1411bc404(local_18a8,&DAT_14c98dc14);
  FUN_140f13d9e(local_5288,local_18a8);
  FUN_1411bc404(local_23f8,&DAT_14c98dd04);
  FUN_140f13d9e(local_5338,local_23f8);
  FUN_1411bc404(local_2f48,&DAT_14c98dc14);
  FUN_140f13d9e(local_5128,local_2f48);
  FUN_1411bc404(local_3a98,&DAT_14c98dd04);
  FUN_140f13d9e(local_51d8,local_3a98);
  local_5e88 = (undefined **)0x3e8000003e800000;
  puStack_5e80 = (undefined1 *)0x3e8000003e800000;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5890,"Common/Selector",&DAT_149eca162);
  local_5f58._0_4_ = 1;
  FUN_14601d578(local_40d8,&local_5890,&local_5e88,local_585c);
  FUN_140f13d9e(&local_5818,local_40d8);
  FUN_1411bc404(&local_4718,&DAT_14c98dcc8);
  FUN_140f13d9e(local_56b8,&local_4718);
  FUN_1411bc404(local_4888,&DAT_14c98dcc8);
  FUN_140f13d9e(&local_5768,local_4888);
  FUN_1411bc404(&local_5948,&DAT_14c98dcdc);
  FUN_140f13d9e(local_5558,&local_5948);
  FUN_1411bc404(local_59f8,&DAT_14c98dcdc);
  FUN_140f13d9e(local_5608,local_59f8);
  FUN_1411bc404(local_5aa8,&DAT_14c98dcf0);
  FUN_140f13d9e(local_4e38,local_5aa8);
  FUN_1411bc404(local_5b58,&DAT_14c98dcf0);
  FUN_140f13d9e(local_4d88,local_5b58);
  local_5078 = CONCAT44(uRam000000014c98dac4,_DAT_14c98dac0);
  uStack_5070 = CONCAT44(uRam000000014c98dacc,uRam000000014c98dac8);
  local_5068 = DAT_14c98dad0;
  local_5064 = _DAT_14c98db38;
  uStack_5060 = uRam000000014c98db3c;
  uStack_505c = uRam000000014c98db40;
  uStack_5058 = uRam000000014c98db44;
  local_5054 = DAT_14c98db48;
  local_5c18 = (undefined1 *)0x3f2000003f200000;
  puStack_5c10 = (undefined1 *)0x0;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5c28,"Common/DropZoneIndicator_Above",&DAT_149eca162);
  local_5f58._0_4_ = 1;
  FUN_141478850(local_5c08,&local_5c28,&local_5c18,local_583c);
  FUN_140f13d9e(local_5048,local_5c08);
  local_5ce8 = (undefined1 *)0x3e8000003e800000;
  puStack_5ce0 = (undefined1 *)0x3e8000003e800000;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5cf8,"Common/DropZoneIndicator_Onto",&DAT_149eca162);
  local_5f58._0_4_ = 1;
  FUN_141478850(local_5cd8,&local_5cf8,&local_5ce8,local_583c);
  FUN_140f13d9e(local_4f98,local_5cd8);
  local_5db8 = (undefined1 *)0x3f200000;
  puStack_5db0 = (undefined1 *)0x3f20000000000000;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5dc8,"Common/DropZoneIndicator_Below",&DAT_149eca162);
  local_5f58 = (undefined *)CONCAT44(local_5f58._4_4_,1);
  FUN_141478850(local_5da8,&local_5dc8,&local_5db8,local_583c);
  FUN_140f13d9e(local_4ee8,local_5da8);
  FUN_1415bc658(local_d58,local_5828);
  plVar3 = local_5d08;
  local_5da8[0] = &PTR_FUN_149ed05f0;
  if (local_5d08 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5d08 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5d08)(local_5d08);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5dc8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_5c38;
  local_5cd8[0] = &PTR_FUN_149ed05f0;
  if (local_5c38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5c38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5c38)(local_5c38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5cf8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_5b68;
  local_5c08[0] = &PTR_FUN_149ed05f0;
  if (local_5b68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5b68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5b68)(local_5b68);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5c28 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_5ab8;
  local_5b58[0] = &PTR_FUN_149ed05f0;
  if (local_5ab8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5ab8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5ab8)(local_5ab8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_5a08;
  local_5aa8[0] = &PTR_FUN_149ed05f0;
  if (local_5a08 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5a08 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5a08)(local_5a08);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_5958;
  local_59f8[0] = &PTR_FUN_149ed05f0;
  if (local_5958 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5958 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5958)(local_5958);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_58a8;
  local_5948 = &PTR_FUN_149ed05f0;
  if (plStack_58a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_58a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_58a8)(plStack_58a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_4888[0] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)CONCAT44(uStack_47e4,local_47e8);
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
  plVar3 = local_4678;
  local_4718 = &PTR_FUN_149ed05f0;
  if (local_4678 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4678 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4678)(local_4678);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_4038;
  local_40d8[0] = &PTR_FUN_149ed05f0;
  if (local_4038 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4038 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4038)(local_4038);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5890 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_39f8;
  local_3a98[0] = &PTR_FUN_149ed05f0;
  if (local_39f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_39f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_39f8)(local_39f8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_2ea8;
  local_2f48[0] = &PTR_FUN_149ed05f0;
  if (local_2ea8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2ea8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2ea8)(local_2ea8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_2358;
  local_23f8[0] = &PTR_FUN_149ed05f0;
  if (local_2358 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2358 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2358)(local_2358);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_18a8[0] = &PTR_FUN_149ed05f0;
  if (local_1808 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1808 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1808)(local_1808);
      LOCK();
      piVar2 = (int *)((longlong)local_1808 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1808 + 0x10))(local_1808);
      }
    }
  }
  FUN_1415bbd66(local_5828);
  puVar5 = local_5f48;
  uVar4 = *local_5f48;
  FUN_1446ddc76(&local_5dd0,"TableView.Row",1);
  FUN_1415bc19a(uVar4,local_5dd0,local_d58);
  FUN_1457c724e(local_5828);
  local_5f08 = DAT_14c84635c;
  FUN_1412ce202(local_23f8);
  FUN_140f13d9e(local_5288,local_23f8);
  FUN_1411bc404(local_2f48,&DAT_14c98dd04);
  FUN_140f13d9e(local_5338,local_2f48);
  local_5f30[0] = DAT_14c84635c;
  FUN_1412ce202(local_3a98);
  FUN_140f13d9e(local_5128,local_3a98);
  FUN_1411bc404(local_40d8,&DAT_14c98dd04);
  FUN_140f13d9e(local_51d8,local_40d8);
  local_5890 = (undefined1 *)0x3e8000003e800000;
  puStack_5888 = (undefined1 *)0x3e8000003e800000;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5c18,"Common/Selector",&DAT_149eca162);
  local_5f58._0_4_ = 1;
  FUN_14601d578(&local_4718,&local_5c18,&local_5890,local_585c);
  FUN_140f13d9e(&local_5818,&local_4718);
  FUN_1411bc404(local_4888,&DAT_14c98dcc8);
  FUN_140f13d9e(local_56b8,local_4888);
  FUN_1411bc404(&local_5948,&DAT_14c98dcc8);
  FUN_140f13d9e(&local_5768,&local_5948);
  FUN_1411bc404(local_59f8,&DAT_14c98dcdc);
  FUN_140f13d9e(local_5558,local_59f8);
  FUN_1411bc404(local_5aa8,&DAT_14c98dcdc);
  FUN_140f13d9e(local_5608,local_5aa8);
  FUN_1411bc404(local_5b58,&DAT_14c98dcf0);
  FUN_140f13d9e(local_4e38,local_5b58);
  FUN_1411bc404(local_5c08,&DAT_14c98dcf0);
  FUN_140f13d9e(local_4d88,local_5c08);
  local_5078 = CONCAT44(uRam000000014c98dac4,_DAT_14c98dac0);
  uStack_5070 = CONCAT44(uRam000000014c98dacc,uRam000000014c98dac8);
  local_5068 = DAT_14c98dad0;
  local_5064 = _DAT_14c98dad4;
  uStack_5060 = uRam000000014c98dad8;
  uStack_505c = uRam000000014c98dadc;
  uStack_5058 = uRam000000014c98dae0;
  local_5054 = DAT_14c98dae4;
  local_5c28 = (undefined1 *)0x3f2000003f200000;
  puStack_5c20 = (undefined1 *)0x0;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5ce8,"Common/DropZoneIndicator_Above",&DAT_149eca162);
  local_5f58._0_4_ = 1;
  FUN_141478850(local_5cd8,&local_5ce8,&local_5c28,local_583c);
  FUN_140f13d9e(local_5048,local_5cd8);
  local_5cf8 = (undefined1 *)0x3e8000003e800000;
  puStack_5cf0 = (undefined1 *)0x3e8000003e800000;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5db8,"Common/DropZoneIndicator_Onto",&DAT_149eca162);
  local_5f58._0_4_ = 1;
  FUN_141478850(local_5da8,&local_5db8,&local_5cf8,local_583c);
  FUN_140f13d9e(local_4f98,local_5da8);
  local_5dc8 = (undefined1 *)0x3f200000;
  puStack_5dc0 = (undefined1 *)0x3f20000000000000;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5e98,"Common/DropZoneIndicator_Below",&DAT_149eca162);
  local_5f58 = (undefined *)CONCAT44(local_5f58._4_4_,1);
  FUN_141478850(&local_5e88,&local_5e98,&local_5dc8,local_583c);
  FUN_140f13d9e(local_4ee8,&local_5e88);
  FUN_1415bc658(local_18a8,local_5828);
  plVar3 = local_5de8;
  local_5e88 = &PTR_FUN_149ed05f0;
  if (local_5de8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5de8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5de8)(local_5de8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5e98 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_5d08;
  local_5da8[0] = &PTR_FUN_149ed05f0;
  if (local_5d08 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5d08 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5d08)(local_5d08);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5db8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_5c38;
  local_5cd8[0] = &PTR_FUN_149ed05f0;
  if (local_5c38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5c38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5c38)(local_5c38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5ce8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_5b68;
  local_5c08[0] = &PTR_FUN_149ed05f0;
  if (local_5b68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5b68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5b68)(local_5b68);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_5ab8;
  local_5b58[0] = &PTR_FUN_149ed05f0;
  if (local_5ab8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5ab8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5ab8)(local_5ab8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_5a08;
  local_5aa8[0] = &PTR_FUN_149ed05f0;
  if (local_5a08 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5a08 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5a08)(local_5a08);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_5958;
  local_59f8[0] = &PTR_FUN_149ed05f0;
  if (local_5958 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5958 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5958)(local_5958);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_58a8;
  local_5948 = &PTR_FUN_149ed05f0;
  if (plStack_58a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_58a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_58a8)(plStack_58a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_4888[0] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)CONCAT44(uStack_47e4,local_47e8);
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
  plVar3 = local_4678;
  local_4718 = &PTR_FUN_149ed05f0;
  if (local_4678 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4678 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4678)(local_4678);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5c18 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_4038;
  local_40d8[0] = &PTR_FUN_149ed05f0;
  if (local_4038 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4038 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4038)(local_4038);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_39f8;
  local_3a98[0] = &PTR_FUN_149ed05f0;
  if (local_39f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_39f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_39f8)(local_39f8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_2ea8;
  local_2f48[0] = &PTR_FUN_149ed05f0;
  if (local_2ea8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2ea8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2ea8)(local_2ea8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_23f8[0] = &PTR_FUN_149ed05f0;
  if (local_2358 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2358 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2358)(local_2358);
      LOCK();
      piVar2 = (int *)((longlong)local_2358 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2358 + 0x10))(local_2358);
      }
    }
  }
  FUN_1415bbd66(local_5828);
  uVar4 = *local_5f48;
  FUN_1446ddc76(&local_5ea0,"SimpleTableView.Row",1);
  FUN_1415bc19a(uVar4,local_5ea0,local_18a8);
  FUN_1415bc658(local_5828,local_d58);
  local_54a8[0] = 1;
  local_40d8[0] = DAT_14c84635c;
  local_5f50 = local_40d8;
  local_5f58 = (undefined *)CONCAT44(local_5f58._4_4_,0x3f800000);
  FUN_1414fd764(local_2f48,&DAT_14c98dc78,0x40000000,&DAT_14c98db24);
  FUN_140f13d9e(local_5498,local_2f48);
  local_4718 = DAT_14c84635c;
  FUN_14154bc0c(local_3a98,&DAT_14c98dd04,0x40000000);
  FUN_140f13d9e(local_53e8,local_3a98);
  FUN_1415bc658(local_23f8,local_5828);
  plVar3 = local_39f8;
  local_3a98[0] = &PTR_FUN_149ed05f0;
  if (local_39f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_39f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_39f8)(local_39f8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_2f48[0] = &PTR_FUN_149ed05f0;
  if (local_2ea8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2ea8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2ea8)(local_2ea8);
      LOCK();
      piVar2 = (int *)((longlong)local_2ea8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2ea8 + 0x10))(local_2ea8);
      }
    }
  }
  FUN_1415bbd66(local_5828);
  puVar5 = local_5f48;
  uVar4 = *local_5f48;
  FUN_1446ddc76(&local_5ea8,"ShowParentsTableView.Row",1);
  FUN_1415bc19a(uVar4,local_5ea8,local_23f8);
  FUN_1415bc658(local_5828,local_d58);
  local_4718 = (undefined **)0x0;
  uStack_4710 = 0x3dcccccd00000000;
  local_5aa8[0] = DAT_14c967f9c;
  plVar3 = (longlong *)*puVar5;
  (**(code **)(*plVar3 + 0xe8))(plVar3,local_4888,"Common/Selection",&DAT_149eca162);
  local_5f50._0_4_ = 1;
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14140806a(local_3a98,local_4888,local_5aa8,&local_4718);
  FUN_140f13d9e(local_5288,local_3a98);
  local_5948 = (undefined **)0x0;
  uStack_5940 = 0x3dcccccd00000000;
  local_5b58[0] = DAT_14c967f9c;
  plVar3 = (longlong *)*puVar5;
  (**(code **)(*plVar3 + 0xe8))(plVar3,local_59f8,"Common/Selection",&DAT_149eca162);
  local_5f50 = (undefined ***)CONCAT44(local_5f50._4_4_,1);
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14140806a(local_40d8,local_59f8,local_5b58,&local_5948);
  FUN_140f13d9e(local_5128,local_40d8);
  FUN_1415bc658(local_2f48,local_5828);
  plVar3 = local_4038;
  local_40d8[0] = &PTR_FUN_149ed05f0;
  if (local_4038 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4038 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4038)(local_4038);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_59f8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_3a98[0] = &PTR_FUN_149ed05f0;
  if (local_39f8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_39f8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_39f8)(local_39f8);
      LOCK();
      piVar2 = (int *)((longlong)local_39f8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_39f8 + 0x10))(local_39f8);
      }
    }
  }
  if (local_4888[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_1415bbd66(local_5828);
  uVar4 = *local_5f48;
  FUN_1446ddc76(&local_5eb0,"TableView.DarkRow",1);
  FUN_1415bc19a(uVar4,local_5eb0,local_2f48);
  FUN_1415bc658(local_5828,local_d58);
  FUN_1411bc404(local_40d8,&DAT_14c98dc14);
  FUN_140f13d9e(local_5288,local_40d8);
  FUN_1411bc404(&local_4718,&DAT_14c98dc50);
  FUN_140f13d9e(local_5128,&local_4718);
  FUN_1415bc658(local_3a98,local_5828);
  plVar3 = local_4678;
  local_4718 = &PTR_FUN_149ed05f0;
  if (local_4678 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4678 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4678)(local_4678);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_40d8[0] = &PTR_FUN_149ed05f0;
  if (local_4038 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_4038 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_4038)(local_4038);
      LOCK();
      piVar2 = (int *)((longlong)local_4038 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_4038 + 0x10))(local_4038);
      }
    }
  }
  FUN_1415bbd66(local_5828);
  puVar5 = local_5f48;
  uVar4 = *local_5f48;
  FUN_1446ddc76(&local_5eb8,"TableView.AlternatingRow",1);
  FUN_1415bc19a(uVar4,local_5eb8,local_3a98);
  plVar3 = (longlong *)*puVar5;
  puVar5 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  local_40d8[0] = DAT_14c967fc4;
  (**(code **)(*plVar3 + 0xe8))(plVar3,local_5828,"Starship/Common/caret-right",L".svg");
  local_5f50 = (undefined ***)CONCAT44(local_5f50._4_4_,3);
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14154bb44(puVar5,local_5828,local_40d8,&DAT_14c98dac0);
  *puVar5 = &PTR_FUN_149eeb468;
  FUN_1446ddc76(&local_5ec0,"TreeArrow_Collapsed",1);
  FUN_1415bbd06(plVar3,local_5ec0,puVar5);
  if (local_5828[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*local_5f48;
  puVar5 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  local_40d8[0] = DAT_14c967fc4;
  (**(code **)(*plVar3 + 0xe8))(plVar3,local_5828,"Starship/Common/caret-right",L".svg");
  local_5f50 = (undefined ***)CONCAT44(local_5f50._4_4_,3);
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14154bb44(puVar5,local_5828,local_40d8,&DAT_14c98db38);
  *puVar5 = &PTR_FUN_149eeb468;
  FUN_1446ddc76(&local_5ec8,"TreeArrow_Collapsed_Hovered",1);
  FUN_1415bbd06(plVar3,local_5ec8,puVar5);
  if (local_5828[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*local_5f48;
  puVar5 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  local_40d8[0] = DAT_14c967fc4;
  (**(code **)(*plVar3 + 0xe8))(plVar3,local_5828,"Starship/Common/caret-down",L".svg");
  local_5f50 = (undefined ***)CONCAT44(local_5f50._4_4_,3);
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14154bb44(puVar5,local_5828,local_40d8,&DAT_14c98dac0);
  *puVar5 = &PTR_FUN_149eeb468;
  FUN_1446ddc76(&local_5ed0,"TreeArrow_Expanded",1);
  FUN_1415bbd06(plVar3,local_5ed0,puVar5);
  if (local_5828[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*local_5f48;
  puVar5 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  local_40d8[0] = DAT_14c967fc4;
  (**(code **)(*plVar3 + 0xe8))(plVar3,local_5828,"Starship/Common/caret-down",L".svg");
  local_5f50 = (undefined ***)CONCAT44(local_5f50._4_4_,3);
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14154bb44(puVar5,local_5828,local_40d8,&DAT_14c98db38);
  *puVar5 = &PTR_FUN_149eeb468;
  FUN_1446ddc76(&local_5ed8,"TreeArrow_Expanded_Hovered",1);
  FUN_1415bbd06(plVar3,local_5ed8,puVar5);
  if (local_5828[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_14601d812(local_5828);
  puVar5 = local_5f48;
  local_5e88 = (undefined **)&DAT_3f8000003f800000;
  puStack_5e80 = &DAT_3f8000003f800000;
  local_5f30[0] = DAT_14c967fac;
  (**(code **)(*(longlong *)*local_5f48 + 0xe8))
            ((longlong *)*local_5f48,&local_5890,"Starship/CoreWidgets/TableView/sort-up-arrow",
             L".svg");
  local_5f50._0_4_ = 3;
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14140806a(&local_4718,&local_5890,local_5f30,&local_5e88);
  local_4718 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_5818,&local_4718);
  local_5c18 = &DAT_3f8000003f800000;
  puStack_5c10 = &DAT_3f8000003f800000;
  local_5ee0 = (longlong)DAT_14c967fac;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5c28,"Starship/CoreWidgets/TableView/sort-down-arrow",
             L".svg");
  local_5f50._0_4_ = 3;
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14140806a(local_4888,&local_5c28,&local_5ee0,&local_5c18);
  local_4888[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_5768,local_4888);
  local_5ce8 = &DAT_3f8000003f800000;
  puStack_5ce0 = &DAT_3f8000003f800000;
  local_5ee8 = (longlong)DAT_14c967fac;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5cf8,"Starship/CoreWidgets/TableView/sort-up-arrows",L".svg"
            );
  local_5f50._0_4_ = 3;
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14140806a(&local_5948,&local_5cf8,&local_5ee8,&local_5ce8);
  local_5948 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_56b8,&local_5948);
  local_5db8 = &DAT_3f8000003f800000;
  puStack_5db0 = &DAT_3f8000003f800000;
  local_5ef0 = (longlong)DAT_14c967fac;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5dc8,"Starship/CoreWidgets/TableView/sort-down-arrows",
             L".svg");
  local_5f50._0_4_ = 3;
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14140806a(local_59f8,&local_5dc8,&local_5ef0,&local_5db8);
  local_59f8[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_5608,local_59f8);
  FUN_1411bc404(local_5aa8,&DAT_14c98dc78);
  FUN_140f13d9e(local_5558,local_5aa8);
  FUN_1411bc404(local_5b58,&DAT_14c98dbc4);
  FUN_140f13d9e(local_54a8,local_5b58);
  local_5e98 = &DAT_3f8000003f800000;
  puStack_5e90 = &DAT_3f8000003f800000;
  local_5ef8 = 0x41c0000040c00000;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5f08,"Starship/Common/ellipsis-vertical-narrow",L".svg");
  local_5f50 = (undefined ***)CONCAT44(local_5f50._4_4_,3);
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14140806a(local_5c08,&local_5f08,&local_5ef8,&local_5e98);
  local_5c08[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_53f8,local_5c08);
  local_5f10 = DAT_14c84635c;
  FUN_1412ce202(local_5cd8);
  FUN_140f13d9e(local_5348,local_5cd8);
  local_5f18 = DAT_14c84635c;
  FUN_1412ce202(local_5da8);
  FUN_140f13d9e(local_5298,local_5da8);
  FUN_1457b6a3e(local_40d8,local_5828);
  plVar3 = local_5d08;
  local_5da8[0] = &PTR_FUN_149ed05f0;
  if (local_5d08 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5d08 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5d08)(local_5d08);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_5c38;
  local_5cd8[0] = &PTR_FUN_149ed05f0;
  if (local_5c38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5c38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5c38)(local_5c38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_5b68;
  local_5c08[0] = &PTR_FUN_149ed05f0;
  if (local_5b68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5b68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5b68)(local_5b68);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5f08 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_5ab8;
  local_5b58[0] = &PTR_FUN_149ed05f0;
  if (local_5ab8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5ab8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5ab8)(local_5ab8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_5a08;
  local_5aa8[0] = &PTR_FUN_149ed05f0;
  if (local_5a08 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5a08 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5a08)(local_5a08);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_5958;
  local_59f8[0] = &PTR_FUN_149ed05f0;
  if (local_5958 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5958 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5958)(local_5958);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5dc8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_58a8;
  local_5948 = &PTR_FUN_149ed05f0;
  if (plStack_58a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_58a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_58a8)(plStack_58a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5cf8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_4888[0] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)CONCAT44(uStack_47e4,local_47e8);
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
  if (local_5c28 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_4718 = &PTR_FUN_149ed05f0;
  if (local_4678 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_4678 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_4678)(local_4678);
      LOCK();
      piVar2 = (int *)((longlong)local_4678 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_4678 + 0x10))(local_4678);
      }
    }
  }
  if (local_5890 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1414034a0(local_5828);
  puVar5 = local_5f48;
  uVar4 = *local_5f48;
  FUN_1446ddc76(&local_5f20,"TableView.Header.Column",1);
  FUN_1415bc454(uVar4,local_5f20,local_40d8);
  FUN_14601d812(local_5828);
  local_5890 = &DAT_3f8000003f800000;
  puStack_5888 = &DAT_3f8000003f800000;
  local_5ee0 = (longlong)DAT_14c967fac;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5c18,"Starship/CoreWidgets/TableView/sort-up-arrow",L".svg")
  ;
  local_5f50._0_4_ = 3;
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14140806a(local_4888,&local_5c18,&local_5ee0,&local_5890);
  local_4888[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_5818,local_4888);
  local_5c28 = &DAT_3f8000003f800000;
  puStack_5c20 = &DAT_3f8000003f800000;
  local_5ee8 = (longlong)DAT_14c967fac;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5ce8,"Starship/CoreWidgets/TableView/sort-down-arrow",
             L".svg");
  local_5f50._0_4_ = 3;
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14140806a(&local_5948,&local_5ce8,&local_5ee8,&local_5c28);
  local_5948 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_5768,&local_5948);
  local_5cf8 = &DAT_3f8000003f800000;
  puStack_5cf0 = &DAT_3f8000003f800000;
  local_5ef0 = (longlong)DAT_14c967fac;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5db8,"Starship/CoreWidgets/TableView/sort-up-arrows",L".svg"
            );
  local_5f50._0_4_ = 3;
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14140806a(local_59f8,&local_5db8,&local_5ef0,&local_5cf8);
  local_59f8[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_56b8,local_59f8);
  local_5dc8 = &DAT_3f8000003f800000;
  puStack_5dc0 = &DAT_3f8000003f800000;
  local_5ef8 = (longlong)DAT_14c967fac;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,&local_5e98,"Starship/CoreWidgets/TableView/sort-down-arrows",
             L".svg");
  local_5f50._0_4_ = 3;
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14140806a(local_5aa8,&local_5e98,&local_5ef8,&local_5dc8);
  local_5aa8[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_5608,local_5aa8);
  FUN_1411bc404(local_5b58,&DAT_14c98dc78);
  FUN_140f13d9e(local_5558,local_5b58);
  FUN_1411bc404(local_5c08,&DAT_14c98dbc4);
  FUN_140f13d9e(local_54a8,local_5c08);
  local_5f08 = (undefined **)&DAT_3f8000003f800000;
  puStack_5f00 = &DAT_3f8000003f800000;
  local_5f10 = (undefined **)0x41c0000040c00000;
  (**(code **)(*(longlong *)*puVar5 + 0xe8))
            ((longlong *)*puVar5,local_5f30,"Starship/Common/ellipsis-vertical-narrow",L".svg");
  local_5f50 = (undefined ***)CONCAT44(local_5f50._4_4_,3);
  local_5f58 = (undefined *)((ulonglong)local_5f58 & 0xffffffff00000000);
  FUN_14140806a(local_5cd8,local_5f30,&local_5f10,&local_5f08);
  local_5cd8[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_53f8,local_5cd8);
  local_5f18 = DAT_14c84635c;
  FUN_1412ce202(local_5da8);
  FUN_140f13d9e(local_5348,local_5da8);
  local_5f38 = DAT_14c84635c;
  FUN_1412ce202(&local_5e88);
  FUN_140f13d9e(local_5298,&local_5e88);
  FUN_1457b6a3e(&local_4718,local_5828);
  local_5e88 = &PTR_FUN_149ed05f0;
  if (local_5de8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5de8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5de8)(local_5de8);
      LOCK();
      piVar2 = (int *)((longlong)local_5de8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_5de8 + 0x10))(local_5de8);
      }
    }
  }
  local_5da8[0] = &PTR_FUN_149ed05f0;
  if (local_5d08 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5d08 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5d08)(local_5d08);
      LOCK();
      piVar2 = (int *)((longlong)local_5d08 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_5d08 + 0x10))(local_5d08);
      }
    }
  }
  local_5cd8[0] = &PTR_FUN_149ed05f0;
  if (local_5c38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5c38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5c38)(local_5c38);
      LOCK();
      piVar2 = (int *)((longlong)local_5c38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_5c38 + 0x10))(local_5c38);
      }
    }
  }
  if (local_5f30[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_5c08[0] = &PTR_FUN_149ed05f0;
  if (local_5b68 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5b68 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5b68)(local_5b68);
      LOCK();
      piVar2 = (int *)((longlong)local_5b68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_5b68 + 0x10))(local_5b68);
      }
    }
  }
  local_5b58[0] = &PTR_FUN_149ed05f0;
  if (local_5ab8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5ab8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5ab8)(local_5ab8);
      LOCK();
      piVar2 = (int *)((longlong)local_5ab8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_5ab8 + 0x10))(local_5ab8);
      }
    }
  }
  local_5aa8[0] = &PTR_FUN_149ed05f0;
  if (local_5a08 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5a08 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5a08)(local_5a08);
      LOCK();
      piVar2 = (int *)((longlong)local_5a08 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_5a08 + 0x10))(local_5a08);
      }
    }
  }
  if (local_5e98 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_5958;
  local_59f8[0] = &PTR_FUN_149ed05f0;
  if (local_5958 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5958 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5958)(local_5958);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5db8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_58a8;
  local_5948 = &PTR_FUN_149ed05f0;
  if (plStack_58a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_58a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_58a8)(plStack_58a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5ce8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_4888[0] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)CONCAT44(uStack_47e4,local_47e8);
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
  if (local_5c18 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1414034a0(local_5828);
  local_5828[0] = &PTR_FUN_149eeb510;
  local_5818 = &PTR_FUN_149ed05f0;
  local_5810 = 0x3f800000;
  uStack_580c = 0x3f800000;
  uStack_5808 = 0x3f800000;
  uStack_5804 = 0x3f800000;
  local_5800 = local_5800 & 0xffffff00;
  local_57fc = 3;
  local_57f8 = 0x4200000042000000;
  local_57a4 = 0;
  local_57f0 = 0;
  uStack_57e8 = 0;
  local_57e0 = 0;
  auStack_57d8[0] = 0;
  auStack_57d8[1] = 0;
  auStack_57d8[2] = 0;
  auStack_57d8[3] = 0;
  uStack_57b8 = 0;
  uStack_57b7 = 0;
  uStack_57b0 = 0;
  uStack_57af = 0;
  local_57a0 = 1;
  local_5790 = DAT_14c84635c;
  local_5798 = DAT_14c84635c;
  local_5788 = local_5788 & 0xffffff00;
  local_5784 = local_5784 & 0xf8 | 4;
  local_5780 = 0;
  plStack_5778 = (longlong *)0x0;
  local_5770 = 0;
  local_5768 = &PTR_FUN_149ed05f0;
  local_5760 = 0x3f800000;
  uStack_575c = 0x3f800000;
  uStack_5758 = 0x3f800000;
  uStack_5754 = 0x3f800000;
  local_5750 = local_5750 & 0xffffff00;
  uStack_574c = 3;
  uStack_5748 = 0x4200000042000000;
  local_56f4 = 0;
  local_5740 = 0;
  uStack_5738 = 0;
  local_5730 = 0;
  auStack_5728[0] = 0;
  auStack_5728[1] = 0;
  auStack_5728[2] = 0;
  auStack_5728[3] = 0;
  uStack_5708 = 0;
  uStack_5707 = 0;
  uStack_5700 = 0;
  uStack_56ff = 0;
  local_56f0 = 1;
  local_56e0 = DAT_14c84635c;
  local_56e8 = DAT_14c84635c;
  local_56d8 = local_56d8 & 0xffffff00;
  local_56d4 = local_56d4 & 0xf8 | 4;
  local_56c0 = 0;
  local_56d0 = 0;
  lStack_56c8 = 0;
  FUN_1411bc404(&local_5948,&DAT_14c98dc14);
  FUN_140f13d9e(&local_5818,&local_5948);
  FUN_1411bc404(local_59f8,&DAT_14c98dc14);
  FUN_140f13d9e(&local_5768,local_59f8);
  local_4888[0] = &PTR_FUN_149eeb510;
  local_4878 = &PTR_FUN_149ed05f0;
  local_4870 = local_5810;
  uStack_486c = uStack_580c;
  uStack_4868 = uStack_5808;
  uStack_4864 = uStack_5804;
  local_4860 = local_5800;
  uStack_485c = local_57fc;
  uStack_4858 = (undefined4)local_57f8;
  uStack_4854 = local_57f8._4_4_;
  local_4850 = (undefined4)local_57f0;
  uStack_484c = local_57f0._4_4_;
  uStack_4848 = (undefined4)uStack_57e8;
  uStack_4844 = uStack_57e8._4_4_;
  local_4840 = local_57e0;
  if ((local_57e0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = auStack_57d8;
  puVar7 = local_4838;
  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  uStack_47e4 = CONCAT31(uStack_47e4._1_3_,local_5784);
  local_47e8 = local_5788;
  local_47e0 = local_5780;
  local_47d8 = (longlong)plStack_5778;
  if (plStack_5778 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_5778 + 8) = *(int *)((longlong)plStack_5778 + 8) + 1;
    UNLOCK();
  }
  local_47d0 = local_5770;
  local_47c8 = &PTR_FUN_149ed05f0;
  local_47c0 = local_5760;
  uStack_47bc = uStack_575c;
  uStack_47b8 = uStack_5758;
  uStack_47b4 = uStack_5754;
  local_47b0 = local_5750;
  uStack_47ac = uStack_574c;
  uStack_47a8 = (undefined4)uStack_5748;
  uStack_47a4 = uStack_5748._4_4_;
  local_47a0 = (undefined4)local_5740;
  uStack_479c = local_5740._4_4_;
  uStack_4798 = (undefined4)uStack_5738;
  uStack_4794 = uStack_5738._4_4_;
  local_4790 = local_5730;
  if ((local_5730 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar3 = local_5958;
  puVar5 = auStack_5728;
  puVar7 = local_4788;
  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  local_4734 = local_56d4;
  local_4738 = local_56d8;
  local_4730 = local_56d0;
  local_4728 = lStack_56c8;
  if (lStack_56c8 != 0) {
    LOCK();
    *(int *)(lStack_56c8 + 8) = *(int *)(lStack_56c8 + 8) + 1;
    UNLOCK();
  }
  local_4720 = local_56c0;
  local_59f8[0] = &PTR_FUN_149ed05f0;
  if (local_5958 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5958 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5958)(local_5958);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_58a8;
  local_5948 = &PTR_FUN_149ed05f0;
  if (plStack_58a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_58a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_58a8)(plStack_58a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_145979364(local_5828);
  uVar4 = *local_5f48;
  FUN_14601d63e(local_5828);
  FUN_14601d4ca(&local_5818,local_40d8);
  FUN_14601d4ca(local_51d8,&local_4718);
  FUN_140f13d9e(local_4b88,&local_4878);
  FUN_140f13d9e(local_4ad8,&local_47c8);
  local_4a28 = 0x3f800000;
  FUN_1411bc404(&local_5948,&DAT_14c98dc14);
  FUN_140f13d9e(local_4a18,&local_5948);
  local_4968 = _DAT_14c98dac0;
  uStack_4964 = uRam000000014c98dac4;
  uStack_4960 = uRam000000014c98dac8;
  uStack_495c = uRam000000014c98dacc;
  local_4958 = DAT_14c98dad0;
  FUN_1411bc404(local_59f8,&DAT_14c98dc14);
  FUN_140f13d9e(local_4948,local_59f8);
  local_4898 = 0x40000000;
  FUN_1446ddc76(&local_5f40,"TableView.Header",1);
  FUN_1415bc556(uVar4,local_5f40,local_5828);
  local_59f8[0] = &PTR_FUN_149ed05f0;
  if (local_5958 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5958 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5958)(local_5958);
      LOCK();
      piVar2 = (int *)((longlong)local_5958 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_5958 + 0x10))(local_5958);
      }
    }
  }
  local_5948 = &PTR_FUN_149ed05f0;
  if (plStack_58a8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_58a8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_58a8)(plStack_58a8);
      LOCK();
      piVar2 = (int *)((longlong)plStack_58a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_58a8 + 0x10))(plStack_58a8);
      }
    }
  }
  FUN_1459792ba(local_5828);
  FUN_145979364(local_4888);
  FUN_1414034a0(&local_4718);
  FUN_1414034a0(local_40d8);
  FUN_1415bbd66(local_3a98);
  FUN_1415bbd66(local_2f48);
  FUN_1415bbd66(local_23f8);
  FUN_1415bbd66(local_18a8);
  FUN_1415bbd66(local_d58);
  local_208[0] = &PTR_FUN_149eeb4b0;
  local_1f8 = &PTR_FUN_149ed05f0;
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_158 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar2 = (int *)((longlong)local_158 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_158 + 0x10))(local_158);
      }
    }
  }
  local_148[0] = &PTR_FUN_149eeb4b0;
  local_138 = &PTR_FUN_149ed05f0;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_98 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_98 + 0x10))(local_98);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_5f78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601d4ca FUN_14601d4ca body=174 status=ok
// SIG undefined FUN_14601d4ca(void)

longlong FUN_14601d4ca(longlong param_1,longlong param_2)

{
  FUN_140f13d9e(param_1 + 0x10,param_2 + 0x10);
  FUN_140f13d9e(param_1 + 0xc0,param_2 + 0xc0);
  FUN_140f13d9e(param_1 + 0x170,param_2 + 0x170);
  FUN_140f13d9e(param_1 + 0x220,param_2 + 0x220);
  FUN_140f13d9e(param_1 + 0x2d0,param_2 + 0x2d0);
  FUN_140f13d9e(param_1 + 0x380,param_2 + 0x380);
  FUN_140f13d9e(param_1 + 0x430,param_2 + 0x430);
  FUN_140f13d9e(param_1 + 0x4e0,param_2 + 0x4e0);
  FUN_140f13d9e(param_1 + 0x590,param_2 + 0x590);
  return param_1;
}



// FUNCTION 14601d578 FUN_14601d578 body=196 status=ok
// SIG undefined FUN_14601d578(void)

undefined8 *
FUN_14601d578(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1411bc492(param_1,2,local_40,param_3);
  *param_1 = &PTR_FUN_149eeb488;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601d63e FUN_14601d63e body=466 status=ok
// SIG undefined FUN_14601d63e(void)

undefined8 * FUN_14601d63e(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_149eeb850;
  FUN_14601d812(param_1 + 2);
  FUN_14601d812(param_1 + 0xca);
  param_1[0x192] = &PTR_FUN_149eeb510;
  FUN_140ca8f8e(param_1 + 0x194);
  FUN_140ca8f8e(param_1 + 0x1aa);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  FUN_140ca8f8e(param_1 + 0x1c2);
  *(undefined4 *)(param_1 + 0x1d8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xec4) = 0;
  *(undefined4 *)(param_1 + 0x1d9) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xecc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1da) = 0;
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[0x1dc] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 0x1dd) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0xeec) = uStack_cc;
  *(undefined4 *)(param_1 + 0x1de) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0xef4) = uStack_c4;
  *(undefined4 *)(param_1 + 0x1df) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0xefc) = uStack_bc;
  *(undefined4 *)(param_1 + 0x1e0) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0xf04) = uStack_b4;
  *(undefined4 *)(param_1 + 0x1e1) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0xf0c) = uStack_ac;
  *(undefined4 *)(param_1 + 0x1e2) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0xf14) = uStack_a4;
  param_1[0x1e3] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar4 = local_98;
  puVar5 = param_1 + 0x1e4;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xf74) = local_44;
  *(undefined4 *)(param_1 + 0x1ee) = local_48;
  param_1[0x1ef] = local_40;
  param_1[0x1f0] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x1f1] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x1f1] = local_30;
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
  *(undefined4 *)(param_1 + 0x1f2) = 0;
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601d812 FUN_14601d812 body=132 status=ok
// SIG undefined FUN_14601d812(void)

undefined8 * FUN_14601d812(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eeb4f0;
  FUN_140ca8f8e(param_1 + 2);
  FUN_140ca8f8e(param_1 + 0x18);
  FUN_140ca8f8e(param_1 + 0x2e);
  FUN_140ca8f8e(param_1 + 0x44);
  FUN_140ca8f8e(param_1 + 0x5a);
  FUN_140ca8f8e(param_1 + 0x70);
  FUN_140ca8f8e(param_1 + 0x86);
  FUN_140ca8f8e(param_1 + 0x9c);
  FUN_140ca8f8e(param_1 + 0xb2);
  return param_1;
}



// FUNCTION 14601d896 FUN_14601d896 body=431 status=ok
// SIG undefined FUN_14601d896(void)

undefined8 FUN_14601d896(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 *local_e0;
  undefined1 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_95;
  undefined4 local_94;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar3 = FUN_144729dda(param_1 + 0x18);
  if (cVar3 != '\0') {
    uVar4 = FUN_14479d2ce(param_1 + 0x18);
    lVar5 = FUN_1415bd340(uVar4);
    if (lVar5 != 0) {
      lVar7 = param_1 + 0x40;
      if (*(longlong *)(param_1 + 0x400) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x400);
      }
      if ((longlong)*(int *)(param_1 + 0x408) != 0) {
        lVar8 = (longlong)*(int *)(param_1 + 0x408) * 0x78;
        do {
          local_94 = 0;
          local_95 = 0;
          local_a8 = DAT_14c8463f0;
          uStack_a0 = DAT_14c8463f8;
          local_c8 = *(undefined4 *)(lVar7 + 0x18);
          uStack_c4 = *(undefined4 *)(lVar7 + 0x1c);
          uStack_c0 = *(undefined4 *)(lVar7 + 0x20);
          uStack_bc = *(undefined4 *)(lVar7 + 0x24);
          local_b8 = *(undefined8 *)(lVar7 + 0x28);
          local_e0 = &local_a8;
          local_d8 = 1;
          local_e8 = &local_95;
          FUN_148a003da(lVar5,&local_c8,&local_90,&local_94);
          lVar6 = FUN_1409f2447();
          dVar1 = local_88 - *(double *)(lVar6 + 0x58);
          dVar2 = local_90 - *(double *)(lVar6 + 0x50);
          lVar6 = FUN_1409f2447();
          if ((ABS(dVar2) <= (double)*(float *)(lVar6 + 0x60)) &&
             (ABS(dVar1) <= (double)*(float *)(lVar6 + 0x60))) {
            FUN_148d1716e(param_2,lVar7);
            uVar4 = 1;
            break;
          }
          lVar7 = lVar7 + 0x78;
          uVar4 = 0;
          lVar8 = lVar8 + -0x78;
        } while (lVar8 != 0);
        goto LAB_14601d925;
      }
    }
  }
  uVar4 = 0;
LAB_14601d925:
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14601da46 FUN_14601da46 body=115 status=ok
// SIG undefined FUN_14601da46(void)

void FUN_14601da46(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9154c0;
  param_1[0x97] = &PTR_FUN_14a9154d0;
  param_1[0x99] = &PTR_FUN_14a915500;
  FUN_144725486(param_1 + 0x99);
  FUN_144a4509c(param_1 + 0x99);
  param_1[0x97] = &PTR_LAB_14a399f40;
  FUN_141220b8a(param_1 + 0x97);
  FUN_1415bd356(param_1);
  return;
}



// FUNCTION 14601daba FUN_14601daba body=115 status=ok
// SIG undefined FUN_14601daba(void)

void FUN_14601daba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a915530;
  param_1[0x97] = &PTR_FUN_14a915540;
  param_1[0x99] = &PTR_FUN_14a915570;
  FUN_144725486(param_1 + 0x99);
  FUN_144a4509c(param_1 + 0x99);
  param_1[0x97] = &PTR_LAB_14a399f40;
  FUN_141220b8a(param_1 + 0x97);
  FUN_1415bd3e6(param_1);
  return;
}



// FUNCTION 14601db2e FUN_14601db2e body=175 status=ok
// SIG undefined FUN_14601db2e(void)

bool FUN_14601db2e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

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



// FUNCTION 14601dbde FUN_14601dbde body=94 status=ok
// SIG undefined FUN_14601dbde(void)

undefined8 FUN_14601dbde(undefined8 param_1)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14601dc3e(local_48,param_1);
  FUN_14109bcee(&DAT_14cae4848,local_50,local_48);
  FUN_1401cb1ee(local_48);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601dc3e FUN_14601dc3e body=164 status=ok
// SIG undefined FUN_14601dc3e(void)

LPCRITICAL_SECTION FUN_14601dc3e(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  
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
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6ba10;
  p_Var2 = (_LIST_ENTRY *)FUN_144a3f946();
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  *(undefined ***)p_Var1 = &PTR_FUN_14ba3c390;
  (p_Var1->ProcessLocksList).Blink = param_2;
  *(undefined **)&p_Var1->EntryCount = &DAT_14437f830;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 14601dce2 FUN_14601dce2 body=540 status=ok
// SIG undefined FUN_14601dce2(void)

ulonglong FUN_14601dce2(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar9;
  char *pcVar10;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  char *local_50;
  int local_48;
  ulonglong local_40;
  undefined7 uVar8;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  do {
    lVar6 = param_1;
    cVar3 = FUN_14576d4b4();
    if (cVar3 == '\0') {
      uVar7 = 0;
      goto LAB_14601dd9e;
    }
    lVar9 = *(longlong *)(lVar6 + 0x20);
    if (lVar9 == 0) {
LAB_14601ddca:
      lVar9 = 0;
    }
    else {
      lVar5 = FUN_141095a0a();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) != lVar5 + 0x30)) goto LAB_14601ddca;
    }
    lVar5 = FUN_14479d2ce(lVar9 + 0x308);
    if (lVar5 == 0) break;
    param_1 = FUN_14449bdee(lVar5,1);
  } while (param_1 != 0);
  FUN_1415bd5cc(lVar9,&local_50);
  uVar2 = *(undefined1 *)(lVar6 + 0x4a);
  *(undefined1 *)(lVar6 + 0x4a) = 1;
  uVar8 = (undefined7)((ulonglong)lVar9 >> 8);
  uVar7 = CONCAT71(uVar8,1);
  if ((longlong)local_48 != 0) {
    pcVar1 = local_50 + (longlong)local_48 * 0xc;
    uVar7 = CONCAT71(uVar8,1);
    pcVar10 = local_50;
    do {
      if ((longlong)(int)param_2[1] != 0) {
        lVar9 = 0;
        do {
          if ((*(longlong *)(*param_2 + 4 + lVar9) == *(longlong *)(pcVar10 + 4)) &&
             (*(char *)(*param_2 + lVar9) == *pcVar10)) goto LAB_14601de3f;
          lVar9 = lVar9 + 0xc;
        } while ((longlong)(int)param_2[1] * 0xc != lVar9);
      }
      local_58 = *(undefined4 *)(pcVar10 + 8);
      local_60 = *(undefined8 *)pcVar10;
      bVar4 = FUN_1491eb3b2(lVar6,&local_60,0,0);
      uVar7 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 & bVar4);
LAB_14601de3f:
      pcVar10 = pcVar10 + 0xc;
    } while (pcVar10 != pcVar1);
  }
  if ((longlong)(int)param_2[1] != 0) {
    pcVar10 = (char *)*param_2;
    pcVar1 = pcVar10 + (longlong)(int)param_2[1] * 0xc;
    do {
      if ((longlong)local_48 != 0) {
        lVar9 = 0;
        do {
          if ((*(longlong *)(local_50 + lVar9 + 4) == *(longlong *)(pcVar10 + 4)) &&
             (local_50[lVar9] == *pcVar10)) goto LAB_14601de97;
          lVar9 = lVar9 + 0xc;
        } while ((longlong)local_48 * 0xc != lVar9);
      }
      local_68 = *(undefined4 *)(pcVar10 + 8);
      local_70 = *(undefined8 *)pcVar10;
      bVar4 = FUN_1491eb3b2(lVar6,&local_70,1,0);
      uVar7 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 & bVar4);
LAB_14601de97:
      pcVar10 = pcVar10 + 0xc;
    } while (pcVar10 != pcVar1);
  }
  *(undefined1 *)(lVar6 + 0x4a) = uVar2;
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_14601dd9e:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffff01;
}



// FUNCTION 14601df08 FUN_14601df08 body=250 status=ok
// SIG undefined FUN_14601df08(void)

longlong * FUN_14601df08(longlong *param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1412c18ae();
  *param_1 = (longlong)&PTR_FUN_14bdbf620;
  param_1[5] = (longlong)&PTR_FUN_14bdbf9c0;
  param_1[0x13] = (longlong)&PTR_FUN_14bdbf9e0;
  memset(param_1 + 0x17,0,200);
  local_38 = L"ProjectToTargetToolName";
  local_30 = 0x17;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"URemoveOccludedTrianglesTool";
  local_30 = 0x1c;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"Jacket");
  (**(code **)(*param_1 + 0x370))(param_1,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601e004 FUN_14601e004 body=242 status=ok
// SIG undefined FUN_14601e004(void)

void FUN_14601e004(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_140824bde(local_38,100);
  LOCK();
  iVar2 = DAT_14cb80fb0 + 1;
  UNLOCK();
  iVar4 = DAT_14cb80fb0 + 1;
  DAT_14cb80fb0 = iVar2;
  if ((int)param_3[8] != iVar4) {
    *(int *)(param_3 + 8) = iVar4;
    (**(code **)(*param_3 + 0x2b0))(param_3,local_38);
  }
  lVar3 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x18);
    bVar1 = *(byte *)(lVar3 + 9);
    *(undefined4 *)(param_4 + 8) = 0;
    if (*(uint *)(param_4 + 0xc) != (iVar2 / (int)(uint)bVar1 & 0xffffU)) {
      FUN_140824bde(param_4);
    }
    if (*(char *)(lVar3 + 9) == '\x01') {
      FUN_14601e0f7(lVar3,local_38,param_4);
    }
    else {
      FUN_1488b197f(lVar3,local_38,param_4);
    }
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601e0f7 FUN_14601e0f7 body=146 status=ok
// SIG undefined FUN_14601e0f7(void)

void FUN_14601e0f7(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (longlong)*(int *)(param_1 + 0x18) / (longlong)(int)(uint)*(byte *)(param_1 + 9) & 0xffff;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (*(int *)((longlong)param_3 + 0xc) < (int)uVar5) {
    FUN_140824bde(param_3,uVar5);
  }
  if ((int)uVar5 != 0) {
    uVar6 = 0;
    do {
      bVar1 = *(byte *)(lVar3 + uVar6);
      if ((int)(uint)bVar1 < (int)param_2[1]) {
        lVar4 = *param_2;
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_14023b962(param_3,iVar2);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) =
             *(undefined8 *)(lVar4 + (ulonglong)bVar1 * 8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar5 != uVar6);
  }
  return;
}



// FUNCTION 14601e18a FUN_14601e18a body=68 status=ok
// SIG undefined FUN_14601e18a(void)

void FUN_14601e18a(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x350);
  memset(_Dst,0,0x350);
  FUN_14601e1ce(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14601e1ce FUN_14601e1ce body=450 status=ok
// SIG undefined FUN_14601e1ce(void)

undefined8 * FUN_14601e1ce(undefined8 *param_1)

{
  longlong *plVar1;
  void *_Src;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8aeee0;
  *(undefined2 *)(param_1 + 0x16) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0xb2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb6) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  FUN_14109ee14(param_1 + 0x22);
  FUN_140056680(param_1 + 0x46,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x48,&DAT_149dfb77a);
  param_1[0x4a] = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x4b] = local_50;
  *(undefined4 *)(param_1 + 0x4c) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x264) = local_44;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  plVar3 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar3;
  param_1[0x50] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x51) = (int)plVar3[1];
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)((longlong)param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x29f) = 0x101;
  FUN_1413f03d2(param_1 + 0x55);
  param_1[0x68] = 0;
  iVar2 = DAT_14cbb9be0;
  _Src = DAT_14cbb9bd8;
  lVar4 = (longlong)DAT_14cbb9be0;
  *(int *)(param_1 + 0x69) = DAT_14cbb9be0;
  if (lVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x68,iVar2,0);
    memcpy((void *)param_1[0x68],_Src,lVar4 * 2);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601e392 FUN_14601e392 body=90 status=ok
// SIG undefined FUN_14601e392(void)

void FUN_14601e392(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14601e3ec(lVar1 + 0x3c28,param_1 + 0x38);
      return;
    }
  }
  return;
}



// FUNCTION 14601e3ec FUN_14601e3ec body=165 status=ok
// SIG undefined FUN_14601e3ec(void)

void FUN_14601e3ec(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  plVar2 = (longlong *)FUN_140161f86();
  lVar3 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xa0));
  *(int *)(lVar3 + 0x98) = *(int *)(lVar3 + 0x98) + 1;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    if (*(int *)(lVar3 + 0x2c) != 0) goto LAB_14601e44a;
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x2c) + 1;
  }
  *(undefined1 *)(lVar3 + 0x28) = 0;
  *(int *)(lVar3 + 0x2c) = iVar1;
LAB_14601e44a:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xa0));
  FUN_14601e492(param_1,*param_2);
  FUN_14601e4e8(*(undefined8 *)(param_1 + 0x28));
  lVar3 = FUN_1402735c8();
  if (*(char *)(lVar3 + 0x138) != '\x01') {
    return;
  }
  FUN_141149732(param_1);
  return;
}



// FUNCTION 14601e492 FUN_14601e492 body=86 status=ok
// SIG undefined FUN_14601e492(void)

void FUN_14601e492(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_140161f86();
  lVar1 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + 1;
  if (*(longlong *)(lVar1 + 0x3c) == param_2) {
    if (*(int *)(lVar1 + 0x44) != 0) goto LAB_14601e4cc;
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(lVar1 + 0x44) + 1;
  }
  *(longlong *)(lVar1 + 0x3c) = param_2;
  *(int *)(lVar1 + 0x44) = iVar2;
LAB_14601e4cc:
                    /* WARNING: Could not recover jumptable at 0x00014601e4d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  return;
}



// FUNCTION 14601e4e8 FUN_14601e4e8 body=235 status=ok
// SIG undefined FUN_14601e4e8(void)

void FUN_14601e4e8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14030da5e(param_1,&local_30);
  AcquireSRWLockExclusive((PSRWLOCK)(local_30 + 0xa0));
  *(int *)(local_30 + 0x98) = *(int *)(local_30 + 0x98) + 1;
  if (*(char *)(local_30 + 0x20) == '\0') {
    iVar3 = *(int *)(local_30 + 0x24) + 1;
  }
  else {
    if (*(int *)(local_30 + 0x24) != 0) goto LAB_14601e543;
    iVar3 = 1;
  }
  *(undefined1 *)(local_30 + 0x20) = 1;
  *(int *)(local_30 + 0x24) = iVar3;
LAB_14601e543:
  ReleaseSRWLockExclusive((PSRWLOCK)(local_30 + 0xa0));
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
  uVar4 = (**(code **)(param_1[0x1ce] + 0x10))(param_1 + 0x1ce,&DAT_14cbcfb40);
  FUN_1415bd6c0(uVar4,param_1,DAT_14cbcfa90);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014601e5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x14b8))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601e5d4 FUN_14601e5d4 body=296 status=ok
// SIG undefined FUN_14601e5d4(void)

void FUN_14601e5d4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
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
  FUN_141499196();
  plVar1 = (longlong *)(param_1 + 0x278);
  lVar2 = param_1 + 0x288;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x2a0) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0x2a0);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (uStack_48 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) {
        *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)(lVar3 + 0x44);
        FUN_14601e6fe(param_1);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar4));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601e6fe FUN_14601e6fe body=592 status=ok
// SIG undefined FUN_14601e6fe(void)

void FUN_14601e6fe(longlong *param_1,longlong param_2,undefined8 param_3)

{
  void **ppvVar1;
  longlong *plVar2;
  int *piVar3;
  byte *pbVar4;
  void *_Src;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  longlong *plStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  ppvVar1 = (void **)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(int *)(param_2 + 0x4c) != 0) {
    FUN_1457d0886(ppvVar1,0);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  cVar6 = (**(code **)(*param_1 + 0x418))(param_1,&local_58,param_3,param_3);
  if (cVar6 == '\0') goto LAB_14601e896;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  cVar6 = FUN_1446e9750(param_1,&local_68,&local_58,0);
  if (cVar6 != '\0') {
    *(undefined1 *)(param_2 + 0x18) = 1;
    FUN_1447325ac(param_3,&local_78,1);
    *(longlong *)(param_2 + 0x1c) = local_78;
    if (local_68 == 0) {
      puVar7 = &DAT_14c9a1308;
    }
    else {
      puVar7 = (undefined8 *)FUN_1446e60f4(local_68,&DAT_14cb92e30);
    }
    pbVar4 = (byte *)*puVar7;
    if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) != 1)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(pbVar4 + 8);
    }
    FUN_1400b22c2(&local_78,uVar9);
    if ((longlong *)(param_2 + 0x28) == &local_78) {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 0x28) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 0x28) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_2 + 0x30) = local_70;
      *(undefined4 *)(param_2 + 0x34) = local_6c;
    }
    if (local_68 == 0) {
      plVar8 = &DAT_14c9a1308;
    }
    else {
      plVar8 = (longlong *)FUN_1446e60f4(local_68,&DAT_14cb92e38);
    }
    if (*plVar8 == 0) {
LAB_14601e839:
      FUN_14601e950((longlong *)(param_2 + 0x28));
    }
    else {
      cVar6 = FUN_14000584e(*plVar8,1);
      if (cVar6 != '\0') goto LAB_14601e839;
    }
    _Src = local_58;
    if (ppvVar1 != &local_58) {
      iVar5 = (int)uStack_50;
      lVar10 = (longlong)(int)uStack_50;
      *(int *)(param_2 + 0x48) = (int)uStack_50;
      if ((int)uStack_50 == 0 && *(int *)(param_2 + 0x4c) == 0) {
        *(undefined4 *)(param_2 + 0x4c) = 0;
      }
      else {
        FUN_14012afbc(ppvVar1,uStack_50 & 0xffffffff);
        if (iVar5 != 0) {
          memcpy(*ppvVar1,_Src,lVar10 << 3);
        }
      }
    }
  }
  plVar8 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_14601e896:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601e950 FUN_14601e950 body=148 status=ok
// SIG undefined FUN_14601e950(void)

void FUN_14601e950(longlong *param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_1;
  }
  FUN_140002266(&local_28,L"coui://uiresources/%s",puVar1);
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601e9e6 FUN_14601e9e6 body=96 status=ok
// SIG undefined FUN_14601e9e6(void)

void FUN_14601e9e6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14601ea4e FUN_14601ea4e body=251 status=ok
// SIG undefined FUN_14601ea4e(void)

undefined8 * FUN_14601ea4e(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14ae08e20;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0x437a0000437a0000;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(uint *)(param_1 + 0x7b) = (*(uint *)(param_1 + 0x7b) & 0xfffffffc) + 1;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 6;
  FUN_1446f470e(&local_28,L"SceneComp",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x39] = lVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601eb56 FUN_14601eb56 body=249 status=ok
// SIG undefined FUN_14601eb56(void)

undefined8 * FUN_14601eb56(undefined8 *param_1)

{
  FUN_145afdeb6();
  *param_1 = &PTR_FUN_14aea83a0;
  param_1[5] = &PTR_FUN_14aea8640;
  param_1[0xc] = 0;
  param_1[0xe] = &PTR_LAB_14aeb56a0;
  param_1[0xf] = &LAB_14841bed0;
  param_1[10] = &LAB_14841bed4;
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14aeb5680;
  param_1[0x17] = &LAB_14841beea;
  param_1[0x12] = &LAB_14841bebc;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3ca3d70a;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3ff00000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0x3ff0000000000000;
  param_1[0x31] = 0x3ff0000000000000;
  param_1[0x32] = 0x3ff0000000000000;
  param_1[0x33] = 0;
  return param_1;
}



// FUNCTION 14601ec50 FUN_14601ec50 body=25 status=ok
// SIG undefined FUN_14601ec50(void)

undefined8 FUN_14601ec50(undefined8 param_1,undefined8 param_2)

{
  FUN_14601ec6a(param_2);
  return param_2;
}



// FUNCTION 14601ec6a FUN_14601ec6a body=494 status=ok
// SIG undefined FUN_14601ec6a(void)

undefined8 * FUN_14601ec6a(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb94988 != (longlong *)0x0 && DAT_14cb94990 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb94988 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb94988;
    if (DAT_14cb94990 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_30);
    goto LAB_14601ed8b;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(400);
  memset(puVar3 + 1,0,0x188);
  *puVar3 = &PTR_FUN_14b4aa160;
  FUN_1412cbb62(puVar3 + 4);
  *puVar3 = &PTR_FUN_14b4aa0e0;
  puVar3[4] = &PTR_FUN_14b4aa100;
  puVar3[0x30] = 0;
  puVar3[0x31] = 0x1000000000;
  puVar3[6] = 0;
  puVar3[7] = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4aa180;
  plVar4[2] = (longlong)puVar3;
  local_28 = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    local_30 = (undefined8 *)0x0;
    goto LAB_14601ed8b;
  }
  local_30 = puVar3;
  if (((puVar3[2] != 0) && (puVar3[3] != 0)) && (0 < *(int *)(puVar3[3] + 8))) goto LAB_14601ed8b;
  if (plVar4 == (longlong *)0x0) {
    puVar3[2] = puVar3;
    plVar5 = (longlong *)puVar3[3];
    if (plVar5 != (longlong *)0x0) {
LAB_14601edfd:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      puVar3[3] = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_14601ed81;
    }
    local_28 = (longlong *)0x0;
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
      if (plVar5 != (longlong *)0x0) goto LAB_14601edfd;
      puVar3[3] = plVar4;
    }
LAB_14601ed81:
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
LAB_14601ed8b:
  *param_1 = local_30;
  param_1[1] = local_28;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14601ee5a FUN_14601ee5a body=37 status=ok
// SIG undefined FUN_14601ee5a(void)

void FUN_14601ee5a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14601ee80();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14601ee80 FUN_14601ee80 body=72 status=ok
// SIG undefined FUN_14601ee80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14601ee80(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    uVar3 = FUN_14601eec8(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c]);
    return uVar3;
  }
  return (ulonglong)(uint)(int)_DAT_14cbcf434;
}



// FUNCTION 14601eec8 FUN_14601eec8 body=151 status=ok
// SIG undefined FUN_14601eec8(void)

char FUN_14601eec8(void)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = FUN_14588001a();
  fVar3 = DAT_14cbe460c;
  if (lVar2 != 0) {
    fVar3 = *(float *)(lVar2 + 0x3c);
  }
  if (ABS(fVar3) <= 1e-08) {
    cVar1 = '\0';
  }
  else if (ABS(fVar3 + -0.25) <= 1e-08) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\x02';
    if (1e-08 < ABS(fVar3 + -0.5)) {
      cVar1 = (1e-08 < ABS(fVar3 + -0.75)) + '\x03';
    }
  }
  return cVar1;
}



// FUNCTION 14601ef72 FUN_14601ef72 body=243 status=ok
// SIG undefined FUN_14601ef72(void)

void FUN_14601ef72(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = FUN_144a7ae82();
  if (lVar3 == 0) {
    return;
  }
  lVar5 = *(longlong *)(lVar3 + 0x148);
  if (lVar5 == 0) {
    if (DAT_14cb25698 == 0) {
      uVar4 = FUN_140cd185c();
      DAT_14cb25698 = FUN_140002ddd(FUN_141818fdf,uVar4,L"WwiseEventDef");
    }
    lVar5 = FUN_14477b664(DAT_14cb25698);
    *(longlong *)(lVar3 + 0x148) = lVar5;
  }
  if (((*(longlong *)(lVar3 + 0x150) != 0) || (lVar5 == 0)) || (*(longlong *)(lVar3 + 0x140) == 0))
  goto LAB_14601f003;
  plVar1 = *(longlong **)(lVar5 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_14601f061:
    uVar4 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_14601f061;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    uVar4 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x140));
  }
  *(undefined8 *)(lVar3 + 0x150) = uVar4;
LAB_14601f003:
  FUN_14583b3f2(param_1);
  return;
}



// FUNCTION 14601f066 FUN_14601f066 body=271 status=ok
// SIG undefined FUN_14601f066(void)

ulonglong * FUN_14601f066(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong *local_30;
  undefined8 **local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = *param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c948bb0);
  uVar2 = *param_1;
  iVar3 = FUN_144a788f7(uVar2 & 0xffffffff);
  if (DAT_14c948b68 != DAT_14c948b94) {
    puVar4 = &DAT_14c948b98;
    if (DAT_14c948ba0 != (undefined *)0x0) {
      puVar4 = DAT_14c948ba0;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(DAT_14c948ba8 - 1U & iVar3 + (int)(uVar2 >> 0x20)) * 4);
    while (iVar3 != -1) {
      puVar1 = (ulonglong *)(DAT_14c948b60 + (longlong)iVar3 * 0x18);
      if (*puVar1 == uVar2) {
        if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffff7) != 0) goto LAB_14601f13a;
        break;
      }
      iVar3 = (int)puVar1[2];
    }
  }
  local_38 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_38 = 0;
  local_38[1] = 0;
  local_28 = &local_38;
  local_30 = param_1;
  FUN_14601f176(&DAT_14c948b60,local_1c,&local_30,0);
LAB_14601f13a:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c948bb0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601f176 FUN_14601f176 body=317 status=ok
// SIG undefined FUN_14601f176(void)

undefined4 *
FUN_14601f176(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

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
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14601f346(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  local_48[1] = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  iVar5 = FUN_144a788f7();
  uVar9 = iVar5 + (int)((ulonglong)uVar2 >> 0x20);
  local_68 = param_4;
  cVar4 = FUN_14601f2b4(param_1,uVar9,local_48,&local_54);
  uVar3 = local_54;
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
      *(uint *)((longlong)local_48 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14601f42e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601f2b4 FUN_14601f2b4 body=146 status=ok
// SIG undefined FUN_14601f2b4(void)

void FUN_14601f2b4(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_14688b692((int)lVar3,*param_4);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_14601f2d8;
    }
  }
  uVar5 = 0;
LAB_14601f2d8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 14601f346 FUN_14601f346 body=231 status=ok
// SIG undefined FUN_14601f346(void)

int * FUN_14601f346(longlong *param_1,int *param_2)

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



// FUNCTION 14601f42e FUN_14601f42e body=464 status=ok
// SIG undefined FUN_14601f42e(void)

void FUN_14601f42e(longlong *param_1)

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



// FUNCTION 14601f600 FUN_14601f600 body=158 status=ok
// SIG undefined FUN_14601f600(void)

bool FUN_14601f600(longlong param_1,undefined8 param_2)

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



// FUNCTION 14601f6a0 FUN_14601f6a0 body=426 status=ok
// SIG undefined FUN_14601f6a0(void)

void FUN_14601f6a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    lVar1 = FUN_14479d2ce();
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) {
      lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x510) + 0x18))(lVar1 + 0x510);
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        FUN_14480f766(lVar1 + 0x88);
      }
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    lVar1 = FUN_14479d2ce((undefined8 *)(param_1 + 0xd0));
    if (lVar1 != 0) {
      FUN_1412a866a(param_1,lVar1);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  FUN_14485c47a(param_1 + 0xd8);
  plVar2 = (longlong *)(param_2 + 0x510);
  lVar1 = (**(code **)(*(longlong *)(param_2 + 0x510) + 0x18))(plVar2);
  if (*(int *)(lVar1 + 0xa8) < 1) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xa0) + 0x20);
    if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
      FUN_1456cec3c(lVar1);
    }
  }
  FUN_14485c47a(param_1 + 0xd0,lVar1);
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    lVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
    local_40 = FUN_14588ef52;
    local_38 = 0;
    FUN_145905792(lVar1 + 0x88,&local_30,param_1);
    *(undefined8 *)(param_1 + 0xe0) = local_30;
  }
  lVar1 = FUN_14479d2ce(param_1 + 0xd0);
  if (lVar1 != 0) {
    FUN_1412a8e58(param_1,lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14601f84c FUN_14601f84c body=111 status=ok
// SIG undefined FUN_14601f84c(void)

void FUN_14601f84c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a388170;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14601f8bc(param_1 + 7);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14601f8bc FUN_14601f8bc body=53 status=ok
// SIG undefined FUN_14601f8bc(void)

void FUN_14601f8bc(longlong *param_1)

{
  FUN_14601f8f2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14601f8f2 FUN_14601f8f2 body=356 status=ok
// SIG undefined FUN_14601f8f2(void)

void FUN_14601f8f2(longlong *param_1)

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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14601fa58 FUN_14601fa58 body=75 status=ok
// SIG undefined FUN_14601fa58(void)

undefined8 * FUN_14601fa58(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad88640;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14601faa4(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14601faa4 FUN_14601faa4 body=53 status=ok
// SIG undefined FUN_14601faa4(void)

void FUN_14601faa4(longlong *param_1)

{
  FUN_14601fada();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14601fada FUN_14601fada body=392 status=ok
// SIG undefined FUN_14601fada(void)

void FUN_14601fada(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
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
      lVar3 = *local_78;
      lVar5 = (longlong)iStack_5c;
      puVar4 = *(undefined8 **)(lVar3 + 0xa8 + lVar5 * 0xc0);
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar4 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      if (*(longlong *)(lVar3 + lVar5 * 0xc0 + 0x98) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1457dd8f6(param_1,0);
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



// FUNCTION 14601fc64 FUN_14601fc64 body=53 status=ok
// SIG undefined FUN_14601fc64(void)

void FUN_14601fc64(longlong *param_1)

{
  FUN_1415bdab0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14601fc9a FUN_14601fc9a body=292 status=ok
// SIG undefined FUN_14601fc9a(void)

ulonglong FUN_14601fc9a(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  local_68 = 0;
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  cVar1 = FUN_14063337c(param_3,L"-InjectionSandbox=",&local_48,1);
  if (cVar1 == '\0') {
    local_68 = 0;
    uVar2 = FUN_14063337c(param_3,L"-Sandbox=",&local_48,1);
    uVar7 = (ulonglong)uVar2;
    if ((int)uStack_40 < 2) {
      uVar3 = FUN_1400dbadc();
      lVar4 = FUN_1415bdc84(uVar3);
      if ((lVar4 == param_2) && (*(char *)(param_1 + 0x90) == '\x01')) {
        FUN_1415bdca4(&local_58);
        if (local_48 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        local_48 = (undefined2 *)CONCAT44(uStack_54,local_58);
        uStack_40 = CONCAT44(uStack_4c,uStack_50);
        uVar3 = FUN_1400dbadc();
        plVar5 = (longlong *)FUN_1415bdc84(uVar3);
        puVar6 = local_48;
        if ((int)uStack_40 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        uVar2 = (**(code **)(*plVar5 + 0x108))(plVar5,puVar6);
        uVar7 = (ulonglong)uVar2;
      }
    }
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14601fdc0 FUN_14601fdc0 body=184 status=ok
// SIG undefined FUN_14601fdc0(void)

void FUN_14601fdc0(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_1447210f0();
  FUN_1410d53f0(&local_30,uVar5);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_14601fe7a(local_30,param_1,param_2);
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14601fe7a FUN_14601fe7a body=141 status=ok
// SIG undefined FUN_14601fe7a(void)

void FUN_14601fe7a(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar3 = FUN_14144f426();
  if (((param_2 != 0) && (cVar3 == '\0')) &&
     (iVar1 = *(int *)(param_1 + 0x238), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x230);
    lVar5 = 0;
    do {
      if (((*(char *)(lVar2 + 0x8b + lVar5) == '\x01') &&
          (lVar4 = FUN_14479d2ce(lVar2 + 0x10 + lVar5), lVar4 == param_2)) &&
         (*(char *)(lVar2 + 0x88 + lVar5) == param_3)) {
        *(undefined1 *)(lVar2 + 0x8b + lVar5) = 0;
        return;
      }
      lVar5 = lVar5 + 0x98;
    } while ((longlong)iVar1 * 0x98 - lVar5 != 0);
  }
  return;
}



// FUNCTION 14601ff08 FUN_14601ff08 body=934 status=ok
// SIG undefined FUN_14601ff08(void)

void FUN_14601ff08(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_88 [40];
  code *local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = (longlong *)FUN_1400d7050();
  if (plVar7 == (longlong *)0x0) goto LAB_146020184;
  lVar8 = FUN_144a5dd5e();
  if (((*(int *)(plVar7[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
      (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
       lVar8 + 0x30)) || (cVar5 = (**(code **)(*plVar7 + 0x6c8))(plVar7), cVar5 == '\0'))
  goto LAB_146020184;
  param_1 = param_1 + -0x30;
  FUN_1449027d0(param_1,&local_48);
  puVar3 = *(undefined8 **)(local_48 + 0x4f0);
  AcquireSRWLockExclusive((PSRWLOCK)(puVar3 + 6));
  plVar10 = local_40;
  *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  iVar6 = *(int *)((longlong)puVar3 + 0xc);
  FUN_140840ea5(*puVar3,*(undefined4 *)(puVar3 + 1));
  *(undefined4 *)(puVar3 + 1) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)puVar3 + 0xc) != 0)) {
    FUN_145a0e18e(puVar3,0);
  }
  *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
  if ((*(char *)(puVar3 + 3) != '\0') || (*(int *)((longlong)puVar3 + 0x1c) == 0)) {
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  FUN_1415bde6e(plVar7 + 0x501,&local_48);
  lVar8 = local_48;
  if (local_48 != 0) {
    plVar10 = (longlong *)(local_48 + 0x10);
    iVar6 = *(int *)(local_48 + 0x18);
    if (iVar6 == 0) {
LAB_146020025:
      FUN_1446efa72(plVar10,0,3,0x10);
      *(undefined4 *)(lVar8 + 0x18) = 3;
    }
    else {
      puVar4 = (undefined8 *)*plVar10;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,0);
        FUN_1446efa72(plVar10,0,0,0x10);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        iVar6 = *(int *)(local_48 + 0x18);
      }
      plVar10 = (longlong *)(local_48 + 0x10);
      lVar8 = local_48;
      if (iVar6 != 3) goto LAB_146020025;
    }
    puVar4 = (undefined8 *)*plVar10;
    *puVar4 = &PTR_LAB_14b9b7160;
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
    puVar4[2] = lVar9;
    *puVar4 = &PTR_FUN_14b9b70f0;
    puVar4[3] = 0;
    FUN_14485c47a(puVar4 + 3,param_1);
    puVar4[4] = FUN_1408fdd00;
    *(undefined4 *)(puVar4 + 5) = 0;
  }
  plVar10 = plVar7 + 0x52c;
  if ((int)plVar7[0x52d] == 0) {
LAB_1460200b6:
    FUN_1446efa72(plVar10,0,3,0x10);
    *(undefined4 *)(plVar7 + 0x52d) = 3;
  }
  else {
    puVar4 = (undefined8 *)*plVar10;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar10,0,0,0x10);
      *(undefined4 *)(plVar7 + 0x52d) = 0;
      goto LAB_1460200b6;
    }
    if ((int)plVar7[0x52d] != 3) goto LAB_1460200b6;
  }
  puVar4 = (undefined8 *)*plVar10;
  *puVar4 = &PTR_LAB_149e35290;
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
  puVar4[2] = lVar9;
  *puVar4 = &PTR_FUN_14b9b71d0;
  puVar4[3] = 0;
  FUN_14485c47a(puVar4 + 3,param_1);
  *(undefined4 *)(puVar4 + 5) = 0;
  puVar4[4] = FUN_1411c140a;
  FUN_140457ffc(plVar7 + 0x467,param_1);
  local_60 = FUN_144298278;
  local_58 = 0;
  FUN_1415be09a(plVar7 + 0x467,local_50,param_1);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar3 + 6));
LAB_146020184:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460202b0 FUN_1460202b0 body=1873 status=ok
// SIG undefined FUN_1460202b0(void)

void FUN_1460202b0(longlong param_1)

{
  uint *puVar1;
  undefined2 uVar2;
  ushort uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined1 auStack_248 [36];
  undefined4 local_224;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  undefined2 local_1ec;
  undefined2 local_1ea;
  undefined8 local_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined8 *local_170;
  longlong local_168;
  ulonglong local_150;
  ulonglong local_128;
  longlong local_120;
  ulonglong uStack_118;
  undefined2 local_110 [16];
  undefined8 local_f0;
  uint local_e8 [8];
  ulonglong local_c8;
  undefined1 local_c0 [32];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  plVar10 = (longlong *)FUN_14009d2a0();
  local_210 = param_1 + 0xc0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  local_1f8 = param_1 + 0x70;
  FUN_146020ebe();
  local_200 = FUN_14009d2a0();
  local_220 = FUN_14009d2a0();
  FUN_14009d2a0();
  local_224 = *(undefined4 *)(param_1 + 0x58);
  local_208 = *(longlong *)(param_1 + 0x28) + 0x28;
  local_9c = 0x100;
  local_74 = 0x100;
  local_70 = 0;
  uStack_68 = 0;
  local_c8 = 0x10000000000;
  lVar14 = 0;
  local_218 = param_1;
  do {
    lVar12 = local_218;
    uVar2 = *(undefined2 *)(local_220 + 0xbc + lVar14 * 2);
    local_a0 = 0;
    local_78 = 0;
    bVar21 = (longlong)uStack_68 < 0;
    uStack_68 = uStack_68 & 0xffffffff00000000;
    local_110[0] = uVar2;
    if (bVar21) {
      FUN_1476644c4(&local_70,0);
    }
    puVar6 = local_1d8;
    local_1d8._6_2_ = SUB82(puVar6,6);
    local_1d8._0_6_ =
         CONCAT24(*(undefined2 *)((longlong)plVar10 + 0x5a),
                  CONCAT22(*(undefined2 *)(lVar12 + 0x66),uVar2));
    local_168 = (longlong)&local_1d8 + 6;
    local_170 = &local_1d8;
    FUN_1447c44f6(local_c0,&local_170);
    local_1d8 = (undefined8 *)CONCAT26((short)plVar10[0x23],(int6)plVar10[0x22]);
    uStack_1d0 = CONCAT62(uStack_1d0._2_6_,*(undefined2 *)((longlong)plVar10 + 0x116));
    local_168 = (longlong)&uStack_1d0 + 2;
    local_170 = &local_1d8;
    FUN_1403b5126(local_c0,&local_170,2);
    local_c8 = local_c8 & 0xffffffff00000000;
    FUN_146020a02(local_208,local_c0,local_e8);
    uVar3 = *(ushort *)(plVar10 + 0x22);
    if ((uVar3 == 0xffff) || ((uint)local_c8 == uVar3 || (int)(uint)local_c8 < (int)(uint)uVar3)) {
      bVar21 = false;
    }
    else {
      bVar21 = (local_e8[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) != 0;
    }
    uVar3 = *(ushort *)((longlong)plVar10 + 0x112);
    if ((uVar3 == 0xffff) || ((uint)local_c8 == uVar3 || (int)(uint)local_c8 < (int)(uint)uVar3)) {
      bVar17 = false;
    }
    else {
      bVar17 = (local_e8[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) != 0;
    }
    uVar3 = *(ushort *)((longlong)plVar10 + 0x114);
    if ((uVar3 == 0xffff) || ((uint)local_c8 == uVar3 || (int)(uint)local_c8 < (int)(uint)uVar3)) {
      bVar18 = false;
    }
    else {
      bVar18 = (local_e8[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) != 0;
    }
    uVar3 = *(ushort *)(plVar10 + 0x23);
    if ((uVar3 == 0xffff) || ((uint)local_c8 == uVar3 || (int)(uint)local_c8 < (int)(uint)uVar3)) {
      bVar19 = false;
    }
    else {
      bVar19 = (local_e8[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) != 0;
    }
    uVar3 = *(ushort *)((longlong)plVar10 + 0x116);
    if ((uVar3 == 0xffff) || ((uint)local_c8 == uVar3 || (int)(uint)local_c8 < (int)(uint)uVar3)) {
      bVar20 = false;
    }
    else {
      bVar20 = (local_e8[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) != 0;
    }
    if (((bVar21 || bVar17) || bVar18) || (bVar20)) {
      FUN_140dba9e6(local_210);
      if (bVar21) {
        uVar11 = FUN_146020c46(local_1f8,local_110);
        FUN_146020b32(uVar11,local_224,1);
      }
      if (bVar17) {
        uVar11 = FUN_146020c46(local_218 + 0x80,local_110);
        FUN_146020b32(uVar11,local_224,1);
      }
      if (bVar18 && !bVar19) {
        uVar11 = FUN_146020c46(local_218 + 0x90,local_110);
        FUN_146020b32(uVar11,local_224,1);
      }
      if (bVar20) {
        lVar12 = FUN_147697f82(local_218 + 0xa0,local_110);
        FUN_146020b32(lVar12,local_224,1);
        *(undefined2 *)(lVar12 + 0x10) = *(undefined2 *)(local_200 + 0xce + lVar14 * 2);
      }
      if (bVar19) {
        uVar11 = FUN_1476980f0(local_218 + 0xb0,local_110);
        FUN_147662c54(uVar11);
      }
    }
    lVar12 = local_218;
    lVar14 = lVar14 + 1;
  } while (lVar14 != 9);
  lVar14 = local_218 + 0x118;
  *(undefined4 *)(local_218 + 0x130) = 0;
  if (0x80 < *(uint *)(local_218 + 0x134)) {
    *(undefined4 *)(local_218 + 0x134) = 0x80;
    FUN_1446efbd8(lVar14,0);
  }
  if ((((*(int *)(lVar12 + 0x78) != 0) || (*(int *)(lVar12 + 0x88) != 0)) ||
      (*(int *)(lVar12 + 0x98) != 0)) ||
     ((*(int *)(lVar12 + 0xa8) != 0 || (*(int *)(lVar12 + 0xb8) != 0)))) {
    FUN_146020d24(lVar12);
    local_f0 = 0x10000000000;
    local_150 = 0x10000000000;
    local_128 = 0x10000000000;
    local_120 = 0;
    uStack_118 = 0;
    lVar4 = plVar10[1];
    if (0 < (longlong)(int)lVar4) {
      local_210 = lVar12 + 0xe8;
      puVar15 = (undefined2 *)(*plVar10 + 0x14);
      uVar13 = 0;
      local_220 = lVar14;
      do {
        if (*(int *)(puVar15 + -4) != 0) {
          FUN_140dba9e6(local_110,*puVar15);
          local_150 = local_150 & 0xffffffff00000000;
          local_128 = local_128 & 0xffffffff00000000;
          bVar21 = (longlong)uStack_118 < 0;
          uStack_118 = uStack_118 & 0xffffffff00000000;
          if (bVar21) {
            FUN_1476644c4(&local_120,0);
          }
          puVar5 = local_1e8;
          local_1e8._6_2_ = SUB82(puVar5,6);
          local_1e8._0_6_ =
               CONCAT24(*puVar15,CONCAT22(*(undefined2 *)((longlong)plVar10 + 0x5c),
                                          *(undefined2 *)(lVar12 + 0x66)));
          local_1d8 = &local_1e8;
          uStack_1d0 = (longlong)&local_1e8 + 6;
          FUN_1447c44f6(&local_170,&local_1d8);
          cVar7 = FUN_14050a5e0(local_208,&local_170);
          if (cVar7 != '\0') {
            uVar16 = uVar13 + (uint)-*(int *)(lVar12 + 0x130) + 1;
            if (0 < (int)uVar16) {
              uVar9 = FUN_144a54ea4(local_220,uVar16 & 0xffffffff);
              FUN_1447c6044(local_220,uVar9,uVar16 & 0xffffffff,0);
            }
            lVar14 = *(longlong *)(lVar12 + 0x128);
            if (*(longlong *)(lVar12 + 0x128) == 0) {
              lVar14 = local_220;
            }
            puVar1 = (uint *)(lVar14 + (uVar13 >> 5 & 0x7ffffff) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar13 & 0x1f);
            FUN_140dba9e6(local_210,*puVar15);
          }
        }
        uVar13 = uVar13 + 1;
        puVar15 = puVar15 + 0x2c;
      } while ((longlong)(int)lVar4 != uVar13);
    }
    uStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1d8 = (undefined8 *)0x0;
    uStack_1d0 = 0;
    local_198 = 0;
    local_1b8 = 0x10000000000;
    local_190 = 0x10000000000;
    local_188 = 0;
    uStack_180 = 0;
    local_1ec = *(undefined2 *)(lVar12 + 0x66);
    local_1e0 = &local_1e8;
    local_1ea = *(undefined2 *)((longlong)plVar10 + 0x5c);
    local_1e8 = &local_1ec;
    FUN_1447c44f6(&local_1d8);
    FUN_14010b303(local_110,&uStack_1b0,1,&local_1e8);
    uVar8 = FUN_14050a5e0(local_208,&local_1d8);
    *(undefined1 *)(lVar12 + 0x138) = uVar8;
    if (local_188 != 0) {
      FUN_1400020a8();
    }
    if (local_120 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146020a02 FUN_146020a02 body=303 status=ok
// SIG undefined FUN_146020a02(void)

void FUN_146020a02(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
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
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = *(int *)(param_1 + 0x30);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_88 = plVar1;
  if ((iStack_4c != iVar4) || (uStack_58 != lVar2)) {
    do {
      lVar5 = (longlong)iStack_6c * 0x28 + *local_88;
      cVar3 = FUN_1403b852a(param_2,lVar5);
      if (cVar3 != '\0') {
        FUN_14010b303(lVar5,param_3,1,&local_60);
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar4));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146020b32 FUN_146020b32 body=142 status=ok
// SIG undefined FUN_146020b32(void)

void FUN_146020b32(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_146020bc2(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar2 = puVar2 + 2;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_1476955b8(param_1);
    return;
  }
  return;
}



// FUNCTION 146020bc2 FUN_146020bc2 body=132 status=ok
// SIG undefined FUN_146020bc2(void)

void FUN_146020bc2(longlong param_1,int param_2)

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



// FUNCTION 146020c46 FUN_146020c46 body=222 status=ok
// SIG undefined FUN_146020c46(void)

ushort * FUN_146020c46(longlong *param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ushort *puVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar6 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar5 = uVar2;
    do {
      uVar1 = (uVar5 >> 1) + uVar7;
      if (*(ushort *)(lVar6 + (ulonglong)uVar1 * 0x18) < *param_2) {
        uVar7 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(ushort *)(lVar6 + (ulonglong)uVar7 * 0x18) <= *param_2)) {
      puVar8 = (ushort *)(lVar6 + (ulonglong)uVar7 * 0x18);
      FUN_1458ea3e9(puVar8,1);
      goto LAB_146020cdd;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_146020e2a(param_1,uVar2);
    lVar6 = *param_1;
  }
  lVar4 = (ulonglong)uVar7 * 0x18;
  memmove((void *)(lVar6 + lVar4 + 0x18),(void *)(lVar6 + lVar4),(ulonglong)(uVar2 - uVar7) * 0x18);
  puVar8 = (ushort *)(lVar4 + *param_1);
LAB_146020cdd:
  *puVar8 = *param_2;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  return puVar8 + 4;
}



// FUNCTION 146020d24 FUN_146020d24 body=261 status=ok
// SIG undefined FUN_146020d24(void)

void FUN_146020d24(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar3 = 0;
    do {
      memset(*(void **)(lVar2 + 8 + lVar3),0,(longlong)*(int *)(lVar2 + 0x10 + lVar3) << 4);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar3 = 0;
    do {
      memset(*(void **)(lVar2 + 8 + lVar3),0,(longlong)*(int *)(lVar2 + 0x10 + lVar3) << 4);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    lVar3 = 0;
    do {
      memset(*(void **)(lVar2 + 8 + lVar3),0,(longlong)*(int *)(lVar2 + 0x10 + lVar3) << 4);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar3 = 0;
    do {
      memset(*(void **)(lVar2 + 8 + lVar3),0,(longlong)*(int *)(lVar2 + 0x10 + lVar3) << 4);
      lVar3 = lVar3 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar3);
  }
  return;
}



// FUNCTION 146020e2a FUN_146020e2a body=147 status=ok
// SIG undefined FUN_146020e2a(void)

void FUN_146020e2a(longlong param_1,int param_2)

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



// FUNCTION 146020ebe FUN_146020ebe body=196 status=ok
// SIG undefined FUN_146020ebe(void)

void FUN_146020ebe(undefined8 *param_1)

{
  FUN_1458ea3e9(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_146020f82(param_1);
  }
  FUN_1458ea3e9(param_1[2],*(undefined4 *)(param_1 + 3));
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_146020f82(param_1 + 2);
  }
  FUN_1458ea3e9(param_1[4],*(undefined4 *)(param_1 + 5));
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_146020f82(param_1 + 4);
  }
  FUN_1458ea41a(param_1[6],*(undefined4 *)(param_1 + 7));
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_147695654(param_1 + 6);
  }
  FUN_1458ea44b(param_1[8],*(undefined4 *)(param_1 + 9));
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) == 0) {
    return;
  }
  FUN_147695684(param_1 + 8);
  return;
}



// FUNCTION 146020f82 FUN_146020f82 body=48 status=ok
// SIG undefined FUN_146020f82(void)

void FUN_146020f82(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 146020fb2 FUN_146020fb2 body=128 status=ok
// SIG undefined FUN_146020fb2(void)

void FUN_146020fb2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146021034(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1469b6648(param_1,param_2,iVar1 - param_2);
    FUN_1469b66a2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146021034 FUN_146021034 body=132 status=ok
// SIG undefined FUN_146021034(void)

void FUN_146021034(longlong param_1,int param_2)

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



// FUNCTION 1460210b8 FUN_1460210b8 body=40 status=ok
// SIG undefined FUN_1460210b8(void)

undefined8 FUN_1460210b8(undefined8 param_1,int param_2)

{
  FUN_1460210e0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1460210e0 FUN_1460210e0 body=221 status=ok
// SIG undefined FUN_1460210e0(void)

void FUN_1460210e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5a6d00;
  param_1[5] = &PTR_FUN_14a5a7700;
  param_1[6] = &PTR_LAB_14a5a7740;
  param_1[0x55] = &PTR_FUN_14a5a7790;
  param_1[0x56] = &PTR_FUN_14a5a7810;
  param_1[0x57] = &PTR_FUN_14a5a7820;
  param_1[0xc4] = &PTR_LAB_14a5a7850;
  if (param_1[0xd2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd0] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xcd],*(undefined4 *)(param_1 + 0xce));
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[200],*(undefined4 *)(param_1 + 0xc9));
  if (param_1[200] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 1460211be FUN_1460211be body=115 status=ok
// SIG undefined FUN_1460211be(void)

void FUN_1460211be(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8cab10;
  param_1[0x87] = &PTR_FUN_14a8cab20;
  param_1[0x89] = &PTR_FUN_14a8cab50;
  FUN_144725486(param_1 + 0x89);
  FUN_144a4509c(param_1 + 0x89);
  param_1[0x87] = &PTR_LAB_14a399f40;
  FUN_141220b8a(param_1 + 0x87);
  FUN_1415be26c(param_1);
  return;
}



// FUNCTION 146021232 FUN_146021232 body=115 status=ok
// SIG undefined FUN_146021232(void)

void FUN_146021232(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8cab88;
  param_1[0x87] = &PTR_FUN_14a8cab90;
  param_1[0x89] = &PTR_FUN_14a8cabc0;
  FUN_144725486(param_1 + 0x89);
  FUN_144a4509c(param_1 + 0x89);
  param_1[0x87] = &PTR_LAB_14a399f40;
  FUN_141220b8a(param_1 + 0x87);
  FUN_1415be2fe(param_1);
  return;
}



// FUNCTION 1460212a6 FUN_1460212a6 body=75 status=ok
// SIG undefined FUN_1460212a6(void)

undefined8 * FUN_1460212a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14add40d0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1460212f2(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1460212f2 FUN_1460212f2 body=53 status=ok
// SIG undefined FUN_1460212f2(void)

void FUN_1460212f2(longlong *param_1)

{
  FUN_146021328();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146021328 FUN_146021328 body=393 status=ok
// SIG undefined FUN_146021328(void)

void FUN_146021328(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
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
      lVar4 = *local_78;
      lVar6 = (longlong)iStack_5c;
      plVar5 = *(longlong **)(lVar4 + 0x20 + lVar6 * 0x48);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x38))();
      }
      lVar4 = *(longlong *)(lVar4 + lVar6 * 0x48 + 0x18);
      if (lVar4 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar4 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460214ba FUN_1460214ba body=253 status=ok
// SIG undefined FUN_1460214ba(void)

undefined8 * FUN_1460214ba(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1406046aa();
  *param_1 = &PTR_FUN_14b6bc0a0;
  param_1[5] = &PTR_FUN_14b6bc3a0;
  param_1[6] = &PTR_FUN_14b6bc3d0;
  param_1[0x14] = 0xffffffffffffffff;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  param_1[0x21] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1f] = DAT_14c8464e0;
  param_1[0x20] = uVar1;
  param_1[0x24] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x22] = DAT_14c8464f8;
  param_1[0x23] = uVar1;
  uVar1 = DAT_14c846500;
  param_1[0x25] = DAT_14c8464f8;
  param_1[0x26] = uVar1;
  param_1[0x27] = DAT_14c846508;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x159) = 0;
  *(undefined8 *)((longlong)param_1 + 0x161) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return param_1;
}



// FUNCTION 1460215b8 FUN_1460215b8 body=26 status=ok
// SIG undefined FUN_1460215b8(void)

void FUN_1460215b8(undefined8 param_1)

{
  switchD_143c3d4dc::caseD_1d();
  FUN_1460215d2(param_1);
  return;
}



// FUNCTION 1460215d2 FUN_1460215d2 body=338 status=ok
// SIG undefined FUN_1460215d2(void)

void FUN_1460215d2(longlong param_1)

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
  plVar1 = (longlong *)(param_1 + 0x80);
  lVar2 = param_1 + 0x90;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar3 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0xa8);
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
        FUN_14744b3fc(param_1,*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x10));
        local_60 = local_60 & ~local_70._4_4_;
        FUN_1449c0562(&local_70);
      } while (iStack_5c != iVar3);
    } while ((local_68 != lVar2) || (local_78 != plVar1));
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_14744eda0(param_1 + 0xd0,0);
  }
  FUN_146021726(param_1);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146021726 FUN_146021726 body=280 status=ok
// SIG undefined FUN_146021726(void)

void FUN_146021726(longlong param_1)

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
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = param_1 + 0x40;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar3 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x58);
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
        FUN_14744cabe(param_1,*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x10));
        local_60 = local_60 & ~local_70._4_4_;
        FUN_1449c0562(&local_70);
      } while (iStack_5c != iVar3);
    } while ((local_68 != lVar2) || (local_78 != plVar1));
  }
  FUN_146021840(plVar1);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146021840 FUN_146021840 body=63 status=ok
// SIG undefined FUN_146021840(void)

void FUN_146021840(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_146021880(param_1);
    FUN_145a5c2b4(param_1);
    return;
  }
  FUN_145a5c2b4(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14744e1cc(param_1);
  return;
}



// FUNCTION 146021880 FUN_146021880 body=335 status=ok
// SIG undefined FUN_146021880(void)

void FUN_146021880(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 1460219d0 FUN_1460219d0 body=206 status=ok
// SIG undefined FUN_1460219d0(void)

undefined8 * FUN_1460219d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14125375a();
  uVar1 = FUN_14001cc68(0x420,0x10);
  local_30 = *(undefined8 *)(param_1 + 8);
  local_28 = *(longlong *)(param_1 + 0x10);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_40 = *(undefined8 *)(param_1 + 0x18);
  local_38 = *(longlong *)(param_1 + 0x20);
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_146021aa0(uVar1,&local_40,&local_30);
  *param_2 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14a452910;
  puVar2[2] = uVar1;
  param_2[1] = puVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146021aa0 FUN_146021aa0 body=568 status=ok
// SIG undefined FUN_146021aa0(void)

undefined8 * FUN_146021aa0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146021cda();
  *param_1 = &PTR_FUN_14a44f700;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  lVar6 = 0x178;
  do {
    FUN_1412535c8((longlong)param_1 + lVar6);
    lVar6 = lVar6 + 0x68;
  } while (lVar6 != 0x2b0);
  *(undefined1 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = *param_3;
  lVar6 = param_3[1];
  param_1[0x59] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  plVar5 = (longlong *)FUN_1448c2e86();
  FUN_145af9b74(&local_38);
  iVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,local_38);
  if (iVar4 < 1) {
    uVar3 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_147364b50();
    uVar3 = (**(code **)(*plVar5 + 0x90))(plVar5);
  }
  *(undefined1 *)(param_1 + 0x68) = uVar3;
  *(undefined2 *)((longlong)param_1 + 0x341) = 0;
  lVar6 = 0x370;
  do {
    FUN_144a78564((longlong)param_1 + lVar6);
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x398);
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x414) = 0xffffffff00000004;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  plVar5 = *(longlong **)(param_2 + 8);
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
  plVar5 = (longlong *)param_3[1];
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
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146021cda FUN_146021cda body=302 status=ok
// SIG undefined FUN_146021cda(void)

undefined8 * FUN_146021cda(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_LAB_149edae50;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf),4000);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x17));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x17),4000);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1f),4000);
  FUN_146021e0a(param_1[1] + 0x40,local_48,param_1);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146021e0a FUN_146021e0a body=228 status=ok
// SIG undefined FUN_146021e0a(void)

undefined8 FUN_146021e0a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149ee9c60;
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
  *local_38 = &PTR_FUN_149ee9a30;
  local_38[3] = param_3;
  local_38[4] = &LAB_14581313e;
  FUN_145951372(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146021ef0 FUN_146021ef0 body=126 status=ok
// SIG undefined FUN_146021ef0(void)

void FUN_146021ef0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_1403ca102();
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar4 = FUN_144a7b4ca();
    lVar1 = *(longlong *)(param_1 + 0x398);
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_146021f50;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_146021f50;
      }
    }
  }
  lVar5 = 0;
LAB_146021f50:
  FUN_146021f6e(lVar3,lVar5,param_2);
  return;
}



// FUNCTION 146021f6e FUN_146021f6e body=150 status=ok
// SIG undefined FUN_146021f6e(void)

void FUN_146021f6e(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360) != 0)) {
    iVar1 = FUN_14490d72a();
    if (iVar1 != 3) {
      uVar2 = FUN_140d27a2a(param_1);
      if (param_3 == '\0') {
        FUN_1441aafd2(uVar2,param_2);
        if (*(char *)(param_1 + 0x534) != '\0') {
          uVar2 = FUN_140d27a2a(param_1);
          FUN_140628abc(uVar2,0);
          *(undefined1 *)(param_1 + 0x534) = 0;
        }
      }
      else {
        FUN_1415be390();
        if (*(char *)(param_1 + 0x534) != '\0') {
          FUN_146022004(param_1,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 146022004 FUN_146022004 body=439 status=ok
// SIG undefined FUN_146022004(void)

void FUN_146022004(longlong param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x534) = 0;
  cVar3 = FUN_145a9f60a();
  if ((cVar3 != '\0') && ((param_2 == '\0' || (cVar3 = FUN_1460221cc(param_1), cVar3 != '\0')))) {
    cVar3 = FUN_1415be4d2(param_1);
    if (cVar3 == '\0') {
      if ((longlong)*(int *)(param_1 + 0x40) != 0) {
        lVar6 = 0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar6);
          if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x30) != 0)) {
            FUN_144a5dd5e();
            break;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)*(int *)(param_1 + 0x40) * 8 != lVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    }
    uVar4 = FUN_1401cb356();
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar2 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_40[2] = lVar5;
    *local_40 = &PTR_FUN_14b9718e0;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    puVar2[4] = param_1;
    local_48 = 0;
    FUN_1405f67fc(uVar4,local_30,&local_40,L"OakGameInstance.OnLaunchGame");
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    FUN_1449db362(&local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460221cc FUN_1460221cc body=109 status=ok
// SIG undefined FUN_1460221cc(void)

undefined8 FUN_1460221cc(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14119d4d6();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_1402a1246(lVar1);
      if (lVar1 != 0) {
        lVar1 = FUN_1403b0700(lVar1);
        if (*(longlong *)(lVar1 + 0x38) == 0) {
          return 0;
        }
        if (*(longlong *)(lVar1 + 0x38) == DAT_14cb71810) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14602223a FUN_14602223a body=115 status=ok
// SIG undefined FUN_14602223a(void)

void FUN_14602223a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1460222ae(param_1,iVar1);
    }
    FUN_14004e145((longlong)iVar1 * 6 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cb4326(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1460222ae FUN_1460222ae body=146 status=ok
// SIG undefined FUN_1460222ae(void)

void FUN_1460222ae(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 6,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 6)) {
      uVar5 = uVar4 / 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,6,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146022340 FUN_146022340 body=80 status=ok
// SIG undefined FUN_146022340(void)

void FUN_146022340(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x809) == '\0') && (*(char *)(param_1 + 0x808) != param_2)) {
    *(char *)(param_1 + 0x808) = param_2;
    *(undefined1 *)(param_1 + 0x8b8) = 1;
    if (param_2 == '\0') {
      FUN_1460223d0(param_1 + 0x810);
      FUN_146022390(param_1 + 0x860);
      return;
    }
  }
  return;
}



// FUNCTION 146022390 FUN_146022390 body=63 status=ok
// SIG undefined FUN_146022390(void)

void FUN_146022390(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_140cb52b4(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1415be524(param_1);
    return;
  }
  FUN_147009326(param_1);
  FUN_140cb52b4(param_1);
  return;
}



// FUNCTION 1460223d0 FUN_1460223d0 body=67 status=ok
// SIG undefined FUN_1460223d0(void)

void FUN_1460223d0(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_140105202(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1408b7556(param_1);
    return;
  }
  FUN_1470091e2(param_1);
  FUN_140105202(param_1,0);
  return;
}



// FUNCTION 146022414 FUN_146022414 body=125 status=ok
// SIG undefined FUN_146022414(void)

void FUN_146022414(void)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = DAT_14caa9c40;
  lVar2 = (longlong)DAT_14caa9c40;
  if (lVar2 < 0x20) {
    DAT_14caa9c40 = 0x20;
    uVar3 = 0x20 - iVar1;
    if ((uint)(DAT_14caa9c44 - iVar1) < uVar3) {
      FUN_1459499ee(&DAT_14caa9c38);
    }
    memset((void *)(lVar2 * 8 + DAT_14caa9c38),0,(ulonglong)uVar3 << 3);
    return;
  }
  if (DAT_14caa9c40 == 0x20) {
    return;
  }
  DAT_14caa9c40 = 0x20;
  FUN_1474bf344();
  return;
}



// FUNCTION 14602249c FUN_14602249c body=251 status=ok
// SIG undefined FUN_14602249c(void)

undefined8 * FUN_14602249c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ae45620;
  FUN_140ca8f8e(param_1 + 6);
  FUN_140ca8f8e(param_1 + 0x1c);
  FUN_140ca8f8e(param_1 + 0x32);
  FUN_140ca8f8e(param_1 + 0x48);
  FUN_140ca8f8e(param_1 + 0x5e);
  FUN_140ca8f8e(param_1 + 0x74);
  FUN_140ca8f8e(param_1 + 0x8a);
  FUN_140ca8f8e(param_1 + 0xa0);
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x629) = 0;
  *(undefined8 *)((longlong)param_1 + 0x631) = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  *(undefined1 *)(param_1 + 0xce) = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x681) = 0;
  *(undefined8 *)((longlong)param_1 + 0x689) = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  return param_1;
}



// FUNCTION 1460225a2 FUN_1460225a2 body=512 status=ok
// SIG undefined FUN_1460225a2(void)

undefined8 * FUN_1460225a2(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14b127620;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x148cfb09;
  param_1[0x17] = "gbx_discovery_location_meta_data";
  FUN_1400b22c2(local_58,"Discovery.Location Meta Data");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_14073f72a();
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
    FUN_1400bbfc4(&local_48,lVar4);
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
        goto LAB_1460226d7;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_1460226d7:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460227a4 FUN_1460227a4 body=67 status=ok
// SIG undefined FUN_1460227a4(void)

void FUN_1460227a4(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1460227e8(param_1);
    FUN_140b6f6e8(param_1,0);
    return;
  }
  FUN_140b6f6e8(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140b713d0(param_1);
  return;
}



// FUNCTION 1460227e8 FUN_1460227e8 body=325 status=ok
// SIG undefined FUN_1460227e8(void)

void FUN_1460227e8(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 14602293a FUN_14602293a body=512 status=ok
// SIG undefined FUN_14602293a(void)

undefined8 * FUN_14602293a(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14b715800;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x414e0421;
  param_1[0x17] = "cinematic_player_anims";
  FUN_1400b22c2(local_58,"Cinematics.PlayerAnims");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_14103ac60();
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
    FUN_1400bbfc4(&local_48,lVar4);
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
        goto LAB_146022a6f;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_146022a6f:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146022b52 FUN_146022b52 body=75 status=ok
// SIG undefined FUN_146022b52(void)

void FUN_146022b52(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xf78);
  if (lVar2 == 0) {
    cVar1 = FUN_145989536(param_1);
    if (cVar1 == '\0') {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0xf78);
    if (lVar2 == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x178) == '\x03') {
    return;
  }
  FUN_146022b9e(lVar2,*(undefined4 *)(param_1 + 0xf80));
  return;
}



// FUNCTION 146022b9e FUN_146022b9e body=35 status=ok
// SIG undefined FUN_146022b9e(void)

void FUN_146022b9e(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  FUN_140841e14(param_1 + 0x30,1);
  FUN_14127fc36(param_1);
  return;
}



// FUNCTION 146022bc2 FUN_146022bc2 body=646 status=ok
// SIG undefined FUN_146022bc2(void)

undefined4 FUN_146022bc2(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = FUN_144729dda(param_1 + 8);
  if ((cVar3 != '\0') && (lVar7 = FUN_14479d2ce(param_1 + 8), *(longlong *)(lVar7 + 0x1f0) != 0)) {
    lVar8 = FUN_1403ca142();
    plVar1 = *(longlong **)(lVar7 + 0x1f0);
    if (plVar1 != (longlong *)0x0) {
      uVar6 = 0;
      if ((lVar8 == 0) || (lVar7 = plVar1[2], lVar7 == 0)) goto LAB_146022d7b;
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
         ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
           lVar8 + 0x30 &&
          (lVar7 = FUN_145725aea(plVar1,CONCAT71((int7)((ulonglong)*(longlong *)(lVar7 + 0x30) >> 8)
                                                 ,1)), lVar7 != 0)))) {
        lVar8 = FUN_144a5dd5e();
        if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
           ((*(longlong *)
              (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30 &&
            (bVar4 = (**(code **)(*plVar1 + 0x498))(plVar1), 5 < bVar4)))) {
          lVar8 = param_2[2];
          if (lVar8 == 0) {
            local_58 = *param_2;
            lVar8 = FUN_14050aea0();
            param_2[2] = lVar8;
            if (lVar8 != 0) goto LAB_146022cc8;
          }
          else {
LAB_146022cc8:
            if (*(longlong *)(lVar8 + 0x1b0) != 0) {
              puVar2 = *(undefined4 **)(*(longlong *)(lVar8 + 0x1b0) + 8);
              puVar9 = &DAT_14c9485f0;
              if (puVar2 != (undefined4 *)0x0) {
                puVar9 = puVar2;
              }
              local_58 = 0;
              uStack_50 = 0;
              bVar10 = true;
              FUN_1400b2348(puVar9,&local_58,1);
              FUN_145ad105e(&local_68);
              if ((int)uStack_50 == local_60) {
                if (1 < (int)uStack_50) {
                  iVar5 = FUN_144a80a00(local_58,local_68);
                  goto LAB_146022d38;
                }
              }
              else {
                iVar5 = local_60 + (int)uStack_50 + -1;
LAB_146022d38:
                bVar10 = iVar5 == 0;
              }
              if (local_68 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              if (local_58 != 0) {
                FUN_1400020a8();
              }
              if (bVar10) goto LAB_146022d79;
            }
          }
          cVar3 = FUN_146022e4a(lVar7);
          if (((cVar3 != '\0') || (cVar3 = FUN_146022ea8(lVar7,1), cVar3 != '\0')) &&
             (cVar3 = FUN_148dc2112(lVar7), cVar3 == '\0')) {
            if ((*param_3 != *(longlong *)(lVar7 + 0x23d8)) ||
               ((int)param_3[1] != *(int *)(lVar7 + 0x23e0))) {
              *param_3 = *(longlong *)(lVar7 + 0x23d8);
              *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar7 + 0x23e0);
              param_3[2] = 0;
            }
            if ((param_4 == '\0') || (cVar3 = FUN_14595f7e8(param_1,param_3), cVar3 != '\0')) {
              FUN_148dc2170(lVar7);
              if (*param_3 != 0) {
                uVar6 = CONCAT31((int3)((uint)(int)param_2[1] >> 8),
                                 (int)param_3[1] != (int)param_2[1] || *param_3 != *param_2);
                goto LAB_146022d7b;
              }
            }
          }
        }
      }
    }
  }
LAB_146022d79:
  uVar6 = 0;
LAB_146022d7b:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 146022e4a FUN_146022e4a body=94 status=ok
// SIG undefined FUN_146022e4a(void)

undefined8 FUN_146022e4a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar4 = FUN_144a7b4ca();
    lVar2 = *(longlong *)(param_1 + 0x398);
    if (lVar2 != 0) {
      if (lVar4 == 0) {
        return 0;
      }
      lVar3 = *(longlong *)(lVar2 + 0x10);
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(lVar4 + 0x38);
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == lVar4 + 0x30)) {
        return CONCAT71((int7)(int3)((uint)iVar1 >> 8),*(undefined1 *)(lVar2 + 0x6b3));
      }
    }
  }
  return 0;
}



// FUNCTION 146022ea8 FUN_146022ea8 body=108 status=ok
// SIG undefined FUN_146022ea8(void)

undefined8 FUN_146022ea8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar3 = FUN_14487fd02();
  if ((iVar3 != 3) && (*(longlong *)(param_1 + 0x398) != 0)) {
    lVar4 = FUN_144a7b4ca();
    lVar1 = *(longlong *)(param_1 + 0x398);
    if (((lVar1 != 0) &&
        (((lVar4 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      uVar5 = FUN_146022f14(lVar1,param_2);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 146022f14 FUN_146022f14 body=192 status=ok
// SIG undefined FUN_146022f14(void)

undefined8 FUN_146022f14(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 == (longlong *)0x0) {
LAB_146022f74:
    lVar3 = FUN_1403b0700(param_1);
    local_28 = *(longlong *)(lVar3 + 0x38);
    uVar4 = 0;
    if ((local_28 == 0) || (local_28 == DAT_14cb71810)) goto LAB_146022fab;
    cVar2 = FUN_146022fd6(param_1,&local_28,param_2);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x6b1) = 1;
      uVar4 = 1;
      goto LAB_146022fab;
    }
  }
  else {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(plVar1[2] + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_146022f74;
    if ((*(byte *)(plVar1 + 0x84) & 2) != 0) {
      cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
      if (cVar2 != '\0') goto LAB_146022f74;
    }
  }
  uVar4 = 0;
LAB_146022fab:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146022fd6 FUN_146022fd6 body=791 status=ok
// SIG undefined FUN_146022fd6(void)

undefined8 FUN_146022fd6(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  short local_bc [2];
  longlong local_b8;
  int local_b0;
  undefined1 *local_a8;
  int local_a0;
  undefined ***local_98;
  undefined **local_88;
  longlong *local_80;
  undefined1 local_60 [40];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((*(char *)(param_1 + 0x6b2) == '\x01') && (*(char *)(param_1 + 0x6b3) == '\0')) &&
     (lVar8 = FUN_1447210f0(param_1), lVar8 != 0)) {
    if (param_3 == '\0') {
      local_b8 = *(longlong *)(lVar8 + 0x18);
      FUN_1400021e4(&local_b8,&local_a8);
      FUN_145ad105e(&local_b8);
      if (local_a0 == local_b0) {
        bVar14 = true;
        if (1 < local_a0) {
          lVar9 = 0;
          while( true ) {
            uVar2 = *(ushort *)(local_a8 + lVar9);
            uVar6 = (uint)uVar2;
            uVar3 = *(ushort *)(local_b8 + lVar9);
            uVar13 = (uint)uVar3;
            if (uVar2 != uVar3) {
              if ((uVar3 | uVar2) < 0x80) {
                uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14602327e;
              }
              iVar7 = uVar6 - uVar13;
              goto LAB_1460232de;
            }
            if (uVar2 == 0) break;
LAB_14602327e:
            lVar9 = lVar9 + 2;
          }
          iVar7 = 0;
LAB_1460232de:
          bVar14 = iVar7 == 0;
        }
      }
      else {
        bVar14 = local_b0 + local_a0 == 1;
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (local_a8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (bVar14) goto LAB_146023000;
    }
    plVar4 = *(longlong **)(param_1 + 0x168);
    if (plVar4 != (longlong *)0x0) {
      lVar9 = FUN_144a5dd5e();
      if (((*(int *)(lVar9 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30)) &&
         (((*(byte *)(plVar4 + 0x84) & 2) == 0 ||
          (cVar5 = (**(code **)(*plVar4 + 0x6c8))(plVar4), cVar5 == '\0')))) goto LAB_146023000;
    }
    local_b8 = FUN_145bd989c(lVar8);
    if ((local_b8 != 0) && (7 < (byte)(*(char *)(local_b8 + 0xb0) - 1U))) {
      lVar9 = FUN_1400f6f32(lVar8);
      if (lVar9 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 0x68);
      }
      lVar8 = FUN_1400f6f32(lVar8);
      if ((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x30), lVar8 != 0)) {
        lVar10 = FUN_14130c5c8();
        if (*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) {
          uVar11 = 0;
          if ((lVar9 == 0) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) goto LAB_146023002;
          FUN_14042af24(lVar9,local_bc,param_1);
          if (-1 < local_bc[0]) {
            uVar1 = *(undefined1 *)(param_1 + 0x710);
            DAT_14cbd06b8 = 1;
            FUN_1447a97f4(local_60,&DAT_14c9485f0);
            local_98 = (undefined ***)0x0;
            local_88 = &PTR_LAB_14b996a90;
            local_80 = &local_b8;
            local_a8 = &LAB_144202e36;
            local_c8 = local_60;
            cVar5 = FUN_148effdc2(lVar8,local_bc,param_2,&local_a8);
            if (local_a8 != (undefined1 *)0x0) {
              pppuVar12 = local_98;
              if (local_98 == (undefined ***)0x0) {
                pppuVar12 = &local_88;
              }
              (*(code *)(*pppuVar12)[2])();
            }
            DAT_14cbd06b8 = 0;
            if (cVar5 != '\0') {
              *(undefined2 *)(param_1 + 0x6b2) = 0x100;
              FUN_140628abc(local_b8,0);
              *(undefined1 *)(param_1 + 0x710) = uVar1;
              FUN_145be8d80(param_1);
              uVar11 = 1;
              goto LAB_146023002;
            }
          }
        }
      }
    }
  }
LAB_146023000:
  uVar11 = 0;
LAB_146023002:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1460232f6 FUN_1460232f6 body=254 status=ok
// SIG undefined FUN_1460232f6(void)

undefined8 * FUN_1460232f6(undefined8 *param_1)

{
  FUN_145b261b0();
  *param_1 = &PTR_FUN_14bd972c0;
  param_1[5] = &PTR_FUN_14bd97690;
  param_1[0x13] = &PTR_FUN_14bd976b0;
  param_1[0x1d] = &PTR_FUN_14bd976e0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3ff00000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x3ff0000000000000;
  param_1[0x2b] = 0x3ff0000000000000;
  param_1[0x2c] = 0x3ff0000000000000;
  param_1[0x2d] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x193) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x204) = 0;
  return param_1;
}



// FUNCTION 1460233f4 FUN_1460233f4 body=79 status=ok
// SIG undefined FUN_1460233f4(void)

void FUN_1460233f4(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_146023466(local_30);
  uVar1 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar1,&local_48,local_30);
  FUN_1449db362(local_30);
  return;
}



// FUNCTION 146023444 Unwind@146023444 body=34 status=ok
// SIG undefined Unwind@146023444(void)

void Unwind_146023444(undefined8 param_1,longlong param_2)

{
  FUN_1449db362(param_2 + 0x38);
  return;
}



// FUNCTION 146023466 FUN_146023466 body=115 status=ok
// SIG undefined FUN_146023466(void)

undefined8 * FUN_146023466(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bef8b10;
  puVar1[3] = &DAT_14cc318dc;
  puVar1[4] = FUN_145bcd20e;
  return param_1;
}



// FUNCTION 1460234da Unwind@1460234da body=32 status=ok
// SIG undefined Unwind@1460234da(void)

void Unwind_1460234da(undefined8 param_1,longlong param_2)

{
  FUN_1449db362(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1460234fa FUN_1460234fa body=75 status=ok
// SIG undefined FUN_1460234fa(void)

void FUN_1460234fa(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x880))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014602352a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x888))(param_1);
    return;
  }
  DAT_14c949520 = L"ServerShortTimeout_Validate";
  return;
}



// FUNCTION 14602354a FUN_14602354a body=75 status=ok
// SIG undefined FUN_14602354a(void)

undefined8 * FUN_14602354a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14add4040;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_146023596(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146023596 FUN_146023596 body=53 status=ok
// SIG undefined FUN_146023596(void)

void FUN_146023596(longlong *param_1)

{
  FUN_1460235cc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1460235cc FUN_1460235cc body=396 status=ok
// SIG undefined FUN_1460235cc(void)

void FUN_1460235cc(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
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
      lVar4 = *local_78;
      lVar6 = (longlong)iStack_5c;
      plVar5 = *(longlong **)(lVar4 + 0x28 + lVar6 * 0x50);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x38))();
      }
      lVar4 = *(longlong *)(lVar4 + lVar6 * 0x50 + 0x20);
      if (lVar4 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar4 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14602375a FUN_14602375a body=75 status=ok
// SIG undefined FUN_14602375a(void)

undefined8 * FUN_14602375a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14addc5a0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1460237a6(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1460237a6 FUN_1460237a6 body=53 status=ok
// SIG undefined FUN_1460237a6(void)

void FUN_1460237a6(longlong *param_1)

{
  FUN_1460237dc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1460237dc FUN_1460237dc body=396 status=ok
// SIG undefined FUN_1460237dc(void)

void FUN_1460237dc(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
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
      lVar4 = *local_78;
      lVar6 = (longlong)iStack_5c;
      plVar5 = *(longlong **)(lVar4 + 0x28 + lVar6 * 0x50);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x38))();
      }
      lVar4 = *(longlong *)(lVar4 + lVar6 * 0x50 + 0x20);
      if (lVar4 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar4 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14602396a FUN_14602396a body=137 status=ok
// SIG undefined FUN_14602396a(void)

longlong FUN_14602396a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1460239f3();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1491ca918(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1460239f3 FUN_1460239f3 body=650 status=ok
// SIG undefined FUN_1460239f3(void)

longlong * FUN_1460239f3(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  int local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_58._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_5c = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar2 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_5c,4);
      }
      else {
        FUN_14572512c(param_1,&local_5c);
      }
    }
    else {
      local_5c = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar2;
    }
    local_50 = param_2 + 2;
    local_58 = &DAT_100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_80 = local_58;
    local_78 = local_50;
    local_68 = local_40;
    local_64 = local_3c;
    local_70 = local_48;
    uVar7 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_88 = param_2;
    if (local_70._4_4_ < (int)local_50[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar7;
      do {
        lVar5 = *local_88;
        FUN_140f872f2(lVar5 + (longlong)iVar8 * 0x20,param_1);
        FUN_140f872f2(lVar5 + (longlong)iVar8 * 0x20 + 0xc,param_1);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar7 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  else {
    local_58 = (undefined1 *)((ulonglong)local_58._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar1 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_58,4);
      }
      else {
        FUN_14572512c(param_1,&local_58);
      }
    }
    else {
      local_58 = (undefined1 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar1;
    }
    FUN_14128f79e(param_2,(ulonglong)local_58 & 0xffffffff);
    uVar7 = local_70;
    if (0 < (int)local_58) {
      iVar8 = 0;
      do {
        FUN_1491ca702(param_2,&local_88);
        *local_80 = 0;
        *(undefined8 *)(local_80 + 4) = 0;
        puVar3 = local_80 + 0xc;
        local_80[0xc] = 0;
        *(undefined8 *)(local_80 + 0x10) = 0;
        *(undefined4 *)(local_80 + 0x18) = 0xffffffff;
        FUN_140f872f2(local_80,param_1);
        FUN_140f872f2(puVar3,param_1);
        iVar8 = iVar8 + 1;
        uVar7 = local_70;
      } while (iVar8 < (int)local_58);
    }
  }
  local_70 = uVar7;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146023c7e FUN_146023c7e body=79 status=ok
// SIG undefined FUN_146023c7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146023c7e(void)

{
  FUN_1447a1747(DAT_14c873048,DAT_14c873050);
  if (DAT_14c873048 != 0) {
    FUN_1400020a8();
  }
  _DAT_14c873038 = 0;
  if (DAT_14c873030 != 0) {
    FUN_1400020a8();
  }
  FUN_146023cce();
  return;
}



// FUNCTION 146023cce FUN_146023cce body=54 status=ok
// SIG undefined FUN_146023cce(void)

void FUN_146023cce(void)

{
  FUN_146023d04();
  if (DAT_14c873010 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c872ff0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146023d04 FUN_146023d04 body=392 status=ok
// SIG undefined FUN_146023d04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146023d04(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14c873000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14c873018 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14c872ff0;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c;
      if (*(longlong *)(lVar1 + 0x10 + lVar2 * 0x848) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + lVar2 * 0x848) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14c872ff8 = 0;
  if (DAT_14c872ffc != 0) {
    FUN_14681b54a();
  }
  _DAT_14c873020 = 0xffffffff;
  DAT_14c873018 = 0;
  if (0x80 < DAT_14c87301c) {
    DAT_14c87301c = 0x80;
    FUN_1446efbd8(&DAT_14c873000,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146023e8e FUN_146023e8e body=121 status=ok
// SIG undefined FUN_146023e8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146023e8e(void)

{
  FUN_146023f08();
  _DAT_14c950d90 = &PTR_FUN_149e8b930;
  _DAT_14c950e48 = 0;
  _DAT_14c950e50 = 0;
  _DAT_14c950e28 = 0;
  uRam000000014c950e30 = 0;
  _DAT_14c950e54 = 0xffffffff00000080;
  _DAT_14c950e5c = 0;
  _DAT_14c950e68 = 0;
  _DAT_14c950e70 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c950e78);
                    /* WARNING: Could not recover jumptable at 0x000146023f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c950e78,4000);
  return;
}



// FUNCTION 146023f08 FUN_146023f08 body=142 status=ok
// SIG undefined FUN_146023f08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146023f08(void)

{
  _DAT_14c950d90 = &PTR_FUN_149e8b950;
  _DAT_14c950db8 = 0;
  _DAT_14c950dc0 = 0;
  DAT_14c950d98 = 0;
  _DAT_14c950da0 = 0;
  _DAT_14c950dc4 = 0xffffffff00000080;
  DAT_14c950dcc = 0;
  DAT_14c950dd8 = 0;
  DAT_14c950de0 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c950de8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c950de8,4000);
  DAT_14c950e10 = 0;
  _DAT_14c950e18 = 0;
  _DAT_14c950e20 = 0;
  return;
}



// FUNCTION 146023f96 FUN_146023f96 body=110 status=ok
// SIG undefined FUN_146023f96(void)

void FUN_146023f96(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14176ac60(param_1,iVar1);
    }
    FUN_142d61761((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
      FUN_146024004(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146024004 FUN_146024004 body=62 status=ok
// SIG undefined FUN_146024004(void)

void FUN_146024004(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146024042(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,4);
  }
  return;
}



// FUNCTION 146024042 FUN_146024042 body=91 status=ok
// SIG undefined FUN_146024042(void)

ulonglong FUN_146024042(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,4);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1460240a8 FUN_1460240a8 body=251 status=ok
// SIG undefined FUN_1460240a8(void)

undefined8 * FUN_1460240a8(undefined8 *param_1)

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
  FUN_145c37414();
  *param_1 = &PTR_FUN_14a71e470;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"ForceComponent0",1);
  uVar2 = FUN_14595a198();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  FUN_1405e4918(param_1,0x3dcccccd);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460241b0 FUN_1460241b0 body=252 status=ok
// SIG undefined FUN_1460241b0(void)

undefined8 * FUN_1460241b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14ad7ecd0;
  param_1[7] = &PTR_FUN_14ad7f110;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b) = 0;
  *(undefined8 *)((longlong)param_1 + 99) = 0;
  param_1[0xe] = 0xc059000000000000;
  param_1[0xf] = 0xc059000000000000;
  param_1[0x10] = 0xc059000000000000;
  param_1[0x11] = 0x4059000000000000;
  param_1[0x12] = 0x4059000000000000;
  param_1[0x13] = 0x4059000000000000;
  *(undefined1 *)(param_1 + 0x14) = 1;
  puVar2 = (undefined8 *)FUN_14001cc68(0xb0);
  memset(puVar2 + 4,0,0x90);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14ad7fa00;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3c) = 0xffffffff00000080;
  puVar2[0x10] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x8c) = 0xffffffff00000080;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 1460242ac FUN_1460242ac body=1001 status=ok
// SIG undefined FUN_1460242ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460242ac(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_3e8 [32];
  byte *local_3c8;
  byte local_3c0 [32];
  undefined1 local_3a0;
  undefined4 local_398 [8];
  undefined1 local_378 [32];
  byte abStack_358 [48];
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined1 local_308 [48];
  undefined1 local_2d8 [32];
  undefined1 local_2b8;
  byte local_2b0 [32];
  undefined1 local_290;
  byte local_288 [32];
  byte local_268 [32];
  byte abStack_248 [120];
  undefined1 local_1d0 [32];
  undefined1 local_1b0;
  undefined1 local_1a8 [16];
  longlong local_198;
  undefined1 local_188 [32];
  byte local_168;
  undefined1 local_160 [144];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  FUN_145c6695c(param_2);
  FUN_146024696(param_2);
  FUN_1412e3d1e(&local_d0);
  _DAT_14cb71b0c = local_d0;
  uRam000000014cb71b10 = uStack_cc;
  uRam000000014cb71b14 = uStack_c8;
  uRam000000014cb71b18 = uStack_c4;
  local_328 = DAT_14c9a2ffc;
  uStack_324 = DAT_14c9a3000;
  uStack_320 = DAT_14c9a3004;
  uStack_31c = DAT_14c9a3008;
  _DAT_14c9a2ffc = CONCAT44(uStack_cc,local_d0);
  _DAT_14c9a3004 = CONCAT44(uStack_c4,uStack_c8);
  local_1b0 = 0;
  FUN_14101bd16(local_1d0,&DAT_149dfb77a);
  local_3c8 = local_1d0;
  FUN_140d767d6(local_1a8,&DAT_14cb71db0,DAT_14cb71de8,L"Heartbeat");
  cVar1 = FUN_140e27f2c(local_1a8);
  if (cVar1 == '\0') {
    local_290 = 0;
    FUN_14101bd16(local_2b0,&DAT_149dfb77a);
    pbVar3 = local_288;
    local_3c8 = local_2b0;
  }
  else {
    abStack_248[0x28] = 0;
    FUN_14101bd16(abStack_248 + 8,&DAT_149dfb77a);
    pbVar3 = abStack_248 + 0x30;
    local_3c8 = abStack_248 + 8;
  }
  FUN_140d767d6(pbVar3,&DAT_14cb71db0,DAT_14cb71de8,L"Heartbeat");
  FUN_140d76846(local_160,pbVar3);
  FUN_14027c224(&local_d0,local_160);
  uVar2 = FUN_14479d2ce(param_2);
  if ((char)local_d0 == '\x01') {
    FUN_140f3f840(&uStack_c8,uVar2);
  }
  FUN_14027c198(&local_d0);
  FUN_1404eeb8e(local_160);
  if (cVar1 == '\0') {
    pbVar3 = local_268;
  }
  else {
    pbVar3 = abStack_248 + 0x50;
  }
  (*(code *)(&PTR_FUN_14a1842f0)[pbVar3[0x20]])(pbVar3);
  if (*(longlong *)(pbVar3 + -0x10) != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_168])(local_188);
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  _DAT_14c9a2ffc = CONCAT44(uStack_324,local_328);
  _DAT_14c9a3004 = CONCAT44(uStack_31c,uStack_320);
  if (*(double *)(param_2 + 0xb0) <= 0.0 && *(double *)(param_2 + 0xb0) != 0.0) {
    local_2b8 = 0;
    FUN_14101bd16(local_2d8,&DAT_149dfb77a);
    local_3c8 = local_2d8;
    FUN_140d767d6(local_1a8,&DAT_14cb71db0,DAT_14cb71de8,L"IdleStart");
    cVar1 = FUN_140e27f2c(local_1a8);
    if (cVar1 == '\0') {
      local_3a0 = 0;
      FUN_14101bd16(local_3c0,&DAT_149dfb77a);
      puVar5 = local_398;
      local_3c8 = local_3c0;
    }
    else {
      abStack_358[0x28] = 0;
      FUN_14101bd16(abStack_358 + 8,&DAT_149dfb77a);
      puVar5 = &local_328;
      local_3c8 = abStack_358 + 8;
    }
    FUN_140d767d6(puVar5,&DAT_14cb71db0,DAT_14cb71de8,L"IdleStart");
    FUN_140d76846(local_160,puVar5);
    FUN_14027c224(&local_d0,local_160);
    uVar2 = FUN_14479d2ce(param_2);
    if ((char)local_d0 == '\x01') {
      FUN_140f3f840(&uStack_c8,uVar2);
    }
    FUN_14027c198(&local_d0);
    FUN_1404eeb8e(local_160);
    if (cVar1 == '\0') {
      puVar4 = local_378;
    }
    else {
      puVar4 = local_308;
    }
    (*(code *)(&PTR_FUN_14a1842f0)[(byte)puVar4[0x20]])(puVar4);
    if (*(longlong *)(puVar4 + -0x10) != 0) {
      FUN_1400020a8();
    }
    (*(code *)(&PTR_FUN_14a1842f0)[local_168])(local_188);
    if (local_198 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1415beab4(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146024696 FUN_146024696 body=659 status=ok
// SIG undefined FUN_146024696(void)

void FUN_146024696(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = *(int *)(param_1 + 0x88);
  piVar1 = (int *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  cVar6 = FUN_144729dda();
  if (cVar6 != '\0') {
    lVar9 = FUN_14479d2ce(param_1);
    iVar4 = *(int *)(lVar9 + 0x3b0);
    if ((longlong)iVar4 == 0) {
      uVar8 = 0;
    }
    else {
      lVar9 = *(longlong *)(lVar9 + 0x3a8);
      lVar14 = 0;
      uVar8 = 0;
      do {
        plVar5 = *(longlong **)(lVar9 + lVar14);
        bVar2 = *(byte *)((longlong)plVar5 + 0x39a);
        if ((bVar2 & 0x20) == 0) {
          if ((bVar2 & 2) == 0) {
            if ((bVar2 & 8) == 0) {
              if (((iVar3 == 1) ||
                  (plVar10 = (longlong *)FUN_1401b2ade(plVar5), plVar10 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar10 + 0x6c8))(plVar10), cVar6 == '\0')) {
                *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
              }
              else {
                *piVar1 = *piVar1 + 1;
              }
              if (plVar5 != (longlong *)0x0) {
                lVar11 = FUN_140082f10();
                if ((*(int *)(lVar11 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
                    lVar11 + 0x30)) {
                  local_54 = 0;
                  local_4c = 0;
                  cVar6 = (**(code **)(*plVar5 + 0x778))(plVar5,&local_78);
                  if (cVar6 != '\0') {
                    local_4c = ((int)local_68 / 0x14) * 0x14;
                    local_54 = CONCAT44(((int)dStack_70 / 0x14) * 0x14,((int)local_78 / 0x14) * 0x14
                                       );
                  }
                  uVar7 = FUN_1448eb174(&local_54,0xc,0);
                  uVar8 = FUN_144a78877(uVar7,uVar8);
                }
              }
            }
            else {
              *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
            }
          }
          else {
            *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
          }
        }
        lVar14 = lVar14 + 8;
      } while ((longlong)iVar4 * 8 != lVar14);
    }
    FUN_14602492a(param_1,uVar8);
  }
  if (iVar3 == 1) {
    pwVar12 = L"Dedicated";
    goto LAB_1460248dc;
  }
  pwVar12 = L"None";
  if (*piVar1 < 1) goto LAB_1460248dc;
  if (*(int *)(param_1 + 0x88) == 2) {
    if (*(int *)(param_1 + 0x9c) < 1) goto LAB_1460248c7;
    pwVar13 = L"Coop";
    pwVar12 = L"SplitCoop";
  }
  else {
    if (*(int *)(param_1 + 0x88) != 0) goto LAB_1460248dc;
LAB_1460248c7:
    pwVar13 = L"Solo";
    pwVar12 = L"Split";
  }
  if (*piVar1 == 1) {
    pwVar12 = pwVar13;
  }
LAB_1460248dc:
  if (pwVar12 != *(wchar_t **)(param_1 + 0x90)) {
    *(wchar_t **)(param_1 + 0x90) = pwVar12;
    FUN_1412e3d1e(&local_78);
    *(double *)(param_1 + 0x30) = local_78;
    *(double *)(param_1 + 0x38) = dStack_70;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14602492a FUN_14602492a body=225 status=ok
// SIG undefined FUN_14602492a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602492a(longlong param_1,int param_2)

{
  double dVar1;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  dVar1 = 0.0;
  if (*(int *)(param_1 + 0xa8) == param_2) {
    dVar1 = *(double *)(param_1 + 0xb0);
    if ((dVar1 != 0.0) || (NAN(dVar1))) {
      if (dVar1 <= 0.0) goto LAB_146024959;
      QueryPerformanceCounter(&local_28);
      if ((double)local_28.QuadPart * DAT_14c83f420 + 16777216.0 <=
          (double)_DAT_14c763854 + *(double *)(param_1 + 0xb0)) goto LAB_146024959;
      dVar1 = -1.0;
    }
    else {
      QueryPerformanceCounter(&local_28);
      dVar1 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
    }
  }
  *(double *)(param_1 + 0xb0) = dVar1;
LAB_146024959:
  *(int *)(param_1 + 0xa8) = param_2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146024a12 FUN_146024a12 body=44 status=ok
// SIG undefined FUN_146024a12(void)

void FUN_146024a12(void)

{
  FUN_1459c92ae();
  if (DAT_14cab42f0 != DAT_14cab431c) {
    FUN_146024bae();
    FUN_146024a3e();
    return;
  }
  return;
}



// FUNCTION 146024a3e FUN_146024a3e body=366 status=ok
// SIG undefined FUN_146024a3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146024a3e(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14cab42f8;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14cab4310 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14cab42e8;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      lVar1 = *local_60 + (longlong)iStack_44 * 0xa0;
      if (*(longlong *)(*local_60 + 0x50 + (longlong)iStack_44 * 0xa0) != 0) {
        plVar2 = (longlong *)(lVar1 + 0x70);
        if (*(longlong **)(lVar1 + 0x60) != (longlong *)0x0) {
          plVar2 = *(longlong **)(lVar1 + 0x60);
        }
        (**(code **)(*plVar2 + 0x10))();
      }
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        plVar2 = (longlong *)(lVar1 + 0x30);
        if (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0) {
          plVar2 = *(longlong **)(lVar1 + 0x20);
        }
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  DAT_14cab42f0 = 0;
  if (DAT_14cab42f4 < 0) {
    FUN_140de7f60(&DAT_14cab42e8,0);
  }
  _DAT_14cab4318 = 0xffffffff;
  DAT_14cab4310 = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146024bae FUN_146024bae body=374 status=ok
// SIG undefined FUN_146024bae(void)

void FUN_146024bae(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
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
  puVar5 = &DAT_14cab4320;
  if (DAT_14cab4328 != (undefined4 *)0x0) {
    puVar5 = DAT_14cab4328;
  }
  iVar4 = DAT_14cab4330 + 3;
  if (-1 < DAT_14cab4330) {
    iVar4 = DAT_14cab4330;
  }
  if (DAT_14cab42f0 - DAT_14cab431c < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14cab42f8;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14cab4310 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14cab4310;
    }
    local_78 = &DAT_14cab42e8;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14cab42f8)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        puVar5[*(int *)(*local_78 + 0x94 + (longlong)iVar2 * 0xa0)] = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14cab42e8 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14cab42f8 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14cab4330) {
      lVar3 = 0;
      do {
        puVar5[lVar3] = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14cab4330);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146024d26 FUN_146024d26 body=40 status=ok
// SIG undefined FUN_146024d26(void)

undefined8 FUN_146024d26(undefined8 param_1,int param_2)

{
  FUN_146024d4e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146024d4e FUN_146024d4e body=362 status=ok
// SIG undefined FUN_146024d4e(void)

void FUN_146024d4e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba54340;
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
  FUN_144760e21(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  lVar3 = param_1[0x10];
  if (lVar3 != 0) {
    FUN_1443bfc8a(lVar3);
    FUN_1400020a8(lVar3);
  }
  plVar4 = (longlong *)param_1[0xd];
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
  FUN_146024eb8(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 146024eb8 FUN_146024eb8 body=69 status=ok
// SIG undefined FUN_146024eb8(void)

void FUN_146024eb8(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ba59760;
  FUN_146024efe();
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 146024efe FUN_146024efe body=302 status=ok
// SIG undefined FUN_146024efe(void)

void FUN_146024efe(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x10) != 0) {
      puVar3 = *(undefined8 **)(lVar2 + 8);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
        FUN_1446efa72((longlong *)(lVar2 + 8),0,0,0x10);
        *(undefined4 *)(lVar2 + 0x10) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xb8) + 0x20))();
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 8))) {
    FUN_1401cb356();
    local_30 = *(undefined8 *)(param_1 + 0x28);
    local_28 = *(longlong *)(param_1 + 0x30);
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_30);
    lVar2 = *(longlong *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
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



// FUNCTION 14602503e FUN_14602503e body=59 status=ok
// SIG undefined FUN_14602503e(void)

longlong FUN_14602503e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146025146(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x70 + *param_1;
  thunk_FUN_14602507e(lVar2);
  return lVar2;
}



// FUNCTION 146025079 thunk_FUN_14602507e body=5 status=ok
// SIG undefined thunk_FUN_14602507e(void)

undefined1 * thunk_FUN_14602507e(undefined1 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 6;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_140056680(&uStack_30,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 8) = uStack_30;
  *(undefined4 *)(param_1 + 0x10) = uStack_28;
  *(undefined4 *)(param_1 + 0x14) = uStack_24;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x31) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x50) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x58) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x60) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x68) = (int)plVar2[1];
  if ((uStack_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602507e FUN_14602507e body=198 status=ok
// SIG undefined FUN_14602507e(void)

undefined1 * FUN_14602507e(undefined1 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 6;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_140056680(&local_30,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 8) = local_30;
  *(undefined4 *)(param_1 + 0x10) = local_28;
  *(undefined4 *)(param_1 + 0x14) = local_24;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x31) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x50) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x58) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x60) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x68) = (int)plVar2[1];
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146025146 FUN_146025146 body=143 status=ok
// SIG undefined FUN_146025146(void)

void FUN_146025146(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1460251d6 FUN_1460251d6 body=485 status=ok
// SIG undefined FUN_1460251d6(void)

void FUN_1460251d6(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
    FUN_144a787a6(param_1 + 8,param_2 + 8);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  }
  if (*(int *)(param_1 + 0x24) != *(int *)(param_2 + 0x24)) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  }
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1413a454c(local_30,*(undefined4 *)(param_1 + 0x20),0);
  FUN_140008f88(param_1 + 0x50,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  plVar3 = plStack_40;
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
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1413a454c(local_30,*(undefined4 *)(param_1 + 0x28),0);
  FUN_140008f88(param_1 + 0x60,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  plVar3 = plStack_40;
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
  fVar5 = *(float *)(param_2 + 0x30) * 100.0;
  if ((fVar5 != *(float *)(param_1 + 0x30)) || (NAN(fVar5) || NAN(*(float *)(param_1 + 0x30)))) {
    iVar4 = *(int *)(param_1 + 0x34) + 1;
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_1460252fb;
    iVar4 = 1;
  }
  *(float *)(param_1 + 0x30) = fVar5;
  *(int *)(param_1 + 0x34) = iVar4;
LAB_1460252fb:
  if (*(int *)(param_1 + 0x3c) != *(int *)(param_2 + 0x3c)) {
    param_1[0x38] = param_2[0x38];
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  }
  if (*(int *)(param_1 + 0x44) != *(int *)(param_2 + 0x44)) {
    param_1[0x40] = param_2[0x40];
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  }
  if (*(int *)(param_1 + 0x4c) != *(int *)(param_2 + 0x4c)) {
    param_1[0x48] = param_2[0x48];
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460253bc FUN_1460253bc body=282 status=ok
// SIG undefined FUN_1460253bc(void)

void FUN_1460253bc(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  plVar3 = (longlong *)FUN_1415bf052();
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_1460254e6(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar4 == (longlong *)0x0) goto LAB_14602541f;
    *(undefined8 *)(param_1 + 0x38) = 0;
LAB_146025481:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14602541f;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x30) = plVar4;
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar3 != plVar4) {
      *(longlong **)(param_1 + 0x38) = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_14602541f;
      goto LAB_146025481;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14602541f;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_14602541f:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1460254e6 FUN_1460254e6 body=162 status=ok
// SIG undefined FUN_1460254e6(void)

void FUN_1460254e6(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146025525;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146025525;
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
LAB_146025525:
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
                    /* WARNING: Could not recover jumptable at 0x000146025584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14602571e FUN_14602571e body=428 status=ok
// SIG undefined FUN_14602571e(void)

longlong * FUN_14602571e(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1460257fe:
    *puVar5 = &PTR_LAB_14b4e31d0;
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
    *puVar5 = &PTR_FUN_14b4e3160;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1460257fe;
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
    *puVar5 = &PTR_LAB_14b4e31d0;
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
    *puVar5 = &PTR_FUN_14b4e3160;
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



// FUNCTION 1460258d6 FUN_1460258d6 body=239 status=ok
// SIG undefined FUN_1460258d6(void)

undefined8 * FUN_1460258d6(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6745d0;
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
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeac78) {
    FUN_144b3d300(&DAT_14caeac78);
    if (DAT_14caeac78 == -1) {
      FUN_1415bf174();
      atexit(FUN_14356d733);
      _Init_thread_footer(&DAT_14caeac78);
    }
  }
  param_1[0x25] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x26) = 0x3f000000;
  return param_1;
}



// FUNCTION 1460259d0 FUN_1460259d0 body=239 status=ok
// SIG undefined FUN_1460259d0(void)

undefined8 * FUN_1460259d0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a68df60;
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
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeac00) {
    FUN_144b3d300(&DAT_14caeac00);
    if (DAT_14caeac00 == -1) {
      FUN_1415bf28a();
      atexit(FUN_14356d69a);
      _Init_thread_footer(&DAT_14caeac00);
    }
  }
  param_1[0x25] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x26) = 0;
  return param_1;
}



// FUNCTION 146025ac0 FUN_146025ac0 body=40 status=ok
// SIG undefined FUN_146025ac0(void)

undefined8 FUN_146025ac0(undefined8 param_1,int param_2)

{
  FUN_146025ae8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146025ae8 FUN_146025ae8 body=224 status=ok
// SIG undefined FUN_146025ae8(void)

void FUN_146025ae8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a820540;
  param_1[5] = &PTR_FUN_14a8209c0;
  param_1[6] = &PTR_LAB_14a820a00;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 146025bc8 FUN_146025bc8 body=63 status=ok
// SIG undefined FUN_146025bc8(void)

undefined1 FUN_146025bc8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146025c08(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 146025c08 FUN_146025c08 body=135 status=ok
// SIG undefined FUN_146025c08(void)

longlong FUN_146025c08(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_144a7bb84(param_1 + 0x18,param_2 + 0x18);
  FUN_144a82394(param_1 + 0x30,param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  FUN_144a7bb84(param_1 + 0x50,param_2 + 0x50);
  FUN_144a82394(param_1 + 0x68,param_2 + 0x68);
  FUN_1411f346e(param_1 + 0x70,param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  return param_1;
}



// FUNCTION 146025c90 FUN_146025c90 body=226 status=ok
// SIG undefined FUN_146025c90(void)

longlong * FUN_146025c90(longlong *param_1)

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
  pcVar13 = FUN_1463fe93e;
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



// FUNCTION 146025d74 FUN_146025d74 body=130 status=ok
// SIG undefined FUN_146025d74(void)

undefined1 * FUN_146025d74(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Params";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x451;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147cf34e0;
}



// FUNCTION 146025df6 FUN_146025df6 body=138 status=ok
// SIG undefined FUN_146025df6(void)

code * FUN_146025df6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000452;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146025d74;
}



// FUNCTION 146025e80 FUN_146025e80 body=138 status=ok
// SIG undefined FUN_146025e80(void)

code * FUN_146025e80(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureBlend";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000454;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3456;
}



// FUNCTION 146025f0a FUN_146025f0a body=226 status=ok
// SIG undefined FUN_146025f0a(void)

longlong * FUN_146025f0a(longlong *param_1)

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
  pcVar13 = FUN_1463ff576;
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



// FUNCTION 146025fee FUN_146025fee body=132 status=ok
// SIG undefined FUN_146025fee(void)

undefined1 * FUN_146025fee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x36e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147d0a250;
}



// FUNCTION 146026072 FUN_146026072 body=136 status=ok
// SIG undefined FUN_146026072(void)

code * FUN_146026072(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightScreenToShadow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000373;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d0a028;
}



// FUNCTION 1460260fa FUN_1460260fa body=138 status=ok
// SIG undefined FUN_1460260fa(void)

code * FUN_1460260fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightNumCascades";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15000000374;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146026072;
}



// FUNCTION 146026184 FUN_146026184 body=158 status=ok
// SIG undefined FUN_146026184(void)

void FUN_146026184(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x2c8) != 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
    FUN_14480f766(*(longlong *)(param_1 + 0x1b0) + 0x340);
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FUN_14480f766(param_1 + 0x40);
  }
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  FUN_146026222(param_1);
  FUN_145a9a941(*(undefined8 *)(param_1 + 0x2e0),*(undefined4 *)(param_1 + 0x2e8));
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  if (*(int *)(param_1 + 0x2ec) == 0) {
    return;
  }
  FUN_148f0342a(param_1 + 0x2e0);
  return;
}



// FUNCTION 146026222 FUN_146026222 body=457 status=ok
// SIG undefined FUN_146026222(void)

void FUN_146026222(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
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
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  iVar5 = 0;
  FUN_140df79be(param_1 + 0xe0,0);
  FUN_145a9afbc(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_1460263ec(param_1 + 0xd0);
  }
  plVar1 = (longlong *)(param_1 + 0x160);
  lVar2 = param_1 + 0x170;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x188) != 0) {
    FUN_1449c0562(&local_50);
    iVar5 = *(int *)(param_1 + 0x188);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar5) || (local_48 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
        FUN_1456cec3c(lVar4);
LAB_146026397:
        FUN_144757f48(lVar4,0x40000000);
        uVar3 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        do {
          uVar3 = *(uint *)(lVar4 + 8);
          if ((uVar3 >> 0x15 & 1) != 0) break;
          LOCK();
          bVar6 = uVar3 == *(uint *)(lVar4 + 8);
          if (bVar6) {
            *(uint *)(lVar4 + 8) = uVar3 | 0x200000;
          }
          UNLOCK();
        } while (!bVar6);
      }
      else if (lVar4 != 0) goto LAB_146026397;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (((iStack_5c != iVar5) || (local_68 != lVar2)) || (local_78 != plVar1));
  }
  FUN_14602641c(plVar1);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460263ec FUN_1460263ec body=48 status=ok
// SIG undefined FUN_1460263ec(void)

void FUN_1460263ec(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14602641c FUN_14602641c body=67 status=ok
// SIG undefined FUN_14602641c(void)

void FUN_14602641c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_146026460(param_1);
    FUN_145a9b066(param_1,0);
    return;
  }
  FUN_145a9b066(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_145c0e9ec(param_1);
  return;
}



// FUNCTION 146026460 FUN_146026460 body=325 status=ok
// SIG undefined FUN_146026460(void)

void FUN_146026460(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1460265a6 FUN_1460265a6 body=75 status=ok
// SIG undefined FUN_1460265a6(void)

undefined8 * FUN_1460265a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14add3f20;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1460265f2(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1460265f2 FUN_1460265f2 body=53 status=ok
// SIG undefined FUN_1460265f2(void)

void FUN_1460265f2(longlong *param_1)

{
  FUN_146026628();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146026628 FUN_146026628 body=400 status=ok
// SIG undefined FUN_146026628(void)

void FUN_146026628(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
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
      lVar5 = *local_80;
      lVar4 = (longlong)iStack_64;
      lVar2 = lVar5 + lVar4 * 0x78;
      FUN_140038ae8(lVar2 + 0x58);
      plVar3 = *(longlong **)(lVar2 + 0x38);
      if (plVar3 != (longlong *)0x0) {
        lVar5 = lVar5 + lVar4 * 0x78;
        *(undefined8 *)(lVar5 + 0x38) = 0;
        (**(code **)(*plVar3 + 0x38))();
        plVar3 = *(longlong **)(lVar5 + 0x38);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1410fd13e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460267ba FUN_1460267ba body=103 status=ok
// SIG undefined FUN_1460267ba(void)

ulonglong FUN_1460267ba(longlong param_1)

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
LAB_146026804:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146026804;
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



// FUNCTION 146026822 FUN_146026822 body=53 status=ok
// SIG undefined FUN_146026822(void)

void FUN_146026822(longlong *param_1)

{
  FUN_146026858();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146026858 FUN_146026858 body=343 status=ok
// SIG undefined FUN_146026858(void)

void FUN_146026858(longlong *param_1)

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
      FUN_148aea924((longlong)iStack_4c * 0x88 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144a544ac(param_1,0);
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



// FUNCTION 1460269b0 FUN_1460269b0 body=26 status=ok
// SIG undefined FUN_1460269b0(void)

void FUN_1460269b0(undefined8 param_1)

{
  FUN_140893b6e();
  FUN_1460269ca(param_1);
  return;
}



// FUNCTION 1460269ca FUN_1460269ca body=288 status=ok
// SIG undefined FUN_1460269ca(void)

void FUN_1460269ca(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
  if (lVar3 == 0) {
    FUN_146026fe6(&local_28,param_1);
  }
  else {
    FUN_140457ffc(&DAT_14c9647a0,param_1);
    uVar2 = FUN_14490d72a(lVar3);
    *(undefined4 *)(param_1 + 0x88) = uVar2;
    FUN_14485c47a(param_1 + 0x8c,*(undefined8 *)(lVar3 + 0x38));
    plVar4 = (longlong *)
             FUN_146026b38((uint)((ulonglong)*(undefined8 *)(param_1 + 0x8c) >> 0x20) ^
                           (uint)*(undefined8 *)(param_1 + 0x8c),param_1 + 0x8c);
    local_28 = 0;
    FUN_14485c47a(&local_28,param_1);
    iVar1 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
      FUN_146026bbe(plVar4,iVar1);
    }
    *(longlong *)(*plVar4 + (longlong)iVar1 * 8) = local_28;
    FUN_146026aec(param_1);
    lVar3 = *(longlong *)(param_1 + 0x28);
    local_28 = param_1;
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    FUN_1405f6d44(lVar3 + 0x16c8,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146026aec FUN_146026aec body=76 status=ok
// SIG undefined FUN_146026aec(void)

void FUN_146026aec(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x88) != 3) {
    FUN_1410572ee(param_1 + 0x68);
    FUN_1410572ee(param_1 + 0x78);
    lVar1 = FUN_1410573c2(param_1);
    if (lVar1 != 0) {
      FUN_141081152(lVar1,param_1 + 0x78);
      return;
    }
  }
  return;
}



// FUNCTION 146026b38 FUN_146026b38 body=132 status=ok
// SIG undefined FUN_146026b38(void)

longlong FUN_146026b38(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_146026c42();
  if ((iVar1 == -1) || (lVar2 = (longlong)iVar1 * 0x20, DAT_14cb7d128 + lVar2 == 0)) {
    local_28 = param_2;
    FUN_146026d10(&local_1c,param_1);
    lVar2 = (longlong)local_1c << 5;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + DAT_14cb7d128 + 8;
}



// FUNCTION 146026bbe FUN_146026bbe body=132 status=ok
// SIG undefined FUN_146026bbe(void)

void FUN_146026bbe(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146026c42 FUN_146026c42 body=205 status=ok
// SIG undefined FUN_146026c42(void)

int FUN_146026c42(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7d130 != DAT_14cb7d15c) {
    puVar2 = &DAT_14cb7d160;
    if (DAT_14cb7d168 != (undefined *)0x0) {
      puVar2 = DAT_14cb7d168;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb7d170 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb7d128 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_1460869b8(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_146026c6f;
        iVar3 = *(int *)(DAT_14cb7d128 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_146026c6f:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 146026d10 FUN_146026d10 body=289 status=ok
// SIG undefined FUN_146026d10(void)

undefined4 * FUN_146026d10(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146026ed8(local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar2 = FUN_146026e32(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14cb7d130 - DAT_14cb7d15c;
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14cb7d170)) {
      param_2 = DAT_14cb7d170 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x1c) = param_2;
      puVar4 = DAT_14cb7d168;
      if (DAT_14cb7d168 == (undefined *)0x0) {
        puVar4 = &DAT_14cb7d160;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14cb7d170 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14cb7d168;
      if (DAT_14cb7d168 == (undefined *)0x0) {
        puVar4 = &DAT_14cb7d160;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14cb7d170 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14cb7d170 = iVar6;
      FUN_1460270d6();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146026e32 FUN_146026e32 body=165 status=ok
// SIG undefined FUN_146026e32(void)

undefined8 FUN_146026e32(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb7d130 - DAT_14cb7d15c != 1) {
    local_30 = *param_2;
    iVar6 = FUN_145d4a1de();
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(DAT_14cb7d128 + (longlong)iVar6 * 0x20);
      if (*(longlong *)(DAT_14cb7d128 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_2;
      uVar3 = *(undefined4 *)((longlong)param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_2[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_145d4a43a(*param_3);
      *param_3 = iVar6;
      uVar7 = 1;
      goto LAB_146026e5d;
    }
  }
  uVar7 = 0;
LAB_146026e5d:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146026ed8 FUN_146026ed8 body=269 status=ok
// SIG undefined FUN_146026ed8(void)

int * FUN_146026ed8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7d158;
  iVar3 = DAT_14cb7d130;
  if (DAT_14cb7d15c == 0) {
    iVar2 = DAT_14cb7d130 + 1;
    bVar7 = DAT_14cb7d134 == DAT_14cb7d130;
    DAT_14cb7d130 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb7d128,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7d138,1);
    puVar4 = DAT_14cb7d148;
    if (DAT_14cb7d148 == (undefined4 *)0x0) {
      puVar4 = &DAT_14cb7d138;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    puVar4[iVar5 >> 5] = puVar4[iVar5 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb7d158;
    DAT_14cb7d158 = *(int *)(DAT_14cb7d128 + 4 + lVar6 * 0x20);
    DAT_14cb7d15c = DAT_14cb7d15c + -1;
    if (DAT_14cb7d15c != 0) {
      *(undefined4 *)(DAT_14cb7d128 + (longlong)DAT_14cb7d158 * 0x20) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7d138;
  if (DAT_14cb7d148 != (undefined4 *)0x0) {
    puVar4 = DAT_14cb7d148;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb7d128;
  return param_1;
}



// FUNCTION 146026fe6 FUN_146026fe6 body=239 status=ok
// SIG undefined FUN_146026fe6(void)

undefined8 FUN_146026fe6(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14a1e1a40;
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
  *local_30 = &PTR_FUN_14b401a20;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_146153932;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460270d6 FUN_1460270d6 body=489 status=ok
// SIG undefined FUN_1460270d6(void)

void FUN_1460270d6(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb7d168 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7d168,0,0,4);
  }
  uVar2 = DAT_14cb7d170;
  uVar3 = local_50;
  if (DAT_14cb7d170 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7d160,0,DAT_14cb7d170,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cb7d168;
        if (DAT_14cb7d168 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7d160;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb7d170 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7d138;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7d150 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7d128;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)
                (int)((uint)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20) ^
                     (uint)*(undefined8 *)(lVar1 + lVar6)) & (longlong)(int)DAT_14cb7d170 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cb7d168;
        if (DAT_14cb7d168 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7d160;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb7d170 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb7d168;
        if (DAT_14cb7d168 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7d160;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7d170 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < (int)local_58[6]);
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460272c0 FUN_1460272c0 body=133 status=ok
// SIG undefined FUN_1460272c0(void)

longlong * FUN_1460272c0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_146027346(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 146027346 FUN_146027346 body=132 status=ok
// SIG undefined FUN_146027346(void)

void FUN_146027346(longlong param_1,int param_2)

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



// FUNCTION 1460273d6 FUN_1460273d6 body=353 status=ok
// SIG undefined FUN_1460273d6(void)

undefined8 * FUN_1460273d6(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  *param_1 = &PTR_FUN_14a673a50;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaae0) {
    FUN_144b3d300(&DAT_14caeaae0);
    if (DAT_14caeaae0 == -1) {
      FUN_1415bf816();
      atexit((_func_5014 *)&LAB_14356d594);
      _Init_thread_footer(&DAT_14caeaae0);
    }
    if (*(int *)((longlong)param_1 + 0xac) < 0) {
      *(undefined4 *)(param_1 + 0x15) = 0;
      FUN_147bb3bca(param_1 + 0x14,0);
      goto LAB_146027496;
    }
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
LAB_146027496:
  FUN_1446f470e(&local_30,&DAT_149dfb77a,1);
  iVar2 = *(int *)(param_1 + 0x15);
  *(uint *)(param_1 + 0x15) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xac) < iVar2 + 1U) {
    FUN_145c36f2c(param_1 + 0x14,iVar2);
  }
  lVar3 = param_1[0x14];
  lVar4 = (longlong)iVar2 * 0x1c;
  *(undefined8 *)(lVar3 + lVar4) = local_30;
  puVar1 = (undefined8 *)(lVar3 + 8 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar3 + 0x18 + lVar4) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146027544 FUN_146027544 body=332 status=ok
// SIG undefined FUN_146027544(void)

undefined8 * FUN_146027544(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong local_68;
  undefined1 *local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14117d212();
  *param_1 = &PTR_FUN_14ae43ca0;
  param_1[5] = &PTR_FUN_14ae43fc0;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  FUN_140e2f50a(param_1,4);
  *param_1 = &PTR_FUN_14ae5fa90;
  param_1[5] = &PTR_FUN_14ae5fdb0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0x4010101;
  *(undefined1 *)((longlong)param_1 + 0x37c) = 1;
  plVar1 = (longlong *)FUN_146027692();
  if ((longlong)(int)plVar1[1] != 0) {
    lVar2 = *plVar1;
    lVar3 = (longlong)(int)plVar1[1] << 3;
    do {
      local_69 = 0;
      local_68 = lVar2;
      local_60 = &local_69;
      FUN_1460276f6(param_1 + 0x65,local_54,&local_68,0);
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146027692 FUN_146027692 body=99 status=ok
// SIG undefined FUN_146027692(void)

undefined8 * FUN_146027692(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb448c0) {
    FUN_144b3d300(&DAT_14cb448c0);
    if (DAT_14cb448c0 == -1) {
      FUN_1415bf8bc();
      atexit((_func_5014 *)&LAB_143ae4641);
      _Init_thread_footer(&DAT_14cb448c0);
    }
  }
  return &DAT_14cb448b0;
}



// FUNCTION 1460276f6 FUN_1460276f6 body=350 status=ok
// SIG undefined FUN_1460276f6(void)

undefined4 *
FUN_1460276f6(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140a2bc24(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_140a2bb88(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)(local_40 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_140a2be0e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146027860 FUN_146027860 body=254 status=ok
// SIG undefined FUN_146027860(void)

undefined8 * FUN_146027860(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  FUN_1457e6eec();
  *param_1 = &PTR_FUN_14b4b1df0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_14b4b2100;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  param_1[0xf] = puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4c2380;
  plVar4[2] = (longlong)puVar3;
  param_1[0x10] = plVar4;
  if (puVar3 != (undefined8 *)0x0) {
    if (plVar4 == (longlong *)0x0) {
      puVar3[1] = puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar3[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar3[2] = plVar4;
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
    }
  }
  return param_1;
}



// FUNCTION 14602795e FUN_14602795e body=40 status=ok
// SIG undefined FUN_14602795e(void)

undefined8 FUN_14602795e(undefined8 param_1,int param_2)

{
  FUN_146027986();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146027986 FUN_146027986 body=276 status=ok
// SIG undefined FUN_146027986(void)

void FUN_146027986(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc90980;
  FUN_140fed6e2(param_1 + 0x78);
  FUN_1415bfad0(param_1 + 0x74);
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_14593690a(param_1);
  return;
}



// FUNCTION 146027a9a FUN_146027a9a body=116 status=ok
// SIG undefined FUN_146027a9a(void)

void FUN_146027a9a(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 146027b1a FUN_146027b1a body=821 status=ok
// SIG undefined FUN_146027b1a(void)

/* WARNING: Removing unreachable block (ram,0x000146027e32) */
/* WARNING: Removing unreachable block (ram,0x000146027e46) */

undefined8 * FUN_146027b1a(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  ulonglong *local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  ulonglong local_50 [4];
  
  local_50[0] = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b449db0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x24e4;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x46) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 1;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x42200000;
  *(undefined2 *)(param_1 + 0xe) = 0x201;
  *(undefined1 *)((longlong)param_1 + 0x72) = 1;
  *(undefined4 *)((longlong)param_1 + 0x73) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x11005;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_1400b22c2(param_1 + 0x14,"Droid Sans");
  *(undefined2 *)(param_1 + 0x16) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb2) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc9) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xcb) = 0x10;
  FUN_1400b22c2(param_1 + 0x1a,"UITextures");
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x2400000;
  FUN_1400b22c2(&local_b0,"uiresources");
  FUN_1410f2562(&local_c0);
  iVar2 = local_a8 + -1;
  if (local_a8 == 0) {
    iVar2 = 0;
  }
  FUN_1412cfe60(&local_a0,&local_c0,iVar2 + 1 + (uint)(local_b8 == 0));
  FUN_1401aebe8(&local_a0,local_b0,iVar2);
  iVar2 = *(int *)(param_1 + 7);
  *(uint *)(param_1 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3c) < iVar2 + 1U) {
    FUN_146027e50(param_1 + 6,iVar2);
  }
  lVar3 = param_1[6];
  lVar1 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar1) = 0;
  *(undefined8 *)(lVar3 + lVar1) = local_a0;
  *(undefined4 *)(lVar3 + 8 + lVar1) = (undefined4)local_98;
  *(undefined4 *)(lVar3 + 0xc + lVar1) = local_98._4_4_;
  local_98 = 0;
  local_a0 = 0;
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_a0,"hidden");
  iVar2 = *(int *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 100) < iVar2 + 1U) {
    FUN_1447a1bd6(param_1 + 0xb,iVar2);
  }
  lVar3 = param_1[0xb];
  lVar1 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar1) = 0;
  *(undefined8 *)(lVar3 + lVar1) = local_a0;
  *(undefined4 *)(lVar3 + 8 + lVar1) = (undefined4)local_98;
  *(undefined4 *)(lVar3 + 0xc + lVar1) = local_98._4_4_;
  local_98 = 0;
  local_a0 = 0;
  FUN_1400b22c2(&local_a0,&DAT_14b45443e);
  FUN_1400b22c2(local_90,&DAT_14b454442);
  FUN_1400b22c2(local_80,&DAT_14b454446);
  FUN_1400b22c2(local_70,&DAT_14b45444a);
  FUN_1400b22c2(local_60,&DAT_14b45444e);
  local_c8 = local_50;
  local_d0 = &local_a0;
  FUN_146027ed4(param_1 + 0xf);
  lVar3 = 0x50;
  do {
    if (*(longlong *)((longlong)&local_b0 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
  if ((local_50[0] ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146027e50 FUN_146027e50 body=132 status=ok
// SIG undefined FUN_146027e50(void)

void FUN_146027e50(longlong param_1,int param_2)

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



// FUNCTION 146027ed4 FUN_146027ed4 body=96 status=ok
// SIG undefined FUN_146027ed4(void)

undefined8 * FUN_146027ed4(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  FUN_1447a1747(*param_1,*(undefined4 *)(param_1 + 1));
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 4;
  *(int *)(param_1 + 1) = (int)uVar2;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && (int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_1,uVar2 & 0xffffffff);
    FUN_140b8566a(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 146027f34 FUN_146027f34 body=40 status=ok
// SIG undefined FUN_146027f34(void)

undefined8 FUN_146027f34(undefined8 param_1,int param_2)

{
  FUN_146027f5c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146027f5c FUN_146027f5c body=386 status=ok
// SIG undefined FUN_146027f5c(void)

void FUN_146027f5c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14a4500b0;
  if (DAT_14c872a72 == '\0') {
    plVar1 = param_1 + 7;
    puVar2 = param_1 + 9;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = puVar2;
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = *(int *)(param_1 + 0xc);
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar4 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar5 = local_60._4_4_;
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar7) || (local_60 = local_40, local_48 != puVar2)) {
      do {
        local_60 = uVar4;
        lVar6 = *(longlong *)(*local_78 + 0x28 + (longlong)iVar5 * 0x40);
        if (lVar6 != 0) {
          uVar3 = *(uint *)(lVar6 + 0xc);
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          FUN_14482b126(lVar6,0x40000000);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar5 = local_60._4_4_;
        uVar4 = local_60;
      } while (local_78 != plVar1 || (local_68 != puVar2 || local_60._4_4_ != iVar7));
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1460280e0(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460280e0 FUN_1460280e0 body=53 status=ok
// SIG undefined FUN_1460280e0(void)

void FUN_1460280e0(longlong *param_1)

{
  FUN_146028116();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146028116 FUN_146028116 body=315 status=ok
// SIG undefined FUN_146028116(void)

void FUN_146028116(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x40) != 0) {
        FUN_1400020a8();
      }
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



// FUNCTION 146028260 FUN_146028260 body=40 status=ok
// SIG undefined FUN_146028260(void)

undefined8 FUN_146028260(undefined8 param_1,int param_2)

{
  FUN_1415c0590();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146028294 FUN_146028294 body=863 status=ok
// SIG undefined FUN_146028294(void)

longlong * FUN_146028294(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  void *_Dst;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  code *local_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c683c2();
  *param_1 = (longlong)&PTR_FUN_14aefaa40;
  param_1[5] = (longlong)&PTR_FUN_14aefb610;
  param_1[6] = (longlong)&PTR_LAB_14aefb650;
  param_1[0x55] = (longlong)&PTR_FUN_14aefb6a0;
  param_1[0x56] = (longlong)&PTR_FUN_14aefb720;
  param_1[0x57] = (longlong)&PTR_FUN_14aefb730;
  param_1[0xca] = (longlong)&PTR_FUN_14aefb760;
  param_1[0xcb] = (longlong)&PTR_FUN_14aefb770;
  param_1[0xcc] = (longlong)&PTR_FUN_14aefb790;
  param_1[0xcd] = (longlong)&PTR_FUN_14aefb7b0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 2;
  param_1[0xda] = 0;
  param_1[0xdc] = 0;
  param_1[0xed] = 0;
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  *(undefined8 *)((longlong)param_1 + 0x774) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x77c) = 0;
  param_1[0xf1] = 0;
  *(undefined4 *)(param_1 + 0xf2) = 0;
  *(undefined4 *)(param_1 + 0xf3) = 1;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  FUN_1400ea934(param_1,DAT_14cad0f30,1);
  FUN_1446f470e(&local_38,L"DynamicMesh",1);
  uVar1 = FUN_140a1ade6();
  local_60 = 0;
  local_68 = 1;
  lVar2 = FUN_14048696c(param_1,local_38,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0xe2] = lVar2;
  local_50 = FUN_1484cc2ac;
  local_48 = 0;
  FUN_146028604(lVar2 + 0x58,&local_40,param_1,&local_50);
  param_1[0xe3] = local_40;
  local_50 = FUN_1484cc346;
  local_48 = 0;
  FUN_146028604(param_1[0xe2] + 0x40,&local_40,param_1,&local_50);
  param_1[0xe4] = local_40;
  _Dst = (void *)FUN_14001cc68(0x208);
  memset(_Dst,0,0x208);
  FUN_1458481c0(_Dst);
  *(undefined8 *)((longlong)_Dst + 0x1d8) = 0x7fefffffffffffff;
  *(undefined8 *)((longlong)_Dst + 0x1e0) = 0x7fefffffffffffff;
  *(undefined8 *)((longlong)_Dst + 0x1e8) = 0x7fefffffffffffff;
  *(undefined8 *)((longlong)_Dst + 0x1f0) = 0xffefffffffffffff;
  *(undefined8 *)((longlong)_Dst + 0x1f8) = 0xffefffffffffffff;
  *(undefined8 *)((longlong)_Dst + 0x200) = 0xffefffffffffffff;
  lVar2 = param_1[0xe5];
  param_1[0xe5] = (longlong)_Dst;
  if (lVar2 != 0) {
    FUN_145820e5c(lVar2);
    FUN_1400020a8(lVar2);
    _Dst = (void *)param_1[0xe5];
  }
  uVar1 = (**(code **)(*param_1 + 0xa88))(param_1);
  FUN_1460286e0(_Dst,uVar1);
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  lVar2 = param_1[0xe6];
  param_1[0xe6] = (longlong)puVar3;
  if (lVar2 != 0) {
    FUN_145c7bc0a(lVar2);
    FUN_1400020a8(lVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460285f4 FUN_1460285f4 body=15 status=ok
// SIG undefined FUN_1460285f4(void)

undefined8 FUN_1460285f4(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0x98);
}



// FUNCTION 146028604 FUN_146028604 body=218 status=ok
// SIG undefined FUN_146028604(void)

undefined8
FUN_146028604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14aef0390;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14aefeb90;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c6862a(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460286e0 FUN_1460286e0 body=218 status=ok
// SIG undefined FUN_1460286e0(void)

void FUN_1460286e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *(longlong *)(param_1 + 0x1d0) = param_2;
  uVar5 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar3 = 0;
  if ((uVar5 != 0) &&
     (uVar3 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar4 = 1;
    uVar2 = 1;
    if (1 < (int)uVar5) {
      uVar4 = uVar5;
    }
    do {
      uVar3 = uVar4;
      if (uVar4 == uVar2) break;
      uVar1 = uVar2 >> 9;
      uVar6 = uVar2 & 0x1ff;
      uVar3 = uVar2;
      uVar2 = uVar2 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar1] +
                                         (ulonglong)uVar6 * 2) - 1U));
  }
  do {
    if (uVar3 == uVar5) {
      return;
    }
    FUN_1484d25d8(param_1,uVar3);
    uVar4 = uVar3 + 1;
    if ((int)(uVar3 + 1) < (int)uVar5) {
      uVar4 = uVar5;
    }
    uVar2 = uVar3;
    do {
      uVar3 = uVar4;
      if (uVar4 - 1 == uVar2) break;
      uVar3 = uVar2 + 1;
      uVar2 = uVar3;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_2 + 0x148) +
                                           (ulonglong)(uVar3 >> 9) * 8) +
                                         (ulonglong)(uVar3 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 1460287ba FUN_1460287ba body=51 status=ok
// SIG undefined FUN_1460287ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460287ba(void)

{
  FUN_1460288de(&DAT_14cb7e0e0);
  _DAT_14cb7e0e0 = 0;
  FUN_1460287ee(&DAT_14cb7e0d8);
  _DAT_14cb7e0d8 = 0;
  return;
}



// FUNCTION 1460287ee FUN_1460287ee body=239 status=ok
// SIG undefined FUN_1460287ee(void)

void FUN_1460287ee(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_144a61b4f();
  if ((cVar2 != '\0') && (0 < DAT_14c9a78c8)) {
    lVar4 = 0;
    lVar5 = 0;
    lVar6 = DAT_14c9a78c0;
    do {
      if ((*(int *)(lVar6 + 8 + lVar4) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + lVar4), plVar1 == (longlong *)0x0)) {
        lVar3 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
        lVar3 = local_38;
        lVar6 = DAT_14c9a78c0;
      }
      if (lVar3 == *param_1) {
        FUN_1449db362((void *)(lVar6 + lVar4));
        if (DAT_14c9a78c8 + -1 != (int)lVar5) {
          memmove((void *)(lVar6 + lVar4),(void *)(lVar6 + lVar4 + 0x10),
                  (longlong)((DAT_14c9a78c8 + -1) - (int)lVar5) << 4);
        }
        DAT_14c9a78c8 = DAT_14c9a78c8 + -1;
        break;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < DAT_14c9a78c8);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460288de FUN_1460288de body=239 status=ok
// SIG undefined FUN_1460288de(void)

void FUN_1460288de(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_144a61b4f();
  if ((cVar2 != '\0') && (0 < DAT_14c9a7930)) {
    lVar4 = 0;
    lVar5 = 0;
    lVar6 = DAT_14c9a7928;
    do {
      if ((*(int *)(lVar6 + 8 + lVar4) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + lVar4), plVar1 == (longlong *)0x0)) {
        lVar3 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
        lVar3 = local_38;
        lVar6 = DAT_14c9a7928;
      }
      if (lVar3 == *param_1) {
        FUN_1449db362((void *)(lVar6 + lVar4));
        if (DAT_14c9a7930 + -1 != (int)lVar5) {
          memmove((void *)(lVar6 + lVar4),(void *)(lVar6 + lVar4 + 0x10),
                  (longlong)((DAT_14c9a7930 + -1) - (int)lVar5) << 4);
        }
        DAT_14c9a7930 = DAT_14c9a7930 + -1;
        break;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < DAT_14c9a7930);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460289ce FUN_1460289ce body=226 status=ok
// SIG undefined FUN_1460289ce(void)

longlong * FUN_1460289ce(longlong *param_1)

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
  pcVar13 = FUN_146489dba;
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



// FUNCTION 146028ab2 FUN_146028ab2 body=136 status=ok
// SIG undefined FUN_146028ab2(void)

code * FUN_146028ab2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumQuadsLOD0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14840a392;
}



// FUNCTION 146028b3a FUN_146028b3a body=138 status=ok
// SIG undefined FUN_146028b3a(void)

code * FUN_146028b3a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bRenderSelected";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14840a308;
}



// FUNCTION 146028bc4 FUN_146028bc4 body=138 status=ok
// SIG undefined FUN_146028bc4(void)

code * FUN_146028bc4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CaptureDepthRange";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14840a41c;
}



// FUNCTION 146028c4e FUN_146028c4e body=470 status=ok
// SIG undefined FUN_146028c4e(void)

void FUN_146028c4e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ushort *puVar7;
  int iVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  byte bVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1448d5e3c(&local_58,param_1 + 0x41);
  lVar4 = *(longlong *)(local_58 + 0x380);
  AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x6e0));
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
  lVar5 = param_1[0x51];
  if (lVar5 == 0) goto LAB_146028d76;
  if (*(char *)(lVar5 + 0x340) == '\0') {
    if (*(int *)(lVar5 + 0x344) == 0) {
      iVar8 = 1;
      goto LAB_146028de9;
    }
    bVar11 = 0;
  }
  else {
    iVar8 = *(int *)(lVar5 + 0x344) + 1;
LAB_146028de9:
    *(undefined1 *)(lVar5 + 0x340) = 0;
    *(int *)(lVar5 + 0x344) = iVar8;
    bVar11 = 1;
  }
  if ((*(char *)(lVar4 + 0x60) != '\x01') || (lVar9 = 0x3c8, *(char *)(lVar4 + 8) == '\x01')) {
    lVar9 = 0xb8;
  }
  lVar6 = *(longlong *)(lVar5 + 0x3c4);
  iVar8 = *(int *)(lVar5 + 0x688);
  iVar3 = *(int *)(lVar4 + 0x308 + lVar9);
  if (iVar8 == iVar3) {
LAB_146028dad:
    lVar9 = lVar6;
    if (*(int *)(lVar5 + 0x368) < 2) goto LAB_146028d3a;
    if ((bool)(~bVar11 & iVar8 == iVar3)) goto LAB_146028d76;
  }
  else {
    FUN_1415c1204(lVar5 + 0x380,lVar4 + lVar9);
    *(undefined4 *)(lVar5 + 0x688) = *(undefined4 *)(lVar4 + lVar9 + 0x308);
    lVar9 = *(longlong *)(lVar5 + 0x3c4);
    if (lVar6 == *(longlong *)(lVar5 + 0x3c4)) goto LAB_146028dad;
LAB_146028d3a:
    pwVar10 = L"ContinueCampaignText";
    if (lVar9 == 0) {
      pwVar10 = L"ContinueNAText";
    }
    FUN_14020fad6(lVar5 + 0x360,pwVar10);
  }
  puVar7 = *(ushort **)(lVar5 + 0x80);
  if (puVar7 != (ushort *)0x0) {
    *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
  }
LAB_146028d76:
  (**(code **)(*param_1 + 0x188))(param_1);
  ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x6e0));
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146028e26 FUN_146028e26 body=1109 status=ok
// SIG undefined FUN_146028e26(void)

void FUN_146028e26(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  ushort *puVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8 [2];
  longlong *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong *local_90;
  ulonglong *local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_68 [2];
  undefined8 local_58;
  ulonglong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) goto LAB_1460290e2;
  if ((*(char *)(lVar2 + 0x150) == '\0') && (*(char *)(lVar2 + 0x1a0) == '\x01')) {
    *(undefined1 *)(lVar2 + 0x290) = 1;
    FUN_14020fad6(lVar2 + 0x298,&DAT_149dfb77a);
    *(undefined1 *)(lVar2 + 0x2c0) = 1;
    *(undefined1 *)(lVar2 + 0x310) = 1;
    FUN_14020fad6(lVar2 + 0x318,L"tooltip_matchmaking_disabled");
    bVar4 = *(byte *)(lVar2 + 0x168) ^ 1;
    if (bVar4 == *(byte *)(lVar2 + 0x338)) {
      if (*(int *)(lVar2 + 0x33c) == 0) {
        iVar5 = 1;
        goto LAB_14602926b;
      }
    }
    else {
      iVar5 = *(int *)(lVar2 + 0x33c) + 1;
LAB_14602926b:
      *(byte *)(lVar2 + 0x338) = bVar4;
      *(int *)(lVar2 + 0x33c) = iVar5;
    }
    if (*(char *)(lVar2 + 0x490) == '\x01') {
      *(undefined1 *)(lVar2 + 0x288) = 1;
      *(undefined1 *)(lVar2 + 0x2b8) = 0;
    }
    else {
      *(undefined1 *)(lVar2 + 0x288) = 0;
      *(undefined1 *)(lVar2 + 0x2b8) = 1;
    }
  }
  else {
    if (*(char *)(lVar2 + 0x1b0) == '\x01') {
      *(undefined1 *)(lVar2 + 0x290) = 1;
      pwVar8 = L"tooltip_new_game_disabled";
    }
    else {
      *(byte *)(lVar2 + 0x290) = *(byte *)(param_1 + 0x2f8) ^ 1;
      if (*(char *)(param_1 + 0x2f8) == '\0') {
        pwVar8 = L"tooltip_load_character_disabled";
      }
      else {
        pwVar8 = L"tooltip_new_game";
      }
    }
    FUN_14020fad6(lVar2 + 0x298,pwVar8);
    *(undefined1 *)(lVar2 + 0x2c0) = 0;
    *(char *)(lVar2 + 0x310) = *(char *)(lVar2 + 0x490);
    pwVar8 = L"tooltip_matchmaking";
    if (*(char *)(lVar2 + 0x490) != '\0') {
      pwVar8 = L"tooltip_matchmaking_disabled_no_character";
    }
    FUN_14020fad6(lVar2 + 0x318,pwVar8);
    if (*(char *)(lVar2 + 0x148) == '\x01') {
      *(undefined1 *)(lVar2 + 0x288) = 1;
      *(undefined1 *)(lVar2 + 0x2b8) = *(undefined1 *)(lVar2 + 0x160);
      if (*(char *)(lVar2 + 0x338) == '\0') {
        if (*(int *)(lVar2 + 0x33c) != 0) goto LAB_146028f24;
        iVar5 = 1;
      }
      else {
        iVar5 = *(int *)(lVar2 + 0x33c) + 1;
      }
      *(undefined1 *)(lVar2 + 0x338) = 0;
      *(int *)(lVar2 + 0x33c) = iVar5;
    }
    else {
      *(undefined1 *)(lVar2 + 0x288) = 0;
      *(undefined1 *)(lVar2 + 0x2b8) = 0;
      bVar4 = *(byte *)(lVar2 + 0x168) ^ 1;
      if (bVar4 == *(byte *)(lVar2 + 0x338)) {
        if (*(int *)(lVar2 + 0x33c) != 0) goto LAB_146028f24;
        iVar5 = 1;
      }
      else {
        iVar5 = *(int *)(lVar2 + 0x33c) + 1;
      }
      *(byte *)(lVar2 + 0x338) = bVar4;
      *(int *)(lVar2 + 0x33c) = iVar5;
    }
  }
LAB_146028f24:
  *(byte *)(lVar2 + 0x2e8) = *(byte *)(param_1 + 0x300) ^ 1;
  pwVar8 = L"tooltip_load_character_disabled";
  if (*(char *)(param_1 + 0x300) != '\0') {
    pwVar8 = L"tooltip_load_character";
  }
  FUN_14020fad6(lVar2 + 0x2f0,pwVar8);
  *(byte *)(param_1 + 0x2b4) = *(byte *)(lVar2 + 0x2c0) ^ 1;
  *(undefined1 *)(param_1 + 0x328) = *(undefined1 *)(lVar2 + 0x290);
  plVar6 = (longlong *)FUN_140e82300();
  local_a8 = (longlong *)*plVar6;
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 8))();
  }
  local_a0 = (undefined4)plVar6[1];
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = (longlong *)((ulonglong)local_58._4_4_ << 0x20);
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddda2(local_68,"LANText",0);
  FUN_140ac6c96(local_68,&local_a8);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_14023409e(&local_c8,&local_a8,1);
  local_80 = &uStack_48;
  local_68[0] = local_68[0] & 0xffffffff00000000;
  local_68[1] = 0;
  local_58 = (longlong *)0x0;
  local_50 = local_50 & 0xffffffff00000000;
  local_88 = local_68;
  FUN_14010d304(&local_78);
  local_98 = local_c8;
  local_90 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_b8,&local_98,&local_78);
  FUN_14007f2db(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_c0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  uVar7 = FUN_1447a1f4a(local_b8);
  FUN_144a787a6(lVar2 + 0x370,uVar7);
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  FUN_1415c0f98(lVar2);
  puVar3 = *(ushort **)(lVar2 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))();
  }
LAB_1460290e2:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602927c FUN_14602927c body=157 status=ok
// SIG undefined FUN_14602927c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602927c(undefined8 param_1,ulonglong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_144a5dc74(local_58);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1414cd37a();
  FUN_14602931a((param_2 & 0xff) * 0x58 + _DAT_14c99e168,&local_88);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


