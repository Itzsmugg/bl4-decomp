// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1491c057c FUN_1491c057c body=88 status=ok
// SIG undefined FUN_1491c057c(void)

void FUN_1491c057c(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  }
  FUN_140f8ce79(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_140f8ce79(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1491c05d4 FUN_1491c05d4 body=284 status=ok
// SIG undefined FUN_1491c05d4(void)

longlong FUN_1491c05d4(longlong param_1,longlong param_2)

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
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 0x2c);
  uVar10 = *(undefined4 *)(param_2 + 0x30);
  uVar11 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar9;
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  *(undefined4 *)(param_1 + 0x34) = uVar11;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_14591e93c(param_1 + 0x38,param_2 + 0x38);
  memcpy((void *)(param_1 + 0x50),(void *)(param_2 + 0x50),0x98);
  FUN_1490e1992(param_1 + 0xe8,param_2 + 0xe8);
  FUN_145c50a48(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  FUN_1491c06f0(param_1 + 0x110,param_2 + 0x110);
  FUN_1491d0b20(param_1 + 0x120,param_2 + 0x120);
  FUN_1491d0ba4(param_1 + 0x130,param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x14d) = *(undefined8 *)(param_2 + 0x14d);
  uVar1 = *(undefined4 *)(param_2 + 0x144);
  uVar2 = *(undefined4 *)(param_2 + 0x148);
  uVar3 = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = uVar1;
  *(undefined4 *)(param_1 + 0x148) = uVar2;
  *(undefined4 *)(param_1 + 0x14c) = uVar3;
  FUN_1444888de(param_1 + 0x158,param_2 + 0x158);
  FUN_1491b47dc(param_1 + 0x168,param_2 + 0x168);
  uVar1 = *(undefined4 *)(param_2 + 0x1b4);
  uVar2 = *(undefined4 *)(param_2 + 0x1b8);
  uVar3 = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = uVar1;
  *(undefined4 *)(param_1 + 0x1b8) = uVar2;
  *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  FUN_144a787a6(param_1 + 0x1c0,param_2 + 0x1c0);
  uVar12 = *(undefined8 *)(param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d8) = uVar12;
  return param_1;
}



// FUNCTION 1491c06f0 FUN_1491c06f0 body=88 status=ok
// SIG undefined FUN_1491c06f0(void)

undefined8 * FUN_1491c06f0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1491c0748(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1491c0748 FUN_1491c0748 body=98 status=ok
// SIG undefined FUN_1491c0748(void)

void FUN_1491c0748(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1491c0814 FUN_1491c0814 body=59 status=ok
// SIG undefined FUN_1491c0814(void)

undefined8 FUN_1491c0814(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c08b4 FUN_1491c08b4 body=29 status=ok
// SIG undefined FUN_1491c08b4(void)

undefined8 FUN_1491c08b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c08d2 FUN_1491c08d2 body=59 status=ok
// SIG undefined FUN_1491c08d2(void)

void FUN_1491c08d2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bb737f0;
  return;
}



// FUNCTION 1491c090e FUN_1491c090e body=43 status=ok
// SIG undefined FUN_1491c090e(void)

void FUN_1491c090e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bb737f0;
  return;
}



// FUNCTION 1491c095e FUN_1491c095e body=70 status=ok
// SIG undefined FUN_1491c095e(void)

undefined1 FUN_1491c095e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_1491c05d4(param_2,param_3);
      param_3 = param_3 + 0x1f0;
      param_2 = param_2 + 0x1f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491c09cc FUN_1491c09cc body=59 status=ok
// SIG undefined FUN_1491c09cc(void)

undefined8 FUN_1491c09cc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c0a18 FUN_1491c0a18 body=49 status=ok
// SIG undefined FUN_1491c0a18(void)

void FUN_1491c0a18(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1491c0a98 FUN_1491c0a98 body=52 status=ok
// SIG undefined FUN_1491c0a98(void)

undefined8 * FUN_1491c0a98(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c0b3a FUN_1491c0b3a body=59 status=ok
// SIG undefined FUN_1491c0b3a(void)

undefined8 FUN_1491c0b3a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c0c22 FUN_1491c0c22 body=59 status=ok
// SIG undefined FUN_1491c0c22(void)

undefined8 FUN_1491c0c22(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c0c6e FUN_1491c0c6e body=40 status=ok
// SIG undefined FUN_1491c0c6e(void)

void FUN_1491c0c6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4e8) == '\x01') {
    FUN_145928a1c(param_2);
    *(undefined1 *)(param_2 + 0x4e8) = 0;
  }
  return;
}



// FUNCTION 1491c0ce4 FUN_1491c0ce4 body=98 status=ok
// SIG undefined FUN_1491c0ce4(void)

void FUN_1491c0ce4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1491c0d46 FUN_1491c0d46 body=82 status=ok
// SIG undefined FUN_1491c0d46(void)

void FUN_1491c0d46(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1491c0d98 FUN_1491c0d98 body=115 status=ok
// SIG undefined FUN_1491c0d98(void)

void FUN_1491c0d98(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1491c0e0c FUN_1491c0e0c body=98 status=ok
// SIG undefined FUN_1491c0e0c(void)

void FUN_1491c0e0c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1491c0e6e FUN_1491c0e6e body=88 status=ok
// SIG undefined FUN_1491c0e6e(void)

longlong * FUN_1491c0e6e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1491c0ec6 FUN_1491c0ec6 body=98 status=ok
// SIG undefined FUN_1491c0ec6(void)

void FUN_1491c0ec6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1491c0f28 FUN_1491c0f28 body=98 status=ok
// SIG undefined FUN_1491c0f28(void)

void FUN_1491c0f28(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1491c0f8c FUN_1491c0f8c body=132 status=ok
// SIG undefined FUN_1491c0f8c(void)

void FUN_1491c0f8c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1491c1012 FUN_1491c1012 body=105 status=ok
// SIG undefined FUN_1491c1012(void)

undefined8 * FUN_1491c1012(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1470d3556(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



// FUNCTION 1491c10e6 FUN_1491c10e6 body=59 status=ok
// SIG undefined FUN_1491c10e6(void)

undefined8 FUN_1491c10e6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c11f4 FUN_1491c11f4 body=59 status=ok
// SIG undefined FUN_1491c11f4(void)

undefined8 FUN_1491c11f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c12ca FUN_1491c12ca body=63 status=ok
// SIG undefined FUN_1491c12ca(void)

undefined1 FUN_1491c12ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1458608c8(param_2,param_3);
    param_3 = param_3 + 0x260;
    param_2 = param_2 + 0x260;
  }
  return 1;
}



// FUNCTION 1491c1332 FUN_1491c1332 body=59 status=ok
// SIG undefined FUN_1491c1332(void)

undefined8 FUN_1491c1332(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c137e FUN_1491c137e body=40 status=ok
// SIG undefined FUN_1491c137e(void)

void FUN_1491c137e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x260) == '\x01') {
    FUN_145928c68(param_2);
    *(undefined1 *)(param_2 + 0x260) = 0;
  }
  return;
}



// FUNCTION 1491c13f6 FUN_1491c13f6 body=107 status=ok
// SIG undefined FUN_1491c13f6(void)

void FUN_1491c13f6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1491c1462(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 1491c1462 FUN_1491c1462 body=132 status=ok
// SIG undefined FUN_1491c1462(void)

void FUN_1491c1462(longlong param_1,int param_2)

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



// FUNCTION 1491c14e8 FUN_1491c14e8 body=38 status=ok
// SIG undefined FUN_1491c14e8(void)

undefined8 FUN_1491c14e8(undefined8 param_1,int param_2)

{
  FUN_1491c150e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c150e FUN_1491c150e body=308 status=ok
// SIG undefined FUN_1491c150e(void)

void FUN_1491c150e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bb73f80;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140955eaa(param_1 + 0x22);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x15);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001491c1636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1491c1642 FUN_1491c1642 body=50 status=ok
// SIG undefined FUN_1491c1642(void)

void FUN_1491c1642(undefined8 param_1,undefined8 *param_2)

{
  FUN_145af4e04(param_2);
  *param_2 = &PTR_FUN_14bb5ded0;
  param_2[0x4c] = 0;
  *(undefined1 *)((longlong)param_2 + 0x251) = 0;
  return;
}



// FUNCTION 1491c1674 FUN_1491c1674 body=50 status=ok
// SIG undefined FUN_1491c1674(void)

void FUN_1491c1674(undefined8 param_1,undefined8 *param_2)

{
  FUN_145af4e04(param_2);
  *param_2 = &PTR_FUN_14bb5ded0;
  param_2[0x4c] = 0;
  *(undefined1 *)((longlong)param_2 + 0x251) = 0;
  return;
}



// FUNCTION 1491c16ca FUN_1491c16ca body=92 status=ok
// SIG undefined FUN_1491c16ca(void)

undefined8 FUN_1491c16ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1458608c8(param_2,param_3);
    *(undefined8 *)(param_2 + 0x260) = *(undefined8 *)(param_3 + 0x260);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 1491c174e FUN_1491c174e body=59 status=ok
// SIG undefined FUN_1491c174e(void)

undefined8 FUN_1491c174e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c179a FUN_1491c179a body=40 status=ok
// SIG undefined FUN_1491c179a(void)

void FUN_1491c179a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_145928c68(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 1491c187e FUN_1491c187e body=59 status=ok
// SIG undefined FUN_1491c187e(void)

undefined8 FUN_1491c187e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c1920 FUN_1491c1920 body=48 status=ok
// SIG undefined FUN_1491c1920(void)

void FUN_1491c1920(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xb8,4);
  }
  return;
}



// FUNCTION 1491c1950 FUN_1491c1950 body=112 status=ok
// SIG undefined FUN_1491c1950(void)

void FUN_1491c1950(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x110,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x110)) {
      uVar2 = uVar1 / 0x110 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x110,0x10);
  }
  return;
}



// FUNCTION 1491c19c0 FUN_1491c19c0 body=98 status=ok
// SIG undefined FUN_1491c19c0(void)

void FUN_1491c19c0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1491c1a22 FUN_1491c1a22 body=134 status=ok
// SIG undefined FUN_1491c1a22(void)

void FUN_1491c1a22(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
    do {
      *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(param_2 + 1);
      puVar2[-2] = *param_2;
      *puVar2 = 0;
      iVar1 = *(int *)(param_2 + 3);
      _Src = (void *)param_2[2];
      *(int *)(puVar2 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        FUN_149192186(puVar2,iVar1,0);
        memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 0xc);
      }
      param_2 = param_2 + 4;
      puVar2 = puVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1491c1aa8 FUN_1491c1aa8 body=47 status=ok
// SIG undefined FUN_1491c1aa8(void)

void FUN_1491c1aa8(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1491c1ad8 FUN_1491c1ad8 body=111 status=ok
// SIG undefined FUN_1491c1ad8(void)

void FUN_1491c1ad8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1491c1b47 FUN_1491c1b47 body=52 status=ok
// SIG undefined FUN_1491c1b47(void)

void FUN_1491c1b47(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14919eb96(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 1491c1b7c FUN_1491c1b7c body=138 status=ok
// SIG undefined FUN_1491c1b7c(void)

void FUN_1491c1b7c(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1491c1c06 FUN_1491c1c06 body=3899 status=ok
// SIG undefined FUN_1491c1c06(void)

void FUN_1491c1c06(float *param_1,longlong *param_2,undefined1 param_3,float *param_4,float *param_5
                  )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  char *pcVar15;
  float fVar16;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_218 [32];
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_190;
  double dStack_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  iVar12 = (int)param_2[1];
  if (iVar12 == 0) goto switchD_1491c1cb7_default;
  switch(param_3) {
  case 1:
  case 10:
    if ((*(char *)*param_2 == '\0') && (((char *)*param_2)[1] != '\x01')) break;
    *(undefined1 *)(param_1 + 0x20) = 1;
    fVar16 = *param_5;
    cVar11 = ((char *)*param_2)[1];
    if (*(char *)*param_2 == '\0') {
      fVar17 = *param_1;
      if ((cVar11 != '\0') && (fVar16 <= fVar17)) {
        fVar17 = fVar16;
      }
    }
    else {
      fVar18 = *param_4;
      if (cVar11 == '\0') {
        fVar17 = *param_1;
      }
      else {
        fVar17 = *param_1;
        if (fVar16 <= fVar18) {
          if (fVar18 <= fVar17) {
            fVar17 = fVar18;
          }
          if (fVar17 <= fVar16) {
            fVar17 = fVar16;
          }
          goto LAB_1491c21ab;
        }
        if (fVar16 <= fVar17) {
          fVar17 = fVar16;
        }
      }
      if (fVar17 <= fVar18) {
        fVar17 = fVar18;
      }
    }
LAB_1491c21ab:
    *param_1 = fVar17;
    break;
  case 2:
    if ((*(char *)*param_2 == '\0') && (((char *)*param_2)[1] != '\x01')) break;
    *(undefined1 *)(param_1 + 0x20) = 1;
    fVar16 = *param_5;
    cVar11 = ((char *)*param_2)[1];
    if (*(char *)*param_2 == '\0') {
      fVar17 = *param_1;
      if ((cVar11 != '\0') && ((int)fVar16 <= (int)fVar17)) {
        fVar17 = fVar16;
      }
    }
    else {
      fVar17 = *param_4;
      if (cVar11 == '\0') {
        fVar16 = *param_1;
      }
      else {
        fVar18 = *param_1;
        if ((int)fVar16 <= (int)fVar17) {
          if ((int)fVar18 < (int)fVar17) {
            fVar17 = fVar18;
          }
          if ((int)fVar17 < (int)fVar16) {
            fVar17 = fVar16;
          }
          goto LAB_1491c2276;
        }
        if ((int)fVar18 < (int)fVar16) {
          fVar16 = fVar18;
        }
      }
      if ((int)fVar17 <= (int)fVar16) {
        fVar17 = fVar16;
      }
    }
LAB_1491c2276:
    *param_1 = fVar17;
    break;
  case 3:
    if ((1 < iVar12) &&
       (((pcVar15 = (char *)*param_2, *pcVar15 != '\0' || (pcVar15[1] != '\0')) ||
        ((pcVar15[2] != '\0' || (pcVar15[3] == '\x01')))))) {
      *(undefined1 *)(param_1 + 0x20) = 1;
      fVar16 = (float)FUN_1491c2b42(*param_2,param_1,param_4,param_5);
      *param_1 = fVar16;
      fVar16 = (float)FUN_1491c2b42(*param_2 + 2,param_1 + 1,param_4 + 1,param_5 + 1);
      param_1[1] = fVar16;
    }
    break;
  case 4:
  case 5:
  case 6:
    if ((2 < iVar12) &&
       ((((pcVar15 = (char *)*param_2, *pcVar15 != '\0' || (pcVar15[1] != '\0')) ||
         (pcVar15[2] != '\0')) ||
        (((pcVar15[3] != '\0' || (pcVar15[4] != '\0')) || (pcVar15[5] == '\x01')))))) {
      *(undefined1 *)(param_1 + 0x20) = 1;
      fVar16 = (float)FUN_1491c2b42(*param_2,param_1,param_4,param_5);
      *param_1 = fVar16;
      fVar16 = (float)FUN_1491c2b42(*param_2 + 2,param_1 + 1,param_4 + 1,param_5 + 1);
      param_1[1] = fVar16;
      fVar16 = (float)FUN_1491c2b42(*param_2 + 4,param_1 + 2,param_4 + 2,param_5 + 2);
      param_1[2] = fVar16;
    }
    break;
  case 7:
    if (iVar12 < 9) break;
    *(undefined1 *)(param_1 + 0x20) = 1;
    fVar16 = param_4[3];
    fVar17 = param_4[2];
    fVar18 = param_4[1];
    fVar8 = *param_4;
    dVar14 = (double)param_5[3];
    local_1e8._8_4_ = in_XMM0_Dc;
    local_1e8._0_8_ = dVar14;
    local_1e8._12_4_ = in_XMM0_Dd;
    fVar9 = param_5[2];
    fVar10 = param_5[1];
    local_1f8 = param_4[6];
    fVar19 = *param_5;
    fVar1 = param_5[6];
    fVar20 = param_5[4];
    fVar2 = param_5[5];
    fVar3 = param_5[10];
    fVar4 = param_5[9];
    local_1f0 = param_5[8];
    pcVar15 = (char *)*param_2;
    fVar5 = param_4[5];
    fVar6 = param_4[10];
    local_1ec = param_4[9];
    local_1f4 = param_4[8];
    if (*pcVar15 == '\0') {
      if (pcVar15[1] != '\0') {
        fVar21 = param_1[4];
        if (fVar20 <= param_1[4]) {
          fVar21 = fVar20;
        }
        goto LAB_1491c234d;
      }
      if ((((pcVar15[2] != '\0') || (pcVar15[3] != '\0')) || (pcVar15[4] != '\0')) ||
         (pcVar15[5] == '\x01')) {
        fVar21 = param_1[4];
        goto LAB_1491c234d;
      }
    }
    else {
      fVar7 = param_4[4];
      if (pcVar15[1] == '\x01') {
        fVar21 = param_1[4];
        if (fVar20 <= fVar7) {
          if (fVar7 <= fVar21) {
            fVar21 = fVar7;
          }
          if (fVar21 <= fVar20) {
            fVar21 = fVar20;
          }
          goto LAB_1491c234d;
        }
        if (fVar20 <= fVar21) {
          fVar21 = fVar20;
        }
      }
      else {
        fVar21 = param_1[4];
      }
      if (fVar21 <= fVar7) {
        fVar21 = fVar7;
      }
LAB_1491c234d:
      param_1[4] = fVar21;
      cVar11 = *(char *)(*param_2 + 3);
      if (*(char *)(*param_2 + 2) == '\0') {
        fVar20 = param_1[5];
        if ((cVar11 != '\0') && (fVar2 <= fVar20)) {
          fVar20 = fVar2;
        }
      }
      else if (cVar11 == '\0') {
        fVar20 = param_1[5];
        if (param_1[5] <= fVar5) {
          fVar20 = fVar5;
        }
      }
      else {
        fVar20 = param_1[5];
        if (fVar2 <= fVar5) {
          if (fVar5 <= fVar20) {
            fVar20 = fVar5;
          }
          if (fVar20 <= fVar2) {
            fVar20 = fVar2;
          }
        }
        else {
          if (fVar2 <= fVar20) {
            fVar20 = fVar2;
          }
          if (fVar20 <= fVar5) {
            fVar20 = fVar5;
          }
        }
      }
      param_1[5] = fVar20;
      cVar11 = *(char *)(*param_2 + 5);
      if (*(char *)(*param_2 + 4) == '\0') {
        fVar20 = param_1[6];
        if ((cVar11 != '\0') && (fVar1 <= fVar20)) {
          fVar20 = fVar1;
        }
      }
      else if (cVar11 == '\0') {
        fVar20 = param_1[6];
        if (param_1[6] <= local_1f8) {
          fVar20 = local_1f8;
        }
      }
      else {
        fVar20 = param_1[6];
        if (fVar1 <= local_1f8) {
          if (local_1f8 <= fVar20) {
            fVar20 = local_1f8;
          }
          if (fVar20 <= fVar1) {
            fVar20 = fVar1;
          }
        }
        else {
          if (fVar1 <= fVar20) {
            fVar20 = fVar1;
          }
          if (fVar20 <= local_1f8) {
            fVar20 = local_1f8;
          }
        }
      }
      param_1[6] = fVar20;
      pcVar15 = (char *)*param_2;
    }
    if ((((pcVar15[6] != '\0') || (pcVar15[7] != '\0')) || (pcVar15[8] != '\0')) ||
       (((pcVar15[9] != '\0' || (pcVar15[10] != '\0')) || (pcVar15[0xb] == '\x01')))) {
      local_118._8_8_ = (double)param_1[1];
      local_118._0_8_ = (double)*param_1;
      local_108._8_8_ = (double)param_1[3];
      local_108._0_8_ = (double)param_1[2];
      FUN_1448052ee(local_118,&local_158);
      local_118._8_4_ = SUB84((double)fVar18,0);
      local_118._0_8_ = (double)fVar8;
      local_118._12_4_ = (int)((ulonglong)(double)fVar18 >> 0x20);
      local_108._8_4_ = SUB84((double)fVar16,0);
      local_108._0_8_ = (double)fVar17;
      local_108._12_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
      FUN_1448052ee(local_118,&local_178);
      local_118._8_4_ = SUB84((double)fVar10,0);
      local_118._0_8_ = (double)fVar19;
      local_118._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
      local_108._8_4_ = SUB84(dVar14,0);
      local_108._0_8_ = (double)fVar9;
      local_108._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      FUN_1448052ee(local_118,&local_190);
      fVar17 = (float)local_190;
      fVar16 = (float)local_158;
      lVar13 = *param_2;
      if (*(char *)(lVar13 + 6) == '\0') {
        if ((*(char *)(lVar13 + 7) != '\0') && (fVar17 <= fVar16)) {
          fVar16 = fVar17;
        }
      }
      else {
        fVar18 = (float)local_178;
        if (*(char *)(lVar13 + 7) != '\0') {
          if (fVar17 <= fVar18) {
            if (fVar18 <= fVar16) {
              fVar16 = fVar18;
            }
            if (fVar16 <= fVar17) {
              fVar16 = fVar17;
            }
            goto LAB_1491c25d8;
          }
          if (fVar17 <= fVar16) {
            fVar16 = fVar17;
          }
        }
        if (fVar16 <= fVar18) {
          fVar16 = fVar18;
        }
      }
LAB_1491c25d8:
      local_1a8 = (double)fVar16;
      fVar17 = (float)dStack_188;
      fVar16 = (float)dStack_150;
      if (*(char *)(lVar13 + 8) == '\0') {
        if ((*(char *)(lVar13 + 9) != '\0') && (fVar17 <= fVar16)) {
          fVar16 = fVar17;
        }
      }
      else {
        fVar18 = (float)local_170;
        if (*(char *)(lVar13 + 9) != '\0') {
          if (fVar17 <= fVar18) {
            if (fVar18 <= fVar16) {
              fVar16 = fVar18;
            }
            if (fVar16 <= fVar17) {
              fVar16 = fVar17;
            }
            goto LAB_1491c2625;
          }
          if (fVar17 <= fVar16) {
            fVar16 = fVar17;
          }
        }
        if (fVar16 <= fVar18) {
          fVar16 = fVar18;
        }
      }
LAB_1491c2625:
      dStack_1a0 = (double)fVar16;
      fVar17 = (float)local_180;
      fVar16 = (float)local_148;
      if (*(char *)(lVar13 + 10) == '\0') {
        if ((*(char *)(lVar13 + 0xb) != '\0') && (fVar17 <= fVar16)) {
          fVar16 = fVar17;
        }
      }
      else {
        fVar18 = (float)local_168;
        if (*(char *)(lVar13 + 0xb) != '\0') {
          if (fVar17 <= fVar18) {
            if (fVar18 <= fVar16) {
              fVar16 = fVar18;
            }
            if (fVar16 <= fVar17) {
              fVar16 = fVar17;
            }
            goto LAB_1491c2675;
          }
          if (fVar17 <= fVar16) {
            fVar16 = fVar17;
          }
        }
        if (fVar16 <= fVar18) {
          fVar16 = fVar18;
        }
      }
LAB_1491c2675:
      local_198 = (double)fVar16;
      FUN_144a7484c(&local_1a8,local_118);
      *param_1 = (float)(double)local_118._0_8_;
      param_1[1] = (float)(double)local_118._8_8_;
      param_1[2] = (float)(double)local_108._0_8_;
      param_1[3] = (float)(double)local_108._8_8_;
      pcVar15 = (char *)*param_2;
    }
    if (pcVar15[0xc] == '\0') {
      if (pcVar15[0xd] == '\0') {
        if ((((pcVar15[0xe] == '\0') && (pcVar15[0xf] == '\0')) && (pcVar15[0x10] == '\0')) &&
           (pcVar15[0x11] != '\x01')) break;
        fVar16 = param_1[8];
      }
      else {
        fVar16 = param_1[8];
        if (local_1f0 <= param_1[8]) {
          fVar16 = local_1f0;
        }
      }
    }
    else if (pcVar15[0xd] == '\x01') {
      fVar16 = param_1[8];
      if (local_1f0 <= local_1f4) {
        if (local_1f4 <= fVar16) {
          fVar16 = local_1f4;
        }
        if (fVar16 <= local_1f0) {
          fVar16 = local_1f0;
        }
      }
      else {
        if (local_1f0 <= fVar16) {
          fVar16 = local_1f0;
        }
        if (fVar16 <= local_1f4) {
          fVar16 = local_1f4;
        }
      }
    }
    else {
      fVar16 = param_1[8];
      if (param_1[8] <= local_1f4) {
        fVar16 = local_1f4;
      }
    }
    param_1[8] = fVar16;
    cVar11 = *(char *)(*param_2 + 0xf);
    if (*(char *)(*param_2 + 0xe) == '\0') {
      fVar16 = param_1[9];
      if ((cVar11 != '\0') && (fVar4 <= fVar16)) {
        fVar16 = fVar4;
      }
    }
    else {
      if (cVar11 == '\0') {
        fVar16 = param_1[9];
      }
      else {
        fVar16 = param_1[9];
        if (fVar4 <= local_1ec) {
          if (local_1ec <= fVar16) {
            fVar16 = local_1ec;
          }
          if (fVar16 <= fVar4) {
            fVar16 = fVar4;
          }
          goto LAB_1491c27c4;
        }
        if (fVar4 <= fVar16) {
          fVar16 = fVar4;
        }
      }
      if (fVar16 <= local_1ec) {
        fVar16 = local_1ec;
      }
    }
LAB_1491c27c4:
    param_1[9] = fVar16;
    cVar11 = *(char *)(*param_2 + 0x11);
    if (*(char *)(*param_2 + 0x10) == '\0') {
      fVar16 = param_1[10];
      if ((cVar11 != '\0') && (fVar3 <= fVar16)) {
        fVar16 = fVar3;
      }
    }
    else {
      if (cVar11 == '\0') {
        fVar16 = param_1[10];
      }
      else {
        fVar16 = param_1[10];
        if (fVar3 <= fVar6) {
          if (fVar6 <= fVar16) {
            fVar16 = fVar6;
          }
          if (fVar16 <= fVar3) {
            fVar16 = fVar3;
          }
          goto LAB_1491c2809;
        }
        if (fVar3 <= fVar16) {
          fVar16 = fVar3;
        }
      }
      if (fVar16 <= fVar6) {
        fVar16 = fVar6;
      }
    }
LAB_1491c2809:
    param_1[10] = fVar16;
    break;
  case 8:
    if (iVar12 < 6) break;
    *(undefined1 *)(param_1 + 0x20) = 1;
    local_e0 = (double)param_4[3];
    local_e8 = (double)param_4[2];
    local_f0 = (double)param_4[1];
    local_f8 = (double)*param_4;
    fVar16 = param_4[6];
    fVar17 = param_4[4];
    fVar18 = param_4[5];
    local_118._8_8_ = (double)fVar18;
    local_118._0_8_ = (double)fVar17;
    local_108._0_8_ = (double)fVar16;
    local_120 = (double)param_5[3];
    local_128 = (double)param_5[2];
    local_130 = (double)param_5[1];
    local_138 = (double)*param_5;
    fVar8 = param_5[6];
    local_148 = (double)fVar8;
    fVar9 = param_5[4];
    fVar10 = param_5[5];
    dStack_150 = (double)fVar10;
    local_158 = (double)fVar9;
    pcVar15 = (char *)*param_2;
    if (*pcVar15 == '\0') {
      if (pcVar15[1] != '\0') {
        fVar19 = param_1[4];
        if (fVar9 <= param_1[4]) {
          fVar19 = fVar9;
        }
        goto LAB_1491c23e5;
      }
      if ((((pcVar15[2] != '\0') || (pcVar15[3] != '\0')) || (pcVar15[4] != '\0')) ||
         (pcVar15[5] == '\x01')) {
        fVar19 = param_1[4];
        goto LAB_1491c23e5;
      }
    }
    else {
      if (pcVar15[1] == '\x01') {
        fVar19 = param_1[4];
        if (fVar9 <= fVar17) {
          if (fVar17 <= fVar19) {
            fVar19 = fVar17;
          }
          if (fVar19 <= fVar9) {
            fVar19 = fVar9;
          }
          goto LAB_1491c23e5;
        }
        if (fVar9 <= fVar19) {
          fVar19 = fVar9;
        }
      }
      else {
        fVar19 = param_1[4];
      }
      if (fVar19 <= fVar17) {
        fVar19 = fVar17;
      }
LAB_1491c23e5:
      param_1[4] = fVar19;
      cVar11 = *(char *)(*param_2 + 3);
      if (*(char *)(*param_2 + 2) == '\0') {
        fVar17 = param_1[5];
        if ((cVar11 != '\0') && (fVar10 <= fVar17)) {
          fVar17 = fVar10;
        }
      }
      else {
        if (cVar11 == '\0') {
          fVar17 = param_1[5];
        }
        else {
          fVar17 = param_1[5];
          if (fVar10 <= fVar18) {
            if (fVar18 <= fVar17) {
              fVar17 = fVar18;
            }
            if (fVar17 <= fVar10) {
              fVar17 = fVar10;
            }
            goto LAB_1491c281c;
          }
          if (fVar10 <= fVar17) {
            fVar17 = fVar10;
          }
        }
        if (fVar17 <= fVar18) {
          fVar17 = fVar18;
        }
      }
LAB_1491c281c:
      param_1[5] = fVar17;
      cVar11 = *(char *)(*param_2 + 5);
      if (*(char *)(*param_2 + 4) == '\0') {
        fVar17 = param_1[6];
        if ((cVar11 != '\0') && (fVar8 <= fVar17)) {
          fVar17 = fVar8;
        }
      }
      else {
        if (cVar11 == '\0') {
          fVar17 = param_1[6];
        }
        else {
          fVar17 = param_1[6];
          if (fVar8 <= fVar16) {
            if (fVar16 <= fVar17) {
              fVar17 = fVar16;
            }
            if (fVar17 <= fVar8) {
              fVar17 = fVar8;
            }
            goto LAB_1491c285d;
          }
          if (fVar8 <= fVar17) {
            fVar17 = fVar8;
          }
        }
        if (fVar17 <= fVar16) {
          fVar17 = fVar16;
        }
      }
LAB_1491c285d:
      param_1[6] = fVar17;
      pcVar15 = (char *)*param_2;
    }
    if (((((pcVar15[6] == '\0') && (pcVar15[7] == '\0')) && (pcVar15[8] == '\0')) &&
        ((pcVar15[9] == '\0' && (pcVar15[10] == '\0')))) && (pcVar15[0xb] != '\x01')) break;
    local_160 = (double)param_1[3];
    local_168 = (double)param_1[2];
    local_170 = (double)param_1[1];
    local_178 = (double)*param_1;
    FUN_1448052ee(&local_178,&local_190);
    FUN_1448052ee(&local_f8,&local_1a8);
    FUN_1448052ee(&local_138,&local_1c0);
    fVar17 = (float)local_1c0;
    fVar16 = (float)local_190;
    lVar13 = *param_2;
    if (*(char *)(lVar13 + 6) == '\0') {
      if ((*(char *)(lVar13 + 7) != '\0') && (fVar17 <= fVar16)) {
        fVar16 = fVar17;
      }
    }
    else {
      fVar18 = (float)local_1a8;
      if (*(char *)(lVar13 + 7) != '\0') {
        if (fVar17 <= fVar18) {
          if (fVar18 <= fVar16) {
            fVar16 = fVar18;
          }
          if (fVar16 <= fVar17) {
            fVar16 = fVar17;
          }
          goto LAB_1491c2954;
        }
        if (fVar17 <= fVar16) {
          fVar16 = fVar17;
        }
      }
      if (fVar16 <= fVar18) {
        fVar16 = fVar18;
      }
    }
LAB_1491c2954:
    local_1d8 = (double)fVar16;
    fVar17 = (float)local_1b8;
    fVar16 = (float)dStack_188;
    if (*(char *)(lVar13 + 8) == '\0') {
      if ((*(char *)(lVar13 + 9) != '\0') && (fVar17 <= fVar16)) {
        fVar16 = fVar17;
      }
    }
    else {
      fVar18 = (float)dStack_1a0;
      if (*(char *)(lVar13 + 9) != '\0') {
        if (fVar17 <= fVar18) {
          if (fVar18 <= fVar16) {
            fVar16 = fVar18;
          }
          if (fVar16 <= fVar17) {
            fVar16 = fVar17;
          }
          goto LAB_1491c299b;
        }
        if (fVar17 <= fVar16) {
          fVar16 = fVar17;
        }
      }
      if (fVar16 <= fVar18) {
        fVar16 = fVar18;
      }
    }
LAB_1491c299b:
    dStack_1d0 = (double)fVar16;
    fVar17 = (float)local_1b0;
    fVar16 = (float)local_180;
    if (*(char *)(lVar13 + 10) == '\0') {
      if ((*(char *)(lVar13 + 0xb) != '\0') && (fVar17 <= fVar16)) {
        fVar16 = fVar17;
      }
    }
    else {
      fVar18 = (float)local_198;
      if (*(char *)(lVar13 + 0xb) != '\0') {
        if (fVar17 <= fVar18) {
          if (fVar18 <= fVar16) {
            fVar16 = fVar18;
          }
          if (fVar16 <= fVar17) {
            fVar16 = fVar17;
          }
          goto LAB_1491c29e5;
        }
        if (fVar17 <= fVar16) {
          fVar16 = fVar17;
        }
      }
      if (fVar16 <= fVar18) {
        fVar16 = fVar18;
      }
    }
LAB_1491c29e5:
    local_1c8 = (double)fVar16;
    FUN_144a7484c(&local_1d8,&local_178);
    *param_1 = (float)local_178;
    param_1[1] = (float)local_170;
    param_1[2] = (float)local_168;
    param_1[3] = (float)local_160;
    break;
  case 9:
    if (8 < iVar12) {
      *(undefined1 *)(param_1 + 0x20) = 1;
      pcVar15 = (char *)*param_2;
      if (((((*pcVar15 != '\0') || (pcVar15[1] != '\0')) || (pcVar15[2] != '\0')) ||
          ((pcVar15[3] != '\0' || (pcVar15[4] != '\0')))) || (pcVar15[5] == '\x01')) {
        fVar16 = (float)FUN_1491c2b42(pcVar15,param_1 + 3,param_4 + 3,param_5 + 3);
        param_1[3] = fVar16;
        fVar16 = (float)FUN_1491c2b42(*param_2 + 2,param_1 + 4,param_4 + 4,param_5 + 4);
        param_1[4] = fVar16;
        fVar16 = (float)FUN_1491c2b42(*param_2 + 4,param_1 + 5,param_4 + 5,param_5 + 5);
        param_1[5] = fVar16;
        pcVar15 = (char *)*param_2;
      }
      if (((pcVar15[6] != '\0') || (pcVar15[7] != '\0')) ||
         ((pcVar15[8] != '\0' ||
          (((pcVar15[9] != '\0' || (pcVar15[10] != '\0')) || (pcVar15[0xb] == '\x01')))))) {
        fVar16 = (float)FUN_1491c2b42(pcVar15 + 6,param_1,param_4,param_5);
        *param_1 = fVar16;
        fVar16 = (float)FUN_1491c2b42(*param_2 + 8,param_1 + 1,param_4 + 1,param_5 + 1);
        param_1[1] = fVar16;
        fVar16 = (float)FUN_1491c2b42(*param_2 + 10,param_1 + 2,param_4 + 2,param_5 + 2);
        param_1[2] = fVar16;
        pcVar15 = (char *)*param_2;
      }
      if (((pcVar15[0xc] != '\0') || (pcVar15[0xd] != '\0')) ||
         (((pcVar15[0xe] != '\0' || ((pcVar15[0xf] != '\0' || (pcVar15[0x10] != '\0')))) ||
          (pcVar15[0x11] == '\x01')))) {
        fVar16 = (float)FUN_1491c2b42(pcVar15 + 0xc,param_1 + 6,param_4 + 6,param_5 + 6);
        param_1[6] = fVar16;
        fVar16 = (float)FUN_1491c2b42(*param_2 + 0xe,param_1 + 7,param_4 + 7,param_5 + 7);
        param_1[7] = fVar16;
        fVar16 = (float)FUN_1491c2b42(*param_2 + 0x10,param_1 + 8,param_4 + 8,param_5 + 8);
        param_1[8] = fVar16;
      }
    }
  }
switchD_1491c1cb7_default:
  if ((local_d0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491c2b42 FUN_1491c2b42 body=74 status=ok
// SIG undefined FUN_1491c2b42(void)

float FUN_1491c2b42(char *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*param_1 == '\0') {
    if (param_1[1] == '\0') {
      return *param_2;
    }
    fVar2 = *param_2;
    if (*param_4 <= *param_2) {
      fVar2 = *param_4;
    }
    return fVar2;
  }
  fVar2 = *param_3;
  if (param_1[1] == '\0') {
    fVar3 = *param_2;
  }
  else {
    fVar1 = *param_4;
    fVar3 = *param_2;
    if (fVar1 <= fVar2) {
      if (fVar2 <= fVar3) {
        fVar3 = fVar2;
      }
      if (fVar3 <= fVar1) {
        fVar3 = fVar1;
      }
      return fVar3;
    }
    if (fVar1 <= fVar3) {
      fVar3 = fVar1;
    }
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  return fVar3;
}



// FUNCTION 1491c2bc0 FUN_1491c2bc0 body=63 status=ok
// SIG undefined FUN_1491c2bc0(void)

undefined1 FUN_1491c2bc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491c2d92(param_2,param_3);
    param_3 = param_3 + 0x990;
    param_2 = param_2 + 0x990;
  }
  return 1;
}



// FUNCTION 1491c2c28 FUN_1491c2c28 body=59 status=ok
// SIG undefined FUN_1491c2c28(void)

undefined8 FUN_1491c2c28(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c2c74 FUN_1491c2c74 body=40 status=ok
// SIG undefined FUN_1491c2c74(void)

void FUN_1491c2c74(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x990) == '\x01') {
    FUN_145c965da(param_2);
    *(undefined1 *)(param_2 + 0x990) = 0;
  }
  return;
}



// FUNCTION 1491c2cea FUN_1491c2cea body=167 status=ok
// SIG undefined FUN_1491c2cea(void)

undefined8 * FUN_1491c2cea(undefined8 *param_1)

{
  FUN_140b4884c();
  *param_1 = &PTR_FUN_14bb611d0;
  param_1[0x119] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8dc) = 0;
  param_1[0x11d] = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  param_1[0x123] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  *(undefined8 *)((longlong)param_1 + 0x924) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x92c) = 0;
  param_1[0x127] = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  return param_1;
}



// FUNCTION 1491c2d92 FUN_1491c2d92 body=81 status=ok
// SIG undefined FUN_1491c2d92(void)

longlong FUN_1491c2d92(longlong param_1,longlong param_2)

{
  FUN_1411a1ca6();
  FUN_1491c2de4(param_1 + 0x8a8,param_2 + 0x8a8);
  FUN_140d188f2(param_1 + 0x8f8,param_2 + 0x8f8);
  FUN_147918704(param_1 + 0x948,param_2 + 0x948);
  return param_1;
}



// FUNCTION 1491c2de4 FUN_1491c2de4 body=122 status=ok
// SIG undefined FUN_1491c2de4(void)

longlong FUN_1491c2de4(longlong param_1,longlong param_2)

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
    FUN_1491c2e5e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1491c2e5e FUN_1491c2e5e body=117 status=ok
// SIG undefined FUN_1491c2e5e(void)

undefined8 * FUN_1491c2e5e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145c96694(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14045f6dc(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 7);
    }
  }
  return param_1;
}



// FUNCTION 1491c2ed4 FUN_1491c2ed4 body=106 status=ok
// SIG undefined FUN_1491c2ed4(void)

void FUN_1491c2ed4(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x54) = 1;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 0xc) = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0x1a) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0xd4) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0xffffffffffffffff;
  return;
}



// FUNCTION 1491c2f3e FUN_1491c2f3e body=106 status=ok
// SIG undefined FUN_1491c2f3e(void)

void FUN_1491c2f3e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x54) = 1;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 0xc) = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0x1a) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0xd4) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0xffffffffffffffff;
  return;
}



// FUNCTION 1491c2fa8 FUN_1491c2fa8 body=48 status=ok
// SIG undefined FUN_1491c2fa8(void)

void FUN_1491c2fa8(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1491c2fee FUN_1491c2fee body=63 status=ok
// SIG undefined FUN_1491c2fee(void)

undefined1 FUN_1491c2fee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491c30f8(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 1491c3056 FUN_1491c3056 body=59 status=ok
// SIG undefined FUN_1491c3056(void)

undefined8 FUN_1491c3056(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c30f8 FUN_1491c30f8 body=155 status=ok
// SIG undefined FUN_1491c30f8(void)

undefined8 * FUN_1491c30f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 1,param_2 + 1);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 6);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  FUN_144a787a6(param_1 + 7,param_2 + 7);
  memcpy(param_1 + 9,param_2 + 9,0x8d);
  lVar4 = param_2[0x1b];
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[0x1b];
    }
  }
  param_1[0x1b] = lVar4;
  param_1[0x1c] = param_2[0x1c];
  return param_1;
}



// FUNCTION 1491c3194 FUN_1491c3194 body=58 status=ok
// SIG undefined FUN_1491c3194(void)

void FUN_1491c3194(longlong param_1)

{
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1491c3202 FUN_1491c3202 body=112 status=ok
// SIG undefined FUN_1491c3202(void)

undefined1 FUN_1491c3202(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar4);
      *(undefined2 *)(plVar1 + 2) = *(undefined2 *)(param_3 + 0x10 + lVar4);
      lVar4 = lVar4 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491c329a FUN_1491c329a body=59 status=ok
// SIG undefined FUN_1491c329a(void)

undefined8 FUN_1491c329a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c33a8 FUN_1491c33a8 body=59 status=ok
// SIG undefined FUN_1491c33a8(void)

undefined8 FUN_1491c33a8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c34b6 FUN_1491c34b6 body=59 status=ok
// SIG undefined FUN_1491c34b6(void)

undefined8 FUN_1491c34b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c3557 FUN_1491c3557 body=61 status=ok
// SIG undefined FUN_1491c3557(void)

void FUN_1491c3557(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1491c3594 FUN_1491c3594 body=52 status=ok
// SIG undefined FUN_1491c3594(void)

void FUN_1491c3594(longlong *param_1)

{
  FUN_1491c35c8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1491c35c8 FUN_1491c35c8 body=89 status=ok
// SIG undefined FUN_1491c35c8(void)

void FUN_1491c35c8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1491c3622 FUN_1491c3622 body=122 status=ok
// SIG undefined FUN_1491c3622(void)

longlong FUN_1491c3622(longlong param_1,longlong param_2)

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
    FUN_1491c369c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1491c369c FUN_1491c369c body=121 status=ok
// SIG undefined FUN_1491c369c(void)

undefined8 * FUN_1491c369c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145dea8f6(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x28);
    }
  }
  return param_1;
}



// FUNCTION 1491c3716 FUN_1491c3716 body=150 status=ok
// SIG undefined FUN_1491c3716(void)

void FUN_1491c3716(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 6;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x34] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x35] = 0x3f800000;
  param_2[0x36] = 0x3f80000000000000;
  *(undefined1 *)(param_2 + 0x37) = 1;
  return;
}



// FUNCTION 1491c37ac FUN_1491c37ac body=150 status=ok
// SIG undefined FUN_1491c37ac(void)

void FUN_1491c37ac(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 6;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x34] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x35] = 0x3f800000;
  param_2[0x36] = 0x3f80000000000000;
  *(undefined1 *)(param_2 + 0x37) = 1;
  return;
}



// FUNCTION 1491c3842 FUN_1491c3842 body=54 status=ok
// SIG undefined FUN_1491c3842(void)

void FUN_1491c3842(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 400) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x168) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1491c388e FUN_1491c388e body=241 status=ok
// SIG undefined FUN_1491c388e(void)

undefined8 FUN_1491c388e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  void *_Src;
  void *_Dst;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_4 != 0) {
    lVar9 = 0;
    do {
      _Src = (void *)(param_3 + lVar9);
      _Dst = (void *)(param_2 + lVar9);
      memcpy(_Dst,_Src,0x150);
      *(undefined8 *)(param_2 + 0x150 + lVar9) = *(undefined8 *)(param_3 + 0x150 + lVar9);
      puVar1 = (undefined4 *)(param_3 + 0x158 + lVar9);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x158 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      FUN_144a787a6((longlong)_Dst + 0x168,(longlong)_Src + 0x168);
      *(undefined8 *)(param_2 + 0x178 + lVar9) = *(undefined8 *)(param_3 + 0x178 + lVar9);
      puVar1 = (undefined4 *)(param_3 + 0x180 + lVar9);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x180 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      FUN_144a787a6((longlong)_Dst + 400,(longlong)_Src + 400);
      puVar3 = (undefined8 *)(param_3 + 0x1a0 + lVar9);
      uVar8 = puVar3[1];
      puVar4 = (undefined8 *)(param_2 + 0x1a0 + lVar9);
      *puVar4 = *puVar3;
      puVar4[1] = uVar8;
      puVar3 = (undefined8 *)(param_3 + 0x1a9 + lVar9);
      uVar8 = puVar3[1];
      puVar4 = (undefined8 *)(param_2 + 0x1a9 + lVar9);
      *puVar4 = *puVar3;
      puVar4[1] = uVar8;
      lVar9 = lVar9 + 0x1c0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491c39a8 FUN_1491c39a8 body=59 status=ok
// SIG undefined FUN_1491c39a8(void)

undefined8 FUN_1491c39a8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c3a4c FUN_1491c3a4c body=64 status=ok
// SIG undefined FUN_1491c3a4c(void)

void FUN_1491c3a4c(longlong param_1)

{
  if (*(char *)(param_1 + 0x1c0) == '\x01') {
    if (*(longlong *)(param_1 + 400) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x168) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1c0) = 0;
  }
  return;
}



// FUNCTION 1491c3ac0 FUN_1491c3ac0 body=134 status=ok
// SIG undefined FUN_1491c3ac0(void)

undefined8 FUN_1491c3ac0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar8);
      lVar5 = param_2 + 0x20 + lVar8;
      *(undefined8 *)(lVar5 + -0x20) = *puVar1;
      *(undefined8 *)(lVar5 + -0x18) = puVar1[1];
      uVar2 = *(undefined4 *)((longlong)puVar1 + 0x14);
      uVar3 = *(undefined4 *)(puVar1 + 3);
      uVar4 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      *(undefined4 *)(lVar5 + -0x10) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)(lVar5 + -0xc) = uVar2;
      *(undefined4 *)(lVar5 + -8) = uVar3;
      *(undefined4 *)(lVar5 + -4) = uVar4;
      FUN_144a787a6();
      puVar1 = (undefined8 *)(param_2 + 0x30 + lVar8);
      puVar6 = (undefined8 *)(param_3 + lVar8 + 0x30);
      puVar7 = puVar1;
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar1[0xc] = *(undefined8 *)(param_3 + lVar8 + 0x90);
      lVar8 = lVar8 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491c3b6e FUN_1491c3b6e body=59 status=ok
// SIG undefined FUN_1491c3b6e(void)

undefined8 FUN_1491c3b6e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c3bba FUN_1491c3bba body=44 status=ok
// SIG undefined FUN_1491c3bba(void)

void FUN_1491c3bba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1491c3c72 FUN_1491c3c72 body=75 status=ok
// SIG undefined FUN_1491c3c72(void)

undefined1 FUN_1491c3c72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_144a787a6();
      lVar6 = lVar6 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491c3ce6 FUN_1491c3ce6 body=59 status=ok
// SIG undefined FUN_1491c3ce6(void)

undefined8 FUN_1491c3ce6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c3d2c FUN_1491c3d2c body=38 status=ok
// SIG undefined FUN_1491c3d2c(void)

void FUN_1491c3d2c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1491c3dd0 FUN_1491c3dd0 body=118 status=ok
// SIG undefined FUN_1491c3dd0(void)

undefined8 FUN_1491c3dd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1491c3f30(param_2,param_3);
      FUN_1491c4070(param_2 + 0x10,param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
      FUN_1459a7e20(param_2 + 0x30,param_3 + 0x30);
      param_3 = param_3 + 0x90;
      param_2 = param_2 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491c3e6e FUN_1491c3e6e body=59 status=ok
// SIG undefined FUN_1491c3e6e(void)

undefined8 FUN_1491c3e6e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c3eba FUN_1491c3eba body=40 status=ok
// SIG undefined FUN_1491c3eba(void)

void FUN_1491c3eba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_145af7bb8(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 1491c3f30 FUN_1491c3f30 body=95 status=ok
// SIG undefined FUN_1491c3f30(void)

undefined8 * FUN_1491c3f30(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145bdc764(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1491c3f90(param_1,iVar1);
      FUN_1491c3ff2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1491c3f90 FUN_1491c3f90 body=98 status=ok
// SIG undefined FUN_1491c3f90(void)

void FUN_1491c3f90(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1491c3ff2 FUN_1491c3ff2 body=126 status=ok
// SIG undefined FUN_1491c3ff2(void)

void FUN_1491c3ff2(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x10);
    do {
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *(undefined4 *)(puVar5 + -2) = *param_2;
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = param_2[6];
      _Src = *(void **)(param_2 + 4);
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 8;
      puVar5 = puVar5 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1491c4070 FUN_1491c4070 body=88 status=ok
// SIG undefined FUN_1491c4070(void)

undefined8 * FUN_1491c4070(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1491965b0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x110);
      }
    }
  }
  return param_1;
}



// FUNCTION 1491c40f2 FUN_1491c40f2 body=30 status=ok
// SIG undefined FUN_1491c40f2(void)

void FUN_1491c40f2(undefined8 param_1,longlong param_2)

{
  FUN_1449db362(param_2 + 0x10);
  FUN_1449db362(param_2);
  return;
}



// FUNCTION 1491c4126 FUN_1491c4126 body=75 status=ok
// SIG undefined FUN_1491c4126(void)

undefined8 FUN_1491c4126(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14009d848(param_2,param_3);
    FUN_1491c4258(param_2 + 0x10,param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1491c419a FUN_1491c419a body=59 status=ok
// SIG undefined FUN_1491c419a(void)

undefined8 FUN_1491c419a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c41e0 FUN_1491c41e0 body=41 status=ok
// SIG undefined FUN_1491c41e0(void)

void FUN_1491c41e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1449db362(param_2 + 0x10);
    FUN_1449db362(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1491c4258 FUN_1491c4258 body=130 status=ok
// SIG undefined FUN_1491c4258(void)

void FUN_1491c4258(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c4384 FUN_1491c4384 body=59 status=ok
// SIG undefined FUN_1491c4384(void)

undefined8 FUN_1491c4384(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c4424 FUN_1491c4424 body=29 status=ok
// SIG undefined FUN_1491c4424(void)

undefined8 FUN_1491c4424(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c44d0 FUN_1491c44d0 body=59 status=ok
// SIG undefined FUN_1491c44d0(void)

undefined8 FUN_1491c44d0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c4660 FUN_1491c4660 body=59 status=ok
// SIG undefined FUN_1491c4660(void)

undefined8 FUN_1491c4660(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c4792 FUN_1491c4792 body=54 status=ok
// SIG undefined FUN_1491c4792(void)

undefined1 FUN_1491c4792(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491c493e(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 1491c47f0 FUN_1491c47f0 body=59 status=ok
// SIG undefined FUN_1491c47f0(void)

undefined8 FUN_1491c47f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c4836 FUN_1491c4836 body=34 status=ok
// SIG undefined FUN_1491c4836(void)

void FUN_1491c4836(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1491c48cc(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1491c48a6 FUN_1491c48a6 body=38 status=ok
// SIG undefined FUN_1491c48a6(void)

undefined8 FUN_1491c48a6(undefined8 param_1,int param_2)

{
  FUN_1491c48cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c48cc FUN_1491c48cc body=114 status=ok
// SIG undefined FUN_1491c48cc(void)

void FUN_1491c48cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb77670;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1491c493e FUN_1491c493e body=117 status=ok
// SIG undefined FUN_1491c493e(void)

longlong FUN_1491c493e(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_1491b18e8(param_1 + 0x18,param_2 + 0x18);
  FUN_1491c49b4(param_1 + 0x28,param_2 + 0x28);
  FUN_1491c4a0c(param_1 + 0x38,param_2 + 0x38);
  FUN_1491c4a66(param_1 + 0x48,param_2 + 0x48);
  FUN_1491c4abe(param_1 + 0x58,param_2 + 0x58);
  FUN_1491b18e8(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 1491c49b4 FUN_1491c49b4 body=88 status=ok
// SIG undefined FUN_1491c49b4(void)

undefined8 * FUN_1491c49b4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1491c4b16(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1491c4a0c FUN_1491c4a0c body=89 status=ok
// SIG undefined FUN_1491c4a0c(void)

undefined8 * FUN_1491c4a0c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1491c4b78(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 1491c4a66 FUN_1491c4a66 body=88 status=ok
// SIG undefined FUN_1491c4a66(void)

undefined8 * FUN_1491c4a66(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1491c4bec(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 7);
      }
    }
  }
  return param_1;
}



// FUNCTION 1491c4abe FUN_1491c4abe body=88 status=ok
// SIG undefined FUN_1491c4abe(void)

undefined8 * FUN_1491c4abe(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1491c4c4e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1491c4b16 FUN_1491c4b16 body=98 status=ok
// SIG undefined FUN_1491c4b16(void)

void FUN_1491c4b16(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1491c4b78 FUN_1491c4b78 body=115 status=ok
// SIG undefined FUN_1491c4b78(void)

void FUN_1491c4b78(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1491c4bec FUN_1491c4bec body=98 status=ok
// SIG undefined FUN_1491c4bec(void)

void FUN_1491c4bec(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,0x10);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1491c4c4e FUN_1491c4c4e body=98 status=ok
// SIG undefined FUN_1491c4c4e(void)

void FUN_1491c4c4e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1491c4d70 FUN_1491c4d70 body=59 status=ok
// SIG undefined FUN_1491c4d70(void)

undefined8 FUN_1491c4d70(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c4e12 FUN_1491c4e12 body=107 status=ok
// SIG undefined FUN_1491c4e12(void)

void FUN_1491c4e12(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0x3ff0000000000000;
  param_2[9] = 0x3ff0000000000000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0xc) = 1;
  *(undefined8 *)((longlong)param_2 + 100) = 0x41a0000041200000;
  *(undefined1 *)((longlong)param_2 + 0x6c) = 4;
  *(undefined4 *)(param_2 + 0xe) = 0x42800000;
  *(undefined1 *)((longlong)param_2 + 0x74) = 0;
  return;
}



// FUNCTION 1491c4e7e FUN_1491c4e7e body=107 status=ok
// SIG undefined FUN_1491c4e7e(void)

void FUN_1491c4e7e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0x3ff0000000000000;
  param_2[9] = 0x3ff0000000000000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0xc) = 1;
  *(undefined8 *)((longlong)param_2 + 100) = 0x41a0000041200000;
  *(undefined1 *)((longlong)param_2 + 0x6c) = 4;
  *(undefined4 *)(param_2 + 0xe) = 0x42800000;
  *(undefined1 *)((longlong)param_2 + 0x74) = 0;
  return;
}



// FUNCTION 1491c4f02 FUN_1491c4f02 body=39 status=ok
// SIG undefined FUN_1491c4f02(void)

undefined8 FUN_1491c4f02(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 1491c4f52 FUN_1491c4f52 body=59 status=ok
// SIG undefined FUN_1491c4f52(void)

undefined8 FUN_1491c4f52(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c5000 FUN_1491c5000 body=322 status=ok
// SIG undefined FUN_1491c5000(void)

void FUN_1491c5000(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 1491c5144 FUN_1491c5144 body=285 status=ok
// SIG undefined FUN_1491c5144(void)

void FUN_1491c5144(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 0x10 + (longlong)iStack_44 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c5262 FUN_1491c5262 body=130 status=ok
// SIG undefined FUN_1491c5262(void)

longlong FUN_1491c5262(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1491c52e6();
  if (lVar1 == 0) {
    local_38 = 0;
    local_30 = param_3;
    FUN_1491c533e(param_1,&local_24,param_2);
    lVar1 = *param_1 + (longlong)local_24 * 0x28;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0x10;
}



// FUNCTION 1491c52e6 FUN_1491c52e6 body=88 status=ok
// SIG undefined FUN_1491c52e6(void)

longlong FUN_1491c52e6(longlong *param_1,uint param_2,char *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar2 * 0x28;
        if ((*(longlong *)(lVar1 + 4) == *(longlong *)(param_3 + 4)) &&
           (*(char *)(*param_1 + (longlong)iVar2 * 0x28) == *param_3)) {
          return lVar1;
        }
        iVar2 = *(int *)(lVar1 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1491c533e FUN_1491c533e body=309 status=ok
// SIG undefined FUN_1491c533e(void)

undefined4 *
FUN_1491c533e(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4,undefined8 param_5
             )

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1491c5474(param_1,local_58);
  puVar1 = (undefined8 *)*param_4;
  *(undefined4 *)(local_50 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_50 = *puVar1;
  local_50[2] = 0;
  local_50[3] = 0;
  *(undefined4 *)(local_50 + 4) = 0xffffffff;
  local_68 = param_5;
  cVar2 = FUN_1491c555a(param_1,param_3,local_50,local_58);
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
      *(uint *)((longlong)local_50 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1491c56a8(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c5474 FUN_1491c5474 body=230 status=ok
// SIG undefined FUN_1491c5474(void)

int * FUN_1491c5474(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1491c555a FUN_1491c555a body=195 status=ok
// SIG undefined FUN_1491c555a(void)

void FUN_1491c555a(longlong *param_1,uint param_2,char *param_3,int *param_4,undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  longlong *plVar10;
  int iVar11;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x28);
        if ((*(longlong *)(puVar1 + 1) == *(longlong *)(param_3 + 4)) &&
           (*(char *)(*param_1 + (longlong)iVar11 * 0x28) == *param_3)) {
          if (*(longlong *)(puVar1 + 4) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          uVar6 = *(undefined4 *)(param_3 + 0x14);
          uVar7 = *(undefined4 *)(param_3 + 0x18);
          uVar8 = *(undefined4 *)(param_3 + 0x1c);
          puVar1[4] = *(undefined4 *)(param_3 + 0x10);
          puVar1[5] = uVar6;
          puVar1[6] = uVar7;
          puVar1[7] = uVar8;
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_1491c561e(param_1,*param_4,1);
          *param_4 = iVar11;
          uVar9 = 1;
          goto LAB_1491c55d4;
        }
        iVar11 = puVar1[8];
      } while (iVar11 != -1);
    }
  }
  uVar9 = 0;
LAB_1491c55d4:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 1491c561e FUN_1491c561e body=138 status=ok
// SIG undefined FUN_1491c561e(void)

void FUN_1491c561e(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1491c56a8 FUN_1491c56a8 body=487 status=ok
// SIG undefined FUN_1491c56a8(void)

void FUN_1491c56a8(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + 4 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)((uint)*(byte *)(lVar3 + lVar6 * 0x28) +
                      (((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 10) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 1491c5890 FUN_1491c5890 body=95 status=ok
// SIG undefined FUN_1491c5890(void)

undefined8 * FUN_1491c5890(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145d305dd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1491c58f0(param_1,iVar1);
      FUN_1491c5965(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1491c58f0 FUN_1491c58f0 body=117 status=ok
// SIG undefined FUN_1491c58f0(void)

void FUN_1491c58f0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1491c5965 FUN_1491c5965 body=60 status=ok
// SIG undefined FUN_1491c5965(void)

void FUN_1491c5965(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1491c59a2(param_1,param_2);
    param_1 = param_1 + 0x170;
    param_2 = param_2 + 0x170;
  }
  return;
}



// FUNCTION 1491c59a2 FUN_1491c59a2 body=646 status=ok
// SIG undefined FUN_1491c59a2(void)

undefined8 * FUN_1491c59a2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = param_2[6];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_14919754a(param_1 + 0xb,param_2 + 0xb);
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_140bb2e20(param_1 + 0x15,param_2 + 0x15);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_140bb2e20(param_1 + 0x1f,param_2 + 0x1f);
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = 0;
  iVar1 = *(int *)(param_2 + 0x2b);
  pvVar2 = (void *)param_2[0x2a];
  *(int *)(param_1 + 0x2b) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x2a,iVar1,0);
    memcpy((void *)param_1[0x2a],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x2c] = 0;
  iVar1 = *(int *)(param_2 + 0x2d);
  pvVar2 = (void *)param_2[0x2c];
  *(int *)(param_1 + 0x2d) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  }
  else {
    FUN_1491d2aa4(param_1 + 0x2c,iVar1,0);
    memcpy((void *)param_1[0x2c],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1491c5c28 FUN_1491c5c28 body=89 status=ok
// SIG undefined FUN_1491c5c28(void)

undefined8 * FUN_1491c5c28(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1491c5c82(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1491c5c82 FUN_1491c5c82 body=115 status=ok
// SIG undefined FUN_1491c5c82(void)

void FUN_1491c5c82(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1491c5cf6 FUN_1491c5cf6 body=122 status=ok
// SIG undefined FUN_1491c5cf6(void)

longlong FUN_1491c5cf6(longlong param_1,longlong param_2)

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
    FUN_1491c5d70(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1491c5d70 FUN_1491c5d70 body=305 status=ok
// SIG undefined FUN_1491c5d70(void)

longlong * FUN_1491c5d70(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145d30954(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined8 *)*param_2;
      puVar7 = (undefined8 *)(*param_1 + 0x10);
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(puVar7 + -2) = *(undefined4 *)puVar6;
          *(undefined4 *)((longlong)puVar7 + -0xc) = *(undefined4 *)((longlong)puVar6 + 4);
        }
        else {
          *(undefined4 *)(puVar7 + -1) = *(undefined4 *)(puVar6 + 1);
          puVar7[-2] = *puVar6;
          *puVar7 = 0;
          iVar2 = *(int *)(puVar6 + 3);
          _Src = (void *)puVar6[2];
          *(int *)(puVar7 + 1) = iVar2;
          if ((longlong)iVar2 == 0) {
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          }
          else {
            FUN_149192186(puVar7,iVar2,0);
            memcpy((void *)*puVar7,_Src,(longlong)iVar2 * 0xc);
          }
          puVar7[2] = puVar6[4];
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 5;
        puVar7 = puVar7 + 5;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1491c5ea2 FUN_1491c5ea2 body=199 status=ok
// SIG undefined FUN_1491c5ea2(void)

undefined8 * FUN_1491c5ea2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1491d09c8(param_1 + 2,iVar1,0);
    FUN_1491d0a2a(param_1[2],uVar2,iVar1);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1491d09c8(param_1 + 4,iVar1,0);
    FUN_1491d0a2a(param_1[4],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  plVar3 = (longlong *)param_2[7];
  param_1[7] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 1491c5f6a FUN_1491c5f6a body=52 status=ok
// SIG undefined FUN_1491c5f6a(void)

void FUN_1491c5f6a(longlong *param_1)

{
  FUN_1491c5f9e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1491c5f9e FUN_1491c5f9e body=312 status=ok
// SIG undefined FUN_1491c5f9e(void)

void FUN_1491c5f9e(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c60d8 FUN_1491c60d8 body=147 status=ok
// SIG undefined FUN_1491c60d8(void)

void FUN_1491c60d8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1491c616c FUN_1491c616c body=149 status=ok
// SIG undefined FUN_1491c616c(void)

longlong * FUN_1491c616c(longlong *param_1,longlong *param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar2 + 4 + lVar5) != *(longlong *)(param_3 + 4)) ||
         (*(char *)(lVar2 + lVar5) != *param_3)) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_149192788(param_2,iVar1);
        }
        lVar3 = *param_2;
        *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) =
             *(undefined4 *)((undefined8 *)(lVar2 + lVar5) + 1);
        *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar2 + lVar5);
      }
      lVar5 = lVar5 + 0xc;
    } while ((longlong)(int)lVar4 * 0xc != lVar5);
  }
  return param_2;
}



// FUNCTION 1491c6202 FUN_1491c6202 body=177 status=ok
// SIG undefined FUN_1491c6202(void)

undefined8 FUN_1491c6202(longlong *param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *(longlong *)(param_2 + 4);
    uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 +
                    ((longlong)
                     (int)((uint)*param_2 +
                          (((uint)lVar2 << 0x10 | uVar6) + (int)((ulonglong)lVar2 >> 0x20) +
                           (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 10) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      lVar3 = *param_1;
      do {
        lVar7 = (longlong)iVar1;
        if ((*(longlong *)(lVar3 + 4 + lVar7 * 0x28) == lVar2) &&
           (*(byte *)(lVar3 + lVar7 * 0x28) == *param_2)) {
          FUN_1491c62b4();
          return 1;
        }
        iVar1 = *(int *)(lVar3 + lVar7 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1491c62b4 FUN_1491c62b4 body=93 status=ok
// SIG undefined FUN_1491c62b4(void)

void FUN_1491c62b4(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1491c6312(param_1,param_2,1);
  return;
}



// FUNCTION 1491c6312 FUN_1491c6312 body=87 status=ok
// SIG undefined FUN_1491c6312(void)

void FUN_1491c6312(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x28 + 0x10);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 5;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_1491c561e(param_1,param_2,param_3);
  return;
}



// FUNCTION 1491c636a FUN_1491c636a body=63 status=ok
// SIG undefined FUN_1491c636a(void)

void FUN_1491c636a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1491c63aa(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,4);
  }
  return;
}



// FUNCTION 1491c63aa FUN_1491c63aa body=117 status=ok
// SIG undefined FUN_1491c63aa(void)

ulonglong FUN_1491c63aa(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,4);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 1491c6420 FUN_1491c6420 body=322 status=ok
// SIG undefined FUN_1491c6420(void)

void FUN_1491c6420(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 1491c6563 FUN_1491c6563 body=699 status=ok
// SIG undefined FUN_1491c6563(void)

void FUN_1491c6563(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  ulonglong uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  longlong *plVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  float fVar19;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar19 + fVar19);
    plVar13 = &local_358;
    do {
      piVar6 = (int *)*plVar13;
      piVar14 = (int *)plVar13[1];
      iVar16 = (int)plVar13[2];
      iVar12 = (int)((ulonglong)((longlong)piVar14 - (longlong)piVar6) >> 4);
      piVar17 = piVar14;
      piVar10 = piVar6;
      if (iVar16 != 0) {
LAB_1491c6627:
        if (8 < (int)(iVar12 + 1U)) {
          uVar8 = (ulonglong)(iVar12 + 1U >> 1);
          uVar1 = *(undefined8 *)(piVar6 + uVar8 * 4);
          uVar2 = *(undefined8 *)(piVar6 + uVar8 * 4 + 2);
          uVar3 = *(undefined8 *)(piVar6 + 2);
          *(undefined8 *)(piVar6 + uVar8 * 4) = *(undefined8 *)piVar6;
          *(undefined8 *)(piVar6 + uVar8 * 4 + 2) = uVar3;
          *(undefined8 *)piVar6 = uVar1;
          *(undefined8 *)(piVar6 + 2) = uVar2;
          piVar9 = piVar14 + 4;
          piVar7 = piVar6;
          do {
            piVar4 = piVar7 + 4;
            piVar15 = piVar7 + 4;
            do {
              piVar7 = piVar15;
              piVar11 = piVar4;
              if (piVar14 < piVar7) break;
              iVar12 = *piVar6 - *piVar7;
              if (*piVar6 - *piVar7 == 0) {
                iVar12 = piVar6[1] - piVar7[1];
              }
              piVar4 = piVar11 + 4;
              piVar15 = piVar7 + 4;
            } while (-1 < iVar12);
            piVar4 = piVar9 + -8;
            do {
              piVar15 = piVar9;
              piVar18 = piVar4;
              piVar9 = piVar15 + -4;
              if (piVar9 <= piVar6) break;
              iVar12 = *piVar9 - *piVar6;
              if (*piVar9 - *piVar6 == 0) {
                iVar12 = piVar15[-3] - piVar6[1];
              }
              piVar4 = piVar18 + -4;
            } while (-1 < iVar12);
            if (piVar9 < piVar7) goto LAB_1491c66e4;
            uVar1 = *(undefined8 *)piVar7;
            uVar2 = *(undefined8 *)(piVar7 + 2);
            uVar3 = *(undefined8 *)(piVar15 + -2);
            *(undefined8 *)piVar7 = *(undefined8 *)piVar9;
            *(undefined8 *)(piVar7 + 2) = uVar3;
            *(undefined8 *)piVar9 = uVar1;
            *(undefined8 *)(piVar15 + -2) = uVar2;
          } while( true );
        }
        if (piVar6 < piVar14) {
          do {
            piVar17 = piVar6;
            if (piVar6 + 4 <= piVar14) {
              iVar16 = *piVar6;
              piVar10 = piVar6 + 4;
              piVar9 = piVar6;
              do {
                iVar12 = iVar16 - *piVar10;
                if (iVar12 == 0) {
                  iVar12 = piVar9[1] - piVar10[1];
                }
                piVar17 = piVar10;
                iVar5 = *piVar10;
                if (-1 < iVar12) {
                  piVar17 = piVar9;
                  iVar5 = iVar16;
                }
                iVar16 = iVar5;
                piVar10 = piVar10 + 4;
                piVar9 = piVar17;
              } while (piVar10 <= piVar14);
            }
            local_58 = *(undefined8 *)piVar17;
            uStack_50 = *(undefined8 *)(piVar17 + 2);
            uVar2 = local_58;
            uVar3 = uStack_50;
            uVar1 = *(undefined8 *)(piVar14 + 2);
            *(undefined8 *)piVar17 = *(undefined8 *)piVar14;
            *(undefined8 *)(piVar17 + 2) = uVar1;
            local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
            *piVar14 = (int)local_58;
            piVar14[1] = local_58._4_4_;
            piVar14[2] = (int)uStack_50;
            piVar14[3] = uStack_50._4_4_;
            piVar14 = piVar14 + -4;
            local_58 = uVar2;
            uStack_50 = uVar3;
          } while (piVar6 < piVar14);
        }
        goto LAB_1491c67fd;
      }
LAB_1491c6812:
      FUN_1491c681f(piVar6);
LAB_1491c67fd:
      plVar13 = plVar13 + -3;
    } while (&local_358 <= plVar13);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1491c66e4:
  local_58 = *(undefined8 *)piVar6;
  uStack_50 = *(undefined8 *)(piVar6 + 2);
  uVar2 = local_58;
  uVar3 = uStack_50;
  uVar1 = *(undefined8 *)(piVar15 + -2);
  *(undefined8 *)piVar6 = *(undefined8 *)piVar9;
  *(undefined8 *)(piVar6 + 2) = uVar1;
  local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
  *piVar9 = (int)local_58;
  piVar15[-3] = local_58._4_4_;
  piVar15[-2] = (int)uStack_50;
  piVar15[-1] = uStack_50._4_4_;
  iVar16 = iVar16 + -1;
  piVar15 = piVar15 + -8;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)piVar18 - (longlong)piVar10 < (longlong)piVar17 - (longlong)piVar11) {
    if (piVar7 < piVar14) {
      *plVar13 = (longlong)piVar7;
      plVar13[1] = (longlong)piVar14;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    piVar11 = piVar6;
    if (piVar9 <= piVar6 + 4) goto LAB_1491c67fd;
  }
  else {
    if (piVar6 + 4 < piVar9) {
      *plVar13 = (longlong)piVar6;
      plVar13[1] = (longlong)piVar15;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    piVar6 = piVar7;
    piVar15 = piVar14;
    piVar18 = piVar14;
    if (piVar14 <= piVar7) goto LAB_1491c67fd;
  }
  iVar12 = (int)((ulonglong)((longlong)piVar18 - (longlong)piVar11) >> 4);
  piVar14 = piVar15;
  piVar17 = piVar18;
  piVar10 = piVar11;
  if (iVar16 == 0) goto LAB_1491c6812;
  goto LAB_1491c6627;
}



// FUNCTION 1491c681f FUN_1491c681f body=524 status=ok
// SIG undefined FUN_1491c681f(void)

void FUN_1491c681f(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar5;
joined_r0x0001491c6854:
    do {
      iVar8 = iVar5 * 2 + 1;
      if (iVar8 < (int)param_2) {
        iVar11 = iVar5 * 2 + 2;
        if (iVar11 < (int)param_2) {
          iVar7 = *(int *)(param_1 + (longlong)iVar11 * 2) - *(int *)(param_1 + (longlong)iVar8 * 2)
          ;
          if (*(int *)(param_1 + (longlong)iVar11 * 2) - *(int *)(param_1 + (longlong)iVar8 * 2) ==
              0) {
            iVar7 = *(int *)((longlong)param_1 + (longlong)iVar11 * 0x10 + 4) -
                    *(int *)((longlong)param_1 + (longlong)iVar8 * 0x10 + 4);
          }
          if (-1 < iVar7) {
            iVar8 = iVar11;
          }
        }
        lVar9 = (longlong)iVar5;
        lVar13 = (longlong)iVar8;
        iVar5 = *(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + lVar13 * 2);
        if (*(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + lVar13 * 2) == 0) {
          iVar5 = *(int *)((longlong)param_1 + lVar9 * 0x10 + 4) -
                  *(int *)((longlong)param_1 + lVar13 * 0x10 + 4);
        }
        if (iVar5 < 0) {
          puVar10 = param_1 + lVar9 * 2;
          puVar14 = param_1 + lVar13 * 2;
          uVar2 = *puVar10;
          uVar3 = puVar10[1];
          uVar4 = puVar14[1];
          *puVar10 = *puVar14;
          puVar10[1] = uVar4;
          local_28._0_4_ = (undefined4)uVar2;
          local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar3;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)puVar14 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar14 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_20._4_4_;
          iVar5 = iVar8;
          local_28 = uVar2;
          uStack_20 = uVar3;
          goto joined_r0x0001491c6854;
        }
      }
      bVar15 = iVar12 != 0;
      iVar5 = iVar12 + -1;
      iVar12 = iVar5;
    } while (bVar15);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar6 * 2)[1];
      *param_1 = param_1[uVar6 * 2];
      param_1[1] = uVar4;
      local_28._0_4_ = (undefined4)uVar2;
      local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar3;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar10 = param_1 + uVar6 * 2;
      *(undefined4 *)puVar10 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar10 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_20._4_4_;
      local_28 = uVar2;
      uStack_20 = uVar3;
      if (param_2 != 2) {
        do {
          iVar5 = 0;
          iVar8 = 1;
          iVar12 = 0;
          do {
            lVar9 = (longlong)(iVar5 + 2);
            iVar11 = iVar8;
            if (lVar9 < (longlong)uVar6) {
              iVar7 = *(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + (longlong)iVar8 * 2);
              if (*(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + (longlong)iVar8 * 2) == 0) {
                iVar7 = *(int *)((longlong)param_1 + lVar9 * 0x10 + 4) -
                        *(int *)((longlong)param_1 + (longlong)iVar8 * 0x10 + 4);
              }
              if (-1 < iVar7) {
                iVar11 = iVar5 + 2;
              }
            }
            lVar9 = (longlong)iVar12;
            lVar13 = (longlong)iVar11;
            iVar5 = *(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + lVar13 * 2);
            if (*(int *)(param_1 + lVar9 * 2) - *(int *)(param_1 + lVar13 * 2) == 0) {
              iVar5 = *(int *)((longlong)param_1 + lVar9 * 0x10 + 4) -
                      *(int *)((longlong)param_1 + lVar13 * 0x10 + 4);
            }
            if (-1 < iVar5) break;
            puVar10 = param_1 + lVar9 * 2;
            puVar14 = param_1 + lVar13 * 2;
            uVar2 = *puVar10;
            uVar3 = puVar10[1];
            uVar4 = puVar14[1];
            *puVar10 = *puVar14;
            puVar10[1] = uVar4;
            *puVar14 = uVar2;
            puVar14[1] = uVar3;
            iVar5 = iVar11 * 2;
            iVar8 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar8 < (longlong)uVar6);
          uVar1 = uVar6 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar4;
          local_28._0_4_ = (undefined4)uVar2;
          local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar3;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar10 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar10 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar10 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_20._4_4_;
          bVar15 = 2 < uVar6;
          uVar6 = uVar1;
          local_28 = uVar2;
          uStack_20 = uVar3;
        } while (bVar15);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491c6a2c FUN_1491c6a2c body=122 status=ok
// SIG undefined FUN_1491c6a2c(void)

void FUN_1491c6a2c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_1491c6aa8();
  if ((iVar1 == -1) || ((longlong)iVar1 * 0x18 + *param_1 == 0)) {
    local_40 = param_3;
    local_38 = param_4;
    FUN_1491c6b78(param_1,local_2c,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c6aa8 FUN_1491c6aa8 body=207 status=ok
// SIG undefined FUN_1491c6aa8(void)

int FUN_1491c6aa8(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1491c6b78 FUN_1491c6b78 body=276 status=ok
// SIG undefined FUN_1491c6b78(void)

undefined4 * FUN_1491c6b78(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1491c6c8e(param_1,local_48);
  FUN_1491c6e18(local_40,*param_4,param_4[1]);
  *(undefined4 *)(local_40 + 0x10) = 0xffffffff;
  cVar1 = FUN_1491c6d74(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x10) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1491c6fb2(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c6c8e FUN_1491c6c8e body=230 status=ok
// SIG undefined FUN_1491c6c8e(void)

int * FUN_1491c6c8e(longlong *param_1,int *param_2)

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
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1491c6d74 FUN_1491c6d74 body=162 status=ok
// SIG undefined FUN_1491c6d74(void)

undefined8 FUN_1491c6d74(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_1491c6e70(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_1491c6f40(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_1491c6d98;
    }
  }
  uVar6 = 0;
LAB_1491c6d98:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c6e18 FUN_1491c6e18 body=87 status=ok
// SIG undefined FUN_1491c6e18(void)

longlong * FUN_1491c6e18(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1491c6e70 FUN_1491c6e70 body=207 status=ok
// SIG undefined FUN_1491c6e70(void)

int FUN_1491c6e70(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1491c6f40 FUN_1491c6f40 body=114 status=ok
// SIG undefined FUN_1491c6f40(void)

void FUN_1491c6f40(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 1491c6fb2 FUN_1491c6fb2 body=510 status=ok
// SIG undefined FUN_1491c6fb2(void)

void FUN_1491c6fb2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491c71b2 FUN_1491c71b2 body=122 status=ok
// SIG undefined FUN_1491c71b2(void)

void FUN_1491c71b2(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_1491c6aa8();
  if ((iVar1 == -1) || ((longlong)iVar1 * 0x18 + *param_1 == 0)) {
    local_40 = param_3;
    local_38 = param_4;
    FUN_1491c722e(param_1,local_2c,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c722e FUN_1491c722e body=276 status=ok
// SIG undefined FUN_1491c722e(void)

undefined4 * FUN_1491c722e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1491c6c8e(param_1,local_48);
  FUN_1491c7344(local_40,*param_4,param_4[1]);
  *(undefined4 *)(local_40 + 0x10) = 0xffffffff;
  cVar1 = FUN_1491c6d74(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x10) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1491c6fb2(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c7344 FUN_1491c7344 body=87 status=ok
// SIG undefined FUN_1491c7344(void)

longlong * FUN_1491c7344(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1491c739c FUN_1491c739c body=31 status=ok
// SIG undefined FUN_1491c739c(void)

undefined8 FUN_1491c739c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c73d4 FUN_1491c73d4 body=93 status=ok
// SIG undefined FUN_1491c73d4(void)

void FUN_1491c73d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb75fa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb75f30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491c7432 FUN_1491c7432 body=93 status=ok
// SIG undefined FUN_1491c7432(void)

void FUN_1491c7432(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb75fa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb75f30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491c7490 FUN_1491c7490 body=126 status=ok
// SIG undefined FUN_1491c7490(void)

void FUN_1491c7490(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bb75fa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb75f30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001491c74ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1491c751e FUN_1491c751e body=96 status=ok
// SIG undefined FUN_1491c751e(void)

void FUN_1491c751e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1491c757e FUN_1491c757e body=132 status=ok
// SIG undefined FUN_1491c757e(void)

void FUN_1491c757e(longlong param_1,int param_2)

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



// FUNCTION 1491c7604 FUN_1491c7604 body=68 status=ok
// SIG undefined FUN_1491c7604(void)

void FUN_1491c7604(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1491c7648();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1447a08a2(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1491c7648 FUN_1491c7648 body=322 status=ok
// SIG undefined FUN_1491c7648(void)

void FUN_1491c7648(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 8 + (longlong)iVar4 * 0xc) * 4) =
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



// FUNCTION 1491c778c FUN_1491c778c body=24 status=ok
// SIG undefined FUN_1491c778c(void)

void FUN_1491c778c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001491c77a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1491c77a4 FUN_1491c77a4 body=29 status=ok
// SIG undefined FUN_1491c77a4(void)

undefined8 FUN_1491c77a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c77c2 FUN_1491c77c2 body=411 status=ok
// SIG undefined FUN_1491c77c2(void)

void FUN_1491c77c2(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1447a08a2(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1447cc1b4(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0xc + -8);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -3;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1491c795e FUN_1491c795e body=48 status=ok
// SIG undefined FUN_1491c795e(void)

void FUN_1491c795e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,2);
  }
  return;
}



// FUNCTION 1491c798e FUN_1491c798e body=48 status=ok
// SIG undefined FUN_1491c798e(void)

void FUN_1491c798e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 1491c79cc FUN_1491c79cc body=114 status=ok
// SIG undefined FUN_1491c79cc(void)

longlong FUN_1491c79cc(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) {
    if (DAT_14cc06880 == 0) {
      uVar2 = FUN_1408c25db();
      DAT_14cc06880 = FUN_140002ddd(FUN_1466c95bd,uVar2,L"AnimNode_ControlRig");
      if (DAT_14cc06880 == 0) {
        return 0;
      }
    }
    if ((*(int *)(DAT_14cc06880 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cc06880 + 0x38) * 8) ==
        DAT_14cc06880 + 0x30)) {
      return *param_1;
    }
  }
  return 0;
}



// FUNCTION 1491c7a3e FUN_1491c7a3e body=29 status=ok
// SIG undefined FUN_1491c7a3e(void)

undefined8 FUN_1491c7a3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c7a76 FUN_1491c7a76 body=29 status=ok
// SIG undefined FUN_1491c7a76(void)

bool FUN_1491c7a76(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1491c7a94 FUN_1491c7a94 body=26 status=ok
// SIG undefined FUN_1491c7a94(void)

bool FUN_1491c7a94(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1491c7aae FUN_1491c7aae body=24 status=ok
// SIG undefined FUN_1491c7aae(void)

bool FUN_1491c7aae(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1491c7ac6 FUN_1491c7ac6 body=93 status=ok
// SIG undefined FUN_1491c7ac6(void)

void FUN_1491c7ac6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb77280;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491c7b24 FUN_1491c7b24 body=93 status=ok
// SIG undefined FUN_1491c7b24(void)

void FUN_1491c7b24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb77280;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491c7b82 FUN_1491c7b82 body=126 status=ok
// SIG undefined FUN_1491c7b82(void)

void FUN_1491c7b82(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bb77280;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb76110;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001491c7bf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1491c7c00 FUN_1491c7c00 body=56 status=ok
// SIG undefined FUN_1491c7c00(void)

void FUN_1491c7c00(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001491c7c35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1491c7c38 FUN_1491c7c38 body=169 status=ok
// SIG undefined FUN_1491c7c38(void)

bool FUN_1491c7c38(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 1491c7ce4 FUN_1491c7ce4 body=230 status=ok
// SIG undefined FUN_1491c7ce4(void)

undefined8 * FUN_1491c7ce4(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 1491c7dcc FUN_1491c7dcc body=29 status=ok
// SIG undefined FUN_1491c7dcc(void)

undefined8 FUN_1491c7dcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c7e12 FUN_1491c7e12 body=93 status=ok
// SIG undefined FUN_1491c7e12(void)

void FUN_1491c7e12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb761f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491c7e70 FUN_1491c7e70 body=93 status=ok
// SIG undefined FUN_1491c7e70(void)

void FUN_1491c7e70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb761f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491c7ece FUN_1491c7ece body=126 status=ok
// SIG undefined FUN_1491c7ece(void)

void FUN_1491c7ece(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bb761f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb76180;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001491c7f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1491c7f5a FUN_1491c7f5a body=21 status=ok
// SIG undefined FUN_1491c7f5a(void)

undefined8 FUN_1491c7f5a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1491c7f72 FUN_1491c7f72 body=29 status=ok
// SIG undefined FUN_1491c7f72(void)

undefined8 FUN_1491c7f72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c7faa FUN_1491c7faa body=29 status=ok
// SIG undefined FUN_1491c7faa(void)

bool FUN_1491c7faa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1491c7fc8 FUN_1491c7fc8 body=26 status=ok
// SIG undefined FUN_1491c7fc8(void)

bool FUN_1491c7fc8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1491c7fe2 FUN_1491c7fe2 body=24 status=ok
// SIG undefined FUN_1491c7fe2(void)

bool FUN_1491c7fe2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1491c7ffa FUN_1491c7ffa body=93 status=ok
// SIG undefined FUN_1491c7ffa(void)

void FUN_1491c7ffa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb761f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491c8058 FUN_1491c8058 body=93 status=ok
// SIG undefined FUN_1491c8058(void)

void FUN_1491c8058(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb761f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491c80b6 FUN_1491c80b6 body=126 status=ok
// SIG undefined FUN_1491c80b6(void)

void FUN_1491c80b6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bb761f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb76260;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001491c8125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1491c8134 FUN_1491c8134 body=58 status=ok
// SIG undefined FUN_1491c8134(void)

void FUN_1491c8134(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001491c816b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1491c816e FUN_1491c816e body=173 status=ok
// SIG undefined FUN_1491c816e(void)

bool FUN_1491c816e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 1491c821c FUN_1491c821c body=230 status=ok
// SIG undefined FUN_1491c821c(void)

undefined8 * FUN_1491c821c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 1491c8304 FUN_1491c8304 body=29 status=ok
// SIG undefined FUN_1491c8304(void)

undefined8 FUN_1491c8304(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c833c FUN_1491c833c body=29 status=ok
// SIG undefined FUN_1491c833c(void)

bool FUN_1491c833c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1491c835a FUN_1491c835a body=26 status=ok
// SIG undefined FUN_1491c835a(void)

bool FUN_1491c835a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1491c8374 FUN_1491c8374 body=24 status=ok
// SIG undefined FUN_1491c8374(void)

bool FUN_1491c8374(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1491c8398 FUN_1491c8398 body=93 status=ok
// SIG undefined FUN_1491c8398(void)

void FUN_1491c8398(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb76340;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb762d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491c83f6 FUN_1491c83f6 body=93 status=ok
// SIG undefined FUN_1491c83f6(void)

void FUN_1491c83f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb76340;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb762d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491c8454 FUN_1491c8454 body=126 status=ok
// SIG undefined FUN_1491c8454(void)

void FUN_1491c8454(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bb76340;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb762d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001491c84c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1491c84d2 FUN_1491c84d2 body=40 status=ok
// SIG undefined FUN_1491c84d2(void)

void FUN_1491c84d2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001491c84f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1491c84fa FUN_1491c84fa body=152 status=ok
// SIG undefined FUN_1491c84fa(void)

bool FUN_1491c84fa(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1491c8596 FUN_1491c8596 body=236 status=ok
// SIG undefined FUN_1491c8596(void)

void FUN_1491c8596(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  
  if (DAT_14cc069a8 != DAT_14cc069d4) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar5 = &DAT_14cc069d8;
    if (DAT_14cc069e0 != (undefined *)0x0) {
      puVar5 = DAT_14cc069e0;
    }
    for (iVar1 = *(int *)(puVar5 + ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) &
                                   (longlong)DAT_14cc069e8 - 1U) * 4); iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + DAT_14cc069a0 + 8)) {
      if (*(ulonglong *)(DAT_14cc069a0 + (longlong)iVar1 * 0x10) == param_1) {
        puVar5 = &DAT_14cc069d8;
        if (DAT_14cc069e0 != (undefined *)0x0) {
          puVar5 = DAT_14cc069e0;
        }
        lVar6 = (longlong)*(int *)(DAT_14cc069a0 + 0xc + (longlong)iVar1 * 0x10);
        iVar4 = *(int *)(puVar5 + lVar6 * 4);
        if (iVar4 == iVar1) {
          puVar3 = (undefined4 *)(puVar5 + lVar6 * 4);
        }
        else {
          do {
            lVar6 = (longlong)iVar4;
            iVar4 = *(int *)(DAT_14cc069a0 + 8 + lVar6 * 0x10);
          } while (iVar4 != iVar1);
          puVar3 = (undefined4 *)(DAT_14cc069a0 + lVar6 * 0x10 + 8);
        }
        *puVar3 = *(undefined4 *)(DAT_14cc069a0 + (longlong)iVar1 * 0x10 + 8);
        FUN_1491c8682();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1491c8682 FUN_1491c8682 body=128 status=ok
// SIG undefined FUN_1491c8682(void)

void FUN_1491c8682(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cc069a0;
  if (DAT_14cc069d4 != 0) {
    *(int *)(DAT_14cc069a0 + (longlong)DAT_14cc069d0 * 0x10) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x10) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cc069d4) {
    iVar4 = DAT_14cc069d0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x10) = iVar4;
  DAT_14cc069d4 = DAT_14cc069d4 + 1;
  puVar3 = &DAT_14cc069b0;
  if (DAT_14cc069c0 != (undefined *)0x0) {
    puVar3 = DAT_14cc069c0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cc069d0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1491c8702 FUN_1491c8702 body=324 status=ok
// SIG undefined FUN_1491c8702(void)

undefined4 * FUN_1491c8702(undefined4 *param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1491c8848(local_40);
  uVar7 = *param_2;
  *local_38 = uVar7;
  *(undefined4 *)(local_38 + 1) = 0xffffffff;
  local_44 = local_40[0];
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1491c8956(uVar4,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar5 = DAT_14cc069a8 - DAT_14cc069d4;
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= DAT_14cc069e8)) {
      uVar4 = DAT_14cc069e8 - 1U & uVar4;
      *(uint *)((longlong)local_38 + 0xc) = uVar4;
      puVar6 = DAT_14cc069e0;
      if (DAT_14cc069e0 == (undefined *)0x0) {
        puVar6 = &DAT_14cc069d8;
      }
      *(undefined4 *)(local_38 + 1) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14cc069e8 - 1U & (longlong)(int)uVar4) * 4);
      puVar6 = DAT_14cc069e0;
      if (DAT_14cc069e0 == (undefined *)0x0) {
        puVar6 = &DAT_14cc069d8;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14cc069e8 - 1U & (longlong)(int)uVar4) * 4) = local_44
      ;
    }
    else {
      DAT_14cc069e8 = iVar8;
      FUN_1491c89e2();
    }
  }
  *param_1 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c8848 FUN_1491c8848 body=269 status=ok
// SIG undefined FUN_1491c8848(void)

int * FUN_1491c8848(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cc069d0;
  iVar4 = DAT_14cc069a8;
  if (DAT_14cc069d4 == 0) {
    iVar2 = DAT_14cc069a8 + 1;
    bVar7 = DAT_14cc069ac == DAT_14cc069a8;
    DAT_14cc069a8 = iVar2;
    if (bVar7) {
      FUN_1446efaca(&DAT_14cc069a0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cc069b0,1);
    puVar3 = DAT_14cc069c0;
    if (DAT_14cc069c0 == (undefined *)0x0) {
      puVar3 = &DAT_14cc069b0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cc069d0;
    DAT_14cc069d0 = *(int *)(DAT_14cc069a0 + 4 + lVar6 * 0x10);
    DAT_14cc069d4 = DAT_14cc069d4 + -1;
    iVar4 = iVar2;
    if (DAT_14cc069d4 != 0) {
      *(undefined4 *)(DAT_14cc069a0 + (longlong)DAT_14cc069d0 * 0x10) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cc069b0;
  if (DAT_14cc069c0 != (undefined *)0x0) {
    puVar3 = DAT_14cc069c0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x10 + DAT_14cc069a0;
  return param_1;
}



// FUNCTION 1491c8956 FUN_1491c8956 body=139 status=ok
// SIG undefined FUN_1491c8956(void)

undefined8 FUN_1491c8956(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((DAT_14cc069a8 - DAT_14cc069d4 != 1) && (DAT_14cc069a8 != DAT_14cc069d4)) {
    puVar3 = &DAT_14cc069d8;
    if (DAT_14cc069e0 != (undefined *)0x0) {
      puVar3 = DAT_14cc069e0;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14cc069e8 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cc069a0 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(DAT_14cc069a0 + (longlong)iVar2 * 0x10) == *param_2) {
          *plVar1 = *param_2;
          FUN_1491c8682(*param_3);
          *param_3 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1491c89e2 FUN_1491c89e2 body=518 status=ok
// SIG undefined FUN_1491c89e2(void)

void FUN_1491c89e2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc069e0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cc069e0,0,0,4);
  }
  uVar7 = DAT_14cc069e8;
  uVar2 = local_50;
  if (DAT_14cc069e8 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14cc069d8,0,DAT_14cc069e8,4);
    if (0 < (int)uVar7) {
      do {
        puVar4 = DAT_14cc069e0;
        if (DAT_14cc069e0 == (undefined *)0x0) {
          puVar4 = &DAT_14cc069d8;
        }
        *(undefined4 *)(puVar4 + (ulonglong)(DAT_14cc069e8 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cc069b0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cc069c8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cc069a0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar3 * 0x10;
        uVar7 = ((uint)(*(ulonglong *)(lVar1 + lVar5) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar1 + lVar5) >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14cc069e8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0xc + lVar5) = iVar8;
        puVar4 = DAT_14cc069e0;
        if (DAT_14cc069e0 == (undefined *)0x0) {
          puVar4 = &DAT_14cc069d8;
        }
        *(undefined4 *)(lVar1 + 8 + lVar5) =
             *(undefined4 *)(puVar4 + ((longlong)(int)DAT_14cc069e8 - 1U & uVar9) * 4);
        puVar4 = DAT_14cc069e0;
        if (DAT_14cc069e0 == (undefined *)0x0) {
          puVar4 = &DAT_14cc069d8;
        }
        *(int *)(puVar4 + ((longlong)iVar8 & (longlong)(int)DAT_14cc069e8 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491c8bea FUN_1491c8bea body=29 status=ok
// SIG undefined FUN_1491c8bea(void)

undefined8 FUN_1491c8bea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c8c22 FUN_1491c8c22 body=29 status=ok
// SIG undefined FUN_1491c8c22(void)

bool FUN_1491c8c22(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1491c8c40 FUN_1491c8c40 body=26 status=ok
// SIG undefined FUN_1491c8c40(void)

bool FUN_1491c8c40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1491c8c5a FUN_1491c8c5a body=24 status=ok
// SIG undefined FUN_1491c8c5a(void)

bool FUN_1491c8c5a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1491c8c72 FUN_1491c8c72 body=93 status=ok
// SIG undefined FUN_1491c8c72(void)

void FUN_1491c8c72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb763b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491c8cd0 FUN_1491c8cd0 body=93 status=ok
// SIG undefined FUN_1491c8cd0(void)

void FUN_1491c8cd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb763b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491c8d2e FUN_1491c8d2e body=126 status=ok
// SIG undefined FUN_1491c8d2e(void)

void FUN_1491c8d2e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a541440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb763b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001491c8d9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1491c8dac FUN_1491c8dac body=40 status=ok
// SIG undefined FUN_1491c8dac(void)

void FUN_1491c8dac(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001491c8dd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1491c8dd4 FUN_1491c8dd4 body=152 status=ok
// SIG undefined FUN_1491c8dd4(void)

bool FUN_1491c8dd4(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1491c8e6e FUN_1491c8e6e body=31 status=ok
// SIG undefined FUN_1491c8e6e(void)

undefined8 FUN_1491c8e6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c8ea8 FUN_1491c8ea8 body=29 status=ok
// SIG undefined FUN_1491c8ea8(void)

bool FUN_1491c8ea8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1491c8ec6 FUN_1491c8ec6 body=101 status=ok
// SIG undefined FUN_1491c8ec6(void)

void FUN_1491c8ec6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb77280;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76420;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1491c8f2c FUN_1491c8f2c body=101 status=ok
// SIG undefined FUN_1491c8f2c(void)

void FUN_1491c8f2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb77280;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76420;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1491c8f92 FUN_1491c8f92 body=134 status=ok
// SIG undefined FUN_1491c8f92(void)

void FUN_1491c8f92(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bb77280;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb76420;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001491c9009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1491c9018 FUN_1491c9018 body=60 status=ok
// SIG undefined FUN_1491c9018(void)

void FUN_1491c9018(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001491c9051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1491c9054 FUN_1491c9054 body=31 status=ok
// SIG undefined FUN_1491c9054(void)

undefined8 FUN_1491c9054(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c908e FUN_1491c908e body=29 status=ok
// SIG undefined FUN_1491c908e(void)

bool FUN_1491c908e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1491c90ac FUN_1491c90ac body=26 status=ok
// SIG undefined FUN_1491c90ac(void)

bool FUN_1491c90ac(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1491c90c6 FUN_1491c90c6 body=101 status=ok
// SIG undefined FUN_1491c90c6(void)

void FUN_1491c90c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb76500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1491c912c FUN_1491c912c body=101 status=ok
// SIG undefined FUN_1491c912c(void)

void FUN_1491c912c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb76500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb76490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1491c9192 FUN_1491c9192 body=134 status=ok
// SIG undefined FUN_1491c9192(void)

void FUN_1491c9192(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bb76500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb76490;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001491c9209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1491c9218 FUN_1491c9218 body=52 status=ok
// SIG undefined FUN_1491c9218(void)

void FUN_1491c9218(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001491c9249. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1491c924c FUN_1491c924c body=167 status=ok
// SIG undefined FUN_1491c924c(void)

bool FUN_1491c924c(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1491c92f6 FUN_1491c92f6 body=310 status=ok
// SIG undefined FUN_1491c92f6(void)

void FUN_1491c92f6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar3 = FUN_144a7afa6(lVar2 + 8,*param_2 + 8);
    iVar10 = 0;
    iVar7 = 0;
    do {
      lVar5 = (longlong)iVar7;
      iVar11 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar11 = iVar1;
      }
      lVar12 = lVar2 + 0x30 + lVar5 * 0x28;
      iVar8 = iVar7;
      lVar6 = lVar5;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar11;
        if (lVar13 <= lVar6) break;
        bVar4 = FUN_144a7afa6(lVar12,*param_2 + 8);
        iVar8 = iVar8 + 1;
        lVar12 = lVar12 + 0x28;
        iVar9 = iVar8;
      } while ((bVar3 & 1) == bVar4);
      iVar11 = iVar9 - iVar7;
      if ((bVar3 & 1) == 0) {
        if (iVar10 != iVar7) {
          memmove((void *)(lVar2 + (longlong)iVar10 * 0x28),(void *)(lVar2 + lVar5 * 0x28),
                  (longlong)iVar11 * 0x28);
        }
        iVar10 = iVar10 + iVar11;
      }
      else {
        FUN_1456e43db(lVar2 + lVar5 * 0x28,iVar11);
      }
      iVar7 = iVar9;
      bVar3 = bVar3 ^ 1;
    } while (lVar6 < lVar13);
    *(int *)(param_1 + 1) = iVar10;
  }
  return;
}



// FUNCTION 1491c942c FUN_1491c942c body=199 status=ok
// SIG undefined FUN_1491c942c(void)

void FUN_1491c942c(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar6 = param_1[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar3 = *param_1;
    uVar7 = 0;
    do {
      cVar5 = FUN_144a7afa6(lVar3 + 8 + uVar7,param_2 + 1);
      if (cVar5 != '\0') {
        if ((int)(uVar7 >> 3) * -0x33333333 != -1) {
          return;
        }
        break;
      }
      uVar7 = uVar7 + 0x28;
    } while ((longlong)(int)lVar6 * 0x28 != uVar7);
  }
  iVar2 = (int)param_1[1];
  lVar6 = (longlong)iVar2;
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1491c94f4(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + lVar6 * 0x28) = *param_2;
  uVar4 = param_2[2];
  puVar1 = (undefined8 *)(lVar3 + 8 + lVar6 * 0x28);
  *puVar1 = param_2[1];
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x18 + lVar6 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6 * 0x28) = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(lVar3 + 0x24 + lVar6 * 0x28) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  return;
}



// FUNCTION 1491c94f4 FUN_1491c94f4 body=147 status=ok
// SIG undefined FUN_1491c94f4(void)

void FUN_1491c94f4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1491c9588 FUN_1491c9588 body=175 status=ok
// SIG undefined FUN_1491c9588(void)

void FUN_1491c9588(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1491c9611;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1491c9611:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1491c9638 FUN_1491c9638 body=193 status=ok
// SIG undefined FUN_1491c9638(void)

void FUN_1491c9638(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1491c96cf;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1491c96cf:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1491c96fa FUN_1491c96fa body=96 status=ok
// SIG undefined FUN_1491c96fa(void)

void FUN_1491c96fa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 1491c975a FUN_1491c975a body=369 status=ok
// SIG undefined FUN_1491c975a(void)

undefined4 * FUN_1491c975a(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1491c98cc(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  _Src = (void *)param_3[1];
  *(undefined4 *)(local_40 + 8) = *(undefined4 *)(puVar1 + 1);
  *(undefined8 *)local_40 = *puVar1;
  memcpy(local_40 + 0xc,_Src,0xa4);
  local_40[0xb0] = 0xff;
  local_40[0xb1] = 0xff;
  local_40[0xb2] = 0xff;
  local_40[0xb3] = 0xff;
  local_4c = local_48[0];
  uVar2 = *(undefined8 *)(local_40 + 4);
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = (uint)*local_40 +
          (((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4)) * 10;
  cVar4 = FUN_1491c99ba(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 0xb4) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb0) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1491c9b6a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491c98cc FUN_1491c98cc body=237 status=ok
// SIG undefined FUN_1491c98cc(void)

int * FUN_1491c98cc(longlong *param_1,int *param_2)

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
      FUN_1491c9a5a(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xb8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xb8) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0xb8 + *param_1;
  return param_2;
}



// FUNCTION 1491c99ba FUN_1491c99ba body=159 status=ok
// SIG undefined FUN_1491c99ba(void)

undefined8 FUN_1491c99ba(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar3 * 0xb8;
        if ((*(longlong *)(lVar1 + 4 + lVar4) == *(longlong *)(param_3 + 4)) &&
           (*(char *)(lVar1 + lVar4) == *param_3)) {
          memmove((void *)(lVar1 + lVar4),param_3,0xb0);
          FUN_1491c9af0(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(lVar1 + lVar4 + 0xb0);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1491c9a5a FUN_1491c9a5a body=149 status=ok
// SIG undefined FUN_1491c9a5a(void)

void FUN_1491c9a5a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb8,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb8)) {
      uVar5 = uVar4 / 0xb8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1491c9af0 FUN_1491c9af0 body=122 status=ok
// SIG undefined FUN_1491c9af0(void)

void FUN_1491c9af0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xb8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb8 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1491c9b6a FUN_1491c9b6a body=496 status=ok
// SIG undefined FUN_1491c9b6a(void)

void FUN_1491c9b6a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0xb8;
        uVar4 = *(undefined8 *)(lVar3 + 4 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)((uint)*(byte *)(lVar3 + lVar7) +
                      (((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 10) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xb4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xb0 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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


