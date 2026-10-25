// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148791c6e FUN_148791c6e body=33 status=ok
// SIG undefined FUN_148791c6e(void)

void FUN_148791c6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_140170ace(param_2 + 8);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148791d1e FUN_148791d1e body=59 status=ok
// SIG undefined FUN_148791d1e(void)

undefined8 FUN_148791d1e(longlong *param_1)

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



// FUNCTION 148791d6a FUN_148791d6a body=38 status=ok
// SIG undefined FUN_148791d6a(void)

void FUN_148791d6a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_148791e36(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148791e36 FUN_148791e36 body=68 status=ok
// SIG undefined FUN_148791e36(void)

void FUN_148791e36(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b399fe0;
  FUN_140ae4038(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bee6a(param_1);
  return;
}



// FUNCTION 148791f22 FUN_148791f22 body=59 status=ok
// SIG undefined FUN_148791f22(void)

undefined8 FUN_148791f22(longlong *param_1)

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



// FUNCTION 148791f6e FUN_148791f6e body=38 status=ok
// SIG undefined FUN_148791f6e(void)

void FUN_148791f6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 1487920c0 FUN_1487920c0 body=59 status=ok
// SIG undefined FUN_1487920c0(void)

undefined8 FUN_1487920c0(longlong *param_1)

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



// FUNCTION 14879210c FUN_14879210c body=38 status=ok
// SIG undefined FUN_14879210c(void)

void FUN_14879210c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14879218a FUN_14879218a body=38 status=ok
// SIG undefined FUN_14879218a(void)

undefined8 FUN_14879218a(undefined8 param_1,int param_2)

{
  FUN_1401bee6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487921b0 FUN_1487921b0 body=55 status=ok
// SIG undefined FUN_1487921b0(void)

void FUN_1487921b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dd10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dd10 = FUN_140002ddd(FUN_14653857b,uVar1,L"ObjectiveTypeSettings_GbxContainedTask");
  }
  return;
}



// FUNCTION 148792244 FUN_148792244 body=54 status=ok
// SIG undefined FUN_148792244(void)

undefined1 FUN_148792244(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487923b4(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 1487922a2 FUN_1487922a2 body=59 status=ok
// SIG undefined FUN_1487922a2(void)

undefined8 FUN_1487922a2(longlong *param_1)

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



// FUNCTION 1487922e8 FUN_1487922e8 body=32 status=ok
// SIG undefined FUN_1487922e8(void)

void FUN_1487922e8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14185ef88(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148792356 FUN_148792356 body=38 status=ok
// SIG undefined FUN_148792356(void)

undefined8 FUN_148792356(undefined8 param_1,int param_2)

{
  FUN_14185ef88();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879237c FUN_14879237c body=55 status=ok
// SIG undefined FUN_14879237c(void)

void FUN_14879237c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dd28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dd28 = FUN_140002ddd(FUN_146538611,uVar1,L"GbxDamageObjectiveBehaviorMod");
  }
  return;
}



// FUNCTION 1487923b4 FUN_1487923b4 body=104 status=ok
// SIG undefined FUN_1487923b4(void)

longlong FUN_1487923b4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_14862318e(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = *(longlong *)(param_2 + 0x28);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(longlong *)(param_1 + 0x28) = lVar4;
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



// FUNCTION 14879241e FUN_14879241e body=105 status=ok
// SIG undefined FUN_14879241e(void)

void FUN_14879241e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x90);
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  *param_2 = &PTR_FUN_14b39b8f0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)((longlong)param_2 + 0x81) = 0;
  *(undefined8 *)((longlong)param_2 + 0x89) = 0;
  return;
}



// FUNCTION 148792534 FUN_148792534 body=59 status=ok
// SIG undefined FUN_148792534(void)

undefined8 FUN_148792534(longlong *param_1)

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



// FUNCTION 148792580 FUN_148792580 body=38 status=ok
// SIG undefined FUN_148792580(void)

void FUN_148792580(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_14185eff6(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 1487925fe FUN_1487925fe body=38 status=ok
// SIG undefined FUN_1487925fe(void)

undefined8 FUN_1487925fe(undefined8 param_1,int param_2)

{
  FUN_14185eff6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148792624 FUN_148792624 body=55 status=ok
// SIG undefined FUN_148792624(void)

void FUN_148792624(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dd40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dd40 = FUN_140002ddd(FUN_1465386a7,uVar1,L"ObjectiveTypeSettings_GbxDamage");
  }
  return;
}



// FUNCTION 14879265c FUN_14879265c body=94 status=ok
// SIG undefined FUN_14879265c(void)

void FUN_14879265c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x98);
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  *param_2 = &PTR_FUN_14b39ba90;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined1 *)(param_2 + 0x13) = 1;
  return;
}



// FUNCTION 148792762 FUN_148792762 body=59 status=ok
// SIG undefined FUN_148792762(void)

undefined8 FUN_148792762(longlong *param_1)

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



// FUNCTION 1487927ae FUN_1487927ae body=38 status=ok
// SIG undefined FUN_1487927ae(void)

void FUN_1487927ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 14879282c FUN_14879282c body=38 status=ok
// SIG undefined FUN_14879282c(void)

undefined8 FUN_14879282c(undefined8 param_1,int param_2)

{
  FUN_1401bee6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148792852 FUN_148792852 body=55 status=ok
// SIG undefined FUN_148792852(void)

void FUN_148792852(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dd58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dd58 = FUN_140002ddd(FUN_146538706,uVar1,L"ObjectiveTypeSettings_GbxInteract");
  }
  return;
}



// FUNCTION 14879288a FUN_14879288a body=37 status=ok
// SIG undefined FUN_14879288a(void)

void FUN_14879288a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x540);
  FUN_14185f0aa(param_2);
  return;
}



// FUNCTION 148792908 FUN_148792908 body=59 status=ok
// SIG undefined FUN_148792908(void)

undefined8 FUN_148792908(longlong *param_1)

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



// FUNCTION 148792954 FUN_148792954 body=38 status=ok
// SIG undefined FUN_148792954(void)

void FUN_148792954(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x540) == '\x01') {
    FUN_140a49674(param_2);
    *(undefined1 *)(param_2 + 0x540) = 0;
  }
  return;
}



// FUNCTION 1487929d2 FUN_1487929d2 body=38 status=ok
// SIG undefined FUN_1487929d2(void)

undefined8 FUN_1487929d2(undefined8 param_1,int param_2)

{
  FUN_140a49674();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487929f8 FUN_1487929f8 body=55 status=ok
// SIG undefined FUN_1487929f8(void)

void FUN_1487929f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dda0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dda0 = FUN_140002ddd(FUN_1465387e7,uVar1,L"ObjectiveTypeSettings_GbxKill");
  }
  return;
}



// FUNCTION 148792a7a FUN_148792a7a body=59 status=ok
// SIG undefined FUN_148792a7a(void)

undefined8 FUN_148792a7a(longlong *param_1)

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



// FUNCTION 148792ac6 FUN_148792ac6 body=38 status=ok
// SIG undefined FUN_148792ac6(void)

void FUN_148792ac6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x158) == '\x01') {
    FUN_140f7d31a(param_2);
    *(undefined1 *)(param_2 + 0x158) = 0;
  }
  return;
}



// FUNCTION 148792c74 FUN_148792c74 body=59 status=ok
// SIG undefined FUN_148792c74(void)

undefined8 FUN_148792c74(longlong *param_1)

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



// FUNCTION 148792d26 FUN_148792d26 body=29 status=ok
// SIG undefined FUN_148792d26(void)

undefined8 FUN_148792d26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148792d44 FUN_148792d44 body=55 status=ok
// SIG undefined FUN_148792d44(void)

void FUN_148792d44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6de00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6de00 = FUN_140002ddd(FUN_146538973,uVar1,L"GbxPickupObjectiveSpawnStrategy");
  }
  return;
}



// FUNCTION 148792e16 FUN_148792e16 body=59 status=ok
// SIG undefined FUN_148792e16(void)

undefined8 FUN_148792e16(longlong *param_1)

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



// FUNCTION 148792ea8 FUN_148792ea8 body=57 status=ok
// SIG undefined FUN_148792ea8(void)

void FUN_148792ea8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6de18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6de18 = FUN_140002ddd(FUN_1465389d4,uVar1,L"GbxPickupObjectiveSpawnStrategy_Placed");
  }
  return;
}



// FUNCTION 148792ee6 FUN_148792ee6 body=117 status=ok
// SIG undefined FUN_148792ee6(void)

void FUN_148792ee6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xb8);
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  *param_2 = &PTR_FUN_14b39b9b0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)((longlong)param_2 + 0x81) = 0;
  *(undefined8 *)((longlong)param_2 + 0x89) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined4 *)(param_2 + 0x17) = 0;
  return;
}



// FUNCTION 14879301a FUN_14879301a body=59 status=ok
// SIG undefined FUN_14879301a(void)

undefined8 FUN_14879301a(longlong *param_1)

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



// FUNCTION 148793066 FUN_148793066 body=38 status=ok
// SIG undefined FUN_148793066(void)

void FUN_148793066(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_14185f200(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 1487930e4 FUN_1487930e4 body=38 status=ok
// SIG undefined FUN_1487930e4(void)

undefined8 FUN_1487930e4(undefined8 param_1,int param_2)

{
  FUN_14185f200();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879310a FUN_14879310a body=55 status=ok
// SIG undefined FUN_14879310a(void)

void FUN_14879310a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6de30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6de30 = FUN_140002ddd(FUN_146538a6b,uVar1,L"ObjectiveTypeSettings_GbxPickup");
  }
  return;
}



// FUNCTION 148793142 FUN_148793142 body=37 status=ok
// SIG undefined FUN_148793142(void)

void FUN_148793142(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb8);
  FUN_143c86d70(param_2);
  return;
}



// FUNCTION 1487931c0 FUN_1487931c0 body=59 status=ok
// SIG undefined FUN_1487931c0(void)

undefined8 FUN_1487931c0(longlong *param_1)

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



// FUNCTION 14879320c FUN_14879320c body=38 status=ok
// SIG undefined FUN_14879320c(void)

void FUN_14879320c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 14879328a FUN_14879328a body=38 status=ok
// SIG undefined FUN_14879328a(void)

undefined8 FUN_14879328a(undefined8 param_1,int param_2)

{
  FUN_1401bee6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487932b0 FUN_1487932b0 body=55 status=ok
// SIG undefined FUN_1487932b0(void)

void FUN_1487932b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6de60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6de60 = FUN_140002ddd(FUN_146538b31,uVar1,L"ObjectiveTypeSettings_GbxTravel");
  }
  return;
}



// FUNCTION 1487932e8 FUN_1487932e8 body=75 status=ok
// SIG undefined FUN_1487932e8(void)

void FUN_1487932e8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,400);
  *param_2 = &PTR_FUN_14b057db0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0x10;
  FUN_14070e804(param_2 + 7);
  *param_2 = &PTR_FUN_14b39b860;
  return;
}



// FUNCTION 148793334 FUN_148793334 body=80 status=ok
// SIG undefined FUN_148793334(void)

void FUN_148793334(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b057db0;
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0x10;
  param_2[6] = 0;
  FUN_14070e804(param_2 + 7);
  *param_2 = &PTR_FUN_14b39b860;
  return;
}



// FUNCTION 1487933a8 FUN_1487933a8 body=83 status=ok
// SIG undefined FUN_1487933a8(void)

undefined1 FUN_1487933a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_14862318e(param_2 + -0x10,param_3 + -0x10);
      FUN_14070e270(param_2,param_3);
      param_3 = param_3 + 0x198;
      param_2 = param_2 + 0x198;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148793424 FUN_148793424 body=59 status=ok
// SIG undefined FUN_148793424(void)

undefined8 FUN_148793424(longlong *param_1)

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



// FUNCTION 148793470 FUN_148793470 body=38 status=ok
// SIG undefined FUN_148793470(void)

void FUN_148793470(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x198) == '\x01') {
    FUN_140d97ce8(param_2);
    *(undefined1 *)(param_2 + 0x198) = 0;
  }
  return;
}



// FUNCTION 1487934e4 FUN_1487934e4 body=38 status=ok
// SIG undefined FUN_1487934e4(void)

undefined8 FUN_1487934e4(undefined8 param_1,int param_2)

{
  FUN_140d97ce8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879350a FUN_14879350a body=55 status=ok
// SIG undefined FUN_14879350a(void)

void FUN_14879350a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6de78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6de78 = FUN_140002ddd(FUN_146538bc7,uVar1,L"TalkToNPCUsabilityBehaviorMod");
  }
  return;
}



// FUNCTION 14879358c FUN_14879358c body=59 status=ok
// SIG undefined FUN_14879358c(void)

undefined8 FUN_14879358c(longlong *param_1)

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



// FUNCTION 1487935d8 FUN_1487935d8 body=38 status=ok
// SIG undefined FUN_1487935d8(void)

void FUN_1487935d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_1487937ee(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 14879363c FUN_14879363c body=433 status=ok
// SIG undefined FUN_14879363c(void)

undefined8 * FUN_14879363c(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3a) = 0x101;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x600000000000;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14b39b760;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x82) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8a) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x10;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x16] = &PTR_FUN_14b023b20;
  param_1[0x19] = &PTR_FUN_14b023b40;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = &PTR_FUN_14b00be70;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xf00000d0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 1;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xf00000d0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xf00000d0;
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 6;
  param_1[0x2a] = 0;
  FUN_144a5dc74(param_1 + 0x2b);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xf00000d0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  return param_1;
}



// FUNCTION 1487937ee FUN_1487937ee body=122 status=ok
// SIG undefined FUN_1487937ee(void)

void FUN_1487937ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b39b760;
  param_1[0x16] = &PTR_FUN_14b023b20;
  param_1[0x19] = &PTR_FUN_14b023b40;
  if ((longlong *)param_1[0x2b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2b] + 0x10))();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x16] = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 0x17);
  FUN_1401bee6a(param_1);
  return;
}



// FUNCTION 14879388c FUN_14879388c body=321 status=ok
// SIG undefined FUN_14879388c(void)

void FUN_14879388c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148929e16(local_18,local_20,local_24);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487939ce FUN_1487939ce body=321 status=ok
// SIG undefined FUN_1487939ce(void)

void FUN_1487939ce(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148929be4(local_18,local_20,local_24);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148793b10 FUN_148793b10 body=321 status=ok
// SIG undefined FUN_148793b10(void)

void FUN_148793b10(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148929eec(local_18,local_20,local_24);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148793c58 FUN_148793c58 body=232 status=ok
// SIG undefined FUN_148793c58(void)

void FUN_148793c58(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14892a16e(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148793d48 FUN_148793d48 body=331 status=ok
// SIG undefined FUN_148793d48(void)

void FUN_148793d48(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
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
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = (undefined4)local_28;
  uStack_3c = local_28._4_4_;
  uStack_38 = (undefined4)uStack_20;
  uStack_34 = uStack_20._4_4_;
  FUN_148929fca(local_18,&local_40,local_2c != 0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148793e94 FUN_148793e94 body=237 status=ok
// SIG undefined FUN_148793e94(void)

void FUN_148793e94(undefined8 param_1,longlong param_2)

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
  FUN_14892a1d2(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148793f82 FUN_148793f82 body=230 status=ok
// SIG undefined FUN_148793f82(void)

void FUN_148793f82(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148929ea8(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879406a FUN_14879406a body=230 status=ok
// SIG undefined FUN_14879406a(void)

void FUN_14879406a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148929d28(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148794152 FUN_148794152 body=230 status=ok
// SIG undefined FUN_148794152(void)

void FUN_148794152(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148929f82(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148794240 FUN_148794240 body=331 status=ok
// SIG undefined FUN_148794240(void)

void FUN_148794240(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
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
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = (undefined4)local_28;
  uStack_3c = local_28._4_4_;
  uStack_38 = (undefined4)uStack_20;
  uStack_34 = uStack_20._4_4_;
  FUN_14892a098(local_18,&local_40,local_2c != 0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879438c FUN_14879438c body=237 status=ok
// SIG undefined FUN_14879438c(void)

void FUN_14879438c(undefined8 param_1,longlong param_2)

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
  FUN_14892a286(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487944a6 FUN_1487944a6 body=50 status=ok
// SIG undefined FUN_1487944a6(void)

void FUN_1487944a6(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x390) + 0x10))(param_1 + 0x390);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14879456c FUN_14879456c body=75 status=ok
// SIG undefined FUN_14879456c(void)

void FUN_14879456c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1418a0c66(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487945ce FUN_1487945ce body=45 status=ok
// SIG undefined FUN_1487945ce(void)

longlong FUN_1487945ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140c639a6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148794602 FUN_148794602 body=48 status=ok
// SIG undefined FUN_148794602(void)

longlong FUN_148794602(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140c639a6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879463a FUN_14879463a body=48 status=ok
// SIG undefined FUN_14879463a(void)

longlong FUN_14879463a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140c639a6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148794672 FUN_148794672 body=48 status=ok
// SIG undefined FUN_148794672(void)

longlong FUN_148794672(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140c639a6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487946aa FUN_1487946aa body=48 status=ok
// SIG undefined FUN_1487946aa(void)

longlong FUN_1487946aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x628;
  FUN_140c639a6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487946e2 FUN_1487946e2 body=105 status=ok
// SIG undefined FUN_1487946e2(void)

void FUN_1487946e2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x98);
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  *param_2 = &PTR_FUN_14b3a18c0;
  *(undefined1 *)((longlong)param_2 + 0x79) = 1;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x94) = 0x43480000;
  return;
}



// FUNCTION 1487947fa FUN_1487947fa body=59 status=ok
// SIG undefined FUN_1487947fa(void)

undefined8 FUN_1487947fa(longlong *param_1)

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



// FUNCTION 148794846 FUN_148794846 body=38 status=ok
// SIG undefined FUN_148794846(void)

void FUN_148794846(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1401bee6a(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1487948c4 FUN_1487948c4 body=38 status=ok
// SIG undefined FUN_1487948c4(void)

undefined8 FUN_1487948c4(undefined8 param_1,int param_2)

{
  FUN_1401bee6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487948ea FUN_1487948ea body=55 status=ok
// SIG undefined FUN_1487948ea(void)

void FUN_1487948ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dec0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dec0 = FUN_140002ddd(FUN_1465390e1,uVar1,L"ObjectiveTypeSettings_TimedArea");
  }
  return;
}



// FUNCTION 14879496c FUN_14879496c body=59 status=ok
// SIG undefined FUN_14879496c(void)

undefined8 FUN_14879496c(longlong *param_1)

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



// FUNCTION 1487949b8 FUN_1487949b8 body=38 status=ok
// SIG undefined FUN_1487949b8(void)

void FUN_1487949b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x208) == '\x01') {
    FUN_148794bd0(param_2);
    *(undefined1 *)(param_2 + 0x208) = 0;
  }
  return;
}



// FUNCTION 148794a1c FUN_148794a1c body=435 status=ok
// SIG undefined FUN_148794a1c(void)

undefined8 * FUN_148794a1c(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3a) = 0x101;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x600000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR_FUN_14b3a1a90;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x10;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x15] = &PTR_FUN_14b023b20;
  param_1[0x18] = &PTR_FUN_14b023b40;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = &PTR_FUN_14b00be70;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xf00000d0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x104) = 1;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xf00000d0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xf00000d0;
  param_1[0x26] = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 6;
  param_1[0x29] = 0;
  FUN_144a5dc74(param_1 + 0x2a);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xf00000d0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  return param_1;
}



// FUNCTION 148794bd0 FUN_148794bd0 body=122 status=ok
// SIG undefined FUN_148794bd0(void)

void FUN_148794bd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3a1a90;
  param_1[0x15] = &PTR_FUN_14b023b20;
  param_1[0x18] = &PTR_FUN_14b023b40;
  if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2a] + 0x10))();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  param_1[0x15] = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 0x16);
  FUN_1401bee6a(param_1);
  return;
}



// FUNCTION 148794cca FUN_148794cca body=54 status=ok
// SIG undefined FUN_148794cca(void)

undefined1 FUN_148794cca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148794e3a(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148794d28 FUN_148794d28 body=59 status=ok
// SIG undefined FUN_148794d28(void)

undefined8 FUN_148794d28(longlong *param_1)

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



// FUNCTION 148794d6e FUN_148794d6e body=32 status=ok
// SIG undefined FUN_148794d6e(void)

void FUN_148794d6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140e7c694(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148794ddc FUN_148794ddc body=38 status=ok
// SIG undefined FUN_148794ddc(void)

undefined8 FUN_148794ddc(undefined8 param_1,int param_2)

{
  FUN_140e7c694();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148794e02 FUN_148794e02 body=55 status=ok
// SIG undefined FUN_148794e02(void)

void FUN_148794e02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6def0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6def0 = FUN_140002ddd(FUN_14653920d,uVar1,L"ObjectiveValueEvaluatorState");
  }
  return;
}



// FUNCTION 148794e3a FUN_148794e3a body=421 status=ok
// SIG undefined FUN_148794e3a(void)

longlong FUN_148794e3a(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *_Src;
  longlong *plVar9;
  
  uVar4 = *(undefined8 *)(param_2 + 8);
  lVar5 = *(longlong *)(param_2 + 0x10);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  plVar9 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(longlong *)(param_1 + 0x10) = lVar5;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if (param_2 != param_1) {
    FUN_1401b31d8(param_1 + 0x18,param_2 + 0x18);
  }
  plVar9 = (longlong *)(param_1 + 0x30);
  _Src = (undefined8 *)(param_2 + 0x30);
  bVar2 = *(byte *)(param_1 + 0x50);
  if (bVar2 == *(byte *)(param_2 + 0x50)) {
    if (0x18 < *(ushort *)(param_2 + 0x48)) {
      _Src = *(undefined8 **)(param_2 + 0x30);
    }
    if (0x18 < *(ushort *)(param_1 + 0x48)) {
      plVar9 = (longlong *)*plVar9;
    }
    uVar7 = (ulonglong)((uint)bVar2 * 0x120);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar7);
    if (pcVar6 == (code *)0x0) {
      memcpy(plVar9,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
    }
    else {
      (*pcVar6)(plVar9,_Src);
    }
  }
  else {
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
    if (pcVar6 != (code *)0x0) {
      plVar8 = plVar9;
      if (0x18 < *(ushort *)(param_1 + 0x48)) {
        plVar8 = (longlong *)*plVar9;
      }
      (*pcVar6)(plVar8);
    }
    if (0x18 < *(ushort *)(param_1 + 0x48)) {
      FUN_1400020a8(*plVar9);
    }
    bVar2 = *(byte *)(param_2 + 0x50);
    uVar3 = *(ushort *)(param_2 + 0x48);
    *(ushort *)(param_1 + 0x48) = uVar3;
    plVar8 = plVar9;
    if (0x18 < uVar3) {
      plVar8 = (longlong *)FUN_14001cc68(uVar3,0);
      *plVar9 = (longlong)plVar8;
      _Src = (undefined8 *)*_Src;
    }
    uVar7 = (ulonglong)((uint)bVar2 * 0x120);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + uVar7);
    if (pcVar6 == (code *)0x0) {
      memcpy(plVar8,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
    }
    else {
      (*pcVar6)(plVar8,_Src);
    }
    *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  lVar5 = *(longlong *)(param_2 + 0x68);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar9 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(longlong *)(param_1 + 0x68) = lVar5;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  return param_1;
}



// FUNCTION 148795048 FUN_148795048 body=59 status=ok
// SIG undefined FUN_148795048(void)

undefined8 FUN_148795048(longlong *param_1)

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



// FUNCTION 1487950e8 FUN_1487950e8 body=29 status=ok
// SIG undefined FUN_1487950e8(void)

undefined8 FUN_1487950e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148795106 FUN_148795106 body=55 status=ok
// SIG undefined FUN_148795106(void)

void FUN_148795106(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6df08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6df08 = FUN_140002ddd(FUN_1465392a5,uVar1,L"ObjectiveValueEvaluator");
  }
  return;
}



// FUNCTION 14879513e FUN_14879513e body=103 status=ok
// SIG undefined FUN_14879513e(void)

void FUN_14879513e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 6,0,0x98);
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 2;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *param_2 = &PTR_FUN_14b3a48a0;
  FUN_144928b90(param_2 + 0xf,0);
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 1487951a6 FUN_1487951a6 body=100 status=ok
// SIG undefined FUN_1487951a6(void)

void FUN_1487951a6(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 2;
  *(undefined2 *)(param_2 + 9) = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *param_2 = &PTR_FUN_14b3a48a0;
  param_2[0xe] = 0;
  FUN_144928b90(param_2 + 0xf,0);
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 14879522e FUN_14879522e body=63 status=ok
// SIG undefined FUN_14879522e(void)

undefined1 FUN_14879522e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148795414(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148795296 FUN_148795296 body=59 status=ok
// SIG undefined FUN_148795296(void)

undefined8 FUN_148795296(longlong *param_1)

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



// FUNCTION 1487952e2 FUN_1487952e2 body=40 status=ok
// SIG undefined FUN_1487952e2(void)

void FUN_1487952e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_1487953b6(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148795358 FUN_148795358 body=38 status=ok
// SIG undefined FUN_148795358(void)

undefined8 FUN_148795358(undefined8 param_1,int param_2)

{
  FUN_1487953b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879537e FUN_14879537e body=55 status=ok
// SIG undefined FUN_14879537e(void)

void FUN_14879537e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6df20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6df20 =
         FUN_140002ddd(FUN_14653933d,uVar1,L"ObjectiveValueEvaluatorState_ActorHealthDepleted");
  }
  return;
}



// FUNCTION 1487953b6 FUN_1487953b6 body=93 status=ok
// SIG undefined FUN_1487953b6(void)

void FUN_1487953b6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3a48a0;
  plVar3 = (longlong *)param_1[0x18];
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
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140e7c694(param_1);
  return;
}



// FUNCTION 148795414 FUN_148795414 body=164 status=ok
// SIG undefined FUN_148795414(void)

longlong FUN_148795414(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_148794e3a();
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  FUN_1447715ec(param_1 + 0x88,param_2 + 0x88);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  lVar4 = *(longlong *)(param_2 + 0xc0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar3;
  *(longlong *)(param_1 + 0xc0) = lVar4;
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



// FUNCTION 148795550 FUN_148795550 body=59 status=ok
// SIG undefined FUN_148795550(void)

undefined8 FUN_148795550(longlong *param_1)

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



// FUNCTION 1487955ec FUN_1487955ec body=55 status=ok
// SIG undefined FUN_1487955ec(void)

void FUN_1487955ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6df38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6df38 =
         FUN_140002ddd(FUN_1465393d3,uVar1,L"ObjectiveValueEvaluator_ActorHealthDepleted");
  }
  return;
}



// FUNCTION 1487956a2 FUN_1487956a2 body=54 status=ok
// SIG undefined FUN_1487956a2(void)

undefined1 FUN_1487956a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148794e3a(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148795700 FUN_148795700 body=59 status=ok
// SIG undefined FUN_148795700(void)

undefined8 FUN_148795700(longlong *param_1)

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



// FUNCTION 148795746 FUN_148795746 body=32 status=ok
// SIG undefined FUN_148795746(void)

void FUN_148795746(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140e7c694(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1487957b4 FUN_1487957b4 body=38 status=ok
// SIG undefined FUN_1487957b4(void)

undefined8 FUN_1487957b4(undefined8 param_1,int param_2)

{
  FUN_140e7c694();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487957da FUN_1487957da body=55 status=ok
// SIG undefined FUN_1487957da(void)

void FUN_1487957da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6df50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6df50 = FUN_140002ddd(FUN_146539469,uVar1,L"ObjectiveValueEvaluatorState_Automatic");
  }
  return;
}



// FUNCTION 148795860 FUN_148795860 body=59 status=ok
// SIG undefined FUN_148795860(void)

undefined8 FUN_148795860(longlong *param_1)

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



// FUNCTION 1487958f4 FUN_1487958f4 body=55 status=ok
// SIG undefined FUN_1487958f4(void)

void FUN_1487958f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6df68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6df68 = FUN_140002ddd(FUN_1465394ff,uVar1,L"ObjectiveValueEvaluator_Automatic");
  }
  return;
}



// FUNCTION 1487959c8 FUN_1487959c8 body=59 status=ok
// SIG undefined FUN_1487959c8(void)

undefined8 FUN_1487959c8(longlong *param_1)

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



// FUNCTION 148795a5c FUN_148795a5c body=57 status=ok
// SIG undefined FUN_148795a5c(void)

void FUN_148795a5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6df80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6df80 = FUN_140002ddd(FUN_14653955e,uVar1,L"ObjectiveValueEvaluator_Boundary");
  }
  return;
}



// FUNCTION 148795a96 FUN_148795a96 body=29 status=ok
// SIG undefined FUN_148795a96(void)

undefined8 FUN_148795a96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148795ab4 FUN_148795ab4 body=55 status=ok
// SIG undefined FUN_148795ab4(void)

void FUN_148795ab4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e058 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e058 = FUN_140002ddd(FUN_14653958d,uVar1,L"ObjectiveValueEvaluator_FactExpressionBase")
    ;
  }
  return;
}



// FUNCTION 148795b6a FUN_148795b6a body=54 status=ok
// SIG undefined FUN_148795b6a(void)

undefined1 FUN_148795b6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148794e3a(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148795bc8 FUN_148795bc8 body=59 status=ok
// SIG undefined FUN_148795bc8(void)

undefined8 FUN_148795bc8(longlong *param_1)

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



// FUNCTION 148795c0e FUN_148795c0e body=32 status=ok
// SIG undefined FUN_148795c0e(void)

void FUN_148795c0e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140e7c694(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148795c7c FUN_148795c7c body=38 status=ok
// SIG undefined FUN_148795c7c(void)

undefined8 FUN_148795c7c(undefined8 param_1,int param_2)

{
  FUN_140e7c694();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148795ca2 FUN_148795ca2 body=55 status=ok
// SIG undefined FUN_148795ca2(void)

void FUN_148795ca2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6df98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6df98 =
         FUN_140002ddd(FUN_146539625,uVar1,L"ObjectiveValueEvaluatorState_CompositeObjective");
  }
  return;
}



// FUNCTION 148795d36 FUN_148795d36 body=59 status=ok
// SIG undefined FUN_148795d36(void)

undefined8 FUN_148795d36(longlong *param_1)

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



// FUNCTION 148795dd6 FUN_148795dd6 body=55 status=ok
// SIG undefined FUN_148795dd6(void)

void FUN_148795dd6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dfb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dfb0 = FUN_140002ddd(FUN_146539684,uVar1,L"ObjectiveValueEvaluator_CompositeObjective")
    ;
  }
  return;
}



// FUNCTION 148795e94 FUN_148795e94 body=97 status=ok
// SIG undefined FUN_148795e94(void)

undefined1 FUN_148795e94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148794e3a(param_2,param_3);
    FUN_1487960c0(param_2 + 0x70,param_3 + 0x70);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 148795f1e FUN_148795f1e body=59 status=ok
// SIG undefined FUN_148795f1e(void)

undefined8 FUN_148795f1e(longlong *param_1)

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



// FUNCTION 148795f6a FUN_148795f6a body=40 status=ok
// SIG undefined FUN_148795f6a(void)

void FUN_148795f6a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_14879603e(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148795fe0 FUN_148795fe0 body=38 status=ok
// SIG undefined FUN_148795fe0(void)

undefined8 FUN_148795fe0(undefined8 param_1,int param_2)

{
  FUN_14879603e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148796006 FUN_148796006 body=55 status=ok
// SIG undefined FUN_148796006(void)

void FUN_148796006(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dfc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dfc8 = FUN_140002ddd(FUN_14653971b,uVar1,L"ObjectiveValueEvaluatorState_Compound");
  }
  return;
}



// FUNCTION 14879603e FUN_14879603e body=57 status=ok
// SIG undefined FUN_14879603e(void)

void FUN_14879603e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3a4920;
  FUN_148796077(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_140e7c694(param_1);
  return;
}



// FUNCTION 148796077 FUN_148796077 body=73 status=ok
// SIG undefined FUN_148796077(void)

void FUN_148796077(longlong param_1,int param_2)

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



// FUNCTION 1487960c0 FUN_1487960c0 body=95 status=ok
// SIG undefined FUN_1487960c0(void)

undefined8 * FUN_1487960c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148796077(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148796120(param_1,iVar1);
      FUN_148796182(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148796120 FUN_148796120 body=98 status=ok
// SIG undefined FUN_148796120(void)

void FUN_148796120(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148796182 FUN_148796182 body=45 status=ok
// SIG undefined FUN_148796182(void)

void FUN_148796182(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1487961dc FUN_1487961dc body=68 status=ok
// SIG undefined FUN_1487961dc(void)

undefined1 FUN_1487961dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_148796360(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148796248 FUN_148796248 body=59 status=ok
// SIG undefined FUN_148796248(void)

undefined8 FUN_148796248(longlong *param_1)

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



// FUNCTION 14879628e FUN_14879628e body=32 status=ok
// SIG undefined FUN_14879628e(void)

void FUN_14879628e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_148796328(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1487962f0 FUN_1487962f0 body=55 status=ok
// SIG undefined FUN_1487962f0(void)

void FUN_1487962f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dff8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dff8 = FUN_140002ddd(FUN_1465397e1,uVar1,L"ObjectiveValueEvaluator_Compound");
  }
  return;
}



// FUNCTION 148796328 FUN_148796328 body=55 status=ok
// SIG undefined FUN_148796328(void)

void FUN_148796328(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3a2b40;
  FUN_140e92cdd(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148796360 FUN_148796360 body=93 status=ok
// SIG undefined FUN_148796360(void)

undefined8 * FUN_148796360(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e92cdd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1487963be(param_1,iVar1);
      FUN_148796431(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487963be FUN_1487963be body=115 status=ok
// SIG undefined FUN_1487963be(void)

void FUN_1487963be(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148796431 FUN_148796431 body=76 status=ok
// SIG undefined FUN_148796431(void)

void FUN_148796431(undefined8 *param_1,longlong param_2,int param_3)

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



// FUNCTION 1487964b8 FUN_1487964b8 body=76 status=ok
// SIG undefined FUN_1487964b8(void)

undefined1 FUN_1487964b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
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
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14879652c FUN_14879652c body=59 status=ok
// SIG undefined FUN_14879652c(void)

undefined8 FUN_14879652c(longlong *param_1)

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



// FUNCTION 148796572 FUN_148796572 body=32 status=ok
// SIG undefined FUN_148796572(void)

void FUN_148796572(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_145846860(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1487965fe FUN_1487965fe body=62 status=ok
// SIG undefined FUN_1487965fe(void)

undefined1 FUN_1487965fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148796664 FUN_148796664 body=59 status=ok
// SIG undefined FUN_148796664(void)

undefined8 FUN_148796664(longlong *param_1)

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



// FUNCTION 1487966aa FUN_1487966aa body=32 status=ok
// SIG undefined FUN_1487966aa(void)

void FUN_1487966aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_14185f344(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1487967a0 FUN_1487967a0 body=97 status=ok
// SIG undefined FUN_1487967a0(void)

undefined1 FUN_1487967a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148794e3a(param_2,param_3);
    FUN_1459855b4(param_2 + 0x70,param_3 + 0x70);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 14879682a FUN_14879682a body=59 status=ok
// SIG undefined FUN_14879682a(void)

undefined8 FUN_14879682a(longlong *param_1)

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



// FUNCTION 148796876 FUN_148796876 body=57 status=ok
// SIG undefined FUN_148796876(void)

void FUN_148796876(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b3a4940;
    FUN_1407e878c(param_2 + 0xe);
    FUN_140e7c694(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1487968fe FUN_1487968fe body=60 status=ok
// SIG undefined FUN_1487968fe(void)

undefined8 * FUN_1487968fe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3a4940;
  FUN_1407e878c(param_1 + 0xe);
  FUN_140e7c694(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879693a FUN_14879693a body=55 status=ok
// SIG undefined FUN_14879693a(void)

void FUN_14879693a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e040 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e040 =
         FUN_140002ddd(FUN_146539937,uVar1,L"ObjectiveValueEvaluatorState_FactExpressionBase");
  }
  return;
}



// FUNCTION 1487969da FUN_1487969da body=59 status=ok
// SIG undefined FUN_1487969da(void)

undefined8 FUN_1487969da(longlong *param_1)

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



// FUNCTION 148796afa FUN_148796afa body=54 status=ok
// SIG undefined FUN_148796afa(void)

undefined1 FUN_148796afa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148794e3a(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148796b58 FUN_148796b58 body=59 status=ok
// SIG undefined FUN_148796b58(void)

undefined8 FUN_148796b58(longlong *param_1)

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



// FUNCTION 148796b9e FUN_148796b9e body=32 status=ok
// SIG undefined FUN_148796b9e(void)

void FUN_148796b9e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140e7c694(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148796c0c FUN_148796c0c body=38 status=ok
// SIG undefined FUN_148796c0c(void)

undefined8 FUN_148796c0c(undefined8 param_1,int param_2)

{
  FUN_140e7c694();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148796c32 FUN_148796c32 body=55 status=ok
// SIG undefined FUN_148796c32(void)

void FUN_148796c32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e070 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e070 = FUN_140002ddd(FUN_1465399fd,uVar1,L"ObjectiveValueEvaluatorState_NamedEvent");
  }
  return;
}



// FUNCTION 148796cee FUN_148796cee body=59 status=ok
// SIG undefined FUN_148796cee(void)

undefined8 FUN_148796cee(longlong *param_1)

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



// FUNCTION 148796d8e FUN_148796d8e body=55 status=ok
// SIG undefined FUN_148796d8e(void)

void FUN_148796d8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e088 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e088 = FUN_140002ddd(FUN_146539a93,uVar1,L"ObjectiveValueEvaluator_NamedEvent");
  }
  return;
}



// FUNCTION 148796e44 FUN_148796e44 body=54 status=ok
// SIG undefined FUN_148796e44(void)

undefined1 FUN_148796e44(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148794e3a(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148796ea2 FUN_148796ea2 body=59 status=ok
// SIG undefined FUN_148796ea2(void)

undefined8 FUN_148796ea2(longlong *param_1)

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



// FUNCTION 148796ee8 FUN_148796ee8 body=32 status=ok
// SIG undefined FUN_148796ee8(void)

void FUN_148796ee8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_140e7c694(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148796f56 FUN_148796f56 body=38 status=ok
// SIG undefined FUN_148796f56(void)

undefined8 FUN_148796f56(undefined8 param_1,int param_2)

{
  FUN_140e7c694();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148796f7c FUN_148796f7c body=55 status=ok
// SIG undefined FUN_148796f7c(void)

void FUN_148796f7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e0a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e0a0 =
         FUN_140002ddd(FUN_146539b29,uVar1,L"ObjectiveValueEvaluatorState_ObjectiveStatus");
  }
  return;
}



// FUNCTION 148797030 FUN_148797030 body=59 status=ok
// SIG undefined FUN_148797030(void)

undefined8 FUN_148797030(longlong *param_1)

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



// FUNCTION 1487970c4 FUN_1487970c4 body=55 status=ok
// SIG undefined FUN_1487970c4(void)

void FUN_1487970c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e0b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e0b8 = FUN_140002ddd(FUN_146539bbf,uVar1,L"ObjectiveValueEvaluator_ObjectiveStatus");
  }
  return;
}



// FUNCTION 1487970fc FUN_1487970fc body=108 status=ok
// SIG undefined FUN_1487970fc(void)

void FUN_1487970fc(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x90);
  *(undefined4 *)(param_2 + 8) = 0xf00000d0;
  *(undefined4 *)(param_2 + 10) = 0x3f800000;
  *(undefined2 *)(param_2 + 0xb) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x5a) = 1;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *param_2 = &PTR_FUN_14b3a3800;
  return;
}



// FUNCTION 1487971f0 FUN_1487971f0 body=63 status=ok
// SIG undefined FUN_1487971f0(void)

undefined1 FUN_1487971f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_143c87d12(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 148797258 FUN_148797258 body=59 status=ok
// SIG undefined FUN_148797258(void)

undefined8 FUN_148797258(longlong *param_1)

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



// FUNCTION 1487972a4 FUN_1487972a4 body=38 status=ok
// SIG undefined FUN_1487972a4(void)

void FUN_1487972a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_1414282c8(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148797318 FUN_148797318 body=38 status=ok
// SIG undefined FUN_148797318(void)

undefined8 FUN_148797318(undefined8 param_1,int param_2)

{
  FUN_1414282c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879733e FUN_14879733e body=55 status=ok
// SIG undefined FUN_14879733e(void)

void FUN_14879733e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e0d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e0d0 = FUN_140002ddd(FUN_146539c55,uVar1,L"ObjectiveValueEvaluator_PauseableTimer");
  }
  return;
}



// FUNCTION 148797376 FUN_148797376 body=105 status=ok
// SIG undefined FUN_148797376(void)

void FUN_148797376(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 5) = 2;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *param_2 = &PTR_FUN_14b3a49a0;
  param_2[0x1a] = 0;
  return;
}



// FUNCTION 148797472 FUN_148797472 body=92 status=ok
// SIG undefined FUN_148797472(void)

undefined1 FUN_148797472(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_143c882fe(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xcc);
    uVar2 = *(undefined4 *)(param_3 + 0xd0);
    uVar3 = *(undefined4 *)(param_3 + 0xd4);
    *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_3 + 200);
    *(undefined4 *)(param_2 + 0xcc) = uVar1;
    *(undefined4 *)(param_2 + 0xd0) = uVar2;
    *(undefined4 *)(param_2 + 0xd4) = uVar3;
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 1487974f6 FUN_1487974f6 body=59 status=ok
// SIG undefined FUN_1487974f6(void)

undefined8 FUN_1487974f6(longlong *param_1)

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



// FUNCTION 148797542 FUN_148797542 body=38 status=ok
// SIG undefined FUN_148797542(void)

void FUN_148797542(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_143c8826c(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 1487975b6 FUN_1487975b6 body=38 status=ok
// SIG undefined FUN_1487975b6(void)

undefined8 FUN_1487975b6(undefined8 param_1,int param_2)

{
  FUN_143c8826c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487975dc FUN_1487975dc body=55 status=ok
// SIG undefined FUN_1487975dc(void)

void FUN_1487975dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e0e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e0e8 =
         FUN_140002ddd(FUN_146539d1d,uVar1,L"ObjectiveValueEvaluatorState_PauseableTimer");
  }
  return;
}



// FUNCTION 148797614 FUN_148797614 body=38 status=ok
// SIG undefined FUN_148797614(void)

undefined8 FUN_148797614(undefined8 param_1,int param_2)

{
  FUN_143c8826c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879763a FUN_14879763a body=55 status=ok
// SIG undefined FUN_14879763a(void)

void FUN_14879763a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e118 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e118 = FUN_140002ddd(FUN_146539d4c,uVar1,L"ObjectiveValueEvaluatorState_Timer");
  }
  return;
}



// FUNCTION 148797704 FUN_148797704 body=59 status=ok
// SIG undefined FUN_148797704(void)

undefined8 FUN_148797704(longlong *param_1)

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



// FUNCTION 1487977a4 FUN_1487977a4 body=55 status=ok
// SIG undefined FUN_1487977a4(void)

void FUN_1487977a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e100 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e100 = FUN_140002ddd(FUN_146539de3,uVar1,L"ObjectiveValueEvaluator_TaskFinished");
  }
  return;
}



// FUNCTION 1487977dc FUN_1487977dc body=103 status=ok
// SIG undefined FUN_1487977dc(void)

void FUN_1487977dc(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 6,0,0x88);
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 2;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *param_2 = &PTR_FUN_14b3a49c0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 1487978bc FUN_1487978bc body=63 status=ok
// SIG undefined FUN_1487978bc(void)

undefined1 FUN_1487978bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_143c882fe(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148797924 FUN_148797924 body=59 status=ok
// SIG undefined FUN_148797924(void)

undefined8 FUN_148797924(longlong *param_1)

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



// FUNCTION 148797970 FUN_148797970 body=38 status=ok
// SIG undefined FUN_148797970(void)

void FUN_148797970(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_143c8826c(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148797a60 FUN_148797a60 body=63 status=ok
// SIG undefined FUN_148797a60(void)

undefined1 FUN_148797a60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_143c87d12(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 148797ac8 FUN_148797ac8 body=59 status=ok
// SIG undefined FUN_148797ac8(void)

undefined8 FUN_148797ac8(longlong *param_1)

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



// FUNCTION 148797b14 FUN_148797b14 body=38 status=ok
// SIG undefined FUN_148797b14(void)

void FUN_148797b14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_1414282c8(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148797bbe FUN_148797bbe body=70 status=ok
// SIG undefined FUN_148797bbe(void)

undefined1 FUN_148797bbe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1400fce78(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148797c2c FUN_148797c2c body=59 status=ok
// SIG undefined FUN_148797c2c(void)

undefined8 FUN_148797c2c(longlong *param_1)

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



// FUNCTION 148797c72 FUN_148797c72 body=32 status=ok
// SIG undefined FUN_148797c72(void)

void FUN_148797c72(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_140ab0fa0(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148797cdc FUN_148797cdc body=55 status=ok
// SIG undefined FUN_148797cdc(void)

void FUN_148797cdc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e1a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e1a8 = FUN_140002ddd(FUN_146539f39,uVar1,L"ObjectiveWaypointSettings");
  }
  return;
}



// FUNCTION 148797d5a FUN_148797d5a body=59 status=ok
// SIG undefined FUN_148797d5a(void)

undefined8 FUN_148797d5a(longlong *param_1)

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



// FUNCTION 148797da6 FUN_148797da6 body=38 status=ok
// SIG undefined FUN_148797da6(void)

void FUN_148797da6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_140ff3794(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 148797e24 FUN_148797e24 body=473 status=ok
// SIG undefined FUN_148797e24(void)

void FUN_148797e24(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong lStack_38;
  undefined1 local_29;
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
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0;
  lStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_58 = lStack_38;
  if ((lStack_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar2 = &local_29;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_143e03c44(local_20,local_28,puVar2,&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148798004 FUN_148798004 body=232 status=ok
// SIG undefined FUN_148798004(void)

void FUN_148798004(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14892b486(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148798110 FUN_148798110 body=234 status=ok
// SIG undefined FUN_148798110(void)

void FUN_148798110(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148803d92(local_18,puVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487981fc FUN_1487981fc body=167 status=ok
// SIG undefined FUN_1487981fc(void)

void FUN_1487981fc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148803c44(&local_28,local_20);
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487982a4 FUN_1487982a4 body=156 status=ok
// SIG undefined FUN_1487982a4(void)

void FUN_1487982a4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c419b4(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148798348 FUN_148798348 body=555 status=ok
// SIG undefined FUN_148798348(void)

void FUN_148798348(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  local_30 = 0x7010;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  FUN_1446dcc8c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = &local_78;
  local_68 = local_48;
  local_78 = local_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  local_80 = local_5c != 0;
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  (**(code **)(*param_1 + 0x8a0))(param_1,puVar2,local_3c,local_3d);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148798580 FUN_148798580 body=660 status=ok
// SIG undefined FUN_148798580(void)

void FUN_148798580(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  uVar2 = local_7c;
  iVar1 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_78;
  uVar3 = FUN_14477b664(uStack_70);
  local_90 = FUN_14477b664(uVar3);
  local_88 = local_68;
  local_b0 = local_58;
  uVar3 = FUN_14477b664(uStack_50);
  local_a8 = FUN_14477b664(uVar3);
  local_a0 = local_48;
  local_b8 = iVar1 != 0;
  FUN_141263782(local_38,&local_b0,&local_98,uVar2);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148798822 FUN_148798822 body=660 status=ok
// SIG undefined FUN_148798822(void)

void FUN_148798822(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  uVar2 = local_7c;
  iVar1 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_78;
  uVar3 = FUN_14477b664(uStack_70);
  local_90 = FUN_14477b664(uVar3);
  local_88 = local_68;
  local_b0 = local_58;
  uVar3 = FUN_14477b664(uStack_50);
  local_a8 = FUN_14477b664(uVar3);
  local_a0 = local_48;
  local_b8 = iVar1 != 0;
  FUN_145820544(local_38,&local_b0,&local_98,uVar2);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148798ab8 FUN_148798ab8 body=234 status=ok
// SIG undefined FUN_148798ab8(void)

void FUN_148798ab8(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148803d18(local_18,puVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148798bb0 FUN_148798bb0 body=582 status=ok
// SIG undefined FUN_148798bb0(void)

void FUN_148798bb0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
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
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar1 = local_38;
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_3c != 0;
  local_58 = iVar1 != 0;
  FUN_1488039d2(local_20,local_28,local_30,local_34);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148798e04 FUN_148798e04 body=756 status=ok
// SIG undefined FUN_148798e04(void)

void FUN_148798e04(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  iVar2 = local_90;
  local_94 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  uVar3 = local_8c;
  iVar1 = local_94;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b0 = local_88;
  uVar4 = FUN_14477b664(uStack_80);
  local_a8 = FUN_14477b664(uVar4);
  local_a0 = local_78;
  local_c8 = local_68;
  uVar4 = FUN_14477b664(uStack_60);
  local_c0 = FUN_14477b664(uVar4);
  local_b8 = local_58;
  local_d0 = iVar1 != 0;
  local_d8 = iVar2 != 0;
  FUN_148803a3a(local_48,&local_c8,&local_b0,uVar3);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487990fe FUN_1487990fe body=162 status=ok
// SIG undefined FUN_1487990fe(void)

void FUN_1487990fe(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x8b0))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487991a8 FUN_1487991a8 body=278 status=ok
// SIG undefined FUN_1487991a8(void)

void FUN_1487991a8(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0x7010;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x8a8))(param_1,puVar2,local_3c != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487992d0 FUN_1487992d0 body=314 status=ok
// SIG undefined FUN_1487992d0(void)

longlong * FUN_1487992d0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  FUN_14118c70e(param_1 + 3,param_2 + 3);
  lVar2 = param_2[0xb];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xb];
    }
  }
  bVar1 = DAT_14c950c29;
  param_1[0xb] = lVar2;
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
  lVar2 = param_2[0xd];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xd];
    }
  }
  param_1[0xd] = lVar2;
  plVar3 = param_2 + 0xe;
  plVar4 = param_1 + 0xe;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  *(int *)(param_1 + 0x1a) = (int)param_2[0x1a];
  (**(code **)(param_1[0x1b] + 0x20))(param_1 + 0x1b,0);
  param_1[0x1c] = param_2[0x1c];
  FUN_1406022fe(param_1 + 0x1d,param_2 + 0x1d);
  return param_1;
}



// FUNCTION 14879941a FUN_14879941a body=408 status=ok
// SIG undefined FUN_14879941a(void)

void FUN_14879941a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_168 [43];
  undefined1 local_13d;
  int local_13c;
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 local_94;
  undefined4 local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  memset(local_138,0,0x100);
  local_68 = 0xffffffff;
  local_134 = 0x3f800000;
  local_94 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_13c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_13c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_13c);
  }
  iVar2 = local_13c;
  local_13d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_13d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_13d);
  }
  puVar4 = local_138;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_140bd7d9e(param_1,puVar4,iVar2 != 0,local_13d);
  *param_3 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487995ce FUN_1487995ce body=151 status=ok
// SIG undefined FUN_1487995ce(void)

void FUN_1487995ce(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14893e064(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148799680 FUN_148799680 body=95 status=ok
// SIG undefined FUN_148799680(void)

void FUN_148799680(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e0f03e(param_1 + 0x3d0,&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487996e0 FUN_1487996e0 body=119 status=ok
// SIG undefined FUN_1487996e0(void)

void FUN_1487996e0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e0f0e2(param_1,&local_30);
  if ((*param_3 != local_30) || ((int)param_3[1] != local_28)) {
    *param_3 = local_30;
    *(int *)(param_3 + 1) = local_28;
    param_3[2] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148799760 FUN_148799760 body=259 status=ok
// SIG undefined FUN_148799760(void)

void FUN_148799760(longlong param_1,longlong param_2,char *param_3)

{
  char cVar1;
  undefined1 *_Dst;
  undefined1 auStack_158 [40];
  undefined1 local_130 [4];
  undefined4 local_12c;
  undefined4 local_8c;
  undefined4 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  memset(local_130,0,0x100);
  local_60 = 0xffffffff;
  local_12c = 0x3f800000;
  local_8c = 0xffffffff;
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
  cVar1 = *(char *)(param_1 + 0x1118);
  if (cVar1 == '\x01') {
    _Dst = local_130;
    if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
      _Dst = *(undefined1 **)(param_2 + 0x38);
    }
    memcpy(_Dst,(void *)(param_1 + 0x1018),0x100);
  }
  *param_3 = cVar1;
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879986a FUN_14879986a body=158 status=ok
// SIG undefined FUN_14879986a(void)

void FUN_14879986a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14893e652(param_1,local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879994e FUN_14879994e body=156 status=ok
// SIG undefined FUN_14879994e(void)

void FUN_14879994e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14893d4f0(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487999f0 FUN_1487999f0 body=158 status=ok
// SIG undefined FUN_1487999f0(void)

void FUN_1487999f0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14893d57a(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148799ad2 FUN_148799ad2 body=156 status=ok
// SIG undefined FUN_148799ad2(void)

void FUN_148799ad2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e0e9c2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148799b78 FUN_148799b78 body=179 status=ok
// SIG undefined FUN_148799b78(void)

void FUN_148799b78(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  (**(code **)(*(longlong *)(param_1 + 0x3d0) + 0x88))(param_1 + 0x3d0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148799c2c FUN_148799c2c body=160 status=ok
// SIG undefined FUN_148799c2c(void)

void FUN_148799c2c(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  thunk_FUN_140b3d268(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148799cd4 FUN_148799cd4 body=276 status=ok
// SIG undefined FUN_148799cd4(void)

void FUN_148799cd4(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
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
  local_30 = 0x1010000010101;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x658))(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148799dee FUN_148799dee body=168 status=ok
// SIG undefined FUN_148799dee(void)

void FUN_148799dee(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*(longlong *)(param_1 + 0x3d0) + 0x78))(param_1 + 0x3d0,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148799ecc FUN_148799ecc body=158 status=ok
// SIG undefined FUN_148799ecc(void)

void FUN_148799ecc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14893e894(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14879a006 FUN_14879a006 body=45 status=ok
// SIG undefined FUN_14879a006(void)

longlong FUN_14879a006(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a062 FUN_14879a062 body=48 status=ok
// SIG undefined FUN_14879a062(void)

longlong FUN_14879a062(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a092 FUN_14879a092 body=48 status=ok
// SIG undefined FUN_14879a092(void)

longlong FUN_14879a092(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a0c2 FUN_14879a0c2 body=48 status=ok
// SIG undefined FUN_14879a0c2(void)

longlong FUN_14879a0c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a0f2 FUN_14879a0f2 body=48 status=ok
// SIG undefined FUN_14879a0f2(void)

longlong FUN_14879a0f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a122 FUN_14879a122 body=48 status=ok
// SIG undefined FUN_14879a122(void)

longlong FUN_14879a122(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a152 FUN_14879a152 body=48 status=ok
// SIG undefined FUN_14879a152(void)

longlong FUN_14879a152(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a182 FUN_14879a182 body=48 status=ok
// SIG undefined FUN_14879a182(void)

longlong FUN_14879a182(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a1b2 FUN_14879a1b2 body=48 status=ok
// SIG undefined FUN_14879a1b2(void)

longlong FUN_14879a1b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a1e2 FUN_14879a1e2 body=48 status=ok
// SIG undefined FUN_14879a1e2(void)

longlong FUN_14879a1e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a212 FUN_14879a212 body=48 status=ok
// SIG undefined FUN_14879a212(void)

longlong FUN_14879a212(longlong param_1,int param_2)

{
  param_1 = param_1 + -1000;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a242 FUN_14879a242 body=48 status=ok
// SIG undefined FUN_14879a242(void)

longlong FUN_14879a242(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f0;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a272 FUN_14879a272 body=48 status=ok
// SIG undefined FUN_14879a272(void)

longlong FUN_14879a272(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a2a2 FUN_14879a2a2 body=48 status=ok
// SIG undefined FUN_14879a2a2(void)

longlong FUN_14879a2a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a2d2 FUN_14879a2d2 body=48 status=ok
// SIG undefined FUN_14879a2d2(void)

longlong FUN_14879a2d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a302 FUN_14879a302 body=48 status=ok
// SIG undefined FUN_14879a302(void)

longlong FUN_14879a302(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a332 FUN_14879a332 body=48 status=ok
// SIG undefined FUN_14879a332(void)

longlong FUN_14879a332(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a362 FUN_14879a362 body=48 status=ok
// SIG undefined FUN_14879a362(void)

longlong FUN_14879a362(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a392 FUN_14879a392 body=48 status=ok
// SIG undefined FUN_14879a392(void)

longlong FUN_14879a392(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a3c2 FUN_14879a3c2 body=48 status=ok
// SIG undefined FUN_14879a3c2(void)

longlong FUN_14879a3c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x430;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a3f2 FUN_14879a3f2 body=48 status=ok
// SIG undefined FUN_14879a3f2(void)

longlong FUN_14879a3f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_140ce4cf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14879a474 FUN_14879a474 body=75 status=ok
// SIG undefined FUN_14879a474(void)

undefined1 FUN_14879a474(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_148729378(param_2,param_3);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14879a4e8 FUN_14879a4e8 body=59 status=ok
// SIG undefined FUN_14879a4e8(void)

undefined8 FUN_14879a4e8(longlong *param_1)

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



// FUNCTION 14879a52e FUN_14879a52e body=32 status=ok
// SIG undefined FUN_14879a52e(void)

void FUN_14879a52e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14879a588(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14879a588 FUN_14879a588 body=75 status=ok
// SIG undefined FUN_14879a588(void)

void FUN_14879a588(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3adfb0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140c08aca(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}


