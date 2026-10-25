// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1486c8fe6 FUN_1486c8fe6 body=59 status=ok
// SIG undefined FUN_1486c8fe6(void)

undefined8 FUN_1486c8fe6(longlong *param_1)

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



// FUNCTION 1486c9032 FUN_1486c9032 body=57 status=ok
// SIG undefined FUN_1486c9032(void)

void FUN_1486c9032(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_2 + 9);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1486c90ba FUN_1486c90ba body=60 status=ok
// SIG undefined FUN_1486c90ba(void)

undefined8 * FUN_1486c90ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c90f6 FUN_1486c90f6 body=55 status=ok
// SIG undefined FUN_1486c90f6(void)

void FUN_1486c90f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60790 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60790 =
         FUN_140002ddd(FUN_1464ed649,uVar1,L"GbxMomentNodeSettings_ContinueMissionExecution");
  }
  return;
}



// FUNCTION 1486c91d4 FUN_1486c91d4 body=54 status=ok
// SIG undefined FUN_1486c91d4(void)

undefined1 FUN_1486c91d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486c9232 FUN_1486c9232 body=59 status=ok
// SIG undefined FUN_1486c9232(void)

undefined8 FUN_1486c9232(longlong *param_1)

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



// FUNCTION 1486c92c6 FUN_1486c92c6 body=55 status=ok
// SIG undefined FUN_1486c92c6(void)

void FUN_1486c92c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb607a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb607a8 =
         FUN_140002ddd(FUN_1464ed6df,uVar1,L"GbxMomentNodeState_ContinueMissionExecution");
  }
  return;
}



// FUNCTION 1486c92fe FUN_1486c92fe body=65 status=ok
// SIG undefined FUN_1486c92fe(void)

void FUN_1486c92fe(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x98);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1ae780;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 5;
  return;
}



// FUNCTION 1486c9340 FUN_1486c9340 body=49 status=ok
// SIG undefined FUN_1486c9340(void)

void FUN_1486c9340(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1ae780;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 5;
  return;
}



// FUNCTION 1486c93b6 FUN_1486c93b6 body=63 status=ok
// SIG undefined FUN_1486c93b6(void)

undefined1 FUN_1486c93b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c9582(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 1486c941e FUN_1486c941e body=59 status=ok
// SIG undefined FUN_1486c941e(void)

undefined8 FUN_1486c941e(longlong *param_1)

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



// FUNCTION 1486c946a FUN_1486c946a body=40 status=ok
// SIG undefined FUN_1486c946a(void)

void FUN_1486c946a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_1486c953e(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1486c94e0 FUN_1486c94e0 body=38 status=ok
// SIG undefined FUN_1486c94e0(void)

undefined8 FUN_1486c94e0(undefined8 param_1,int param_2)

{
  FUN_1486c953e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c9506 FUN_1486c9506 body=55 status=ok
// SIG undefined FUN_1486c9506(void)

void FUN_1486c9506(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb607d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb607d8 = FUN_140002ddd(FUN_1464ed7a5,uVar1,L"GbxMomentNodeSettings_DebugPrint");
  }
  return;
}



// FUNCTION 1486c953e FUN_1486c953e body=67 status=ok
// SIG undefined FUN_1486c953e(void)

void FUN_1486c953e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1ae780;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486c9582 FUN_1486c9582 body=105 status=ok
// SIG undefined FUN_1486c9582(void)

longlong FUN_1486c9582(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  return param_1;
}



// FUNCTION 1486c9692 FUN_1486c9692 body=54 status=ok
// SIG undefined FUN_1486c9692(void)

undefined1 FUN_1486c9692(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486c96f0 FUN_1486c96f0 body=59 status=ok
// SIG undefined FUN_1486c96f0(void)

undefined8 FUN_1486c96f0(longlong *param_1)

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



// FUNCTION 1486c9784 FUN_1486c9784 body=55 status=ok
// SIG undefined FUN_1486c9784(void)

void FUN_1486c9784(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb607f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb607f0 = FUN_140002ddd(FUN_1464ed83b,uVar1,L"GbxMomentNodeState_DebugPrint");
  }
  return;
}



// FUNCTION 1486c97bc FUN_1486c97bc body=90 status=ok
// SIG undefined FUN_1486c97bc(void)

void FUN_1486c97bc(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1aebf0;
  param_2[0x10] = 0;
  *(undefined2 *)(param_2 + 0x14) = 4;
  *(undefined4 *)(param_2 + 0x11) = 0x40000000;
  *(undefined1 *)(param_2 + 0x15) = 3;
  *(char *)(param_2 + 0x16) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  return;
}



// FUNCTION 1486c983e FUN_1486c983e body=181 status=ok
// SIG undefined FUN_1486c983e(void)

undefined8 FUN_1486c983e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + 0x28 + lVar10;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0xc) = uVar7;
      *(undefined4 *)(lVar2 + -8) = uVar8;
      *(undefined4 *)(lVar2 + -4) = uVar9;
      *(undefined4 *)(lVar2 + -0x20) = uVar3;
      *(undefined4 *)(lVar2 + -0x1c) = uVar4;
      *(undefined4 *)(lVar2 + -0x18) = uVar5;
      *(undefined4 *)(lVar2 + -0x14) = uVar6;
      FUN_1470d00c2(lVar2,lVar1 + 0x28);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x40);
      FUN_144983130(param_2 + lVar10 + 0x48,param_3 + lVar10 + 0x48);
      FUN_144983130(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      lVar10 = lVar10 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486c991c FUN_1486c991c body=59 status=ok
// SIG undefined FUN_1486c991c(void)

undefined8 FUN_1486c991c(longlong *param_1)

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



// FUNCTION 1486c99be FUN_1486c99be body=57 status=ok
// SIG undefined FUN_1486c99be(void)

void FUN_1486c99be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60808 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60808 = FUN_140002ddd(FUN_1464ed8d1,uVar1,L"GbxMomentNodeSettings_Delay");
  }
  return;
}



// FUNCTION 1486c99fc FUN_1486c99fc body=79 status=ok
// SIG undefined FUN_1486c99fc(void)

void FUN_1486c99fc(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x17) == '\x01') {
    *param_1 = &PTR_FUN_14b1aebf0;
    FUN_144a2da94(param_1 + 0x10);
    *param_1 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_1 + 9);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  return;
}



// FUNCTION 1486c9af6 FUN_1486c9af6 body=64 status=ok
// SIG undefined FUN_1486c9af6(void)

undefined1 FUN_1486c9af6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 1486c9b5e FUN_1486c9b5e body=59 status=ok
// SIG undefined FUN_1486c9b5e(void)

undefined8 FUN_1486c9b5e(longlong *param_1)

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



// FUNCTION 1486c9bf4 FUN_1486c9bf4 body=59 status=ok
// SIG undefined FUN_1486c9bf4(void)

void FUN_1486c9bf4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x88);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1af060;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 1486c9c30 FUN_1486c9c30 body=43 status=ok
// SIG undefined FUN_1486c9c30(void)

void FUN_1486c9c30(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1af060;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 1486c9ca0 FUN_1486c9ca0 body=119 status=ok
// SIG undefined FUN_1486c9ca0(void)

undefined8 FUN_1486c9ca0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x40);
      uVar2 = *(undefined4 *)(param_3 + -0x3c);
      uVar3 = *(undefined4 *)(param_3 + -0x38);
      uVar4 = *(undefined4 *)(param_3 + -0x34);
      uVar5 = *(undefined4 *)(param_3 + -0x2c);
      uVar6 = *(undefined4 *)(param_3 + -0x28);
      uVar7 = *(undefined4 *)(param_3 + -0x24);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x2c) = uVar5;
      *(undefined4 *)(param_2 + -0x28) = uVar6;
      *(undefined4 *)(param_2 + -0x24) = uVar7;
      *(undefined4 *)(param_2 + -0x40) = uVar1;
      *(undefined4 *)(param_2 + -0x3c) = uVar2;
      *(undefined4 *)(param_2 + -0x38) = uVar3;
      *(undefined4 *)(param_2 + -0x34) = uVar4;
      FUN_1470d00c2(param_2 + -0x20,param_3 + -0x20);
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_144983130(param_2,param_3);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
      param_3 = param_3 + 0x88;
      param_2 = param_2 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486c9d40 FUN_1486c9d40 body=59 status=ok
// SIG undefined FUN_1486c9d40(void)

undefined8 FUN_1486c9d40(longlong *param_1)

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



// FUNCTION 1486c9d8c FUN_1486c9d8c body=57 status=ok
// SIG undefined FUN_1486c9d8c(void)

void FUN_1486c9d8c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_2 + 9);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 1486c9e14 FUN_1486c9e14 body=60 status=ok
// SIG undefined FUN_1486c9e14(void)

undefined8 * FUN_1486c9e14(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486c9e50 FUN_1486c9e50 body=55 status=ok
// SIG undefined FUN_1486c9e50(void)

void FUN_1486c9e50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60838 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60838 =
         FUN_140002ddd(FUN_1464ed9c7,uVar1,L"GbxMomentNodeSettings_DialogWaitConversation");
  }
  return;
}



// FUNCTION 1486c9f2e FUN_1486c9f2e body=54 status=ok
// SIG undefined FUN_1486c9f2e(void)

undefined1 FUN_1486c9f2e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486c9f8c FUN_1486c9f8c body=59 status=ok
// SIG undefined FUN_1486c9f8c(void)

undefined8 FUN_1486c9f8c(longlong *param_1)

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



// FUNCTION 1486ca020 FUN_1486ca020 body=55 status=ok
// SIG undefined FUN_1486ca020(void)

void FUN_1486ca020(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60850 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60850 = FUN_140002ddd(FUN_1464eda5d,uVar1,L"GbxMomentNodeState_DialogWaitConversation");
  }
  return;
}



// FUNCTION 1486ca058 FUN_1486ca058 body=107 status=ok
// SIG undefined FUN_1486ca058(void)

void FUN_1486ca058(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1af700;
  param_2[0x10] = 0;
  *(undefined2 *)(param_2 + 0x14) = 4;
  *(undefined4 *)(param_2 + 0x11) = 0x40000000;
  *(undefined1 *)(param_2 + 0x15) = 3;
  *(char *)(param_2 + 0x16) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined1 *)(param_2 + 0x19) = 0;
  return;
}



// FUNCTION 1486ca0ec FUN_1486ca0ec body=63 status=ok
// SIG undefined FUN_1486ca0ec(void)

undefined1 FUN_1486ca0ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486ca254(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 1486ca154 FUN_1486ca154 body=59 status=ok
// SIG undefined FUN_1486ca154(void)

undefined8 FUN_1486ca154(longlong *param_1)

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



// FUNCTION 1486ca1a0 FUN_1486ca1a0 body=40 status=ok
// SIG undefined FUN_1486ca1a0(void)

void FUN_1486ca1a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_145d6b412(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 1486ca216 FUN_1486ca216 body=57 status=ok
// SIG undefined FUN_1486ca216(void)

void FUN_1486ca216(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60880 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60880 = FUN_140002ddd(FUN_1464edb23,uVar1,L"GbxMomentNodeSettings_DirectorNote");
  }
  return;
}



// FUNCTION 1486ca254 FUN_1486ca254 body=122 status=ok
// SIG undefined FUN_1486ca254(void)

longlong FUN_1486ca254(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144a787a6(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
  return param_1;
}



// FUNCTION 1486ca37a FUN_1486ca37a body=64 status=ok
// SIG undefined FUN_1486ca37a(void)

undefined1 FUN_1486ca37a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 1486ca3e2 FUN_1486ca3e2 body=59 status=ok
// SIG undefined FUN_1486ca3e2(void)

undefined8 FUN_1486ca3e2(longlong *param_1)

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



// FUNCTION 1486ca476 FUN_1486ca476 body=55 status=ok
// SIG undefined FUN_1486ca476(void)

void FUN_1486ca476(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60898 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60898 = FUN_140002ddd(FUN_1464edb82,uVar1,L"GbxMomentNodeState_DirectorNote");
  }
  return;
}



// FUNCTION 1486ca4ae FUN_1486ca4ae body=32 status=ok
// SIG undefined FUN_1486ca4ae(void)

void FUN_1486ca4ae(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1afb80;
  return;
}



// FUNCTION 1486ca4f6 FUN_1486ca4f6 body=111 status=ok
// SIG undefined FUN_1486ca4f6(void)

undefined8 FUN_1486ca4f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x40);
      uVar2 = *(undefined4 *)(param_3 + -0x3c);
      uVar3 = *(undefined4 *)(param_3 + -0x38);
      uVar4 = *(undefined4 *)(param_3 + -0x34);
      uVar5 = *(undefined4 *)(param_3 + -0x2c);
      uVar6 = *(undefined4 *)(param_3 + -0x28);
      uVar7 = *(undefined4 *)(param_3 + -0x24);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x2c) = uVar5;
      *(undefined4 *)(param_2 + -0x28) = uVar6;
      *(undefined4 *)(param_2 + -0x24) = uVar7;
      *(undefined4 *)(param_2 + -0x40) = uVar1;
      *(undefined4 *)(param_2 + -0x3c) = uVar2;
      *(undefined4 *)(param_2 + -0x38) = uVar3;
      *(undefined4 *)(param_2 + -0x34) = uVar4;
      FUN_1470d00c2(param_2 + -0x20,param_3 + -0x20);
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_144983130(param_2,param_3);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486ca58e FUN_1486ca58e body=59 status=ok
// SIG undefined FUN_1486ca58e(void)

undefined8 FUN_1486ca58e(longlong *param_1)

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



// FUNCTION 1486ca5da FUN_1486ca5da body=57 status=ok
// SIG undefined FUN_1486ca5da(void)

void FUN_1486ca5da(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_2 + 9);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1486ca70a FUN_1486ca70a body=54 status=ok
// SIG undefined FUN_1486ca70a(void)

undefined1 FUN_1486ca70a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486ca768 FUN_1486ca768 body=59 status=ok
// SIG undefined FUN_1486ca768(void)

undefined8 FUN_1486ca768(longlong *param_1)

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



// FUNCTION 1486ca7fe FUN_1486ca7fe body=76 status=ok
// SIG undefined FUN_1486ca7fe(void)

void FUN_1486ca7fe(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xa8);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1afff0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 1486ca84a FUN_1486ca84a body=60 status=ok
// SIG undefined FUN_1486ca84a(void)

void FUN_1486ca84a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1afff0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 1486ca8ca FUN_1486ca8ca body=63 status=ok
// SIG undefined FUN_1486ca8ca(void)

undefined1 FUN_1486ca8ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486caa96(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 1486ca932 FUN_1486ca932 body=59 status=ok
// SIG undefined FUN_1486ca932(void)

undefined8 FUN_1486ca932(longlong *param_1)

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



// FUNCTION 1486ca97e FUN_1486ca97e body=40 status=ok
// SIG undefined FUN_1486ca97e(void)

void FUN_1486ca97e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1486caa52(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1486ca9f4 FUN_1486ca9f4 body=38 status=ok
// SIG undefined FUN_1486ca9f4(void)

undefined8 FUN_1486ca9f4(undefined8 param_1,int param_2)

{
  FUN_1486caa52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486caa1a FUN_1486caa1a body=55 status=ok
// SIG undefined FUN_1486caa1a(void)

void FUN_1486caa1a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb608e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb608e0 = FUN_140002ddd(FUN_1464edd0f,uVar1,L"GbxMomentNodeSettings_EndMoment");
  }
  return;
}



// FUNCTION 1486caa52 FUN_1486caa52 body=67 status=ok
// SIG undefined FUN_1486caa52(void)

void FUN_1486caa52(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1afff0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486caa96 FUN_1486caa96 body=121 status=ok
// SIG undefined FUN_1486caa96(void)

longlong FUN_1486caa96(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  FUN_144a787a6(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 1486cabb6 FUN_1486cabb6 body=54 status=ok
// SIG undefined FUN_1486cabb6(void)

undefined1 FUN_1486cabb6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486cac14 FUN_1486cac14 body=59 status=ok
// SIG undefined FUN_1486cac14(void)

undefined8 FUN_1486cac14(longlong *param_1)

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



// FUNCTION 1486caca8 FUN_1486caca8 body=55 status=ok
// SIG undefined FUN_1486caca8(void)

void FUN_1486caca8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb608f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb608f8 = FUN_140002ddd(FUN_1464edda5,uVar1,L"GbxMomentNodeState_EndMoment");
  }
  return;
}



// FUNCTION 1486cace0 FUN_1486cace0 body=66 status=ok
// SIG undefined FUN_1486cace0(void)

void FUN_1486cace0(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b0460;
  return;
}



// FUNCTION 1486cad22 FUN_1486cad22 body=32 status=ok
// SIG undefined FUN_1486cad22(void)

void FUN_1486cad22(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b0460;
  return;
}



// FUNCTION 1486cad86 FUN_1486cad86 body=111 status=ok
// SIG undefined FUN_1486cad86(void)

undefined8 FUN_1486cad86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x40);
      uVar2 = *(undefined4 *)(param_3 + -0x3c);
      uVar3 = *(undefined4 *)(param_3 + -0x38);
      uVar4 = *(undefined4 *)(param_3 + -0x34);
      uVar5 = *(undefined4 *)(param_3 + -0x2c);
      uVar6 = *(undefined4 *)(param_3 + -0x28);
      uVar7 = *(undefined4 *)(param_3 + -0x24);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x2c) = uVar5;
      *(undefined4 *)(param_2 + -0x28) = uVar6;
      *(undefined4 *)(param_2 + -0x24) = uVar7;
      *(undefined4 *)(param_2 + -0x40) = uVar1;
      *(undefined4 *)(param_2 + -0x3c) = uVar2;
      *(undefined4 *)(param_2 + -0x38) = uVar3;
      *(undefined4 *)(param_2 + -0x34) = uVar4;
      FUN_1470d00c2(param_2 + -0x20,param_3 + -0x20);
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_144983130(param_2,param_3);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486cae1e FUN_1486cae1e body=59 status=ok
// SIG undefined FUN_1486cae1e(void)

undefined8 FUN_1486cae1e(longlong *param_1)

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



// FUNCTION 1486cae6a FUN_1486cae6a body=57 status=ok
// SIG undefined FUN_1486cae6a(void)

void FUN_1486cae6a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_2 + 9);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1486caef2 FUN_1486caef2 body=60 status=ok
// SIG undefined FUN_1486caef2(void)

undefined8 * FUN_1486caef2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486caf2e FUN_1486caf2e body=55 status=ok
// SIG undefined FUN_1486caf2e(void)

void FUN_1486caf2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60910 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60910 = FUN_140002ddd(FUN_1464ede3b,uVar1,L"GbxMomentNodeSettings_Event");
  }
  return;
}



// FUNCTION 1486cb00c FUN_1486cb00c body=54 status=ok
// SIG undefined FUN_1486cb00c(void)

undefined1 FUN_1486cb00c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486cb06a FUN_1486cb06a body=59 status=ok
// SIG undefined FUN_1486cb06a(void)

undefined8 FUN_1486cb06a(longlong *param_1)

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



// FUNCTION 1486cb0fe FUN_1486cb0fe body=55 status=ok
// SIG undefined FUN_1486cb0fe(void)

void FUN_1486cb0fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60928 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60928 = FUN_140002ddd(FUN_1464eded1,uVar1,L"GbxMomentNodeState_Event");
  }
  return;
}



// FUNCTION 1486cb136 FUN_1486cb136 body=84 status=ok
// SIG undefined FUN_1486cb136(void)

void FUN_1486cb136(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf0);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b08d0;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  FUN_14044066a(param_2 + 0x17,0x11,7);
  return;
}



// FUNCTION 1486cb18a FUN_1486cb18a body=68 status=ok
// SIG undefined FUN_1486cb18a(void)

void FUN_1486cb18a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b08d0;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  FUN_14044066a(param_2 + 0x17,0x11,7);
  return;
}



// FUNCTION 1486cb212 FUN_1486cb212 body=63 status=ok
// SIG undefined FUN_1486cb212(void)

undefined1 FUN_1486cb212(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486cb3e4(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 1486cb27a FUN_1486cb27a body=59 status=ok
// SIG undefined FUN_1486cb27a(void)

undefined8 FUN_1486cb27a(longlong *param_1)

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



// FUNCTION 1486cb2c6 FUN_1486cb2c6 body=40 status=ok
// SIG undefined FUN_1486cb2c6(void)

void FUN_1486cb2c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_1486cb39a(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1486cb33c FUN_1486cb33c body=38 status=ok
// SIG undefined FUN_1486cb33c(void)

undefined8 FUN_1486cb33c(undefined8 param_1,int param_2)

{
  FUN_1486cb39a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486cb362 FUN_1486cb362 body=55 status=ok
// SIG undefined FUN_1486cb362(void)

void FUN_1486cb362(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60940 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60940 =
         FUN_140002ddd(FUN_1464edf67,uVar1,L"GbxMomentNodeSettings_Event_ArrivedAtAINode");
  }
  return;
}



// FUNCTION 1486cb39a FUN_1486cb39a body=74 status=ok
// SIG undefined FUN_1486cb39a(void)

void FUN_1486cb39a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1b08d0;
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486cb3e4 FUN_1486cb3e4 body=113 status=ok
// SIG undefined FUN_1486cb3e4(void)

longlong FUN_1486cb3e4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  return param_1;
}



// FUNCTION 1486cb504 FUN_1486cb504 body=70 status=ok
// SIG undefined FUN_1486cb504(void)

undefined1 FUN_1486cb504(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x74);
    uVar2 = *(undefined4 *)(param_3 + 0x78);
    uVar3 = *(undefined4 *)(param_3 + 0x7c);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    *(undefined4 *)(param_2 + 0x74) = uVar1;
    *(undefined4 *)(param_2 + 0x78) = uVar2;
    *(undefined4 *)(param_2 + 0x7c) = uVar3;
    param_2 = param_2 + 0x80;
    param_3 = param_3 + 0x80;
  }
  return 1;
}



// FUNCTION 1486cb572 FUN_1486cb572 body=59 status=ok
// SIG undefined FUN_1486cb572(void)

undefined8 FUN_1486cb572(longlong *param_1)

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



// FUNCTION 1486cb60c FUN_1486cb60c body=55 status=ok
// SIG undefined FUN_1486cb60c(void)

void FUN_1486cb60c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60958 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60958 = FUN_140002ddd(FUN_1464edffd,uVar1,L"GbxMomentNodeState_Event_ArrivedAtAINode");
  }
  return;
}



// FUNCTION 1486cb644 FUN_1486cb644 body=98 status=ok
// SIG undefined FUN_1486cb644(void)

void FUN_1486cb644(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd8);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b0d40;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0xff;
  FUN_14044066a(param_2 + 0x14,0x11,7);
  return;
}



// FUNCTION 1486cb6a6 FUN_1486cb6a6 body=82 status=ok
// SIG undefined FUN_1486cb6a6(void)

void FUN_1486cb6a6(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b0d40;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0xff;
  FUN_14044066a(param_2 + 0x14,0x11,7);
  return;
}



// FUNCTION 1486cb73c FUN_1486cb73c body=63 status=ok
// SIG undefined FUN_1486cb73c(void)

undefined1 FUN_1486cb73c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486cb8d4(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 1486cb7a4 FUN_1486cb7a4 body=59 status=ok
// SIG undefined FUN_1486cb7a4(void)

undefined8 FUN_1486cb7a4(longlong *param_1)

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



// FUNCTION 1486cb846 FUN_1486cb846 body=82 status=ok
// SIG undefined FUN_1486cb846(void)

undefined8 * FUN_1486cb846(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b0d40;
  FUN_144a2da94(param_1 + 0x14);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486cb898 FUN_1486cb898 body=55 status=ok
// SIG undefined FUN_1486cb898(void)

void FUN_1486cb898(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60978 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60978 = FUN_140002ddd(FUN_1464ee093,uVar1,L"GbxMomentNodeSettings_GbxFeedback");
  }
  return;
}



// FUNCTION 1486cb8d4 FUN_1486cb8d4 body=125 status=ok
// SIG undefined FUN_1486cb8d4(void)

longlong FUN_1486cb8d4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_1486cb952(param_1 + 0x80,param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  FUN_144983130(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 1486cb952 FUN_1486cb952 body=84 status=ok
// SIG undefined FUN_1486cb952(void)

longlong * FUN_1486cb952(longlong *param_1,longlong *param_2)

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



// FUNCTION 1486cb9a8 FUN_1486cb9a8 body=79 status=ok
// SIG undefined FUN_1486cb9a8(void)

void FUN_1486cb9a8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    *param_1 = &PTR_FUN_14b1b0d40;
    FUN_144a2da94(param_1 + 0x14);
    *param_1 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_1 + 9);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  return;
}



// FUNCTION 1486cba9e FUN_1486cba9e body=54 status=ok
// SIG undefined FUN_1486cba9e(void)

undefined1 FUN_1486cba9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486cbafc FUN_1486cbafc body=59 status=ok
// SIG undefined FUN_1486cbafc(void)

undefined8 FUN_1486cbafc(longlong *param_1)

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



// FUNCTION 1486cbb90 FUN_1486cbb90 body=55 status=ok
// SIG undefined FUN_1486cbb90(void)

void FUN_1486cbb90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60990 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60990 = FUN_140002ddd(FUN_1464ee129,uVar1,L"GbxMomentNodeState_GbxFeedback");
  }
  return;
}



// FUNCTION 1486cbbc8 FUN_1486cbbc8 body=99 status=ok
// SIG undefined FUN_1486cbbc8(void)

void FUN_1486cbbc8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb8);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b11b0;
  param_2[0x10] = 0;
  *(undefined2 *)(param_2 + 0x14) = 4;
  *(undefined4 *)(param_2 + 0x11) = 1;
  *(undefined1 *)(param_2 + 0x15) = 1;
  *(bool *)(param_2 + 0x16) = (DAT_14c9a8634 & 0x20) == 0;
  return;
}



// FUNCTION 1486cbc2c FUN_1486cbc2c body=83 status=ok
// SIG undefined FUN_1486cbc2c(void)

void FUN_1486cbc2c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b11b0;
  param_2[0x10] = 0;
  *(undefined2 *)(param_2 + 0x14) = 4;
  *(undefined4 *)(param_2 + 0x11) = 1;
  *(undefined1 *)(param_2 + 0x15) = 1;
  *(bool *)(param_2 + 0x16) = (DAT_14c9a8634 & 0x20) == 0;
  return;
}



// FUNCTION 1486cbcc4 FUN_1486cbcc4 body=181 status=ok
// SIG undefined FUN_1486cbcc4(void)

undefined8 FUN_1486cbcc4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + 0x28 + lVar10;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0xc) = uVar7;
      *(undefined4 *)(lVar2 + -8) = uVar8;
      *(undefined4 *)(lVar2 + -4) = uVar9;
      *(undefined4 *)(lVar2 + -0x20) = uVar3;
      *(undefined4 *)(lVar2 + -0x1c) = uVar4;
      *(undefined4 *)(lVar2 + -0x18) = uVar5;
      *(undefined4 *)(lVar2 + -0x14) = uVar6;
      FUN_1470d00c2(lVar2,lVar1 + 0x28);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x40);
      FUN_144983130(param_2 + lVar10 + 0x48,param_3 + lVar10 + 0x48);
      FUN_144983130(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      lVar10 = lVar10 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486cbda2 FUN_1486cbda2 body=59 status=ok
// SIG undefined FUN_1486cbda2(void)

undefined8 FUN_1486cbda2(longlong *param_1)

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



// FUNCTION 1486cbe44 FUN_1486cbe44 body=82 status=ok
// SIG undefined FUN_1486cbe44(void)

undefined8 * FUN_1486cbe44(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b11b0;
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486cbe96 FUN_1486cbe96 body=55 status=ok
// SIG undefined FUN_1486cbe96(void)

void FUN_1486cbe96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb609a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb609a8 = FUN_140002ddd(FUN_1464ee1bf,uVar1,L"GbxMomentNodeSettings_If");
  }
  return;
}



// FUNCTION 1486cbed0 FUN_1486cbed0 body=79 status=ok
// SIG undefined FUN_1486cbed0(void)

void FUN_1486cbed0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x17) == '\x01') {
    *param_1 = &PTR_FUN_14b1b11b0;
    FUN_144a2da94(param_1 + 0x10);
    *param_1 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_1 + 9);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  return;
}



// FUNCTION 1486cbfc6 FUN_1486cbfc6 body=54 status=ok
// SIG undefined FUN_1486cbfc6(void)

undefined1 FUN_1486cbfc6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486cc024 FUN_1486cc024 body=59 status=ok
// SIG undefined FUN_1486cc024(void)

undefined8 FUN_1486cc024(longlong *param_1)

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



// FUNCTION 1486cc0b8 FUN_1486cc0b8 body=55 status=ok
// SIG undefined FUN_1486cc0b8(void)

void FUN_1486cc0b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb609c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb609c0 = FUN_140002ddd(FUN_1464ee255,uVar1,L"GbxMomentNodeState_If");
  }
  return;
}



// FUNCTION 1486cc0f0 FUN_1486cc0f0 body=66 status=ok
// SIG undefined FUN_1486cc0f0(void)

void FUN_1486cc0f0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x90);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b1620;
  *(undefined1 *)(param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  return;
}



// FUNCTION 1486cc132 FUN_1486cc132 body=50 status=ok
// SIG undefined FUN_1486cc132(void)

void FUN_1486cc132(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b1620;
  *(undefined1 *)(param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  return;
}



// FUNCTION 1486cc1a8 FUN_1486cc1a8 body=125 status=ok
// SIG undefined FUN_1486cc1a8(void)

undefined8 FUN_1486cc1a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x40);
      uVar2 = *(undefined4 *)(param_3 + -0x3c);
      uVar3 = *(undefined4 *)(param_3 + -0x38);
      uVar4 = *(undefined4 *)(param_3 + -0x34);
      uVar5 = *(undefined4 *)(param_3 + -0x2c);
      uVar6 = *(undefined4 *)(param_3 + -0x28);
      uVar7 = *(undefined4 *)(param_3 + -0x24);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x2c) = uVar5;
      *(undefined4 *)(param_2 + -0x28) = uVar6;
      *(undefined4 *)(param_2 + -0x24) = uVar7;
      *(undefined4 *)(param_2 + -0x40) = uVar1;
      *(undefined4 *)(param_2 + -0x3c) = uVar2;
      *(undefined4 *)(param_2 + -0x38) = uVar3;
      *(undefined4 *)(param_2 + -0x34) = uVar4;
      FUN_1470d00c2(param_2 + -0x20,param_3 + -0x20);
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_144983130(param_2,param_3);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40);
      param_3 = param_3 + 0x90;
      param_2 = param_2 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486cc24e FUN_1486cc24e body=59 status=ok
// SIG undefined FUN_1486cc24e(void)

undefined8 FUN_1486cc24e(longlong *param_1)

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



// FUNCTION 1486cc29a FUN_1486cc29a body=57 status=ok
// SIG undefined FUN_1486cc29a(void)

void FUN_1486cc29a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_2 + 9);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 1486cc322 FUN_1486cc322 body=60 status=ok
// SIG undefined FUN_1486cc322(void)

undefined8 * FUN_1486cc322(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486cc35e FUN_1486cc35e body=55 status=ok
// SIG undefined FUN_1486cc35e(void)

void FUN_1486cc35e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb609d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb609d8 = FUN_140002ddd(FUN_1464ee2eb,uVar1,L"GbxMomentNodeSettings_InterruptDialog");
  }
  return;
}



// FUNCTION 1486cc442 FUN_1486cc442 body=60 status=ok
// SIG undefined FUN_1486cc442(void)

undefined1 FUN_1486cc442(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined1 *)(param_2 + 0x70) = *(undefined1 *)(param_3 + 0x70);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 1486cc4a6 FUN_1486cc4a6 body=59 status=ok
// SIG undefined FUN_1486cc4a6(void)

undefined8 FUN_1486cc4a6(longlong *param_1)

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



// FUNCTION 1486cc53a FUN_1486cc53a body=55 status=ok
// SIG undefined FUN_1486cc53a(void)

void FUN_1486cc53a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb609f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb609f0 = FUN_140002ddd(FUN_1464ee381,uVar1,L"GbxMomentNodeState_InterruptDialog");
  }
  return;
}



// FUNCTION 1486cc572 FUN_1486cc572 body=51 status=ok
// SIG undefined FUN_1486cc572(void)

void FUN_1486cc572(undefined8 param_1,undefined8 *param_2)

{
  FUN_14601a14c(param_2);
  *param_2 = &PTR_FUN_14b1b1a90;
  FUN_14044066a(param_2 + 0x28,0x11,7);
  return;
}



// FUNCTION 1486cc5ce FUN_1486cc5ce body=105 status=ok
// SIG undefined FUN_1486cc5ce(void)

undefined1 FUN_1486cc5ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486cc7d4(param_2,param_3);
    FUN_144983130(param_2 + 0x140,param_3 + 0x140);
    param_3 = param_3 + 0x178;
    param_2 = param_2 + 0x178;
  }
  return 1;
}



// FUNCTION 1486cc660 FUN_1486cc660 body=59 status=ok
// SIG undefined FUN_1486cc660(void)

undefined8 FUN_1486cc660(longlong *param_1)

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



// FUNCTION 1486cc6ac FUN_1486cc6ac body=62 status=ok
// SIG undefined FUN_1486cc6ac(void)

void FUN_1486cc6ac(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2f) == '\x01') {
    *param_2 = &PTR_FUN_14b1b1a90;
    FUN_144a2da94(param_2 + 0x28);
    FUN_145d38eea(param_2);
    *(undefined1 *)(param_2 + 0x2f) = 0;
  }
  return;
}



// FUNCTION 1486cc738 FUN_1486cc738 body=57 status=ok
// SIG undefined FUN_1486cc738(void)

void FUN_1486cc738(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60a08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60a08 = FUN_140002ddd(FUN_1464ee417,uVar1,L"GbxMomentNodeSettings_LookAt");
  }
  return;
}



// FUNCTION 1486cc776 FUN_1486cc776 body=38 status=ok
// SIG undefined FUN_1486cc776(void)

undefined8 FUN_1486cc776(undefined8 param_1,int param_2)

{
  FUN_145d38eea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486cc79c FUN_1486cc79c body=55 status=ok
// SIG undefined FUN_1486cc79c(void)

void FUN_1486cc79c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60a98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60a98 = FUN_140002ddd(FUN_1464ee446,uVar1,L"GbxMomentNodeSettings_LookAt_Base");
  }
  return;
}



// FUNCTION 1486cc7d4 FUN_1486cc7d4 body=165 status=ok
// SIG undefined FUN_1486cc7d4(void)

longlong FUN_1486cc7d4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  FUN_144983130(param_1 + 200,param_2 + 200);
  FUN_144983130(param_1 + 0x100,param_2 + 0x100);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  return param_1;
}



// FUNCTION 1486cc87a FUN_1486cc87a body=123 status=ok
// SIG undefined FUN_1486cc87a(void)

void FUN_1486cc87a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x138);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined1 *)(param_2 + 0x1e) = 0xff;
  *(undefined1 *)(param_2 + 0x27) = 0xff;
  param_2[0x28] = 0x4120000000000000;
  *param_2 = &PTR_FUN_14b1b1dd0;
  return;
}



// FUNCTION 1486cc98c FUN_1486cc98c body=63 status=ok
// SIG undefined FUN_1486cc98c(void)

undefined1 FUN_1486cc98c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486ccb12(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 1486cc9f4 FUN_1486cc9f4 body=59 status=ok
// SIG undefined FUN_1486cc9f4(void)

undefined8 FUN_1486cc9f4(longlong *param_1)

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



// FUNCTION 1486cca40 FUN_1486cca40 body=38 status=ok
// SIG undefined FUN_1486cca40(void)

void FUN_1486cca40(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_1416659d8(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 1486ccab4 FUN_1486ccab4 body=38 status=ok
// SIG undefined FUN_1486ccab4(void)

undefined8 FUN_1486ccab4(undefined8 param_1,int param_2)

{
  FUN_1416659d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486ccada FUN_1486ccada body=55 status=ok
// SIG undefined FUN_1486ccada(void)

void FUN_1486ccada(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60ab0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60ab0 = FUN_140002ddd(FUN_1464ee4d7,uVar1,L"GbxMomentNodeState_LookAt_Base");
  }
  return;
}



// FUNCTION 1486ccb12 FUN_1486ccb12 body=401 status=ok
// SIG undefined FUN_1486ccb12(void)

longlong FUN_1486ccb12(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *_Src;
  longlong *_Dst;
  
  FUN_1486c86fa();
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  uVar4 = *(undefined4 *)(param_2 + 0x74);
  uVar5 = *(undefined4 *)(param_2 + 0x78);
  uVar6 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  _Dst = (longlong *)(param_1 + 0x88);
  _Src = (undefined8 *)(param_2 + 0x88);
  bVar1 = *(byte *)(param_1 + 0xa8);
  if (bVar1 == *(byte *)(param_2 + 0xa8)) {
    if (0x18 < *(ushort *)(param_2 + 0xa0)) {
      _Src = *(undefined8 **)(param_2 + 0x88);
    }
    if (0x18 < *(ushort *)(param_1 + 0xa0)) {
      _Dst = (longlong *)*_Dst;
    }
    uVar7 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar7);
    if (pcVar3 == (code *)0x0) {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
    }
    else {
      (*pcVar3)(_Dst,_Src);
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 != (code *)0x0) {
      plVar8 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0xa0)) {
        plVar8 = (longlong *)*_Dst;
      }
      (*pcVar3)(plVar8);
    }
    if (0x18 < *(ushort *)(param_1 + 0xa0)) {
      FUN_1400020a8(*_Dst);
    }
    bVar1 = *(byte *)(param_2 + 0xa8);
    uVar2 = *(ushort *)(param_2 + 0xa0);
    *(ushort *)(param_1 + 0xa0) = uVar2;
    plVar8 = _Dst;
    if (0x18 < uVar2) {
      plVar8 = (longlong *)FUN_14001cc68(uVar2,0);
      *_Dst = (longlong)plVar8;
      _Src = (undefined8 *)*_Src;
    }
    uVar7 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar7);
    if (pcVar3 == (code *)0x0) {
      memcpy(plVar8,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
    }
    else {
      (*pcVar3)(plVar8,_Src);
    }
    *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  }
  FUN_14186f05e(param_1 + 0xb0,param_2 + 0xb0);
  FUN_14186f05e(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  return param_1;
}



// FUNCTION 1486cccd4 FUN_1486cccd4 body=63 status=ok
// SIG undefined FUN_1486cccd4(void)

undefined1 FUN_1486cccd4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486cc7d4(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 1486ccd3c FUN_1486ccd3c body=59 status=ok
// SIG undefined FUN_1486ccd3c(void)

undefined8 FUN_1486ccd3c(longlong *param_1)

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



// FUNCTION 1486ccd88 FUN_1486ccd88 body=40 status=ok
// SIG undefined FUN_1486ccd88(void)

void FUN_1486ccd88(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_145d38eea(param_2);
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 1486cce00 FUN_1486cce00 body=123 status=ok
// SIG undefined FUN_1486cce00(void)

void FUN_1486cce00(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x138);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined1 *)(param_2 + 0x1e) = 0xff;
  *(undefined1 *)(param_2 + 0x27) = 0xff;
  param_2[0x28] = 0x4120000000000000;
  *param_2 = &PTR_FUN_14b1b2210;
  return;
}



// FUNCTION 1486ccf12 FUN_1486ccf12 body=63 status=ok
// SIG undefined FUN_1486ccf12(void)

undefined1 FUN_1486ccf12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486ccb12(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 1486ccf7a FUN_1486ccf7a body=59 status=ok
// SIG undefined FUN_1486ccf7a(void)

undefined8 FUN_1486ccf7a(longlong *param_1)

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



// FUNCTION 1486ccfc6 FUN_1486ccfc6 body=38 status=ok
// SIG undefined FUN_1486ccfc6(void)

void FUN_1486ccfc6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_1416659d8(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 1486cd03a FUN_1486cd03a body=38 status=ok
// SIG undefined FUN_1486cd03a(void)

undefined8 FUN_1486cd03a(undefined8 param_1,int param_2)

{
  FUN_1416659d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486cd060 FUN_1486cd060 body=55 status=ok
// SIG undefined FUN_1486cd060(void)

void FUN_1486cd060(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60a50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60a50 = FUN_140002ddd(FUN_1464ee598,uVar1,L"GbxMomentNodeState_LookAtPlayer");
  }
  return;
}



// FUNCTION 1486cd0ec FUN_1486cd0ec body=63 status=ok
// SIG undefined FUN_1486cd0ec(void)

undefined1 FUN_1486cd0ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486cc7d4(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 1486cd154 FUN_1486cd154 body=59 status=ok
// SIG undefined FUN_1486cd154(void)

undefined8 FUN_1486cd154(longlong *param_1)

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



// FUNCTION 1486cd1a0 FUN_1486cd1a0 body=40 status=ok
// SIG undefined FUN_1486cd1a0(void)

void FUN_1486cd1a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_145d38eea(param_2);
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 1486cd218 FUN_1486cd218 body=123 status=ok
// SIG undefined FUN_1486cd218(void)

void FUN_1486cd218(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x138);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined1 *)(param_2 + 0x1e) = 0xff;
  *(undefined1 *)(param_2 + 0x27) = 0xff;
  param_2[0x28] = 0x4120000000000000;
  *param_2 = &PTR_FUN_14b1b2590;
  return;
}



// FUNCTION 1486cd32a FUN_1486cd32a body=63 status=ok
// SIG undefined FUN_1486cd32a(void)

undefined1 FUN_1486cd32a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486ccb12(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 1486cd392 FUN_1486cd392 body=59 status=ok
// SIG undefined FUN_1486cd392(void)

undefined8 FUN_1486cd392(longlong *param_1)

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



// FUNCTION 1486cd3de FUN_1486cd3de body=38 status=ok
// SIG undefined FUN_1486cd3de(void)

void FUN_1486cd3de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_1416659d8(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 1486cd452 FUN_1486cd452 body=38 status=ok
// SIG undefined FUN_1486cd452(void)

undefined8 FUN_1486cd452(undefined8 param_1,int param_2)

{
  FUN_1416659d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486cd478 FUN_1486cd478 body=55 status=ok
// SIG undefined FUN_1486cd478(void)

void FUN_1486cd478(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60a80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60a80 = FUN_140002ddd(FUN_1464ee6c5,uVar1,L"GbxMomentNodeState_LookAtSpeaker");
  }
  return;
}



// FUNCTION 1486cd4b0 FUN_1486cd4b0 body=37 status=ok
// SIG undefined FUN_1486cd4b0(void)

void FUN_1486cd4b0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x140);
  FUN_14601a14c(param_2);
  return;
}



// FUNCTION 1486cd522 FUN_1486cd522 body=63 status=ok
// SIG undefined FUN_1486cd522(void)

undefined1 FUN_1486cd522(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486cc7d4(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 1486cd58a FUN_1486cd58a body=59 status=ok
// SIG undefined FUN_1486cd58a(void)

undefined8 FUN_1486cd58a(longlong *param_1)

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



// FUNCTION 1486cd5d6 FUN_1486cd5d6 body=40 status=ok
// SIG undefined FUN_1486cd5d6(void)

void FUN_1486cd5d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_145d38eea(param_2);
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 1486cd64e FUN_1486cd64e body=123 status=ok
// SIG undefined FUN_1486cd64e(void)

void FUN_1486cd64e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x138);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  *param_2 = &PTR_FUN_14b1b1e90;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined1 *)(param_2 + 0x1e) = 0xff;
  *(undefined1 *)(param_2 + 0x27) = 0xff;
  param_2[0x28] = 0x4120000000000000;
  return;
}



// FUNCTION 1486cd760 FUN_1486cd760 body=63 status=ok
// SIG undefined FUN_1486cd760(void)

undefined1 FUN_1486cd760(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486ccb12(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 1486cd7c8 FUN_1486cd7c8 body=59 status=ok
// SIG undefined FUN_1486cd7c8(void)

undefined8 FUN_1486cd7c8(longlong *param_1)

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



// FUNCTION 1486cd814 FUN_1486cd814 body=38 status=ok
// SIG undefined FUN_1486cd814(void)

void FUN_1486cd814(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_1416659d8(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 1486cd88a FUN_1486cd88a body=84 status=ok
// SIG undefined FUN_1486cd88a(void)

void FUN_1486cd88a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf0);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b2a70;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  FUN_14044066a(param_2 + 0x17,0x11,7);
  return;
}



// FUNCTION 1486cd8de FUN_1486cd8de body=68 status=ok
// SIG undefined FUN_1486cd8de(void)

void FUN_1486cd8de(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b2a70;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  FUN_14044066a(param_2 + 0x17,0x11,7);
  return;
}



// FUNCTION 1486cd966 FUN_1486cd966 body=63 status=ok
// SIG undefined FUN_1486cd966(void)

undefined1 FUN_1486cd966(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486cdb3c(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 1486cd9ce FUN_1486cd9ce body=59 status=ok
// SIG undefined FUN_1486cd9ce(void)

undefined8 FUN_1486cd9ce(longlong *param_1)

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



// FUNCTION 1486cda1a FUN_1486cda1a body=40 status=ok
// SIG undefined FUN_1486cda1a(void)

void FUN_1486cda1a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_1486cdaf2(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1486cda90 FUN_1486cda90 body=38 status=ok
// SIG undefined FUN_1486cda90(void)

undefined8 FUN_1486cda90(undefined8 param_1,int param_2)

{
  FUN_1486cdaf2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486cdab6 FUN_1486cdab6 body=55 status=ok
// SIG undefined FUN_1486cdab6(void)

void FUN_1486cdab6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60ac8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60ac8 = FUN_140002ddd(FUN_1464ee82b,uVar1,L"GbxMomentNodeSettings_MeleeAttack");
  }
  return;
}



// FUNCTION 1486cdaf2 FUN_1486cdaf2 body=74 status=ok
// SIG undefined FUN_1486cdaf2(void)

void FUN_1486cdaf2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1b2a70;
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486cdb3c FUN_1486cdb3c body=113 status=ok
// SIG undefined FUN_1486cdb3c(void)

longlong FUN_1486cdb3c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  return param_1;
}



// FUNCTION 1486cdc78 FUN_1486cdc78 body=96 status=ok
// SIG undefined FUN_1486cdc78(void)

undefined1 FUN_1486cdc78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x74);
    uVar2 = *(undefined4 *)(param_3 + 0x78);
    uVar3 = *(undefined4 *)(param_3 + 0x7c);
    uVar4 = *(undefined4 *)(param_3 + 0x80);
    uVar5 = *(undefined4 *)(param_3 + 0x84);
    uVar6 = *(undefined4 *)(param_3 + 0x88);
    uVar7 = *(undefined4 *)(param_3 + 0x8c);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    *(undefined4 *)(param_2 + 0x74) = uVar1;
    *(undefined4 *)(param_2 + 0x78) = uVar2;
    *(undefined4 *)(param_2 + 0x7c) = uVar3;
    *(undefined4 *)(param_2 + 0x80) = uVar4;
    *(undefined4 *)(param_2 + 0x84) = uVar5;
    *(undefined4 *)(param_2 + 0x88) = uVar6;
    *(undefined4 *)(param_2 + 0x8c) = uVar7;
    *(undefined1 *)(param_2 + 0x90) = *(undefined1 *)(param_3 + 0x90);
    param_2 = param_2 + 0x98;
    param_3 = param_3 + 0x98;
  }
  return 1;
}



// FUNCTION 1486cdd00 FUN_1486cdd00 body=59 status=ok
// SIG undefined FUN_1486cdd00(void)

undefined8 FUN_1486cdd00(longlong *param_1)

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



// FUNCTION 1486cdd9a FUN_1486cdd9a body=55 status=ok
// SIG undefined FUN_1486cdd9a(void)

void FUN_1486cdd9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60ae0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60ae0 = FUN_140002ddd(FUN_1464ee8c1,uVar1,L"GbxMomentNodeState_MeleeAttack");
  }
  return;
}



// FUNCTION 1486cddd2 FUN_1486cddd2 body=79 status=ok
// SIG undefined FUN_1486cddd2(void)

void FUN_1486cddd2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xa8);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b2ee0;
  param_2[0x10] = &PTR_FUN_14b00be10;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 1486cde22 FUN_1486cde22 body=63 status=ok
// SIG undefined FUN_1486cde22(void)

void FUN_1486cde22(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b2ee0;
  param_2[0x10] = &PTR_FUN_14b00be10;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 1486cdea6 FUN_1486cdea6 body=63 status=ok
// SIG undefined FUN_1486cdea6(void)

undefined1 FUN_1486cdea6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486ce03a(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 1486cdf0e FUN_1486cdf0e body=59 status=ok
// SIG undefined FUN_1486cdf0e(void)

undefined8 FUN_1486cdf0e(longlong *param_1)

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



// FUNCTION 1486cdfb0 FUN_1486cdfb0 body=82 status=ok
// SIG undefined FUN_1486cdfb0(void)

undefined8 * FUN_1486cdfb0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b2ee0;
  FUN_140170ace(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486ce002 FUN_1486ce002 body=55 status=ok
// SIG undefined FUN_1486ce002(void)

void FUN_1486ce002(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60af8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60af8 = FUN_140002ddd(FUN_1464ee957,uVar1,L"GbxMomentNodeSettings_MissionAction");
  }
  return;
}



// FUNCTION 1486ce03a FUN_1486ce03a body=113 status=ok
// SIG undefined FUN_1486ce03a(void)

longlong FUN_1486ce03a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_1406b39e6(param_1 + 0x88,param_2 + 0x88);
  FUN_1406b3a44(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 1486ce0ac FUN_1486ce0ac body=79 status=ok
// SIG undefined FUN_1486ce0ac(void)

void FUN_1486ce0ac(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x15) == '\x01') {
    *param_1 = &PTR_FUN_14b1b2ee0;
    FUN_140170ace(param_1 + 0x10);
    *param_1 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_1 + 9);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  return;
}



// FUNCTION 1486ce1aa FUN_1486ce1aa body=63 status=ok
// SIG undefined FUN_1486ce1aa(void)

undefined1 FUN_1486ce1aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486ce2e4(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 1486ce212 FUN_1486ce212 body=59 status=ok
// SIG undefined FUN_1486ce212(void)

undefined8 FUN_1486ce212(longlong *param_1)

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



// FUNCTION 1486ce2ac FUN_1486ce2ac body=55 status=ok
// SIG undefined FUN_1486ce2ac(void)

void FUN_1486ce2ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60b10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60b10 = FUN_140002ddd(FUN_1464ee9ed,uVar1,L"GbxMomentNodeState_MissionAction");
  }
  return;
}



// FUNCTION 1486ce2e4 FUN_1486ce2e4 body=73 status=ok
// SIG undefined FUN_1486ce2e4(void)

longlong FUN_1486ce2e4(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_1486c86fa();
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  lVar3 = *(longlong *)(param_2 + 0x78);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(longlong *)(param_1 + 0x78) = lVar3;
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



// FUNCTION 1486ce32e FUN_1486ce32e body=84 status=ok
// SIG undefined FUN_1486ce32e(void)

void FUN_1486ce32e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf0);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b3350;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  FUN_14044066a(param_2 + 0x17,0x11,7);
  return;
}



// FUNCTION 1486ce382 FUN_1486ce382 body=68 status=ok
// SIG undefined FUN_1486ce382(void)

void FUN_1486ce382(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b3350;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  FUN_14044066a(param_2 + 0x17,0x11,7);
  return;
}



// FUNCTION 1486ce40a FUN_1486ce40a body=63 status=ok
// SIG undefined FUN_1486ce40a(void)

undefined1 FUN_1486ce40a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486ce5e0(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 1486ce472 FUN_1486ce472 body=59 status=ok
// SIG undefined FUN_1486ce472(void)

undefined8 FUN_1486ce472(longlong *param_1)

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



// FUNCTION 1486ce4be FUN_1486ce4be body=40 status=ok
// SIG undefined FUN_1486ce4be(void)

void FUN_1486ce4be(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_1486ce596(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1486ce534 FUN_1486ce534 body=38 status=ok
// SIG undefined FUN_1486ce534(void)

undefined8 FUN_1486ce534(undefined8 param_1,int param_2)

{
  FUN_1486ce596();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486ce55a FUN_1486ce55a body=55 status=ok
// SIG undefined FUN_1486ce55a(void)

void FUN_1486ce55a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60b28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60b28 = FUN_140002ddd(FUN_1464eea83,uVar1,L"GbxMomentNodeSettings_MoveTo");
  }
  return;
}



// FUNCTION 1486ce596 FUN_1486ce596 body=74 status=ok
// SIG undefined FUN_1486ce596(void)

void FUN_1486ce596(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1b3350;
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486ce5e0 FUN_1486ce5e0 body=113 status=ok
// SIG undefined FUN_1486ce5e0(void)

longlong FUN_1486ce5e0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_144983130(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0xb8,param_2 + 0xb8);
  return param_1;
}



// FUNCTION 1486ce652 FUN_1486ce652 body=107 status=ok
// SIG undefined FUN_1486ce652(void)

void FUN_1486ce652(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x90);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  *param_2 = &PTR_FUN_14b1b35a0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  return;
}



// FUNCTION 1486ce740 FUN_1486ce740 body=63 status=ok
// SIG undefined FUN_1486ce740(void)

undefined1 FUN_1486ce740(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486ce8c6(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 1486ce7a8 FUN_1486ce7a8 body=59 status=ok
// SIG undefined FUN_1486ce7a8(void)

undefined8 FUN_1486ce7a8(longlong *param_1)

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



// FUNCTION 1486ce7f4 FUN_1486ce7f4 body=38 status=ok
// SIG undefined FUN_1486ce7f4(void)

void FUN_1486ce7f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_143c5c33e(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 1486ce868 FUN_1486ce868 body=38 status=ok
// SIG undefined FUN_1486ce868(void)

undefined8 FUN_1486ce868(undefined8 param_1,int param_2)

{
  FUN_143c5c33e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486ce88e FUN_1486ce88e body=55 status=ok
// SIG undefined FUN_1486ce88e(void)

void FUN_1486ce88e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60b40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60b40 = FUN_140002ddd(FUN_1464eeb19,uVar1,L"GbxMomentNodeState_MoveTo");
  }
  return;
}



// FUNCTION 1486ce8c6 FUN_1486ce8c6 body=366 status=ok
// SIG undefined FUN_1486ce8c6(void)

longlong FUN_1486ce8c6(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *_Src;
  longlong *_Dst;
  
  FUN_1486c86fa();
  _Dst = (longlong *)(param_1 + 0x70);
  _Src = (undefined8 *)(param_2 + 0x70);
  bVar1 = *(byte *)(param_1 + 0x90);
  if (bVar1 == *(byte *)(param_2 + 0x90)) {
    if (0x18 < *(ushort *)(param_2 + 0x88)) {
      _Src = *(undefined8 **)(param_2 + 0x70);
    }
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
      _Dst = (longlong *)*_Dst;
    }
    uVar9 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar9);
    if (pcVar3 == (code *)0x0) {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
    }
    else {
      (*pcVar3)(_Dst,_Src);
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 != (code *)0x0) {
      plVar10 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0x88)) {
        plVar10 = (longlong *)*_Dst;
      }
      (*pcVar3)(plVar10);
    }
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
      FUN_1400020a8(*_Dst);
    }
    bVar1 = *(byte *)(param_2 + 0x90);
    uVar2 = *(ushort *)(param_2 + 0x88);
    *(ushort *)(param_1 + 0x88) = uVar2;
    plVar10 = _Dst;
    if (0x18 < uVar2) {
      plVar10 = (longlong *)FUN_14001cc68(uVar2,0);
      *_Dst = (longlong)plVar10;
      _Src = (undefined8 *)*_Src;
    }
    uVar9 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar9);
    if (pcVar3 == (code *)0x0) {
      memcpy(plVar10,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
    }
    else {
      (*pcVar3)(plVar10,_Src);
    }
    *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  uVar5 = *(undefined8 *)(param_2 + 0xa0);
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  uVar7 = *(undefined8 *)(param_2 + 0xb0);
  uVar8 = *(undefined8 *)(param_2 + 0xb9);
  *(undefined8 *)(param_1 + 0xb1) = *(undefined8 *)(param_2 + 0xb1);
  *(undefined8 *)(param_1 + 0xb9) = uVar8;
  *(undefined8 *)(param_1 + 0xa8) = uVar6;
  *(undefined8 *)(param_1 + 0xb0) = uVar7;
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  return param_1;
}



// FUNCTION 1486cea36 FUN_1486cea36 body=59 status=ok
// SIG undefined FUN_1486cea36(void)

void FUN_1486cea36(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x88);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b37c0;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 1486cea72 FUN_1486cea72 body=43 status=ok
// SIG undefined FUN_1486cea72(void)

void FUN_1486cea72(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b37c0;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 1486ceae2 FUN_1486ceae2 body=119 status=ok
// SIG undefined FUN_1486ceae2(void)

undefined8 FUN_1486ceae2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x40);
      uVar2 = *(undefined4 *)(param_3 + -0x3c);
      uVar3 = *(undefined4 *)(param_3 + -0x38);
      uVar4 = *(undefined4 *)(param_3 + -0x34);
      uVar5 = *(undefined4 *)(param_3 + -0x2c);
      uVar6 = *(undefined4 *)(param_3 + -0x28);
      uVar7 = *(undefined4 *)(param_3 + -0x24);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x2c) = uVar5;
      *(undefined4 *)(param_2 + -0x28) = uVar6;
      *(undefined4 *)(param_2 + -0x24) = uVar7;
      *(undefined4 *)(param_2 + -0x40) = uVar1;
      *(undefined4 *)(param_2 + -0x3c) = uVar2;
      *(undefined4 *)(param_2 + -0x38) = uVar3;
      *(undefined4 *)(param_2 + -0x34) = uVar4;
      FUN_1470d00c2(param_2 + -0x20,param_3 + -0x20);
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_144983130(param_2,param_3);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
      param_3 = param_3 + 0x88;
      param_2 = param_2 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486ceb82 FUN_1486ceb82 body=59 status=ok
// SIG undefined FUN_1486ceb82(void)

undefined8 FUN_1486ceb82(longlong *param_1)

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



// FUNCTION 1486cebce FUN_1486cebce body=57 status=ok
// SIG undefined FUN_1486cebce(void)

void FUN_1486cebce(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_2 + 9);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 1486cec56 FUN_1486cec56 body=60 status=ok
// SIG undefined FUN_1486cec56(void)

undefined8 * FUN_1486cec56(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486cec92 FUN_1486cec92 body=55 status=ok
// SIG undefined FUN_1486cec92(void)

void FUN_1486cec92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60b58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60b58 = FUN_140002ddd(FUN_1464eebaf,uVar1,L"GbxMomentNodeSettings_MusicEvent");
  }
  return;
}



// FUNCTION 1486ced74 FUN_1486ced74 body=54 status=ok
// SIG undefined FUN_1486ced74(void)

undefined1 FUN_1486ced74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486cedd2 FUN_1486cedd2 body=59 status=ok
// SIG undefined FUN_1486cedd2(void)

undefined8 FUN_1486cedd2(longlong *param_1)

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



// FUNCTION 1486cee66 FUN_1486cee66 body=55 status=ok
// SIG undefined FUN_1486cee66(void)

void FUN_1486cee66(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60b70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60b70 = FUN_140002ddd(FUN_1464eec45,uVar1,L"GbxMomentNodeState_MusicEvent");
  }
  return;
}



// FUNCTION 1486cee9e FUN_1486cee9e body=64 status=ok
// SIG undefined FUN_1486cee9e(void)

void FUN_1486cee9e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb8);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b3c30;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  return;
}



// FUNCTION 1486ceede FUN_1486ceede body=48 status=ok
// SIG undefined FUN_1486ceede(void)

void FUN_1486ceede(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b3c30;
  FUN_14044066a(param_2 + 0x10,0x11,7);
  return;
}



// FUNCTION 1486cef52 FUN_1486cef52 body=181 status=ok
// SIG undefined FUN_1486cef52(void)

undefined8 FUN_1486cef52(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + 0x28 + lVar10;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0xc) = uVar7;
      *(undefined4 *)(lVar2 + -8) = uVar8;
      *(undefined4 *)(lVar2 + -4) = uVar9;
      *(undefined4 *)(lVar2 + -0x20) = uVar3;
      *(undefined4 *)(lVar2 + -0x1c) = uVar4;
      *(undefined4 *)(lVar2 + -0x18) = uVar5;
      *(undefined4 *)(lVar2 + -0x14) = uVar6;
      FUN_1470d00c2(lVar2,lVar1 + 0x28);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x40);
      FUN_144983130(param_2 + lVar10 + 0x48,param_3 + lVar10 + 0x48);
      FUN_144983130(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      lVar10 = lVar10 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486cf030 FUN_1486cf030 body=59 status=ok
// SIG undefined FUN_1486cf030(void)

undefined8 FUN_1486cf030(longlong *param_1)

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



// FUNCTION 1486cf0d2 FUN_1486cf0d2 body=82 status=ok
// SIG undefined FUN_1486cf0d2(void)

undefined8 * FUN_1486cf0d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b3c30;
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486cf124 FUN_1486cf124 body=55 status=ok
// SIG undefined FUN_1486cf124(void)

void FUN_1486cf124(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60b88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60b88 = FUN_140002ddd(FUN_1464eecdb,uVar1,L"GbxMomentNodeSettings_PersistentSequence");
  }
  return;
}



// FUNCTION 1486cf15c FUN_1486cf15c body=79 status=ok
// SIG undefined FUN_1486cf15c(void)

void FUN_1486cf15c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x17) == '\x01') {
    *param_1 = &PTR_FUN_14b1b3c30;
    FUN_144a2da94(param_1 + 0x10);
    *param_1 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_1 + 9);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  return;
}



// FUNCTION 1486cf252 FUN_1486cf252 body=54 status=ok
// SIG undefined FUN_1486cf252(void)

undefined1 FUN_1486cf252(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486cf2b0 FUN_1486cf2b0 body=59 status=ok
// SIG undefined FUN_1486cf2b0(void)

undefined8 FUN_1486cf2b0(longlong *param_1)

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



// FUNCTION 1486cf344 FUN_1486cf344 body=55 status=ok
// SIG undefined FUN_1486cf344(void)

void FUN_1486cf344(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60ba0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60ba0 = FUN_140002ddd(FUN_1464eed71,uVar1,L"GbxMomentNodeState_PersistentSequence");
  }
  return;
}



// FUNCTION 1486cf3d0 FUN_1486cf3d0 body=63 status=ok
// SIG undefined FUN_1486cf3d0(void)

undefined1 FUN_1486cf3d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486cf4fa(param_2,param_3);
    param_3 = param_3 + 0x368;
    param_2 = param_2 + 0x368;
  }
  return 1;
}



// FUNCTION 1486cf438 FUN_1486cf438 body=59 status=ok
// SIG undefined FUN_1486cf438(void)

undefined8 FUN_1486cf438(longlong *param_1)

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



// FUNCTION 1486cf484 FUN_1486cf484 body=40 status=ok
// SIG undefined FUN_1486cf484(void)

void FUN_1486cf484(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x368) == '\x01') {
    FUN_1460b39ba(param_2);
    *(undefined1 *)(param_2 + 0x368) = 0;
  }
  return;
}



// FUNCTION 1486cf4fa FUN_1486cf4fa body=290 status=ok
// SIG undefined FUN_1486cf4fa(void)

longlong FUN_1486cf4fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_1486cf61c();
  FUN_144983130(param_1 + 0x1d8,param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x210) = *(undefined1 *)(param_2 + 0x210);
  FUN_1486b7918(param_1 + 0x218,param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
  *(undefined1 *)(param_1 + 0x238) = *(undefined1 *)(param_2 + 0x238);
  FUN_1486b7918(param_1 + 0x240,param_2 + 0x240);
  FUN_144983130(param_1 + 600,param_2 + 600);
  *(undefined1 *)(param_1 + 0x290) = *(undefined1 *)(param_2 + 0x290);
  FUN_144983130(param_1 + 0x298,param_2 + 0x298);
  FUN_144983130(param_1 + 0x2d0,param_2 + 0x2d0);
  FUN_144983130(param_1 + 0x308,param_2 + 0x308);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  lVar1 = *(longlong *)(param_2 + 0x348);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *(longlong *)(param_2 + 0x348);
    }
  }
  *(longlong *)(param_1 + 0x348) = lVar1;
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x350);
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_2 + 0x358);
  *(undefined1 *)(param_1 + 0x360) = *(undefined1 *)(param_2 + 0x360);
  return param_1;
}



// FUNCTION 1486cf61c FUN_1486cf61c body=273 status=ok
// SIG undefined FUN_1486cf61c(void)

longlong FUN_1486cf61c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_144983130(param_1 + 0x88,param_2 + 0x88);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  uVar1 = *(undefined4 *)(param_2 + 0xcc);
  uVar2 = *(undefined4 *)(param_2 + 0xd0);
  uVar3 = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  *(undefined4 *)(param_1 + 0xd4) = uVar3;
  FUN_144a787a6(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  FUN_144983130(param_1 + 0xf8,param_2 + 0xf8);
  FUN_14054d9c0(param_1 + 0x130,param_2 + 0x130);
  FUN_144983130(param_1 + 0x180,param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  FUN_1406fa324(param_1 + 0x1c8,param_2 + 0x1c8);
  return param_1;
}



// FUNCTION 1486cf72e FUN_1486cf72e body=38 status=ok
// SIG undefined FUN_1486cf72e(void)

undefined8 FUN_1486cf72e(undefined8 param_1,int param_2)

{
  FUN_1460b39ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486cf754 FUN_1486cf754 body=55 status=ok
// SIG undefined FUN_1486cf754(void)

void FUN_1486cf754(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60bb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60bb8 = FUN_140002ddd(FUN_1464eee07,uVar1,L"GbxMomentNodeSettings_PlayCutscene");
  }
  return;
}



// FUNCTION 1486cf7d0 FUN_1486cf7d0 body=88 status=ok
// SIG undefined FUN_1486cf7d0(void)

undefined1 FUN_1486cf7d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486cf910(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x1a4);
    uVar2 = *(undefined4 *)(param_3 + 0x1a8);
    uVar3 = *(undefined4 *)(param_3 + 0x1ac);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    *(undefined4 *)(param_2 + 0x1a4) = uVar1;
    *(undefined4 *)(param_2 + 0x1a8) = uVar2;
    *(undefined4 *)(param_2 + 0x1ac) = uVar3;
    *(undefined1 *)(param_2 + 0x1b0) = *(undefined1 *)(param_3 + 0x1b0);
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 1486cf850 FUN_1486cf850 body=59 status=ok
// SIG undefined FUN_1486cf850(void)

undefined8 FUN_1486cf850(longlong *param_1)

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



// FUNCTION 1486cf89c FUN_1486cf89c body=38 status=ok
// SIG undefined FUN_1486cf89c(void)

void FUN_1486cf89c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_14129efe4(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 1486cf910 FUN_1486cf910 body=577 status=ok
// SIG undefined FUN_1486cf910(void)

longlong FUN_1486cf910(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *_Src;
  longlong *_Dst;
  
  FUN_1486c86fa();
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined2 *)(param_1 + 0x74) = *(undefined2 *)(param_2 + 0x74);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x7c) == '\x01') {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
      uVar7 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x7c) != '\x01') goto LAB_1486cf93f;
      uVar7 = 0;
    }
    *(undefined1 *)(param_1 + 0x7c) = uVar7;
  }
LAB_1486cf93f:
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  FUN_1447715ec(param_1 + 0x98,param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  uVar4 = *(undefined4 *)(param_2 + 0xc4);
  uVar5 = *(undefined4 *)(param_2 + 200);
  uVar6 = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = uVar4;
  *(undefined4 *)(param_1 + 200) = uVar5;
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  _Dst = (longlong *)(param_1 + 0xd8);
  _Src = (undefined8 *)(param_2 + 0xd8);
  bVar1 = *(byte *)(param_1 + 0xf8);
  if (bVar1 == *(byte *)(param_2 + 0xf8)) {
    if (0x18 < *(ushort *)(param_2 + 0xf0)) {
      _Src = *(undefined8 **)(param_2 + 0xd8);
    }
    if (0x18 < *(ushort *)(param_1 + 0xf0)) {
      _Dst = (longlong *)*_Dst;
    }
    uVar8 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar8);
    if (pcVar3 == (code *)0x0) {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
    }
    else {
      (*pcVar3)(_Dst,_Src);
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 != (code *)0x0) {
      plVar9 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0xf0)) {
        plVar9 = (longlong *)*_Dst;
      }
      (*pcVar3)(plVar9);
    }
    if (0x18 < *(ushort *)(param_1 + 0xf0)) {
      FUN_1400020a8(*_Dst);
    }
    bVar1 = *(byte *)(param_2 + 0xf8);
    uVar2 = *(ushort *)(param_2 + 0xf0);
    *(ushort *)(param_1 + 0xf0) = uVar2;
    plVar9 = _Dst;
    if (0x18 < uVar2) {
      plVar9 = (longlong *)FUN_14001cc68(uVar2,0);
      *_Dst = (longlong)plVar9;
      _Src = (undefined8 *)*_Src;
    }
    uVar8 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar8);
    if (pcVar3 == (code *)0x0) {
      memcpy(plVar9,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
    }
    else {
      (*pcVar3)(plVar9,_Src);
    }
    *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  }
  FUN_1486cfbaa(param_1 + 0x100,param_2 + 0x100);
  FUN_1486cfb52(param_1 + 0x150,param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  FUN_1447715ec(param_1 + 0x170,param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  return param_1;
}



// FUNCTION 1486cfb52 FUN_1486cfb52 body=88 status=ok
// SIG undefined FUN_1486cfb52(void)

undefined8 * FUN_1486cfb52(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486cfc9c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1486cfbaa FUN_1486cfbaa body=122 status=ok
// SIG undefined FUN_1486cfbaa(void)

longlong FUN_1486cfbaa(longlong param_1,longlong param_2)

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
    FUN_1486cfc24(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486cfc24 FUN_1486cfc24 body=119 status=ok
// SIG undefined FUN_1486cfc24(void)

undefined8 * FUN_1486cfc24(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14118f4da(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403951a8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 1486cfc9c FUN_1486cfc9c body=98 status=ok
// SIG undefined FUN_1486cfc9c(void)

void FUN_1486cfc9c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1486cfd00 FUN_1486cfd00 body=108 status=ok
// SIG undefined FUN_1486cfd00(void)

void FUN_1486cfd00(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b4460;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined8 *)((longlong)param_2 + 0x89) = 0;
  *(undefined8 *)((longlong)param_2 + 0x91) = 0;
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  FUN_14044066a(param_2 + 0x16,0x11,7);
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  return;
}



// FUNCTION 1486cfd94 FUN_1486cfd94 body=63 status=ok
// SIG undefined FUN_1486cfd94(void)

undefined1 FUN_1486cfd94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486cfea2(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 1486cfdfc FUN_1486cfdfc body=59 status=ok
// SIG undefined FUN_1486cfdfc(void)

undefined8 FUN_1486cfdfc(longlong *param_1)

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



// FUNCTION 1486cfea2 FUN_1486cfea2 body=156 status=ok
// SIG undefined FUN_1486cfea2(void)

longlong FUN_1486cfea2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_14132837e(param_1 + 0x80,param_2 + 0x80);
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  uVar2 = *(undefined4 *)(param_2 + 0xa0);
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  FUN_144983130(param_1 + 0xb0,param_2 + 0xb0);
  FUN_141471d82(param_1 + 0xe8,param_2 + 0xe8);
  return param_1;
}



// FUNCTION 1486cff40 FUN_1486cff40 body=79 status=ok
// SIG undefined FUN_1486cff40(void)

void FUN_1486cff40(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *param_1 = &PTR_FUN_14b1b4460;
    FUN_144a2da94(param_1 + 0x16);
    *param_1 = &PTR_FUN_14b1b5150;
    FUN_144a2da94(param_1 + 9);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1486d0036 FUN_1486d0036 body=54 status=ok
// SIG undefined FUN_1486d0036(void)

undefined1 FUN_1486d0036(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486d0094 FUN_1486d0094 body=59 status=ok
// SIG undefined FUN_1486d0094(void)

undefined8 FUN_1486d0094(longlong *param_1)

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



// FUNCTION 1486d0128 FUN_1486d0128 body=55 status=ok
// SIG undefined FUN_1486d0128(void)

void FUN_1486d0128(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60c00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60c00 = FUN_140002ddd(FUN_1464eefc9,uVar1,L"GbxMomentNodeState_PlayDialogBase");
  }
  return;
}



// FUNCTION 1486d0218 FUN_1486d0218 body=60 status=ok
// SIG undefined FUN_1486d0218(void)

undefined8 FUN_1486d0218(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 1486d027c FUN_1486d027c body=59 status=ok
// SIG undefined FUN_1486d027c(void)

undefined8 FUN_1486d027c(longlong *param_1)

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



// FUNCTION 1486d0362 FUN_1486d0362 body=68 status=ok
// SIG undefined FUN_1486d0362(void)

undefined1 FUN_1486d0362(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486d0488(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1486d03ce FUN_1486d03ce body=59 status=ok
// SIG undefined FUN_1486d03ce(void)

undefined8 FUN_1486d03ce(longlong *param_1)

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



// FUNCTION 1486d0414 FUN_1486d0414 body=37 status=ok
// SIG undefined FUN_1486d0414(void)

void FUN_1486d0414(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1486d0488 FUN_1486d0488 body=79 status=ok
// SIG undefined FUN_1486d0488(void)

undefined8 * FUN_1486d0488(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486d04d8(param_1,iVar1);
      FUN_1486d054b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486d04d8 FUN_1486d04d8 body=115 status=ok
// SIG undefined FUN_1486d04d8(void)

void FUN_1486d04d8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486d054b FUN_1486d054b body=52 status=ok
// SIG undefined FUN_1486d054b(void)

void FUN_1486d054b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140862250(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486d0580 FUN_1486d0580 body=60 status=ok
// SIG undefined FUN_1486d0580(void)

void FUN_1486d0580(undefined8 param_1,undefined8 *param_2)

{
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14044066a(param_2 + 4,0x11,7);
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}


