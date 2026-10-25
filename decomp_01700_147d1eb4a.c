// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147d1eb4a FUN_147d1eb4a body=98 status=ok
// SIG undefined FUN_147d1eb4a(void)

void FUN_147d1eb4a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147d1ebac FUN_147d1ebac body=82 status=ok
// SIG undefined FUN_147d1ebac(void)

void FUN_147d1ebac(longlong param_1,longlong param_2,int param_3)

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
      if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147d1ebfe FUN_147d1ebfe body=154 status=ok
// SIG undefined FUN_147d1ebfe(void)

longlong FUN_147d1ebfe(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_147d1ec68;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_147d1ec68:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_144862e2a(param_1,param_2);
  return param_1;
}



// FUNCTION 147d1ec98 FUN_147d1ec98 body=41 status=ok
// SIG undefined FUN_147d1ec98(void)

void FUN_147d1ec98(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_140552fc6();
  return;
}



// FUNCTION 147d1ecc2 FUN_147d1ecc2 body=96 status=ok
// SIG undefined FUN_147d1ecc2(void)

void FUN_147d1ecc2(longlong param_1,int param_2)

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



// FUNCTION 147d1ed22 FUN_147d1ed22 body=367 status=ok
// SIG undefined FUN_147d1ed22(void)

longlong * FUN_147d1ed22(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14491ce3c(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x40000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1467fd008(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x40;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_14491ce3c(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147d1ee92(param_2);
        FUN_1467fd008(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d1ee92 FUN_147d1ee92 body=64 status=ok
// SIG undefined FUN_147d1ee92(void)

longlong FUN_147d1ee92(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140491d2e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_147d1eed2(lVar2,1);
  return lVar2;
}



// FUNCTION 147d1eed2 FUN_147d1eed2 body=1 status=ok
// SIG undefined FUN_147d1eed2(void)

void FUN_147d1eed2(void)

{
  return;
}



// FUNCTION 147d1eed4 FUN_147d1eed4 body=62 status=ok
// SIG undefined FUN_147d1eed4(void)

void FUN_147d1eed4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d1ef12(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147d1ef12 FUN_147d1ef12 body=93 status=ok
// SIG undefined FUN_147d1ef12(void)

ulonglong FUN_147d1ef12(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147d1ef70 FUN_147d1ef70 body=122 status=ok
// SIG undefined FUN_147d1ef70(void)

void FUN_147d1ef70(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147d1efea FUN_147d1efea body=98 status=ok
// SIG undefined FUN_147d1efea(void)

void FUN_147d1efea(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147d1f04c FUN_147d1f04c body=98 status=ok
// SIG undefined FUN_147d1f04c(void)

void FUN_147d1f04c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147d1f0ae FUN_147d1f0ae body=112 status=ok
// SIG undefined FUN_147d1f0ae(void)

void FUN_147d1f0ae(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf0,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xf0)) {
      uVar2 = uVar1 / 0xf0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xf0,8);
  }
  return;
}



// FUNCTION 147d1f11e FUN_147d1f11e body=109 status=ok
// SIG undefined FUN_147d1f11e(void)

void FUN_147d1f11e(longlong param_1,int param_2)

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
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x70,0x10);
  }
  return;
}



// FUNCTION 147d1f18b FUN_147d1f18b body=45 status=ok
// SIG undefined FUN_147d1f18b(void)

void FUN_147d1f18b(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  do {
    *param_1 = 0;
    puVar2 = &DAT_14c846480;
    puVar3 = param_1 + 2;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_1 = param_1 + 0xe;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 147d1f1b8 FUN_147d1f1b8 body=98 status=ok
// SIG undefined FUN_147d1f1b8(void)

void FUN_147d1f1b8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147d1f21a FUN_147d1f21a body=132 status=ok
// SIG undefined FUN_147d1f21a(void)

void FUN_147d1f21a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d1f2a0 FUN_147d1f2a0 body=147 status=ok
// SIG undefined FUN_147d1f2a0(void)

void FUN_147d1f2a0(longlong param_1,int param_2)

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



// FUNCTION 147d1f334 FUN_147d1f334 body=147 status=ok
// SIG undefined FUN_147d1f334(void)

void FUN_147d1f334(longlong param_1,int param_2)

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



// FUNCTION 147d1f3c8 FUN_147d1f3c8 body=132 status=ok
// SIG undefined FUN_147d1f3c8(void)

void FUN_147d1f3c8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d1f44e FUN_147d1f44e body=122 status=ok
// SIG undefined FUN_147d1f44e(void)

longlong FUN_147d1f44e(longlong param_1,longlong param_2)

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
    FUN_147d1f4c8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147d1f4c8 FUN_147d1f4c8 body=115 status=ok
// SIG undefined FUN_147d1f4c8(void)

undefined8 * FUN_147d1f4c8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1404dc9f8(param_1,uVar1);
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



// FUNCTION 147d1f53c FUN_147d1f53c body=147 status=ok
// SIG undefined FUN_147d1f53c(void)

void FUN_147d1f53c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d1f5d0 FUN_147d1f5d0 body=114 status=ok
// SIG undefined FUN_147d1f5d0(void)

void FUN_147d1f5d0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147d1f642 FUN_147d1f642 body=114 status=ok
// SIG undefined FUN_147d1f642(void)

void FUN_147d1f642(longlong *param_1,int param_2)

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



// FUNCTION 147d1f6ce FUN_147d1f6ce body=29 status=ok
// SIG undefined FUN_147d1f6ce(void)

bool FUN_147d1f6ce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147d1f6ec FUN_147d1f6ec body=26 status=ok
// SIG undefined FUN_147d1f6ec(void)

bool FUN_147d1f6ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147d1f706 FUN_147d1f706 body=24 status=ok
// SIG undefined FUN_147d1f706(void)

bool FUN_147d1f706(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147d1f71e FUN_147d1f71e body=101 status=ok
// SIG undefined FUN_147d1f71e(void)

void FUN_147d1f71e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa8f540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d1f784 FUN_147d1f784 body=134 status=ok
// SIG undefined FUN_147d1f784(void)

void FUN_147d1f784(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa8f540;
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
                    /* WARNING: Could not recover jumptable at 0x000147d1f7fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d1f80a FUN_147d1f80a body=42 status=ok
// SIG undefined FUN_147d1f80a(void)

void FUN_147d1f80a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147d1f831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147d1f834 FUN_147d1f834 body=154 status=ok
// SIG undefined FUN_147d1f834(void)

bool FUN_147d1f834(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 147d1f8d0 FUN_147d1f8d0 body=147 status=ok
// SIG undefined FUN_147d1f8d0(void)

void FUN_147d1f8d0(longlong param_1,int param_2)

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



// FUNCTION 147d1f964 FUN_147d1f964 body=135 status=ok
// SIG undefined FUN_147d1f964(void)

void FUN_147d1f964(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147d1fd2e(param_1,iVar1);
    }
    FUN_147d1fd18((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_147d1fdc2(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_147d1fe2a(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147d1f9ec FUN_147d1f9ec body=144 status=ok
// SIG undefined FUN_147d1f9ec(void)

void FUN_147d1f9ec(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x208);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x208) = param_2;
    if ((uint)(*(int *)(param_1 + 0x20c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147d1ff06(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar2 = param_1;
    }
    FUN_147d1fedf((longlong)iVar1 * 0x20 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147d2000c(param_1,param_2,iVar1 - param_2);
    FUN_147d2007c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147d1fa7e FUN_147d1fa7e body=603 status=ok
// SIG undefined FUN_147d1fa7e(void)

bool FUN_147d1fa7e(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar14 = dVar1 * dVar4 - dVar3 * dVar2;
  dVar5 = param_2[2];
  dVar6 = param_3[2];
  dVar15 = dVar5 * dVar3 - dVar6 * dVar1;
  dVar16 = dVar2 * dVar6 - dVar4 * dVar5;
  dVar7 = *param_4;
  dVar8 = param_4[1];
  dVar9 = param_4[2];
  dVar13 = dVar14 * dVar9 + dVar16 * dVar7 + dVar15 * dVar8;
  if (dVar13 * dVar13 < 1.0000001111620804e-06) {
    param_1[2] = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
    *param_1 = DAT_14c8464e0;
    param_1[1] = dVar1;
  }
  else {
    dVar10 = param_2[3];
    dVar11 = param_3[3];
    dVar12 = param_4[3];
    dVar17 = 1.0 / dVar13;
    *param_1 = dVar17 * (dVar16 * dVar12 +
                        (dVar8 * dVar5 - dVar2 * dVar9) * dVar11 +
                        (dVar4 * dVar9 - dVar8 * dVar6) * dVar10);
    param_1[1] = (dVar15 * dVar12 +
                 (dVar9 * dVar1 - dVar5 * dVar7) * dVar11 + (dVar6 * dVar7 - dVar9 * dVar3) * dVar10
                 ) * dVar17;
    param_1[2] = (dVar14 * dVar12 +
                 (dVar7 * dVar2 - dVar1 * dVar8) * dVar11 + (dVar3 * dVar8 - dVar7 * dVar4) * dVar10
                 ) * dVar17;
  }
  return 1.0000001111620804e-06 <= dVar13 * dVar13;
}



// FUNCTION 147d1fcda FUN_147d1fcda body=62 status=ok
// SIG undefined FUN_147d1fcda(void)

void FUN_147d1fcda(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar1 = param_1;
  }
  FUN_146c93168(lVar1,*(undefined4 *)(param_1 + 0x208));
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d1fd18 FUN_147d1fd18 body=22 status=ok
// SIG undefined FUN_147d1fd18(void)

void FUN_147d1fd18(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x30);
    return;
  }
  return;
}



// FUNCTION 147d1fd2e FUN_147d1fd2e body=147 status=ok
// SIG undefined FUN_147d1fd2e(void)

void FUN_147d1fd2e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d1fdc2 FUN_147d1fdc2 body=104 status=ok
// SIG undefined FUN_147d1fdc2(void)

void FUN_147d1fdc2(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x30 + *param_1);
  FUN_146fdebd4(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x30 + (longlong)_Dst),(longlong)iVar2 * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147d1fe2a FUN_147d1fe2a body=63 status=ok
// SIG undefined FUN_147d1fe2a(void)

void FUN_147d1fe2a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d1fe6a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,0x10);
  }
  return;
}



// FUNCTION 147d1fe6a FUN_147d1fe6a body=117 status=ok
// SIG undefined FUN_147d1fe6a(void)

ulonglong FUN_147d1fe6a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x30) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,0x10);
      uVar1 = uVar1 / 0x30;
    }
  }
  return uVar1;
}



// FUNCTION 147d1fedf FUN_147d1fedf body=39 status=ok
// SIG undefined FUN_147d1fedf(void)

void FUN_147d1fedf(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x1c;
    do {
      *(undefined8 *)(param_1 + -0xc) = 0;
      *(undefined8 *)(param_1 + -4) = 0x400000000;
      param_1 = param_1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147d1ff06 FUN_147d1ff06 body=119 status=ok
// SIG undefined FUN_147d1ff06(void)

void FUN_147d1ff06(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_147d1ff7e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147d1ff7e FUN_147d1ff7e body=141 status=ok
// SIG undefined FUN_147d1ff7e(void)

void FUN_147d1ff7e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,0x20);
  return;
}



// FUNCTION 147d2000c FUN_147d2000c body=112 status=ok
// SIG undefined FUN_147d2000c(void)

void FUN_147d2000c(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((ulonglong)param_2 * 0x20 + lVar2);
  FUN_146c93168(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x208);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x20 + (longlong)_Dst),(longlong)iVar3 << 5);
    iVar1 = *(int *)(param_1 + 0x208);
  }
  *(int *)(param_1 + 0x208) = iVar1 - param_3;
  return;
}



// FUNCTION 147d2007c FUN_147d2007c body=67 status=ok
// SIG undefined FUN_147d2007c(void)

void FUN_147d2007c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d200c0(*(undefined4 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x20c));
  if (iVar1 == *(int *)(param_1 + 0x20c)) {
    return;
  }
  *(int *)(param_1 + 0x20c) = iVar1;
  FUN_147d1ff7e(param_1,*(undefined4 *)(param_1 + 0x208),iVar1);
  return;
}



// FUNCTION 147d200c0 FUN_147d200c0 body=108 status=ok
// SIG undefined FUN_147d200c0(void)

ulonglong FUN_147d200c0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x10;
  if (0x10 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x7fffffffffffe00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,0);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 147d2012c FUN_147d2012c body=159 status=ok
// SIG undefined FUN_147d2012c(void)

undefined8 * FUN_147d2012c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_146fdec64(param_1,iVar1,0);
    FUN_146fdecd7(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 0x18);
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return param_1;
}



// FUNCTION 147d201cc FUN_147d201cc body=31 status=ok
// SIG undefined FUN_147d201cc(void)

undefined8 FUN_147d201cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d20206 FUN_147d20206 body=29 status=ok
// SIG undefined FUN_147d20206(void)

bool FUN_147d20206(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147d20224 FUN_147d20224 body=26 status=ok
// SIG undefined FUN_147d20224(void)

bool FUN_147d20224(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147d2023e FUN_147d2023e body=101 status=ok
// SIG undefined FUN_147d2023e(void)

void FUN_147d2023e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa8f5b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d202a4 FUN_147d202a4 body=134 status=ok
// SIG undefined FUN_147d202a4(void)

void FUN_147d202a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa8f5b0;
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
                    /* WARNING: Could not recover jumptable at 0x000147d2031b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d2032a FUN_147d2032a body=39 status=ok
// SIG undefined FUN_147d2032a(void)

void FUN_147d2032a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147d2034d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147d20352 FUN_147d20352 body=48 status=ok
// SIG undefined FUN_147d20352(void)

void FUN_147d20352(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 147d20382 FUN_147d20382 body=138 status=ok
// SIG undefined FUN_147d20382(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_147d20382(void)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar1 = DAT_14cb06e20;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(int *)(lVar1 + uVar4 * 4) == 0) {
    uVar3 = 1;
  }
  else if (((DAT_14cb06f70 == 0x400) && (DAT_14c7585d8 == 0)) ||
          ((DAT_14cb06f70 == 0x800 && (DAT_14c7585dc == 0)))) {
    uVar3 = _DAT_14cb06f78 | 0xff;
  }
  else {
    uVar3 = DAT_14cb06f70 | _DAT_14cb06f74 | 0xff;
  }
  return uVar3;
}



// FUNCTION 147d2040c FUN_147d2040c body=68 status=ok
// SIG undefined FUN_147d2040c(void)

void FUN_147d2040c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_147ade7c3(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147d20452(param_1,param_2);
  return;
}



// FUNCTION 147d20452 FUN_147d20452 body=95 status=ok
// SIG undefined FUN_147d20452(void)

void FUN_147d20452(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147d204b2 FUN_147d204b2 body=132 status=ok
// SIG undefined FUN_147d204b2(void)

void FUN_147d204b2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d20538 FUN_147d20538 body=79 status=ok
// SIG undefined FUN_147d20538(void)

void FUN_147d20538(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + 0x10);
  FUN_14074fa8b(_Dst);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + 1);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_2 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar1 - param_2;
  return;
}



// FUNCTION 147d20588 FUN_147d20588 body=62 status=ok
// SIG undefined FUN_147d20588(void)

void FUN_147d20588(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d205c6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147d205c6 FUN_147d205c6 body=93 status=ok
// SIG undefined FUN_147d205c6(void)

ulonglong FUN_147d205c6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147d20624 FUN_147d20624 body=132 status=ok
// SIG undefined FUN_147d20624(void)

void FUN_147d20624(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d206aa FUN_147d206aa body=150 status=ok
// SIG undefined FUN_147d206aa(void)

void FUN_147d206aa(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf8)) {
      uVar5 = uVar4 / 0xf8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d20742 FUN_147d20742 body=38 status=ok
// SIG undefined FUN_147d20742(void)

undefined8 FUN_147d20742(undefined8 param_1,int param_2)

{
  FUN_1407502a2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d20768 FUN_147d20768 body=32 status=ok
// SIG undefined FUN_147d20768(void)

undefined8 FUN_147d20768(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FDuplicatedVerticesBuffer");
  return param_2;
}



// FUNCTION 147d20788 FUN_147d20788 body=56 status=ok
// SIG undefined FUN_147d20788(void)

longlong FUN_147d20788(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 0x10) != 0 && (*(ulonglong *)(param_1 + 0x10) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d207c0 FUN_147d207c0 body=111 status=ok
// SIG undefined FUN_147d207c0(void)

void FUN_147d207c0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  lVar1 = param_1 + 0x10;
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 < param_2) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 < (int)param_2) {
      FUN_14024fde8(lVar1,param_2);
      uVar3 = *(uint *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x1c);
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (iVar2 - uVar3 < param_2 - uVar3) {
      FUN_14042c7ac(lVar1);
      return;
    }
  }
  else if (param_2 < uVar3) {
    *(uint *)(param_1 + 0x18) = param_2;
    FUN_14738c64c(lVar1);
    return;
  }
  return;
}



// FUNCTION 147d20864 FUN_147d20864 body=60 status=ok
// SIG undefined FUN_147d20864(void)

longlong FUN_147d20864(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -8);
  }
  return param_1 + -8;
}



// FUNCTION 147d208a0 FUN_147d208a0 body=56 status=ok
// SIG undefined FUN_147d208a0(void)

longlong FUN_147d208a0(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 0x10) != 0 && (*(ulonglong *)(param_1 + 0x10) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d208d8 FUN_147d208d8 body=111 status=ok
// SIG undefined FUN_147d208d8(void)

void FUN_147d208d8(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  lVar1 = param_1 + 0x10;
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 < param_2) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 < (int)param_2) {
      FUN_140552fc6(lVar1,param_2);
      uVar3 = *(uint *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x1c);
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (iVar2 - uVar3 < param_2 - uVar3) {
      FUN_147d20a02(lVar1);
      return;
    }
  }
  else if (param_2 < uVar3) {
    *(uint *)(param_1 + 0x18) = param_2;
    FUN_147d20a88(lVar1);
    return;
  }
  return;
}



// FUNCTION 147d2097c FUN_147d2097c body=60 status=ok
// SIG undefined FUN_147d2097c(void)

longlong FUN_147d2097c(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -8);
  }
  return param_1 + -8;
}



// FUNCTION 147d209ca FUN_147d209ca body=56 status=ok
// SIG undefined FUN_147d209ca(void)

longlong FUN_147d209ca(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d20a02 FUN_147d20a02 body=132 status=ok
// SIG undefined FUN_147d20a02(void)

void FUN_147d20a02(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d20a88 FUN_147d20a88 body=63 status=ok
// SIG undefined FUN_147d20a88(void)

void FUN_147d20a88(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d20ac8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147d20ac8 FUN_147d20ac8 body=97 status=ok
// SIG undefined FUN_147d20ac8(void)

ulonglong FUN_147d20ac8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147d20b2a FUN_147d20b2a body=541 status=ok
// SIG undefined FUN_147d20b2a(void)

void FUN_147d20b2a(ulonglong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 8;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_14089a4a8(param_2,param_1);
    goto LAB_147d20b9d;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[1] << 3,(longlong)*(int *)((longlong)param_1 + 0xc) << 3
            );
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_147d20b9d;
    local_28 = (uint)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_147d20c56:
    uVar4 = *param_1;
    uVar5 = ((longlong)uVar4 >> 0x18) + (longlong)param_1;
    if ((uVar4 & 1) == 0) {
      uVar5 = uVar4;
    }
    (**(code **)(*param_2 + 0x170))(param_2,uVar5,(longlong)(int)local_28 << 3);
  }
  else {
    if (local_24 == 8) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0x10000000) {
        FUN_147d1ec98(param_1);
        uVar4 = param_1[1];
        *(uint *)(param_1 + 1) = (int)uVar4 + local_28;
        if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)uVar4) < local_28) {
          FUN_147d20a02(param_1);
        }
        goto LAB_147d20c56;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_147d20b9d:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d20d48 FUN_147d20d48 body=218 status=ok
// SIG undefined FUN_147d20d48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147d20d48(void)

{
  if ((DAT_14cb077ff & 2) == 0) {
    DAT_14cb077ff = DAT_14cb077ff | 2;
    _DAT_14cb077a0 = L"TResourceArray";
    _DAT_14cb077b8 = FUN_146826540;
    _DAT_14cb077c0 = FUN_146825d77;
    _DAT_14cb077c8 = FUN_146825fd6;
    _DAT_14cb077d0 = FUN_1407e02ea;
    _DAT_14cb077d8 = FUN_146826273;
    _DAT_14cb077b0 = FUN_147d20e22;
    _DAT_14cb077f0 = 0xffffffff00000020;
    _DAT_14cb077f8 = 8;
    DAT_14cb077fc = 1;
    _DAT_14cb077e0 = &LAB_147d20e4e;
    FUN_147d20e54(&DAT_14cb07798);
    FUN_147d20f62(&DAT_14cb07798);
    FUN_1407e00cc(&DAT_14cb07798);
  }
  return &DAT_14cb07798;
}



// FUNCTION 147d20e22 FUN_147d20e22 body=43 status=ok
// SIG undefined FUN_147d20e22(void)

void FUN_147d20e22(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147d20e54 FUN_147d20e54 body=269 status=ok
// SIG undefined FUN_147d20e54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147d20e54(longlong param_1)

{
  _DAT_14cb07828 = L"bNeedsCPUAccess";
  DAT_14cb07852 = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14cb07830 = &DAT_14c9cfcf0;
  _DAT_14cb07840 = &LAB_14682652b;
  _DAT_14cb07848 = &DAT_100000018;
  _DAT_14cb07850 = 0;
  _DAT_14cb07838 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14cb07828;
  return;
}



// FUNCTION 147d20f62 FUN_147d20f62 body=361 status=ok
// SIG undefined FUN_147d20f62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147d20f62(longlong param_1)

{
  longlong lVar1;
  
  _DAT_14cb07708 = L"BASE";
  DAT_14cb07732 = 4;
  if ((DAT_14cb078bf & 2) == 0) {
    DAT_14cb078bf = DAT_14cb078bf | 3;
    _DAT_14cb07860 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb07878 = FUN_147d2114a;
    _DAT_14cb07880 = &LAB_147d211aa;
    _DAT_14cb07888 = &LAB_147d211b8;
    _DAT_14cb07890 = &LAB_147d211c6;
    _DAT_14cb07898 = &DAT_147d211d4;
    _DAT_14cb07870 = FUN_147d211d6;
    _DAT_14cb078b0 = 0x1000000010;
    _DAT_14cb078b8 = 8;
    DAT_14cb078bc = '\0';
  }
  _DAT_14cb07710 = &DAT_14cb07858;
  _DAT_14cb07720 = &LAB_14682652b;
  _DAT_14cb07728 = &DAT_100000008;
  _DAT_14cb07718 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14cb07708;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (DAT_14cb078bc != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  _DAT_14cb07738 = L"BASE";
  DAT_14cb07762 = 4;
  lVar1 = FUN_146268212();
  _DAT_14cb07750 = &LAB_14682652b;
  _DAT_14cb07758 = 0x100000000;
  _DAT_14cb07748 = *(undefined8 *)(param_1 + 0x10);
  _DAT_14cb07740 = lVar1;
  *(undefined **)(param_1 + 0x10) = &DAT_14cb07738;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (*(char *)(lVar1 + 100) != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  return;
}



// FUNCTION 147d210cb FUN_147d210cb body=127 status=ok
// SIG undefined FUN_147d210cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147d210cb(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb07820) {
    FUN_144b3d300(&DAT_14cb07820);
    if (DAT_14cb07820 == -1) {
      DAT_14cb07808 = 0;
      uRam000000014cb07810 = 0;
      _DAT_14cb07800 = &PTR_FUN_14aa8f970;
      DAT_14cb07818 = 0;
      atexit((_func_5014 *)&LAB_1436bd844);
      _Init_thread_footer(&DAT_14cb07820);
    }
  }
  return &DAT_14cb07800;
}



// FUNCTION 147d2114a FUN_147d2114a body=95 status=ok
// SIG undefined FUN_147d2114a(void)

void FUN_147d2114a(void)

{
  undefined1 auStack_48 [32];
  ulonglong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_146826a6c(0,local_28,0x10);
  if (local_28[0] != 0 && (local_28[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d211d6 FUN_147d211d6 body=51 status=ok
// SIG undefined FUN_147d211d6(void)

void FUN_147d211d6(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147d21226 FUN_147d21226 body=75 status=ok
// SIG undefined FUN_147d21226(void)

void FUN_147d21226(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147d21272(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d21272 FUN_147d21272 body=154 status=ok
// SIG undefined FUN_147d21272(void)

void FUN_147d21272(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  switchD_143c3d4dc::caseD_21();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  iVar2 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  if ((iVar2 < 7) && (0 < *(int *)(param_1 + 0xb0))) {
    lVar3 = 100;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0xa8);
      *(undefined1 *)(lVar1 + 4 + lVar3) = 2;
      if ((*(float *)(lVar1 + lVar3) == 0.0) && (!NAN(*(float *)(lVar1 + lVar3)))) {
        *(undefined4 *)(lVar1 + lVar3) = 0x3f800000;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x90;
    } while (lVar4 < *(int *)(param_1 + 0xb0));
  }
  return;
}



// FUNCTION 147d2130c FUN_147d2130c body=70 status=ok
// SIG undefined FUN_147d2130c(void)

void FUN_147d2130c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (0 < (int)param_1[1]) {
    lVar1 = 0;
    do {
      FUN_147d1dc62(*(undefined8 *)(*param_1 + lVar1 * 8),param_2);
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[1]);
  }
  FUN_140136050(param_1 + 2,param_2);
  return;
}



// FUNCTION 147d21352 FUN_147d21352 body=81 status=ok
// SIG undefined FUN_147d21352(void)

int FUN_147d21352(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] < 1) {
    iVar3 = 0;
  }
  else {
    lVar4 = 0;
    iVar3 = 0;
    do {
      lVar2 = *(longlong *)(*param_1 + lVar4 * 8);
      lVar5 = (longlong)*(int *)(lVar2 + 0x18);
      if (0 < lVar5) {
        lVar6 = 0;
        do {
          iVar1 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x40 + lVar6);
          if (iVar3 < iVar1) {
            iVar3 = iVar1;
          }
          lVar6 = lVar6 + 0xf8;
        } while (lVar5 * 0xf8 - lVar6 != 0);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != (int)param_1[1]);
  }
  return iVar3;
}



// FUNCTION 147d213a4 FUN_147d213a4 body=12 status=ok
// SIG undefined FUN_147d213a4(void)

undefined8 FUN_147d213a4(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),
                  0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x70));
}



// FUNCTION 147d213c2 FUN_147d213c2 body=955 status=ok
// SIG undefined FUN_147d213c2(void)

float FUN_147d213c2(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined1 auStack_138 [32];
  double *local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  longlong **local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x388))();
  local_b0 = *(longlong *)(*plVar4 + (longlong)*(int *)(param_1 + 0x40) * 8);
  local_98 = local_b0 + 0x138;
  local_a8 = &local_98;
  local_a0 = *(longlong **)(local_b0 + 0x28);
  local_c0 = &local_a0;
  plVar4 = *(longlong **)(param_1 + 0x38);
  local_b8 = param_1;
  if (plVar4 == (longlong *)0x0) {
    iVar3 = (**(code **)(*local_a0 + 0x50))();
    if (iVar3 < -2) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3 / 3);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar3 / 3) {
      FUN_14482f6fa(param_2);
    }
    if (0 < iVar3) {
      fVar12 = 0.0;
      iVar5 = 0;
      do {
        local_118 = &local_108;
        FUN_1436bfb4c(&local_c0,iVar5,&local_d8,&local_f0);
        dVar9 = (local_f0 - local_d8) * (local_100 - local_d0) -
                (local_108 - local_d8) * (local_e8 - local_d0);
        dVar11 = (local_e0 - local_c8) * (local_108 - local_d8) -
                 (local_f8 - local_c8) * (local_f0 - local_d8);
        dVar10 = (local_e8 - local_d0) * (local_f8 - local_c8) -
                 (local_100 - local_d0) * (local_e0 - local_c8);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14475e4ac(param_2,iVar2);
        }
        fVar8 = (float)(SQRT(dVar9 * dVar9 + dVar10 * dVar10 + dVar11 * dVar11) * 0.5);
        *(float *)(*param_2 + (longlong)iVar2 * 4) = fVar8;
        fVar12 = fVar12 + fVar8;
        iVar5 = iVar5 + 3;
      } while (iVar5 < iVar3);
      goto LAB_147d215b9;
    }
  }
  else {
    uVar1 = *(uint *)(plVar4 + 1);
    uVar7 = (ulonglong)uVar1;
    if (uVar7 != 0) {
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar7);
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(uint *)((longlong)param_2 + 0xc) != uVar1) {
        FUN_14482f6fa(param_2,uVar1);
      }
      fVar12 = 0.0;
      uVar6 = 0;
      do {
        local_118 = &local_108;
        FUN_1436bfb4c(&local_c0,*(undefined4 *)(*plVar4 + uVar6 * 4),&local_d8,&local_f0);
        dVar9 = (local_f0 - local_d8) * (local_100 - local_d0) -
                (local_108 - local_d8) * (local_e8 - local_d0);
        dVar11 = (local_e0 - local_c8) * (local_108 - local_d8) -
                 (local_f8 - local_c8) * (local_f0 - local_d8);
        dVar10 = (local_e8 - local_d0) * (local_f8 - local_c8) -
                 (local_100 - local_d0) * (local_e0 - local_c8);
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_14475e4ac(param_2,iVar3);
        }
        fVar8 = (float)(SQRT(dVar9 * dVar9 + dVar10 * dVar10 + dVar11 * dVar11) * 0.5);
        *(float *)(*param_2 + (longlong)iVar3 * 4) = fVar8;
        fVar12 = fVar12 + fVar8;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
      goto LAB_147d215b9;
    }
  }
  fVar12 = 0.0;
LAB_147d215b9:
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar12;
}



// FUNCTION 147d21784 FUN_147d21784 body=120 status=ok
// SIG undefined FUN_147d21784(void)

undefined8 * FUN_147d21784(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb07a80) {
    FUN_144b3d300(&DAT_14cb07a80);
    if (DAT_14cb07a80 == -1) {
      FUN_1446ddc76(&DAT_14cb07a78,"Project",1);
      _Init_thread_footer(&DAT_14cb07a80);
    }
  }
  *param_2 = DAT_14cb07a78;
  return param_2;
}



// FUNCTION 147d217fc FUN_147d217fc body=120 status=ok
// SIG undefined FUN_147d217fc(void)

undefined8 * FUN_147d217fc(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb07a90) {
    FUN_144b3d300(&DAT_14cb07a90);
    if (DAT_14cb07a90 == -1) {
      FUN_1446ddc76(&DAT_14cb07a88,"Editor",1);
      _Init_thread_footer(&DAT_14cb07a90);
    }
  }
  *param_2 = DAT_14cb07a88;
  return param_2;
}



// FUNCTION 147d21874 FUN_147d21874 body=108 status=ok
// SIG undefined FUN_147d21874(void)

undefined8 * FUN_147d21874(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 1;
  FUN_1401b309e(param_1 + 8,1,0);
  *(undefined8 *)param_1[8] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 1;
  FUN_1401b309e(param_1 + 10,1,0);
  *(undefined8 *)param_1[10] = 0;
  return param_1;
}



// FUNCTION 147d218e0 FUN_147d218e0 body=205 status=ok
// SIG undefined FUN_147d218e0(void)

ulonglong FUN_147d218e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb07ab0) {
    FUN_144b3d300(&DAT_14cb07ab0);
    if (DAT_14cb07ab0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb07aa8 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.MorphTarget.MaxBlendWeight",1);
      _Init_thread_footer(&DAT_14cb07ab0);
    }
  }
  if (DAT_14cb07aa8 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d2191a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*DAT_14cb07aa8 + 0xb8))();
    return uVar3;
  }
  plVar1 = (longlong *)FUN_144a85204();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  return (ulonglong)*(uint *)(lVar2 + 0x18c);
}



// FUNCTION 147d219ae FUN_147d219ae body=19 status=ok
// SIG undefined FUN_147d219ae(void)

longlong FUN_147d219ae(longlong param_1,int param_2)

{
  return *(longlong *)(**(longlong **)(param_1 + 0x40) + (longlong)param_2 * 8) + 0x10;
}



// FUNCTION 147d219c2 FUN_147d219c2 body=231 status=ok
// SIG undefined FUN_147d219c2(void)

undefined8 *
FUN_147d219c2(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  
  FUN_1436bfd3e();
  ppuVar2 = &PTR_FUN_14aa92630;
  *param_1 = &PTR_FUN_14aa92630;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  if (0 < *(int *)(param_3 + 8)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x2a);
      *(uint *)(param_1 + 0x2a) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x154) < iVar1 + 1U) {
        FUN_147d2e022(param_1 + 0x29,iVar1);
      }
      FUN_147d21aaa((longlong)iVar1 * 0x3c0 + param_1[0x29],param_4,param_3,iVar3,param_5);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_3 + 8));
    ppuVar2 = (undefined **)*param_1;
  }
  (*(code *)ppuVar2[1])(param_1,param_2);
  *(undefined1 *)((longlong)param_1 + 0x5e) = 0;
  return param_1;
}



// FUNCTION 147d21aaa FUN_147d21aaa body=288 status=ok
// SIG undefined FUN_147d21aaa(void)

undefined8 *
FUN_147d21aaa(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = param_4;
  FUN_144b1dcb8(param_1 + 2);
  param_1[2] = &PTR_FUN_14a1ca480;
  param_1[0x36] = 0x400000000;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1fc) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x1fe) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x22c) = 0;
  FUN_1415eaa34(param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x2c4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x2c6) = 0;
  param_1[0x59] = 0;
  param_1[0x57] = &PTR_FUN_14aa50910;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined1 *)(param_1 + 0x5e) = 1;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  FUN_143268f94(param_1 + 0x61);
  *(undefined1 *)(param_1 + 0x77) = 0;
  return param_1;
}



// FUNCTION 147d21bca FUN_147d21bca body=139 status=ok
// SIG undefined FUN_147d21bca(void)

void FUN_147d21bca(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14aa92630;
  puVar1 = (undefined8 *)param_1[0x2b];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_147d2dfd0(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1402c6bbe(param_1);
  return;
}



// FUNCTION 147d21c56 FUN_147d21c56 body=143 status=ok
// SIG undefined FUN_147d21c56(void)

void FUN_147d21c56(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x150);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = 0;
    do {
      if (*(int *)(*(longlong *)
                    (**(longlong **)(*(longlong *)(param_1 + 0x148) + lVar3) + lVar5 * 8) + 0xec) !=
          0) {
        if (lVar5 < *(int *)(param_2 + 0x870)) {
          lVar2 = *(longlong *)(param_2 + 0x868) + lVar4;
        }
        else {
          lVar2 = 0;
        }
        FUN_1436c0e88(*(longlong *)(param_1 + 0x148) + lVar3,lVar2);
        iVar1 = *(int *)(param_1 + 0x150);
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x28;
      lVar3 = lVar3 + 0x3c0;
    } while (lVar5 < iVar1);
  }
  FUN_1401a9d4a(param_1);
  return;
}



// FUNCTION 147d21ce6 FUN_147d21ce6 body=75 status=ok
// SIG undefined FUN_147d21ce6(void)

void FUN_147d21ce6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x150)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      FUN_147d21d32(*(longlong *)(param_1 + 0x148) + lVar2);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x3c0;
    } while (lVar1 < *(int *)(param_1 + 0x150));
  }
  FUN_1436c0544(param_1);
  return;
}



// FUNCTION 147d21d32 FUN_147d21d32 body=87 status=ok
// SIG undefined FUN_147d21d32(void)

void FUN_147d21d32(longlong param_1)

{
  FUN_140414380(param_1 + 0x10,&DAT_14cb00c08);
  FUN_140414380(param_1 + 0x2b8,&DAT_14cb00c08);
  FUN_140414380(param_1 + 0x230,&DAT_14cb00c08);
  FUN_140414380(param_1 + 0x308,&DAT_14cb00c08);
  *(undefined1 *)(param_1 + 0x3b8) = 0;
  return;
}



// FUNCTION 147d21d8a FUN_147d21d8a body=291 status=ok
// SIG undefined FUN_147d21d8a(void)

void FUN_147d21d8a(longlong param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  void *_Src;
  size_t _Size;
  void *_Dst;
  
  *(undefined1 *)(param_1 + 0x198) = param_2;
  plVar1 = (longlong *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(int *)(param_1 + 0x184) < 0) {
    FUN_14481578e(plVar1,0);
  }
  plVar2 = (longlong *)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x194) < 0) {
    FUN_147d2e0b6(plVar2);
  }
  if (param_3 == (undefined8 *)0x0) {
    if (param_4 != (undefined8 *)0x0) {
      uVar3 = *(uint *)(param_4 + 1);
      if ((longlong)(int)uVar3 != 0) {
        iVar4 = *(int *)(param_1 + 400);
        *(uint *)(param_1 + 400) = iVar4 + uVar3;
        if ((uint)(*(int *)(param_1 + 0x194) - iVar4) < uVar3) {
          FUN_147d2e0e6(plVar2,iVar4);
        }
        _Src = (void *)*param_4;
        _Dst = (void *)((longlong)iVar4 * 8 + *plVar2);
        _Size = (longlong)(int)uVar3 << 3;
        goto LAB_147d21e35;
      }
    }
  }
  else {
    uVar3 = *(uint *)(param_3 + 1);
    if ((longlong)(int)uVar3 != 0) {
      iVar4 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar4 + uVar3;
      if ((uint)(*(int *)(param_1 + 0x184) - iVar4) < uVar3) {
        FUN_1446f48e2(plVar1,iVar4);
      }
      _Src = (void *)*param_3;
      _Dst = (void *)((longlong)iVar4 * 4 + *plVar1);
      _Size = (longlong)(int)uVar3 << 2;
LAB_147d21e35:
      memcpy(_Dst,_Src,_Size);
      return;
    }
  }
  return;
}



// FUNCTION 147d21eae FUN_147d21eae body=545 status=ok
// SIG undefined FUN_147d21eae(void)

undefined8 *
FUN_147d21eae(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148 [16];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *param_1 = &PTR_FUN_14aa92748;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_147d2d030(param_1 + 0x15,param_5);
  param_1[0x1f] = 0;
  iVar1 = *(int *)(param_6 + 1);
  _Src = (void *)*param_6;
  *(int *)(param_1 + 0x20) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0x1f,iVar1,0);
    memcpy((void *)param_1[0x1f],_Src,(longlong)iVar1 << 2);
  }
  uVar7 = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  local_150 = 0;
  local_158 = param_7;
  local_168 = 0;
  uStack_160 = 0;
  FUN_1401edf32(param_1 + 0x12,param_2,param_3,*(undefined4 *)(param_1 + 0x14));
  (**(code **)(*param_2 + 0xa98))(param_2,param_1 + 0x21,local_c8,param_1 + 0x2b);
  FUN_14007522e(local_148,local_c8);
  puVar5 = local_148;
  puVar6 = param_1 + 2;
  for (lVar4 = 0x10; lVar2 = DAT_14cb07ac8, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar3 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar3 ^ 1);
  }
  if (*(char *)(lVar2 + uVar7) == '\0') {
    *(undefined4 *)(param_1 + 0x2b) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d220d0 FUN_147d220d0 body=140 status=ok
// SIG undefined FUN_147d220d0(void)

void FUN_147d220d0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x150);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = 0;
    do {
      if (*(int *)(*(longlong *)
                    (**(longlong **)(*(longlong *)(param_1 + 0x148) + lVar3) + lVar5 * 8) + 0xec) !=
          0) {
        if (lVar5 < *(int *)(param_2 + 0x870)) {
          lVar2 = *(longlong *)(param_2 + 0x868) + lVar4;
        }
        else {
          lVar2 = 0;
        }
        FUN_147d2215c(*(longlong *)(param_1 + 0x148) + lVar3,lVar2);
        iVar1 = *(int *)(param_1 + 0x150);
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x28;
      lVar3 = lVar3 + 0x3c0;
    } while (lVar5 < iVar1);
  }
  return;
}



// FUNCTION 147d2215c FUN_147d2215c body=93 status=ok
// SIG undefined FUN_147d2215c(void)

void FUN_147d2215c(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)*param_1 + (longlong)*(int *)(param_1 + 1) * 8);
  if ((param_2 == 0) ||
     (((lVar2 = *(longlong *)(param_2 + 0x18), lVar2 == 0 ||
       (*(int *)(lVar2 + 0x40) != *(int *)(lVar1 + 0xec))) &&
      ((lVar2 = *(longlong *)(param_2 + 0x20), lVar2 == 0 ||
       (*(int *)(lVar2 + 0x40) != *(int *)(lVar1 + 0xec))))))) {
    lVar2 = lVar1 + 0x138;
    if (*(longlong *)(lVar1 + 0x2a0) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x2a0);
    }
  }
  param_1[0x5f] = lVar2;
  return;
}



// FUNCTION 147d221fe FUN_147d221fe body=1694 status=ok
// SIG undefined FUN_147d221fe(void)

void FUN_147d221fe(longlong param_1,longlong *param_2,double *param_3,char param_4,char param_5,
                  char param_6)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 unaff_XMM6 [16];
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined1 local_1f0;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188;
  undefined1 *puStack_180;
  undefined1 local_178 [12];
  undefined4 uStack_16c;
  double local_168;
  double dStack_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  iVar1 = *(int *)(param_1 + 0x170);
  FUN_14007522e(local_178,param_3);
  dVar9 = local_168;
  if (iVar1 != 0) {
    uStack_1b0 = (undefined4)local_158;
    uStack_1ac = (undefined4)((ulonglong)local_158 >> 0x20);
    local_1b8 = local_178._0_4_;
    uStack_1b4 = local_178._4_4_;
    uStack_1c0 = (undefined4)local_150;
    uStack_1bc = (undefined4)((ulonglong)local_150 >> 0x20);
    local_1c8 = local_178._8_4_;
    uStack_1c4 = uStack_16c;
    local_1d0 = local_138;
    local_1d8 = local_130;
    local_1e0 = local_128;
    dVar6 = dStack_160 * 0.0;
    dVar7 = local_140 * 0.0;
    dVar8 = local_120 * 0.0;
    iVar11 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x168);
      lVar10 = (longlong)iVar11 * 0x60;
      dVar12 = (double)*(float *)(lVar2 + 8 + lVar10);
      dVar17 = (double)*(float *)(lVar2 + 4 + lVar10);
      dVar3 = (double)*(float *)(lVar2 + lVar10);
      dVar4 = dVar12 * param_3[8] + dVar17 * param_3[4] + dVar3 * *param_3 + param_3[0xc];
      dVar5 = dVar12 * param_3[9] + dVar17 * param_3[5] + dVar3 * param_3[1] + param_3[0xd];
      auVar15._0_8_ = dVar12 * param_3[10];
      auVar15._8_8_ = 0;
      local_168 = dVar3 * param_3[2] + dVar17 * param_3[6] + auVar15._0_8_ + param_3[0xe];
      local_178._8_4_ = SUB84(dVar5,0);
      local_178._0_8_ = dVar4;
      uStack_16c = (int)((ulonglong)dVar5 >> 0x20);
      auVar15 = pmovsxbd(auVar15,*(undefined4 *)(lVar2 + 0x10 + lVar10));
      dVar3 = (double)((float)auVar15._0_4_ * 0.007874016);
      dVar12 = (double)((float)auVar15._8_4_ * 0.007874016);
      dVar17 = (double)((float)auVar15._4_4_ * 0.007874016);
      auVar15 = pmovsxbd(unaff_XMM6,*(undefined4 *)(lVar2 + 0xc + lVar10));
      if (param_4 != '\0') {
        local_188 = 0x3f80000000000000;
        puStack_180 = (undefined1 *)0x3f80000000000000;
        dVar13 = dVar12 * dVar9 +
                 dVar17 * (double)CONCAT44(uStack_1c4,local_1c8) +
                 dVar3 * (double)CONCAT44(uStack_1b4,local_1b8) + dVar6;
        dVar16 = dVar12 * local_148 +
                 dVar17 * (double)CONCAT44(uStack_1bc,uStack_1c0) +
                 dVar3 * (double)CONCAT44(uStack_1ac,uStack_1b0) + dVar7;
        dVar18 = local_1d0 * dVar3 + local_1d8 * dVar17 + local_1e0 * dVar12 + dVar8;
        dVar19 = dVar18 * dVar18 + dVar13 * dVar13 + dVar16 * dVar16;
        local_1a0 = 0.0;
        local_198 = 0.0;
        local_190 = 0.0;
        if (9.99999993922529e-09 < dVar19) {
          local_1a0 = 1.0 / SQRT(dVar19);
          local_190 = dVar18 * local_1a0;
          local_198 = dVar16 * local_1a0;
          local_1a0 = local_1a0 * dVar13;
        }
        local_190 = local_168 + local_190;
        local_198 = dVar5 + local_198;
        local_1a0 = local_1a0 + dVar4;
        local_1f0 = 0;
        local_1f8 = 0;
        local_200 = 0;
        local_208 = 0;
        (**(code **)(*param_2 + 0x30))(param_2,local_178,&local_1a0,&local_188);
      }
      dVar19 = (double)((float)auVar15._0_4_ * 0.007874016);
      dVar4 = (double)((float)auVar15._8_4_ * 0.007874016);
      dVar5 = (double)((float)auVar15._4_4_ * 0.007874016);
      if (param_5 != '\0') {
        local_188 = 0x3f800000;
        puStack_180 = (undefined1 *)0x3f80000000000000;
        dVar13 = dVar4 * dVar9 +
                 dVar5 * (double)CONCAT44(uStack_1c4,local_1c8) +
                 dVar19 * (double)CONCAT44(uStack_1b4,local_1b8) + dVar6;
        dVar16 = dVar4 * local_148 +
                 dVar5 * (double)CONCAT44(uStack_1bc,uStack_1c0) +
                 dVar19 * (double)CONCAT44(uStack_1ac,uStack_1b0) + dVar7;
        dVar14 = local_1d0 * dVar19 + local_1d8 * dVar5 + local_1e0 * dVar4 + dVar8;
        dVar18 = dVar14 * dVar14 + dVar13 * dVar13 + dVar16 * dVar16;
        local_190 = 0.0;
        local_198 = 0.0;
        local_1a0 = 0.0;
        if (9.99999993922529e-09 < dVar18) {
          local_1a0 = 1.0 / SQRT(dVar18);
          local_190 = dVar14 * local_1a0;
          local_198 = dVar16 * local_1a0;
          local_1a0 = local_1a0 * dVar13;
        }
        local_190 = local_190 + local_168;
        local_198 = local_198 + stack0xfffffffffffffe90;
        local_1a0 = local_1a0 + (double)local_178._0_8_;
        local_1f0 = 0;
        local_1f8 = 0;
        local_200 = 0;
        local_208 = 0;
        (**(code **)(*param_2 + 0x30))(param_2,local_178,&local_1a0,&local_188);
      }
      if (param_6 != '\0') {
        dVar13 = dVar3 * dVar5 - dVar17 * dVar19;
        dVar19 = dVar19 * dVar12 - dVar3 * dVar4;
        dVar5 = dVar17 * dVar4 - dVar12 * dVar5;
        local_188 = 0;
        puStack_180 = &DAT_3f8000003f800000;
        dVar3 = dVar13 * dVar9 +
                dVar19 * (double)CONCAT44(uStack_1c4,local_1c8) +
                dVar5 * (double)CONCAT44(uStack_1b4,local_1b8) + dVar6;
        dVar4 = dVar13 * local_148 +
                dVar19 * (double)CONCAT44(uStack_1bc,uStack_1c0) +
                dVar5 * (double)CONCAT44(uStack_1ac,uStack_1b0) + dVar7;
        dVar19 = dVar19 * local_1d8;
        dVar5 = dVar5 * local_1d0 + dVar19 + dVar13 * local_1e0 + dVar8;
        dVar12 = dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4;
        local_190 = 0.0;
        local_198 = 0.0;
        local_1a0 = 0.0;
        if (9.99999993922529e-09 < dVar12) {
          local_1a0 = 1.0 / SQRT(dVar12);
          local_190 = dVar5 * local_1a0;
          local_198 = dVar4 * local_1a0;
          local_1a0 = local_1a0 * dVar3;
        }
        local_190 = local_190 + local_168;
        local_198 = local_198 + stack0xfffffffffffffe90;
        local_1a0 = local_1a0 + (double)local_178._0_8_;
        local_1f0 = 0;
        local_1f8 = 0;
        local_200 = 0;
        local_208 = 0;
        (**(code **)(*param_2 + 0x30))(param_2,local_178,&local_1a0,&local_188);
      }
      unaff_XMM6._8_8_ = 0;
      unaff_XMM6._0_8_ = dVar19;
      iVar11 = iVar11 + 1;
    } while (iVar1 != iVar11);
  }
  if ((local_f0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d2289e FUN_147d2289e body=151 status=ok
// SIG undefined FUN_147d2289e(void)

void FUN_147d2289e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa92748;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c59fe(param_1 + 0x21);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c60e6(param_1 + 0x15);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d22936 FUN_147d22936 body=146 status=ok
// SIG undefined FUN_147d22936(void)

void FUN_147d22936(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147d229c8 FUN_147d229c8 body=107 status=ok
// SIG undefined FUN_147d229c8(void)

void FUN_147d229c8(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0xc0) == '\0') {
    FUN_1414c1412(param_1 + 0x10);
    FUN_1414c1412(param_1 + 0x68,param_2);
    FUN_140308182(param_1 + 0x10,&DAT_14cb00c08);
    if (*(char *)(param_1 + 0xc1) == '\x01') {
      FUN_140308182(param_1 + 0x68,&DAT_14cb00c08);
    }
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  return;
}



// FUNCTION 147d22a34 FUN_147d22a34 body=180 status=ok
// SIG undefined FUN_147d22a34(void)

void FUN_147d22a34(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x24c) == '\0') {
    iVar2 = *(int *)(param_1 + 0x238);
    if (0 < iVar2) {
      lVar3 = 0x10;
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x230);
        if (*(int *)(*(longlong *)
                      (**(longlong **)(lVar1 + -0x10 + lVar3) +
                      (longlong)*(int *)(lVar1 + -8 + lVar3) * 8) + 0xec) != 0) {
          local_30 = 0;
          FUN_147d229c8(*(undefined8 *)(lVar1 + lVar3),&local_30);
          iVar2 = *(int *)(param_1 + 0x238);
        }
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0xa0;
      } while (lVar4 < iVar2);
    }
    *(undefined1 *)(param_1 + 0x24c) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d22aea FUN_147d22aea body=85 status=ok
// SIG undefined FUN_147d22aea(void)

void FUN_147d22aea(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  
  if (*(longlong *)(param_1 + 0x240) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x240) + 0x2e5) & 1;
  }
  FUN_1436e2a80(param_3,param_4,param_5,param_1 + 0x148,bVar1,param_1,
                *(undefined8 *)(param_1 + 0x228));
  return;
}



// FUNCTION 147d22b40 FUN_147d22b40 body=249 status=ok
// SIG undefined FUN_147d22b40(void)

void FUN_147d22b40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_144a7ebcb();
  if ((cVar3 == '\0') || (*(char *)(param_1 + 0x39) != '\x01')) goto LAB_147d22c13;
  if (*(longlong *)(param_1 + 0x240) == 0) {
    bVar5 = true;
  }
  else {
    bVar5 = (*(byte *)(*(longlong *)(param_1 + 0x240) + 0x2e5) & 1) == 0;
  }
  lVar1 = param_1 + 0x148;
  cVar3 = FUN_1474283cc(lVar1);
  if (cVar3 == '\0') {
LAB_147d22bb0:
    FUN_147428186(lVar1,param_2,4);
    if (bVar5) {
      bVar4 = FUN_1474283cc(lVar1);
    }
    else {
      bVar4 = 0;
    }
    *(byte *)(param_1 + 0x3b) = bVar4;
  }
  else {
    cVar3 = FUN_1474283d8(lVar1);
    if (cVar3 != '\0') goto LAB_147d22bb0;
    bVar4 = *(byte *)(param_1 + 0x3b);
  }
  if ((bVar4 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x228);
    (**(code **)(*DAT_14ca83900 + 0x4d0))(DAT_14ca83900,local_48,param_1 + 0x188);
    FUN_147cc717e(uVar2,lVar1,local_48);
    *(undefined1 *)(param_1 + 0x3b) = 0;
  }
LAB_147d22c13:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d22c3a FUN_147d22c3a body=322 status=ok
// SIG undefined FUN_147d22c3a(void)

int FUN_147d22c3a(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar5 = 0;
  uVar2 = local_68;
  if (((2 < *(int *)(param_1 + 0x60)) && (iVar5 = 0, DAT_14c761b3c != 0)) &&
     (*(longlong *)(param_2 + 0x10) != 0)) {
    plVar1 = param_3 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = plVar1;
    if ((int)param_3[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_3[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar2 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_3;
    if ((local_68._4_4_ != iVar6) || (iVar5 = 1, uStack_50 != plVar1)) {
      iVar5 = 1;
      iVar4 = local_68._4_4_;
      local_68 = uVar2;
      do {
        bVar3 = FUN_147d22d7e(param_1,*(undefined4 *)(*local_80 + (longlong)iVar4 * 0x20),
                              *(undefined8 *)(*local_80 + 8 + (longlong)iVar4 * 0x20));
        iVar5 = iVar5 + (uint)bVar3;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
        uVar2 = local_68;
      } while (local_80 != param_3 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar6));
    }
  }
  local_68 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d22d7e FUN_147d22d7e body=138 status=ok
// SIG undefined FUN_147d22d7e(void)

undefined4 FUN_147d22d7e(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x240);
  if (*(int *)(lVar1 + 0xe8) != *(int *)(lVar1 + 0x114)) {
    lVar3 = lVar1 + 0x118;
    if (*(longlong *)(lVar1 + 0x120) != 0) {
      lVar3 = *(longlong *)(lVar1 + 0x120);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar1 + 0x128) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(lVar1 + 0xe0) + (longlong)iVar2 * 0x30;
        if (*(uint *)(*(longlong *)(lVar1 + 0xe0) + (longlong)iVar2 * 0x30) == param_2) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) == 0) {
            return 0;
          }
          if (*(int *)(lVar3 + 0x18) != *(int *)(param_3 + 0x80)) {
            return 0;
          }
          return CONCAT31((int3)((uint)*(int *)(lVar3 + 0x18) >> 8),0 < *(int *)(lVar3 + 0x20));
        }
        iVar2 = *(int *)(lVar3 + 0x28);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d22e08 FUN_147d22e08 body=316 status=ok
// SIG undefined FUN_147d22e08(void)

longlong FUN_147d22e08(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined2 *)(param_1 + 0x110) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"MorphVertexBuffer",0);
  FUN_1474409b8(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"MorphTargetWeights",0);
  FUN_1474409b8(param_1 + 0xf0,*(undefined8 *)(param_2 + 0x28),L"MorphTargetBatchOffsets",0);
  FUN_1474409b8(param_1 + 0xf6,*(undefined8 *)(param_2 + 0x28),L"MorphTargetGroupOffsets",0);
  FUN_1474409b8(param_1 + 0xfc,*(undefined8 *)(param_2 + 0x28),L"PositionScale",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"Precision",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"NumGroups",0);
  FUN_147440a6c(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"MorphDataBuffer",0);
  return param_1;
}



// FUNCTION 147d22f44 FUN_147d22f44 body=343 status=ok
// SIG undefined FUN_147d22f44(void)

void FUN_147d22f44(longlong param_1,undefined8 param_2,double *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  float local_50;
  float local_4c;
  ulonglong local_40;
  
  uVar3 = param_9;
  uVar2 = param_8;
  uVar1 = param_7;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a86a8e(param_2,param_1 + 0xe0,*(undefined8 *)(param_5 + 0x38));
  local_4c = (float)param_3[3];
  local_50 = (float)param_3[2];
  local_58 = CONCAT44((float)param_3[1],(float)*param_3);
  FUN_1449dacb8(param_2,param_1 + 0xfc,&local_58,0);
  local_58 = *(undefined8 *)(param_4 + 0x84);
  FUN_1472f9f03(param_2,param_1 + 0x102,&local_58,0);
  FUN_144abbe48(param_2,param_1 + 0x108,&param_6,0);
  FUN_144a86bff(param_2,param_1 + 0x10e,*(undefined8 *)(param_4 + 0x18));
  FUN_147d2309c(param_2,param_1 + 0xf0,uVar1);
  FUN_147d2309c(param_2,param_1 + 0xf6,uVar2);
  FUN_147d23159(param_2,param_1 + 0xe4,uVar3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d2309c FUN_147d2309c body=188 status=ok
// SIG undefined FUN_147d2309c(void)

void FUN_147d2309c(longlong *param_1,undefined2 *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  ushort uVar4;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  ushort *local_48;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  ushort local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = param_2[2];
  if (uVar4 != 0) {
    if (0x1ff < uVar4) {
      uVar4 = 0x200;
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    lVar3 = param_1[2];
    FUN_144ab3e68(*param_1,param_1 + 1,uVar4,param_3);
    local_48 = &local_32;
    local_50 = &local_34;
    local_58 = &local_36;
    local_38 = uVar1;
    local_36 = uVar2;
    local_34 = (short)lVar3;
    local_32 = uVar4;
    FUN_144ab3f26(*param_1,*param_1 + 0x38,param_1 + 3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d23159 FUN_147d23159 body=188 status=ok
// SIG undefined FUN_147d23159(void)

void FUN_147d23159(longlong *param_1,undefined2 *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  ushort uVar4;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  ushort *local_48;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  ushort local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = param_2[2];
  if (uVar4 != 0) {
    if (0x1ff < uVar4) {
      uVar4 = 0x200;
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    lVar3 = param_1[2];
    FUN_144ab3e68(*param_1,param_1 + 1,uVar4,param_3);
    local_48 = &local_32;
    local_50 = &local_34;
    local_58 = &local_36;
    local_38 = uVar1;
    local_36 = uVar2;
    local_34 = (short)lVar3;
    local_32 = uVar4;
    FUN_144ab3f26(*param_1,*param_1 + 0x38,param_1 + 3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d23216 FUN_147d23216 body=207 status=ok
// SIG undefined FUN_147d23216(void)

void FUN_147d23216(ulonglong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 1;
  if (DAT_14ca84f24 < param_2) {
    iVar3 = param_2 + 0xfe;
    if (-1 < param_2 + 0x7f) {
      iVar3 = param_2 + 0x7f;
    }
    iVar3 = iVar3 >> 7;
    param_2 = 0x80;
  }
  else {
    iVar3 = 1;
  }
  if (DAT_14ca84f28 < iVar3) {
    iVar4 = iVar3 + 0xfe;
    if (-1 < iVar3 + 0x7f) {
      iVar4 = iVar3 + 0x7f;
    }
    iVar4 = iVar4 >> 7;
    iVar3 = 0x80;
  }
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 4;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x28);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 4;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a1fbc30;
  *(int *)(puVar1 + 2) = param_2;
  *(int *)((longlong)puVar1 + 0x14) = iVar3;
  *(int *)(puVar1 + 3) = iVar4;
  return;
}



// FUNCTION 147d232e6 FUN_147d232e6 body=42 status=ok
// SIG undefined FUN_147d232e6(void)

void FUN_147d232e6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 147d23330 FUN_147d23330 body=39 status=ok
// SIG undefined FUN_147d23330(void)

void FUN_147d23330(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147d22e08(uVar1,param_1);
  return;
}



// FUNCTION 147d23358 FUN_147d23358 body=73 status=ok
// SIG undefined FUN_147d23358(void)

longlong FUN_147d23358(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined2 *)(lVar1 + 0x110) = 0;
  return lVar1;
}



// FUNCTION 147d233a2 FUN_147d233a2 body=127 status=ok
// SIG undefined FUN_147d233a2(void)

longlong FUN_147d233a2(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"MorphVertexBuffer",0);
  FUN_1474409b8(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"PositionScale",0);
  FUN_1474409b8(param_1 + 0xea,*(undefined8 *)(param_2 + 0x28),L"NumVertices",0);
  return param_1;
}



// FUNCTION 147d23422 FUN_147d23422 body=174 status=ok
// SIG undefined FUN_147d23422(void)

void FUN_147d23422(longlong param_1,undefined8 param_2,double *param_3,longlong param_4)

{
  undefined1 auStack_58 [32];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a86a8e(param_2,param_1 + 0xe0,*(undefined8 *)(param_4 + 0x38));
  local_2c = (float)param_3[3];
  local_30 = (float)param_3[2];
  local_34 = (float)param_3[1];
  local_38 = (float)*param_3;
  FUN_1449dacb8(param_2,param_1 + 0xe4,&local_38,0);
  FUN_144abbe48(param_2,param_1 + 0xea,&stack0x00000028,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d234d2 FUN_147d234d2 body=221 status=ok
// SIG undefined FUN_147d234d2(void)

void FUN_147d234d2(ulonglong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_2 + 0x7e;
  if (-1 < param_2 + 0x3f) {
    iVar3 = param_2 + 0x3f;
  }
  iVar3 = iVar3 >> 6;
  iVar5 = 1;
  if (DAT_14ca84f24 < iVar3) {
    iVar4 = iVar3 + 0xfe;
    if (-1 < iVar3 + 0x7f) {
      iVar4 = iVar3 + 0x7f;
    }
    iVar4 = iVar4 >> 7;
    iVar3 = 0x80;
  }
  else {
    iVar4 = 1;
  }
  if (DAT_14ca84f28 < iVar4) {
    iVar5 = iVar4 + 0xfe;
    if (-1 < iVar4 + 0x7f) {
      iVar5 = iVar4 + 0x7f;
    }
    iVar5 = iVar5 >> 7;
    iVar4 = 0x80;
  }
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 4;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x28);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 4;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a1fbc30;
  *(int *)(puVar1 + 2) = iVar3;
  *(int *)((longlong)puVar1 + 0x14) = iVar4;
  *(int *)(puVar1 + 3) = iVar5;
  return;
}



// FUNCTION 147d235b0 FUN_147d235b0 body=42 status=ok
// SIG undefined FUN_147d235b0(void)

void FUN_147d235b0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf0);
  return;
}



// FUNCTION 147d235fa FUN_147d235fa body=39 status=ok
// SIG undefined FUN_147d235fa(void)

void FUN_147d235fa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147d233a2(uVar1,param_1);
  return;
}



// FUNCTION 147d23622 FUN_147d23622 body=50 status=ok
// SIG undefined FUN_147d23622(void)

longlong FUN_147d23622(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  return lVar1;
}



// FUNCTION 147d23654 FUN_147d23654 body=31 status=ok
// SIG undefined FUN_147d23654(void)

undefined8 FUN_147d23654(longlong param_1,int param_2,int param_3)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x230) + 0x18 + (longlong)param_2 * 0xa0) +
          (longlong)param_3 * 8);
}



// FUNCTION 147d2369c FUN_147d2369c body=26 status=ok
// SIG undefined FUN_147d2369c(void)

longlong FUN_147d2369c(longlong param_1,int param_2)

{
  return *(longlong *)(param_1 + 0x230) + (longlong)param_2 * 0xa0 + 0x48;
}



// FUNCTION 147d236b6 FUN_147d236b6 body=64 status=ok
// SIG undefined FUN_147d236b6(void)

longlong FUN_147d236b6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147d2e6b2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x70 + *param_1;
  FUN_147d2e675(lVar2,1);
  return lVar2;
}



// FUNCTION 147d236f6 FUN_147d236f6 body=650 status=ok
// SIG undefined FUN_147d236f6(void)

undefined8 *
FUN_147d236f6(undefined8 *param_1,undefined8 param_2,longlong param_3,int param_4,int param_5,
             longlong param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = &PTR_FUN_14aa93060;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(int *)(param_1 + 0xd) = param_4;
  iVar6 = *(int *)(param_3 + 8) + -1;
  iVar5 = *(int *)(param_6 + 0x3c);
  if (*(int *)(param_6 + 0x3c) <= param_4) {
    iVar5 = param_4;
  }
  if (iVar6 <= iVar5) {
    iVar5 = iVar6;
  }
  if (iVar5 < param_4) {
    iVar5 = param_4;
  }
  *(int *)((longlong)param_1 + 0x6c) = iVar5;
  uVar9 = 0;
  uVar10 = 0;
  uVar7 = 0;
  uVar8 = 0;
  FUN_1401edf32(param_1 + 1);
  if (*(int *)((longlong)param_1 + 0x6c) != *(int *)(param_1 + 0xd)) {
    uVar9 = 0;
    uVar10 = 0;
    uVar7 = 0;
    uVar8 = 0;
    FUN_1401edf32(param_1 + 3,param_2,param_3,*(int *)((longlong)param_1 + 0x6c),0,0,0,0);
  }
  puVar1 = param_1 + 5;
  puVar2 = param_1 + 7;
  puVar3 = param_1 + 0xb;
  FUN_147d23980(param_1,param_1 + 1,param_2,0,uVar7,uVar8,uVar9,uVar10);
  FUN_147d2424c(param_1 + 9,*(undefined4 *)(param_1 + 2));
  FUN_147bc812d(param_1[9],param_1[1],(longlong)*(int *)(param_1 + 2));
  if (param_5 == 2) {
    iVar5 = *(int *)(param_1 + 2);
    pvVar4 = (void *)param_1[1];
    *(int *)(param_1 + 6) = iVar5;
    if (iVar5 == 0 && *(int *)((longlong)param_1 + 0x34) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    }
    else {
      FUN_1404918c4(puVar1,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)*puVar1,pvVar4,(longlong)iVar5 << 6);
      }
    }
    if (*(int *)((longlong)param_1 + 0x6c) != *(int *)(param_1 + 0xd)) {
      iVar5 = *(int *)(param_1 + 4);
      pvVar4 = (void *)param_1[3];
      *(int *)(param_1 + 8) = iVar5;
      if (iVar5 == 0 && *(int *)((longlong)param_1 + 0x44) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x44) = 0;
      }
      else {
        FUN_1404918c4(puVar2,iVar5);
        if (iVar5 != 0) {
          memcpy((void *)*puVar2,pvVar4,(longlong)iVar5 << 6);
        }
      }
    }
    iVar5 = *(int *)(param_1 + 10);
    pvVar4 = (void *)param_1[9];
    *(int *)(param_1 + 0xc) = iVar5;
    if (iVar5 == 0 && *(int *)((longlong)param_1 + 100) == 0) {
      *(undefined4 *)((longlong)param_1 + 100) = 0;
    }
    else {
      FUN_147d2eb34(puVar3,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)*puVar3,pvVar4,(longlong)iVar5 * 0x30);
      }
    }
  }
  else if ((param_5 == 1) || (param_5 == 0)) {
    FUN_1436c0b1c(puVar1,param_2,param_3,*(undefined4 *)(param_1 + 0xd),0,0,0);
    if (*(int *)((longlong)param_1 + 0x6c) != *(int *)(param_1 + 0xd)) {
      FUN_1436c0b1c(puVar2,param_2,param_3,*(int *)((longlong)param_1 + 0x6c),0,0,0);
    }
    FUN_147d23980(param_1,puVar1,param_2,1);
    FUN_147d2424c(puVar3,*(undefined4 *)(param_1 + 6));
    FUN_147bc812d(param_1[0xb],param_1[5],(longlong)*(int *)(param_1 + 6));
  }
  return param_1;
}



// FUNCTION 147d23980 FUN_147d23980 body=2251 status=ok
// SIG undefined FUN_147d23980(void)

void FUN_147d23980(longlong param_1,longlong *param_2,longlong *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double dVar4;
  ushort uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  void *pvVar27;
  longlong lVar28;
  longlong *plVar29;
  longlong lVar30;
  bool bVar31;
  double dVar32;
  undefined1 auStack_218 [40];
  longlong *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  void *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  float local_164;
  float local_160;
  undefined4 local_15c;
  float local_158;
  float local_154;
  float local_150;
  undefined4 local_14c;
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_13c;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1f0 = param_2;
  plVar20 = (longlong *)FUN_144a7954a(param_3);
  lVar21 = (**(code **)(*plVar20 + 0x318))(plVar20,*(undefined4 *)(param_1 + 0x68));
  if (*(int *)(lVar21 + 0x78) == 0) goto LAB_147d24130;
  plVar22 = (longlong *)FUN_14479d2ce(param_3 + 0xcd);
  if (plVar22 == (longlong *)0x0) {
    if (param_4 != 0) {
LAB_147d23a99:
      if ((char)param_3[0x114] < '\0') {
        plVar22 = param_3 + (longlong)*(int *)((longlong)param_3 + 0x714) * 2 + 0xda;
      }
      else {
        plVar22 = param_3 + 0xe0;
      }
      goto LAB_147d23ab0;
    }
LAB_147d241b8:
    plVar29 = local_1f0;
    local_1b8 = (void *)0x0;
    local_1b0 = (int)param_3[(longlong)(int)param_3[0xe3] * 2 + 0xdb];
    lVar23 = (longlong)local_1b0;
    pvVar27 = (void *)param_3[(longlong)(int)param_3[0xe3] * 2 + 0xda];
    if (lVar23 != 0) {
      FUN_144756262(&local_1b8,local_1b0,0);
      goto LAB_147d23aec;
    }
LAB_147d2420a:
    local_1b8 = (void *)0x0;
    local_1ac = 0;
    plVar29 = local_1f0;
  }
  else {
    lVar23 = (**(code **)(*param_3 + 0xa78))(param_3,0);
    iVar6 = *(int *)(lVar23 + 8);
    lVar23 = (**(code **)(*plVar20 + 0x308))(plVar20);
    bVar31 = iVar6 != *(int *)(lVar23 + 0x28);
    if (param_4 == 0) {
      if (!bVar31) {
        param_3 = plVar22;
      }
      goto LAB_147d241b8;
    }
    if (bVar31) goto LAB_147d23a99;
    if ((char)plVar22[0x114] < '\0') {
      plVar22 = plVar22 + (longlong)*(int *)((longlong)plVar22 + 0x714) * 2 + 0xda;
    }
    else {
      plVar22 = plVar22 + 0xe0;
    }
LAB_147d23ab0:
    plVar29 = local_1f0;
    local_1b8 = (void *)0x0;
    local_1b0 = (int)plVar22[1];
    lVar23 = (longlong)local_1b0;
    pvVar27 = (void *)*plVar22;
    if (lVar23 == 0) goto LAB_147d2420a;
    FUN_144756262(&local_1b8,local_1b0,0);
LAB_147d23aec:
    memcpy(local_1b8,pvVar27,lVar23 * 0x60);
  }
  plVar22 = (longlong *)(**(code **)(*plVar20 + 0x368))(plVar20);
  local_1c8 = 0;
  uStack_1c0 = 0;
  lVar23 = (**(code **)(*plVar20 + 0x308))(plVar20);
  if ((longlong)*(int *)(lVar21 + 0x78) != 0) {
    lVar28 = *(longlong *)(lVar21 + 0x70);
    local_1e0 = (longlong)*(int *)(lVar21 + 0x78) * 0x10 + lVar28;
    local_1e8 = lVar23;
    local_1d8 = plVar22;
    do {
      lVar21 = local_1e8;
      bVar31 = (longlong)uStack_1c0 < 0;
      uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
      if (bVar31) {
        FUN_14481578e(&local_1c8,0);
      }
      uVar18 = FUN_144a750a0(lVar21,lVar28);
      uVar25 = uStack_1c0;
      lVar23 = (longlong)(int)uStack_1c0;
      uVar19 = (int)uStack_1c0 + 1;
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar19);
      if (uStack_1c0._4_4_ < uVar19) {
        FUN_1446f48e2(&local_1c8,uVar25 & 0xffffffff);
      }
      *(uint *)(local_1c8 + lVar23 * 4) = uVar18 & 0xffff;
      FUN_14793bd40(lVar21,uVar18 & 0xffff,&local_1c8);
      pvVar27 = local_1b8;
      lVar23 = local_1c8;
      iVar6 = (int)uStack_1c0;
      lVar30 = (longlong)(int)uStack_1c0;
      local_1d0 = lVar28;
      if (0 < lVar30) {
        lVar28 = 0;
        do {
          uVar5 = *(ushort *)(lVar23 + lVar28 * 4);
          uVar17 = 0xffff;
          if ((int)(uint)uVar5 < *(int *)(lVar21 + 0x28)) {
            uVar17 = *(ushort *)(*(longlong *)(lVar21 + 0x20) + 8 + (ulonglong)uVar5 * 0xc);
          }
          if (lVar28 == 0) {
            uVar25 = (ulonglong)((uint)uVar17 * 0x60);
            dVar11 = *(double *)((longlong)pvVar27 + uVar25);
            dVar12 = ((double *)((longlong)pvVar27 + uVar25))[1];
            dVar13 = *(double *)((longlong)pvVar27 + uVar25 + 0x10);
            dVar7 = dVar12 + dVar12;
            dVar32 = dVar13 + dVar13;
            dVar8 = dVar11 * (dVar11 + dVar11);
            pdVar3 = (double *)((longlong)pvVar27 + uVar25 + 0x40);
            dVar14 = *pdVar3;
            dVar15 = pdVar3[1];
            dVar16 = *(double *)((longlong)pvVar27 + uVar25 + 0x50);
            dVar9 = *(double *)((longlong)pvVar27 + uVar25) * dVar32;
            dVar4 = *(double *)((longlong)pvVar27 + uVar25 + 0x18);
            dVar10 = dVar4 * (dVar11 + dVar11);
            local_128 = CONCAT44((float)((dVar7 * dVar11 + dVar4 * dVar32) * dVar14),
                                 (float)((1.0 - (dVar13 * dVar32 + dVar12 * dVar7)) * dVar14));
            uStack_120 = (ulonglong)(uint)(float)((dVar9 - dVar7 * dVar4) * dVar14);
            local_118 = CONCAT44((float)((1.0 - (dVar13 * dVar32 + dVar8)) * dVar15),
                                 (float)((dVar7 * dVar11 - dVar4 * dVar32) * dVar15));
            uStack_110 = (ulonglong)(uint)(float)((dVar32 * dVar12 + dVar10) * dVar15);
            local_108 = CONCAT44((float)((dVar32 * dVar12 - dVar10) * dVar16),
                                 (float)((dVar9 + dVar7 * dVar4) * dVar16));
            uStack_100 = (ulonglong)(uint)(float)((1.0 - (dVar8 + dVar12 * dVar7)) * dVar16);
            local_f8 = CONCAT44((float)*(double *)((longlong)pvVar27 + uVar25 + 0x28),
                                (float)*(double *)((longlong)pvVar27 + uVar25 + 0x20));
            uStack_f0 = CONCAT44(0x3f800000,(float)*(double *)((longlong)pvVar27 + uVar25 + 0x30));
            lVar26 = *local_1f0;
          }
          else {
            lVar26 = *local_1f0;
            lVar24 = (ulonglong)uVar17 * 0x40;
            local_128 = *(undefined8 *)(lVar26 + lVar24);
            uStack_120 = ((undefined8 *)(lVar26 + lVar24))[1];
            puVar2 = (undefined8 *)(lVar26 + 0x10 + lVar24);
            local_118 = *puVar2;
            uStack_110 = puVar2[1];
            puVar2 = (undefined8 *)(lVar26 + 0x20 + lVar24);
            local_108 = *puVar2;
            uStack_100 = puVar2[1];
            puVar2 = (undefined8 *)(lVar26 + 0x30 + lVar24);
            local_f8 = *puVar2;
            uStack_f0 = puVar2[1];
          }
          lVar24 = *(longlong *)(lVar21 + 0x30);
          uVar25 = (ulonglong)(((uint)uVar5 + (uint)uVar5 * 2) * 0x20);
          dVar12 = *(double *)(lVar24 + uVar25);
          dVar13 = ((double *)(lVar24 + uVar25))[1];
          dVar14 = *(double *)(lVar24 + 0x10 + uVar25);
          pdVar3 = (double *)(lVar24 + 0x40 + uVar25);
          dVar15 = *pdVar3;
          dVar16 = pdVar3[1];
          dVar32 = *(double *)(lVar24 + 0x50 + uVar25);
          dVar7 = dVar13 + dVar13;
          dVar8 = dVar14 + dVar14;
          dVar9 = dVar12 * (dVar12 + dVar12);
          pdVar3 = (double *)(lVar24 + 0x18 + uVar25);
          dVar4 = *pdVar3;
          dVar10 = dVar8 * dVar4;
          dVar11 = (dVar12 + dVar12) * *pdVar3;
          local_168 = (float)((1.0 - (dVar14 * dVar8 + dVar13 * dVar7)) * dVar15);
          dVar4 = dVar7 * dVar4;
          local_138 = (float)*(double *)(lVar24 + 0x20 + uVar25);
          local_134 = (float)*(double *)(lVar24 + 0x28 + uVar25);
          local_130 = (float)*(double *)(lVar24 + 0x30 + uVar25);
          local_164 = (float)((dVar7 * dVar12 + dVar10) * dVar15);
          local_160 = (float)((dVar8 * dVar12 - dVar4) * dVar15);
          local_15c = 0;
          local_158 = (float)((dVar7 * dVar12 - dVar10) * dVar16);
          local_154 = (float)((1.0 - (dVar14 * dVar8 + dVar9)) * dVar16);
          local_150 = (float)((dVar8 * dVar13 + dVar11) * dVar16);
          local_148 = (float)((dVar4 + dVar8 * dVar12) * dVar32);
          local_14c = 0;
          local_144 = (float)((dVar8 * dVar13 - dVar11) * dVar32);
          local_140 = (float)((1.0 - (dVar9 + dVar13 * dVar7)) * dVar32);
          local_13c = 0;
          local_12c = 0x3f800000;
          FUN_144afeb32(&local_1a8,&local_168,&local_128);
          lVar24 = (ulonglong)uVar5 * 0x40;
          puVar2 = (undefined8 *)(lVar26 + 0x30 + lVar24);
          *puVar2 = local_178;
          puVar2[1] = uStack_170;
          puVar2 = (undefined8 *)(lVar26 + 0x20 + lVar24);
          *puVar2 = local_188;
          puVar2[1] = uStack_180;
          puVar2 = (undefined8 *)(lVar26 + 0x10 + lVar24);
          *puVar2 = local_198;
          puVar2[1] = uStack_190;
          puVar1 = (undefined4 *)(lVar26 + lVar24);
          *puVar1 = local_1a8;
          puVar1[1] = uStack_1a4;
          puVar1[2] = uStack_1a0;
          puVar1[3] = uStack_19c;
          lVar28 = lVar28 + 1;
          plVar29 = local_1f0;
        } while (lVar30 != lVar28);
      }
      plVar20 = local_1d8;
      if (iVar6 != 0) {
        lVar21 = 0;
        do {
          lVar26 = (ulonglong)*(ushort *)(lVar23 + lVar21) * 0x40;
          lVar28 = *plVar29;
          FUN_144afeb32(&local_128,*plVar20 + lVar26,lVar26 + lVar28);
          puVar2 = (undefined8 *)(lVar28 + 0x30 + lVar26);
          *puVar2 = local_f8;
          puVar2[1] = uStack_f0;
          puVar2 = (undefined8 *)(lVar28 + 0x20 + lVar26);
          *puVar2 = local_108;
          puVar2[1] = uStack_100;
          puVar2 = (undefined8 *)(lVar28 + 0x10 + lVar26);
          *puVar2 = local_118;
          puVar2[1] = uStack_110;
          puVar1 = (undefined4 *)(lVar28 + lVar26);
          *puVar1 = (undefined4)local_128;
          puVar1[1] = local_128._4_4_;
          puVar1[2] = (undefined4)uStack_120;
          puVar1[3] = uStack_120._4_4_;
          lVar21 = lVar21 + 4;
        } while (lVar30 << 2 != lVar21);
      }
      lVar28 = local_1d0 + 0x10;
    } while (lVar28 != local_1e0);
    if (lVar23 != 0) {
      FUN_1400020a8(lVar23);
    }
  }
  if (local_1b8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_147d24130:
  if ((local_e0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d2424c FUN_147d2424c body=71 status=ok
// SIG undefined FUN_147d2424c(void)

void FUN_147d2424c(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14726dea8();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_147d2ea86();
      return;
    }
  }
  return;
}



// FUNCTION 147d24294 FUN_147d24294 body=114 status=ok
// SIG undefined FUN_147d24294(void)

void FUN_147d24294(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa93060;
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
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d24306 FUN_147d24306 body=134 status=ok
// SIG undefined FUN_147d24306(void)

void FUN_147d24306(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14aa93070;
  puVar1 = (undefined8 *)param_1[0x40];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_147d2eba7(param_1[0x41],*(undefined4 *)(param_1 + 0x42));
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_140137a98(param_1 + 0x29);
  FUN_1402c6bbe(param_1);
  return;
}



// FUNCTION 147d2438c FUN_147d2438c body=190 status=ok
// SIG undefined FUN_147d2438c(void)

void FUN_147d2438c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x210);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = 0;
    do {
      if (*(int *)(*(longlong *)
                    (**(longlong **)(*(longlong *)(param_1 + 0x208) + lVar3) + lVar5 * 8) + 0xec) !=
          0) {
        if (lVar5 < *(int *)(param_2 + 0x870)) {
          lVar2 = *(longlong *)(param_2 + 0x868) + lVar4;
        }
        else {
          lVar2 = 0;
        }
        FUN_147d2444a(*(longlong *)(param_1 + 0x208) + lVar3,lVar2,*(undefined4 *)(param_1 + 0x60));
        iVar1 = *(int *)(param_1 + 0x210);
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x28;
      lVar3 = lVar3 + 0x38;
    } while (lVar5 < iVar1);
  }
  if ((DAT_14ca96da8 != '\0') && (*(char *)(param_1 + 0x39) == '\x01')) {
    FUN_140308182(param_1 + 0x148,&DAT_14cb00c08);
    return;
  }
  return;
}



// FUNCTION 147d2444a FUN_147d2444a body=439 status=ok
// SIG undefined FUN_147d2444a(void)

void FUN_147d2444a(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined1 local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14ca96da8 == '\0') goto LAB_147d24475;
  lVar2 = *(longlong *)(*(longlong *)*param_1 + (longlong)*(int *)(param_1 + 1) * 8);
  if (param_2 == 0) {
    local_78 = lVar2 + 0x138;
    if (*(longlong *)(lVar2 + 0x2a0) != 0) {
      local_78 = *(longlong *)(lVar2 + 0x2a0);
    }
    param_1[6] = local_78;
LAB_147d244e6:
    local_70 = lVar2 + 0xf8;
    local_50 = *(int *)(lVar2 + 0xec);
  }
  else {
    local_78 = *(longlong *)(param_2 + 0x18);
    if (((local_78 == 0) || (*(int *)(local_78 + 0x40) != *(int *)(lVar2 + 0xec))) &&
       ((local_78 = *(longlong *)(param_2 + 0x20), local_78 == 0 ||
        (*(int *)(local_78 + 0x40) != *(int *)(lVar2 + 0xec))))) {
      local_78 = lVar2 + 0x138;
      if (*(longlong *)(lVar2 + 0x2a0) != 0) {
        local_78 = *(longlong *)(lVar2 + 0x2a0);
      }
    }
    param_1[6] = local_78;
    local_70 = *(longlong *)(param_2 + 0x10);
    if ((local_70 == 0) ||
       (local_50 = *(int *)(local_70 + 0x34), local_50 != *(int *)(lVar2 + 0xec)))
    goto LAB_147d244e6;
  }
  local_80 = lVar2 + 0x30;
  local_58 = 0;
  local_68 = 0;
  local_60 = lVar2 + 0x1c0;
  FUN_1401a8d4c(param_1 + 2,*(undefined4 *)(lVar2 + 0x18));
  FUN_1456d5d74(param_1 + 4,*(undefined4 *)(lVar2 + 0x18));
  iVar1 = *(int *)(lVar2 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x10);
    lVar3 = 0;
    do {
      local_90 = *(undefined4 *)(lVar2 + 0x10 + lVar3);
      local_88 = 1;
      local_98 = 3;
      FUN_1401a8d92(param_1 + 2,param_1 + 4,&local_80,param_3);
      lVar3 = lVar3 + 0xf8;
    } while ((longlong)iVar1 * 0xf8 - lVar3 != 0);
  }
LAB_147d24475:
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d24602 FUN_147d24602 body=108 status=ok
// SIG undefined FUN_147d24602(void)

void FUN_147d24602(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar1 = 0;
    do {
      FUN_140414380(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar1 * 8),&DAT_14cb00c08);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x18));
  }
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar1 = 0;
    do {
      FUN_140414380(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar1 * 8),&DAT_14cb00c08);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 147d2466e FUN_147d2466e body=839 status=ok
// SIG undefined FUN_147d2466e(void)

void FUN_147d2466e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,longlong param_7,undefined1 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 *local_f8;
  undefined4 local_f0;
  float *local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  undefined8 local_80;
  float local_74;
  float local_70;
  float local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  puVar2 = (undefined8 *)param_1[0x40];
  local_a8 = param_2;
  local_80 = param_4;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  param_1[0x40] = param_3;
  cVar7 = FUN_1448d2108();
  if ((((param_7 != 0) && (cVar7 != '\0')) && (DAT_14c761560 != 0)) &&
     ((cVar7 = FUN_144a7ebcb(), cVar7 != '\0' && (*(char *)((longlong)param_1[8] + 0x1e) == '\x01'))
     )) {
    local_b8 = param_1[0x41];
    iVar1 = *(int *)(param_1[0x40] + 0x6c);
    local_b0 = (longlong)iVar1;
    lVar3 = *(longlong *)(*(longlong *)param_1[8] + local_b0 * 8);
    local_68 = 0;
    if (0 < *(int *)(lVar3 + 0x18)) {
      local_b8 = local_b8 + local_b0 * 0x38;
      local_90 = (ulonglong)(iVar1 != *(int *)(param_1[0x40] + 0x68)) * 0x10;
      local_98 = local_90 + 0x28;
      local_a0 = param_1 + 10;
      local_90 = local_90 | 8;
      lVar10 = 0x38;
      lVar8 = 0;
      local_88 = lVar3;
      do {
        uVar6 = local_a8;
        local_118 = &local_68;
        lVar4 = *(longlong *)(*(longlong *)(local_b8 + 0x10) + lVar8 * 8);
        lVar3 = lVar4 + 0x130;
        lVar5 = *(longlong *)(local_88 + 0x10);
        lVar9 = param_1[0x40];
        if (0 < *(int *)(lVar9 + 0x30)) {
          local_120 = CONCAT44(local_120._4_4_,*(undefined4 *)(param_1 + 0xc));
          local_128 = CONCAT44(local_128._4_4_,param_6);
          FUN_14351772a(lVar3,local_a8,lVar9 + local_98,lVar10 + lVar5);
          lVar9 = param_1[0x40];
        }
        local_118 = &local_68;
        local_120 = CONCAT44(local_120._4_4_,*(undefined4 *)(param_1 + 0xc));
        local_128 = CONCAT44(local_128._4_4_,param_5);
        FUN_14351772a(lVar3,uVar6,lVar9 + local_90,lVar10 + lVar5);
        *(undefined8 *)(lVar4 + 0x140) = local_80;
        if (*(int *)(lVar5 + 0x14 + lVar10) != 0) {
          local_6c = (float)DAT_14c846520;
          local_70 = (float)DAT_14c846518;
          local_74 = (float)DAT_14c846510;
          local_120 = lVar10 + lVar5 + -0x38;
          local_128 = *(undefined8 *)(*(longlong *)(local_b8 + 0x20) + lVar8 * 8);
          local_c0 = local_a0;
          local_c8 = param_8;
          local_d0 = (undefined4)local_b0;
          local_d8 = (undefined4)lVar8;
          local_e0 = param_5;
          local_e8 = &local_74;
          local_f8 = &DAT_14c846250;
          local_110 = 0;
          uStack_108 = 0;
          local_f0 = 0;
          local_100 = 0;
          local_118 = param_1;
          FUN_143515388(param_7,1,uVar6,*(undefined8 *)(*(longlong *)(local_b8 + 0x10) + lVar8 * 8))
          ;
        }
        lVar8 = lVar8 + 1;
        lVar10 = lVar10 + 0xf8;
      } while (lVar8 < *(int *)(local_88 + 0x18));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d24a68 FUN_147d24a68 body=93 status=ok
// SIG undefined FUN_147d24a68(void)

void FUN_147d24a68(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_14484255c(param_2,0x330);
  lVar1 = *(longlong *)(param_1 + 0x200);
  if (lVar1 != 0) {
    FUN_14484255c(param_2,0x70);
    FUN_14484255c(param_2,(longlong)*(int *)(lVar1 + 0x14) << 6);
  }
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x214) * 0x38);
  return;
}



// FUNCTION 147d24ac6 FUN_147d24ac6 body=90 status=ok
// SIG undefined FUN_147d24ac6(void)

void FUN_147d24ac6(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)*param_1 + (longlong)*(int *)(param_1 + 1) * 8);
  if ((param_2 == 0) ||
     (((lVar2 = *(longlong *)(param_2 + 0x18), lVar2 == 0 ||
       (*(int *)(lVar2 + 0x40) != *(int *)(lVar1 + 0xec))) &&
      ((lVar2 = *(longlong *)(param_2 + 0x20), lVar2 == 0 ||
       (*(int *)(lVar2 + 0x40) != *(int *)(lVar1 + 0xec))))))) {
    lVar2 = lVar1 + 0x138;
    if (*(longlong *)(lVar1 + 0x2a0) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x2a0);
    }
  }
  param_1[6] = lVar2;
  return;
}



// FUNCTION 147d24b20 FUN_147d24b20 body=58 status=ok
// SIG undefined FUN_147d24b20(void)

void FUN_147d24b20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  FUN_1436e2a80(param_3,param_4,param_5,param_1 + 0x148,0,param_1,*(undefined8 *)(param_1 + 0x1f8));
  return;
}



// FUNCTION 147d24b5a FUN_147d24b5a body=201 status=ok
// SIG undefined FUN_147d24b5a(void)

void FUN_147d24b5a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_144a7ebcb();
  if ((cVar3 != '\0') && (*(char *)(param_1 + 0x39) == '\x01')) {
    lVar1 = param_1 + 0x148;
    cVar3 = FUN_1474283cc(lVar1);
    if ((cVar3 == '\0') || (cVar3 = FUN_1474283d8(lVar1), cVar3 != '\0')) {
      FUN_147428186(lVar1,param_2,4);
      bVar4 = FUN_1474283cc(lVar1);
      *(byte *)(param_1 + 0x3b) = bVar4;
    }
    else {
      bVar4 = *(byte *)(param_1 + 0x3b) & 1;
    }
    if (bVar4 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x1f8);
      (**(code **)(*DAT_14ca83900 + 0x4d0))(DAT_14ca83900,local_40,param_1 + 0x188);
      FUN_147cc717e(uVar2,lVar1,local_40);
      *(undefined1 *)(param_1 + 0x3b) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d24c38 FUN_147d24c38 body=182 status=ok
// SIG undefined FUN_147d24c38(void)

undefined8 *
FUN_147d24c38(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  
  FUN_1436bfd3e();
  ppuVar2 = &PTR_FUN_14aa93190;
  *param_1 = &PTR_FUN_14aa93190;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  if (0 < *(int *)(param_3 + 8)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x2a);
      *(uint *)(param_1 + 0x2a) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x154) < iVar1 + 1U) {
        FUN_147d2ece2(param_1 + 0x29,iVar1);
      }
      FUN_147d24cee((longlong)iVar1 * 0x2f0 + param_1[0x29],param_4,param_3,iVar3,param_5);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_3 + 8));
    ppuVar2 = (undefined **)*param_1;
  }
  (*(code *)ppuVar2[1])(param_1,param_2);
  *(undefined1 *)((longlong)param_1 + 0x5e) = 1;
  return param_1;
}



// FUNCTION 147d24cee FUN_147d24cee body=204 status=ok
// SIG undefined FUN_147d24cee(void)

undefined8 *
FUN_147d24cee(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = param_4;
  FUN_144b1dcb8(param_1 + 2);
  param_1[2] = &PTR_FUN_14a1ca480;
  param_1[0x36] = 0x400000000;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1fc) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x1fe) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x46] = 0;
  FUN_143268f94(param_1 + 0x47);
  *(undefined1 *)(param_1 + 0x5d) = 0;
  return param_1;
}



// FUNCTION 147d24dba FUN_147d24dba body=66 status=ok
// SIG undefined FUN_147d24dba(void)

void FUN_147d24dba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa93190;
  FUN_147d2eca6(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1402c6bbe(param_1);
  return;
}



// FUNCTION 147d24e34 FUN_147d24e34 body=106 status=ok
// SIG undefined FUN_147d24e34(void)

undefined8 * FUN_147d24e34(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb07e40) {
    FUN_144b3d300(&DAT_14cb07e40);
    if (DAT_14cb07e40 == -1) {
      DAT_14cb07e30 = 0;
      uRam000000014cb07e38 = 0;
      atexit((_func_5014 *)&LAB_1436e9acf);
      _Init_thread_footer(&DAT_14cb07e40);
    }
  }
  return &DAT_14cb07e30;
}



// FUNCTION 147d24eb0 FUN_147d24eb0 body=168 status=ok
// SIG undefined FUN_147d24eb0(void)

void FUN_147d24eb0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x3e0))(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d24f5a FUN_147d24f5a body=555 status=ok
// SIG undefined FUN_147d24f5a(void)

void FUN_147d24f5a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_ac = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_b0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  puVar5 = &local_ac;
  if (puVar2 != (undefined4 *)0x0) {
    puVar5 = puVar2;
  }
  puVar4 = &local_a8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  local_b8 = &local_b0;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_b8 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = (**(code **)(*param_1 + 1000))(param_1,local_40,puVar4,puVar5);
  *param_3 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d2518a FUN_147d2518a body=121 status=ok
// SIG undefined FUN_147d2518a(void)

undefined2 * FUN_147d2518a(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x14) = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  puVar2 = *(undefined2 **)(param_2 + 0x14);
  *(int *)(param_1 + 0x18) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1a) = 2;
  }
  else {
    _Src = param_2 + 4;
    if (puVar2 != (undefined2 *)0x0) {
      _Src = puVar2;
    }
    FUN_1447376de(param_1 + 4,iVar1,0);
    puVar2 = *(undefined2 **)(param_1 + 0x14);
    if (*(undefined2 **)(param_1 + 0x14) == (undefined2 *)0x0) {
      puVar2 = param_1 + 4;
    }
    memcpy(puVar2,_Src,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 147d25204 FUN_147d25204 body=20 status=ok
// SIG undefined FUN_147d25204(void)

char FUN_147d25204(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x450))();
  return cVar1 * '\x02';
}



// FUNCTION 147d25218 FUN_147d25218 body=101 status=ok
// SIG undefined FUN_147d25218(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147d25218(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb07e80) {
    FUN_144b3d300(&DAT_14cb07e80);
    if (DAT_14cb07e80 == -1) {
      DAT_14cb07e70 = 0;
      _DAT_14cb07e78 = 0;
      atexit(FUN_1436e9ae0);
      _Init_thread_footer(&DAT_14cb07e80);
      return;
    }
  }
  return;
}



// FUNCTION 147d2527e FUN_147d2527e body=101 status=ok
// SIG undefined FUN_147d2527e(void)

void FUN_147d2527e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb07e98) {
    FUN_144b3d300(&DAT_14cb07e98);
    if (DAT_14cb07e98 == -1) {
      DAT_14cb07e88 = 0;
      uRam000000014cb07e90 = 0;
      atexit((_func_5014 *)&LAB_1436e9b11);
      _Init_thread_footer(&DAT_14cb07e98);
      return;
    }
  }
  return;
}



// FUNCTION 147d252e4 FUN_147d252e4 body=420 status=ok
// SIG undefined FUN_147d252e4(void)

longlong * FUN_147d252e4(longlong *param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  int local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = param_3;
  bVar8 = false;
  FUN_1463ab166(&local_48,0x10,1,0);
  uVar6 = (ulonglong)local_38;
  if ((-1 < (int)local_38) && ((int)local_38 < local_40)) {
    bVar8 = false;
    do {
      lVar3 = FUN_144a7954a(*(undefined8 *)(local_48 + (uVar6 & 0xffffffff) * 8));
      if (lVar3 == param_2) {
LAB_147d253a1:
        plVar5 = *(longlong **)(local_48 + (longlong)(int)local_38 * 8);
        if ((*(byte *)((longlong)plVar5 + 0x9c) & 2) != 0) {
          (**(code **)(*plVar5 + 0x340))(plVar5);
          plVar5 = *(longlong **)(local_48 + (longlong)(int)local_38 * 8);
          bVar8 = true;
        }
        local_50 = 0;
        FUN_14485c47a(&local_50,plVar5);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1458b315c(param_1,iVar1);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = local_50;
      }
      else {
        plVar5 = *(longlong **)(local_48 + (longlong)(int)local_38 * 8);
        if (param_2 == 0) {
LAB_147d2538f:
          lVar4 = 0;
        }
        else {
          lVar3 = FUN_144a85a6c();
          if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
             (lVar4 = param_2,
             *(longlong *)
              (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_147d2538f;
        }
        cVar2 = (**(code **)(*plVar5 + 0xc08))(plVar5,lVar4);
        if (cVar2 != '\0') goto LAB_147d253a1;
      }
      uVar6 = (longlong)(int)local_38;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
        local_38 = (uint)uVar6;
        if ((longlong)local_40 <= (longlong)uVar6) break;
      } while (*(longlong *)(local_48 + uVar6 * 8) == 0);
    } while ((-2 < (longlong)uVar7) && ((int)local_38 < local_40));
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (bVar8) {
    FUN_14080c2b4();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d2548a FUN_147d2548a body=149 status=ok
// SIG undefined FUN_147d2548a(void)

void FUN_147d2548a(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar4 = 0;
    do {
      plVar3 = (longlong *)FUN_14479d2ce(*param_1 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        if ((char)param_1[2] == '\x01') {
          (**(code **)(*plVar3 + 0x540))(plVar3);
        }
        if ((*(byte *)((longlong)plVar3 + 0x9c) & 3) == 1) {
          cVar2 = (**(code **)(*plVar3 + 0x318))(plVar3);
          if (cVar2 != '\0') {
            (**(code **)(*plVar3 + 800))(plVar3,0);
          }
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar1 * 8 != lVar4);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d25558 FUN_147d25558 body=593 status=ok
// SIG undefined FUN_147d25558(void)

undefined8 *
FUN_147d25558(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined4 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int3 iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_138 [32];
  undefined **local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  uint local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined8 local_d8 [10];
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_140ca8f8e(&local_118);
  FUN_140648376(&local_118,param_2);
  uVar9 = (**(code **)(*param_2 + 0x358))(param_2);
  uStack_f8 = (**(code **)(*param_2 + 0x350))(param_2);
  local_110 = *param_3;
  uStack_108 = param_3[1];
  local_100 = local_100 & 0xffffff00;
  local_f0 = *param_7;
  uStack_ec = param_7[1];
  uStack_e8 = param_7[2];
  uStack_e4 = param_7[3];
  iVar3 = CONCAT21(uStack_fc._2_2_,param_4);
  uStack_fc = CONCAT13(param_5,iVar3 << 8);
  uStack_fc = CONCAT31(uStack_fc._1_3_,param_6);
  uStack_f4 = uVar9;
  puVar4 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
  *puVar4 = &PTR_LAB_14aa98170;
  puVar4[1] = &PTR_FUN_14a355f70;
  puVar4[2] = &PTR_LAB_149e668b0;
  *(undefined2 *)(puVar4 + 3) = 0;
  FUN_1405bceb4(puVar4 + 2);
  *puVar4 = &PTR_FUN_14aa98130;
  puVar4[1] = &PTR_FUN_14aa98140;
  puVar4[2] = &PTR_FUN_14aa98150;
  puVar4[4] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(puVar4 + 5) = (undefined4)local_110;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = local_110._4_4_;
  *(undefined4 *)(puVar4 + 6) = (undefined4)uStack_108;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_108._4_4_;
  *(uint *)(puVar4 + 7) = local_100;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_fc;
  *(undefined4 *)(puVar4 + 8) = uStack_f8;
  *(undefined4 *)((longlong)puVar4 + 0x44) = uStack_f4;
  *(undefined4 *)(puVar4 + 9) = local_f0;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_ec;
  *(undefined4 *)(puVar4 + 10) = uStack_e8;
  *(undefined4 *)((longlong)puVar4 + 0x54) = uStack_e4;
  puVar4[0xb] = local_e0;
  if ((local_e0 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  puVar5 = local_d8;
  puVar8 = puVar4 + 0xc;
  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)((longlong)puVar4 + 0xb4) = local_84;
  *(undefined4 *)(puVar4 + 0x16) = local_88;
  puVar4[0x17] = local_80;
  puVar4[0x18] = local_78;
  if (local_78 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
    plVar7 = local_78;
  }
  puVar4[0x19] = local_70;
  *param_1 = puVar4;
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_FUN_14aa99150;
  puVar5[2] = puVar4;
  param_1[1] = puVar5;
  local_118 = &PTR_FUN_149ed05f0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d257c8 FUN_147d257c8 body=32 status=ok
// SIG undefined FUN_147d257c8(void)

undefined8 FUN_147d257c8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FDeferredCleanupSlateBrush");
  return param_2;
}



// FUNCTION 147d257e8 FUN_147d257e8 body=126 status=ok
// SIG undefined FUN_147d257e8(void)

void FUN_147d257e8(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  lVar4 = *(longlong *)(param_1 + 0x98);
  if (lVar4 != 0 && lVar4 == lVar3) {
    *(undefined8 *)(param_1 + 0x98) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 147d2586c FUN_147d2586c body=374 status=ok
// SIG undefined FUN_147d2586c(void)

void FUN_147d2586c(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar9 = (**(code **)(*(longlong *)(param_1 + 200) + 0x38))(param_1 + 200);
  plVar11 = DAT_14c98e618;
  if ((((cVar9 == '\0') && (*(longlong *)(param_1 + 0x98) == 0)) &&
      (*(longlong *)(param_1 + 0x248) != 0)) &&
     ((plVar4 = *(longlong **)(param_1 + 0x250), plVar4 != (longlong *)0x0 && (0 < (int)plVar4[1])))
     ) {
    plVar5 = (longlong *)DAT_14c98e618[4];
    iVar10 = (int)plVar4[1];
    do {
      if (iVar10 == 0) {
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
        (**(code **)(*plVar11 + 0x28))(plVar11,&local_30);
        goto LAB_147d25953;
      }
      LOCK();
      iVar8 = (int)plVar4[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar4 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    local_48 = *(undefined8 *)(param_1 + 0x248);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plStack_40 = plVar4;
    (**(code **)(*plVar11 + 0x28))(plVar11,&local_30);
    LOCK();
    plVar11 = plVar4 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
LAB_147d25953:
    if ((local_30 != 0) &&
       (plVar11 = (longlong *)(**(code **)(*plVar5 + 0xb8))(plVar5), plVar11 != (longlong *)0x0)) {
      lVar6 = *plVar11;
      lVar7 = *(longlong *)(param_1 + 0x98);
      if (lVar7 != lVar6) {
        *(longlong *)(param_1 + 0x98) = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        if (lVar7 != 0) {
          LOCK();
          puVar2 = (uint *)(lVar7 + 8);
          uVar3 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_28 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d259e4 FUN_147d259e4 body=229 status=ok
// SIG undefined FUN_147d259e4(void)

void FUN_147d259e4(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(uint *)(param_1 + 0x17c) = (*(uint *)(param_1 + 0x17c) & 0xffffffde) + 1;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x248);
    if (plVar3 == (longlong *)0x0) {
LAB_147d25ab8:
      local_28 = 0;
      plStack_20 = (longlong *)0x0;
      FUN_140592ae6(param_1 + 200);
    }
    else {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_147d25ab8;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar6 = iVar5 == iVar4;
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar6);
      local_28 = *(undefined8 *)(param_1 + 0x240);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      plStack_20 = plVar3;
      FUN_140592ae6(param_1 + 200);
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d25aca FUN_147d25aca body=230 status=ok
// SIG undefined FUN_147d25aca(void)

void FUN_147d25aca(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) | 0x10;
    lVar4 = *(longlong *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    if (lVar4 != 0) {
      LOCK();
      piVar2 = (int *)(lVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x248);
    if (plVar3 == (longlong *)0x0) {
LAB_147d25b90:
      local_28 = 0;
      plStack_20 = (longlong *)0x0;
      FUN_1405929ee(param_1 + 200);
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_147d25b90;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar7 = iVar6 == iVar5;
        if (bVar7) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar7);
      local_28 = *(undefined8 *)(param_1 + 0x240);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      plStack_20 = plVar3;
      FUN_1405929ee(param_1 + 200);
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d25bc2 FUN_147d25bc2 body=332 status=ok
// SIG undefined FUN_147d25bc2(void)

void FUN_147d25bc2(longlong *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 == '\0') {
    if (*(char *)((longlong)param_1 + 0x274) == '\0') {
      return;
    }
    uVar5 = 0;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x274) != '\0') {
      return;
    }
    if ((char)param_1[0x45] == '\x01') {
      iVar2 = (int)((double)param_1[0x43] / (double)*(float *)(param_1 + 0x3c));
      iVar3 = (int)param_1[0x14];
      if (iVar2 < (int)param_1[0x14]) {
        iVar3 = iVar2;
      }
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      iVar4 = (int)((double)param_1[0x44] / (double)*(float *)(param_1 + 0x3c));
      iVar2 = *(int *)((longlong)param_1 + 0xa4);
      if (iVar4 < *(int *)((longlong)param_1 + 0xa4)) {
        iVar2 = iVar4;
      }
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      fVar7 = *(float *)(param_1 + 0x3f) * (float)iVar3 + *(float *)(param_1 + 0x40) * (float)iVar2
              + *(float *)(param_1 + 0x41);
      fVar6 = (float)iVar3 * *(float *)((longlong)param_1 + 500) +
              (float)iVar2 * *(float *)((longlong)param_1 + 0x1fc) +
              *(float *)((longlong)param_1 + 0x204);
      param_1[0x1c] =
           CONCAT44((int)ROUND(fVar7 + fVar7 + 0.5) >> 1,(int)ROUND(fVar6 + fVar6 + 0.5) >> 1);
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_1[6] + 0x1d0))();
      uVar5 = 1;
      if (cVar1 == '\0') goto LAB_147d25cd0;
      param_1[0x1c] = param_1[0x42];
    }
    *(undefined1 *)(param_1 + 0x1d) = 1;
    uVar5 = 1;
  }
LAB_147d25cd0:
  (**(code **)(*param_1 + 0x170))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x274) = uVar5;
  return;
}



// FUNCTION 147d25d0e FUN_147d25d0e body=198 status=ok
// SIG undefined FUN_147d25d0e(void)

undefined4 FUN_147d25d0e(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar7 = param_1 + 200;
  if ((char)param_2 == '\0') {
    FUN_146948ce8(lVar7,2,1);
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x248);
    if (plVar4 == (longlong *)0x0) {
LAB_147d25dbd:
      local_28 = 0;
      plStack_20 = (longlong *)0x0;
      FUN_140592b68(lVar7,&local_28,2,1);
    }
    else {
      iVar6 = (int)plVar4[1];
      do {
        if (iVar6 == 0) goto LAB_147d25dbd;
        iVar1 = iVar6 + 1;
        LOCK();
        iVar5 = (int)plVar4[1];
        bVar8 = iVar6 == iVar5;
        if (bVar8) {
          *(int *)(plVar4 + 1) = iVar1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar8);
      local_28 = *(undefined8 *)(param_1 + 0x240);
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plStack_20 = plVar4;
      FUN_140592b68(lVar7,&local_28,CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),2),1);
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147d25dd6 FUN_147d25dd6 body=227 status=ok
// SIG undefined FUN_147d25dd6(void)

ulonglong FUN_147d25dd6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x1b4)) {
    lVar4 = *param_2;
    uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar9 = (uint)lVar4 & 0xffff;
    lVar8 = param_1 + 0x1b8;
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x1c0);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(param_1 + 0x1c8) - 1U &
                             (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar9) +
                             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar7 * 0x28);
        if (*plVar3 == lVar4) {
          if (plVar3 != (longlong *)0x0) {
            uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),(char)plVar3[3]);
            goto LAB_147d25dec;
          }
          break;
        }
        iVar7 = (int)plVar3[4];
      } while (iVar7 != -1);
    }
  }
  uVar6 = 0;
LAB_147d25dec:
  plVar3 = (longlong *)param_2[2];
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 147d25eba FUN_147d25eba body=48 status=ok
// SIG undefined FUN_147d25eba(void)

void FUN_147d25eba(longlong *param_1)

{
  param_1[6] = 0;
  (**(code **)(*param_1 + 0x1e8))(param_1,1,0,0,2,0);
  return;
}



// FUNCTION 147d25f68 FUN_147d25f68 body=333 status=ok
// SIG undefined FUN_147d25f68(void)

void FUN_147d25f68(longlong *param_1,int param_2,int param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x28))(param_1,local_58);
  fVar3 = ((float)param_3 / (float)local_58._4_4_) * *(float *)((longlong)param_1 + 0x1dc);
  fVar1 = ((float)param_2 / (float)local_58._0_4_) * *(float *)(param_1 + 0x3b);
  auVar4._0_8_ = (double)(*(float *)(param_1 + 0x3f) * fVar1 + *(float *)(param_1 + 0x40) * fVar3 +
                         *(float *)(param_1 + 0x41)) + 0.5;
  auVar4._8_8_ = 0;
  auVar4 = roundpd(auVar4,auVar4,1);
  auVar2._0_8_ = (double)(fVar1 * *(float *)((longlong)param_1 + 500) +
                          fVar3 * *(float *)((longlong)param_1 + 0x1fc) +
                         *(float *)((longlong)param_1 + 0x204)) + 0.5;
  auVar2._8_8_ = 0;
  auVar2 = roundpd(auVar2,auVar2,1);
  local_68 = auVar2._0_8_;
  uStack_60 = auVar4._0_8_;
  (**(code **)(*(longlong *)(DAT_14c98e618 + 0x148) + 0x1e8))(DAT_14c98e618 + 0x148);
  param_1[0x3a] = CONCAT44(param_3,param_2);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d260b6 FUN_147d260b6 body=1541 status=ok
// SIG undefined FUN_147d260b6(void)

void FUN_147d260b6(longlong param_1,ushort *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    plVar4 = DAT_14c965488;
    uVar7 = DAT_14c965480;
    uVar6 = DAT_14c965478;
    if (((int)local_68 != (int)DAT_14c967818) || (local_68._4_4_ != DAT_14c967818._4_4_)) {
      uVar8 = *param_2;
      if ((uVar8 & 0x10) != 0) {
        plVar5 = *(longlong **)(param_1 + 0x38);
        if (DAT_14c965488 == (longlong *)0x0) {
          local_60 = 0;
          local_58 = DAT_14c965478;
          local_50 = DAT_14c965480;
          local_48 = (longlong *)0x0;
          local_40 = 0x3f80000000000000;
          local_38 = 0;
          local_68 = plVar1;
        }
        else {
          LOCK();
          *(int *)(DAT_14c965488 + 1) = (int)DAT_14c965488[1] + 1;
          UNLOCK();
          local_60 = 0;
          local_58 = uVar6;
          local_50 = uVar7;
          local_48 = plVar4;
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_40 = 0x3f80000000000000;
          local_38 = 0;
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          local_68 = plVar1;
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        (**(code **)(*plVar5 + 0x48))(plVar5);
        plVar4 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_48 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        uVar8 = *param_2;
      }
      plVar4 = DAT_14c9654a0;
      uVar7 = DAT_14c965498;
      uVar6 = DAT_14c965490;
      if ((uVar8 & 0x20) != 0) {
        plVar5 = *(longlong **)(param_1 + 0x38);
        if (DAT_14c9654a0 == (longlong *)0x0) {
          local_60 = 0;
          local_58 = DAT_14c965490;
          local_50 = DAT_14c965498;
          local_48 = (longlong *)0x0;
          local_40 = 0x3f80000000000000;
          local_38 = 0;
          local_68 = plVar1;
        }
        else {
          LOCK();
          *(int *)(DAT_14c9654a0 + 1) = (int)DAT_14c9654a0[1] + 1;
          UNLOCK();
          local_60 = 0;
          local_58 = uVar6;
          local_50 = uVar7;
          local_48 = plVar4;
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_40 = 0x3f80000000000000;
          local_38 = 0;
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          local_68 = plVar1;
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        (**(code **)(*plVar5 + 0x48))(plVar5);
        plVar4 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_48 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        uVar8 = *param_2;
      }
      plVar4 = DAT_14c965458;
      uVar7 = DAT_14c965450;
      uVar6 = DAT_14c965448;
      if ((uVar8 & 4) != 0) {
        plVar5 = *(longlong **)(param_1 + 0x38);
        if (DAT_14c965458 == (longlong *)0x0) {
          local_60 = 0;
          local_58 = DAT_14c965448;
          local_50 = DAT_14c965450;
          local_48 = (longlong *)0x0;
          local_40 = 0x3f80000000000000;
          local_38 = 0;
          local_68 = plVar1;
        }
        else {
          LOCK();
          *(int *)(DAT_14c965458 + 1) = (int)DAT_14c965458[1] + 1;
          UNLOCK();
          local_60 = 0;
          local_58 = uVar6;
          local_50 = uVar7;
          local_48 = plVar4;
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_40 = 0x3f80000000000000;
          local_38 = 0;
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          local_68 = plVar1;
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        (**(code **)(*plVar5 + 0x48))(plVar5);
        plVar4 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_48 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        uVar8 = *param_2;
      }
      plVar4 = DAT_14c965470;
      uVar7 = DAT_14c965468;
      uVar6 = DAT_14c965460;
      if ((uVar8 & 8) != 0) {
        plVar5 = *(longlong **)(param_1 + 0x38);
        if (DAT_14c965470 == (longlong *)0x0) {
          local_60 = 0;
          local_58 = DAT_14c965460;
          local_50 = DAT_14c965468;
          local_48 = (longlong *)0x0;
          local_40 = 0x3f80000000000000;
          local_38 = 0;
          local_68 = plVar1;
        }
        else {
          LOCK();
          *(int *)(DAT_14c965470 + 1) = (int)DAT_14c965470[1] + 1;
          UNLOCK();
          local_60 = 0;
          local_58 = uVar6;
          local_50 = uVar7;
          local_48 = plVar4;
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_40 = 0x3f80000000000000;
          local_38 = 0;
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          local_68 = plVar1;
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        (**(code **)(*plVar5 + 0x48))(plVar5);
        plVar4 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_48 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        uVar8 = *param_2;
      }
      plVar4 = DAT_14c965428;
      uVar7 = DAT_14c965420;
      uVar6 = DAT_14c965418;
      if ((uVar8 & 1) != 0) {
        plVar5 = *(longlong **)(param_1 + 0x38);
        if (DAT_14c965428 == (longlong *)0x0) {
          local_60 = 0;
          local_58 = DAT_14c965418;
          local_50 = DAT_14c965420;
          local_48 = (longlong *)0x0;
          local_40 = 0x3f80000000000000;
          local_38 = 0;
          local_68 = plVar1;
        }
        else {
          LOCK();
          *(int *)(DAT_14c965428 + 1) = (int)DAT_14c965428[1] + 1;
          UNLOCK();
          local_60 = 0;
          local_58 = uVar6;
          local_50 = uVar7;
          local_48 = plVar4;
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_40 = 0x3f80000000000000;
          local_38 = 0;
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          local_68 = plVar1;
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        (**(code **)(*plVar5 + 0x48))(plVar5);
        plVar4 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_48 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        uVar8 = *param_2;
      }
      plVar4 = DAT_14c965440;
      uVar7 = DAT_14c965438;
      uVar6 = DAT_14c965430;
      if ((uVar8 & 2) != 0) {
        plVar5 = *(longlong **)(param_1 + 0x38);
        if (DAT_14c965440 == (longlong *)0x0) {
          local_60 = 0;
          local_58 = DAT_14c965430;
          local_50 = DAT_14c965438;
          local_48 = (longlong *)0x0;
          local_40 = 0x3f80000000000000;
          local_38 = 0;
          local_68 = plVar1;
        }
        else {
          LOCK();
          *(int *)(DAT_14c965440 + 1) = (int)DAT_14c965440[1] + 1;
          UNLOCK();
          local_60 = 0;
          local_58 = uVar6;
          local_50 = uVar7;
          local_48 = plVar4;
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_40 = 0x3f80000000000000;
          local_38 = 0;
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          local_68 = plVar1;
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        (**(code **)(*plVar5 + 0x48))(plVar5,&local_68);
        plVar1 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_48 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d266bc FUN_147d266bc body=331 status=ok
// SIG undefined FUN_147d266bc(void)

void FUN_147d266bc(longlong param_1,double *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = (float)(int)((ulonglong)param_3 >> 0x20);
  fVar9 = 1.0 / (*(float *)(param_1 + 500) * *(float *)(param_1 + 0x200) -
                *(float *)(param_1 + 0x1fc) * *(float *)(param_1 + 0x1f8));
  fVar8 = *(float *)(param_1 + 500) * fVar9;
  fVar7 = -*(float *)(param_1 + 0x1fc) * fVar9;
  fVar5 = -*(float *)(param_1 + 0x1f8) * fVar9;
  fVar9 = fVar9 * *(float *)(param_1 + 0x200);
  fVar1 = *(float *)(param_1 + 0x208);
  fVar2 = *(float *)(param_1 + 0x204);
  uVar4 = *(uint *)(param_1 + 0xa4);
  fVar3 = *(float *)(param_1 + 0x1e0);
  *param_2 = ((double)(fVar9 * (float)(int)param_3 + fVar7 * fVar6 +
                      (-fVar2 * fVar9 - fVar1 * fVar7)) / (double)*(uint *)(param_1 + 0xa0)) *
             (double)fVar3;
  param_2[1] = ((double)(fVar5 * (float)(int)param_3 + fVar8 * fVar6 +
                        (-fVar2 * fVar5 - fVar8 * fVar1)) / (double)uVar4) * (double)fVar3;
  return;
}



// FUNCTION 147d268a4 FUN_147d268a4 body=345 status=ok
// SIG undefined FUN_147d268a4(void)

undefined4 FUN_147d268a4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  plVar3 = DAT_14c98e618;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x240) == 0) ||
      (plVar2 = *(longlong **)(param_1 + 0x248), plVar2 == (longlong *)0x0)) || ((int)plVar2[1] < 1)
     ) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) {
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
        (**(code **)(*plVar3 + 0x28))(plVar3,&local_28);
        goto LAB_147d2696c;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    local_38 = *(undefined8 *)(param_1 + 0x240);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plStack_30 = plVar2;
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_28);
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
LAB_147d2696c:
    if (local_28 == 0) {
      uVar6 = 0;
    }
    else {
      plVar3 = *(longlong **)(local_28 + 0x510);
      plVar2 = *(longlong **)(local_28 + 0x518);
      if (plVar2 == (longlong *)0x0) {
        uVar6 = (**(code **)(*plVar3 + 200))();
      }
      else {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        uVar6 = (**(code **)(*plVar3 + 200))();
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
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 147d269fe FUN_147d269fe body=720 status=ok
// SIG undefined FUN_147d269fe(void)

undefined8 FUN_147d269fe(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  undefined1 auStack_138 [39];
  undefined1 local_111;
  undefined8 *local_110;
  undefined1 *local_108;
  undefined1 local_fc [4];
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *plStack_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8 = (longlong *)CONCAT71(local_f8._1_7_,1);
  local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffffff00);
  local_f0 = 0;
  plStack_e8 = (longlong *)0x0;
  memset(&local_d0,0,0x88);
  local_48 = 0x20702;
  lVar1 = param_1 + 8;
  FUN_1403d4924(lVar1,&local_f8);
  FUN_14493db24(&local_f8);
  local_111 = 1;
  local_f8 = *(longlong **)(param_4 + 0x40);
  local_f0 = *(undefined8 *)(param_4 + 0x48);
  plStack_e8 = *(longlong **)(param_4 + 0x50);
  if (plStack_e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_e8 + 1) = (int)plStack_e8[1] + 1;
    UNLOCK();
  }
  local_108 = &local_111;
  local_110 = &local_f8;
  FUN_140592340(param_1 + 0xc0,local_fc);
  plVar2 = plStack_e8;
  if (plStack_e8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_e8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_e8)(plStack_e8);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((undefined4 *)(param_1 + 0x118) != param_3) {
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_3 + 0xc);
    uVar6 = *param_3;
    uVar7 = param_3[1];
    uVar8 = param_3[2];
    uVar9 = param_3[3];
    uVar10 = *(undefined8 *)(param_3 + 4);
    uVar11 = *(undefined8 *)(param_3 + 6);
    uVar12 = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x140) = uVar12;
    *(undefined8 *)(param_1 + 0x128) = uVar10;
    *(undefined8 *)(param_1 + 0x130) = uVar11;
    *(undefined4 *)(param_1 + 0x118) = uVar6;
    *(undefined4 *)(param_1 + 0x11c) = uVar7;
    *(undefined4 *)(param_1 + 0x120) = uVar8;
    *(undefined4 *)(param_1 + 0x124) = uVar9;
  }
  FUN_1407a4be8(param_1 + -200,param_3,param_4);
  if (*(longlong *)(param_1 + -0x90) != 0) {
    plVar2 = (longlong *)(param_1 + -0xc0);
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_f8);
    if (((int)local_f8 != (int)DAT_14c967818) || (local_f8._4_4_ != DAT_14c967818._4_4_)) {
      plVar4 = *(longlong **)(param_1 + -0x90);
      local_c8 = *(undefined1 *)(param_4 + 100);
      plStack_e8 = *(longlong **)(param_4 + 0x40);
      local_e0 = *(undefined8 *)(param_4 + 0x48);
      plVar5 = *(longlong **)(param_4 + 0x50);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_f0 = CONCAT44(*(undefined4 *)(param_4 + 0xc),*(undefined4 *)(param_4 + 0xc));
      local_f8 = plVar2;
      local_d8 = plVar5;
      if (plVar5 == (longlong *)0x0) {
        local_d0 = 0x3f80000000000003;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        local_d0 = 0x3f80000000000003;
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      cVar13 = (**(code **)(*plVar4 + 0x48))(plVar4);
      plVar2 = local_d8;
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_d8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (cVar13 == '\0') {
        local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffffffffff00);
        local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffffff00);
        local_f0 = 0;
        plStack_e8 = (longlong *)0x0;
        memset(&local_d0,0,0x88);
        local_48 = CONCAT35(local_48._5_3_,0x20702);
        FUN_1403d4924(lVar1,&local_f8);
        FUN_14493db24(&local_f8);
      }
    }
  }
  FUN_1403d4c6e(param_2,lVar1);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d26cd0 FUN_147d26cd0 body=581 status=ok
// SIG undefined FUN_147d26cd0(void)

undefined8 FUN_147d26cd0(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  double *local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  double local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0;
  undefined1 local_d8 [136];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_100[0] = 1;
  local_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  memset(local_d8,0,0x88);
  local_50 = 0x4000020702;
  lVar1 = param_1 + 8;
  FUN_1402c17c2(lVar1,local_100);
  FUN_14493db24(local_100);
  *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + 1;
  if ((undefined4 *)(param_1 + 0x118) != param_3) {
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_3 + 0xc);
    uVar2 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = *(undefined8 *)(param_3 + 4);
    uVar8 = *(undefined8 *)(param_3 + 6);
    uVar9 = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x140) = uVar9;
    *(undefined8 *)(param_1 + 0x128) = uVar7;
    *(undefined8 *)(param_1 + 0x130) = uVar8;
    *(undefined4 *)(param_1 + 0x118) = uVar2;
    *(undefined4 *)(param_1 + 0x11c) = uVar4;
    *(undefined4 *)(param_1 + 0x120) = uVar5;
    *(undefined4 *)(param_1 + 0x124) = uVar6;
  }
  FUN_1407a4be8(param_1 + -200,param_3,param_4);
  plVar3 = *(longlong **)(param_1 + -0x90);
  if (plVar3 != (longlong *)0x0) {
    local_110 = (double)(int)*(undefined8 *)(param_1 + 0x110);
    local_108 = (double)(int)((ulonglong)*(undefined8 *)(param_1 + 0x110) >> 0x20);
    uVar2 = *(undefined4 *)(param_4 + 0x5c);
    local_128 = param_1 + -200;
    local_120 = param_2;
    FUN_1402160b8(&local_118);
    local_148 = *(undefined4 *)(param_4 + 0x60);
    local_140 = local_118;
    local_158 = 0;
    local_150 = &local_110;
    local_138 = uVar2;
    cVar10 = (**(code **)(*plVar3 + 0x68))
                       (plVar3,param_1 + -0xc0,*(undefined4 *)(param_4 + 0xc),
                        *(undefined4 *)(param_4 + 0x58));
    if (cVar10 == '\0') {
      local_100[0] = 0;
      local_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      memset(local_d8,0,0x88);
      local_50 = 0x20702;
      FUN_1403d4924(lVar1,local_100);
    }
    else {
      cVar10 = (**(code **)(**(longlong **)(param_1 + -0x90) + 0x188))();
      param_2 = local_120;
      if (cVar10 != '\x03') goto LAB_147d26eda;
      FUN_140592538(local_128,local_100,
                    CONCAT44((int)*(float *)(param_4 + 0x24),(int)*(float *)(param_4 + 0x20)),0);
      FUN_1403d4924(lVar1,local_100);
    }
    FUN_14493db24(local_100);
    param_2 = local_120;
  }
LAB_147d26eda:
  FUN_1403d4c6e(param_2,lVar1);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147d26f16 FUN_147d26f16 body=482 status=ok
// SIG undefined FUN_147d26f16(void)

undefined8 FUN_147d26f16(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  double *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_108;
  double local_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0;
  undefined1 local_d8 [136];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_100 = (double)CONCAT71(local_100._1_7_,1);
  local_e0 = 0;
  local_f8 = 0.0;
  uStack_f0 = 0;
  memset(local_d8,0,0x88);
  local_50 = 0x20702;
  lVar1 = param_1 + 8;
  FUN_1403d4924(lVar1,&local_100);
  FUN_14493db24(&local_100);
  if ((undefined4 *)(param_1 + 0x118) != param_3) {
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_3 + 0xc);
    uVar2 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = *(undefined8 *)(param_3 + 4);
    uVar8 = *(undefined8 *)(param_3 + 6);
    uVar9 = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x140) = uVar9;
    *(undefined8 *)(param_1 + 0x128) = uVar7;
    *(undefined8 *)(param_1 + 0x130) = uVar8;
    *(undefined4 *)(param_1 + 0x118) = uVar2;
    *(undefined4 *)(param_1 + 0x11c) = uVar4;
    *(undefined4 *)(param_1 + 0x120) = uVar5;
    *(undefined4 *)(param_1 + 0x124) = uVar6;
  }
  FUN_1407a4be8(param_1 + -200,param_3,param_4);
  plVar3 = *(longlong **)(param_1 + -0x90);
  if (plVar3 != (longlong *)0x0) {
    uVar2 = *(undefined4 *)(param_4 + 0x5c);
    FUN_1402160b8(&local_108);
    local_128 = *(undefined4 *)(param_4 + 0x60);
    local_100 = (double)(int)*(undefined8 *)(param_1 + 0x110);
    local_f8 = (double)(int)((ulonglong)*(undefined8 *)(param_1 + 0x110) >> 0x20);
    local_120 = local_108;
    local_130 = &local_100;
    local_138 = 1;
    local_118 = uVar2;
    cVar10 = (**(code **)(*plVar3 + 0x68))
                       (plVar3,param_1 + -0xc0,*(undefined4 *)(param_4 + 0xc),
                        *(undefined4 *)(param_4 + 0x58));
    if (cVar10 == '\0') {
      local_100 = (double)((ulonglong)local_100 & 0xffffffffffffff00);
      local_e0 = 0;
      local_f8 = 0.0;
      uStack_f0 = 0;
      memset(local_d8,0,0x88);
      local_50 = 0x20702;
      FUN_1403d4924(lVar1,&local_100);
      FUN_14493db24(&local_100);
    }
  }
  FUN_1403d4c6e(param_2,lVar1);
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d270fa FUN_147d270fa body=589 status=ok
// SIG undefined FUN_147d270fa(void)

undefined8 FUN_147d270fa(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  double *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0;
  undefined1 local_d8 [136];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_100 = (double)CONCAT71(local_100._1_7_,1);
  local_e0 = 0;
  local_f8 = 0.0;
  uStack_f0 = 0;
  local_110 = param_2;
  memset(local_d8,0,0x88);
  local_50 = 0x20702;
  lVar1 = param_1 + 8;
  FUN_1403d4924(lVar1,&local_100);
  FUN_14493db24(&local_100);
  if ((undefined4 *)(param_1 + 0x118) != param_3) {
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_3 + 0xc);
    uVar4 = *param_3;
    uVar7 = param_3[1];
    uVar8 = param_3[2];
    uVar9 = param_3[3];
    uVar5 = *(undefined8 *)(param_3 + 4);
    uVar10 = *(undefined8 *)(param_3 + 6);
    uVar11 = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x140) = uVar11;
    *(undefined8 *)(param_1 + 0x128) = uVar5;
    *(undefined8 *)(param_1 + 0x130) = uVar10;
    *(undefined4 *)(param_1 + 0x118) = uVar4;
    *(undefined4 *)(param_1 + 0x11c) = uVar7;
    *(undefined4 *)(param_1 + 0x120) = uVar8;
    *(undefined4 *)(param_1 + 0x124) = uVar9;
  }
  iVar3 = *(int *)(param_1 + 0x230);
  *(int *)(param_1 + 0x230) = iVar3 + -1;
  FUN_1407a4be8(param_1 + -200,param_3,param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x110);
  if (iVar3 < 2) {
    *(undefined8 *)(param_1 + 0x110) = 0xffffffffffffffff;
  }
  plVar6 = *(longlong **)(param_1 + -0x90);
  if (plVar6 != (longlong *)0x0) {
    uVar4 = *(undefined4 *)(param_4 + 0x5c);
    FUN_1402160b8(&local_108);
    local_100 = (double)(int)uVar5;
    local_f8 = (double)(int)((ulonglong)uVar5 >> 0x20);
    local_120 = local_108;
    local_130 = &local_100;
    local_128 = 0;
    local_138 = 5;
    local_118 = uVar4;
    cVar12 = (**(code **)(*plVar6 + 0x68))
                       (plVar6,param_1 + -0xc0,*(undefined4 *)(param_4 + 0xc),
                        *(undefined4 *)(param_4 + 0x58));
    if (cVar12 == '\0') {
      local_100 = (double)((ulonglong)local_100 & 0xffffffffffffff00);
      local_e0 = 0;
      local_f8 = 0.0;
      uStack_f0 = 0;
      memset(local_d8,0,0x88);
      local_50 = 0x20702;
      FUN_1403d4924(lVar1,&local_100);
      FUN_14493db24(&local_100);
    }
    cVar12 = (**(code **)(**(longlong **)(param_1 + -0x90) + 0x188))();
    if (cVar12 == '\x03') {
      plVar6 = *(longlong **)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      *(uint *)(param_1 + 0xbc) = (*(uint *)(param_1 + 0xbc) & 0xffffffde) + 1;
    }
  }
  uVar5 = local_110;
  FUN_1403d4c6e(local_110,lVar1);
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d27348 FUN_147d27348 body=760 status=ok
// SIG undefined FUN_147d27348(void)

undefined8 FUN_147d27348(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  double *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  double local_168;
  double local_160;
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_138;
  undefined1 local_130 [136];
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_158[0] = 1;
  local_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  memset(local_130,0,0x88);
  local_a8 = 0x20702;
  lVar1 = param_1 + 8;
  FUN_1403d4924(lVar1,local_158);
  FUN_14493db24(local_158);
  FUN_1407a4be8(param_1 + -200,param_3,param_4);
  if ((undefined4 *)(param_1 + 0x118) != param_3) {
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_3 + 0xc);
    uVar2 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = *(undefined8 *)(param_3 + 4);
    uVar8 = *(undefined8 *)(param_3 + 6);
    uVar9 = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x140) = uVar9;
    *(undefined8 *)(param_1 + 0x128) = uVar7;
    *(undefined8 *)(param_1 + 0x130) = uVar8;
    *(undefined4 *)(param_1 + 0x118) = uVar2;
    *(undefined4 *)(param_1 + 0x11c) = uVar4;
    *(undefined4 *)(param_1 + 0x120) = uVar5;
    *(undefined4 *)(param_1 + 0x124) = uVar6;
  }
  plVar3 = *(longlong **)(param_1 + -0x90);
  if (plVar3 != (longlong *)0x0) {
    fVar13 = 1.0 / ((float)param_3[7] * (float)param_3[10] - (float)param_3[9] * (float)param_3[8]);
    fVar14 = (float)param_3[7] * fVar13;
    fVar12 = -(float)param_3[9] * fVar13;
    fVar11 = -(float)param_3[8] * fVar13;
    fVar13 = fVar13 * (float)param_3[10];
    local_160 = (double)((fVar11 * *(float *)(param_4 + 0x20) + fVar14 * *(float *)(param_4 + 0x24)
                         + (-(float)param_3[0xb] * fVar11 - fVar14 * (float)param_3[0xc])) *
                        (float)param_3[2]);
    local_168 = (double)((fVar13 * *(float *)(param_4 + 0x20) + fVar12 * *(float *)(param_4 + 0x24)
                         + (-(float)param_3[0xb] * fVar13 - (float)param_3[0xc] * fVar12)) *
                        (float)param_3[2]);
    uVar2 = *(undefined4 *)(param_4 + 0x5c);
    FUN_1402160b8(&local_170);
    local_188 = *(undefined4 *)(param_4 + 0x60);
    local_180 = local_170;
    local_198 = 3;
    local_190 = &local_168;
    local_178 = uVar2;
    cVar10 = (**(code **)(*plVar3 + 0x68))
                       (plVar3,param_1 + -0xc0,*(undefined4 *)(param_4 + 0xc),
                        *(undefined4 *)(param_4 + 0x58));
    if (cVar10 == '\0') {
      local_158[0] = 0;
      local_138 = 0;
      local_150 = 0;
      uStack_148 = 0;
      memset(local_130,0,0x88);
      local_a8 = 0x20702;
      FUN_1403d4924(lVar1,local_158);
      FUN_14493db24(local_158);
    }
  }
  FUN_1403d4c6e(param_2,lVar1);
  if ((local_a0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d27642 FUN_147d27642 body=760 status=ok
// SIG undefined FUN_147d27642(void)

undefined8 FUN_147d27642(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  double *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  double local_168;
  double local_160;
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_138;
  undefined1 local_130 [136];
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_158[0] = 1;
  local_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  memset(local_130,0,0x88);
  local_a8 = 0x20702;
  lVar1 = param_1 + 8;
  FUN_1403d4924(lVar1,local_158);
  FUN_14493db24(local_158);
  FUN_1407a4be8(param_1 + -200,param_3,param_4);
  if ((undefined4 *)(param_1 + 0x118) != param_3) {
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_3 + 0xc);
    uVar2 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = *(undefined8 *)(param_3 + 4);
    uVar8 = *(undefined8 *)(param_3 + 6);
    uVar9 = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x140) = uVar9;
    *(undefined8 *)(param_1 + 0x128) = uVar7;
    *(undefined8 *)(param_1 + 0x130) = uVar8;
    *(undefined4 *)(param_1 + 0x118) = uVar2;
    *(undefined4 *)(param_1 + 0x11c) = uVar4;
    *(undefined4 *)(param_1 + 0x120) = uVar5;
    *(undefined4 *)(param_1 + 0x124) = uVar6;
  }
  plVar3 = *(longlong **)(param_1 + -0x90);
  if (plVar3 != (longlong *)0x0) {
    fVar13 = 1.0 / ((float)param_3[7] * (float)param_3[10] - (float)param_3[9] * (float)param_3[8]);
    fVar14 = (float)param_3[7] * fVar13;
    fVar12 = -(float)param_3[9] * fVar13;
    fVar11 = -(float)param_3[8] * fVar13;
    fVar13 = fVar13 * (float)param_3[10];
    local_160 = (double)((fVar11 * *(float *)(param_4 + 0x20) + fVar14 * *(float *)(param_4 + 0x24)
                         + (-(float)param_3[0xb] * fVar11 - fVar14 * (float)param_3[0xc])) *
                        (float)param_3[2]);
    local_168 = (double)((fVar13 * *(float *)(param_4 + 0x20) + fVar12 * *(float *)(param_4 + 0x24)
                         + (-(float)param_3[0xb] * fVar13 - (float)param_3[0xc] * fVar12)) *
                        (float)param_3[2]);
    uVar2 = *(undefined4 *)(param_4 + 0x5c);
    FUN_1402160b8(&local_170);
    local_188 = *(undefined4 *)(param_4 + 0x60);
    local_180 = local_170;
    local_198 = 4;
    local_190 = &local_168;
    local_178 = uVar2;
    cVar10 = (**(code **)(*plVar3 + 0x68))
                       (plVar3,param_1 + -0xc0,*(undefined4 *)(param_4 + 0xc),
                        *(undefined4 *)(param_4 + 0x58));
    if (cVar10 == '\0') {
      local_158[0] = 0;
      local_138 = 0;
      local_150 = 0;
      uStack_148 = 0;
      memset(local_130,0,0x88);
      local_a8 = 0x20702;
      FUN_1403d4924(lVar1,local_158);
      FUN_14493db24(local_158);
    }
  }
  FUN_1403d4c6e(param_2,lVar1);
  if ((local_a0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d2793c FUN_147d2793c body=607 status=ok
// SIG undefined FUN_147d2793c(void)

undefined8 FUN_147d2793c(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  char cVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 uVar16;
  bool bVar17;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  double local_108;
  longlong *plStack_100;
  undefined8 uStack_f8;
  undefined1 local_e8;
  undefined1 local_e0 [136];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_108 = (double)CONCAT71(local_108._1_7_,1);
  local_e8 = 0;
  plStack_100 = (longlong *)0x0;
  uStack_f8 = 0;
  memset(local_e0,0,0x88);
  local_58 = 0x20702;
  lVar1 = param_1 + 8;
  FUN_1403d4924(lVar1,&local_108);
  FUN_14493db24(&local_108);
  if ((undefined4 *)(param_1 + 0x118) != param_3) {
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_3 + 0xc);
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = *(undefined8 *)(param_3 + 4);
    uVar10 = *(undefined8 *)(param_3 + 6);
    uVar11 = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0x140) = uVar11;
    *(undefined8 *)(param_1 + 0x128) = uVar9;
    *(undefined8 *)(param_1 + 0x130) = uVar10;
    *(undefined4 *)(param_1 + 0x118) = uVar5;
    *(undefined4 *)(param_1 + 0x11c) = uVar6;
    *(undefined4 *)(param_1 + 0x120) = uVar7;
    *(undefined4 *)(param_1 + 0x124) = uVar8;
  }
  FUN_1407a4be8(param_1 + -200,param_3,param_4);
  uVar9 = DAT_14c98e618;
  plVar15 = *(longlong **)(param_1 + -0x90);
  if (plVar15 != (longlong *)0x0) {
    uVar16 = 5;
    if (*(char *)(param_4 + 0x65) != '\x05') {
      plStack_100 = *(longlong **)(param_1 + 0x188);
      if (plStack_100 == (longlong *)0x0) {
LAB_147d27a61:
        local_108 = 0.0;
        plStack_100 = (longlong *)0x0;
        bVar17 = true;
      }
      else {
        iVar14 = (int)plStack_100[1];
        do {
          if (iVar14 == 0) goto LAB_147d27a61;
          LOCK();
          iVar12 = (int)plStack_100[1];
          bVar17 = iVar14 == iVar12;
          if (bVar17) {
            *(int *)(plStack_100 + 1) = iVar14 + 1;
            iVar12 = iVar14;
          }
          iVar14 = iVar12;
          UNLOCK();
        } while (!bVar17);
        local_108 = *(double *)(param_1 + 0x180);
        LOCK();
        *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
        UNLOCK();
        bVar17 = false;
      }
      plVar15 = plStack_100;
      FUN_140d673ae(uVar9,&local_108,2);
      plVar4 = plStack_100;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_100 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_100)(plStack_100);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (!bVar17) {
        LOCK();
        plVar4 = plVar15 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar3 = (int *)((longlong)plVar15 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
      plVar15 = *(longlong **)(param_1 + -0x90);
      uVar16 = *(undefined1 *)(param_4 + 0x65);
    }
    local_118 = *(undefined1 *)(param_4 + 0x70);
    plStack_100 = (longlong *)(double)*(float *)(param_4 + 0x6c);
    local_108 = (double)*(float *)(param_4 + 0x68);
    cVar13 = (**(code **)(*plVar15 + 0x70))((int)plStack_100,param_1 + -0xc0,uVar16);
    if (cVar13 == '\0') {
      local_108 = (double)((ulonglong)local_108 & 0xffffffffffffff00);
      local_e8 = 0;
      plStack_100 = (longlong *)0x0;
      uStack_f8 = 0;
      memset(local_e0,0,0x88);
      local_58 = CONCAT35(local_58._5_3_,0x20702);
      FUN_1403d4924(lVar1,&local_108);
      FUN_14493db24(&local_108);
    }
  }
  FUN_1403d4c6e(param_2,lVar1);
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147d27b9c FUN_147d27b9c body=316 status=ok
// SIG undefined FUN_147d27b9c(void)

undefined8 FUN_147d27b9c(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e8[0] = 1;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  memset(local_c0,0,0x88);
  local_38 = 0x20702;
  lVar1 = param_1 + 8;
  FUN_1403d4924(lVar1,local_e8);
  FUN_14493db24(local_e8);
  plVar2 = *(longlong **)(param_1 + -0x90);
  if (plVar2 != (longlong *)0x0) {
    local_f8 = param_4 + 0x68;
    local_100 = param_4 + 0x50;
    local_108 = param_4 + 0x38;
    cVar3 = (**(code **)(*plVar2 + 0x78))
                      (plVar2,param_1 + -0xc0,*(undefined4 *)(param_4 + 0xc),param_4 + 0x20);
    if (cVar3 == '\0') {
      local_e8[0] = 0;
      local_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      memset(local_c0,0,0x88);
      local_38 = 0x20702;
      FUN_1403d4924(lVar1,local_e8);
      FUN_14493db24(local_e8);
    }
  }
  FUN_1403d4c6e(param_2,lVar1);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d27cda FUN_147d27cda body=59 status=ok
// SIG undefined FUN_147d27cda(void)

undefined1 * FUN_147d27cda(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + -0x90);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined2 *)(param_2 + 0x18) = 0x100;
  }
  else {
    (**(code **)(*plVar1 + 0x1b0))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 147d27d3a FUN_147d27d3a body=97 status=ok
// SIG undefined FUN_147d27d3a(void)

undefined1 * FUN_147d27d3a(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(longlong **)(param_1 + -0x90) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + -0x90) + 0x100))();
    uVar2 = 1;
    if (cVar1 == '\0') goto LAB_147d27d60;
  }
  uVar2 = 0;
LAB_147d27d60:
  *param_2 = uVar2;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 147d27da4 FUN_147d27da4 body=69 status=ok
// SIG undefined FUN_147d27da4(void)

undefined8 FUN_147d27da4(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = FUN_144a5d717();
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x1f0) == 0) {
      return 0;
    }
    puVar2 = (undefined8 *)
             ((longlong)*(int *)(param_1 + 0x228) * 8 + *(longlong *)(param_1 + 0x1e8));
  }
  else {
    puVar2 = (undefined8 *)(param_1 + 0x220);
  }
  return *puVar2;
}



// FUNCTION 147d27dea FUN_147d27dea body=66 status=ok
// SIG undefined FUN_147d27dea(void)

undefined8 FUN_147d27dea(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = DAT_14cb0d2b0;
  if (((longlong *)(param_1 + -0xc0) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*(longlong *)(param_1 + -0xc0) + 0x1d8))(), cVar2 == '\0')) {
    return 0;
  }
  if (*(longlong **)(lVar1 + 0xfd0) == (longlong *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000147d27e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(**(longlong **)(lVar1 + 0xfd0) + 8))();
  return uVar3;
}



// FUNCTION 147d27e2c FUN_147d27e2c body=430 status=ok
// SIG undefined FUN_147d27e2c(void)

void FUN_147d27e2c(longlong *param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  plVar1 = DAT_14c98e618;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)param_1[0x4a];
  if (plVar3 == (longlong *)0x0) {
LAB_147d27eb6:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_38);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_147d27eb6;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    local_48 = param_1[0x49];
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plStack_40 = plVar3;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_38);
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
  if (local_38 != 0) {
    *(float *)(local_38 + 0x398) = (float)param_2;
    *(float *)(local_38 + 0x39c) = (float)param_3;
    if (*(char *)(local_38 + 0x369) < '\0') {
      fVar8 = *(float *)(local_38 + 0x390);
      fVar9 = *(float *)(local_38 + 0x394);
    }
    else {
      fVar8 = *(float *)(local_38 + 0x390 + (ulonglong)(param_2 != 0) * 8);
      fVar9 = *(float *)(local_38 + 0x394 + (ulonglong)(param_2 != 0) * 8);
    }
    plVar3 = *(longlong **)(DAT_14c968098 + 0x20);
    local_58 = local_38;
    local_50 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0x40))(plVar3,&local_58,(longlong)fVar8,(longlong)fVar9);
    uVar6 = (**(code **)(**(longlong **)(local_38 + 0x510) + 0x68))();
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,uVar6);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d27fdc FUN_147d27fdc body=263 status=ok
// SIG undefined FUN_147d27fdc(void)

undefined8 * FUN_147d27fdc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x248) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x250), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  iVar5 = (int)plVar3[1];
  do {
    if (iVar5 == 0) {
      local_28 = 0;
      plStack_20 = (longlong *)0x0;
      (**(code **)(*DAT_14c98e618 + 0x28))(DAT_14c98e618,param_2);
      goto LAB_147d280cd;
    }
    LOCK();
    iVar4 = (int)plVar3[1];
    bVar6 = iVar5 == iVar4;
    if (bVar6) {
      *(int *)(plVar3 + 1) = iVar5 + 1;
      iVar4 = iVar5;
    }
    iVar5 = iVar4;
    plVar1 = DAT_14c98e618;
    UNLOCK();
  } while (!bVar6);
  local_28 = *(undefined8 *)(param_1 + 0x248);
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  plStack_20 = plVar3;
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
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
LAB_147d280cd:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d28114 FUN_147d28114 body=118 status=ok
// SIG undefined FUN_147d28114(void)

void FUN_147d28114(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146402082(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147d2f0cc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147d2819c FUN_147d2819c body=157 status=ok
// SIG undefined FUN_147d2819c(void)

void FUN_147d2819c(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  undefined4 local_40 [2];
  undefined1 local_38 [4];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (**(code **)(param_1[-0x18] + 0x140))(param_1 + -0x18);
  (**(code **)(*param_1 + 0x10))(param_1,local_38);
  (**(code **)(*param_1 + 0x10))(param_1,local_40);
  local_50 = 0;
  local_58 = uVar1;
  (**(code **)(param_1[-0x18] + 0x1e8))(param_1 + -0x18,0,local_40[0],local_34);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d2824a FUN_147d2824a body=185 status=ok
// SIG undefined FUN_147d2824a(void)

/* WARNING: Removing unreachable block (ram,0x000147d282e0) */

void FUN_147d2824a(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  lVar3 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != 0) {
    plVar1 = (longlong *)(DAT_14cb0d2b0 + 0xc28);
    FUN_140056680(&local_30,L"TOGGLE_FULLSCREEN");
    iVar2 = *(int *)(lVar3 + 0xc30);
    *(uint *)(lVar3 + 0xc30) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0xc34) < iVar2 + 1U) {
      FUN_1447a1bd6(plVar1,iVar2);
    }
    lVar3 = *plVar1;
    lVar4 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar3 + lVar4) = 0;
    *(undefined8 *)(lVar3 + lVar4) = local_30;
    local_30 = 0;
    *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_28;
    *(undefined4 *)(lVar3 + 0xc + lVar4) = local_28._4_4_;
    local_28 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d28304 FUN_147d28304 body=59 status=ok
// SIG undefined FUN_147d28304(void)

undefined8 * FUN_147d28304(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14287b896(*(undefined8 *)(param_1 + 0xb0));
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  uVar4 = puVar6[4];
  uVar5 = puVar6[5];
  *param_2 = *puVar6;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  param_2[5] = uVar5;
  param_2[6] = puVar6[6];
  return param_2;
}



// FUNCTION 147d28340 FUN_147d28340 body=59 status=ok
// SIG undefined FUN_147d28340(void)

undefined8 * FUN_147d28340(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_144b013ec(*(undefined8 *)(param_1 + 0xb0));
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  uVar4 = puVar6[4];
  uVar5 = puVar6[5];
  *param_2 = *puVar6;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  param_2[5] = uVar5;
  param_2[6] = puVar6[6];
  return param_2;
}



// FUNCTION 147d2837c FUN_147d2837c body=473 status=ok
// SIG undefined FUN_147d2837c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_147d2837c(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
    iVar16 = 0;
    iVar17 = 0;
  }
  else {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_3);
    iVar17 = (int)local_30;
    iVar16 = local_30._4_4_;
  }
  uVar11 = FUN_144a78877(iVar17,iVar16);
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    lVar14 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x80);
    }
    iVar13 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & uVar11) * 4);
    if (iVar13 != -1) {
      lVar14 = *(longlong *)(param_1 + 0x40);
      plVar18 = (longlong *)0x0;
      do {
        lVar15 = (longlong)iVar13 * 0x20;
        lVar3 = lVar14 + lVar15;
        if ((*(int *)(lVar14 + lVar15) == iVar17) && (*(int *)(lVar14 + 4 + lVar15) == iVar16)) {
          if (lVar3 == 0) goto LAB_147d283d3;
          lVar14 = *(longlong *)(lVar3 + 8);
          plVar18 = *(longlong **)(lVar3 + 0x10);
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
            UNLOCK();
          }
          if (lVar14 != 0) {
            puVar12 = (undefined4 *)FUN_14287b896(*(undefined8 *)(lVar14 + 0x10));
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            uVar7 = *(undefined8 *)(puVar12 + 4);
            uVar8 = *(undefined8 *)(puVar12 + 6);
            uVar9 = *(undefined8 *)(puVar12 + 8);
            uVar10 = *(undefined8 *)(puVar12 + 10);
            *param_2 = *puVar12;
            param_2[1] = uVar4;
            param_2[2] = uVar5;
            param_2[3] = uVar6;
            *(undefined8 *)(param_2 + 4) = uVar7;
            *(undefined8 *)(param_2 + 6) = uVar8;
            *(undefined8 *)(param_2 + 8) = uVar9;
            *(undefined8 *)(param_2 + 10) = uVar10;
            *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(puVar12 + 0xc);
            goto LAB_147d28425;
          }
          break;
        }
        iVar13 = *(int *)(lVar3 + 0x18);
      } while (iVar13 != -1);
      goto LAB_147d283d5;
    }
  }
LAB_147d283d3:
  plVar18 = (longlong *)0x0;
LAB_147d283d5:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb07fb8) && (FUN_144b3d300(&DAT_14cb07fb8), DAT_14cb07fb8 == -1)) {
    FUN_14570e3a0(&DAT_14cb07f80);
    _Init_thread_footer(&DAT_14cb07fb8);
  }
  *(undefined8 *)(param_2 + 0xc) = DAT_14cb07fb0;
  uVar7 = uRam000000014cb07fa8;
  *(undefined8 *)(param_2 + 8) = _DAT_14cb07fa0;
  *(undefined8 *)(param_2 + 10) = uVar7;
  uVar7 = uRam000000014cb07f98;
  *(undefined8 *)(param_2 + 4) = _DAT_14cb07f90;
  *(undefined8 *)(param_2 + 6) = uVar7;
  uVar6 = uRam000000014cb07f8c;
  uVar5 = uRam000000014cb07f88;
  uVar4 = uRam000000014cb07f84;
  *param_2 = _DAT_14cb07f80;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
LAB_147d28425:
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147d28558 FUN_147d28558 body=273 status=ok
// SIG undefined FUN_147d28558(void)

void FUN_147d28558(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 0) {
    iVar8 = 0;
    iVar9 = 0;
  }
  else {
    local_28 = 0;
    FUN_14485c47a(&local_28);
    iVar9 = (int)local_28;
    iVar8 = local_28._4_4_;
  }
  uVar4 = FUN_144a78877(iVar9,iVar8);
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    lVar6 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x80);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & uVar4) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x40);
      do {
        lVar7 = (longlong)iVar5 * 0x20;
        lVar2 = lVar6 + lVar7;
        if ((*(int *)(lVar6 + lVar7) == iVar9) && (*(int *)(lVar6 + 4 + lVar7) == iVar8)) {
          if (lVar2 != 0) {
            lVar6 = *(longlong *)(lVar2 + 8);
            puVar3 = *(undefined8 **)(lVar2 + 0x10);
            if (puVar3 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
              UNLOCK();
            }
            if (lVar6 != 0) {
              FUN_145794688(*(undefined8 *)(lVar6 + 0x10));
            }
            if (puVar3 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar3 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar3)(puVar3);
                LOCK();
                piVar1 = (int *)((longlong)puVar3 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
                }
              }
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar2 + 0x18);
      } while (iVar5 != -1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d2867c FUN_147d2867c body=625 status=ok
// SIG undefined FUN_147d2867c(void)

ulonglong FUN_147d2867c(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                       undefined4 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  undefined1 local_ec [4];
  longlong *local_e8;
  undefined8 *local_e0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_140488232(param_1 + -0x268,&local_100,param_2);
  if (local_100 == 0) {
    uVar7 = 0;
    goto LAB_147d2879a;
  }
  if (*(int *)(local_100 + 0x30) == *(int *)(local_100 + 0x5c)) {
LAB_147d28811:
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar4 = *param_3;
    uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar9 = (uint)lVar4 & 0xffff;
    lVar6 = local_100 + 0x60;
    if (*(longlong *)(local_100 + 0x68) != 0) {
      lVar6 = *(longlong *)(local_100 + 0x68);
    }
    iVar10 = *(int *)(lVar6 + (ulonglong)
                              (*(int *)(local_100 + 0x70) - 1U &
                              (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar9) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar10 == -1) goto LAB_147d28811;
    plVar8 = (longlong *)0x0;
    do {
      lVar6 = *(longlong *)(local_100 + 0x28) + (longlong)iVar10 * 0x20;
      if (*(longlong *)(*(longlong *)(local_100 + 0x28) + (longlong)iVar10 * 0x20) == lVar4) {
        if (lVar6 == 0) goto LAB_147d28811;
        lVar4 = *(longlong *)(lVar6 + 8);
        plVar8 = *(longlong **)(lVar6 + 0x10);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        if (lVar4 != 0) {
          uVar7 = 0;
          goto LAB_147d28774;
        }
        break;
      }
      iVar10 = *(int *)(lVar6 + 0x18);
    } while (iVar10 != -1);
  }
  local_110 = *param_4;
  local_108 = (longlong *)param_4[1];
  if (local_108 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_108 + 1) = (int)local_108[1] + 1;
    UNLOCK();
  }
  local_e0 = &local_110;
  local_e8 = param_3;
  FUN_147d2fa56(local_100 + 0x28,local_ec);
  plVar1 = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_108 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_140763f46(*(undefined8 *)(local_100 + 0x10),&local_e8,param_5);
  (*(code *)**(undefined8 **)*param_4)((undefined8 *)*param_4,&local_110);
  FUN_140a4fd40(&local_e8,&local_110);
  plVar1 = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_108 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1407640b6(&local_e8);
  uVar7 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
LAB_147d28774:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_147d2879a:
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_f8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar3 = (int *)((longlong)local_f8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_f8 + 0x10))(local_f8);
      }
    }
  }
  plVar8 = (longlong *)param_4[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 147d288ee FUN_147d288ee body=168 status=ok
// SIG undefined FUN_147d288ee(void)

void FUN_147d288ee(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [184];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_146977b6e(*(undefined8 *)(param_1 + 0x140),param_3);
  FUN_140763f46(*(undefined8 *)(param_1 + 0x140),local_d8,param_3);
  FUN_145acdaa4(local_d8,param_2);
  FUN_1407640b6(local_d8);
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d28998 FUN_147d28998 body=132 status=ok
// SIG undefined FUN_147d28998(void)

void FUN_147d28998(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_145901a74(uVar3,&local_20);
  plVar4 = (longlong *)param_2[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d28a1e FUN_147d28a1e body=91 status=ok
// SIG undefined FUN_147d28a1e(void)

undefined8 FUN_147d28a1e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(undefined8 *)(param_1 + 0x358);
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_146a8a370(uVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d28a84 FUN_147d28a84 body=122 status=ok
// SIG undefined FUN_147d28a84(void)

void FUN_147d28a84(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  local_30 = 0;
  local_38 = 0;
  (**(code **)(*param_1 + 0x78))(0,&local_28,0,0);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d28b20 FUN_147d28b20 body=612 status=ok
// SIG undefined FUN_147d28b20(void)

void FUN_147d28b20(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aa95850;
  param_1[0x4d] = &PTR_FUN_14aa95a90;
  plVar3 = (longlong *)param_1[0x7b];
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
  plVar3 = (longlong *)param_1[0x78];
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
  plVar3 = (longlong *)param_1[0x76];
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
  plVar3 = (longlong *)param_1[0x74];
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
  plVar3 = (longlong *)param_1[0x72];
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
  plVar3 = (longlong *)param_1[0x70];
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
  plVar3 = (longlong *)param_1[0x6e];
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
  plVar3 = (longlong *)param_1[0x6c];
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
  plVar3 = (longlong *)param_1[0x6a];
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
  plVar3 = (longlong *)param_1[0x68];
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
  plVar3 = (longlong *)param_1[0x66];
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
  plVar3 = (longlong *)param_1[100];
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
  FUN_1449db362(param_1 + 0x61);
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_147d2dcc8(param_1 + 0x55);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 147d28d88 FUN_147d28d88 body=83 status=ok
// SIG undefined FUN_147d28d88(void)

undefined4 FUN_147d28d88(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar1 = FUN_142873a50(param_2);
  uVar3 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_14101bb0e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = *(undefined4 *)(lVar1 + 0x100);
    }
  }
  return uVar3;
}



// FUNCTION 147d28de0 FUN_147d28de0 body=155 status=ok
// SIG undefined FUN_147d28de0(void)

undefined8 *
FUN_147d28de0(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  *param_1 = &PTR__purecall_14a453170;
  lVar3 = *param_2;
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  *param_1 = &PTR_LAB_14aa96270;
  param_1[2] = &PTR_FUN_14aa962a0;
  param_1[3] = &PTR_FUN_14aa962f0;
  param_1[4] = &PTR_FUN_14aa96300;
  *(undefined4 *)(param_1 + 6) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_4;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x42) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a) = 0;
  if (*param_2 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_2 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  return param_1;
}



// FUNCTION 147d28e7c FUN_147d28e7c body=36 status=ok
// SIG undefined FUN_147d28e7c(void)

void FUN_147d28e7c(longlong param_1)

{
  FUN_140414380(param_1 + 0x10,0);
  FUN_14493c441(param_1 + 8);
  return;
}



// FUNCTION 147d28ea0 FUN_147d28ea0 body=142 status=ok
// SIG undefined FUN_147d28ea0(void)

void FUN_147d28ea0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(*param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(*param_2 + 0x14);
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x48);
  *(longlong *)(param_1 + 0x40) = lVar3;
  *(longlong *)(param_1 + 0x48) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000147d28f22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d28f2e FUN_147d28f2e body=160 status=ok
// SIG undefined FUN_147d28f2e(void)

void FUN_147d28f2e(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_147d28ea0(param_1,&local_38);
  *(undefined1 *)(param_1 + 0x50) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d28fe2 FUN_147d28fe2 body=46 status=ok
// SIG undefined FUN_147d28fe2(void)

float FUN_147d28fe2(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 0x18) * *(float *)(param_1 + 0x224);
  fVar1 = (*(float *)(param_2 + 0x1c) * *(float *)(param_1 + 0x228) - fVar1) * param_3 + fVar1;
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  return fVar2;
}



// FUNCTION 147d29010 FUN_147d29010 body=46 status=ok
// SIG undefined FUN_147d29010(void)

float FUN_147d29010(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 0x10) * *(float *)(param_1 + 0x22c);
  fVar1 = (*(float *)(param_2 + 0x14) * *(float *)(param_1 + 0x230) - fVar1) * param_3 + fVar1;
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  return fVar2;
}



// FUNCTION 147d2903e FUN_147d2903e body=46 status=ok
// SIG undefined FUN_147d2903e(void)

float FUN_147d2903e(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 8) * *(float *)(param_1 + 0x21c);
  fVar1 = (*(float *)(param_2 + 0xc) * *(float *)(param_1 + 0x220) - fVar1) * param_3 + fVar1;
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  return fVar2;
}



// FUNCTION 147d2907a FUN_147d2907a body=43 status=ok
// SIG undefined FUN_147d2907a(void)

undefined1 * FUN_147d2907a(undefined1 *param_1)

{
  FUN_147d3f67e();
  *(undefined8 *)(param_1 + 0x18) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0x45bb800043c80000;
  *(undefined4 *)(param_1 + 0x10) = 0x3e4ccccd;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 147d290a5 FUN_147d290a5 body=775 status=ok
// SIG undefined FUN_147d290a5(void)

longlong * FUN_147d290a5(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_168 [40];
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  wchar_t *local_138;
  ulonglong *local_130;
  wchar_t local_128 [8];
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb08010) {
    FUN_144b3d300(&DAT_14cb08010);
    if (DAT_14cb08010 == -1) {
      DAT_14cb08000 = (longlong *)0x0;
      DAT_14cb08008 = (longlong *)0x0;
      atexit(FUN_1436ef344);
      _Init_thread_footer(&DAT_14cb08010);
    }
  }
  if (DAT_14cb08000 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar3[1] = (longlong)&DAT_100000001;
    *plVar3 = (longlong)&PTR_FUN_14aa99920;
    plVar1 = plVar3 + 2;
    local_128[0] = L'\x01';
    local_128[1] = L'\0';
    local_128[2] = L'\0';
    local_128[3] = L'\0';
    FUN_1470452d6(plVar1,DAT_14cb07ff8,local_128);
    FUN_144a5dc74(local_128);
    local_138 = L"DistanceDescription";
    local_130._0_4_ = 0x13;
    FUN_1446e940c(local_13c,&local_138);
    local_138 = L"AudioGeneratorInterface_Attenuation";
    local_130 = (ulonglong *)CONCAT44(local_130._4_4_,0x23);
    FUN_1446e940c(local_140,&local_138);
    FUN_140208bae(local_118,local_140,local_13c,
                  L"Distance between listener and sound location in game units.");
    local_108 = 0;
    local_100 = DAT_14cb086e8;
    local_f8 = 0;
    local_f4 = 0;
    local_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 3;
    local_7c = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_144a5dc74(local_60);
    local_50 = 0;
    local_130 = &local_48;
    local_138 = local_128;
    FUN_147d3036c(plVar3 + 4,&local_138);
    FUN_147d303d2(local_128);
    plVar4 = DAT_14cb08008;
    DAT_14cb08000 = plVar1;
    if (plVar3 == (longlong *)0x0) {
      if (DAT_14cb08008 == (longlong *)0x0) {
        *param_1 = 0x10;
        param_1[1] = 0;
        goto LAB_147d2911a;
      }
      DAT_14cb08008 = (longlong *)0x0;
LAB_147d292cc:
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
      if (plVar3 == (longlong *)0x0) goto LAB_147d290fc;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      if (plVar3 == DAT_14cb08008) {
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
      else {
        bVar5 = DAT_14cb08008 != (longlong *)0x0;
        plVar4 = DAT_14cb08008;
        DAT_14cb08008 = plVar3;
        if (bVar5) goto LAB_147d292cc;
      }
    }
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
LAB_147d290fc:
  plVar1 = DAT_14cb08008;
  *param_1 = (longlong)DAT_14cb08000;
  param_1[1] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
  }
LAB_147d2911a:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d293ad FUN_147d293ad body=1069 status=ok
// SIG undefined FUN_147d293ad(void)

longlong * FUN_147d293ad(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_268 [32];
  longlong *local_248;
  undefined1 local_240 [4];
  undefined1 local_23c [4];
  undefined1 local_238 [4];
  undefined1 local_234 [4];
  wchar_t *local_230;
  ulonglong *local_228;
  wchar_t local_220 [8];
  undefined1 local_210 [16];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined8 local_174;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined4 local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb08030) {
    FUN_144b3d300(&DAT_14cb08030);
    if (DAT_14cb08030 == -1) {
      DAT_14cb08020 = (longlong *)0x0;
      DAT_14cb08028 = (longlong *)0x0;
      atexit(FUN_1436ef37f);
      _Init_thread_footer(&DAT_14cb08030);
    }
  }
  if (DAT_14cb08020 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar3[1] = (longlong)&DAT_100000001;
    *plVar3 = (longlong)&PTR_FUN_14aa99a20;
    local_248 = plVar3 + 2;
    local_220[0] = L'\x01';
    local_220[1] = L'\0';
    local_220[2] = L'\0';
    local_220[3] = L'\0';
    FUN_1470452d6(local_248,DAT_14cb08018,local_220);
    FUN_144a5dc74(local_220);
    local_230 = L"AzimuthDescription";
    local_228._0_4_ = 0x12;
    FUN_1446e940c(local_234,&local_230);
    local_230 = L"Spatialization";
    local_228._0_4_ = 0xe;
    FUN_1446e940c(local_238,&local_230);
    FUN_140208bae(local_210,local_238,local_234,
                  L"Horizontal angle between listener forward and sound location in degrees.");
    local_200 = 0;
    local_1f8 = DAT_14cb086f0;
    local_1f0 = 0;
    local_1ec = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_180 = 0;
    local_178 = 3;
    local_174 = 0;
    local_168 = 0;
    uStack_160 = 0;
    FUN_144a5dc74(local_158);
    local_148 = 0;
    FUN_144a5dc74(local_140);
    local_230 = L"ElevationDescription";
    local_228._0_4_ = 0x14;
    FUN_1446e940c(local_23c,&local_230);
    local_230 = L"Spatialization";
    local_228 = (ulonglong *)CONCAT44(local_228._4_4_,0xe);
    FUN_1446e940c(local_240,&local_230);
    FUN_140208bae(local_130,local_240,local_23c,
                  L"Vertical angle between listener forward and sound location in degrees.");
    local_120 = 0;
    local_118 = DAT_14cb086f8;
    local_110 = 0;
    local_10c = 0;
    local_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98 = 3;
    local_94 = 0;
    local_88 = 0;
    uStack_80 = 0;
    FUN_144a5dc74(local_78);
    local_68 = 0;
    local_230 = local_220;
    local_228 = local_60;
    FUN_147d3036c(plVar3 + 4,&local_230);
    lVar4 = 0xe0;
    do {
      FUN_147d303d2((longlong)local_220 + lVar4);
      plVar5 = DAT_14cb08028;
      lVar4 = lVar4 + -0xe0;
    } while (lVar4 != -0xe0);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cb08020 = local_248;
      if (DAT_14cb08028 == (longlong *)0x0) {
        *param_1 = (longlong)local_248;
        param_1[1] = 0;
        goto LAB_147d2942a;
      }
      DAT_14cb08028 = (longlong *)0x0;
LAB_147d296f5:
      DAT_14cb08020 = local_248;
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
      if (plVar3 == (longlong *)0x0) goto LAB_147d2940c;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      DAT_14cb08020 = local_248;
      if (plVar3 == DAT_14cb08028) {
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      else {
        bVar6 = DAT_14cb08028 != (longlong *)0x0;
        plVar5 = DAT_14cb08028;
        DAT_14cb08028 = plVar3;
        if (bVar6) goto LAB_147d296f5;
      }
    }
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_147d2940c:
  plVar3 = DAT_14cb08028;
  *param_1 = (longlong)DAT_14cb08020;
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
LAB_147d2942a:
  if ((local_60[0] ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d297db FUN_147d297db body=1069 status=ok
// SIG undefined FUN_147d297db(void)

longlong * FUN_147d297db(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_268 [32];
  longlong *local_248;
  undefined1 local_240 [4];
  undefined1 local_23c [4];
  undefined1 local_238 [4];
  undefined1 local_234 [4];
  wchar_t *local_230;
  ulonglong *local_228;
  wchar_t local_220 [8];
  undefined1 local_210 [16];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined8 local_174;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined4 local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb08050) {
    FUN_144b3d300(&DAT_14cb08050);
    if (DAT_14cb08050 == -1) {
      DAT_14cb08040 = (longlong *)0x0;
      DAT_14cb08048 = (longlong *)0x0;
      atexit(FUN_1436ef3ba);
      _Init_thread_footer(&DAT_14cb08050);
    }
  }
  if (DAT_14cb08040 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar3[1] = (longlong)&DAT_100000001;
    *plVar3 = (longlong)&PTR_FUN_14aa99bd0;
    local_248 = plVar3 + 2;
    local_220[0] = L'\x01';
    local_220[1] = L'\0';
    local_220[2] = L'\0';
    local_220[3] = L'\0';
    FUN_1470452d6(local_248,DAT_14cb08038,local_220);
    FUN_144a5dc74(local_220);
    local_230 = L"AzimuthDescription";
    local_228._0_4_ = 0x12;
    FUN_1446e940c(local_234,&local_230);
    local_230 = L"SourceOrientation";
    local_228._0_4_ = 0x11;
    FUN_1446e940c(local_238,&local_230);
    FUN_140208bae(local_210,local_238,local_234,
                  L"Horizontal angle between emitter forward and listener location in degrees.");
    local_200 = 0;
    local_1f8 = DAT_14cb08700;
    local_1f0 = 0;
    local_1ec = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_180 = 0;
    local_178 = 3;
    local_174 = 0;
    local_168 = 0;
    uStack_160 = 0;
    FUN_144a5dc74(local_158);
    local_148 = 0;
    FUN_144a5dc74(local_140);
    local_230 = L"ElevationDescription";
    local_228._0_4_ = 0x14;
    FUN_1446e940c(local_23c,&local_230);
    local_230 = L"SourceOrientation";
    local_228 = (ulonglong *)CONCAT44(local_228._4_4_,0x11);
    FUN_1446e940c(local_240,&local_230);
    FUN_140208bae(local_130,local_240,local_23c,
                  L"Vertical angle between emitter forward and listener location in degrees.");
    local_120 = 0;
    local_118 = DAT_14cb08708;
    local_110 = 0;
    local_10c = 0;
    local_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98 = 3;
    local_94 = 0;
    local_88 = 0;
    uStack_80 = 0;
    FUN_144a5dc74(local_78);
    local_68 = 0;
    local_230 = local_220;
    local_228 = local_60;
    FUN_147d3036c(plVar3 + 4,&local_230);
    lVar4 = 0xe0;
    do {
      FUN_147d303d2((longlong)local_220 + lVar4);
      plVar5 = DAT_14cb08048;
      lVar4 = lVar4 + -0xe0;
    } while (lVar4 != -0xe0);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cb08040 = local_248;
      if (DAT_14cb08048 == (longlong *)0x0) {
        *param_1 = (longlong)local_248;
        param_1[1] = 0;
        goto LAB_147d29858;
      }
      DAT_14cb08048 = (longlong *)0x0;
LAB_147d29b23:
      DAT_14cb08040 = local_248;
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
      if (plVar3 == (longlong *)0x0) goto LAB_147d2983a;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      DAT_14cb08040 = local_248;
      if (plVar3 == DAT_14cb08048) {
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      else {
        bVar6 = DAT_14cb08048 != (longlong *)0x0;
        plVar5 = DAT_14cb08048;
        DAT_14cb08048 = plVar3;
        if (bVar6) goto LAB_147d29b23;
      }
    }
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_147d2983a:
  plVar3 = DAT_14cb08048;
  *param_1 = (longlong)DAT_14cb08040;
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
LAB_147d29858:
  if ((local_60[0] ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d29c09 FUN_147d29c09 body=1069 status=ok
// SIG undefined FUN_147d29c09(void)

longlong * FUN_147d29c09(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_268 [32];
  longlong *local_248;
  undefined1 local_240 [4];
  undefined1 local_23c [4];
  undefined1 local_238 [4];
  undefined1 local_234 [4];
  wchar_t *local_230;
  ulonglong *local_228;
  wchar_t local_220 [8];
  undefined1 local_210 [16];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined8 local_174;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined4 local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb08070) {
    FUN_144b3d300(&DAT_14cb08070);
    if (DAT_14cb08070 == -1) {
      DAT_14cb08060 = (longlong *)0x0;
      DAT_14cb08068 = (longlong *)0x0;
      atexit(FUN_1436ef3f5);
      _Init_thread_footer(&DAT_14cb08070);
    }
  }
  if (DAT_14cb08060 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar3[1] = (longlong)&DAT_100000001;
    *plVar3 = (longlong)&PTR_FUN_14aa99d40;
    local_248 = plVar3 + 2;
    local_220[0] = L'\x01';
    local_220[1] = L'\0';
    local_220[2] = L'\0';
    local_220[3] = L'\0';
    FUN_1470452d6(local_248,DAT_14cb08058,local_220);
    FUN_144a5dc74(local_220);
    local_230 = L"AzimuthDescription";
    local_228._0_4_ = 0x12;
    FUN_1446e940c(local_234,&local_230);
    local_230 = L"ListenerOrientation";
    local_228._0_4_ = 0x13;
    FUN_1446e940c(local_238,&local_230);
    FUN_140208bae(local_210,local_238,local_234,
                  L"Horizontal viewing angle of the current listener in world.");
    local_200 = 0;
    local_1f8 = DAT_14cb08710;
    local_1f0 = 0;
    local_1ec = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_180 = 0;
    local_178 = 3;
    local_174 = 0;
    local_168 = 0;
    uStack_160 = 0;
    FUN_144a5dc74(local_158);
    local_148 = 0;
    FUN_144a5dc74(local_140);
    local_230 = L"ElevationDescription";
    local_228._0_4_ = 0x14;
    FUN_1446e940c(local_23c,&local_230);
    local_230 = L"ListenerOrientation";
    local_228 = (ulonglong *)CONCAT44(local_228._4_4_,0x13);
    FUN_1446e940c(local_240,&local_230);
    FUN_140208bae(local_130,local_240,local_23c,
                  L"Vertical viewing angle of the current listener in world.");
    local_120 = 0;
    local_118 = DAT_14cb08718;
    local_110 = 0;
    local_10c = 0;
    local_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98 = 3;
    local_94 = 0;
    local_88 = 0;
    uStack_80 = 0;
    FUN_144a5dc74(local_78);
    local_68 = 0;
    local_230 = local_220;
    local_228 = local_60;
    FUN_147d3036c(plVar3 + 4,&local_230);
    lVar4 = 0xe0;
    do {
      FUN_147d303d2((longlong)local_220 + lVar4);
      plVar5 = DAT_14cb08068;
      lVar4 = lVar4 + -0xe0;
    } while (lVar4 != -0xe0);
    if (plVar3 == (longlong *)0x0) {
      DAT_14cb08060 = local_248;
      if (DAT_14cb08068 == (longlong *)0x0) {
        *param_1 = (longlong)local_248;
        param_1[1] = 0;
        goto LAB_147d29c86;
      }
      DAT_14cb08068 = (longlong *)0x0;
LAB_147d29f51:
      DAT_14cb08060 = local_248;
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
      if (plVar3 == (longlong *)0x0) goto LAB_147d29c68;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      DAT_14cb08060 = local_248;
      if (plVar3 == DAT_14cb08068) {
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      else {
        bVar6 = DAT_14cb08068 != (longlong *)0x0;
        plVar5 = DAT_14cb08068;
        DAT_14cb08068 = plVar3;
        if (bVar6) goto LAB_147d29f51;
      }
    }
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_147d29c68:
  plVar3 = DAT_14cb08068;
  *param_1 = (longlong)DAT_14cb08060;
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
LAB_147d29c86:
  if ((local_60[0] ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d2a03e FUN_147d2a03e body=38 status=ok
// SIG undefined FUN_147d2a03e(void)

undefined8 FUN_147d2a03e(undefined8 param_1,int param_2)

{
  FUN_140296a6e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2a09e FUN_147d2a09e body=31 status=ok
// SIG undefined FUN_147d2a09e(void)

longlong FUN_147d2a09e(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0xd8))();
  return param_1[(ulonglong)bVar1 + 9];
}



// FUNCTION 147d2a0cc FUN_147d2a0cc body=38 status=ok
// SIG undefined FUN_147d2a0cc(void)

undefined8 FUN_147d2a0cc(undefined8 param_1,int param_2)

{
  FUN_147d21bca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2a118 FUN_147d2a118 body=204 status=ok
// SIG undefined FUN_147d2a118(void)

void FUN_147d2a118(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14484255c(param_2,0x1a0);
  plVar1 = *(longlong **)(param_1 + 0x158);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,param_2);
  }
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x154) * 0x3c0);
  if (0 < *(int *)(param_1 + 0x150)) {
    lVar3 = 0x2a0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x148);
      FUN_140347a44(param_2,*(int *)(lVar2 + 0x4c + lVar3) * *(int *)(lVar2 + 0x48 + lVar3) +
                            (*(int *)(lVar2 + 8 + lVar3) * *(int *)(lVar2 + 4 + lVar3) +
                            *(int *)(lVar2 + lVar3)) * *(int *)(lVar2 + 0xc + lVar3));
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x3c0;
    } while (lVar4 < *(int *)(param_1 + 0x150));
  }
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x174) * 0x60);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x184) << 2);
  return;
}



// FUNCTION 147d2a1e4 FUN_147d2a1e4 body=38 status=ok
// SIG undefined FUN_147d2a1e4(void)

undefined8 FUN_147d2a1e4(undefined8 param_1,int param_2)

{
  FUN_147d2289e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2a20a FUN_147d2a20a body=117 status=ok
// SIG undefined FUN_147d2a20a(void)

void FUN_147d2a20a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_14484255c(param_2,0x160);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x9c) << 6);
  lVar1 = 0;
  if (1 < (ulonglong)(longlong)*(int *)(param_1 + 0xf0)) {
    lVar1 = (longlong)*(int *)(param_1 + 0xf0) * 4;
  }
  FUN_14484255c(param_2,lVar1 + (ulonglong)(*(int *)(param_1 + 0xd4) + 0x1fU >> 5) * 4 +
                                (longlong)*(int *)(param_1 + 0xb4) * 0x18);
  return;
}



// FUNCTION 147d2a280 FUN_147d2a280 body=136 status=ok
// SIG undefined FUN_147d2a280(void)

void FUN_147d2a280(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14484255c(param_2,0x250);
  plVar1 = *(longlong **)(param_1 + 0x240);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,param_2);
  }
  FUN_140347a44(param_2,(longlong)*(int *)(param_1 + 0x23c) * 0xa0);
  if (0 < *(int *)(param_1 + 0x238)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      FUN_147d3067c(*(longlong *)(param_1 + 0x230) + lVar2,param_2);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0xa0;
    } while (lVar3 < *(int *)(param_1 + 0x238));
  }
  return;
}



// FUNCTION 147d2a342 FUN_147d2a342 body=38 status=ok
// SIG undefined FUN_147d2a342(void)

undefined8 FUN_147d2a342(undefined8 param_1,int param_2)

{
  FUN_147d24294();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2a368 FUN_147d2a368 body=38 status=ok
// SIG undefined FUN_147d2a368(void)

undefined8 FUN_147d2a368(undefined8 param_1,int param_2)

{
  FUN_147d24306();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2a3b6 FUN_147d2a3b6 body=38 status=ok
// SIG undefined FUN_147d2a3b6(void)

undefined8 FUN_147d2a3b6(undefined8 param_1,int param_2)

{
  FUN_147d24dba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2a3ec FUN_147d2a3ec body=90 status=ok
// SIG undefined FUN_147d2a3ec(void)

void FUN_147d2a3ec(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_14484255c(param_2,0x158);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x154) * 0x2f0);
  if (0 < *(int *)(param_1 + 0x150)) {
    iVar1 = 0;
    do {
      FUN_14484255c(param_2,0x2f0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x150));
  }
  return;
}



// FUNCTION 147d2a446 FUN_147d2a446 body=141 status=ok
// SIG undefined FUN_147d2a446(void)

undefined * FUN_147d2a446(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x36,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetRefSkeleton");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb08538) {
    FUN_144b3d300(&DAT_14cb08538);
    if (DAT_14cb08538 == -1) {
      FUN_1433f0966(&DAT_14cb08420,1);
      atexit((_func_5014 *)&LAB_1436f86cd);
      _Init_thread_footer(&DAT_14cb08538);
    }
  }
  return &DAT_14cb08420;
}



// FUNCTION 147d2a4d4 FUN_147d2a4d4 body=141 status=ok
// SIG undefined FUN_147d2a4d4(void)

undefined * FUN_147d2a4d4(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x34,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetRefSkeleton");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb08658) {
    FUN_144b3d300(&DAT_14cb08658);
    if (DAT_14cb08658 == -1) {
      FUN_1433f0966(&DAT_14cb08540,1);
      atexit((_func_5014 *)&LAB_1436f86d9);
      _Init_thread_footer(&DAT_14cb08658);
    }
  }
  return &DAT_14cb08540;
}



// FUNCTION 147d2a562 FUN_147d2a562 body=42 status=ok
// SIG undefined FUN_147d2a562(void)

undefined8 FUN_147d2a562(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x3c,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetLODInfo");
  return 0;
}



// FUNCTION 147d2a58c FUN_147d2a58c body=42 status=ok
// SIG undefined FUN_147d2a58c(void)

undefined8 FUN_147d2a58c(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x3a,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetLODInfo");
  return 0;
}



// FUNCTION 147d2a5b6 FUN_147d2a5b6 body=42 status=ok
// SIG undefined FUN_147d2a5b6(void)

undefined8 FUN_147d2a5b6(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x46,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetShadowPhysicsAsset");
  return 0;
}



// FUNCTION 147d2a5e0 FUN_147d2a5e0 body=70 status=ok
// SIG undefined FUN_147d2a5e0(void)

undefined8 * FUN_147d2a5e0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x4e,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetComposedRefPoseMatrix");
  puVar2 = &DAT_14c846400;
  puVar3 = param_2;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 147d2a626 FUN_147d2a626 body=70 status=ok
// SIG undefined FUN_147d2a626(void)

undefined8 * FUN_147d2a626(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x4a,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetComposedRefPoseMatrix");
  puVar2 = &DAT_14c846400;
  puVar3 = param_2;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 147d2a66c FUN_147d2a66c body=42 status=ok
// SIG undefined FUN_147d2a66c(void)

undefined8 FUN_147d2a66c(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x58,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetUVChannelData");
  return 0;
}



// FUNCTION 147d2a696 FUN_147d2a696 body=42 status=ok
// SIG undefined FUN_147d2a696(void)

undefined8 FUN_147d2a696(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x5c,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetSupportRayTracing");
  return 0;
}



// FUNCTION 147d2a6c0 FUN_147d2a6c0 body=42 status=ok
// SIG undefined FUN_147d2a6c0(void)

undefined8 FUN_147d2a6c0(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x60,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetRayTracingMinLOD");
  return 0;
}



// FUNCTION 147d2a6ea FUN_147d2a6ea body=137 status=ok
// SIG undefined FUN_147d2a6ea(void)

undefined8 * FUN_147d2a6ea(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x66,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetRefBasesInvMatrix");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb08670) {
    FUN_144b3d300(&DAT_14cb08670);
    if (DAT_14cb08670 == -1) {
      DAT_14cb08660 = 0;
      uRam000000014cb08668 = 0;
      atexit((_func_5014 *)&LAB_1436f86e5);
      _Init_thread_footer(&DAT_14cb08670);
    }
  }
  return &DAT_14cb08660;
}



// FUNCTION 147d2a774 FUN_147d2a774 body=137 status=ok
// SIG undefined FUN_147d2a774(void)

undefined8 * FUN_147d2a774(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",100,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetRefBasesInvMatrix");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb08688) {
    FUN_144b3d300(&DAT_14cb08688);
    if (DAT_14cb08688 == -1) {
      DAT_14cb08678 = 0;
      uRam000000014cb08680 = 0;
      atexit((_func_5014 *)&LAB_1436f86f6);
      _Init_thread_footer(&DAT_14cb08688);
    }
  }
  return &DAT_14cb08678;
}



// FUNCTION 147d2a7fe FUN_147d2a7fe body=52 status=ok
// SIG undefined FUN_147d2a7fe(void)

undefined8 * FUN_147d2a7fe(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x6e,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetLODInfoArray");
  FUN_147d25218();
  return &DAT_14cb07e70;
}



// FUNCTION 147d2a832 FUN_147d2a832 body=52 status=ok
// SIG undefined FUN_147d2a832(void)

undefined8 * FUN_147d2a832(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x6b,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetLODInfoArray");
  FUN_147d25218();
  return &DAT_14cb07e70;
}



// FUNCTION 147d2a866 FUN_147d2a866 body=42 status=ok
// SIG undefined FUN_147d2a866(void)

undefined8 FUN_147d2a866(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x72,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetResourceForRendering");
  return 0;
}



// FUNCTION 147d2a890 FUN_147d2a890 body=42 status=ok
// SIG undefined FUN_147d2a890(void)

undefined8 FUN_147d2a890(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x75,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetDefaultMinLod");
  return 0;
}



// FUNCTION 147d2a8ba FUN_147d2a8ba body=125 status=ok
// SIG undefined FUN_147d2a8ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147d2a8ba(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x78,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetMinLod");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb08690) {
    FUN_144b3d300(&DAT_14cb08690);
    if (DAT_14cb08690 == -1) {
      _DAT_14cb0868c = 0;
      _Init_thread_footer(&DAT_14cb08690);
    }
  }
  return &DAT_14cb0868c;
}



// FUNCTION 147d2a93c FUN_147d2a93c body=42 status=ok
// SIG undefined FUN_147d2a93c(void)

undefined8 FUN_147d2a93c(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x7e,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetPhysicsAsset");
  return 0;
}



// FUNCTION 147d2a966 FUN_147d2a966 body=52 status=ok
// SIG undefined FUN_147d2a966(void)

undefined8 * FUN_147d2a966(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x83,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetMaterials");
  FUN_147d2527e();
  return &DAT_14cb07e88;
}



// FUNCTION 147d2a99a FUN_147d2a99a body=52 status=ok
// SIG undefined FUN_147d2a99a(void)

undefined8 * FUN_147d2a99a(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x81,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetMaterials");
  FUN_147d2527e();
  return &DAT_14cb07e88;
}



// FUNCTION 147d2a9ce FUN_147d2a9ce body=42 status=ok
// SIG undefined FUN_147d2a9ce(void)

undefined8 FUN_147d2a9ce(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x86,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetLODNum");
  return 0;
}



// FUNCTION 147d2a9f8 FUN_147d2a9f8 body=42 status=ok
// SIG undefined FUN_147d2a9f8(void)

undefined8 FUN_147d2a9f8(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x89,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::IsMaterialUsed");
  return 0;
}



// FUNCTION 147d2aa22 FUN_147d2aa22 body=70 status=ok
// SIG undefined FUN_147d2aa22(void)

undefined8 * FUN_147d2aa22(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x8c,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetBounds");
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  return param_2;
}



// FUNCTION 147d2aa68 FUN_147d2aa68 body=214 status=ok
// SIG undefined FUN_147d2aa68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147d2aa68(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x93,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetActiveSocketList");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb086a8) {
    FUN_144b3d300(&DAT_14cb086a8);
    if (DAT_14cb086a8 == -1) {
      DAT_14cb08698 = (void *)0x0;
      _DAT_14cb086a0 = 0;
      atexit((_func_5014 *)&LAB_1436f8707);
      _Init_thread_footer(&DAT_14cb086a8);
    }
  }
  *param_2 = 0;
  uVar1 = _DAT_14cb086a0;
  _Src = DAT_14cb08698;
  lVar2 = (longlong)DAT_14cb086a0;
  *(int *)(param_2 + 1) = DAT_14cb086a0;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_14043e75a(param_2,uVar1 & 0xffffffff,0);
    memcpy((void *)*param_2,_Src,lVar2 << 3);
  }
  return param_2;
}



// FUNCTION 147d2ab3e FUN_147d2ab3e body=42 status=ok
// SIG undefined FUN_147d2ab3e(void)

undefined8 FUN_147d2ab3e(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x9b,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::FindSocket");
  return 0;
}



// FUNCTION 147d2ab68 FUN_147d2ab68 body=42 status=ok
// SIG undefined FUN_147d2ab68(void)

undefined8 FUN_147d2ab68(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0xa5,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::FindSocketInfo");
  return 0;
}



// FUNCTION 147d2ab92 FUN_147d2ab92 body=42 status=ok
// SIG undefined FUN_147d2ab92(void)

undefined8 FUN_147d2ab92(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0xaa,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetSkeleton");
  return 0;
}


