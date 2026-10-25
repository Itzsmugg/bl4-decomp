// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14878276a FUN_14878276a body=40 status=ok
// SIG undefined FUN_14878276a(void)

void FUN_14878276a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_145822dbe(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 1487827e0 FUN_1487827e0 body=43 status=ok
// SIG undefined FUN_1487827e0(void)

undefined8 FUN_1487827e0(undefined8 param_1,int param_2)

{
  FUN_145822dbe();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 14878280c FUN_14878280c body=57 status=ok
// SIG undefined FUN_14878280c(void)

void FUN_14878280c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c368 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c368 = FUN_140002ddd(FUN_146530eb5,uVar1,L"RegisteredMissionGiverType_Basic");
  }
  return;
}



// FUNCTION 148782846 FUN_148782846 body=43 status=ok
// SIG undefined FUN_148782846(void)

undefined8 FUN_148782846(undefined8 param_1,int param_2)

{
  FUN_14118054a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 148782878 FUN_148782878 body=250 status=ok
// SIG undefined FUN_148782878(void)

longlong FUN_148782878(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  FUN_148782972();
  FUN_1459855b4(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  FUN_1447715ec(param_1 + 0x120,param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  uVar6 = *(undefined4 *)(param_2 + 0x148);
  uVar7 = *(undefined4 *)(param_2 + 0x14c);
  uVar8 = *(undefined4 *)(param_2 + 0x150);
  uVar9 = *(undefined4 *)(param_2 + 0x154);
  uVar10 = *(undefined4 *)(param_2 + 0x15c);
  uVar11 = *(undefined4 *)(param_2 + 0x160);
  uVar12 = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x15c) = uVar10;
  *(undefined4 *)(param_1 + 0x160) = uVar11;
  *(undefined4 *)(param_1 + 0x164) = uVar12;
  *(undefined4 *)(param_1 + 0x148) = uVar6;
  *(undefined4 *)(param_1 + 0x14c) = uVar7;
  *(undefined4 *)(param_1 + 0x150) = uVar8;
  *(undefined4 *)(param_1 + 0x154) = uVar9;
  uVar3 = *(undefined8 *)(param_2 + 0x170);
  lVar4 = *(longlong *)(param_2 + 0x178);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = uVar3;
  *(longlong *)(param_1 + 0x178) = lVar4;
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
  FUN_1459855b4(param_1 + 0x180,param_2 + 0x180);
  uVar3 = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = uVar3;
  return param_1;
}



// FUNCTION 148782972 FUN_148782972 body=156 status=ok
// SIG undefined FUN_148782972(void)

longlong FUN_148782972(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_14185e68e(param_1 + 0x28,param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  lVar3 = *(longlong *)(param_2 + 0xf0);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  *(longlong *)(param_1 + 0xf0) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 148782a10 FUN_148782a10 body=57 status=ok
// SIG undefined FUN_148782a10(void)

void FUN_148782a10(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067610(param_2);
  *param_2 = &PTR_FUN_14b358570;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x31) = 0;
  return;
}



// FUNCTION 148782a88 FUN_148782a88 body=59 status=ok
// SIG undefined FUN_148782a88(void)

undefined8 FUN_148782a88(longlong *param_1)

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



// FUNCTION 148782ace FUN_148782ace body=34 status=ok
// SIG undefined FUN_148782ace(void)

void FUN_148782ace(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1458202b2(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148782b3e FUN_148782b3e body=57 status=ok
// SIG undefined FUN_148782b3e(void)

void FUN_148782b3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c380 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c380 = FUN_140002ddd(FUN_146530f47,uVar1,L"MissionGiverType_CustomEvaluator");
  }
  return;
}



// FUNCTION 148782b78 FUN_148782b78 body=43 status=ok
// SIG undefined FUN_148782b78(void)

undefined8 FUN_148782b78(undefined8 param_1,int param_2)

{
  FUN_14100c744();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148782ba4 FUN_148782ba4 body=55 status=ok
// SIG undefined FUN_148782ba4(void)

void FUN_148782ba4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c3c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c3c8 = FUN_140002ddd(FUN_146530f76,uVar1,L"MissionGiverType_FactConditionBase");
  }
  return;
}



// FUNCTION 148782c8a FUN_148782c8a body=63 status=ok
// SIG undefined FUN_148782c8a(void)

undefined1 FUN_148782c8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148782e00(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148782cf2 FUN_148782cf2 body=59 status=ok
// SIG undefined FUN_148782cf2(void)

undefined8 FUN_148782cf2(longlong *param_1)

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



// FUNCTION 148782d3e FUN_148782d3e body=57 status=ok
// SIG undefined FUN_148782d3e(void)

void FUN_148782d3e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14b358710;
    FUN_140170ace(param_2 + 0xe);
    FUN_1458cb17a(param_2);
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 148782dc6 FUN_148782dc6 body=57 status=ok
// SIG undefined FUN_148782dc6(void)

void FUN_148782dc6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c398 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c398 = FUN_140002ddd(FUN_146531009,uVar1,L"MissionGiverType_EnemyDropPickup");
  }
  return;
}



// FUNCTION 148782e00 FUN_148782e00 body=153 status=ok
// SIG undefined FUN_148782e00(void)

longlong FUN_148782e00(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xd) = *(undefined8 *)(param_2 + 0xd);
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_1400fce78(param_1 + 0x18,param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  if ((*(longlong *)(param_1 + 0x48) != *(longlong *)(param_2 + 0x48)) ||
     (*(int *)(param_1 + 0x50) != *(int *)(param_2 + 0x50))) {
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  FUN_1406b39e6(param_1 + 0x78,param_2 + 0x78);
  FUN_1406b3a44(param_1 + 0x88,param_2 + 0x88);
  return param_1;
}



// FUNCTION 148782e9a FUN_148782e9a body=39 status=ok
// SIG undefined FUN_148782e9a(void)

void FUN_148782e9a(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067610(param_2);
  *param_2 = &PTR_FUN_14b3588b0;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



// FUNCTION 148782f00 FUN_148782f00 body=59 status=ok
// SIG undefined FUN_148782f00(void)

undefined8 FUN_148782f00(longlong *param_1)

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



// FUNCTION 148782f46 FUN_148782f46 body=34 status=ok
// SIG undefined FUN_148782f46(void)

void FUN_148782f46(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1457e0858(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148782fe8 FUN_148782fe8 body=78 status=ok
// SIG undefined FUN_148782fe8(void)

undefined8 FUN_148782fe8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14878305e FUN_14878305e body=59 status=ok
// SIG undefined FUN_14878305e(void)

undefined8 FUN_14878305e(longlong *param_1)

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



// FUNCTION 1487830a4 FUN_1487830a4 body=32 status=ok
// SIG undefined FUN_1487830a4(void)

void FUN_1487830a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_14100c744(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148783114 FUN_148783114 body=62 status=ok
// SIG undefined FUN_148783114(void)

void FUN_148783114(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x108);
  FUN_1457a2efc(param_2);
  *param_2 = &PTR_FUN_14b35c350;
  FUN_140d7ec9e(param_2 + 0x1f);
  return;
}



// FUNCTION 148783152 FUN_148783152 body=46 status=ok
// SIG undefined FUN_148783152(void)

void FUN_148783152(undefined8 param_1,undefined8 *param_2)

{
  FUN_1457a2efc(param_2);
  *param_2 = &PTR_FUN_14b35c350;
  FUN_140d7ec9e(param_2 + 0x1f);
  return;
}



// FUNCTION 1487831a4 FUN_1487831a4 body=85 status=ok
// SIG undefined FUN_1487831a4(void)

undefined1 FUN_1487831a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148782972(param_2,param_3);
    FUN_1459855b4(param_2 + 0xf8,param_3 + 0xf8);
    param_2 = param_2 + 0x108;
    param_3 = param_3 + 0x108;
  }
  return 1;
}



// FUNCTION 148783222 FUN_148783222 body=59 status=ok
// SIG undefined FUN_148783222(void)

undefined8 FUN_148783222(longlong *param_1)

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



// FUNCTION 14878326e FUN_14878326e body=60 status=ok
// SIG undefined FUN_14878326e(void)

void FUN_14878326e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *param_2 = &PTR_FUN_14b35c350;
    FUN_1407e878c(param_2 + 0x1f);
    FUN_14118054a(param_2);
    *(undefined1 *)(param_2 + 0x21) = 0;
  }
  return;
}



// FUNCTION 1487832f8 FUN_1487832f8 body=68 status=ok
// SIG undefined FUN_1487832f8(void)

undefined8 * FUN_1487832f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b35c350;
  FUN_1407e878c(param_1 + 0x1f);
  FUN_14118054a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 14878333c FUN_14878333c body=55 status=ok
// SIG undefined FUN_14878333c(void)

void FUN_14878333c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c3e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c3e0 =
         FUN_140002ddd(FUN_146531159,uVar1,L"RegisteredMissionGiverType_FactConditionBase");
  }
  return;
}



// FUNCTION 148783392 FUN_148783392 body=63 status=ok
// SIG undefined FUN_148783392(void)

undefined1 FUN_148783392(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487834f6(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 1487833fa FUN_1487833fa body=59 status=ok
// SIG undefined FUN_1487833fa(void)

undefined8 FUN_1487833fa(longlong *param_1)

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



// FUNCTION 148783446 FUN_148783446 body=40 status=ok
// SIG undefined FUN_148783446(void)

void FUN_148783446(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_145b80136(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 1487834bc FUN_1487834bc body=57 status=ok
// SIG undefined FUN_1487834bc(void)

void FUN_1487834bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c3f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c3f8 = FUN_140002ddd(FUN_1465311eb,uVar1,L"MissionGlobals");
  }
  return;
}



// FUNCTION 1487834f6 FUN_1487834f6 body=171 status=ok
// SIG undefined FUN_1487834f6(void)

longlong FUN_1487834f6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if ((*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38)) ||
     (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  FUN_140115bdc(param_1 + 0x60,param_2 + 0x60);
  FUN_1403de7ba(param_1 + 0x80,param_2 + 0x80);
  FUN_1403de7ba(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 14878360a FUN_14878360a body=59 status=ok
// SIG undefined FUN_14878360a(void)

undefined8 FUN_14878360a(longlong *param_1)

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



// FUNCTION 1487836aa FUN_1487836aa body=34 status=ok
// SIG undefined FUN_1487836aa(void)

undefined8 FUN_1487836aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1487836cc FUN_1487836cc body=55 status=ok
// SIG undefined FUN_1487836cc(void)

void FUN_1487836cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c440 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c440 = FUN_140002ddd(FUN_1465312a3,uVar1,L"MissionGraphAliasTypeData");
  }
  return;
}



// FUNCTION 14878374a FUN_14878374a body=76 status=ok
// SIG undefined FUN_14878374a(void)

undefined8 FUN_14878374a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
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



// FUNCTION 1487837be FUN_1487837be body=59 status=ok
// SIG undefined FUN_1487837be(void)

undefined8 FUN_1487837be(longlong *param_1)

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



// FUNCTION 148783804 FUN_148783804 body=64 status=ok
// SIG undefined FUN_148783804(void)

void FUN_148783804(undefined8 param_1,longlong param_2)

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



// FUNCTION 1487838cc FUN_1487838cc body=62 status=ok
// SIG undefined FUN_1487838cc(void)

undefined1 FUN_1487838cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1409c4df0(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148783932 FUN_148783932 body=59 status=ok
// SIG undefined FUN_148783932(void)

undefined8 FUN_148783932(longlong *param_1)

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



// FUNCTION 148783978 FUN_148783978 body=32 status=ok
// SIG undefined FUN_148783978(void)

void FUN_148783978(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_148783f62(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1487839e6 FUN_1487839e6 body=43 status=ok
// SIG undefined FUN_1487839e6(void)

undefined8 FUN_1487839e6(undefined8 param_1,int param_2)

{
  FUN_148783f62();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 148783a12 FUN_148783a12 body=55 status=ok
// SIG undefined FUN_148783a12(void)

void FUN_148783a12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c470 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c470 = FUN_140002ddd(FUN_146531391,uVar1,L"MissionGraphAliasTypeData_FactBase");
  }
  return;
}



// FUNCTION 148783a82 FUN_148783a82 body=99 status=ok
// SIG undefined FUN_148783a82(void)

undefined1 FUN_148783a82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      FUN_1409c4df0(param_2 + -0x40,param_3 + -0x40);
      uVar1 = *(undefined4 *)(param_3 + -0x2c);
      uVar2 = *(undefined4 *)(param_3 + -0x28);
      uVar3 = *(undefined4 *)(param_3 + -0x24);
      uVar4 = *(undefined4 *)(param_3 + -0x20);
      uVar5 = *(undefined4 *)(param_3 + -0x1c);
      uVar6 = *(undefined4 *)(param_3 + -0x18);
      uVar7 = *(undefined4 *)(param_3 + -0x14);
      uVar8 = *(undefined4 *)(param_3 + -0x10);
      uVar9 = *(undefined4 *)(param_3 + -0xc);
      uVar10 = *(undefined4 *)(param_3 + -8);
      uVar11 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x2c) = uVar1;
      *(undefined4 *)(param_2 + -0x28) = uVar2;
      *(undefined4 *)(param_2 + -0x24) = uVar3;
      *(undefined4 *)(param_2 + -0x20) = uVar4;
      *(undefined4 *)(param_2 + -0x1c) = uVar5;
      *(undefined4 *)(param_2 + -0x18) = uVar6;
      *(undefined4 *)(param_2 + -0x14) = uVar7;
      *(undefined4 *)(param_2 + -0x10) = uVar8;
      *(undefined4 *)(param_2 + -0xc) = uVar9;
      *(undefined4 *)(param_2 + -8) = uVar10;
      *(undefined4 *)(param_2 + -4) = uVar11;
      FUN_1458df92a(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148783b0e FUN_148783b0e body=59 status=ok
// SIG undefined FUN_148783b0e(void)

undefined8 FUN_148783b0e(longlong *param_1)

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



// FUNCTION 148783b54 FUN_148783b54 body=32 status=ok
// SIG undefined FUN_148783b54(void)

void FUN_148783b54(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_148783bb6(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148783bb6 FUN_148783bb6 body=93 status=ok
// SIG undefined FUN_148783bb6(void)

void FUN_148783bb6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b359550;
  FUN_14029b636(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b3593b0;
  FUN_14029e95e(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148783c5a FUN_148783c5a body=89 status=ok
// SIG undefined FUN_148783c5a(void)

undefined8 FUN_148783c5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_1409c4df0(param_2 + -0x20,param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1447715ec(param_2,param_3);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148783cdc FUN_148783cdc body=59 status=ok
// SIG undefined FUN_148783cdc(void)

undefined8 FUN_148783cdc(longlong *param_1)

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



// FUNCTION 148783d22 FUN_148783d22 body=58 status=ok
// SIG undefined FUN_148783d22(void)

void FUN_148783d22(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b3596f0;
    if (param_2[8] != 0) {
      FUN_1400020a8();
    }
    FUN_148783f62(param_2);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 148783d9e FUN_148783d9e body=55 status=ok
// SIG undefined FUN_148783d9e(void)

void FUN_148783d9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c4a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c4a0 = FUN_140002ddd(FUN_146531447,uVar1,L"MissionGraphAliasTypeData_GenericFact");
  }
  return;
}



// FUNCTION 148783e02 FUN_148783e02 body=85 status=ok
// SIG undefined FUN_148783e02(void)

undefined1 FUN_148783e02(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1409c4df0(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined1 *)(param_2 + 0x18 + lVar1) = *(undefined1 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148783e80 FUN_148783e80 body=59 status=ok
// SIG undefined FUN_148783e80(void)

undefined8 FUN_148783e80(longlong *param_1)

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



// FUNCTION 148783ec6 FUN_148783ec6 body=32 status=ok
// SIG undefined FUN_148783ec6(void)

void FUN_148783ec6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_148783f62(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148783f28 FUN_148783f28 body=57 status=ok
// SIG undefined FUN_148783f28(void)

void FUN_148783f28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c4b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c4b8 = FUN_140002ddd(FUN_1465314a1,uVar1,L"MissionGraphAliasTypeData_MissionFact");
  }
  return;
}



// FUNCTION 148783f62 FUN_148783f62 body=55 status=ok
// SIG undefined FUN_148783f62(void)

void FUN_148783f62(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3593b0;
  FUN_14029e95e(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148783f9a FUN_148783f9a body=64 status=ok
// SIG undefined FUN_148783f9a(void)

void FUN_148783f9a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xb0);
  *param_2 = &PTR_FUN_14b359a30;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  FUN_1487841ac(param_2 + 7);
  return;
}



// FUNCTION 148784028 FUN_148784028 body=134 status=ok
// SIG undefined FUN_148784028(void)

undefined1 FUN_148784028(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1409c4df0(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      *(undefined1 *)(param_2 + lVar1 + 0x18) = *(undefined1 *)(param_3 + lVar1 + 0x18);
      FUN_14878435a(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      FUN_1487843ae(param_2 + lVar1 + 0x38,param_3 + lVar1 + 0x38);
      lVar1 = lVar1 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487840d6 FUN_1487840d6 body=59 status=ok
// SIG undefined FUN_1487840d6(void)

undefined8 FUN_1487840d6(longlong *param_1)

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



// FUNCTION 148784122 FUN_148784122 body=59 status=ok
// SIG undefined FUN_148784122(void)

void FUN_148784122(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *param_2 = &PTR_FUN_14b359a30;
    FUN_1487842ba(param_2 + 7);
    FUN_148783f62(param_2);
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
  return;
}



// FUNCTION 1487841ac FUN_1487841ac body=97 status=ok
// SIG undefined FUN_1487841ac(void)

undefined8 * FUN_1487841ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b359a70;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  FUN_144a5dc74(param_1 + 7);
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_1488eba18(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  return param_1;
}



// FUNCTION 14878420e FUN_14878420e body=65 status=ok
// SIG undefined FUN_14878420e(void)

undefined8 * FUN_14878420e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b359a30;
  FUN_1487842ba(param_1 + 7);
  FUN_148783f62(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 148784250 FUN_148784250 body=55 status=ok
// SIG undefined FUN_148784250(void)

void FUN_148784250(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c4d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c4d0 = FUN_140002ddd(FUN_146531533,uVar1,L"MissionGraphAliasTypeData_TaskBase");
  }
  return;
}



// FUNCTION 148784288 FUN_148784288 body=43 status=ok
// SIG undefined FUN_148784288(void)

undefined8 FUN_148784288(undefined8 param_1,int param_2)

{
  FUN_1487842ba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1487842ba FUN_1487842ba body=159 status=ok
// SIG undefined FUN_1487842ba(void)

void FUN_1487842ba(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b359a70;
  param_1[0xb] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_140115c12(param_1 + 0xd,0);
  }
  param_1[0xc] = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  plVar3 = (longlong *)param_1[4];
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
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14878435a FUN_14878435a body=84 status=ok
// SIG undefined FUN_14878435a(void)

longlong * FUN_14878435a(longlong *param_1,longlong *param_2)

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



// FUNCTION 1487843ae FUN_1487843ae body=139 status=ok
// SIG undefined FUN_1487843ae(void)

longlong FUN_1487843ae(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_1401f3db8(param_1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x38) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  FUN_140115bdc(param_1 + 0x58,param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  return param_1;
}



// FUNCTION 14878443a FUN_14878443a body=75 status=ok
// SIG undefined FUN_14878443a(void)

void FUN_14878443a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xb0);
  *param_2 = &PTR_FUN_14b359a30;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  FUN_1487841ac(param_2 + 7);
  *param_2 = &PTR_FUN_14b359c00;
  return;
}



// FUNCTION 148784486 FUN_148784486 body=66 status=ok
// SIG undefined FUN_148784486(void)

void FUN_148784486(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b359a30;
  *(undefined1 *)(param_2 + 3) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  FUN_1487841ac(param_2 + 7);
  *param_2 = &PTR_FUN_14b359c00;
  return;
}



// FUNCTION 1487844ec FUN_1487844ec body=134 status=ok
// SIG undefined FUN_1487844ec(void)

undefined1 FUN_1487844ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1409c4df0(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      *(undefined1 *)(param_2 + lVar1 + 0x18) = *(undefined1 *)(param_3 + lVar1 + 0x18);
      FUN_14878435a(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      FUN_1487843ae(param_2 + lVar1 + 0x38,param_3 + lVar1 + 0x38);
      lVar1 = lVar1 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14878459a FUN_14878459a body=59 status=ok
// SIG undefined FUN_14878459a(void)

undefined8 FUN_14878459a(longlong *param_1)

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



// FUNCTION 1487845e6 FUN_1487845e6 body=59 status=ok
// SIG undefined FUN_1487845e6(void)

void FUN_1487845e6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *param_2 = &PTR_FUN_14b359a30;
    FUN_1487842ba(param_2 + 7);
    FUN_148783f62(param_2);
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
  return;
}



// FUNCTION 148784670 FUN_148784670 body=65 status=ok
// SIG undefined FUN_148784670(void)

undefined8 * FUN_148784670(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b359a30;
  FUN_1487842ba(param_1 + 7);
  FUN_148783f62(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1487846b2 FUN_1487846b2 body=55 status=ok
// SIG undefined FUN_1487846b2(void)

void FUN_1487846b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c4e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c4e8 = FUN_140002ddd(FUN_1465315c5,uVar1,L"MissionGraphAliasTypeData_DynamicTask");
  }
  return;
}



// FUNCTION 1487846ea FUN_1487846ea body=99 status=ok
// SIG undefined FUN_1487846ea(void)

void FUN_1487846ea(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xc0);
  *param_2 = &PTR_FUN_14b359a30;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  FUN_1487841ac(param_2 + 7);
  *param_2 = &PTR_FUN_14b359da0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0;
  return;
}



// FUNCTION 14878474e FUN_14878474e body=90 status=ok
// SIG undefined FUN_14878474e(void)

void FUN_14878474e(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b359a30;
  *(undefined1 *)(param_2 + 3) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  FUN_1487841ac(param_2 + 7);
  *param_2 = &PTR_FUN_14b359da0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0;
  return;
}



// FUNCTION 1487847cc FUN_1487847cc body=156 status=ok
// SIG undefined FUN_1487847cc(void)

undefined1 FUN_1487847cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_1409c4df0(param_2 + lVar6 + 8,param_3 + lVar6 + 8);
      *(undefined1 *)(param_2 + lVar6 + 0x18) = *(undefined1 *)(param_3 + lVar6 + 0x18);
      FUN_14878435a(param_2 + lVar6 + 0x20,param_3 + lVar6 + 0x20);
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_1487843ae(lVar1 + 0x38,lVar2 + 0x38);
      uVar3 = *(undefined4 *)(lVar2 + 0xbc);
      uVar4 = *(undefined4 *)(lVar2 + 0xc0);
      uVar5 = *(undefined4 *)(lVar2 + 0xc4);
      *(undefined4 *)(lVar1 + 0xb8) = *(undefined4 *)(lVar2 + 0xb8);
      *(undefined4 *)(lVar1 + 0xbc) = uVar3;
      *(undefined4 *)(lVar1 + 0xc0) = uVar4;
      *(undefined4 *)(lVar1 + 0xc4) = uVar5;
      lVar6 = lVar6 + 200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148784890 FUN_148784890 body=59 status=ok
// SIG undefined FUN_148784890(void)

undefined8 FUN_148784890(longlong *param_1)

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



// FUNCTION 1487848dc FUN_1487848dc body=59 status=ok
// SIG undefined FUN_1487848dc(void)

void FUN_1487848dc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x19) == '\x01') {
    *param_2 = &PTR_FUN_14b359a30;
    FUN_1487842ba(param_2 + 7);
    FUN_148783f62(param_2);
    *(undefined1 *)(param_2 + 0x19) = 0;
  }
  return;
}



// FUNCTION 148784966 FUN_148784966 body=65 status=ok
// SIG undefined FUN_148784966(void)

undefined8 * FUN_148784966(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b359a30;
  FUN_1487842ba(param_1 + 7);
  FUN_148783f62(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,200);
  }
  return param_1;
}



// FUNCTION 1487849a8 FUN_1487849a8 body=55 status=ok
// SIG undefined FUN_1487849a8(void)

void FUN_1487849a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c500 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c500 = FUN_140002ddd(FUN_146531657,uVar1,L"MissionGraphAliasTypeData_StaticTask");
  }
  return;
}



// FUNCTION 148784a10 FUN_148784a10 body=54 status=ok
// SIG undefined FUN_148784a10(void)

undefined1 FUN_148784a10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148784b3c(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 148784a6e FUN_148784a6e body=59 status=ok
// SIG undefined FUN_148784a6e(void)

undefined8 FUN_148784a6e(longlong *param_1)

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



// FUNCTION 148784b02 FUN_148784b02 body=57 status=ok
// SIG undefined FUN_148784b02(void)

void FUN_148784b02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c518 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c518 = FUN_140002ddd(FUN_1465316b1,uVar1,L"MissionGraphAliasTypeData_GbxDef");
  }
  return;
}



// FUNCTION 148784b3c FUN_148784b3c body=87 status=ok
// SIG undefined FUN_148784b3c(void)

longlong FUN_148784b3c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 8);
  if (*(longlong *)(param_1 + 8) != lVar1) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(longlong *)(param_1 + 8) = lVar1;
  if (*(longlong *)(param_1 + 0x10) != *(longlong *)(param_2 + 0x10)) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 148784bec FUN_148784bec body=62 status=ok
// SIG undefined FUN_148784bec(void)

undefined1 FUN_148784bec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148784c52 FUN_148784c52 body=59 status=ok
// SIG undefined FUN_148784c52(void)

undefined8 FUN_148784c52(longlong *param_1)

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



// FUNCTION 148784c98 FUN_148784c98 body=34 status=ok
// SIG undefined FUN_148784c98(void)

void FUN_148784c98(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_148784d6c(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148784d08 FUN_148784d08 body=43 status=ok
// SIG undefined FUN_148784d08(void)

undefined8 FUN_148784d08(undefined8 param_1,int param_2)

{
  FUN_148784d6c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 148784d34 FUN_148784d34 body=55 status=ok
// SIG undefined FUN_148784d34(void)

void FUN_148784d34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c530 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c530 = FUN_140002ddd(FUN_146531743,uVar1,L"MissionGraphAliasTypeData_AliasTemplate");
  }
  return;
}



// FUNCTION 148784d6c FUN_148784d6c body=66 status=ok
// SIG undefined FUN_148784d6c(void)

void FUN_148784d6c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b35a0e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148784da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148784e40 FUN_148784e40 body=59 status=ok
// SIG undefined FUN_148784e40(void)

undefined8 FUN_148784e40(longlong *param_1)

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



// FUNCTION 148784ee0 FUN_148784ee0 body=34 status=ok
// SIG undefined FUN_148784ee0(void)

undefined8 FUN_148784ee0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148784f02 FUN_148784f02 body=55 status=ok
// SIG undefined FUN_148784f02(void)

void FUN_148784f02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c548 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c548 = FUN_140002ddd(FUN_1465317d5,uVar1,L"MissionGraphAliasTypeData_Int");
  }
  return;
}



// FUNCTION 148784fce FUN_148784fce body=59 status=ok
// SIG undefined FUN_148784fce(void)

undefined8 FUN_148784fce(longlong *param_1)

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



// FUNCTION 14878506e FUN_14878506e body=34 status=ok
// SIG undefined FUN_14878506e(void)

undefined8 FUN_14878506e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148785090 FUN_148785090 body=55 status=ok
// SIG undefined FUN_148785090(void)

void FUN_148785090(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c560 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c560 = FUN_140002ddd(FUN_146531867,uVar1,L"MissionGraphAliasTypeData_Float");
  }
  return;
}



// FUNCTION 14878515a FUN_14878515a body=59 status=ok
// SIG undefined FUN_14878515a(void)

undefined8 FUN_14878515a(longlong *param_1)

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



// FUNCTION 1487851fa FUN_1487851fa body=34 status=ok
// SIG undefined FUN_1487851fa(void)

undefined8 FUN_1487851fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14878521c FUN_14878521c body=55 status=ok
// SIG undefined FUN_14878521c(void)

void FUN_14878521c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c578 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c578 = FUN_140002ddd(FUN_1465318f9,uVar1,L"MissionGraphAliasTypeData_Name");
  }
  return;
}



// FUNCTION 1487852c4 FUN_1487852c4 body=59 status=ok
// SIG undefined FUN_1487852c4(void)

undefined8 FUN_1487852c4(longlong *param_1)

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



// FUNCTION 148785358 FUN_148785358 body=55 status=ok
// SIG undefined FUN_148785358(void)

void FUN_148785358(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c590 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c590 = FUN_140002ddd(FUN_146531953,uVar1,L"MissionGraphAliasTypeData_DialogEnumValue");
  }
  return;
}



// FUNCTION 148785414 FUN_148785414 body=59 status=ok
// SIG undefined FUN_148785414(void)

undefined8 FUN_148785414(longlong *param_1)

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



// FUNCTION 1487854e6 FUN_1487854e6 body=81 status=ok
// SIG undefined FUN_1487854e6(void)

undefined1 FUN_1487854e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_1406b39e6(param_2 + -0x10,param_3 + -0x10);
      FUN_1406b3a44(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148785560 FUN_148785560 body=59 status=ok
// SIG undefined FUN_148785560(void)

undefined8 FUN_148785560(longlong *param_1)

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



// FUNCTION 1487855a6 FUN_1487855a6 body=32 status=ok
// SIG undefined FUN_1487855a6(void)

void FUN_1487855a6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_140170ace(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148785604 FUN_148785604 body=55 status=ok
// SIG undefined FUN_148785604(void)

void FUN_148785604(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c5c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c5c0 = FUN_140002ddd(FUN_14185e870,uVar1,L"MissionLatentPhaseDef");
  }
  return;
}



// FUNCTION 14878563c FUN_14878563c body=129 status=ok
// SIG undefined FUN_14878563c(void)

void FUN_14878563c(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_20 = 0;
  local_48 = &PTR_FUN_14b35c290;
  FUN_1409c5236(param_1 + 8,&local_40);
  FUN_1409c5286(param_1 + 0x18,&local_30);
  *(undefined1 *)(param_1 + 0x28) = (undefined1)local_20;
  FUN_140170ace(&local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487856f4 FUN_1487856f4 body=63 status=ok
// SIG undefined FUN_1487856f4(void)

undefined1 FUN_1487856f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14878581e(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 14878575c FUN_14878575c body=59 status=ok
// SIG undefined FUN_14878575c(void)

undefined8 FUN_14878575c(longlong *param_1)

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



// FUNCTION 1487857a8 FUN_1487857a8 body=40 status=ok
// SIG undefined FUN_1487857a8(void)

void FUN_1487857a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_14878596c(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 14878581e FUN_14878581e body=86 status=ok
// SIG undefined FUN_14878581e(void)

longlong FUN_14878581e(longlong param_1,longlong param_2)

{
  FUN_14878003c(param_1 + 8,param_2 + 8);
  FUN_148785874(param_1 + 0x20,param_2 + 0x20);
  FUN_140115bdc(param_1 + 0x30,param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  FUN_140115bdc(param_1 + 0x58,param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  return param_1;
}



// FUNCTION 148785874 FUN_148785874 body=79 status=ok
// SIG undefined FUN_148785874(void)

undefined8 * FUN_148785874(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487858c4(param_1,iVar1);
      FUN_148785937(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487858c4 FUN_1487858c4 body=115 status=ok
// SIG undefined FUN_1487858c4(void)

void FUN_1487858c4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148785937 FUN_148785937 body=52 status=ok
// SIG undefined FUN_148785937(void)

void FUN_148785937(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_141853f7e(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14878596c FUN_14878596c body=158 status=ok
// SIG undefined FUN_14878596c(void)

void FUN_14878596c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b35c270;
  param_1[0xb] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_140115c12(param_1 + 0xd,0);
  }
  param_1[0xc] = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    FUN_140115c12(param_1 + 8,0);
  }
  param_1[7] = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148785a0a FUN_148785a0a body=43 status=ok
// SIG undefined FUN_148785a0a(void)

undefined8 FUN_148785a0a(undefined8 param_1,int param_2)

{
  FUN_14878596c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 148785a36 FUN_148785a36 body=55 status=ok
// SIG undefined FUN_148785a36(void)

void FUN_148785a36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c5d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c5d8 = FUN_140002ddd(FUN_146531a75,uVar1,L"MissionLifeCyclePlan_ExplicitSet");
  }
  return;
}



// FUNCTION 148785ac2 FUN_148785ac2 body=85 status=ok
// SIG undefined FUN_148785ac2(void)

undefined1 FUN_148785ac2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_148785cb8(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined1 *)(param_2 + 0x18 + lVar1) = *(undefined1 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148785b40 FUN_148785b40 body=59 status=ok
// SIG undefined FUN_148785b40(void)

undefined8 FUN_148785b40(longlong *param_1)

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



// FUNCTION 148785b86 FUN_148785b86 body=34 status=ok
// SIG undefined FUN_148785b86(void)

void FUN_148785b86(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_148785c5a(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148785bf6 FUN_148785bf6 body=43 status=ok
// SIG undefined FUN_148785bf6(void)

undefined8 FUN_148785bf6(undefined8 param_1,int param_2)

{
  FUN_148785c5a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 148785c22 FUN_148785c22 body=55 status=ok
// SIG undefined FUN_148785c22(void)

void FUN_148785c22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c5f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c5f0 = FUN_140002ddd(FUN_146531b07,uVar1,L"MissionLifeCyclePlan_Explicit");
  }
  return;
}



// FUNCTION 148785c5a FUN_148785c5a body=56 status=ok
// SIG undefined FUN_148785c5a(void)

void FUN_148785c5a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b35c2f0;
  FUN_148785c92(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148785c92 FUN_148785c92 body=38 status=ok
// SIG undefined FUN_148785c92(void)

void FUN_148785c92(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14878596c(param_1);
    param_1 = param_1 + 0x80;
  }
  return;
}



// FUNCTION 148785cb8 FUN_148785cb8 body=95 status=ok
// SIG undefined FUN_148785cb8(void)

undefined8 * FUN_148785cb8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148785c92(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148785d18(param_1,iVar1);
      FUN_148785d7a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148785d18 FUN_148785d18 body=98 status=ok
// SIG undefined FUN_148785d18(void)

void FUN_148785d18(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,8);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148785d7a FUN_148785d7a body=60 status=ok
// SIG undefined FUN_148785d7a(void)

void FUN_148785d7a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148785db6(param_1,param_2);
    param_1 = param_1 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return;
}



// FUNCTION 148785db6 FUN_148785db6 body=155 status=ok
// SIG undefined FUN_148785db6(void)

undefined8 * FUN_148785db6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b35c270;
  FUN_1486a9b2c(param_1 + 1,param_2 + 8);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1487858c4(param_1 + 4,iVar1,0);
    FUN_148785937(param_1[4],uVar2,iVar1);
  }
  FUN_1406022be(param_1 + 6,param_2 + 0x30);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x50);
  FUN_1406022be(param_1 + 0xb,param_2 + 0x58);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x78);
  return param_1;
}



// FUNCTION 148785f46 FUN_148785f46 body=166 status=ok
// SIG undefined FUN_148785f46(void)

undefined8 FUN_148785f46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined2 *)(param_2 + lVar3 + 8) = *(undefined2 *)(param_3 + lVar3 + 8);
      FUN_1487861f6();
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_140115bdc(lVar1 + 0x60,lVar2 + 0x60);
      *(undefined1 *)(lVar1 + 0x80) = *(undefined1 *)(lVar2 + 0x80);
      FUN_140115bdc(param_2 + lVar3 + 0x88,param_3 + lVar3 + 0x88);
      *(undefined1 *)(lVar1 + 0xa8) = *(undefined1 *)(lVar2 + 0xa8);
      lVar3 = lVar3 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148786014 FUN_148786014 body=59 status=ok
// SIG undefined FUN_148786014(void)

undefined8 FUN_148786014(longlong *param_1)

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



// FUNCTION 148786060 FUN_148786060 body=40 status=ok
// SIG undefined FUN_148786060(void)

void FUN_148786060(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_14878613a(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 1487860d6 FUN_1487860d6 body=43 status=ok
// SIG undefined FUN_1487860d6(void)

undefined8 FUN_1487860d6(undefined8 param_1,int param_2)

{
  FUN_14878613a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 148786102 FUN_148786102 body=55 status=ok
// SIG undefined FUN_148786102(void)

void FUN_148786102(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c608 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c608 = FUN_140002ddd(FUN_146531b99,uVar1,L"MissionFilterOptions_Explicit");
  }
  return;
}



// FUNCTION 14878613a FUN_14878613a body=187 status=ok
// SIG undefined FUN_14878613a(void)

void FUN_14878613a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b35c280;
  param_1[0x11] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)((longlong)param_1 + 0xa4) != 0) {
    FUN_140115c12(param_1 + 0x13,0);
  }
  param_1[0x12] = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  param_1[0xc] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_140115c12(param_1 + 0xe,0);
  }
  param_1[0xd] = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bcc5a(param_1 + 2);
  return;
}



// FUNCTION 1487861f6 FUN_1487861f6 body=122 status=ok
// SIG undefined FUN_1487861f6(void)

longlong FUN_1487861f6(longlong param_1,longlong param_2)

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
    FUN_148786270(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148786270 FUN_148786270 body=115 status=ok
// SIG undefined FUN_148786270(void)

undefined8 * FUN_148786270(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1401bce10(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 14878630a FUN_14878630a body=54 status=ok
// SIG undefined FUN_14878630a(void)

undefined1 FUN_14878630a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1401f3db8(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 148786368 FUN_148786368 body=59 status=ok
// SIG undefined FUN_148786368(void)

undefined8 FUN_148786368(longlong *param_1)

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



// FUNCTION 1487863ae FUN_1487863ae body=64 status=ok
// SIG undefined FUN_1487863ae(void)

void FUN_1487863ae(undefined8 param_1,longlong param_2)

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



// FUNCTION 14878649a FUN_14878649a body=59 status=ok
// SIG undefined FUN_14878649a(void)

undefined8 FUN_14878649a(longlong *param_1)

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



// FUNCTION 14878654c FUN_14878654c body=34 status=ok
// SIG undefined FUN_14878654c(void)

undefined8 FUN_14878654c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14878656e FUN_14878656e body=55 status=ok
// SIG undefined FUN_14878656e(void)

void FUN_14878656e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c638 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c638 = FUN_140002ddd(FUN_146531c5a,uVar1,L"MissionObjectiveAspect");
  }
  return;
}



// FUNCTION 1487865d4 FUN_1487865d4 body=75 status=ok
// SIG undefined FUN_1487865d4(void)

undefined1 FUN_1487865d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_148786740(param_2 + -0x10,param_3 + -0x10);
      FUN_14878679e(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148786648 FUN_148786648 body=59 status=ok
// SIG undefined FUN_148786648(void)

undefined8 FUN_148786648(longlong *param_1)

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



// FUNCTION 14878668e FUN_14878668e body=32 status=ok
// SIG undefined FUN_14878668e(void)

void FUN_14878668e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1487866ee(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1487866ee FUN_1487866ee body=81 status=ok
// SIG undefined FUN_1487866ee(void)

void FUN_1487866ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b35b2c0;
  FUN_140d2a262(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2a2ab(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148786740 FUN_148786740 body=93 status=ok
// SIG undefined FUN_148786740(void)

undefined8 * FUN_148786740(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d2a2ab(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487867fc(param_1,iVar1);
      FUN_14878686f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14878679e FUN_14878679e body=93 status=ok
// SIG undefined FUN_14878679e(void)

undefined8 * FUN_14878679e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d2a262(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487868bc(param_1,iVar1);
      FUN_14878692f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487867fc FUN_1487867fc body=115 status=ok
// SIG undefined FUN_1487867fc(void)

void FUN_1487867fc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14878686f FUN_14878686f body=76 status=ok
// SIG undefined FUN_14878686f(void)

void FUN_14878686f(undefined8 *param_1,longlong param_2,int param_3)

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



// FUNCTION 1487868bc FUN_1487868bc body=115 status=ok
// SIG undefined FUN_1487868bc(void)

void FUN_1487868bc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14878692f FUN_14878692f body=76 status=ok
// SIG undefined FUN_14878692f(void)

void FUN_14878692f(undefined8 *param_1,longlong param_2,int param_3)

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



// FUNCTION 1487869c4 FUN_1487869c4 body=54 status=ok
// SIG undefined FUN_1487869c4(void)

undefined1 FUN_1487869c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148786ac8(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148786a22 FUN_148786a22 body=59 status=ok
// SIG undefined FUN_148786a22(void)

undefined8 FUN_148786a22(longlong *param_1)

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



// FUNCTION 148786a68 FUN_148786a68 body=32 status=ok
// SIG undefined FUN_148786a68(void)

void FUN_148786a68(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_140c440ce(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148786ac8 FUN_148786ac8 body=77 status=ok
// SIG undefined FUN_148786ac8(void)

longlong FUN_148786ac8(longlong param_1,longlong param_2)

{
  FUN_1401f3db8(param_1 + 8,param_2 + 8);
  FUN_1406b39e6(param_1 + 0x28,param_2 + 0x28);
  FUN_1406b3a44(param_1 + 0x38,param_2 + 0x38);
  FUN_148786b16(param_1 + 0x48,param_2 + 0x48);
  return param_1;
}



// FUNCTION 148786b16 FUN_148786b16 body=93 status=ok
// SIG undefined FUN_148786b16(void)

undefined8 * FUN_148786b16(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c44172(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148786b74(param_1,iVar1);
      FUN_148786be7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148786b74 FUN_148786b74 body=115 status=ok
// SIG undefined FUN_148786b74(void)

void FUN_148786b74(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148786be7 FUN_148786be7 body=76 status=ok
// SIG undefined FUN_148786be7(void)

void FUN_148786be7(undefined8 *param_1,longlong param_2,int param_3)

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



// FUNCTION 148786c68 FUN_148786c68 body=68 status=ok
// SIG undefined FUN_148786c68(void)

undefined1 FUN_148786c68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148786cd4 FUN_148786cd4 body=59 status=ok
// SIG undefined FUN_148786cd4(void)

undefined8 FUN_148786cd4(longlong *param_1)

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



// FUNCTION 148786d1a FUN_148786d1a body=32 status=ok
// SIG undefined FUN_148786d1a(void)

void FUN_148786d1a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_143c827f2(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148786dd0 FUN_148786dd0 body=97 status=ok
// SIG undefined FUN_148786dd0(void)

undefined8 FUN_148786dd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
    do {
      *(undefined1 *)(param_2 + -0x40) = *(undefined1 *)(param_3 + -0x40);
      *(undefined8 *)(param_2 + -0x48) = *(undefined8 *)(param_3 + -0x48);
      FUN_14117b026(param_2 + -0x38,param_3 + -0x38);
      FUN_1401f3db8(param_2,param_3);
      *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(param_3 + 0x18);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148786e5a FUN_148786e5a body=59 status=ok
// SIG undefined FUN_148786e5a(void)

undefined8 FUN_148786e5a(longlong *param_1)

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



// FUNCTION 148786ea0 FUN_148786ea0 body=32 status=ok
// SIG undefined FUN_148786ea0(void)

void FUN_148786ea0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_143c828d6(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148786f82 FUN_148786f82 body=82 status=ok
// SIG undefined FUN_148786f82(void)

undefined8 FUN_148786f82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined1 *)(param_2 + -0x18) = *(undefined1 *)(param_3 + -0x18);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_14117b026(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148786ffc FUN_148786ffc body=59 status=ok
// SIG undefined FUN_148786ffc(void)

undefined8 FUN_148786ffc(longlong *param_1)

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



// FUNCTION 148787042 FUN_148787042 body=34 status=ok
// SIG undefined FUN_148787042(void)

void FUN_148787042(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14587d474(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1487870b0 FUN_1487870b0 body=57 status=ok
// SIG undefined FUN_1487870b0(void)

void FUN_1487870b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c6b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c6b0 = FUN_140002ddd(FUN_146531eb5,uVar1,L"MissionObjectiveAspect_UpdateCountModifier")
    ;
  }
  return;
}



// FUNCTION 14878714a FUN_14878714a body=59 status=ok
// SIG undefined FUN_14878714a(void)

undefined8 FUN_14878714a(longlong *param_1)

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



// FUNCTION 148787196 FUN_148787196 body=38 status=ok
// SIG undefined FUN_148787196(void)

void FUN_148787196(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x470) == '\x01') {
    FUN_1403d96c2(param_2);
    *(undefined1 *)(param_2 + 0x470) = 0;
  }
  return;
}



// FUNCTION 14878721a FUN_14878721a body=104 status=ok
// SIG undefined FUN_14878721a(void)

undefined8 FUN_14878721a(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14891045a(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148787284 FUN_148787284 body=28 status=ok
// SIG undefined FUN_148787284(void)

undefined8 FUN_148787284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1487872ea FUN_1487872ea body=54 status=ok
// SIG undefined FUN_1487872ea(void)

undefined1 FUN_1487872ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487873fa(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148787348 FUN_148787348 body=59 status=ok
// SIG undefined FUN_148787348(void)

undefined8 FUN_148787348(longlong *param_1)

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



// FUNCTION 14878738e FUN_14878738e body=42 status=ok
// SIG undefined FUN_14878738e(void)

void FUN_14878738e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*(byte *)(param_2 + 0x40)])(param_2 + 8);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1487873fa FUN_1487873fa body=273 status=ok
// SIG undefined FUN_1487873fa(void)

undefined1 * FUN_1487873fa(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = *param_2;
  if (param_2 != param_1) {
    uStack_90 = CONCAT71(uStack_90._1_7_,param_2[0x40]);
    (*(code *)(&PTR_caseD_2_14b1f3420)[(byte)param_2[0x40]])(&local_c8,param_2 + 8);
    local_58 = (undefined4)local_98;
    uStack_54 = local_98._4_4_;
    uStack_50 = (undefined4)uStack_90;
    uStack_4c = uStack_90._4_4_;
    local_68 = (undefined4)local_a8;
    uStack_64 = local_a8._4_4_;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    local_78 = (undefined4)local_b8;
    uStack_74 = local_b8._4_4_;
    uStack_70 = (undefined4)uStack_b0;
    uStack_6c = uStack_b0._4_4_;
    local_88 = (undefined4)local_c8;
    uStack_84 = local_c8._4_4_;
    uStack_80 = (undefined4)uStack_c0;
    uStack_7c = uStack_c0._4_4_;
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar8 = *(ulonglong *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x38) = (undefined4)local_98;
    *(undefined4 *)(param_1 + 0x3c) = local_98._4_4_;
    *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_90;
    *(undefined4 *)(param_1 + 0x44) = uStack_90._4_4_;
    *(undefined4 *)(param_1 + 0x28) = (undefined4)local_a8;
    *(undefined4 *)(param_1 + 0x2c) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_a0;
    *(undefined4 *)(param_1 + 0x34) = uStack_a0._4_4_;
    *(undefined4 *)(param_1 + 0x18) = (undefined4)local_b8;
    *(undefined4 *)(param_1 + 0x1c) = local_b8._4_4_;
    *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_b0;
    *(undefined4 *)(param_1 + 0x24) = uStack_b0._4_4_;
    *(undefined4 *)(param_1 + 8) = (undefined4)local_c8;
    *(undefined4 *)(param_1 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_c0;
    *(undefined4 *)(param_1 + 0x14) = uStack_c0._4_4_;
    local_c8 = uVar1;
    uStack_c0 = uVar2;
    local_b8 = uVar3;
    uStack_b0 = uVar4;
    local_a8 = uVar5;
    uStack_a0 = uVar6;
    local_98 = uVar7;
    uStack_90 = uVar8;
    (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[uVar8 & 0xff])(&local_c8);
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  param_1[0x58] = param_2[0x58];
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148787572 FUN_148787572 body=59 status=ok
// SIG undefined FUN_148787572(void)

undefined8 FUN_148787572(longlong *param_1)

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



// FUNCTION 148787626 FUN_148787626 body=54 status=ok
// SIG undefined FUN_148787626(void)

undefined1 FUN_148787626(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148787732(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148787684 FUN_148787684 body=59 status=ok
// SIG undefined FUN_148787684(void)

undefined8 FUN_148787684(longlong *param_1)

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



// FUNCTION 1487876ca FUN_1487876ca body=37 status=ok
// SIG undefined FUN_1487876ca(void)

void FUN_1487876ca(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148787732 FUN_148787732 body=88 status=ok
// SIG undefined FUN_148787732(void)

undefined8 * FUN_148787732(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14878778a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14878778a FUN_14878778a body=98 status=ok
// SIG undefined FUN_14878778a(void)

void FUN_14878778a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148787832 FUN_148787832 body=78 status=ok
// SIG undefined FUN_148787832(void)

undefined8 FUN_148787832(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined1 *)(lVar1 + -8) = *(undefined1 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_14117b026();
      lVar2 = lVar2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487878a8 FUN_1487878a8 body=59 status=ok
// SIG undefined FUN_1487878a8(void)

undefined8 FUN_1487878a8(longlong *param_1)

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



// FUNCTION 1487878ee FUN_1487878ee body=64 status=ok
// SIG undefined FUN_1487878ee(void)

void FUN_1487878ee(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x48) == '\x01') {
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
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148787982 FUN_148787982 body=397 status=ok
// SIG undefined FUN_148787982(void)

void FUN_148787982(undefined8 param_1,longlong param_2)

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
  FUN_1488e7b34(local_20,&local_60,puVar2);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148787b10 FUN_148787b10 body=427 status=ok
// SIG undefined FUN_148787b10(void)

void FUN_148787b10(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
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
  puVar1 = &local_34;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_38 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488e8c4e(&local_48,local_28,puVar1,local_38);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148787cbc FUN_148787cbc body=397 status=ok
// SIG undefined FUN_148787cbc(void)

void FUN_148787cbc(undefined8 param_1,longlong param_2)

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
  FUN_1488e80e0(local_20,&local_60,puVar2);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148787e4a FUN_148787e4a body=361 status=ok
// SIG undefined FUN_148787e4a(void)

void FUN_148787e4a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_34;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488e8530(local_28,puVar2,puVar3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148787fb4 FUN_148787fb4 body=468 status=ok
// SIG undefined FUN_148787fb4(void)

void FUN_148787fb4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
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
  local_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar2 = &local_34;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_44;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  local_50 = local_40;
  FUN_1488e830e(local_28,puVar2,&local_50,puVar3);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878818a FUN_14878818a body=366 status=ok
// SIG undefined FUN_14878818a(void)

void FUN_14878818a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined4 local_24;
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
  local_2c = 0;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = local_3c & 0xffffff00;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_2c;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_3c;
  uStack_54 = (undefined4)uStack_38;
  uStack_50 = uStack_38._4_4_;
  uStack_4c = uStack_30;
  FUN_1488e866e(local_20,puVar2);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487882fa FUN_1487882fa body=284 status=ok
// SIG undefined FUN_1487882fa(void)

void FUN_1487882fa(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_2c = 0;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = &local_2c;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488e8a68(&local_38,local_20,puVar1);
  *(undefined4 *)(param_3 + 1) = local_30;
  *param_3 = local_38;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148788418 FUN_148788418 body=398 status=ok
// SIG undefined FUN_148788418(void)

void FUN_148788418(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [36];
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_3c = 0;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_3c;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488e88cc(&local_54,local_30,puVar1,puVar2);
  *(undefined4 *)(param_3 + 1) = local_4c;
  *param_3 = local_54;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487885a8 FUN_1487885a8 body=444 status=ok
// SIG undefined FUN_1487885a8(void)

void FUN_1487885a8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [36];
  undefined4 local_44;
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar2 = &local_34;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_44;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488e8268(local_28,puVar2,local_40,puVar3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487887b0 FUN_1487887b0 body=429 status=ok
// SIG undefined FUN_1487887b0(void)

void FUN_1487887b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_58 [7];
  
  local_58[6] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[5] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 5);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_58[2];
  uVar1 = FUN_14477b664(local_58[3]);
  local_78 = FUN_14477b664(uVar1);
  local_70 = local_58[4];
  FUN_143dd8b0a(&local_64,local_58[5],&local_80,local_58);
  *(undefined4 *)(param_3 + 1) = local_5c;
  *param_3 = local_64;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[6] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14878895e FUN_14878895e body=429 status=ok
// SIG undefined FUN_14878895e(void)

void FUN_14878895e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_58 [7];
  
  local_58[6] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[5] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 5);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_58[2];
  uVar1 = FUN_14477b664(local_58[3]);
  local_78 = FUN_14477b664(uVar1);
  local_70 = local_58[4];
  FUN_143dd8436(&local_64,local_58[5],&local_80,local_58);
  *(undefined4 *)(param_3 + 1) = local_5c;
  *param_3 = local_64;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[6] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148788b0c FUN_148788b0c body=429 status=ok
// SIG undefined FUN_148788b0c(void)

void FUN_148788b0c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_58 [7];
  
  local_58[6] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[5] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 5);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_58[2];
  uVar1 = FUN_14477b664(local_58[3]);
  local_78 = FUN_14477b664(uVar1);
  local_70 = local_58[4];
  FUN_143dd88c4(&local_64,local_58[5],&local_80,local_58);
  *(undefined4 *)(param_3 + 1) = local_5c;
  *param_3 = local_64;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[6] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148788cba FUN_148788cba body=322 status=ok
// SIG undefined FUN_148788cba(void)

void FUN_148788cba(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined2 **ppuVar1;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  int local_44;
  undefined2 *local_40;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1488eba18(&local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  ppuVar1 = &local_40;
  if (*(undefined2 ***)(param_2 + 0x38) != (undefined2 **)0x0) {
    ppuVar1 = *(undefined2 ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488eb45c(&local_60,ppuVar1);
  FUN_140115bdc(param_3,&local_60);
  local_60 = &DAT_14a171d50;
  local_48 = 0;
  if (local_44 != 0) {
    FUN_140115c12(&local_50,0);
  }
  local_58 = 0;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_40 = &DAT_14a171d50;
  local_28 = 0;
  if (local_24 != 0) {
    FUN_140115c12(&local_30,0);
  }
  local_38 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148788dfe FUN_148788dfe body=323 status=ok
// SIG undefined FUN_148788dfe(void)

void FUN_148788dfe(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined2 **ppuVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 *local_40;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1488eba18(&local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  ppuVar1 = &local_40;
  if (*(undefined2 ***)(param_2 + 0x38) != (undefined2 **)0x0) {
    ppuVar1 = *(undefined2 ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488eb49e(&local_50,ppuVar1);
  if (&local_50 == param_3) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_50;
    local_50 = 0;
    *(undefined4 *)(param_3 + 1) = local_48;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_44;
  }
  local_40 = &DAT_14a171d50;
  local_28 = 0;
  if (local_24 != 0) {
    FUN_140115c12(&local_30,0);
  }
  local_38 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148788f62 FUN_148788f62 body=45 status=ok
// SIG undefined FUN_148788f62(void)

longlong FUN_148788f62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145b04ae8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148788f90 FUN_148788f90 body=48 status=ok
// SIG undefined FUN_148788f90(void)

longlong FUN_148788f90(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1c0;
  FUN_145b04ae8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148789034 FUN_148789034 body=59 status=ok
// SIG undefined FUN_148789034(void)

undefined8 FUN_148789034(longlong *param_1)

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



// FUNCTION 148789138 FUN_148789138 body=54 status=ok
// SIG undefined FUN_148789138(void)

undefined1 FUN_148789138(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14878924c(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148789196 FUN_148789196 body=59 status=ok
// SIG undefined FUN_148789196(void)

undefined8 FUN_148789196(longlong *param_1)

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



// FUNCTION 1487891dc FUN_1487891dc body=34 status=ok
// SIG undefined FUN_1487891dc(void)

void FUN_1487891dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1487892b2(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14878924c FUN_14878924c body=100 status=ok
// SIG undefined FUN_14878924c(void)

longlong FUN_14878924c(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (param_2 != param_1) {
    FUN_1401b31d8(param_1 + 0x18,param_2 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 1487892b2 FUN_1487892b2 body=78 status=ok
// SIG undefined FUN_1487892b2(void)

void FUN_1487892b2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b366b60;
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001487892f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148789300 FUN_148789300 body=38 status=ok
// SIG undefined FUN_148789300(void)

undefined8 FUN_148789300(undefined8 param_1,int param_2)

{
  FUN_1487892b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148789326 FUN_148789326 body=55 status=ok
// SIG undefined FUN_148789326(void)

void FUN_148789326(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c7c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c7c0 = FUN_140002ddd(FUN_146532a2b,uVar1,L"MissionObjectiveUxModifier");
  }
  return;
}



// FUNCTION 14878935e FUN_14878935e body=126 status=ok
// SIG undefined FUN_14878935e(void)

void FUN_14878935e(undefined8 param_1,undefined8 *param_2)

{
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0x13] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 2;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *param_2 = &PTR_FUN_14b366b30;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  FUN_144928b90(param_2 + 10,0);
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  return;
}



// FUNCTION 1487893dc FUN_1487893dc body=96 status=ok
// SIG undefined FUN_1487893dc(void)

void FUN_1487893dc(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 5) = 2;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *param_2 = &PTR_FUN_14b366b30;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  FUN_144928b90(param_2 + 10,0);
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  return;
}



// FUNCTION 148789460 FUN_148789460 body=127 status=ok
// SIG undefined FUN_148789460(void)

undefined8 FUN_148789460(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
    do {
      FUN_14878924c(param_2 + -0x60,param_3 + -0x60);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1447715ec(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x2c);
      uVar2 = *(undefined4 *)(param_3 + 0x30);
      uVar3 = *(undefined4 *)(param_3 + 0x34);
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(param_2 + 0x2c) = uVar1;
      *(undefined4 *)(param_2 + 0x30) = uVar2;
      *(undefined4 *)(param_2 + 0x34) = uVar3;
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148789508 FUN_148789508 body=59 status=ok
// SIG undefined FUN_148789508(void)

undefined8 FUN_148789508(longlong *param_1)

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



// FUNCTION 148789554 FUN_148789554 body=66 status=ok
// SIG undefined FUN_148789554(void)

void FUN_148789554(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *param_2 = &PTR_FUN_14b366b30;
    if (param_2[0xf] != 0) {
      FUN_1400020a8();
    }
    FUN_1487892b2(param_2);
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  return;
}



// FUNCTION 1487895e4 FUN_1487895e4 body=67 status=ok
// SIG undefined FUN_1487895e4(void)

undefined8 * FUN_1487895e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b366b30;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1487892b2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148789628 FUN_148789628 body=55 status=ok
// SIG undefined FUN_148789628(void)

void FUN_148789628(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c7d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c7d8 = FUN_140002ddd(FUN_146532a8a,uVar1,L"MissionObjectiveUxModifier_HealthBar");
  }
  return;
}



// FUNCTION 148789766 FUN_148789766 body=63 status=ok
// SIG undefined FUN_148789766(void)

undefined1 FUN_148789766(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_143c836f2(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 1487897ce FUN_1487897ce body=59 status=ok
// SIG undefined FUN_1487897ce(void)

undefined8 FUN_1487897ce(longlong *param_1)

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



// FUNCTION 14878981a FUN_14878981a body=38 status=ok
// SIG undefined FUN_14878981a(void)

void FUN_14878981a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_143c8367a(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 14878988e FUN_14878988e body=38 status=ok
// SIG undefined FUN_14878988e(void)

undefined8 FUN_14878988e(undefined8 param_1,int param_2)

{
  FUN_143c8367a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487898b4 FUN_1487898b4 body=55 status=ok
// SIG undefined FUN_1487898b4(void)

void FUN_1487898b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c808 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c808 = FUN_140002ddd(FUN_146532aea,uVar1,L"MissionObjectiveUxModifier_ResolveTimer");
  }
  return;
}



// FUNCTION 14878995c FUN_14878995c body=59 status=ok
// SIG undefined FUN_14878995c(void)

undefined8 FUN_14878995c(longlong *param_1)

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



// FUNCTION 148789aa2 FUN_148789aa2 body=59 status=ok
// SIG undefined FUN_148789aa2(void)

undefined8 FUN_148789aa2(longlong *param_1)

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



// FUNCTION 148789b42 FUN_148789b42 body=29 status=ok
// SIG undefined FUN_148789b42(void)

undefined8 FUN_148789b42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148789b60 FUN_148789b60 body=55 status=ok
// SIG undefined FUN_148789b60(void)

void FUN_148789b60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c850 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c850 = FUN_140002ddd(FUN_146532c47,uVar1,L"MissionReplayParams");
  }
  return;
}



// FUNCTION 148789bcc FUN_148789bcc body=370 status=ok
// SIG undefined FUN_148789bcc(void)

undefined8 FUN_148789bcc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  uVar13 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_70 = uVar13;
  if (param_4 != 0) {
    lVar14 = param_2 + 8;
    lVar15 = 0;
    do {
      lVar1 = param_3 + 0x40 + lVar15;
      lVar2 = lVar14 + lVar15;
      *(undefined1 *)(lVar2 + -8) = *(undefined1 *)(lVar1 + -0x40);
      if ((undefined1 *)(lVar1 + -0x40) != (undefined1 *)(lVar2 + -8)) {
        bVar5 = *(byte *)(param_3 + 0x40 + lVar15);
        uStack_c0 = CONCAT71(uStack_c0._1_7_,bVar5);
        (*(code *)(&PTR_caseD_2_14b1f3420)[bVar5])(&local_f8,param_3 + 8 + lVar15);
        local_88 = (undefined4)local_c8;
        uStack_84 = local_c8._4_4_;
        uStack_80 = (undefined4)uStack_c0;
        uStack_7c = uStack_c0._4_4_;
        local_98 = (undefined4)local_d8;
        uStack_94 = local_d8._4_4_;
        uStack_90 = (undefined4)uStack_d0;
        uStack_8c = uStack_d0._4_4_;
        local_a8 = (undefined4)local_e8;
        uStack_a4 = local_e8._4_4_;
        uStack_a0 = (undefined4)uStack_e0;
        uStack_9c = uStack_e0._4_4_;
        local_b8 = (undefined4)local_f8;
        uStack_b4 = local_f8._4_4_;
        uStack_b0 = (undefined4)uStack_f0;
        uStack_ac = uStack_f0._4_4_;
        uVar6 = *(undefined8 *)(lVar14 + lVar15);
        uVar7 = ((undefined8 *)(lVar14 + lVar15))[1];
        puVar3 = (undefined8 *)(param_2 + 0x18 + lVar15);
        uVar8 = *puVar3;
        uVar9 = puVar3[1];
        puVar3 = (undefined8 *)(param_2 + 0x28 + lVar15);
        uVar10 = *puVar3;
        uVar11 = puVar3[1];
        puVar3 = (undefined8 *)(param_2 + 0x38 + lVar15);
        uVar12 = *puVar3;
        uVar13 = puVar3[1];
        puVar4 = (undefined4 *)(param_2 + 0x38 + lVar15);
        *puVar4 = (undefined4)local_c8;
        puVar4[1] = local_c8._4_4_;
        puVar4[2] = (undefined4)uStack_c0;
        puVar4[3] = uStack_c0._4_4_;
        puVar4 = (undefined4 *)(param_2 + 0x28 + lVar15);
        *puVar4 = (undefined4)local_d8;
        puVar4[1] = local_d8._4_4_;
        puVar4[2] = (undefined4)uStack_d0;
        puVar4[3] = uStack_d0._4_4_;
        puVar4 = (undefined4 *)(param_2 + 0x18 + lVar15);
        *puVar4 = (undefined4)local_e8;
        puVar4[1] = local_e8._4_4_;
        puVar4[2] = (undefined4)uStack_e0;
        puVar4[3] = uStack_e0._4_4_;
        puVar4 = (undefined4 *)(lVar14 + lVar15);
        *puVar4 = (undefined4)local_f8;
        puVar4[1] = local_f8._4_4_;
        puVar4[2] = (undefined4)uStack_f0;
        puVar4[3] = uStack_f0._4_4_;
        local_f8 = uVar6;
        uStack_f0 = uVar7;
        local_e8 = uVar8;
        uStack_e0 = uVar9;
        local_d8 = uVar10;
        uStack_d0 = uVar11;
        local_c8 = uVar12;
        uStack_c0 = uVar13;
        (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[uVar13 & 0xff])(&local_f8);
      }
      *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(lVar1 + 0x10);
      uVar13 = *(ulonglong *)(lVar1 + 8);
      *(ulonglong *)(lVar2 + 0x40) = uVar13;
      lVar15 = lVar15 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return CONCAT71((int7)(uVar13 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148789d68 FUN_148789d68 body=59 status=ok
// SIG undefined FUN_148789d68(void)

undefined8 FUN_148789d68(longlong *param_1)

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



// FUNCTION 148789dae FUN_148789dae body=42 status=ok
// SIG undefined FUN_148789dae(void)

void FUN_148789dae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*(byte *)(param_2 + 0x40)])(param_2 + 8);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148789e5a FUN_148789e5a body=54 status=ok
// SIG undefined FUN_148789e5a(void)

undefined1 FUN_148789e5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140115bdc(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 148789e90 FUN_148789e90 body=31 status=ok
// SIG undefined FUN_148789e90(void)

undefined1
FUN_148789e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144b082da(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 148789eb0 FUN_148789eb0 body=262 status=ok
// SIG undefined FUN_148789eb0(void)

undefined4
FUN_148789eb0(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
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
    FUN_14891a3cc(local_68);
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



// FUNCTION 148789fb8 FUN_148789fb8 body=41 status=ok
// SIG undefined FUN_148789fb8(void)

void FUN_148789fb8(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)(*param_3 + 0x28))(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 148789ff6 FUN_148789ff6 body=59 status=ok
// SIG undefined FUN_148789ff6(void)

undefined8 FUN_148789ff6(longlong *param_1)

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



// FUNCTION 14878a0a6 FUN_14878a0a6 body=82 status=ok
// SIG undefined FUN_14878a0a6(void)

void FUN_14878a0a6(undefined8 *param_1)

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



// FUNCTION 14878a0f8 FUN_14878a0f8 body=29 status=ok
// SIG undefined FUN_14878a0f8(void)

void FUN_14878a0f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1405e5ea0();
  *param_2 = uVar1;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  return;
}



// FUNCTION 14878a116 FUN_14878a116 body=29 status=ok
// SIG undefined FUN_14878a116(void)

void FUN_14878a116(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1405e5ea0();
  *param_2 = uVar1;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  return;
}



// FUNCTION 14878a156 FUN_14878a156 body=54 status=ok
// SIG undefined FUN_14878a156(void)

undefined1 FUN_14878a156(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_142b16128(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14878a18c FUN_14878a18c body=31 status=ok
// SIG undefined FUN_14878a18c(void)

undefined1
FUN_14878a18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142b16154(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14878a1ac FUN_14878a1ac body=260 status=ok
// SIG undefined FUN_14878a1ac(void)

undefined4
FUN_14878a1ac(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 != 0) {
    local_70 = param_7;
    local_78 = param_6;
    FUN_1457e2052(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*param_1 + 8))(0,local_68);
  if ((local_5c & 2) == 0) {
    local_58 = FUN_1405e5ea0();
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  }
  local_70 = param_7;
  local_78 = param_6;
  uVar1 = FUN_1457e2052(param_3,param_2,&local_58,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_68);
  if ((local_5c & 4) != 0) {
    FUN_141022d94(&local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14878a2b2 FUN_14878a2b2 body=39 status=ok
// SIG undefined FUN_14878a2b2(void)

void FUN_14878a2b2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_147091d32(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14878a2ee FUN_14878a2ee body=59 status=ok
// SIG undefined FUN_14878a2ee(void)

undefined8 FUN_14878a2ee(longlong *param_1)

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



// FUNCTION 14878a334 FUN_14878a334 body=32 status=ok
// SIG undefined FUN_14878a334(void)

void FUN_14878a334(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_141022d94(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14878a3e6 FUN_14878a3e6 body=63 status=ok
// SIG undefined FUN_14878a3e6(void)

undefined1 FUN_14878a3e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14878a512(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 14878a44e FUN_14878a44e body=59 status=ok
// SIG undefined FUN_14878a44e(void)

undefined8 FUN_14878a44e(longlong *param_1)

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



// FUNCTION 14878a49a FUN_14878a49a body=38 status=ok
// SIG undefined FUN_14878a49a(void)

void FUN_14878a49a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_140d50f72(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}


