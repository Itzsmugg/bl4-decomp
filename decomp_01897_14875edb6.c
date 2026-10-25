// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14875edb6 FUN_14875edb6 body=59 status=ok
// SIG undefined FUN_14875edb6(void)

undefined8 FUN_14875edb6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14875edfc FUN_14875edfc body=38 status=ok
// SIG undefined FUN_14875edfc(void)

void FUN_14875edfc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    if (*(longlong *)(param_2 + 0x58) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14875ee64 FUN_14875ee64 body=89 status=ok
// SIG undefined FUN_14875ee64(void)

undefined8 * FUN_14875ee64(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14875eebe(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 14875eebe FUN_14875eebe body=115 status=ok
// SIG undefined FUN_14875eebe(void)

void FUN_14875eebe(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14875efaa FUN_14875efaa body=59 status=ok
// SIG undefined FUN_14875efaa(void)

undefined8 FUN_14875efaa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14875f04c FUN_14875f04c body=58 status=ok
// SIG undefined FUN_14875f04c(void)

void FUN_14875f04c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140265f12();
  param_2[1] = &DAT_14cb83310;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14b1828b0;
  *(undefined4 *)(param_2 + 4) = 1;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}



// FUNCTION 14875f09c FUN_14875f09c body=97 status=ok
// SIG undefined FUN_14875f09c(void)

undefined8 FUN_14875f09c(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    do {
      (**(code **)(*param_2 + 0x20))(param_2,0);
      param_2[1] = *(longlong *)(param_3 + -0x20);
      FUN_1406022fe(param_2 + 2,param_3 + -0x18);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + -8);
      FUN_14875f22c(param_2 + 5);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14875f126 FUN_14875f126 body=59 status=ok
// SIG undefined FUN_14875f126(void)

undefined8 FUN_14875f126(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14875f16c FUN_14875f16c body=32 status=ok
// SIG undefined FUN_14875f16c(void)

void FUN_14875f16c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14875f1ce(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14875f1ce FUN_14875f1ce body=93 status=ok
// SIG undefined FUN_14875f1ce(void)

void FUN_14875f1ce(undefined8 *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140115c12(param_1 + 2,0);
  }
  param_1[1] = 0;
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14875f22c FUN_14875f22c body=88 status=ok
// SIG undefined FUN_14875f22c(void)

undefined8 * FUN_14875f22c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14875f284(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14875f284 FUN_14875f284 body=98 status=ok
// SIG undefined FUN_14875f284(void)

void FUN_14875f284(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14875f306 FUN_14875f306 body=63 status=ok
// SIG undefined FUN_14875f306(void)

undefined1 FUN_14875f306(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14875f418(param_2,param_3);
    param_3 = param_3 + 0x180;
    param_2 = param_2 + 0x180;
  }
  return 1;
}



// FUNCTION 14875f36e FUN_14875f36e body=59 status=ok
// SIG undefined FUN_14875f36e(void)

undefined8 FUN_14875f36e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14875f3ba FUN_14875f3ba body=38 status=ok
// SIG undefined FUN_14875f3ba(void)

void FUN_14875f3ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x180) == '\x01') {
    FUN_1409fdd40(param_2);
    *(undefined1 *)(param_2 + 0x180) = 0;
  }
  return;
}



// FUNCTION 14875f418 FUN_14875f418 body=323 status=ok
// SIG undefined FUN_14875f418(void)

longlong FUN_14875f418(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  FUN_14875f55c(param_1 + 0x48,param_2 + 0x48);
  FUN_14185ca5c(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  FUN_1406fa324(param_1 + 0x80,param_2 + 0x80);
  FUN_1406fa324(param_1 + 0x90,param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  FUN_14875f5b0(param_1 + 0xa8,param_2 + 0xa8);
  FUN_140c1dafa(param_1 + 0xf8,param_2 + 0xf8);
  FUN_14875e3a8(param_1 + 0x108,param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  FUN_144a787a6(param_1 + 0x120,param_2 + 0x120);
  uVar1 = *(undefined4 *)(param_2 + 0x134);
  uVar2 = *(undefined4 *)(param_2 + 0x138);
  uVar3 = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = uVar1;
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  *(undefined4 *)(param_1 + 0x13c) = uVar3;
  FUN_142b160e2(param_1 + 0x140,param_2 + 0x140);
  FUN_142b160e2(param_1 + 0x148,param_2 + 0x148);
  uVar1 = *(undefined4 *)(param_2 + 0x154);
  uVar2 = *(undefined4 *)(param_2 + 0x158);
  uVar3 = *(undefined4 *)(param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  *(undefined4 *)(param_1 + 0x15c) = uVar3;
  FUN_1418443e8(param_1 + 0x160,param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  return param_1;
}



// FUNCTION 14875f55c FUN_14875f55c body=84 status=ok
// SIG undefined FUN_14875f55c(void)

longlong * FUN_14875f55c(longlong *param_1,longlong *param_2)

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



// FUNCTION 14875f5b0 FUN_14875f5b0 body=122 status=ok
// SIG undefined FUN_14875f5b0(void)

longlong FUN_14875f5b0(longlong param_1,longlong param_2)

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
    FUN_14875f62a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14875f62a FUN_14875f62a body=255 status=ok
// SIG undefined FUN_14875f62a(void)

longlong * FUN_14875f62a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140bf9748(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1410fd1ac(param_1);
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
          FUN_14875f72a(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x70 + lVar6) = *(undefined8 *)(lVar2 + 0x70 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x78;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14875f72a FUN_14875f72a body=160 status=ok
// SIG undefined FUN_14875f72a(void)

undefined8 * FUN_14875f72a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  FUN_144a7f96e(param_1 + 2,param_2 + 2);
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  param_1[7] = param_2[7];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  _Src = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_14875eebe(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],_Src,(longlong)iVar1 * 0x18);
  }
  return param_1;
}



// FUNCTION 14875f7cc FUN_14875f7cc body=28 status=ok
// SIG undefined FUN_14875f7cc(void)

undefined8 FUN_14875f7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14875f8a6 FUN_14875f8a6 body=63 status=ok
// SIG undefined FUN_14875f8a6(void)

undefined1 FUN_14875f8a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14875fa14(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 14875f90e FUN_14875f90e body=59 status=ok
// SIG undefined FUN_14875f90e(void)

undefined8 FUN_14875f90e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14875f9ba FUN_14875f9ba body=29 status=ok
// SIG undefined FUN_14875f9ba(void)

undefined8 FUN_14875f9ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14875f9d8 FUN_14875f9d8 body=55 status=ok
// SIG undefined FUN_14875f9d8(void)

void FUN_14875f9d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a100 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a100 = FUN_140002ddd(FUN_146524df9,uVar1,L"InventoryDialogAspect");
  }
  return;
}



// FUNCTION 14875fa14 FUN_14875fa14 body=115 status=ok
// SIG undefined FUN_14875fa14(void)

longlong FUN_14875fa14(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_1418443e8(param_1 + 0x18,param_2 + 0x18);
  FUN_141471d82(param_1 + 0x30,param_2 + 0x30);
  if ((*(longlong *)(param_1 + 0x48) != *(longlong *)(param_2 + 0x48)) ||
     (*(int *)(param_1 + 0x50) != *(int *)(param_2 + 0x50))) {
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_140e7790a(param_1 + 0x60,param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  return param_1;
}



// FUNCTION 14875fad0 FUN_14875fad0 body=59 status=ok
// SIG undefined FUN_14875fad0(void)

undefined8 FUN_14875fad0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14875fc0a FUN_14875fc0a body=59 status=ok
// SIG undefined FUN_14875fc0a(void)

undefined8 FUN_14875fc0a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14875fc56 FUN_14875fc56 body=38 status=ok
// SIG undefined FUN_14875fc56(void)

void FUN_14875fc56(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_140368b56(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 14875fccc FUN_14875fccc body=128 status=ok
// SIG undefined FUN_14875fccc(void)

void FUN_14875fccc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x100);
  *(undefined8 *)((longlong)param_2 + 0x74) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0xf;
  *(undefined1 *)((longlong)param_2 + 200) = 1;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_2 + 0xf8) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xfd) = 0xff;
  return;
}



// FUNCTION 14875fdd6 FUN_14875fdd6 body=47 status=ok
// SIG undefined FUN_14875fdd6(void)

void FUN_14875fdd6(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140368b56(param_2 + 8);
  return;
}



// FUNCTION 14875fe1c FUN_14875fe1c body=63 status=ok
// SIG undefined FUN_14875fe1c(void)

undefined1 FUN_14875fe1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1488cbebc(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 14875fe84 FUN_14875fe84 body=59 status=ok
// SIG undefined FUN_14875fe84(void)

undefined8 FUN_14875fe84(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14875fed0 FUN_14875fed0 body=61 status=ok
// SIG undefined FUN_14875fed0(void)

void FUN_14875fed0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_2 + 0x100) == '\x01') {
    puVar1 = *(undefined8 **)(param_2 + 0xe0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    FUN_140368b56(param_2 + 8);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 14875ffac FUN_14875ffac body=62 status=ok
// SIG undefined FUN_14875ffac(void)

undefined1 FUN_14875ffac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141289ada(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148760012 FUN_148760012 body=59 status=ok
// SIG undefined FUN_148760012(void)

undefined8 FUN_148760012(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148760058 FUN_148760058 body=43 status=ok
// SIG undefined FUN_148760058(void)

void FUN_148760058(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1487600d2 FUN_1487600d2 body=52 status=ok
// SIG undefined FUN_1487600d2(void)

undefined8 * FUN_1487600d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148760106 FUN_148760106 body=55 status=ok
// SIG undefined FUN_148760106(void)

void FUN_148760106(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a190 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a190 = FUN_140002ddd(FUN_1465250af,uVar1,L"InventoryItemProviderDef");
  }
  return;
}



// FUNCTION 14876013e FUN_14876013e body=25 status=ok
// SIG undefined FUN_14876013e(void)

undefined8 FUN_14876013e(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 148760190 FUN_148760190 body=54 status=ok
// SIG undefined FUN_148760190(void)

undefined1 FUN_148760190(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487602b2(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1487601ee FUN_1487601ee body=59 status=ok
// SIG undefined FUN_1487601ee(void)

undefined8 FUN_1487601ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148760234 FUN_148760234 body=64 status=ok
// SIG undefined FUN_148760234(void)

void FUN_148760234(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x38) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x28);
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
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1487602b2 FUN_1487602b2 body=71 status=ok
// SIG undefined FUN_1487602b2(void)

longlong * FUN_1487602b2(longlong *param_1,longlong *param_2)

{
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  *(short *)(param_1 + 3) = (short)param_2[3];
  FUN_1401f3db8(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 14876033e FUN_14876033e body=54 status=ok
// SIG undefined FUN_14876033e(void)

undefined1 FUN_14876033e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14875cc16(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 14876039c FUN_14876039c body=59 status=ok
// SIG undefined FUN_14876039c(void)

undefined8 FUN_14876039c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876042e FUN_14876042e body=60 status=ok
// SIG undefined FUN_14876042e(void)

void FUN_14876042e(undefined8 *param_1)

{
  if (*(char *)(param_1 + 9) == '\x01') {
    *param_1 = &PTR_FUN_14b3039d0;
    FUN_140485972(param_1[7],*(undefined4 *)(param_1 + 8));
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1487604d6 FUN_1487604d6 body=64 status=ok
// SIG undefined FUN_1487604d6(void)

undefined4 FUN_1487604d6(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487605f8 FUN_1487605f8 body=59 status=ok
// SIG undefined FUN_1487605f8(void)

undefined8 FUN_1487605f8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876063e FUN_14876063e body=32 status=ok
// SIG undefined FUN_14876063e(void)

void FUN_14876063e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_140485912(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148760718 FUN_148760718 body=59 status=ok
// SIG undefined FUN_148760718(void)

undefined8 FUN_148760718(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148760820 FUN_148760820 body=59 status=ok
// SIG undefined FUN_148760820(void)

undefined8 FUN_148760820(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148760912 FUN_148760912 body=63 status=ok
// SIG undefined FUN_148760912(void)

undefined1 FUN_148760912(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148760a2e(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 14876097a FUN_14876097a body=59 status=ok
// SIG undefined FUN_14876097a(void)

undefined8 FUN_14876097a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487609c6 FUN_1487609c6 body=38 status=ok
// SIG undefined FUN_1487609c6(void)

void FUN_1487609c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_148760c3e(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148760a2e FUN_148760a2e body=116 status=ok
// SIG undefined FUN_148760a2e(void)

longlong FUN_148760a2e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_1418443e8(param_1 + 0x18,param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  FUN_148760aa2(param_1 + 0x70,param_2 + 0x70);
  FUN_148760afc(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



// FUNCTION 148760aa2 FUN_148760aa2 body=89 status=ok
// SIG undefined FUN_148760aa2(void)

undefined8 * FUN_148760aa2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148760b56(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 148760afc FUN_148760afc body=89 status=ok
// SIG undefined FUN_148760afc(void)

undefined8 * FUN_148760afc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148760bca(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 148760b56 FUN_148760b56 body=115 status=ok
// SIG undefined FUN_148760b56(void)

void FUN_148760b56(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148760bca FUN_148760bca body=115 status=ok
// SIG undefined FUN_148760bca(void)

void FUN_148760bca(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148760c3e FUN_148760c3e body=78 status=ok
// SIG undefined FUN_148760c3e(void)

void FUN_148760c3e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b30c720;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148760d00 FUN_148760d00 body=59 status=ok
// SIG undefined FUN_148760d00(void)

undefined8 FUN_148760d00(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148760e1c FUN_148760e1c body=59 status=ok
// SIG undefined FUN_148760e1c(void)

undefined8 FUN_148760e1c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148760ede FUN_148760ede body=101 status=ok
// SIG undefined FUN_148760ede(void)

undefined1 FUN_148760ede(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148760f6c FUN_148760f6c body=59 status=ok
// SIG undefined FUN_148760f6c(void)

undefined8 FUN_148760f6c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876103c FUN_14876103c body=100 status=ok
// SIG undefined FUN_14876103c(void)

undefined1 FUN_14876103c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1487611ba(param_2,param_3);
    FUN_148761214(param_2 + 0x10,param_3 + 0x10);
    FUN_14876126e(param_2 + 0x20,param_3 + 0x20);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 1487610c8 FUN_1487610c8 body=59 status=ok
// SIG undefined FUN_1487610c8(void)

undefined8 FUN_1487610c8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876110e FUN_14876110e body=32 status=ok
// SIG undefined FUN_14876110e(void)

void FUN_14876110e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14876117c(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14876117c FUN_14876117c body=61 status=ok
// SIG undefined FUN_14876117c(void)

void FUN_14876117c(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487611ba FUN_1487611ba body=89 status=ok
// SIG undefined FUN_1487611ba(void)

undefined8 * FUN_1487611ba(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1487612be(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 148761214 FUN_148761214 body=89 status=ok
// SIG undefined FUN_148761214(void)

undefined8 * FUN_148761214(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148761332(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 14876126e FUN_14876126e body=79 status=ok
// SIG undefined FUN_14876126e(void)

undefined8 * FUN_14876126e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1487613a6(param_1,iVar1);
      FUN_148761408(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487612be FUN_1487612be body=115 status=ok
// SIG undefined FUN_1487612be(void)

void FUN_1487612be(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148761332 FUN_148761332 body=115 status=ok
// SIG undefined FUN_148761332(void)

void FUN_148761332(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487613a6 FUN_1487613a6 body=98 status=ok
// SIG undefined FUN_1487613a6(void)

void FUN_1487613a6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148761408 FUN_148761408 body=88 status=ok
// SIG undefined FUN_148761408(void)

void FUN_148761408(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 8 + lVar3);
      *(longlong *)(param_1 + 8 + lVar3) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148761462 FUN_148761462 body=171 status=ok
// SIG undefined FUN_148761462(void)

void FUN_148761462(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1488d61dc(local_28);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876150e FUN_14876150e body=217 status=ok
// SIG undefined FUN_14876150e(void)

void FUN_14876150e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488d61e0(&local_38,local_28);
  FUN_1410e5bda(param_3,&local_38);
  FUN_1447a1747(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876166a FUN_14876166a body=157 status=ok
// SIG undefined FUN_14876166a(void)

undefined8 FUN_14876166a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406c9d00(param_1 + 0x548,&local_58);
  if (local_50 == 0) {
    local_50 = FUN_140927942();
  }
  uVar1 = FUN_14477b664(local_50);
  local_40 = local_58;
  uVar1 = FUN_14477b664(uVar1);
  local_38 = FUN_14477b664(uVar1);
  local_30 = local_48;
  FUN_1411f1bdc(param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148761784 FUN_148761784 body=48 status=ok
// SIG undefined FUN_148761784(void)

longlong FUN_148761784(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140c2f21a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487617bc FUN_1487617bc body=48 status=ok
// SIG undefined FUN_1487617bc(void)

longlong FUN_1487617bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140c2f21a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487617f4 FUN_1487617f4 body=48 status=ok
// SIG undefined FUN_1487617f4(void)

longlong FUN_1487617f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140c2f21a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148761840 FUN_148761840 body=48 status=ok
// SIG undefined FUN_148761840(void)

longlong FUN_148761840(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x530;
  FUN_140c2f21a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148761890 FUN_148761890 body=157 status=ok
// SIG undefined FUN_148761890(void)

undefined8 FUN_148761890(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406c9d00(param_1 + 0x2a0,&local_58);
  if (local_50 == 0) {
    local_50 = FUN_140927942();
  }
  uVar1 = FUN_14477b664(local_50);
  local_40 = local_58;
  uVar1 = FUN_14477b664(uVar1);
  local_38 = FUN_14477b664(uVar1);
  local_30 = local_48;
  FUN_1411f1bdc(param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148761946 FUN_148761946 body=45 status=ok
// SIG undefined FUN_148761946(void)

longlong FUN_148761946(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145ae490a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487619cc FUN_1487619cc body=123 status=ok
// SIG undefined FUN_1487619cc(void)

undefined8 FUN_1487619cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      uVar1 = *(undefined4 *)(param_3 + -100);
      uVar2 = *(undefined4 *)(param_3 + -0x60);
      uVar3 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar1;
      *(undefined4 *)(param_2 + -0x60) = uVar2;
      *(undefined4 *)(param_2 + -0x5c) = uVar3;
      FUN_1418443e8(param_2 + -0x58,param_3 + -0x58);
      uVar5 = *(undefined8 *)(param_3 + -0x30);
      uVar1 = *(undefined4 *)(param_3 + -0x2f);
      uVar2 = *(undefined4 *)(param_3 + -0x2b);
      uVar3 = *(undefined4 *)(param_3 + -0x27);
      uVar4 = *(undefined4 *)(param_3 + -0x23);
      *(undefined8 *)(param_2 + -0x38) = *(undefined8 *)(param_3 + -0x38);
      *(undefined8 *)(param_2 + -0x30) = uVar5;
      *(undefined4 *)(param_2 + -0x2f) = uVar1;
      *(undefined4 *)(param_2 + -0x2b) = uVar2;
      *(undefined4 *)(param_2 + -0x27) = uVar3;
      *(undefined4 *)(param_2 + -0x23) = uVar4;
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148761a70 FUN_148761a70 body=59 status=ok
// SIG undefined FUN_148761a70(void)

undefined8 FUN_148761a70(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148761abc FUN_148761abc body=54 status=ok
// SIG undefined FUN_148761abc(void)

void FUN_148761abc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b316ed0;
    if (param_2[0xe] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 148761b8e FUN_148761b8e body=123 status=ok
// SIG undefined FUN_148761b8e(void)

undefined8 FUN_148761b8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      uVar1 = *(undefined4 *)(param_3 + -100);
      uVar2 = *(undefined4 *)(param_3 + -0x60);
      uVar3 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar1;
      *(undefined4 *)(param_2 + -0x60) = uVar2;
      *(undefined4 *)(param_2 + -0x5c) = uVar3;
      FUN_1418443e8(param_2 + -0x58,param_3 + -0x58);
      uVar5 = *(undefined8 *)(param_3 + -0x30);
      uVar1 = *(undefined4 *)(param_3 + -0x2f);
      uVar2 = *(undefined4 *)(param_3 + -0x2b);
      uVar3 = *(undefined4 *)(param_3 + -0x27);
      uVar4 = *(undefined4 *)(param_3 + -0x23);
      *(undefined8 *)(param_2 + -0x38) = *(undefined8 *)(param_3 + -0x38);
      *(undefined8 *)(param_2 + -0x30) = uVar5;
      *(undefined4 *)(param_2 + -0x2f) = uVar1;
      *(undefined4 *)(param_2 + -0x2b) = uVar2;
      *(undefined4 *)(param_2 + -0x27) = uVar3;
      *(undefined4 *)(param_2 + -0x23) = uVar4;
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148761c32 FUN_148761c32 body=59 status=ok
// SIG undefined FUN_148761c32(void)

undefined8 FUN_148761c32(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148761c7e FUN_148761c7e body=54 status=ok
// SIG undefined FUN_148761c7e(void)

void FUN_148761c7e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b3185b0;
    if (param_2[0xe] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 148761d16 FUN_148761d16 body=197 status=ok
// SIG undefined FUN_148761d16(void)

undefined8 FUN_148761d16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      uVar3 = *(undefined4 *)(lVar1 + 0xc);
      uVar4 = *(undefined4 *)(lVar1 + 0x10);
      uVar5 = *(undefined4 *)(lVar1 + 0x14);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 8);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_1418443e8(lVar2,lVar1 + 0x18);
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x30);
      uVar3 = *(undefined4 *)(lVar1 + 0x3c);
      uVar4 = *(undefined4 *)(lVar1 + 0x40);
      uVar5 = *(undefined4 *)(lVar1 + 0x44);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x24) = uVar3;
      *(undefined4 *)(lVar2 + 0x28) = uVar4;
      *(undefined4 *)(lVar2 + 0x2c) = uVar5;
      lVar2 = param_2 + 0x48 + lVar6;
      lVar1 = param_3 + lVar6;
      FUN_144a787a6(lVar2,lVar1 + 0x48);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar1 + 0x58);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x60);
      lVar2 = param_2 + 0x68 + lVar6;
      lVar1 = param_3 + lVar6;
      FUN_1406fa324(lVar2,lVar1 + 0x68);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar1 + 0x78);
      *(undefined1 *)(lVar2 + 0x18) = *(undefined1 *)(lVar1 + 0x80);
      lVar6 = lVar6 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148761e04 FUN_148761e04 body=59 status=ok
// SIG undefined FUN_148761e04(void)

undefined8 FUN_148761e04(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148761e50 FUN_148761e50 body=40 status=ok
// SIG undefined FUN_148761e50(void)

void FUN_148761e50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_14584c1f2(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148761f14 FUN_148761f14 body=54 status=ok
// SIG undefined FUN_148761f14(void)

undefined1 FUN_148761f14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14876201a(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148761f72 FUN_148761f72 body=59 status=ok
// SIG undefined FUN_148761f72(void)

undefined8 FUN_148761f72(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148761fb8 FUN_148761fb8 body=32 status=ok
// SIG undefined FUN_148761fb8(void)

void FUN_148761fb8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_14876207c(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14876201a FUN_14876201a body=96 status=ok
// SIG undefined FUN_14876201a(void)

longlong FUN_14876201a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_1418443e8(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  FUN_14875e300(param_1 + 0x38,param_2 + 0x38);
  FUN_14875e300(param_1 + 0x48,param_2 + 0x48);
  FUN_14875e300(param_1 + 0x58,param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 14876207c FUN_14876207c body=75 status=ok
// SIG undefined FUN_14876207c(void)

void FUN_14876207c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b316f70;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14876215a FUN_14876215a body=59 status=ok
// SIG undefined FUN_14876215a(void)

undefined8 FUN_14876215a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148762242 FUN_148762242 body=75 status=ok
// SIG undefined FUN_148762242(void)

undefined1 FUN_148762242(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_148762364(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487622b6 FUN_1487622b6 body=59 status=ok
// SIG undefined FUN_1487622b6(void)

undefined8 FUN_1487622b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487622fc FUN_1487622fc body=34 status=ok
// SIG undefined FUN_1487622fc(void)

void FUN_1487622fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1457f2f38(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148762364 FUN_148762364 body=89 status=ok
// SIG undefined FUN_148762364(void)

undefined8 * FUN_148762364(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1487623be(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 1487623be FUN_1487623be body=115 status=ok
// SIG undefined FUN_1487623be(void)

void FUN_1487623be(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148762432 FUN_148762432 body=28 status=ok
// SIG undefined FUN_148762432(void)

undefined8 FUN_148762432(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1487624f0 FUN_1487624f0 body=59 status=ok
// SIG undefined FUN_1487624f0(void)

undefined8 FUN_1487624f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148762590 FUN_148762590 body=55 status=ok
// SIG undefined FUN_148762590(void)

void FUN_148762590(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a4a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a4a0 = FUN_140002ddd(FUN_1465261f7,uVar1,L"InventoryRarityDataTableValueResolver");
  }
  return;
}



// FUNCTION 1487625f6 FUN_1487625f6 body=63 status=ok
// SIG undefined FUN_1487625f6(void)

undefined1 FUN_1487625f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148762716(param_2,param_3);
    param_3 = param_3 + 0x210;
    param_2 = param_2 + 0x210;
  }
  return 1;
}



// FUNCTION 14876265e FUN_14876265e body=59 status=ok
// SIG undefined FUN_14876265e(void)

undefined8 FUN_14876265e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487626aa FUN_1487626aa body=38 status=ok
// SIG undefined FUN_1487626aa(void)

void FUN_1487626aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_140f8e64c(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 148762716 FUN_148762716 body=449 status=ok
// SIG undefined FUN_148762716(void)

longlong FUN_148762716(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  plVar1 = *(longlong **)(param_2 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x28) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 0x40);
  uVar5 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  FUN_1486847a8(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  uVar4 = *(undefined4 *)(param_2 + 0xa8);
  uVar5 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  *(undefined4 *)(param_1 + 0xa8) = uVar4;
  *(undefined4 *)(param_1 + 0xac) = uVar5;
  FUN_144a787a6(param_1 + 0xb0,param_2 + 0xb0);
  FUN_14065c7a4(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xd4) = *(undefined1 *)(param_2 + 0xd4);
  uVar3 = *(undefined4 *)(param_2 + 0xdc);
  uVar4 = *(undefined4 *)(param_2 + 0xe0);
  uVar5 = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = uVar3;
  *(undefined4 *)(param_1 + 0xe0) = uVar4;
  *(undefined4 *)(param_1 + 0xe4) = uVar5;
  FUN_1486847a8(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined2 *)(param_1 + 0x148) = *(undefined2 *)(param_2 + 0x148);
  uVar6 = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x140) = uVar6;
  if ((*(longlong *)(param_1 + 0x150) != *(longlong *)(param_2 + 0x150)) ||
     (*(int *)(param_1 + 0x158) != *(int *)(param_2 + 0x158))) {
    *(longlong *)(param_1 + 0x150) = *(longlong *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  uVar3 = *(undefined4 *)(param_2 + 0x174);
  uVar4 = *(undefined4 *)(param_2 + 0x178);
  uVar5 = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x174) = uVar3;
  *(undefined4 *)(param_1 + 0x178) = uVar4;
  *(undefined4 *)(param_1 + 0x17c) = uVar5;
  FUN_144a7bb84(param_1 + 0x180,param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
  FUN_140d02432(param_1 + 0x1a0,param_2 + 0x1a0);
  FUN_14184b2ce(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_142b160e2(param_1 + 0x208,param_2 + 0x208);
  return param_1;
}



// FUNCTION 1487628d8 FUN_1487628d8 body=28 status=ok
// SIG undefined FUN_1487628d8(void)

undefined8 FUN_1487628d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148762948 FUN_148762948 body=83 status=ok
// SIG undefined FUN_148762948(void)

undefined1 FUN_148762948(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1418443e8(param_2,param_3);
      FUN_145bfea70(param_2 + 0x18,param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487629c4 FUN_1487629c4 body=59 status=ok
// SIG undefined FUN_1487629c4(void)

undefined8 FUN_1487629c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148762a9e FUN_148762a9e body=107 status=ok
// SIG undefined FUN_148762a9e(void)

undefined8 FUN_148762a9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x3c);
      uVar2 = *(undefined4 *)(param_3 + -0x38);
      uVar3 = *(undefined4 *)(param_3 + -0x34);
      *(undefined4 *)(param_2 + -0x40) = *(undefined4 *)(param_3 + -0x40);
      *(undefined4 *)(param_2 + -0x3c) = uVar1;
      *(undefined4 *)(param_2 + -0x38) = uVar2;
      *(undefined4 *)(param_2 + -0x34) = uVar3;
      FUN_1418443e8(param_2 + -0x30,param_3 + -0x30);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x60;
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148762b32 FUN_148762b32 body=59 status=ok
// SIG undefined FUN_148762b32(void)

undefined8 FUN_148762b32(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148762b78 FUN_148762b78 body=48 status=ok
// SIG undefined FUN_148762b78(void)

void FUN_148762b78(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xc) == '\x01') {
    *param_2 = &PTR_FUN_14b314000;
    if (param_2[9] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 148762c32 FUN_148762c32 body=59 status=ok
// SIG undefined FUN_148762c32(void)

undefined8 FUN_148762c32(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148762c7e FUN_148762c7e body=38 status=ok
// SIG undefined FUN_148762c7e(void)

void FUN_148762c7e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_14185d22e(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148762d16 FUN_148762d16 body=101 status=ok
// SIG undefined FUN_148762d16(void)

undefined8 FUN_148762d16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 != 0) {
    piVar1 = (int *)(param_3 + 8);
    param_2 = param_2 + 0x18;
    do {
      if ((*(longlong *)(param_2 + -0x18) != *(longlong *)(piVar1 + -2)) ||
         (*(int *)(param_2 + -0x10) != *piVar1)) {
        *(longlong *)(param_2 + -0x18) = *(longlong *)(piVar1 + -2);
        *(int *)(param_2 + -0x10) = *piVar1;
        *(undefined8 *)(param_2 + -8) = 0;
      }
      FUN_140e8ab18(param_2,piVar1 + 4);
      piVar1 = piVar1 + 10;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148762da4 FUN_148762da4 body=59 status=ok
// SIG undefined FUN_148762da4(void)

undefined8 FUN_148762da4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148762e36 FUN_148762e36 body=50 status=ok
// SIG undefined FUN_148762e36(void)

void FUN_148762e36(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_140485972(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148762eea FUN_148762eea body=54 status=ok
// SIG undefined FUN_148762eea(void)

undefined1 FUN_148762eea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148763022(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148762f48 FUN_148762f48 body=59 status=ok
// SIG undefined FUN_148762f48(void)

undefined8 FUN_148762f48(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148762f8e FUN_148762f8e body=32 status=ok
// SIG undefined FUN_148762f8e(void)

void FUN_148762f8e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1409ddcc2(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148762ffc FUN_148762ffc body=38 status=ok
// SIG undefined FUN_148762ffc(void)

undefined8 FUN_148762ffc(undefined8 param_1,int param_2)

{
  FUN_1409ddcc2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148763022 FUN_148763022 body=83 status=ok
// SIG undefined FUN_148763022(void)

longlong FUN_148763022(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_14861edc2();
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_1407b26d0(param_1 + 0x38,param_2 + 0x38);
  FUN_1407b2728(param_1 + 0x48,param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  FUN_148763076(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 148763076 FUN_148763076 body=93 status=ok
// SIG undefined FUN_148763076(void)

undefined8 * FUN_148763076(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1407d6a19(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148763136(param_1,iVar1);
      FUN_1487631a9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487630d4 FUN_1487630d4 body=98 status=ok
// SIG undefined FUN_1487630d4(void)

void FUN_1487630d4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148763136 FUN_148763136 body=115 status=ok
// SIG undefined FUN_148763136(void)

void FUN_148763136(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487631a9 FUN_1487631a9 body=52 status=ok
// SIG undefined FUN_1487631a9(void)

void FUN_1487631a9(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1487631de(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 1487631de FUN_1487631de body=139 status=ok
// SIG undefined FUN_1487631de(void)

undefined8 * FUN_1487631de(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  param_1[2] = param_2[2];
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_144a69486(param_1 + 3,param_2 + 3);
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  _Src = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  return param_1;
}



// FUNCTION 1487632b2 FUN_1487632b2 body=97 status=ok
// SIG undefined FUN_1487632b2(void)

undefined8 FUN_1487632b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1487633f4(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14876333c FUN_14876333c body=59 status=ok
// SIG undefined FUN_14876333c(void)

undefined8 FUN_14876333c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148763382 FUN_148763382 body=48 status=ok
// SIG undefined FUN_148763382(void)

void FUN_148763382(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b314650;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 1487633f4 FUN_1487633f4 body=79 status=ok
// SIG undefined FUN_1487633f4(void)

undefined8 * FUN_1487633f4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148763444(param_1,iVar1);
      FUN_1487634b7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148763444 FUN_148763444 body=115 status=ok
// SIG undefined FUN_148763444(void)

void FUN_148763444(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487634b7 FUN_1487634b7 body=52 status=ok
// SIG undefined FUN_1487634b7(void)

void FUN_1487634b7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14124ed18(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1487634ec FUN_1487634ec body=67 status=ok
// SIG undefined FUN_1487634ec(void)

void FUN_1487634ec(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e7af18(param_2);
  *param_2 = &PTR_FUN_14b3184e0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  return;
}



// FUNCTION 148763546 FUN_148763546 body=63 status=ok
// SIG undefined FUN_148763546(void)

undefined1 FUN_148763546(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14876365a(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 1487635ae FUN_1487635ae body=59 status=ok
// SIG undefined FUN_1487635ae(void)

undefined8 FUN_1487635ae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487635fa FUN_1487635fa body=38 status=ok
// SIG undefined FUN_1487635fa(void)

void FUN_1487635fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_140c8a414(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 14876365a FUN_14876365a body=150 status=ok
// SIG undefined FUN_14876365a(void)

longlong FUN_14876365a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_14875ca72();
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  uVar6 = *(undefined4 *)(param_2 + 0x11c);
  uVar7 = *(undefined4 *)(param_2 + 0x120);
  uVar8 = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = uVar6;
  *(undefined4 *)(param_1 + 0x120) = uVar7;
  *(undefined4 *)(param_1 + 0x124) = uVar8;
  FUN_144a787a6(param_1 + 0x128,param_2 + 0x128);
  uVar3 = *(undefined8 *)(param_2 + 0x138);
  lVar4 = *(longlong *)(param_2 + 0x140);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x138) = uVar3;
  *(longlong *)(param_1 + 0x140) = lVar4;
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



// FUNCTION 1487636f2 FUN_1487636f2 body=28 status=ok
// SIG undefined FUN_1487636f2(void)

undefined8 FUN_1487636f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148763788 FUN_148763788 body=59 status=ok
// SIG undefined FUN_148763788(void)

undefined8 FUN_148763788(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148763828 FUN_148763828 body=29 status=ok
// SIG undefined FUN_148763828(void)

undefined8 FUN_148763828(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148763846 FUN_148763846 body=37 status=ok
// SIG undefined FUN_148763846(void)

void FUN_148763846(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x208);
  FUN_1487639c0(param_2);
  return;
}



// FUNCTION 148763898 FUN_148763898 body=63 status=ok
// SIG undefined FUN_148763898(void)

undefined1 FUN_148763898(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148763b7c(param_2,param_3);
    param_3 = param_3 + 0x208;
    param_2 = param_2 + 0x208;
  }
  return 1;
}



// FUNCTION 148763900 FUN_148763900 body=59 status=ok
// SIG undefined FUN_148763900(void)

undefined8 FUN_148763900(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876394c FUN_14876394c body=38 status=ok
// SIG undefined FUN_14876394c(void)

void FUN_14876394c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x208) == '\x01') {
    FUN_140944000(param_2);
    *(undefined1 *)(param_2 + 0x208) = 0;
  }
  return;
}



// FUNCTION 1487639c0 FUN_1487639c0 body=343 status=ok
// SIG undefined FUN_1487639c0(void)

undefined8 * FUN_1487639c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b318750;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = &DAT_100000001;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_140056680(param_1 + 9,&DAT_149dfb77a);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  return param_1;
}



// FUNCTION 148763b18 FUN_148763b18 body=38 status=ok
// SIG undefined FUN_148763b18(void)

undefined8 FUN_148763b18(undefined8 param_1,int param_2)

{
  FUN_140944000();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148763b3e FUN_148763b3e body=56 status=ok
// SIG undefined FUN_148763b3e(void)

undefined8 * FUN_148763b3e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1447bda9e(param_2,1,0);
  *(undefined4 *)*param_2 = 0;
  return param_2;
}



// FUNCTION 148763b7c FUN_148763b7c body=309 status=ok
// SIG undefined FUN_148763b7c(void)

longlong FUN_148763b7c(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_140bee9ec(param_1 + 8,param_2 + 8);
  FUN_148763cb2(param_1 + 0x18,param_2 + 0x18);
  FUN_148763d10(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  FUN_140d188f2(param_1 + 0x58,param_2 + 0x58);
  FUN_1486df512(param_1 + 0xa8,param_2 + 0xa8);
  FUN_1406fa324(param_1 + 0xf8,param_2 + 0xf8);
  FUN_148763d6e(param_1 + 0x108,param_2 + 0x108);
  FUN_148763d10(param_1 + 0x118,param_2 + 0x118);
  FUN_148763dcc(param_1 + 0x128,param_2 + 0x128);
  uVar5 = *(undefined4 *)(param_2 + 0x13c);
  uVar6 = *(undefined4 *)(param_2 + 0x140);
  uVar7 = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = uVar5;
  *(undefined4 *)(param_1 + 0x140) = uVar6;
  *(undefined4 *)(param_1 + 0x144) = uVar7;
  FUN_148763e2a(param_1 + 0x148,param_2 + 0x148);
  FUN_148763e2a(param_1 + 0x198,param_2 + 0x198);
  uVar2 = *(undefined8 *)(param_2 + 0x1e8);
  lVar3 = *(longlong *)(param_2 + 0x1f0);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1e8) = uVar2;
  *(longlong *)(param_1 + 0x1f0) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined8 *)(param_1 + 0x200) = uVar2;
  return param_1;
}



// FUNCTION 148763cb2 FUN_148763cb2 body=93 status=ok
// SIG undefined FUN_148763cb2(void)

undefined8 * FUN_148763cb2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140255aed(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148763ea4(param_1,iVar1);
      FUN_148763f06(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148763d10 FUN_148763d10 body=93 status=ok
// SIG undefined FUN_148763d10(void)

undefined8 * FUN_148763d10(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140944221(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148763f34(param_1,iVar1);
      FUN_148763f96(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148763d6e FUN_148763d6e body=93 status=ok
// SIG undefined FUN_148763d6e(void)

undefined8 * FUN_148763d6e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140944385(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148763fc4(param_1,iVar1);
      FUN_148764037(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148763dcc FUN_148763dcc body=93 status=ok
// SIG undefined FUN_148763dcc(void)

undefined8 * FUN_148763dcc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1409442e6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148764084(param_1,iVar1);
      FUN_1487640e6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148763e2a FUN_148763e2a body=122 status=ok
// SIG undefined FUN_148763e2a(void)

longlong FUN_148763e2a(longlong param_1,longlong param_2)

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
    FUN_148764124(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148763ea4 FUN_148763ea4 body=98 status=ok
// SIG undefined FUN_148763ea4(void)

void FUN_148763ea4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148763f06 FUN_148763f06 body=45 status=ok
// SIG undefined FUN_148763f06(void)

void FUN_148763f06(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148763f34 FUN_148763f34 body=98 status=ok
// SIG undefined FUN_148763f34(void)

void FUN_148763f34(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148763f96 FUN_148763f96 body=45 status=ok
// SIG undefined FUN_148763f96(void)

void FUN_148763f96(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148763fc4 FUN_148763fc4 body=115 status=ok
// SIG undefined FUN_148763fc4(void)

void FUN_148763fc4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148764037 FUN_148764037 body=76 status=ok
// SIG undefined FUN_148764037(void)

void FUN_148764037(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_144a8b00e(param_1,param_2);
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
      param_1 = param_1 + 0x18;
      param_2 = param_2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148764084 FUN_148764084 body=98 status=ok
// SIG undefined FUN_148764084(void)

void FUN_148764084(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487640e6 FUN_1487640e6 body=62 status=ok
// SIG undefined FUN_1487640e6(void)

void FUN_1487640e6(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_142b16116(param_1,param_2);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return;
}



// FUNCTION 148764124 FUN_148764124 body=115 status=ok
// SIG undefined FUN_148764124(void)

undefined8 * FUN_148764124(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14094426c(param_1,uVar1);
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



// FUNCTION 1487641e6 FUN_1487641e6 body=59 status=ok
// SIG undefined FUN_1487641e6(void)

undefined8 FUN_1487641e6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876427a FUN_14876427a body=55 status=ok
// SIG undefined FUN_14876427a(void)

void FUN_14876427a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a5c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a5c0 = FUN_140002ddd(FUN_1465267c7,uVar1,L"InventoryStatsContainerContextResolver");
  }
  return;
}



// FUNCTION 14876430c FUN_14876430c body=59 status=ok
// SIG undefined FUN_14876430c(void)

undefined8 FUN_14876430c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487643ac FUN_1487643ac body=55 status=ok
// SIG undefined FUN_1487643ac(void)

void FUN_1487643ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a5d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a5d8 =
         FUN_140002ddd(FUN_14652685d,uVar1,L"OwnerInventoryStatsContainerContextResolver");
  }
  return;
}



// FUNCTION 148764450 FUN_148764450 body=59 status=ok
// SIG undefined FUN_148764450(void)

undefined8 FUN_148764450(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487644f2 FUN_1487644f2 body=47 status=ok
// SIG undefined FUN_1487644f2(void)

void FUN_1487644f2(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408c99be();
  param_2[1] = &DAT_14cb83290;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14b3186a0;
  return;
}



// FUNCTION 148764522 FUN_148764522 body=47 status=ok
// SIG undefined FUN_148764522(void)

void FUN_148764522(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408c99be();
  param_2[1] = &DAT_14cb83290;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14b3186a0;
  return;
}



// FUNCTION 148764582 FUN_148764582 body=78 status=ok
// SIG undefined FUN_148764582(void)

undefined8 FUN_148764582(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    do {
      (**(code **)(*param_2 + 0x20))(param_2,0);
      param_2[1] = *(longlong *)(param_3 + -8);
      FUN_1406022fe(param_2 + 2);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487645d0 FUN_1487645d0 body=31 status=ok
// SIG undefined FUN_1487645d0(void)

undefined1
FUN_1487645d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144b082da(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1487645f0 FUN_1487645f0 body=302 status=ok
// SIG undefined FUN_1487645f0(void)

undefined4
FUN_1487645f0(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88 [12];
  byte local_7c;
  undefined **local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 != 0) {
    local_90 = param_7;
    local_98 = param_6;
    (**(code **)(*param_3 + 0x30))(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (undefined **)0x0;
  puStack_70 = (undefined *)0x0;
  (**(code **)(*param_1 + 8))(param_1,local_88);
  if ((local_7c & 2) == 0) {
    FUN_1408c99be();
    puStack_70 = &DAT_14cb83290;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = &PTR_FUN_14b3186a0;
  }
  local_90 = param_7;
  local_98 = param_6;
  uVar1 = (**(code **)(*param_3 + 0x30))(param_3,param_2,&local_78,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_88);
  if ((local_7c & 4) != 0) {
    (*(code *)local_78[0xb])(&local_78,0);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 148764720 FUN_148764720 body=41 status=ok
// SIG undefined FUN_148764720(void)

void FUN_148764720(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)(*param_3 + 0x28))(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14876475e FUN_14876475e body=59 status=ok
// SIG undefined FUN_14876475e(void)

undefined8 FUN_14876475e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487647fa FUN_1487647fa body=82 status=ok
// SIG undefined FUN_1487647fa(void)

void FUN_1487647fa(undefined8 *param_1)

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



// FUNCTION 148764890 FUN_148764890 body=125 status=ok
// SIG undefined FUN_148764890(void)

undefined8 FUN_148764890(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar7);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      lVar2 = param_2 + 0x10 + lVar7;
      *(undefined4 *)(lVar2 + -0x10) = *puVar1;
      *(undefined4 *)(lVar2 + -0xc) = uVar4;
      *(undefined4 *)(lVar2 + -8) = uVar5;
      *(undefined4 *)(lVar2 + -4) = uVar6;
      FUN_14150acc4(lVar2,puVar1 + 4);
      uVar3 = *(undefined8 *)((longlong)puVar1 + 0x2e);
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(puVar1 + 10);
      *(undefined8 *)(lVar2 + 0x1e) = uVar3;
      FUN_142b160e2(param_2 + lVar7 + 0x38,param_3 + lVar7 + 0x38);
      lVar7 = lVar7 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148764936 FUN_148764936 body=59 status=ok
// SIG undefined FUN_148764936(void)

undefined8 FUN_148764936(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487649d0 FUN_1487649d0 body=62 status=ok
// SIG undefined FUN_1487649d0(void)

void FUN_1487649d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1408c99be();
  param_2[3] = &DAT_14cb83290;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = &PTR_FUN_14b3186a0;
  return;
}



// FUNCTION 148764a24 FUN_148764a24 body=118 status=ok
// SIG undefined FUN_148764a24(void)

undefined8 FUN_148764a24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      plVar1 = (longlong *)(param_3 + lVar3);
      plVar2 = (longlong *)(param_2 + 0x10 + lVar3);
      *(int *)(plVar2 + -1) = (int)plVar1[1];
      plVar2[-2] = *plVar1;
      (**(code **)(*plVar2 + 0x20))(plVar2,0);
      plVar2[1] = plVar1[3];
      FUN_1406022fe(param_2 + lVar3 + 0x20);
      lVar3 = lVar3 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148764ac2 FUN_148764ac2 body=59 status=ok
// SIG undefined FUN_148764ac2(void)

undefined8 FUN_148764ac2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148764b50 FUN_148764b50 body=83 status=ok
// SIG undefined FUN_148764b50(void)

void FUN_148764b50(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined2 **)(param_1 + 0x10) = &DAT_14a171d50;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_140115c12(param_1 + 0x20,0);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148764ba4 FUN_148764ba4 body=96 status=ok
// SIG undefined FUN_148764ba4(void)

void FUN_148764ba4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x88);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b318730;
  *(undefined4 *)(param_2 + 0xe) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0xffffffff00000080;
  param_2[0x11] = 0;
  return;
}



// FUNCTION 148764c68 FUN_148764c68 body=63 status=ok
// SIG undefined FUN_148764c68(void)

undefined1 FUN_148764c68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148764dc2(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148764cd0 FUN_148764cd0 body=59 status=ok
// SIG undefined FUN_148764cd0(void)

undefined8 FUN_148764cd0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148764d1c FUN_148764d1c body=38 status=ok
// SIG undefined FUN_148764d1c(void)

void FUN_148764d1c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_140fb6454(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148764d88 FUN_148764d88 body=57 status=ok
// SIG undefined FUN_148764d88(void)

void FUN_148764d88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a650 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a650 = FUN_140002ddd(FUN_146526ad6,uVar1,L"InventoryStatsDef");
  }
  return;
}



// FUNCTION 148764dc2 FUN_148764dc2 body=90 status=ok
// SIG undefined FUN_148764dc2(void)

longlong FUN_148764dc2(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_148764e1c(param_1 + 0x18,param_2 + 0x18);
  FUN_148764e7a(param_1 + 0x28,param_2 + 0x28);
  FUN_148764ed8(param_1 + 0x38,param_2 + 0x38);
  FUN_1487651e4(param_1 + 0x48,param_2 + 0x48);
  return param_1;
}



// FUNCTION 148764e1c FUN_148764e1c body=93 status=ok
// SIG undefined FUN_148764e1c(void)

undefined8 * FUN_148764e1c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140fb6593(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148764f36(param_1,iVar1);
      FUN_148764fa9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148764e7a FUN_148764e7a body=93 status=ok
// SIG undefined FUN_148764e7a(void)

undefined8 * FUN_148764e7a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140fb65f4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14876505e(param_1,iVar1);
      FUN_1487650c0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148764ed8 FUN_148764ed8 body=93 status=ok
// SIG undefined FUN_148764ed8(void)

undefined8 * FUN_148764ed8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140fb6545(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148765122(param_1,iVar1);
      FUN_148765195(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148764f36 FUN_148764f36 body=115 status=ok
// SIG undefined FUN_148764f36(void)

void FUN_148764f36(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148764fa9 FUN_148764fa9 body=88 status=ok
// SIG undefined FUN_148764fa9(void)

void FUN_148764fa9(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(puVar1 + -1) = *(undefined4 *)(param_2 + -8);
      puVar1[-2] = *(undefined8 *)(param_2 + -0x10);
      FUN_1406022be(puVar1,param_2);
      *puVar1 = &PTR_FUN_14b3186a0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148765002 FUN_148765002 body=91 status=ok
// SIG undefined FUN_148765002(void)

undefined8 * FUN_148765002(undefined8 *param_1,int param_2)

{
  *param_1 = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140115c12(param_1 + 2,0);
  }
  param_1[1] = 0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14876505e FUN_14876505e body=98 status=ok
// SIG undefined FUN_14876505e(void)

void FUN_14876505e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487650c0 FUN_1487650c0 body=97 status=ok
// SIG undefined FUN_1487650c0(void)

void FUN_1487650c0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      uVar2 = *(undefined4 *)(param_2 + -0x34);
      uVar3 = *(undefined4 *)(param_2 + -0x30);
      uVar4 = *(undefined4 *)(param_2 + -0x2c);
      *(undefined4 *)(param_1 + -0x38) = *(undefined4 *)(param_2 + -0x38);
      *(undefined4 *)(param_1 + -0x34) = uVar2;
      *(undefined4 *)(param_1 + -0x30) = uVar3;
      *(undefined4 *)(param_1 + -0x2c) = uVar4;
      FUN_144a76ff0(param_1 + -0x28,param_2 + -0x28);
      uVar1 = *(undefined8 *)(param_2 + -10);
      *(undefined8 *)(param_1 + -0x10) = *(undefined8 *)(param_2 + -0x10);
      *(undefined8 *)(param_1 + -10) = uVar1;
      FUN_142b16116(param_1,param_2);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148765122 FUN_148765122 body=115 status=ok
// SIG undefined FUN_148765122(void)

void FUN_148765122(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148765195 FUN_148765195 body=79 status=ok
// SIG undefined FUN_148765195(void)

void FUN_148765195(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_142b16116(param_1,param_2);
      FUN_142b16116(param_1 + 8,param_2 + 8);
      param_1 = param_1 + 0x18;
      param_2 = param_2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1487651e4 FUN_1487651e4 body=122 status=ok
// SIG undefined FUN_1487651e4(void)

longlong FUN_1487651e4(longlong param_1,longlong param_2)

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
    FUN_14876525e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14876525e FUN_14876525e body=202 status=ok
// SIG undefined FUN_14876525e(void)

undefined8 * FUN_14876525e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140fb6692(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
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
          FUN_148765328(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148765328 FUN_148765328 body=114 status=ok
// SIG undefined FUN_148765328(void)

undefined8 * FUN_148765328(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_14876539a(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 3);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 14876539a FUN_14876539a body=98 status=ok
// SIG undefined FUN_14876539a(void)

void FUN_14876539a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1487653fe FUN_1487653fe body=28 status=ok
// SIG undefined FUN_1487653fe(void)

undefined8 FUN_1487653fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14876542c FUN_14876542c body=47 status=ok
// SIG undefined FUN_14876542c(void)

void FUN_14876542c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140265f12();
  param_2[1] = &DAT_14cb83310;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14b1828b0;
  return;
}



// FUNCTION 14876546e FUN_14876546e body=78 status=ok
// SIG undefined FUN_14876546e(void)

undefined8 FUN_14876546e(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    do {
      (**(code **)(*param_2 + 0x20))(param_2,0);
      param_2[1] = *(longlong *)(param_3 + -8);
      FUN_1406022fe(param_2 + 2);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487654bc FUN_1487654bc body=31 status=ok
// SIG undefined FUN_1487654bc(void)

undefined1
FUN_1487654bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144b082da(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1487654dc FUN_1487654dc body=302 status=ok
// SIG undefined FUN_1487654dc(void)

undefined4
FUN_1487654dc(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88 [12];
  byte local_7c;
  undefined **local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 != 0) {
    local_90 = param_7;
    local_98 = param_6;
    (**(code **)(*param_3 + 0x30))(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (undefined **)0x0;
  puStack_70 = (undefined *)0x0;
  (**(code **)(*param_1 + 8))(param_1,local_88);
  if ((local_7c & 2) == 0) {
    FUN_140265f12();
    puStack_70 = &DAT_14cb83310;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = &PTR_FUN_14b1828b0;
  }
  local_90 = param_7;
  local_98 = param_6;
  uVar1 = (**(code **)(*param_3 + 0x30))(param_3,param_2,&local_78,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_88);
  if ((local_7c & 4) != 0) {
    (*(code *)local_78[0xb])(&local_78,0);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14876560c FUN_14876560c body=41 status=ok
// SIG undefined FUN_14876560c(void)

void FUN_14876560c(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)(*param_3 + 0x28))(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14876564e FUN_14876564e body=59 status=ok
// SIG undefined FUN_14876564e(void)

undefined8 FUN_14876564e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487656ea FUN_1487656ea body=82 status=ok
// SIG undefined FUN_1487656ea(void)

void FUN_1487656ea(undefined8 *param_1)

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



// FUNCTION 1487657e4 FUN_1487657e4 body=59 status=ok
// SIG undefined FUN_1487657e4(void)

undefined8 FUN_1487657e4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148765924 FUN_148765924 body=59 status=ok
// SIG undefined FUN_148765924(void)

undefined8 FUN_148765924(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487659c6 FUN_1487659c6 body=55 status=ok
// SIG undefined FUN_1487659c6(void)

void FUN_1487659c6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  return;
}



// FUNCTION 148765a54 FUN_148765a54 body=138 status=ok
// SIG undefined FUN_148765a54(void)

undefined1 FUN_148765a54(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_148765bc8(param_2 + lVar10,param_3 + lVar10);
      FUN_148765c22(param_2 + lVar10 + 0x10,param_3 + lVar10 + 0x10);
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_140816cc4(lVar1 + 0x20,lVar2 + 0x20);
      uVar3 = *(undefined4 *)(lVar2 + 0x74);
      uVar4 = *(undefined4 *)(lVar2 + 0x78);
      uVar5 = *(undefined4 *)(lVar2 + 0x7c);
      uVar6 = *(undefined4 *)(lVar2 + 0x7c);
      uVar7 = *(undefined4 *)(lVar2 + 0x80);
      uVar8 = *(undefined4 *)(lVar2 + 0x84);
      uVar9 = *(undefined4 *)(lVar2 + 0x88);
      *(undefined4 *)(lVar1 + 0x70) = *(undefined4 *)(lVar2 + 0x70);
      *(undefined4 *)(lVar1 + 0x74) = uVar3;
      *(undefined4 *)(lVar1 + 0x78) = uVar4;
      *(undefined4 *)(lVar1 + 0x7c) = uVar5;
      *(undefined4 *)(lVar1 + 0x7c) = uVar6;
      *(undefined4 *)(lVar1 + 0x80) = uVar7;
      *(undefined4 *)(lVar1 + 0x84) = uVar8;
      *(undefined4 *)(lVar1 + 0x88) = uVar9;
      lVar10 = lVar10 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148765b06 FUN_148765b06 body=59 status=ok
// SIG undefined FUN_148765b06(void)

undefined8 FUN_148765b06(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148765b52 FUN_148765b52 body=40 status=ok
// SIG undefined FUN_148765b52(void)

void FUN_148765b52(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_1458c8138(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148765bc8 FUN_148765bc8 body=89 status=ok
// SIG undefined FUN_148765bc8(void)

undefined8 * FUN_148765bc8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148765c78(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 148765c22 FUN_148765c22 body=85 status=ok
// SIG undefined FUN_148765c22(void)

undefined8 * FUN_148765c22(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148765cec(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x34);
      }
    }
  }
  return param_1;
}



// FUNCTION 148765c78 FUN_148765c78 body=115 status=ok
// SIG undefined FUN_148765c78(void)

void FUN_148765c78(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148765cec FUN_148765cec body=111 status=ok
// SIG undefined FUN_148765cec(void)

void FUN_148765cec(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x34,4);
    iVar2 = (int)(uVar1 / 0x34);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x34,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148765d90 FUN_148765d90 body=83 status=ok
// SIG undefined FUN_148765d90(void)

undefined1 FUN_148765d90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1418443e8(param_2,param_3);
      FUN_14184443c(param_2 + 0x18,param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148765e0c FUN_148765e0c body=59 status=ok
// SIG undefined FUN_148765e0c(void)

undefined8 FUN_148765e0c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148765eae FUN_148765eae body=93 status=ok
// SIG undefined FUN_148765eae(void)

void FUN_148765eae(undefined8 param_1,undefined8 *param_2)

{
  FUN_140a3ff80(param_2);
  *param_2 = &PTR_FUN_14b318620;
  param_2[0xd9] = 0;
  *(undefined4 *)(param_2 + 0xda) = 0;
  param_2[0xd5] = 0;
  param_2[0xd6] = 0;
  *(undefined8 *)((longlong)param_2 + 0x6d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x6dc) = 0;
  param_2[0xdd] = 0;
  *(undefined4 *)(param_2 + 0xde) = 0;
  return;
}



// FUNCTION 148765f30 FUN_148765f30 body=85 status=ok
// SIG undefined FUN_148765f30(void)

undefined1 FUN_148765f30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14869fefc(param_2,param_3);
    FUN_14094ab5c(param_2 + 0x6a8,param_3 + 0x6a8);
    param_2 = param_2 + 0x700;
    param_3 = param_3 + 0x700;
  }
  return 1;
}



// FUNCTION 148765fae FUN_148765fae body=59 status=ok
// SIG undefined FUN_148765fae(void)

undefined8 FUN_148765fae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148765ffa FUN_148765ffa body=38 status=ok
// SIG undefined FUN_148765ffa(void)

void FUN_148765ffa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x700) == '\x01') {
    FUN_14185d462(param_2);
    *(undefined1 *)(param_2 + 0x700) = 0;
  }
  return;
}



// FUNCTION 14876606e FUN_14876606e body=110 status=ok
// SIG undefined FUN_14876606e(void)

undefined8 * FUN_14876606e(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1415c5ebe(param_1 + 3,param_2 + 3);
  FUN_1415c5ebe(param_1 + 6,param_2 + 6);
  param_1[9] = 0;
  param_1[10] = 0xffffffffffffffff;
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  return param_1;
}



// FUNCTION 148766122 FUN_148766122 body=134 status=ok
// SIG undefined FUN_148766122(void)

undefined8 FUN_148766122(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar8);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      FUN_144a7bb84();
      lVar3 = param_2 + lVar8;
      lVar4 = param_3 + lVar8;
      FUN_144a7bb84(lVar3 + 0x28,lVar4 + 0x28);
      *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(lVar4 + 0x40);
      *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar4 + 0x48);
      *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(lVar4 + 0x50);
      lVar8 = lVar8 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487661d0 FUN_1487661d0 body=59 status=ok
// SIG undefined FUN_1487661d0(void)

undefined8 FUN_1487661d0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487662e6 FUN_1487662e6 body=54 status=ok
// SIG undefined FUN_1487662e6(void)

undefined1 FUN_1487662e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145759ac8(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148766344 FUN_148766344 body=59 status=ok
// SIG undefined FUN_148766344(void)

undefined8 FUN_148766344(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14876638a FUN_14876638a body=55 status=ok
// SIG undefined FUN_14876638a(void)

void FUN_14876638a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_14572d5bc(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148766412 FUN_148766412 body=93 status=ok
// SIG undefined FUN_148766412(void)

void FUN_148766412(undefined8 param_1,undefined8 *param_2)

{
  FUN_141407eb4(param_2);
  *param_2 = &PTR_FUN_14b3162b0;
  param_2[0x60] = 0;
  *(undefined4 *)(param_2 + 0x61) = 0;
  param_2[0x5c] = 0;
  param_2[0x5d] = 0;
  *(undefined8 *)((longlong)param_2 + 0x30c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x314) = 0;
  param_2[100] = 0;
  *(undefined4 *)(param_2 + 0x65) = 0;
  return;
}



// FUNCTION 148766486 FUN_148766486 body=85 status=ok
// SIG undefined FUN_148766486(void)

undefined1 FUN_148766486(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a0e54(param_2,param_3);
    FUN_14094ab5c(param_2 + 0x2e0,param_3 + 0x2e0);
    param_2 = param_2 + 0x330;
    param_3 = param_3 + 0x330;
  }
  return 1;
}



// FUNCTION 148766504 FUN_148766504 body=59 status=ok
// SIG undefined FUN_148766504(void)

undefined8 FUN_148766504(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148766550 FUN_148766550 body=38 status=ok
// SIG undefined FUN_148766550(void)

void FUN_148766550(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x330) == '\x01') {
    FUN_1487665b8(param_2);
    *(undefined1 *)(param_2 + 0x330) = 0;
  }
  return;
}



// FUNCTION 1487665b8 FUN_1487665b8 body=72 status=ok
// SIG undefined FUN_1487665b8(void)

void FUN_1487665b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3162b0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_14060f136(param_1 + 0x5c);
  FUN_1407f60da(param_1);
  return;
}



// FUNCTION 148766636 FUN_148766636 body=75 status=ok
// SIG undefined FUN_148766636(void)

undefined1 FUN_148766636(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_14876679a(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1487666aa FUN_1487666aa body=59 status=ok
// SIG undefined FUN_1487666aa(void)

undefined8 FUN_1487666aa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487666f0 FUN_1487666f0 body=32 status=ok
// SIG undefined FUN_1487666f0(void)

void FUN_1487666f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_14876675e(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14876675e FUN_14876675e body=59 status=ok
// SIG undefined FUN_14876675e(void)

void FUN_14876675e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b316450;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14876679a FUN_14876679a body=79 status=ok
// SIG undefined FUN_14876679a(void)

undefined8 * FUN_14876679a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1487667ea(param_1,iVar1);
      FUN_14876685d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487667ea FUN_1487667ea body=115 status=ok
// SIG undefined FUN_1487667ea(void)

void FUN_1487667ea(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14876685d FUN_14876685d body=44 status=ok
// SIG undefined FUN_14876685d(void)

void FUN_14876685d(longlong param_1,longlong param_2,int param_3)

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


