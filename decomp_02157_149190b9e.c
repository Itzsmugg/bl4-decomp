// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149190b9e FUN_149190b9e body=45 status=ok
// SIG undefined FUN_149190b9e(void)

longlong FUN_149190b9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d3036a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149190bd2 FUN_149190bd2 body=48 status=ok
// SIG undefined FUN_149190bd2(void)

longlong FUN_149190bd2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x278;
  FUN_145d3036a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149190c0a FUN_149190c0a body=48 status=ok
// SIG undefined FUN_149190c0a(void)

longlong FUN_149190c0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x280;
  FUN_145d3036a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149190cde FUN_149190cde body=63 status=ok
// SIG undefined FUN_149190cde(void)

undefined1 FUN_149190cde(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149190f14(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 149190d46 FUN_149190d46 body=59 status=ok
// SIG undefined FUN_149190d46(void)

undefined8 FUN_149190d46(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149190d92 FUN_149190d92 body=40 status=ok
// SIG undefined FUN_149190d92(void)

void FUN_149190d92(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_149190e08(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 149190e08 FUN_149190e08 body=84 status=ok
// SIG undefined FUN_149190e08(void)

void FUN_149190e08(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_149190e5c(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149190e5c FUN_149190e5c body=54 status=ok
// SIG undefined FUN_149190e5c(void)

void FUN_149190e5c(longlong *param_1)

{
  FUN_149190e92(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149190e92 FUN_149190e92 body=128 status=ok
// SIG undefined FUN_149190e92(void)

void FUN_149190e92(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 149190f14 FUN_149190f14 body=116 status=ok
// SIG undefined FUN_149190f14(void)

undefined8 * FUN_149190f14(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_2[1];
    }
  }
  param_1[1] = lVar1;
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  FUN_149190fe0(param_1 + 4,param_2 + 4);
  FUN_149190f88(param_1 + 0xe,param_2 + 0xe);
  param_1[0x10] = param_2[0x10];
  return param_1;
}



// FUNCTION 149190f88 FUN_149190f88 body=88 status=ok
// SIG undefined FUN_149190f88(void)

undefined8 * FUN_149190f88(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1491910d0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 149190fe0 FUN_149190fe0 body=122 status=ok
// SIG undefined FUN_149190fe0(void)

longlong FUN_149190fe0(longlong param_1,longlong param_2)

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
    FUN_14919105a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14919105a FUN_14919105a body=117 status=ok
// SIG undefined FUN_14919105a(void)

undefined8 * FUN_14919105a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_149190e92(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406cd6a8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 6);
    }
  }
  return param_1;
}



// FUNCTION 1491910d0 FUN_1491910d0 body=98 status=ok
// SIG undefined FUN_1491910d0(void)

void FUN_1491910d0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 149191178 FUN_149191178 body=68 status=ok
// SIG undefined FUN_149191178(void)

undefined1 FUN_149191178(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
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



// FUNCTION 1491911e4 FUN_1491911e4 body=59 status=ok
// SIG undefined FUN_1491911e4(void)

undefined8 FUN_1491911e4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919122a FUN_14919122a body=37 status=ok
// SIG undefined FUN_14919122a(void)

void FUN_14919122a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1491912a0 FUN_1491912a0 body=222 status=ok
// SIG undefined FUN_1491912a0(void)

void FUN_1491912a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_14128f766(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14919137e FUN_14919137e body=84 status=ok
// SIG undefined FUN_14919137e(void)

void FUN_14919137e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x140);
  *param_2 = &PTR_FUN_14bb580d0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_1406ed278(param_2 + 4);
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}



// FUNCTION 1491913d2 FUN_1491913d2 body=73 status=ok
// SIG undefined FUN_1491913d2(void)

void FUN_1491913d2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb580d0;
  *(undefined2 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_1406ed278(param_2 + 4);
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}



// FUNCTION 149191440 FUN_149191440 body=158 status=ok
// SIG undefined FUN_149191440(void)

undefined8 FUN_149191440(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined2 *)(param_2 + 8 + lVar6) = *(undefined2 *)(param_3 + 8 + lVar6);
      FUN_14793f1cc(param_2 + 0x10 + lVar6,param_3 + 0x10 + lVar6);
      FUN_14753be88(param_2 + 0x20 + lVar6,param_3 + 0x20 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x130 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x130 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined4 *)(param_2 + 0x140 + lVar6) = *(undefined4 *)(param_3 + 0x140 + lVar6);
      lVar6 = lVar6 + 0x148;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149191506 FUN_149191506 body=59 status=ok
// SIG undefined FUN_149191506(void)

undefined8 FUN_149191506(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149191552 FUN_149191552 body=63 status=ok
// SIG undefined FUN_149191552(void)

void FUN_149191552(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x29) == '\x01') {
    *param_2 = &PTR_FUN_14bb580d0;
    FUN_1404dbc70(param_2 + 4);
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x29) = 0;
  }
  return;
}



// FUNCTION 1491915e0 FUN_1491915e0 body=71 status=ok
// SIG undefined FUN_1491915e0(void)

undefined8 * FUN_1491915e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb580d0;
  FUN_1404dbc70(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 149191628 FUN_149191628 body=55 status=ok
// SIG undefined FUN_149191628(void)

void FUN_149191628(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc05d20 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc05d20 = FUN_140002ddd(FUN_1466c5d23,uVar1,L"MovieSceneControlRigInstanceData");
  }
  return;
}



// FUNCTION 149191660 FUN_149191660 body=76 status=ok
// SIG undefined FUN_149191660(void)

void FUN_149191660(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined2 *)(param_2 + 0xc) = 0x100;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x70);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0xd0] = 1;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  return;
}



// FUNCTION 1491916ac FUN_1491916ac body=76 status=ok
// SIG undefined FUN_1491916ac(void)

void FUN_1491916ac(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined2 *)(param_2 + 0xc) = 0x100;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x70);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0xd0] = 1;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  return;
}



// FUNCTION 1491916f8 FUN_1491916f8 body=55 status=ok
// SIG undefined FUN_1491916f8(void)

void FUN_1491916f8(undefined8 param_1,longlong param_2)

{
  FUN_1447a1747(*(undefined8 *)(param_2 + 0xd8),*(undefined4 *)(param_2 + 0xe0));
  if (*(longlong *)(param_2 + 0xd8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149191746 FUN_149191746 body=109 status=ok
// SIG undefined FUN_149191746(void)

undefined8 FUN_149191746(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xd1);
      FUN_140bee9ec(param_2 + lVar1 + 0xd8,param_3 + lVar1 + 0xd8);
      lVar1 = lVar1 + 0xf0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491917dc FUN_1491917dc body=59 status=ok
// SIG undefined FUN_1491917dc(void)

undefined8 FUN_1491917dc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149191880 FUN_149191880 body=65 status=ok
// SIG undefined FUN_149191880(void)

void FUN_149191880(longlong param_1)

{
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    FUN_1447a1747(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0));
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1491918ce FUN_1491918ce body=177 status=ok
// SIG undefined FUN_1491918ce(void)

void FUN_1491918ce(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14bb58d10;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x300000000;
  return;
}



// FUNCTION 149191980 FUN_149191980 body=73 status=ok
// SIG undefined FUN_149191980(void)

undefined8 * FUN_149191980(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb58d10;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_140da04fc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 1491919d0 FUN_1491919d0 body=423 status=ok
// SIG undefined FUN_1491919d0(void)

undefined8 * FUN_1491919d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_1491918ce();
  param_1[0x34] = 0;
  param_1[0x36] = 0x100000000;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *param_1 = &PTR_FUN_14bb58e00;
  FUN_1491d73b0(param_1 + 0x42);
  *(undefined1 *)(param_1 + 0x79) = 3;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x7a] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x7b] = uVar1;
  param_1[0x7c] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x7d) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = uVar2;
  *(undefined4 *)(param_1 + 0x7e) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = uVar4;
  param_1[0x7f] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0xffffffff;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0xffffffff;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0xffffffff;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0xffffffff;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0xffffffff;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0xffffffff;
  param_1[0x9f] = 0;
  FUN_14918051e(param_1,param_2);
  return param_1;
}



// FUNCTION 149191b78 FUN_149191b78 body=58 status=ok
// SIG undefined FUN_149191b78(void)

longlong FUN_149191b78(longlong param_1,int param_2)

{
  FUN_14918b3e4(param_1 + 0x210);
  FUN_14918079a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x500);
  }
  return param_1;
}



// FUNCTION 149191bd6 FUN_149191bd6 body=43 status=ok
// SIG undefined FUN_149191bd6(void)

undefined8 FUN_149191bd6(undefined8 param_1,int param_2)

{
  FUN_14918079a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 149191c08 FUN_149191c08 body=410 status=ok
// SIG undefined FUN_149191c08(void)

undefined8 * FUN_149191c08(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_140e63fbe(param_1,param_2,4);
  param_1[0x34] = 0;
  param_1[0x36] = 0x100000000;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *param_1 = &PTR_FUN_14bb58e00;
  FUN_1491d73b0(param_1 + 0x42);
  *(undefined1 *)(param_1 + 0x79) = 3;
  uVar1 = DAT_14c8464e8;
  param_1[0x7a] = DAT_14c8464e0;
  param_1[0x7b] = uVar1;
  param_1[0x7c] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x7d] = DAT_14c8464e0;
  param_1[0x7e] = uVar1;
  param_1[0x7f] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0xffffffff;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0xffffffff;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0xffffffff;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0xffffffff;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0xffffffff;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0xffffffff;
  param_1[0x9f] = 0;
  return param_1;
}



// FUNCTION 149191da2 FUN_149191da2 body=225 status=ok
// SIG undefined FUN_149191da2(void)

undefined8 * FUN_149191da2(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  *(undefined8 *)((longlong)param_1 + 6) = *(undefined8 *)((longlong)param_2 + 6);
  *param_1 = uVar1;
  FUN_14919207a(param_1 + 2,param_2 + 2);
  memcpy(param_1 + 4,param_2 + 4,0x129);
  lVar2 = param_2[0x2a];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0x2a];
    }
  }
  param_1[0x2a] = lVar2;
  FUN_1444888de(param_1 + 0x2b,param_2 + 0x2b);
  FUN_1444888de(param_1 + 0x2d,param_2 + 0x2d);
  FUN_1444888de(param_1 + 0x2f,param_2 + 0x2f);
  FUN_1444888de(param_1 + 0x31,param_2 + 0x31);
  *(undefined2 *)(param_1 + 0x33) = *(undefined2 *)(param_2 + 0x33);
  FUN_1491920d2(param_1 + 0x34,param_2 + 0x34);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_2 + 0x36);
  return param_1;
}



// FUNCTION 149191e84 FUN_149191e84 body=122 status=ok
// SIG undefined FUN_149191e84(void)

longlong FUN_149191e84(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  uVar1 = FUN_1491f490e(param_2);
  uVar2 = FUN_1491d83ae(param_1);
  FUN_1491e07cc(uVar2,uVar1);
  uVar1 = FUN_1459b4e74(param_2);
  uVar2 = FUN_1491d839e(param_1);
  FUN_140e37f6e(uVar2,uVar1);
  return param_1;
}



// FUNCTION 149191efe FUN_149191efe body=123 status=ok
// SIG undefined FUN_149191efe(void)

void * FUN_149191efe(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x90);
    if (*(void **)((longlong)param_2 + 0x90) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0xa0);
    *(int *)((longlong)param_1 + 0xa0) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xa4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xa4) = 1;
    }
    else {
      FUN_149191f7a(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x90);
        if (*(void **)((longlong)param_1 + 0x90) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0x90);
      }
    }
  }
  return param_1;
}



// FUNCTION 149191f7a FUN_149191f7a body=106 status=ok
// SIG undefined FUN_149191f7a(void)

void FUN_149191f7a(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x90,0);
    uVar2 = (uint)(uVar1 / 0x90);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_149191fe4(param_1,0,uVar3,0x90);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0xa4) = param_3;
  return;
}



// FUNCTION 149191fe4 FUN_149191fe4 body=150 status=ok
// SIG undefined FUN_149191fe4(void)

void FUN_149191fe4(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x90);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x90);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x90,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x90),param_1,(longlong)param_2 * 0x90);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x90,param_2,param_3,param_4);
  return;
}



// FUNCTION 14919207a FUN_14919207a body=87 status=ok
// SIG undefined FUN_14919207a(void)

undefined8 * FUN_14919207a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_149192126(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1491920d2 FUN_1491920d2 body=84 status=ok
// SIG undefined FUN_1491920d2(void)

undefined8 * FUN_1491920d2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1491921fa(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 149192126 FUN_149192126 body=96 status=ok
// SIG undefined FUN_149192126(void)

void FUN_149192126(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 2,1);
    iVar1 = (int)(uVar2 >> 1);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,2,1);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149192186 FUN_149192186 body=115 status=ok
// SIG undefined FUN_149192186(void)

void FUN_149192186(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1491921fa FUN_1491921fa body=90 status=ok
// SIG undefined FUN_1491921fa(void)

void FUN_1491921fa(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (param_3 < iVar2) {
    FUN_1446f8d3c(param_1,0,iVar2,1,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149192254 FUN_149192254 body=239 status=ok
// SIG undefined FUN_149192254(void)

undefined8 * FUN_149192254(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *_Dst;
  void *_Src;
  
  FUN_149192376();
  *param_1 = &PTR_FUN_14bb58cb0;
  param_1[0x34] = 0;
  iVar1 = *(int *)(param_2 + 0x1b0);
  pvVar2 = *(void **)(param_2 + 0x1a0);
  *(int *)(param_1 + 0x36) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1b4) = 1;
  }
  else {
    _Src = (void *)(param_2 + 0x110);
    if (pvVar2 != (void *)0x0) {
      _Src = pvVar2;
    }
    FUN_149191f7a(param_1 + 0x22,iVar1,0);
    _Dst = (undefined8 *)param_1[0x34];
    if ((undefined8 *)param_1[0x34] == (undefined8 *)0x0) {
      _Dst = param_1 + 0x22;
    }
    memcpy(_Dst,_Src,(longlong)iVar1 * 0x90);
  }
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  FUN_1459a7e20(param_1 + 0x38,param_2 + 0x1c0);
  return param_1;
}



// FUNCTION 149192344 FUN_149192344 body=43 status=ok
// SIG undefined FUN_149192344(void)

undefined8 FUN_149192344(undefined8 param_1,int param_2)

{
  FUN_14918079a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 149192376 FUN_149192376 body=198 status=ok
// SIG undefined FUN_149192376(void)

undefined8 * FUN_149192376(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14bb58d10;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x300000000;
  FUN_149191e84(param_1);
  return param_1;
}



// FUNCTION 14919243c FUN_14919243c body=196 status=ok
// SIG undefined FUN_14919243c(void)

longlong * FUN_14919243c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_149192502(0,&local_48);
  lVar4 = local_48;
  if ((longlong)local_40 != 0) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149192788(param_2,iVar1);
      }
      lVar3 = *param_2;
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar2 + 0x10);
      lVar5 = lVar5 + 8;
    } while ((longlong)local_40 * 8 != lVar5);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149192502 FUN_149192502 body=310 status=ok
// SIG undefined FUN_149192502(void)

longlong * FUN_149192502(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  void *local_88;
  ulonglong uStack_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  void **local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == '\0') {
    iVar3 = *(int *)(param_1 + 0xc0);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar4 * 8);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\x01')) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_149192702(param_2,iVar3);
          }
          *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar2;
          iVar3 = *(int *)(param_1 + 0xc0);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  else {
    local_88 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 0xc0);
    uStack_80 = (ulonglong)uVar1;
    if ((longlong)(int)uVar1 != 0) {
      FUN_1401c3474(&local_88);
    }
    memset(local_88,0,(longlong)(int)uVar1);
    local_68 = 0;
    local_58 = &PTR_LAB_14bb58ec0;
    local_50 = &local_88;
    local_78[0] = &LAB_14919263a;
    local_48 = param_2;
    FUN_14449bc3c(param_1,local_78,1);
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14919266c FUN_14919266c body=34 status=ok
// SIG undefined FUN_14919266c(void)

undefined8 FUN_14919266c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14919268e FUN_14919268e body=115 status=ok
// SIG undefined FUN_14919268e(void)

void FUN_14919268e(undefined8 *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c));
  *param_3 = bVar1 ^ 1;
  if (bVar1 == 0) {
    if ((param_2 != 0) && (*(char *)(param_2 + 0x10) == '\x01')) {
      plVar3 = (longlong *)param_1[1];
      iVar2 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
        FUN_149192702(plVar3,iVar2);
      }
      *(longlong *)(*plVar3 + (longlong)iVar2 * 8) = param_2;
    }
    *(undefined1 *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c)) = 1;
  }
  return;
}



// FUNCTION 149192702 FUN_149192702 body=132 status=ok
// SIG undefined FUN_149192702(void)

void FUN_149192702(longlong param_1,int param_2)

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



// FUNCTION 149192788 FUN_149192788 body=147 status=ok
// SIG undefined FUN_149192788(void)

void FUN_149192788(longlong param_1,int param_2)

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



// FUNCTION 14919281c FUN_14919281c body=63 status=ok
// SIG undefined FUN_14919281c(void)

void FUN_14919281c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_14919285c(param_1,uVar2,param_3);
  return;
}



// FUNCTION 14919285c FUN_14919285c body=127 status=ok
// SIG undefined FUN_14919285c(void)

void FUN_14919285c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc06318) {
    FUN_144b3d300(&DAT_14cc06318);
    if (DAT_14cc06318 == -1) {
      DAT_14cc06308 = 0;
      uRam000000014cc06310 = 0;
      atexit((_func_5014 *)&LAB_144488937);
      _Init_thread_footer(&DAT_14cc06318);
    }
  }
  FUN_1491928dc(param_1,param_2,param_3);
  return;
}



// FUNCTION 1491928dc FUN_1491928dc body=131 status=ok
// SIG undefined FUN_1491928dc(void)

undefined8 * FUN_1491928dc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar4 = &DAT_14cc06308;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,1);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + lVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149192960 FUN_149192960 body=118 status=ok
// SIG undefined FUN_149192960(void)

int * FUN_149192960(int *param_1)

{
  int *piVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar1 = param_1;
  if ((((*param_1 == -1) && (piVar1 = (int *)&DAT_14cc08210, param_1[5] != -1)) && (1 < param_1[4]))
     && (FUN_1446f470e(&local_20,*(undefined8 *)(param_1 + 2),1), piVar1 = param_1,
        (int *)&local_20 != param_1)) {
    *(undefined8 *)param_1 = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar1;
}



// FUNCTION 1491929d8 FUN_1491929d8 body=113 status=ok
// SIG undefined FUN_1491929d8(void)

void FUN_1491929d8(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar1 = FUN_1491f7e34();
    FUN_1446f470e(&local_28,L"Value",1);
    uVar1 = FUN_144a87586(uVar1,local_28);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149192a4a FUN_149192a4a body=71 status=ok
// SIG undefined FUN_149192a4a(void)

void FUN_149192a4a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149192a92(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149192a92 FUN_149192a92 body=127 status=ok
// SIG undefined FUN_149192a92(void)

longlong FUN_149192a92(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,0);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      param_4 = *(int *)(lVar3 + 0x44) + lVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149192b12 FUN_149192b12 body=196 status=ok
// SIG undefined FUN_149192b12(void)

longlong * FUN_149192b12(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_149192bd8(0,&local_48);
  lVar4 = local_48;
  if ((longlong)local_40 != 0) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149192788(param_2,iVar1);
      }
      lVar3 = *param_2;
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar2 + 0x10);
      lVar5 = lVar5 + 8;
    } while ((longlong)local_40 * 8 != lVar5);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149192bd8 FUN_149192bd8 body=310 status=ok
// SIG undefined FUN_149192bd8(void)

longlong * FUN_149192bd8(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  void *local_88;
  ulonglong uStack_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  void **local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == '\0') {
    iVar3 = *(int *)(param_1 + 0xc0);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar4 * 8);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '@')) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_149192dd8(param_2,iVar3);
          }
          *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar2;
          iVar3 = *(int *)(param_1 + 0xc0);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  else {
    local_88 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 0xc0);
    uStack_80 = (ulonglong)uVar1;
    if ((longlong)(int)uVar1 != 0) {
      FUN_1401c3474(&local_88);
    }
    memset(local_88,0,(longlong)(int)uVar1);
    local_68 = 0;
    local_58 = &PTR_LAB_14bb58c70;
    local_50 = &local_88;
    local_78[0] = &LAB_149192d10;
    local_48 = param_2;
    FUN_14449bc3c(param_1,local_78,1);
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149192d42 FUN_149192d42 body=34 status=ok
// SIG undefined FUN_149192d42(void)

undefined8 FUN_149192d42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 149192d64 FUN_149192d64 body=115 status=ok
// SIG undefined FUN_149192d64(void)

void FUN_149192d64(undefined8 *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c));
  *param_3 = bVar1 ^ 1;
  if (bVar1 == 0) {
    if ((param_2 != 0) && (*(char *)(param_2 + 0x10) == '@')) {
      plVar3 = (longlong *)param_1[1];
      iVar2 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
        FUN_149192dd8(plVar3,iVar2);
      }
      *(longlong *)(*plVar3 + (longlong)iVar2 * 8) = param_2;
    }
    *(undefined1 *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c)) = 1;
  }
  return;
}



// FUNCTION 149192dd8 FUN_149192dd8 body=132 status=ok
// SIG undefined FUN_149192dd8(void)

void FUN_149192dd8(longlong param_1,int param_2)

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



// FUNCTION 149192e5e FUN_149192e5e body=196 status=ok
// SIG undefined FUN_149192e5e(void)

longlong * FUN_149192e5e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_149192f24(0,&local_48);
  lVar4 = local_48;
  if ((longlong)local_40 != 0) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149192788(param_2,iVar1);
      }
      lVar3 = *param_2;
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar2 + 0x10);
      lVar5 = lVar5 + 8;
    } while ((longlong)local_40 * 8 != lVar5);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149192f24 FUN_149192f24 body=310 status=ok
// SIG undefined FUN_149192f24(void)

longlong * FUN_149192f24(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  void *local_88;
  ulonglong uStack_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  void **local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == '\0') {
    iVar3 = *(int *)(param_1 + 0xc0);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar4 * 8);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\x04')) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_149193124(param_2,iVar3);
          }
          *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar2;
          iVar3 = *(int *)(param_1 + 0xc0);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  else {
    local_88 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 0xc0);
    uStack_80 = (ulonglong)uVar1;
    if ((longlong)(int)uVar1 != 0) {
      FUN_1401c3474(&local_88);
    }
    memset(local_88,0,(longlong)(int)uVar1);
    local_68 = 0;
    local_58 = &PTR_LAB_14bb58870;
    local_50 = &local_88;
    local_78[0] = &LAB_14919305c;
    local_48 = param_2;
    FUN_14449bc3c(param_1,local_78,1);
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14919308e FUN_14919308e body=34 status=ok
// SIG undefined FUN_14919308e(void)

undefined8 FUN_14919308e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1491930b0 FUN_1491930b0 body=115 status=ok
// SIG undefined FUN_1491930b0(void)

void FUN_1491930b0(undefined8 *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c));
  *param_3 = bVar1 ^ 1;
  if (bVar1 == 0) {
    if ((param_2 != 0) && (*(char *)(param_2 + 0x10) == '\x04')) {
      plVar3 = (longlong *)param_1[1];
      iVar2 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
        FUN_149193124(plVar3,iVar2);
      }
      *(longlong *)(*plVar3 + (longlong)iVar2 * 8) = param_2;
    }
    *(undefined1 *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c)) = 1;
  }
  return;
}



// FUNCTION 149193124 FUN_149193124 body=132 status=ok
// SIG undefined FUN_149193124(void)

void FUN_149193124(longlong param_1,int param_2)

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



// FUNCTION 1491931aa FUN_1491931aa body=268 status=ok
// SIG undefined FUN_1491931aa(void)

undefined4 * FUN_1491931aa(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_12c [132];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_3 != 0) {
    if (*(char *)(param_1 + 0x52c) == '\x01') {
      FUN_1491f4682(param_3 + 0x3c8,param_2,param_4);
    }
    else {
      local_138 = *(undefined8 *)(param_3 + 0x10);
      local_130 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = FUN_140813180(param_1);
      FUN_149181d3e(param_1,local_12c,uVar3,1);
      FUN_1491932b8(local_12c,&local_a8,*(undefined1 *)(param_3 + 0x211),
                    *(undefined1 *)(param_3 + 0x21c));
      local_48 = local_a8;
      uStack_44 = uStack_a4;
      uStack_40 = uStack_a0;
      uStack_3c = uStack_9c;
      local_38 = local_98;
      uStack_34 = uStack_94;
      uStack_30 = uStack_90;
      uStack_2c = uStack_8c;
      FUN_1448052ee(&local_48,param_2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_158);
  }
  *(undefined8 *)(param_2 + 4) = DAT_14c846508;
  uVar2 = DAT_14c846500._4_4_;
  uVar1 = (undefined4)DAT_14c846500;
  uVar3 = DAT_14c8464f8._4_4_;
  *param_2 = (undefined4)DAT_14c8464f8;
  param_2[1] = uVar3;
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  if ((local_28 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491932b8 FUN_1491932b8 body=1095 status=ok
// SIG undefined FUN_1491932b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1491932b8(float *param_1,double *param_2,undefined1 param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  double *pdVar6;
  double *pdVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_f8 [32];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  pdVar6 = (double *)&DAT_14c846480;
  pdVar7 = param_2;
  for (lVar5 = 0xc; dVar11 = DAT_14c846520, lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar7 = *pdVar6;
    pdVar6 = pdVar6 + 1;
    pdVar7 = pdVar7 + 1;
  }
  switch(param_3) {
  case 0:
    if (*(char *)param_1 == '\0') {
      dVar11 = 0.0;
    }
    else {
      dVar11 = 1.0;
    }
    goto LAB_149193654;
  case 1:
    fVar10 = *param_1;
    if (param_4 == '\x02') goto LAB_1491936c8;
    if (param_4 == '\x01') {
LAB_1491936ab:
      dVar11 = 0.0;
      param_2[4] = 0.0;
      param_2[5] = (double)fVar10;
LAB_1491936bd:
      param_2[6] = dVar11;
      param_2[7] = 0.0;
      goto switchD_149193321_default;
    }
    if (param_4 != '\0') goto switchD_149193321_default;
LAB_149193506:
    dVar11 = (double)fVar10;
LAB_149193654:
    dVar15 = 0.0;
LAB_149193658:
    param_2[4] = dVar11;
    param_2[5] = dVar15;
    dVar15 = 0.0;
    break;
  case 2:
    fVar10 = *param_1;
    if (param_4 != '\x02') {
      if (param_4 == '\x01') {
        fVar10 = (float)(int)fVar10;
        goto LAB_1491936ab;
      }
      if (param_4 != '\0') goto switchD_149193321_default;
      fVar10 = (float)(int)fVar10;
      goto LAB_149193506;
    }
    fVar10 = (float)(int)fVar10;
LAB_1491936c8:
    dVar15 = (double)fVar10;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    break;
  case 3:
    fVar3 = *param_1;
    fVar10 = param_1[1];
    if (param_4 != '\x02') {
      if (param_4 == '\x01') {
        dVar11 = (double)fVar10;
        param_2[4] = (double)fVar3;
        param_2[5] = 0.0;
        goto LAB_1491936bd;
      }
      if (param_4 != '\0') goto switchD_149193321_default;
      dVar11 = 0.0;
      goto LAB_149193349;
    }
    dVar15 = (double)fVar10;
    dVar11 = (double)fVar3;
    goto LAB_149193658;
  case 4:
    fVar10 = param_1[2];
    fVar3 = param_1[1];
    dVar11 = (double)*param_1;
LAB_149193349:
    dVar15 = (double)fVar10;
    param_2[4] = dVar11;
    param_2[5] = (double)fVar3;
    break;
  case 5:
    dVar11 = (double)param_1[2];
    fVar10 = param_1[1];
    param_2[8] = (double)*param_1;
    param_2[9] = (double)fVar10;
    goto LAB_14919358f;
  case 6:
    local_80 = (double)param_1[2];
    local_88 = (double)param_1[1];
    local_90 = (double)*param_1;
    FUN_1467fb380(&local_78);
    FUN_144a7484c(&local_78,&local_d8);
    *param_2 = local_d8;
    param_2[1] = dStack_d0;
    param_2[2] = local_c8;
    param_2[3] = dStack_c0;
    goto switchD_149193321_default;
  case 7:
    dStack_60 = (double)param_1[3];
    local_68 = (double)param_1[2];
    dStack_70 = (double)param_1[1];
    local_78 = (double)*param_1;
    fVar10 = param_1[6];
    fVar3 = param_1[5];
    auVar14._0_8_ = (double)param_1[10];
    fVar1 = param_1[9];
    fVar2 = param_1[8];
    auVar14._8_8_ = 0;
    param_2[4] = (double)param_1[4];
    param_2[5] = (double)fVar3;
    param_2[6] = (double)fVar10;
    param_2[7] = 0.0;
    auVar12._8_4_ = SUB84(dStack_70,0);
    auVar12._0_8_ = local_78;
    auVar12._12_4_ = (int)((ulonglong)dStack_70 >> 0x20);
    auVar16._8_4_ = SUB84(dStack_60,0);
    auVar16._0_8_ = local_68;
    auVar16._12_4_ = (int)((ulonglong)dStack_60 >> 0x20);
    dVar11 = local_68 * local_68 + local_78 * local_78;
    dVar15 = auVar16._8_8_ * dStack_60 + auVar12._8_8_ * dStack_70;
    auVar17._0_8_ = dVar11 + dVar15;
    auVar17._8_8_ = dVar11 + dVar15;
    auVar4._8_4_ = SUB84((double)fVar1,0);
    auVar4._0_8_ = (double)fVar2;
    auVar4._12_4_ = (int)((ulonglong)(double)fVar1 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 8) = auVar4;
    *(undefined1 (*) [16])(param_2 + 10) = auVar14;
    goto LAB_14919360b;
  case 8:
    dStack_60 = (double)param_1[3];
    local_68 = (double)param_1[2];
    dStack_70 = (double)param_1[1];
    local_78 = (double)*param_1;
    fVar10 = param_1[6];
    fVar3 = param_1[5];
    auVar14._8_8_ = DAT_14c846518;
    auVar14._0_8_ = (double)DAT_14c846510;
    param_2[4] = (double)param_1[4];
    param_2[5] = (double)fVar3;
    param_2[6] = (double)fVar10;
    param_2[7] = 0.0;
    goto LAB_1491935ed;
  case 9:
    local_b0 = (double)param_1[2];
    local_b8 = (double)param_1[1];
    dStack_c0 = (double)*param_1;
    local_c8 = (double)param_1[5];
    dStack_d0 = (double)param_1[4];
    local_d8 = (double)param_1[3];
    local_98 = (double)param_1[8];
    dStack_a0 = (double)param_1[7];
    local_a8 = (double)param_1[6];
    FUN_144a7484c(&dStack_c0,&local_78);
    auVar14._8_8_ = dStack_a0;
    auVar14._0_8_ = local_a8;
    param_2[4] = local_d8;
    param_2[5] = dStack_d0;
    param_2[6] = local_c8;
    param_2[7] = 0.0;
    dVar11 = local_98;
LAB_1491935ed:
    dVar15 = local_68 * local_68 + local_78 * local_78;
    dVar19 = dStack_60 * dStack_60 + dStack_70 * dStack_70;
    auVar17._0_8_ = dVar15 + dVar19;
    auVar17._8_8_ = dVar15 + dVar19;
    *(undefined1 (*) [16])(param_2 + 8) = auVar14;
    param_2[10] = dVar11;
    param_2[0xb] = 0.0;
LAB_14919360b:
    uVar8 = -(ulonglong)(1e-08 <= auVar17._0_8_);
    uVar9 = -(ulonglong)(1e-08 <= auVar17._8_8_);
    auVar13._8_8_ = uVar9;
    auVar13._0_8_ = uVar8;
    auVar14 = sqrtpd(auVar14,auVar17);
    auVar17 = divpd(_DAT_149934d80,auVar14);
    auVar18._0_8_ = auVar17._0_8_ * local_68;
    auVar18._8_8_ = auVar17._8_8_ * dStack_60;
    auVar14 = blendvpd(_DAT_149935300,auVar18,auVar13);
    *param_2 = (double)((ulonglong)(local_78 * auVar17._0_8_) & uVar8);
    param_2[1] = (double)((ulonglong)(dStack_70 * auVar17._8_8_) & uVar9);
    *(undefined1 (*) [16])(param_2 + 2) = auVar14;
    goto switchD_149193321_default;
  case 10:
    dVar11 = (double)*param_1;
    param_2[8] = dVar11;
    param_2[9] = dVar11;
LAB_14919358f:
    param_2[10] = dVar11;
    param_2[0xb] = 0.0;
  default:
    goto switchD_149193321_default;
  }
  param_2[6] = dVar15;
  param_2[7] = 0.0;
switchD_149193321_default:
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149193700 FUN_149193700 body=196 status=ok
// SIG undefined FUN_149193700(void)

longlong * FUN_149193700(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1491937c6(0,&local_48);
  lVar4 = local_48;
  if ((longlong)local_40 != 0) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149192788(param_2,iVar1);
      }
      lVar3 = *param_2;
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar2 + 0x10);
      lVar5 = lVar5 + 8;
    } while ((longlong)local_40 * 8 != lVar5);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491937c6 FUN_1491937c6 body=310 status=ok
// SIG undefined FUN_1491937c6(void)

longlong * FUN_1491937c6(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  void *local_88;
  ulonglong uStack_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  void **local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == '\0') {
    iVar3 = *(int *)(param_1 + 0xc0);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar4 * 8);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\b')) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1491939c6(param_2,iVar3);
          }
          *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar2;
          iVar3 = *(int *)(param_1 + 0xc0);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  else {
    local_88 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 0xc0);
    uStack_80 = (ulonglong)uVar1;
    if ((longlong)(int)uVar1 != 0) {
      FUN_1401c3474(&local_88);
    }
    memset(local_88,0,(longlong)(int)uVar1);
    local_68 = 0;
    local_58 = &PTR_LAB_14bb58830;
    local_50 = &local_88;
    local_78[0] = &LAB_1491938fe;
    local_48 = param_2;
    FUN_14449bc3c(param_1,local_78,1);
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149193930 FUN_149193930 body=34 status=ok
// SIG undefined FUN_149193930(void)

undefined8 FUN_149193930(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 149193952 FUN_149193952 body=115 status=ok
// SIG undefined FUN_149193952(void)

void FUN_149193952(undefined8 *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c));
  *param_3 = bVar1 ^ 1;
  if (bVar1 == 0) {
    if ((param_2 != 0) && (*(char *)(param_2 + 0x10) == '\b')) {
      plVar3 = (longlong *)param_1[1];
      iVar2 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
        FUN_1491939c6(plVar3,iVar2);
      }
      *(longlong *)(*plVar3 + (longlong)iVar2 * 8) = param_2;
    }
    *(undefined1 *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c)) = 1;
  }
  return;
}



// FUNCTION 1491939c6 FUN_1491939c6 body=132 status=ok
// SIG undefined FUN_1491939c6(void)

void FUN_1491939c6(longlong param_1,int param_2)

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



// FUNCTION 149193a4c FUN_149193a4c body=63 status=ok
// SIG undefined FUN_149193a4c(void)

void FUN_149193a4c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149193a8c(param_1,uVar2,param_3);
  return;
}



// FUNCTION 149193a8c FUN_149193a8c body=127 status=ok
// SIG undefined FUN_149193a8c(void)

void FUN_149193a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc06330) {
    FUN_144b3d300(&DAT_14cc06330);
    if (DAT_14cc06330 == -1) {
      DAT_14cc06320 = 0;
      uRam000000014cc06328 = 0;
      atexit((_func_5014 *)&LAB_144488948);
      _Init_thread_footer(&DAT_14cc06330);
    }
  }
  FUN_149193b0c(param_1,param_2,param_3);
  return;
}



// FUNCTION 149193b0c FUN_149193b0c body=131 status=ok
// SIG undefined FUN_149193b0c(void)

undefined8 * FUN_149193b0c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar4 = &DAT_14cc06320;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,3);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + lVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149193b90 FUN_149193b90 body=71 status=ok
// SIG undefined FUN_149193b90(void)

void FUN_149193b90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149193bd8(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149193bd8 FUN_149193bd8 body=127 status=ok
// SIG undefined FUN_149193bd8(void)

longlong FUN_149193bd8(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,2);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      param_4 = *(int *)(lVar3 + 0x44) + lVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149193c58 FUN_149193c58 body=63 status=ok
// SIG undefined FUN_149193c58(void)

void FUN_149193c58(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149193c98(param_1,uVar2,param_3);
  return;
}



// FUNCTION 149193c98 FUN_149193c98 body=127 status=ok
// SIG undefined FUN_149193c98(void)

void FUN_149193c98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc06348) {
    FUN_144b3d300(&DAT_14cc06348);
    if (DAT_14cc06348 == -1) {
      DAT_14cc06338 = 0;
      uRam000000014cc06340 = 0;
      atexit((_func_5014 *)&LAB_144488959);
      _Init_thread_footer(&DAT_14cc06348);
    }
  }
  FUN_149193d18(param_1,param_2,param_3);
  return;
}



// FUNCTION 149193d18 FUN_149193d18 body=131 status=ok
// SIG undefined FUN_149193d18(void)

undefined8 * FUN_149193d18(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar4 = &DAT_14cc06338;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,5);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + lVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149193d9c FUN_149193d9c body=71 status=ok
// SIG undefined FUN_149193d9c(void)

void FUN_149193d9c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149193de4(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149193de4 FUN_149193de4 body=127 status=ok
// SIG undefined FUN_149193de4(void)

longlong FUN_149193de4(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,4);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      param_4 = *(int *)(lVar3 + 0x44) + lVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149193e64 FUN_149193e64 body=63 status=ok
// SIG undefined FUN_149193e64(void)

void FUN_149193e64(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149193ea4(param_1,uVar2,param_3);
  return;
}



// FUNCTION 149193ea4 FUN_149193ea4 body=127 status=ok
// SIG undefined FUN_149193ea4(void)

void FUN_149193ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc06360) {
    FUN_144b3d300(&DAT_14cc06360);
    if (DAT_14cc06360 == -1) {
      DAT_14cc06350 = 0;
      uRam000000014cc06358 = 0;
      atexit((_func_5014 *)&LAB_14448896a);
      _Init_thread_footer(&DAT_14cc06360);
    }
  }
  FUN_149193f24(param_1,param_2,param_3);
  return;
}



// FUNCTION 149193f24 FUN_149193f24 body=131 status=ok
// SIG undefined FUN_149193f24(void)

undefined8 * FUN_149193f24(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar4 = &DAT_14cc06350;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,0x11);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + lVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149193fa8 FUN_149193fa8 body=71 status=ok
// SIG undefined FUN_149193fa8(void)

void FUN_149193fa8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149193ff0(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149193ff0 FUN_149193ff0 body=139 status=ok
// SIG undefined FUN_149193ff0(void)

longlong FUN_149193ff0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                      longlong param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_4);
    local_30 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_30,param_3);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      param_5 = *(int *)(lVar3 + 0x44) + lVar2;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919407c FUN_14919407c body=55 status=ok
// SIG undefined FUN_14919407c(void)

void FUN_14919407c(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_1444a6446(param_1,uVar2);
  return;
}



// FUNCTION 1491940b4 FUN_1491940b4 body=71 status=ok
// SIG undefined FUN_1491940b4(void)

void FUN_1491940b4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_1491940fc(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 1491940fc FUN_1491940fc body=151 status=ok
// SIG undefined FUN_1491940fc(void)

void FUN_1491940fc(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc06428) {
    FUN_144b3d300(&DAT_14cc06428);
    if (DAT_14cc06428 == -1) {
      DAT_14cc06418 = 0;
      uRam000000014cc06420 = 0;
      atexit((_func_5014 *)&LAB_14448897b);
      _Init_thread_footer(&DAT_14cc06428);
    }
  }
  FUN_149194194(param_1,param_2,param_3,param_4,&DAT_14cc06418);
  return;
}



// FUNCTION 149194194 FUN_149194194 body=139 status=ok
// SIG undefined FUN_149194194(void)

longlong FUN_149194194(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                      longlong param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_4);
    local_30 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_30,param_3);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      param_5 = *(int *)(lVar3 + 0x44) + lVar2;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149194220 FUN_149194220 body=71 status=ok
// SIG undefined FUN_149194220(void)

void FUN_149194220(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149194268(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149194268 FUN_149194268 body=139 status=ok
// SIG undefined FUN_149194268(void)

longlong FUN_149194268(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                      longlong param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_4);
    local_30 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_30,param_3);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      param_5 = *(int *)(lVar3 + 0x44) + lVar2;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491942f4 FUN_1491942f4 body=196 status=ok
// SIG undefined FUN_1491942f4(void)

longlong * FUN_1491942f4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1491943ba(0,&local_48);
  lVar4 = local_48;
  if ((longlong)local_40 != 0) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149192788(param_2,iVar1);
      }
      lVar3 = *param_2;
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar2 + 0x10);
      lVar5 = lVar5 + 8;
    } while ((longlong)local_40 * 8 != lVar5);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491943ba FUN_1491943ba body=310 status=ok
// SIG undefined FUN_1491943ba(void)

longlong * FUN_1491943ba(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  void *local_88;
  ulonglong uStack_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  void **local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == '\0') {
    iVar3 = *(int *)(param_1 + 0xc0);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar4 * 8);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\x02')) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1491945ba(param_2,iVar3);
          }
          *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar2;
          iVar3 = *(int *)(param_1 + 0xc0);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  else {
    local_88 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 0xc0);
    uStack_80 = (ulonglong)uVar1;
    if ((longlong)(int)uVar1 != 0) {
      FUN_1401c3474(&local_88);
    }
    memset(local_88,0,(longlong)(int)uVar1);
    local_68 = 0;
    local_58 = &PTR_LAB_14bb582c0;
    local_50 = &local_88;
    local_78[0] = &LAB_1491944f2;
    local_48 = param_2;
    FUN_14449bc3c(param_1,local_78,1);
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149194524 FUN_149194524 body=34 status=ok
// SIG undefined FUN_149194524(void)

undefined8 FUN_149194524(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 149194546 FUN_149194546 body=115 status=ok
// SIG undefined FUN_149194546(void)

void FUN_149194546(undefined8 *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c));
  *param_3 = bVar1 ^ 1;
  if (bVar1 == 0) {
    if ((param_2 != 0) && (*(char *)(param_2 + 0x10) == '\x02')) {
      plVar3 = (longlong *)param_1[1];
      iVar2 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
        FUN_1491945ba(plVar3,iVar2);
      }
      *(longlong *)(*plVar3 + (longlong)iVar2 * 8) = param_2;
    }
    *(undefined1 *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c)) = 1;
  }
  return;
}



// FUNCTION 1491945ba FUN_1491945ba body=132 status=ok
// SIG undefined FUN_1491945ba(void)

void FUN_1491945ba(longlong param_1,int param_2)

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



// FUNCTION 149194640 FUN_149194640 body=196 status=ok
// SIG undefined FUN_149194640(void)

longlong * FUN_149194640(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140ad460c(0,&local_48);
  lVar4 = local_48;
  if ((longlong)local_40 != 0) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149192788(param_2,iVar1);
      }
      lVar3 = *param_2;
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar2 + 0x10);
      lVar5 = lVar5 + 8;
    } while ((longlong)local_40 * 8 != lVar5);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149194738 FUN_149194738 body=34 status=ok
// SIG undefined FUN_149194738(void)

undefined8 FUN_149194738(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14919475a FUN_14919475a body=115 status=ok
// SIG undefined FUN_14919475a(void)

void FUN_14919475a(undefined8 *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c));
  *param_3 = bVar1 ^ 1;
  if (bVar1 == 0) {
    if ((param_2 != 0) && (*(char *)(param_2 + 0x10) == '\x10')) {
      plVar3 = (longlong *)param_1[1];
      iVar2 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
        FUN_1491947ce(plVar3,iVar2);
      }
      *(longlong *)(*plVar3 + (longlong)iVar2 * 8) = param_2;
    }
    *(undefined1 *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c)) = 1;
  }
  return;
}



// FUNCTION 1491947ce FUN_1491947ce body=132 status=ok
// SIG undefined FUN_1491947ce(void)

void FUN_1491947ce(longlong param_1,int param_2)

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



// FUNCTION 149194854 FUN_149194854 body=93 status=ok
// SIG undefined FUN_149194854(void)

longlong FUN_149194854(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1491948b2(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 1491948b2 FUN_1491948b2 body=146 status=ok
// SIG undefined FUN_1491948b2(void)

longlong * FUN_1491948b2(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 149194944 FUN_149194944 body=63 status=ok
// SIG undefined FUN_149194944(void)

void FUN_149194944(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149194984(param_1,uVar2,param_3);
  return;
}



// FUNCTION 149194984 FUN_149194984 body=127 status=ok
// SIG undefined FUN_149194984(void)

void FUN_149194984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc06378) {
    FUN_144b3d300(&DAT_14cc06378);
    if (DAT_14cc06378 == -1) {
      DAT_14cc06368 = 0;
      uRam000000014cc06370 = 0;
      atexit((_func_5014 *)&LAB_14448898c);
      _Init_thread_footer(&DAT_14cc06378);
    }
  }
  FUN_149194a04(param_1,param_2,param_3);
  return;
}



// FUNCTION 149194a04 FUN_149194a04 body=131 status=ok
// SIG undefined FUN_149194a04(void)

undefined8 * FUN_149194a04(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar4 = &DAT_14cc06368;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,0xd);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + lVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149194a88 FUN_149194a88 body=71 status=ok
// SIG undefined FUN_149194a88(void)

void FUN_149194a88(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149194ad0(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149194ad0 FUN_149194ad0 body=127 status=ok
// SIG undefined FUN_149194ad0(void)

longlong FUN_149194ad0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,0xc);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      param_4 = *(int *)(lVar3 + 0x44) + lVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149194b50 FUN_149194b50 body=196 status=ok
// SIG undefined FUN_149194b50(void)

longlong * FUN_149194b50(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_149194c16(0,&local_48);
  lVar4 = local_48;
  if ((longlong)local_40 != 0) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149192788(param_2,iVar1);
      }
      lVar3 = *param_2;
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar2 + 0x10);
      lVar5 = lVar5 + 8;
    } while ((longlong)local_40 * 8 != lVar5);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149194c16 FUN_149194c16 body=310 status=ok
// SIG undefined FUN_149194c16(void)

longlong * FUN_149194c16(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  void *local_88;
  ulonglong uStack_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  void **local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == '\0') {
    iVar3 = *(int *)(param_1 + 0xc0);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar4 * 8);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == ' ')) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_149194e16(param_2,iVar3);
          }
          *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar2;
          iVar3 = *(int *)(param_1 + 0xc0);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  else {
    local_88 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 0xc0);
    uStack_80 = (ulonglong)uVar1;
    if ((longlong)(int)uVar1 != 0) {
      FUN_1401c3474(&local_88);
    }
    memset(local_88,0,(longlong)(int)uVar1);
    local_68 = 0;
    local_58 = &PTR_LAB_14bb582e0;
    local_50 = &local_88;
    local_78[0] = &LAB_149194d4e;
    local_48 = param_2;
    FUN_14449bc3c(param_1,local_78,1);
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149194d80 FUN_149194d80 body=34 status=ok
// SIG undefined FUN_149194d80(void)

undefined8 FUN_149194d80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 149194da2 FUN_149194da2 body=115 status=ok
// SIG undefined FUN_149194da2(void)

void FUN_149194da2(undefined8 *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c));
  *param_3 = bVar1 ^ 1;
  if (bVar1 == 0) {
    if ((param_2 != 0) && (*(char *)(param_2 + 0x10) == ' ')) {
      plVar3 = (longlong *)param_1[1];
      iVar2 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
        FUN_149194e16(plVar3,iVar2);
      }
      *(longlong *)(*plVar3 + (longlong)iVar2 * 8) = param_2;
    }
    *(undefined1 *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c)) = 1;
  }
  return;
}



// FUNCTION 149194e16 FUN_149194e16 body=132 status=ok
// SIG undefined FUN_149194e16(void)

void FUN_149194e16(longlong param_1,int param_2)

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



// FUNCTION 149194e9c FUN_149194e9c body=63 status=ok
// SIG undefined FUN_149194e9c(void)

void FUN_149194e9c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149194edc(param_1,uVar2,param_3);
  return;
}



// FUNCTION 149194edc FUN_149194edc body=127 status=ok
// SIG undefined FUN_149194edc(void)

void FUN_149194edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc06390) {
    FUN_144b3d300(&DAT_14cc06390);
    if (DAT_14cc06390 == -1) {
      DAT_14cc06380 = 0;
      uRam000000014cc06388 = 0;
      atexit((_func_5014 *)&LAB_14448899d);
      _Init_thread_footer(&DAT_14cc06390);
    }
  }
  FUN_149194f5c(param_1,param_2,param_3);
  return;
}



// FUNCTION 149194f5c FUN_149194f5c body=131 status=ok
// SIG undefined FUN_149194f5c(void)

undefined8 * FUN_149194f5c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar4 = &DAT_14cc06380;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,0x13);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + lVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149194fe0 FUN_149194fe0 body=71 status=ok
// SIG undefined FUN_149194fe0(void)

void FUN_149194fe0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149195028(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149195028 FUN_149195028 body=139 status=ok
// SIG undefined FUN_149195028(void)

longlong FUN_149195028(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                      longlong param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_4);
    local_30 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_30,param_3);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      param_5 = *(int *)(lVar3 + 0x44) + lVar2;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491950b4 FUN_1491950b4 body=25 status=ok
// SIG undefined FUN_1491950b4(void)

bool FUN_1491950b4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_1491db806(*param_1,*(undefined4 *)(param_2 + 0x1c));
  return iVar1 == 0;
}



// FUNCTION 1491950ce FUN_1491950ce body=63 status=ok
// SIG undefined FUN_1491950ce(void)

void FUN_1491950ce(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_14919510e(param_1,uVar2,param_3);
  return;
}



// FUNCTION 14919510e FUN_14919510e body=127 status=ok
// SIG undefined FUN_14919510e(void)

void FUN_14919510e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc063a8) {
    FUN_144b3d300(&DAT_14cc063a8);
    if (DAT_14cc063a8 == -1) {
      DAT_14cc06398 = 0;
      uRam000000014cc063a0 = 0;
      atexit((_func_5014 *)&LAB_1444889ae);
      _Init_thread_footer(&DAT_14cc063a8);
    }
  }
  FUN_14919518e(param_1,param_2,param_3);
  return;
}



// FUNCTION 14919518e FUN_14919518e body=131 status=ok
// SIG undefined FUN_14919518e(void)

undefined8 * FUN_14919518e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar4 = &DAT_14cc06398;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,0xb);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + lVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149195212 FUN_149195212 body=71 status=ok
// SIG undefined FUN_149195212(void)

void FUN_149195212(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_14919525a(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 14919525a FUN_14919525a body=127 status=ok
// SIG undefined FUN_14919525a(void)

longlong FUN_14919525a(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,10);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      param_4 = *(int *)(lVar3 + 0x44) + lVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491952da FUN_1491952da body=196 status=ok
// SIG undefined FUN_1491952da(void)

longlong * FUN_1491952da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1491953a0(0,&local_48);
  lVar4 = local_48;
  if ((longlong)local_40 != 0) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149192788(param_2,iVar1);
      }
      lVar3 = *param_2;
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar2 + 0x10);
      lVar5 = lVar5 + 8;
    } while ((longlong)local_40 * 8 != lVar5);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491953a0 FUN_1491953a0 body=311 status=ok
// SIG undefined FUN_1491953a0(void)

longlong * FUN_1491953a0(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  void *local_88;
  ulonglong uStack_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  void **local_50;
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == '\0') {
    iVar3 = *(int *)(param_1 + 0xc0);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar4 * 8);
        if ((lVar2 != 0) && (SBORROW1('\0',*(char *)(lVar2 + 0x10)))) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1491955a0(param_2,iVar3);
          }
          *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar2;
          iVar3 = *(int *)(param_1 + 0xc0);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  else {
    local_88 = (void *)0x0;
    uVar1 = *(uint *)(param_1 + 0xc0);
    uStack_80 = (ulonglong)uVar1;
    if ((longlong)(int)uVar1 != 0) {
      FUN_1401c3474(&local_88);
    }
    memset(local_88,0,(longlong)(int)uVar1);
    local_68 = 0;
    local_58 = &PTR_LAB_14bb58c90;
    local_50 = &local_88;
    local_78[0] = &LAB_1491954d8;
    local_48 = param_2;
    FUN_14449bc3c(param_1,local_78,1);
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14919550a FUN_14919550a body=34 status=ok
// SIG undefined FUN_14919550a(void)

undefined8 FUN_14919550a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14919552c FUN_14919552c body=116 status=ok
// SIG undefined FUN_14919552c(void)

void FUN_14919552c(undefined8 *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c));
  *param_3 = bVar1 ^ 1;
  if (bVar1 == 0) {
    if ((param_2 != 0) && (SBORROW1('\0',*(char *)(param_2 + 0x10)))) {
      plVar3 = (longlong *)param_1[1];
      iVar2 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
        FUN_1491955a0(plVar3,iVar2);
      }
      *(longlong *)(*plVar3 + (longlong)iVar2 * 8) = param_2;
    }
    *(undefined1 *)(*(longlong *)*param_1 + (longlong)*(int *)(param_2 + 0x1c)) = 1;
  }
  return;
}



// FUNCTION 1491955a0 FUN_1491955a0 body=132 status=ok
// SIG undefined FUN_1491955a0(void)

void FUN_1491955a0(longlong param_1,int param_2)

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



// FUNCTION 149195626 FUN_149195626 body=63 status=ok
// SIG undefined FUN_149195626(void)

void FUN_149195626(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149195666(param_1,uVar2,param_3);
  return;
}



// FUNCTION 149195666 FUN_149195666 body=127 status=ok
// SIG undefined FUN_149195666(void)

void FUN_149195666(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc063c0) {
    FUN_144b3d300(&DAT_14cc063c0);
    if (DAT_14cc063c0 == -1) {
      DAT_14cc063b0 = 0;
      uRam000000014cc063b8 = 0;
      atexit((_func_5014 *)&LAB_1444889bf);
      _Init_thread_footer(&DAT_14cc063c0);
    }
  }
  FUN_1491956e6(param_1,param_2,param_3);
  return;
}



// FUNCTION 1491956e6 FUN_1491956e6 body=131 status=ok
// SIG undefined FUN_1491956e6(void)

undefined8 * FUN_1491956e6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar4 = &DAT_14cc063b0;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,0xf);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + lVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919576a FUN_14919576a body=71 status=ok
// SIG undefined FUN_14919576a(void)

void FUN_14919576a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_1491957b2(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 1491957b2 FUN_1491957b2 body=127 status=ok
// SIG undefined FUN_1491957b2(void)

longlong FUN_1491957b2(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,0xe);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      param_4 = *(int *)(lVar3 + 0x44) + lVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149195832 FUN_149195832 body=63 status=ok
// SIG undefined FUN_149195832(void)

void FUN_149195832(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149195872(param_1,uVar2,param_3);
  return;
}



// FUNCTION 149195872 FUN_149195872 body=127 status=ok
// SIG undefined FUN_149195872(void)

void FUN_149195872(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc063d8) {
    FUN_144b3d300(&DAT_14cc063d8);
    if (DAT_14cc063d8 == -1) {
      DAT_14cc063c8 = 0;
      uRam000000014cc063d0 = 0;
      atexit((_func_5014 *)&LAB_1444889d0);
      _Init_thread_footer(&DAT_14cc063d8);
    }
  }
  FUN_1491958f2(param_1,param_2,param_3);
  return;
}



// FUNCTION 1491958f2 FUN_1491958f2 body=131 status=ok
// SIG undefined FUN_1491958f2(void)

undefined8 * FUN_1491958f2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar4 = &DAT_14cc063c8;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,9);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + lVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149195976 FUN_149195976 body=71 status=ok
// SIG undefined FUN_149195976(void)

void FUN_149195976(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_1491959be(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 1491959be FUN_1491959be body=127 status=ok
// SIG undefined FUN_1491959be(void)

longlong FUN_1491959be(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    lVar2 = thunk_FUN_1491e0c5e(param_1,param_2,&local_28,8);
    if (lVar2 != 0) {
      lVar3 = FUN_1491929d8(lVar2);
      param_4 = *(int *)(lVar3 + 0x44) + lVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149195a3e FUN_149195a3e body=71 status=ok
// SIG undefined FUN_149195a3e(void)

void FUN_149195a3e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149195a86(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149195a86 FUN_149195a86 body=153 status=ok
// SIG undefined FUN_149195a86(void)

undefined8 FUN_149195a86(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,1);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0x10) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_149195aa3;
      }
    }
  }
  uVar4 = 0;
LAB_149195aa3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149195b20 FUN_149195b20 body=71 status=ok
// SIG undefined FUN_149195b20(void)

void FUN_149195b20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149195b68(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149195b68 FUN_149195b68 body=166 status=ok
// SIG undefined FUN_149195b68(void)

undefined4 FUN_149195b68(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar2 = (undefined8 *)FUN_149192960(param_3);
    local_30 = *puVar2;
    local_38 = 1;
    uVar1 = 0;
    plVar3 = (longlong *)FUN_1491e0882(param_1,param_2,&local_30,0);
    if (param_4 == 0 || plVar3 == (longlong *)0x0) goto LAB_149195b87;
    lVar4 = FUN_1491929d8(plVar3);
    if (*(int *)(lVar4 + 0x34) == 1) {
      uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,param_4);
      goto LAB_149195b87;
    }
  }
  uVar1 = 0;
LAB_149195b87:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149195c10 FUN_149195c10 body=98 status=ok
// SIG undefined FUN_149195c10(void)

void FUN_149195c10(longlong param_1,int param_2,int param_3)

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



// FUNCTION 149195c72 FUN_149195c72 body=52 status=ok
// SIG undefined FUN_149195c72(void)

void FUN_149195c72(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_149195ca6(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 149195ca6 FUN_149195ca6 body=156 status=ok
// SIG undefined FUN_149195ca6(void)

undefined8 * FUN_149195ca6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 149195d42 FUN_149195d42 body=61 status=ok
// SIG undefined FUN_149195d42(void)

void FUN_149195d42(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 149195d80 FUN_149195d80 body=162 status=ok
// SIG undefined FUN_149195d80(void)

undefined8 * FUN_149195d80(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_149192186(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_149192186(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 0xc);
  }
  return param_1;
}



// FUNCTION 149195e22 FUN_149195e22 body=71 status=ok
// SIG undefined FUN_149195e22(void)

void FUN_149195e22(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149195e6a(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149195e6a FUN_149195e6a body=153 status=ok
// SIG undefined FUN_149195e6a(void)

undefined8 FUN_149195e6a(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,3);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0x10) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_149195e87;
      }
    }
  }
  uVar4 = 0;
LAB_149195e87:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149195f04 FUN_149195f04 body=71 status=ok
// SIG undefined FUN_149195f04(void)

void FUN_149195f04(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149195f4c(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149195f4c FUN_149195f4c body=153 status=ok
// SIG undefined FUN_149195f4c(void)

undefined8 FUN_149195f4c(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,2);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 4) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_149195f69;
      }
    }
  }
  uVar4 = 0;
LAB_149195f69:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149195fe6 FUN_149195fe6 body=71 status=ok
// SIG undefined FUN_149195fe6(void)

void FUN_149195fe6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_14919602e(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 14919602e FUN_14919602e body=153 status=ok
// SIG undefined FUN_14919602e(void)

undefined8 FUN_14919602e(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,5);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0x10) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_14919604b;
      }
    }
  }
  uVar4 = 0;
LAB_14919604b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491960c8 FUN_1491960c8 body=71 status=ok
// SIG undefined FUN_1491960c8(void)

void FUN_1491960c8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149196110(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149196110 FUN_149196110 body=153 status=ok
// SIG undefined FUN_149196110(void)

undefined8 FUN_149196110(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,4);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 4) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_14919612d;
      }
    }
  }
  uVar4 = 0;
LAB_14919612d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491961aa FUN_1491961aa body=71 status=ok
// SIG undefined FUN_1491961aa(void)

void FUN_1491961aa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_1491961f2(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 1491961f2 FUN_1491961f2 body=153 status=ok
// SIG undefined FUN_1491961f2(void)

undefined8 FUN_1491961f2(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,0x11);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0x10) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_14919620f;
      }
    }
  }
  uVar4 = 0;
LAB_14919620f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919628c FUN_14919628c body=71 status=ok
// SIG undefined FUN_14919628c(void)

void FUN_14919628c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_1491962d4(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 1491962d4 FUN_1491962d4 body=168 status=ok
// SIG undefined FUN_1491962d4(void)

undefined8
FUN_1491962d4(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_4);
    local_30 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_30,param_3);
    if (param_5 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0x10) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_5);
        goto LAB_1491962f3;
      }
    }
  }
  uVar4 = 0;
LAB_1491962f3:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919637e FUN_14919637e body=71 status=ok
// SIG undefined FUN_14919637e(void)

void FUN_14919637e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_1491963c6(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 1491963c6 FUN_1491963c6 body=153 status=ok
// SIG undefined FUN_1491963c6(void)

undefined8 FUN_1491963c6(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,7);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0x10) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_1491963e3;
      }
    }
  }
  uVar4 = 0;
LAB_1491963e3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149196460 FUN_149196460 body=71 status=ok
// SIG undefined FUN_149196460(void)

void FUN_149196460(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_1491964a8(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 1491964a8 FUN_1491964a8 body=168 status=ok
// SIG undefined FUN_1491964a8(void)

undefined8
FUN_1491964a8(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_4);
    local_30 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_30,param_3);
    if (param_5 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 8) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_5);
        goto LAB_1491964c7;
      }
    }
  }
  uVar4 = 0;
LAB_1491964c7:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149196552 FUN_149196552 body=93 status=ok
// SIG undefined FUN_149196552(void)

void FUN_149196552(void)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = local_28;
  local_28[0] = 0;
  local_28[1] = 0;
  local_30 = 0x3f800000;
  FUN_1491ddba4();
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491965b0 FUN_1491965b0 body=114 status=ok
// SIG undefined FUN_1491965b0(void)

void FUN_1491965b0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x110,0x10);
    iVar2 = (int)(uVar1 / 0x110);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x110,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149196622 FUN_149196622 body=71 status=ok
// SIG undefined FUN_149196622(void)

void FUN_149196622(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_14919666a(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 14919666a FUN_14919666a body=153 status=ok
// SIG undefined FUN_14919666a(void)

undefined8 FUN_14919666a(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,0xd);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0x10) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_149196687;
      }
    }
  }
  uVar4 = 0;
LAB_149196687:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149196704 FUN_149196704 body=71 status=ok
// SIG undefined FUN_149196704(void)

void FUN_149196704(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_14919674c(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 14919674c FUN_14919674c body=153 status=ok
// SIG undefined FUN_14919674c(void)

undefined8 FUN_14919674c(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,0xc);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0x20) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_149196769;
      }
    }
  }
  uVar4 = 0;
LAB_149196769:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491967e6 FUN_1491967e6 body=71 status=ok
// SIG undefined FUN_1491967e6(void)

void FUN_1491967e6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_14919682e(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 14919682e FUN_14919682e body=153 status=ok
// SIG undefined FUN_14919682e(void)

undefined8 FUN_14919682e(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,0x13);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0x10) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_14919684b;
      }
    }
  }
  uVar4 = 0;
LAB_14919684b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491968c8 FUN_1491968c8 body=71 status=ok
// SIG undefined FUN_1491968c8(void)

void FUN_1491968c8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149196910(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149196910 FUN_149196910 body=168 status=ok
// SIG undefined FUN_149196910(void)

undefined8
FUN_149196910(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_4);
    local_30 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_30,param_3);
    if (param_5 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0xc) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_5);
        goto LAB_14919692f;
      }
    }
  }
  uVar4 = 0;
LAB_14919692f:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491969ba FUN_1491969ba body=71 status=ok
// SIG undefined FUN_1491969ba(void)

void FUN_1491969ba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149196a02(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149196a02 FUN_149196a02 body=153 status=ok
// SIG undefined FUN_149196a02(void)

undefined8 FUN_149196a02(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,0xb);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0x10) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_149196a1f;
      }
    }
  }
  uVar4 = 0;
LAB_149196a1f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149196a9c FUN_149196a9c body=71 status=ok
// SIG undefined FUN_149196a9c(void)

void FUN_149196a9c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149196ae4(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149196ae4 FUN_149196ae4 body=153 status=ok
// SIG undefined FUN_149196ae4(void)

undefined8 FUN_149196ae4(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,10);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0x18) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_149196b01;
      }
    }
  }
  uVar4 = 0;
LAB_149196b01:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149196b7e FUN_149196b7e body=71 status=ok
// SIG undefined FUN_149196b7e(void)

void FUN_149196b7e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149196bc6(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149196bc6 FUN_149196bc6 body=153 status=ok
// SIG undefined FUN_149196bc6(void)

undefined8 FUN_149196bc6(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,0xf);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0x10) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_149196be3;
      }
    }
  }
  uVar4 = 0;
LAB_149196be3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149196c60 FUN_149196c60 body=71 status=ok
// SIG undefined FUN_149196c60(void)

void FUN_149196c60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149196ca8(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149196ca8 FUN_149196ca8 body=153 status=ok
// SIG undefined FUN_149196ca8(void)

undefined8 FUN_149196ca8(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,0xe);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0x60) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_149196cc5;
      }
    }
  }
  uVar4 = 0;
LAB_149196cc5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149196d42 FUN_149196d42 body=71 status=ok
// SIG undefined FUN_149196d42(void)

void FUN_149196d42(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149196d8a(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149196d8a FUN_149196d8a body=153 status=ok
// SIG undefined FUN_149196d8a(void)

undefined8 FUN_149196d8a(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,9);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0x10) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_149196da7;
      }
    }
  }
  uVar4 = 0;
LAB_149196da7:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149196e24 FUN_149196e24 body=71 status=ok
// SIG undefined FUN_149196e24(void)

void FUN_149196e24(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_149196e6c(param_1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 149196e6c FUN_149196e6c body=153 status=ok
// SIG undefined FUN_149196e6c(void)

undefined8 FUN_149196e6c(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FUN_149192960(param_3);
    local_28 = *puVar1;
    local_38 = 1;
    plVar2 = (longlong *)FUN_1491e0882(param_1,param_2,&local_28,8);
    if (param_4 != 0 && plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1491929d8(plVar2);
      if (*(int *)(lVar3 + 0x34) == 0x18) {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
        goto LAB_149196e89;
      }
    }
  }
  uVar4 = 0;
LAB_149196e89:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149196f4c FUN_149196f4c body=122 status=ok
// SIG undefined FUN_149196f4c(void)

undefined8 * FUN_149196f4c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14bb58d80;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_149192186(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 0xc);
  }
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 149196fd8 FUN_149196fd8 body=62 status=ok
// SIG undefined FUN_149196fd8(void)

undefined8 * FUN_149196fd8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb58d80;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 149197016 FUN_149197016 body=139 status=ok
// SIG undefined FUN_149197016(void)

int FUN_149197016(longlong *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar3 = 0;
    do {
      if ((*(longlong *)(lVar4 + 4 + uVar3) == *(longlong *)(param_2 + 4)) &&
         (*(char *)(lVar4 + uVar3) == *param_2)) {
        iVar2 = (int)(uVar3 >> 2) * -0x55555555;
        if (iVar2 != -1) {
          return iVar2;
        }
        break;
      }
      uVar3 = uVar3 + 0xc;
    } while (lVar5 * 0xc != uVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149192788(param_1,iVar1);
    lVar4 = *param_1;
  }
  *(undefined4 *)(lVar4 + 8 + lVar5 * 0xc) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(lVar4 + lVar5 * 0xc) = *(undefined8 *)param_2;
  return iVar1;
}



// FUNCTION 1491970a2 FUN_1491970a2 body=54 status=ok
// SIG undefined FUN_1491970a2(void)

void FUN_1491970a2(longlong *param_1)

{
  FUN_1491970d8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1491970d8 FUN_1491970d8 body=128 status=ok
// SIG undefined FUN_1491970d8(void)

void FUN_1491970d8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 149197159 FUN_149197159 body=42 status=ok
// SIG undefined FUN_149197159(void)

void FUN_149197159(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      FUN_149189aca(param_1);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 149197183 FUN_149197183 body=53 status=ok
// SIG undefined FUN_149197183(void)

void FUN_149197183(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x90);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1491971b8 FUN_1491971b8 body=88 status=ok
// SIG undefined FUN_1491971b8(void)

void FUN_1491971b8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 6,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 6)) {
    uVar3 = uVar1 >> 6 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x40,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 149197210 FUN_149197210 body=69 status=ok
// SIG undefined FUN_149197210(void)

void FUN_149197210(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1 = param_1 + 0x18;
  param_2 = param_2 + 0x18;
  do {
    *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
    uVar1 = *(undefined4 *)(param_2 + -0x14);
    uVar2 = *(undefined4 *)(param_2 + -0x10);
    uVar3 = *(undefined4 *)(param_2 + -0xc);
    *(undefined4 *)(param_1 + -0x18) = *(undefined4 *)(param_2 + -0x18);
    *(undefined4 *)(param_1 + -0x14) = uVar1;
    *(undefined4 *)(param_1 + -0x10) = uVar2;
    *(undefined4 *)(param_1 + -0xc) = uVar3;
    FUN_149189a2a(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 149197256 FUN_149197256 body=105 status=ok
// SIG undefined FUN_149197256(void)

undefined8 FUN_149197256(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0xa0,0x10);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0xa0)) {
    uVar5 = uVar2 / 0xa0 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0xa0,0x10);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1491972bf FUN_1491972bf body=152 status=ok
// SIG undefined FUN_1491972bf(void)

void FUN_1491972bf(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x90);
  do {
    memcpy(puVar2 + -0x12,param_2,0x90);
    *puVar2 = 0;
    iVar1 = *(int *)((longlong)param_2 + 0x98);
    _Src = *(void **)((longlong)param_2 + 0x90);
    *(int *)(puVar2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar2,iVar1,0);
      memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 2);
    }
    param_2 = (void *)((longlong)param_2 + 0xa0);
    puVar2 = puVar2 + 0x14;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 149197358 FUN_149197358 body=115 status=ok
// SIG undefined FUN_149197358(void)

void FUN_149197358(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1491973cc FUN_1491973cc body=141 status=ok
// SIG undefined FUN_1491973cc(void)

undefined8 * FUN_1491973cc(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14919745a();
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_14919754a(param_1 + 10,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 14919745a FUN_14919745a body=122 status=ok
// SIG undefined FUN_14919745a(void)

longlong FUN_14919745a(longlong param_1,longlong param_2)

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
    FUN_1491974d4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1491974d4 FUN_1491974d4 body=117 status=ok
// SIG undefined FUN_1491974d4(void)

undefined8 * FUN_1491974d4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1456e4574(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x38);
    }
  }
  return param_1;
}



// FUNCTION 14919754a FUN_14919754a body=122 status=ok
// SIG undefined FUN_14919754a(void)

longlong FUN_14919754a(longlong param_1,longlong param_2)

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
    FUN_1491975c4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1491975c4 FUN_1491975c4 body=115 status=ok
// SIG undefined FUN_1491975c4(void)

undefined8 * FUN_1491975c4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14128f79e(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1405b363e(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 149197637 FUN_149197637 body=55 status=ok
// SIG undefined FUN_149197637(void)

void FUN_149197637(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc06438 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc06438 = FUN_14171c317(FUN_1466c7f5e,uVar1,L"ERigTransformType");
  }
  return;
}



// FUNCTION 1491976be FUN_1491976be body=441 status=ok
// SIG undefined FUN_1491976be(void)

void FUN_1491976be(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_149197878(param_2,&local_40);
  lVar1 = *(longlong *)(param_1 + 0x260);
  if ((((lVar1 == 0) || (lVar3 = FUN_1401242c6(), lVar3 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
       lVar3 + 0x30 || (*(longlong *)(param_1 + 0x260) == 0)))) {
    FUN_140056680(&local_60,&DAT_149e01fe8);
  }
  else {
    local_50 = *(longlong *)(*(longlong *)(param_1 + 0x260) + 0x18);
    FUN_1400021e4(&local_50,&local_60);
  }
  puVar5 = local_60;
  if (local_58 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_50,L"(%s)",puVar5);
  iVar2 = local_48 + -1;
  if (local_48 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(&local_40,local_50,iVar2);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_40;
  local_70 = (void *)0x0;
  local_68 = local_38;
  if ((longlong)local_38 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_38,0);
    memcpy(local_70,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_70,0);
  local_88 = 0;
  uStack_80 = 0;
  uVar4 = FUN_147906f5e(param_2,0x3f800000);
  FUN_147906d38(param_1 + 0x60,uVar4);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149197878 FUN_149197878 body=256 status=ok
// SIG undefined FUN_149197878(void)

undefined8 FUN_149197878(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cc06880 == 0) {
    uVar2 = FUN_1408c25db();
    DAT_14cc06880 = FUN_140002ddd(FUN_1466c95bd,uVar2,L"AnimNode_ControlRig");
  }
  local_48 = *(undefined8 *)(DAT_14cc06880 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14919797a FUN_14919797a body=38 status=ok
// SIG undefined FUN_14919797a(void)

void FUN_14919797a(longlong param_1,undefined8 param_2)

{
  FUN_141339014();
  FUN_140320438(param_1 + 0x60,param_2);
  return;
}



// FUNCTION 1491979a0 FUN_1491979a0 body=158 status=ok
// SIG undefined FUN_1491979a0(void)

void FUN_1491979a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x268);
  if ((((lVar2 == 0) || (lVar1 = FUN_1401242c6(), lVar1 == 0)) ||
      (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
       lVar1 + 0x30 || (*(longlong *)(param_1 + 0x268) == 0)))) {
    lVar2 = *(longlong *)(param_1 + 0x260);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x260);
      }
    }
    *(longlong *)(param_1 + 0x268) = lVar2;
  }
  lVar2 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  *(longlong *)(param_1 + 0x260) = lVar2;
  return;
}



// FUNCTION 149197a3e FUN_149197a3e body=908 status=ok
// SIG undefined FUN_149197a3e(void)

undefined8 * FUN_149197a3e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140817052(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_144a69486(param_1 + 2,param_2 + 2);
  uVar4 = *(undefined4 *)(param_2 + 6);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 7);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar9 = *(undefined4 *)(param_2 + 9);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar8;
  *(undefined4 *)(param_1 + 9) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar10;
  *(undefined4 *)(param_1 + 6) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 7) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar7;
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  pvVar2 = (void *)param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_2 + 0x11);
  pvVar2 = (void *)param_2[0x10];
  *(int *)(param_1 + 0x11) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_1408f8e5c(param_1 + 0x10,iVar1,0);
    memcpy((void *)param_1[0x10],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x13);
  pvVar2 = (void *)param_2[0x12];
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_1408f8e5c(param_1 + 0x12,iVar1,0);
    memcpy((void *)param_1[0x12],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x14] = 0;
  iVar1 = *(int *)(param_2 + 0x15);
  pvVar2 = (void *)param_2[0x14];
  *(int *)(param_1 + 0x15) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_1470d34e2(param_1 + 0x14,iVar1,0);
    memcpy((void *)param_1[0x14],pvVar2,(longlong)iVar1 * 0xc);
  }
  FUN_1491c1012(param_1 + 0x16,param_2 + 0x16);
  param_1[0x1a] = 0;
  iVar1 = *(int *)(param_2 + 0x1b);
  pvVar2 = (void *)param_2[0x1a];
  *(int *)(param_1 + 0x1b) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  }
  else {
    FUN_1470d3624(param_1 + 0x1a,iVar1,0);
    memcpy((void *)param_1[0x1a],pvVar2,(longlong)iVar1 * 0xc);
  }
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  param_1[0x1d] = param_2[0x1d];
  lVar3 = param_2[0x1e];
  param_1[0x1e] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)((longlong)param_1 + 0xfc) = *(undefined1 *)((longlong)param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  FUN_1470d3698(param_1 + 0x20,param_2 + 0x20);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 2;
  if (param_2 != param_1) {
    FUN_1470d3958(param_1 + 0x2a,param_2 + 0x2a);
  }
  return param_1;
}



// FUNCTION 149197dca FUN_149197dca body=99 status=ok
// SIG undefined FUN_149197dca(void)

undefined8 * FUN_149197dca(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  *param_1 = param_2;
  lVar1 = *param_2;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    param_2 = (longlong *)*param_1;
  }
  lVar1 = *param_3;
  if ((DAT_14c950c29 & 1) != 0) {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_3;
    }
  }
  *param_2 = lVar1;
  return param_1;
}



// FUNCTION 149197e2e FUN_149197e2e body=412 status=ok
// SIG undefined FUN_149197e2e(void)

void FUN_149197e2e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  code *local_60;
  longlong *local_58;
  longlong local_50;
  char local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    cVar2 = FUN_144729dda(lVar4 + 0x30);
    if (((cVar2 != '\0') && (*(longlong *)(lVar4 + 0x48) != 0)) && (0 < *(int *)(lVar4 + 8))) {
      lVar4 = *(longlong *)(param_2 + 0x10);
      cVar2 = FUN_144729dda(lVar4 + 0x30);
      if (((cVar2 != '\0') && (*(longlong *)(lVar4 + 0x48) != 0)) && (0 < *(int *)(lVar4 + 8))) {
        local_58 = &local_70;
        local_60 = FUN_140036a08;
        lVar4 = FUN_144a773aa(&local_60,&DAT_14c7585d0);
        local_60 = (code *)(lVar4 + 0x10);
        local_58 = *(longlong **)(lVar4 + 0x10);
        local_50 = *(longlong *)(lVar4 + 0x20);
        local_48 = '\0';
        local_40 = *(undefined8 *)(lVar4 + 0x28);
        *(code ***)(lVar4 + 0x28) = &local_60;
        *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
        lVar4 = *(longlong *)(param_1 + 0x2f8);
        iVar3 = *(int *)(lVar4 + 0xc0);
        local_70 = param_1;
        local_68 = param_2;
        if (0 < iVar3) {
          lVar5 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + lVar5 * 8);
            if ((lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '\x01')) {
              local_38 = lVar1;
              FUN_144495a68(&local_70,&local_38);
              iVar3 = *(int *)(lVar4 + 0xc0);
            }
            lVar5 = lVar5 + 1;
          } while (lVar5 < iVar3);
        }
        *(undefined1 *)(param_1 + 0x7c9) = 0;
        FUN_141357988(param_1);
        if (local_48 == '\0') {
          local_48 = '\x01';
          *(int *)(local_60 + 0x20) = *(int *)(local_60 + 0x20) + -1;
          if (local_50 != *(longlong *)(local_60 + 0x10)) {
            FUN_14004673c();
          }
          *(longlong **)local_60 = local_58;
          *(undefined8 *)(local_60 + 0x18) = local_40;
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149197ff6 FUN_149197ff6 body=1194 status=ok
// SIG undefined FUN_149197ff6(void)

void FUN_149197ff6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  longlong *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong local_60;
  int local_58;
  undefined2 local_4c;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1491f837e();
  *(undefined8 *)(param_1 + 0x180) = param_2;
  FUN_1491f8cde(param_1);
  FUN_1491984a2(*(undefined8 *)(param_1 + 0x180),&local_60);
  lVar6 = local_60;
  lVar11 = (longlong)local_58;
  if (lVar11 == 0) {
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
  }
  else {
    lVar9 = 0;
    do {
      FUN_1401571e4(*(undefined8 *)(param_1 + 0x180),&local_c8,*(undefined8 *)(lVar6 + lVar9),0);
      FUN_1401571e4(*(undefined8 *)(param_1 + 0x180),&local_c8);
      lVar9 = lVar9 + 8;
    } while (lVar11 * 8 != lVar9);
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    if ((longlong)local_58 != 0) {
      lVar6 = 0;
      do {
        FUN_14448a130(param_1,&local_c8);
        lVar6 = lVar6 + 8;
      } while ((longlong)local_58 * 8 != lVar6);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(int *)(param_1 + 0x17c) < 0) {
    FUN_1491c751e(plVar1,0);
  }
  if ((int)uStack_c0 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((int)uStack_c0 * 3);
  }
  if (*(int *)(param_1 + 0x17c) < (int)uStack_c0 * 3) {
    FUN_1491c751e(plVar1);
  }
  if ((int)uStack_c0 != 0) {
    plVar8 = local_c8 + (int)uStack_c0;
    plVar10 = local_c8;
    local_e0 = plVar8;
    do {
      lVar6 = *plVar10;
      bVar3 = true;
      if (lVar6 == 0) {
LAB_149198311:
        lVar11 = 0;
LAB_149198313:
        iVar4 = *(int *)(param_1 + 0x178);
        *(uint *)(param_1 + 0x178) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x17c) < iVar4 + 1U) {
          FUN_1491c757e(plVar1,iVar4);
          plVar8 = local_e0;
        }
        lVar9 = lVar6 + 0x10;
        lVar7 = lVar6 + 0x1c;
        lVar13 = *plVar1;
        lVar12 = (longlong)iVar4 * 0x20;
        *(longlong *)(lVar13 + lVar12) = lVar9;
        *(longlong *)(lVar13 + 8 + lVar12) = lVar7;
        *(undefined8 *)(lVar13 + 0x10 + lVar12) = 3;
        *(longlong *)(lVar13 + 0x18 + lVar12) = lVar6 + 0x88;
        if (!bVar3) {
          uVar5 = FUN_1491d8396(lVar11);
          iVar4 = *(int *)(param_1 + 0x178);
          *(uint *)(param_1 + 0x178) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x17c) < iVar4 + 1U) {
            FUN_1491c757e(plVar1,iVar4);
          }
          lVar6 = *(longlong *)(param_1 + 0x170);
          lVar13 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar6 + lVar13) = lVar9;
          *(longlong *)(lVar6 + 8 + lVar13) = lVar7;
          *(undefined1 **)(lVar6 + 0x10 + lVar13) = &DAT_100000003;
          *(undefined8 *)(lVar6 + 0x18 + lVar13) = uVar5;
          uVar5 = FUN_1491d83a6(lVar11);
          iVar4 = *(int *)(param_1 + 0x178);
          *(uint *)(param_1 + 0x178) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x17c) < iVar4 + 1U) {
            FUN_1491c757e(plVar1,iVar4);
          }
          lVar6 = *plVar1;
          lVar11 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar6 + lVar11) = lVar9;
          *(longlong *)(lVar6 + 8 + lVar11) = lVar7;
          *(undefined8 *)(lVar6 + 0x10 + lVar11) = 0x200000003;
          *(undefined8 *)(lVar6 + 0x18 + lVar11) = uVar5;
          plVar8 = local_e0;
        }
      }
      else if (*(char *)(lVar6 + 0x10) == '\x04') {
        if (*(char *)(lVar6 + 0x210) != '\x01') {
          bVar3 = false;
          lVar11 = lVar6;
          goto LAB_149198313;
        }
      }
      else {
        if ((*(char *)(lVar6 + 0x10) != '\x01') || (*(char *)(lVar6 + 0x110) != '\0'))
        goto LAB_149198311;
        if ((longlong)(int)uStack_c0 != 0) {
          lVar11 = 0;
          do {
            if (*(longlong *)((longlong)local_c8 + lVar11) == *(longlong *)(lVar6 + 0x108))
            goto LAB_149198311;
            lVar11 = lVar11 + 8;
          } while ((longlong)(int)uStack_c0 * 8 != lVar11);
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar8);
  }
  local_4a = 0x101;
  FUN_149198544(param_1);
  iVar4 = *(int *)(param_1 + 0x168);
  if (0 < iVar4) {
    lVar6 = 0;
    lVar11 = 0;
    do {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x160) + lVar11 * 4);
      if ((ulonglong)uVar2 != 0xffffffff) {
        local_d8 = &DAT_14cc063dc;
        local_d0 = &DAT_14bb73f70;
        if (-1 < (int)uVar2) {
          local_d8 = &DAT_14cc063dc;
          local_d0 = &DAT_14bb73f70;
          if ((int)uVar2 < *(int *)(*(longlong *)(param_1 + 0x180) + 0xc0)) {
            lVar9 = *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0xb8) + (ulonglong)uVar2 * 8);
            local_d8 = &DAT_14cc063dc;
            local_d0 = &DAT_14bb73f70;
            if (lVar9 != 0) {
              local_d8 = (undefined *)(lVar9 + 0x10);
              local_d0 = (undefined *)(lVar9 + 0x1c);
            }
          }
        }
        local_f0 = *(longlong *)(param_1 + 0x68) + lVar11;
        local_f8 = *(longlong *)(param_1 + 0x48) + lVar6;
        FUN_1491f8394(param_1,&local_d8,1,0);
        local_f0 = *(longlong *)(param_1 + 0x78) + lVar11;
        local_f8 = *(longlong *)(param_1 + 0x58) + lVar6;
        FUN_1491f8394(param_1,&local_d8,3);
        iVar4 = *(int *)(param_1 + 0x168);
      }
      lVar11 = lVar11 + 1;
      lVar6 = lVar6 + 0x60;
    } while (lVar11 < iVar4);
  }
  local_4c = 0x101;
  FUN_149198544(param_1);
  FUN_1491f8d1c(param_1);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0xa8);
  if (local_c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491984a2 FUN_1491984a2 body=162 status=ok
// SIG undefined FUN_1491984a2(void)

longlong * FUN_1491984a2(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(param_1 + 0xc0);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar4 * 8);
      if (lVar2 != 0) {
        bVar1 = *(byte *)(lVar2 + 0x10);
        if ((((ulonglong)bVar1 < 0x21) && ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
           (bVar1 == 0x80)) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1491c1462(param_2,iVar3);
          }
          *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar2;
          iVar3 = *(int *)(param_1 + 0xc0);
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return param_2;
}



// FUNCTION 149198544 FUN_149198544 body=400 status=ok
// SIG undefined FUN_149198544(void)

void FUN_149198544(longlong param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  void *_Dst;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  
  pcVar5 = (char *)(param_1 + 0x20);
  if (param_2[1] != '\0') {
    pcVar5 = param_2;
  }
  cVar1 = *pcVar5;
  plVar6 = (longlong *)(param_1 + 0x68);
  uVar8 = *(uint *)(param_1 + 0x50);
  uVar4 = *(uint *)(param_1 + 0x70);
  if (uVar4 == uVar8) {
    pcVar5 = param_2;
    if (cVar1 != '\0') {
      pcVar5 = (char *)0x0;
      memset(*(void **)(param_1 + 0x68),0,(longlong)*(int *)(param_1 + 0x74));
      goto LAB_1491985e6;
    }
LAB_14919860c:
    if (uVar4 != 0) {
      memset((void *)*plVar6,(int)CONCAT71((int7)((ulonglong)pcVar5 >> 8),1),(longlong)(int)uVar4);
    }
    uVar8 = *(uint *)(param_1 + 0x60);
    if (*(uint *)(param_1 + 0x80) != uVar8) {
      bVar2 = false;
      goto LAB_149198646;
    }
    uVar4 = *(uint *)(param_1 + 0x84);
    _Dst = *(void **)(param_1 + 0x78);
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x74);
    iVar7 = 0;
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      FUN_14475e67c(plVar6);
      uVar8 = *(uint *)(param_1 + 0x50);
      iVar7 = *(int *)(param_1 + 0x70);
      iVar3 = *(int *)(param_1 + 0x74);
    }
    *(uint *)(param_1 + 0x70) = uVar8 + iVar7;
    if ((uint)(iVar3 - iVar7) < uVar8) {
      FUN_1401c3474(plVar6);
    }
    pcVar5 = (char *)0x0;
    memset((void *)((longlong)iVar7 + *plVar6),0,(longlong)(int)uVar8);
    if (cVar1 == '\0') {
      uVar4 = *(uint *)(param_1 + 0x70);
      goto LAB_14919860c;
    }
LAB_1491985e6:
    uVar8 = *(uint *)(param_1 + 0x60);
    uVar4 = *(uint *)(param_1 + 0x80);
    if (uVar4 != uVar8) {
      bVar2 = true;
LAB_149198646:
      plVar6 = (longlong *)(param_1 + 0x78);
      iVar3 = *(int *)(param_1 + 0x84);
      iVar7 = 0;
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 0x80) = 0;
        FUN_14475e67c(plVar6);
        uVar8 = *(uint *)(param_1 + 0x60);
        iVar7 = *(int *)(param_1 + 0x80);
        iVar3 = *(int *)(param_1 + 0x84);
      }
      *(uint *)(param_1 + 0x80) = uVar8 + iVar7;
      if ((uint)(iVar3 - iVar7) < uVar8) {
        FUN_1401c3474(plVar6);
      }
      pcVar5 = (char *)0x0;
      memset((void *)((longlong)iVar7 + *plVar6),0,(longlong)(int)uVar8);
      if (!bVar2) goto LAB_1491986bb;
      uVar4 = *(uint *)(param_1 + 0x80);
    }
    if (uVar4 == 0) goto LAB_1491986bb;
    _Dst = *(void **)(param_1 + 0x78);
    iVar3 = (int)CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
  }
  memset(_Dst,iVar3,(longlong)(int)uVar4);
LAB_1491986bb:
  if (param_2[1] == '\x01') {
    param_2[1] = '\0';
  }
  return;
}



// FUNCTION 1491986d4 FUN_1491986d4 body=64 status=ok
// SIG undefined FUN_1491986d4(void)

void FUN_1491986d4(longlong param_1)

{
  FUN_149198714();
  FUN_1491f8ca4(param_1);
  *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x180) = 0;
  return;
}



// FUNCTION 149198714 FUN_149198714 body=326 status=ok
// SIG undefined FUN_149198714(void)

void FUN_149198714(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined *local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = *(int *)(param_1 + 0x168);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x160) + lVar4 * 4);
      if ((ulonglong)uVar1 != 0xffffffff) {
        local_58 = &DAT_14cc063dc;
        local_50 = &DAT_14bb73f70;
        if (-1 < (int)uVar1) {
          local_58 = &DAT_14cc063dc;
          local_50 = &DAT_14bb73f70;
          if ((int)uVar1 < *(int *)(*(longlong *)(param_1 + 0x180) + 0xc0)) {
            lVar2 = *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0xb8) + (ulonglong)uVar1 * 8);
            local_58 = &DAT_14cc063dc;
            local_50 = &DAT_14bb73f70;
            if (lVar2 != 0) {
              local_58 = (undefined *)(lVar2 + 0x10);
              local_50 = (undefined *)(lVar2 + 0x1c);
            }
          }
        }
        local_68 = 0;
        FUN_1491f874a(param_1,&local_58,1,0);
        local_68 = 0;
        FUN_1491f874a(param_1,&local_58,3);
        iVar3 = *(int *)(param_1 + 0x168);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  FUN_1491c7604(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) < 0) {
    FUN_14481578e((longlong *)(param_1 + 0x160),0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919885c FUN_14919885c body=66 status=ok
// SIG undefined FUN_14919885c(void)

void FUN_14919885c(longlong param_1)

{
  int iVar1;
  
  FUN_140ee84a4(param_1 + 0x48,*(undefined4 *)(param_1 + 0x60),1);
  if ((*(longlong *)(param_1 + 0x180) != 0) && (0 < *(int *)(param_1 + 0x30))) {
    iVar1 = 0;
    do {
      FUN_14919889e(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 14919889e FUN_14919889e body=400 status=ok
// SIG undefined FUN_14919889e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14919889e(longlong param_1,int param_2)

{
  double *pdVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_a8 [32];
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar13 = (longlong)param_2;
  if (*(char *)(*(longlong *)(param_1 + 0x68) + lVar13) == '\x01') {
    if (((*(char *)(*(longlong *)(param_1 + 0x38) + lVar13) == '\x01') && (-1 < param_2)) &&
       (param_2 < *(int *)(param_1 + 0x168))) {
      FUN_144afced8(*(undefined8 *)(param_1 + 0x180),local_88,
                    *(undefined4 *)(*(longlong *)(param_1 + 0x160) + lVar13 * 4),0);
      puVar7 = local_88;
      puVar12 = (undefined8 *)(lVar13 * 0x60 + *(longlong *)(param_1 + 0x48));
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
    }
    else {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + lVar13 * 4);
      if (iVar2 == -1) {
        puVar7 = (undefined8 *)FUN_149198a72(param_1);
        lVar10 = 0xc;
        puVar12 = (undefined8 *)(lVar13 * 0x60 + *(longlong *)(param_1 + 0x48));
      }
      else {
        uVar8 = FUN_149198a72(param_1);
        uVar9 = FUN_149198a72(param_1,iVar2);
        puVar7 = local_88;
        FUN_1449437a2(uVar8,puVar7,uVar9);
        puVar12 = (undefined8 *)(lVar13 * 0x60 + *(longlong *)(param_1 + 0x48));
        lVar10 = 0xc;
      }
      for (; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
      lVar10 = *(longlong *)(param_1 + 0x48);
      lVar11 = lVar13 * 0x60;
      dVar3 = *(double *)(lVar10 + lVar11);
      dVar4 = ((double *)(lVar10 + lVar11))[1];
      pdVar1 = (double *)(lVar10 + 0x10 + lVar11);
      dVar5 = *pdVar1;
      dVar6 = pdVar1[1];
      dVar14 = dVar5 * dVar5 + dVar3 * dVar3;
      dVar17 = dVar6 * dVar6 + dVar4 * dVar4;
      auVar15._0_8_ = dVar14 + dVar17;
      auVar15._8_8_ = dVar14 + dVar17;
      auVar16 = sqrtpd(auVar15,auVar15);
      auVar18 = divpd(_DAT_149934d80,auVar16);
      auVar19._0_8_ = auVar18._0_8_ * dVar5;
      auVar19._8_8_ = auVar18._8_8_ * dVar6;
      auVar16._8_8_ = -(ulonglong)(1e-08 <= auVar15._8_8_);
      auVar16._0_8_ = -(ulonglong)(1e-08 <= auVar15._0_8_);
      auVar16 = blendvpd(_DAT_149935300,auVar19,auVar16);
      *(ulonglong *)(lVar10 + lVar11) =
           (ulonglong)(dVar3 * auVar18._0_8_) & -(ulonglong)(1e-08 <= auVar15._0_8_);
      ((ulonglong *)(lVar10 + lVar11))[1] =
           (ulonglong)(dVar4 * auVar18._8_8_) & -(ulonglong)(1e-08 <= auVar15._8_8_);
      *(undefined1 (*) [16])(lVar10 + 0x10 + lVar11) = auVar16;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x68) + lVar13) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar13 * 0x60 + *(longlong *)(param_1 + 0x48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149198a30 FUN_149198a30 body=66 status=ok
// SIG undefined FUN_149198a30(void)

void FUN_149198a30(longlong param_1)

{
  int iVar1;
  
  FUN_140ee84a4(param_1 + 0x58,*(undefined4 *)(param_1 + 0x50),1);
  if ((*(longlong *)(param_1 + 0x180) != 0) && (0 < *(int *)(param_1 + 0x30))) {
    iVar1 = 0;
    do {
      FUN_149198a72(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 149198a72 FUN_149198a72 body=2090 status=ok
// SIG undefined FUN_149198a72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_149198a72(longlong param_1,int param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double *pdVar14;
  double *pdVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  undefined1 auVar25 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStack_298 [32];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158 [4];
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar21 = (longlong)param_2;
  if (*(char *)(*(longlong *)(param_1 + 0x78) + lVar21) == '\x01') {
    if (((*(char *)(*(longlong *)(param_1 + 0x38) + lVar21) == '\x01') && (-1 < param_2)) &&
       (param_2 < *(int *)(param_1 + 0x168))) {
      FUN_14486750c(*(undefined8 *)(param_1 + 0x180),local_158,
                    *(undefined4 *)(*(longlong *)(param_1 + 0x160) + lVar21 * 4),0);
      pdVar14 = local_158;
      pdVar15 = (double *)(lVar21 * 0x60 + *(longlong *)(param_1 + 0x58));
      for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
        *pdVar15 = *pdVar14;
        pdVar14 = pdVar14 + 1;
        pdVar15 = pdVar15 + 1;
      }
    }
    else {
      iVar19 = *(int *)(*(longlong *)(param_1 + 0x28) + lVar21 * 4);
      pdVar14 = (double *)FUN_14919889e(param_1);
      if (iVar19 == -1) {
        pdVar15 = (double *)(lVar21 * 0x60 + *(longlong *)(param_1 + 0x58));
        for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
          *pdVar15 = *pdVar14;
          pdVar14 = pdVar14 + 1;
          pdVar15 = pdVar15 + 1;
        }
      }
      else {
        lVar17 = param_1;
        pdVar15 = (double *)FUN_149198a72();
        auVar43 = _DAT_149934d80;
        auVar31 = *(undefined1 (*) [16])(pdVar15 + 8);
        dVar4 = auVar31._0_8_;
        dVar27 = auVar31._8_8_;
        auVar36 = *(undefined1 (*) [16])(pdVar15 + 10);
        dVar5 = auVar36._0_8_;
        auVar32 = *(undefined1 (*) [16])(pdVar14 + 8);
        dVar6 = auVar32._0_8_;
        dVar33 = auVar32._8_8_;
        auVar3 = *(undefined1 (*) [16])(pdVar14 + 10);
        dVar7 = auVar3._0_8_;
        auVar31 = minpd(auVar32,auVar31);
        auVar38 = minpd(auVar3,auVar36);
        auVar32._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
        auVar32._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
        iVar16 = movmskpd((int)lVar17,auVar32);
        auVar31._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
        auVar31._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
        uVar20 = movmskpd(iVar19,auVar31);
        if ((uVar20 & 0x3fffffff) == 0 && iVar16 == 0) {
          dVar34 = *pdVar14;
          dVar40 = pdVar14[1];
          dVar41 = pdVar14[2];
          dVar42 = pdVar14[3];
          dVar10 = *pdVar15;
          dVar11 = pdVar15[1];
          dVar12 = pdVar15[2];
          dVar13 = pdVar15[3];
          dVar28 = pdVar15[3];
          dVar26 = pdVar15[3];
          dVar9 = pdVar15[1];
          dVar1 = pdVar15[1];
          dVar2 = pdVar15[2];
          dVar39 = pdVar15[2];
          dVar29 = dVar40 * dVar2 * -1.0 +
                   dVar41 * dVar9 + dVar42 * *pdVar15 * 1.0 + dVar34 * dVar28;
          dVar35 = dVar34 * dVar39 * 1.0 +
                   dVar42 * dVar1 + dVar41 * *pdVar15 * -1.0 + dVar40 * dVar26;
          auVar43._0_8_ =
               dVar42 * dVar2 * 1.0 + ((*pdVar15 * dVar40 * 1.0 + dVar41 * dVar28) - dVar34 * dVar9)
          ;
          auVar43._8_8_ =
               dVar41 * dVar39 * -1.0 +
               ((*pdVar15 * dVar34 * -1.0 + dVar42 * dVar26) - dVar40 * dVar1);
          dVar39 = pdVar14[4] * dVar4;
          dVar34 = pdVar14[5] * dVar27;
          dVar40 = pdVar14[6] * dVar5;
          dVar41 = pdVar14[7] * auVar36._8_8_;
          dVar9 = dVar34 * dVar10 - dVar11 * dVar39;
          dVar1 = dVar40 * dVar11 - dVar12 * dVar34;
          dVar2 = dVar39 * dVar12 - dVar10 * dVar40;
          dVar42 = dVar41 * dVar13 - dVar13 * dVar41;
          dVar1 = dVar1 + dVar1;
          dVar2 = dVar2 + dVar2;
          dVar9 = dVar9 + dVar9;
          dVar42 = dVar42 + dVar42;
          local_f8 = (dVar9 * dVar11 - dVar12 * dVar2) + dVar28 * dVar1 + dVar39 + pdVar15[4];
          dStack_f0 = (dVar1 * dVar12 - dVar9 * dVar10) + dVar26 * dVar2 + dVar34 + pdVar15[5];
          local_e8 = (dVar2 * dVar10 - dVar11 * dVar1) + dVar28 * dVar9 + dVar40 + pdVar15[6];
          dVar28 = (dVar42 * dVar13 - dVar42 * dVar13) + dVar26 * dVar42 + dVar41 + pdVar15[7];
        }
        else {
          dVar1 = *pdVar15;
          dVar2 = pdVar15[1];
          dVar39 = pdVar15[2];
          dVar34 = dVar2 + dVar2;
          dVar40 = dVar39 + dVar39;
          dVar26 = dVar1 * (dVar1 + dVar1);
          local_188 = (1.0 - (dVar26 + dVar2 * dVar34)) * dVar5;
          dVar28 = pdVar15[3];
          dVar41 = dVar40 * dVar28;
          dVar42 = (dVar1 + dVar1) * pdVar15[3];
          dVar28 = dVar34 * dVar28;
          local_198 = (dVar28 + *pdVar15 * dVar40) * dVar5;
          dVar26 = (DAT_149934d80._8_8_ - (dVar39 * dVar40 + dVar26)) * dVar27;
          dVar9 = (dVar34 * dVar1 + dVar41) * dVar4;
          local_1a8 = (dVar40 * dVar2 + dVar42) * dVar27;
          dStack_190 = (dVar40 * dVar2 - dVar42) * dVar5;
          local_1c8 = (*pdVar15 * dVar40 - dVar28) * dVar4;
          local_1d8._8_4_ = SUB84(dVar9,0);
          local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar39 * dVar40 + dVar2 * dVar34)) * dVar4;
          local_1d8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          uStack_1c0 = 0;
          local_1b8._8_4_ = SUB84(dVar26,0);
          local_1b8._0_8_ = (dVar34 * dVar1 - dVar41) * dVar27;
          local_1b8._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
          uStack_1a0 = 0;
          uStack_180 = 0;
          local_178 = pdVar15[4];
          dStack_170 = pdVar15[5];
          local_168 = pdVar15[6];
          uStack_160 = 0x3ff0000000000000;
          dVar9 = *pdVar14;
          dVar1 = pdVar14[1];
          dVar2 = pdVar14[2];
          dVar39 = dVar1 + dVar1;
          dVar34 = dVar2 + dVar2;
          dVar26 = dVar9 * (dVar9 + dVar9);
          local_208 = (1.0 - (dVar26 + dVar1 * dVar39)) * dVar7;
          dVar28 = pdVar14[3];
          dVar40 = dVar34 * dVar28;
          dVar41 = (dVar9 + dVar9) * pdVar14[3];
          dVar28 = dVar39 * dVar28;
          local_218 = (dVar28 + *pdVar14 * dVar34) * dVar7;
          dStack_210 = (dVar34 * dVar1 - dVar41) * dVar7;
          local_258 = ((double)DAT_149934d80 - (dVar2 * dVar34 + dVar1 * dVar39)) * dVar6;
          dVar26 = (DAT_149934d80._8_8_ - (dVar2 * dVar34 + dVar26)) * dVar33;
          dStack_250 = (dVar39 * dVar9 + dVar40) * dVar6;
          local_228 = (dVar34 * dVar1 + dVar41) * dVar33;
          local_248 = (*pdVar14 * dVar34 - dVar28) * dVar6;
          uStack_240 = 0;
          local_238._8_4_ = SUB84(dVar26,0);
          local_238._0_8_ = (dVar39 * dVar9 - dVar40) * dVar33;
          local_238._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
          uStack_220 = 0;
          uStack_200 = 0;
          local_1f8 = pdVar14[4];
          dStack_1f0 = pdVar14[5];
          local_1e8 = pdVar14[6];
          uStack_1e0 = 0x3ff0000000000000;
          FUN_1447fea8d(local_158);
          FUN_144a1c686(local_158,0x3e45798ee0000000);
          auVar38._8_8_ = -(ulonglong)(0.0 <= dVar27 * dVar33);
          auVar38._0_8_ = -(ulonglong)(0.0 <= dVar4 * dVar6);
          auVar31 = blendvpd(_DAT_149936790,auVar43,auVar38);
          uVar22 = -(ulonglong)(0.0 <= dVar5 * dVar7);
          dVar28 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
          dVar26 = auVar31._0_8_;
          local_158[2] = local_158[2] * dVar26;
          local_158[1] = local_158[1] * dVar26;
          local_158[0] = local_158[0] * dVar26;
          dVar26 = auVar31._8_8_;
          local_128 = local_128 * dVar26;
          local_130 = local_130 * dVar26;
          local_138 = dVar26 * local_138;
          local_108 = local_108 * dVar28;
          local_110 = local_110 * dVar28;
          local_118 = dVar28 * local_118;
          FUN_14481fd10(&local_278,local_158);
          dVar28 = local_268 * local_268 + local_278 * local_278;
          dVar26 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
          auVar25._0_8_ = dVar28 + dVar26;
          auVar25._8_8_ = dVar28 + dVar26;
          auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
          auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
          auVar31 = sqrtpd(auVar25,auVar25);
          auVar31 = divpd(auVar43,auVar31);
          auVar44._0_8_ = auVar31._0_8_ * local_268;
          auVar44._8_8_ = auVar31._8_8_ * dStack_260;
          dVar29 = (double)((ulonglong)(local_278 * auVar31._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
          dVar35 = (double)((ulonglong)(dStack_270 * auVar31._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
          auVar43 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar44,auVar24);
          dVar28 = 0.0;
        }
        dVar26 = auVar36._8_8_ * auVar3._8_8_;
        lVar17 = *(longlong *)(param_1 + 0x58);
        lVar18 = lVar21 * 0x60;
        *(double *)(lVar17 + lVar18) = dVar29;
        ((double *)(lVar17 + lVar18))[1] = dVar35;
        *(undefined1 (*) [16])(lVar17 + 0x10 + lVar18) = auVar43;
        auVar3._8_4_ = SUB84(dStack_f0,0);
        auVar3._0_8_ = local_f8;
        auVar3._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
        *(undefined1 (*) [16])(lVar17 + 0x20 + lVar18) = auVar3;
        pdVar14 = (double *)(lVar17 + 0x30 + lVar18);
        *pdVar14 = local_e8;
        pdVar14[1] = dVar28;
        auVar8._8_4_ = SUB84(dVar27 * dVar33,0);
        auVar8._0_8_ = dVar4 * dVar6;
        auVar8._12_4_ = (int)((ulonglong)(dVar27 * dVar33) >> 0x20);
        *(undefined1 (*) [16])(lVar17 + 0x40 + lVar18) = auVar8;
        auVar36._8_4_ = SUB84(dVar26,0);
        auVar36._0_8_ = dVar5 * dVar7;
        auVar36._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
        *(undefined1 (*) [16])(lVar17 + 0x50 + lVar18) = auVar36;
      }
      lVar17 = *(longlong *)(param_1 + 0x58);
      lVar18 = lVar21 * 0x60;
      dVar4 = *(double *)(lVar17 + lVar18);
      dVar5 = ((double *)(lVar17 + lVar18))[1];
      pdVar14 = (double *)(lVar17 + 0x10 + lVar18);
      dVar6 = *pdVar14;
      dVar7 = pdVar14[1];
      dVar27 = dVar6 * dVar6 + dVar4 * dVar4;
      dVar33 = dVar7 * dVar7 + dVar5 * dVar5;
      auVar30._0_8_ = dVar27 + dVar33;
      auVar30._8_8_ = dVar27 + dVar33;
      auVar23._8_8_ = -(ulonglong)(1e-08 <= auVar30._8_8_);
      auVar23._0_8_ = -(ulonglong)(1e-08 <= auVar30._0_8_);
      auVar31 = sqrtpd(auVar30,auVar30);
      auVar36 = divpd(_DAT_149934d80,auVar31);
      auVar37._0_8_ = auVar36._0_8_ * dVar6;
      auVar37._8_8_ = auVar36._8_8_ * dVar7;
      auVar31 = blendvpd(_DAT_149935300,auVar37,auVar23);
      *(ulonglong *)(lVar17 + lVar18) =
           (ulonglong)(dVar4 * auVar36._0_8_) & -(ulonglong)(1e-08 <= auVar30._0_8_);
      ((ulonglong *)(lVar17 + lVar18))[1] =
           (ulonglong)(dVar5 * auVar36._8_8_) & -(ulonglong)(1e-08 <= auVar30._8_8_);
      *(undefined1 (*) [16])(lVar17 + 0x10 + lVar18) = auVar31;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x78) + lVar21) = 0;
  }
  if ((local_d0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return lVar21 * 0x60 + *(longlong *)(param_1 + 0x58);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14919929e FUN_14919929e body=308 status=ok
// SIG undefined FUN_14919929e(void)

void FUN_14919929e(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [104];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(param_1 + 0x178);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x170);
    lVar5 = 0;
    do {
      lVar4 = FUN_141125054(*(undefined8 *)(param_1 + 0x180),**(undefined4 **)(lVar3 + 8 + lVar5));
      if (lVar4 != 0) {
        iVar2 = *(int *)(lVar3 + 0x14 + lVar5);
        if (iVar2 == 2) {
          if (*(char *)(lVar4 + 0x10) != '\x04') {
            lVar4 = 0;
          }
          FUN_14449ed30(*(undefined8 *)(param_1 + 0x180),local_98,lVar4,
                        (*(int *)(lVar3 + 0x10 + lVar5) - 1U & 0xfffffffd) == 0);
        }
        else if (iVar2 == 1) {
          if (*(char *)(lVar4 + 0x10) != '\x04') {
            lVar4 = 0;
          }
          FUN_1401261c4(*(undefined8 *)(param_1 + 0x180),local_98,lVar4,
                        (*(int *)(lVar3 + 0x10 + lVar5) - 1U & 0xfffffffd) == 0);
        }
        else if (iVar2 == 0) {
          FUN_1401571e4(*(undefined8 *)(param_1 + 0x180),local_98,lVar4,
                        (*(int *)(lVar3 + 0x10 + lVar5) - 1U & 0xfffffffd) == 0);
        }
      }
      lVar5 = lVar5 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491993d4 FUN_1491993d4 body=221 status=ok
// SIG undefined FUN_1491993d4(void)

undefined8 * FUN_1491993d4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14bb73f80;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  memset(param_1 + 5,0,0x90);
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 1;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  return param_1;
}



// FUNCTION 1491994b2 FUN_1491994b2 body=94 status=ok
// SIG undefined FUN_1491994b2(void)

void FUN_1491994b2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = FUN_147906f5e(param_2,0x3f800000);
  FUN_147906d38(param_1 + 0x60,uVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149199512 FUN_149199512 body=642 status=ok
// SIG undefined FUN_149199512(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_149199512(longlong param_1,double *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  double *pdVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  double dVar17;
  double dVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    uVar2 = *param_3;
    uVar14 = (uint)(uVar2 >> 0x10);
    uVar14 = (int)(uVar2 >> 0x20) + ((int)uVar2 << 0x10 | (uint)(uVar2 & 0xffff)) +
             (uVar14 << 0x13 | uVar14 & 0xffff) + (int)((uVar2 & 0xffff) >> 4);
    lVar11 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x108);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & uVar14) * 4);
    if (iVar9 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 200) + (longlong)iVar9 * 0x18);
        if (*puVar1 == uVar2) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            if (*(int *)(param_1 + 0x80) == *(int *)(param_1 + 0xac)) goto LAB_1491995f6;
            uVar3 = puVar1[1];
            uVar4 = (uint)(uVar3 >> 0x10);
            uVar16 = (uint)uVar3 & 0xffff;
            lVar11 = param_1 + 0xb0;
            if (*(longlong *)(param_1 + 0xb8) != 0) {
              lVar11 = *(longlong *)(param_1 + 0xb8);
            }
            iVar9 = *(int *)(lVar11 + (ulonglong)
                                      (*(int *)(param_1 + 0xc0) - 1U &
                                      (int)(uVar3 >> 0x20) + ((uint)uVar3 << 0x10 | uVar16) +
                                      (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar16 >> 4)) * 4);
            if (iVar9 == -1) goto LAB_1491995f6;
            goto LAB_149199713;
          }
          break;
        }
        iVar9 = (int)puVar1[2];
      } while (iVar9 != -1);
    }
  }
  goto LAB_14919952a;
  while (iVar9 = *(int *)(lVar11 + 0x80), iVar9 != -1) {
LAB_149199713:
    lVar11 = *(longlong *)(param_1 + 0x78) + (longlong)iVar9 * 0x90;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar9 * 0x90) == uVar3)
    goto LAB_1491995f9;
  }
LAB_1491995f6:
  lVar11 = 0;
LAB_1491995f9:
  lVar10 = lVar11 + 0x10;
  if (lVar11 == 0) {
    lVar10 = 0;
  }
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar11 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x68);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & uVar14) * 4);
    if (iVar9 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x28) + (longlong)iVar9 * 0x90;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar9 * 0x90) == uVar2)
        goto LAB_149199614;
        iVar9 = *(int *)(lVar11 + 0x80);
      } while (iVar9 != -1);
    }
  }
  lVar11 = 0;
LAB_149199614:
  lVar15 = lVar11 + 0x10;
  if (lVar11 == 0) {
    lVar15 = 0;
  }
  if ((lVar10 != 0) && (lVar15 != 0)) {
    FUN_1449437a2(lVar10 + 0x10,param_2,lVar15 + 0x10);
    dVar5 = *param_2;
    dVar6 = param_2[1];
    dVar7 = param_2[2];
    dVar8 = param_2[3];
    dVar17 = dVar7 * dVar7 + dVar5 * dVar5;
    dVar20 = dVar8 * dVar8 + dVar6 * dVar6;
    auVar18._0_8_ = dVar17 + dVar20;
    auVar18._8_8_ = dVar17 + dVar20;
    auVar19 = sqrtpd(auVar18,auVar18);
    auVar21 = divpd(_DAT_149934d80,auVar19);
    auVar22._0_8_ = auVar21._0_8_ * dVar7;
    auVar22._8_8_ = auVar21._8_8_ * dVar8;
    auVar19._8_8_ = -(ulonglong)(1e-08 <= auVar18._8_8_);
    auVar19._0_8_ = -(ulonglong)(1e-08 <= auVar18._0_8_);
    auVar19 = blendvpd(_DAT_149935300,auVar22,auVar19);
    *param_2 = (double)((ulonglong)(dVar5 * auVar21._0_8_) & -(ulonglong)(1e-08 <= auVar18._0_8_));
    param_2[1] = (double)((ulonglong)(dVar6 * auVar21._8_8_) & -(ulonglong)(1e-08 <= auVar18._8_8_))
    ;
    *(undefined1 (*) [16])(param_2 + 2) = auVar19;
    return param_2;
  }
LAB_14919952a:
  pdVar12 = (double *)&DAT_14c846480;
  pdVar13 = param_2;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *pdVar13 = *pdVar12;
    pdVar12 = pdVar12 + 1;
    pdVar13 = pdVar13 + 1;
  }
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
                    /* WARNING: Read-only address (ram,0x000149935300) is written */
  return param_2;
}



// FUNCTION 149199794 FUN_149199794 body=88 status=ok
// SIG undefined FUN_149199794(void)

void FUN_149199794(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == *(int *)(param_2 + 1)) {
    if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      _Src = (void *)*param_2;
      FUN_14470ea6a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x60);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1491997ec FUN_1491997ec body=31 status=ok
// SIG undefined FUN_1491997ec(void)

undefined8 FUN_1491997ec(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x108))();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar2;
}



// FUNCTION 14919980c FUN_14919980c body=50 status=ok
// SIG undefined FUN_14919980c(void)

undefined8 * FUN_14919980c(undefined8 *param_1)

{
  FUN_145af4e04();
  *param_1 = &PTR_FUN_14bb5ded0;
  param_1[0x4c] = 0;
  *(undefined1 *)((longlong)param_1 + 0x251) = 0;
  return param_1;
}



// FUNCTION 14919983e FUN_14919983e body=12 status=ok
// SIG undefined FUN_14919983e(void)

void FUN_14919983e(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x260);
  return;
}



// FUNCTION 14919984a FUN_14919984a body=48 status=ok
// SIG undefined FUN_14919984a(void)

undefined8 FUN_14919984a(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x260);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x260);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14919987a FUN_14919987a body=66 status=ok
// SIG undefined FUN_14919987a(void)

longlong * FUN_14919987a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x108))();
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x10);
    *param_2 = lVar1;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
  }
  return param_2;
}



// FUNCTION 1491998bc FUN_1491998bc body=77 status=ok
// SIG undefined FUN_1491998bc(void)

void FUN_1491998bc(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_141339014();
  FUN_140320438(param_1 + 0x60,param_2);
  cVar1 = FUN_144729dda(param_1 + 0x260);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14479d2ce(param_1 + 0x260);
  }
  FUN_1458fd2de(param_1,uVar2);
  return;
}



// FUNCTION 14919990a FUN_14919990a body=270 status=ok
// SIG undefined FUN_14919990a(void)

void FUN_14919990a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
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
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149199cc6(&local_50,puVar2,puVar3);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149199a20 FUN_149199a20 body=366 status=ok
// SIG undefined FUN_149199a20(void)

void FUN_149199a20(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_69 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  puVar3 = &local_68;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_58;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_69;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149199cc6(&local_40,puVar2,&local_29);
  *(undefined4 *)puVar3 = local_40;
  *(undefined4 *)((longlong)puVar3 + 4) = uStack_3c;
  *(undefined4 *)(puVar3 + 1) = uStack_38;
  *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_34;
  *puVar4 = local_29 == '\x01';
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149199b90 FUN_149199b90 body=306 status=ok
// SIG undefined FUN_149199b90(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_149199b90(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40 + 1);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  local_40[0] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40[0];
  if ((local_40[0] != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  plVar2 = local_40 + 1;
  if (plVar1 != (longlong *)0x0) {
    plVar2 = plVar1;
  }
  FUN_14448a624(&local_50,plVar2,&local_58);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149199cc6 FUN_149199cc6 body=145 status=ok
// SIG undefined FUN_149199cc6(void)

undefined8 * FUN_149199cc6(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    if (DAT_14cc06880 == 0) {
      uVar2 = FUN_1408c25db();
      DAT_14cc06880 = FUN_140002ddd(FUN_1466c95bd,uVar2,L"AnimNode_ControlRig");
      if (DAT_14cc06880 == 0) goto LAB_149199d05;
    }
    if ((*(int *)(DAT_14cc06880 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cc06880 + 0x38) * 8) ==
        DAT_14cc06880 + 0x30)) {
      *param_3 = 1;
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      return param_1;
    }
  }
LAB_149199d05:
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 149199d5c FUN_149199d5c body=141 status=ok
// SIG undefined FUN_149199d5c(void)

ulonglong FUN_149199d5c(ulonglong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  
  if ((param_1 != 0) && (DAT_14cc069a8 != DAT_14cc069d4)) {
    uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    puVar4 = &DAT_14cc069d8;
    if (DAT_14cc069e0 != (undefined *)0x0) {
      puVar4 = DAT_14cc069e0;
    }
    uVar2 = (ulonglong)(DAT_14cc069e8 - 1U & (uVar1 >> 0x10 ^ uVar1));
    iVar3 = *(int *)(puVar4 + uVar2 * 4);
    if (iVar3 != -1) {
      do {
        bVar5 = *(ulonglong *)(DAT_14cc069a0 + (longlong)iVar3 * 0x10) == param_1;
        uVar2 = CONCAT71((int7)(uVar2 >> 8),bVar5);
        if (bVar5) {
          return uVar2;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x10 + DAT_14cc069a0 + 8);
      } while (iVar3 != -1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 149199dea FUN_149199dea body=26 status=ok
// SIG undefined FUN_149199dea(void)

void FUN_149199dea(undefined8 param_1)

{
  FUN_1446e0b6e();
  FUN_149199e04(param_1);
  return;
}



// FUNCTION 149199e04 FUN_149199e04 body=572 status=ok
// SIG undefined FUN_149199e04(void)

void FUN_149199e04(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d339f0();
  lVar1 = param_1 + 0x60;
  lVar6 = FUN_14479d2ce(lVar1);
  if ((lVar6 != 0) || (*(longlong *)(param_1 + 0x68) == 0)) goto LAB_149199e40;
  lVar6 = FUN_140007850();
  cVar5 = (*(code *)PTR_FUN_14c758760)();
  if ((lVar6 == 0) || (cVar5 == '\0')) {
    FUN_14485c47a(lVar1,lVar6);
    if (lVar6 != 0) goto LAB_149199ee3;
  }
  else {
    uVar2 = *(uint *)(lVar6 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
      FUN_14485c47a(lVar1,lVar6);
    }
LAB_149199ee3:
    if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) goto LAB_149199e40;
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14919b7ac(lVar1);
  }
LAB_149199e40:
  lVar6 = FUN_145c01f0e(lVar1);
  if (lVar6 != 0) {
    lVar6 = FUN_145c01f0e(lVar1);
    if (*(longlong *)(lVar6 + 0x2f8) != 0) {
      FUN_14919b7ca(*(longlong *)(lVar6 + 0x2f8) + 0x28,local_40,param_1);
    }
    lVar6 = FUN_145c01f0e(lVar1);
    iVar3 = *(int *)(lVar6 + 0x830);
    if ((longlong)iVar3 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x828);
      lVar8 = 0;
      do {
        if (((*(int *)(lVar6 + 8 + lVar8) != 0) &&
            (plVar4 = *(longlong **)(lVar6 + lVar8), plVar4 != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,&DAT_14cc06a3c), cVar5 != '\0'))
        goto LAB_149199f5a;
        lVar8 = lVar8 + 0x10;
      } while ((longlong)iVar3 * 0x10 != lVar8);
    }
    lVar6 = FUN_145c01f0e(lVar1);
    FUN_14919b960(lVar6 + 0x828,local_40);
LAB_149199f5a:
    lVar6 = FUN_145c01f0e(lVar1);
    FUN_14919ba92(lVar6 + 0x828,local_40,param_1);
    lVar6 = FUN_145c01f0e(lVar1);
    iVar3 = *(int *)(lVar6 + 0x878);
    if ((longlong)iVar3 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x870);
      lVar8 = 0;
      do {
        if (((*(int *)(lVar6 + 8 + lVar8) != 0) &&
            (plVar4 = *(longlong **)(lVar6 + lVar8), plVar4 != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,param_1), cVar5 != '\0'))
        goto LAB_149199fa6;
        lVar8 = lVar8 + 0x10;
      } while ((longlong)iVar3 * 0x10 != lVar8);
    }
    lVar6 = FUN_145c01f0e(lVar1);
    FUN_14919bdca(lVar6 + 0x870,local_40,param_1);
LAB_149199fa6:
    uVar7 = FUN_145c01f0e(lVar1);
    FUN_14919bec0(param_1,uVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14919a042 FUN_14919a042 body=125 status=ok
// SIG undefined FUN_14919a042(void)

undefined8 FUN_14919a042(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_145c01f0e(param_1 + 0x60);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    plVar2 = (longlong *)FUN_145c01f0e(param_1 + 0x60);
    lVar1 = (**(code **)(*plVar2 + 0x3b0))(plVar2,param_1 + 0x88);
    if ((lVar1 != 0) &&
       (((param_2 == '\0' || (lVar1 = FUN_14919a172(param_1), lVar1 != 0)) ||
        (lVar1 = FUN_14919a29a(param_1), lVar1 != 0)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14919a0c0 FUN_14919a0c0 body=177 status=ok
// SIG undefined FUN_14919a0c0(void)

void FUN_14919a0c0(longlong *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  plVar5 = param_1 + 0xc;
  lVar2 = FUN_145c01f0e(plVar5);
  if ((lVar2 == 0) || (lVar2 = FUN_145c01f0e(plVar5), *(int *)(lVar2 + 0x1a0) != 0)) {
    return;
  }
  plVar3 = (longlong *)FUN_145c01f0e(plVar5);
  cVar1 = (**(code **)(*plVar3 + 0x478))(plVar3);
  if (cVar1 != '\0') {
    uVar4 = FUN_145c01f0e(plVar5);
    cVar1 = FUN_149199d5c(uVar4);
    if (cVar1 != '\0') {
      return;
    }
    lVar2 = FUN_14919a172(param_1);
    if ((lVar2 != 0) && (cVar1 = FUN_14348dd60(lVar2), cVar1 == '\0')) goto LAB_14919a112;
  }
  if (param_2 == '\0') {
    plVar5 = (longlong *)FUN_145c01f0e(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00014919a16a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x2c0))(plVar5);
    return;
  }
LAB_14919a112:
                    /* WARNING: Could not recover jumptable at 0x00014919a11f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e0))(param_1);
  return;
}



// FUNCTION 14919a172 FUN_14919a172 body=161 status=ok
// SIG undefined FUN_14919a172(void)

longlong FUN_14919a172(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_145c01f0e(param_1 + 0x60);
  if (lVar4 == 0) {
    return 0;
  }
  lVar4 = FUN_145c01f0e(param_1 + 0x60);
  plVar2 = *(longlong **)(lVar4 + 0x360);
  plVar3 = *(longlong **)(lVar4 + 0x368);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((plVar2 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar2 + 0x28))(), lVar4 != 0)) {
    lVar5 = FUN_144a74fb4();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_14919a1ec;
  }
  lVar4 = 0;
LAB_14919a1ec:
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
  return lVar4;
}


