// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c15e68 FUN_148c15e68 body=40 status=ok
// SIG undefined FUN_148c15e68(void)

void FUN_148c15e68(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_145a3a978(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 148c15ee0 FUN_148c15ee0 body=57 status=ok
// SIG undefined FUN_148c15ee0(void)

void FUN_148c15ee0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa870 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa870 = FUN_140002ddd(FUN_1465d8feb,uVar1,L"OakFirstPersonDef");
  }
  return;
}



// FUNCTION 148c15f62 FUN_148c15f62 body=59 status=ok
// SIG undefined FUN_148c15f62(void)

undefined8 FUN_148c15f62(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c16004 FUN_148c16004 body=37 status=ok
// SIG undefined FUN_148c16004(void)

void FUN_148c16004(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x380);
  FUN_148c16180(param_2);
  return;
}



// FUNCTION 148c16056 FUN_148c16056 body=63 status=ok
// SIG undefined FUN_148c16056(void)

undefined1 FUN_148c16056(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c163da(param_2,param_3);
    param_3 = param_3 + 0x380;
    param_2 = param_2 + 0x380;
  }
  return 1;
}



// FUNCTION 148c160be FUN_148c160be body=59 status=ok
// SIG undefined FUN_148c160be(void)

undefined8 FUN_148c160be(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1610a FUN_148c1610a body=40 status=ok
// SIG undefined FUN_148c1610a(void)

void FUN_148c1610a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x380) == '\x01') {
    FUN_148c1635c(param_2);
    *(undefined1 *)(param_2 + 0x380) = 0;
  }
  return;
}



// FUNCTION 148c16180 FUN_148c16180 body=383 status=ok
// SIG undefined FUN_148c16180(void)

void FUN_148c16180(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b761780;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ff00000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0x3ff0000000000000;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3ff00000;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x3ff0000000000000;
  param_1[0x2d] = 0x3ff0000000000000;
  param_1[0x2e] = 0x3ff0000000000000;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0x3fa000003eb33333;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x200000000;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x200000000;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0x200000000;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x3ff00000;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0x3ff0000000000000;
  param_1[0x4f] = 0x3ff0000000000000;
  param_1[0x50] = 0x3ff0000000000000;
  param_1[0x51] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  param_1[0x5f] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x5d] = DAT_14c8464e0;
  param_1[0x5e] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x60] = DAT_14c8464e0;
  param_1[0x61] = uVar1;
  param_1[0x62] = DAT_14c8464f0;
  return;
}



// FUNCTION 148c16300 FUN_148c16300 body=43 status=ok
// SIG undefined FUN_148c16300(void)

undefined8 FUN_148c16300(undefined8 param_1,int param_2)

{
  FUN_148c1635c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x380);
  }
  return param_1;
}



// FUNCTION 148c1635c FUN_148c1635c body=126 status=ok
// SIG undefined FUN_148c1635c(void)

void FUN_148c1635c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b761780;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_14023f968(param_1 + 0x52);
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c163da FUN_148c163da body=444 status=ok
// SIG undefined FUN_148c163da(void)

longlong FUN_148c163da(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar3 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 8);
    }
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 8) = lVar3;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  lVar3 = *(longlong *)(param_2 + 0x18);
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 0x18);
      bVar2 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar3;
  lVar3 = *(longlong *)(param_2 + 0x20);
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 0x20);
      bVar2 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x20) = lVar3;
  lVar3 = *(longlong *)(param_2 + 0x28);
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *(longlong *)(param_2 + 0x28);
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar3;
  memcpy((void *)(param_1 + 0x30),(void *)(param_2 + 0x30),0x17c);
  *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(param_2 + 0x1b0);
  FUN_140b177d4(param_1 + 0x1b8,param_2 + 0x1b8);
  *(undefined1 *)(param_1 + 0x1d8) = *(undefined1 *)(param_2 + 0x1d8);
  FUN_140b177d4(param_1 + 0x1e0,param_2 + 0x1e0);
  *(undefined1 *)(param_1 + 0x200) = *(undefined1 *)(param_2 + 0x200);
  FUN_140b177d4(param_1 + 0x208,param_2 + 0x208);
  puVar4 = (undefined8 *)(param_2 + 0x230);
  puVar5 = (undefined8 *)(param_1 + 0x230);
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_14023fa1a(param_1 + 0x290,param_2 + 0x290);
  puVar4 = (undefined8 *)(param_2 + 0x2e0);
  puVar5 = (undefined8 *)(param_1 + 0x2e0);
  for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)(param_1 + 0x348) = *(undefined1 *)(param_2 + 0x348);
  uVar1 = *(undefined8 *)(param_2 + 0x358);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x350);
  *(undefined8 *)(param_1 + 0x358) = uVar1;
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_2 + 0x360);
  uVar1 = *(undefined8 *)(param_2 + 0x370);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0x368);
  *(undefined8 *)(param_1 + 0x370) = uVar1;
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_2 + 0x378);
  return param_1;
}



// FUNCTION 148c165ce FUN_148c165ce body=59 status=ok
// SIG undefined FUN_148c165ce(void)

undefined8 FUN_148c165ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c166a4 FUN_148c166a4 body=63 status=ok
// SIG undefined FUN_148c166a4(void)

undefined1 FUN_148c166a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c167cc(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 148c1670c FUN_148c1670c body=59 status=ok
// SIG undefined FUN_148c1670c(void)

undefined8 FUN_148c1670c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c16758 FUN_148c16758 body=38 status=ok
// SIG undefined FUN_148c16758(void)

void FUN_148c16758(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_1418f1fb8(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 148c167cc FUN_148c167cc body=427 status=ok
// SIG undefined FUN_148c167cc(void)

longlong FUN_148c167cc(longlong param_1,longlong param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  byte bVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  lVar17 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_14689c22e();
      lVar17 = *(longlong *)(param_2 + 8);
    }
  }
  bVar16 = DAT_14c950c29;
  *(longlong *)(param_1 + 8) = lVar17;
  lVar17 = *(longlong *)(param_2 + 0x10);
  if ((bVar16 & 1) != 0) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_14689c22e();
      lVar17 = *(longlong *)(param_2 + 0x10);
      bVar16 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar17;
  lVar17 = *(longlong *)(param_2 + 0x18);
  if ((bVar16 & 1) != 0) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_14689c22e();
      lVar17 = *(longlong *)(param_2 + 0x18);
      bVar16 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar17;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 0x38);
  uVar6 = *(undefined4 *)(param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 0x40);
  uVar8 = *(undefined4 *)(param_2 + 0x44);
  uVar9 = *(undefined4 *)(param_2 + 0x48);
  uVar10 = *(undefined4 *)(param_2 + 0x4c);
  uVar11 = *(undefined4 *)(param_2 + 0x50);
  uVar12 = *(undefined4 *)(param_2 + 0x54);
  uVar13 = *(undefined4 *)(param_2 + 0x55);
  uVar14 = *(undefined4 *)(param_2 + 0x59);
  uVar15 = *(undefined4 *)(param_2 + 0x5d);
  *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)(param_2 + 0x51);
  *(undefined4 *)(param_1 + 0x55) = uVar13;
  *(undefined4 *)(param_1 + 0x59) = uVar14;
  *(undefined4 *)(param_1 + 0x5d) = uVar15;
  *(undefined4 *)(param_1 + 0x48) = uVar9;
  *(undefined4 *)(param_1 + 0x4c) = uVar10;
  *(undefined4 *)(param_1 + 0x50) = uVar11;
  *(undefined4 *)(param_1 + 0x54) = uVar12;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 0x40) = uVar7;
  *(undefined4 *)(param_1 + 0x44) = uVar8;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  lVar17 = *(longlong *)(param_2 + 0x68);
  if ((bVar16 & 1) != 0) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_14689c22e();
      lVar17 = *(longlong *)(param_2 + 0x68);
      bVar16 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x68) = lVar17;
  lVar17 = *(longlong *)(param_2 + 0x70);
  if ((bVar16 & 1) != 0) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_14689c22e();
      lVar17 = *(longlong *)(param_2 + 0x70);
      bVar16 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x70) = lVar17;
  lVar17 = *(longlong *)(param_2 + 0x78);
  if ((bVar16 & 1) != 0) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_14689c22e();
      lVar17 = *(longlong *)(param_2 + 0x78);
      bVar16 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x78) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x80);
  puVar19 = (undefined8 *)(param_1 + 0x80);
  for (lVar17 = 8; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  lVar17 = *(longlong *)(param_2 + 200);
  if ((bVar16 & 1) != 0) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_14689c22e();
      lVar17 = *(longlong *)(param_2 + 200);
    }
  }
  *(longlong *)(param_1 + 200) = lVar17;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  FUN_148c16978(param_1 + 0xd8,param_2 + 0xd8);
  FUN_14054c6c4(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
  return param_1;
}



// FUNCTION 148c16978 FUN_148c16978 body=85 status=ok
// SIG undefined FUN_148c16978(void)

undefined8 * FUN_148c16978(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c169ce(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x38);
      }
    }
  }
  return param_1;
}



// FUNCTION 148c169ce FUN_148c169ce body=111 status=ok
// SIG undefined FUN_148c169ce(void)

void FUN_148c169ce(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c16a98 FUN_148c16a98 body=59 status=ok
// SIG undefined FUN_148c16a98(void)

undefined8 FUN_148c16a98(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c16b38 FUN_148c16b38 body=55 status=ok
// SIG undefined FUN_148c16b38(void)

void FUN_148c16b38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa958 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa958 = FUN_140002ddd(FUN_1465d93d3,uVar1,L"IsFrozenValueResolver");
  }
  return;
}



// FUNCTION 148c16bb0 FUN_148c16bb0 body=88 status=ok
// SIG undefined FUN_148c16bb0(void)

undefined8 FUN_148c16bb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a91de(param_2,param_3);
    *(undefined2 *)(param_2 + 0x410) = *(undefined2 *)(param_3 + 0x410);
    *(undefined1 *)(param_2 + 0x412) = *(undefined1 *)(param_3 + 0x412);
    param_2 = param_2 + 0x418;
    param_3 = param_3 + 0x418;
  }
  return 1;
}



// FUNCTION 148c16c30 FUN_148c16c30 body=59 status=ok
// SIG undefined FUN_148c16c30(void)

undefined8 FUN_148c16c30(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c16c7c FUN_148c16c7c body=40 status=ok
// SIG undefined FUN_148c16c7c(void)

void FUN_148c16c7c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x418) == '\x01') {
    FUN_1458d8a78(param_2);
    *(undefined1 *)(param_2 + 0x418) = 0;
  }
  return;
}



// FUNCTION 148c16d22 FUN_148c16d22 body=78 status=ok
// SIG undefined FUN_148c16d22(void)

undefined8 FUN_148c16d22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c16d98 FUN_148c16d98 body=59 status=ok
// SIG undefined FUN_148c16d98(void)

undefined8 FUN_148c16d98(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c16dde FUN_148c16dde body=48 status=ok
// SIG undefined FUN_148c16dde(void)

void FUN_148c16dde(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14b761f50;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 148c16e5e FUN_148c16e5e body=62 status=ok
// SIG undefined FUN_148c16e5e(void)

undefined8 * FUN_148c16e5e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b761f50;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148c16e9c FUN_148c16e9c body=55 status=ok
// SIG undefined FUN_148c16e9c(void)

void FUN_148c16e9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaaa58 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaaa58 =
         FUN_140002ddd(FUN_1465d9681,uVar1,L"OakGameModeModuleConfigScripts_PlayerModifiers");
  }
  return;
}



// FUNCTION 148c16f08 FUN_148c16f08 body=97 status=ok
// SIG undefined FUN_148c16f08(void)

undefined1 FUN_148c16f08(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486aa6d4(param_2,param_3);
    *(undefined1 *)(param_2 + 0x98) = *(undefined1 *)(param_3 + 0x98);
    FUN_1459a0a08(param_2 + 0xa0,param_3 + 0xa0);
    param_2 = param_2 + 0xb0;
    param_3 = param_3 + 0xb0;
  }
  return 1;
}



// FUNCTION 148c16f92 FUN_148c16f92 body=59 status=ok
// SIG undefined FUN_148c16f92(void)

undefined8 FUN_148c16f92(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c16fde FUN_148c16fde body=67 status=ok
// SIG undefined FUN_148c16fde(void)

void FUN_148c16fde(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x16) == '\x01') {
    *param_2 = &PTR_FUN_14b7620d0;
    if (param_2[0x14] != 0) {
      FUN_1400020a8();
    }
    FUN_1458354b8(param_2);
    *(undefined1 *)(param_2 + 0x16) = 0;
  }
  return;
}



// FUNCTION 148c17072 FUN_148c17072 body=73 status=ok
// SIG undefined FUN_148c17072(void)

undefined8 * FUN_148c17072(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7620d0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1458354b8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 148c170bc FUN_148c170bc body=55 status=ok
// SIG undefined FUN_148c170bc(void)

void FUN_148c170bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaaa70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaaa70 = FUN_140002ddd(FUN_1465d971d,uVar1,L"OakGameModeModuleConfig_PlayerModifiers");
  }
  return;
}



// FUNCTION 148c17136 FUN_148c17136 body=70 status=ok
// SIG undefined FUN_148c17136(void)

undefined8 FUN_148c17136(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      FUN_148c1725e(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c171a4 FUN_148c171a4 body=59 status=ok
// SIG undefined FUN_148c171a4(void)

undefined8 FUN_148c171a4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c171ea FUN_148c171ea body=38 status=ok
// SIG undefined FUN_148c171ea(void)

void FUN_148c171ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148c1725e FUN_148c1725e body=79 status=ok
// SIG undefined FUN_148c1725e(void)

undefined8 * FUN_148c1725e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c172ae(param_1,iVar1);
      FUN_148c17321(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c172ae FUN_148c172ae body=115 status=ok
// SIG undefined FUN_148c172ae(void)

void FUN_148c172ae(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c17321 FUN_148c17321 body=52 status=ok
// SIG undefined FUN_148c17321(void)

void FUN_148c17321(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148b8d2c2(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148c173ba FUN_148c173ba body=59 status=ok
// SIG undefined FUN_148c173ba(void)

undefined8 FUN_148c173ba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c17400 FUN_148c17400 body=38 status=ok
// SIG undefined FUN_148c17400(void)

void FUN_148c17400(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148c174aa FUN_148c174aa body=68 status=ok
// SIG undefined FUN_148c174aa(void)

undefined8 FUN_148c174aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_148c175b2(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c17516 FUN_148c17516 body=59 status=ok
// SIG undefined FUN_148c17516(void)

undefined8 FUN_148c17516(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c175b2 FUN_148c175b2 body=95 status=ok
// SIG undefined FUN_148c175b2(void)

undefined8 * FUN_148c175b2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14587d987(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c17612(param_1,iVar1);
      FUN_148c17674(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c17612 FUN_148c17612 body=98 status=ok
// SIG undefined FUN_148c17612(void)

void FUN_148c17612(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c17674 FUN_148c17674 body=52 status=ok
// SIG undefined FUN_148c17674(void)

void FUN_148c17674(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c176a8(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148c176a8 FUN_148c176a8 body=152 status=ok
// SIG undefined FUN_148c176a8(void)

longlong * FUN_148c176a8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  bVar3 = DAT_14c950c29;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if ((lVar2 != 0 & bVar3) == 1) {
    FUN_14689c22e();
  }
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  lVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1407f2096(param_1 + 2,iVar1,0);
    FUN_1407f2045(param_1[2],lVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148c17742 FUN_148c17742 body=52 status=ok
// SIG undefined FUN_148c17742(void)

void FUN_148c17742(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_14587d987(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148c17776 FUN_148c17776 body=66 status=ok
// SIG undefined FUN_148c17776(void)

void FUN_148c17776(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    return;
  }
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_2);
  thunk_FUN_1400020a8(param_2,0x58);
  return;
}



// FUNCTION 148c177ec FUN_148c177ec body=238 status=ok
// SIG undefined FUN_148c177ec(void)

void FUN_148c177ec(undefined8 param_1,longlong param_2)

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
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d02d20(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c178dc FUN_148c178dc body=238 status=ok
// SIG undefined FUN_148c178dc(void)

void FUN_148c178dc(undefined8 param_1,longlong param_2)

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
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1440f2d86(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c179ec FUN_148c179ec body=45 status=ok
// SIG undefined FUN_148c179ec(void)

longlong FUN_148c179ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cbbe46(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c17a1a FUN_148c17a1a body=45 status=ok
// SIG undefined FUN_148c17a1a(void)

longlong FUN_148c17a1a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145cbbe46(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c17a48 FUN_148c17a48 body=45 status=ok
// SIG undefined FUN_148c17a48(void)

longlong FUN_148c17a48(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14585a23a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c17ab0 FUN_148c17ab0 body=219 status=ok
// SIG undefined FUN_148c17ab0(void)

undefined8 FUN_148c17ab0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  
  if (param_4 != 0) {
    lVar17 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar17);
      lVar2 = param_2 + 0x38 + lVar17;
      *(undefined4 *)(lVar2 + -8) = puVar1[0xc];
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      uVar10 = puVar1[7];
      uVar11 = puVar1[9];
      uVar12 = puVar1[10];
      uVar13 = puVar1[0xb];
      *(undefined4 *)(lVar2 + -0x18) = puVar1[8];
      *(undefined4 *)(lVar2 + -0x14) = uVar11;
      *(undefined4 *)(lVar2 + -0x10) = uVar12;
      *(undefined4 *)(lVar2 + -0xc) = uVar13;
      *(undefined4 *)(lVar2 + -0x28) = uVar7;
      *(undefined4 *)(lVar2 + -0x24) = uVar8;
      *(undefined4 *)(lVar2 + -0x20) = uVar9;
      *(undefined4 *)(lVar2 + -0x1c) = uVar10;
      *(undefined4 *)(lVar2 + -0x38) = uVar3;
      *(undefined4 *)(lVar2 + -0x34) = uVar4;
      *(undefined4 *)(lVar2 + -0x30) = uVar5;
      *(undefined4 *)(lVar2 + -0x2c) = uVar6;
      FUN_14115e0ba(lVar2,puVar1 + 0xe);
      *(undefined4 *)(lVar2 + 0x88) = puVar1[0x30];
      FUN_14115e0ba(param_2 + lVar17 + 200,param_3 + lVar17 + 200);
      uVar14 = *(undefined8 *)(puVar1 + 0x56);
      uVar15 = *(undefined8 *)(puVar1 + 0x58);
      uVar16 = *(undefined8 *)(puVar1 + 0x5a);
      *(undefined8 *)(lVar2 + 0x118) = *(undefined8 *)(puVar1 + 0x54);
      *(undefined8 *)(lVar2 + 0x120) = uVar14;
      *(undefined8 *)(lVar2 + 0x128) = uVar15;
      *(undefined8 *)(lVar2 + 0x130) = uVar16;
      lVar17 = lVar17 + 0x170;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c17bb4 FUN_148c17bb4 body=59 status=ok
// SIG undefined FUN_148c17bb4(void)

undefined8 FUN_148c17bb4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c17c00 FUN_148c17c00 body=40 status=ok
// SIG undefined FUN_148c17c00(void)

void FUN_148c17c00(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_14585a28e(param_2);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 148c17c78 FUN_148c17c78 body=73 status=ok
// SIG undefined FUN_148c17c78(void)

void FUN_148c17c78(undefined8 param_1,undefined8 *param_2)

{
  FUN_14610f272(param_2);
  *param_2 = &PTR_FUN_14b76a600;
  param_2[0x1d5] = 0x4743500045fa0000;
  param_2[0x1d6] = 0x3f00000047435000;
  param_2[0x1d7] = 0x447a00003f000000;
  *(undefined4 *)(param_2 + 0x1d8) = 0x3f000000;
  return;
}



// FUNCTION 148c17cd8 FUN_148c17cd8 body=90 status=ok
// SIG undefined FUN_148c17cd8(void)

undefined1 FUN_148c17cd8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a76e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xeac);
    uVar2 = *(undefined4 *)(param_3 + 0xeb0);
    uVar3 = *(undefined4 *)(param_3 + 0xeb4);
    uVar4 = *(undefined4 *)(param_3 + 0xeb4);
    uVar5 = *(undefined4 *)(param_3 + 0xeb8);
    uVar6 = *(undefined4 *)(param_3 + 0xebc);
    uVar7 = *(undefined4 *)(param_3 + 0xec0);
    *(undefined4 *)(param_2 + 0xea8) = *(undefined4 *)(param_3 + 0xea8);
    *(undefined4 *)(param_2 + 0xeac) = uVar1;
    *(undefined4 *)(param_2 + 0xeb0) = uVar2;
    *(undefined4 *)(param_2 + 0xeb4) = uVar3;
    *(undefined4 *)(param_2 + 0xeb4) = uVar4;
    *(undefined4 *)(param_2 + 0xeb8) = uVar5;
    *(undefined4 *)(param_2 + 0xebc) = uVar6;
    *(undefined4 *)(param_2 + 0xec0) = uVar7;
    param_2 = param_2 + 0xec8;
    param_3 = param_3 + 0xec8;
  }
  return 1;
}



// FUNCTION 148c17d5a FUN_148c17d5a body=59 status=ok
// SIG undefined FUN_148c17d5a(void)

undefined8 FUN_148c17d5a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c17da6 FUN_148c17da6 body=40 status=ok
// SIG undefined FUN_148c17da6(void)

void FUN_148c17da6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xec8) == '\x01') {
    FUN_1456c3012(param_2);
    *(undefined1 *)(param_2 + 0xec8) = 0;
  }
  return;
}



// FUNCTION 148c17e20 FUN_148c17e20 body=57 status=ok
// SIG undefined FUN_148c17e20(void)

void FUN_148c17e20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaadb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaadb0 = FUN_140002ddd(FUN_1465da77d,uVar1,L"OakGlobalsAI");
  }
  return;
}



// FUNCTION 148c17e6e FUN_148c17e6e body=49 status=ok
// SIG undefined FUN_148c17e6e(void)

void FUN_148c17e6e(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148c17eb6 FUN_148c17eb6 body=75 status=ok
// SIG undefined FUN_148c17eb6(void)

undefined8 FUN_148c17eb6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1403de7ba();
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c17f2a FUN_148c17f2a body=59 status=ok
// SIG undefined FUN_148c17f2a(void)

undefined8 FUN_148c17f2a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c17fc8 FUN_148c17fc8 body=52 status=ok
// SIG undefined FUN_148c17fc8(void)

void FUN_148c17fc8(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c18044 FUN_148c18044 body=59 status=ok
// SIG undefined FUN_148c18044(void)

undefined8 FUN_148c18044(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c180e2 FUN_148c180e2 body=95 status=ok
// SIG undefined FUN_148c180e2(void)

void FUN_148c180e2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0xf00d1e03;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *(undefined1 **)((longlong)param_2 + 100) = &DAT_3f8000003f800000;
  memset(param_2 + 0x14,0,0xcc);
  *(undefined4 *)((longlong)param_2 + 0x16c) = 0x3f800000;
  return;
}



// FUNCTION 148c18158 FUN_148c18158 body=63 status=ok
// SIG undefined FUN_148c18158(void)

undefined1 FUN_148c18158(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c18280(param_2,param_3);
    param_3 = param_3 + 0x170;
    param_2 = param_2 + 0x170;
  }
  return 1;
}



// FUNCTION 148c181c0 FUN_148c181c0 body=59 status=ok
// SIG undefined FUN_148c181c0(void)

undefined8 FUN_148c181c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1820c FUN_148c1820c body=38 status=ok
// SIG undefined FUN_148c1820c(void)

void FUN_148c1820c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_1410a3c4a(param_2);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 148c18280 FUN_148c18280 body=226 status=ok
// SIG undefined FUN_148c18280(void)

undefined8 * FUN_148c18280(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  *param_1 = *param_2;
  if ((param_1[1] != param_2[1]) || (*(int *)(param_1 + 2) != *(int *)(param_2 + 2))) {
    param_1[1] = param_2[1];
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    param_1[3] = 0;
  }
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  FUN_14173baee(param_1 + 6,param_2 + 6);
  FUN_148c18362(param_1 + 9,param_2 + 9);
  uVar1 = *(undefined4 *)((longlong)param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0xd);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar4 = param_2[0xe];
  uVar5 = param_2[0xf];
  uVar6 = param_2[0x10];
  uVar7 = param_2[0x11];
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x8c);
  uVar9 = *(undefined8 *)((longlong)param_2 + 0x94);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar5;
  param_1[0x10] = uVar6;
  param_1[0x11] = uVar7;
  *(undefined8 *)((longlong)param_1 + 0x8c) = uVar8;
  *(undefined8 *)((longlong)param_1 + 0x94) = uVar9;
  lVar10 = 0xa0;
  do {
    FUN_148636cfe((longlong)param_1 + lVar10,(longlong)param_2 + lVar10);
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x100);
  lVar10 = 0x100;
  do {
    FUN_148636cfe((longlong)param_1 + lVar10,(longlong)param_2 + lVar10);
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x160);
  uVar4 = param_2[0x2d];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar4;
  return param_1;
}



// FUNCTION 148c18362 FUN_148c18362 body=84 status=ok
// SIG undefined FUN_148c18362(void)

longlong * FUN_148c18362(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c183ec FUN_148c183ec body=54 status=ok
// SIG undefined FUN_148c183ec(void)

undefined1 FUN_148c183ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c18504(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c1844a FUN_148c1844a body=59 status=ok
// SIG undefined FUN_148c1844a(void)

undefined8 FUN_148c1844a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c18490 FUN_148c18490 body=37 status=ok
// SIG undefined FUN_148c18490(void)

void FUN_148c18490(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148c18504 FUN_148c18504 body=79 status=ok
// SIG undefined FUN_148c18504(void)

undefined8 * FUN_148c18504(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c18554(param_1,iVar1);
      FUN_148c185c7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c18554 FUN_148c18554 body=115 status=ok
// SIG undefined FUN_148c18554(void)

void FUN_148c18554(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c185c7 FUN_148c185c7 body=52 status=ok
// SIG undefined FUN_148c185c7(void)

void FUN_148c185c7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c185fc(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148c185fc FUN_148c185fc body=71 status=ok
// SIG undefined FUN_148c185fc(void)

undefined8 * FUN_148c185fc(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c186c4 FUN_148c186c4 body=59 status=ok
// SIG undefined FUN_148c186c4(void)

undefined8 FUN_148c186c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c187ca FUN_148c187ca body=59 status=ok
// SIG undefined FUN_148c187ca(void)

undefined8 FUN_148c187ca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1886a FUN_148c1886a body=29 status=ok
// SIG undefined FUN_148c1886a(void)

undefined8 FUN_148c1886a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c18888 FUN_148c18888 body=55 status=ok
// SIG undefined FUN_148c18888(void)

void FUN_148c18888(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaae60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaae60 = FUN_140002ddd(FUN_1465daacb,uVar1,L"OakBalanceEditorPreviewSettings");
  }
  return;
}



// FUNCTION 148c188de FUN_148c188de body=63 status=ok
// SIG undefined FUN_148c188de(void)

undefined1 FUN_148c188de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c18a04(param_2,param_3);
    param_3 = param_3 + 0x438;
    param_2 = param_2 + 0x438;
  }
  return 1;
}



// FUNCTION 148c18946 FUN_148c18946 body=59 status=ok
// SIG undefined FUN_148c18946(void)

undefined8 FUN_148c18946(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c18992 FUN_148c18992 body=38 status=ok
// SIG undefined FUN_148c18992(void)

void FUN_148c18992(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x438) == '\x01') {
    FUN_1415b23ca(param_2);
    *(undefined1 *)(param_2 + 0x438) = 0;
  }
  return;
}



// FUNCTION 148c18a04 FUN_148c18a04 body=852 status=ok
// SIG undefined FUN_148c18a04(void)

longlong FUN_148c18a04(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_148c18d58(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_1459a0a08(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  uVar3 = *(undefined4 *)(param_2 + 100);
  uVar4 = *(undefined4 *)(param_2 + 0x68);
  uVar5 = *(undefined4 *)(param_2 + 0x6c);
  uVar6 = *(undefined4 *)(param_2 + 0x70);
  uVar7 = *(undefined4 *)(param_2 + 0x74);
  uVar8 = *(undefined4 *)(param_2 + 0x78);
  uVar9 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  *(undefined4 *)(param_1 + 0x74) = uVar7;
  *(undefined4 *)(param_1 + 0x78) = uVar8;
  *(undefined4 *)(param_1 + 0x7c) = uVar9;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined4 *)(param_2 + 0x94);
  uVar3 = *(undefined4 *)(param_2 + 0x98);
  uVar4 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  FUN_144a787a6(param_1 + 0xa0,param_2 + 0xa0);
  FUN_148c18db8(param_1 + 0xb0,param_2 + 0xb0);
  FUN_148c18e08(param_1 + 0xc0,param_2 + 0xc0);
  uVar1 = *(undefined8 *)(param_2 + 0xd5);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd5) = uVar1;
  FUN_148bf3444(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  FUN_148c1925c(param_1 + 0x100,param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  FUN_1447715ec(param_1 + 0x160,param_2 + 0x160);
  *(undefined1 *)(param_1 + 0x188) = *(undefined1 *)(param_2 + 0x188);
  FUN_148c1944c(param_1 + 400,param_2 + 400);
  if ((*(longlong *)(param_1 + 0x1e0) != *(longlong *)(param_2 + 0x1e0)) ||
     (*(int *)(param_1 + 0x1e8) != *(int *)(param_2 + 0x1e8))) {
    *(longlong *)(param_1 + 0x1e0) = *(longlong *)(param_2 + 0x1e0);
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  if ((*(longlong *)(param_1 + 0x1f8) != *(longlong *)(param_2 + 0x1f8)) ||
     (*(int *)(param_1 + 0x200) != *(int *)(param_2 + 0x200))) {
    *(longlong *)(param_1 + 0x1f8) = *(longlong *)(param_2 + 0x1f8);
    *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
    *(undefined8 *)(param_1 + 0x208) = 0;
  }
  FUN_148c1944c(param_1 + 0x210,param_2 + 0x210);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  FUN_148c195aa(param_1 + 0x268,param_2 + 0x268);
  if ((*(longlong *)(param_1 + 0x2b8) != *(longlong *)(param_2 + 0x2b8)) ||
     (*(int *)(param_1 + 0x2c0) != *(int *)(param_2 + 0x2c0))) {
    *(longlong *)(param_1 + 0x2b8) = *(longlong *)(param_2 + 0x2b8);
    *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c0);
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  if ((*(longlong *)(param_1 + 0x2d0) != *(longlong *)(param_2 + 0x2d0)) ||
     (*(int *)(param_1 + 0x2d8) != *(int *)(param_2 + 0x2d8))) {
    *(longlong *)(param_1 + 0x2d0) = *(longlong *)(param_2 + 0x2d0);
    *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x2d8);
    *(undefined8 *)(param_1 + 0x2e0) = 0;
  }
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
  FUN_148c18e68(param_1 + 0x2f0,param_2 + 0x2f0);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  FUN_14173baee(param_1 + 0x308,param_2 + 0x308);
  FUN_14173baee(param_1 + 800,param_2 + 800);
  FUN_148c18362(param_1 + 0x338,param_2 + 0x338);
  FUN_1406fa324(param_1 + 0x350,param_2 + 0x350);
  FUN_1406fa324(param_1 + 0x360,param_2 + 0x360);
  FUN_1406fa324(param_1 + 0x370,param_2 + 0x370);
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0x380);
  FUN_148c197e0(param_1 + 0x388,param_2 + 0x388);
  FUN_148c18ec2(param_1 + 0x3d8,param_2 + 0x3d8);
  FUN_144046c54(param_1 + 1000,param_2 + 1000);
  return param_1;
}



// FUNCTION 148c18d58 FUN_148c18d58 body=95 status=ok
// SIG undefined FUN_148c18d58(void)

undefined8 * FUN_148c18d58(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1465db56f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c18f20(param_1,iVar1);
      FUN_148c18f95(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c18db8 FUN_148c18db8 body=79 status=ok
// SIG undefined FUN_148c18db8(void)

undefined8 * FUN_148c18db8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c190ee(param_1,iVar1);
      FUN_148c19161(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c18e08 FUN_148c18e08 body=95 status=ok
// SIG undefined FUN_148c18e08(void)

undefined8 * FUN_148c18e08(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1465db598(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c1918e(param_1,iVar1);
      FUN_148c19201(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c18e68 FUN_148c18e68 body=89 status=ok
// SIG undefined FUN_148c18e68(void)

undefined8 * FUN_148c18e68(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c1976c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 148c18ec2 FUN_148c18ec2 body=93 status=ok
// SIG undefined FUN_148c18ec2(void)

undefined8 * FUN_148c18ec2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459a1734(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c199a2(param_1,iVar1);
      FUN_148c19a15(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c18f20 FUN_148c18f20 body=117 status=ok
// SIG undefined FUN_148c18f20(void)

void FUN_148c18f20(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x170,8);
    iVar2 = (int)(uVar1 / 0x170);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x170,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c18f95 FUN_148c18f95 body=60 status=ok
// SIG undefined FUN_148c18f95(void)

void FUN_148c18f95(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c18fd2(param_1,param_2);
    param_1 = param_1 + 0x170;
    param_2 = param_2 + 0x170;
  }
  return;
}



// FUNCTION 148c18fd2 FUN_148c18fd2 body=212 status=ok
// SIG undefined FUN_148c18fd2(void)

undefined8 * FUN_148c18fd2(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = 0;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  FUN_144a7f96e(param_1 + 6,param_2 + 6);
  FUN_148c190a6(param_1 + 9,param_2 + 9);
  uVar1 = *(undefined4 *)((longlong)param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0xd);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar4 = param_2[0xe];
  uVar5 = param_2[0xf];
  uVar6 = param_2[0x10];
  uVar7 = param_2[0x11];
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x8c);
  uVar9 = *(undefined8 *)((longlong)param_2 + 0x94);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar5;
  param_1[0x10] = uVar6;
  param_1[0x11] = uVar7;
  *(undefined8 *)((longlong)param_1 + 0x8c) = uVar8;
  *(undefined8 *)((longlong)param_1 + 0x94) = uVar9;
  lVar10 = 0xa0;
  do {
    FUN_148753784((longlong)param_1 + lVar10,(longlong)param_2 + lVar10);
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x100);
  lVar10 = 0x100;
  do {
    FUN_148753784((longlong)param_1 + lVar10,(longlong)param_2 + lVar10);
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x160);
  uVar4 = param_2[0x2d];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar4;
  return param_1;
}



// FUNCTION 148c190a6 FUN_148c190a6 body=71 status=ok
// SIG undefined FUN_148c190a6(void)

undefined8 * FUN_148c190a6(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c190ee FUN_148c190ee body=115 status=ok
// SIG undefined FUN_148c190ee(void)

void FUN_148c190ee(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c19161 FUN_148c19161 body=44 status=ok
// SIG undefined FUN_148c19161(void)

void FUN_148c19161(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c1918e FUN_148c1918e body=115 status=ok
// SIG undefined FUN_148c1918e(void)

void FUN_148c1918e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c19201 FUN_148c19201 body=90 status=ok
// SIG undefined FUN_148c19201(void)

void FUN_148c19201(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + 8 + lVar2);
      puVar1[-1] = *(undefined8 *)(param_2 + lVar2);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      FUN_1403de7ba();
      lVar2 = lVar2 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c1925c FUN_148c1925c body=122 status=ok
// SIG undefined FUN_148c1925c(void)

longlong FUN_148c1925c(longlong param_1,longlong param_2)

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
    FUN_148c192d6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c192d6 FUN_148c192d6 body=262 status=ok
// SIG undefined FUN_148c192d6(void)

longlong * FUN_148c192d6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145ff166e(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140044672(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_148c193dc(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined ***)(lVar3 + 8 + lVar6) = &PTR_FUN_14b6e2420;
          *(undefined8 *)(lVar3 + 0x28 + lVar6) = *(undefined8 *)(lVar2 + 0x28 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x30;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c193dc FUN_148c193dc body=112 status=ok
// SIG undefined FUN_148c193dc(void)

undefined8 * FUN_148c193dc(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b6e2428;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_148bf34a4(param_1 + 1,iVar1,0);
    FUN_148bf3517(param_1[1],uVar2,iVar1);
  }
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 148c1944c FUN_148c1944c body=122 status=ok
// SIG undefined FUN_148c1944c(void)

longlong FUN_148c1944c(longlong param_1,longlong param_2)

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
    FUN_148c194c6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c194c6 FUN_148c194c6 body=227 status=ok
// SIG undefined FUN_148c194c6(void)

longlong * FUN_148c194c6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1459cdf3a(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar4 = 0;
      uVar5 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar6 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar4) = *(undefined4 *)(lVar2 + lVar4);
          *(undefined4 *)(lVar3 + 4 + lVar4) = *(undefined4 *)(lVar2 + 4 + lVar4);
        }
        else {
          *(undefined8 *)(lVar3 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
          *(undefined8 *)(lVar3 + 8 + lVar4) = *(undefined8 *)(lVar2 + 8 + lVar4);
          *(undefined4 *)(lVar3 + 0x10 + lVar4) = *(undefined4 *)(lVar2 + 0x10 + lVar4);
          *(undefined8 *)(lVar3 + 0x18 + lVar4) = 0;
          *(undefined8 *)(lVar3 + 0x20 + lVar4) = *(undefined8 *)(lVar2 + 0x20 + lVar4);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c195aa FUN_148c195aa body=122 status=ok
// SIG undefined FUN_148c195aa(void)

longlong FUN_148c195aa(longlong param_1,longlong param_2)

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
    FUN_148c19624(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c19624 FUN_148c19624 body=250 status=ok
// SIG undefined FUN_148c19624(void)

longlong * FUN_148c19624(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145ec8b3c(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_148c1971e(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x18 + lVar6) = *(undefined8 *)(lVar2 + 0x18 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c1971e FUN_148c1971e body=77 status=ok
// SIG undefined FUN_148c1971e(void)

undefined8 * FUN_148c1971e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148c18554(param_1,iVar1,0);
    FUN_148c185c7(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148c1976c FUN_148c1976c body=115 status=ok
// SIG undefined FUN_148c1976c(void)

void FUN_148c1976c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c197e0 FUN_148c197e0 body=122 status=ok
// SIG undefined FUN_148c197e0(void)

longlong FUN_148c197e0(longlong param_1,longlong param_2)

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
    FUN_148c1985a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c1985a FUN_148c1985a body=250 status=ok
// SIG undefined FUN_148c1985a(void)

longlong * FUN_148c1985a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1459a15ba(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_148c19954(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x18 + lVar6) = *(undefined8 *)(lVar2 + 0x18 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c19954 FUN_148c19954 body=77 status=ok
// SIG undefined FUN_148c19954(void)

undefined8 * FUN_148c19954(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148c199a2(param_1,iVar1,0);
    FUN_148c19a15(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148c199a2 FUN_148c199a2 body=115 status=ok
// SIG undefined FUN_148c199a2(void)

void FUN_148c199a2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c19a15 FUN_148c19a15 body=51 status=ok
// SIG undefined FUN_148c19a15(void)

void FUN_148c19a15(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined ***)(param_1 + lVar1) = &PTR_FUN_14b76ada0;
      *(undefined8 *)(param_1 + 8 + lVar1) = *(undefined8 *)(param_2 + 8 + lVar1);
      *(undefined4 *)(param_1 + 0x10 + lVar1) = *(undefined4 *)(param_2 + 0x10 + lVar1);
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c19a4a FUN_148c19a4a body=57 status=ok
// SIG undefined FUN_148c19a4a(void)

void FUN_148c19a4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaae90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaae90 = FUN_140002ddd(FUN_1465dabb9,uVar1,L"OakGlobalsBalance");
  }
  return;
}



// FUNCTION 148c19ac2 FUN_148c19ac2 body=49 status=ok
// SIG undefined FUN_148c19ac2(void)

void FUN_148c19ac2(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148c19b0a FUN_148c19b0a body=146 status=ok
// SIG undefined FUN_148c19b0a(void)

undefined8 FUN_148c19b0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144a787a6(lVar2,puVar1 + 3);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[5];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x34);
      uVar4 = *(undefined4 *)(puVar1 + 7);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x3c);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(puVar1 + 6);
      *(undefined4 *)(lVar2 + 0x1c) = uVar3;
      *(undefined4 *)(lVar2 + 0x20) = uVar4;
      *(undefined4 *)(lVar2 + 0x24) = uVar5;
      lVar2 = param_3 + 0x40 + lVar6;
      FUN_144a787a6(param_2 + lVar6 + 0x40,lVar2);
      *(undefined4 *)(param_2 + lVar6 + 0x50) = *(undefined4 *)(lVar2 + 0x10);
      lVar6 = lVar6 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c19bc4 FUN_148c19bc4 body=59 status=ok
// SIG undefined FUN_148c19bc4(void)

undefined8 FUN_148c19bc4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c19c62 FUN_148c19c62 body=52 status=ok
// SIG undefined FUN_148c19c62(void)

void FUN_148c19c62(longlong param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148c19cb4 FUN_148c19cb4 body=63 status=ok
// SIG undefined FUN_148c19cb4(void)

undefined1 FUN_148c19cb4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c19e16(param_2,param_3);
    param_3 = param_3 + 0x1b0;
    param_2 = param_2 + 0x1b0;
  }
  return 1;
}



// FUNCTION 148c19d1c FUN_148c19d1c body=59 status=ok
// SIG undefined FUN_148c19d1c(void)

undefined8 FUN_148c19d1c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c19d68 FUN_148c19d68 body=38 status=ok
// SIG undefined FUN_148c19d68(void)

void FUN_148c19d68(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_141115e4e(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 148c19ddc FUN_148c19ddc body=57 status=ok
// SIG undefined FUN_148c19ddc(void)

void FUN_148c19ddc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaafa8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaafa8 = FUN_140002ddd(FUN_1465dace5,uVar1,L"OakGlobalsChallengesDef");
  }
  return;
}



// FUNCTION 148c19e16 FUN_148c19e16 body=468 status=ok
// SIG undefined FUN_148c19e16(void)

longlong FUN_148c19e16(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  plVar1 = *(longlong **)(param_2 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x20) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  plVar1 = *(longlong **)(param_2 + 0x30);
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x30) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_140e7790a(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  FUN_148c19fea(param_1 + 0x68,param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  FUN_14185ca5c(param_1 + 0x80,param_2 + 0x80);
  FUN_148c1a048(param_1 + 0x98,param_2 + 0x98);
  FUN_140115bdc(param_1 + 0xb0,param_2 + 0xb0);
  FUN_140115bdc(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  FUN_140115bdc(param_1 + 0xf8,param_2 + 0xf8);
  uVar3 = *(undefined4 *)(param_2 + 0x11c);
  uVar4 = *(undefined4 *)(param_2 + 0x120);
  uVar5 = *(undefined4 *)(param_2 + 0x124);
  uVar6 = *(undefined4 *)(param_2 + 0x124);
  uVar7 = *(undefined4 *)(param_2 + 0x128);
  uVar8 = *(undefined4 *)(param_2 + 300);
  uVar9 = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = uVar3;
  *(undefined4 *)(param_1 + 0x120) = uVar4;
  *(undefined4 *)(param_1 + 0x124) = uVar5;
  *(undefined4 *)(param_1 + 0x124) = uVar6;
  *(undefined4 *)(param_1 + 0x128) = uVar7;
  *(undefined4 *)(param_1 + 300) = uVar8;
  *(undefined4 *)(param_1 + 0x130) = uVar9;
  FUN_1403de7ba(param_1 + 0x138,param_2 + 0x138);
  FUN_1406fa324(param_1 + 0x158,param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  FUN_148c1a09c(param_1 + 0x170,param_2 + 0x170);
  FUN_148c1a0f0(param_1 + 0x180,param_2 + 0x180);
  FUN_148c1a09c(param_1 + 400,param_2 + 400);
  FUN_148c1a09c(param_1 + 0x1a0,param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 148c19fea FUN_148c19fea body=93 status=ok
// SIG undefined FUN_148c19fea(void)

undefined8 * FUN_148c19fea(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141116080(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1418ca592(param_1,iVar1);
      FUN_1440470f2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c1a048 FUN_148c1a048 body=84 status=ok
// SIG undefined FUN_148c1a048(void)

longlong * FUN_148c1a048(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c1a09c FUN_148c1a09c body=84 status=ok
// SIG undefined FUN_148c1a09c(void)

undefined8 * FUN_148c1a09c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1418ca6dc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 148c1a0f0 FUN_148c1a0f0 body=79 status=ok
// SIG undefined FUN_148c1a0f0(void)

undefined8 * FUN_148c1a0f0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1418ca812(param_1,iVar1);
      FUN_1418ca960(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c1a1ce FUN_148c1a1ce body=59 status=ok
// SIG undefined FUN_148c1a1ce(void)

undefined8 FUN_148c1a1ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1a28a FUN_148c1a28a body=63 status=ok
// SIG undefined FUN_148c1a28a(void)

undefined1 FUN_148c1a28a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1a3f8(param_2,param_3);
    param_3 = param_3 + 0x1240;
    param_2 = param_2 + 0x1240;
  }
  return 1;
}



// FUNCTION 148c1a2f2 FUN_148c1a2f2 body=59 status=ok
// SIG undefined FUN_148c1a2f2(void)

undefined8 FUN_148c1a2f2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1a33e FUN_148c1a33e body=40 status=ok
// SIG undefined FUN_148c1a33e(void)

void FUN_148c1a33e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1240) == '\x01') {
    FUN_145afe056(param_2);
    *(undefined1 *)(param_2 + 0x1240) = 0;
  }
  return;
}



// FUNCTION 148c1a3be FUN_148c1a3be body=57 status=ok
// SIG undefined FUN_148c1a3be(void)

void FUN_148c1a3be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaafd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaafd8 = FUN_140002ddd(FUN_1465dae11,uVar1,L"OakGlobalsDamage");
  }
  return;
}



// FUNCTION 148c1a3f8 FUN_148c1a3f8 body=1694 status=ok
// SIG undefined FUN_148c1a3f8(void)

longlong FUN_148c1a3f8(longlong param_1,longlong param_2)

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
  longlong lVar12;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  uVar4 = *(undefined4 *)(param_2 + 0x60);
  uVar5 = *(undefined4 *)(param_2 + 100);
  uVar6 = *(undefined4 *)(param_2 + 0x68);
  uVar7 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  *(undefined4 *)(param_1 + 100) = uVar5;
  *(undefined4 *)(param_1 + 0x68) = uVar6;
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  FUN_148c1aa96(param_1 + 0x70,param_2 + 0x70);
  FUN_148c1aaf0(param_1 + 0x80,param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
  *(undefined2 *)(param_1 + 0x474) = *(undefined2 *)(param_2 + 0x474);
  FUN_14093c00e(param_1 + 0x478,param_2 + 0x478);
  *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(param_2 + 0x488);
  uVar1 = *(undefined4 *)(param_2 + 0x494);
  uVar2 = *(undefined4 *)(param_2 + 0x498);
  uVar3 = *(undefined4 *)(param_2 + 0x49c);
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_2 + 0x490);
  *(undefined4 *)(param_1 + 0x494) = uVar1;
  *(undefined4 *)(param_1 + 0x498) = uVar2;
  *(undefined4 *)(param_1 + 0x49c) = uVar3;
  FUN_144a787a6(param_1 + 0x4a0,param_2 + 0x4a0);
  FUN_148c1ac5c(param_1 + 0x4b0,param_2 + 0x4b0);
  FUN_148638420(param_1 + 0x4c0,param_2 + 0x4c0);
  *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(param_2 + 0x810);
  *(undefined2 *)(param_1 + 0x88c) = *(undefined2 *)(param_2 + 0x88c);
  *(undefined4 *)(param_1 + 0x888) = *(undefined4 *)(param_2 + 0x888);
  FUN_14093c00e(param_1 + 0x890,param_2 + 0x890);
  *(undefined8 *)(param_1 + 0x8a0) = *(undefined8 *)(param_2 + 0x8a0);
  uVar1 = *(undefined4 *)(param_2 + 0x8ac);
  uVar2 = *(undefined4 *)(param_2 + 0x8b0);
  uVar3 = *(undefined4 *)(param_2 + 0x8b4);
  *(undefined4 *)(param_1 + 0x8a8) = *(undefined4 *)(param_2 + 0x8a8);
  *(undefined4 *)(param_1 + 0x8ac) = uVar1;
  *(undefined4 *)(param_1 + 0x8b0) = uVar2;
  *(undefined4 *)(param_1 + 0x8b4) = uVar3;
  FUN_144a787a6(param_1 + 0x8b8,param_2 + 0x8b8);
  *(undefined8 *)(param_1 + 0x8c8) = *(undefined8 *)(param_2 + 0x8c8);
  uVar1 = *(undefined4 *)(param_2 + 0x8d4);
  uVar2 = *(undefined4 *)(param_2 + 0x8d8);
  uVar3 = *(undefined4 *)(param_2 + 0x8dc);
  *(undefined4 *)(param_1 + 0x8d0) = *(undefined4 *)(param_2 + 0x8d0);
  *(undefined4 *)(param_1 + 0x8d4) = uVar1;
  *(undefined4 *)(param_1 + 0x8d8) = uVar2;
  *(undefined4 *)(param_1 + 0x8dc) = uVar3;
  FUN_144a787a6(param_1 + 0x8e0,param_2 + 0x8e0);
  *(undefined8 *)(param_1 + 0x8f0) = *(undefined8 *)(param_2 + 0x8f0);
  *(undefined2 *)(param_1 + 0x96c) = *(undefined2 *)(param_2 + 0x96c);
  *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_2 + 0x968);
  FUN_14093c00e(param_1 + 0x970,param_2 + 0x970);
  *(undefined8 *)(param_1 + 0x980) = *(undefined8 *)(param_2 + 0x980);
  uVar1 = *(undefined4 *)(param_2 + 0x98c);
  uVar2 = *(undefined4 *)(param_2 + 0x990);
  uVar3 = *(undefined4 *)(param_2 + 0x994);
  *(undefined4 *)(param_1 + 0x988) = *(undefined4 *)(param_2 + 0x988);
  *(undefined4 *)(param_1 + 0x98c) = uVar1;
  *(undefined4 *)(param_1 + 0x990) = uVar2;
  *(undefined4 *)(param_1 + 0x994) = uVar3;
  FUN_144a787a6(param_1 + 0x998,param_2 + 0x998);
  *(undefined4 *)(param_1 + 0xa18) = *(undefined4 *)(param_2 + 0xa18);
  *(undefined2 *)(param_1 + 0xa1c) = *(undefined2 *)(param_2 + 0xa1c);
  FUN_14093c00e(param_1 + 0xa20,param_2 + 0xa20);
  *(undefined8 *)(param_1 + 0xa30) = *(undefined8 *)(param_2 + 0xa30);
  uVar1 = *(undefined4 *)(param_2 + 0xa3c);
  uVar2 = *(undefined4 *)(param_2 + 0xa40);
  uVar3 = *(undefined4 *)(param_2 + 0xa44);
  *(undefined4 *)(param_1 + 0xa38) = *(undefined4 *)(param_2 + 0xa38);
  *(undefined4 *)(param_1 + 0xa3c) = uVar1;
  *(undefined4 *)(param_1 + 0xa40) = uVar2;
  *(undefined4 *)(param_1 + 0xa44) = uVar3;
  FUN_144a787a6(param_1 + 0xa48,param_2 + 0xa48);
  *(undefined4 *)(param_1 + 0xa58) = *(undefined4 *)(param_2 + 0xa58);
  *(undefined2 *)(param_1 + 0xad4) = *(undefined2 *)(param_2 + 0xad4);
  *(undefined4 *)(param_1 + 0xad0) = *(undefined4 *)(param_2 + 0xad0);
  FUN_14093c00e(param_1 + 0xad8,param_2 + 0xad8);
  *(undefined8 *)(param_1 + 0xae8) = *(undefined8 *)(param_2 + 0xae8);
  uVar1 = *(undefined4 *)(param_2 + 0xaf4);
  uVar2 = *(undefined4 *)(param_2 + 0xaf8);
  uVar3 = *(undefined4 *)(param_2 + 0xafc);
  *(undefined4 *)(param_1 + 0xaf0) = *(undefined4 *)(param_2 + 0xaf0);
  *(undefined4 *)(param_1 + 0xaf4) = uVar1;
  *(undefined4 *)(param_1 + 0xaf8) = uVar2;
  *(undefined4 *)(param_1 + 0xafc) = uVar3;
  FUN_144a787a6(param_1 + 0xb00,param_2 + 0xb00);
  *(undefined4 *)(param_1 + 0xb10) = *(undefined4 *)(param_2 + 0xb10);
  *(undefined2 *)(param_1 + 0xb8c) = *(undefined2 *)(param_2 + 0xb8c);
  *(undefined4 *)(param_1 + 0xb88) = *(undefined4 *)(param_2 + 0xb88);
  FUN_14093c00e(param_1 + 0xb90,param_2 + 0xb90);
  *(undefined8 *)(param_1 + 0xba0) = *(undefined8 *)(param_2 + 0xba0);
  uVar1 = *(undefined4 *)(param_2 + 0xbac);
  uVar2 = *(undefined4 *)(param_2 + 0xbb0);
  uVar3 = *(undefined4 *)(param_2 + 0xbb4);
  *(undefined4 *)(param_1 + 0xba8) = *(undefined4 *)(param_2 + 0xba8);
  *(undefined4 *)(param_1 + 0xbac) = uVar1;
  *(undefined4 *)(param_1 + 0xbb0) = uVar2;
  *(undefined4 *)(param_1 + 0xbb4) = uVar3;
  FUN_144a787a6(param_1 + 3000,param_2 + 3000);
  *(undefined8 *)(param_1 + 0xbc8) = *(undefined8 *)(param_2 + 0xbc8);
  uVar1 = *(undefined4 *)(param_2 + 0xbd4);
  uVar2 = *(undefined4 *)(param_2 + 0xbd8);
  uVar3 = *(undefined4 *)(param_2 + 0xbdc);
  *(undefined4 *)(param_1 + 0xbd0) = *(undefined4 *)(param_2 + 0xbd0);
  *(undefined4 *)(param_1 + 0xbd4) = uVar1;
  *(undefined4 *)(param_1 + 0xbd8) = uVar2;
  *(undefined4 *)(param_1 + 0xbdc) = uVar3;
  FUN_144a787a6(param_1 + 0xbe0,param_2 + 0xbe0);
  *(undefined8 *)(param_1 + 0xbf0) = *(undefined8 *)(param_2 + 0xbf0);
  *(undefined4 *)(param_1 + 0xc00) = *(undefined4 *)(param_2 + 0xc00);
  *(undefined8 *)(param_1 + 0xbf8) = *(undefined8 *)(param_2 + 0xbf8);
  FUN_144a7bb84(param_1 + 0xc08,param_2 + 0xc08);
  FUN_144a82394(param_1 + 0xc20,param_2 + 0xc20);
  FUN_14123c256(param_1 + 0xc28,param_2 + 0xc28);
  FUN_14123c256(param_1 + 0xc40,param_2 + 0xc40);
  FUN_14123c256(param_1 + 0xc58,param_2 + 0xc58);
  uVar1 = *(undefined4 *)(param_2 + 0xc74);
  uVar2 = *(undefined4 *)(param_2 + 0xc78);
  uVar3 = *(undefined4 *)(param_2 + 0xc7c);
  *(undefined4 *)(param_1 + 0xc70) = *(undefined4 *)(param_2 + 0xc70);
  *(undefined4 *)(param_1 + 0xc74) = uVar1;
  *(undefined4 *)(param_1 + 0xc78) = uVar2;
  *(undefined4 *)(param_1 + 0xc7c) = uVar3;
  *(undefined4 *)(param_1 + 0xc80) = *(undefined4 *)(param_2 + 0xc80);
  lVar12 = 0xc88;
  do {
    if ((*(longlong *)(param_1 + lVar12) != *(longlong *)(param_2 + lVar12)) ||
       (*(int *)(param_1 + 8 + lVar12) != *(int *)(param_2 + 8 + lVar12))) {
      *(longlong *)(param_1 + lVar12) = *(longlong *)(param_2 + lVar12);
      *(undefined4 *)(param_1 + 8 + lVar12) = *(undefined4 *)(param_2 + 8 + lVar12);
      *(undefined8 *)(param_1 + 0x10 + lVar12) = 0;
    }
    lVar12 = lVar12 + 0x18;
  } while (lVar12 != 0xd18);
  lVar12 = 0xd18;
  do {
    if ((*(longlong *)(param_1 + lVar12) != *(longlong *)(param_2 + lVar12)) ||
       (*(int *)(param_1 + 8 + lVar12) != *(int *)(param_2 + 8 + lVar12))) {
      *(longlong *)(param_1 + lVar12) = *(longlong *)(param_2 + lVar12);
      *(undefined4 *)(param_1 + 8 + lVar12) = *(undefined4 *)(param_2 + 8 + lVar12);
      *(undefined8 *)(param_1 + 0x10 + lVar12) = 0;
    }
    lVar12 = lVar12 + 0x18;
  } while (lVar12 != 0xda8);
  lVar12 = 0xda8;
  do {
    FUN_148635d54(param_1 + lVar12,param_2 + lVar12);
    lVar12 = lVar12 + 0x30;
  } while (lVar12 != 0xec8);
  *(undefined8 *)(param_1 + 0xec8) = *(undefined8 *)(param_2 + 0xec8);
  uVar1 = *(undefined4 *)(param_2 + 0xed4);
  uVar2 = *(undefined4 *)(param_2 + 0xed8);
  uVar3 = *(undefined4 *)(param_2 + 0xedc);
  *(undefined4 *)(param_1 + 0xed0) = *(undefined4 *)(param_2 + 0xed0);
  *(undefined4 *)(param_1 + 0xed4) = uVar1;
  *(undefined4 *)(param_1 + 0xed8) = uVar2;
  *(undefined4 *)(param_1 + 0xedc) = uVar3;
  FUN_144a787a6(param_1 + 0xee0,param_2 + 0xee0);
  if ((*(longlong *)(param_1 + 0xef0) != *(longlong *)(param_2 + 0xef0)) ||
     (*(int *)(param_1 + 0xef8) != *(int *)(param_2 + 0xef8))) {
    *(longlong *)(param_1 + 0xef0) = *(longlong *)(param_2 + 0xef0);
    *(undefined4 *)(param_1 + 0xef8) = *(undefined4 *)(param_2 + 0xef8);
    *(undefined8 *)(param_1 + 0xf00) = 0;
  }
  FUN_14118c70e(param_1 + 0xf08,param_2 + 0xf08);
  *(undefined4 *)(param_1 + 0xf48) = *(undefined4 *)(param_2 + 0xf48);
  FUN_140d02432(param_1 + 0xf50,param_2 + 0xf50);
  FUN_140d02432(param_1 + 4000,param_2 + 4000);
  FUN_140d02432(param_1 + 0xff0,param_2 + 0xff0);
  *(undefined8 *)(param_1 + 0x1040) = *(undefined8 *)(param_2 + 0x1040);
  uVar1 = *(undefined4 *)(param_2 + 0x104c);
  uVar2 = *(undefined4 *)(param_2 + 0x1050);
  uVar3 = *(undefined4 *)(param_2 + 0x1054);
  *(undefined4 *)(param_1 + 0x1048) = *(undefined4 *)(param_2 + 0x1048);
  *(undefined4 *)(param_1 + 0x104c) = uVar1;
  *(undefined4 *)(param_1 + 0x1050) = uVar2;
  *(undefined4 *)(param_1 + 0x1054) = uVar3;
  FUN_144a787a6(param_1 + 0x1058,param_2 + 0x1058);
  *(undefined4 *)(param_1 + 0x1068) = *(undefined4 *)(param_2 + 0x1068);
  FUN_1470cbc06(param_1 + 0x1070,param_2 + 0x1070);
  FUN_1486b5558(param_1 + 0x10c0,param_2 + 0x10c0);
  *(undefined8 *)(param_1 + 0x10d0) = *(undefined8 *)(param_2 + 0x10d0);
  FUN_140c19bee(param_1 + 0x10d8,param_2 + 0x10d8);
  *(undefined8 *)(param_1 + 0x1120) = *(undefined8 *)(param_2 + 0x1120);
  uVar1 = *(undefined4 *)(param_2 + 0x112c);
  uVar2 = *(undefined4 *)(param_2 + 0x1130);
  uVar3 = *(undefined4 *)(param_2 + 0x1134);
  *(undefined4 *)(param_1 + 0x1128) = *(undefined4 *)(param_2 + 0x1128);
  *(undefined4 *)(param_1 + 0x112c) = uVar1;
  *(undefined4 *)(param_1 + 0x1130) = uVar2;
  *(undefined4 *)(param_1 + 0x1134) = uVar3;
  FUN_144a787a6(param_1 + 0x1138,param_2 + 0x1138);
  uVar1 = *(undefined4 *)(param_2 + 0x114c);
  uVar2 = *(undefined4 *)(param_2 + 0x1150);
  uVar3 = *(undefined4 *)(param_2 + 0x1154);
  uVar4 = *(undefined4 *)(param_2 + 0x1158);
  uVar5 = *(undefined4 *)(param_2 + 0x115c);
  uVar6 = *(undefined4 *)(param_2 + 0x1160);
  uVar7 = *(undefined4 *)(param_2 + 0x1164);
  uVar8 = *(undefined4 *)(param_2 + 0x1168);
  uVar9 = *(undefined4 *)(param_2 + 0x116c);
  uVar10 = *(undefined4 *)(param_2 + 0x1170);
  uVar11 = *(undefined4 *)(param_2 + 0x1174);
  *(undefined4 *)(param_1 + 0x1148) = *(undefined4 *)(param_2 + 0x1148);
  *(undefined4 *)(param_1 + 0x114c) = uVar1;
  *(undefined4 *)(param_1 + 0x1150) = uVar2;
  *(undefined4 *)(param_1 + 0x1154) = uVar3;
  *(undefined4 *)(param_1 + 0x1158) = uVar4;
  *(undefined4 *)(param_1 + 0x115c) = uVar5;
  *(undefined4 *)(param_1 + 0x1160) = uVar6;
  *(undefined4 *)(param_1 + 0x1164) = uVar7;
  *(undefined4 *)(param_1 + 0x1168) = uVar8;
  *(undefined4 *)(param_1 + 0x116c) = uVar9;
  *(undefined4 *)(param_1 + 0x1170) = uVar10;
  *(undefined4 *)(param_1 + 0x1174) = uVar11;
  *(undefined4 *)(param_1 + 0x1178) = *(undefined4 *)(param_2 + 0x1178);
  FUN_1403de7ba(param_1 + 0x1180,param_2 + 0x1180);
  *(undefined8 *)(param_1 + 0x11a0) = *(undefined8 *)(param_2 + 0x11a0);
  *(undefined4 *)(param_1 + 0x11b0) = *(undefined4 *)(param_2 + 0x11b0);
  *(undefined8 *)(param_1 + 0x11a8) = *(undefined8 *)(param_2 + 0x11a8);
  FUN_1447715ec(param_1 + 0x11b8,param_2 + 0x11b8);
  *(undefined8 *)(param_1 + 0x11e0) = *(undefined8 *)(param_2 + 0x11e0);
  *(undefined4 *)(param_1 + 0x11e8) = *(undefined4 *)(param_2 + 0x11e8);
  FUN_1447715ec(param_1 + 0x11f0,param_2 + 0x11f0);
  FUN_1447715ec(param_1 + 0x1218,param_2 + 0x1218);
  return param_1;
}



// FUNCTION 148c1aa96 FUN_148c1aa96 body=89 status=ok
// SIG undefined FUN_148c1aa96(void)

undefined8 * FUN_148c1aa96(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c1acbc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 148c1aaf0 FUN_148c1aaf0 body=364 status=ok
// SIG undefined FUN_148c1aaf0(void)

undefined8 * FUN_148c1aaf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  param_1[5] = param_2[5];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 7);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  param_1[10] = param_2[10];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  FUN_144a787a6(param_1 + 0xd,param_2 + 0xd);
  param_1[0xf] = param_2[0xf];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar2 = *(undefined4 *)(param_2 + 0x11);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x11) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar3;
  FUN_144a787a6(param_1 + 0x12,param_2 + 0x12);
  param_1[0x14] = param_2[0x14];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xac);
  uVar2 = *(undefined4 *)(param_2 + 0x16);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0x16) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar3;
  FUN_144a787a6(param_1 + 0x17,param_2 + 0x17);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xcc);
  uVar2 = *(undefined4 *)(param_2 + 0x1a);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xd4);
  uVar4 = *(undefined4 *)(param_2 + 0x1b);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xdc);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar1;
  *(undefined4 *)(param_1 + 0x1a) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar3;
  *(undefined4 *)(param_1 + 0x1b) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar7;
  param_1[0x1d] = param_2[0x1d];
  FUN_14115e0ba(param_1 + 0x1e,param_2 + 0x1e);
  puVar9 = param_2 + 0x2f;
  puVar10 = param_1 + 0x2f;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_14115e0ba(param_1 + 0x3b,param_2 + 0x3b);
  FUN_14115e0ba(param_1 + 0x4c,param_2 + 0x4c);
  param_1[0x5d] = param_2[0x5d];
  FUN_14115e0ba(param_1 + 0x5e,param_2 + 0x5e);
  *(undefined4 *)(param_1 + 0x6f) = *(undefined4 *)(param_2 + 0x6f);
  return param_1;
}



// FUNCTION 148c1ac5c FUN_148c1ac5c body=95 status=ok
// SIG undefined FUN_148c1ac5c(void)

undefined8 * FUN_148c1ac5c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145afe2f1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c1ad30(param_1,iVar1);
      FUN_148c1ada2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c1acbc FUN_148c1acbc body=115 status=ok
// SIG undefined FUN_148c1acbc(void)

void FUN_148c1acbc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c1ad30 FUN_148c1ad30 body=114 status=ok
// SIG undefined FUN_148c1ad30(void)

void FUN_148c1ad30(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x858,8);
    iVar2 = (int)(uVar1 / 0x858);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x858,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c1ada2 FUN_148c1ada2 body=60 status=ok
// SIG undefined FUN_148c1ada2(void)

void FUN_148c1ada2(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c1adde(param_1,param_2);
    param_1 = param_1 + 0x858;
    param_2 = param_2 + 0x858;
  }
  return;
}



// FUNCTION 148c1adde FUN_148c1adde body=129 status=ok
// SIG undefined FUN_148c1adde(void)

undefined8 * FUN_148c1adde(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148633e48(param_1,iVar1,0);
    FUN_140070a2a(*param_1,uVar2,iVar1);
  }
  param_1[2] = &PTR_FUN_14b039080;
  lVar3 = 0x18;
  do {
    FUN_148c1ae60((longlong)param_1 + lVar3,(longlong)param_2 + lVar3);
    lVar3 = lVar3 + 0x210;
  } while (lVar3 != 0x858);
  return param_1;
}



// FUNCTION 148c1ae60 FUN_148c1ae60 body=449 status=ok
// SIG undefined FUN_148c1ae60(void)

undefined4 * FUN_148c1ae60(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  FUN_144a7f96e(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  FUN_144a7f96e(param_1 + 0x16,param_2 + 0x16);
  uVar1 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x22] = param_2[0x22];
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = param_2[0x26];
  param_1[0x28] = param_2[0x28];
  FUN_144a7f96e(param_1 + 0x2a,param_2 + 0x2a);
  uVar1 = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = uVar1;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  param_1[0x36] = param_2[0x36];
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x3a] = param_2[0x3a];
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  param_1[0x3e] = param_2[0x3e];
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x42] = param_2[0x42];
  FUN_148c1b022(param_1 + 0x44,param_2 + 0x44);
  FUN_1415c5ebe(param_1 + 0x66,param_2 + 0x66);
  FUN_1415c5ebe(param_1 + 0x6c,param_2 + 0x6c);
  FUN_1415c5ebe(param_1 + 0x72,param_2 + 0x72);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_2 + 0x7a);
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_2 + 0x7c);
  param_1[0x7e] = param_2[0x7e];
  *(undefined8 *)(param_1 + 0x80) = 0;
  param_1[0x82] = param_2[0x82];
  return param_1;
}



// FUNCTION 148c1b022 FUN_148c1b022 body=102 status=ok
// SIG undefined FUN_148c1b022(void)

undefined8 * FUN_148c1b022(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_1415c5ebe(param_1 + 2,param_2 + 2);
  FUN_1415c5ebe(param_1 + 5,param_2 + 5);
  FUN_1415c5ebe(param_1 + 8,param_2 + 8);
  FUN_1415c5ebe(param_1 + 0xb,param_2 + 0xb);
  FUN_1415c5ebe(param_1 + 0xe,param_2 + 0xe);
  return param_1;
}



// FUNCTION 148c1b12c FUN_148c1b12c body=59 status=ok
// SIG undefined FUN_148c1b12c(void)

undefined8 FUN_148c1b12c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1b27c FUN_148c1b27c body=59 status=ok
// SIG undefined FUN_148c1b27c(void)

undefined8 FUN_148c1b27c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1b3c0 FUN_148c1b3c0 body=59 status=ok
// SIG undefined FUN_148c1b3c0(void)

undefined8 FUN_148c1b3c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1b460 FUN_148c1b460 body=29 status=ok
// SIG undefined FUN_148c1b460(void)

undefined8 FUN_148c1b460(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c1b47e FUN_148c1b47e body=55 status=ok
// SIG undefined FUN_148c1b47e(void)

void FUN_148c1b47e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab020 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab020 = FUN_140002ddd(FUN_1465dafd3,uVar1,L"ExperienceFunction");
  }
  return;
}



// FUNCTION 148c1b5ac FUN_148c1b5ac body=59 status=ok
// SIG undefined FUN_148c1b5ac(void)

undefined8 FUN_148c1b5ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1b64c FUN_148c1b64c body=55 status=ok
// SIG undefined FUN_148c1b64c(void)

void FUN_148c1b64c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab038 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab038 = FUN_140002ddd(FUN_1465db06b,uVar1,L"ExperienceFunction_Exponential");
  }
  return;
}



// FUNCTION 148c1b764 FUN_148c1b764 body=59 status=ok
// SIG undefined FUN_148c1b764(void)

undefined8 FUN_148c1b764(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1b804 FUN_148c1b804 body=29 status=ok
// SIG undefined FUN_148c1b804(void)

undefined8 FUN_148c1b804(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c1b822 FUN_148c1b822 body=55 status=ok
// SIG undefined FUN_148c1b822(void)

void FUN_148c1b822(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab050 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab050 = FUN_140002ddd(FUN_1465db101,uVar1,L"ExperienceFunction_Sum");
  }
  return;
}



// FUNCTION 148c1b8be FUN_148c1b8be body=85 status=ok
// SIG undefined FUN_148c1b8be(void)

undefined8 FUN_148c1b8be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_148bf3444(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c1b93c FUN_148c1b93c body=59 status=ok
// SIG undefined FUN_148c1b93c(void)

undefined8 FUN_148c1b93c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1b9da FUN_148c1b9da body=62 status=ok
// SIG undefined FUN_148c1b9da(void)

void FUN_148c1b9da(undefined8 *param_1)

{
  if (*(char *)(param_1 + 4) == '\x01') {
    *param_1 = &PTR_FUN_14b6e2428;
    FUN_1458ce261(param_1[1],*(undefined4 *)(param_1 + 2));
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 148c1ba86 FUN_148c1ba86 body=83 status=ok
// SIG undefined FUN_148c1ba86(void)

undefined8 FUN_148c1ba86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_148bf3444(param_2 + -0x18,param_3 + -0x18);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_141855c14(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c1bb02 FUN_148c1bb02 body=59 status=ok
// SIG undefined FUN_148c1bb02(void)

undefined8 FUN_148c1bb02(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1bba0 FUN_148c1bba0 body=62 status=ok
// SIG undefined FUN_148c1bba0(void)

void FUN_148c1bba0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 7) == '\x01') {
    *param_1 = &PTR_FUN_14b6e2428;
    FUN_1458ce261(param_1[1],*(undefined4 *)(param_1 + 2));
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}



// FUNCTION 148c1bc12 FUN_148c1bc12 body=54 status=ok
// SIG undefined FUN_148c1bc12(void)

undefined1 FUN_148c1bc12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1bd2a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c1bc70 FUN_148c1bc70 body=59 status=ok
// SIG undefined FUN_148c1bc70(void)

undefined8 FUN_148c1bc70(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1bcb6 FUN_148c1bcb6 body=37 status=ok
// SIG undefined FUN_148c1bcb6(void)

void FUN_148c1bcb6(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148c1bd2a FUN_148c1bd2a body=79 status=ok
// SIG undefined FUN_148c1bd2a(void)

undefined8 * FUN_148c1bd2a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c1bd7a(param_1,iVar1);
      FUN_148c1bded(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c1bd7a FUN_148c1bd7a body=115 status=ok
// SIG undefined FUN_148c1bd7a(void)

void FUN_148c1bd7a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c1bded FUN_148c1bded body=52 status=ok
// SIG undefined FUN_148c1bded(void)

void FUN_148c1bded(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c1be22(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148c1be22 FUN_148c1be22 body=71 status=ok
// SIG undefined FUN_148c1be22(void)

undefined8 * FUN_148c1be22(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c1be88 FUN_148c1be88 body=63 status=ok
// SIG undefined FUN_148c1be88(void)

undefined1 FUN_148c1be88(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1bfec(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 148c1bef0 FUN_148c1bef0 body=59 status=ok
// SIG undefined FUN_148c1bef0(void)

undefined8 FUN_148c1bef0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1bf3c FUN_148c1bf3c body=40 status=ok
// SIG undefined FUN_148c1bf3c(void)

void FUN_148c1bf3c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_145a5ffc0(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 148c1bfb2 FUN_148c1bfb2 body=57 status=ok
// SIG undefined FUN_148c1bfb2(void)

void FUN_148c1bfb2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab0b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab0b0 = FUN_140002ddd(FUN_1465db359,uVar1,L"OakGlobalsExperience");
  }
  return;
}



// FUNCTION 148c1bfec FUN_148c1bfec body=212 status=ok
// SIG undefined FUN_148c1bfec(void)

longlong FUN_148c1bfec(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_148c1c0c0(param_1 + 0x20,param_2 + 0x20);
  FUN_148c1c120(param_1 + 0x30,param_2 + 0x30);
  FUN_148c1c180(param_1 + 0x40,param_2 + 0x40);
  FUN_140d02432(param_1 + 0x50,param_2 + 0x50);
  FUN_140d02432(param_1 + 0xa0,param_2 + 0xa0);
  FUN_148c1bd2a(param_1 + 0xf0,param_2 + 0xf0);
  FUN_14150acc4(param_1 + 0x100,param_2 + 0x100);
  FUN_148c1c3ea(param_1 + 0x118,param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  FUN_1447715ec(param_1 + 0x178,param_2 + 0x178);
  return param_1;
}



// FUNCTION 148c1c0c0 FUN_148c1c0c0 body=95 status=ok
// SIG undefined FUN_148c1c0c0(void)

undefined8 * FUN_148c1c0c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a6009c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c1c1e0(param_1,iVar1);
      FUN_148c1c253(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c1c120 FUN_148c1c120 body=95 status=ok
// SIG undefined FUN_148c1c120(void)

undefined8 * FUN_148c1c120(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a6009b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c1c286(param_1,iVar1);
      FUN_148c1c2f9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c1c180 FUN_148c1c180 body=95 status=ok
// SIG undefined FUN_148c1c180(void)

undefined8 * FUN_148c1c180(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a600d5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c1c32c(param_1,iVar1);
      FUN_148c1c39b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c1c1e0 FUN_148c1c1e0 body=115 status=ok
// SIG undefined FUN_148c1c1e0(void)

void FUN_148c1c1e0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c1c253 FUN_148c1c253 body=51 status=ok
// SIG undefined FUN_148c1c253(void)

void FUN_148c1c253(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined ***)(param_1 + lVar1) = &PTR_FUN_14b76ba80;
      *(undefined8 *)(param_1 + 8 + lVar1) = *(undefined8 *)(param_2 + 8 + lVar1);
      *(undefined4 *)(param_1 + 0x10 + lVar1) = *(undefined4 *)(param_2 + 0x10 + lVar1);
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c1c286 FUN_148c1c286 body=115 status=ok
// SIG undefined FUN_148c1c286(void)

void FUN_148c1c286(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c1c2f9 FUN_148c1c2f9 body=51 status=ok
// SIG undefined FUN_148c1c2f9(void)

void FUN_148c1c2f9(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined ***)(param_1 + lVar1) = &PTR_FUN_14b76b910;
      *(undefined8 *)(param_1 + 8 + lVar1) = *(undefined8 *)(param_2 + 8 + lVar1);
      *(undefined4 *)(param_1 + 0x10 + lVar1) = *(undefined4 *)(param_2 + 0x10 + lVar1);
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c1c32c FUN_148c1c32c body=111 status=ok
// SIG undefined FUN_148c1c32c(void)

void FUN_148c1c32c(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c1c39b FUN_148c1c39b body=79 status=ok
// SIG undefined FUN_148c1c39b(void)

void FUN_148c1c39b(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c193dc(param_1,param_2);
    *param_1 = &PTR_FUN_14b76c1d0;
    FUN_148c1be22(param_1 + 4,param_2 + 0x20);
    param_1 = param_1 + 7;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 148c1c3ea FUN_148c1c3ea body=122 status=ok
// SIG undefined FUN_148c1c3ea(void)

longlong FUN_148c1c3ea(longlong param_1,longlong param_2)

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
    FUN_148c1c464(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c1c464 FUN_148c1c464 body=224 status=ok
// SIG undefined FUN_148c1c464(void)

undefined8 * FUN_148c1c464(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145a6011a(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140044672(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_148c1be22(puVar6,puVar4);
          FUN_148c1c544(puVar6 + 6,puVar4 + 6);
          *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar4 + 10);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xc;
        puVar6 = puVar6 + 0xc;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c1c544 FUN_148c1c544 body=77 status=ok
// SIG undefined FUN_148c1c544(void)

undefined8 * FUN_148c1c544(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148c1bd7a(param_1,iVar1,0);
    FUN_148c1bded(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148c1c5e4 FUN_148c1c5e4 body=63 status=ok
// SIG undefined FUN_148c1c5e4(void)

undefined1 FUN_148c1c5e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1c748(param_2,param_3);
    param_3 = param_3 + 0x810;
    param_2 = param_2 + 0x810;
  }
  return 1;
}



// FUNCTION 148c1c64c FUN_148c1c64c body=59 status=ok
// SIG undefined FUN_148c1c64c(void)

undefined8 FUN_148c1c64c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1c698 FUN_148c1c698 body=40 status=ok
// SIG undefined FUN_148c1c698(void)

void FUN_148c1c698(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x810) == '\x01') {
    FUN_145b233de(param_2);
    *(undefined1 *)(param_2 + 0x810) = 0;
  }
  return;
}



// FUNCTION 148c1c70e FUN_148c1c70e body=57 status=ok
// SIG undefined FUN_148c1c70e(void)

void FUN_148c1c70e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab0d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab0d0 = FUN_140002ddd(FUN_1465db7bb,uVar1,L"OakGlobalsInventory");
  }
  return;
}



// FUNCTION 148c1c748 FUN_148c1c748 body=817 status=ok
// SIG undefined FUN_148c1c748(void)

longlong FUN_148c1c748(longlong param_1,longlong param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_148c1ca7a(param_1 + 0x20,param_2 + 0x20);
  FUN_148c1cace(param_1 + 0x38,param_2 + 0x38);
  FUN_148c1cb1e(param_1 + 0x48,param_2 + 0x48);
  FUN_148c1cb1e(param_1 + 0x60,param_2 + 0x60);
  memcpy((void *)(param_1 + 0x78),(void *)(param_2 + 0x78),0xa8);
  lVar15 = 0x120;
  do {
    FUN_1486c1fae(param_1 + lVar15,param_2 + lVar15);
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0x1b0);
  uVar1 = *(undefined4 *)(param_2 + 0x1b0);
  uVar2 = *(undefined4 *)(param_2 + 0x1b4);
  uVar3 = *(undefined4 *)(param_2 + 0x1b8);
  uVar4 = *(undefined4 *)(param_2 + 0x1bc);
  uVar5 = *(undefined4 *)(param_2 + 0x1c4);
  uVar6 = *(undefined4 *)(param_2 + 0x1c8);
  uVar7 = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1c4) = uVar5;
  *(undefined4 *)(param_1 + 0x1c8) = uVar6;
  *(undefined4 *)(param_1 + 0x1cc) = uVar7;
  *(undefined4 *)(param_1 + 0x1b0) = uVar1;
  *(undefined4 *)(param_1 + 0x1b4) = uVar2;
  *(undefined4 *)(param_1 + 0x1b8) = uVar3;
  *(undefined4 *)(param_1 + 0x1bc) = uVar4;
  FUN_1486c1fae(param_1 + 0x1d0,param_2 + 0x1d0);
  if ((*(longlong *)(param_1 + 0x1e8) != *(longlong *)(param_2 + 0x1e8)) ||
     (*(int *)(param_1 + 0x1f0) != *(int *)(param_2 + 0x1f0))) {
    *(longlong *)(param_1 + 0x1e8) = *(longlong *)(param_2 + 0x1e8);
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  if ((*(longlong *)(param_1 + 0x200) != *(longlong *)(param_2 + 0x200)) ||
     (*(int *)(param_1 + 0x208) != *(int *)(param_2 + 0x208))) {
    *(longlong *)(param_1 + 0x200) = *(longlong *)(param_2 + 0x200);
    *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  (**(code **)(*(longlong *)(param_1 + 0x218) + 0x20))(param_1 + 0x218,0);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  FUN_1406022fe(param_1 + 0x228,param_2 + 0x228);
  if ((*(longlong *)(param_1 + 0x238) != *(longlong *)(param_2 + 0x238)) ||
     (*(int *)(param_1 + 0x240) != *(int *)(param_2 + 0x240))) {
    *(longlong *)(param_1 + 0x238) = *(longlong *)(param_2 + 0x238);
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  if ((*(longlong *)(param_1 + 0x250) != *(longlong *)(param_2 + 0x250)) ||
     (*(int *)(param_1 + 600) != *(int *)(param_2 + 600))) {
    *(longlong *)(param_1 + 0x250) = *(longlong *)(param_2 + 0x250);
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  FUN_148c1cc62(param_1 + 0x270,param_2 + 0x270);
  lVar15 = 0x2c0;
  do {
    FUN_14150acc4(param_1 + lVar15,param_2 + lVar15);
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0x458);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_2 + 0x460);
  uVar1 = *(undefined4 *)(param_2 + 0x46c);
  uVar2 = *(undefined4 *)(param_2 + 0x470);
  uVar3 = *(undefined4 *)(param_2 + 0x474);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
  *(undefined4 *)(param_1 + 0x46c) = uVar1;
  *(undefined4 *)(param_1 + 0x470) = uVar2;
  *(undefined4 *)(param_1 + 0x474) = uVar3;
  FUN_144a787a6(param_1 + 0x478,param_2 + 0x478);
  uVar1 = *(undefined4 *)(param_2 + 0x48c);
  uVar2 = *(undefined4 *)(param_2 + 0x490);
  uVar3 = *(undefined4 *)(param_2 + 0x494);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_2 + 0x488);
  *(undefined4 *)(param_1 + 0x48c) = uVar1;
  *(undefined4 *)(param_1 + 0x490) = uVar2;
  *(undefined4 *)(param_1 + 0x494) = uVar3;
  lVar15 = 0x498;
  do {
    FUN_14875b3a0(param_1 + lVar15,param_2 + lVar15);
    lVar15 = lVar15 + 0xd8;
  } while (lVar15 != 0x648);
  FUN_14173baee(param_1 + 0x648,param_2 + 0x648);
  FUN_14173baee(param_1 + 0x660,param_2 + 0x660);
  uVar1 = *(undefined4 *)(param_2 + 0x67c);
  uVar2 = *(undefined4 *)(param_2 + 0x680);
  uVar3 = *(undefined4 *)(param_2 + 0x684);
  uVar4 = *(undefined4 *)(param_2 + 0x688);
  uVar5 = *(undefined4 *)(param_2 + 0x68c);
  uVar6 = *(undefined4 *)(param_2 + 0x690);
  uVar7 = *(undefined4 *)(param_2 + 0x694);
  uVar8 = *(undefined4 *)(param_2 + 0x698);
  uVar9 = *(undefined4 *)(param_2 + 0x69c);
  uVar10 = *(undefined4 *)(param_2 + 0x6a0);
  uVar11 = *(undefined4 *)(param_2 + 0x6a4);
  *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(param_2 + 0x678);
  *(undefined4 *)(param_1 + 0x67c) = uVar1;
  *(undefined4 *)(param_1 + 0x680) = uVar2;
  *(undefined4 *)(param_1 + 0x684) = uVar3;
  *(undefined4 *)(param_1 + 0x688) = uVar4;
  *(undefined4 *)(param_1 + 0x68c) = uVar5;
  *(undefined4 *)(param_1 + 0x690) = uVar6;
  *(undefined4 *)(param_1 + 0x694) = uVar7;
  *(undefined4 *)(param_1 + 0x698) = uVar8;
  *(undefined4 *)(param_1 + 0x69c) = uVar9;
  *(undefined4 *)(param_1 + 0x6a0) = uVar10;
  *(undefined4 *)(param_1 + 0x6a4) = uVar11;
  *(undefined8 *)(param_1 + 0x6a8) = *(undefined8 *)(param_2 + 0x6a8);
  FUN_148766b4c(param_1 + 0x6b0,param_2 + 0x6b0);
  FUN_145c45590(param_1 + 0x7d8,param_2 + 0x7d8);
  uVar12 = *(undefined8 *)(param_2 + 0x7f0);
  uVar13 = *(undefined8 *)(param_2 + 0x7f8);
  uVar14 = *(undefined8 *)(param_2 + 0x800);
  *(undefined8 *)(param_1 + 0x7e8) = *(undefined8 *)(param_2 + 0x7e8);
  *(undefined8 *)(param_1 + 0x7f0) = uVar12;
  *(undefined8 *)(param_1 + 0x7f8) = uVar13;
  *(undefined8 *)(param_1 + 0x800) = uVar14;
  *(undefined8 *)(param_1 + 0x808) = *(undefined8 *)(param_2 + 0x808);
  return param_1;
}



// FUNCTION 148c1ca7a FUN_148c1ca7a body=84 status=ok
// SIG undefined FUN_148c1ca7a(void)

longlong * FUN_148c1ca7a(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c1cace FUN_148c1cace body=79 status=ok
// SIG undefined FUN_148c1cace(void)

undefined8 * FUN_148c1cace(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c1cb72(param_1,iVar1);
      FUN_148c1cbe5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c1cb1e FUN_148c1cb1e body=84 status=ok
// SIG undefined FUN_148c1cb1e(void)

longlong * FUN_148c1cb1e(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c1cb72 FUN_148c1cb72 body=115 status=ok
// SIG undefined FUN_148c1cb72(void)

void FUN_148c1cb72(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c1cbe5 FUN_148c1cbe5 body=52 status=ok
// SIG undefined FUN_148c1cbe5(void)

void FUN_148c1cbe5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c1cc1a(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148c1cc1a FUN_148c1cc1a body=71 status=ok
// SIG undefined FUN_148c1cc1a(void)

undefined8 * FUN_148c1cc1a(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c1cc62 FUN_148c1cc62 body=122 status=ok
// SIG undefined FUN_148c1cc62(void)

longlong FUN_148c1cc62(longlong param_1,longlong param_2)

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
    FUN_148c1ccdc(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c1ccdc FUN_148c1ccdc body=250 status=ok
// SIG undefined FUN_148c1ccdc(void)

longlong * FUN_148c1ccdc(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145b23548(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_144a76ff0(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x20 + lVar6) = *(undefined8 *)(lVar2 + 0x20 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c1cdd8 FUN_148c1cdd8 body=73 status=ok
// SIG undefined FUN_148c1cdd8(void)

void FUN_148c1cdd8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14b775140;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}



// FUNCTION 148c1ce38 FUN_148c1ce38 body=54 status=ok
// SIG undefined FUN_148c1ce38(void)

undefined1 FUN_148c1ce38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1cf86(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148c1ce96 FUN_148c1ce96 body=59 status=ok
// SIG undefined FUN_148c1ce96(void)

undefined8 FUN_148c1ce96(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1cedc FUN_148c1cedc body=34 status=ok
// SIG undefined FUN_148c1cedc(void)

void FUN_148c1cedc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1459c5de2(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148c1cf4c FUN_148c1cf4c body=57 status=ok
// SIG undefined FUN_148c1cf4c(void)

void FUN_148c1cf4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab0e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab0e8 = FUN_140002ddd(FUN_1465db851,uVar1,L"OakGlobalsIO");
  }
  return;
}



// FUNCTION 148c1cf86 FUN_148c1cf86 body=102 status=ok
// SIG undefined FUN_148c1cf86(void)

longlong FUN_148c1cf86(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 148c1cfee FUN_148c1cfee body=125 status=ok
// SIG undefined FUN_148c1cfee(void)

void FUN_148c1cfee(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14b7752d0;
  param_2[4] = 0x459c4000447a0000;
  param_2[5] = 0x40100000461c4000;
  param_2[6] = 0x3f4000003fc00000;
  param_2[7] = 0x4248000041700000;
  param_2[8] = 0x3f00000000000003;
  *(undefined1 *)(param_2 + 9) = 1;
  param_2[10] = 0x3fe0000000000000;
  param_2[0xb] = 0x3fe23d70a0000000;
  *(undefined4 *)(param_2 + 0xc) = 0x40400000;
  return;
}



// FUNCTION 148c1d082 FUN_148c1d082 body=126 status=ok
// SIG undefined FUN_148c1d082(void)

undefined8 FUN_148c1d082(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_141289ada(param_2 + 8 + lVar2,param_3 + 8 + lVar2);
      *(undefined4 *)(param_2 + 0x18 + lVar2) = *(undefined4 *)(param_3 + 0x18 + lVar2);
      puVar3 = (undefined8 *)(param_3 + 0x20 + lVar2);
      puVar4 = (undefined8 *)(param_2 + 0x20 + lVar2);
      for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(param_2 + 0x60 + lVar2) = *(undefined4 *)(param_3 + 0x60 + lVar2);
      lVar2 = lVar2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c1d128 FUN_148c1d128 body=59 status=ok
// SIG undefined FUN_148c1d128(void)

undefined8 FUN_148c1d128(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1d16e FUN_148c1d16e body=43 status=ok
// SIG undefined FUN_148c1d16e(void)

void FUN_148c1d16e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xd) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0xd) = 0;
  }
  return;
}



// FUNCTION 148c1d1e8 FUN_148c1d1e8 body=57 status=ok
// SIG undefined FUN_148c1d1e8(void)

void FUN_148c1d1e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab100 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab100 = FUN_140002ddd(FUN_1465db8e7,uVar1,L"OakGlobalsPing");
  }
  return;
}



// FUNCTION 148c1d222 FUN_148c1d222 body=77 status=ok
// SIG undefined FUN_148c1d222(void)

void FUN_148c1d222(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14b775460;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  return;
}



// FUNCTION 148c1d286 FUN_148c1d286 body=54 status=ok
// SIG undefined FUN_148c1d286(void)

undefined1 FUN_148c1d286(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1d3de(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148c1d2e4 FUN_148c1d2e4 body=59 status=ok
// SIG undefined FUN_148c1d2e4(void)

undefined8 FUN_148c1d2e4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1d32a FUN_148c1d32a body=43 status=ok
// SIG undefined FUN_148c1d32a(void)

void FUN_148c1d32a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xd) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0xd) = 0;
  }
  return;
}



// FUNCTION 148c1d3a4 FUN_148c1d3a4 body=57 status=ok
// SIG undefined FUN_148c1d3a4(void)

void FUN_148c1d3a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab118 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab118 = FUN_140002ddd(FUN_1465db97d,uVar1,L"OakGlobalsProgression");
  }
  return;
}



// FUNCTION 148c1d3de FUN_148c1d3de body=83 status=ok
// SIG undefined FUN_148c1d3de(void)

longlong FUN_148c1d3de(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_1486b7d4c(param_1 + 0x20,param_2 + 0x20);
  FUN_1486b7d4c(param_1 + 0x38,param_2 + 0x38);
  FUN_1486b7d4c(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 148c1d450 FUN_148c1d450 body=63 status=ok
// SIG undefined FUN_148c1d450(void)

undefined1 FUN_148c1d450(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1d57a(param_2,param_3);
    param_3 = param_3 + 0x238;
    param_2 = param_2 + 0x238;
  }
  return 1;
}



// FUNCTION 148c1d4b8 FUN_148c1d4b8 body=59 status=ok
// SIG undefined FUN_148c1d4b8(void)

undefined8 FUN_148c1d4b8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1d504 FUN_148c1d504 body=40 status=ok
// SIG undefined FUN_148c1d504(void)

void FUN_148c1d504(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x238) == '\x01') {
    FUN_145976236(param_2);
    *(undefined1 *)(param_2 + 0x238) = 0;
  }
  return;
}



// FUNCTION 148c1d57a FUN_148c1d57a body=313 status=ok
// SIG undefined FUN_148c1d57a(void)

longlong FUN_148c1d57a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_14872dd1e();
  FUN_140d02432(param_1 + 0x18,param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x68) != *(longlong *)(param_2 + 0x68)) ||
     (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70))) {
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  FUN_145fced18(param_1 + 0x80,param_2 + 0x80);
  FUN_140d02432(param_1 + 0x90,param_2 + 0x90);
  FUN_140d02432(param_1 + 0xe0,param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  uVar1 = *(undefined4 *)(param_2 + 0x13c);
  uVar2 = *(undefined4 *)(param_2 + 0x140);
  uVar3 = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  *(undefined4 *)(param_1 + 0x140) = uVar2;
  *(undefined4 *)(param_1 + 0x144) = uVar3;
  FUN_144a787a6(param_1 + 0x148,param_2 + 0x148);
  FUN_14150acc4(param_1 + 0x158,param_2 + 0x158);
  FUN_140d02432(param_1 + 0x170,param_2 + 0x170);
  FUN_14872dd1e(param_1 + 0x1c0,param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
  uVar1 = *(undefined4 *)(param_2 + 0x1e4);
  uVar2 = *(undefined4 *)(param_2 + 0x1e8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e4) = uVar1;
  *(undefined4 *)(param_1 + 0x1e8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ec) = uVar3;
  FUN_144a787a6(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_14173baee(param_1 + 0x200,param_2 + 0x200);
  uVar4 = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x220) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x230) = uVar4;
  return param_1;
}



// FUNCTION 148c1d738 FUN_148c1d738 body=59 status=ok
// SIG undefined FUN_148c1d738(void)

undefined8 FUN_148c1d738(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1d818 FUN_148c1d818 body=49 status=ok
// SIG undefined FUN_148c1d818(void)

void FUN_148c1d818(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148c1d860 FUN_148c1d860 body=115 status=ok
// SIG undefined FUN_148c1d860(void)

undefined8 FUN_148c1d860(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
    do {
      *(undefined8 *)(param_2 + -0x50) = *(undefined8 *)(param_3 + -0x50);
      uVar1 = *(undefined4 *)(param_3 + -0x44);
      uVar2 = *(undefined4 *)(param_3 + -0x40);
      uVar3 = *(undefined4 *)(param_3 + -0x3c);
      *(undefined4 *)(param_2 + -0x48) = *(undefined4 *)(param_3 + -0x48);
      *(undefined4 *)(param_2 + -0x44) = uVar1;
      *(undefined4 *)(param_2 + -0x40) = uVar2;
      *(undefined4 *)(param_2 + -0x3c) = uVar3;
      FUN_144a787a6(param_2 + -0x38,param_3 + -0x38);
      uVar1 = *(undefined4 *)(param_3 + -0x24);
      uVar2 = *(undefined4 *)(param_3 + -0x20);
      uVar3 = *(undefined4 *)(param_3 + -0x1c);
      uVar4 = *(undefined4 *)(param_3 + -0x18);
      uVar5 = *(undefined4 *)(param_3 + -0x14);
      uVar6 = *(undefined4 *)(param_3 + -0x10);
      uVar7 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x24) = uVar1;
      *(undefined4 *)(param_2 + -0x20) = uVar2;
      *(undefined4 *)(param_2 + -0x1c) = uVar3;
      *(undefined4 *)(param_2 + -0x18) = uVar4;
      *(undefined4 *)(param_2 + -0x14) = uVar5;
      *(undefined4 *)(param_2 + -0x10) = uVar6;
      *(undefined4 *)(param_2 + -0xc) = uVar7;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_148c1d998(param_2,param_3);
      param_3 = param_3 + 0x60;
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c1d8fc FUN_148c1d8fc body=59 status=ok
// SIG undefined FUN_148c1d8fc(void)

undefined8 FUN_148c1d8fc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1d998 FUN_148c1d998 body=89 status=ok
// SIG undefined FUN_148c1d998(void)

undefined8 * FUN_148c1d998(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c1d9f2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 148c1d9f2 FUN_148c1d9f2 body=115 status=ok
// SIG undefined FUN_148c1d9f2(void)

void FUN_148c1d9f2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c1da66 FUN_148c1da66 body=52 status=ok
// SIG undefined FUN_148c1da66(void)

void FUN_148c1da66(longlong param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c1db0a FUN_148c1db0a body=87 status=ok
// SIG undefined FUN_148c1db0a(void)

undefined1 FUN_148c1db0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1dc26(param_2,param_3);
    FUN_140d02432(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148c1db8a FUN_148c1db8a body=59 status=ok
// SIG undefined FUN_148c1db8a(void)

undefined8 FUN_148c1db8a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1dc26 FUN_148c1dc26 body=95 status=ok
// SIG undefined FUN_148c1dc26(void)

undefined8 * FUN_148c1dc26(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459761f7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c1dc86(param_1,iVar1);
      FUN_148c1dcf9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c1dc86 FUN_148c1dc86 body=115 status=ok
// SIG undefined FUN_148c1dc86(void)

void FUN_148c1dc86(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,8);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c1dcf9 FUN_148c1dcf9 body=52 status=ok
// SIG undefined FUN_148c1dcf9(void)

void FUN_148c1dcf9(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c1dd2e(param_1,param_2);
    param_1 = param_1 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return;
}



// FUNCTION 148c1dd2e FUN_148c1dd2e body=206 status=ok
// SIG undefined FUN_148c1dd2e(void)

undefined8 * FUN_148c1dd2e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *param_1 = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[9] = param_2[9];
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar5 = *(undefined4 *)(param_2 + 6);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar8 = *(undefined4 *)(param_2 + 8);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar9;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 6) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar6;
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_148c1d9f2(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 0xc);
  }
  return param_1;
}



// FUNCTION 148c1ddfe FUN_148c1ddfe body=50 status=ok
// SIG undefined FUN_148c1ddfe(void)

void FUN_148c1ddfe(longlong *param_1)

{
  if ((char)param_1[0xc] == '\x01') {
    FUN_1459761f7(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 148c1de4e FUN_148c1de4e body=63 status=ok
// SIG undefined FUN_148c1de4e(void)

undefined1 FUN_148c1de4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1dfb2(param_2,param_3);
    param_3 = param_3 + 0x2e8;
    param_2 = param_2 + 0x2e8;
  }
  return 1;
}



// FUNCTION 148c1deb6 FUN_148c1deb6 body=59 status=ok
// SIG undefined FUN_148c1deb6(void)

undefined8 FUN_148c1deb6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1df02 FUN_148c1df02 body=40 status=ok
// SIG undefined FUN_148c1df02(void)

void FUN_148c1df02(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2e8) == '\x01') {
    FUN_145976176(param_2);
    *(undefined1 *)(param_2 + 0x2e8) = 0;
  }
  return;
}



// FUNCTION 148c1df78 FUN_148c1df78 body=57 status=ok
// SIG undefined FUN_148c1df78(void)

void FUN_148c1df78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab190 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab190 = FUN_140002ddd(FUN_1465dbc6b,uVar1,L"OakGlobalsSkills");
  }
  return;
}



// FUNCTION 148c1dfb2 FUN_148c1dfb2 body=117 status=ok
// SIG undefined FUN_148c1dfb2(void)

longlong FUN_148c1dfb2(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_145c43818(param_1 + 0x20,param_2 + 0x20);
  FUN_1401f3db8(param_1 + 0x38,param_2 + 0x38);
  FUN_148c1d57a(param_1 + 0x50,param_2 + 0x50);
  FUN_148c1dc26(param_1 + 0x288,param_2 + 0x288);
  FUN_140d02432(param_1 + 0x298,param_2 + 0x298);
  return param_1;
}



// FUNCTION 148c1e0b4 FUN_148c1e0b4 body=73 status=ok
// SIG undefined FUN_148c1e0b4(void)

undefined1 FUN_148c1e0b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14150acc4(param_2,param_3);
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
    FUN_140d02432(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x70;
    param_3 = param_3 + 0x70;
  }
  return 1;
}



// FUNCTION 148c1e126 FUN_148c1e126 body=59 status=ok
// SIG undefined FUN_148c1e126(void)

undefined8 FUN_148c1e126(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1e22e FUN_148c1e22e body=54 status=ok
// SIG undefined FUN_148c1e22e(void)

undefined1 FUN_148c1e22e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1e342(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148c1e28c FUN_148c1e28c body=59 status=ok
// SIG undefined FUN_148c1e28c(void)

undefined8 FUN_148c1e28c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1e2d2 FUN_148c1e2d2 body=34 status=ok
// SIG undefined FUN_148c1e2d2(void)

void FUN_148c1e2d2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_145a3aaec(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148c1e342 FUN_148c1e342 body=107 status=ok
// SIG undefined FUN_148c1e342(void)

undefined8 * FUN_148c1e342(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  FUN_14872dd1e(param_1 + 5,param_2 + 5);
  param_1[8] = param_2[8];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar2 = *(undefined4 *)(param_2 + 10);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 10) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
  FUN_144a787a6(param_1 + 0xb,param_2 + 0xb);
  FUN_148c1e3ae(param_1 + 0xd,param_2 + 0xd);
  return param_1;
}



// FUNCTION 148c1e3ae FUN_148c1e3ae body=79 status=ok
// SIG undefined FUN_148c1e3ae(void)

undefined8 * FUN_148c1e3ae(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c1e3fe(param_1,iVar1);
      FUN_148c1e46d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c1e3fe FUN_148c1e3fe body=111 status=ok
// SIG undefined FUN_148c1e3fe(void)

void FUN_148c1e3fe(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c1e46d FUN_148c1e46d body=121 status=ok
// SIG undefined FUN_148c1e46d(void)

void FUN_148c1e46d(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_144a76ff0(param_1,param_2);
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    FUN_144a7f96e(param_1 + 0x28,param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 148c1e4e8 FUN_148c1e4e8 body=69 status=ok
// SIG undefined FUN_148c1e4e8(void)

void FUN_148c1e4e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *param_2 = &PTR_FUN_14b775fd0;
  memset(param_2 + 4,0,0xd8);
  return;
}



// FUNCTION 148c1e544 FUN_148c1e544 body=63 status=ok
// SIG undefined FUN_148c1e544(void)

undefined1 FUN_148c1e544(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1e6a8(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148c1e5ac FUN_148c1e5ac body=59 status=ok
// SIG undefined FUN_148c1e5ac(void)

undefined8 FUN_148c1e5ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1e5f8 FUN_148c1e5f8 body=40 status=ok
// SIG undefined FUN_148c1e5f8(void)

void FUN_148c1e5f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_145a3aa18(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}


