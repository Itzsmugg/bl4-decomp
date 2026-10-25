// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14877ad24 FUN_14877ad24 body=31 status=ok
// SIG undefined FUN_14877ad24(void)

undefined8 FUN_14877ad24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877ad44 FUN_14877ad44 body=55 status=ok
// SIG undefined FUN_14877ad44(void)

void FUN_14877ad44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bbc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bbc0 = FUN_140002ddd(FUN_14652e1f7,uVar1,L"MissionAliasTemplate_DerivedRegistryActor");
  }
  return;
}



// FUNCTION 14877ae1c FUN_14877ae1c body=59 status=ok
// SIG undefined FUN_14877ae1c(void)

undefined8 FUN_14877ae1c(longlong *param_1)

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



// FUNCTION 14877aebc FUN_14877aebc body=31 status=ok
// SIG undefined FUN_14877aebc(void)

undefined8 FUN_14877aebc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877aedc FUN_14877aedc body=55 status=ok
// SIG undefined FUN_14877aedc(void)

void FUN_14877aedc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bbd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bbd8 = FUN_140002ddd(FUN_14652e28d,uVar1,L"MissionAliasTemplate_DynamicTask");
  }
  return;
}



// FUNCTION 14877af80 FUN_14877af80 body=59 status=ok
// SIG undefined FUN_14877af80(void)

undefined8 FUN_14877af80(longlong *param_1)

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



// FUNCTION 14877b05c FUN_14877b05c body=54 status=ok
// SIG undefined FUN_14877b05c(void)

undefined1 FUN_14877b05c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140115bdc(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14877b092 FUN_14877b092 body=31 status=ok
// SIG undefined FUN_14877b092(void)

undefined1
FUN_14877b092(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144b082da(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14877b0b2 FUN_14877b0b2 body=262 status=ok
// SIG undefined FUN_14877b0b2(void)

undefined4
FUN_14877b0b2(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [12];
  byte local_6c;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 != 0) {
    local_80 = param_7;
    local_88 = param_6;
    (**(code **)(*param_3 + 0x30))(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  (**(code **)(*param_1 + 8))(0,local_78);
  if ((local_6c & 2) == 0) {
    FUN_1488ff86c(local_68);
  }
  local_80 = param_7;
  local_88 = param_6;
  uVar1 = (**(code **)(*param_3 + 0x30))(param_3,param_2,local_68,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_78);
  if ((local_6c & 4) != 0) {
    (**(code **)(local_68[0] + 0x58))(local_68,0);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14877b1ba FUN_14877b1ba body=41 status=ok
// SIG undefined FUN_14877b1ba(void)

void FUN_14877b1ba(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)(*param_3 + 0x28))(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14877b1f8 FUN_14877b1f8 body=59 status=ok
// SIG undefined FUN_14877b1f8(void)

undefined8 FUN_14877b1f8(longlong *param_1)

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



// FUNCTION 14877b2ac FUN_14877b2ac body=82 status=ok
// SIG undefined FUN_14877b2ac(void)

void FUN_14877b2ac(undefined8 *param_1)

{
  if (*(char *)(param_1 + 4) == '\x01') {
    *param_1 = &DAT_14a171d50;
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      FUN_140115c12(param_1 + 2,0);
    }
    param_1[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 14877b2fe FUN_14877b2fe body=59 status=ok
// SIG undefined FUN_14877b2fe(void)

void FUN_14877b2fe(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b348eb0;
  FUN_1488ff86c(param_2 + 3);
  *(undefined4 *)(param_2 + 7) = 3;
  return;
}



// FUNCTION 14877b33a FUN_14877b33a body=59 status=ok
// SIG undefined FUN_14877b33a(void)

void FUN_14877b33a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b348eb0;
  FUN_1488ff86c(param_2 + 3);
  *(undefined4 *)(param_2 + 7) = 3;
  return;
}



// FUNCTION 14877b39a FUN_14877b39a body=111 status=ok
// SIG undefined FUN_14877b39a(void)

undefined8 FUN_14877b39a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      FUN_140115bdc(param_2 + 0x18 + lVar1,param_3 + 0x18 + lVar1);
      *(undefined4 *)(param_2 + 0x38 + lVar1) = *(undefined4 *)(param_3 + 0x38 + lVar1);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14877b432 FUN_14877b432 body=59 status=ok
// SIG undefined FUN_14877b432(void)

undefined8 FUN_14877b432(longlong *param_1)

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



// FUNCTION 14877b478 FUN_14877b478 body=34 status=ok
// SIG undefined FUN_14877b478(void)

void FUN_14877b478(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14877b54a(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14877b4ec FUN_14877b4ec body=38 status=ok
// SIG undefined FUN_14877b4ec(void)

undefined8 FUN_14877b4ec(undefined8 param_1,int param_2)

{
  FUN_14877b54a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877b512 FUN_14877b512 body=55 status=ok
// SIG undefined FUN_14877b512(void)

void FUN_14877b512(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bc38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bc38 = FUN_140002ddd(FUN_14652e46c,uVar1,L"MissionArchetypeDef");
  }
  return;
}



// FUNCTION 14877b54a FUN_14877b54a body=104 status=ok
// SIG undefined FUN_14877b54a(void)

void FUN_14877b54a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b348eb0;
  param_1[3] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_140115c12(param_1 + 5,0);
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14877b5b4 FUN_14877b5b4 body=104 status=ok
// SIG undefined FUN_14877b5b4(void)

undefined8 FUN_14877b5b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1488ffa7e(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877b61e FUN_14877b61e body=28 status=ok
// SIG undefined FUN_14877b61e(void)

undefined8 FUN_14877b61e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14877b6b4 FUN_14877b6b4 body=59 status=ok
// SIG undefined FUN_14877b6b4(void)

undefined8 FUN_14877b6b4(longlong *param_1)

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



// FUNCTION 14877b754 FUN_14877b754 body=29 status=ok
// SIG undefined FUN_14877b754(void)

undefined8 FUN_14877b754(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877b772 FUN_14877b772 body=55 status=ok
// SIG undefined FUN_14877b772(void)

void FUN_14877b772(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bc68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bc68 = FUN_140002ddd(FUN_14652e533,uVar1,L"MissionBinderTarget");
  }
  return;
}



// FUNCTION 14877b7aa FUN_14877b7aa body=41 status=ok
// SIG undefined FUN_14877b7aa(void)

longlong * FUN_14877b7aa(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14877b7d3();
  *param_2 = lVar1 + 0x10;
  param_2[1] = lVar1;
  FUN_14877b8ce(param_2);
  return param_2;
}



// FUNCTION 14877b7d3 FUN_14877b7d3 body=117 status=ok
// SIG undefined FUN_14877b7d3(void)

void FUN_14877b7d3(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b347dc0;
  puVar1[2] = &PTR_FUN_14b349000;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x7c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
  return;
}



// FUNCTION 14877b852 FUN_14877b852 body=29 status=ok
// SIG undefined FUN_14877b852(void)

undefined8 FUN_14877b852(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877b870 FUN_14877b870 body=38 status=ok
// SIG undefined FUN_14877b870(void)

undefined8 FUN_14877b870(undefined8 param_1,int param_2)

{
  FUN_140d5d70e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877b896 FUN_14877b896 body=55 status=ok
// SIG undefined FUN_14877b896(void)

void FUN_14877b896(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bc80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bc80 = FUN_140002ddd(FUN_14652e5cb,uVar1,L"MissionBinderTargetState");
  }
  return;
}



// FUNCTION 14877b8ce FUN_14877b8ce body=158 status=ok
// SIG undefined FUN_14877b8ce(void)

void FUN_14877b8ce(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14877b940;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14877b940;
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
LAB_14877b940:
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
                    /* WARNING: Could not recover jumptable at 0x00014877b960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14877ba16 FUN_14877ba16 body=54 status=ok
// SIG undefined FUN_14877ba16(void)

undefined1 FUN_14877ba16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877bb28(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 14877ba74 FUN_14877ba74 body=59 status=ok
// SIG undefined FUN_14877ba74(void)

undefined8 FUN_14877ba74(longlong *param_1)

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



// FUNCTION 14877baba FUN_14877baba body=32 status=ok
// SIG undefined FUN_14877baba(void)

void FUN_14877baba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_140d5d70e(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 14877bb28 FUN_14877bb28 body=226 status=ok
// SIG undefined FUN_14877bb28(void)

longlong FUN_14877bb28(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if (param_2 != param_1) {
    FUN_141290efc(param_1 + 0x18,param_2 + 0x18);
    FUN_141290efc(param_1 + 0x30,param_2 + 0x30);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  lVar4 = *(longlong *)(param_2 + 0x50);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(longlong *)(param_1 + 0x50) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar4;
  if (plVar5 != (longlong *)0x0) {
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
  FUN_14877bc0a(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 14877bc0a FUN_14877bc0a body=93 status=ok
// SIG undefined FUN_14877bc0a(void)

undefined8 * FUN_14877bc0a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d5d7d7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14877bc68(param_1,iVar1);
      FUN_14877bcca(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14877bc68 FUN_14877bc68 body=98 status=ok
// SIG undefined FUN_14877bc68(void)

void FUN_14877bc68(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14877bcca FUN_14877bcca body=45 status=ok
// SIG undefined FUN_14877bcca(void)

void FUN_14877bcca(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 14877bcf8 FUN_14877bcf8 body=138 status=ok
// SIG undefined FUN_14877bcf8(void)

void FUN_14877bcf8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa8);
  *(undefined4 *)(param_2 + 5) = 2;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x74) = 0;
  *param_2 = &PTR_FUN_14b348ee0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined2 *)(param_2 + 0x11) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 14877be16 FUN_14877be16 body=138 status=ok
// SIG undefined FUN_14877be16(void)

undefined8 FUN_14877be16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877bb28(param_2,param_3);
    FUN_14877c028(param_2 + 0x78,param_3 + 0x78);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_3 + 0x88);
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_3 + 0x90);
    FUN_1447715ec(param_2 + 0x98,param_3 + 0x98);
    *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_3 + 0xc0);
    param_2 = param_2 + 200;
    param_3 = param_3 + 200;
  }
  return 1;
}



// FUNCTION 14877bec8 FUN_14877bec8 body=59 status=ok
// SIG undefined FUN_14877bec8(void)

undefined8 FUN_14877bec8(longlong *param_1)

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



// FUNCTION 14877bf14 FUN_14877bf14 body=40 status=ok
// SIG undefined FUN_14877bf14(void)

void FUN_14877bf14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_14877bfe8(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 14877bf8a FUN_14877bf8a body=38 status=ok
// SIG undefined FUN_14877bf8a(void)

undefined8 FUN_14877bf8a(undefined8 param_1,int param_2)

{
  FUN_14877bfe8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877bfb0 FUN_14877bfb0 body=55 status=ok
// SIG undefined FUN_14877bfb0(void)

void FUN_14877bfb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bc98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bc98 =
         FUN_140002ddd(FUN_14652e663,uVar1,L"MissionBinderTargetState_EncounterSpawnedActor");
  }
  return;
}



// FUNCTION 14877bfe8 FUN_14877bfe8 body=64 status=ok
// SIG undefined FUN_14877bfe8(void)

void FUN_14877bfe8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b348ee0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140d5d70e(param_1);
  return;
}



// FUNCTION 14877c028 FUN_14877c028 body=88 status=ok
// SIG undefined FUN_14877c028(void)

undefined8 * FUN_14877c028(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14877c080(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14877c080 FUN_14877c080 body=98 status=ok
// SIG undefined FUN_14877c080(void)

void FUN_14877c080(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14877c176 FUN_14877c176 body=59 status=ok
// SIG undefined FUN_14877c176(void)

undefined8 FUN_14877c176(longlong *param_1)

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



// FUNCTION 14877c216 FUN_14877c216 body=55 status=ok
// SIG undefined FUN_14877c216(void)

void FUN_14877c216(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bcb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bcb0 = FUN_140002ddd(FUN_14652e6f9,uVar1,L"MissionBinderTarget_EncounterSpawnedActor");
  }
  return;
}



// FUNCTION 14877c30e FUN_14877c30e body=98 status=ok
// SIG undefined FUN_14877c30e(void)

undefined1 FUN_14877c30e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877bb28(param_2,param_3);
    FUN_14877c4f6(param_2 + 0x78,param_3 + 0x78);
    FUN_148745b0c(param_2 + 0x88,param_3 + 0x88);
    param_2 = param_2 + 0x98;
    param_3 = param_3 + 0x98;
  }
  return 1;
}



// FUNCTION 14877c398 FUN_14877c398 body=59 status=ok
// SIG undefined FUN_14877c398(void)

undefined8 FUN_14877c398(longlong *param_1)

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



// FUNCTION 14877c3e4 FUN_14877c3e4 body=40 status=ok
// SIG undefined FUN_14877c3e4(void)

void FUN_14877c3e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_14877c4b8(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 14877c45a FUN_14877c45a body=38 status=ok
// SIG undefined FUN_14877c45a(void)

undefined8 FUN_14877c45a(undefined8 param_1,int param_2)

{
  FUN_14877c4b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877c480 FUN_14877c480 body=55 status=ok
// SIG undefined FUN_14877c480(void)

void FUN_14877c480(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bcc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bcc8 = FUN_140002ddd(FUN_14652e78f,uVar1,L"MissionBinderTargetState_PlayerCharacter");
  }
  return;
}



// FUNCTION 14877c4b8 FUN_14877c4b8 body=62 status=ok
// SIG undefined FUN_14877c4b8(void)

void FUN_14877c4b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b348f10;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140d5d70e(param_1);
  return;
}



// FUNCTION 14877c4f6 FUN_14877c4f6 body=88 status=ok
// SIG undefined FUN_14877c4f6(void)

undefined8 * FUN_14877c4f6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14877c54e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14877c54e FUN_14877c54e body=98 status=ok
// SIG undefined FUN_14877c54e(void)

void FUN_14877c54e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14877c60c FUN_14877c60c body=59 status=ok
// SIG undefined FUN_14877c60c(void)

undefined8 FUN_14877c60c(longlong *param_1)

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



// FUNCTION 14877c6ac FUN_14877c6ac body=55 status=ok
// SIG undefined FUN_14877c6ac(void)

void FUN_14877c6ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bce0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bce0 = FUN_140002ddd(FUN_14652e825,uVar1,L"MissionBinderTarget_PlayerCharacter");
  }
  return;
}



// FUNCTION 14877c6e4 FUN_14877c6e4 body=129 status=ok
// SIG undefined FUN_14877c6e4(void)

void FUN_14877c6e4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x98);
  *(undefined4 *)(param_2 + 5) = 2;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x74) = 0;
  *param_2 = &PTR_FUN_14b348f40;
  *(undefined1 *)((longlong)param_2 + 0x79) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  return;
}



// FUNCTION 14877c7f0 FUN_14877c7f0 body=119 status=ok
// SIG undefined FUN_14877c7f0(void)

undefined8 FUN_14877c7f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877bb28(param_2,param_3);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_3 + 0x78);
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_3 + 0x80);
    FUN_1447715ec(param_2 + 0x88,param_3 + 0x88);
    *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(param_3 + 0xb0);
    param_2 = param_2 + 0xb8;
    param_3 = param_3 + 0xb8;
  }
  return 1;
}



// FUNCTION 14877c890 FUN_14877c890 body=59 status=ok
// SIG undefined FUN_14877c890(void)

undefined8 FUN_14877c890(longlong *param_1)

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



// FUNCTION 14877c8dc FUN_14877c8dc body=67 status=ok
// SIG undefined FUN_14877c8dc(void)

void FUN_14877c8dc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *param_2 = &PTR_FUN_14b348f40;
    if (param_2[0x14] != 0) {
      FUN_1400020a8();
    }
    FUN_140d5d70e(param_2);
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
  return;
}



// FUNCTION 14877c96e FUN_14877c96e body=70 status=ok
// SIG undefined FUN_14877c96e(void)

undefined8 * FUN_14877c96e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b348f40;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140d5d70e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877c9b4 FUN_14877c9b4 body=55 status=ok
// SIG undefined FUN_14877c9b4(void)

void FUN_14877c9b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bcf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bcf8 = FUN_140002ddd(FUN_14652e8bb,uVar1,L"MissionBinderTargetState_RegistryActor");
  }
  return;
}



// FUNCTION 14877ca6c FUN_14877ca6c body=59 status=ok
// SIG undefined FUN_14877ca6c(void)

undefined8 FUN_14877ca6c(longlong *param_1)

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



// FUNCTION 14877cb02 FUN_14877cb02 body=138 status=ok
// SIG undefined FUN_14877cb02(void)

void FUN_14877cb02(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa8);
  *(undefined4 *)(param_2 + 5) = 2;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x74) = 0;
  *param_2 = &PTR_FUN_14b348f70;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined2 *)(param_2 + 0x11) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 14877cc20 FUN_14877cc20 body=138 status=ok
// SIG undefined FUN_14877cc20(void)

undefined8 FUN_14877cc20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877bb28(param_2,param_3);
    FUN_14877cdf2(param_2 + 0x78,param_3 + 0x78);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_3 + 0x88);
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_3 + 0x90);
    FUN_1447715ec(param_2 + 0x98,param_3 + 0x98);
    *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_3 + 0xc0);
    param_2 = param_2 + 200;
    param_3 = param_3 + 200;
  }
  return 1;
}



// FUNCTION 14877ccd2 FUN_14877ccd2 body=59 status=ok
// SIG undefined FUN_14877ccd2(void)

undefined8 FUN_14877ccd2(longlong *param_1)

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



// FUNCTION 14877cd1e FUN_14877cd1e body=40 status=ok
// SIG undefined FUN_14877cd1e(void)

void FUN_14877cd1e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_146078a04(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 14877cd94 FUN_14877cd94 body=38 status=ok
// SIG undefined FUN_14877cd94(void)

undefined8 FUN_14877cd94(undefined8 param_1,int param_2)

{
  FUN_146078a04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14877cdba FUN_14877cdba body=55 status=ok
// SIG undefined FUN_14877cdba(void)

void FUN_14877cdba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bd28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bd28 = FUN_140002ddd(FUN_14652e9b1,uVar1,L"MissionBinderTargetState_SpawnedActor");
  }
  return;
}



// FUNCTION 14877cdf2 FUN_14877cdf2 body=88 status=ok
// SIG undefined FUN_14877cdf2(void)

undefined8 * FUN_14877cdf2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14877ce4a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14877ce4a FUN_14877ce4a body=98 status=ok
// SIG undefined FUN_14877ce4a(void)

void FUN_14877ce4a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14877cf2e FUN_14877cf2e body=59 status=ok
// SIG undefined FUN_14877cf2e(void)

undefined8 FUN_14877cf2e(longlong *param_1)

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



// FUNCTION 14877cfc2 FUN_14877cfc2 body=57 status=ok
// SIG undefined FUN_14877cfc2(void)

void FUN_14877cfc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bd40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bd40 = FUN_140002ddd(FUN_14652ea47,uVar1,L"MissionBinderTarget_SpawnedActor");
  }
  return;
}



// FUNCTION 14877cffc FUN_14877cffc body=257 status=ok
// SIG undefined FUN_14877cffc(void)

void FUN_14877cffc(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  local_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_2c;
  local_48 = local_24;
  FUN_1488ffce4(param_1,&local_40);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877d0fe FUN_14877d0fe body=286 status=ok
// SIG undefined FUN_14877d0fe(void)

void FUN_14877d0fe(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_24;
  local_40 = local_1c;
  FUN_1488ffc8e(&local_3c,&local_48,local_30);
  *(undefined4 *)(param_3 + 1) = local_34;
  *param_3 = local_3c;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877d21e FUN_14877d21e body=286 status=ok
// SIG undefined FUN_14877d21e(void)

void FUN_14877d21e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_24;
  local_40 = local_1c;
  FUN_1488ffc38(&local_3c,&local_48,local_30);
  *(undefined4 *)(param_3 + 1) = local_34;
  *param_3 = local_3c;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877d34a FUN_14877d34a body=351 status=ok
// SIG undefined FUN_14877d34a(void)

void FUN_14877d34a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_34 = 0;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar3 = &local_34;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_143de7608(local_28,puVar3,local_40);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877d4b0 FUN_14877d4b0 body=176 status=ok
// SIG undefined FUN_14877d4b0(void)

void FUN_14877d4b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [36];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1488ffe1e(puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877d562 FUN_14877d562 body=397 status=ok
// SIG undefined FUN_14877d562(void)

void FUN_14877d562(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_44 = 0;
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  puVar2 = &local_44;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  uVar1 = FUN_14477b664(uStack_30);
  local_58 = FUN_14477b664(uVar1);
  local_50 = local_28;
  FUN_143de6e28(local_20,&local_60,puVar2);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877d6f0 FUN_14877d6f0 body=502 status=ok
// SIG undefined FUN_14877d6f0(void)

void FUN_14877d6f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [3];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
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
  uVar1 = local_50;
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_48;
  uVar2 = FUN_14477b664(uStack_40);
  local_78 = FUN_14477b664(uVar2);
  local_70 = local_38;
  FUN_143de7176(local_30,&local_80,uVar1,plVar3);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877d8e8 FUN_14877d8e8 body=288 status=ok
// SIG undefined FUN_14877d8e8(void)

void FUN_14877d8e8(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar1);
  local_40 = local_28;
  FUN_1488ffd92(local_18,&local_50);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877da0a FUN_14877da0a body=376 status=ok
// SIG undefined FUN_14877da0a(void)

void FUN_14877da0a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
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
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar1 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uVar2 = FUN_14477b664(uStack_30);
  local_50 = FUN_14477b664(uVar2);
  local_48 = local_28;
  FUN_1488ffd00(local_20,&local_58,uVar1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14877dbb3 FUN_14877dbb3 body=55 status=ok
// SIG undefined FUN_14877dbb3(void)

void FUN_14877dbb3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c1e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c1e8 = FUN_14171c317(FUN_14653050e,uVar1,L"EObjectiveUpdateCountDisplayType");
  }
  return;
}



// FUNCTION 14877dc4e FUN_14877dc4e body=63 status=ok
// SIG undefined FUN_14877dc4e(void)

undefined1 FUN_14877dc4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877dd68(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 14877dcb6 FUN_14877dcb6 body=59 status=ok
// SIG undefined FUN_14877dcb6(void)

undefined8 FUN_14877dcb6(longlong *param_1)

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



// FUNCTION 14877dd02 FUN_14877dd02 body=38 status=ok
// SIG undefined FUN_14877dd02(void)

void FUN_14877dd02(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_14091aa36(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 14877dd68 FUN_14877dd68 body=105 status=ok
// SIG undefined FUN_14877dd68(void)

undefined4 * FUN_14877dd68(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)((longlong)param_1 + 0xd) = *(undefined8 *)((longlong)param_2 + 0xd);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_140d7e6a6(param_1 + 6,param_2 + 6);
  FUN_140115bdc(param_1 + 10,param_2 + 10);
  FUN_140115bdc(param_1 + 0x12,param_2 + 0x12);
  FUN_140115bdc(param_1 + 0x1a,param_2 + 0x1a);
  FUN_1458df92a(param_1 + 0x22,param_2 + 0x22);
  return param_1;
}



// FUNCTION 14877ddd2 FUN_14877ddd2 body=115 status=ok
// SIG undefined FUN_14877ddd2(void)

void FUN_14877ddd2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14877de45 FUN_14877de45 body=76 status=ok
// SIG undefined FUN_14877de45(void)

void FUN_14877de45(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14877dee0 FUN_14877dee0 body=42 status=ok
// SIG undefined FUN_14877dee0(void)

void FUN_14877dee0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_2);
  return;
}



// FUNCTION 14877df20 FUN_14877df20 body=54 status=ok
// SIG undefined FUN_14877df20(void)

undefined1 FUN_14877df20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1410b2022(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14877df7e FUN_14877df7e body=59 status=ok
// SIG undefined FUN_14877df7e(void)

undefined8 FUN_14877df7e(longlong *param_1)

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



// FUNCTION 14877dfc4 FUN_14877dfc4 body=53 status=ok
// SIG undefined FUN_14877dfc4(void)

void FUN_14877dfc4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14877e068 FUN_14877e068 body=63 status=ok
// SIG undefined FUN_14877e068(void)

undefined1 FUN_14877e068(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877e184(param_2,param_3);
    param_3 = param_3 + 0x130;
    param_2 = param_2 + 0x130;
  }
  return 1;
}



// FUNCTION 14877e0d0 FUN_14877e0d0 body=59 status=ok
// SIG undefined FUN_14877e0d0(void)

undefined8 FUN_14877e0d0(longlong *param_1)

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



// FUNCTION 14877e11c FUN_14877e11c body=38 status=ok
// SIG undefined FUN_14877e11c(void)

void FUN_14877e11c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x130) == '\x01') {
    FUN_140ae6eec(param_2);
    *(undefined1 *)(param_2 + 0x130) = 0;
  }
  return;
}



// FUNCTION 14877e184 FUN_14877e184 body=194 status=ok
// SIG undefined FUN_14877e184(void)

undefined4 * FUN_14877e184(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_14877e246(param_1 + 6,param_2 + 6);
  FUN_140115bdc(param_1 + 10,param_2 + 10);
  FUN_140115bdc(param_1 + 0x12,param_2 + 0x12);
  FUN_144983130(param_1 + 0x1a,param_2 + 0x1a);
  FUN_144983130(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x36,param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  if ((*(longlong *)(param_1 + 0x46) != *(longlong *)(param_2 + 0x46)) ||
     (param_1[0x48] != param_2[0x48])) {
    *(longlong *)(param_1 + 0x46) = *(longlong *)(param_2 + 0x46);
    param_1[0x48] = param_2[0x48];
    *(undefined8 *)(param_1 + 0x4a) = 0;
  }
  return param_1;
}



// FUNCTION 14877e246 FUN_14877e246 body=93 status=ok
// SIG undefined FUN_14877e246(void)

undefined8 * FUN_14877e246(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ae70c0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14877e2a4(param_1,iVar1);
      FUN_14877e316(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14877e2a4 FUN_14877e2a4 body=114 status=ok
// SIG undefined FUN_14877e2a4(void)

void FUN_14877e2a4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x98,8);
    iVar2 = (int)(uVar1 / 0x98);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x98,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14877e316 FUN_14877e316 body=60 status=ok
// SIG undefined FUN_14877e316(void)

void FUN_14877e316(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14877e352(param_1,param_2);
    param_1 = param_1 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return;
}



// FUNCTION 14877e352 FUN_14877e352 body=240 status=ok
// SIG undefined FUN_14877e352(void)

undefined4 * FUN_14877e352(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined8 *)((longlong)param_1 + 0xd) = *(undefined8 *)((longlong)param_2 + 0xd);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  _Src = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd7be(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),_Src,(longlong)iVar1 * 0xc);
  }
  FUN_1406022be(param_1 + 10,param_2 + 10);
  FUN_1406022be(param_1 + 0x12,param_2 + 0x12);
  FUN_1406022be(param_1 + 0x1a,param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x22) = 0;
  iVar1 = param_2[0x24];
  uVar2 = *(undefined8 *)(param_2 + 0x22);
  param_1[0x24] = iVar1;
  if (iVar1 == 0) {
    param_1[0x25] = 0;
  }
  else {
    FUN_14877ddd2(param_1 + 0x22,iVar1,0);
    FUN_14877de45(*(undefined8 *)(param_1 + 0x22),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14877e462 FUN_14877e462 body=63 status=ok
// SIG undefined FUN_14877e462(void)

undefined1 FUN_14877e462(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877e5f6(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 14877e4ca FUN_14877e4ca body=59 status=ok
// SIG undefined FUN_14877e4ca(void)

undefined8 FUN_14877e4ca(longlong *param_1)

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



// FUNCTION 14877e516 FUN_14877e516 body=38 status=ok
// SIG undefined FUN_14877e516(void)

void FUN_14877e516(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_14029e750(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 14877e5f6 FUN_14877e5f6 body=131 status=ok
// SIG undefined FUN_14877e5f6(void)

longlong FUN_14877e5f6(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_1400fce78(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  FUN_140115bdc(param_1 + 0x78,param_2 + 0x78);
  FUN_140ffff0a(param_1 + 0x98,param_2 + 0x98);
  FUN_140ffff0a(param_1 + 0xa8,param_2 + 0xa8);
  return param_1;
}



// FUNCTION 14877e6ac FUN_14877e6ac body=54 status=ok
// SIG undefined FUN_14877e6ac(void)

undefined1 FUN_14877e6ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877e79c(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 14877e70a FUN_14877e70a body=59 status=ok
// SIG undefined FUN_14877e70a(void)

undefined8 FUN_14877e70a(longlong *param_1)

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



// FUNCTION 14877e79c FUN_14877e79c body=77 status=ok
// SIG undefined FUN_14877e79c(void)

void FUN_14877e79c(longlong *param_1,longlong *param_2)

{
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  if ((param_1[3] != param_2[3]) || ((int)param_1[4] != (int)param_2[4])) {
    param_1[3] = param_2[3];
    *(int *)(param_1 + 4) = (int)param_2[4];
    param_1[5] = 0;
  }
  return;
}



// FUNCTION 14877e84a FUN_14877e84a body=59 status=ok
// SIG undefined FUN_14877e84a(void)

undefined8 FUN_14877e84a(longlong *param_1)

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



// FUNCTION 14877e896 FUN_14877e896 body=38 status=ok
// SIG undefined FUN_14877e896(void)

void FUN_14877e896(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x7a0) == '\x01') {
    FUN_140d79878(param_2);
    *(undefined1 *)(param_2 + 0x7a0) = 0;
  }
  return;
}



// FUNCTION 14877e90e FUN_14877e90e body=28 status=ok
// SIG undefined FUN_14877e90e(void)

undefined8 FUN_14877e90e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14877e9ba FUN_14877e9ba body=54 status=ok
// SIG undefined FUN_14877e9ba(void)

undefined1 FUN_14877e9ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877eb30(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14877ea18 FUN_14877ea18 body=59 status=ok
// SIG undefined FUN_14877ea18(void)

undefined8 FUN_14877ea18(longlong *param_1)

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



// FUNCTION 14877ea5e FUN_14877ea5e body=32 status=ok
// SIG undefined FUN_14877ea5e(void)

void FUN_14877ea5e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1413388a4(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14877eacc FUN_14877eacc body=43 status=ok
// SIG undefined FUN_14877eacc(void)

undefined8 FUN_14877eacc(undefined8 param_1,int param_2)

{
  FUN_1413388a4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14877eaf8 FUN_14877eaf8 body=55 status=ok
// SIG undefined FUN_14877eaf8(void)

void FUN_14877eaf8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bed0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bed0 = FUN_140002ddd(FUN_14652f8fd,uVar1,L"MissionDependencyConditionState");
  }
  return;
}



// FUNCTION 14877eb30 FUN_14877eb30 body=163 status=ok
// SIG undefined FUN_14877eb30(void)

longlong FUN_14877eb30(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  if (param_2 != param_1) {
    FUN_1401b31d8(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  lVar4 = *(longlong *)(param_2 + 0x48);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(longlong *)(param_1 + 0x48) = lVar4;
  if (plVar5 != (longlong *)0x0) {
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
  return param_1;
}



// FUNCTION 14877ec3c FUN_14877ec3c body=59 status=ok
// SIG undefined FUN_14877ec3c(void)

undefined8 FUN_14877ec3c(longlong *param_1)

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



// FUNCTION 14877ecdc FUN_14877ecdc body=34 status=ok
// SIG undefined FUN_14877ecdc(void)

undefined8 FUN_14877ecdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14877ecfe FUN_14877ecfe body=55 status=ok
// SIG undefined FUN_14877ecfe(void)

void FUN_14877ecfe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bee8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bee8 = FUN_140002ddd(FUN_14652f806,uVar1,L"MissionDependencyCondition");
  }
  return;
}



// FUNCTION 14877edbc FUN_14877edbc body=87 status=ok
// SIG undefined FUN_14877edbc(void)

undefined1 FUN_14877edbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877eb30(param_2,param_3);
    FUN_14877ef90(param_2 + 0x50,param_3 + 0x50);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 14877ee3c FUN_14877ee3c body=59 status=ok
// SIG undefined FUN_14877ee3c(void)

undefined8 FUN_14877ee3c(longlong *param_1)

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



// FUNCTION 14877ee82 FUN_14877ee82 body=34 status=ok
// SIG undefined FUN_14877ee82(void)

void FUN_14877ee82(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14877ef56(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14877eef2 FUN_14877eef2 body=43 status=ok
// SIG undefined FUN_14877eef2(void)

undefined8 FUN_14877eef2(undefined8 param_1,int param_2)

{
  FUN_14877ef56();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14877ef1e FUN_14877ef1e body=55 status=ok
// SIG undefined FUN_14877ef1e(void)

void FUN_14877ef1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bf18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bf18 = FUN_140002ddd(FUN_14652fa2d,uVar1,L"MissionDependencyConditionState_Compound");
  }
  return;
}



// FUNCTION 14877ef56 FUN_14877ef56 body=57 status=ok
// SIG undefined FUN_14877ef56(void)

void FUN_14877ef56(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b351e80;
  FUN_140e02d42(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1413388a4(param_1);
  return;
}



// FUNCTION 14877ef90 FUN_14877ef90 body=93 status=ok
// SIG undefined FUN_14877ef90(void)

undefined8 * FUN_14877ef90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e02d42(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14877efee(param_1,iVar1);
      FUN_14877f050(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14877efee FUN_14877efee body=98 status=ok
// SIG undefined FUN_14877efee(void)

void FUN_14877efee(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14877f050 FUN_14877f050 body=45 status=ok
// SIG undefined FUN_14877f050(void)

void FUN_14877f050(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 14877f0d2 FUN_14877f0d2 body=68 status=ok
// SIG undefined FUN_14877f0d2(void)

undefined1 FUN_14877f0d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_14877f290(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14877f13e FUN_14877f13e body=59 status=ok
// SIG undefined FUN_14877f13e(void)

undefined8 FUN_14877f13e(longlong *param_1)

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



// FUNCTION 14877f184 FUN_14877f184 body=34 status=ok
// SIG undefined FUN_14877f184(void)

void FUN_14877f184(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14877f258(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14877f1f4 FUN_14877f1f4 body=43 status=ok
// SIG undefined FUN_14877f1f4(void)

undefined8 FUN_14877f1f4(undefined8 param_1,int param_2)

{
  FUN_14877f258();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14877f220 FUN_14877f220 body=55 status=ok
// SIG undefined FUN_14877f220(void)

void FUN_14877f220(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bf30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bf30 = FUN_140002ddd(FUN_14652fac3,uVar1,L"MissionDependencyCondition_Compound");
  }
  return;
}



// FUNCTION 14877f258 FUN_14877f258 body=56 status=ok
// SIG undefined FUN_14877f258(void)

void FUN_14877f258(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b34faf0;
  FUN_141103083(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14877f290 FUN_14877f290 body=93 status=ok
// SIG undefined FUN_14877f290(void)

undefined8 * FUN_14877f290(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141103083(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14877f2ee(param_1,iVar1);
      FUN_14877f361(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14877f2ee FUN_14877f2ee body=115 status=ok
// SIG undefined FUN_14877f2ee(void)

void FUN_14877f2ee(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14877f361 FUN_14877f361 body=76 status=ok
// SIG undefined FUN_14877f361(void)

void FUN_14877f361(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14877f444 FUN_14877f444 body=67 status=ok
// SIG undefined FUN_14877f444(void)

undefined1 FUN_14877f444(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877eb30(param_2,param_3);
    FUN_1459855b4(param_2 + 0x50,param_3 + 0x50);
    param_2 = param_2 + 0x60;
    param_3 = param_3 + 0x60;
  }
  return 1;
}



// FUNCTION 14877f4b0 FUN_14877f4b0 body=59 status=ok
// SIG undefined FUN_14877f4b0(void)

undefined8 FUN_14877f4b0(longlong *param_1)

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



// FUNCTION 14877f4f6 FUN_14877f4f6 body=51 status=ok
// SIG undefined FUN_14877f4f6(void)

void FUN_14877f4f6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xc) == '\x01') {
    *param_2 = &PTR_FUN_14b351ea0;
    FUN_1407e878c(param_2 + 10);
    FUN_1413388a4(param_2);
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14877f578 FUN_14877f578 body=65 status=ok
// SIG undefined FUN_14877f578(void)

undefined8 * FUN_14877f578(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b351ea0;
  FUN_1407e878c(param_1 + 10);
  FUN_1413388a4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14877f5ba FUN_14877f5ba body=55 status=ok
// SIG undefined FUN_14877f5ba(void)

void FUN_14877f5ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bf48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bf48 =
         FUN_140002ddd(FUN_14652fb59,uVar1,L"MissionDependencyConditionState_FactExpression");
  }
  return;
}



// FUNCTION 14877f62c FUN_14877f62c body=62 status=ok
// SIG undefined FUN_14877f62c(void)

undefined1 FUN_14877f62c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1400fce78(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14877f692 FUN_14877f692 body=59 status=ok
// SIG undefined FUN_14877f692(void)

undefined8 FUN_14877f692(longlong *param_1)

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



// FUNCTION 14877f6d8 FUN_14877f6d8 body=34 status=ok
// SIG undefined FUN_14877f6d8(void)

void FUN_14877f6d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1457efa0c(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14877f748 FUN_14877f748 body=57 status=ok
// SIG undefined FUN_14877f748(void)

void FUN_14877f748(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bf60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bf60 = FUN_140002ddd(FUN_14652fbb8,uVar1,L"MissionDependencyCondition_FactExpression");
  }
  return;
}



// FUNCTION 14877f782 FUN_14877f782 body=100 status=ok
// SIG undefined FUN_14877f782(void)

void FUN_14877f782(undefined8 param_1,undefined8 *param_2)

{
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0x11] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 2;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b351ec0;
  FUN_144928b90(param_2 + 10,0);
  param_2[0x11] = 0;
  return;
}



// FUNCTION 14877f7e6 FUN_14877f7e6 body=77 status=ok
// SIG undefined FUN_14877f7e6(void)

void FUN_14877f7e6(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 2;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b351ec0;
  FUN_144928b90(param_2 + 10,0);
  param_2[0x11] = 0;
  return;
}



// FUNCTION 14877f858 FUN_14877f858 body=103 status=ok
// SIG undefined FUN_14877f858(void)

undefined8 FUN_14877f858(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877eb30(param_2,param_3);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    FUN_1447715ec(param_2 + 0x60,param_3 + 0x60);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_3 + 0x88);
    param_2 = param_2 + 0x90;
    param_3 = param_3 + 0x90;
  }
  return 1;
}



// FUNCTION 14877f8e8 FUN_14877f8e8 body=59 status=ok
// SIG undefined FUN_14877f8e8(void)

undefined8 FUN_14877f8e8(longlong *param_1)

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



// FUNCTION 14877f934 FUN_14877f934 body=64 status=ok
// SIG undefined FUN_14877f934(void)

void FUN_14877f934(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14b351ec0;
    if (param_2[0xf] != 0) {
      FUN_1400020a8();
    }
    FUN_1413388a4(param_2);
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 14877f9c2 FUN_14877f9c2 body=72 status=ok
// SIG undefined FUN_14877f9c2(void)

undefined8 * FUN_14877f9c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b351ec0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1413388a4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14877fa0a FUN_14877fa0a body=55 status=ok
// SIG undefined FUN_14877fa0a(void)

void FUN_14877fa0a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bf78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bf78 = FUN_140002ddd(FUN_14652fc4f,uVar1,L"MissionDependencyConditionState_Mission");
  }
  return;
}



// FUNCTION 14877fa8c FUN_14877fa8c body=85 status=ok
// SIG undefined FUN_14877fa8c(void)

undefined1 FUN_14877fa8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1457b9446(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined1 *)(param_2 + 0x20 + lVar1) = *(undefined1 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14877fb0a FUN_14877fb0a body=59 status=ok
// SIG undefined FUN_14877fb0a(void)

undefined8 FUN_14877fb0a(longlong *param_1)

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



// FUNCTION 14877fbac FUN_14877fbac body=100 status=ok
// SIG undefined FUN_14877fbac(void)

void FUN_14877fbac(undefined8 param_1,undefined8 *param_2)

{
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0x11] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 2;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b351ee0;
  FUN_144928b90(param_2 + 10,0);
  param_2[0x11] = 0;
  return;
}



// FUNCTION 14877fc10 FUN_14877fc10 body=77 status=ok
// SIG undefined FUN_14877fc10(void)

void FUN_14877fc10(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 2;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b351ee0;
  FUN_144928b90(param_2 + 10,0);
  param_2[0x11] = 0;
  return;
}



// FUNCTION 14877fc82 FUN_14877fc82 body=103 status=ok
// SIG undefined FUN_14877fc82(void)

undefined8 FUN_14877fc82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877eb30(param_2,param_3);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    FUN_1447715ec(param_2 + 0x60,param_3 + 0x60);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_3 + 0x88);
    param_2 = param_2 + 0x90;
    param_3 = param_3 + 0x90;
  }
  return 1;
}



// FUNCTION 14877fd12 FUN_14877fd12 body=59 status=ok
// SIG undefined FUN_14877fd12(void)

undefined8 FUN_14877fd12(longlong *param_1)

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



// FUNCTION 14877fd5e FUN_14877fd5e body=64 status=ok
// SIG undefined FUN_14877fd5e(void)

void FUN_14877fd5e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14b351ee0;
    if (param_2[0xf] != 0) {
      FUN_1400020a8();
    }
    FUN_1413388a4(param_2);
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 14877fdec FUN_14877fdec body=72 status=ok
// SIG undefined FUN_14877fdec(void)

undefined8 * FUN_14877fdec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b351ee0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1413388a4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14877fe34 FUN_14877fe34 body=55 status=ok
// SIG undefined FUN_14877fe34(void)

void FUN_14877fe34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bfc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bfc0 = FUN_140002ddd(FUN_14652fd73,uVar1,L"MissionDependencyConditionState_MissionSet")
    ;
  }
  return;
}



// FUNCTION 14877fec4 FUN_14877fec4 body=85 status=ok
// SIG undefined FUN_14877fec4(void)

undefined1 FUN_14877fec4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_14878003c(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined1 *)(param_2 + 0x20 + lVar1) = *(undefined1 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14877ff42 FUN_14877ff42 body=59 status=ok
// SIG undefined FUN_14877ff42(void)

undefined8 FUN_14877ff42(longlong *param_1)

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



// FUNCTION 14877ffe2 FUN_14877ffe2 body=34 status=ok
// SIG undefined FUN_14877ffe2(void)

undefined8 FUN_14877ffe2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148780004 FUN_148780004 body=55 status=ok
// SIG undefined FUN_148780004(void)

void FUN_148780004(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bff0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bff0 = FUN_140002ddd(FUN_14652fe39,uVar1,L"MissionDependencyCondition_MissionSet");
  }
  return;
}



// FUNCTION 14878003c FUN_14878003c body=84 status=ok
// SIG undefined FUN_14878003c(void)

longlong * FUN_14878003c(longlong *param_1,longlong *param_2)

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



// FUNCTION 148780092 FUN_148780092 body=100 status=ok
// SIG undefined FUN_148780092(void)

void FUN_148780092(undefined8 param_1,undefined8 *param_2)

{
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0x11] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 2;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b351f00;
  FUN_144928b90(param_2 + 10,0);
  param_2[0x11] = 0;
  return;
}



// FUNCTION 1487800f6 FUN_1487800f6 body=77 status=ok
// SIG undefined FUN_1487800f6(void)

void FUN_1487800f6(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 2;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = &PTR_FUN_14b351f00;
  FUN_144928b90(param_2 + 10,0);
  param_2[0x11] = 0;
  return;
}



// FUNCTION 148780168 FUN_148780168 body=103 status=ok
// SIG undefined FUN_148780168(void)

undefined8 FUN_148780168(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14877eb30(param_2,param_3);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    FUN_1447715ec(param_2 + 0x60,param_3 + 0x60);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_3 + 0x88);
    param_2 = param_2 + 0x90;
    param_3 = param_3 + 0x90;
  }
  return 1;
}



// FUNCTION 1487801f8 FUN_1487801f8 body=59 status=ok
// SIG undefined FUN_1487801f8(void)

undefined8 FUN_1487801f8(longlong *param_1)

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



// FUNCTION 148780244 FUN_148780244 body=64 status=ok
// SIG undefined FUN_148780244(void)

void FUN_148780244(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14b351f00;
    if (param_2[0xf] != 0) {
      FUN_1400020a8();
    }
    FUN_1413388a4(param_2);
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 1487802d2 FUN_1487802d2 body=72 status=ok
// SIG undefined FUN_1487802d2(void)

undefined8 * FUN_1487802d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b351f00;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1413388a4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14878031a FUN_14878031a body=55 status=ok
// SIG undefined FUN_14878031a(void)

void FUN_14878031a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c008 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c008 = FUN_140002ddd(FUN_14652fecf,uVar1,L"MissionDependencyConditionState_Objective");
  }
  return;
}



// FUNCTION 1487803b4 FUN_1487803b4 body=101 status=ok
// SIG undefined FUN_1487803b4(void)

undefined8 FUN_1487803b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_1457b9446(param_2 + 8 + lVar2,param_3 + 8 + lVar2);
      uVar1 = *(undefined8 *)(param_3 + 0x25 + lVar2);
      *(undefined8 *)(param_2 + 0x20 + lVar2) = *(undefined8 *)(param_3 + 0x20 + lVar2);
      *(undefined8 *)(param_2 + 0x25 + lVar2) = uVar1;
      lVar2 = lVar2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148780442 FUN_148780442 body=59 status=ok
// SIG undefined FUN_148780442(void)

undefined8 FUN_148780442(longlong *param_1)

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



// FUNCTION 1487804e2 FUN_1487804e2 body=34 status=ok
// SIG undefined FUN_1487804e2(void)

undefined8 FUN_1487804e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148780504 FUN_148780504 body=55 status=ok
// SIG undefined FUN_148780504(void)

void FUN_148780504(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c038 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c038 = FUN_140002ddd(FUN_14652ff95,uVar1,L"MissionDependencyCondition_Objective");
  }
  return;
}



// FUNCTION 14878053c FUN_14878053c body=28 status=ok
// SIG undefined FUN_14878053c(void)

void FUN_14878053c(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined2 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 14878056e FUN_14878056e body=114 status=ok
// SIG undefined FUN_14878056e(void)

undefined8 FUN_14878056e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_3 + lVar3);
      plVar2 = *(longlong **)(param_2 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      *(undefined2 *)(param_2 + 0x10 + lVar3) = *(undefined2 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148780608 FUN_148780608 body=59 status=ok
// SIG undefined FUN_148780608(void)

undefined8 FUN_148780608(longlong *param_1)

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



// FUNCTION 14878064e FUN_14878064e body=38 status=ok
// SIG undefined FUN_14878064e(void)

void FUN_14878064e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1487806f2 FUN_1487806f2 body=54 status=ok
// SIG undefined FUN_1487806f2(void)

undefined1 FUN_1487806f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1412f4f62(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148780750 FUN_148780750 body=59 status=ok
// SIG undefined FUN_148780750(void)

undefined8 FUN_148780750(longlong *param_1)

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



// FUNCTION 148780796 FUN_148780796 body=53 status=ok
// SIG undefined FUN_148780796(void)

void FUN_148780796(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1405b6d62(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14878080e FUN_14878080e body=131 status=ok
// SIG undefined FUN_14878080e(void)

undefined8 * FUN_14878080e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 14878091e FUN_14878091e body=59 status=ok
// SIG undefined FUN_14878091e(void)

undefined8 FUN_14878091e(longlong *param_1)

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



// FUNCTION 148780a28 FUN_148780a28 body=59 status=ok
// SIG undefined FUN_148780a28(void)

undefined8 FUN_148780a28(longlong *param_1)

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



// FUNCTION 148780b2e FUN_148780b2e body=75 status=ok
// SIG undefined FUN_148780b2e(void)

undefined1 FUN_148780b2e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_148780cc6(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148780ba2 FUN_148780ba2 body=59 status=ok
// SIG undefined FUN_148780ba2(void)

undefined8 FUN_148780ba2(longlong *param_1)

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



// FUNCTION 148780c3e FUN_148780c3e body=76 status=ok
// SIG undefined FUN_148780c3e(void)

undefined8 * FUN_148780c3e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b351e60;
  FUN_1406e9428(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 148780c8a FUN_148780c8a body=55 status=ok
// SIG undefined FUN_148780c8a(void)

void FUN_148780c8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c0e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c0e0 = FUN_140002ddd(FUN_14652f866,uVar1,L"MissionEntityParentBase");
  }
  return;
}



// FUNCTION 148780cc6 FUN_148780cc6 body=69 status=ok
// SIG undefined FUN_148780cc6(void)

longlong FUN_148780cc6(longlong param_1,longlong param_2)

{
  FUN_140d7e6a6();
  FUN_148780d0c(param_1 + 0x10,param_2 + 0x10);
  FUN_148780d6a(param_1 + 0x20,param_2 + 0x20);
  FUN_140d7e6a6(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 148780d0c FUN_148780d0c body=93 status=ok
// SIG undefined FUN_148780d0c(void)

undefined8 * FUN_148780d0c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1406e9484(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148780dc4(param_1,iVar1);
      FUN_148780e37(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148780d6a FUN_148780d6a body=89 status=ok
// SIG undefined FUN_148780d6a(void)

undefined8 * FUN_148780d6a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148780eba(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 148780dc4 FUN_148780dc4 body=115 status=ok
// SIG undefined FUN_148780dc4(void)

void FUN_148780dc4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148780e37 FUN_148780e37 body=130 status=ok
// SIG undefined FUN_148780e37(void)

void FUN_148780e37(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar2[-2];
      _Src = *(void **)(puVar2 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd7be(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
      *(undefined4 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148780eba FUN_148780eba body=115 status=ok
// SIG undefined FUN_148780eba(void)

void FUN_148780eba(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148780f2e FUN_148780f2e body=62 status=ok
// SIG undefined FUN_148780f2e(void)

void FUN_148780f2e(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *param_1 = &PTR_FUN_14b351e60;
    FUN_1406e9428(param_1 + 3);
    *param_1 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_1 + 1);
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  return;
}



// FUNCTION 14878104c FUN_14878104c body=59 status=ok
// SIG undefined FUN_14878104c(void)

undefined8 FUN_14878104c(longlong *param_1)

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



// FUNCTION 148781108 FUN_148781108 body=63 status=ok
// SIG undefined FUN_148781108(void)

undefined1 FUN_148781108(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14185e68e(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 148781170 FUN_148781170 body=59 status=ok
// SIG undefined FUN_148781170(void)

undefined8 FUN_148781170(longlong *param_1)

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



// FUNCTION 1487811bc FUN_1487811bc body=38 status=ok
// SIG undefined FUN_1487811bc(void)

void FUN_1487811bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_140d32a48(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 14878125e FUN_14878125e body=92 status=ok
// SIG undefined FUN_14878125e(void)

undefined8 FUN_14878125e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 0x20 + lVar3;
      *(undefined4 *)(lVar2 + -0x18) = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)(lVar2 + -0x20) = *puVar1;
      *(undefined8 *)(lVar2 + -0x10) = puVar1[2];
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(puVar1 + 3);
      FUN_140427366();
      lVar3 = lVar3 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487812e2 FUN_1487812e2 body=59 status=ok
// SIG undefined FUN_1487812e2(void)

undefined8 FUN_1487812e2(longlong *param_1)

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



// FUNCTION 148781328 FUN_148781328 body=56 status=ok
// SIG undefined FUN_148781328(void)

void FUN_148781328(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x50) == '\x01') {
    lVar1 = *(longlong *)(param_2 + 0x48);
    if (lVar1 != 0) {
      FUN_144a2da94(lVar1);
      thunk_FUN_1400020a8(lVar1,0x38);
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1487813e4 FUN_1487813e4 body=54 status=ok
// SIG undefined FUN_1487813e4(void)

undefined1 FUN_1487813e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487814e6(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148781442 FUN_148781442 body=59 status=ok
// SIG undefined FUN_148781442(void)

undefined8 FUN_148781442(longlong *param_1)

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



// FUNCTION 148781488 FUN_148781488 body=32 status=ok
// SIG undefined FUN_148781488(void)

void FUN_148781488(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14185e782(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1487814e6 FUN_1487814e6 body=89 status=ok
// SIG undefined FUN_1487814e6(void)

undefined4 * FUN_1487814e6(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_148781540(param_1 + 6,param_2 + 6);
  FUN_1406b39e6(param_1 + 0xc,param_2 + 0xc);
  FUN_1406b3a44(param_1 + 0x10,param_2 + 0x10);
  FUN_14878159e(param_1 + 0x14,param_2 + 0x14);
  return param_1;
}



// FUNCTION 148781540 FUN_148781540 body=93 status=ok
// SIG undefined FUN_148781540(void)

undefined8 * FUN_148781540(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140741e11(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487815fc(param_1,iVar1);
      FUN_14878166f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14878159e FUN_14878159e body=93 status=ok
// SIG undefined FUN_14878159e(void)

undefined8 * FUN_14878159e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140741dda(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487816c8(param_1,iVar1);
      FUN_148781737(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487815fc FUN_1487815fc body=115 status=ok
// SIG undefined FUN_1487815fc(void)

void FUN_1487815fc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14878166f FUN_14878166f body=88 status=ok
// SIG undefined FUN_14878166f(void)

void FUN_14878166f(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined4 *)(param_1 + -0x18) = *(undefined4 *)(param_2 + -0x18);
      *(undefined8 *)(param_1 + -0x20) = *(undefined8 *)(param_2 + -0x20);
      *(undefined8 *)(param_1 + -0x10) = *(undefined8 *)(param_2 + -0x10);
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_1406df492(param_1,param_2);
      param_1 = param_1 + 0x50;
      param_2 = param_2 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1487816c8 FUN_1487816c8 body=111 status=ok
// SIG undefined FUN_1487816c8(void)

void FUN_1487816c8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148781737 FUN_148781737 body=120 status=ok
// SIG undefined FUN_148781737(void)

void FUN_148781737(longlong param_1,longlong param_2,int param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      puVar1 = (undefined1 *)(param_2 + lVar4);
      lVar2 = param_1 + 8 + lVar4;
      *(undefined1 *)(lVar2 + -8) = *puVar1;
      bVar3 = puVar1[0x40];
      *(byte *)(lVar2 + 0x38) = bVar3;
      (*(code *)(&PTR_caseD_2_14b1f3420)[bVar3])(lVar2,puVar1 + 8);
      *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(puVar1 + 0x50);
      *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(puVar1 + 0x48);
      lVar4 = lVar4 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14878188c FUN_14878188c body=103 status=ok
// SIG undefined FUN_14878188c(void)

undefined8 FUN_14878188c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_1401f3db8(param_2,param_3);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
      FUN_1447715ec(param_2 + 0x28,param_3 + 0x28);
      param_3 = param_3 + 0x60;
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14878191c FUN_14878191c body=59 status=ok
// SIG undefined FUN_14878191c(void)

undefined8 FUN_14878191c(longlong *param_1)

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



// FUNCTION 148781962 FUN_148781962 body=34 status=ok
// SIG undefined FUN_148781962(void)

void FUN_148781962(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1487819d2(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1487819d2 FUN_1487819d2 body=75 status=ok
// SIG undefined FUN_1487819d2(void)

void FUN_1487819d2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x000148781a0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148781a4e FUN_148781a4e body=76 status=ok
// SIG undefined FUN_148781a4e(void)

undefined1 FUN_148781a4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148781ac2 FUN_148781ac2 body=59 status=ok
// SIG undefined FUN_148781ac2(void)

undefined8 FUN_148781ac2(longlong *param_1)

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



// FUNCTION 148781b08 FUN_148781b08 body=64 status=ok
// SIG undefined FUN_148781b08(void)

void FUN_148781b08(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x20);
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
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148781bd4 FUN_148781bd4 body=59 status=ok
// SIG undefined FUN_148781bd4(void)

undefined8 FUN_148781bd4(longlong *param_1)

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



// FUNCTION 148781d34 FUN_148781d34 body=59 status=ok
// SIG undefined FUN_148781d34(void)

undefined8 FUN_148781d34(longlong *param_1)

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



// FUNCTION 148781e26 FUN_148781e26 body=59 status=ok
// SIG undefined FUN_148781e26(void)

undefined8 FUN_148781e26(longlong *param_1)

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



// FUNCTION 148781e72 FUN_148781e72 body=38 status=ok
// SIG undefined FUN_148781e72(void)

void FUN_148781e72(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_140e75154(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 148781ee6 FUN_148781ee6 body=202 status=ok
// SIG undefined FUN_148781ee6(void)

void FUN_148781ee6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14b35c300;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xd] = DAT_14c8464e0;
  param_1[0xe] = uVar1;
  param_1[0xf] = DAT_14c8464f0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = DAT_14cb7bd70;
  *(undefined8 *)((longlong)param_1 + 0xb4) = DAT_14cb7bd68;
  param_1[0x18] = DAT_14cb7bd80;
  *(undefined4 *)(param_1 + 0x19) = DAT_14cb7bd88;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x23] = 2;
  return;
}



// FUNCTION 148781fb0 FUN_148781fb0 body=43 status=ok
// SIG undefined FUN_148781fb0(void)

undefined8 FUN_148781fb0(undefined8 param_1,int param_2)

{
  FUN_140e75154();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 148781fdc FUN_148781fdc body=55 status=ok
// SIG undefined FUN_148781fdc(void)

void FUN_148781fdc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c2c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c2c0 = FUN_140002ddd(FUN_146530c59,uVar1,L"MissionGiverRecord");
  }
  return;
}



// FUNCTION 1487820b8 FUN_1487820b8 body=59 status=ok
// SIG undefined FUN_1487820b8(void)

undefined8 FUN_1487820b8(longlong *param_1)

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



// FUNCTION 148782158 FUN_148782158 body=34 status=ok
// SIG undefined FUN_148782158(void)

undefined8 FUN_148782158(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14878217a FUN_14878217a body=55 status=ok
// SIG undefined FUN_14878217a(void)

void FUN_14878217a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c308 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c308 = FUN_140002ddd(FUN_146530d11,uVar1,L"MissionGiverTypeBase");
  }
  return;
}



// FUNCTION 14878221c FUN_14878221c body=78 status=ok
// SIG undefined FUN_14878221c(void)

undefined8 FUN_14878221c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined8 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -0xb) = *(undefined8 *)(param_3 + -0xb);
      *(undefined8 *)(param_2 + -0x10) = uVar1;
      FUN_1400fce78(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148782292 FUN_148782292 body=59 status=ok
// SIG undefined FUN_148782292(void)

undefined8 FUN_148782292(longlong *param_1)

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



// FUNCTION 1487822d8 FUN_1487822d8 body=32 status=ok
// SIG undefined FUN_1487822d8(void)

void FUN_1487822d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1458cb17a(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148782346 FUN_148782346 body=43 status=ok
// SIG undefined FUN_148782346(void)

undefined8 FUN_148782346(undefined8 param_1,int param_2)

{
  FUN_1458cb17a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148782372 FUN_148782372 body=55 status=ok
// SIG undefined FUN_148782372(void)

void FUN_148782372(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c320 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c320 = FUN_140002ddd(FUN_146530d6d,uVar1,L"MissionGiverType_ActorBase");
  }
  return;
}



// FUNCTION 1487823f4 FUN_1487823f4 body=101 status=ok
// SIG undefined FUN_1487823f4(void)

undefined8 FUN_1487823f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      FUN_140d02432(param_2 + lVar6 + 0x28,param_3 + lVar6 + 0x28);
      lVar6 = lVar6 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148782482 FUN_148782482 body=59 status=ok
// SIG undefined FUN_148782482(void)

undefined8 FUN_148782482(longlong *param_1)

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



// FUNCTION 1487824c8 FUN_1487824c8 body=38 status=ok
// SIG undefined FUN_1487824c8(void)

void FUN_1487824c8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1487825ae FUN_1487825ae body=59 status=ok
// SIG undefined FUN_1487825ae(void)

undefined8 FUN_1487825ae(longlong *param_1)

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



// FUNCTION 1487825fa FUN_1487825fa body=38 status=ok
// SIG undefined FUN_1487825fa(void)

void FUN_1487825fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_140946b7a(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148782664 FUN_148782664 body=37 status=ok
// SIG undefined FUN_148782664(void)

void FUN_148782664(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1a0);
  FUN_1457a2e5e(param_2);
  return;
}



// FUNCTION 1487826b6 FUN_1487826b6 body=63 status=ok
// SIG undefined FUN_1487826b6(void)

undefined1 FUN_1487826b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148782878(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14878271e FUN_14878271e body=59 status=ok
// SIG undefined FUN_14878271e(void)

undefined8 FUN_14878271e(longlong *param_1)

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


