// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141768854 FUN_141768854 body=40 status=ok
// SIG undefined FUN_141768854(void)

undefined8 FUN_141768854(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176887c FUN_14176887c body=40 status=ok
// SIG undefined FUN_14176887c(void)

undefined8 FUN_14176887c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417688a4 FUN_1417688a4 body=40 status=ok
// SIG undefined FUN_1417688a4(void)

undefined8 FUN_1417688a4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417688cc FUN_1417688cc body=40 status=ok
// SIG undefined FUN_1417688cc(void)

undefined8 FUN_1417688cc(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417688f4 FUN_1417688f4 body=40 status=ok
// SIG undefined FUN_1417688f4(void)

undefined8 FUN_1417688f4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176891c FUN_14176891c body=40 status=ok
// SIG undefined FUN_14176891c(void)

undefined8 FUN_14176891c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141768944 FUN_141768944 body=40 status=ok
// SIG undefined FUN_141768944(void)

undefined8 FUN_141768944(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176896c FUN_14176896c body=231 status=ok
// SIG undefined FUN_14176896c(void)

undefined8 *
FUN_14176896c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f10d0;
  if (DAT_14c9f10d0 != 0) {
    LOCK();
    *(int *)(DAT_14c9f10d0 + 8) = *(int *)(DAT_14c9f10d0 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f1088;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2567c0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141768a54 FUN_141768a54 body=92 status=ok
// SIG undefined FUN_141768a54(void)

undefined8 * FUN_141768a54(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2567c0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141768ab0 FUN_141768ab0 body=40 status=ok
// SIG undefined FUN_141768ab0(void)

undefined8 FUN_141768ab0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141768ad8 FUN_141768ad8 body=231 status=ok
// SIG undefined FUN_141768ad8(void)

undefined8 *
FUN_141768ad8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f1268;
  if (DAT_14c9f1268 != 0) {
    LOCK();
    *(int *)(DAT_14c9f1268 + 8) = *(int *)(DAT_14c9f1268 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f1220;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a256880;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141768bc0 FUN_141768bc0 body=92 status=ok
// SIG undefined FUN_141768bc0(void)

undefined8 * FUN_141768bc0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a256880;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141768c1c FUN_141768c1c body=231 status=ok
// SIG undefined FUN_141768c1c(void)

undefined8 *
FUN_141768c1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f12f0;
  if (DAT_14c9f12f0 != 0) {
    LOCK();
    *(int *)(DAT_14c9f12f0 + 8) = *(int *)(DAT_14c9f12f0 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f12a8;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2568c0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141768d04 FUN_141768d04 body=92 status=ok
// SIG undefined FUN_141768d04(void)

undefined8 * FUN_141768d04(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2568c0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141768d60 FUN_141768d60 body=231 status=ok
// SIG undefined FUN_141768d60(void)

undefined8 *
FUN_141768d60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f1488;
  if (DAT_14c9f1488 != 0) {
    LOCK();
    *(int *)(DAT_14c9f1488 + 8) = *(int *)(DAT_14c9f1488 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f1440;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a256980;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141768e48 FUN_141768e48 body=92 status=ok
// SIG undefined FUN_141768e48(void)

undefined8 * FUN_141768e48(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a256980;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141768f5a FUN_141768f5a body=53 status=ok
// SIG undefined FUN_141768f5a(void)

bool FUN_141768f5a(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_14017603f();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = 0 < *(int *)(param_1 + 0x2944) || 0 < *(int *)(DAT_14c9f4690 + 4);
  }
  return bVar2;
}



// FUNCTION 141768fb4 FUN_141768fb4 body=65 status=ok
// SIG undefined FUN_141768fb4(void)

undefined8 FUN_141768fb4(undefined2 *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 2);
  iVar4 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar4 = iVar1;
  }
  if ((iVar4 >> 2 & 0x80000001U) == 1) {
    cVar2 = FUN_140653b22();
    if (cVar2 == '\0') {
      return 0;
    }
  }
  uVar3 = FUN_144880847(*param_1,0);
  return uVar3;
}



// FUNCTION 141768ff6 FUN_141768ff6 body=65 status=ok
// SIG undefined FUN_141768ff6(void)

undefined8 FUN_141768ff6(undefined2 *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 2);
  iVar4 = iVar1 + 0xf;
  if (-1 < iVar1) {
    iVar4 = iVar1;
  }
  if ((iVar4 >> 4 & 0x80000001U) == 1) {
    cVar2 = FUN_140653b22();
    if (cVar2 == '\0') {
      return 0;
    }
  }
  uVar3 = FUN_144880847(*param_1,0);
  return uVar3;
}



// FUNCTION 141769038 FUN_141769038 body=65 status=ok
// SIG undefined FUN_141769038(void)

undefined8 FUN_141769038(undefined2 *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 2);
  iVar4 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar4 = iVar1;
  }
  if ((iVar4 >> 2 & 0x80000001U) == 1) {
    cVar2 = FUN_140653b22();
    if (cVar2 == '\0') {
      return 0;
    }
  }
  uVar3 = FUN_144880847(*param_1,0);
  return uVar3;
}



// FUNCTION 14176907a FUN_14176907a body=65 status=ok
// SIG undefined FUN_14176907a(void)

undefined8 FUN_14176907a(undefined2 *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 2);
  iVar4 = iVar1 + 7;
  if (-1 < iVar1) {
    iVar4 = iVar1;
  }
  if ((iVar4 >> 3 & 0x80000001U) == 1) {
    cVar2 = FUN_140653b22();
    if (cVar2 == '\0') {
      return 0;
    }
  }
  uVar3 = FUN_144880847(*param_1,0);
  return uVar3;
}



// FUNCTION 1417690bc FUN_1417690bc body=106 status=ok
// SIG undefined FUN_1417690bc(void)

undefined8 FUN_1417690bc(ushort *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 2);
  iVar3 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  if (((iVar3 >> 2 & 0x80000001U) == 1) && (cVar2 = FUN_140653b22(), cVar2 == '\0')) {
    return 0;
  }
  if (((iVar1 / 2 & 0x80000001U) == 1) && (((&DAT_14ca814cd)[(ulonglong)*param_1 * 0x3c] & 3) == 0))
  {
    return 0;
  }
  uVar4 = FUN_144880847((ulonglong)*param_1,0);
  return uVar4;
}



// FUNCTION 1417691fc FUN_1417691fc body=697 status=ok
// SIG undefined FUN_1417691fc(void)

int * FUN_1417691fc(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1405b363e(param_1,iVar15);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar10 = iVar7 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar8 = iVar7 + 1;
    iVar16 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    if (iVar16 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        iVar10 = iVar7;
        if (iVar7 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar18 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar9 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar9 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1417693e0;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar9 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar10 = (int)param_1[5];
            }
          }
LAB_1417693e0:
          iVar3 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar8 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar12,iVar10);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar10 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar7 = *(int *)(*param_1 + 4 + lVar4 * 0x20);
    *(int *)(param_1 + 6) = iVar7;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x20) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1417694b6 FUN_1417694b6 body=40 status=ok
// SIG undefined FUN_1417694b6(void)

undefined8 FUN_1417694b6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417694de FUN_1417694de body=231 status=ok
// SIG undefined FUN_1417694de(void)

undefined8 *
FUN_1417694de(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f6088;
  if (DAT_14c9f6088 != 0) {
    LOCK();
    *(int *)(DAT_14c9f6088 + 8) = *(int *)(DAT_14c9f6088 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f6040;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a266120;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417695c6 FUN_1417695c6 body=92 status=ok
// SIG undefined FUN_1417695c6(void)

undefined8 * FUN_1417695c6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a266120;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141769622 FUN_141769622 body=40 status=ok
// SIG undefined FUN_141769622(void)

undefined8 FUN_141769622(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176964a FUN_14176964a body=231 status=ok
// SIG undefined FUN_14176964a(void)

undefined8 *
FUN_14176964a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f6220;
  if (DAT_14c9f6220 != 0) {
    LOCK();
    *(int *)(DAT_14c9f6220 + 8) = *(int *)(DAT_14c9f6220 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f61d8;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2661b0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141769732 FUN_141769732 body=92 status=ok
// SIG undefined FUN_141769732(void)

undefined8 * FUN_141769732(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2661b0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176978e FUN_14176978e body=231 status=ok
// SIG undefined FUN_14176978e(void)

undefined8 *
FUN_14176978e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f6330;
  if (DAT_14c9f6330 != 0) {
    LOCK();
    *(int *)(DAT_14c9f6330 + 8) = *(int *)(DAT_14c9f6330 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f62e8;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2661f0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141769876 FUN_141769876 body=92 status=ok
// SIG undefined FUN_141769876(void)

undefined8 * FUN_141769876(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2661f0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417698d2 FUN_1417698d2 body=231 status=ok
// SIG undefined FUN_1417698d2(void)

undefined8 *
FUN_1417698d2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f63b8;
  if (DAT_14c9f63b8 != 0) {
    LOCK();
    *(int *)(DAT_14c9f63b8 + 8) = *(int *)(DAT_14c9f63b8 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f6370;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a266230;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417699ba FUN_1417699ba body=92 status=ok
// SIG undefined FUN_1417699ba(void)

undefined8 * FUN_1417699ba(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a266230;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141769a16 FUN_141769a16 body=231 status=ok
// SIG undefined FUN_141769a16(void)

undefined8 *
FUN_141769a16(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f6440;
  if (DAT_14c9f6440 != 0) {
    LOCK();
    *(int *)(DAT_14c9f6440 + 8) = *(int *)(DAT_14c9f6440 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f63f8;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a266270;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141769afe FUN_141769afe body=92 status=ok
// SIG undefined FUN_141769afe(void)

undefined8 * FUN_141769afe(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a266270;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141769b5a FUN_141769b5a body=637 status=ok
// SIG undefined FUN_141769b5a(void)

void FUN_141769b5a(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 *param_5)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined4 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  local_58 = param_3;
  if ((param_4 & 4) == 0) {
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == '\x01')) &&
       (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_4 & 2) != 0)))) {
      param_4 = param_4 & 0xfffffff9 | 4;
    }
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f0);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar15;
    local_50 = DAT_14c9f6a18;
    if (DAT_14c9f6a18 != 0) {
      LOCK();
      *(int *)(DAT_14c9f6a18 + 8) = *(int *)(DAT_14c9f6a18 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9f69d0;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,param_4);
    *puVar16 = &PTR_FUN_14a266430;
    uVar14 = param_5[1];
    uVar3 = param_5[2];
    uVar4 = param_5[3];
    uVar5 = param_5[4];
    uVar6 = param_5[5];
    uVar7 = param_5[6];
    uVar8 = param_5[7];
    uVar9 = param_5[8];
    uVar10 = param_5[9];
    uVar11 = param_5[10];
    uVar12 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar3;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
    *(undefined4 *)(puVar16 + 0x39) = uVar5;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
    *(undefined4 *)(puVar16 + 0x3a) = uVar7;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
    *(undefined4 *)(puVar16 + 0x3b) = uVar9;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
    *(undefined4 *)(puVar16 + 0x3c) = uVar11;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  }
  else {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3e;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f8);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar15;
    uVar3 = *(undefined4 *)(param_1 + 0x660);
    local_50 = DAT_14c9f6a18;
    if (DAT_14c9f6a18 != 0) {
      LOCK();
      *(int *)(DAT_14c9f6a18 + 8) = *(int *)(DAT_14c9f6a18 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9f69d0;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a266430;
    uVar14 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    uVar6 = param_5[4];
    uVar7 = param_5[5];
    uVar8 = param_5[6];
    uVar9 = param_5[7];
    uVar10 = param_5[8];
    uVar11 = param_5[9];
    uVar12 = param_5[10];
    uVar13 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar4;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar5;
    *(undefined4 *)(puVar16 + 0x39) = uVar6;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar7;
    *(undefined4 *)(puVar16 + 0x3a) = uVar8;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar9;
    *(undefined4 *)(puVar16 + 0x3b) = uVar10;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar11;
    *(undefined4 *)(puVar16 + 0x3c) = uVar12;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar13;
    *puVar16 = &PTR_FUN_14a266410;
    *(undefined4 *)(puVar16 + 0x3d) = uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141769dd8 FUN_141769dd8 body=40 status=ok
// SIG undefined FUN_141769dd8(void)

undefined8 FUN_141769dd8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141769e00 FUN_141769e00 body=231 status=ok
// SIG undefined FUN_141769e00(void)

undefined8 *
FUN_141769e00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f6aa0;
  if (DAT_14c9f6aa0 != 0) {
    LOCK();
    *(int *)(DAT_14c9f6aa0 + 8) = *(int *)(DAT_14c9f6aa0 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f6a58;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a266470;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141769ee8 FUN_141769ee8 body=92 status=ok
// SIG undefined FUN_141769ee8(void)

undefined8 * FUN_141769ee8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a266470;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141769f44 FUN_141769f44 body=231 status=ok
// SIG undefined FUN_141769f44(void)

undefined8 *
FUN_141769f44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f6cc0;
  if (DAT_14c9f6cc0 != 0) {
    LOCK();
    *(int *)(DAT_14c9f6cc0 + 8) = *(int *)(DAT_14c9f6cc0 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f6c78;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2664b0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176a02c FUN_14176a02c body=92 status=ok
// SIG undefined FUN_14176a02c(void)

undefined8 * FUN_14176a02c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2664b0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176a088 FUN_14176a088 body=231 status=ok
// SIG undefined FUN_14176a088(void)

undefined8 *
FUN_14176a088(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f6b28;
  if (DAT_14c9f6b28 != 0) {
    LOCK();
    *(int *)(DAT_14c9f6b28 + 8) = *(int *)(DAT_14c9f6b28 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f6ae0;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2664f0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176a170 FUN_14176a170 body=92 status=ok
// SIG undefined FUN_14176a170(void)

undefined8 * FUN_14176a170(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2664f0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176a1cc FUN_14176a1cc body=231 status=ok
// SIG undefined FUN_14176a1cc(void)

undefined8 *
FUN_14176a1cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f6bb0;
  if (DAT_14c9f6bb0 != 0) {
    LOCK();
    *(int *)(DAT_14c9f6bb0 + 8) = *(int *)(DAT_14c9f6bb0 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f6b68;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a266530;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176a2b4 FUN_14176a2b4 body=92 status=ok
// SIG undefined FUN_14176a2b4(void)

undefined8 * FUN_14176a2b4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a266530;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176a310 FUN_14176a310 body=92 status=ok
// SIG undefined FUN_14176a310(void)

undefined8 * FUN_14176a310(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a266550;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176a36c FUN_14176a36c body=40 status=ok
// SIG undefined FUN_14176a36c(void)

undefined8 FUN_14176a36c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176a394 FUN_14176a394 body=231 status=ok
// SIG undefined FUN_14176a394(void)

undefined8 *
FUN_14176a394(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f6f68;
  if (DAT_14c9f6f68 != 0) {
    LOCK();
    *(int *)(DAT_14c9f6f68 + 8) = *(int *)(DAT_14c9f6f68 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f6f20;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2665d0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176a47c FUN_14176a47c body=92 status=ok
// SIG undefined FUN_14176a47c(void)

undefined8 * FUN_14176a47c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2665d0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176a4d8 FUN_14176a4d8 body=40 status=ok
// SIG undefined FUN_14176a4d8(void)

undefined8 FUN_14176a4d8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176a500 FUN_14176a500 body=231 status=ok
// SIG undefined FUN_14176a500(void)

undefined8 *
FUN_14176a500(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f6dd0;
  if (DAT_14c9f6dd0 != 0) {
    LOCK();
    *(int *)(DAT_14c9f6dd0 + 8) = *(int *)(DAT_14c9f6dd0 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f6d88;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a266690;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176a5e8 FUN_14176a5e8 body=92 status=ok
// SIG undefined FUN_14176a5e8(void)

undefined8 * FUN_14176a5e8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a266690;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176a644 FUN_14176a644 body=231 status=ok
// SIG undefined FUN_14176a644(void)

undefined8 *
FUN_14176a644(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f6e58;
  if (DAT_14c9f6e58 != 0) {
    LOCK();
    *(int *)(DAT_14c9f6e58 + 8) = *(int *)(DAT_14c9f6e58 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f6e10;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2666d0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176a72c FUN_14176a72c body=92 status=ok
// SIG undefined FUN_14176a72c(void)

undefined8 * FUN_14176a72c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2666d0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176a788 FUN_14176a788 body=231 status=ok
// SIG undefined FUN_14176a788(void)

undefined8 *
FUN_14176a788(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f7100;
  if (DAT_14c9f7100 != 0) {
    LOCK();
    *(int *)(DAT_14c9f7100 + 8) = *(int *)(DAT_14c9f7100 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f70b8;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a266710;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176a870 FUN_14176a870 body=92 status=ok
// SIG undefined FUN_14176a870(void)

undefined8 * FUN_14176a870(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a266710;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176a8cc FUN_14176a8cc body=231 status=ok
// SIG undefined FUN_14176a8cc(void)

undefined8 *
FUN_14176a8cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9f7210;
  if (DAT_14c9f7210 != 0) {
    LOCK();
    *(int *)(DAT_14c9f7210 + 8) = *(int *)(DAT_14c9f7210 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9f71c8;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a266750;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176a9b4 FUN_14176a9b4 body=92 status=ok
// SIG undefined FUN_14176a9b4(void)

undefined8 * FUN_14176a9b4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a266750;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176aa10 FUN_14176aa10 body=47 status=ok
// SIG undefined FUN_14176aa10(void)

void FUN_14176aa10(longlong param_1,int param_2)

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



// FUNCTION 14176aa40 FUN_14176aa40 body=373 status=ok
// SIG undefined FUN_14176aa40(void)

void FUN_14176aa40(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14176aacb;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14176aacb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 14176abb6 FUN_14176abb6 body=170 status=ok
// SIG undefined FUN_14176abb6(void)

undefined8 FUN_14176abb6(longlong param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar2 = 0xa000;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar2 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar2 = (ulonglong)DAT_14c841df8;
    }
    uVar2 = -uVar2 & uVar2 + 0x9fff;
  }
  else {
    uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0xa000,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if (0x3ff < (int)(uVar2 / 0x28)) {
    uVar4 = uVar2 / 0x28 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x28,8);
  }
  return uVar3;
}



// FUNCTION 14176ac60 FUN_14176ac60 body=255 status=ok
// SIG undefined FUN_14176ac60(void)

void FUN_14176ac60(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14176ad60 FUN_14176ad60 body=276 status=ok
// SIG undefined FUN_14176ad60(void)

ulonglong FUN_14176ad60(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 0xc);
  uVar4 = iVar7 - uVar1;
  uVar5 = (ulonglong)uVar4;
  if ((0x3fff < (ulonglong)((longlong)(int)uVar4 * 400)) || ((int)(uVar1 * 3) < iVar7 * 2)) {
    uVar5 = CONCAT44(0,CONCAT31((int3)(uVar4 >> 8),(int)uVar4 < 0x41));
    auVar3._8_4_ = uVar1;
    auVar3._0_8_ = uVar5;
    auVar3._12_4_ = 0;
    if (uVar1 == 0 || (int)uVar4 >= 0x41) {
      if (0 < (int)uVar1) {
        uVar5 = (ulonglong)uVar1 * 400;
        if (DAT_14c872d28 != (longlong *)0x0) {
          if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
            if (uVar1 < 0x52) {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]]
              ;
            }
            else {
              uVar6 = 0x10;
              if (0x10 < DAT_14c841df8) {
                uVar6 = (ulonglong)DAT_14c841df8;
              }
              uVar5 = -uVar6 & (uVar5 + uVar6) - 1;
            }
          }
          else {
            uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0x10);
            iVar7 = *(int *)(param_1 + 0xc);
          }
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar5 >> 4;
        auVar3 = auVar2 * ZEXT816(0xa3d70a3d70a3d71);
      }
      uVar5 = auVar3._0_8_;
      if (auVar3._8_4_ != iVar7) {
        *(int *)(param_1 + 0xc) = auVar3._8_4_;
        uVar5 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),auVar3._8_8_,400,0x10);
      }
    }
  }
  return uVar5;
}



// FUNCTION 14176ae74 FUN_14176ae74 body=289 status=ok
// SIG undefined FUN_14176ae74(void)

ulonglong FUN_14176ae74(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar1;
  iVar6 = *(int *)(param_1 + 0xc);
  uVar3 = iVar6 - uVar1;
  uVar4 = (ulonglong)uVar3;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar3 * 0x180)) || ((int)(uVar1 * 3) < iVar6 * 2)) &&
     (uVar4 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),(int)uVar3 < 0x41),
     uVar1 == 0 || (int)uVar3 >= 0x41)) {
    if (0 < (int)uVar1) {
      uVar5 = uVar5 * 0x180;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x56) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar4 & (uVar5 + uVar4) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar5;
      uVar4 = SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar5 = uVar5 / 0x180;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      uVar4 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x180,8);
    }
  }
  return uVar4;
}



// FUNCTION 14176af96 FUN_14176af96 body=292 status=ok
// SIG undefined FUN_14176af96(void)

ulonglong FUN_14176af96(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar1;
  iVar6 = *(int *)(param_1 + 0xc);
  uVar3 = iVar6 - uVar1;
  uVar4 = (ulonglong)uVar3;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar3 * 0x50)) || ((int)(uVar1 * 3) < iVar6 * 2)) &&
     (uVar4 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),(int)uVar3 < 0x41),
     uVar1 == 0 || (int)uVar3 >= 0x41)) {
    if (0 < (int)uVar1) {
      uVar5 = uVar5 * 0x50;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x19a) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar4 & (uVar5 + uVar4) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0x10);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar5;
      uVar4 = SUB168(auVar2 * ZEXT816(0xcccccccccccccccd),0);
      uVar5 = uVar5 / 0x50;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      uVar4 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x50,0x10);
    }
  }
  return uVar4;
}



// FUNCTION 14176b0ba FUN_14176b0ba body=135 status=ok
// SIG undefined FUN_14176b0ba(void)

void FUN_14176b0ba(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 14176b142 FUN_14176b142 body=353 status=ok
// SIG undefined FUN_14176b142(void)

void FUN_14176b142(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14176b1c7;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14176b1c7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14176b2f2 FUN_14176b2f2 body=225 status=ok
// SIG undefined FUN_14176b2f2(void)

void FUN_14176b2f2(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_68;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar2 = (undefined8 *)(param_1 + 0xc60);
  puVar3 = (undefined8 *)(param_3 + 0x1d20);
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memcpy((void *)(param_3 + 0x500),(void *)(param_1 + 0xc0),0xba0);
  *(undefined8 *)(param_3 + 0x30f8) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_3 + 0x3100) = *(undefined8 *)(param_1 + 0x28);
  local_68 = 0;
  local_30 = 0;
  local_a0 = *(undefined8 *)(param_3 + 0x3110);
  local_a8 = 2;
  FUN_1401ee8d8(param_3,(void *)(param_3 + 0x500),param_3 + 0x125d0);
  *(undefined4 *)(*(longlong *)(param_3 + 0x3110) + 0xbe0) = 0;
  *(undefined4 *)(*(longlong *)(param_3 + 0x3110) + 0x12b0) = 0;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176b4a0 FUN_14176b4a0 body=252 status=ok
// SIG undefined FUN_14176b4a0(void)

undefined8 FUN_14176b4a0(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  iVar1 = *(int *)(param_1 + 2);
  iVar2 = iVar1 + 7;
  iVar3 = iVar1 + 0xf;
  iVar4 = iVar1 + 0x1f;
  iVar5 = iVar1 + 0x3f;
  iVar6 = iVar1 + 0x7f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
    iVar3 = iVar1;
    iVar4 = iVar1;
    iVar5 = iVar1;
    iVar6 = iVar1;
  }
  bVar10 = (iVar2 >> 3 & 0x80000001U) == 1;
  bVar11 = (iVar4 >> 5 & 0x80000001U) == 1;
  bVar12 = (iVar5 >> 6 & 0x80000001U) == 1;
  bVar13 = ((uint)(iVar1 - (iVar1 >> 0x1f)) >> 1 & 3) == 0;
  bVar9 = bVar13 && bVar12;
  if ((bVar13 && bVar11) || (bVar8 = bVar10, bVar9)) {
    bVar8 = false;
  }
  if (((((iVar6 >> 7) % 3 == 0 || bVar13 && bVar11) && (bVar9 == bVar12)) &&
      ((bVar13 && bVar11) == bVar11)) &&
     ((bVar8 == bVar10 && ((iVar3 >> 4 & 0x80000001U) != 1 || bVar8 != false)))) {
    uVar7 = FUN_144880847(*param_1,0);
    return uVar7;
  }
  return 0;
}



// FUNCTION 14176b5ba FUN_14176b5ba body=91 status=ok
// SIG undefined FUN_14176b5ba(void)

undefined8 FUN_14176b5ba(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((*(int *)(param_1 + 2) % 2 & 0x80000001U) != 1) ||
     ((*(byte *)((longlong)&DAT_14ca814d8 + (ulonglong)*param_1 * 0x3c + 3) & 2) != 0)) {
    cVar1 = FUN_144880847((ulonglong)*param_1,0);
    if (cVar1 != '\0') {
      uVar2 = FUN_140bb8ec0(param_1,1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14176b616 FUN_14176b616 body=68 status=ok
// SIG undefined FUN_14176b616(void)

undefined8 FUN_14176b616(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 2) % 2 & 0x80000001U) != 1) {
    cVar1 = FUN_144880847(*param_1,0);
    if (cVar1 != '\0') {
      uVar2 = FUN_14019108b(*param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14176b65a FUN_14176b65a body=168 status=ok
// SIG undefined FUN_14176b65a(void)

void FUN_14176b65a(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14a26be80;
  if (0 < *(int *)(param_1 + 6)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar2 = param_1[5];
      lVar1 = *(longlong *)(lVar2 + lVar3);
      if (lVar1 != 0) {
        FUN_14003821a(lVar1);
        FUN_1400020a8(lVar1);
        *(undefined8 *)(param_1[5] + lVar3) = 0;
        lVar2 = param_1[5];
      }
      lVar2 = *(longlong *)(lVar2 + 8 + lVar3);
      if (lVar2 != 0) {
        FUN_14003821a(lVar2);
        FUN_1400020a8(lVar2);
        *(undefined8 *)(param_1[5] + 8 + lVar3) = 0;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < *(int *)(param_1 + 6));
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14176b78c FUN_14176b78c body=313 status=ok
// SIG undefined FUN_14176b78c(void)

undefined8 FUN_14176b78c(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  
  lVar3 = DAT_14ca97170;
  iVar1 = *(int *)(param_1 + 2);
  iVar9 = iVar1 + 0x1ff;
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar9 = iVar1;
    iVar2 = iVar1;
  }
  if ((iVar2 >> 5 & 0x80000001U) == 1) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    if (*(int *)(lVar3 + uVar8 * 4) < 1) {
      return 0;
    }
  }
  if ((iVar9 >> 9 & 0x80000001U) == 1) {
    cVar4 = FUN_140653b22();
    lVar3 = DAT_14ca43230;
    if (cVar4 != '\0') {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
        uVar8 = 0;
      }
      else if (iVar1 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar8 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar8 = 1;
      }
      if (*(char *)(lVar3 + uVar8) == '\0') goto LAB_14176b877;
    }
    return 0;
  }
LAB_14176b877:
  uVar7 = FUN_144880847(*param_1,0);
  return uVar7;
}



// FUNCTION 14176b8c6 FUN_14176b8c6 body=320 status=ok
// SIG undefined FUN_14176b8c6(void)

undefined8 FUN_14176b8c6(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  
  FUN_144880847(*param_1,0);
  lVar3 = DAT_14ca97170;
  iVar1 = *(int *)(param_1 + 2);
  iVar9 = iVar1 + 0xf;
  iVar2 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar9 = iVar1;
    iVar2 = iVar1;
  }
  if ((iVar2 >> 2 & 0x80000001U) == 1) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    if (*(int *)(lVar3 + uVar8 * 4) < 1) {
      return 0;
    }
  }
  if ((iVar9 >> 4 & 0x80000001U) == 1) {
    cVar4 = FUN_140653b22();
    lVar3 = DAT_14ca43230;
    if (cVar4 != '\0') {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
        uVar8 = 0;
      }
      else if (iVar1 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar8 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar8 = 1;
      }
      if (*(char *)(lVar3 + uVar8) == '\0') goto LAB_14176b9b8;
    }
    return 0;
  }
LAB_14176b9b8:
  uVar7 = FUN_144880847(*param_1,0);
  return uVar7;
}



// FUNCTION 14176ba06 FUN_14176ba06 body=231 status=ok
// SIG undefined FUN_14176ba06(void)

undefined8 *
FUN_14176ba06(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9fda78;
  if (DAT_14c9fda78 != 0) {
    LOCK();
    *(int *)(DAT_14c9fda78 + 8) = *(int *)(DAT_14c9fda78 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9fda30;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a275a70;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176baee FUN_14176baee body=92 status=ok
// SIG undefined FUN_14176baee(void)

undefined8 * FUN_14176baee(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a275a70;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176bb4a FUN_14176bb4a body=231 status=ok
// SIG undefined FUN_14176bb4a(void)

undefined8 *
FUN_14176bb4a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9fdb00;
  if (DAT_14c9fdb00 != 0) {
    LOCK();
    *(int *)(DAT_14c9fdb00 + 8) = *(int *)(DAT_14c9fdb00 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9fdab8;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a275ab0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176bc32 FUN_14176bc32 body=92 status=ok
// SIG undefined FUN_14176bc32(void)

undefined8 * FUN_14176bc32(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a275ab0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176bc8e FUN_14176bc8e body=40 status=ok
// SIG undefined FUN_14176bc8e(void)

undefined8 FUN_14176bc8e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176bcb6 FUN_14176bcb6 body=40 status=ok
// SIG undefined FUN_14176bcb6(void)

undefined8 FUN_14176bcb6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176bcde FUN_14176bcde body=231 status=ok
// SIG undefined FUN_14176bcde(void)

undefined8 *
FUN_14176bcde(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9fdc10;
  if (DAT_14c9fdc10 != 0) {
    LOCK();
    *(int *)(DAT_14c9fdc10 + 8) = *(int *)(DAT_14c9fdc10 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9fdbc8;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a275b70;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176bdc6 FUN_14176bdc6 body=92 status=ok
// SIG undefined FUN_14176bdc6(void)

undefined8 * FUN_14176bdc6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a275b70;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176be22 FUN_14176be22 body=231 status=ok
// SIG undefined FUN_14176be22(void)

undefined8 *
FUN_14176be22(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9fdda8;
  if (DAT_14c9fdda8 != 0) {
    LOCK();
    *(int *)(DAT_14c9fdda8 + 8) = *(int *)(DAT_14c9fdda8 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9fdd60;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a275bf0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176bf0a FUN_14176bf0a body=92 status=ok
// SIG undefined FUN_14176bf0a(void)

undefined8 * FUN_14176bf0a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a275bf0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176bf66 FUN_14176bf66 body=231 status=ok
// SIG undefined FUN_14176bf66(void)

undefined8 *
FUN_14176bf66(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9fdd20;
  if (DAT_14c9fdd20 != 0) {
    LOCK();
    *(int *)(DAT_14c9fdd20 + 8) = *(int *)(DAT_14c9fdd20 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9fdcd8;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a275c70;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176c04e FUN_14176c04e body=92 status=ok
// SIG undefined FUN_14176c04e(void)

undefined8 * FUN_14176c04e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a275c70;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176c0aa FUN_14176c0aa body=533 status=ok
// SIG undefined FUN_14176c0aa(void)

void FUN_14176c0aa(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  void *_Src;
  uint uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  size_t _Size;
  longlong lVar10;
  ulonglong uVar11;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar10 = *param_2;
    uVar5 = *(ulonglong *)(lVar10 + 0x10);
    uVar11 = lVar10 + 0x10 + ((longlong)uVar5 >> 0x18);
    if ((uVar5 & 1) == 0) {
      uVar11 = uVar5;
    }
    iVar3 = *(int *)(lVar10 + 0x18);
    if ((longlong)iVar3 != 0) {
      lVar10 = 0;
      do {
        uVar6 = (uint)*(byte *)(uVar11 + 3 + lVar10);
        if ((uVar6 < 0x13) && ((0x44080U >> (uVar6 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar11 + 2 + lVar10);
          iVar4 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar4 + 1U) {
            FUN_1447477d8(puVar1,iVar4);
          }
          uVar5 = *puVar1;
          *(ushort *)(uVar5 + (longlong)iVar4 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar5 + 2 + (longlong)iVar4 * 4) = 1;
        }
        lVar10 = lVar10 + 4;
      } while ((longlong)iVar3 * 4 != lVar10);
    }
    uVar5 = param_1[0x13];
    lVar10 = (longlong)(int)uVar5;
    if (0 < lVar10) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar9 + 5;
        if ((undefined8 *)param_1[1] < puVar7) {
          FUN_140023dd8(param_1,0x30);
          puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar9 + 5;
        }
        *param_1 = (ulonglong)puVar7;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar9;
        param_1[6] = (ulonglong)(puVar9 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar8 = (void *)((longlong)_Dst + lVar10 * 4);
        _Size = lVar10 * 4;
        if ((void *)param_1[1] < pvVar8) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar8 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar8;
        memcpy(_Dst,_Src,_Size);
        puVar9[1] = 0;
        *puVar9 = &PTR_FUN_14a1fbc38;
        puVar9[2] = param_3;
        puVar9[3] = _Dst;
        *(int *)(puVar9 + 4) = (int)uVar5;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14176c2c0 FUN_14176c2c0 body=40 status=ok
// SIG undefined FUN_14176c2c0(void)

undefined8 FUN_14176c2c0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176c2e8 FUN_14176c2e8 body=533 status=ok
// SIG undefined FUN_14176c2e8(void)

void FUN_14176c2e8(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  void *_Src;
  uint uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  size_t _Size;
  longlong lVar10;
  ulonglong uVar11;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar10 = *param_2;
    uVar5 = *(ulonglong *)(lVar10 + 0x10);
    uVar11 = lVar10 + 0x10 + ((longlong)uVar5 >> 0x18);
    if ((uVar5 & 1) == 0) {
      uVar11 = uVar5;
    }
    iVar3 = *(int *)(lVar10 + 0x18);
    if ((longlong)iVar3 != 0) {
      lVar10 = 0;
      do {
        uVar6 = (uint)*(byte *)(uVar11 + 3 + lVar10);
        if ((uVar6 < 0x13) && ((0x44080U >> (uVar6 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar11 + 2 + lVar10);
          iVar4 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar4 + 1U) {
            FUN_1447477d8(puVar1,iVar4);
          }
          uVar5 = *puVar1;
          *(ushort *)(uVar5 + (longlong)iVar4 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar5 + 2 + (longlong)iVar4 * 4) = 1;
        }
        lVar10 = lVar10 + 4;
      } while ((longlong)iVar3 * 4 != lVar10);
    }
    uVar5 = param_1[0x13];
    lVar10 = (longlong)(int)uVar5;
    if (0 < lVar10) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar9 + 5;
        if ((undefined8 *)param_1[1] < puVar7) {
          FUN_140023dd8(param_1,0x30);
          puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar9 + 5;
        }
        *param_1 = (ulonglong)puVar7;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar9;
        param_1[6] = (ulonglong)(puVar9 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar8 = (void *)((longlong)_Dst + lVar10 * 4);
        _Size = lVar10 * 4;
        if ((void *)param_1[1] < pvVar8) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar8 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar8;
        memcpy(_Dst,_Src,_Size);
        puVar9[1] = 0;
        *puVar9 = &PTR_FUN_14a1fbc38;
        puVar9[2] = param_3;
        puVar9[3] = _Dst;
        *(int *)(puVar9 + 4) = (int)uVar5;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14176c4fe FUN_14176c4fe body=40 status=ok
// SIG undefined FUN_14176c4fe(void)

undefined8 FUN_14176c4fe(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176c526 FUN_14176c526 body=231 status=ok
// SIG undefined FUN_14176c526(void)

undefined8 *
FUN_14176c526(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9ff8c0;
  if (DAT_14c9ff8c0 != 0) {
    LOCK();
    *(int *)(DAT_14c9ff8c0 + 8) = *(int *)(DAT_14c9ff8c0 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9ff878;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a277b10;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176c60e FUN_14176c60e body=92 status=ok
// SIG undefined FUN_14176c60e(void)

undefined8 * FUN_14176c60e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a277b10;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176c66a FUN_14176c66a body=40 status=ok
// SIG undefined FUN_14176c66a(void)

undefined8 FUN_14176c66a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176c692 FUN_14176c692 body=231 status=ok
// SIG undefined FUN_14176c692(void)

undefined8 *
FUN_14176c692(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9fd8e0;
  if (DAT_14c9fd8e0 != 0) {
    LOCK();
    *(int *)(DAT_14c9fd8e0 + 8) = *(int *)(DAT_14c9fd8e0 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9fd898;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a277cb0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176c77a FUN_14176c77a body=92 status=ok
// SIG undefined FUN_14176c77a(void)

undefined8 * FUN_14176c77a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a277cb0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176c7d6 FUN_14176c7d6 body=40 status=ok
// SIG undefined FUN_14176c7d6(void)

undefined8 FUN_14176c7d6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176c7fe FUN_14176c7fe body=231 status=ok
// SIG undefined FUN_14176c7fe(void)

undefined8 *
FUN_14176c7fe(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9fe160;
  if (DAT_14c9fe160 != 0) {
    LOCK();
    *(int *)(DAT_14c9fe160 + 8) = *(int *)(DAT_14c9fe160 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9fe118;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a277d30;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176c8e6 FUN_14176c8e6 body=92 status=ok
// SIG undefined FUN_14176c8e6(void)

undefined8 * FUN_14176c8e6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a277d30;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176c942 FUN_14176c942 body=466 status=ok
// SIG undefined FUN_14176c942(void)

void FUN_14176c942(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x1808);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 0x41) {
    *(undefined4 *)((longlong)param_1 + 0x180c) = 0x40;
    _Src = *(void **)((longlong)param_1 + 0x1800);
joined_r0x00014176ca7c:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x60);
    param_2 = 0;
    uVar5 = 0;
  }
  else {
    lVar2 = (longlong)(int)uVar1;
    if (0x40 < *(uint *)((longlong)param_1 + 0x180c)) {
      lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
    }
    uVar5 = lVar2 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar3 & (uVar5 + uVar3) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
    uVar5 = uVar5 / 0x60;
    uVar4 = (uint)uVar5;
    if ((int)uVar4 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x180c) = 0x7fffffff;
      uVar5 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x1800);
    }
    else {
      *(uint *)((longlong)param_1 + 0x180c) = uVar4;
      _Src = *(void **)((longlong)param_1 + 0x1800);
      if (uVar4 < 0x41) goto joined_r0x00014176ca7c;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x1800,0,uVar5,0x60);
      memmove(*(void **)((longlong)param_1 + 0x1800),param_1,(longlong)param_2 * 0x60);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x1800,param_2,uVar5,0x60);
  return;
}



// FUNCTION 14176cb14 FUN_14176cb14 body=212 status=ok
// SIG undefined FUN_14176cb14(void)

void FUN_14176cb14(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,0x10);
  }
  return;
}



// FUNCTION 14176cbe8 FUN_14176cbe8 body=231 status=ok
// SIG undefined FUN_14176cbe8(void)

undefined8 *
FUN_14176cbe8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9feb78;
  if (DAT_14c9feb78 != 0) {
    LOCK();
    *(int *)(DAT_14c9feb78 + 8) = *(int *)(DAT_14c9feb78 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9feb30;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a277fa0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176ccd0 FUN_14176ccd0 body=92 status=ok
// SIG undefined FUN_14176ccd0(void)

undefined8 * FUN_14176ccd0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a277fa0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176cd2c FUN_14176cd2c body=40 status=ok
// SIG undefined FUN_14176cd2c(void)

undefined8 FUN_14176cd2c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176cd54 FUN_14176cd54 body=40 status=ok
// SIG undefined FUN_14176cd54(void)

undefined8 FUN_14176cd54(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176cd7c FUN_14176cd7c body=40 status=ok
// SIG undefined FUN_14176cd7c(void)

undefined8 FUN_14176cd7c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176cda4 FUN_14176cda4 body=40 status=ok
// SIG undefined FUN_14176cda4(void)

undefined8 FUN_14176cda4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176cdcc FUN_14176cdcc body=40 status=ok
// SIG undefined FUN_14176cdcc(void)

undefined8 FUN_14176cdcc(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176cdf4 FUN_14176cdf4 body=527 status=ok
// SIG undefined FUN_14176cdf4(void)

void FUN_14176cdf4(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  void *_Src;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  uint uVar8;
  int *piVar9;
  ulonglong _Size;
  
  uVar6 = *(uint *)(param_1 + 1);
  if ((int)uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar7 = 4;
    if (4 < uVar6) {
      uVar7 = uVar6;
    }
  }
  else {
    uVar7 = uVar6 + (int)((ulonglong)((longlong)(int)uVar6 * 3) >> 3) + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar6 <= (int)uVar7) {
    uVar8 = uVar7;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,8);
  }
  _Src = (void *)*param_1;
  if (uVar8 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14176cf34:
      piVar9 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        if (*(longlong *)(piVar9 + 0x10) - (longlong)piVar9 == 0x10000) {
          lVar4 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar4 = FUN_145bdc178();
          }
          FUN_140028df4(lVar4,piVar9);
        }
        else {
          FUN_144705e74(piVar9);
        }
      }
    }
LAB_14176cf7e:
    *param_1 = _Dst;
    return;
  }
  _Size = (ulonglong)uVar8 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_14176ce78;
LAB_14176ce6d:
  FUN_14472e504(puVar1);
  puVar3 = (uint *)*puVar1;
LAB_14176ce78:
  _Dst = (void *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar5 = (uint *)((longlong)_Dst + _Size);
  if (puVar3 + 0x4000 < puVar5) {
    if (uVar8 < 0x1ff5) goto code_r0x00014176cea4;
    puVar3 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar3 = 0xffffffff;
    puVar3[0x12] = 0;
    _Dst = (void *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar3 + 0x10) = puVar3 + (ulonglong)uVar8 * 2 + 0x18;
    *puVar3 = 1;
  }
  else {
    uVar6 = puVar3[0x12] + 1;
LAB_14176cefa:
    *(uint **)(puVar3 + 0x10) = puVar5 + 2;
    puVar3[0x12] = uVar6;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar3;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14176cf7e;
  uVar2 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar2 != 0) {
    if (uVar2 < _Size) {
      _Size = uVar2;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14176cf34;
code_r0x00014176cea4:
  uVar6 = puVar3[0x12];
  while( true ) {
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
    LOCK();
    uVar7 = *puVar3;
    *puVar3 = *puVar3 + uVar6 + 1;
    UNLOCK();
    if ((uVar7 ^ uVar6) != 0xffffffff) break;
    puVar3 = (uint *)*puVar1;
    *puVar3 = 0xffffffff;
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
    puVar3[0x12] = 0;
    *puVar1 = puVar3;
    _Dst = (void *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
    puVar5 = (uint *)((longlong)_Dst + _Size);
    uVar6 = 0;
    if (puVar5 <= puVar3 + 0x4000) {
      uVar6 = 1;
      goto LAB_14176cefa;
    }
  }
  goto LAB_14176ce6d;
}



// FUNCTION 14176d004 FUN_14176d004 body=353 status=ok
// SIG undefined FUN_14176d004(void)

void FUN_14176d004(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14176d089;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14176d089:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 14176d166 FUN_14176d166 body=353 status=ok
// SIG undefined FUN_14176d166(void)

void FUN_14176d166(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 4;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14176d1eb;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14176d1eb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 14176d2c8 FUN_14176d2c8 body=40 status=ok
// SIG undefined FUN_14176d2c8(void)

undefined8 FUN_14176d2c8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176d2f0 FUN_14176d2f0 body=201 status=ok
// SIG undefined FUN_14176d2f0(void)

undefined8 * FUN_14176d2f0(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176d3ba FUN_14176d3ba body=40 status=ok
// SIG undefined FUN_14176d3ba(void)

undefined8 FUN_14176d3ba(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176d3e2 FUN_14176d3e2 body=44 status=ok
// SIG undefined FUN_14176d3e2(void)

longlong FUN_14176d3e2(longlong param_1,int param_2)

{
  FUN_1446f93f0(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176d40e FUN_14176d40e body=201 status=ok
// SIG undefined FUN_14176d40e(void)

undefined8 * FUN_14176d40e(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176d4d8 FUN_14176d4d8 body=201 status=ok
// SIG undefined FUN_14176d4d8(void)

undefined8 * FUN_14176d4d8(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176d5a2 FUN_14176d5a2 body=231 status=ok
// SIG undefined FUN_14176d5a2(void)

undefined8 *
FUN_14176d5a2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9ff040;
  if (DAT_14c9ff040 != 0) {
    LOCK();
    *(int *)(DAT_14c9ff040 + 8) = *(int *)(DAT_14c9ff040 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9feff8;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a278390;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176d68a FUN_14176d68a body=92 status=ok
// SIG undefined FUN_14176d68a(void)

undefined8 * FUN_14176d68a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a278390;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176d6e6 FUN_14176d6e6 body=231 status=ok
// SIG undefined FUN_14176d6e6(void)

undefined8 *
FUN_14176d6e6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9ff2e8;
  if (DAT_14c9ff2e8 != 0) {
    LOCK();
    *(int *)(DAT_14c9ff2e8 + 8) = *(int *)(DAT_14c9ff2e8 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9ff2a0;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2783d0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176d7ce FUN_14176d7ce body=92 status=ok
// SIG undefined FUN_14176d7ce(void)

undefined8 * FUN_14176d7ce(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2783d0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176d82a FUN_14176d82a body=231 status=ok
// SIG undefined FUN_14176d82a(void)

undefined8 *
FUN_14176d82a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9ff150;
  if (DAT_14c9ff150 != 0) {
    LOCK();
    *(int *)(DAT_14c9ff150 + 8) = *(int *)(DAT_14c9ff150 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9ff108;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a278450;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176d912 FUN_14176d912 body=92 status=ok
// SIG undefined FUN_14176d912(void)

undefined8 * FUN_14176d912(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a278450;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176d96e FUN_14176d96e body=231 status=ok
// SIG undefined FUN_14176d96e(void)

undefined8 *
FUN_14176d96e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9ff260;
  if (DAT_14c9ff260 != 0) {
    LOCK();
    *(int *)(DAT_14c9ff260 + 8) = *(int *)(DAT_14c9ff260 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9ff218;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2784b0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176da56 FUN_14176da56 body=92 status=ok
// SIG undefined FUN_14176da56(void)

undefined8 * FUN_14176da56(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2784b0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176dab2 FUN_14176dab2 body=231 status=ok
// SIG undefined FUN_14176dab2(void)

undefined8 *
FUN_14176dab2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9ff370;
  if (DAT_14c9ff370 != 0) {
    LOCK();
    *(int *)(DAT_14c9ff370 + 8) = *(int *)(DAT_14c9ff370 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9ff328;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2784f0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176db9a FUN_14176db9a body=92 status=ok
// SIG undefined FUN_14176db9a(void)

undefined8 * FUN_14176db9a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2784f0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176dbf6 FUN_14176dbf6 body=40 status=ok
// SIG undefined FUN_14176dbf6(void)

undefined8 FUN_14176dbf6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176dc1e FUN_14176dc1e body=40 status=ok
// SIG undefined FUN_14176dc1e(void)

undefined8 FUN_14176dc1e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176dc46 FUN_14176dc46 body=40 status=ok
// SIG undefined FUN_14176dc46(void)

undefined8 FUN_14176dc46(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176dc6e FUN_14176dc6e body=231 status=ok
// SIG undefined FUN_14176dc6e(void)

undefined8 *
FUN_14176dc6e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9ff618;
  if (DAT_14c9ff618 != 0) {
    LOCK();
    *(int *)(DAT_14c9ff618 + 8) = *(int *)(DAT_14c9ff618 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9ff5d0;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a278730;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176dd56 FUN_14176dd56 body=92 status=ok
// SIG undefined FUN_14176dd56(void)

undefined8 * FUN_14176dd56(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a278730;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176def0 FUN_14176def0 body=158 status=ok
// SIG undefined FUN_14176def0(void)

undefined8 FUN_14176def0(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(param_1 + 2);
  iVar2 = iVar1 + 0x1f;
  iVar3 = iVar1 + 3;
  iVar4 = iVar1 + 0x3f;
  iVar5 = iVar1 + 0xf;
  if (-1 < iVar1) {
    iVar2 = iVar1;
    iVar3 = iVar1;
    iVar4 = iVar1;
    iVar5 = iVar1;
  }
  if (((iVar5 >> 4 & 0x80000001U) == 1 || (iVar2 >> 5 & 0x80000001U) != 1) &&
     ((iVar4 >> 6 & 0x80000001U) != 1 ||
      (iVar1 / 2 & 0x80000001U) != 1 && (iVar3 >> 2 & 0x80000001U) != 1)) {
    uVar6 = FUN_144880847(*param_1,0);
    return uVar6;
  }
  return 0;
}



// FUNCTION 14176df8e FUN_14176df8e body=204 status=ok
// SIG undefined FUN_14176df8e(void)

undefined8 FUN_14176df8e(undefined2 *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  iVar1 = *(int *)(param_1 + 2);
  if (((iVar1 / 0x18 & 0x80000001U) == 1) && (cVar3 = FUN_140653b22(), cVar3 == '\0')) {
    return 0;
  }
  lVar2 = DAT_14ca97170;
  if ((iVar1 / 3 & 0x80000001U) == 1) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar7 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar7 = 1;
    }
    if (*(int *)(lVar2 + uVar7 * 4) < 1) {
      return 0;
    }
  }
  uVar6 = FUN_144880847(*param_1,0);
  return uVar6;
}



// FUNCTION 14176e05a FUN_14176e05a body=117 status=ok
// SIG undefined FUN_14176e05a(void)

void FUN_14176e05a(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a27d000;
  iVar2 = *(int *)(param_1 + 5);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1[4] + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_14003821a(lVar1);
        FUN_1400020a8(lVar1);
        *(undefined8 *)(param_1[4] + lVar3 * 8) = 0;
        iVar2 = *(int *)(param_1 + 5);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14176e0d0 FUN_14176e0d0 body=52 status=ok
// SIG undefined FUN_14176e0d0(void)

byte FUN_14176e0d0(undefined2 *param_1)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = 0;
  cVar1 = FUN_144880847(*param_1,0);
  if (cVar1 != '\0') {
    if (*(uint *)(param_1 + 0xc) < 2) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x1f) >> 7;
    }
  }
  return bVar2;
}



// FUNCTION 14176e104 FUN_14176e104 body=52 status=ok
// SIG undefined FUN_14176e104(void)

byte FUN_14176e104(undefined2 *param_1)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = 0;
  cVar1 = FUN_144880847(*param_1,0);
  if (cVar1 != '\0') {
    if (*(uint *)(param_1 + 0xc) < 2) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x1f) >> 7;
    }
  }
  return bVar2;
}



// FUNCTION 14176e1f2 FUN_14176e1f2 body=407 status=ok
// SIG undefined FUN_14176e1f2(void)

void FUN_14176e1f2(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined **local_60;
  longlong local_58;
  longlong local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar7 = *(longlong *)(param_1 + 1000);
  lVar4 = *(longlong *)(lVar7 + 0x13ad8);
  if (lVar4 == 0) {
    uVar2 = *(uint *)(lVar7 + 0x1de0);
    if (uVar2 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> iVar8 & 1) == 0; iVar8 = iVar8 + 1) {
        }
      }
    }
    if (*(longlong *)(lVar7 + 0x3108) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(*(longlong *)(lVar7 + 0x3108) + 0x24);
    }
    lVar4 = FUN_140c6b718(uVar5,uVar6,iVar8);
    lVar7 = *(longlong *)(param_1 + 1000);
    uVar5 = *(undefined8 *)(param_1 + 8);
  }
  cVar3 = FUN_1449a7bda(uVar5,lVar7,0,0);
  if (cVar3 == '\0') {
    local_68 = 0;
    cVar3 = FUN_140444219(*(undefined8 *)(param_1 + 1000),0,0,1);
    if (cVar3 == '\0') goto LAB_14176e26d;
  }
  if ((((DAT_14ca03340 != 0) || (DAT_14ca03398 != 0)) || (DAT_14ca03318 != 0)) ||
     (DAT_14ca032e0 != 0)) {
    local_58 = *(longlong *)(param_1 + 1000);
    local_38 = local_58 + 0x13b98;
    local_60 = &PTR_FUN_14a217cb0;
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    local_50 = local_58;
    FUN_147224456(local_58,lVar4,&local_60);
    FUN_147224887(param_1 + 0x90,*(undefined8 *)(param_1 + 1000),lVar4,&local_60);
    FUN_14722530b(param_1 + 0x90,*(undefined8 *)(param_1 + 1000),lVar4,&local_60);
    local_60 = &PTR_FUN_14a217cb0;
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*local_48)(local_48,1);
      }
    }
  }
LAB_14176e26d:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14176e3ae FUN_14176e3ae body=231 status=ok
// SIG undefined FUN_14176e3ae(void)

undefined8 *
FUN_14176e3ae(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14ca05ca0;
  if (DAT_14ca05ca0 != 0) {
    LOCK();
    *(int *)(DAT_14ca05ca0 + 8) = *(int *)(DAT_14ca05ca0 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14ca05c58;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a286b60;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176e496 FUN_14176e496 body=92 status=ok
// SIG undefined FUN_14176e496(void)

undefined8 * FUN_14176e496(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a286b60;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176e4f2 FUN_14176e4f2 body=231 status=ok
// SIG undefined FUN_14176e4f2(void)

undefined8 *
FUN_14176e4f2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14ca05e38;
  if (DAT_14ca05e38 != 0) {
    LOCK();
    *(int *)(DAT_14ca05e38 + 8) = *(int *)(DAT_14ca05e38 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14ca05df0;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a286ba0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176e5da FUN_14176e5da body=92 status=ok
// SIG undefined FUN_14176e5da(void)

undefined8 * FUN_14176e5da(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a286ba0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176e636 FUN_14176e636 body=231 status=ok
// SIG undefined FUN_14176e636(void)

undefined8 *
FUN_14176e636(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14ca05ec0;
  if (DAT_14ca05ec0 != 0) {
    LOCK();
    *(int *)(DAT_14ca05ec0 + 8) = *(int *)(DAT_14ca05ec0 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14ca05e78;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a286be0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176e71e FUN_14176e71e body=92 status=ok
// SIG undefined FUN_14176e71e(void)

undefined8 * FUN_14176e71e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a286be0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176e77a FUN_14176e77a body=533 status=ok
// SIG undefined FUN_14176e77a(void)

void FUN_14176e77a(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  void *_Src;
  uint uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  size_t _Size;
  longlong lVar10;
  ulonglong uVar11;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar10 = *param_2;
    uVar5 = *(ulonglong *)(lVar10 + 0x10);
    uVar11 = lVar10 + 0x10 + ((longlong)uVar5 >> 0x18);
    if ((uVar5 & 1) == 0) {
      uVar11 = uVar5;
    }
    iVar3 = *(int *)(lVar10 + 0x18);
    if ((longlong)iVar3 != 0) {
      lVar10 = 0;
      do {
        uVar6 = (uint)*(byte *)(uVar11 + 3 + lVar10);
        if ((uVar6 < 0x13) && ((0x44080U >> (uVar6 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar11 + 2 + lVar10);
          iVar4 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar4 + 1U) {
            FUN_1447477d8(puVar1,iVar4);
          }
          uVar5 = *puVar1;
          *(ushort *)(uVar5 + (longlong)iVar4 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar5 + 2 + (longlong)iVar4 * 4) = 1;
        }
        lVar10 = lVar10 + 4;
      } while ((longlong)iVar3 * 4 != lVar10);
    }
    uVar5 = param_1[0x13];
    lVar10 = (longlong)(int)uVar5;
    if (0 < lVar10) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar9 + 5;
        if ((undefined8 *)param_1[1] < puVar7) {
          FUN_140023dd8(param_1,0x30);
          puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar9 + 5;
        }
        *param_1 = (ulonglong)puVar7;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar9;
        param_1[6] = (ulonglong)(puVar9 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar8 = (void *)((longlong)_Dst + lVar10 * 4);
        _Size = lVar10 * 4;
        if ((void *)param_1[1] < pvVar8) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar8 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar8;
        memcpy(_Dst,_Src,_Size);
        puVar9[1] = 0;
        *puVar9 = &PTR_FUN_14a1fbc38;
        puVar9[2] = param_3;
        puVar9[3] = _Dst;
        *(int *)(puVar9 + 4) = (int)uVar5;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14176e990 FUN_14176e990 body=40 status=ok
// SIG undefined FUN_14176e990(void)

undefined8 FUN_14176e990(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176e9b8 FUN_14176e9b8 body=231 status=ok
// SIG undefined FUN_14176e9b8(void)

undefined8 *
FUN_14176e9b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14ca059f8;
  if (DAT_14ca059f8 != 0) {
    LOCK();
    *(int *)(DAT_14ca059f8 + 8) = *(int *)(DAT_14ca059f8 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14ca059b0;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a288830;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176eaa0 FUN_14176eaa0 body=92 status=ok
// SIG undefined FUN_14176eaa0(void)

undefined8 * FUN_14176eaa0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a288830;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176eafc FUN_14176eafc body=231 status=ok
// SIG undefined FUN_14176eafc(void)

undefined8 *
FUN_14176eafc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14ca05a80;
  if (DAT_14ca05a80 != 0) {
    LOCK();
    *(int *)(DAT_14ca05a80 + 8) = *(int *)(DAT_14ca05a80 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14ca05a38;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a288870;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176ebe4 FUN_14176ebe4 body=92 status=ok
// SIG undefined FUN_14176ebe4(void)

undefined8 * FUN_14176ebe4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a288870;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176ec40 FUN_14176ec40 body=231 status=ok
// SIG undefined FUN_14176ec40(void)

undefined8 *
FUN_14176ec40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14ca05b08;
  if (DAT_14ca05b08 != 0) {
    LOCK();
    *(int *)(DAT_14ca05b08 + 8) = *(int *)(DAT_14ca05b08 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14ca05ac0;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2888b0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176ed28 FUN_14176ed28 body=92 status=ok
// SIG undefined FUN_14176ed28(void)

undefined8 * FUN_14176ed28(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2888b0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176ed84 FUN_14176ed84 body=231 status=ok
// SIG undefined FUN_14176ed84(void)

undefined8 *
FUN_14176ed84(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14ca05d28;
  if (DAT_14ca05d28 != 0) {
    LOCK();
    *(int *)(DAT_14ca05d28 + 8) = *(int *)(DAT_14ca05d28 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14ca05ce0;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a288930;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176ee6c FUN_14176ee6c body=92 status=ok
// SIG undefined FUN_14176ee6c(void)

undefined8 * FUN_14176ee6c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a288930;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176eec8 FUN_14176eec8 body=40 status=ok
// SIG undefined FUN_14176eec8(void)

undefined8 FUN_14176eec8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176eef0 FUN_14176eef0 body=231 status=ok
// SIG undefined FUN_14176eef0(void)

undefined8 *
FUN_14176eef0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

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
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14ca05b90;
  if (DAT_14ca05b90 != 0) {
    LOCK();
    *(int *)(DAT_14ca05b90 + 8) = *(int *)(DAT_14ca05b90 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14ca05b48;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2889b0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14176efd8 FUN_14176efd8 body=92 status=ok
// SIG undefined FUN_14176efd8(void)

undefined8 * FUN_14176efd8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2889b0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176f034 FUN_14176f034 body=40 status=ok
// SIG undefined FUN_14176f034(void)

undefined8 FUN_14176f034(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176f05c FUN_14176f05c body=40 status=ok
// SIG undefined FUN_14176f05c(void)

undefined8 FUN_14176f05c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176f084 FUN_14176f084 body=40 status=ok
// SIG undefined FUN_14176f084(void)

undefined8 FUN_14176f084(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176f0ac FUN_14176f0ac body=92 status=ok
// SIG undefined FUN_14176f0ac(void)

undefined8 * FUN_14176f0ac(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a288cb0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176f108 FUN_14176f108 body=40 status=ok
// SIG undefined FUN_14176f108(void)

undefined8 FUN_14176f108(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176f130 FUN_14176f130 body=201 status=ok
// SIG undefined FUN_14176f130(void)

undefined8 * FUN_14176f130(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176f1fa FUN_14176f1fa body=40 status=ok
// SIG undefined FUN_14176f1fa(void)

undefined8 FUN_14176f1fa(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176f222 FUN_14176f222 body=40 status=ok
// SIG undefined FUN_14176f222(void)

undefined8 FUN_14176f222(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176f24a FUN_14176f24a body=40 status=ok
// SIG undefined FUN_14176f24a(void)

undefined8 FUN_14176f24a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176f272 FUN_14176f272 body=40 status=ok
// SIG undefined FUN_14176f272(void)

undefined8 FUN_14176f272(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14176f2be FUN_14176f2be body=262 status=ok
// SIG undefined FUN_14176f2be(void)

void FUN_14176f2be(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong _Size;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((0x50 < *(ushort *)((longlong)param_1 + 0x72)) &&
     (*(longlong *)((longlong)param_1 + 0x20) != 0)) {
    FUN_1400020a8();
  }
  *(undefined2 *)((longlong)param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  if (param_1 != param_2) {
    pvVar2 = *(void **)((longlong)param_2 + 0x10);
    if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
      pvVar2 = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x18);
    *(int *)((longlong)param_1 + 0x18) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 2;
    }
    else {
      FUN_14470ca02(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x10);
        if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,pvVar2,(longlong)iVar1 << 3);
      }
    }
  }
  *(undefined2 *)((longlong)param_1 + 0x70) = *(undefined2 *)((longlong)param_2 + 0x70);
  _Size = (ulonglong)*(ushort *)((longlong)param_2 + 0x72);
  *(ushort *)((longlong)param_1 + 0x72) = *(ushort *)((longlong)param_2 + 0x72);
  if (0x50 < _Size) {
    pvVar2 = (void *)FUN_14001cc68(_Size,0x10);
    *(undefined8 *)((longlong)param_1 + 0x20) = pvVar2;
    if (0x50 < *(ushort *)((longlong)param_2 + 0x72)) {
      memcpy(pvVar2,*(void **)((longlong)param_2 + 0x20),_Size);
      return;
    }
  }
  puVar4 = (undefined8 *)((longlong)param_2 + 0x20);
  puVar5 = (undefined8 *)((longlong)param_1 + 0x20);
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}



// FUNCTION 14176f3c4 FUN_14176f3c4 body=57 status=ok
// SIG undefined FUN_14176f3c4(void)

bool FUN_14176f3c4(ushort *param_1)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = false;
  cVar1 = FUN_14027015e(0,param_1);
  if (cVar1 != '\0') {
    bVar2 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return bVar2;
}



// FUNCTION 14176f3fe FUN_14176f3fe body=104 status=ok
// SIG undefined FUN_14176f3fe(void)

ulonglong FUN_14176f3fe(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  cVar2 = FUN_14027015e(0,param_1);
  if (cVar2 == '\0') goto LAB_14176f42e;
  uVar1 = *param_1;
  if (((&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1) &&
     (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0 || (*(int *)(param_1 + 0xc) == 7)))) {
    uVar3 = 1;
    if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_14176f42e;
    if (uVar1 < 0x31) {
      uVar3 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
      goto LAB_14176f42e;
    }
  }
  uVar3 = 0;
LAB_14176f42e:
  return uVar3 & 0xffffff01;
}



// FUNCTION 14176f466 FUN_14176f466 body=130 status=ok
// SIG undefined FUN_14176f466(void)

ulonglong FUN_14176f466(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 1;
  bVar6 = false;
  cVar2 = FUN_14027015e(0,param_1);
  if (cVar2 != '\0') {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 14176f4e8 FUN_14176f4e8 body=181 status=ok
// SIG undefined FUN_14176f4e8(void)

ulonglong FUN_14176f4e8(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 == 1;
  uVar6 = 0;
  cVar5 = FUN_14027015e(0,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) == 0) &&
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) == 0 &&
        bVar7) && (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1)) {
      if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
        uVar6 = 1;
        if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_14176f55b;
        if (uVar1 < 0x31) {
          uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
          goto LAB_14176f55b;
        }
      }
      uVar6 = 0;
    }
  }
LAB_14176f55b:
  return uVar6 & 0xffffff01;
}



// FUNCTION 14176f59e FUN_14176f59e body=130 status=ok
// SIG undefined FUN_14176f59e(void)

ulonglong FUN_14176f59e(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 2;
  bVar6 = false;
  cVar2 = FUN_14027015e(0,param_1);
  if (cVar2 != '\0') {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 14176f620 FUN_14176f620 body=181 status=ok
// SIG undefined FUN_14176f620(void)

ulonglong FUN_14176f620(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 == 2;
  uVar6 = 0;
  cVar5 = FUN_14027015e(0,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) == 0) &&
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) == 0 &&
        bVar7) && (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1)) {
      if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
        uVar6 = 1;
        if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_14176f693;
        if (uVar1 < 0x31) {
          uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
          goto LAB_14176f693;
        }
      }
      uVar6 = 0;
    }
  }
LAB_14176f693:
  return uVar6 & 0xffffff01;
}



// FUNCTION 14176f6d6 FUN_14176f6d6 body=57 status=ok
// SIG undefined FUN_14176f6d6(void)

undefined8 FUN_14176f6d6(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14027015e(4,param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1);
  }
  return uVar2;
}



// FUNCTION 14176f710 FUN_14176f710 body=100 status=ok
// SIG undefined FUN_14176f710(void)

ulonglong FUN_14176f710(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_14027015e(4,param_1);
  if ((char)uVar2 != '\0') {
    uVar1 = *param_1;
    if (((&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1) &&
       (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0 || (*(int *)(param_1 + 0xc) == 7)))) {
      uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_14176f72b;
      if (uVar1 < 0x31) {
        uVar3 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_14176f72b;
      }
    }
  }
  uVar3 = 0;
LAB_14176f72b:
  return uVar3 & 0xffffffffffffff01;
}



// FUNCTION 14176f774 FUN_14176f774 body=132 status=ok
// SIG undefined FUN_14176f774(void)

ulonglong FUN_14176f774(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 1;
  cVar2 = FUN_14027015e(4,param_1);
  if (cVar2 == '\0') {
    bVar6 = false;
  }
  else {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 14176f7f8 FUN_14176f7f8 body=177 status=ok
// SIG undefined FUN_14176f7f8(void)

ulonglong FUN_14176f7f8(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 != 1;
  cVar5 = FUN_14027015e(4,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) != 0) ||
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) != 0 ||
        bVar7) || (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] != 1)) goto LAB_14176f84b;
    if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
      uVar6 = 1;
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_14176f84b;
      if (uVar1 < 0x31) {
        uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_14176f84b;
      }
    }
  }
  uVar6 = 0;
LAB_14176f84b:
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 14176f8aa FUN_14176f8aa body=132 status=ok
// SIG undefined FUN_14176f8aa(void)

ulonglong FUN_14176f8aa(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 2;
  cVar2 = FUN_14027015e(4,param_1);
  if (cVar2 == '\0') {
    bVar6 = false;
  }
  else {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 14176f92e FUN_14176f92e body=177 status=ok
// SIG undefined FUN_14176f92e(void)

ulonglong FUN_14176f92e(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 != 2;
  cVar5 = FUN_14027015e(4,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) != 0) ||
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) != 0 ||
        bVar7) || (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] != 1)) goto LAB_14176f981;
    if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
      uVar6 = 1;
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_14176f981;
      if (uVar1 < 0x31) {
        uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_14176f981;
      }
    }
  }
  uVar6 = 0;
LAB_14176f981:
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 14176f9e0 FUN_14176f9e0 body=57 status=ok
// SIG undefined FUN_14176f9e0(void)

undefined8 FUN_14176f9e0(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14027015e(7,param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1);
  }
  return uVar2;
}



// FUNCTION 14176fa1a FUN_14176fa1a body=100 status=ok
// SIG undefined FUN_14176fa1a(void)

ulonglong FUN_14176fa1a(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_14027015e(7,param_1);
  if ((char)uVar2 != '\0') {
    uVar1 = *param_1;
    if (((&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1) &&
       (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0 || (*(int *)(param_1 + 0xc) == 7)))) {
      uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_14176fa35;
      if (uVar1 < 0x31) {
        uVar3 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_14176fa35;
      }
    }
  }
  uVar3 = 0;
LAB_14176fa35:
  return uVar3 & 0xffffffffffffff01;
}



// FUNCTION 14176fa7e FUN_14176fa7e body=132 status=ok
// SIG undefined FUN_14176fa7e(void)

ulonglong FUN_14176fa7e(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 1;
  cVar2 = FUN_14027015e(7,param_1);
  if (cVar2 == '\0') {
    bVar6 = false;
  }
  else {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 14176fb02 FUN_14176fb02 body=177 status=ok
// SIG undefined FUN_14176fb02(void)

ulonglong FUN_14176fb02(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 != 1;
  cVar5 = FUN_14027015e(7,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) != 0) ||
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) != 0 ||
        bVar7) || (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] != 1)) goto LAB_14176fb55;
    if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
      uVar6 = 1;
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_14176fb55;
      if (uVar1 < 0x31) {
        uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_14176fb55;
      }
    }
  }
  uVar6 = 0;
LAB_14176fb55:
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 14176fbb4 FUN_14176fbb4 body=132 status=ok
// SIG undefined FUN_14176fbb4(void)

ulonglong FUN_14176fbb4(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 2;
  cVar2 = FUN_14027015e(7,param_1);
  if (cVar2 == '\0') {
    bVar6 = false;
  }
  else {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 14176fc38 FUN_14176fc38 body=177 status=ok
// SIG undefined FUN_14176fc38(void)

ulonglong FUN_14176fc38(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 != 2;
  cVar5 = FUN_14027015e(7,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) != 0) ||
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) != 0 ||
        bVar7) || (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] != 1)) goto LAB_14176fc8b;
    if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
      uVar6 = 1;
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_14176fc8b;
      if (uVar1 < 0x31) {
        uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_14176fc8b;
      }
    }
  }
  uVar6 = 0;
LAB_14176fc8b:
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 14176fcea FUN_14176fcea body=57 status=ok
// SIG undefined FUN_14176fcea(void)

undefined8 FUN_14176fcea(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14027015e(8,param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1);
  }
  return uVar2;
}



// FUNCTION 14176fd24 FUN_14176fd24 body=100 status=ok
// SIG undefined FUN_14176fd24(void)

ulonglong FUN_14176fd24(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_14027015e(8,param_1);
  if ((char)uVar2 != '\0') {
    uVar1 = *param_1;
    if (((&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1) &&
       (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0 || (*(int *)(param_1 + 0xc) == 7)))) {
      uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_14176fd3f;
      if (uVar1 < 0x31) {
        uVar3 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_14176fd3f;
      }
    }
  }
  uVar3 = 0;
LAB_14176fd3f:
  return uVar3 & 0xffffffffffffff01;
}



// FUNCTION 14176fd88 FUN_14176fd88 body=132 status=ok
// SIG undefined FUN_14176fd88(void)

ulonglong FUN_14176fd88(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 1;
  cVar2 = FUN_14027015e(8,param_1);
  if (cVar2 == '\0') {
    bVar6 = false;
  }
  else {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 14176fe0c FUN_14176fe0c body=177 status=ok
// SIG undefined FUN_14176fe0c(void)

ulonglong FUN_14176fe0c(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 != 1;
  cVar5 = FUN_14027015e(8,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) != 0) ||
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) != 0 ||
        bVar7) || (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] != 1)) goto LAB_14176fe5f;
    if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
      uVar6 = 1;
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_14176fe5f;
      if (uVar1 < 0x31) {
        uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_14176fe5f;
      }
    }
  }
  uVar6 = 0;
LAB_14176fe5f:
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 14176febe FUN_14176febe body=132 status=ok
// SIG undefined FUN_14176febe(void)

ulonglong FUN_14176febe(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 2;
  cVar2 = FUN_14027015e(8,param_1);
  if (cVar2 == '\0') {
    bVar6 = false;
  }
  else {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 14176ff42 FUN_14176ff42 body=177 status=ok
// SIG undefined FUN_14176ff42(void)

ulonglong FUN_14176ff42(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 != 2;
  cVar5 = FUN_14027015e(8,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) != 0) ||
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) != 0 ||
        bVar7) || (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] != 1)) goto LAB_14176ff95;
    if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
      uVar6 = 1;
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_14176ff95;
      if (uVar1 < 0x31) {
        uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_14176ff95;
      }
    }
  }
  uVar6 = 0;
LAB_14176ff95:
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 14176fff4 FUN_14176fff4 body=57 status=ok
// SIG undefined FUN_14176fff4(void)

undefined8 FUN_14176fff4(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14027015e(9,param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1);
  }
  return uVar2;
}



// FUNCTION 14177002e FUN_14177002e body=100 status=ok
// SIG undefined FUN_14177002e(void)

ulonglong FUN_14177002e(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_14027015e(9,param_1);
  if ((char)uVar2 != '\0') {
    uVar1 = *param_1;
    if (((&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1) &&
       (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0 || (*(int *)(param_1 + 0xc) == 7)))) {
      uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_141770049;
      if (uVar1 < 0x31) {
        uVar3 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_141770049;
      }
    }
  }
  uVar3 = 0;
LAB_141770049:
  return uVar3 & 0xffffffffffffff01;
}



// FUNCTION 141770092 FUN_141770092 body=132 status=ok
// SIG undefined FUN_141770092(void)

ulonglong FUN_141770092(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 1;
  cVar2 = FUN_14027015e(9,param_1);
  if (cVar2 == '\0') {
    bVar6 = false;
  }
  else {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 141770116 FUN_141770116 body=177 status=ok
// SIG undefined FUN_141770116(void)

ulonglong FUN_141770116(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 != 1;
  cVar5 = FUN_14027015e(9,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) != 0) ||
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) != 0 ||
        bVar7) || (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] != 1)) goto LAB_141770169;
    if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
      uVar6 = 1;
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_141770169;
      if (uVar1 < 0x31) {
        uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_141770169;
      }
    }
  }
  uVar6 = 0;
LAB_141770169:
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 1417701c8 FUN_1417701c8 body=132 status=ok
// SIG undefined FUN_1417701c8(void)

ulonglong FUN_1417701c8(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 2;
  cVar2 = FUN_14027015e(9,param_1);
  if (cVar2 == '\0') {
    bVar6 = false;
  }
  else {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 14177024c FUN_14177024c body=177 status=ok
// SIG undefined FUN_14177024c(void)

ulonglong FUN_14177024c(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 != 2;
  cVar5 = FUN_14027015e(9,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) != 0) ||
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) != 0 ||
        bVar7) || (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] != 1)) goto LAB_14177029f;
    if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
      uVar6 = 1;
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_14177029f;
      if (uVar1 < 0x31) {
        uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_14177029f;
      }
    }
  }
  uVar6 = 0;
LAB_14177029f:
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 1417702fe FUN_1417702fe body=57 status=ok
// SIG undefined FUN_1417702fe(void)

undefined8 FUN_1417702fe(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14027015e(10,param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1);
  }
  return uVar2;
}



// FUNCTION 141770338 FUN_141770338 body=100 status=ok
// SIG undefined FUN_141770338(void)

ulonglong FUN_141770338(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_14027015e(10,param_1);
  if ((char)uVar2 != '\0') {
    uVar1 = *param_1;
    if (((&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1) &&
       (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0 || (*(int *)(param_1 + 0xc) == 7)))) {
      uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_141770353;
      if (uVar1 < 0x31) {
        uVar3 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_141770353;
      }
    }
  }
  uVar3 = 0;
LAB_141770353:
  return uVar3 & 0xffffffffffffff01;
}



// FUNCTION 14177039c FUN_14177039c body=132 status=ok
// SIG undefined FUN_14177039c(void)

ulonglong FUN_14177039c(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 1;
  cVar2 = FUN_14027015e(10,param_1);
  if (cVar2 == '\0') {
    bVar6 = false;
  }
  else {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 141770420 FUN_141770420 body=177 status=ok
// SIG undefined FUN_141770420(void)

ulonglong FUN_141770420(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 != 1;
  cVar5 = FUN_14027015e(10,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) != 0) ||
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) != 0 ||
        bVar7) || (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] != 1)) goto LAB_141770473;
    if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
      uVar6 = 1;
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_141770473;
      if (uVar1 < 0x31) {
        uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_141770473;
      }
    }
  }
  uVar6 = 0;
LAB_141770473:
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 1417704d2 FUN_1417704d2 body=132 status=ok
// SIG undefined FUN_1417704d2(void)

ulonglong FUN_1417704d2(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 2;
  cVar2 = FUN_14027015e(10,param_1);
  if (cVar2 == '\0') {
    bVar6 = false;
  }
  else {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 141770556 FUN_141770556 body=177 status=ok
// SIG undefined FUN_141770556(void)

ulonglong FUN_141770556(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 != 2;
  cVar5 = FUN_14027015e(10,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) != 0) ||
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) != 0 ||
        bVar7) || (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] != 1)) goto LAB_1417705a9;
    if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
      uVar6 = 1;
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_1417705a9;
      if (uVar1 < 0x31) {
        uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_1417705a9;
      }
    }
  }
  uVar6 = 0;
LAB_1417705a9:
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 141770608 FUN_141770608 body=57 status=ok
// SIG undefined FUN_141770608(void)

undefined8 FUN_141770608(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14027015e(0xb,param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1);
  }
  return uVar2;
}



// FUNCTION 141770642 FUN_141770642 body=100 status=ok
// SIG undefined FUN_141770642(void)

ulonglong FUN_141770642(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_14027015e(0xb,param_1);
  if ((char)uVar2 != '\0') {
    uVar1 = *param_1;
    if (((&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1) &&
       (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0 || (*(int *)(param_1 + 0xc) == 7)))) {
      uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_14177065d;
      if (uVar1 < 0x31) {
        uVar3 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_14177065d;
      }
    }
  }
  uVar3 = 0;
LAB_14177065d:
  return uVar3 & 0xffffffffffffff01;
}



// FUNCTION 1417706a6 FUN_1417706a6 body=132 status=ok
// SIG undefined FUN_1417706a6(void)

ulonglong FUN_1417706a6(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 1;
  cVar2 = FUN_14027015e(0xb,param_1);
  if (cVar2 == '\0') {
    bVar6 = false;
  }
  else {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 14177072a FUN_14177072a body=177 status=ok
// SIG undefined FUN_14177072a(void)

ulonglong FUN_14177072a(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 != 1;
  cVar5 = FUN_14027015e(0xb,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) != 0) ||
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) != 0 ||
        bVar7) || (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] != 1)) goto LAB_14177077d;
    if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
      uVar6 = 1;
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_14177077d;
      if (uVar1 < 0x31) {
        uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_14177077d;
      }
    }
  }
  uVar6 = 0;
LAB_14177077d:
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 1417707dc FUN_1417707dc body=132 status=ok
// SIG undefined FUN_1417707dc(void)

ulonglong FUN_1417707dc(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 2;
  cVar2 = FUN_14027015e(0xb,param_1);
  if (cVar2 == '\0') {
    bVar6 = false;
  }
  else {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 141770860 FUN_141770860 body=177 status=ok
// SIG undefined FUN_141770860(void)

ulonglong FUN_141770860(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 != 2;
  cVar5 = FUN_14027015e(0xb,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) != 0) ||
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) != 0 ||
        bVar7) || (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] != 1)) goto LAB_1417708b3;
    if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
      uVar6 = 1;
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_1417708b3;
      if (uVar1 < 0x31) {
        uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_1417708b3;
      }
    }
  }
  uVar6 = 0;
LAB_1417708b3:
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 141770912 FUN_141770912 body=57 status=ok
// SIG undefined FUN_141770912(void)

undefined8 FUN_141770912(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14027015e(0xc,param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1);
  }
  return uVar2;
}



// FUNCTION 14177094c FUN_14177094c body=100 status=ok
// SIG undefined FUN_14177094c(void)

ulonglong FUN_14177094c(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_14027015e(0xc,param_1);
  if ((char)uVar2 != '\0') {
    uVar1 = *param_1;
    if (((&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1) &&
       (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0 || (*(int *)(param_1 + 0xc) == 7)))) {
      uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_141770967;
      if (uVar1 < 0x31) {
        uVar3 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_141770967;
      }
    }
  }
  uVar3 = 0;
LAB_141770967:
  return uVar3 & 0xffffffffffffff01;
}



// FUNCTION 1417709b0 FUN_1417709b0 body=132 status=ok
// SIG undefined FUN_1417709b0(void)

ulonglong FUN_1417709b0(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 1;
  cVar2 = FUN_14027015e(0xc,param_1);
  if (cVar2 == '\0') {
    bVar6 = false;
  }
  else {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 141770a34 FUN_141770a34 body=177 status=ok
// SIG undefined FUN_141770a34(void)

ulonglong FUN_141770a34(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 != 1;
  cVar5 = FUN_14027015e(0xc,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) != 0) ||
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) != 0 ||
        bVar7) || (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] != 1)) goto LAB_141770a87;
    if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
      uVar6 = 1;
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_141770a87;
      if (uVar1 < 0x31) {
        uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_141770a87;
      }
    }
  }
  uVar6 = 0;
LAB_141770a87:
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 141770ae6 FUN_141770ae6 body=132 status=ok
// SIG undefined FUN_141770ae6(void)

ulonglong FUN_141770ae6(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 10);
  bVar4 = (((((uVar1 >> 10 & 1) == 0 && *(uint *)(param_1 + 0xc) < 2) | (byte)uVar1) &
            DAT_14c760e14 & DAT_14ca964f0 | (byte)uVar1) & 1) != 0;
  if (bVar4) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  bVar5 = DAT_14c760e10 == 2;
  cVar2 = FUN_14027015e(0xc,param_1);
  if (cVar2 == '\0') {
    bVar6 = false;
  }
  else {
    bVar6 = (&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] == 1;
  }
  return CONCAT71(uVar3,(!bVar4 && bVar5) & bVar6 & (uVar1 & 1) == 0) & 0xffffffff;
}



// FUNCTION 141770b6a FUN_141770b6a body=177 status=ok
// SIG undefined FUN_141770b6a(void)

ulonglong FUN_141770b6a(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 10);
  bVar4 = DAT_14c760e14 & DAT_14ca964f0;
  uVar3 = *(uint *)(param_1 + 0xc);
  bVar7 = DAT_14c760e10 != 2;
  cVar5 = FUN_14027015e(0xc,param_1);
  if (cVar5 != '\0') {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((uVar2 & 1) != 0) ||
       (((((((uVar2 >> 10 & 1) == 0 && uVar3 < 2) | (byte)uVar2) & bVar4 | (byte)uVar2) & 1) != 0 ||
        bVar7) || (&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] != 1)) goto LAB_141770bbd;
    if (((*(byte *)((longlong)param_1 + 0x15) & 8) != 0) || (*(int *)(param_1 + 0xc) == 7)) {
      uVar6 = 1;
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar1 * 0xf) & 0x80) != 0) goto LAB_141770bbd;
      if (uVar1 < 0x31) {
        uVar6 = 0x1000001200000 >> ((byte)uVar1 & 0x3f);
        goto LAB_141770bbd;
      }
    }
  }
  uVar6 = 0;
LAB_141770bbd:
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 141770c1c FUN_141770c1c body=419 status=ok
// SIG undefined FUN_141770c1c(void)

void * FUN_141770c1c(void *param_1,void *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  void *pvVar10;
  longlong lVar11;
  ulonglong _Size;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  if (param_1 != param_2) {
    iVar1 = *(int *)((longlong)param_2 + 0x18);
    pvVar9 = *(void **)((longlong)param_2 + 0x10);
    *(int *)((longlong)param_1 + 0x18) = iVar1;
    FUN_14470ca02(param_1,iVar1,2);
    if ((longlong)iVar1 != 0) {
      if (pvVar9 == (void *)0x0) {
        pvVar9 = param_2;
      }
      pvVar10 = *(void **)((longlong)param_1 + 0x10);
      if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
        pvVar10 = param_1;
      }
      memcpy(pvVar10,pvVar9,(longlong)iVar1 << 3);
    }
  }
  *(undefined2 *)((longlong)param_1 + 0x70) = *(undefined2 *)((longlong)param_2 + 0x70);
  _Size = (ulonglong)*(ushort *)((longlong)param_2 + 0x72);
  *(ushort *)((longlong)param_1 + 0x72) = *(ushort *)((longlong)param_2 + 0x72);
  if (0x50 < _Size) {
    pvVar9 = (void *)FUN_14001cc68(_Size,0x10);
    *(undefined8 *)((longlong)param_1 + 0x20) = pvVar9;
    if (0x50 < *(ushort *)((longlong)param_2 + 0x72)) {
      memcpy(pvVar9,*(void **)((longlong)param_2 + 0x20),_Size);
      goto LAB_141770cd3;
    }
  }
  puVar12 = (undefined8 *)((longlong)param_2 + 0x20);
  puVar13 = (undefined8 *)((longlong)param_1 + 0x20);
  for (lVar11 = 10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
LAB_141770cd3:
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0xd8);
  pvVar9 = *(void **)((longlong)param_2 + 0xd0);
  *(int *)((longlong)param_1 + 0xd8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 7;
  }
  else {
    pvVar10 = (void *)((longlong)param_2 + 0x78);
    if (pvVar9 != (void *)0x0) {
      pvVar10 = pvVar9;
    }
    FUN_14470c976((void *)((longlong)param_1 + 0x78),iVar1,0);
    pvVar9 = *(void **)((longlong)param_1 + 0xd0);
    if (*(void **)((longlong)param_1 + 0xd0) == (void *)0x0) {
      pvVar9 = (void *)((longlong)param_1 + 0x78);
    }
    memcpy(pvVar9,pvVar10,(longlong)iVar1 * 0xc);
  }
  uVar2 = *(undefined8 *)((longlong)param_2 + 0xe0);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0xe8);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0xf0);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0xf8);
  uVar6 = *(undefined8 *)((longlong)param_2 + 0x100);
  uVar7 = *(undefined8 *)((longlong)param_2 + 0x108);
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x115);
  *(undefined8 *)((longlong)param_1 + 0x10d) = *(undefined8 *)((longlong)param_2 + 0x10d);
  *(undefined8 *)((longlong)param_1 + 0x115) = uVar8;
  *(undefined8 *)((longlong)param_1 + 0x100) = uVar6;
  *(undefined8 *)((longlong)param_1 + 0x108) = uVar7;
  *(undefined8 *)((longlong)param_1 + 0xf0) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0xf8) = uVar5;
  *(undefined8 *)((longlong)param_1 + 0xe0) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0xe8) = uVar3;
  return param_1;
}



// FUNCTION 141770dc0 FUN_141770dc0 body=385 status=ok
// SIG undefined FUN_141770dc0(void)

void FUN_141770dc0(ulonglong *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = (uint)param_1[1];
  if ((int)uVar2 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar2) {
      uVar5 = uVar2;
    }
    lVar3 = (longlong)(int)uVar5;
  }
  else {
    lVar3 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar4 = lVar3 * 4;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar4 + 0xf;
      if (0x7ff0 < uVar4) {
        uVar6 = uVar7 & 0xfffffffffffffff0;
        if (uVar6 < 0x7ff1) goto LAB_141770edd;
        goto LAB_141770ead;
      }
      uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,2);
    }
  }
LAB_141770e45:
  do {
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 2)) {
      uVar6 = uVar4 >> 2 & 0xffffffff;
    }
    uVar5 = (uint)uVar6;
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    uVar4 = *param_1;
    if ((uVar4 & 1) == 0) {
      if ((uVar4 == 0) && ((int)uVar5 < 1)) {
        return;
      }
      if (-1 < (int)uVar5) {
        uVar4 = FUN_14001fdce(uVar4,uVar6 << 2,2);
        *param_1 = uVar4;
        return;
      }
    }
    else if (uVar5 <= param_2) {
      return;
    }
    uVar7 = 0;
    FUN_1467ac767();
LAB_141770edd:
    bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
    uVar7 = 0x32;
    if (0x32 < bVar1) {
      uVar7 = (ulonglong)bVar1;
    }
    uVar8 = 0x32 - (ulonglong)bVar1;
    do {
      uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141770e45;
      lVar3 = uVar7 + 1 + uVar8;
      uVar8 = uVar8 - 1;
    } while (lVar3 != 0x33);
LAB_141770ead:
    uVar4 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar4 = (ulonglong)DAT_14c841df8;
    }
    uVar4 = -uVar4 & (uVar6 + uVar4) - 1;
  } while( true );
}



// FUNCTION 141770f54 FUN_141770f54 body=133 status=ok
// SIG undefined FUN_141770f54(void)

byte FUN_141770f54(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 2);
  uVar3 = uVar1 + 3;
  if (-1 < (int)uVar1) {
    uVar3 = uVar1;
  }
  if (((int)uVar3 >> 2 & 0x80000001U) == 1) {
    cVar2 = FUN_144937519();
    if ((uVar1 & 0x80000001) != 1) {
      return 0;
    }
    if (cVar2 == '\0') {
      return 0;
    }
    if (DAT_14c760e34 == 0) {
      return 0;
    }
  }
  else if (DAT_14c760e34 == 0) {
    return 0;
  }
  lVar4 = (ulonglong)*param_1 * 0x3c;
  return (byte)((uint)(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] >> 0x1d) &
         *(byte *)((longlong)&DAT_14ca814d8 + lVar4 + 3) >> 4 &
         (byte)((*(uint *)(&DAT_14ca814cc + lVar4) & 8) >> 3);
}



// FUNCTION 141770fd9 FUN_141770fd9 body=1644 status=ok
// SIG undefined FUN_141770fd9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_141770fd9(longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_c8 [47];
  char local_99;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 local_53;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = *param_3;
  uVar3 = *(undefined8 *)(lVar6 + 0x84);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = lVar6;
  if ((*(char *)(lVar6 + 0x92) == '\x04') || (*(char *)(lVar6 + 0x92) == '\x01')) {
    uVar9 = *(undefined2 *)(lVar6 + 0x8e);
  }
  else {
    uVar9 = 0;
  }
  uVar2 = *(undefined1 *)(lVar6 + 0x90);
  plVar1 = (longlong *)(param_2 + 0x70);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar10 + 8;
  local_99 = param_4;
  local_98 = plVar1;
  local_90 = param_3;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8(plVar1,0x48);
    puVar10 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar10 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  puVar10[1] = *(undefined8 *)(lVar6 + 8);
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 1;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
  *puVar10 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar10 + 5) = 0x2c;
  *(undefined1 *)((longlong)puVar10 + 0x2a) = uVar2;
  *(undefined1 *)((longlong)puVar10 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar10 + 0x2c) = 0;
  *(undefined2 *)((longlong)puVar10 + 0x2e) = uVar9;
  *(undefined1 *)(puVar10 + 6) = 0;
  *(undefined1 *)((longlong)puVar10 + 0x32) = 0;
  puVar10[7] = lVar6;
  iVar7 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar7 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar7 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar7);
  }
  plVar1 = local_98;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar7 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_1[1] = (longlong)puVar10;
  if ((DAT_14ca84e22 == '\x01') && (DAT_14ca84e1f != '\0')) {
    bVar15 = DAT_14c760874 != 0;
    bVar16 = DAT_14c76082c == 1;
    *(bool *)(param_1 + 6) = bVar16 && bVar15;
    if (bVar16 && bVar15) {
      lVar6 = 0;
      if (local_99 != '\0') {
        lVar6 = *local_90;
      }
      param_1[2] = *local_90;
      param_1[3] = lVar6;
      if (DAT_14cafe420 == '\x01') {
        param_1[5] = local_90[2];
      }
      goto LAB_1417714b4;
    }
  }
  else {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  uStack_80 = CONCAT44(_DAT_14ca850b4,DAT_14ca850b0);
  uStack_78 = CONCAT44(uRam000000014ca850bc,_DAT_14ca850b8);
  uStack_56 = 0;
  local_88 = 0xc;
  uStack_55 = 0xb;
  uStack_54 = 0;
  uStack_5c = 0x10001;
  uStack_58 = 0x101;
  local_68 = 0;
  local_53 = 0xff;
  iVar8 = (int)uVar3;
  iVar7 = DAT_14ca84e40;
  if (iVar8 < DAT_14ca84e40) {
    iVar7 = iVar8;
  }
  if (iVar7 < 2) {
    iVar7 = 1;
  }
  iVar13 = (int)((ulonglong)uVar3 >> 0x20);
  iVar5 = DAT_14ca84e40;
  if (iVar13 < DAT_14ca84e40) {
    iVar5 = iVar13;
  }
  uStack_70 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca850c0);
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  local_64 = CONCAT44(iVar5,iVar7);
  uVar11 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar12 = uVar11 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar12) {
    FUN_140023dd8(local_98,0x128);
    uVar11 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar12 = uVar11 + 0x120;
  }
  lVar6 = param_2 + 0x178;
  *(ulonglong *)(param_2 + 0x70) = uVar12;
  FUN_1456bbb8c(uVar11,L"CombinedCustomDepth",&local_88,0);
  iVar7 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar7 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar7 + 1U) {
    FUN_14472c0f6(lVar6,iVar7);
  }
  plVar1 = local_98;
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar7 * 8) = uVar11;
  *(int *)(uVar11 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  param_1[2] = uVar11;
  if (local_99 == '\0') {
    uVar12 = 0;
  }
  else {
    uStack_80 = CONCAT44(DAT_14ca83a5c,DAT_14ca83a58);
    uStack_78 = CONCAT44(DAT_14ca83a64,DAT_14ca83a60);
    uStack_56 = 0;
    local_88 = 9;
    uStack_55 = 0x31;
    uStack_54 = 0;
    uStack_5c = 0x10001;
    uStack_58 = 0x101;
    local_68 = 0;
    iVar7 = DAT_14ca84e40;
    if (iVar8 < DAT_14ca84e40) {
      iVar7 = iVar8;
    }
    if (iVar7 < 2) {
      iVar7 = 1;
    }
    local_53 = 0xff;
    iVar5 = DAT_14ca84e40;
    if (iVar13 < DAT_14ca84e40) {
      iVar5 = iVar13;
    }
    uStack_70 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a68);
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    local_64 = CONCAT44(iVar5,iVar7);
    uVar12 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar11 = uVar12 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
      FUN_140023dd8(local_98,0x128);
      uVar12 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar11 = uVar12 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar11;
    FUN_1456bbb8c(uVar12,L"CombinedCustomStencil",&local_88,0);
    iVar7 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar7 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar7 + 1U) {
      FUN_14472c0f6(lVar6,iVar7);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar7 * 8) = uVar12;
    *(int *)(uVar12 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    param_1[3] = uVar12;
  }
  plVar1 = local_98;
  if (DAT_14cafe420 == '\x01') {
    param_1[4] = local_90[2];
    iVar7 = DAT_14ca84e40;
    if (iVar8 < DAT_14ca84e40) {
      iVar7 = iVar8;
    }
    if (iVar7 < 2) {
      iVar7 = 1;
    }
    iVar8 = DAT_14ca84e40;
    if (iVar13 < DAT_14ca84e40) {
      iVar8 = iVar13;
    }
    uStack_80 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
    uStack_78 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    uStack_56 = 0;
    local_88 = 9;
    uStack_55 = 9;
    uStack_54 = 0;
    uStack_5c = 0x10001;
    uStack_58 = 0x101;
    local_68 = 0;
    local_53 = 0xff;
    uStack_70 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    local_64 = CONCAT44(iVar8,iVar7);
    uVar14 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar11 = uVar14 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
      FUN_140023dd8(local_98,0x128);
      uVar14 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar11 = uVar14 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar11;
    FUN_1456bbb8c(uVar14,L"CombinedCustomColor",&local_88,0);
    iVar7 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar7 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar7 + 1U) {
      FUN_14472c0f6(lVar6,iVar7);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar7 * 8) = uVar14;
    *(int *)(uVar14 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    param_1[5] = uVar14;
  }
  if (local_99 != '\0') {
    local_64 = 0x100000000;
    uStack_5c = 0;
    uStack_58 = 1;
    uStack_56 = 0;
    uStack_55 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    local_68 = CONCAT31(local_68._1_3_,1);
    FUN_1401a4871(param_2,uVar12);
  }
  if (DAT_14cafe420 == '\x01') {
    local_64 = 0x100000000;
    uStack_5c = 0;
    uStack_58 = 1;
    uStack_56 = 0;
    uStack_55 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0x3f80000000000000;
    local_68 = CONCAT31(local_68._1_3_,1);
    FUN_1401a4871(param_2,param_1[5]);
  }
LAB_1417714b4:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141771646 FUN_141771646 body=512 status=ok
// SIG undefined FUN_141771646(void)

void FUN_141771646(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined4 local_55;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 local_4e;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_3 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = *(longlong *)(param_2 + 0x18);
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)(param_2 + 8);
  }
  else {
    if (*(char *)(param_2 + 0x30) != '\x01') {
      if ((*(char *)(lVar3 + 0x92) == '\x04') || (*(char *)(lVar3 + 0x92) == '\x01')) {
        uVar6 = *(undefined2 *)(lVar3 + 0x8e);
      }
      else {
        uVar6 = 0;
      }
      uVar1 = *(undefined1 *)(lVar3 + 0x90);
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
        FUN_140023dd8((longlong *)(param_1 + 0x70),0x48);
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar4;
      puVar7[1] = *(undefined8 *)(lVar3 + 8);
      puVar7[2] = 0;
      *(undefined1 *)(puVar7 + 3) = 1;
      *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
      *puVar7 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar7 + 5) = 0;
      *(undefined1 *)((longlong)puVar7 + 0x2a) = uVar1;
      *(undefined1 *)((longlong)puVar7 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar7 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar7 + 0x2e) = uVar6;
      *(undefined1 *)(puVar7 + 6) = 0;
      *(undefined1 *)((longlong)puVar7 + 0x32) = 0;
      puVar7[7] = lVar3;
      iVar2 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
        FUN_1447568fc(param_1 + 0x198,iVar2);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar7;
      *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      param_3[1] = puVar7;
      goto LAB_14177174b;
    }
    local_57 = 0;
    local_4e = 0;
    local_55 = 0;
    uStack_51 = 0;
    uStack_50 = 0;
    local_56 = *(undefined1 *)(lVar3 + 0x90);
    if ((*(char *)(lVar3 + 0x92) == '\x04') || (*(char *)(lVar3 + 0x92) == '\x01')) {
      local_55._3_1_ = (byte)*(undefined2 *)(lVar3 + 0x8e);
      local_55 = (uint)local_55._3_1_ << 0x18;
      uStack_51 = (undefined1)((ushort)*(undefined2 *)(lVar3 + 0x8e) >> 8);
    }
    local_58 = 0x2c;
    local_48 = lVar3;
    uVar5 = FUN_144aaac76(param_1 + 0x198,param_1 + 0x70,lVar3 + 8);
  }
  param_3[1] = uVar5;
LAB_14177174b:
  *(byte *)((longlong)param_3 + 0x19) = *(byte *)(param_2 + 0x30) ^ 1;
  if (DAT_14cafe420 == '\x01') {
    param_3[2] = *(undefined8 *)(param_2 + 0x28);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141771848 FUN_141771848 body=237 status=ok
// SIG undefined FUN_141771848(void)

byte FUN_141771848(ushort *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  
  if (DAT_14c760e34 != 0) {
    lVar3 = (ulonglong)*param_1 * 0x3c;
    if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar3 + 3) & 0x10) == 0) {
      return 0;
    }
    if (((&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x20000000) == 0) {
      return 0;
    }
    if ((*(uint *)(&DAT_14ca814cc + lVar3) & 8) == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 2);
    if (((iVar1 / 0x12 & 0x80000001U) != 1) || ((iVar1 / 9 & 0x80000001U) == 1)) {
      if ((iVar1 / 0x48 & 0x80000001U) != 1) {
        return 1;
      }
      cVar2 = FUN_1449373d8();
      if (cVar2 == '\0') {
        return 0;
      }
      if (DAT_14c760e34 == 0) {
        return 0;
      }
      lVar3 = (ulonglong)*param_1 * 0x3c;
      return (byte)((uint)(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] >> 0x1d) &
             *(byte *)((longlong)&DAT_14ca814d8 + lVar3 + 3) >> 4 &
             (byte)((*(uint *)(&DAT_14ca814cc + lVar3) & 8) >> 3);
    }
  }
  return 0;
}



// FUNCTION 141771936 FUN_141771936 body=230 status=ok
// SIG undefined FUN_141771936(void)

byte FUN_141771936(ushort *param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 2);
  if ((((iVar1 / 6 & 0x80000001U) == 1) && ((iVar1 / 3 & 0x80000001U) != 1)) ||
     (((iVar1 / 0xc & 0x80000001U) == 1 && (cVar2 = FUN_1449373d8(), cVar2 == '\0')))) {
LAB_141771a18:
    bVar3 = 0;
  }
  else {
    if ((iVar1 / 0x18 & 0x80000001U) == 1) {
      cVar2 = FUN_144937519();
      if (cVar2 == '\0') {
        return 0;
      }
      if (DAT_14c760e34 == 0) {
        return 0;
      }
    }
    else if (DAT_14c760e34 == 0) goto LAB_141771a18;
    lVar4 = (ulonglong)*param_1 * 0x3c;
    bVar3 = (byte)((uint)(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] >> 0x1d) &
            *(byte *)((longlong)&DAT_14ca814d8 + lVar4 + 3) >> 4 &
            (byte)((*(uint *)(&DAT_14ca814cc + lVar4) & 8) >> 3);
  }
  return bVar3;
}



// FUNCTION 141771a1c FUN_141771a1c body=362 status=ok
// SIG undefined FUN_141771a1c(void)

undefined8 FUN_141771a1c(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_1 + 2);
  uVar8 = uVar9 + 7;
  uVar2 = uVar9 + 0xf;
  uVar3 = uVar9 + 0x1f;
  uVar4 = uVar9 + 0x3f;
  uVar5 = uVar9 + 0x7f;
  if (-1 < (int)uVar9) {
    uVar8 = uVar9;
    uVar2 = uVar9;
    uVar3 = uVar9;
    uVar4 = uVar9;
    uVar5 = uVar9;
  }
  if ((*(uint *)(&DAT_14ca814cc + (ulonglong)*param_1 * 0x3c) & 2) != 0) {
    uVar1 = uVar9 + 3;
    if (-1 < (int)uVar9) {
      uVar1 = uVar9;
    }
    if (((((*(uint *)(&DAT_14ca814cc + (ulonglong)*param_1 * 0x3c) & 1) != 0 ||
           ((int)uVar9 / 2 & 0x80000001U) != 1) &&
         (((int)uVar1 >> 2 & 0x80000001U) != 1 || (uVar9 & 0x80000001) == 1)) &&
        ((uVar9 = (int)uVar3 >> 5 & 0x80000001, uVar9 != 1 ||
         ((cVar6 = FUN_1449373d8(), cVar6 != '\0' &&
          ((*(ulonglong *)(param_1 + 0x1c) & 0x400000001) != 0)))))) &&
       ((((int)uVar4 >> 6 & 0x80000001U) != 1 ||
        ((cVar6 = FUN_144937519(), cVar6 != '\0' &&
         ((*(ulonglong *)(param_1 + 0x1c) & 0x800000001) != 0 && uVar9 != 1)))))) {
      uVar9 = (int)uVar8 >> 3 & 0x80000001;
      uVar8 = (int)uVar2 >> 4 & 0x80000001;
      if (((((int)uVar5 >> 7 & 0x80000001U) != 1) ||
          (((param_1[0x1c] & 1) != 0 && uVar9 != 1) && uVar8 != 1)) &&
         (cVar6 = FUN_14011a2c8(param_1 + 8,uVar9 == 1,uVar8 == 1,1), cVar6 != '\0')) {
        uVar7 = FUN_1402a6a64(param_1);
        return uVar7;
      }
    }
  }
  return 0;
}



// FUNCTION 141771b86 FUN_141771b86 body=499 status=ok
// SIG undefined FUN_141771b86(void)

byte FUN_141771b86(ushort *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  uVar7 = *(uint *)(param_1 + 2);
  uVar10 = uVar7 + 3;
  uVar11 = uVar7 + 0xf;
  uVar2 = uVar7 + 0x1f;
  uVar8 = uVar7 + 0x3f;
  uVar3 = uVar7 + 0x7f;
  if (-1 < (int)uVar7) {
    uVar10 = uVar7;
    uVar11 = uVar7;
    uVar2 = uVar7;
    uVar8 = uVar7;
    uVar3 = uVar7;
  }
  lVar9 = (ulonglong)*param_1 * 0x3c;
  if ((*(uint *)(&DAT_14ca814cc + lVar9) & 2) != 0) {
    uVar6 = (int)uVar11 >> 4 & 0x80000001;
    uVar11 = uVar7 + 7;
    if (-1 < (int)uVar7) {
      uVar11 = uVar7;
    }
    if ((((((int)uVar11 >> 3 & 0x80000001U) != 1 || (uVar7 & 0x80000001) != 1) || uVar6 == 1) &&
        ((uVar11 = (int)uVar7 / 2 & 0x80000001, uVar11 != 1 ||
         ((*(byte *)((longlong)&DAT_14ca814d0 + lVar9 + 1) & 2) != 0)))) &&
       ((uVar10 = (int)uVar10 >> 2 & 0x80000001, uVar10 != 1 ||
        ((*(uint *)(&DAT_14ca814cc + lVar9) & 1) != 0)))) {
      uVar11 = uVar11 ^ 1;
      bVar5 = 0;
      if ((uVar10 == 1 && uVar11 == 0) || (uVar6 == 1 && (uVar7 & 0x80000001) != 1))
      goto LAB_141771c5d;
      uVar7 = (int)uVar8 >> 6 & 0x80000001;
      uVar8 = (int)uVar3 >> 7 & 0x80000001;
      if ((uVar7 == 1 && uVar11 == 0) &&
         (((uint)(&DAT_14ca814d8)[(ulonglong)*param_1 * 0xf] >> 0x16 & 1) == 0)) {
        uVar11 = (uint)(&DAT_14ca814d8)[(ulonglong)*param_1 * 0xf] >> 0x17;
        if (((byte)uVar11 & 3) == 2) {
          if (uVar8 != 1) goto LAB_141771c5b;
        }
        else if ((uVar11 & 3) == 0) goto LAB_141771cac;
      }
      else {
LAB_141771cac:
        if (uVar8 == 1) goto LAB_141771c5b;
      }
      uVar11 = (int)uVar2 >> 5 & 0x80000001;
      cVar4 = FUN_14011a2c8(param_1 + 8,CONCAT31((int3)(uVar11 >> 8),uVar11 == 1),
                            CONCAT31((int3)(uVar8 >> 8),uVar7 == 1),0x80000001);
      bVar5 = 0;
      if ((cVar4 != '\0') && (DAT_14c760e34 != 0)) {
        lVar9 = (ulonglong)*param_1 * 0x3c;
        bVar5 = 0;
        if (((*(byte *)((longlong)&DAT_14ca814d8 + lVar9 + 3) & 0x10) != 0) &&
           (((((&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] & 0x20000000) != 0 &&
             ((*(uint *)(&DAT_14ca814cc + lVar9) & 8) != 0)) && (*(int *)(param_1 + 8) == 0)))) {
          uVar1 = *(ulonglong *)(param_1 + 0x1c);
          bVar5 = (uVar1 & 0x1000004) != 0 & (byte)(uVar1 >> 0x35) | (byte)uVar1;
        }
      }
      goto LAB_141771c5d;
    }
  }
LAB_141771c5b:
  bVar5 = 0;
LAB_141771c5d:
  return bVar5 & 1;
}



// FUNCTION 141771d7a FUN_141771d7a body=92 status=ok
// SIG undefined FUN_141771d7a(void)

undefined8 * FUN_141771d7a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a299150;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141771dd6 FUN_141771dd6 body=40 status=ok
// SIG undefined FUN_141771dd6(void)

undefined8 FUN_141771dd6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141771dfe FUN_141771dfe body=40 status=ok
// SIG undefined FUN_141771dfe(void)

undefined8 FUN_141771dfe(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141771e26 FUN_141771e26 body=40 status=ok
// SIG undefined FUN_141771e26(void)

undefined8 FUN_141771e26(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141771e4e FUN_141771e4e body=40 status=ok
// SIG undefined FUN_141771e4e(void)

undefined8 FUN_141771e4e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141771e76 FUN_141771e76 body=40 status=ok
// SIG undefined FUN_141771e76(void)

undefined8 FUN_141771e76(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141771e9e FUN_141771e9e body=40 status=ok
// SIG undefined FUN_141771e9e(void)

undefined8 FUN_141771e9e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141771ec6 FUN_141771ec6 body=40 status=ok
// SIG undefined FUN_141771ec6(void)

undefined8 FUN_141771ec6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141771eee FUN_141771eee body=40 status=ok
// SIG undefined FUN_141771eee(void)

undefined8 FUN_141771eee(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141771f16 FUN_141771f16 body=40 status=ok
// SIG undefined FUN_141771f16(void)

undefined8 FUN_141771f16(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141771f3e FUN_141771f3e body=40 status=ok
// SIG undefined FUN_141771f3e(void)

undefined8 FUN_141771f3e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141771f66 FUN_141771f66 body=40 status=ok
// SIG undefined FUN_141771f66(void)

undefined8 FUN_141771f66(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141771f8e FUN_141771f8e body=40 status=ok
// SIG undefined FUN_141771f8e(void)

undefined8 FUN_141771f8e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141771fb6 FUN_141771fb6 body=304 status=ok
// SIG undefined FUN_141771fb6(void)

void FUN_141771fb6(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141772017;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
    }
  }
LAB_141772017:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,4);
  }
  return;
}



// FUNCTION 1417720e6 FUN_1417720e6 body=40 status=ok
// SIG undefined FUN_1417720e6(void)

undefined8 FUN_1417720e6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177210e FUN_14177210e body=40 status=ok
// SIG undefined FUN_14177210e(void)

undefined8 FUN_14177210e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141772136 FUN_141772136 body=90 status=ok
// SIG undefined FUN_141772136(void)

undefined8 * FUN_141772136(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a29a3c0;
  if (param_1[0x3c] != 0) {
    plVar1 = param_1 + 0x40;
    if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141772190 FUN_141772190 body=40 status=ok
// SIG undefined FUN_141772190(void)

undefined8 FUN_141772190(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417721b8 FUN_1417721b8 body=341 status=ok
// SIG undefined FUN_1417721b8(void)

longlong FUN_1417721b8(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x68) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x60) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (lVar3 != 0) {
    piVar4 = (int *)((lVar3 + -8) - (ulonglong)*(uint *)(lVar3 + -8));
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        lVar3 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar3 = FUN_145bdc178();
        }
        FUN_140028df4(lVar3,piVar4);
      }
      else {
        FUN_144705e74(piVar4);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    piVar4 = (int *)((lVar3 + -8) - (ulonglong)*(uint *)(lVar3 + -8));
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        lVar3 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar3 = FUN_145bdc178();
        }
        FUN_140028df4(lVar3,piVar4);
      }
      else {
        FUN_144705e74(piVar4);
      }
    }
  }
  FUN_140020148(param_1 + 0x28);
  FUN_140020148(param_1 + 0x18);
  FUN_140020148(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177230e FUN_14177230e body=201 status=ok
// SIG undefined FUN_14177230e(void)

undefined8 * FUN_14177230e(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417723d8 FUN_1417723d8 body=40 status=ok
// SIG undefined FUN_1417723d8(void)

undefined8 FUN_1417723d8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141772400 FUN_141772400 body=90 status=ok
// SIG undefined FUN_141772400(void)

undefined8 * FUN_141772400(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a29a630;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177245a FUN_14177245a body=90 status=ok
// SIG undefined FUN_14177245a(void)

undefined8 * FUN_14177245a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a29a670;
  if (param_1[0x3c] != 0) {
    plVar1 = param_1 + 0x40;
    if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417724b4 FUN_1417724b4 body=90 status=ok
// SIG undefined FUN_1417724b4(void)

undefined8 * FUN_1417724b4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a29a6c0;
  if (param_1[0x3c] != 0) {
    plVar1 = param_1 + 0x40;
    if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14177250e FUN_14177250e body=90 status=ok
// SIG undefined FUN_14177250e(void)

undefined8 * FUN_14177250e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a29a710;
  if (param_1[0x3c] != 0) {
    plVar1 = param_1 + 0x40;
    if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141772568 FUN_141772568 body=287 status=ok
// SIG undefined FUN_141772568(void)

undefined8 * FUN_141772568(int param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  if (DAT_14c760e34 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2) * 0x3c;
    puVar4 = (undefined8 *)0x0;
    if ((((*(byte *)((longlong)&DAT_14ca814d8 + lVar3 + 3) & 0x10) != 0) &&
        (((&DAT_14ca814c8)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2) * 0xf] &
         0x20000000) != 0)) && ((*(uint *)(&DAT_14ca814cc + lVar3) & 8) != 0)) {
      puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar5 = 0xffffffff;
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 == 2)))) {
        uVar1 = (&DAT_14c9c0cec)[2 < param_1];
        if (0 < (int)uVar1) {
          puVar6 = (undefined8 *)(&DAT_14cafe438 + (ulonglong)(2 < param_1) * 0x540);
          uVar7 = 0;
          do {
            iVar2 = wcscmp((wchar_t *)*puVar6,L"NaniteMesh");
            if (iVar2 == 0) {
              uVar5 = (undefined4)uVar7;
              break;
            }
            uVar7 = uVar7 + 1;
            puVar6 = puVar6 + 2;
          } while (uVar1 != uVar7);
        }
      }
      *(undefined4 *)(puVar4 + 1) = uVar5;
      *puVar4 = &PTR_FUN_14a29f550;
      *(int *)(puVar4 + 2) = param_1;
    }
  }
  return puVar4;
}


