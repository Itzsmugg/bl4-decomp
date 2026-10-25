// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1492be6bc FUN_1492be6bc body=63 status=ok
// SIG undefined FUN_1492be6bc(void)

undefined1 FUN_1492be6bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492bea42(param_2,param_3);
    param_3 = param_3 + 0x410;
    param_2 = param_2 + 0x410;
  }
  return 1;
}



// FUNCTION 1492be724 FUN_1492be724 body=59 status=ok
// SIG undefined FUN_1492be724(void)

undefined8 FUN_1492be724(longlong *param_1)

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



// FUNCTION 1492be770 FUN_1492be770 body=40 status=ok
// SIG undefined FUN_1492be770(void)

void FUN_1492be770(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x410) == '\x01') {
    FUN_1492be9e6(param_2);
    *(undefined1 *)(param_2 + 0x410) = 0;
  }
  return;
}



// FUNCTION 1492be7e6 FUN_1492be7e6 body=473 status=ok
// SIG undefined FUN_1492be7e6(void)

undefined8 * FUN_1492be7e6(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14bc01310;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  memset(param_1 + 0x6f,0,0x90);
  param_1[0x42] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x40] = DAT_14c8464e0;
  param_1[0x41] = uVar1;
  param_1[0x45] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x43] = DAT_14c8464e0;
  param_1[0x44] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x46] = DAT_14c8464e0;
  param_1[0x47] = uVar1;
  param_1[0x48] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x49] = DAT_14c8464e0;
  param_1[0x4a] = uVar1;
  param_1[0x4b] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0xc;
  param_1[0x4e] = 0x3ff0000000000000;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x54] = DAT_14c8464e0;
  param_1[0x55] = uVar1;
  param_1[0x56] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5a) = 1;
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
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x3f800000;
  param_1[0x5d] = &DAT_3f8000003f800000;
  param_1[0x5e] = 0x3f80000000000000;
  param_1[0x5f] = 0x3f800000;
  param_1[0x60] = 0x3f80000000000000;
  param_1[0x62] = uVar1;
  param_1[99] = uVar2;
  param_1[100] = uVar3;
  param_1[0x65] = uVar4;
  param_1[0x66] = uVar5;
  param_1[0x67] = uVar6;
  param_1[0x68] = uVar7;
  param_1[0x69] = uVar8;
  param_1[0x6a] = uVar9;
  param_1[0x6b] = uVar10;
  param_1[0x6c] = uVar11;
  param_1[0x6d] = uVar12;
  return param_1;
}



// FUNCTION 1492be9c0 FUN_1492be9c0 body=38 status=ok
// SIG undefined FUN_1492be9c0(void)

undefined8 FUN_1492be9c0(undefined8 param_1,int param_2)

{
  FUN_1492be9e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492be9e6 FUN_1492be9e6 body=91 status=ok
// SIG undefined FUN_1492be9e6(void)

void FUN_1492be9e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc01310;
  FUN_1492be06a(param_1 + 0x6e);
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492bea42 FUN_1492bea42 body=135 status=ok
// SIG undefined FUN_1492bea42(void)

longlong FUN_1492bea42(longlong param_1,longlong param_2)

{
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1444888de(param_1 + 0x1f0,param_2 + 0x1f0);
  memcpy((void *)(param_1 + 0x200),(void *)(param_2 + 0x200),0xb8);
  FUN_1492be5ba(param_1 + 0x2b8,param_2 + 0x2b8);
  memcpy((void *)(param_1 + 0x2c8),(void *)(param_2 + 0x2c8),0xa8);
  FUN_1492be100(param_1 + 0x370,param_2 + 0x370);
  return param_1;
}



// FUNCTION 1492beafe FUN_1492beafe body=63 status=ok
// SIG undefined FUN_1492beafe(void)

undefined1 FUN_1492beafe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492bee84(param_2,param_3);
    param_3 = param_3 + 0x410;
    param_2 = param_2 + 0x410;
  }
  return 1;
}



// FUNCTION 1492beb66 FUN_1492beb66 body=59 status=ok
// SIG undefined FUN_1492beb66(void)

undefined8 FUN_1492beb66(longlong *param_1)

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



// FUNCTION 1492bebb2 FUN_1492bebb2 body=40 status=ok
// SIG undefined FUN_1492bebb2(void)

void FUN_1492bebb2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x410) == '\x01') {
    FUN_1492bee28(param_2);
    *(undefined1 *)(param_2 + 0x410) = 0;
  }
  return;
}



// FUNCTION 1492bec28 FUN_1492bec28 body=473 status=ok
// SIG undefined FUN_1492bec28(void)

undefined8 * FUN_1492bec28(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14bc01500;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  memset(param_1 + 0x6f,0,0x90);
  param_1[0x42] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x40] = DAT_14c8464e0;
  param_1[0x41] = uVar1;
  param_1[0x45] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x43] = DAT_14c8464e0;
  param_1[0x44] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x46] = DAT_14c8464e0;
  param_1[0x47] = uVar1;
  param_1[0x48] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x49] = DAT_14c8464e0;
  param_1[0x4a] = uVar1;
  param_1[0x4b] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0xc;
  param_1[0x4e] = 0x3ff0000000000000;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x54] = DAT_14c8464e0;
  param_1[0x55] = uVar1;
  param_1[0x56] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5a) = 1;
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
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x3f800000;
  param_1[0x5d] = &DAT_3f8000003f800000;
  param_1[0x5e] = 0x3f80000000000000;
  param_1[0x5f] = 0x3f800000;
  param_1[0x60] = 0x3f80000000000000;
  param_1[0x62] = uVar1;
  param_1[99] = uVar2;
  param_1[100] = uVar3;
  param_1[0x65] = uVar4;
  param_1[0x66] = uVar5;
  param_1[0x67] = uVar6;
  param_1[0x68] = uVar7;
  param_1[0x69] = uVar8;
  param_1[0x6a] = uVar9;
  param_1[0x6b] = uVar10;
  param_1[0x6c] = uVar11;
  param_1[0x6d] = uVar12;
  return param_1;
}



// FUNCTION 1492bee02 FUN_1492bee02 body=38 status=ok
// SIG undefined FUN_1492bee02(void)

undefined8 FUN_1492bee02(undefined8 param_1,int param_2)

{
  FUN_1492bee28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bee28 FUN_1492bee28 body=91 status=ok
// SIG undefined FUN_1492bee28(void)

void FUN_1492bee28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc01500;
  FUN_1492be06a(param_1 + 0x6e);
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492bee84 FUN_1492bee84 body=135 status=ok
// SIG undefined FUN_1492bee84(void)

longlong FUN_1492bee84(longlong param_1,longlong param_2)

{
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1444888de(param_1 + 0x1f0,param_2 + 0x1f0);
  memcpy((void *)(param_1 + 0x200),(void *)(param_2 + 0x200),0xb8);
  FUN_1492be5ba(param_1 + 0x2b8,param_2 + 0x2b8);
  memcpy((void *)(param_1 + 0x2c8),(void *)(param_2 + 0x2c8),0xa8);
  FUN_1492be100(param_1 + 0x370,param_2 + 0x370);
  return param_1;
}



// FUNCTION 1492bef9c FUN_1492bef9c body=39 status=ok
// SIG undefined FUN_1492bef9c(void)

undefined8 FUN_1492bef9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1492befec FUN_1492befec body=59 status=ok
// SIG undefined FUN_1492befec(void)

undefined8 FUN_1492befec(longlong *param_1)

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



// FUNCTION 1492bf0c2 FUN_1492bf0c2 body=54 status=ok
// SIG undefined FUN_1492bf0c2(void)

undefined1 FUN_1492bf0c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492ad734(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1492bf120 FUN_1492bf120 body=59 status=ok
// SIG undefined FUN_1492bf120(void)

undefined8 FUN_1492bf120(longlong *param_1)

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



// FUNCTION 1492bf166 FUN_1492bf166 body=37 status=ok
// SIG undefined FUN_1492bf166(void)

void FUN_1492bf166(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1492bf210 FUN_1492bf210 body=165 status=ok
// SIG undefined FUN_1492bf210(void)

undefined8 FUN_1492bf210(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      lVar1 = param_2 + lVar4;
      lVar2 = param_3 + lVar4;
      FUN_1491c05d4(lVar1 + 0x10,lVar2 + 0x10);
      FUN_1492bf3c6(param_2 + lVar4 + 0x1f0,param_3 + lVar4 + 0x1f0);
      uVar3 = *(undefined8 *)(lVar2 + 0x205);
      *(undefined8 *)(lVar1 + 0x200) = *(undefined8 *)(lVar2 + 0x200);
      *(undefined8 *)(lVar1 + 0x205) = uVar3;
      FUN_1492ad734(param_2 + lVar4 + 0x210,param_3 + lVar4 + 0x210);
      lVar4 = lVar4 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492bf2de FUN_1492bf2de body=59 status=ok
// SIG undefined FUN_1492bf2de(void)

undefined8 FUN_1492bf2de(longlong *param_1)

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



// FUNCTION 1492bf32a FUN_1492bf32a body=40 status=ok
// SIG undefined FUN_1492bf32a(void)

void FUN_1492bf32a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_146713d7e(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 1492bf3a0 FUN_1492bf3a0 body=38 status=ok
// SIG undefined FUN_1492bf3a0(void)

undefined8 FUN_1492bf3a0(undefined8 param_1,int param_2)

{
  FUN_146713d7e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bf3c6 FUN_1492bf3c6 body=85 status=ok
// SIG undefined FUN_1492bf3c6(void)

undefined8 * FUN_1492bf3c6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492bf41c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x70);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492bf41c FUN_1492bf41c body=111 status=ok
// SIG undefined FUN_1492bf41c(void)

void FUN_1492bf41c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1492bf524 FUN_1492bf524 body=39 status=ok
// SIG undefined FUN_1492bf524(void)

undefined8 FUN_1492bf524(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1492bf574 FUN_1492bf574 body=59 status=ok
// SIG undefined FUN_1492bf574(void)

undefined8 FUN_1492bf574(longlong *param_1)

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



// FUNCTION 1492bf64a FUN_1492bf64a body=54 status=ok
// SIG undefined FUN_1492bf64a(void)

undefined1 FUN_1492bf64a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492ad734(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1492bf6a8 FUN_1492bf6a8 body=59 status=ok
// SIG undefined FUN_1492bf6a8(void)

undefined8 FUN_1492bf6a8(longlong *param_1)

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



// FUNCTION 1492bf6ee FUN_1492bf6ee body=37 status=ok
// SIG undefined FUN_1492bf6ee(void)

void FUN_1492bf6ee(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1492bf798 FUN_1492bf798 body=165 status=ok
// SIG undefined FUN_1492bf798(void)

undefined8 FUN_1492bf798(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      lVar1 = param_2 + lVar4;
      lVar2 = param_3 + lVar4;
      FUN_1491c05d4(lVar1 + 0x10,lVar2 + 0x10);
      FUN_1492bfafc(param_2 + lVar4 + 0x1f0,param_3 + lVar4 + 0x1f0);
      uVar3 = *(undefined8 *)(lVar2 + 0x205);
      *(undefined8 *)(lVar1 + 0x200) = *(undefined8 *)(lVar2 + 0x200);
      *(undefined8 *)(lVar1 + 0x205) = uVar3;
      FUN_1492ad734(param_2 + lVar4 + 0x210,param_3 + lVar4 + 0x210);
      lVar4 = lVar4 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492bf866 FUN_1492bf866 body=59 status=ok
// SIG undefined FUN_1492bf866(void)

undefined8 FUN_1492bf866(longlong *param_1)

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



// FUNCTION 1492bf8b2 FUN_1492bf8b2 body=40 status=ok
// SIG undefined FUN_1492bf8b2(void)

void FUN_1492bf8b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_1492bfaac(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 1492bf928 FUN_1492bf928 body=206 status=ok
// SIG undefined FUN_1492bf928(void)

undefined8 * FUN_1492bf928(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bc01f20;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x20c) = 2;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 1;
  FUN_1492bfa1c(param_1 + 0x3e,0);
  puVar1 = (undefined1 *)param_1[0x3e];
  *puVar1 = 1;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x24) = 0;
  *(undefined4 *)(puVar1 + 0x28) = 0;
  *(undefined4 *)(puVar1 + 0x2c) = 0x3ff00000;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)(puVar1 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)(puVar1 + 0x60) = 0x3ff0000000000000;
  *(undefined8 *)(puVar1 + 0x68) = 0;
  puVar1 = (undefined1 *)param_1[0x3e];
  *puVar1 = 1;
  *(undefined8 *)(puVar1 + 4) = 0;
  return param_1;
}



// FUNCTION 1492bf9f6 FUN_1492bf9f6 body=38 status=ok
// SIG undefined FUN_1492bf9f6(void)

undefined8 FUN_1492bf9f6(undefined8 param_1,int param_2)

{
  FUN_1492bfaac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492bfa1c FUN_1492bfa1c body=143 status=ok
// SIG undefined FUN_1492bfa1c(void)

void FUN_1492bfa1c(longlong param_1,int param_2)

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



// FUNCTION 1492bfaac FUN_1492bfaac body=79 status=ok
// SIG undefined FUN_1492bfaac(void)

void FUN_1492bfaac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc01f20;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492bfafc FUN_1492bfafc body=85 status=ok
// SIG undefined FUN_1492bfafc(void)

undefined8 * FUN_1492bfafc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492bfb52(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x70);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492bfb52 FUN_1492bfb52 body=111 status=ok
// SIG undefined FUN_1492bfb52(void)

void FUN_1492bfb52(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1492bfc28 FUN_1492bfc28 body=54 status=ok
// SIG undefined FUN_1492bfc28(void)

undefined1 FUN_1492bfc28(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492bfd3c(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 1492bfc86 FUN_1492bfc86 body=59 status=ok
// SIG undefined FUN_1492bfc86(void)

undefined8 FUN_1492bfc86(longlong *param_1)

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



// FUNCTION 1492bfccc FUN_1492bfccc body=34 status=ok
// SIG undefined FUN_1492bfccc(void)

void FUN_1492bfccc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_145af376e(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1492bfd3c FUN_1492bfd3c body=91 status=ok
// SIG undefined FUN_1492bfd3c(void)

longlong FUN_1492bfd3c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_1492ad734();
  FUN_1492bd200(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_1492bfdf8(param_1 + 0x48,param_2 + 0x48);
  FUN_1492bfd98(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 1492bfd98 FUN_1492bfd98 body=95 status=ok
// SIG undefined FUN_1492bfd98(void)

undefined8 * FUN_1492bfd98(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145af37b3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1492bffca(param_1,iVar1);
      FUN_1492c002c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1492bfdf8 FUN_1492bfdf8 body=95 status=ok
// SIG undefined FUN_1492bfdf8(void)

undefined8 * FUN_1492bfdf8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145af382b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1492bfe58(param_1,iVar1);
      FUN_1492bfecb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1492bfe58 FUN_1492bfe58 body=115 status=ok
// SIG undefined FUN_1492bfe58(void)

void FUN_1492bfe58(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492bfecb FUN_1492bfecb body=52 status=ok
// SIG undefined FUN_1492bfecb(void)

void FUN_1492bfecb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1492bff00(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 1492bff00 FUN_1492bff00 body=101 status=ok
// SIG undefined FUN_1492bff00(void)

longlong FUN_1492bff00(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1492bff66();
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(int *)(param_1 + 0x40) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    FUN_1492bfe58((undefined8 *)(param_1 + 0x38),iVar1,0);
    FUN_1492bfecb(*(undefined8 *)(param_1 + 0x38),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1492bff66 FUN_1492bff66 body=100 status=ok
// SIG undefined FUN_1492bff66(void)

undefined8 * FUN_1492bff66(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1492bd260(param_1,iVar1,0);
    FUN_1492bd2d3(*param_1,uVar2,iVar1);
  }
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return param_1;
}



// FUNCTION 1492bffca FUN_1492bffca body=98 status=ok
// SIG undefined FUN_1492bffca(void)

void FUN_1492bffca(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1492c002c FUN_1492c002c body=175 status=ok
// SIG undefined FUN_1492c002c(void)

void FUN_1492c002c(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if (param_3 != 0) {
    puVar12 = (undefined8 *)(param_1 + 0x50);
    do {
      puVar10 = param_2;
      puVar11 = puVar12 + -10;
      for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      *(undefined4 *)(puVar12 + -1) = *(undefined4 *)(param_2 + 9);
      *puVar12 = 0;
      iVar1 = *(int *)(param_2 + 0xb);
      _Src = (void *)param_2[10];
      *(int *)(puVar12 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(puVar12,iVar1,0);
        memcpy((void *)*puVar12,_Src,(longlong)iVar1 << 2);
      }
      uVar2 = *(undefined4 *)(param_2 + 0xc);
      uVar3 = *(undefined4 *)((longlong)param_2 + 100);
      uVar4 = *(undefined4 *)(param_2 + 0xd);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x6c);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x74);
      uVar7 = *(undefined4 *)(param_2 + 0xf);
      uVar8 = *(undefined4 *)((longlong)param_2 + 0x7c);
      *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(param_2 + 0xe);
      *(undefined4 *)((longlong)puVar12 + 0x24) = uVar6;
      *(undefined4 *)(puVar12 + 5) = uVar7;
      *(undefined4 *)((longlong)puVar12 + 0x2c) = uVar8;
      *(undefined4 *)(puVar12 + 2) = uVar2;
      *(undefined4 *)((longlong)puVar12 + 0x14) = uVar3;
      *(undefined4 *)(puVar12 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar5;
      param_2 = param_2 + 0x10;
      puVar12 = puVar12 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1492c015c FUN_1492c015c body=59 status=ok
// SIG undefined FUN_1492c015c(void)

undefined8 FUN_1492c015c(longlong *param_1)

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



// FUNCTION 1492c0232 FUN_1492c0232 body=201 status=ok
// SIG undefined FUN_1492c0232(void)

undefined8 FUN_1492c0232(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_1491c05d4(lVar1 + 0x10,lVar2 + 0x10);
      *(undefined8 *)(lVar1 + 0x1f0) = *(undefined8 *)(lVar2 + 0x1f0);
      FUN_1492c0414(param_2 + lVar3 + 0x1f8,param_3 + lVar3 + 0x1f8);
      *(undefined8 *)(lVar1 + 0x208) = *(undefined8 *)(lVar2 + 0x208);
      *(undefined4 *)(lVar1 + 0x210) = *(undefined4 *)(lVar2 + 0x210);
      FUN_1492bfd3c(param_2 + lVar3 + 0x218,param_3 + lVar3 + 0x218);
      *(undefined1 *)(lVar1 + 0x280) = *(undefined1 *)(lVar2 + 0x280);
      lVar3 = lVar3 + 0x290;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492c0324 FUN_1492c0324 body=59 status=ok
// SIG undefined FUN_1492c0324(void)

undefined8 FUN_1492c0324(longlong *param_1)

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



// FUNCTION 1492c0370 FUN_1492c0370 body=40 status=ok
// SIG undefined FUN_1492c0370(void)

void FUN_1492c0370(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x290) == '\x01') {
    FUN_145af3722(param_2);
    *(undefined1 *)(param_2 + 0x290) = 0;
  }
  return;
}



// FUNCTION 1492c03e6 FUN_1492c03e6 body=38 status=ok
// SIG undefined FUN_1492c03e6(void)

undefined8 FUN_1492c03e6(undefined8 param_1,int param_2)

{
  FUN_145af3722();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c0414 FUN_1492c0414 body=88 status=ok
// SIG undefined FUN_1492c0414(void)

undefined8 * FUN_1492c0414(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492c046c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492c046c FUN_1492c046c body=98 status=ok
// SIG undefined FUN_1492c046c(void)

void FUN_1492c046c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492c04d0 FUN_1492c04d0 body=90 status=ok
// SIG undefined FUN_1492c04d0(void)

void FUN_1492c04d0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_145af3853(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_1474ff534(param_1,0);
  }
  param_1[4] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  param_1[2] = DAT_14c8464e0;
  param_1[3] = uVar2;
  param_1[5] = 0xffffffff;
  return;
}



// FUNCTION 1492c052a FUN_1492c052a body=48 status=ok
// SIG undefined FUN_1492c052a(void)

void FUN_1492c052a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 1492c055a FUN_1492c055a body=101 status=ok
// SIG undefined FUN_1492c055a(void)

void FUN_1492c055a(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1492c05c0(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x48 + *param_1);
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[5] = 0xffffffff;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2 = puVar2 + 9;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1492c05c0 FUN_1492c05c0 body=147 status=ok
// SIG undefined FUN_1492c05c0(void)

void FUN_1492c05c0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492c06a6 FUN_1492c06a6 body=54 status=ok
// SIG undefined FUN_1492c06a6(void)

undefined1 FUN_1492c06a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492c0806(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 1492c0704 FUN_1492c0704 body=59 status=ok
// SIG undefined FUN_1492c0704(void)

undefined8 FUN_1492c0704(longlong *param_1)

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



// FUNCTION 1492c074a FUN_1492c074a body=34 status=ok
// SIG undefined FUN_1492c074a(void)

void FUN_1492c074a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1492c07ba(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1492c07ba FUN_1492c07ba body=76 status=ok
// SIG undefined FUN_1492c07ba(void)

void FUN_1492c07ba(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1492c0806 FUN_1492c0806 body=85 status=ok
// SIG undefined FUN_1492c0806(void)

undefined4 * FUN_1492c0806(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_144a67f5c(param_1 + 2,param_2 + 2);
  FUN_1492ad734(param_1 + 6,param_2 + 6);
  FUN_144756208(param_1 + 10,param_2 + 10);
  FUN_144756208(param_1 + 0xe,param_2 + 0xe);
  return param_1;
}



// FUNCTION 1492c085c FUN_1492c085c body=102 status=ok
// SIG undefined FUN_1492c085c(void)

void FUN_1492c085c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bc02720;
  *(undefined4 *)(param_2 + 0x41) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  *(undefined1 *)((longlong)param_2 + 0x204) = 1;
  return;
}



// FUNCTION 1492c08c2 FUN_1492c08c2 body=102 status=ok
// SIG undefined FUN_1492c08c2(void)

void FUN_1492c08c2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bc02720;
  *(undefined4 *)(param_2 + 0x41) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  *(undefined1 *)((longlong)param_2 + 0x204) = 1;
  return;
}



// FUNCTION 1492c094c FUN_1492c094c body=113 status=ok
// SIG undefined FUN_1492c094c(void)

undefined8 FUN_1492c094c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x208;
    param_2 = param_2 + 0x208;
    do {
      FUN_1491c05d4(param_2 + -0x1f8,param_3 + -0x1f8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      *(undefined8 *)(param_2 + -0xb) = *(undefined8 *)(param_3 + -0xb);
      FUN_1492c0806(param_2,param_3);
      param_3 = param_3 + 0x250;
      param_2 = param_2 + 0x250;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492c09e6 FUN_1492c09e6 body=59 status=ok
// SIG undefined FUN_1492c09e6(void)

undefined8 FUN_1492c09e6(longlong *param_1)

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



// FUNCTION 1492c0a32 FUN_1492c0a32 body=73 status=ok
// SIG undefined FUN_1492c0a32(void)

void FUN_1492c0a32(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *param_2 = &PTR_FUN_14bc02720;
    FUN_1492c07ba(param_2 + 0x41);
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x4a) = 0;
  }
  return;
}



// FUNCTION 1492c0aca FUN_1492c0aca body=74 status=ok
// SIG undefined FUN_1492c0aca(void)

undefined8 * FUN_1492c0aca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc02720;
  FUN_1492c07ba(param_1 + 0x41);
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c0b16 FUN_1492c0b16 body=102 status=ok
// SIG undefined FUN_1492c0b16(void)

void FUN_1492c0b16(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bc02910;
  *(undefined4 *)(param_2 + 0x41) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  *(undefined1 *)((longlong)param_2 + 0x204) = 1;
  return;
}



// FUNCTION 1492c0b7c FUN_1492c0b7c body=102 status=ok
// SIG undefined FUN_1492c0b7c(void)

void FUN_1492c0b7c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bc02910;
  *(undefined4 *)(param_2 + 0x41) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  *(undefined1 *)((longlong)param_2 + 0x204) = 1;
  return;
}



// FUNCTION 1492c0c06 FUN_1492c0c06 body=165 status=ok
// SIG undefined FUN_1492c0c06(void)

undefined8 FUN_1492c0c06(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_1491c05d4(lVar1 + 0x10,lVar2 + 0x10);
      FUN_1444888de(param_2 + lVar3 + 0x1f0,param_3 + lVar3 + 0x1f0);
      *(undefined4 *)(lVar1 + 0x200) = *(undefined4 *)(lVar2 + 0x200);
      *(undefined1 *)(lVar1 + 0x204) = *(undefined1 *)(lVar2 + 0x204);
      FUN_1492c0806(param_2 + lVar3 + 0x208,param_3 + lVar3 + 0x208);
      lVar3 = lVar3 + 0x250;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492c0cd4 FUN_1492c0cd4 body=59 status=ok
// SIG undefined FUN_1492c0cd4(void)

undefined8 FUN_1492c0cd4(longlong *param_1)

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



// FUNCTION 1492c0d20 FUN_1492c0d20 body=40 status=ok
// SIG undefined FUN_1492c0d20(void)

void FUN_1492c0d20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x250) == '\x01') {
    FUN_1492c0dbc(param_2);
    *(undefined1 *)(param_2 + 0x250) = 0;
  }
  return;
}



// FUNCTION 1492c0d96 FUN_1492c0d96 body=38 status=ok
// SIG undefined FUN_1492c0d96(void)

undefined8 FUN_1492c0d96(undefined8 param_1,int param_2)

{
  FUN_1492c0dbc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c0dbc FUN_1492c0dbc body=74 status=ok
// SIG undefined FUN_1492c0dbc(void)

void FUN_1492c0dbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc02910;
  FUN_1492c07ba(param_1 + 0x41);
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492c0e08 FUN_1492c0e08 body=102 status=ok
// SIG undefined FUN_1492c0e08(void)

void FUN_1492c0e08(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bc02b00;
  *(undefined4 *)(param_2 + 0x41) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  *(undefined1 *)((longlong)param_2 + 0x204) = 1;
  return;
}



// FUNCTION 1492c0e6e FUN_1492c0e6e body=102 status=ok
// SIG undefined FUN_1492c0e6e(void)

void FUN_1492c0e6e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bc02b00;
  *(undefined4 *)(param_2 + 0x41) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  *(undefined1 *)((longlong)param_2 + 0x204) = 1;
  return;
}



// FUNCTION 1492c0ef8 FUN_1492c0ef8 body=165 status=ok
// SIG undefined FUN_1492c0ef8(void)

undefined8 FUN_1492c0ef8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_1491c05d4(lVar1 + 0x10,lVar2 + 0x10);
      FUN_1444888de(param_2 + lVar3 + 0x1f0,param_3 + lVar3 + 0x1f0);
      *(undefined4 *)(lVar1 + 0x200) = *(undefined4 *)(lVar2 + 0x200);
      *(undefined1 *)(lVar1 + 0x204) = *(undefined1 *)(lVar2 + 0x204);
      FUN_1492c0806(param_2 + lVar3 + 0x208,param_3 + lVar3 + 0x208);
      lVar3 = lVar3 + 0x250;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492c0fc6 FUN_1492c0fc6 body=59 status=ok
// SIG undefined FUN_1492c0fc6(void)

undefined8 FUN_1492c0fc6(longlong *param_1)

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



// FUNCTION 1492c1012 FUN_1492c1012 body=40 status=ok
// SIG undefined FUN_1492c1012(void)

void FUN_1492c1012(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x250) == '\x01') {
    FUN_149271bba(param_2);
    *(undefined1 *)(param_2 + 0x250) = 0;
  }
  return;
}



// FUNCTION 1492c108a FUN_1492c108a body=38 status=ok
// SIG undefined FUN_1492c108a(void)

undefined8 FUN_1492c108a(undefined8 param_1,int param_2)

{
  FUN_149271bba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c1124 FUN_1492c1124 body=59 status=ok
// SIG undefined FUN_1492c1124(void)

undefined8 FUN_1492c1124(longlong *param_1)

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



// FUNCTION 1492c1250 FUN_1492c1250 body=59 status=ok
// SIG undefined FUN_1492c1250(void)

undefined8 FUN_1492c1250(longlong *param_1)

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



// FUNCTION 1492c138e FUN_1492c138e body=59 status=ok
// SIG undefined FUN_1492c138e(void)

undefined8 FUN_1492c138e(longlong *param_1)

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



// FUNCTION 1492c1464 FUN_1492c1464 body=110 status=ok
// SIG undefined FUN_1492c1464(void)

undefined8 FUN_1492c1464(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0x199);
      lVar1 = lVar1 + 0x390;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492c14fa FUN_1492c14fa body=59 status=ok
// SIG undefined FUN_1492c14fa(void)

undefined8 FUN_1492c14fa(longlong *param_1)

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



// FUNCTION 1492c1546 FUN_1492c1546 body=49 status=ok
// SIG undefined FUN_1492c1546(void)

void FUN_1492c1546(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x72) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x72) = 0;
  }
  return;
}



// FUNCTION 1492c15c6 FUN_1492c15c6 body=445 status=ok
// SIG undefined FUN_1492c15c6(void)

undefined8 * FUN_1492c15c6(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bc03110;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)((longlong)param_1 + 500) = 1;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x3ff0000000000000;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0x4056800000000000;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0x3f8000003dcccccd;
  param_1[0x47] = &DAT_3f8000003f800000;
  param_1[0x48] = 0x3e4ccccd3f800000;
  param_1[0x49] = &DAT_3f8000003f800000;
  param_1[0x4a] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x25c) = 1;
  param_1[0x4c] = 0;
  *(undefined2 *)(param_1 + 0x4d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x26a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0x1441c80000;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0x3dcccccd3e800000;
  *(undefined1 **)((longlong)param_1 + 0x27c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x284) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0x3f8000003dcccccd;
  *(undefined1 **)((longlong)param_1 + 0x294) = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x3f800000;
  param_1[0x56] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x54] = DAT_14c8464e0;
  param_1[0x55] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x57] = DAT_14c8464e0;
  param_1[0x58] = uVar1;
  param_1[0x59] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2dc) = 0xffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2fc) = 0xffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x62;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x70] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x6e] = DAT_14c8464e0;
  param_1[0x6f] = uVar1;
  *(undefined1 *)(param_1 + 0x71) = 0;
  return param_1;
}



// FUNCTION 1492c1784 FUN_1492c1784 body=52 status=ok
// SIG undefined FUN_1492c1784(void)

undefined8 * FUN_1492c1784(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c17ba FUN_1492c17ba body=515 status=ok
// SIG undefined FUN_1492c17ba(void)

void FUN_1492c17ba(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (0 < *(int *)(param_1 + 8)) {
    fVar8 = (float)*(int *)(param_1 + 8) + -1.0;
    fVar9 = 4.0;
    if (4.0 <= fVar8) {
      fVar9 = fVar8;
    }
    iVar7 = 0;
    do {
      FUN_1492c19be(&local_b8,(float)iVar7 * (6.2831855 / fVar9),param_4);
      local_e8 = local_b8;
      uStack_e4 = uStack_b4;
      uStack_e0 = uStack_b0;
      uStack_dc = uStack_ac;
      local_d8 = local_a8;
      FUN_1492c1b48(&local_d0,&local_e8);
      local_a8 = 0xbff0000000000000;
      dVar4 = (double)*(float *)(param_1 + 4);
      dVar3 = local_c0 * dVar4;
      dVar5 = local_c8 * dVar4;
      dVar4 = dVar4 * local_d0;
      iVar1 = (int)param_2[1];
      lVar6 = (longlong)iVar1;
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1403e3958(param_2,iVar1);
      }
      lVar2 = *param_2;
      *(double *)(lVar2 + lVar6 * 0x18) = dVar4;
      *(double *)(lVar2 + 8 + lVar6 * 0x18) = dVar5;
      *(double *)(lVar2 + 0x10 + lVar6 * 0x18) = dVar3;
      dVar3 = (double)*(float *)(param_1 + 4);
      dVar5 = (double)CONCAT44(uStack_ac,uStack_b0);
      dVar4 = (double)CONCAT44(uStack_b4,local_b8);
      iVar1 = (int)param_3[1];
      lVar6 = (longlong)iVar1;
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_1403e3958(param_3,iVar1);
      }
      lVar2 = *param_3;
      *(double *)(lVar2 + lVar6 * 0x18) = dVar4 * dVar3;
      *(double *)(lVar2 + 8 + lVar6 * 0x18) = dVar5 * dVar3;
      *(double *)(lVar2 + 0x10 + lVar6 * 0x18) = -dVar3;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 8));
  }
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c19be FUN_1492c19be body=393 status=ok
// SIG undefined FUN_1492c19be(void)

double * FUN_1492c19be(double *param_1,float param_2,float *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = DAT_14c8463c8;
  dVar5 = DAT_14c8463c0;
  dVar2 = DAT_14c8463b8;
  dVar3 = sin((double)param_2 * 0.5);
  dVar4 = cos((double)param_2 * 0.5);
  dVar2 = dVar2 * dVar3;
  dVar5 = dVar5 * dVar3;
  dVar7 = dVar7 * dVar3;
  dVar8 = dVar7 * DAT_14c8463a0 - DAT_14c8463b0 * dVar2;
  dVar8 = dVar8 + dVar8;
  dVar6 = dVar5 * DAT_14c8463b0 - DAT_14c8463a8 * dVar7;
  dVar6 = dVar6 + dVar6;
  dVar3 = dVar2 * DAT_14c8463a8 - DAT_14c8463a0 * dVar5;
  dVar3 = dVar3 + dVar3;
  dVar5 = ((dVar3 * dVar5 - dVar8 * dVar7) + dVar4 * dVar6 + DAT_14c8463a0) *
          (double)(*param_3 / 3.1415927);
  dVar7 = ((dVar6 * dVar7 - dVar2 * dVar3) + dVar4 * dVar8 + DAT_14c8463a8) *
          (double)(*param_3 / 3.1415927);
  fVar1 = param_3[(ulonglong)(dVar7 <= 0.0) + 3];
  *param_1 = (double)param_3[(ulonglong)(dVar5 <= 0.0) + 1] * dVar5;
  param_1[1] = (double)fVar1 * dVar7;
  param_1[2] = 0.0;
  return param_1;
}



// FUNCTION 1492c1b48 FUN_1492c1b48 body=1012 status=ok
// SIG undefined FUN_1492c1b48(void)

double * FUN_1492c1b48(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uStack_b4 = DAT_14c8463b8._4_4_ ^ 0x80000000;
  uStack_ac = DAT_14c8463c0._4_4_ ^ 0x80000000;
  local_b8 = (undefined4)DAT_14c8463b8;
  uStack_b0 = (undefined4)DAT_14c8463c0;
  local_a8 = -DAT_14c8463c8;
  local_d8 = *param_2;
  uStack_d0 = param_2[1];
  local_c8 = param_2[2];
  dVar15 = local_c8 * local_c8 + local_d8 * local_d8 + uStack_d0 * uStack_d0;
  if ((dVar15 != 1.0) || (NAN(dVar15))) {
    if (9.99999993922529e-09 <= dVar15) {
      dVar15 = 1.0 / SQRT(dVar15);
      local_c8 = local_c8 * dVar15;
      uStack_d0 = uStack_d0 * dVar15;
      local_d8 = local_d8 * dVar15;
      goto LAB_1492c1c21;
    }
    local_c8 = DAT_14c8464f0;
    uVar8 = (undefined4)DAT_14c8464e0;
    uVar10 = DAT_14c8464e0._4_4_;
    uVar11 = (undefined4)DAT_14c8464e8;
    uVar12 = DAT_14c8464e8._4_4_;
  }
  else {
    local_c8 = param_2[2];
    uVar8 = *(undefined4 *)param_2;
    uVar10 = *(undefined4 *)((longlong)param_2 + 4);
    uVar11 = *(undefined4 *)(param_2 + 1);
    uVar12 = *(undefined4 *)((longlong)param_2 + 0xc);
  }
  local_d8 = (double)CONCAT44(uVar10,uVar8);
  uStack_d0 = (double)CONCAT44(uVar12,uVar11);
LAB_1492c1c21:
  fVar9 = (float)FUN_1492c1f3e(&local_d8,&local_b8);
  dVar7 = DAT_14c8463c8;
  dVar6 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
  dVar4 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
  dVar15 = sin((double)fVar9 * 0.5);
  dVar1 = cos((double)fVar9 * 0.5);
  dVar6 = dVar6 * dVar15;
  dVar4 = dVar4 * dVar15;
  dVar7 = dVar7 * dVar15;
  dVar16 = dVar4 * DAT_14c846398 - DAT_14c846390 * dVar7;
  dVar16 = dVar16 + dVar16;
  dVar15 = dVar1 * dVar16 + DAT_14c846388;
  dVar14 = dVar6 * DAT_14c846390 - DAT_14c846388 * dVar4;
  dVar14 = dVar14 + dVar14;
  dVar3 = dVar1 * dVar14 + DAT_14c846398;
  dVar13 = dVar7 * DAT_14c846388 - DAT_14c846398 * dVar6;
  dVar13 = dVar13 + dVar13;
  dVar17 = dVar1 * dVar13 + DAT_14c846390;
  dVar2 = (double)((float)SQRT(param_2[2] * param_2[2] +
                               *param_2 * *param_2 + param_2[1] * param_2[1]) * 3.1415927) * 0.5;
  dVar1 = sin(dVar2);
  dVar2 = cos(dVar2);
  dVar5 = ((dVar4 * dVar14 - dVar13 * dVar7) + dVar15) * dVar1;
  dVar7 = ((dVar7 * dVar16 - dVar14 * dVar6) + dVar17) * dVar1;
  dVar1 = ((dVar6 * dVar13 - dVar16 * dVar4) + dVar3) * dVar1;
  dVar4 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
  dVar6 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
  dVar13 = dVar7 * DAT_14c8463c8 - dVar6 * dVar1;
  dVar13 = dVar13 + dVar13;
  dVar3 = dVar5 * dVar6 - dVar4 * dVar7;
  dVar3 = dVar3 + dVar3;
  dVar15 = dVar2 * dVar3 + DAT_14c8463c8;
  dVar14 = dVar1 * dVar4 - DAT_14c8463c8 * dVar5;
  dVar14 = dVar14 + dVar14;
  *param_1 = (dVar7 * dVar3 - dVar14 * dVar1) + dVar2 * dVar13 + dVar4;
  param_1[1] = (dVar1 * dVar13 - dVar3 * dVar5) + dVar2 * dVar14 + dVar6;
  param_1[2] = (dVar5 * dVar14 - dVar13 * dVar7) + dVar15;
  if ((local_a0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c1f3e FUN_1492c1f3e body=273 status=ok
// SIG undefined FUN_1492c1f3e(void)

ulonglong FUN_1492c1f3e(double *param_1,double *param_2)

{
  uint uVar1;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  float fVar3;
  
  fVar2 = (float)(param_1[2] * DAT_14c8463b0 + *param_1 * DAT_14c8463a0 + param_1[1] * DAT_14c8463a8
                 );
  fVar3 = fVar2;
  if (1.0 <= fVar2) {
    fVar3 = 1.0;
  }
  fVar3 = acosf((float)(-(uint)(fVar2 < -1.0) & 0xbf800000 | ~-(uint)(fVar2 < -1.0) & (uint)fVar3));
  uVar1 = -(uint)(0.0 <= (float)((*param_1 * DAT_14c8463a8 - DAT_14c8463a0 * param_1[1]) *
                                 param_2[2] +
                                (param_1[1] * DAT_14c8463b0 - DAT_14c8463a8 * param_1[2]) * *param_2
                                + (DAT_14c8463a0 * param_1[2] - *param_1 * DAT_14c8463b0) *
                                  param_2[1]));
  return (ulonglong)((uint)fVar3 & uVar1) |
         CONCAT44(extraout_XMM0_Db,~uVar1 & (uint)-fVar3) ^ 0x8000000000000000;
}



// FUNCTION 1492c2050 FUN_1492c2050 body=74 status=ok
// SIG undefined FUN_1492c2050(void)

void FUN_1492c2050(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 **)(param_2 + 0x10) = &DAT_3f8000003f800000;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x20);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492c209a FUN_1492c209a body=74 status=ok
// SIG undefined FUN_1492c209a(void)

void FUN_1492c209a(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 **)(param_2 + 0x10) = &DAT_3f8000003f800000;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x20);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492c20fc FUN_1492c20fc body=39 status=ok
// SIG undefined FUN_1492c20fc(void)

undefined8 FUN_1492c20fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492c214c FUN_1492c214c body=59 status=ok
// SIG undefined FUN_1492c214c(void)

undefined8 FUN_1492c214c(longlong *param_1)

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



// FUNCTION 1492c22d8 FUN_1492c22d8 body=104 status=ok
// SIG undefined FUN_1492c22d8(void)

undefined1 FUN_1492c22d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492ad734(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    uVar4 = *(undefined4 *)(param_3 + 0x20);
    uVar5 = *(undefined4 *)(param_3 + 0x24);
    uVar6 = *(undefined4 *)(param_3 + 0x28);
    uVar7 = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined4 *)(param_2 + 0x20) = uVar4;
    *(undefined4 *)(param_2 + 0x24) = uVar5;
    *(undefined4 *)(param_2 + 0x28) = uVar6;
    *(undefined4 *)(param_2 + 0x2c) = uVar7;
    FUN_144756208(param_2 + 0x30,param_3 + 0x30);
    FUN_1491c493e(param_2 + 0x40,param_3 + 0x40);
    param_2 = param_2 + 0xb8;
    param_3 = param_3 + 0xb8;
  }
  return 1;
}



// FUNCTION 1492c2368 FUN_1492c2368 body=59 status=ok
// SIG undefined FUN_1492c2368(void)

undefined8 FUN_1492c2368(longlong *param_1)

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



// FUNCTION 1492c23b4 FUN_1492c23b4 body=40 status=ok
// SIG undefined FUN_1492c23b4(void)

void FUN_1492c23b4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_1492c242a(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 1492c242a FUN_1492c242a body=56 status=ok
// SIG undefined FUN_1492c242a(void)

void FUN_1492c242a(longlong *param_1)

{
  FUN_1491c48cc(param_1 + 8);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1492c2498 FUN_1492c2498 body=63 status=ok
// SIG undefined FUN_1492c2498(void)

undefined1 FUN_1492c2498(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492c27f6(param_2,param_3);
    param_3 = param_3 + 0x3c0;
    param_2 = param_2 + 0x3c0;
  }
  return 1;
}



// FUNCTION 1492c2500 FUN_1492c2500 body=59 status=ok
// SIG undefined FUN_1492c2500(void)

undefined8 FUN_1492c2500(longlong *param_1)

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



// FUNCTION 1492c254c FUN_1492c254c body=73 status=ok
// SIG undefined FUN_1492c254c(void)

void FUN_1492c254c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    *param_2 = &PTR_FUN_14bc035c0;
    FUN_1492c242a(param_2 + 0x60);
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1492c25e4 FUN_1492c25e4 body=456 status=ok
// SIG undefined FUN_1492c25e4(void)

undefined8 * FUN_1492c25e4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14bc035c0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 0x3c888889;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x68] = &PTR_FUN_14bb77670;
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
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined2 *)((longlong)param_1 + 0x31c) = 0xffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x4280000043800000;
  param_1[0x42] = 0x3ecccccd3f000000;
  param_1[0x41] = 0x428000003f000000;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0x3ff0000000000000;
  *(undefined2 *)(param_1 + 0x46) = 0;
  param_1[0x48] = 0x3ff0000000000000;
  param_1[0x4b] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0x3ff0000000000000;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 10;
  *(undefined2 *)(param_1 + 0x4f) = 0x101;
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
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x3f800000;
  param_1[0x51] = 0;
  param_1[0x52] = &DAT_3f8000003f800000;
  param_1[0x54] = uVar1;
  param_1[0x55] = uVar2;
  param_1[0x56] = uVar3;
  param_1[0x57] = uVar4;
  param_1[0x58] = uVar5;
  param_1[0x59] = uVar6;
  param_1[0x5a] = uVar7;
  param_1[0x5b] = uVar8;
  param_1[0x5c] = uVar9;
  param_1[0x5d] = uVar10;
  param_1[0x5e] = uVar11;
  param_1[0x5f] = uVar12;
  return param_1;
}



// FUNCTION 1492c27ac FUN_1492c27ac body=74 status=ok
// SIG undefined FUN_1492c27ac(void)

undefined8 * FUN_1492c27ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc035c0;
  FUN_1492c242a(param_1 + 0x60);
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c27f6 FUN_1492c27f6 body=140 status=ok
// SIG undefined FUN_1492c27f6(void)

longlong FUN_1492c27f6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  memcpy((void *)(param_1 + 0x1f0),(void *)(param_2 + 0x1f0),0x110);
  FUN_1492ad734(param_1 + 0x300,param_2 + 0x300);
  uVar1 = *(undefined4 *)(param_2 + 0x314);
  uVar2 = *(undefined4 *)(param_2 + 0x318);
  uVar3 = *(undefined4 *)(param_2 + 0x31c);
  uVar4 = *(undefined4 *)(param_2 + 800);
  uVar5 = *(undefined4 *)(param_2 + 0x324);
  uVar6 = *(undefined4 *)(param_2 + 0x328);
  uVar7 = *(undefined4 *)(param_2 + 0x32c);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x310);
  *(undefined4 *)(param_1 + 0x314) = uVar1;
  *(undefined4 *)(param_1 + 0x318) = uVar2;
  *(undefined4 *)(param_1 + 0x31c) = uVar3;
  *(undefined4 *)(param_1 + 800) = uVar4;
  *(undefined4 *)(param_1 + 0x324) = uVar5;
  *(undefined4 *)(param_1 + 0x328) = uVar6;
  *(undefined4 *)(param_1 + 0x32c) = uVar7;
  FUN_144756208(param_1 + 0x330,param_2 + 0x330);
  FUN_1491c493e(param_1 + 0x340,param_2 + 0x340);
  return param_1;
}



// FUNCTION 1492c293c FUN_1492c293c body=39 status=ok
// SIG undefined FUN_1492c293c(void)

undefined8 FUN_1492c293c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1492c298c FUN_1492c298c body=59 status=ok
// SIG undefined FUN_1492c298c(void)

undefined8 FUN_1492c298c(longlong *param_1)

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



// FUNCTION 1492c2aa2 FUN_1492c2aa2 body=67 status=ok
// SIG undefined FUN_1492c2aa2(void)

undefined1 FUN_1492c2aa2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474f99c6(param_2,param_3);
    FUN_140cae46a(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x60;
    param_3 = param_3 + 0x60;
  }
  return 1;
}



// FUNCTION 1492c2b0e FUN_1492c2b0e body=59 status=ok
// SIG undefined FUN_1492c2b0e(void)

undefined8 FUN_1492c2b0e(longlong *param_1)

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



// FUNCTION 1492c2b54 FUN_1492c2b54 body=34 status=ok
// SIG undefined FUN_1492c2b54(void)

void FUN_1492c2b54(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1492c2bc4(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1492c2bc4 FUN_1492c2bc4 body=80 status=ok
// SIG undefined FUN_1492c2bc4(void)

void FUN_1492c2bc4(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 2);
  FUN_1474f9a9f(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1492c2c4a FUN_1492c2c4a body=63 status=ok
// SIG undefined FUN_1492c2c4a(void)

undefined1 FUN_1492c2c4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492c2ebc(param_2,param_3);
    param_3 = param_3 + 0x2e0;
    param_2 = param_2 + 0x2e0;
  }
  return 1;
}



// FUNCTION 1492c2cb2 FUN_1492c2cb2 body=59 status=ok
// SIG undefined FUN_1492c2cb2(void)

undefined8 FUN_1492c2cb2(longlong *param_1)

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



// FUNCTION 1492c2cfe FUN_1492c2cfe body=40 status=ok
// SIG undefined FUN_1492c2cfe(void)

void FUN_1492c2cfe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2e0) == '\x01') {
    FUN_1492c2e72(param_2);
    *(undefined1 *)(param_2 + 0x2e0) = 0;
  }
  return;
}



// FUNCTION 1492c2d74 FUN_1492c2d74 body=216 status=ok
// SIG undefined FUN_1492c2d74(void)

undefined8 * FUN_1492c2d74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bc03a70;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 1;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x3ff00000;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0x3ff0000000000000;
  param_1[0x49] = 0x3ff0000000000000;
  param_1[0x4a] = 0x3ff0000000000000;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 1;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  return param_1;
}



// FUNCTION 1492c2e4c FUN_1492c2e4c body=38 status=ok
// SIG undefined FUN_1492c2e4c(void)

undefined8 FUN_1492c2e4c(undefined8 param_1,int param_2)

{
  FUN_1492c2e72();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c2e72 FUN_1492c2e72 body=74 status=ok
// SIG undefined FUN_1492c2e72(void)

void FUN_1492c2e72(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc03a70;
  FUN_1492c2bc4(param_1 + 0x50);
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492c2ebc FUN_1492c2ebc body=128 status=ok
// SIG undefined FUN_1492c2ebc(void)

longlong FUN_1492c2ebc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  puVar2 = (undefined8 *)(param_2 + 0x1f0);
  puVar3 = (undefined8 *)(param_1 + 0x1f0);
  for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1492836e8(param_1 + 0x268,param_2 + 0x268);
  *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x278);
  FUN_1474f99c6(param_1 + 0x280,param_2 + 0x280);
  FUN_140cae46a(param_1 + 0x290,param_2 + 0x290);
  return param_1;
}



// FUNCTION 1492c2f72 FUN_1492c2f72 body=63 status=ok
// SIG undefined FUN_1492c2f72(void)

undefined1 FUN_1492c2f72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492c309c(param_2,param_3);
    param_3 = param_3 + 0x2f0;
    param_2 = param_2 + 0x2f0;
  }
  return 1;
}



// FUNCTION 1492c2fda FUN_1492c2fda body=59 status=ok
// SIG undefined FUN_1492c2fda(void)

undefined8 FUN_1492c2fda(longlong *param_1)

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



// FUNCTION 1492c3026 FUN_1492c3026 body=40 status=ok
// SIG undefined FUN_1492c3026(void)

void FUN_1492c3026(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f0) == '\x01') {
    FUN_149283812(param_2);
    *(undefined1 *)(param_2 + 0x2f0) = 0;
  }
  return;
}



// FUNCTION 1492c309c FUN_1492c309c body=141 status=ok
// SIG undefined FUN_1492c309c(void)

longlong FUN_1492c309c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  puVar2 = (undefined8 *)(param_2 + 0x1f0);
  puVar3 = (undefined8 *)(param_1 + 0x1f0);
  for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  FUN_1492836e8(param_1 + 0x270,param_2 + 0x270);
  *(undefined1 *)(param_1 + 0x280) = *(undefined1 *)(param_2 + 0x280);
  FUN_1474f99c6(param_1 + 0x288,param_2 + 0x288);
  FUN_140cae46a(param_1 + 0x298,param_2 + 0x298);
  return param_1;
}



// FUNCTION 1492c31ae FUN_1492c31ae body=59 status=ok
// SIG undefined FUN_1492c31ae(void)

undefined8 FUN_1492c31ae(longlong *param_1)

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



// FUNCTION 1492c32ba FUN_1492c32ba body=59 status=ok
// SIG undefined FUN_1492c32ba(void)

undefined8 FUN_1492c32ba(longlong *param_1)

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



// FUNCTION 1492c3390 FUN_1492c3390 body=221 status=ok
// SIG undefined FUN_1492c3390(void)

undefined8 FUN_1492c3390(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
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
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_1491c05d4(lVar1 + 0x10,lVar2 + 0x10);
      uVar3 = *(undefined4 *)(lVar2 + 500);
      uVar4 = *(undefined4 *)(lVar2 + 0x1f8);
      uVar5 = *(undefined4 *)(lVar2 + 0x1fc);
      *(undefined4 *)(lVar1 + 0x1f0) = *(undefined4 *)(lVar2 + 0x1f0);
      *(undefined4 *)(lVar1 + 500) = uVar3;
      *(undefined4 *)(lVar1 + 0x1f8) = uVar4;
      *(undefined4 *)(lVar1 + 0x1fc) = uVar5;
      *(undefined8 *)(lVar1 + 0x1fe) = *(undefined8 *)(lVar2 + 0x1fe);
      FUN_149283a5e(param_2 + lVar10 + 0x208,param_3 + lVar10 + 0x208);
      uVar3 = *(undefined4 *)(lVar2 + 0x21c);
      uVar4 = *(undefined4 *)(lVar2 + 0x220);
      uVar5 = *(undefined4 *)(lVar2 + 0x224);
      uVar6 = *(undefined4 *)(lVar2 + 0x228);
      uVar7 = *(undefined4 *)(lVar2 + 0x22c);
      uVar8 = *(undefined4 *)(lVar2 + 0x230);
      uVar9 = *(undefined4 *)(lVar2 + 0x234);
      *(undefined4 *)(lVar1 + 0x218) = *(undefined4 *)(lVar2 + 0x218);
      *(undefined4 *)(lVar1 + 0x21c) = uVar3;
      *(undefined4 *)(lVar1 + 0x220) = uVar4;
      *(undefined4 *)(lVar1 + 0x224) = uVar5;
      *(undefined4 *)(lVar1 + 0x228) = uVar6;
      *(undefined4 *)(lVar1 + 0x22c) = uVar7;
      *(undefined4 *)(lVar1 + 0x230) = uVar8;
      *(undefined4 *)(lVar1 + 0x234) = uVar9;
      *(undefined8 *)(lVar1 + 0x238) = *(undefined8 *)(lVar2 + 0x238);
      FUN_1492ad734(param_2 + lVar10 + 0x240,param_3 + lVar10 + 0x240);
      lVar10 = lVar10 + 0x250;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492c3496 FUN_1492c3496 body=59 status=ok
// SIG undefined FUN_1492c3496(void)

undefined8 FUN_1492c3496(longlong *param_1)

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



// FUNCTION 1492c34e2 FUN_1492c34e2 body=40 status=ok
// SIG undefined FUN_1492c34e2(void)

void FUN_1492c34e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x250) == '\x01') {
    FUN_146714204(param_2);
    *(undefined1 *)(param_2 + 0x250) = 0;
  }
  return;
}



// FUNCTION 1492c3558 FUN_1492c3558 body=38 status=ok
// SIG undefined FUN_1492c3558(void)

undefined8 FUN_1492c3558(undefined8 param_1,int param_2)

{
  FUN_146714204();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c35e4 FUN_1492c35e4 body=59 status=ok
// SIG undefined FUN_1492c35e4(void)

undefined8 FUN_1492c35e4(longlong *param_1)

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



// FUNCTION 1492c36ba FUN_1492c36ba body=137 status=ok
// SIG undefined FUN_1492c36ba(void)

undefined8 FUN_1492c36ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
    do {
      puVar2 = (undefined8 *)(param_3 + -0xe0);
      puVar3 = (undefined8 *)(param_2 + -0xe0);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_149283a5e(param_2 + -0x80,param_3 + -0x80);
      puVar2 = (undefined8 *)(param_3 + -0x70);
      puVar3 = (undefined8 *)(param_2 + -0x70);
      for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_1492ad734(param_2,param_3);
      param_3 = param_3 + 0x100;
      param_2 = param_2 + 0x100;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492c376c FUN_1492c376c body=59 status=ok
// SIG undefined FUN_1492c376c(void)

undefined8 FUN_1492c376c(longlong *param_1)

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



// FUNCTION 1492c380e FUN_1492c380e body=74 status=ok
// SIG undefined FUN_1492c380e(void)

undefined8 * FUN_1492c380e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc04460;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c385a FUN_1492c385a body=71 status=ok
// SIG undefined FUN_1492c385a(void)

void FUN_1492c385a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *param_1 = &PTR_FUN_14bc04460;
    if (param_1[0x1e] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1492c38d6 FUN_1492c38d6 body=115 status=ok
// SIG undefined FUN_1492c38d6(void)

undefined8 FUN_1492c38d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_4 != 0) {
    puVar5 = (undefined4 *)(param_3 + 0x210);
    puVar4 = (undefined4 *)(param_2 + 0x210);
    do {
      FUN_1491c05d4(puVar4 + -0x80,puVar5 + -0x80);
      uVar1 = puVar5[-7];
      uVar2 = puVar5[-6];
      uVar3 = puVar5[-5];
      puVar4[-8] = puVar5[-8];
      puVar4[-7] = uVar1;
      puVar4[-6] = uVar2;
      puVar4[-5] = uVar3;
      FUN_149283a5e(puVar4 + -4,puVar5 + -4);
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 0x88;
      puVar4 = puVar4 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492c3972 FUN_1492c3972 body=59 status=ok
// SIG undefined FUN_1492c3972(void)

undefined8 FUN_1492c3972(longlong *param_1)

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



// FUNCTION 1492c3a14 FUN_1492c3a14 body=79 status=ok
// SIG undefined FUN_1492c3a14(void)

undefined8 * FUN_1492c3a14(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc04650;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c3a64 FUN_1492c3a64 body=76 status=ok
// SIG undefined FUN_1492c3a64(void)

void FUN_1492c3a64(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x44) == '\x01') {
    *param_1 = &PTR_FUN_14bc04650;
    if (param_1[0x40] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492c3ae4 FUN_1492c3ae4 body=207 status=ok
// SIG undefined FUN_1492c3ae4(void)

undefined8 FUN_1492c3ae4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
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
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_1491c05d4(lVar1 + 0x10,lVar2 + 0x10);
      uVar3 = *(undefined4 *)(lVar2 + 500);
      uVar4 = *(undefined4 *)(lVar2 + 0x1f8);
      uVar5 = *(undefined4 *)(lVar2 + 0x1fc);
      *(undefined4 *)(lVar1 + 0x1f0) = *(undefined4 *)(lVar2 + 0x1f0);
      *(undefined4 *)(lVar1 + 500) = uVar3;
      *(undefined4 *)(lVar1 + 0x1f8) = uVar4;
      *(undefined4 *)(lVar1 + 0x1fc) = uVar5;
      FUN_149283a5e(param_2 + lVar10 + 0x200,param_3 + lVar10 + 0x200);
      uVar3 = *(undefined4 *)(lVar2 + 0x214);
      uVar4 = *(undefined4 *)(lVar2 + 0x218);
      uVar5 = *(undefined4 *)(lVar2 + 0x21c);
      uVar6 = *(undefined4 *)(lVar2 + 0x220);
      uVar7 = *(undefined4 *)(lVar2 + 0x224);
      uVar8 = *(undefined4 *)(lVar2 + 0x228);
      uVar9 = *(undefined4 *)(lVar2 + 0x22c);
      *(undefined4 *)(lVar1 + 0x210) = *(undefined4 *)(lVar2 + 0x210);
      *(undefined4 *)(lVar1 + 0x214) = uVar3;
      *(undefined4 *)(lVar1 + 0x218) = uVar4;
      *(undefined4 *)(lVar1 + 0x21c) = uVar5;
      *(undefined4 *)(lVar1 + 0x220) = uVar6;
      *(undefined4 *)(lVar1 + 0x224) = uVar7;
      *(undefined4 *)(lVar1 + 0x228) = uVar8;
      *(undefined4 *)(lVar1 + 0x22c) = uVar9;
      *(undefined8 *)(lVar1 + 0x230) = *(undefined8 *)(lVar2 + 0x230);
      FUN_1492ad734(param_2 + lVar10 + 0x238,param_3 + lVar10 + 0x238);
      lVar10 = lVar10 + 0x250;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492c3bdc FUN_1492c3bdc body=59 status=ok
// SIG undefined FUN_1492c3bdc(void)

undefined8 FUN_1492c3bdc(longlong *param_1)

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



// FUNCTION 1492c3c28 FUN_1492c3c28 body=40 status=ok
// SIG undefined FUN_1492c3c28(void)

void FUN_1492c3c28(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x250) == '\x01') {
    FUN_1467106d8(param_2);
    *(undefined1 *)(param_2 + 0x250) = 0;
  }
  return;
}



// FUNCTION 1492c3d0a FUN_1492c3d0a body=59 status=ok
// SIG undefined FUN_1492c3d0a(void)

undefined8 FUN_1492c3d0a(longlong *param_1)

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



// FUNCTION 1492c3de0 FUN_1492c3de0 body=113 status=ok
// SIG undefined FUN_1492c3de0(void)

undefined8 FUN_1492c3de0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    puVar5 = (undefined8 *)(param_3 + 0x210);
    puVar4 = (undefined8 *)(param_2 + 0x210);
    do {
      FUN_1491c05d4(puVar4 + -0x40,puVar5 + -0x40);
      uVar1 = *(undefined4 *)((longlong)puVar5 + -0x1c);
      uVar2 = *(undefined4 *)(puVar5 + -3);
      uVar3 = *(undefined4 *)((longlong)puVar5 + -0x14);
      *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(puVar5 + -4);
      *(undefined4 *)((longlong)puVar4 + -0x1c) = uVar1;
      *(undefined4 *)(puVar4 + -3) = uVar2;
      *(undefined4 *)((longlong)puVar4 + -0x14) = uVar3;
      FUN_149283a5e(puVar4 + -2,puVar5 + -2);
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 0x44;
      puVar4 = puVar4 + 0x44;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492c3e7a FUN_1492c3e7a body=59 status=ok
// SIG undefined FUN_1492c3e7a(void)

undefined8 FUN_1492c3e7a(longlong *param_1)

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



// FUNCTION 1492c3f1c FUN_1492c3f1c body=79 status=ok
// SIG undefined FUN_1492c3f1c(void)

undefined8 * FUN_1492c3f1c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc04b10;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c3f6c FUN_1492c3f6c body=76 status=ok
// SIG undefined FUN_1492c3f6c(void)

void FUN_1492c3f6c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x44) == '\x01') {
    *param_1 = &PTR_FUN_14bc04b10;
    if (param_1[0x40] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492c3fec FUN_1492c3fec body=207 status=ok
// SIG undefined FUN_1492c3fec(void)

undefined8 FUN_1492c3fec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
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
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_1491c05d4(lVar1 + 0x10,lVar2 + 0x10);
      uVar3 = *(undefined4 *)(lVar2 + 500);
      uVar4 = *(undefined4 *)(lVar2 + 0x1f8);
      uVar5 = *(undefined4 *)(lVar2 + 0x1fc);
      *(undefined4 *)(lVar1 + 0x1f0) = *(undefined4 *)(lVar2 + 0x1f0);
      *(undefined4 *)(lVar1 + 500) = uVar3;
      *(undefined4 *)(lVar1 + 0x1f8) = uVar4;
      *(undefined4 *)(lVar1 + 0x1fc) = uVar5;
      FUN_149283a5e(param_2 + lVar10 + 0x200,param_3 + lVar10 + 0x200);
      uVar3 = *(undefined4 *)(lVar2 + 0x214);
      uVar4 = *(undefined4 *)(lVar2 + 0x218);
      uVar5 = *(undefined4 *)(lVar2 + 0x21c);
      uVar6 = *(undefined4 *)(lVar2 + 0x220);
      uVar7 = *(undefined4 *)(lVar2 + 0x224);
      uVar8 = *(undefined4 *)(lVar2 + 0x228);
      uVar9 = *(undefined4 *)(lVar2 + 0x22c);
      *(undefined4 *)(lVar1 + 0x210) = *(undefined4 *)(lVar2 + 0x210);
      *(undefined4 *)(lVar1 + 0x214) = uVar3;
      *(undefined4 *)(lVar1 + 0x218) = uVar4;
      *(undefined4 *)(lVar1 + 0x21c) = uVar5;
      *(undefined4 *)(lVar1 + 0x220) = uVar6;
      *(undefined4 *)(lVar1 + 0x224) = uVar7;
      *(undefined4 *)(lVar1 + 0x228) = uVar8;
      *(undefined4 *)(lVar1 + 0x22c) = uVar9;
      *(undefined8 *)(lVar1 + 0x230) = *(undefined8 *)(lVar2 + 0x230);
      FUN_1492ad734(param_2 + lVar10 + 0x238,param_3 + lVar10 + 0x238);
      lVar10 = lVar10 + 0x250;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492c40e4 FUN_1492c40e4 body=59 status=ok
// SIG undefined FUN_1492c40e4(void)

undefined8 FUN_1492c40e4(longlong *param_1)

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



// FUNCTION 1492c4130 FUN_1492c4130 body=40 status=ok
// SIG undefined FUN_1492c4130(void)

void FUN_1492c4130(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x250) == '\x01') {
    FUN_1467107e6(param_2);
    *(undefined1 *)(param_2 + 0x250) = 0;
  }
  return;
}



// FUNCTION 1492c41dc FUN_1492c41dc body=115 status=ok
// SIG undefined FUN_1492c41dc(void)

undefined8 FUN_1492c41dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_4 != 0) {
    puVar5 = (undefined4 *)(param_3 + 0x210);
    puVar4 = (undefined4 *)(param_2 + 0x210);
    do {
      FUN_1491c05d4(puVar4 + -0x80,puVar5 + -0x80);
      uVar1 = puVar5[-7];
      uVar2 = puVar5[-6];
      uVar3 = puVar5[-5];
      puVar4[-8] = puVar5[-8];
      puVar4[-7] = uVar1;
      puVar4[-6] = uVar2;
      puVar4[-5] = uVar3;
      FUN_149283a5e(puVar4 + -4,puVar5 + -4);
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 0x88;
      puVar4 = puVar4 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492c4278 FUN_1492c4278 body=59 status=ok
// SIG undefined FUN_1492c4278(void)

undefined8 FUN_1492c4278(longlong *param_1)

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



// FUNCTION 1492c431a FUN_1492c431a body=79 status=ok
// SIG undefined FUN_1492c431a(void)

undefined8 * FUN_1492c431a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc04e60;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c436a FUN_1492c436a body=76 status=ok
// SIG undefined FUN_1492c436a(void)

void FUN_1492c436a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x44) == '\x01') {
    *param_1 = &PTR_FUN_14bc04e60;
    if (param_1[0x40] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492c43ea FUN_1492c43ea body=207 status=ok
// SIG undefined FUN_1492c43ea(void)

undefined8 FUN_1492c43ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
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
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_1491c05d4(lVar1 + 0x10,lVar2 + 0x10);
      uVar3 = *(undefined4 *)(lVar2 + 500);
      uVar4 = *(undefined4 *)(lVar2 + 0x1f8);
      uVar5 = *(undefined4 *)(lVar2 + 0x1fc);
      *(undefined4 *)(lVar1 + 0x1f0) = *(undefined4 *)(lVar2 + 0x1f0);
      *(undefined4 *)(lVar1 + 500) = uVar3;
      *(undefined4 *)(lVar1 + 0x1f8) = uVar4;
      *(undefined4 *)(lVar1 + 0x1fc) = uVar5;
      FUN_149283a5e(param_2 + lVar10 + 0x200,param_3 + lVar10 + 0x200);
      uVar3 = *(undefined4 *)(lVar2 + 0x214);
      uVar4 = *(undefined4 *)(lVar2 + 0x218);
      uVar5 = *(undefined4 *)(lVar2 + 0x21c);
      uVar6 = *(undefined4 *)(lVar2 + 0x220);
      uVar7 = *(undefined4 *)(lVar2 + 0x224);
      uVar8 = *(undefined4 *)(lVar2 + 0x228);
      uVar9 = *(undefined4 *)(lVar2 + 0x22c);
      *(undefined4 *)(lVar1 + 0x210) = *(undefined4 *)(lVar2 + 0x210);
      *(undefined4 *)(lVar1 + 0x214) = uVar3;
      *(undefined4 *)(lVar1 + 0x218) = uVar4;
      *(undefined4 *)(lVar1 + 0x21c) = uVar5;
      *(undefined4 *)(lVar1 + 0x220) = uVar6;
      *(undefined4 *)(lVar1 + 0x224) = uVar7;
      *(undefined4 *)(lVar1 + 0x228) = uVar8;
      *(undefined4 *)(lVar1 + 0x22c) = uVar9;
      *(undefined8 *)(lVar1 + 0x230) = *(undefined8 *)(lVar2 + 0x230);
      FUN_1492ad734(param_2 + lVar10 + 0x238,param_3 + lVar10 + 0x238);
      lVar10 = lVar10 + 0x250;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492c44e2 FUN_1492c44e2 body=59 status=ok
// SIG undefined FUN_1492c44e2(void)

undefined8 FUN_1492c44e2(longlong *param_1)

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



// FUNCTION 1492c452e FUN_1492c452e body=40 status=ok
// SIG undefined FUN_1492c452e(void)

void FUN_1492c452e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x250) == '\x01') {
    FUN_1467108ea(param_2);
    *(undefined1 *)(param_2 + 0x250) = 0;
  }
  return;
}



// FUNCTION 1492c45a6 FUN_1492c45a6 body=38 status=ok
// SIG undefined FUN_1492c45a6(void)

undefined8 FUN_1492c45a6(undefined8 param_1,int param_2)

{
  FUN_149283812();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c45cc FUN_1492c45cc body=38 status=ok
// SIG undefined FUN_1492c45cc(void)

undefined8 FUN_1492c45cc(undefined8 param_1,int param_2)

{
  FUN_1467106d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c45f2 FUN_1492c45f2 body=38 status=ok
// SIG undefined FUN_1492c45f2(void)

undefined8 FUN_1492c45f2(undefined8 param_1,int param_2)

{
  FUN_1467107e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c4618 FUN_1492c4618 body=38 status=ok
// SIG undefined FUN_1492c4618(void)

undefined8 FUN_1492c4618(undefined8 param_1,int param_2)

{
  FUN_1467108ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c463e FUN_1492c463e body=175 status=ok
// SIG undefined FUN_1492c463e(void)

undefined8 FUN_1492c463e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c46ee FUN_1492c46ee body=375 status=ok
// SIG undefined FUN_1492c46ee(void)

void FUN_1492c46ee(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_14bbd4530;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[5] = 0;
  lVar6 = *(longlong *)(param_2 + 0x28);
  if (lVar6 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[4] = *(undefined8 *)(param_2 + 0x20);
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    lVar6 = *(longlong *)(param_2 + 0x28);
  }
  param_1[5] = lVar6;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_2 + 0x30) = 0x200000000;
  param_1[10] = 0;
  lVar6 = *(longlong *)(param_2 + 0x50);
  if (lVar6 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    param_1[9] = *(undefined8 *)(param_2 + 0x48);
    param_1[7] = uVar1;
    param_1[8] = uVar2;
    lVar6 = *(longlong *)(param_2 + 0x50);
  }
  param_1[10] = lVar6;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(param_2 + 0x58) = 0x200000000;
  param_1[0x12] = 0;
  lVar6 = *(longlong *)(param_2 + 0x90);
  if (lVar6 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    uVar3 = *(undefined8 *)(param_2 + 0x70);
    uVar4 = *(undefined8 *)(param_2 + 0x78);
    uVar5 = *(undefined8 *)(param_2 + 0x88);
    param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
    param_1[0x11] = uVar5;
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar4;
    param_1[0xc] = uVar1;
    param_1[0xd] = uVar2;
    lVar6 = *(longlong *)(param_2 + 0x90);
  }
  param_1[0x12] = lVar6;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined8 *)(param_2 + 0x98) = 0x200000000;
  param_1[0x17] = 0;
  lVar6 = *(longlong *)(param_2 + 0xb8);
  if (lVar6 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0xa0);
    uVar2 = *(undefined8 *)(param_2 + 0xa8);
    param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
    param_1[0x14] = uVar1;
    param_1[0x15] = uVar2;
    lVar6 = *(longlong *)(param_2 + 0xb8);
  }
  param_1[0x17] = lVar6;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined8 *)(param_2 + 0xc0) = 0x200000000;
  return;
}



// FUNCTION 1492c4866 FUN_1492c4866 body=67 status=ok
// SIG undefined FUN_1492c4866(void)

void FUN_1492c4866(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14bc052f0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001492c489e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1492c48aa FUN_1492c48aa body=29 status=ok
// SIG undefined FUN_1492c48aa(void)

undefined8 FUN_1492c48aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c48c8 FUN_1492c48c8 body=78 status=ok
// SIG undefined FUN_1492c48c8(void)

undefined8 * FUN_1492c48c8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14bc052f0;
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
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c4916 FUN_1492c4916 body=25 status=ok
// SIG undefined FUN_1492c4916(void)

undefined8 FUN_1492c4916(undefined8 param_1,undefined8 param_2)

{
  FUN_1492124ed(param_2);
  return param_2;
}



// FUNCTION 1492c4930 FUN_1492c4930 body=66 status=ok
// SIG undefined FUN_1492c4930(void)

void FUN_1492c4930(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1492c4c9e(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c4974 FUN_1492c4974 body=111 status=ok
// SIG undefined FUN_1492c4974(void)

void FUN_1492c4974(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_3;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  FUN_1491fe330(&local_38);
  local_44 = uVar1;
  local_40 = uVar2;
  FUN_1492c4dc0(param_2,&local_44,local_38);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c49e4 FUN_1492c49e4 body=489 status=ok
// SIG undefined FUN_1492c49e4(void)

void FUN_1492c49e4(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_cc [4];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = FUN_14479d2ce(param_1 + 0x38);
  if (lVar3 != 0) {
    uVar1 = *(undefined1 *)(lVar3 + 0x3c0);
    *(undefined1 *)(lVar3 + 0x3c0) = 1;
    plVar4 = (longlong *)FUN_1444b2edb(lVar3,param_2);
    if (plVar4 != (longlong *)0x0) {
      if (*(int *)(lVar3 + 0x3d0) == *(int *)(lVar3 + 0x3fc)) {
LAB_1492c4a4c:
        lVar5 = (**(code **)(*plVar4 + 0x3b0))(plVar4,param_1 + 0x30);
        if (((lVar5 != 0) && ((*(byte *)(lVar5 + 0x210) & 0xfe) != 2)) &&
           ((*(char *)(lVar5 + 0x211) == '\n' || (*(char *)(lVar5 + 0x211) == '\x01')))) {
          local_f8 = local_cc;
          local_cc[0] = 2;
          local_c8 = 0x7f7fffff000001ff;
          local_c0 = 0;
          local_b8 = 0;
          local_b4 = *param_3;
          local_40 = 0;
          local_50 = 0;
          uStack_48 = 0;
          local_60 = 0;
          uStack_58 = 0;
          local_70 = 0;
          uStack_68 = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          uStack_38 = 0x100000000;
          local_e0 = 0;
          local_e8 = 0;
          local_f0 = 0;
          (**(code **)(*plVar4 + 0x3d8))(plVar4,param_1 + 0x30,&local_b4,1);
        }
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x30);
        uVar2 = (uint)((ulonglong)lVar5 >> 0x10);
        uVar7 = (uint)lVar5 & 0xffff;
        lVar6 = lVar3 + 0x400;
        if (*(longlong *)(lVar3 + 0x408) != 0) {
          lVar6 = *(longlong *)(lVar3 + 0x408);
        }
        iVar8 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(lVar3 + 0x410) - 1U &
                                 (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar7) +
                                 (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            if (*(longlong *)(*(longlong *)(lVar3 + 0x3c8) + (longlong)iVar8 * 0x10) == lVar5)
            goto LAB_1492c4a4c;
            iVar8 = *(int *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar3 + 0x3c8) + 8);
          } while (iVar8 != -1);
        }
      }
    }
    *(undefined1 *)(lVar3 + 0x3c0) = uVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492c4bce FUN_1492c4bce body=202 status=ok
// SIG undefined FUN_1492c4bce(void)

undefined4 * FUN_1492c4bce(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_c8 [35];
  undefined1 local_a5;
  undefined4 local_a4 [33];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = FUN_14479d2ce(param_1 + 0x38);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1444b2edb(lVar1,param_3);
    if (plVar2 != (longlong *)0x0) {
      lVar1 = (**(code **)(*plVar2 + 0x3b0))(plVar2,param_1 + 0x30);
      if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x210) & 0xfe) != 2)) &&
         ((*(char *)(lVar1 + 0x211) == '\n' || (*(char *)(lVar1 + 0x211) == '\x01')))) {
        local_a5 = 1;
        FUN_14919f2a0(plVar2,local_a4,lVar1);
        *param_2 = local_a4[0];
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c4c9e FUN_1492c4c9e body=290 status=ok
// SIG undefined FUN_1492c4c9e(void)

void FUN_1492c4c9e(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_5c;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar5 = (longlong)(int)uVar2;
  if (lVar5 != 0) {
    piVar4 = (int *)*param_1;
    local_5c = 0;
    bVar13 = param_2[1] == piVar4[1] && *piVar4 == *param_2;
    uVar10 = 0;
    do {
      uVar6 = (ulonglong)uVar10;
      uVar8 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar2) {
        uVar8 = uVar2;
      }
      piVar9 = piVar4 + uVar6 * 3 + 4;
      uVar11 = uVar10;
      uVar7 = uVar6;
      do {
        uVar7 = uVar7 + 1;
        uVar12 = uVar8;
        if (lVar5 <= (longlong)uVar7) break;
        piVar1 = piVar9 + -1;
        iVar3 = *piVar9;
        uVar11 = uVar11 + 1;
        piVar9 = piVar9 + 3;
        uVar12 = uVar11;
      } while (bVar13 == (iVar3 == param_2[1] && *piVar1 == *param_2));
      if (bVar13 == false) {
        if (local_5c != uVar10) {
          memmove(piVar4 + (longlong)(int)local_5c * 3,piVar4 + uVar6 * 3,
                  (longlong)(int)(uVar12 - uVar10) * 0xc);
        }
        local_5c = local_5c + (uVar12 - uVar10);
      }
      bVar13 = (bool)(bVar13 ^ 1);
      uVar10 = uVar12;
    } while ((longlong)uVar7 < lVar5);
    *(uint *)(param_1 + 1) = local_5c;
  }
  return;
}



// FUNCTION 1492c4dc0 FUN_1492c4dc0 body=170 status=ok
// SIG undefined FUN_1492c4dc0(void)

void FUN_1492c4dc0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *(undefined4 *)(param_2 + 1);
  local_58 = *param_2;
  local_20 = 0xff;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  local_60 = param_3;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1492c4e7a(param_1,iVar2);
  }
  lVar1 = *param_1 + (longlong)iVar2 * 0x48;
  *(byte *)(lVar1 + 0x40) = *(byte *)(lVar1 + 0x40) & 0xfc | 2;
  FUN_1492c4f0e(lVar1,&local_60);
  if (((local_20 >> 1 | ~local_20) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c4e7a FUN_1492c4e7a body=147 status=ok
// SIG undefined FUN_1492c4e7a(void)

void FUN_1492c4e7a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492c4f0e FUN_1492c4f0e body=110 status=ok
// SIG undefined FUN_1492c4f0e(void)

void FUN_1492c4f0e(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  bVar1 = *(byte *)(param_1 + 8);
  if (((bVar1 & 1) != 0) && (*(byte *)(param_1 + 8) = bVar1 & 0xfe, (bVar1 & 2) == 0)) {
    FUN_1400020a8(*param_1);
  }
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
    bVar1 = *(byte *)(param_2 + 8);
    *(byte *)(param_2 + 8) = bVar1 & 0xfe;
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd | bVar1 & 2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    uVar6 = param_2[5];
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
    param_1[6] = uVar7;
    param_1[7] = uVar8;
  }
  return;
}



// FUNCTION 1492c4f7c FUN_1492c4f7c body=167 status=ok
// SIG undefined FUN_1492c4f7c(void)

void FUN_1492c4f7c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1492c4ff7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1492c4ff7;
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
LAB_1492c4ff7:
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
                    /* WARNING: Could not recover jumptable at 0x0001492c5017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1492c5024 FUN_1492c5024 body=29 status=ok
// SIG undefined FUN_1492c5024(void)

undefined8 FUN_1492c5024(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c504f FUN_1492c504f body=430 status=ok
// SIG undefined FUN_1492c504f(void)

void FUN_1492c504f(float *param_1,float param_2,float param_3,char param_4,int param_5,
                  undefined8 param_6)

{
  byte bVar1;
  float fVar2;
  uint uVar3;
  undefined1 auStack_68 [36];
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_4 == '\x01') {
    bVar1 = *(byte *)(param_1 + 1);
  }
  else {
    if (param_4 != '\x04') {
      if (param_5 == -1) {
        if (param_4 == '\x02') {
          param_2 = param_2 * param_3;
          if (((uint)param_1[4] & 1) != 0) {
            param_2 = param_2 + param_1[3];
          }
          param_1[3] = param_2;
          param_1[4] = (float)((uint)param_1[4] | 1);
        }
      }
      else {
        fVar2 = param_1[6];
        if ((((uint)fVar2 & 1) == 0) && (((uint)param_1[1] & 1) != 0)) {
          uVar3 = -(uint)(param_1[2] != 0.0);
          param_1[5] = *param_1 / (float)(~uVar3 & 0x3f800000 | (uint)param_1[2] & uVar3);
          fVar2 = (float)((uint)fVar2 | 1);
          param_1[6] = fVar2;
        }
        if (param_4 == '\x10') {
          if (((uint)fVar2 & 1) != 0) {
            param_2 = param_2 * param_3 + param_1[5] * (1.0 - param_3);
          }
        }
        else {
          if (param_4 != '\x02') goto LAB_1492c50b9;
          param_2 = param_2 * param_3;
          if (((uint)fVar2 & 1) != 0) {
            param_2 = param_2 + param_1[5];
          }
        }
        param_1[5] = param_2;
        param_1[6] = (float)((uint)fVar2 | 1);
      }
      goto LAB_1492c50b9;
    }
    if (*(char *)(param_1 + 9) == '\x01') {
      local_44 = param_1[7];
    }
    else {
      param_1[8] = 0.0;
      *(undefined1 *)(param_1 + 9) = 1;
      FUN_1492c51fe(param_6,&local_44);
      param_1[7] = local_44;
      param_1[8] = 1.4013e-45;
    }
    param_2 = local_44 + param_2;
    bVar1 = *(byte *)(param_1 + 1);
  }
  param_2 = param_2 * param_3;
  if ((bVar1 & 1) != 0) {
    param_2 = param_2 + *param_1;
  }
  *param_1 = param_2;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
  param_1[2] = param_3 + param_1[2];
LAB_1492c50b9:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c51fe FUN_1492c51fe body=267 status=ok
// SIG undefined FUN_1492c51fe(void)

undefined8 * FUN_1492c51fe(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[2] == 0) {
    iVar7 = 0;
    iVar6 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    iVar6 = (int)local_38;
    iVar7 = local_38._4_4_;
  }
  plVar2 = (longlong *)*param_1;
  if ((longlong)(int)plVar2[4] != 0) {
    puVar3 = (undefined8 *)(plVar2[3] + 8);
    lVar5 = (longlong)(int)plVar2[4] * 0xc;
    do {
      if ((*(int *)(puVar3 + -1) == iVar6) &&
         (puVar4 = param_2, *(int *)((longlong)puVar3 + -4) == iVar7)) goto LAB_1492c52c6;
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      lVar5 = lVar5 + -0xc;
    } while (lVar5 != 0);
  }
  (**(code **)(*plVar2 + 0x28))(plVar2,param_2,param_1[2],param_1[3]);
  if (param_1[3] != 0) {
    lVar5 = *param_1;
    iVar1 = *(int *)(lVar5 + 0x20);
    *(uint *)(lVar5 + 0x20) = iVar1 + 1U;
    if (*(uint *)(lVar5 + 0x24) < iVar1 + 1U) {
      FUN_1492c530a((longlong *)(lVar5 + 0x18),iVar1);
    }
    puVar4 = (undefined8 *)(*(longlong *)(lVar5 + 0x18) + (longlong)iVar1 * 0xc);
    *puVar4 = CONCAT44(iVar7,iVar6);
    puVar3 = param_2;
    puVar4 = puVar4 + 1;
LAB_1492c52c6:
    *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1492c530a FUN_1492c530a body=147 status=ok
// SIG undefined FUN_1492c530a(void)

void FUN_1492c530a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492c539e FUN_1492c539e body=67 status=ok
// SIG undefined FUN_1492c539e(void)

void FUN_1492c539e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14bc05380;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001492c53d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1492c53e2 FUN_1492c53e2 body=29 status=ok
// SIG undefined FUN_1492c53e2(void)

undefined8 FUN_1492c53e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c5400 FUN_1492c5400 body=78 status=ok
// SIG undefined FUN_1492c5400(void)

undefined8 * FUN_1492c5400(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14bc05380;
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
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c544e FUN_1492c544e body=25 status=ok
// SIG undefined FUN_1492c544e(void)

undefined8 FUN_1492c544e(undefined8 param_1,undefined8 param_2)

{
  FUN_1492125c3(param_2);
  return param_2;
}



// FUNCTION 1492c5468 FUN_1492c5468 body=66 status=ok
// SIG undefined FUN_1492c5468(void)

void FUN_1492c5468(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1492c5870(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c54ac FUN_1492c54ac body=114 status=ok
// SIG undefined FUN_1492c54ac(void)

void FUN_1492c54ac(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(undefined8 *)(param_3 + 4);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1491fe408(&local_30);
  local_40 = uVar1;
  FUN_1492c597e(param_2,&local_58,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c5520 FUN_1492c5520 body=542 status=ok
// SIG undefined FUN_1492c5520(void)

void FUN_1492c5520(longlong param_1,undefined8 param_2,double *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_cc [4];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = FUN_14479d2ce(param_1 + 0x38);
  if (lVar3 != 0) {
    uVar1 = *(undefined1 *)(lVar3 + 0x3c0);
    *(undefined1 *)(lVar3 + 0x3c0) = 1;
    plVar4 = (longlong *)FUN_1444b2edb(lVar3,param_2);
    if (plVar4 != (longlong *)0x0) {
      if (*(int *)(lVar3 + 0x3d0) == *(int *)(lVar3 + 0x3fc)) {
LAB_1492c5594:
        lVar5 = (**(code **)(*plVar4 + 0x3b0))(plVar4,param_1 + 0x30);
        if (((lVar5 != 0) && ((*(byte *)(lVar5 + 0x210) & 0xfe) != 2)) &&
           ((byte)(*(char *)(lVar5 + 0x211) - 4U) < 3)) {
          if (*(char *)(lVar5 + 0x211) == '\x06') {
            FUN_149203d86(plVar4[0x5f],lVar5,param_3,0);
          }
          local_f8 = local_cc;
          local_cc[0] = 2;
          local_c8 = 0x7f7fffff000001ff;
          local_c0 = 0;
          local_b8 = 0;
          local_ac = (float)param_3[2];
          local_b0 = (float)param_3[1];
          local_b4 = (float)*param_3;
          local_48 = 0;
          uStack_40 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_38 = 0x100000000;
          local_e0 = 0;
          local_e8 = 0;
          local_f0 = 0;
          (**(code **)(*plVar4 + 0x3d8))(plVar4,param_1 + 0x30,&local_b4,1);
        }
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x30);
        uVar2 = (uint)((ulonglong)lVar5 >> 0x10);
        uVar7 = (uint)lVar5 & 0xffff;
        lVar6 = lVar3 + 0x400;
        if (*(longlong *)(lVar3 + 0x408) != 0) {
          lVar6 = *(longlong *)(lVar3 + 0x408);
        }
        iVar8 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(lVar3 + 0x410) - 1U &
                                 (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar7) +
                                 (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            if (*(longlong *)(*(longlong *)(lVar3 + 0x3c8) + (longlong)iVar8 * 0x10) == lVar5)
            goto LAB_1492c5594;
            iVar8 = *(int *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar3 + 0x3c8) + 8);
          } while (iVar8 != -1);
        }
      }
    }
    *(undefined1 *)(lVar3 + 0x3c0) = uVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c5740 FUN_1492c5740 body=299 status=ok
// SIG undefined FUN_1492c5740(void)

double * FUN_1492c5740(longlong param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [39];
  undefined1 local_b1;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 uStack_a4;
  double local_a0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_14479d2ce(param_1 + 0x38);
  if ((((lVar2 != 0) &&
       (plVar3 = (longlong *)FUN_1444b2edb(lVar2,param_3), plVar3 != (longlong *)0x0)) &&
      (lVar2 = (**(code **)(*plVar3 + 0x3b0))(plVar3,param_1 + 0x30), lVar2 != 0)) &&
     (((*(byte *)(lVar2 + 0x210) & 0xfe) != 2 && ((byte)(*(char *)(lVar2 + 0x211) - 4U) < 3)))) {
    local_b1 = 1;
    FUN_14919f2a0(plVar3,&local_b0,lVar2);
    if (*(char *)(lVar2 + 0x211) == '\x06') {
      FUN_1491a068c(plVar3,&local_b0,lVar2,0);
      dVar1 = (double)CONCAT44(uStack_a4,local_a8);
      local_b0 = (float)(double)CONCAT44(fStack_ac,local_b0);
      local_a8 = (float)local_a0;
      fStack_ac = (float)dVar1;
    }
    *param_2 = (double)local_b0;
    param_2[1] = (double)fStack_ac;
    param_2[2] = (double)local_a8;
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1492c5870 FUN_1492c5870 body=270 status=ok
// SIG undefined FUN_1492c5870(void)

void FUN_1492c5870(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar5 = (longlong)(int)uVar2;
  if (lVar5 != 0) {
    piVar4 = (int *)*param_1;
    uVar8 = 0;
    bVar14 = param_2[1] == piVar4[1] && *piVar4 == *param_2;
    uVar11 = 0;
    do {
      uVar6 = (ulonglong)uVar11;
      uVar9 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar2) {
        uVar9 = uVar2;
      }
      piVar10 = piVar4 + uVar6 * 8 + 9;
      uVar12 = uVar11;
      uVar7 = uVar6;
      do {
        uVar7 = uVar7 + 1;
        uVar13 = uVar9;
        if (lVar5 <= (longlong)uVar7) break;
        piVar1 = piVar10 + -1;
        iVar3 = *piVar10;
        uVar12 = uVar12 + 1;
        piVar10 = piVar10 + 8;
        uVar13 = uVar12;
      } while (bVar14 == (iVar3 == param_2[1] && *piVar1 == *param_2));
      if (bVar14 == false) {
        if (uVar8 != uVar11) {
          memmove(piVar4 + (longlong)(int)uVar8 * 8,piVar4 + uVar6 * 8,
                  (longlong)(int)(uVar13 - uVar11) << 5);
        }
        uVar8 = uVar8 + (uVar13 - uVar11);
      }
      bVar14 = (bool)(bVar14 ^ 1);
      uVar11 = uVar13;
    } while ((longlong)uVar7 < lVar5);
    *(uint *)(param_1 + 1) = uVar8;
  }
  return;
}



// FUNCTION 1492c597e FUN_1492c597e body=172 status=ok
// SIG undefined FUN_1492c597e(void)

void FUN_1492c597e(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  local_20 = 0xff;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  local_60 = param_3;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1492c4e7a(param_1,iVar2);
  }
  lVar1 = *param_1 + (longlong)iVar2 * 0x48;
  *(byte *)(lVar1 + 0x40) = *(byte *)(lVar1 + 0x40) & 0xfc | 2;
  FUN_1492c4f0e(lVar1,&local_60);
  if (((local_20 >> 1 | ~local_20) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c5a3a FUN_1492c5a3a body=167 status=ok
// SIG undefined FUN_1492c5a3a(void)

void FUN_1492c5a3a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1492c5ab5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1492c5ab5;
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
LAB_1492c5ab5:
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
                    /* WARNING: Could not recover jumptable at 0x0001492c5ad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1492c5ae2 FUN_1492c5ae2 body=29 status=ok
// SIG undefined FUN_1492c5ae2(void)

undefined8 FUN_1492c5ae2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c5b00 FUN_1492c5b00 body=241 status=ok
// SIG undefined FUN_1492c5b00(void)

void FUN_1492c5b00(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  int param_5,undefined8 param_6)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  int local_80;
  undefined8 local_78;
  uint local_68 [6];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_5 == -1) {
    uVar1 = *(uint *)(param_1 + 0x14);
    local_68[0] = *(uint *)(param_1 + 8);
    local_68[1] = *(undefined4 *)(param_1 + 0xc);
    local_68[2] = *(undefined4 *)(param_1 + 0x10);
    uVar2 = 0;
    local_68[3] = uVar1;
    do {
      if ((uVar1 >> ((uint)uVar2 & 0x1f) & 1) != 0) {
        local_78 = param_6;
        local_80 = -1;
        local_88 = param_4;
        FUN_1492c5bf2(param_2,local_68[uVar2],uVar2 & 0xffffffff,param_3);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 3);
  }
  else {
    uVar2 = 0;
    do {
      if ((*(uint *)(param_1 + 0x14) >> ((uint)uVar2 & 0x1f) & 1) != 0) {
        local_78 = param_6;
        local_80 = param_5;
        local_88 = param_4;
        FUN_1492c5bf2(param_2,((uint *)(param_1 + 8))[uVar2],uVar2 & 0xffffffff,param_3);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 3);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492c5bf2 FUN_1492c5bf2 body=588 status=ok
// SIG undefined FUN_1492c5bf2(void)

void FUN_1492c5bf2(longlong param_1,float param_2,ulonglong param_3,float param_4,char param_5,
                  int param_6,undefined8 param_7)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_b8 [40];
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78 [3];
  float local_60 [4];
  ulonglong local_50;
  
  uVar5 = param_3 & 0xffffffff;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar7 = (uint)param_3;
  if (param_5 == '\x01') {
    uVar6 = *(uint *)(param_1 + 0xc);
  }
  else {
    if (param_5 != '\x04') {
      if (param_6 == -1) {
        if (param_5 == '\x02') {
          param_2 = param_2 * param_4;
          if ((*(uint *)(param_1 + 0x28) >> (uVar7 & 0x1f) & 1) != 0) {
            param_2 = param_2 + *(float *)(param_1 + 0x1c + (param_3 & 0xff) * 4);
          }
          *(float *)(param_1 + 0x1c + (param_3 & 0xff) * 4) = param_2;
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1 << ((byte)uVar5 & 0x1f);
        }
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x38);
        param_3 = param_3 & 0xff;
        uVar2 = 1 << ((byte)uVar5 & 0x1f);
        if (((uVar6 >> (uVar7 & 0x1f) & 1) == 0) && ((*(uint *)(param_1 + 0xc) & uVar2) != 0)) {
          fVar1 = *(float *)(param_1 + 0x10 + uVar5 * 4);
          uVar7 = -(uint)(fVar1 != 0.0);
          *(float *)(param_1 + 0x2c + param_3 * 4) =
               *(float *)(param_1 + param_3 * 4) /
               (float)(~uVar7 & 0x3f800000 | (uint)fVar1 & uVar7);
          uVar6 = *(uint *)(param_1 + 0x38) | uVar2;
          *(uint *)(param_1 + 0x38) = uVar6;
        }
        if (param_5 == '\x10') {
          if ((uVar6 & uVar2) != 0) {
            param_2 = param_2 * param_4 + *(float *)(param_1 + 0x2c + param_3 * 4) * (1.0 - param_4)
            ;
          }
        }
        else {
          if (param_5 != '\x02') goto LAB_1492c5c8b;
          param_2 = param_2 * param_4;
          if ((uVar6 & uVar2) != 0) {
            param_2 = param_2 + *(float *)(param_1 + 0x2c + param_3 * 4);
          }
        }
        *(float *)(param_1 + 0x2c + param_3 * 4) = param_2;
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | uVar2;
      }
      goto LAB_1492c5c8b;
    }
    if (*(char *)(param_1 + 0x4c) == '\0') {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x4c) = 1;
      FUN_1492c5e40(param_7,&local_90);
      local_78[0] = local_90;
      local_78[1] = (double)local_88;
      local_78[2] = (double)uStack_80;
      pfVar3 = local_60;
      local_60[3] = 9.80909e-45;
      lVar4 = 0;
      do {
        *pfVar3 = (float)*(double *)((longlong)local_78 + lVar4);
        pfVar3 = pfVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0x18);
      *(float *)(param_1 + 0x3c) = local_60[0];
      *(float *)(param_1 + 0x40) = local_60[1];
      *(float *)(param_1 + 0x44) = local_60[2];
      *(float *)(param_1 + 0x48) = local_60[3];
    }
    param_2 = param_2 + *(float *)(param_1 + 0x3c + (param_3 & 0xff) * 4);
    uVar6 = *(uint *)(param_1 + 0xc);
  }
  param_2 = param_2 * param_4;
  if ((uVar6 >> (uVar7 & 0x1f) & 1) != 0) {
    param_2 = param_2 + *(float *)(param_1 + (param_3 & 0xff) * 4);
  }
  *(float *)(param_1 + (param_3 & 0xff) * 4) = param_2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1 << ((byte)param_3 & 0x1f);
  *(float *)(param_1 + 0x10 + uVar5 * 4) = param_4 + *(float *)(param_1 + 0x10 + uVar5 * 4);
LAB_1492c5c8b:
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492c5e40 FUN_1492c5e40 body=296 status=ok
// SIG undefined FUN_1492c5e40(void)

undefined4 * FUN_1492c5e40(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[2] == 0) {
    iVar10 = 0;
    iVar8 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    iVar8 = (int)local_38;
    iVar10 = local_38._4_4_;
  }
  plVar3 = (longlong *)*param_1;
  if ((longlong)(int)plVar3[4] != 0) {
    lVar4 = plVar3[3];
    lVar9 = 0;
    do {
      if ((*(int *)(lVar4 + lVar9) == iVar8) && (*(int *)(lVar4 + 4 + lVar9) == iVar10)) {
        *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar4 + 0x18 + lVar9);
        puVar1 = (undefined4 *)(lVar4 + 8 + lVar9);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        *param_2 = *puVar1;
        param_2[1] = uVar5;
        param_2[2] = uVar6;
        param_2[3] = uVar7;
        goto LAB_1492c5f0a;
      }
      lVar9 = lVar9 + 0x20;
    } while ((longlong)(int)plVar3[4] * 0x20 != lVar9);
  }
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_1[2],param_1[3]);
  if (param_1[3] == 0) {
    if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  lVar4 = *param_1;
  iVar2 = *(int *)(lVar4 + 0x20);
  *(uint *)(lVar4 + 0x20) = iVar2 + 1U;
  if (*(uint *)(lVar4 + 0x24) < iVar2 + 1U) {
    FUN_1492c5f6a((longlong *)(lVar4 + 0x18),iVar2);
  }
  lVar4 = *(longlong *)(lVar4 + 0x18);
  lVar9 = (longlong)iVar2 * 0x20;
  *(ulonglong *)(lVar4 + lVar9) = CONCAT44(iVar10,iVar8);
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  puVar1 = (undefined4 *)(lVar4 + 8 + lVar9);
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  *(undefined8 *)(lVar4 + 0x18 + lVar9) = *(undefined8 *)(param_2 + 4);
LAB_1492c5f0a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 1492c5f6a FUN_1492c5f6a body=132 status=ok
// SIG undefined FUN_1492c5f6a(void)

void FUN_1492c5f6a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492c5ff0 FUN_1492c5ff0 body=67 status=ok
// SIG undefined FUN_1492c5ff0(void)

void FUN_1492c5ff0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14bc05410;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001492c6028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1492c6034 FUN_1492c6034 body=29 status=ok
// SIG undefined FUN_1492c6034(void)

undefined8 FUN_1492c6034(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c6052 FUN_1492c6052 body=78 status=ok
// SIG undefined FUN_1492c6052(void)

undefined8 * FUN_1492c6052(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14bc05410;
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
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c60a0 FUN_1492c60a0 body=25 status=ok
// SIG undefined FUN_1492c60a0(void)

undefined8 FUN_1492c60a0(undefined8 param_1,undefined8 param_2)

{
  FUN_149212558(param_2);
  return param_2;
}



// FUNCTION 1492c60ba FUN_1492c60ba body=66 status=ok
// SIG undefined FUN_1492c60ba(void)

void FUN_1492c60ba(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1492c6430(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c60fe FUN_1492c60fe body=106 status=ok
// SIG undefined FUN_1492c60fe(void)

void FUN_1492c60fe(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1491fe39c(&local_30);
  local_38 = uVar1;
  FUN_1492c6552(param_2,&local_48,local_30);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c616a FUN_1492c616a body=501 status=ok
// SIG undefined FUN_1492c616a(void)

void FUN_1492c616a(longlong param_1,undefined8 param_2,double *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_cc [4];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = FUN_14479d2ce(param_1 + 0x38);
  if (lVar3 != 0) {
    uVar1 = *(undefined1 *)(lVar3 + 0x3c0);
    *(undefined1 *)(lVar3 + 0x3c0) = 1;
    plVar4 = (longlong *)FUN_1444b2edb(lVar3,param_2);
    if (plVar4 != (longlong *)0x0) {
      if (*(int *)(lVar3 + 0x3d0) == *(int *)(lVar3 + 0x3fc)) {
LAB_1492c61de:
        lVar5 = (**(code **)(*plVar4 + 0x3b0))(plVar4,param_1 + 0x30);
        if (((lVar5 != 0) && ((*(byte *)(lVar5 + 0x210) & 0xfe) != 2)) &&
           (*(char *)(lVar5 + 0x211) == '\x03')) {
          local_b0 = (float)param_3[1];
          local_b4 = (float)*param_3;
          local_f8 = local_cc;
          local_cc[0] = 2;
          local_c8 = 0x7f7fffff000001ff;
          local_c0 = 0;
          local_b8 = 0;
          local_48 = 0;
          uStack_40 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_38 = 0x100000000;
          local_ac = 0;
          local_e0 = 0;
          local_e8 = 0;
          local_f0 = 0;
          (**(code **)(*plVar4 + 0x3d8))(plVar4,param_1 + 0x30,&local_b4,1);
        }
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x30);
        uVar2 = (uint)((ulonglong)lVar5 >> 0x10);
        uVar7 = (uint)lVar5 & 0xffff;
        lVar6 = lVar3 + 0x400;
        if (*(longlong *)(lVar3 + 0x408) != 0) {
          lVar6 = *(longlong *)(lVar3 + 0x408);
        }
        iVar8 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(lVar3 + 0x410) - 1U &
                                 (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar7) +
                                 (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            if (*(longlong *)(*(longlong *)(lVar3 + 0x3c8) + (longlong)iVar8 * 0x10) == lVar5)
            goto LAB_1492c61de;
            iVar8 = *(int *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar3 + 0x3c8) + 8);
          } while (iVar8 != -1);
        }
      }
    }
    *(undefined1 *)(lVar3 + 0x3c0) = uVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c6360 FUN_1492c6360 body=202 status=ok
// SIG undefined FUN_1492c6360(void)

double * FUN_1492c6360(longlong param_1,double *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_c8 [35];
  undefined1 local_a5;
  float local_a4;
  float local_a0;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = FUN_14479d2ce(param_1 + 0x38);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1444b2edb(lVar1,param_3);
    if (plVar2 != (longlong *)0x0) {
      lVar1 = (**(code **)(*plVar2 + 0x3b0))(plVar2,param_1 + 0x30);
      if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x210) & 0xfe) != 2)) &&
         (*(char *)(lVar1 + 0x211) == '\x03')) {
        local_a5 = 1;
        FUN_14919f2a0(plVar2,&local_a4,lVar1);
        *param_2 = (double)local_a4;
        param_2[1] = (double)local_a0;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c6430 FUN_1492c6430 body=290 status=ok
// SIG undefined FUN_1492c6430(void)

void FUN_1492c6430(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_5c;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar5 = (longlong)(int)uVar2;
  if (lVar5 != 0) {
    piVar4 = (int *)*param_1;
    local_5c = 0;
    bVar13 = param_2[1] == piVar4[1] && *piVar4 == *param_2;
    uVar10 = 0;
    do {
      uVar6 = (ulonglong)uVar10;
      uVar8 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar2) {
        uVar8 = uVar2;
      }
      piVar9 = piVar4 + uVar6 * 6 + 7;
      uVar11 = uVar10;
      uVar7 = uVar6;
      do {
        uVar7 = uVar7 + 1;
        uVar12 = uVar8;
        if (lVar5 <= (longlong)uVar7) break;
        piVar1 = piVar9 + -1;
        iVar3 = *piVar9;
        uVar11 = uVar11 + 1;
        piVar9 = piVar9 + 6;
        uVar12 = uVar11;
      } while (bVar13 == (iVar3 == param_2[1] && *piVar1 == *param_2));
      if (bVar13 == false) {
        if (local_5c != uVar10) {
          memmove(piVar4 + (longlong)(int)local_5c * 6,piVar4 + uVar6 * 6,
                  (longlong)(int)(uVar12 - uVar10) * 0x18);
        }
        local_5c = local_5c + (uVar12 - uVar10);
      }
      bVar13 = (bool)(bVar13 ^ 1);
      uVar10 = uVar12;
    } while ((longlong)uVar7 < lVar5);
    *(uint *)(param_1 + 1) = local_5c;
  }
  return;
}



// FUNCTION 1492c6552 FUN_1492c6552 body=172 status=ok
// SIG undefined FUN_1492c6552(void)

void FUN_1492c6552(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined8 *)(param_2 + 4);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_20 = 0xff;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  local_60 = param_3;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1492c4e7a(param_1,iVar2);
  }
  lVar1 = *param_1 + (longlong)iVar2 * 0x48;
  *(byte *)(lVar1 + 0x40) = *(byte *)(lVar1 + 0x40) & 0xfc | 2;
  FUN_1492c4f0e(lVar1,&local_60);
  if (((local_20 >> 1 | ~local_20) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c660e FUN_1492c660e body=167 status=ok
// SIG undefined FUN_1492c660e(void)

void FUN_1492c660e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1492c6689;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1492c6689;
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
LAB_1492c6689:
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
                    /* WARNING: Could not recover jumptable at 0x0001492c66a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1492c66b6 FUN_1492c66b6 body=29 status=ok
// SIG undefined FUN_1492c66b6(void)

undefined8 FUN_1492c66b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c66d4 FUN_1492c66d4 body=238 status=ok
// SIG undefined FUN_1492c66d4(void)

void FUN_1492c66d4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  int param_5,undefined8 param_6)

{
  uint uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 local_50;
  undefined4 local_4c [7];
  
  if (param_5 == -1) {
    local_4c[0] = *(undefined4 *)(param_1 + 8);
    local_50 = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(uint *)(param_1 + 0x10);
    iVar4 = 0;
    puVar3 = local_4c;
    bVar2 = true;
    do {
      bVar6 = bVar2;
      if ((uVar1 >> iVar4 & 1) != 0) {
        FUN_1492c67c2(param_2,*puVar3,iVar4,param_3,param_4,0xffffffff,param_6);
      }
      iVar4 = 1;
      puVar3 = &local_50;
      bVar2 = false;
    } while (bVar6);
  }
  else {
    lVar5 = 0;
    bVar2 = true;
    do {
      bVar6 = bVar2;
      if ((*(uint *)(param_1 + 0x10) >> (int)lVar5 & 1) != 0) {
        FUN_1492c67c2(param_2,*(undefined4 *)(param_1 + 8 + lVar5 * 4),lVar5,param_3,param_4,param_5
                      ,param_6);
      }
      lVar5 = 1;
      bVar2 = false;
    } while (bVar6);
  }
  return;
}



// FUNCTION 1492c67c2 FUN_1492c67c2 body=524 status=ok
// SIG undefined FUN_1492c67c2(void)

void FUN_1492c67c2(longlong param_1,float param_2,ulonglong param_3,float param_4,char param_5,
                  int param_6,undefined8 param_7)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  ulonglong local_40;
  
  uVar3 = param_3 & 0xffffffff;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = (uint)param_3;
  if (param_5 == '\x01') {
    uVar4 = *(uint *)(param_1 + 8);
  }
  else {
    if (param_5 != '\x04') {
      if (param_6 == -1) {
        if (param_5 == '\x02') {
          param_2 = param_2 * param_4;
          if ((*(uint *)(param_1 + 0x1c) >> (uVar5 & 0x1f) & 1) != 0) {
            param_2 = param_2 + *(float *)(param_1 + 0x14 + (param_3 & 0xff) * 4);
          }
          *(float *)(param_1 + 0x14 + (param_3 & 0xff) * 4) = param_2;
          *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1 << ((byte)uVar3 & 0x1f);
        }
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x28);
        param_3 = param_3 & 0xff;
        uVar2 = 1 << ((byte)uVar3 & 0x1f);
        if (((uVar4 >> (uVar5 & 0x1f) & 1) == 0) && ((*(uint *)(param_1 + 8) & uVar2) != 0)) {
          fVar1 = *(float *)(param_1 + 0xc + uVar3 * 4);
          uVar5 = -(uint)(fVar1 != 0.0);
          *(float *)(param_1 + 0x20 + param_3 * 4) =
               *(float *)(param_1 + param_3 * 4) /
               (float)(~uVar5 & 0x3f800000 | (uint)fVar1 & uVar5);
          uVar4 = *(uint *)(param_1 + 0x28) | uVar2;
          *(uint *)(param_1 + 0x28) = uVar4;
        }
        if (param_5 == '\x10') {
          if ((uVar4 & uVar2) != 0) {
            param_2 = param_2 * param_4 + *(float *)(param_1 + 0x20 + param_3 * 4) * (1.0 - param_4)
            ;
          }
        }
        else {
          if (param_5 != '\x02') goto LAB_1492c684f;
          param_2 = param_2 * param_4;
          if ((uVar4 & uVar2) != 0) {
            param_2 = param_2 + *(float *)(param_1 + 0x20 + param_3 * 4);
          }
        }
        *(float *)(param_1 + 0x20 + param_3 * 4) = param_2;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar2;
      }
      goto LAB_1492c684f;
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined1 *)(param_1 + 0x38) = 1;
      FUN_1492c69d0(param_7,&local_50);
      *(float *)(param_1 + 0x2c) = (float)local_50;
      *(float *)(param_1 + 0x30) = (float)local_48;
      *(undefined4 *)(param_1 + 0x34) = 3;
    }
    param_2 = param_2 + *(float *)(param_1 + 0x2c + (param_3 & 0xff) * 4);
    uVar4 = *(uint *)(param_1 + 8);
  }
  param_2 = param_2 * param_4;
  if ((uVar4 >> (uVar5 & 0x1f) & 1) != 0) {
    param_2 = param_2 + *(float *)(param_1 + (param_3 & 0xff) * 4);
  }
  *(float *)(param_1 + (param_3 & 0xff) * 4) = param_2;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1 << ((byte)param_3 & 0x1f);
  *(float *)(param_1 + 0xc + uVar3 * 4) = param_4 + *(float *)(param_1 + 0xc + uVar3 * 4);
LAB_1492c684f:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492c69d0 FUN_1492c69d0 body=276 status=ok
// SIG undefined FUN_1492c69d0(void)

undefined4 * FUN_1492c69d0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[2] == 0) {
    iVar10 = 0;
    iVar9 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    iVar9 = (int)local_38;
    iVar10 = local_38._4_4_;
  }
  plVar3 = (longlong *)*param_1;
  if ((longlong)(int)plVar3[4] != 0) {
    lVar4 = plVar3[3];
    lVar8 = 0;
    do {
      if ((*(int *)(lVar4 + lVar8) == iVar9) && (*(int *)(lVar4 + 4 + lVar8) == iVar10)) {
        puVar1 = (undefined4 *)(lVar4 + 8 + lVar8);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        *param_2 = *puVar1;
        param_2[1] = uVar5;
        param_2[2] = uVar6;
        param_2[3] = uVar7;
        goto LAB_1492c6a93;
      }
      lVar8 = lVar8 + 0x18;
    } while ((longlong)(int)plVar3[4] * 0x18 != lVar8);
  }
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_1[2],param_1[3]);
  if (param_1[3] == 0) {
    if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  lVar4 = *param_1;
  iVar2 = *(int *)(lVar4 + 0x20);
  *(uint *)(lVar4 + 0x20) = iVar2 + 1U;
  if (*(uint *)(lVar4 + 0x24) < iVar2 + 1U) {
    FUN_1492c6ae6((longlong *)(lVar4 + 0x18),iVar2);
  }
  lVar4 = *(longlong *)(lVar4 + 0x18);
  *(ulonglong *)(lVar4 + (longlong)iVar2 * 0x18) = CONCAT44(iVar10,iVar9);
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  puVar1 = (undefined4 *)(lVar4 + 8 + (longlong)iVar2 * 0x18);
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
LAB_1492c6a93:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 1492c6ae6 FUN_1492c6ae6 body=147 status=ok
// SIG undefined FUN_1492c6ae6(void)

void FUN_1492c6ae6(longlong param_1,int param_2)

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



// FUNCTION 1492c6b7a FUN_1492c6b7a body=67 status=ok
// SIG undefined FUN_1492c6b7a(void)

void FUN_1492c6b7a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14bc054a0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001492c6bb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1492c6bbe FUN_1492c6bbe body=29 status=ok
// SIG undefined FUN_1492c6bbe(void)

undefined8 FUN_1492c6bbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c6bdc FUN_1492c6bdc body=78 status=ok
// SIG undefined FUN_1492c6bdc(void)

undefined8 * FUN_1492c6bdc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14bc054a0;
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
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c6c2a FUN_1492c6c2a body=25 status=ok
// SIG undefined FUN_1492c6c2a(void)

undefined8 FUN_1492c6c2a(undefined8 param_1,undefined8 param_2)

{
  FUN_14921262e(param_2);
  return param_2;
}



// FUNCTION 1492c6c44 FUN_1492c6c44 body=66 status=ok
// SIG undefined FUN_1492c6c44(void)

void FUN_1492c6c44(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1492c77e4(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c6c88 FUN_1492c6c88 body=198 status=ok
// SIG undefined FUN_1492c6c88(void)

void FUN_1492c6c88(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [32];
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
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  local_78 = param_3[8];
  local_88 = *(undefined4 *)(param_3 + 6);
  uStack_84 = *(undefined4 *)((longlong)param_3 + 0x34);
  uStack_80 = *(undefined4 *)(param_3 + 7);
  uStack_7c = *(undefined4 *)((longlong)param_3 + 0x3c);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1491fe474(&local_68);
  local_b8 = uVar2;
  uStack_b0 = uVar3;
  local_a8 = uVar4;
  uStack_a0 = uVar5;
  local_98 = uVar6;
  uStack_90 = uVar7;
  local_70 = uVar1;
  FUN_1492c790c(param_2,&local_b8,local_68);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c6d50 FUN_1492c6d50 body=1680 status=ok
// SIG undefined FUN_1492c6d50(void)

void FUN_1492c6d50(longlong param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_208 [32];
  undefined4 *local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0;
  double *local_1c0;
  undefined1 local_1b8 [4];
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined1 local_1a4;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint local_14c;
  float local_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar8 = FUN_14479d2ce(param_1 + 0x38);
  if (lVar8 == 0) goto LAB_1492c6e69;
  plVar10 = *(longlong **)(lVar8 + 0x20);
  if (plVar10 != (longlong *)0x0) {
    lVar9 = FUN_1402984e6();
    if (((*(int *)(lVar9 + 0x38) <= *(int *)(plVar10[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
         lVar9 + 0x30)) && (lVar9 = (**(code **)(*plVar10 + 0x300))(plVar10), lVar9 != 0)) {
      lVar8 = (**(code **)(*plVar10 + 0x300))(plVar10);
      if (lVar8 == 0) goto LAB_1492c6e69;
      lVar9 = FUN_145b9ef82();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) != lVar9 + 0x30)) goto LAB_1492c6e69;
    }
  }
  uVar4 = *(undefined1 *)(lVar8 + 0x3c0);
  *(undefined1 *)(lVar8 + 0x3c0) = 1;
  plVar10 = (longlong *)FUN_1444b2edb(lVar8,param_2);
  if (plVar10 != (longlong *)0x0) {
    if (*(int *)(lVar8 + 0x3d0) == *(int *)(lVar8 + 0x3fc)) {
LAB_1492c6e30:
      lVar9 = plVar10[0x5f];
      param_1 = param_1 + 0x30;
      lVar11 = (**(code **)(*plVar10 + 0x3b0))(plVar10,param_1);
      if ((lVar11 != 0) && ((*(byte *)(lVar11 + 0x210) & 0xfe) != 2)) {
        cVar5 = *(char *)(lVar11 + 0x211);
        if (cVar5 == '\t') {
          local_160 = SUB84(param_3[5],0);
          uStack_15c = (undefined4)((ulonglong)param_3[5] >> 0x20);
          uStack_158 = SUB84(param_3[3],0);
          uStack_154 = (undefined4)((ulonglong)param_3[3] >> 0x20);
          uStack_150 = SUB84(param_3[4],0);
          local_14c = (uint)((ulonglong)param_3[4] >> 0x20);
          FUN_149203e52(lVar9,&local_188,lVar11,&local_160);
          FUN_149203d86(lVar9,lVar11,&local_160,0);
          FUN_141706cfc(&local_1a0,&local_188);
          local_148 = (float)local_1a0;
          fStack_144 = (float)local_198;
          local_140 = (float)local_190;
          fStack_13c = (float)*param_3;
          local_138 = (float)param_3[1];
          fStack_134 = (float)param_3[2];
          local_130 = (float)param_3[6];
          fStack_12c = (float)param_3[7];
          local_128 = (float)param_3[8];
          local_1e8 = (undefined4 *)local_1b8;
          local_1b8[0] = 2;
          local_1b4 = 0x7f7fffff000001ff;
          local_1ac = 0;
          local_1a4 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_e4 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          local_d8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
          local_e8 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          local_f8 = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          local_108 = 0;
          fStack_124 = 0.0;
          fStack_120 = 0.0;
          uStack_11c = 0;
          local_118 = 0;
          local_c8 = 1;
          local_1d0 = 0;
          local_1d8 = 0;
          local_1e0 = 0;
          (**(code **)(*plVar10 + 0x3d8))(plVar10,param_1,&local_148,1);
          FUN_149203d86(lVar9,lVar11,&local_160,0);
        }
        else if (cVar5 == '\b') {
          FUN_144a7484c(param_3 + 3,&local_148);
          dVar7 = (double)CONCAT44(fStack_12c,local_130);
          dVar1 = *param_3;
          dVar2 = param_3[1];
          dVar3 = param_3[2];
          local_180 = param_3[3];
          local_178 = param_3[4];
          local_188 = param_3[5];
          FUN_149203d86(lVar9,lVar11,&local_188,0);
          local_1e8 = &local_160;
          local_160 = CONCAT31(local_160._1_3_,2);
          uStack_15c = 0x1ff;
          uStack_158 = 0x7f7fffff;
          uStack_154 = 0;
          uStack_150 = 0;
          local_14c = local_14c & 0xffffff00;
          local_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          local_e8 = 0;
          uStack_e4 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          local_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
          local_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          local_118 = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          local_128 = 0.0;
          fStack_124 = 0.0;
          fStack_120 = 0.0;
          uStack_11c = 0;
          local_c8 = 1;
          fStack_12c = 0.0;
          local_1d0 = 0;
          local_1d8 = 0;
          local_1e0 = 0;
          local_148 = (float)(double)CONCAT44(fStack_144,local_148);
          fStack_144 = (float)(double)CONCAT44(fStack_13c,local_140);
          local_140 = (float)(double)CONCAT44(fStack_134,local_138);
          fStack_13c = (float)dVar7;
          local_138 = (float)dVar1;
          fStack_134 = (float)dVar2;
          local_130 = (float)dVar3;
          (**(code **)(*plVar10 + 0x3d8))(plVar10,param_1,&local_148,1);
        }
        else if (cVar5 == '\a') {
          local_1c0 = param_3 + 3;
          local_180 = param_3[3];
          local_178 = param_3[4];
          local_188 = param_3[5];
          FUN_149203d86(lVar9,lVar11,&local_188,0);
          local_160 = CONCAT31(local_160._1_3_,2);
          uStack_15c = 0x1ff;
          uStack_158 = 0x7f7fffff;
          uStack_154 = 0;
          uStack_150 = 0;
          local_14c = local_14c & 0xffffff00;
          FUN_144a7484c(local_1c0,&local_148);
          local_148 = (float)(double)CONCAT44(fStack_144,local_148);
          fStack_144 = (float)(double)CONCAT44(fStack_13c,local_140);
          local_140 = (float)(double)CONCAT44(fStack_134,local_138);
          fStack_13c = (float)(double)CONCAT44(fStack_12c,local_130);
          local_138 = (float)*param_3;
          fStack_134 = (float)param_3[1];
          local_130 = (float)param_3[2];
          local_128 = (float)param_3[6];
          fStack_124 = (float)param_3[7];
          fStack_120 = (float)param_3[8];
          local_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          local_e8 = 0;
          uStack_e4 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          local_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
          local_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          local_118 = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          local_c8 = 1;
          fStack_12c = 0.0;
          uStack_11c = 0;
          local_1d0 = 0;
          local_1d8 = 0;
          local_1e0 = 0;
          local_1e8 = &local_160;
          (**(code **)(*plVar10 + 0x3d8))(plVar10,param_1,&local_148,1);
        }
      }
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x30);
      uVar6 = (uint)((ulonglong)lVar9 >> 0x10);
      uVar12 = (uint)lVar9 & 0xffff;
      lVar11 = lVar8 + 0x400;
      if (*(longlong *)(lVar8 + 0x408) != 0) {
        lVar11 = *(longlong *)(lVar8 + 0x408);
      }
      iVar13 = *(int *)(lVar11 + (ulonglong)
                                 (*(int *)(lVar8 + 0x410) - 1U &
                                 (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar12) +
                                 (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar12 >> 4)) * 4);
      if (iVar13 != -1) {
        do {
          if (*(longlong *)(*(longlong *)(lVar8 + 0x3c8) + (longlong)iVar13 * 0x10) == lVar9)
          goto LAB_1492c6e30;
          iVar13 = *(int *)((longlong)iVar13 * 0x10 + *(longlong *)(lVar8 + 0x3c8) + 8);
        } while (iVar13 != -1);
      }
    }
  }
  *(undefined1 *)(lVar8 + 0x3c0) = uVar4;
LAB_1492c6e69:
  if ((local_c0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492c73e2 FUN_1492c73e2 body=1021 status=ok
// SIG undefined FUN_1492c73e2(void)

double * FUN_1492c73e2(longlong param_1,double *param_2,undefined8 param_3)

{
  float fVar1;
  char cVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  double *pdVar22;
  double *pdVar23;
  undefined1 auStack_168 [32];
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 local_120;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_b8 [12];
  float fStack_ac;
  undefined1 local_a8 [24];
  ulonglong local_90;
  float fVar2;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar17 = FUN_14479d2ce(param_1 + 0x38);
  if ((lVar17 != 0) &&
     (plVar18 = (longlong *)FUN_1444b2edb(lVar17,param_3), plVar18 != (longlong *)0x0)) {
    if (*(int *)(lVar17 + 0x3d0) == *(int *)(lVar17 + 0x3fc)) {
LAB_1492c7477:
      lVar17 = (**(code **)(*plVar18 + 0x3b0))(plVar18,param_1 + 0x30);
      if ((lVar17 != 0) && ((*(byte *)(lVar17 + 0x210) & 0xfe) != 2)) {
        cVar3 = *(char *)(lVar17 + 0x211);
        if (cVar3 == '\t') {
          local_b8[0] = 1;
          FUN_14919f2a0(plVar18,local_148,lVar17);
          dVar7 = (double)local_138._4_4_;
          dVar8 = (double)(float)local_138;
          dVar9 = (double)fStack_13c;
          dVar10 = (double)fStack_128;
          dVar11 = (double)fStack_12c;
          dVar12 = (double)local_130;
          FUN_1491a068c(plVar18,local_148,lVar17,0);
          *param_2 = dVar9;
          param_2[1] = dVar8;
          param_2[2] = dVar7;
          *(float *)(param_2 + 3) = fStack_140;
          *(float *)((longlong)param_2 + 0x1c) = fStack_13c;
          *(float *)(param_2 + 4) = (float)local_138;
          *(float *)((longlong)param_2 + 0x24) = local_138._4_4_;
          param_2[5] = (double)local_148;
          param_2[6] = dVar12;
          param_2[7] = dVar11;
          param_2[8] = dVar10;
        }
        else {
          if (cVar3 == '\b') {
            local_b8[0] = 1;
            FUN_14919f2a0(plVar18,local_148,lVar17,local_b8);
            dVar8 = (double)CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
            dVar7 = (double)CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
            auVar6._8_4_ = SUB84((double)local_138._4_4_,0);
            auVar6._0_8_ = (double)(float)local_138;
            auVar6._12_4_ = (int)((ulonglong)(double)local_138._4_4_ >> 0x20);
            local_b8._8_4_ = SUB84((double)(float)local_148._4_4_,0);
            local_b8._0_8_ = (double)(float)local_148._0_4_;
            fStack_ac = (float)(int)((ulonglong)(double)(float)local_148._4_4_ >> 0x20);
            dVar9 = DAT_14c846520;
            fVar1 = fStack_140;
            fVar2 = fStack_13c;
            _local_148 = auVar6;
          }
          else {
            if (cVar3 != '\a') goto LAB_1492c74a2;
            local_b8[0] = 1;
            FUN_14919f2a0(plVar18,local_148,lVar17,local_b8);
            dVar7 = (double)fStack_124;
            dVar8 = (double)fStack_128;
            auVar5._8_4_ = SUB84((double)local_138._4_4_,0);
            auVar5._0_8_ = (double)(float)local_138;
            auVar5._12_4_ = (int)((ulonglong)(double)local_138._4_4_ >> 0x20);
            local_b8._8_4_ = SUB84((double)(float)local_148._4_4_,0);
            local_b8._0_8_ = (double)(float)local_148._0_4_;
            fStack_ac = (float)(int)((ulonglong)(double)(float)local_148._4_4_ >> 0x20);
            dVar9 = (double)(float)local_120;
            fVar1 = fStack_140;
            fVar2 = fStack_13c;
            _local_148 = auVar5;
          }
          local_138 = (double)local_130;
          local_a8._8_4_ = SUB84((double)fVar2,0);
          local_a8._0_8_ = (double)fVar1;
          local_a8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
          FUN_1448052ee(local_b8,&local_130);
          local_118._8_4_ = SUB84(dVar7,0);
          local_118._0_8_ = dVar8;
          local_118._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          local_108 = dVar9;
          FUN_1491a068c(plVar18,local_b8,lVar17,0);
          local_130 = (float)local_b8._8_4_;
          fStack_12c = fStack_ac;
          fStack_128 = (float)local_a8._0_4_;
          fStack_124 = (float)local_a8._4_4_;
          local_120 = local_b8._0_8_;
          pdVar22 = (double *)local_148;
          pdVar23 = param_2;
          for (lVar17 = 9; lVar17 != 0; lVar17 = lVar17 + -1) {
            *pdVar23 = *pdVar22;
            pdVar22 = pdVar22 + 1;
            pdVar23 = pdVar23 + 1;
          }
        }
        if ((local_90 ^ (ulonglong)auStack_168) == DAT_14c707940) {
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x30);
      uVar13 = (uint)((ulonglong)lVar4 >> 0x10);
      uVar20 = (uint)lVar4 & 0xffff;
      lVar19 = lVar17 + 0x400;
      if (*(longlong *)(lVar17 + 0x408) != 0) {
        lVar19 = *(longlong *)(lVar17 + 0x408);
      }
      iVar21 = *(int *)(lVar19 + (ulonglong)
                                 (*(int *)(lVar17 + 0x410) - 1U &
                                 (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar20) +
                                 (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar20 >> 4)) * 4);
      if (iVar21 != -1) {
        do {
          if (*(longlong *)(*(longlong *)(lVar17 + 0x3c8) + (longlong)iVar21 * 0x10) == lVar4)
          goto LAB_1492c7477;
          iVar21 = *(int *)((longlong)iVar21 * 0x10 + *(longlong *)(lVar17 + 0x3c8) + 8);
        } while (iVar21 != -1);
      }
    }
  }
LAB_1492c74a2:
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  uVar16 = DAT_14c846518._4_4_;
  uVar15 = (undefined4)DAT_14c846518;
  uVar14 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_2 + 6) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar14;
  *(undefined4 *)(param_2 + 7) = uVar15;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar16;
  param_2[8] = DAT_14c846520;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_168);
}



// FUNCTION 1492c77e4 FUN_1492c77e4 body=296 status=ok
// SIG undefined FUN_1492c77e4(void)

void FUN_1492c77e4(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_5c;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar5 = (longlong)(int)uVar2;
  if (lVar5 != 0) {
    piVar4 = (int *)*param_1;
    local_5c = 0;
    bVar13 = param_2[1] == piVar4[1] && *piVar4 == *param_2;
    uVar10 = 0;
    do {
      uVar6 = (ulonglong)uVar10;
      uVar8 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar2) {
        uVar8 = uVar2;
      }
      piVar9 = piVar4 + uVar6 * 0x14 + 0x15;
      uVar11 = uVar10;
      uVar7 = uVar6;
      do {
        uVar7 = uVar7 + 1;
        uVar12 = uVar8;
        if (lVar5 <= (longlong)uVar7) break;
        piVar1 = piVar9 + -1;
        iVar3 = *piVar9;
        uVar11 = uVar11 + 1;
        piVar9 = piVar9 + 0x14;
        uVar12 = uVar11;
      } while (bVar13 == (iVar3 == param_2[1] && *piVar1 == *param_2));
      if (bVar13 == false) {
        if (local_5c != uVar10) {
          memmove(piVar4 + (longlong)(int)local_5c * 0x14,piVar4 + uVar6 * 0x14,
                  (longlong)(int)(uVar12 - uVar10) * 0x50);
        }
        local_5c = local_5c + (uVar12 - uVar10);
      }
      bVar13 = (bool)(bVar13 ^ 1);
      uVar10 = uVar12;
    } while ((longlong)uVar7 < lVar5);
    *(uint *)(param_1 + 1) = local_5c;
  }
  return;
}



// FUNCTION 1492c790c FUN_1492c790c body=238 status=ok
// SIG undefined FUN_1492c790c(void)

void FUN_1492c790c(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8 [10];
  undefined8 *local_78 [8];
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar2 = local_c8;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,8);
  local_78[0] = puVar2;
  local_38 = 1;
  *puVar2 = param_3;
  puVar4 = local_c8;
  for (lVar3 = 10; puVar2 = puVar2 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1492c4e7a(param_1,iVar1);
  }
  lVar3 = *param_1 + (longlong)iVar1 * 0x48;
  *(byte *)(lVar3 + 0x40) = *(byte *)(lVar3 + 0x40) & 0xfc | 2;
  FUN_1492c4f0e(lVar3,local_78);
  if (((local_38 >> 1 | ~local_38) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_e8);
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492c7a12 FUN_1492c7a12 body=167 status=ok
// SIG undefined FUN_1492c7a12(void)

void FUN_1492c7a12(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1492c7a8d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1492c7a8d;
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
LAB_1492c7a8d:
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
                    /* WARNING: Could not recover jumptable at 0x0001492c7aad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1492c7aba FUN_1492c7aba body=29 status=ok
// SIG undefined FUN_1492c7aba(void)

undefined8 FUN_1492c7aba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492c7ad8 FUN_1492c7ad8 body=268 status=ok
// SIG undefined FUN_1492c7ad8(void)

void FUN_1492c7ad8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  int param_5,undefined8 param_6)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  int local_90;
  undefined8 local_88;
  undefined4 local_78 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_5 == -1) {
    local_58 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = local_58;
    local_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    local_78[0] = *(undefined4 *)(param_1 + 8);
    local_78[1] = *(undefined4 *)(param_1 + 0xc);
    local_78[2] = *(undefined4 *)(param_1 + 0x10);
    local_78[3] = *(undefined4 *)(param_1 + 0x14);
    uVar3 = 0;
    local_58._4_4_ = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
    uVar2 = local_58._4_4_;
    local_58 = uVar1;
    do {
      if ((uVar2 >> ((uint)uVar3 & 0x1f) & 1) != 0) {
        local_88 = param_6;
        local_90 = -1;
        local_98 = param_4;
        FUN_1492c7be5(param_2,local_78[uVar3],uVar3 & 0xffffffff,param_3);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 9);
  }
  else {
    uVar3 = 0;
    do {
      if ((*(uint *)(param_1 + 0x2c) >> ((uint)uVar3 & 0x1f) & 1) != 0) {
        local_88 = param_6;
        local_90 = param_5;
        local_98 = param_4;
        FUN_1492c7be5(param_2,((undefined4 *)(param_1 + 8))[uVar3],uVar3 & 0xffffffff,param_3);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 9);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492c7be5 FUN_1492c7be5 body=562 status=ok
// SIG undefined FUN_1492c7be5(void)

void FUN_1492c7be5(longlong param_1,float param_2,ulonglong param_3,float param_4,char param_5,
                  int param_6,undefined8 param_7)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [72];
  ulonglong local_50;
  
  bVar2 = (byte)param_3;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = (uint)param_3;
  if (param_5 == '\x01') {
    uVar4 = *(uint *)(param_1 + 0x24);
  }
  else {
    if (param_5 != '\x04') {
      if (param_6 == -1) {
        if (param_5 == '\x02') {
          param_2 = param_2 * param_4;
          if ((*(uint *)(param_1 + 0x70) >> (uVar5 & 0x1f) & 1) != 0) {
            param_2 = param_2 + *(float *)(param_1 + 0x4c + (param_3 & 0xff) * 4);
          }
          *(float *)(param_1 + 0x4c + (param_3 & 0xff) * 4) = param_2;
          *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1 << (bVar2 & 0x1f);
        }
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x98);
        param_3 = param_3 & 0xff;
        uVar3 = 1 << (bVar2 & 0x1f);
        if (((uVar4 >> (uVar5 & 0x1f) & 1) == 0) && ((*(uint *)(param_1 + 0x24) & uVar3) != 0)) {
          fVar1 = *(float *)(param_1 + 0x28 + (longlong)(int)uVar5 * 4);
          uVar5 = -(uint)(fVar1 != 0.0);
          *(float *)(param_1 + 0x74 + param_3 * 4) =
               *(float *)(param_1 + param_3 * 4) /
               (float)(~uVar5 & 0x3f800000 | (uint)fVar1 & uVar5);
          uVar4 = *(uint *)(param_1 + 0x98) | uVar3;
          *(uint *)(param_1 + 0x98) = uVar4;
        }
        if (param_5 == '\x10') {
          if ((uVar4 & uVar3) != 0) {
            param_2 = param_2 * param_4 + *(float *)(param_1 + 0x74 + param_3 * 4) * (1.0 - param_4)
            ;
          }
        }
        else {
          if (param_5 != '\x02') goto LAB_1492c7c85;
          param_2 = param_2 * param_4;
          if ((uVar4 & uVar3) != 0) {
            param_2 = param_2 + *(float *)(param_1 + 0x74 + param_3 * 4);
          }
        }
        *(float *)(param_1 + 0x74 + param_3 * 4) = param_2;
        *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | uVar3;
      }
      goto LAB_1492c7c85;
    }
    if (*(char *)(param_1 + 0xc4) == '\0') {
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(undefined1 *)(param_1 + 0xc4) = 1;
      FUN_1492c7e18(param_7,local_98);
      FUN_149212699(local_98,param_1 + 0x9c);
    }
    param_2 = param_2 + *(float *)(param_1 + 0x9c + (param_3 & 0xff) * 4);
    uVar4 = *(uint *)(param_1 + 0x24);
  }
  param_2 = param_2 * param_4;
  if ((uVar4 >> (uVar5 & 0x1f) & 1) != 0) {
    param_2 = param_2 + *(float *)(param_1 + (param_3 & 0xff) * 4);
  }
  *(float *)(param_1 + (param_3 & 0xff) * 4) = param_2;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1 << (bVar2 & 0x1f);
  *(float *)(param_1 + 0x28 + (longlong)(int)uVar5 * 4) =
       param_4 + *(float *)(param_1 + 0x28 + (longlong)(int)uVar5 * 4);
LAB_1492c7c85:
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492c7e18 FUN_1492c7e18 body=302 status=ok
// SIG undefined FUN_1492c7e18(void)

undefined8 * FUN_1492c7e18(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[2] == 0) {
    iVar8 = 0;
    iVar6 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    iVar6 = (int)local_38;
    iVar8 = local_38._4_4_;
  }
  plVar3 = (longlong *)*param_1;
  if ((longlong)(int)plVar3[4] != 0) {
    lVar4 = plVar3[3];
    lVar5 = 0;
    do {
      if ((*(int *)(lVar4 + lVar5) == iVar6) && (*(int *)(lVar4 + 4 + lVar5) == iVar8)) {
        puVar7 = (undefined8 *)(lVar4 + lVar5 + 8);
        lVar4 = 9;
        goto LAB_1492c7ee7;
      }
      lVar5 = lVar5 + 0x50;
    } while ((longlong)(int)plVar3[4] * 0x50 != lVar5);
  }
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_1[2],param_1[3]);
  if (param_1[3] == 0) {
    if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  lVar4 = *param_1;
  iVar2 = *(int *)(lVar4 + 0x20);
  *(uint *)(lVar4 + 0x20) = iVar2 + 1U;
  if (*(uint *)(lVar4 + 0x24) < iVar2 + 1U) {
    FUN_1492c7f48((longlong *)(lVar4 + 0x18),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar2 * 0x50);
  *puVar1 = CONCAT44(iVar8,iVar6);
  lVar4 = 9;
  puVar7 = param_2;
  param_2 = puVar1 + 1;
LAB_1492c7ee7:
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *param_2 = *puVar7;
    puVar7 = puVar7 + 1;
    param_2 = param_2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 1492c7f48 FUN_1492c7f48 body=147 status=ok
// SIG undefined FUN_1492c7f48(void)

void FUN_1492c7f48(longlong param_1,int param_2)

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



// FUNCTION 1492c7fdc FUN_1492c7fdc body=111 status=ok
// SIG undefined FUN_1492c7fdc(void)

void FUN_1492c7fdc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x24) = iVar3;
    FUN_1492c804c(param_1,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}



// FUNCTION 1492c804c FUN_1492c804c body=140 status=ok
// SIG undefined FUN_1492c804c(void)

void FUN_1492c804c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,0xc);
  return;
}



// FUNCTION 1492c80d8 FUN_1492c80d8 body=111 status=ok
// SIG undefined FUN_1492c80d8(void)

void FUN_1492c80d8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x24) = iVar3;
    FUN_149284a8a(param_1,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}



// FUNCTION 1492c8148 FUN_1492c8148 body=111 status=ok
// SIG undefined FUN_1492c8148(void)

void FUN_1492c8148(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = iVar3;
    FUN_149284c82(param_1,*(undefined4 *)(param_1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 1492c81b8 FUN_1492c81b8 body=111 status=ok
// SIG undefined FUN_1492c81b8(void)

void FUN_1492c81b8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x24) = iVar3;
    FUN_149284b86(param_1,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}



// FUNCTION 1492c8228 FUN_1492c8228 body=111 status=ok
// SIG undefined FUN_1492c8228(void)

void FUN_1492c8228(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = iVar3;
    FUN_1492c8298(param_1,*(undefined4 *)(param_1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 1492c8298 FUN_1492c8298 body=140 status=ok
// SIG undefined FUN_1492c8298(void)

void FUN_1492c8298(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0x18);
  return;
}



// FUNCTION 1492c8324 FUN_1492c8324 body=94 status=ok
// SIG undefined FUN_1492c8324(void)

void FUN_1492c8324(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 5,0);
      iVar1 = (int)(uVar2 >> 5);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = iVar3;
    FUN_1492c8382(param_1,*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}



// FUNCTION 1492c8382 FUN_1492c8382 body=132 status=ok
// SIG undefined FUN_1492c8382(void)

void FUN_1492c8382(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,0x20);
  return;
}



// FUNCTION 1492c8406 FUN_1492c8406 body=111 status=ok
// SIG undefined FUN_1492c8406(void)

void FUN_1492c8406(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = iVar3;
    FUN_1492c8476(param_1,*(undefined4 *)(param_1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 1492c8476 FUN_1492c8476 body=140 status=ok
// SIG undefined FUN_1492c8476(void)

void FUN_1492c8476(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0x18);
  return;
}



// FUNCTION 1492c8502 FUN_1492c8502 body=120 status=ok
// SIG undefined FUN_1492c8502(void)

void FUN_1492c8502(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,0);
      iVar2 = (int)(uVar1 / 0x50);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0xac)) {
    *(int *)(param_1 + 0xac) = iVar3;
    FUN_1492c857a(param_1,*(undefined4 *)(param_1 + 0xa8));
    return;
  }
  return;
}



// FUNCTION 1492c857a FUN_1492c857a body=149 status=ok
// SIG undefined FUN_1492c857a(void)

void FUN_1492c857a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa0);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x50);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa0,0,param_3,0x50);
    memmove(*(void **)((longlong)param_1 + 0xa0),param_1,(longlong)param_2 * 0x50);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa0,param_2,param_3,0x50);
  return;
}



// FUNCTION 1492c8610 FUN_1492c8610 body=111 status=ok
// SIG undefined FUN_1492c8610(void)

void FUN_1492c8610(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x24) = iVar3;
    FUN_149284d7e(param_1,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}



// FUNCTION 1492c8680 FUN_1492c8680 body=139 status=ok
// SIG undefined FUN_1492c8680(void)

void FUN_1492c8680(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xc,0);
      iVar5 = (int)(uVar4 / 0xc);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x24) = iVar6;
    FUN_1492c804c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492c870c FUN_1492c870c body=139 status=ok
// SIG undefined FUN_1492c870c(void)

void FUN_1492c870c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x3c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      iVar5 = (int)(uVar4 / 0x18);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar6;
    FUN_149284c82(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492c8798 FUN_1492c8798 body=139 status=ok
// SIG undefined FUN_1492c8798(void)

void FUN_1492c8798(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xc,0);
      iVar5 = (int)(uVar4 / 0xc);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x24) = iVar6;
    FUN_149284d7e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}


