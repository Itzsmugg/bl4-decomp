// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14869fd06 FUN_14869fd06 body=59 status=ok
// SIG undefined FUN_14869fd06(void)

undefined8 FUN_14869fd06(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14869fdd4 FUN_14869fdd4 body=63 status=ok
// SIG undefined FUN_14869fdd4(void)

undefined1 FUN_14869fdd4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14869fefc(param_2,param_3);
    param_3 = param_3 + 0x6b0;
    param_2 = param_2 + 0x6b0;
  }
  return 1;
}



// FUNCTION 14869fe3c FUN_14869fe3c body=59 status=ok
// SIG undefined FUN_14869fe3c(void)

undefined8 FUN_14869fe3c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14869fe88 FUN_14869fe88 body=38 status=ok
// SIG undefined FUN_14869fe88(void)

void FUN_14869fe88(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x6b0) == '\x01') {
    FUN_14060f31a(param_2);
    *(undefined1 *)(param_2 + 0x6b0) = 0;
  }
  return;
}



// FUNCTION 14869fefc FUN_14869fefc body=472 status=ok
// SIG undefined FUN_14869fefc(void)

longlong FUN_14869fefc(longlong param_1,longlong param_2)

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
  
  FUN_147f74370();
  uVar1 = *(undefined4 *)(param_2 + 0x304);
  uVar2 = *(undefined4 *)(param_2 + 0x308);
  uVar3 = *(undefined4 *)(param_2 + 0x30c);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  *(undefined4 *)(param_1 + 0x304) = uVar1;
  *(undefined4 *)(param_1 + 0x308) = uVar2;
  *(undefined4 *)(param_1 + 0x30c) = uVar3;
  FUN_1486a00d4(param_1 + 0x310,param_2 + 0x310);
  FUN_14094b14a(param_1 + 0x360,param_2 + 0x360);
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 0x370);
  FUN_14094b1a8(param_1 + 0x378,param_2 + 0x378);
  FUN_14094b206(param_1 + 0x388,param_2 + 0x388);
  *(undefined1 *)(param_1 + 0x3d8) = *(undefined1 *)(param_2 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3e0) = *(undefined8 *)(param_2 + 0x3e0);
  FUN_144a7bb84(param_1 + 1000,param_2 + 1000);
  FUN_144a7bb84(param_1 + 0x400,param_2 + 0x400);
  uVar12 = *(undefined8 *)(param_2 + 0x420);
  *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(param_2 + 0x418);
  *(undefined8 *)(param_1 + 0x420) = uVar12;
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x428);
  uVar1 = *(undefined4 *)(param_2 + 0x434);
  uVar2 = *(undefined4 *)(param_2 + 0x438);
  uVar3 = *(undefined4 *)(param_2 + 0x43c);
  *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_2 + 0x430);
  *(undefined4 *)(param_1 + 0x434) = uVar1;
  *(undefined4 *)(param_1 + 0x438) = uVar2;
  *(undefined4 *)(param_1 + 0x43c) = uVar3;
  *(undefined8 *)(param_1 + 0x440) = *(undefined8 *)(param_2 + 0x440);
  FUN_14123c256(param_1 + 0x448,param_2 + 0x448);
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_2 + 0x460);
  FUN_14123c256(param_1 + 0x468,param_2 + 0x468);
  uVar12 = *(undefined8 *)(param_2 + 0x488);
  *(undefined8 *)(param_1 + 0x480) = *(undefined8 *)(param_2 + 0x480);
  *(undefined8 *)(param_1 + 0x488) = uVar12;
  uVar1 = *(undefined4 *)(param_2 + 0x490);
  uVar2 = *(undefined4 *)(param_2 + 0x494);
  uVar3 = *(undefined4 *)(param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_2 + 0x48c);
  *(undefined4 *)(param_1 + 0x490) = uVar1;
  *(undefined4 *)(param_1 + 0x494) = uVar2;
  *(undefined4 *)(param_1 + 0x498) = uVar3;
  FUN_14094b14a(param_1 + 0x4a0,param_2 + 0x4a0);
  FUN_14094b14a(param_1 + 0x4b0,param_2 + 0x4b0);
  FUN_14094b2a0(param_1 + 0x4c0,param_2 + 0x4c0);
  FUN_147f74988(param_1 + 0x510,param_2 + 0x510);
  FUN_140ca9024(param_1 + 0x560,param_2 + 0x560);
  uVar1 = *(undefined4 *)(param_2 + 0x624);
  uVar2 = *(undefined4 *)(param_2 + 0x628);
  uVar3 = *(undefined4 *)(param_2 + 0x62c);
  uVar4 = *(undefined4 *)(param_2 + 0x630);
  uVar5 = *(undefined4 *)(param_2 + 0x634);
  uVar6 = *(undefined4 *)(param_2 + 0x638);
  uVar7 = *(undefined4 *)(param_2 + 0x63c);
  uVar8 = *(undefined4 *)(param_2 + 0x640);
  uVar9 = *(undefined4 *)(param_2 + 0x644);
  uVar10 = *(undefined4 *)(param_2 + 0x648);
  uVar11 = *(undefined4 *)(param_2 + 0x64c);
  *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(param_2 + 0x620);
  *(undefined4 *)(param_1 + 0x624) = uVar1;
  *(undefined4 *)(param_1 + 0x628) = uVar2;
  *(undefined4 *)(param_1 + 0x62c) = uVar3;
  *(undefined4 *)(param_1 + 0x630) = uVar4;
  *(undefined4 *)(param_1 + 0x634) = uVar5;
  *(undefined4 *)(param_1 + 0x638) = uVar6;
  *(undefined4 *)(param_1 + 0x63c) = uVar7;
  *(undefined4 *)(param_1 + 0x640) = uVar8;
  *(undefined4 *)(param_1 + 0x644) = uVar9;
  *(undefined4 *)(param_1 + 0x648) = uVar10;
  *(undefined4 *)(param_1 + 0x64c) = uVar11;
  *(undefined8 *)(param_1 + 0x64d) = *(undefined8 *)(param_2 + 0x64d);
  FUN_140d188f2(param_1 + 0x658,param_2 + 0x658);
  return param_1;
}



// FUNCTION 1486a00d4 FUN_1486a00d4 body=122 status=ok
// SIG undefined FUN_1486a00d4(void)

longlong FUN_1486a00d4(longlong param_1,longlong param_2)

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
    FUN_1486a014e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1486a014e FUN_1486a014e body=219 status=ok
// SIG undefined FUN_1486a014e(void)

longlong * FUN_1486a014e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14060fa72(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar5);
          *(longlong *)(lVar4 + 8 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x10 + lVar5) = *(undefined8 *)(lVar2 + 0x10 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1486a024c FUN_1486a024c body=75 status=ok
// SIG undefined FUN_1486a024c(void)

undefined8 FUN_1486a024c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_144a7bb84();
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486a02c0 FUN_1486a02c0 body=59 status=ok
// SIG undefined FUN_1486a02c0(void)

undefined8 FUN_1486a02c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a0382 FUN_1486a0382 body=54 status=ok
// SIG undefined FUN_1486a0382(void)

undefined1 FUN_1486a0382(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a049a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1486a03e0 FUN_1486a03e0 body=59 status=ok
// SIG undefined FUN_1486a03e0(void)

undefined8 FUN_1486a03e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a0426 FUN_1486a0426 body=37 status=ok
// SIG undefined FUN_1486a0426(void)

void FUN_1486a0426(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1486a049a FUN_1486a049a body=79 status=ok
// SIG undefined FUN_1486a049a(void)

undefined8 * FUN_1486a049a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_145759a66(param_1,iVar1);
      FUN_14094c91b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486a054e FUN_1486a054e body=107 status=ok
// SIG undefined FUN_1486a054e(void)

undefined8 FUN_1486a054e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 0x18 + lVar3;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      *(undefined8 *)(lVar2 + -0x10) = puVar1[1];
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(puVar1 + 2);
      FUN_144a7bb84();
      FUN_144a82394(param_2 + lVar3 + 0x30,param_3 + lVar3 + 0x30);
      lVar3 = lVar3 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486a05e2 FUN_1486a05e2 body=59 status=ok
// SIG undefined FUN_1486a05e2(void)

undefined8 FUN_1486a05e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a0628 FUN_1486a0628 body=51 status=ok
// SIG undefined FUN_1486a0628(void)

void FUN_1486a0628(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if ((*(longlong *)(param_2 + 0x30) != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x50));
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1486a06e4 FUN_1486a06e4 body=54 status=ok
// SIG undefined FUN_1486a06e4(void)

undefined1 FUN_1486a06e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a07fe(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1486a0742 FUN_1486a0742 body=59 status=ok
// SIG undefined FUN_1486a0742(void)

undefined8 FUN_1486a0742(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a0788 FUN_1486a0788 body=51 status=ok
// SIG undefined FUN_1486a0788(void)

void FUN_1486a0788(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    if ((*(longlong *)(param_2 + 0x68) != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x50));
    }
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1486a07fe FUN_1486a07fe body=151 status=ok
// SIG undefined FUN_1486a07fe(void)

undefined8 * FUN_1486a07fe(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  if ((param_1[1] != param_2[1]) || (*(int *)(param_1 + 2) != *(int *)(param_2 + 2))) {
    param_1[1] = param_2[1];
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    param_1[3] = 0;
  }
  if ((param_1[4] != param_2[4]) || (*(int *)(param_1 + 5) != *(int *)(param_2 + 5))) {
    param_1[4] = param_2[4];
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    param_1[6] = 0;
  }
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  FUN_144a7bb84(param_1 + 10,param_2 + 10);
  FUN_144a82394(param_1 + 0xd,param_2 + 0xd);
  return param_1;
}



// FUNCTION 1486a08b4 FUN_1486a08b4 body=54 status=ok
// SIG undefined FUN_1486a08b4(void)

undefined1 FUN_1486a08b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14094b1a8(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1486a0912 FUN_1486a0912 body=59 status=ok
// SIG undefined FUN_1486a0912(void)

undefined8 FUN_1486a0912(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a09a4 FUN_1486a09a4 body=48 status=ok
// SIG undefined FUN_1486a09a4(void)

void FUN_1486a09a4(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_14060f567(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1486a0a5a FUN_1486a0a5a body=63 status=ok
// SIG undefined FUN_1486a0a5a(void)

undefined1 FUN_1486a0a5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140ca9024(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 1486a0ac2 FUN_1486a0ac2 body=59 status=ok
// SIG undefined FUN_1486a0ac2(void)

undefined8 FUN_1486a0ac2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a0b5a FUN_1486a0b5a body=73 status=ok
// SIG undefined FUN_1486a0b5a(void)

void FUN_1486a0b5a(longlong param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0xffffffffffffffff;
    if ((*(longlong *)(param_1 + 0x60) != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x50));
    }
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 1486a0bdc FUN_1486a0bdc body=128 status=ok
// SIG undefined FUN_1486a0bdc(void)

undefined8 FUN_1486a0bdc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + lVar6) = *(undefined8 *)(param_3 + lVar6);
      FUN_144a7bb84();
      lVar1 = param_3 + lVar6;
      lVar2 = param_2 + lVar6;
      FUN_144a7bb84(lVar2 + 0x20,lVar1 + 0x20);
      uVar3 = *(undefined4 *)(lVar1 + 0x3c);
      uVar4 = *(undefined4 *)(lVar1 + 0x40);
      uVar5 = *(undefined4 *)(lVar1 + 0x44);
      *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x3c) = uVar3;
      *(undefined4 *)(lVar2 + 0x40) = uVar4;
      *(undefined4 *)(lVar2 + 0x44) = uVar5;
      *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(lVar1 + 0x48);
      lVar6 = lVar6 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486a0c84 FUN_1486a0c84 body=59 status=ok
// SIG undefined FUN_1486a0c84(void)

undefined8 FUN_1486a0c84(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a0d38 FUN_1486a0d38 body=63 status=ok
// SIG undefined FUN_1486a0d38(void)

undefined1 FUN_1486a0d38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a0e54(param_2,param_3);
    param_3 = param_3 + 0x2e0;
    param_2 = param_2 + 0x2e0;
  }
  return 1;
}



// FUNCTION 1486a0da0 FUN_1486a0da0 body=59 status=ok
// SIG undefined FUN_1486a0da0(void)

undefined8 FUN_1486a0da0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a0dec FUN_1486a0dec body=38 status=ok
// SIG undefined FUN_1486a0dec(void)

void FUN_1486a0dec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2e0) == '\x01') {
    FUN_1407f60da(param_2);
    *(undefined1 *)(param_2 + 0x2e0) = 0;
  }
  return;
}



// FUNCTION 1486a0e54 FUN_1486a0e54 body=313 status=ok
// SIG undefined FUN_1486a0e54(void)

longlong FUN_1486a0e54(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_147f75384();
  FUN_14094b14a(param_1 + 0x148,param_2 + 0x148);
  FUN_14094b1a8(param_1 + 0x158,param_2 + 0x158);
  FUN_14094b206(param_1 + 0x168,param_2 + 0x168);
  *(undefined1 *)(param_1 + 0x1b8) = *(undefined1 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  FUN_144a7bb84(param_1 + 0x1c8,param_2 + 0x1c8);
  FUN_144a7bb84(param_1 + 0x1e0,param_2 + 0x1e0);
  uVar4 = *(undefined8 *)(param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined8 *)(param_1 + 0x200) = uVar4;
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  uVar1 = *(undefined4 *)(param_2 + 0x214);
  uVar2 = *(undefined4 *)(param_2 + 0x218);
  uVar3 = *(undefined4 *)(param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x214) = uVar1;
  *(undefined4 *)(param_1 + 0x218) = uVar2;
  *(undefined4 *)(param_1 + 0x21c) = uVar3;
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  FUN_14123c256(param_1 + 0x228,param_2 + 0x228);
  uVar1 = *(undefined4 *)(param_2 + 0x244);
  uVar2 = *(undefined4 *)(param_2 + 0x248);
  uVar3 = *(undefined4 *)(param_2 + 0x24c);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
  *(undefined4 *)(param_1 + 0x244) = uVar1;
  *(undefined4 *)(param_1 + 0x248) = uVar2;
  *(undefined4 *)(param_1 + 0x24c) = uVar3;
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
  FUN_14094b2a0(param_1 + 600,param_2 + 600);
  FUN_14094b14a(param_1 + 0x2a8,param_2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_2 + 0x2b8);
  *(undefined1 *)(param_1 + 0x2c0) = *(undefined1 *)(param_2 + 0x2c0);
  FUN_14123c256(param_1 + 0x2c8,param_2 + 0x2c8);
  return param_1;
}



// FUNCTION 1486a0f8e FUN_1486a0f8e body=125 status=ok
// SIG undefined FUN_1486a0f8e(void)

void FUN_1486a0f8e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb40);
  FUN_140b1ac70(param_2);
  *param_2 = &PTR_FUN_14b0e7650;
  param_2[0x161] = 0;
  *(undefined4 *)(param_2 + 0x162) = 0;
  param_2[0x15a] = 0;
  param_2[0x15b] = 0;
  param_2[0x15c] = 0;
  param_2[0x15d] = 0;
  param_2[0x15e] = 0;
  *(undefined8 *)((longlong)param_2 + 0xb14) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xb1c) = 0;
  param_2[0x165] = 0;
  *(undefined4 *)(param_2 + 0x166) = 0;
  return;
}



// FUNCTION 1486a100c FUN_1486a100c body=107 status=ok
// SIG undefined FUN_1486a100c(void)

void FUN_1486a100c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140b1ac70(param_2);
  *param_2 = &PTR_FUN_14b0e7650;
  param_2[0x161] = 0;
  *(undefined4 *)(param_2 + 0x162) = 0;
  param_2[0x15a] = 0;
  param_2[0x15b] = 0;
  param_2[0x15c] = 0;
  param_2[0x15d] = 0;
  param_2[0x15e] = 0;
  *(undefined8 *)((longlong)param_2 + 0xb14) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xb1c) = 0;
  param_2[0x165] = 0;
  *(undefined4 *)(param_2 + 0x166) = 0;
  return;
}



// FUNCTION 1486a109c FUN_1486a109c body=63 status=ok
// SIG undefined FUN_1486a109c(void)

undefined1 FUN_1486a109c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141852950(param_2,param_3);
    param_3 = param_3 + 0xb40;
    param_2 = param_2 + 0xb40;
  }
  return 1;
}



// FUNCTION 1486a1104 FUN_1486a1104 body=59 status=ok
// SIG undefined FUN_1486a1104(void)

undefined8 FUN_1486a1104(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a1150 FUN_1486a1150 body=38 status=ok
// SIG undefined FUN_1486a1150(void)

void FUN_1486a1150(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb40) == '\x01') {
    FUN_140998e52(param_2);
    *(undefined1 *)(param_2 + 0xb40) = 0;
  }
  return;
}



// FUNCTION 1486a11ca FUN_1486a11ca body=338 status=ok
// SIG undefined FUN_1486a11ca(void)

void FUN_1486a11ca(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_44 = CONCAT31(uStack_44._1_3_,1);
  uStack_40 = 0;
  uStack_3c = uStack_3c & 0xffffff00;
  local_38 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = uStack_20 & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  local_88 = local_48;
  uStack_84 = uStack_44;
  uStack_80 = uStack_40;
  uStack_7c = uStack_3c;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  FUN_1487dd82c(local_18);
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a1324 FUN_1486a1324 body=349 status=ok
// SIG undefined FUN_1486a1324(void)

void FUN_1486a1324(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [43];
  undefined1 local_2d;
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
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_2d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  puVar2 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_2d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143cbb52a(local_28,puVar2,puVar3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a14b0 FUN_1486a14b0 body=217 status=ok
// SIG undefined FUN_1486a14b0(void)

undefined8 * FUN_1486a14b0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_14001cc68(0xeb8);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b157b20;
  plVar1 = plVar3 + 2;
  memset(plVar1,0,0xea8);
  FUN_14610f272(plVar1);
  local_38 = plVar1;
  local_30 = plVar3;
  FUN_1486a7a58(&local_38,plVar1);
  plVar1 = local_30;
  *param_1 = local_38;
  param_1[1] = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a15ac FUN_1486a15ac body=1067 status=ok
// SIG undefined FUN_1486a15ac(void)

void FUN_1486a15ac(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a0 [12];
  undefined8 local_140 [9];
  undefined1 local_f1;
  undefined8 local_f0;
  int local_e8;
  int local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined2 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98[0] = 0;
  local_98._4_8_ = 0;
  local_88 = 0;
  local_80 = DAT_14c8464f8;
  uStack_78 = DAT_14c846500;
  local_70 = DAT_14c846508;
  local_68 = 0;
  local_64 = 0;
  local_58 = 0;
  local_50 = (undefined4)DAT_14c8464e0;
  uStack_4c = DAT_14c8464e0._4_4_;
  uStack_48 = (undefined4)DAT_14c8464e8;
  uStack_44 = DAT_14c8464e8._4_4_;
  local_40 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_e0._0_4_ = 0;
  local_e0._4_1_ = 0;
  local_d8 = 0xbf80000000000000;
  local_d0 = 0xc4750000;
  local_cc = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_e4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e4);
  }
  iVar2 = local_e4;
  local_e8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  iVar1 = local_e8;
  local_f0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  local_f1 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f1);
  }
  local_1b8 = local_f0;
  local_1b0 = local_f1;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_e0;
  puVar5 = local_140;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined8 *)local_98;
  puVar5 = local_1a0;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_1c0 = iVar1 != 0;
  local_1c8 = iVar2 != 0;
  FUN_143d93c44(local_30,local_38);
  if ((local_28 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a19e4 FUN_1486a19e4 body=853 status=ok
// SIG undefined FUN_1486a19e4(void)

void FUN_1486a19e4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_d8 [9];
  undefined1 local_89;
  undefined8 local_88;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_70._0_4_ = 0;
  local_70._4_1_ = 0;
  local_68 = 0xbf80000000000000;
  local_60 = 0xc4750000;
  local_5c = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  iVar2 = local_78;
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar1 = local_7c;
  local_88 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_89 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  uVar3 = local_74;
  local_f0 = local_88;
  local_e8 = local_89;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = &local_70;
  puVar6 = local_d8;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_f8 = iVar1 != 0;
  FUN_143d93ee2(local_28,local_d8,uVar3,iVar2 != 0);
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a1d56 FUN_1486a1d56 body=861 status=ok
// SIG undefined FUN_1486a1d56(void)

void FUN_1486a1d56(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8 [9];
  undefined1 local_99;
  undefined8 local_98;
  int local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_88._0_4_ = 0;
  local_88._4_1_ = 0;
  local_80 = 0xbf80000000000000;
  local_78 = 0xc4750000;
  local_74 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_8c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  iVar2 = local_8c;
  local_90 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  iVar1 = local_90;
  local_98 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_99 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  local_120 = local_98;
  local_118 = local_99;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_88;
  puVar5 = local_e8;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_f8 = local_30;
  local_108 = local_40;
  uStack_104 = uStack_3c;
  uStack_100 = uStack_38;
  uStack_fc = uStack_34;
  local_128 = iVar1 != 0;
  FUN_143d93d9c(local_28,&local_108,local_e8,iVar2 != 0);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a20ba FUN_1486a20ba body=435 status=ok
// SIG undefined FUN_1486a20ba(void)

void FUN_1486a20ba(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
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
  local_30 = 0x4000;
  local_28 = 0;
  FUN_1446ef920();
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
  local_41 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = local_30;
  local_50 = 0;
  FUN_143d938d8(local_20,&local_60,local_40,local_41);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a227e FUN_1486a227e body=1067 status=ok
// SIG undefined FUN_1486a227e(void)

void FUN_1486a227e(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a0 [12];
  undefined8 local_140 [9];
  undefined1 local_f1;
  undefined8 local_f0;
  int local_e8;
  int local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined2 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98[0] = 0;
  local_98._4_8_ = 0;
  local_88 = 0;
  local_80 = DAT_14c8464f8;
  uStack_78 = DAT_14c846500;
  local_70 = DAT_14c846508;
  local_68 = 0;
  local_64 = 0;
  local_58 = 0;
  local_50 = (undefined4)DAT_14c8464e0;
  uStack_4c = DAT_14c8464e0._4_4_;
  uStack_48 = (undefined4)DAT_14c8464e8;
  uStack_44 = DAT_14c8464e8._4_4_;
  local_40 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_e0._0_4_ = 0;
  local_e0._4_1_ = 0;
  local_d8 = 0xbf80000000000000;
  local_d0 = 0xc4750000;
  local_cc = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_e4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e4);
  }
  iVar2 = local_e4;
  local_e8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  iVar1 = local_e8;
  local_f0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  local_f1 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f1);
  }
  local_1b8 = local_f0;
  local_1b0 = local_f1;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_e0;
  puVar5 = local_140;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined8 *)local_98;
  puVar5 = local_1a0;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_1c0 = iVar1 != 0;
  local_1c8 = iVar2 != 0;
  FUN_143d939b2(local_30,local_38);
  if ((local_28 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a26b6 FUN_1486a26b6 body=853 status=ok
// SIG undefined FUN_1486a26b6(void)

void FUN_1486a26b6(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_d8 [9];
  undefined1 local_89;
  undefined8 local_88;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_70._0_4_ = 0;
  local_70._4_1_ = 0;
  local_68 = 0xbf80000000000000;
  local_60 = 0xc4750000;
  local_5c = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  iVar2 = local_78;
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar1 = local_7c;
  local_88 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_89 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  uVar3 = local_74;
  local_f0 = local_88;
  local_e8 = local_89;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = &local_70;
  puVar6 = local_d8;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_f8 = iVar1 != 0;
  FUN_143d93b0a(local_28,local_d8,uVar3,iVar2 != 0);
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a2a28 FUN_1486a2a28 body=317 status=ok
// SIG undefined FUN_1486a2a28(void)

void FUN_1486a2a28(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  FUN_143d93380(local_18,local_20,local_21);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a2b6c FUN_1486a2b6c body=398 status=ok
// SIG undefined FUN_1486a2b6c(void)

void FUN_1486a2b6c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14141f3b4(&local_40,local_20,local_28,local_29);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a2cfc FUN_1486a2cfc body=435 status=ok
// SIG undefined FUN_1486a2cfc(void)

void FUN_1486a2cfc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
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
  local_30 = 0x4000;
  local_28 = 0;
  FUN_1446ef920();
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
  local_41 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = local_30;
  local_50 = 0;
  FUN_143d93432(local_20,&local_60,local_40,local_41);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a2eb0 FUN_1486a2eb0 body=317 status=ok
// SIG undefined FUN_1486a2eb0(void)

void FUN_1486a2eb0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  FUN_143d932ca(local_18,local_20,local_21);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a2ffe FUN_1486a2ffe body=1067 status=ok
// SIG undefined FUN_1486a2ffe(void)

void FUN_1486a2ffe(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a0 [12];
  undefined8 local_140 [9];
  undefined1 local_f1;
  undefined8 local_f0;
  int local_e8;
  int local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined2 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98[0] = 0;
  local_98._4_8_ = 0;
  local_88 = 0;
  local_80 = DAT_14c8464f8;
  uStack_78 = DAT_14c846500;
  local_70 = DAT_14c846508;
  local_68 = 0;
  local_64 = 0;
  local_58 = 0;
  local_50 = (undefined4)DAT_14c8464e0;
  uStack_4c = DAT_14c8464e0._4_4_;
  uStack_48 = (undefined4)DAT_14c8464e8;
  uStack_44 = DAT_14c8464e8._4_4_;
  local_40 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_e0._0_4_ = 0;
  local_e0._4_1_ = 0;
  local_d8 = 0xbf80000000000000;
  local_d0 = 0xc4750000;
  local_cc = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_e4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e4);
  }
  iVar2 = local_e4;
  local_e8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  iVar1 = local_e8;
  local_f0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  local_f1 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f1);
  }
  local_1b8 = local_f0;
  local_1b0 = local_f1;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_e0;
  puVar5 = local_140;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined8 *)local_98;
  puVar5 = local_1a0;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_1c0 = iVar1 != 0;
  local_1c8 = iVar2 != 0;
  FUN_143d9350a(local_30,local_38);
  if ((local_28 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a3436 FUN_1486a3436 body=853 status=ok
// SIG undefined FUN_1486a3436(void)

void FUN_1486a3436(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_d8 [9];
  undefined1 local_89;
  undefined8 local_88;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_70._0_4_ = 0;
  local_70._4_1_ = 0;
  local_68 = 0xbf80000000000000;
  local_60 = 0xc4750000;
  local_5c = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  iVar2 = local_78;
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar1 = local_7c;
  local_88 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_89 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  uVar3 = local_74;
  local_f0 = local_88;
  local_e8 = local_89;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = &local_70;
  puVar6 = local_d8;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_f8 = iVar1 != 0;
  FUN_143d937a2(local_28,local_d8,uVar3,iVar2 != 0);
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a37a8 FUN_1486a37a8 body=861 status=ok
// SIG undefined FUN_1486a37a8(void)

void FUN_1486a37a8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8 [9];
  undefined1 local_99;
  undefined8 local_98;
  int local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_88._0_4_ = 0;
  local_88._4_1_ = 0;
  local_80 = 0xbf80000000000000;
  local_78 = 0xc4750000;
  local_74 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_8c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  iVar2 = local_8c;
  local_90 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  iVar1 = local_90;
  local_98 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_99 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  local_120 = local_98;
  local_118 = local_99;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_88;
  puVar5 = local_e8;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_f8 = local_30;
  local_108 = local_40;
  uStack_104 = uStack_3c;
  uStack_100 = uStack_38;
  uStack_fc = uStack_34;
  local_128 = iVar1 != 0;
  FUN_143d9365e(local_28,&local_108,local_e8,iVar2 != 0);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a3b0c FUN_1486a3b0c body=493 status=ok
// SIG undefined FUN_1486a3b0c(void)

void FUN_1486a3b0c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_40;
  FUN_143d940f4(local_20,iVar1 != 0,local_30,local_31);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a3cfa FUN_1486a3cfa body=435 status=ok
// SIG undefined FUN_1486a3cfa(void)

void FUN_1486a3cfa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
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
  local_30 = 0x4000;
  local_28 = 0;
  FUN_1446ef920();
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
  local_41 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = local_30;
  local_50 = 0;
  FUN_143d9401c(local_20,&local_60,local_40,local_41);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a3ebe FUN_1486a3ebe body=1067 status=ok
// SIG undefined FUN_1486a3ebe(void)

void FUN_1486a3ebe(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a0 [12];
  undefined8 local_140 [9];
  undefined1 local_f1;
  undefined8 local_f0;
  int local_e8;
  int local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined2 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98[0] = 0;
  local_98._4_8_ = 0;
  local_88 = 0;
  local_80 = DAT_14c8464f8;
  uStack_78 = DAT_14c846500;
  local_70 = DAT_14c846508;
  local_68 = 0;
  local_64 = 0;
  local_58 = 0;
  local_50 = (undefined4)DAT_14c8464e0;
  uStack_4c = DAT_14c8464e0._4_4_;
  uStack_48 = (undefined4)DAT_14c8464e8;
  uStack_44 = DAT_14c8464e8._4_4_;
  local_40 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_e0._0_4_ = 0;
  local_e0._4_1_ = 0;
  local_d8 = 0xbf80000000000000;
  local_d0 = 0xc4750000;
  local_cc = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_e4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e4);
  }
  iVar2 = local_e4;
  local_e8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  iVar1 = local_e8;
  local_f0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  local_f1 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f1);
  }
  local_1b8 = local_f0;
  local_1b0 = local_f1;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_e0;
  puVar5 = local_140;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined8 *)local_98;
  puVar5 = local_1a0;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_1c0 = iVar1 != 0;
  local_1c8 = iVar2 != 0;
  FUN_143d9430e(local_30,local_38);
  if ((local_28 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a42f6 FUN_1486a42f6 body=853 status=ok
// SIG undefined FUN_1486a42f6(void)

void FUN_1486a42f6(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_d8 [9];
  undefined1 local_89;
  undefined8 local_88;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_70._0_4_ = 0;
  local_70._4_1_ = 0;
  local_68 = 0xbf80000000000000;
  local_60 = 0xc4750000;
  local_5c = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  iVar2 = local_78;
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar1 = local_7c;
  local_88 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_89 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  uVar3 = local_74;
  local_f0 = local_88;
  local_e8 = local_89;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = &local_70;
  puVar6 = local_d8;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_f8 = iVar1 != 0;
  FUN_143d9459e(local_28,local_d8,uVar3,iVar2 != 0);
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a465c FUN_1486a465c body=969 status=ok
// SIG undefined FUN_1486a465c(void)

void FUN_1486a465c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190 [12];
  undefined8 local_130 [9];
  undefined1 local_e1;
  undefined8 local_e0;
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined2 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88[0] = 0;
  local_88._4_8_ = 0;
  local_78 = 0;
  local_70 = DAT_14c8464f8;
  uStack_68 = DAT_14c846500;
  local_60 = DAT_14c846508;
  local_58 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = (undefined4)DAT_14c8464e0;
  uStack_3c = DAT_14c8464e0._4_4_;
  uStack_38 = (undefined4)DAT_14c8464e8;
  uStack_34 = DAT_14c8464e8._4_4_;
  local_30 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_d0._0_4_ = 0;
  local_d0._4_1_ = 0;
  local_c8 = 0xbf80000000000000;
  local_c0 = 0xc4750000;
  local_bc = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_d4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d4);
  }
  iVar2 = local_d4;
  local_d8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  iVar1 = local_d8;
  local_e0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_e1 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e1);
  }
  local_1a0 = local_e0;
  local_198 = local_e1;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_d0;
  puVar5 = local_130;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined8 *)local_88;
  puVar5 = local_190;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_1a8 = iVar1 != 0;
  FUN_143d941ca(local_28,local_190,local_130,iVar2 != 0);
  if ((local_20 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a4a32 FUN_1486a4a32 body=861 status=ok
// SIG undefined FUN_1486a4a32(void)

void FUN_1486a4a32(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8 [9];
  undefined1 local_99;
  undefined8 local_98;
  int local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_88._0_4_ = 0;
  local_88._4_1_ = 0;
  local_80 = 0xbf80000000000000;
  local_78 = 0xc4750000;
  local_74 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_8c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  iVar2 = local_8c;
  local_90 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  iVar1 = local_90;
  local_98 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_99 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  local_120 = local_98;
  local_118 = local_99;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_88;
  puVar5 = local_e8;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_f8 = local_30;
  local_108 = local_40;
  uStack_104 = uStack_3c;
  uStack_100 = uStack_38;
  uStack_fc = uStack_34;
  local_128 = iVar1 != 0;
  FUN_143d9445c(local_28,&local_108,local_e8,iVar2 != 0);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a4d90 FUN_1486a4d90 body=148 status=ok
// SIG undefined FUN_1486a4d90(void)

void FUN_1486a4d90(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488be830(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a4e26 FUN_1486a4e26 body=148 status=ok
// SIG undefined FUN_1486a4e26(void)

void FUN_1486a4e26(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488be82e(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a4f14 FUN_1486a4f14 body=98 status=ok
// SIG undefined FUN_1486a4f14(void)

undefined8 FUN_1486a4f14(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_141818ba6(lVar2,puVar1 + 1);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(puVar1 + 4);
      lVar3 = lVar3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486a4f9e FUN_1486a4f9e body=59 status=ok
// SIG undefined FUN_1486a4f9e(void)

undefined8 FUN_1486a4f9e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a510a FUN_1486a510a body=105 status=ok
// SIG undefined FUN_1486a510a(void)

undefined8 FUN_1486a510a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1447715ec(param_2,param_3);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486a519c FUN_1486a519c body=59 status=ok
// SIG undefined FUN_1486a519c(void)

undefined8 FUN_1486a519c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a51e2 FUN_1486a51e2 body=58 status=ok
// SIG undefined FUN_1486a51e2(void)

void FUN_1486a51e2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b156050;
    if (param_2[0xc] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 1486a526a FUN_1486a526a body=67 status=ok
// SIG undefined FUN_1486a526a(void)

undefined8 * FUN_1486a526a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b156050;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486a52ae FUN_1486a52ae body=55 status=ok
// SIG undefined FUN_1486a52ae(void)

void FUN_1486a52ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e240 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e240 = FUN_140002ddd(FUN_1464e01e3,uVar1,L"GbxAudioNodeAspectSettings_FactValue");
  }
  return;
}



// FUNCTION 1486a538a FUN_1486a538a body=63 status=ok
// SIG undefined FUN_1486a538a(void)

undefined1 FUN_1486a538a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a5548(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 1486a53f2 FUN_1486a53f2 body=59 status=ok
// SIG undefined FUN_1486a53f2(void)

undefined8 FUN_1486a53f2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a543e FUN_1486a543e body=64 status=ok
// SIG undefined FUN_1486a543e(void)

void FUN_1486a543e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14b156240;
    if (param_2[0xf] != 0) {
      FUN_1400020a8();
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 1486a54cc FUN_1486a54cc body=67 status=ok
// SIG undefined FUN_1486a54cc(void)

undefined8 * FUN_1486a54cc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b156240;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486a5510 FUN_1486a5510 body=55 status=ok
// SIG undefined FUN_1486a5510(void)

void FUN_1486a5510(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e258 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e258 = FUN_140002ddd(FUN_1464e0279,uVar1,L"GbxAudioNodeAspectState_FactValue");
  }
  return;
}



// FUNCTION 1486a5548 FUN_1486a5548 body=101 status=ok
// SIG undefined FUN_1486a5548(void)

longlong FUN_1486a5548(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  FUN_1447715ec(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 1486a55ae FUN_1486a55ae body=95 status=ok
// SIG undefined FUN_1486a55ae(void)

void FUN_1486a55ae(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14b156430;
  FUN_144928b90(param_2 + 7,0);
  param_2[0xe] = 0;
  return;
}



// FUNCTION 1486a560e FUN_1486a560e body=75 status=ok
// SIG undefined FUN_1486a560e(void)

void FUN_1486a560e(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14b156430;
  FUN_144928b90(param_2 + 7,0);
  param_2[0xe] = 0;
  return;
}



// FUNCTION 1486a569e FUN_1486a569e body=113 status=ok
// SIG undefined FUN_1486a569e(void)

undefined8 FUN_1486a569e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1447715ec(param_2,param_3);
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
      param_3 = param_3 + 0x78;
      param_2 = param_2 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486a5738 FUN_1486a5738 body=59 status=ok
// SIG undefined FUN_1486a5738(void)

undefined8 FUN_1486a5738(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a577e FUN_1486a577e body=58 status=ok
// SIG undefined FUN_1486a577e(void)

void FUN_1486a577e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14b156430;
    if (param_2[0xc] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 1486a5806 FUN_1486a5806 body=67 status=ok
// SIG undefined FUN_1486a5806(void)

undefined8 * FUN_1486a5806(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b156430;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486a584a FUN_1486a584a body=55 status=ok
// SIG undefined FUN_1486a584a(void)

void FUN_1486a584a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e270 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e270 = FUN_140002ddd(FUN_1464e030f,uVar1,L"GbxAudioNodeAspectSettings_SetFact");
  }
  return;
}



// FUNCTION 1486a5882 FUN_1486a5882 body=106 status=ok
// SIG undefined FUN_1486a5882(void)

void FUN_1486a5882(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[0x11] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *param_2 = &PTR_FUN_14b156620;
  FUN_144928b90(param_2 + 10,0);
  param_2[0x11] = 0;
  return;
}



// FUNCTION 1486a58ec FUN_1486a58ec body=79 status=ok
// SIG undefined FUN_1486a58ec(void)

void FUN_1486a58ec(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *param_2 = &PTR_FUN_14b156620;
  FUN_144928b90(param_2 + 10,0);
  param_2[0x11] = 0;
  return;
}



// FUNCTION 1486a5960 FUN_1486a5960 body=63 status=ok
// SIG undefined FUN_1486a5960(void)

undefined1 FUN_1486a5960(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a5b1e(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 1486a59c8 FUN_1486a59c8 body=59 status=ok
// SIG undefined FUN_1486a59c8(void)

undefined8 FUN_1486a59c8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a5a14 FUN_1486a5a14 body=64 status=ok
// SIG undefined FUN_1486a5a14(void)

void FUN_1486a5a14(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14b156620;
    if (param_2[0xf] != 0) {
      FUN_1400020a8();
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 1486a5aa2 FUN_1486a5aa2 body=67 status=ok
// SIG undefined FUN_1486a5aa2(void)

undefined8 * FUN_1486a5aa2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b156620;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486a5ae6 FUN_1486a5ae6 body=55 status=ok
// SIG undefined FUN_1486a5ae6(void)

void FUN_1486a5ae6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e288 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e288 = FUN_140002ddd(FUN_1464e03a5,uVar1,L"GbxAudioNodeAspectState_SetFact");
  }
  return;
}



// FUNCTION 1486a5b1e FUN_1486a5b1e body=112 status=ok
// SIG undefined FUN_1486a5b1e(void)

longlong FUN_1486a5b1e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  FUN_1447715ec(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  return param_1;
}



// FUNCTION 1486a5c5a FUN_1486a5c5a body=105 status=ok
// SIG undefined FUN_1486a5c5a(void)

undefined8 FUN_1486a5c5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1447715ec(param_2,param_3);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486a5cec FUN_1486a5cec body=59 status=ok
// SIG undefined FUN_1486a5cec(void)

undefined8 FUN_1486a5cec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a5d32 FUN_1486a5d32 body=58 status=ok
// SIG undefined FUN_1486a5d32(void)

void FUN_1486a5d32(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b156810;
    if (param_2[0xc] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 1486a5dba FUN_1486a5dba body=67 status=ok
// SIG undefined FUN_1486a5dba(void)

undefined8 * FUN_1486a5dba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b156810;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486a5dfe FUN_1486a5dfe body=55 status=ok
// SIG undefined FUN_1486a5dfe(void)

void FUN_1486a5dfe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e2a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e2a0 = FUN_140002ddd(FUN_1464e043b,uVar1,L"GbxAudioNodeAspectSettings_PrintFactValue");
  }
  return;
}



// FUNCTION 1486a5eda FUN_1486a5eda body=63 status=ok
// SIG undefined FUN_1486a5eda(void)

undefined1 FUN_1486a5eda(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a6098(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 1486a5f42 FUN_1486a5f42 body=59 status=ok
// SIG undefined FUN_1486a5f42(void)

undefined8 FUN_1486a5f42(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a5f8e FUN_1486a5f8e body=64 status=ok
// SIG undefined FUN_1486a5f8e(void)

void FUN_1486a5f8e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14b156a00;
    if (param_2[0xf] != 0) {
      FUN_1400020a8();
    }
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 1486a601c FUN_1486a601c body=67 status=ok
// SIG undefined FUN_1486a601c(void)

undefined8 * FUN_1486a601c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b156a00;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486a6060 FUN_1486a6060 body=55 status=ok
// SIG undefined FUN_1486a6060(void)

void FUN_1486a6060(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e2b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e2b8 = FUN_140002ddd(FUN_1464e04d1,uVar1,L"GbxAudioNodeAspectState_PrintFactValue");
  }
  return;
}



// FUNCTION 1486a6098 FUN_1486a6098 body=101 status=ok
// SIG undefined FUN_1486a6098(void)

longlong FUN_1486a6098(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  FUN_1447715ec(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 1486a618c FUN_1486a618c body=91 status=ok
// SIG undefined FUN_1486a618c(void)

undefined1 FUN_1486a618c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      FUN_1400fce78(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486a6210 FUN_1486a6210 body=59 status=ok
// SIG undefined FUN_1486a6210(void)

undefined8 FUN_1486a6210(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a6256 FUN_1486a6256 body=34 status=ok
// SIG undefined FUN_1486a6256(void)

void FUN_1486a6256(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_145b27d9a(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1486a62ca FUN_1486a62ca body=127 status=ok
// SIG undefined FUN_1486a62ca(void)

void FUN_1486a62ca(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x160);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *param_2 = &PTR_FUN_14b156e30;
  FUN_140d7ec9e(param_2 + 0x2f);
  param_2[0x31] = 0;
  *(undefined4 *)(param_2 + 0x32) = 0;
  return;
}



// FUNCTION 1486a634a FUN_1486a634a body=117 status=ok
// SIG undefined FUN_1486a634a(void)

void FUN_1486a634a(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *param_2 = &PTR_FUN_14b156e30;
  FUN_140d7ec9e(param_2 + 0x2f);
  param_2[0x31] = 0;
  *(undefined4 *)(param_2 + 0x32) = 0;
  return;
}



// FUNCTION 1486a63e4 FUN_1486a63e4 body=108 status=ok
// SIG undefined FUN_1486a63e4(void)

undefined1 FUN_1486a63e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6f99c(param_2,param_3);
    FUN_1459855b4(param_2 + 0x178,param_3 + 0x178);
    FUN_14009d848(param_2 + 0x188,param_3 + 0x188);
    param_2 = param_2 + 0x198;
    param_3 = param_3 + 0x198;
  }
  return 1;
}



// FUNCTION 1486a6478 FUN_1486a6478 body=59 status=ok
// SIG undefined FUN_1486a6478(void)

undefined8 FUN_1486a6478(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a64c4 FUN_1486a64c4 body=40 status=ok
// SIG undefined FUN_1486a64c4(void)

void FUN_1486a64c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x198) == '\x01') {
    FUN_1486a6598(param_2);
    *(undefined1 *)(param_2 + 0x198) = 0;
  }
  return;
}



// FUNCTION 1486a653a FUN_1486a653a body=38 status=ok
// SIG undefined FUN_1486a653a(void)

undefined8 FUN_1486a653a(undefined8 param_1,int param_2)

{
  FUN_1486a6598();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486a6560 FUN_1486a6560 body=55 status=ok
// SIG undefined FUN_1486a6560(void)

void FUN_1486a6560(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e2e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e2e8 = FUN_140002ddd(FUN_1464e05c6,uVar1,L"GbxAudioGraphState_If");
  }
  return;
}



// FUNCTION 1486a6598 FUN_1486a6598 body=74 status=ok
// SIG undefined FUN_1486a6598(void)

void FUN_1486a6598(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b156e30;
  FUN_1449db362(param_1 + 0x31);
  FUN_1407e878c(param_1 + 0x2f);
  *param_1 = &PTR_FUN_14acabc20;
  FUN_147f6f94a(param_1 + 0xb);
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 1486a65e4 FUN_1486a65e4 body=108 status=ok
// SIG undefined FUN_1486a65e4(void)

void FUN_1486a65e4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x90);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14b157060;
  param_2[7] = DAT_14cb725f0;
  FUN_144928b90(param_2 + 10,0);
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 1486a6650 FUN_1486a6650 body=108 status=ok
// SIG undefined FUN_1486a6650(void)

void FUN_1486a6650(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14b157060;
  param_2[7] = DAT_14cb725f0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  FUN_144928b90(param_2 + 10,0);
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 1486a6700 FUN_1486a6700 body=205 status=ok
// SIG undefined FUN_1486a6700(void)

undefined8 FUN_1486a6700(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      uVar3 = *(undefined4 *)(lVar1 + 0x3c);
      uVar4 = *(undefined4 *)(lVar1 + 0x40);
      uVar5 = *(undefined4 *)(lVar1 + 0x44);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x14) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = uVar4;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x48);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x50);
      *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar1 + 0x58);
      FUN_1447715ec(param_2 + lVar10 + 0x60,param_3 + lVar10 + 0x60);
      FUN_1406fa324(param_2 + lVar10 + 0x88,param_3 + lVar10 + 0x88);
      lVar10 = lVar10 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486a67f6 FUN_1486a67f6 body=59 status=ok
// SIG undefined FUN_1486a67f6(void)

undefined8 FUN_1486a67f6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a6842 FUN_1486a6842 body=40 status=ok
// SIG undefined FUN_1486a6842(void)

void FUN_1486a6842(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_1486a6922(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1486a68b8 FUN_1486a68b8 body=38 status=ok
// SIG undefined FUN_1486a68b8(void)

undefined8 FUN_1486a68b8(undefined8 param_1,int param_2)

{
  FUN_1486a6922();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486a68de FUN_1486a68de body=55 status=ok
// SIG undefined FUN_1486a68de(void)

void FUN_1486a68de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e300 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e300 = FUN_140002ddd(FUN_1464e065d,uVar1,L"GbxAudioGraphSettings_Switch");
  }
  return;
}



// FUNCTION 1486a6922 FUN_1486a6922 body=64 status=ok
// SIG undefined FUN_1486a6922(void)

void FUN_1486a6922(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b157060;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1486a6964 FUN_1486a6964 body=37 status=ok
// SIG undefined FUN_1486a6964(void)

void FUN_1486a6964(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1d8);
  FUN_1486a6ae0(param_2);
  return;
}



// FUNCTION 1486a69b6 FUN_1486a69b6 body=63 status=ok
// SIG undefined FUN_1486a69b6(void)

undefined1 FUN_1486a69b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a6c32(param_2,param_3);
    param_3 = param_3 + 0x1d8;
    param_2 = param_2 + 0x1d8;
  }
  return 1;
}



// FUNCTION 1486a6a1e FUN_1486a6a1e body=59 status=ok
// SIG undefined FUN_1486a6a1e(void)

undefined8 FUN_1486a6a1e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a6a6a FUN_1486a6a6a body=40 status=ok
// SIG undefined FUN_1486a6a6a(void)

void FUN_1486a6a6a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d8) == '\x01') {
    FUN_1486a6bd0(param_2);
    *(undefined1 *)(param_2 + 0x1d8) = 0;
  }
  return;
}



// FUNCTION 1486a6ae0 FUN_1486a6ae0 body=146 status=ok
// SIG undefined FUN_1486a6ae0(void)

undefined8 * FUN_1486a6ae0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x800000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *param_1 = &PTR_FUN_14b1572c0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_144928b90(param_1 + 0x31,0);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  return param_1;
}



// FUNCTION 1486a6b72 FUN_1486a6b72 body=38 status=ok
// SIG undefined FUN_1486a6b72(void)

undefined8 FUN_1486a6b72(undefined8 param_1,int param_2)

{
  FUN_1486a6bd0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486a6b98 FUN_1486a6b98 body=55 status=ok
// SIG undefined FUN_1486a6b98(void)

void FUN_1486a6b98(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e318 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e318 = FUN_140002ddd(FUN_1464e06f3,uVar1,L"GbxAudioGraphState_Switch");
  }
  return;
}



// FUNCTION 1486a6bd0 FUN_1486a6bd0 body=98 status=ok
// SIG undefined FUN_1486a6bd0(void)

void FUN_1486a6bd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1572c0;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x2f);
  *param_1 = &PTR_FUN_14acabc20;
  FUN_147f6f94a(param_1 + 0xb);
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 1486a6c32 FUN_1486a6c32 body=118 status=ok
// SIG undefined FUN_1486a6c32(void)

longlong FUN_1486a6c32(longlong param_1,longlong param_2)

{
  FUN_147f6f99c();
  FUN_14009d848(param_1 + 0x178,param_2 + 0x178);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  FUN_1447715ec(param_1 + 0x198,param_2 + 0x198);
  FUN_1406fa324(param_1 + 0x1c0,param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  return param_1;
}



// FUNCTION 1486a6caa FUN_1486a6caa body=79 status=ok
// SIG undefined FUN_1486a6caa(void)

void FUN_1486a6caa(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14b157500;
  FUN_144928b90(param_2 + 7,0);
  *(undefined1 *)(param_2 + 0xe) = 0;
  return;
}



// FUNCTION 1486a6d22 FUN_1486a6d22 body=111 status=ok
// SIG undefined FUN_1486a6d22(void)

undefined8 FUN_1486a6d22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1447715ec(param_2,param_3);
      *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x28);
      param_3 = param_3 + 0x78;
      param_2 = param_2 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486a6dba FUN_1486a6dba body=59 status=ok
// SIG undefined FUN_1486a6dba(void)

undefined8 FUN_1486a6dba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a6e00 FUN_1486a6e00 body=58 status=ok
// SIG undefined FUN_1486a6e00(void)

void FUN_1486a6e00(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14b157500;
    if (param_2[0xc] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 1486a6e8c FUN_1486a6e8c body=126 status=ok
// SIG undefined FUN_1486a6e8c(void)

void FUN_1486a6e8c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x178);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *param_2 = &PTR_FUN_14b157740;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  return;
}



// FUNCTION 1486a6fa4 FUN_1486a6fa4 body=63 status=ok
// SIG undefined FUN_1486a6fa4(void)

undefined1 FUN_1486a6fa4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a71be(param_2,param_3);
    param_3 = param_3 + 0x1c0;
    param_2 = param_2 + 0x1c0;
  }
  return 1;
}



// FUNCTION 1486a700c FUN_1486a700c body=59 status=ok
// SIG undefined FUN_1486a700c(void)

undefined8 FUN_1486a700c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a7058 FUN_1486a7058 body=40 status=ok
// SIG undefined FUN_1486a7058(void)

void FUN_1486a7058(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c0) == '\x01') {
    FUN_1486a712c(param_2);
    *(undefined1 *)(param_2 + 0x1c0) = 0;
  }
  return;
}



// FUNCTION 1486a70ce FUN_1486a70ce body=38 status=ok
// SIG undefined FUN_1486a70ce(void)

undefined8 FUN_1486a70ce(undefined8 param_1,int param_2)

{
  FUN_1486a712c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486a70f4 FUN_1486a70f4 body=55 status=ok
// SIG undefined FUN_1486a70f4(void)

void FUN_1486a70f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e348 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e348 = FUN_140002ddd(FUN_1464e07e8,uVar1,L"GbxAudioGraphState_FactChange");
  }
  return;
}



// FUNCTION 1486a712c FUN_1486a712c body=146 status=ok
// SIG undefined FUN_1486a712c(void)

void FUN_1486a712c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b157740;
  FUN_1449db362(param_1 + 0x33);
  plVar3 = (longlong *)param_1[0x32];
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
  plVar3 = (longlong *)param_1[0x30];
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
  *param_1 = &PTR_FUN_14acabc20;
  FUN_147f6f94a(param_1 + 0xb);
  FUN_140f9d4d6(param_1);
  return;
}



// FUNCTION 1486a71be FUN_1486a71be body=230 status=ok
// SIG undefined FUN_1486a71be(void)

longlong FUN_1486a71be(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_147f6f99c();
  uVar3 = *(undefined8 *)(param_2 + 0x178);
  lVar4 = *(longlong *)(param_2 + 0x180);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = uVar3;
  *(longlong *)(param_1 + 0x180) = lVar4;
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
  uVar3 = *(undefined8 *)(param_2 + 0x188);
  lVar4 = *(longlong *)(param_2 + 400);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 400);
  *(undefined8 *)(param_1 + 0x188) = uVar3;
  *(longlong *)(param_1 + 400) = lVar4;
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
  FUN_1401aa3da(param_1 + 0x198,param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  uVar3 = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1b0) = uVar3;
  return param_1;
}



// FUNCTION 1486a7302 FUN_1486a7302 body=105 status=ok
// SIG undefined FUN_1486a7302(void)

undefined8 FUN_1486a7302(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      FUN_147f22736(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x88;
      param_2 = param_2 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486a7394 FUN_1486a7394 body=59 status=ok
// SIG undefined FUN_1486a7394(void)

undefined8 FUN_1486a7394(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a73e0 FUN_1486a73e0 body=38 status=ok
// SIG undefined FUN_1486a73e0(void)

void FUN_1486a73e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1408206ec(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1486a7448 FUN_1486a7448 body=55 status=ok
// SIG undefined FUN_1486a7448(void)

void FUN_1486a7448(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e360 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e360 = FUN_140002ddd(FUN_1464e087f,uVar1,L"GbxGameBrainDef");
  }
  return;
}



// FUNCTION 1486a7480 FUN_1486a7480 body=37 status=ok
// SIG undefined FUN_1486a7480(void)

void FUN_1486a7480(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xea8);
  FUN_14610f272(param_2);
  return;
}



// FUNCTION 1486a74d2 FUN_1486a74d2 body=63 status=ok
// SIG undefined FUN_1486a74d2(void)

undefined1 FUN_1486a74d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a76e2(param_2,param_3);
    param_3 = param_3 + 0xea8;
    param_2 = param_2 + 0xea8;
  }
  return 1;
}



// FUNCTION 1486a753a FUN_1486a753a body=59 status=ok
// SIG undefined FUN_1486a753a(void)

undefined8 FUN_1486a753a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a7586 FUN_1486a7586 body=40 status=ok
// SIG undefined FUN_1486a7586(void)

void FUN_1486a7586(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xea8) == '\x01') {
    FUN_1456c3012(param_2);
    *(undefined1 *)(param_2 + 0xea8) = 0;
  }
  return;
}



// FUNCTION 1486a7600 FUN_1486a7600 body=38 status=ok
// SIG undefined FUN_1486a7600(void)

undefined8 FUN_1486a7600(undefined8 param_1,int param_2)

{
  FUN_1456c3012();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486a7626 FUN_1486a7626 body=55 status=ok
// SIG undefined FUN_1486a7626(void)

void FUN_1486a7626(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e3c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e3c0 = FUN_140002ddd(FUN_1464e0a01,uVar1,L"GbxGameGlobalsAI");
  }
  return;
}



// FUNCTION 1486a765e FUN_1486a765e body=131 status=ok
// SIG undefined FUN_1486a765e(void)

void * FUN_1486a765e(void *param_1)

{
  memset(param_1,0,200);
  *(undefined2 *)((longlong)param_1 + 0xe0) = 4;
  *(undefined4 *)((longlong)param_1 + 200) = 0x4b;
  *(undefined1 *)((longlong)param_1 + 0xe8) = 2;
  *(byte *)((longlong)param_1 + 0xf0) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x118) = 4;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0x1e;
  *(undefined1 *)((longlong)param_1 + 0x120) = 2;
  *(byte *)((longlong)param_1 + 0x128) = (byte)~DAT_14c9a8754 >> 4 & 2;
  return param_1;
}



// FUNCTION 1486a76e2 FUN_1486a76e2 body=122 status=ok
// SIG undefined FUN_1486a76e2(void)

longlong FUN_1486a76e2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_147f2a412();
  FUN_1486a775c(param_1 + 0x110,param_2 + 0x110);
  *(undefined8 *)(param_1 + 0xe60) = *(undefined8 *)(param_2 + 0xe60);
  uVar1 = *(undefined4 *)(param_2 + 0xe6c);
  uVar2 = *(undefined4 *)(param_2 + 0xe70);
  uVar3 = *(undefined4 *)(param_2 + 0xe74);
  *(undefined4 *)(param_1 + 0xe68) = *(undefined4 *)(param_2 + 0xe68);
  *(undefined4 *)(param_1 + 0xe6c) = uVar1;
  *(undefined4 *)(param_1 + 0xe70) = uVar2;
  *(undefined4 *)(param_1 + 0xe74) = uVar3;
  FUN_144a787a6(param_1 + 0xe78,param_2 + 0xe78);
  FUN_1486a7978(param_1 + 0xe88,param_2 + 0xe88);
  *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_2 + 0xea0);
  return param_1;
}



// FUNCTION 1486a775c FUN_1486a775c body=539 status=ok
// SIG undefined FUN_1486a775c(void)

longlong FUN_1486a775c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  FUN_144983130();
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  FUN_144983130(param_1 + 0x70,param_2 + 0x70);
  FUN_144983130(param_1 + 0xa8,param_2 + 0xa8);
  FUN_144983130(param_1 + 0xe0,param_2 + 0xe0);
  FUN_144983130(param_1 + 0x118,param_2 + 0x118);
  FUN_144983130(param_1 + 0x150,param_2 + 0x150);
  FUN_144983130(param_1 + 0x188,param_2 + 0x188);
  FUN_144983130(param_1 + 0x1c0,param_2 + 0x1c0);
  FUN_144983130(param_1 + 0x1f8,param_2 + 0x1f8);
  FUN_144983130(param_1 + 0x230,param_2 + 0x230);
  FUN_144983130(param_1 + 0x268,param_2 + 0x268);
  FUN_144983130(param_1 + 0x2a0,param_2 + 0x2a0);
  FUN_144983130(param_1 + 0x2d8,param_2 + 0x2d8);
  FUN_144983130(param_1 + 0x310,param_2 + 0x310);
  FUN_144983130(param_1 + 0x348,param_2 + 0x348);
  FUN_144983130(param_1 + 0x380,param_2 + 0x380);
  FUN_144983130(param_1 + 0x3b8,param_2 + 0x3b8);
  FUN_144983130(param_1 + 0x3f0,param_2 + 0x3f0);
  FUN_144983130(param_1 + 0x428,param_2 + 0x428);
  FUN_144983130(param_1 + 0x460,param_2 + 0x460);
  FUN_144983130(param_1 + 0x498,param_2 + 0x498);
  FUN_144983130(param_1 + 0x4d0,param_2 + 0x4d0);
  FUN_144983130(param_1 + 0x508,param_2 + 0x508);
  FUN_144983130(param_1 + 0x540,param_2 + 0x540);
  FUN_144983130(param_1 + 0x578,param_2 + 0x578);
  FUN_14070e270(param_1 + 0x5b0,param_2 + 0x5b0);
  lVar6 = 0x730;
  do {
    FUN_1486a79cc(param_1 + lVar6,param_2 + lVar6);
    lVar6 = lVar6 + 0x130;
  } while (lVar6 != 0xd20);
  uVar1 = *(undefined8 *)(param_2 + 0xd20);
  uVar2 = *(undefined8 *)(param_2 + 0xd28);
  uVar3 = *(undefined8 *)(param_2 + 0xd30);
  uVar4 = *(undefined8 *)(param_2 + 0xd38);
  uVar5 = *(undefined8 *)(param_2 + 0xd48);
  *(undefined8 *)(param_1 + 0xd40) = *(undefined8 *)(param_2 + 0xd40);
  *(undefined8 *)(param_1 + 0xd48) = uVar5;
  *(undefined8 *)(param_1 + 0xd30) = uVar3;
  *(undefined8 *)(param_1 + 0xd38) = uVar4;
  *(undefined8 *)(param_1 + 0xd20) = uVar1;
  *(undefined8 *)(param_1 + 0xd28) = uVar2;
  return param_1;
}



// FUNCTION 1486a7978 FUN_1486a7978 body=84 status=ok
// SIG undefined FUN_1486a7978(void)

longlong * FUN_1486a7978(longlong *param_1,longlong *param_2)

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



// FUNCTION 1486a79cc FUN_1486a79cc body=99 status=ok
// SIG undefined FUN_1486a79cc(void)

longlong FUN_1486a79cc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    FUN_140e7790a(param_1 + lVar1,param_2 + lVar1);
    *(undefined8 *)(param_1 + 0x18 + lVar1) = *(undefined8 *)(param_2 + 0x18 + lVar1);
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0xc0);
  FUN_144983130(param_1 + 0xc0,param_2 + 0xc0);
  FUN_144983130(param_1 + 0xf8,param_2 + 0xf8);
  return param_1;
}



// FUNCTION 1486a7a30 FUN_1486a7a30 body=9 status=ok
// SIG undefined FUN_1486a7a30(void)

void FUN_1486a7a30(longlong param_1)

{
  FUN_1456c3012(param_1 + 0x10);
  return;
}



// FUNCTION 1486a7a3a FUN_1486a7a3a body=29 status=ok
// SIG undefined FUN_1486a7a3a(void)

undefined8 FUN_1486a7a3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486a7a58 FUN_1486a7a58 body=158 status=ok
// SIG undefined FUN_1486a7a58(void)

void FUN_1486a7a58(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_1486a7aca;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_1486a7aca;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1486a7aca:
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
                    /* WARNING: Could not recover jumptable at 0x0001486a7aea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1486a7b02 FUN_1486a7b02 body=212 status=ok
// SIG undefined FUN_1486a7b02(void)

void FUN_1486a7b02(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x5e8) + 0x3f0);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x5e8) + 0x3f8);
  if (plVar3 == (longlong *)0x0) {
    local_20 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    local_20 = plVar3;
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
  FUN_1446dcc2e(param_3,&local_28);
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a7bd8 FUN_1486a7bd8 body=175 status=ok
// SIG undefined FUN_1486a7bd8(void)

void FUN_1486a7bd8(longlong *param_1,longlong param_2)

{
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
  (**(code **)(*param_1 + 0x918))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a7c94 FUN_1486a7c94 body=41 status=ok
// SIG undefined FUN_1486a7c94(void)

void FUN_1486a7c94(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = (undefined8 *)FUN_14885e7ba();
  *param_3 = *puVar1;
  return;
}



// FUNCTION 1486a7cbe FUN_1486a7cbe body=45 status=ok
// SIG undefined FUN_1486a7cbe(void)

void FUN_1486a7cbe(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14885c82a();
  FUN_140115bdc(param_3,uVar1);
  return;
}



// FUNCTION 1486a7d1a FUN_1486a7d1a body=104 status=ok
// SIG undefined FUN_1486a7d1a(void)

void FUN_1486a7d1a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5e6d0) {
    FUN_144b3d300(&DAT_14cb5e6d0);
    if (DAT_14cb5e6d0 == -1) {
      FUN_1446f470e(&DAT_14cb5e6c8,L"Timers",1);
      _Init_thread_footer(&DAT_14cb5e6d0);
      return;
    }
  }
  return;
}



// FUNCTION 1486a7da0 FUN_1486a7da0 body=158 status=ok
// SIG undefined FUN_1486a7da0(void)

void FUN_1486a7da0(undefined8 param_1,longlong param_2)

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
  FUN_148862398(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a7e40 FUN_1486a7e40 body=38 status=ok
// SIG undefined FUN_1486a7e40(void)

void FUN_1486a7e40(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1488623ca();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1486a7e66 FUN_1486a7e66 body=296 status=ok
// SIG undefined FUN_1486a7e66(void)

void FUN_1486a7e66(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_31;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_30;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  puVar3 = &local_31;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  uVar2 = FUN_148862614(param_1,&local_40,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a7f90 FUN_1486a7f90 body=188 status=ok
// SIG undefined FUN_1486a7f90(void)

void FUN_1486a7f90(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1488626f4(param_1,local_58,local_60);
  FUN_1403719a4(param_3,local_58);
  FUN_144a2da94(local_58);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a8052 FUN_1486a8052 body=37 status=ok
// SIG undefined FUN_1486a8052(void)

void FUN_1486a8052(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14885c822();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1486a8078 FUN_1486a8078 body=132 status=ok
// SIG undefined FUN_1486a8078(void)

void FUN_1486a8078(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar1);
  local_28 = param_2[2];
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e8d0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a80fe FUN_1486a80fe body=84 status=ok
// SIG undefined FUN_1486a80fe(void)

longlong * FUN_1486a80fe(longlong *param_1,longlong *param_2)

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



// FUNCTION 1486a8152 FUN_1486a8152 body=92 status=ok
// SIG undefined FUN_1486a8152(void)

void FUN_1486a8152(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e8e0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a81b0 FUN_1486a81b0 body=47 status=ok
// SIG undefined FUN_1486a81b0(void)

void FUN_1486a81b0(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e8f0);
                    /* WARNING: Could not recover jumptable at 0x0001486a81dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1486a81e0 FUN_1486a81e0 body=47 status=ok
// SIG undefined FUN_1486a81e0(void)

void FUN_1486a81e0(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e900);
                    /* WARNING: Could not recover jumptable at 0x0001486a820c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1486a8210 FUN_1486a8210 body=47 status=ok
// SIG undefined FUN_1486a8210(void)

void FUN_1486a8210(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e910);
                    /* WARNING: Could not recover jumptable at 0x0001486a823c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1486a8240 FUN_1486a8240 body=92 status=ok
// SIG undefined FUN_1486a8240(void)

void FUN_1486a8240(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e920);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a829e FUN_1486a829e body=313 status=ok
// SIG undefined FUN_1486a829e(void)

void FUN_1486a829e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90 [56];
  undefined8 local_58 [4];
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_58[0] = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14034cca6(local_90,local_58);
  FUN_148862748(param_1,local_98,local_90);
  FUN_144a2da94(local_58);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a83ee FUN_1486a83ee body=209 status=ok
// SIG undefined FUN_1486a83ee(void)

void FUN_1486a83ee(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  FUN_148862506(param_1,&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a84c0 FUN_1486a84c0 body=314 status=ok
// SIG undefined FUN_1486a84c0(void)

void FUN_1486a84c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_48;
  uStack_54 = local_48._4_4_;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  local_70 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_68 = FUN_14477b664(uVar1);
  local_60 = local_28;
  FUN_14886240c(param_1,&local_70,&local_58);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a85fe FUN_1486a85fe body=100 status=ok
// SIG undefined FUN_1486a85fe(void)

void FUN_1486a85fe(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_28 = param_3;
  local_20 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e988);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a8664 FUN_1486a8664 body=92 status=ok
// SIG undefined FUN_1486a8664(void)

void FUN_1486a8664(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e998);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a8744 FUN_1486a8744 body=154 status=ok
// SIG undefined FUN_1486a8744(void)

void FUN_1486a8744(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148863590(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a87f8 FUN_1486a87f8 body=227 status=ok
// SIG undefined FUN_1486a87f8(void)

void FUN_1486a87f8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_14054d9c0(&local_88);
  plVar1 = (longlong *)FUN_14479d2ce(param_1);
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_88);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(&local_88);
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_2);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a88ec FUN_1486a88ec body=24 status=ok
// SIG undefined FUN_1486a88ec(void)

undefined8 FUN_1486a88ec(void)

{
  longlong *in_R9;
  
  if (*in_R9 != 0) {
    FUN_1400020a8();
  }
  return 0;
}



// FUNCTION 1486a8922 FUN_1486a8922 body=45 status=ok
// SIG undefined FUN_1486a8922(void)

longlong FUN_1486a8922(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145b04ae8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486a8950 FUN_1486a8950 body=48 status=ok
// SIG undefined FUN_1486a8950(void)

longlong FUN_1486a8950(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1c0;
  FUN_145b04ae8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486a89ac FUN_1486a89ac body=37 status=ok
// SIG undefined FUN_1486a89ac(void)

void FUN_1486a89ac(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd8);
  FUN_145ad25c2(param_2);
  return;
}



// FUNCTION 1486a89f8 FUN_1486a89f8 body=63 status=ok
// SIG undefined FUN_1486a89f8(void)

undefined1 FUN_1486a89f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a8b20(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 1486a8a60 FUN_1486a8a60 body=59 status=ok
// SIG undefined FUN_1486a8a60(void)

undefined8 FUN_1486a8a60(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a8aac FUN_1486a8aac body=38 status=ok
// SIG undefined FUN_1486a8aac(void)

void FUN_1486a8aac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_145b04df8(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 1486a8b20 FUN_1486a8b20 body=123 status=ok
// SIG undefined FUN_1486a8b20(void)

undefined4 * FUN_1486a8b20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_144881636(param_1 + 6,param_2 + 6);
  FUN_140115bdc(param_1 + 0x1a,param_2 + 0x1a);
  FUN_140115bdc(param_1 + 0x22,param_2 + 0x22);
  if (param_2 != param_1) {
    FUN_1486a8b9c(param_1 + 0x2a,param_2 + 0x2a);
    FUN_1486a8b9c(param_1 + 0x30,param_2 + 0x30);
  }
  return param_1;
}



// FUNCTION 1486a8b9c FUN_1486a8b9c body=304 status=ok
// SIG undefined FUN_1486a8b9c(void)

void FUN_1486a8b9c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a8d46 FUN_1486a8d46 body=59 status=ok
// SIG undefined FUN_1486a8d46(void)

undefined8 FUN_1486a8d46(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a8de8 FUN_1486a8de8 body=78 status=ok
// SIG undefined FUN_1486a8de8(void)

void FUN_1486a8de8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b162fa0;
  FUN_14885e592(param_1,param_1[2]);
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x0001486a8e2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1486a8e3e FUN_1486a8e3e body=78 status=ok
// SIG undefined FUN_1486a8e3e(void)

void FUN_1486a8e3e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b162f00;
  FUN_14885e592(param_1,param_1[2]);
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x0001486a8e81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1486a8ee4 FUN_1486a8ee4 body=70 status=ok
// SIG undefined FUN_1486a8ee4(void)

undefined8 FUN_1486a8ee4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14124fed2(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486a8f52 FUN_1486a8f52 body=59 status=ok
// SIG undefined FUN_1486a8f52(void)

undefined8 FUN_1486a8f52(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a8f98 FUN_1486a8f98 body=32 status=ok
// SIG undefined FUN_1486a8f98(void)

void FUN_1486a8f98(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_144a659aa(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1486a9006 FUN_1486a9006 body=43 status=ok
// SIG undefined FUN_1486a9006(void)

undefined8 FUN_1486a9006(undefined8 param_1,int param_2)

{
  FUN_144a659aa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1486a9032 FUN_1486a9032 body=57 status=ok
// SIG undefined FUN_1486a9032(void)

void FUN_1486a9032(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e5e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e5e8 = FUN_140002ddd(FUN_1464e18ef,uVar1,L"GbxGameModeConfigUniqueData");
  }
  return;
}



// FUNCTION 1486a90a0 FUN_1486a90a0 body=63 status=ok
// SIG undefined FUN_1486a90a0(void)

undefined1 FUN_1486a90a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a91de(param_2,param_3);
    param_3 = param_3 + 0x410;
    param_2 = param_2 + 0x410;
  }
  return 1;
}



// FUNCTION 1486a9108 FUN_1486a9108 body=59 status=ok
// SIG undefined FUN_1486a9108(void)

undefined8 FUN_1486a9108(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a9154 FUN_1486a9154 body=40 status=ok
// SIG undefined FUN_1486a9154(void)

void FUN_1486a9154(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x410) == '\x01') {
    FUN_1458d8a78(param_2);
    *(undefined1 *)(param_2 + 0x410) = 0;
  }
  return;
}



// FUNCTION 1486a91de FUN_1486a91de body=905 status=ok
// SIG undefined FUN_1486a91de(void)

longlong FUN_1486a91de(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  FUN_144a787a6(param_1 + 0x98,param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  uVar2 = *(undefined4 *)(param_2 + 0xb8);
  uVar3 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  FUN_144a787a6(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  uVar1 = *(undefined4 *)(param_2 + 0xdc);
  uVar2 = *(undefined4 *)(param_2 + 0xe0);
  uVar3 = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  FUN_144a787a6(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  uVar1 = *(undefined4 *)(param_2 + 0x104);
  uVar2 = *(undefined4 *)(param_2 + 0x108);
  uVar3 = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  FUN_144a787a6(param_1 + 0x110,param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  uVar1 = *(undefined4 *)(param_2 + 300);
  uVar2 = *(undefined4 *)(param_2 + 0x130);
  uVar3 = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  *(undefined4 *)(param_1 + 0x134) = uVar3;
  FUN_144a787a6(param_1 + 0x138,param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  uVar1 = *(undefined4 *)(param_2 + 0x154);
  uVar2 = *(undefined4 *)(param_2 + 0x158);
  uVar3 = *(undefined4 *)(param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  *(undefined4 *)(param_1 + 0x15c) = uVar3;
  FUN_144a787a6(param_1 + 0x160,param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  uVar1 = *(undefined4 *)(param_2 + 0x17c);
  uVar2 = *(undefined4 *)(param_2 + 0x180);
  uVar3 = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x17c) = uVar1;
  *(undefined4 *)(param_1 + 0x180) = uVar2;
  *(undefined4 *)(param_1 + 0x184) = uVar3;
  FUN_144a787a6(param_1 + 0x188,param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  uVar1 = *(undefined4 *)(param_2 + 0x1a4);
  uVar2 = *(undefined4 *)(param_2 + 0x1a8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  *(undefined4 *)(param_1 + 0x1a8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ac) = uVar3;
  FUN_144a787a6(param_1 + 0x1b0,param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  uVar1 = *(undefined4 *)(param_2 + 0x1cc);
  uVar2 = *(undefined4 *)(param_2 + 0x1d0);
  uVar3 = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1cc) = uVar1;
  *(undefined4 *)(param_1 + 0x1d0) = uVar2;
  *(undefined4 *)(param_1 + 0x1d4) = uVar3;
  FUN_144a787a6(param_1 + 0x1d8,param_2 + 0x1d8);
  FUN_1486a9568(param_1 + 0x1e8,param_2 + 0x1e8);
  FUN_1486a95c8(param_1 + 0x1f8,param_2 + 0x1f8);
  FUN_14054d9c0(param_1 + 0x208,param_2 + 0x208);
  FUN_1486a80fe(param_1 + 600,param_2 + 600);
  FUN_1486a9628(param_1 + 0x270,param_2 + 0x270);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_2 + 0x280);
  FUN_1486a9682(param_1 + 0x288,param_2 + 0x288);
  FUN_1486a96d2(param_1 + 0x298,param_2 + 0x298);
  FUN_1401f3db8(param_1 + 0x2b0,param_2 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  FUN_140115bdc(param_1 + 0x2d0,param_2 + 0x2d0);
  FUN_1403de7ba(param_1 + 0x2f0,param_2 + 0x2f0);
  FUN_1403de7ba(param_1 + 0x310,param_2 + 0x310);
  FUN_1403de7ba(param_1 + 0x330,param_2 + 0x330);
  FUN_1486a9726(param_1 + 0x350,param_2 + 0x350);
  FUN_1401f3db8(param_1 + 0x360,param_2 + 0x360);
  FUN_1401f3db8(param_1 + 0x378,param_2 + 0x378);
  FUN_1486a9776(param_1 + 0x390,param_2 + 0x390);
  FUN_140115bdc(param_1 + 0x3a0,param_2 + 0x3a0);
  FUN_1447715ec(param_1 + 0x3c0,param_2 + 0x3c0);
  *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(param_2 + 1000);
  FUN_1446dcc2e(param_1 + 0x3f0,param_2 + 0x3f0);
  *(undefined8 *)(param_1 + 0x400) = *(undefined8 *)(param_2 + 0x400);
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_2 + 0x408);
  return param_1;
}



// FUNCTION 1486a9568 FUN_1486a9568 body=95 status=ok
// SIG undefined FUN_1486a9568(void)

undefined8 * FUN_1486a9568(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458d8f8d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486a97d6(param_1,iVar1);
      FUN_1486a9849(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486a95c8 FUN_1486a95c8 body=95 status=ok
// SIG undefined FUN_1486a95c8(void)

undefined8 * FUN_1486a95c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458d8f0f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486a987e(param_1,iVar1);
      FUN_1486a98f1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486a9628 FUN_1486a9628 body=89 status=ok
// SIG undefined FUN_1486a9628(void)

undefined8 * FUN_1486a9628(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470eafd4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1486a9682 FUN_1486a9682 body=79 status=ok
// SIG undefined FUN_1486a9682(void)

undefined8 * FUN_1486a9682(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486a9978(param_1,iVar1);
      FUN_1486a99e7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486a96d2 FUN_1486a96d2 body=84 status=ok
// SIG undefined FUN_1486a96d2(void)

longlong * FUN_1486a96d2(longlong *param_1,longlong *param_2)

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



// FUNCTION 1486a9726 FUN_1486a9726 body=79 status=ok
// SIG undefined FUN_1486a9726(void)

undefined8 * FUN_1486a9726(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486a9a84(param_1,iVar1);
      FUN_1486a9af7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486a9776 FUN_1486a9776 body=95 status=ok
// SIG undefined FUN_1486a9776(void)

undefined8 * FUN_1486a9776(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458d8f40(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486a9b74(param_1,iVar1);
      FUN_1486a9be7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486a97d6 FUN_1486a97d6 body=115 status=ok
// SIG undefined FUN_1486a97d6(void)

void FUN_1486a97d6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486a9849 FUN_1486a9849 body=52 status=ok
// SIG undefined FUN_1486a9849(void)

void FUN_1486a9849(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486a987e FUN_1486a987e body=115 status=ok
// SIG undefined FUN_1486a987e(void)

void FUN_1486a987e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486a98f1 FUN_1486a98f1 body=134 status=ok
// SIG undefined FUN_1486a98f1(void)

void FUN_1486a98f1(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486a9978 FUN_1486a9978 body=111 status=ok
// SIG undefined FUN_1486a9978(void)

void FUN_1486a9978(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486a99e7 FUN_1486a99e7 body=85 status=ok
// SIG undefined FUN_1486a99e7(void)

void FUN_1486a99e7(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141852a1e(param_1 + -0x18,param_2 + -0x18);
      FUN_1486a9a3c(param_1,param_2);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
      param_1 = param_1 + 0x38;
      param_2 = param_2 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486a9a3c FUN_1486a9a3c body=71 status=ok
// SIG undefined FUN_1486a9a3c(void)

undefined8 * FUN_1486a9a3c(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1486a9a84 FUN_1486a9a84 body=115 status=ok
// SIG undefined FUN_1486a9a84(void)

void FUN_1486a9a84(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486a9af7 FUN_1486a9af7 body=52 status=ok
// SIG undefined FUN_1486a9af7(void)

void FUN_1486a9af7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486a9b2c(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486a9b2c FUN_1486a9b2c body=71 status=ok
// SIG undefined FUN_1486a9b2c(void)

undefined8 * FUN_1486a9b2c(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1486a9b74 FUN_1486a9b74 body=115 status=ok
// SIG undefined FUN_1486a9b74(void)

void FUN_1486a9b74(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486a9be7 FUN_1486a9be7 body=52 status=ok
// SIG undefined FUN_1486a9be7(void)

void FUN_1486a9be7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1486a9c1c FUN_1486a9c1c body=43 status=ok
// SIG undefined FUN_1486a9c1c(void)

undefined8 FUN_1486a9c1c(undefined8 param_1,int param_2)

{
  FUN_1458d8a78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x410);
  }
  return param_1;
}



// FUNCTION 1486a9c48 FUN_1486a9c48 body=55 status=ok
// SIG undefined FUN_1486a9c48(void)

void FUN_1486a9c48(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e600 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e600 = FUN_140002ddd(FUN_1464e194b,uVar1,L"GbxGameModeConfig");
  }
  return;
}



// FUNCTION 1486a9cc4 FUN_1486a9cc4 body=54 status=ok
// SIG undefined FUN_1486a9cc4(void)

undefined1 FUN_1486a9cc4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447715ec(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1486a9d06 FUN_1486a9d06 body=280 status=ok
// SIG undefined FUN_1486a9d06(void)

undefined4
FUN_1486a9d06(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_4 != 0) {
    local_80 = param_7;
    local_88 = param_6;
    thunk_FUN_14686d3dc(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  local_58 = 0;
  lStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  (**(code **)(*param_1 + 8))(0,local_78);
  if ((local_6c & 2) == 0) {
    FUN_1447a97f4(&local_68,&DAT_14c9485f0);
  }
  local_80 = param_7;
  local_88 = param_6;
  uVar1 = thunk_FUN_14686d3dc(param_3,param_2,&local_68,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_78);
  if (((local_6c & 4) != 0) && (lStack_50 != 0)) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1486a9e20 FUN_1486a9e20 body=39 status=ok
// SIG undefined FUN_1486a9e20(void)

void FUN_1486a9e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  thunk_FUN_145eb783c(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 1486a9e60 FUN_1486a9e60 body=59 status=ok
// SIG undefined FUN_1486a9e60(void)

undefined8 FUN_1486a9e60(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486a9ea6 FUN_1486a9ea6 body=40 status=ok
// SIG undefined FUN_1486a9ea6(void)

void FUN_1486a9ea6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1486a9f8c FUN_1486a9f8c body=124 status=ok
// SIG undefined FUN_1486a9f8c(void)

undefined8 FUN_1486a9f8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar14);
      lVar2 = param_2 + 0x38 + lVar14;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(puVar1 + 0xc);
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
      FUN_1406fa324(lVar2,puVar1 + 0xe);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x12);
      lVar14 = lVar14 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486aa030 FUN_1486aa030 body=59 status=ok
// SIG undefined FUN_1486aa030(void)

undefined8 FUN_1486aa030(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486aa076 FUN_1486aa076 body=38 status=ok
// SIG undefined FUN_1486aa076(void)

void FUN_1486aa076(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1486aa10c FUN_1486aa10c body=46 status=ok
// SIG undefined FUN_1486aa10c(void)

void FUN_1486aa10c(undefined8 param_1,longlong param_2)

{
  FUN_1447a1747(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1486aa150 FUN_1486aa150 body=75 status=ok
// SIG undefined FUN_1486aa150(void)

undefined8 FUN_1486aa150(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_140bee9ec();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486aa1c4 FUN_1486aa1c4 body=59 status=ok
// SIG undefined FUN_1486aa1c4(void)

undefined8 FUN_1486aa1c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486aa262 FUN_1486aa262 body=50 status=ok
// SIG undefined FUN_1486aa262(void)

void FUN_1486aa262(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1447a1747(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1486aa2fc FUN_1486aa2fc body=59 status=ok
// SIG undefined FUN_1486aa2fc(void)

undefined8 FUN_1486aa2fc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486aa342 FUN_1486aa342 body=32 status=ok
// SIG undefined FUN_1486aa342(void)

void FUN_1486aa342(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_144a659aa(param_2);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1486aa3b0 FUN_1486aa3b0 body=43 status=ok
// SIG undefined FUN_1486aa3b0(void)

undefined8 FUN_1486aa3b0(undefined8 param_1,int param_2)

{
  FUN_144a659aa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1486aa3dc FUN_1486aa3dc body=55 status=ok
// SIG undefined FUN_1486aa3dc(void)

void FUN_1486aa3dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e6f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e6f8 = FUN_140002ddd(FUN_1464e1e19,uVar1,L"GbxGameModeModuleConfigScripts");
  }
  return;
}



// FUNCTION 1486aa414 FUN_1486aa414 body=66 status=ok
// SIG undefined FUN_1486aa414(void)

undefined8 * FUN_1486aa414(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame\\Public\\Game/Module/GbxGameModeModuleConfig.h"
                ,0x3b,L"Pure virtual not implemented (%s)",
                L"FGbxGameModeModuleConfigScripts::GetScriptClass");
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  return param_2;
}



// FUNCTION 1486aa458 FUN_1486aa458 body=115 status=ok
// SIG undefined FUN_1486aa458(void)

void FUN_1486aa458(undefined8 param_1,undefined8 *param_2)

{
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
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14b162f20;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_145853e2a(param_2 + 5);
  *(undefined1 *)(param_2 + 9) = 1;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined1 *)(param_2 + 0x10) = 1;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 1486aa4cc FUN_1486aa4cc body=84 status=ok
// SIG undefined FUN_1486aa4cc(void)

void FUN_1486aa4cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b162f20;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_145853e2a(param_2 + 5);
  *(undefined1 *)(param_2 + 9) = 1;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined1 *)(param_2 + 0x10) = 1;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 1486aa544 FUN_1486aa544 body=63 status=ok
// SIG undefined FUN_1486aa544(void)

undefined1 FUN_1486aa544(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486aa6d4(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 1486aa5ac FUN_1486aa5ac body=59 status=ok
// SIG undefined FUN_1486aa5ac(void)

undefined8 FUN_1486aa5ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486aa5f8 FUN_1486aa5f8 body=40 status=ok
// SIG undefined FUN_1486aa5f8(void)

void FUN_1486aa5f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_1458354b8(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1486aa66e FUN_1486aa66e body=43 status=ok
// SIG undefined FUN_1486aa66e(void)

undefined8 FUN_1486aa66e(undefined8 param_1,int param_2)

{
  FUN_1458354b8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1486aa69a FUN_1486aa69a body=55 status=ok
// SIG undefined FUN_1486aa69a(void)

void FUN_1486aa69a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e710 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e710 = FUN_140002ddd(FUN_1464e197a,uVar1,L"GbxGameModeModuleConfig");
  }
  return;
}



// FUNCTION 1486aa6d4 FUN_1486aa6d4 body=117 status=ok
// SIG undefined FUN_1486aa6d4(void)

longlong FUN_1486aa6d4(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_1401f3db8(param_1 + 0x10,param_2 + 0x10);
  FUN_140115bdc(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  FUN_1486a80fe(param_1 + 0x50,param_2 + 0x50);
  FUN_1486a80fe(param_1 + 0x68,param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_1486aa74a(param_1 + 0x88,param_2 + 0x88);
  return param_1;
}



// FUNCTION 1486aa74a FUN_1486aa74a body=95 status=ok
// SIG undefined FUN_1486aa74a(void)

undefined8 * FUN_1486aa74a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145835563(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486aa7aa(param_1,iVar1);
      FUN_1486aa81d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}


