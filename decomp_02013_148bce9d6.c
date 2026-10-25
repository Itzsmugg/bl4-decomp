// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148bce9d6 FUN_148bce9d6 body=34 status=ok
// SIG undefined FUN_148bce9d6(void)

void FUN_148bce9d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_148bceaa4(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148bcea46 FUN_148bcea46 body=38 status=ok
// SIG undefined FUN_148bcea46(void)

undefined8 FUN_148bcea46(undefined8 param_1,int param_2)

{
  FUN_148bceaa4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcea6c FUN_148bcea6c body=55 status=ok
// SIG undefined FUN_148bcea6c(void)

void FUN_148bcea6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4700 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4700 = FUN_140002ddd(FUN_1465be643,uVar1,L"GrenadeBehavior_PayloadTargetCombo");
  }
  return;
}



// FUNCTION 148bceaa4 FUN_148bceaa4 body=92 status=ok
// SIG undefined FUN_148bceaa4(void)

void FUN_148bceaa4(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b676180;
  plVar3 = (longlong *)param_1[0xc];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[6];
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
  FUN_140e1118a(param_1);
  return;
}



// FUNCTION 148bceb00 FUN_148bceb00 body=168 status=ok
// SIG undefined FUN_148bceb00(void)

longlong FUN_148bceb00(longlong param_1,longlong param_2)

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
  
  FUN_148bcadbc();
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(longlong *)(param_1 + 0x30) = lVar4;
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
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  uVar8 = *(undefined4 *)(param_2 + 0x40);
  uVar9 = *(undefined4 *)(param_2 + 0x44);
  uVar10 = *(undefined4 *)(param_2 + 0x45);
  uVar11 = *(undefined4 *)(param_2 + 0x49);
  uVar12 = *(undefined4 *)(param_2 + 0x4d);
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(param_2 + 0x41);
  *(undefined4 *)(param_1 + 0x45) = uVar10;
  *(undefined4 *)(param_1 + 0x49) = uVar11;
  *(undefined4 *)(param_1 + 0x4d) = uVar12;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  *(undefined4 *)(param_1 + 0x44) = uVar9;
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  return param_1;
}



// FUNCTION 148bcec40 FUN_148bcec40 body=54 status=ok
// SIG undefined FUN_148bcec40(void)

undefined1 FUN_148bcec40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bced3e(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148bcec9e FUN_148bcec9e body=59 status=ok
// SIG undefined FUN_148bcec9e(void)

undefined8 FUN_148bcec9e(longlong *param_1)

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



// FUNCTION 148bced3e FUN_148bced3e body=132 status=ok
// SIG undefined FUN_148bced3e(void)

undefined4 * FUN_148bced3e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong lVar10;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  lVar10 = *(longlong *)(param_2 + 10);
  if (DAT_14c950c29 == 1) {
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      FUN_14689c22e();
      lVar10 = *(longlong *)(param_2 + 10);
    }
  }
  bVar9 = DAT_14c950c29;
  *(longlong *)(param_1 + 10) = lVar10;
  lVar10 = *(longlong *)(param_2 + 0xc);
  if ((bVar9 & 1) != 0) {
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      FUN_14689c22e();
      lVar10 = *(longlong *)(param_2 + 0xc);
    }
  }
  *(longlong *)(param_1 + 0xc) = lVar10;
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  return param_1;
}



// FUNCTION 148bcedc4 FUN_148bcedc4 body=38 status=ok
// SIG undefined FUN_148bcedc4(void)

undefined8 FUN_148bcedc4(undefined8 param_1,int param_2)

{
  FUN_145cd13ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bcedea FUN_148bcedea body=55 status=ok
// SIG undefined FUN_148bcedea(void)

void FUN_148bcedea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4820 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4820 = FUN_140002ddd(FUN_1465bea2b,uVar1,L"HoldingStationObjectBodyState");
  }
  return;
}



// FUNCTION 148bcee22 FUN_148bcee22 body=57 status=ok
// SIG undefined FUN_148bcee22(void)

void FUN_148bcee22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba47f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba47f0 = FUN_140002ddd(FUN_1465be924,uVar1,L"HoldingStationObjectBodySettings");
  }
  return;
}



// FUNCTION 148bceeaa FUN_148bceeaa body=63 status=ok
// SIG undefined FUN_148bceeaa(void)

undefined1 FUN_148bceeaa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 148bcef12 FUN_148bcef12 body=59 status=ok
// SIG undefined FUN_148bcef12(void)

undefined8 FUN_148bcef12(longlong *param_1)

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



// FUNCTION 148bcef5e FUN_148bcef5e body=38 status=ok
// SIG undefined FUN_148bcef5e(void)

void FUN_148bcef5e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 148bcefdc FUN_148bcefdc body=48 status=ok
// SIG undefined FUN_148bcefdc(void)

void FUN_148bcefdc(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b676410;
  return;
}



// FUNCTION 148bcf00c FUN_148bcf00c body=32 status=ok
// SIG undefined FUN_148bcf00c(void)

void FUN_148bcf00c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b676410;
  return;
}



// FUNCTION 148bcf086 FUN_148bcf086 body=59 status=ok
// SIG undefined FUN_148bcf086(void)

undefined8 FUN_148bcf086(longlong *param_1)

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



// FUNCTION 148bcf0d2 FUN_148bcf0d2 body=40 status=ok
// SIG undefined FUN_148bcf0d2(void)

void FUN_148bcf0d2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_145cd13ac(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 148bcf176 FUN_148bcf176 body=139 status=ok
// SIG undefined FUN_148bcf176(void)

undefined8 FUN_148bcf176(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    *(undefined1 *)(param_2 + 0x458) = *(undefined1 *)(param_3 + 0x458);
    *(undefined8 *)(param_2 + 0x460) = *(undefined8 *)(param_3 + 0x460);
    uVar1 = *(undefined4 *)(param_3 + 0x46c);
    uVar2 = *(undefined4 *)(param_3 + 0x470);
    uVar3 = *(undefined4 *)(param_3 + 0x474);
    *(undefined4 *)(param_2 + 0x468) = *(undefined4 *)(param_3 + 0x468);
    *(undefined4 *)(param_2 + 0x46c) = uVar1;
    *(undefined4 *)(param_2 + 0x470) = uVar2;
    *(undefined4 *)(param_2 + 0x474) = uVar3;
    FUN_144a787a6(param_2 + 0x478,param_3 + 0x478);
    *(undefined8 *)(param_2 + 0x488) = *(undefined8 *)(param_3 + 0x488);
    param_2 = param_2 + 0x490;
    param_3 = param_3 + 0x490;
  }
  return 1;
}



// FUNCTION 148bcf22a FUN_148bcf22a body=59 status=ok
// SIG undefined FUN_148bcf22a(void)

undefined8 FUN_148bcf22a(longlong *param_1)

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



// FUNCTION 148bcf276 FUN_148bcf276 body=65 status=ok
// SIG undefined FUN_148bcf276(void)

void FUN_148bcf276(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x92) == '\x01') {
    *param_2 = &PTR_FUN_14b5ecae0;
    if (param_2[0x8f] != 0) {
      FUN_1400020a8();
    }
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x92) = 0;
  }
  return;
}



// FUNCTION 148bcf320 FUN_148bcf320 body=74 status=ok
// SIG undefined FUN_148bcf320(void)

void FUN_148bcf320(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  FUN_144a5dc74(param_2 + 3);
  *param_2 = &PTR_FUN_14b676a60;
  *(undefined1 *)(param_2 + 5) = 1;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  return;
}



// FUNCTION 148bcf380 FUN_148bcf380 body=89 status=ok
// SIG undefined FUN_148bcf380(void)

undefined8 FUN_148bcf380(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f8080(param_2,param_3);
    *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x28);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    FUN_144a787a6(param_2 + 0x48,param_3 + 0x48);
    param_2 = param_2 + 0x58;
    param_3 = param_3 + 0x58;
  }
  return 1;
}



// FUNCTION 148bcf402 FUN_148bcf402 body=59 status=ok
// SIG undefined FUN_148bcf402(void)

undefined8 FUN_148bcf402(longlong *param_1)

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



// FUNCTION 148bcf448 FUN_148bcf448 body=56 status=ok
// SIG undefined FUN_148bcf448(void)

void FUN_148bcf448(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xb) == '\x01') {
    *param_2 = &PTR_FUN_14b676a60;
    if (param_2[9] != 0) {
      FUN_1400020a8();
    }
    FUN_140f4522c(param_2);
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  return;
}



// FUNCTION 148bcf4c6 FUN_148bcf4c6 body=57 status=ok
// SIG undefined FUN_148bcf4c6(void)

void FUN_148bcf4c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4850 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4850 = FUN_140002ddd(FUN_1465beb21,uVar1,L"GbxUIDisplayDataDef_AttributeSet");
  }
  return;
}



// FUNCTION 148bcf51e FUN_148bcf51e body=54 status=ok
// SIG undefined FUN_148bcf51e(void)

undefined1 FUN_148bcf51e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcf62a(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148bcf57c FUN_148bcf57c body=59 status=ok
// SIG undefined FUN_148bcf57c(void)

undefined8 FUN_148bcf57c(longlong *param_1)

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



// FUNCTION 148bcf5c2 FUN_148bcf5c2 body=34 status=ok
// SIG undefined FUN_148bcf5c2(void)

void FUN_148bcf5c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1457ca38c(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148bcf62a FUN_148bcf62a body=160 status=ok
// SIG undefined FUN_148bcf62a(void)

longlong FUN_148bcf62a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_1489f8080();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 0x38);
  uVar5 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  plVar1 = *(longlong **)(param_2 + 0x50);
  plVar2 = *(longlong **)(param_1 + 0x50);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x50) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  plVar1 = *(longlong **)(param_2 + 0x60);
  plVar2 = *(longlong **)(param_1 + 0x60);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x60) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  return param_1;
}



// FUNCTION 148bcf708 FUN_148bcf708 body=99 status=ok
// SIG undefined FUN_148bcf708(void)

undefined8 FUN_148bcf708(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      if (*(char *)(param_3 + -0x18) == '\0') {
        *(undefined1 *)(param_2 + -0x18) = 0;
        *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      }
      FUN_1459a0a08(param_2 + -0x10,param_3 + -0x10);
      FUN_148bcf834(param_2,param_3);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bcf794 FUN_148bcf794 body=59 status=ok
// SIG undefined FUN_148bcf794(void)

undefined8 FUN_148bcf794(longlong *param_1)

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



// FUNCTION 148bcf7da FUN_148bcf7da body=32 status=ok
// SIG undefined FUN_148bcf7da(void)

void FUN_148bcf7da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_140e9f5c6(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148bcf834 FUN_148bcf834 body=84 status=ok
// SIG undefined FUN_148bcf834(void)

longlong * FUN_148bcf834(longlong *param_1,longlong *param_2)

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



// FUNCTION 148bcf88a FUN_148bcf88a body=28 status=ok
// SIG undefined FUN_148bcf88a(void)

undefined8 FUN_148bcf88a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148bcf8d6 FUN_148bcf8d6 body=63 status=ok
// SIG undefined FUN_148bcf8d6(void)

undefined1 FUN_148bcf8d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bcf9ea(param_2,param_3);
    param_3 = param_3 + 0x1d0;
    param_2 = param_2 + 0x1d0;
  }
  return 1;
}



// FUNCTION 148bcf93e FUN_148bcf93e body=59 status=ok
// SIG undefined FUN_148bcf93e(void)

undefined8 FUN_148bcf93e(longlong *param_1)

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



// FUNCTION 148bcf98a FUN_148bcf98a body=38 status=ok
// SIG undefined FUN_148bcf98a(void)

void FUN_148bcf98a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_140f93bec(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 148bcf9ea FUN_148bcf9ea body=510 status=ok
// SIG undefined FUN_148bcf9ea(void)

longlong FUN_148bcf9ea(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  FUN_14184443c(param_1 + 0x18,param_2 + 0x18);
  FUN_14184443c(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x4c);
  uVar2 = *(undefined4 *)(param_2 + 0x50);
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  FUN_148bcfbe8(param_1 + 0x58,param_2 + 0x58);
  FUN_1459a0a08(param_1 + 0x68,param_2 + 0x68);
  FUN_148bcfc38(param_1 + 0x78,param_2 + 0x78);
  FUN_148bcfc8c(param_1 + 0x90,param_2 + 0x90);
  FUN_148bcfcea(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  FUN_144a7bb84(param_1 + 0xc0,param_2 + 0xc0);
  FUN_144a82394(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  FUN_144a7bb84(param_1 + 0xf0,param_2 + 0xf0);
  FUN_144a82394(param_1 + 0x108,param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  FUN_144a7bb84(param_1 + 0x120,param_2 + 0x120);
  FUN_144a82394(param_1 + 0x138,param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  FUN_144a7bb84(param_1 + 0x150,param_2 + 0x150);
  FUN_144a82394(param_1 + 0x168,param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  FUN_144a7bb84(param_1 + 0x180,param_2 + 0x180);
  FUN_144a82394(param_1 + 0x198,param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  FUN_144a7bb84(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_144a82394(param_1 + 0x1c8,param_2 + 0x1c8);
  return param_1;
}



// FUNCTION 148bcfbe8 FUN_148bcfbe8 body=79 status=ok
// SIG undefined FUN_148bcfbe8(void)

undefined8 * FUN_148bcfbe8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148bcfd3a(param_1,iVar1);
      FUN_148bcfdad(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bcfc38 FUN_148bcfc38 body=84 status=ok
// SIG undefined FUN_148bcfc38(void)

longlong * FUN_148bcfc38(longlong *param_1,longlong *param_2)

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



// FUNCTION 148bcfc8c FUN_148bcfc8c body=93 status=ok
// SIG undefined FUN_148bcfc8c(void)

undefined8 * FUN_148bcfc8c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f93dbb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bcfe2a(param_1,iVar1);
      FUN_148bcfe9d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bcfcea FUN_148bcfcea body=79 status=ok
// SIG undefined FUN_148bcfcea(void)

undefined8 * FUN_148bcfcea(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148bcff44(param_1,iVar1);
      FUN_148bcffb6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bcfd3a FUN_148bcfd3a body=115 status=ok
// SIG undefined FUN_148bcfd3a(void)

void FUN_148bcfd3a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bcfdad FUN_148bcfdad body=52 status=ok
// SIG undefined FUN_148bcfdad(void)

void FUN_148bcfdad(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148bcfde2(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148bcfde2 FUN_148bcfde2 body=71 status=ok
// SIG undefined FUN_148bcfde2(void)

undefined8 * FUN_148bcfde2(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148bcfe2a FUN_148bcfe2a body=115 status=ok
// SIG undefined FUN_148bcfe2a(void)

void FUN_148bcfe2a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bcfe9d FUN_148bcfe9d body=52 status=ok
// SIG undefined FUN_148bcfe9d(void)

void FUN_148bcfe9d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148bcfed2(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148bcfed2 FUN_148bcfed2 body=114 status=ok
// SIG undefined FUN_148bcfed2(void)

undefined8 * FUN_148bcfed2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148bcff44 FUN_148bcff44 body=114 status=ok
// SIG undefined FUN_148bcff44(void)

void FUN_148bcff44(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bcffb6 FUN_148bcffb6 body=168 status=ok
// SIG undefined FUN_148bcffb6(void)

void FUN_148bcffb6(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_1 + -0x18) = *(undefined8 *)(param_2 + -0x18);
      *(undefined1 *)(param_1 + -0x10) = *(undefined1 *)(param_2 + -0x10);
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_144a7f96e(param_1,param_2);
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = uVar8;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
      uVar8 = *(undefined8 *)(param_2 + 0x48);
      uVar9 = *(undefined8 *)(param_2 + 0x50);
      uVar1 = *(undefined4 *)(param_2 + 0x58);
      uVar2 = *(undefined4 *)(param_2 + 0x5c);
      uVar3 = *(undefined4 *)(param_2 + 0x60);
      uVar4 = *(undefined4 *)(param_2 + 100);
      uVar5 = *(undefined4 *)(param_2 + 0x6c);
      uVar6 = *(undefined4 *)(param_2 + 0x70);
      uVar7 = *(undefined4 *)(param_2 + 0x74);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
      *(undefined4 *)(param_1 + 0x6c) = uVar5;
      *(undefined4 *)(param_1 + 0x70) = uVar6;
      *(undefined4 *)(param_1 + 0x74) = uVar7;
      *(undefined4 *)(param_1 + 0x58) = uVar1;
      *(undefined4 *)(param_1 + 0x5c) = uVar2;
      *(undefined4 *)(param_1 + 0x60) = uVar3;
      *(undefined4 *)(param_1 + 100) = uVar4;
      *(undefined8 *)(param_1 + 0x48) = uVar8;
      *(undefined8 *)(param_1 + 0x50) = uVar9;
      param_1 = param_1 + 0x98;
      param_2 = param_2 + 0x98;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148bd0108 FUN_148bd0108 body=528 status=ok
// SIG undefined FUN_148bd0108(void)

void FUN_148bd0108(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba4a90) {
    FUN_144b3d300(&DAT_14cba4a90);
    if (DAT_14cba4a90 == -1) {
      FUN_1446f470e(&DAT_14cba4a88,L"LaunchRemainingTime",1);
      _Init_thread_footer(&DAT_14cba4a90);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba4a9c) {
    FUN_144b3d300(&DAT_14cba4a9c);
    if (DAT_14cba4a9c == -1) {
      FUN_1446f470e(&DAT_14cba4a94,L"InventoryItems",1);
      _Init_thread_footer(&DAT_14cba4a9c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba4aa8) {
    FUN_144b3d300(&DAT_14cba4aa8);
    if (DAT_14cba4aa8 == -1) {
      FUN_1446f470e(&DAT_14cba4aa0,L"InventoryStorageContainer",1);
      _Init_thread_footer(&DAT_14cba4aa8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba4ab4) {
    FUN_144b3d300(&DAT_14cba4ab4);
    if (DAT_14cba4ab4 == -1) {
      FUN_1446f470e(&DAT_14cba4aac,L"Timer",1);
      _Init_thread_footer(&DAT_14cba4ab4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba4ac0) {
    FUN_144b3d300(&DAT_14cba4ac0);
    if (DAT_14cba4ac0 == -1) {
      FUN_1446f470e(&DAT_14cba4ab8,L"ConsumerPlayerController",1);
      _Init_thread_footer(&DAT_14cba4ac0);
      return;
    }
  }
  return;
}



// FUNCTION 148bd035d FUN_148bd035d body=57 status=ok
// SIG undefined FUN_148bd035d(void)

void FUN_148bd035d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4c38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4c38 = FUN_14171c317(FUN_1465c0112,uVar1,L"OakDelegateBasedConditionIdentifiers");
  }
  return;
}



// FUNCTION 148bd03d4 FUN_148bd03d4 body=48 status=ok
// SIG undefined FUN_148bd03d4(void)

longlong FUN_148bd03d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0404 FUN_148bd0404 body=48 status=ok
// SIG undefined FUN_148bd0404(void)

longlong FUN_148bd0404(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0434 FUN_148bd0434 body=48 status=ok
// SIG undefined FUN_148bd0434(void)

longlong FUN_148bd0434(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0464 FUN_148bd0464 body=48 status=ok
// SIG undefined FUN_148bd0464(void)

longlong FUN_148bd0464(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0494 FUN_148bd0494 body=48 status=ok
// SIG undefined FUN_148bd0494(void)

longlong FUN_148bd0494(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd04c4 FUN_148bd04c4 body=48 status=ok
// SIG undefined FUN_148bd04c4(void)

longlong FUN_148bd04c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd04f4 FUN_148bd04f4 body=48 status=ok
// SIG undefined FUN_148bd04f4(void)

longlong FUN_148bd04f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0524 FUN_148bd0524 body=48 status=ok
// SIG undefined FUN_148bd0524(void)

longlong FUN_148bd0524(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0554 FUN_148bd0554 body=48 status=ok
// SIG undefined FUN_148bd0554(void)

longlong FUN_148bd0554(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0584 FUN_148bd0584 body=48 status=ok
// SIG undefined FUN_148bd0584(void)

longlong FUN_148bd0584(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd05b4 FUN_148bd05b4 body=48 status=ok
// SIG undefined FUN_148bd05b4(void)

longlong FUN_148bd05b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd05e4 FUN_148bd05e4 body=48 status=ok
// SIG undefined FUN_148bd05e4(void)

longlong FUN_148bd05e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0614 FUN_148bd0614 body=48 status=ok
// SIG undefined FUN_148bd0614(void)

longlong FUN_148bd0614(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0644 FUN_148bd0644 body=48 status=ok
// SIG undefined FUN_148bd0644(void)

longlong FUN_148bd0644(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0674 FUN_148bd0674 body=48 status=ok
// SIG undefined FUN_148bd0674(void)

longlong FUN_148bd0674(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd06a4 FUN_148bd06a4 body=48 status=ok
// SIG undefined FUN_148bd06a4(void)

longlong FUN_148bd06a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd06d4 FUN_148bd06d4 body=48 status=ok
// SIG undefined FUN_148bd06d4(void)

longlong FUN_148bd06d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0704 FUN_148bd0704 body=48 status=ok
// SIG undefined FUN_148bd0704(void)

longlong FUN_148bd0704(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0734 FUN_148bd0734 body=48 status=ok
// SIG undefined FUN_148bd0734(void)

longlong FUN_148bd0734(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0764 FUN_148bd0764 body=48 status=ok
// SIG undefined FUN_148bd0764(void)

longlong FUN_148bd0764(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0794 FUN_148bd0794 body=48 status=ok
// SIG undefined FUN_148bd0794(void)

longlong FUN_148bd0794(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd07c4 FUN_148bd07c4 body=48 status=ok
// SIG undefined FUN_148bd07c4(void)

longlong FUN_148bd07c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd07f4 FUN_148bd07f4 body=48 status=ok
// SIG undefined FUN_148bd07f4(void)

longlong FUN_148bd07f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0824 FUN_148bd0824 body=48 status=ok
// SIG undefined FUN_148bd0824(void)

longlong FUN_148bd0824(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0854 FUN_148bd0854 body=48 status=ok
// SIG undefined FUN_148bd0854(void)

longlong FUN_148bd0854(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0884 FUN_148bd0884 body=48 status=ok
// SIG undefined FUN_148bd0884(void)

longlong FUN_148bd0884(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd08b4 FUN_148bd08b4 body=48 status=ok
// SIG undefined FUN_148bd08b4(void)

longlong FUN_148bd08b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd08e4 FUN_148bd08e4 body=48 status=ok
// SIG undefined FUN_148bd08e4(void)

longlong FUN_148bd08e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0914 FUN_148bd0914 body=48 status=ok
// SIG undefined FUN_148bd0914(void)

longlong FUN_148bd0914(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0944 FUN_148bd0944 body=48 status=ok
// SIG undefined FUN_148bd0944(void)

longlong FUN_148bd0944(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0974 FUN_148bd0974 body=48 status=ok
// SIG undefined FUN_148bd0974(void)

longlong FUN_148bd0974(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd09a4 FUN_148bd09a4 body=48 status=ok
// SIG undefined FUN_148bd09a4(void)

longlong FUN_148bd09a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd09d4 FUN_148bd09d4 body=48 status=ok
// SIG undefined FUN_148bd09d4(void)

longlong FUN_148bd09d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0a04 FUN_148bd0a04 body=48 status=ok
// SIG undefined FUN_148bd0a04(void)

longlong FUN_148bd0a04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0a34 FUN_148bd0a34 body=48 status=ok
// SIG undefined FUN_148bd0a34(void)

longlong FUN_148bd0a34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0a64 FUN_148bd0a64 body=48 status=ok
// SIG undefined FUN_148bd0a64(void)

longlong FUN_148bd0a64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0a94 FUN_148bd0a94 body=48 status=ok
// SIG undefined FUN_148bd0a94(void)

longlong FUN_148bd0a94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0ac4 FUN_148bd0ac4 body=48 status=ok
// SIG undefined FUN_148bd0ac4(void)

longlong FUN_148bd0ac4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0af4 FUN_148bd0af4 body=48 status=ok
// SIG undefined FUN_148bd0af4(void)

longlong FUN_148bd0af4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0b24 FUN_148bd0b24 body=48 status=ok
// SIG undefined FUN_148bd0b24(void)

longlong FUN_148bd0b24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0b54 FUN_148bd0b54 body=48 status=ok
// SIG undefined FUN_148bd0b54(void)

longlong FUN_148bd0b54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0b84 FUN_148bd0b84 body=48 status=ok
// SIG undefined FUN_148bd0b84(void)

longlong FUN_148bd0b84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0bb4 FUN_148bd0bb4 body=48 status=ok
// SIG undefined FUN_148bd0bb4(void)

longlong FUN_148bd0bb4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0be4 FUN_148bd0be4 body=48 status=ok
// SIG undefined FUN_148bd0be4(void)

longlong FUN_148bd0be4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0c14 FUN_148bd0c14 body=48 status=ok
// SIG undefined FUN_148bd0c14(void)

longlong FUN_148bd0c14(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0c44 FUN_148bd0c44 body=48 status=ok
// SIG undefined FUN_148bd0c44(void)

longlong FUN_148bd0c44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0c74 FUN_148bd0c74 body=48 status=ok
// SIG undefined FUN_148bd0c74(void)

longlong FUN_148bd0c74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0ca4 FUN_148bd0ca4 body=48 status=ok
// SIG undefined FUN_148bd0ca4(void)

longlong FUN_148bd0ca4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0cd4 FUN_148bd0cd4 body=48 status=ok
// SIG undefined FUN_148bd0cd4(void)

longlong FUN_148bd0cd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0d04 FUN_148bd0d04 body=48 status=ok
// SIG undefined FUN_148bd0d04(void)

longlong FUN_148bd0d04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0d34 FUN_148bd0d34 body=48 status=ok
// SIG undefined FUN_148bd0d34(void)

longlong FUN_148bd0d34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0d64 FUN_148bd0d64 body=48 status=ok
// SIG undefined FUN_148bd0d64(void)

longlong FUN_148bd0d64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0d94 FUN_148bd0d94 body=48 status=ok
// SIG undefined FUN_148bd0d94(void)

longlong FUN_148bd0d94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0dc4 FUN_148bd0dc4 body=48 status=ok
// SIG undefined FUN_148bd0dc4(void)

longlong FUN_148bd0dc4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0df4 FUN_148bd0df4 body=48 status=ok
// SIG undefined FUN_148bd0df4(void)

longlong FUN_148bd0df4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0e24 FUN_148bd0e24 body=48 status=ok
// SIG undefined FUN_148bd0e24(void)

longlong FUN_148bd0e24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0e54 FUN_148bd0e54 body=48 status=ok
// SIG undefined FUN_148bd0e54(void)

longlong FUN_148bd0e54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0e84 FUN_148bd0e84 body=48 status=ok
// SIG undefined FUN_148bd0e84(void)

longlong FUN_148bd0e84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_14110b466(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0ec8 FUN_148bd0ec8 body=48 status=ok
// SIG undefined FUN_148bd0ec8(void)

longlong FUN_148bd0ec8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0f00 FUN_148bd0f00 body=48 status=ok
// SIG undefined FUN_148bd0f00(void)

longlong FUN_148bd0f00(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0f38 FUN_148bd0f38 body=48 status=ok
// SIG undefined FUN_148bd0f38(void)

longlong FUN_148bd0f38(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0f70 FUN_148bd0f70 body=48 status=ok
// SIG undefined FUN_148bd0f70(void)

longlong FUN_148bd0f70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0fa8 FUN_148bd0fa8 body=48 status=ok
// SIG undefined FUN_148bd0fa8(void)

longlong FUN_148bd0fa8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd0ff0 FUN_148bd0ff0 body=48 status=ok
// SIG undefined FUN_148bd0ff0(void)

longlong FUN_148bd0ff0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1028 FUN_148bd1028 body=48 status=ok
// SIG undefined FUN_148bd1028(void)

longlong FUN_148bd1028(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1060 FUN_148bd1060 body=48 status=ok
// SIG undefined FUN_148bd1060(void)

longlong FUN_148bd1060(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1098 FUN_148bd1098 body=48 status=ok
// SIG undefined FUN_148bd1098(void)

longlong FUN_148bd1098(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd10d0 FUN_148bd10d0 body=48 status=ok
// SIG undefined FUN_148bd10d0(void)

longlong FUN_148bd10d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1118 FUN_148bd1118 body=48 status=ok
// SIG undefined FUN_148bd1118(void)

longlong FUN_148bd1118(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1150 FUN_148bd1150 body=48 status=ok
// SIG undefined FUN_148bd1150(void)

longlong FUN_148bd1150(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1188 FUN_148bd1188 body=48 status=ok
// SIG undefined FUN_148bd1188(void)

longlong FUN_148bd1188(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd11c0 FUN_148bd11c0 body=48 status=ok
// SIG undefined FUN_148bd11c0(void)

longlong FUN_148bd11c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd11f8 FUN_148bd11f8 body=48 status=ok
// SIG undefined FUN_148bd11f8(void)

longlong FUN_148bd11f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1230 FUN_148bd1230 body=48 status=ok
// SIG undefined FUN_148bd1230(void)

longlong FUN_148bd1230(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1268 FUN_148bd1268 body=48 status=ok
// SIG undefined FUN_148bd1268(void)

longlong FUN_148bd1268(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd12a0 FUN_148bd12a0 body=48 status=ok
// SIG undefined FUN_148bd12a0(void)

longlong FUN_148bd12a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd12d8 FUN_148bd12d8 body=48 status=ok
// SIG undefined FUN_148bd12d8(void)

longlong FUN_148bd12d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1310 FUN_148bd1310 body=48 status=ok
// SIG undefined FUN_148bd1310(void)

longlong FUN_148bd1310(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1348 FUN_148bd1348 body=48 status=ok
// SIG undefined FUN_148bd1348(void)

longlong FUN_148bd1348(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1380 FUN_148bd1380 body=48 status=ok
// SIG undefined FUN_148bd1380(void)

longlong FUN_148bd1380(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd13c8 FUN_148bd13c8 body=48 status=ok
// SIG undefined FUN_148bd13c8(void)

longlong FUN_148bd13c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1400 FUN_148bd1400 body=48 status=ok
// SIG undefined FUN_148bd1400(void)

longlong FUN_148bd1400(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1438 FUN_148bd1438 body=48 status=ok
// SIG undefined FUN_148bd1438(void)

longlong FUN_148bd1438(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1470 FUN_148bd1470 body=48 status=ok
// SIG undefined FUN_148bd1470(void)

longlong FUN_148bd1470(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd14a8 FUN_148bd14a8 body=48 status=ok
// SIG undefined FUN_148bd14a8(void)

longlong FUN_148bd14a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd14e0 FUN_148bd14e0 body=48 status=ok
// SIG undefined FUN_148bd14e0(void)

longlong FUN_148bd14e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1518 FUN_148bd1518 body=48 status=ok
// SIG undefined FUN_148bd1518(void)

longlong FUN_148bd1518(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1548 FUN_148bd1548 body=48 status=ok
// SIG undefined FUN_148bd1548(void)

longlong FUN_148bd1548(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x25f8;
  FUN_1461eeb68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd158a FUN_148bd158a body=48 status=ok
// SIG undefined FUN_148bd158a(void)

longlong FUN_148bd158a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd15ba FUN_148bd15ba body=48 status=ok
// SIG undefined FUN_148bd15ba(void)

longlong FUN_148bd15ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd15ea FUN_148bd15ea body=48 status=ok
// SIG undefined FUN_148bd15ea(void)

longlong FUN_148bd15ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd161a FUN_148bd161a body=48 status=ok
// SIG undefined FUN_148bd161a(void)

longlong FUN_148bd161a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd164a FUN_148bd164a body=48 status=ok
// SIG undefined FUN_148bd164a(void)

longlong FUN_148bd164a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd167a FUN_148bd167a body=48 status=ok
// SIG undefined FUN_148bd167a(void)

longlong FUN_148bd167a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd16aa FUN_148bd16aa body=48 status=ok
// SIG undefined FUN_148bd16aa(void)

longlong FUN_148bd16aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd16da FUN_148bd16da body=48 status=ok
// SIG undefined FUN_148bd16da(void)

longlong FUN_148bd16da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd170a FUN_148bd170a body=48 status=ok
// SIG undefined FUN_148bd170a(void)

longlong FUN_148bd170a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd173a FUN_148bd173a body=48 status=ok
// SIG undefined FUN_148bd173a(void)

longlong FUN_148bd173a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd176a FUN_148bd176a body=48 status=ok
// SIG undefined FUN_148bd176a(void)

longlong FUN_148bd176a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd179a FUN_148bd179a body=48 status=ok
// SIG undefined FUN_148bd179a(void)

longlong FUN_148bd179a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd17ca FUN_148bd17ca body=48 status=ok
// SIG undefined FUN_148bd17ca(void)

longlong FUN_148bd17ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd17fa FUN_148bd17fa body=48 status=ok
// SIG undefined FUN_148bd17fa(void)

longlong FUN_148bd17fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd182a FUN_148bd182a body=48 status=ok
// SIG undefined FUN_148bd182a(void)

longlong FUN_148bd182a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd185a FUN_148bd185a body=48 status=ok
// SIG undefined FUN_148bd185a(void)

longlong FUN_148bd185a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd188a FUN_148bd188a body=48 status=ok
// SIG undefined FUN_148bd188a(void)

longlong FUN_148bd188a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd18ba FUN_148bd18ba body=48 status=ok
// SIG undefined FUN_148bd18ba(void)

longlong FUN_148bd18ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd18ea FUN_148bd18ea body=48 status=ok
// SIG undefined FUN_148bd18ea(void)

longlong FUN_148bd18ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd191a FUN_148bd191a body=48 status=ok
// SIG undefined FUN_148bd191a(void)

longlong FUN_148bd191a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd194a FUN_148bd194a body=48 status=ok
// SIG undefined FUN_148bd194a(void)

longlong FUN_148bd194a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd197a FUN_148bd197a body=48 status=ok
// SIG undefined FUN_148bd197a(void)

longlong FUN_148bd197a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd19aa FUN_148bd19aa body=48 status=ok
// SIG undefined FUN_148bd19aa(void)

longlong FUN_148bd19aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd19da FUN_148bd19da body=48 status=ok
// SIG undefined FUN_148bd19da(void)

longlong FUN_148bd19da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1a0a FUN_148bd1a0a body=48 status=ok
// SIG undefined FUN_148bd1a0a(void)

longlong FUN_148bd1a0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1a3a FUN_148bd1a3a body=48 status=ok
// SIG undefined FUN_148bd1a3a(void)

longlong FUN_148bd1a3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1a6a FUN_148bd1a6a body=48 status=ok
// SIG undefined FUN_148bd1a6a(void)

longlong FUN_148bd1a6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1a9a FUN_148bd1a9a body=48 status=ok
// SIG undefined FUN_148bd1a9a(void)

longlong FUN_148bd1a9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1aca FUN_148bd1aca body=48 status=ok
// SIG undefined FUN_148bd1aca(void)

longlong FUN_148bd1aca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_141088f64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bd1b72 FUN_148bd1b72 body=59 status=ok
// SIG undefined FUN_148bd1b72(void)

undefined8 FUN_148bd1b72(longlong *param_1)

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



// FUNCTION 148bd1c8c FUN_148bd1c8c body=59 status=ok
// SIG undefined FUN_148bd1c8c(void)

undefined8 FUN_148bd1c8c(longlong *param_1)

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



// FUNCTION 148bd1d32 FUN_148bd1d32 body=44 status=ok
// SIG undefined FUN_148bd1d32(void)

void FUN_148bd1d32(undefined8 param_1,longlong *param_2)

{
  FUN_140ea1612(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148bd1d74 FUN_148bd1d74 body=54 status=ok
// SIG undefined FUN_148bd1d74(void)

undefined1 FUN_148bd1d74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140d02528(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148bd1dd2 FUN_148bd1dd2 body=59 status=ok
// SIG undefined FUN_148bd1dd2(void)

undefined8 FUN_148bd1dd2(longlong *param_1)

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



// FUNCTION 148bd1e64 FUN_148bd1e64 body=48 status=ok
// SIG undefined FUN_148bd1e64(void)

void FUN_148bd1e64(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_140ea1612(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 148bd1ec8 FUN_148bd1ec8 body=54 status=ok
// SIG undefined FUN_148bd1ec8(void)

undefined1 FUN_148bd1ec8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140d024ce(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148bd1f26 FUN_148bd1f26 body=59 status=ok
// SIG undefined FUN_148bd1f26(void)

undefined8 FUN_148bd1f26(longlong *param_1)

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



// FUNCTION 148bd1f6c FUN_148bd1f6c body=37 status=ok
// SIG undefined FUN_148bd1f6c(void)

void FUN_148bd1f6c(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148bd203e FUN_148bd203e body=59 status=ok
// SIG undefined FUN_148bd203e(void)

undefined8 FUN_148bd203e(longlong *param_1)

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



// FUNCTION 148bd20f2 FUN_148bd20f2 body=63 status=ok
// SIG undefined FUN_148bd20f2(void)

undefined1 FUN_148bd20f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14579afd2(param_2,param_3);
    param_3 = param_3 + 0xc80;
    param_2 = param_2 + 0xc80;
  }
  return 1;
}



// FUNCTION 148bd215a FUN_148bd215a body=59 status=ok
// SIG undefined FUN_148bd215a(void)

undefined8 FUN_148bd215a(longlong *param_1)

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



// FUNCTION 148bd21a6 FUN_148bd21a6 body=38 status=ok
// SIG undefined FUN_148bd21a6(void)

void FUN_148bd21a6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc80) == '\x01') {
    FUN_140ea1498(param_2);
    *(undefined1 *)(param_2 + 0xc80) = 0;
  }
  return;
}



// FUNCTION 148bd223a FUN_148bd223a body=123 status=ok
// SIG undefined FUN_148bd223a(void)

undefined8 FUN_148bd223a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    *(undefined2 *)(param_2 + 0x458) = *(undefined2 *)(param_3 + 0x458);
    FUN_1406fa324(param_2 + 0x460,param_3 + 0x460);
    *(undefined4 *)(param_2 + 0x470) = *(undefined4 *)(param_3 + 0x470);
    *(undefined1 *)(param_2 + 0x474) = *(undefined1 *)(param_3 + 0x474);
    param_2 = param_2 + 0x478;
    param_3 = param_3 + 0x478;
  }
  return 1;
}



// FUNCTION 148bd22de FUN_148bd22de body=59 status=ok
// SIG undefined FUN_148bd22de(void)

undefined8 FUN_148bd22de(longlong *param_1)

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



// FUNCTION 148bd232a FUN_148bd232a body=65 status=ok
// SIG undefined FUN_148bd232a(void)

void FUN_148bd232a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x8f) == '\x01') {
    *param_2 = &PTR_FUN_14b6847a0;
    if (param_2[0x8c] != 0) {
      FUN_1400020a8();
    }
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x8f) = 0;
  }
  return;
}



// FUNCTION 148bd2422 FUN_148bd2422 body=59 status=ok
// SIG undefined FUN_148bd2422(void)

undefined8 FUN_148bd2422(longlong *param_1)

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



// FUNCTION 148bd24c2 FUN_148bd24c2 body=55 status=ok
// SIG undefined FUN_148bd24c2(void)

void FUN_148bd24c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba49d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba49d0 = FUN_140002ddd(FUN_1465bf685,uVar1,L"GbxCondition_CanOpenDoor");
  }
  return;
}



// FUNCTION 148bd257a FUN_148bd257a body=59 status=ok
// SIG undefined FUN_148bd257a(void)

undefined8 FUN_148bd257a(longlong *param_1)

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



// FUNCTION 148bd261a FUN_148bd261a body=55 status=ok
// SIG undefined FUN_148bd261a(void)

void FUN_148bd261a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba49e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba49e8 = FUN_140002ddd(FUN_1465bf71b,uVar1,L"GbxCondition_CanCloseDoor");
  }
  return;
}



// FUNCTION 148bd26d2 FUN_148bd26d2 body=59 status=ok
// SIG undefined FUN_148bd26d2(void)

undefined8 FUN_148bd26d2(longlong *param_1)

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



// FUNCTION 148bd2772 FUN_148bd2772 body=55 status=ok
// SIG undefined FUN_148bd2772(void)

void FUN_148bd2772(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4a00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4a00 = FUN_140002ddd(FUN_1465bf7b1,uVar1,L"GbxCondition_ShouldDoorShowLockedPrompt");
  }
  return;
}



// FUNCTION 148bd27c8 FUN_148bd27c8 body=88 status=ok
// SIG undefined FUN_148bd27c8(void)

undefined8 FUN_148bd27c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x458) = *(undefined8 *)(param_3 + 0x458);
    *(undefined4 *)(param_2 + 0x460) = *(undefined4 *)(param_3 + 0x460);
    param_2 = param_2 + 0x468;
    param_3 = param_3 + 0x468;
  }
  return 1;
}



// FUNCTION 148bd2848 FUN_148bd2848 body=59 status=ok
// SIG undefined FUN_148bd2848(void)

undefined8 FUN_148bd2848(longlong *param_1)

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



// FUNCTION 148bd2894 FUN_148bd2894 body=38 status=ok
// SIG undefined FUN_148bd2894(void)

void FUN_148bd2894(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x468) == '\x01') {
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x468) = 0;
  }
  return;
}



// FUNCTION 148bd292a FUN_148bd292a body=148 status=ok
// SIG undefined FUN_148bd292a(void)

undefined8 FUN_148bd292a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x458);
    uVar2 = *(undefined4 *)(param_3 + 0x45c);
    uVar3 = *(undefined4 *)(param_3 + 0x460);
    uVar4 = *(undefined4 *)(param_3 + 0x464);
    uVar5 = *(undefined4 *)(param_3 + 0x468);
    uVar6 = *(undefined4 *)(param_3 + 0x46c);
    uVar7 = *(undefined4 *)(param_3 + 0x470);
    *(undefined4 *)(param_2 + 0x464) = *(undefined4 *)(param_3 + 0x464);
    *(undefined4 *)(param_2 + 0x468) = uVar5;
    *(undefined4 *)(param_2 + 0x46c) = uVar6;
    *(undefined4 *)(param_2 + 0x470) = uVar7;
    *(undefined4 *)(param_2 + 0x458) = uVar1;
    *(undefined4 *)(param_2 + 0x45c) = uVar2;
    *(undefined4 *)(param_2 + 0x460) = uVar3;
    *(undefined4 *)(param_2 + 0x464) = uVar4;
    if ((*(longlong *)(param_2 + 0x478) != *(longlong *)(param_3 + 0x478)) ||
       (*(int *)(param_2 + 0x480) != *(int *)(param_3 + 0x480))) {
      *(longlong *)(param_2 + 0x478) = *(longlong *)(param_3 + 0x478);
      *(undefined4 *)(param_2 + 0x480) = *(undefined4 *)(param_3 + 0x480);
      *(undefined8 *)(param_2 + 0x488) = 0;
    }
    param_2 = param_2 + 0x490;
    param_3 = param_3 + 0x490;
  }
  return 1;
}



// FUNCTION 148bd29e6 FUN_148bd29e6 body=59 status=ok
// SIG undefined FUN_148bd29e6(void)

undefined8 FUN_148bd29e6(longlong *param_1)

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



// FUNCTION 148bd2a32 FUN_148bd2a32 body=38 status=ok
// SIG undefined FUN_148bd2a32(void)

void FUN_148bd2a32(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x490) == '\x01') {
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x490) = 0;
  }
  return;
}



// FUNCTION 148bd2b4c FUN_148bd2b4c body=59 status=ok
// SIG undefined FUN_148bd2b4c(void)

undefined8 FUN_148bd2b4c(longlong *param_1)

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



// FUNCTION 148bd2bec FUN_148bd2bec body=55 status=ok
// SIG undefined FUN_148bd2bec(void)

void FUN_148bd2bec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4ae8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4ae8 = FUN_140002ddd(FUN_1465bfa7f,uVar1,L"GbxCondition_CanPressSwitch");
  }
  return;
}



// FUNCTION 148bd2ca4 FUN_148bd2ca4 body=59 status=ok
// SIG undefined FUN_148bd2ca4(void)

undefined8 FUN_148bd2ca4(longlong *param_1)

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



// FUNCTION 148bd2d44 FUN_148bd2d44 body=55 status=ok
// SIG undefined FUN_148bd2d44(void)

void FUN_148bd2d44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4b00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4b00 = FUN_140002ddd(FUN_1465bfb15,uVar1,L"GbxCondition_CanUnpressSwitch");
  }
  return;
}



// FUNCTION 148bd2dfc FUN_148bd2dfc body=59 status=ok
// SIG undefined FUN_148bd2dfc(void)

undefined8 FUN_148bd2dfc(longlong *param_1)

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



// FUNCTION 148bd2e9c FUN_148bd2e9c body=55 status=ok
// SIG undefined FUN_148bd2e9c(void)

void FUN_148bd2e9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4b18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4b18 = FUN_140002ddd(FUN_1465bfbab,uVar1,L"GbxCondition_ShouldSwitchShowLockedPrompt");
  }
  return;
}



// FUNCTION 148bd2ed4 FUN_148bd2ed4 body=49 status=ok
// SIG undefined FUN_148bd2ed4(void)

void FUN_148bd2ed4(undefined8 param_1,longlong param_2)

{
  FUN_140785382(param_2,7);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0xffffffff;
  *(undefined8 *)(param_2 + 0x48) = 0xffffffff00000000;
  return;
}



// FUNCTION 148bd2f24 FUN_148bd2f24 body=80 status=ok
// SIG undefined FUN_148bd2f24(void)

undefined1 FUN_148bd2f24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144983130(param_2,param_3);
    FUN_142b358c0(param_2 + 0x38,param_3 + 0x38);
    FUN_142b359fe(param_2 + 0x44,param_3 + 0x44);
    param_2 = param_2 + 0x50;
    param_3 = param_3 + 0x50;
  }
  return 1;
}



// FUNCTION 148bd2f9c FUN_148bd2f9c body=59 status=ok
// SIG undefined FUN_148bd2f9c(void)

undefined8 FUN_148bd2f9c(longlong *param_1)

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



// FUNCTION 148bd2fe2 FUN_148bd2fe2 body=32 status=ok
// SIG undefined FUN_148bd2fe2(void)

void FUN_148bd2fe2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_144a2da94(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148bd3070 FUN_148bd3070 body=74 status=ok
// SIG undefined FUN_148bd3070(void)

undefined1 FUN_148bd3070(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    *(undefined1 *)(param_2 + 0x458) = *(undefined1 *)(param_3 + 0x458);
    param_2 = param_2 + 0x460;
    param_3 = param_3 + 0x460;
  }
  return 1;
}



// FUNCTION 148bd30e2 FUN_148bd30e2 body=59 status=ok
// SIG undefined FUN_148bd30e2(void)

undefined8 FUN_148bd30e2(longlong *param_1)

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



// FUNCTION 148bd312e FUN_148bd312e body=38 status=ok
// SIG undefined FUN_148bd312e(void)

void FUN_148bd312e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x460) == '\x01') {
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x460) = 0;
  }
  return;
}



// FUNCTION 148bd31b6 FUN_148bd31b6 body=63 status=ok
// SIG undefined FUN_148bd31b6(void)

undefined1 FUN_148bd31b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd331c(param_2,param_3);
    param_3 = param_3 + 0x2e8;
    param_2 = param_2 + 0x2e8;
  }
  return 1;
}



// FUNCTION 148bd321e FUN_148bd321e body=59 status=ok
// SIG undefined FUN_148bd321e(void)

undefined8 FUN_148bd321e(longlong *param_1)

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



// FUNCTION 148bd326a FUN_148bd326a body=38 status=ok
// SIG undefined FUN_148bd326a(void)

void FUN_148bd326a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2e8) == '\x01') {
    FUN_141420c64(param_2);
    *(undefined1 *)(param_2 + 0x2e8) = 0;
  }
  return;
}



// FUNCTION 148bd32de FUN_148bd32de body=55 status=ok
// SIG undefined FUN_148bd32de(void)

void FUN_148bd32de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4b78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4b78 = FUN_140002ddd(FUN_1465bfd34,uVar1,L"InventoryAugment");
  }
  return;
}



// FUNCTION 148bd331c FUN_148bd331c body=449 status=ok
// SIG undefined FUN_148bd331c(void)

longlong FUN_148bd331c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar10 = *(longlong *)(param_2 + 0x10);
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar10;
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
  FUN_140f82514(param_1 + 0x18,param_2 + 0x18);
  FUN_140f82514(param_1 + 0x28,param_2 + 0x28);
  FUN_148bd34de(param_1 + 0x38,param_2 + 0x38);
  FUN_148bd34de(param_1 + 0xc0,param_2 + 0xc0);
  FUN_148bd34de(param_1 + 0x148,param_2 + 0x148);
  FUN_148bd34de(param_1 + 0x1d0,param_2 + 0x1d0);
  uVar3 = *(undefined8 *)(param_2 + 600);
  lVar10 = *(longlong *)(param_2 + 0x260);
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x260);
  *(undefined8 *)(param_1 + 600) = uVar3;
  *(longlong *)(param_1 + 0x260) = lVar10;
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
  uVar3 = *(undefined8 *)(param_2 + 0x268);
  lVar10 = *(longlong *)(param_2 + 0x270);
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x268) = uVar3;
  *(longlong *)(param_1 + 0x270) = lVar10;
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
  FUN_1447bdc4c(param_1 + 0x278,param_2 + 0x278);
  uVar5 = *(undefined4 *)(param_2 + 0x28c);
  uVar6 = *(undefined4 *)(param_2 + 0x290);
  uVar7 = *(undefined4 *)(param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined4 *)(param_1 + 0x28c) = uVar5;
  *(undefined4 *)(param_1 + 0x290) = uVar6;
  *(undefined4 *)(param_1 + 0x294) = uVar7;
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_2 + 0x298);
  lVar10 = 0x2a0;
  do {
    FUN_14117bcd8(param_1 + lVar10,param_2 + lVar10);
    lVar10 = lVar10 + 0xc;
  } while (lVar10 != 0x2c4);
  *(undefined1 *)(param_1 + 0x2e4) = *(undefined1 *)(param_2 + 0x2e4);
  uVar3 = *(undefined8 *)(param_2 + 0x2c4);
  uVar8 = *(undefined8 *)(param_2 + 0x2cc);
  uVar9 = *(undefined8 *)(param_2 + 0x2dc);
  *(undefined8 *)(param_1 + 0x2d4) = *(undefined8 *)(param_2 + 0x2d4);
  *(undefined8 *)(param_1 + 0x2dc) = uVar9;
  *(undefined8 *)(param_1 + 0x2c4) = uVar3;
  *(undefined8 *)(param_1 + 0x2cc) = uVar8;
  return param_1;
}



// FUNCTION 148bd34de FUN_148bd34de body=162 status=ok
// SIG undefined FUN_148bd34de(void)

undefined8 * FUN_148bd34de(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_144a7bb84(param_1 + 2,param_2 + 2);
  FUN_144a82394(param_1 + 5,param_2 + 5);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[7] = param_2[7];
  FUN_144a7bb84(param_1 + 9,param_2 + 9);
  FUN_144a82394(param_1 + 0xc,param_2 + 0xc);
  uVar2 = param_2[0xd];
  lVar3 = param_2[0xe];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0xe];
  param_1[0xd] = uVar2;
  param_1[0xe] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar2;
  return param_1;
}



// FUNCTION 148bd35c2 FUN_148bd35c2 body=89 status=ok
// SIG undefined FUN_148bd35c2(void)

undefined1 FUN_148bd35c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x24);
      uVar2 = *(undefined4 *)(param_3 + -0x20);
      uVar3 = *(undefined4 *)(param_3 + -0x1c);
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x24) = uVar1;
      *(undefined4 *)(param_2 + -0x20) = uVar2;
      *(undefined4 *)(param_2 + -0x1c) = uVar3;
      FUN_1418443e8(param_2 + -0x18,param_3 + -0x18);
      FUN_1401f3db8(param_2,param_3);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bd3644 FUN_148bd3644 body=59 status=ok
// SIG undefined FUN_148bd3644(void)

undefined8 FUN_148bd3644(longlong *param_1)

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



// FUNCTION 148bd368a FUN_148bd368a body=32 status=ok
// SIG undefined FUN_148bd368a(void)

void FUN_148bd368a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_148bd36ea(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148bd36ea FUN_148bd36ea body=65 status=ok
// SIG undefined FUN_148bd36ea(void)

void FUN_148bd36ea(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b681740;
  plVar3 = (longlong *)param_1[7];
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
                    /* WARNING: Could not recover jumptable at 0x000148bd3727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148bd37ac FUN_148bd37ac body=59 status=ok
// SIG undefined FUN_148bd37ac(void)

undefined8 FUN_148bd37ac(longlong *param_1)

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



// FUNCTION 148bd384c FUN_148bd384c body=55 status=ok
// SIG undefined FUN_148bd384c(void)

void FUN_148bd384c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4ba8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4ba8 = FUN_140002ddd(FUN_1465bfe5d,uVar1,L"GbxMetaDataInventoryAugmentAspectRule");
  }
  return;
}



// FUNCTION 148bd38f2 FUN_148bd38f2 body=59 status=ok
// SIG undefined FUN_148bd38f2(void)

undefined8 FUN_148bd38f2(longlong *param_1)

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



// FUNCTION 148bd3986 FUN_148bd3986 body=55 status=ok
// SIG undefined FUN_148bd3986(void)

void FUN_148bd3986(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4bd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4bd8 = FUN_140002ddd(FUN_1465bff23,uVar1,L"InventoryAugmentAttributeContextResolver");
  }
  return;
}



// FUNCTION 148bd3a40 FUN_148bd3a40 body=59 status=ok
// SIG undefined FUN_148bd3a40(void)

undefined8 FUN_148bd3a40(longlong *param_1)

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



// FUNCTION 148bd3b34 FUN_148bd3b34 body=54 status=ok
// SIG undefined FUN_148bd3b34(void)

undefined1 FUN_148bd3b34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd3c80(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 148bd3b92 FUN_148bd3b92 body=59 status=ok
// SIG undefined FUN_148bd3b92(void)

undefined8 FUN_148bd3b92(longlong *param_1)

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



// FUNCTION 148bd3bd8 FUN_148bd3bd8 body=34 status=ok
// SIG undefined FUN_148bd3bd8(void)

void FUN_148bd3bd8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_14592512a(param_2);
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148bd3c48 FUN_148bd3c48 body=55 status=ok
// SIG undefined FUN_148bd3c48(void)

void FUN_148bd3c48(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4c08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4c08 = FUN_140002ddd(FUN_1465c0051,uVar1,L"InventoryAugmentBehavior");
  }
  return;
}



// FUNCTION 148bd3c80 FUN_148bd3c80 body=82 status=ok
// SIG undefined FUN_148bd3c80(void)

longlong FUN_148bd3c80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
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



// FUNCTION 148bd3cf2 FUN_148bd3cf2 body=166 status=ok
// SIG undefined FUN_148bd3cf2(void)

undefined8 FUN_148bd3cf2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar1 = param_3 + lVar6;
      lVar2 = param_2 + 0x20 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar1 + 8);
      uVar3 = *(undefined4 *)(lVar1 + 0x14);
      uVar4 = *(undefined4 *)(lVar1 + 0x18);
      uVar5 = *(undefined4 *)(lVar1 + 0x1c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x10);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,lVar1 + 0x20);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar1 + 0x30);
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_144a787a6(lVar1 + 0x38,lVar2 + 0x38);
      uVar3 = *(undefined4 *)(lVar2 + 0x4c);
      uVar4 = *(undefined4 *)(lVar2 + 0x50);
      uVar5 = *(undefined4 *)(lVar2 + 0x54);
      *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(lVar2 + 0x48);
      *(undefined4 *)(lVar1 + 0x4c) = uVar3;
      *(undefined4 *)(lVar1 + 0x50) = uVar4;
      *(undefined4 *)(lVar1 + 0x54) = uVar5;
      FUN_1486689b0(param_2 + lVar6 + 0x58,param_3 + lVar6 + 0x58);
      lVar6 = lVar6 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bd3dc0 FUN_148bd3dc0 body=59 status=ok
// SIG undefined FUN_148bd3dc0(void)

undefined8 FUN_148bd3dc0(longlong *param_1)

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



// FUNCTION 148bd3e06 FUN_148bd3e06 body=32 status=ok
// SIG undefined FUN_148bd3e06(void)

void FUN_148bd3e06(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_140e59b58(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148bd3e6a FUN_148bd3e6a body=57 status=ok
// SIG undefined FUN_148bd3e6a(void)

void FUN_148bd3e6a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4c20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4c20 = FUN_140002ddd(FUN_1465c00b0,uVar1,L"InventoryAugmentBehaviorDef");
  }
  return;
}



// FUNCTION 148bd3f0a FUN_148bd3f0a body=121 status=ok
// SIG undefined FUN_148bd3f0a(void)

undefined8 FUN_148bd3f0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_144a7bb84();
      FUN_144a82394(param_2 + lVar2 + 0x28,param_3 + lVar2 + 0x28);
      *(undefined1 *)(param_2 + lVar2 + 0x30) = *(undefined1 *)(param_3 + lVar2 + 0x30);
      lVar2 = lVar2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bd3fac FUN_148bd3fac body=59 status=ok
// SIG undefined FUN_148bd3fac(void)

undefined8 FUN_148bd3fac(longlong *param_1)

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



// FUNCTION 148bd3ff2 FUN_148bd3ff2 body=51 status=ok
// SIG undefined FUN_148bd3ff2(void)

void FUN_148bd3ff2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if ((*(longlong *)(param_2 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x50));
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148bd40b2 FUN_148bd40b2 body=54 status=ok
// SIG undefined FUN_148bd40b2(void)

undefined1 FUN_148bd40b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145c6a8ec(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148bd4110 FUN_148bd4110 body=59 status=ok
// SIG undefined FUN_148bd4110(void)

undefined8 FUN_148bd4110(longlong *param_1)

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



// FUNCTION 148bd4156 FUN_148bd4156 body=32 status=ok
// SIG undefined FUN_148bd4156(void)

void FUN_148bd4156(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_148bd41b8(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148bd41b8 FUN_148bd41b8 body=81 status=ok
// SIG undefined FUN_148bd41b8(void)

void FUN_148bd41b8(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x68) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x50));
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x50));
    return;
  }
  return;
}



// FUNCTION 148bd4250 FUN_148bd4250 body=59 status=ok
// SIG undefined FUN_148bd4250(void)

undefined8 FUN_148bd4250(longlong *param_1)

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



// FUNCTION 148bd429c FUN_148bd429c body=38 status=ok
// SIG undefined FUN_148bd429c(void)

void FUN_148bd429c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4d0) == '\x01') {
    FUN_140c09192(param_2);
    *(undefined1 *)(param_2 + 0x4d0) = 0;
  }
  return;
}



// FUNCTION 148bd4326 FUN_148bd4326 body=63 status=ok
// SIG undefined FUN_148bd4326(void)

undefined1 FUN_148bd4326(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bd4442(param_2,param_3);
    param_3 = param_3 + 0x528;
    param_2 = param_2 + 0x528;
  }
  return 1;
}



// FUNCTION 148bd438e FUN_148bd438e body=59 status=ok
// SIG undefined FUN_148bd438e(void)

undefined8 FUN_148bd438e(longlong *param_1)

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



// FUNCTION 148bd43da FUN_148bd43da body=38 status=ok
// SIG undefined FUN_148bd43da(void)

void FUN_148bd43da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x528) == '\x01') {
    FUN_140b80d80(param_2);
    *(undefined1 *)(param_2 + 0x528) = 0;
  }
  return;
}



// FUNCTION 148bd4442 FUN_148bd4442 body=132 status=ok
// SIG undefined FUN_148bd4442(void)

longlong FUN_148bd4442(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_145c6a5f0();
  *(undefined1 *)(param_1 + 0x4d0) = *(undefined1 *)(param_2 + 0x4d0);
  *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_2 + 0x4d8);
  uVar1 = *(undefined4 *)(param_2 + 0x4e4);
  uVar2 = *(undefined4 *)(param_2 + 0x4e8);
  uVar3 = *(undefined4 *)(param_2 + 0x4ec);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = uVar1;
  *(undefined4 *)(param_1 + 0x4e8) = uVar2;
  *(undefined4 *)(param_1 + 0x4ec) = uVar3;
  FUN_144a787a6(param_1 + 0x4f0,param_2 + 0x4f0);
  *(undefined8 *)(param_1 + 0x500) = *(undefined8 *)(param_2 + 0x500);
  uVar1 = *(undefined4 *)(param_2 + 0x50c);
  uVar2 = *(undefined4 *)(param_2 + 0x510);
  uVar3 = *(undefined4 *)(param_2 + 0x514);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x508);
  *(undefined4 *)(param_1 + 0x50c) = uVar1;
  *(undefined4 *)(param_1 + 0x510) = uVar2;
  *(undefined4 *)(param_1 + 0x514) = uVar3;
  FUN_144a787a6(param_1 + 0x518,param_2 + 0x518);
  return param_1;
}



// FUNCTION 148bd44c8 FUN_148bd44c8 body=57 status=ok
// SIG undefined FUN_148bd44c8(void)

void FUN_148bd44c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4cc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4cc8 = FUN_140002ddd(FUN_1465c0339,uVar1,L"InventoryAugmentDef_ActorScript");
  }
  return;
}



// FUNCTION 148bd454c FUN_148bd454c body=91 status=ok
// SIG undefined FUN_148bd454c(void)

void FUN_148bd454c(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba4fb0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


