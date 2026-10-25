// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1481c1b64 FUN_1481c1b64 body=89 status=ok
// SIG undefined FUN_1481c1b64(void)

undefined8 * FUN_1481c1b64(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481c1f58(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481c1bbe FUN_1481c1bbe body=79 status=ok
// SIG undefined FUN_1481c1bbe(void)

undefined8 * FUN_1481c1bbe(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481c20ba(param_1,iVar1);
      FUN_1481c211c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481c1c0e FUN_1481c1c0e body=79 status=ok
// SIG undefined FUN_1481c1c0e(void)

undefined8 * FUN_1481c1c0e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481c216e(param_1,iVar1);
      FUN_1481c21d0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481c1c5e FUN_1481c1c5e body=89 status=ok
// SIG undefined FUN_1481c1c5e(void)

undefined8 * FUN_1481c1c5e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481c2222(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481c1cb8 FUN_1481c1cb8 body=75 status=ok
// SIG undefined FUN_1481c1cb8(void)

longlong FUN_1481c1cb8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar1 = param_1;
    }
    FUN_14079416b(lVar1,*(undefined4 *)(param_1 + 0x18));
    lVar1 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar1 = param_2;
    }
    FUN_1481c2296(param_1,lVar1,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  }
  return param_1;
}



// FUNCTION 1481c1d04 FUN_1481c1d04 body=98 status=ok
// SIG undefined FUN_1481c1d04(void)

longlong FUN_1481c1d04(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_147a8b6e6();
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar4;
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



// FUNCTION 1481c1d66 FUN_1481c1d66 body=111 status=ok
// SIG undefined FUN_1481c1d66(void)

void FUN_1481c1d66(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481c1dd5 FUN_1481c1dd5 body=76 status=ok
// SIG undefined FUN_1481c1dd5(void)

void FUN_1481c1dd5(longlong param_1,longlong param_2,int param_3)

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
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1481c1e22(param_1,param_2);
    uVar1 = *(undefined4 *)(param_2 + 0x2c);
    uVar2 = *(undefined4 *)(param_2 + 0x30);
    uVar3 = *(undefined4 *)(param_2 + 0x34);
    uVar4 = *(undefined4 *)(param_2 + 0x38);
    uVar5 = *(undefined4 *)(param_2 + 0x3c);
    uVar6 = *(undefined4 *)(param_2 + 0x40);
    uVar7 = *(undefined4 *)(param_2 + 0x44);
    uVar8 = *(undefined4 *)(param_2 + 0x45);
    uVar9 = *(undefined4 *)(param_2 + 0x49);
    uVar10 = *(undefined4 *)(param_2 + 0x4d);
    uVar11 = *(undefined4 *)(param_2 + 0x51);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    *(undefined4 *)(param_1 + 0x38) = uVar4;
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
    *(undefined4 *)(param_1 + 0x40) = uVar6;
    *(undefined4 *)(param_1 + 0x44) = uVar7;
    *(undefined4 *)(param_1 + 0x45) = uVar8;
    *(undefined4 *)(param_1 + 0x49) = uVar9;
    *(undefined4 *)(param_1 + 0x4d) = uVar10;
    *(undefined4 *)(param_1 + 0x51) = uVar11;
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 1481c1e22 FUN_1481c1e22 body=194 status=ok
// SIG undefined FUN_1481c1e22(void)

longlong * FUN_1481c1e22(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = 0;
  iVar1 = (int)param_2[2];
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1481c11ac(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 0x18);
  }
  param_1[3] = 0;
  iVar1 = (int)param_2[4];
  lVar2 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1481c1220(param_1 + 3,iVar1,0);
    FUN_1481c128f(param_1[3],lVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1481c1ee4 FUN_1481c1ee4 body=115 status=ok
// SIG undefined FUN_1481c1ee4(void)

void FUN_1481c1ee4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1481c1f58 FUN_1481c1f58 body=115 status=ok
// SIG undefined FUN_1481c1f58(void)

void FUN_1481c1f58(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481c1fcc FUN_1481c1fcc body=122 status=ok
// SIG undefined FUN_1481c1fcc(void)

longlong FUN_1481c1fcc(longlong param_1,longlong param_2)

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
    FUN_1481c2046(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1481c2046 FUN_1481c2046 body=115 status=ok
// SIG undefined FUN_1481c2046(void)

undefined8 * FUN_1481c2046(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1404dc2fe(param_1,uVar1);
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



// FUNCTION 1481c20ba FUN_1481c20ba body=98 status=ok
// SIG undefined FUN_1481c20ba(void)

void FUN_1481c20ba(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1481c211c FUN_1481c211c body=82 status=ok
// SIG undefined FUN_1481c211c(void)

void FUN_1481c211c(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1481c216e FUN_1481c216e body=98 status=ok
// SIG undefined FUN_1481c216e(void)

void FUN_1481c216e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1481c21d0 FUN_1481c21d0 body=82 status=ok
// SIG undefined FUN_1481c21d0(void)

void FUN_1481c21d0(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1481c2222 FUN_1481c2222 body=115 status=ok
// SIG undefined FUN_1481c2222(void)

void FUN_1481c2222(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481c2296 FUN_1481c2296 body=86 status=ok
// SIG undefined FUN_1481c2296(void)

void FUN_1481c2296(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x18) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
    return;
  }
  FUN_1481c22ec(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_1481c233a(lVar1,param_2,param_3);
  return;
}



// FUNCTION 1481c22ec FUN_1481c22ec body=78 status=ok
// SIG undefined FUN_1481c22ec(void)

void FUN_1481c22ec(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
    uVar1 = (uint)(uVar2 >> 4);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_1407942ee(param_1,0,uVar3);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x1c) = param_3;
  return;
}



// FUNCTION 1481c233a FUN_1481c233a body=45 status=ok
// SIG undefined FUN_1481c233a(void)

void FUN_1481c233a(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1481c2382 FUN_1481c2382 body=29 status=ok
// SIG undefined FUN_1481c2382(void)

bool FUN_1481c2382(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1481c23a0 FUN_1481c23a0 body=26 status=ok
// SIG undefined FUN_1481c23a0(void)

bool FUN_1481c23a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1481c23ba FUN_1481c23ba body=93 status=ok
// SIG undefined FUN_1481c23ba(void)

void FUN_1481c23ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2c60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481c2418 FUN_1481c2418 body=93 status=ok
// SIG undefined FUN_1481c2418(void)

void FUN_1481c2418(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2c60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481c2476 FUN_1481c2476 body=126 status=ok
// SIG undefined FUN_1481c2476(void)

void FUN_1481c2476(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adf2c60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481c24e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481c24f4 FUN_1481c24f4 body=152 status=ok
// SIG undefined FUN_1481c24f4(void)

bool FUN_1481c24f4(longlong param_1,undefined8 param_2)

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



// FUNCTION 1481c258e FUN_1481c258e body=138 status=ok
// SIG undefined FUN_1481c258e(void)

code * FUN_1481c258e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145db0b60;
}



// FUNCTION 1481c26f4 FUN_1481c26f4 body=93 status=ok
// SIG undefined FUN_1481c26f4(void)

void FUN_1481c26f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2d30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481c2752 FUN_1481c2752 body=93 status=ok
// SIG undefined FUN_1481c2752(void)

void FUN_1481c2752(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2d30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481c27b0 FUN_1481c27b0 body=126 status=ok
// SIG undefined FUN_1481c27b0(void)

void FUN_1481c27b0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adf2d30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481c281f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481c282e FUN_1481c282e body=20 status=ok
// SIG undefined FUN_1481c282e(void)

undefined1 FUN_1481c282e(longlong param_1)

{
  FUN_144a056ca(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481c2842 FUN_1481c2842 body=29 status=ok
// SIG undefined FUN_1481c2842(void)

undefined8 FUN_1481c2842(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481c2874 FUN_1481c2874 body=93 status=ok
// SIG undefined FUN_1481c2874(void)

void FUN_1481c2874(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2da0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481c28d2 FUN_1481c28d2 body=93 status=ok
// SIG undefined FUN_1481c28d2(void)

void FUN_1481c28d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2da0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481c2930 FUN_1481c2930 body=126 status=ok
// SIG undefined FUN_1481c2930(void)

void FUN_1481c2930(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adf2da0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481c299f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481c29b8 FUN_1481c29b8 body=20 status=ok
// SIG undefined FUN_1481c29b8(void)

undefined1 FUN_1481c29b8(longlong param_1)

{
  FUN_1481c29cc(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481c29cc FUN_1481c29cc body=307 status=ok
// SIG undefined FUN_1481c29cc(void)

void FUN_1481c29cc(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  int local_80;
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  undefined8 uStack_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_144a98dce();
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_88,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar4 = 0;
    do {
      uVar6 = *local_68;
      local_68 = local_68 + local_58;
      uVar5 = FUN_1448c9f94(param_1 + 0xf0,uVar6,0);
      uVar6 = FUN_1448c9f94(param_1 + 0x70,uVar6);
      puVar1 = local_78 + local_70;
      *local_78 = uVar6;
      puVar2 = local_88 + local_80;
      *local_88 = uVar5;
      iVar4 = iVar4 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      local_88 = puVar2;
      local_78 = puVar1;
    } while (iVar4 < *piVar3);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c2b00 FUN_1481c2b00 body=202 status=ok
// SIG undefined FUN_1481c2b00(void)

void FUN_1481c2b00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adf2e10;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c2bcc FUN_1481c2bcc body=202 status=ok
// SIG undefined FUN_1481c2bcc(void)

void FUN_1481c2bcc(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adf2e80;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c2c98 FUN_1481c2c98 body=29 status=ok
// SIG undefined FUN_1481c2c98(void)

undefined8 FUN_1481c2c98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481c2cca FUN_1481c2cca body=93 status=ok
// SIG undefined FUN_1481c2cca(void)

void FUN_1481c2cca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2e10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481c2d28 FUN_1481c2d28 body=93 status=ok
// SIG undefined FUN_1481c2d28(void)

void FUN_1481c2d28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2e10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481c2d86 FUN_1481c2d86 body=126 status=ok
// SIG undefined FUN_1481c2d86(void)

void FUN_1481c2d86(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adf2e10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481c2df5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481c2e0e FUN_1481c2e0e body=20 status=ok
// SIG undefined FUN_1481c2e0e(void)

undefined1 FUN_1481c2e0e(longlong param_1)

{
  FUN_1481c2e22(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481c2e22 FUN_1481c2e22 body=641 status=ok
// SIG undefined FUN_1481c2e22(void)

void FUN_1481c2e22(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_f8 [32];
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  float *local_98;
  undefined8 uStack_90;
  int local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = (float *)0x0;
  uStack_90 = 0;
  local_88 = 0;
  FUN_144a98dce();
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  piVar14 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar14 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar14) {
    iVar13 = 0;
    do {
      pfVar1 = local_98 + local_88;
      fVar6 = *(float *)(param_1 + 0x54);
      fVar16 = (*local_98 - *(float *)(param_1 + 0x48)) * *(float *)(param_1 + 0x50) * fVar6;
      if (fVar6 <= fVar16) {
        fVar16 = fVar6;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      auVar18 = roundps(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16),3);
      fVar17 = auVar18._0_4_;
      fVar16 = fVar16 - fVar17;
      lVar12 = *(longlong *)(param_1 + 0x38);
      lVar15 = (longlong)(int)(fVar17 * 4.0);
      fVar7 = *(float *)(lVar12 + 0xc + lVar15 * 4);
      fVar8 = *(float *)(lVar12 + 8 + lVar15 * 4);
      fVar9 = *(float *)(lVar12 + lVar15 * 4);
      fVar10 = *(float *)(lVar12 + 4 + lVar15 * 4);
      lVar15 = (longlong)
               (int)((float)(~-(uint)(fVar17 < fVar6) & (uint)fVar17 |
                            (uint)(fVar17 + 1.0) & -(uint)(fVar17 < fVar6)) * 4.0);
      fVar6 = *(float *)(lVar12 + 0xc + lVar15 * 4);
      fVar17 = *(float *)(lVar12 + 8 + lVar15 * 4);
      fVar11 = *(float *)(lVar12 + 4 + lVar15 * 4);
      pfVar2 = local_a8 + local_a0;
      *local_a8 = (*(float *)(lVar12 + lVar15 * 4) - fVar9) * fVar16 + fVar9;
      pfVar3 = local_b8 + local_b0;
      *local_b8 = (fVar11 - fVar10) * fVar16 + fVar10;
      pfVar4 = local_c8 + local_c0;
      *local_c8 = (fVar17 - fVar8) * fVar16 + fVar8;
      pfVar5 = local_d8 + local_d0;
      *local_d8 = (fVar6 - fVar7) * fVar16 + fVar7;
      iVar13 = iVar13 + 1;
      piVar14 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar14 = (int *)(param_2 + 0x3c);
      }
      local_d8 = pfVar5;
      local_c8 = pfVar4;
      local_b8 = pfVar3;
      local_a8 = pfVar2;
      local_98 = pfVar1;
    } while (iVar13 < *piVar14);
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c30a4 FUN_1481c30a4 body=29 status=ok
// SIG undefined FUN_1481c30a4(void)

undefined8 FUN_1481c30a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481c30d6 FUN_1481c30d6 body=93 status=ok
// SIG undefined FUN_1481c30d6(void)

void FUN_1481c30d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2e80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481c3134 FUN_1481c3134 body=93 status=ok
// SIG undefined FUN_1481c3134(void)

void FUN_1481c3134(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2e80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481c3192 FUN_1481c3192 body=126 status=ok
// SIG undefined FUN_1481c3192(void)

void FUN_1481c3192(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adf2e80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481c3201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481c321a FUN_1481c321a body=20 status=ok
// SIG undefined FUN_1481c321a(void)

undefined1 FUN_1481c321a(longlong param_1)

{
  FUN_1481c322e(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481c322e FUN_1481c322e body=491 status=ok
// SIG undefined FUN_1481c322e(void)

void FUN_1481c322e(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  undefined8 uStack_90;
  int local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  local_88 = 0;
  FUN_144a98dce();
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar6 = 0;
    do {
      uVar10 = *local_98;
      local_98 = local_98 + local_88;
      uVar7 = FUN_1448c9f94(param_1 + 0x1f0,uVar10,0);
      uVar8 = FUN_1448c9f94(param_1 + 0x170,uVar10);
      uVar9 = FUN_1448c9f94(param_1 + 0xf0,uVar10);
      uVar10 = FUN_1448c9f94(param_1 + 0x70,uVar10);
      puVar1 = local_a8 + local_a0;
      *local_a8 = uVar10;
      puVar2 = local_b8 + local_b0;
      *local_b8 = uVar9;
      puVar3 = local_c8 + local_c0;
      *local_c8 = uVar8;
      puVar4 = local_d8 + local_d0;
      *local_d8 = uVar7;
      iVar6 = iVar6 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_d8 = puVar4;
      local_c8 = puVar3;
      local_b8 = puVar2;
      local_a8 = puVar1;
    } while (iVar6 < *piVar5);
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c34f6 FUN_1481c34f6 body=93 status=ok
// SIG undefined FUN_1481c34f6(void)

void FUN_1481c34f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2ef0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481c3554 FUN_1481c3554 body=93 status=ok
// SIG undefined FUN_1481c3554(void)

void FUN_1481c3554(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2ef0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481c35b2 FUN_1481c35b2 body=126 status=ok
// SIG undefined FUN_1481c35b2(void)

void FUN_1481c35b2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adf2ef0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481c3621. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481c3630 FUN_1481c3630 body=20 status=ok
// SIG undefined FUN_1481c3630(void)

undefined1 FUN_1481c3630(longlong param_1)

{
  FUN_1404de958(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481c3644 FUN_1481c3644 body=29 status=ok
// SIG undefined FUN_1481c3644(void)

undefined8 FUN_1481c3644(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481c3676 FUN_1481c3676 body=93 status=ok
// SIG undefined FUN_1481c3676(void)

void FUN_1481c3676(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2f60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481c36d4 FUN_1481c36d4 body=93 status=ok
// SIG undefined FUN_1481c36d4(void)

void FUN_1481c36d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2f60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481c3732 FUN_1481c3732 body=126 status=ok
// SIG undefined FUN_1481c3732(void)

void FUN_1481c3732(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adf2f60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481c37a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481c37ba FUN_1481c37ba body=20 status=ok
// SIG undefined FUN_1481c37ba(void)

undefined1 FUN_1481c37ba(longlong param_1)

{
  FUN_1481c37ce(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481c37ce FUN_1481c37ce body=401 status=ok
// SIG undefined FUN_1481c37ce(void)

void FUN_1481c37ce(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  FUN_144a98dce();
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    iVar5 = 0;
    do {
      uVar8 = *local_88;
      local_88 = local_88 + local_78;
      uVar6 = FUN_1448c9f94(param_1 + 0x170,uVar8,0);
      uVar7 = FUN_1448c9f94(param_1 + 0xf0,uVar8);
      uVar8 = FUN_1448c9f94(param_1 + 0x70,uVar8);
      puVar1 = local_98 + local_90;
      *local_98 = uVar8;
      puVar2 = local_a8 + local_a0;
      *local_a8 = uVar7;
      puVar3 = local_b8 + local_b0;
      *local_b8 = uVar6;
      iVar5 = iVar5 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
      local_b8 = puVar3;
      local_a8 = puVar2;
      local_98 = puVar1;
    } while (iVar5 < *piVar4);
  }
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c3960 FUN_1481c3960 body=29 status=ok
// SIG undefined FUN_1481c3960(void)

undefined8 FUN_1481c3960(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481c3998 FUN_1481c3998 body=29 status=ok
// SIG undefined FUN_1481c3998(void)

bool FUN_1481c3998(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1481c39b6 FUN_1481c39b6 body=26 status=ok
// SIG undefined FUN_1481c39b6(void)

bool FUN_1481c39b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1481c39d0 FUN_1481c39d0 body=24 status=ok
// SIG undefined FUN_1481c39d0(void)

bool FUN_1481c39d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1481c39e8 FUN_1481c39e8 body=93 status=ok
// SIG undefined FUN_1481c39e8(void)

void FUN_1481c39e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2fd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481c3a46 FUN_1481c3a46 body=93 status=ok
// SIG undefined FUN_1481c3a46(void)

void FUN_1481c3a46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf2fd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481c3aa4 FUN_1481c3aa4 body=126 status=ok
// SIG undefined FUN_1481c3aa4(void)

void FUN_1481c3aa4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adf2fd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481c3b13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481c3b22 FUN_1481c3b22 body=40 status=ok
// SIG undefined FUN_1481c3b22(void)

void FUN_1481c3b22(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001481c3b47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1481c3b4a FUN_1481c3b4a body=152 status=ok
// SIG undefined FUN_1481c3b4a(void)

bool FUN_1481c3b4a(longlong param_1,undefined8 param_2)

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



// FUNCTION 1481c3be4 FUN_1481c3be4 body=138 status=ok
// SIG undefined FUN_1481c3be4(void)

code * FUN_1481c3be4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxBounds";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481c3c6e;
}



// FUNCTION 1481c3c6e FUN_1481c3c6e body=138 status=ok
// SIG undefined FUN_1481c3c6e(void)

code * FUN_1481c3c6e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MinBounds";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464748ba;
}



// FUNCTION 1481c3cf8 FUN_1481c3cf8 body=38 status=ok
// SIG undefined FUN_1481c3cf8(void)

undefined8 FUN_1481c3cf8(undefined8 param_1,int param_2)

{
  FUN_14647424c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481c3d52 FUN_1481c3d52 body=38 status=ok
// SIG undefined FUN_1481c3d52(void)

undefined8 FUN_1481c3d52(undefined8 param_1,int param_2)

{
  FUN_146474294();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481c3dac FUN_1481c3dac body=306 status=ok
// SIG undefined FUN_1481c3dac(void)

undefined4 * FUN_1481c3dac(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1481c3ee0(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_1481c3fc6(param_1,uVar9,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1481c40b8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c3ee0 FUN_1481c3ee0 body=230 status=ok
// SIG undefined FUN_1481c3ee0(void)

int * FUN_1481c3ee0(longlong *param_1,int *param_2)

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



// FUNCTION 1481c3fc6 FUN_1481c3fc6 body=128 status=ok
// SIG undefined FUN_1481c3fc6(void)

undefined8 FUN_1481c3fc6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1481c4046((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481c4046 FUN_1481c4046 body=114 status=ok
// SIG undefined FUN_1481c4046(void)

void FUN_1481c4046(longlong *param_1,int param_2)

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



// FUNCTION 1481c40b8 FUN_1481c40b8 body=447 status=ok
// SIG undefined FUN_1481c40b8(void)

void FUN_1481c40b8(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 1481c4278 FUN_1481c4278 body=300 status=ok
// SIG undefined FUN_1481c4278(void)

undefined4 * FUN_1481c4278(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1481c43a6(param_1,local_48);
  FUN_1481c4536(param_3,local_40);
  *(undefined4 *)(local_40 + 9) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = (int)((ulonglong)*local_40 >> 0x20) * 0x17 + (int)*local_40;
  cVar2 = FUN_1481c4494(param_1,uVar7,local_40,&local_4c);
  uVar1 = local_4c;
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
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x4c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 9) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1481c4652(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c43a6 FUN_1481c43a6 body=238 status=ok
// SIG undefined FUN_1481c43a6(void)

int * FUN_1481c43a6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406fba42(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 1481c4494 FUN_1481c4494 body=162 status=ok
// SIG undefined FUN_1481c4494(void)

undefined8 FUN_1481c4494(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x50);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x50) == *param_3) {
          FUN_1481bc766((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x48);
          FUN_1481c45d8(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x48);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481c4536 FUN_1481c4536 body=161 status=ok
// SIG undefined FUN_1481c4536(void)

undefined8 * FUN_1481c4536(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = DAT_14c846330;
  uStack_30 = (ulonglong)DAT_14c846338;
  *param_2 = *(undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = DAT_14c846330;
  *(uint *)(param_2 + 6) = DAT_14c846338;
  param_2[7] = 0;
  param_2[8] = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1481bc766(&local_58);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c45d8 FUN_1481c45d8 body=122 status=ok
// SIG undefined FUN_1481c45d8(void)

void FUN_1481c45d8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 1481c4652 FUN_1481c4652 body=451 status=ok
// SIG undefined FUN_1481c4652(void)

void FUN_1481c4652(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x50;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x4c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar7) =
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



// FUNCTION 1481c4816 FUN_1481c4816 body=102 status=ok
// SIG undefined FUN_1481c4816(void)

void FUN_1481c4816(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1481c487c(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1481c487c FUN_1481c487c body=87 status=ok
// SIG undefined FUN_1481c487c(void)

void FUN_1481c487c(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1481c4046();
  return;
}



// FUNCTION 1481c48d4 FUN_1481c48d4 body=106 status=ok
// SIG undefined FUN_1481c48d4(void)

void FUN_1481c48d4(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x50) == param_2) {
          FUN_1481c493e(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x50 + *param_1 + 0x48);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1481c493e FUN_1481c493e body=128 status=ok
// SIG undefined FUN_1481c493e(void)

void FUN_1481c493e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x50;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x4c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x48 + lVar6 * 0x50);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x50 + 0x48);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x48);
  FUN_1481bc766(*param_1 + lVar2 + 8);
  FUN_1481c45d8(param_1,param_2);
  return;
}



// FUNCTION 1481c49be FUN_1481c49be body=193 status=ok
// SIG undefined FUN_1481c49be(void)

void FUN_1481c49be(longlong *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 2) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = lVar4;
    iVar5 = (int)param_1[2] * *(int *)(param_2 + 0x44);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar3 = uVar1 & 0x7fff;
    *(uint *)(param_1 + 2) = (uint)(uVar1 >> 0xf);
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar4 = (ulonglong)(uVar3 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar4 + 0x20);
      lVar6 = 0;
      if (iVar5 <= (int)uVar3) {
        do {
          uVar3 = uVar3 - iVar5;
          iVar5 = (*(int **)(lVar4 + 0x20))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (iVar5 <= (int)uVar3);
      }
      lVar4 = (longlong)(int)uVar3 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar6 * 8);
    }
    *param_1 = lVar4;
    iVar5 = (uint)(uVar1 >> 0xf) * *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c);
  }
  *param_1 = iVar5 + lVar4;
  param_1[1] = iVar5 + lVar4;
  return;
}



// FUNCTION 1481c4a80 FUN_1481c4a80 body=334 status=ok
// SIG undefined FUN_1481c4a80(void)

undefined4 *
FUN_1481c4a80(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140b412f4(param_1,local_50);
  iVar6 = 0;
  FUN_1481c4bd0(local_48,0,*param_3,param_3[1]);
  *(undefined4 *)(local_48 + 6) = 0xffffffff;
  local_54 = local_50[0];
  if (*(int *)(local_48 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*local_48;
    iVar6 = *(int *)(local_48 + 1) + -1;
  }
  uVar2 = FUN_144a49b4a(iVar6,puVar5);
  local_68 = param_4;
  cVar1 = FUN_140b4124e(param_1,uVar2,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0x34) = uVar2;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 6) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140b414cc(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1481c4bd0 FUN_1481c4bd0 body=108 status=ok
// SIG undefined FUN_1481c4bd0(void)

undefined8 *
FUN_1481c4bd0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1407adc08(param_1 + 2,param_4);
  return param_1;
}



// FUNCTION 1481c4c3c FUN_1481c4c3c body=151 status=ok
// SIG undefined FUN_1481c4c3c(void)

void FUN_1481c4c3c(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1481c4cd4();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb3e520;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x20;
  return;
}



// FUNCTION 1481c4cd4 FUN_1481c4cd4 body=258 status=ok
// SIG undefined FUN_1481c4cd4(void)

void FUN_1481c4cd4(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3e5a0) {
    FUN_144b3d300(&DAT_14cb3e5a0);
    if (DAT_14cb3e5a0 == -1) {
      FUN_1481c4dd8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x14;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3e520,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a7f3cd);
      _Init_thread_footer(&DAT_14cb3e5a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c4dd8 FUN_1481c4dd8 body=226 status=ok
// SIG undefined FUN_1481c4dd8(void)

longlong * FUN_1481c4dd8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1481c4ebc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c4ebc FUN_1481c4ebc body=136 status=ok
// SIG undefined FUN_1481c4ebc(void)

code * FUN_1481c4ebc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481c4f44;
}



// FUNCTION 1481c4f44 FUN_1481c4f44 body=136 status=ok
// SIG undefined FUN_1481c4f44(void)

code * FUN_1481c4f44(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000016;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481c4fcc;
}



// FUNCTION 1481c4fcc FUN_1481c4fcc body=130 status=ok
// SIG undefined FUN_1481c4fcc(void)

undefined1 * FUN_1481c4fcc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1481c504e;
}



// FUNCTION 1481c5052 FUN_1481c5052 body=29 status=ok
// SIG undefined FUN_1481c5052(void)

undefined8 FUN_1481c5052(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481c508a FUN_1481c508a body=29 status=ok
// SIG undefined FUN_1481c508a(void)

bool FUN_1481c508a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1481c50a8 FUN_1481c50a8 body=26 status=ok
// SIG undefined FUN_1481c50a8(void)

bool FUN_1481c50a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1481c50c2 FUN_1481c50c2 body=24 status=ok
// SIG undefined FUN_1481c50c2(void)

bool FUN_1481c50c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1481c50da FUN_1481c50da body=93 status=ok
// SIG undefined FUN_1481c50da(void)

void FUN_1481c50da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf3180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481c5138 FUN_1481c5138 body=93 status=ok
// SIG undefined FUN_1481c5138(void)

void FUN_1481c5138(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf3180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481c5196 FUN_1481c5196 body=126 status=ok
// SIG undefined FUN_1481c5196(void)

void FUN_1481c5196(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adf3180;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481c5205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481c5214 FUN_1481c5214 body=40 status=ok
// SIG undefined FUN_1481c5214(void)

void FUN_1481c5214(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001481c5239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1481c523c FUN_1481c523c body=152 status=ok
// SIG undefined FUN_1481c523c(void)

bool FUN_1481c523c(longlong param_1,undefined8 param_2)

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



// FUNCTION 1481c52d5 FUN_1481c52d5 body=47 status=ok
// SIG undefined FUN_1481c52d5(void)

void FUN_1481c52d5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1481c5304 FUN_1481c5304 body=103 status=ok
// SIG undefined FUN_1481c5304(void)

undefined8 FUN_1481c5304(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x18)) {
    uVar4 = uVar2 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,8);
  }
  return uVar3;
}



// FUNCTION 1481c536c FUN_1481c536c body=147 status=ok
// SIG undefined FUN_1481c536c(void)

void FUN_1481c536c(longlong param_1,int param_2)

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



// FUNCTION 1481c5400 FUN_1481c5400 body=96 status=ok
// SIG undefined FUN_1481c5400(void)

void FUN_1481c5400(longlong param_1,int param_2)

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



// FUNCTION 1481c5460 FUN_1481c5460 body=62 status=ok
// SIG undefined FUN_1481c5460(void)

void FUN_1481c5460(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481c549e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1481c549e FUN_1481c549e body=93 status=ok
// SIG undefined FUN_1481c549e(void)

ulonglong FUN_1481c549e(uint param_1,uint param_2)

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



// FUNCTION 1481c54fc FUN_1481c54fc body=96 status=ok
// SIG undefined FUN_1481c54fc(void)

void FUN_1481c54fc(longlong param_1,int param_2)

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



// FUNCTION 1481c555c FUN_1481c555c body=23 status=ok
// SIG undefined FUN_1481c555c(void)

void FUN_1481c555c(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 1481c5574 FUN_1481c5574 body=132 status=ok
// SIG undefined FUN_1481c5574(void)

void FUN_1481c5574(longlong param_1,int param_2)

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



// FUNCTION 1481c55fa FUN_1481c55fa body=110 status=ok
// SIG undefined FUN_1481c55fa(void)

void FUN_1481c55fa(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (param_2 <= (int)uVar1) {
    iVar5 = 5;
    if (5 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (5 < *(uint *)(param_1 + 0x5c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x5c) = iVar5;
    FUN_1481c566a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1481c566a FUN_1481c566a body=132 status=ok
// SIG undefined FUN_1481c566a(void)

void FUN_1481c566a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x50);
  if ((uint)param_3 < 6) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x50,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,param_3,0x10);
  return;
}



// FUNCTION 1481c56ee FUN_1481c56ee body=132 status=ok
// SIG undefined FUN_1481c56ee(void)

void FUN_1481c56ee(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x120);
  if (param_2 <= (int)uVar1) {
    iVar6 = 5;
    if (5 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (5 < *(uint *)(param_1 + 0x124)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x38,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 3;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x124) = iVar6;
    FUN_1481c5774(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1481c5774 FUN_1481c5774 body=141 status=ok
// SIG undefined FUN_1481c5774(void)

void FUN_1481c5774(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x118);
  if ((uint)param_3 < 6) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x118,0,param_3,0x38);
    memmove(*(void **)((longlong)param_1 + 0x118),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x118,param_2,param_3,0x38);
  return;
}



// FUNCTION 1481c5802 FUN_1481c5802 body=62 status=ok
// SIG undefined FUN_1481c5802(void)

void FUN_1481c5802(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481c5840(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,2,2);
  }
  return;
}



// FUNCTION 1481c5840 FUN_1481c5840 body=88 status=ok
// SIG undefined FUN_1481c5840(void)

ulonglong FUN_1481c5840(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e(param_1 * 2,2);
      uVar1 = uVar1 >> 1;
    }
  }
  return uVar1;
}



// FUNCTION 1481c5898 FUN_1481c5898 body=140 status=ok
// SIG undefined FUN_1481c5898(void)

void FUN_1481c5898(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb3de98;
  if (param_1 <= (int)DAT_14cb3de98) {
    if (DAT_14cb3de9c == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb3de98) {
        uVar2 = DAT_14cb3de98;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cb3de98 + ((ulonglong)((longlong)(int)DAT_14cb3de98 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cb3de9c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb3de90,param_1,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481c5926 FUN_1481c5926 body=62 status=ok
// SIG undefined FUN_1481c5926(void)

void FUN_1481c5926(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481c5964(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1481c5964 FUN_1481c5964 body=93 status=ok
// SIG undefined FUN_1481c5964(void)

ulonglong FUN_1481c5964(uint param_1,uint param_2)

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



// FUNCTION 1481c59c2 FUN_1481c59c2 body=124 status=ok
// SIG undefined FUN_1481c59c2(void)

void FUN_1481c59c2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_1407942ee(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481c5a40 FUN_1481c5a40 body=110 status=ok
// SIG undefined FUN_1481c5a40(void)

void FUN_1481c5a40(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_14043224c(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_144a4495e(param_1);
    return;
  }
  FUN_147a8fd46(param_1);
  FUN_14043224c(param_1,param_2);
  return;
}



// FUNCTION 1481c5aae FUN_1481c5aae body=574 status=ok
// SIG undefined FUN_1481c5aae(void)

void FUN_1481c5aae(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar8;
joined_r0x0001481c5ae2:
    do {
      iVar10 = iVar8 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar8 * 2 + 2;
        if ((iVar11 < (int)param_2) &&
           (*(int *)(param_1 + (longlong)iVar11 * 3 + 1) <=
            *(int *)(param_1 + (longlong)iVar10 * 3 + 1))) {
          iVar10 = iVar11;
        }
        if (*(int *)(param_1 + (longlong)iVar10 * 3 + 1) <
            *(int *)(param_1 + (longlong)iVar8 * 3 + 1)) {
          puVar2 = param_1 + (longlong)iVar8 * 3;
          puVar3 = param_1 + (longlong)iVar10 * 3;
          local_18 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_20._4_4_;
          iVar8 = iVar10;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x0001481c5ae2;
        }
      }
      bVar13 = iVar12 != 0;
      iVar8 = iVar12 + -1;
      iVar12 = iVar8;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_18 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar9 * 3 + 2];
      uVar6 = (param_1 + uVar9 * 3)[1];
      *param_1 = param_1[uVar9 * 3];
      param_1[1] = uVar6;
      param_1[uVar9 * 3 + 2] = local_18;
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar9 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            iVar8 = iVar8 + 2;
            iVar11 = iVar10;
            if (((longlong)iVar8 < (longlong)uVar9) &&
               (*(int *)(param_1 + (longlong)iVar8 * 3 + 1) <=
                *(int *)(param_1 + (longlong)iVar10 * 3 + 1))) {
              iVar11 = iVar8;
            }
            if (*(int *)(param_1 + (longlong)iVar12 * 3 + 1) <=
                *(int *)(param_1 + (longlong)iVar11 * 3 + 1)) break;
            puVar2 = param_1 + (longlong)iVar12 * 3;
            puVar3 = param_1 + (longlong)iVar11 * 3;
            uVar4 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = uVar4;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar8 = iVar11 * 2;
            iVar10 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar10 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_18 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          bVar13 = 2 < uVar9;
          uVar9 = uVar1;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar13);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481c5cf4 FUN_1481c5cf4 body=10 status=ok
// SIG undefined FUN_1481c5cf4(void)

undefined8 * FUN_1481c5cf4(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 1481c5cfe FUN_1481c5cfe body=126 status=ok
// SIG undefined FUN_1481c5cfe(void)

undefined8 * FUN_1481c5cfe(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (lVar2 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 0x40);
    _Src = *(void **)(lVar2 + 0x38);
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 0x68);
    _Src = *(void **)(lVar2 + 0x60);
  }
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1481c5d84 FUN_1481c5d84 body=130 status=ok
// SIG undefined FUN_1481c5d84(void)

undefined8 * FUN_1481c5d84(longlong param_1,undefined8 *param_2)

{
  PSRWLOCK SRWLock;
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
  
  SRWLock = (PSRWLOCK)(param_1 + 0x150);
  AcquireSRWLockShared(SRWLock);
  if (*(char *)(param_1 + 0x188) == '\0') {
    ReleaseSRWLockShared(SRWLock);
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 6) = 0;
  }
  else {
    param_2[6] = *(undefined8 *)(param_1 + 0x188);
    uVar1 = *(undefined4 *)(param_1 + 0x158);
    uVar2 = *(undefined4 *)(param_1 + 0x15c);
    uVar3 = *(undefined4 *)(param_1 + 0x160);
    uVar4 = *(undefined4 *)(param_1 + 0x164);
    uVar5 = *(undefined4 *)(param_1 + 0x168);
    uVar6 = *(undefined4 *)(param_1 + 0x16c);
    uVar7 = *(undefined4 *)(param_1 + 0x170);
    uVar8 = *(undefined4 *)(param_1 + 0x174);
    uVar9 = *(undefined4 *)(param_1 + 0x17c);
    uVar10 = *(undefined4 *)(param_1 + 0x180);
    uVar11 = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x178);
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar9;
    *(undefined4 *)(param_2 + 5) = uVar10;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar11;
    *(undefined4 *)(param_2 + 2) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar6;
    *(undefined4 *)(param_2 + 3) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar8;
    *(undefined4 *)param_2 = uVar1;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    ReleaseSRWLockShared(SRWLock);
  }
  return param_2;
}



// FUNCTION 1481c5e06 FUN_1481c5e06 body=19 status=ok
// SIG undefined FUN_1481c5e06(void)

undefined8 FUN_1481c5e06(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 0;
  }
  return 0;
}



// FUNCTION 1481c5e16 FUN_1481c5e16 body=124 status=ok
// SIG undefined FUN_1481c5e16(void)

void FUN_1481c5e16(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  undefined4 local_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_3;
  local_28 = param_2;
  uVar1 = FUN_144a78877(param_2 & 0xffffffff,param_2 >> 0x20);
  uVar2 = FUN_1481caf98(param_1 + 0x770,uVar1,&local_28);
  FUN_1447cbafe(uVar2,local_30,&local_2c,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c5e94 FUN_1481c5e94 body=175 status=ok
// SIG undefined FUN_1481c5e94(void)

undefined8 FUN_1481c5e94(longlong param_1,ulonglong param_2,uint param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  uVar1 = FUN_144a78877(param_2 & 0xffffffff,param_2 >> 0x20);
  plVar2 = (longlong *)FUN_1481caf98(param_1 + 0x770,uVar1,&local_28);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar4 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar2[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar2[9] - 1U & param_3) * 4);
    if (iVar5 != -1) {
      do {
        bVar6 = *(uint *)(*plVar2 + (longlong)iVar5 * 0xc) == param_3;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar5 >> 8),bVar6);
        if (bVar6) break;
        iVar5 = *(int *)(*plVar2 + (longlong)iVar5 * 0xc + 4);
      } while (iVar5 != -1);
      goto LAB_1481c5ee4;
    }
  }
  uVar3 = 0;
LAB_1481c5ee4:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1481c5f5a FUN_1481c5f5a body=340 status=ok
// SIG undefined FUN_1481c5f5a(void)

undefined8 FUN_1481c5f5a(longlong param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auStack_98 [32];
  wchar_t **local_78;
  byte local_61;
  uint3 local_60;
  undefined1 uStack_5d;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_61 = param_3;
  piVar4 = (int *)FUN_1481cb932(param_1 + 0x1f0,param_3,&local_61);
  bVar2 = local_61;
  iVar3 = *piVar4;
  if (iVar3 == piVar4[4]) {
    uVar1 = *(uint *)((longlong)&DAT_14c873428 + (ulonglong)((uint)local_61 * 0x30));
    local_78 = (wchar_t **)&local_39;
    local_39 = 0;
    local_48 = L"ENiagaraEmptyUAVType::Buffer";
    local_50 = 0;
    uVar7 = DAT_14ca84e48;
    if (uVar1 < DAT_14ca84e48) {
      uVar7 = uVar1;
    }
    _local_60 = uVar7 + (uVar7 == 0);
    local_5c = 1;
    uStack_58 = 0x4109;
    lVar5 = FUN_144738de6(param_2 + 0x188,param_2 + 0x70,&local_48,&local_60);
    local_60 = (uint3)bVar2;
    uStack_58 = (undefined4)lVar5;
    uStack_54 = (undefined4)((ulonglong)lVar5 >> 0x20);
    local_48 = (wchar_t *)CONCAT71(local_48._1_7_,1);
    local_78 = &local_48;
    uVar6 = FUN_144a23c98(param_2 + 0x198,param_2 + 0x70,lVar5 + 8,&local_60);
    iVar3 = piVar4[4];
    piVar4[4] = iVar3 + 1U;
    if ((uint)piVar4[5] < iVar3 + 1U) {
      FUN_1481cbcf4(piVar4 + 2,iVar3);
    }
    *(undefined8 *)(*(longlong *)(piVar4 + 2) + (longlong)iVar3 * 8) = uVar6;
    iVar3 = *piVar4;
  }
  *piVar4 = iVar3 + 1;
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return *(undefined8 *)(*(longlong *)(piVar4 + 2) + (longlong)iVar3 * 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c60b0 FUN_1481c60b0 body=950 status=ok
// SIG undefined FUN_1481c60b0(void)

undefined8 FUN_1481c60b0(longlong param_1,longlong param_2,byte param_3,byte param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 local_89;
  undefined1 local_88;
  undefined4 local_87;
  undefined2 local_83;
  undefined1 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  byte local_3d;
  undefined2 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70._0_2_ = CONCAT11(param_4,param_3);
  piVar2 = (int *)FUN_1481cbd7a(param_1 + 0x240,
                                (uint)param_3 * 0x40 + (uint)param_4 + (uint)(param_3 >> 2) +
                                0x9e3779b9 ^ (uint)param_3);
  if (*piVar2 != piVar2[4]) goto LAB_1481c6373;
  if (4 < param_4) {
    uVar3 = 0;
    goto LAB_1481c6384;
  }
  local_3d = param_3;
  switch((uint)param_4) {
  case 0:
    local_58 = DAT_14ca83a40;
    local_68 = DAT_14ca83a30;
    uStack_64 = DAT_14ca83a34;
    uStack_60 = DAT_14ca83a38;
    uStack_5c = DAT_14ca83a3c;
    local_70 = &DAT_00020008;
    local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_50 = 0;
    local_4c = &DAT_100000001;
    local_44 = 0x10001;
    local_40 = 0x101;
    local_3e = 0;
    local_3c = 0xff00;
    local_78 = FUN_14472bf7a(param_2,&local_70,L"NiagaraEmptyTextureUAV::Texture2D",0);
    local_88 = *(undefined1 *)(local_78 + 0x94);
    goto LAB_1481c6338;
  case 1:
    local_58 = DAT_14ca83a40;
    local_68 = DAT_14ca83a30;
    uStack_64 = DAT_14ca83a34;
    uStack_60 = DAT_14ca83a38;
    uStack_5c = DAT_14ca83a3c;
    local_70 = &DAT_00020008;
    local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_50 = 0;
    local_4c = &DAT_100000001;
    local_44 = 0x10001;
    local_40 = 0x101;
    local_3e = 1;
    local_3c = 0xff00;
    local_78 = FUN_14472bf7a(param_2,&local_70,L"NiagaraEmptyTextureUAV::Texture2DArray",0);
    local_88 = *(undefined1 *)(local_78 + 0x94);
    goto LAB_1481c6338;
  case 2:
    local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_3e = 2;
    pwVar4 = L"NiagaraEmptyTextureUAV::Texture3D";
    break;
  case 3:
    local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_3e = 3;
    pwVar4 = L"NiagaraEmptyTextureUAV::TextureCube";
    break;
  case 4:
    local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_3e = 4;
    pwVar4 = L"NiagaraEmptyTextureUAV::TextureCubeArray";
  }
  local_3c = 0xff00;
  local_40 = 0x101;
  local_44 = 0x10001;
  local_4c = &DAT_100000001;
  local_50 = 0;
  local_58 = DAT_14ca83a40;
  uStack_5c = DAT_14ca83a3c;
  uStack_60 = DAT_14ca83a38;
  uStack_64 = DAT_14ca83a34;
  local_68 = DAT_14ca83a30;
  local_70 = &DAT_00020008;
  local_78 = FUN_14472bf7a(param_2,&local_70,pwVar4,0);
  local_88 = *(undefined1 *)(local_78 + 0x94);
LAB_1481c6338:
  local_80 = 0;
  local_83 = 0;
  local_87 = 0;
  local_89 = 1;
  local_98 = &local_89;
  uVar3 = FUN_144a96e92(param_2 + 0x198,param_2 + 0x70,local_78 + 8);
  iVar1 = piVar2[4];
  piVar2[4] = iVar1 + 1U;
  if ((uint)piVar2[5] < iVar1 + 1U) {
    FUN_1481cc16c(piVar2 + 2,iVar1);
  }
  *(undefined8 *)(*(longlong *)(piVar2 + 2) + (longlong)iVar1 * 8) = uVar3;
LAB_1481c6373:
  iVar1 = *piVar2;
  *piVar2 = iVar1 + 1;
  uVar3 = *(undefined8 *)(*(longlong *)(piVar2 + 2) + (longlong)iVar1 * 8);
LAB_1481c6384:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1481c6472 FUN_1481c6472 body=155 status=ok
// SIG undefined FUN_1481c6472(void)

void FUN_1481c6472(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1481c650e(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c650e FUN_1481c650e body=111 status=ok
// SIG undefined FUN_1481c650e(void)

undefined8 FUN_1481c650e(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x218) != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 0x218) + 0x420))();
    if (puVar2 != (undefined8 *)0x0) {
      plVar3 = (longlong *)(**(code **)*puVar2)(puVar2,&DAT_14cb3e918);
      if (plVar3 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x110))(plVar3);
        uVar4 = FUN_1480d7cf8(uVar4);
        return uVar4;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 1481c657e FUN_1481c657e body=238 status=ok
// SIG undefined FUN_1481c657e(void)

void FUN_1481c657e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_1402ad37c(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c666e FUN_1481c666e body=336 status=ok
// SIG undefined FUN_1481c666e(void)

void FUN_1481c666e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143a88634(local_28[2],local_28,local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c67c0 FUN_1481c67c0 body=336 status=ok
// SIG undefined FUN_1481c67c0(void)

void FUN_1481c67c0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143a8879a(local_28[2],local_28,local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c6912 FUN_1481c6912 body=222 status=ok
// SIG undefined FUN_1481c6912(void)

void FUN_1481c6912(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
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
  FUN_1481c69f2(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c69f2 FUN_1481c69f2 body=114 status=ok
// SIG undefined FUN_1481c69f2(void)

void FUN_1481c69f2(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x218) != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 0x218) + 0x420))();
    if (puVar2 != (undefined8 *)0x0) {
      plVar3 = (longlong *)(**(code **)*puVar2)(puVar2,&DAT_14cb3e918);
      if (plVar3 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x110))(plVar3);
        FUN_1480d7d46(uVar4,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1481c6a64 FUN_1481c6a64 body=299 status=ok
// SIG undefined FUN_1481c6a64(void)

void FUN_1481c6a64(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1481c6b90(local_18,local_20,local_24);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c6b90 FUN_1481c6b90 body=414 status=ok
// SIG undefined FUN_1481c6b90(void)

void FUN_1481c6b90(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined8 local_50;
  undefined4 *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5c = param_3;
  if ((((param_2 == 0) || (lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1), lVar1 == 0)) ||
      (*(longlong **)(lVar1 + 0x218) == (longlong *)0x0)) ||
     ((puVar2 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 0x218) + 0x420))(),
      puVar2 == (undefined8 *)0x0 ||
      (plVar3 = (longlong *)(**(code **)*puVar2)(puVar2,&DAT_14cb3e918), plVar3 == (longlong *)0x0))
     )) goto LAB_1481c6c9c;
  uVar4 = (**(code **)(*plVar3 + 0x110))(plVar3);
  lVar1 = FUN_144a3a302();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 != 0) goto LAB_1481c6c40;
LAB_1481c6c57:
    lVar6 = 0;
  }
  else {
    FUN_1456cec3c(lVar1);
LAB_1481c6c40:
    lVar5 = FUN_144a78d6a();
    if ((lVar5 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_1481c6c57;
    lVar6 = 0;
    if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30) {
      lVar6 = lVar1;
    }
  }
  lVar5 = FUN_144a78d6a();
  if (lVar6 == lVar5) {
    local_30 = &local_5c;
    local_40 = lVar1;
    local_38 = uVar4;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    FUN_143a9b1ca(param_2,&local_40,&local_38);
  }
  else {
    local_48 = &local_5c;
    local_58 = lVar1;
    local_50 = uVar4;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    FUN_143a9b5e2(param_2,&local_58,&local_50);
  }
LAB_1481c6c9c:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481c6d30 FUN_1481c6d30 body=299 status=ok
// SIG undefined FUN_1481c6d30(void)

void FUN_1481c6d30(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1481c6e5c(local_18,local_20,local_24);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c6e5c FUN_1481c6e5c body=125 status=ok
// SIG undefined FUN_1481c6e5c(void)

void FUN_1481c6e5c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x218) != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 0x218) + 0x420))();
    if (puVar2 != (undefined8 *)0x0) {
      plVar3 = (longlong *)(**(code **)*puVar2)(puVar2,&DAT_14cb3e918);
      if (plVar3 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x110))(plVar3);
        FUN_143937a20(uVar4,param_2,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1481c6ee6 FUN_1481c6ee6 body=1147 status=ok
// SIG undefined FUN_1481c6ee6(void)

void FUN_1481c6ee6(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  longlong *local_88;
  longlong local_78 [2];
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  byte local_52;
  byte local_51;
  undefined8 local_50;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar3 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_51 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  local_52 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_52);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_52);
  }
  local_58 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_60 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  iVar2 = local_60;
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar1 = local_64;
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_88 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_88 = local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = iVar1 != 0;
  local_98 = iVar2 != 0;
  local_a0 = local_5c;
  local_a8 = local_58;
  local_b0 = (uint)local_52;
  local_b8 = (uint)local_51;
  FUN_143a88900(local_38,puVar3,local_41,local_50);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c7362 FUN_1481c7362 body=336 status=ok
// SIG undefined FUN_1481c7362(void)

void FUN_1481c7362(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143a8a17e(local_28[2],local_28,local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c74b4 FUN_1481c74b4 body=336 status=ok
// SIG undefined FUN_1481c74b4(void)

void FUN_1481c74b4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143a8a17e(local_28[2],local_28,local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c7606 FUN_1481c7606 body=336 status=ok
// SIG undefined FUN_1481c7606(void)

void FUN_1481c7606(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143a8a17e(local_28[2],local_28,local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c776a FUN_1481c776a body=276 status=ok
// SIG undefined FUN_1481c776a(void)

void FUN_1481c776a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = DAT_14c8464f0;
  local_78 = DAT_14c8464e0;
  uStack_70 = DAT_14c8464e8;
  local_50 = DAT_14c846508;
  local_60 = (undefined4)DAT_14c8464f8;
  uStack_5c = DAT_14c8464f8._4_4_;
  uStack_58 = (undefined4)DAT_14c846500;
  uStack_54 = DAT_14c846500._4_4_;
  local_48 = 0x3ff0000000000000;
  local_40 = 0x3ff0000000000000;
  local_38 = 0x3ff0000000000000;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0x10101;
  local_1c = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140416fe4(puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c7892 FUN_1481c7892 body=276 status=ok
// SIG undefined FUN_1481c7892(void)

void FUN_1481c7892(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = DAT_14c8464f0;
  local_78 = DAT_14c8464e0;
  uStack_70 = DAT_14c8464e8;
  local_50 = DAT_14c846508;
  local_60 = (undefined4)DAT_14c8464f8;
  uStack_5c = DAT_14c8464f8._4_4_;
  uStack_58 = (undefined4)DAT_14c846500;
  uStack_54 = DAT_14c846500._4_4_;
  local_48 = 0x3ff0000000000000;
  local_40 = 0x3ff0000000000000;
  local_38 = 0x3ff0000000000000;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0x10101;
  local_1c = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140e3e5be(puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c79aa FUN_1481c79aa body=325 status=ok
// SIG undefined FUN_1481c79aa(void)

longlong FUN_1481c79aa(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_48,puVar5,1);
  lVar2 = FUN_140a45cc8();
  local_58 = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  local_50 = 1;
  local_4e = 0;
  local_4c = 0xffffffff;
  local_40 = local_48;
  if (lVar2 == 0) {
    local_38 = 0xffffffff;
  }
  else {
    local_38 = FUN_14005ac26(&local_58);
  }
  local_30 = 0;
  uStack_28 = 0;
  lVar2 = 0;
  puVar3 = (uint *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))
                             ((longlong *)(param_1 + 0x678),&local_40,0);
  if (puVar3 != (uint *)0x0) {
    uVar1 = *puVar3;
    if ((((ulonglong)uVar1 != 0xffffffff) && (-1 < (int)uVar1)) &&
       ((int)uVar1 < *(int *)(param_1 + 0x6b0))) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x6a8) + (ulonglong)uVar1 * 8);
      if (lVar2 != 0) {
        lVar4 = FUN_140a45cc8();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) goto LAB_1481c7aa8;
      }
    }
    lVar2 = 0;
  }
LAB_1481c7aa8:
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c7af0 FUN_1481c7af0 body=426 status=ok
// SIG undefined FUN_1481c7af0(void)

void FUN_1481c7af0(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int *piVar35;
  longlong lVar36;
  undefined1 auStack_138 [32];
  longlong local_118 [2];
  longlong local_108 [2];
  undefined4 local_f8;
  longlong local_f0 [2];
  undefined4 local_e0;
  longlong local_d8 [2];
  undefined4 local_c8;
  longlong local_c0 [2];
  undefined4 local_b0;
  longlong local_a8 [2];
  undefined4 local_98;
  longlong local_90 [2];
  undefined4 local_80;
  longlong local_78 [2];
  undefined4 local_68;
  longlong local_60 [2];
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_98 = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  FUN_144a98dce(local_a8,param_1);
  local_80 = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  FUN_144a98dce(local_90,param_1);
  local_68 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_144a98dce(local_78,param_1);
  local_50 = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  FUN_144a98dce(local_60,param_1);
  local_f8 = 0;
  local_108[0] = 0;
  local_108[1] = 0;
  FUN_144a98dce(local_108,param_1);
  local_e0 = 0;
  local_f0[0] = 0;
  local_f0[1] = 0;
  FUN_144a98dce(local_f0,param_1);
  local_c8 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  FUN_144a98dce(local_d8,param_1);
  local_b0 = 0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  FUN_144a98dce(local_c0,param_1);
  FUN_144a76c20(local_118,param_1);
  piVar35 = (int *)(*(longlong *)(param_1 + 0x80) + 0x44);
  if (*param_1 != '\0') {
    piVar35 = (int *)(param_1 + 0x40);
  }
  iVar10 = *piVar35;
  if (0 < (longlong)iVar10) {
    lVar36 = 0;
    do {
      pfVar1 = (float *)(local_a8[0] + lVar36);
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar2 = (float *)(local_90[0] + lVar36);
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar16 = pfVar2[3];
      pfVar3 = (float *)(local_78[0] + lVar36);
      fVar17 = pfVar3[1];
      fVar18 = pfVar3[2];
      fVar19 = pfVar3[3];
      pfVar4 = (float *)(local_60[0] + lVar36);
      fVar20 = pfVar4[1];
      fVar21 = pfVar4[2];
      fVar22 = pfVar4[3];
      pfVar5 = (float *)(local_108[0] + lVar36);
      fVar23 = pfVar5[1];
      fVar24 = pfVar5[2];
      fVar25 = pfVar5[3];
      pfVar6 = (float *)(local_f0[0] + lVar36);
      fVar26 = pfVar6[1];
      fVar27 = pfVar6[2];
      fVar28 = pfVar6[3];
      pfVar7 = (float *)(local_d8[0] + lVar36);
      fVar29 = pfVar7[1];
      fVar30 = pfVar7[2];
      fVar31 = pfVar7[3];
      pfVar8 = (float *)(local_c0[0] + lVar36);
      fVar32 = pfVar8[1];
      fVar33 = pfVar8[2];
      fVar34 = pfVar8[3];
      pfVar9 = (float *)(local_118[0] + lVar36);
      *pfVar9 = *pfVar4 * *pfVar8 + *pfVar3 * *pfVar7 + *pfVar2 * *pfVar6 + *pfVar1 * *pfVar5;
      pfVar9[1] = fVar20 * fVar32 + fVar17 * fVar29 + fVar14 * fVar26 + fVar11 * fVar23;
      pfVar9[2] = fVar21 * fVar33 + fVar18 * fVar30 + fVar15 * fVar27 + fVar12 * fVar24;
      pfVar9[3] = fVar22 * fVar34 + fVar19 * fVar31 + fVar16 * fVar28 + fVar13 * fVar25;
      lVar36 = lVar36 + 0x10;
    } while ((longlong)iVar10 * 0x10 != lVar36);
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c7c9e FUN_1481c7c9e body=301 status=ok
// SIG undefined FUN_1481c7c9e(void)

void FUN_1481c7c9e(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined4 *local_48;
  undefined8 uStack_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar6 = 0;
  local_38 = 0;
  local_48 = (undefined4 *)0x0;
  uStack_40 = 0;
  FUN_144a98d08(&local_48,param_1);
  local_58 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  FUN_144a98d08(&local_68,param_1);
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_1);
  FUN_144a76cd4(&local_98,param_1);
  piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar5 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar5) {
    do {
      uVar4 = *local_48;
      uVar2 = *local_68;
      uVar3 = *local_88;
      local_88 = local_88 + local_78;
      local_68 = local_68 + local_58;
      local_48 = local_48 + local_38;
      uVar4 = FUN_1481c9ff2(uVar4,uVar2,uVar3);
      puVar1 = local_98 + local_90;
      *local_98 = uVar4;
      iVar6 = iVar6 + 1;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar5 = (int *)(param_1 + 0x3c);
      }
      local_98 = puVar1;
    } while (iVar6 < *piVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c7dcc FUN_1481c7dcc body=314 status=ok
// SIG undefined FUN_1481c7dcc(void)

void FUN_1481c7dcc(undefined8 *param_1,undefined2 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_14adf8aa0;
  *(undefined2 *)(param_1 + 4) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_3;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_3;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a5) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined2 *)((longlong)param_1 + 0x1d1) = 0x101;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 2;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x40) = 2;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x43] = 2;
  *(undefined1 *)(param_1 + 0x44) = 0;
  return;
}



// FUNCTION 1481c7f06 FUN_1481c7f06 body=162 status=ok
// SIG undefined FUN_1481c7f06(void)

void FUN_1481c7f06(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  FUN_14811423c(*param_2,param_1);
  iVar3 = *(int *)(param_1 + 0x300);
  *(uint *)(param_1 + 0x300) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x304) < iVar3 + 1U) {
    FUN_1481cc3a0((longlong *)(param_1 + 0x2f8),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x2f8);
  *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    plVar6 = (longlong *)param_2[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001481c7f8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1481c7fa8 FUN_1481c7fa8 body=94 status=ok
// SIG undefined FUN_1481c7fa8(void)

void FUN_1481c7fa8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14811423e(*param_2,param_1);
  FUN_1481c8006(param_1 + 0x2f8,param_2);
  plVar3 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001481c7ffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1481c8006 FUN_1481c8006 body=106 status=ok
// SIG undefined FUN_1481c8006(void)

void FUN_1481c8006(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    return;
  }
  uVar3 = 0;
  bVar1 = false;
  do {
    uVar3 = (ulonglong)(int)uVar3;
    plVar4 = (longlong *)(uVar3 * 0x10 + *param_1);
    while (*plVar4 != *param_2) {
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 2;
      if ((longlong)iVar2 <= (longlong)uVar3) {
        if (!bVar1) {
          return;
        }
        goto LAB_1481c8061;
      }
    }
    FUN_1481cc464(param_1,uVar3 & 0xffffffff);
    iVar2 = (int)param_1[1];
    bVar1 = true;
  } while ((int)uVar3 < iVar2);
LAB_1481c8061:
  FUN_1481cc426(param_1);
  return;
}



// FUNCTION 1481c8070 FUN_1481c8070 body=111 status=ok
// SIG undefined FUN_1481c8070(void)

void FUN_1481c8070(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (0 < (longlong)(int)uVar1) {
    _Src = (void *)*param_2;
    iVar2 = *(int *)(param_1 + 0x148);
    *(uint *)(param_1 + 0x148) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x14c) - iVar2) < uVar1) {
      FUN_1447808da((longlong *)(param_1 + 0x140),iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 4 + *(longlong *)(param_1 + 0x140)),_Src,
           (longlong)(int)uVar1 << 2);
    return;
  }
  return;
}



// FUNCTION 1481c80df FUN_1481c80df body=138 status=ok
// SIG undefined FUN_1481c80df(void)

ulonglong FUN_1481c80df(ulonglong *param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  float fVar8;
  
  uVar2 = (uint)param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulonglong)param_3;
    uVar6 = *param_1;
    uVar4 = 0;
    do {
      lVar5 = (longlong)(int)uVar4;
      fVar8 = *(float *)(*param_2 + lVar5 * 4) * (float)uVar3;
      *(int *)(uVar6 + lVar5 * 4) = (int)ROUND(fVar8 + fVar8 + -0.5) >> 1;
      uVar6 = *param_1;
      param_3 = param_3 - *(int *)(uVar6 + lVar5 * 4);
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
  }
  uVar4 = rand();
  iVar7 = 0;
  uVar6 = (ulonglong)uVar4 / (ulonglong)uVar2;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar6 = *param_1;
    piVar1 = (int *)(uVar6 + (longlong)(int)((iVar7 + uVar4 % uVar2) % uVar2) * 4);
    *piVar1 = *piVar1 + 1;
    iVar7 = iVar7 + 1;
  }
  return uVar6;
}



// FUNCTION 1481c816a FUN_1481c816a body=412 status=ok
// SIG undefined FUN_1481c816a(void)

void FUN_1481c816a(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  
  if ((param_3 != 0) && (DAT_14c760da4 != 0)) {
    uVar1 = *(uint *)(param_2 + 0x17c);
    uVar8 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    if (uVar1 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0;
      if (uVar1 != 0) {
        for (; (uVar1 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
        }
      }
    }
    uVar7 = 0;
    if (uVar8 != 0) {
      for (; (uVar8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    do {
      uVar6 = 1 << ((byte)uVar7 & 0x1f);
      if ((uVar1 >> (uVar7 & 0x1f) & 1) == 0) {
        if ((*(uint *)(param_1 + 0x3a0) & uVar6) == 0) {
          iVar9 = *(int *)(param_1 + 0x398);
          *(uint *)(param_1 + 0x398) = iVar9 + 1U;
          plVar10 = (longlong *)(param_1 + 0x390);
          if (*(uint *)(param_1 + 0x39c) < iVar9 + 1U) goto LAB_1481c82c7;
        }
        else {
          lVar2 = (ulonglong)uVar7 * 0x10;
          plVar10 = (longlong *)(param_1 + 0x3a8 + lVar2);
          iVar9 = *(int *)(param_1 + 0x3b0 + lVar2);
          if (iVar9 == 0) {
            puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
            *puVar3 = 0;
            puVar3[1] = 0;
            *(undefined8 **)(param_1 + 0x428 + (ulonglong)uVar7 * 8) = puVar3;
            iVar9 = (int)plVar10[1];
          }
          *(uint *)(plVar10 + 1) = iVar9 + 1U;
          if (*(uint *)((longlong)plVar10 + 0xc) < iVar9 + 1U) {
LAB_1481c82c7:
            FUN_147203348(plVar10,iVar9);
          }
        }
        lVar2 = *plVar10;
        lVar4 = (longlong)iVar9;
        *(undefined8 *)(lVar2 + lVar4 * 0x48) = 0;
        *(longlong *)(lVar2 + 8 + lVar4 * 0x48) = param_3;
        LOCK();
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
        UNLOCK();
        *(undefined8 *)(lVar2 + 0x20 + lVar4 * 0x48) = 0;
        puVar3 = (undefined8 *)(lVar2 + 0x10 + lVar4 * 0x48);
        *puVar3 = 0;
        puVar3[1] = 0;
        *(int *)(lVar2 + 0x28 + lVar4 * 0x48) = iVar5;
        *(uint *)(lVar2 + 0x2c + lVar4 * 0x48) = uVar7;
        *(undefined2 *)(lVar2 + 0x30 + lVar4 * 0x48) = 0;
        puVar3 = (undefined8 *)(lVar2 + 0x38 + lVar4 * 0x48);
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      uVar8 = uVar8 & ~uVar6;
      if (uVar8 == 0) {
        uVar7 = 0x20;
      }
      else {
        uVar7 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
      }
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 1481c8306 FUN_1481c8306 body=635 status=ok
// SIG undefined FUN_1481c8306(void)

void FUN_1481c8306(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar3 = *(int *)(param_1 + 0xc);
  if (0 < iVar3) {
    uVar6 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar1 = *(uint *)((longlong)param_2 + 0x17c);
    if (uVar1 != uVar6) {
      *(uint *)((longlong)param_2 + 0x17c) = uVar6;
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar4 + 3;
      if ((undefined8 *)param_2[1] < puVar5) {
        FUN_140023dd8(param_2,0x20);
        puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar5 = puVar4 + 3;
      }
      *param_2 = (ulonglong)puVar5;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar4;
      param_2[6] = (ulonglong)(puVar4 + 1);
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x17c);
      puVar4[1] = 0;
      *puVar4 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      iVar3 = *(int *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 0x9c) == iVar3) {
      local_58 = *(undefined8 *)(param_1 + 0xa8);
      local_88 = &local_68;
      local_68 = 0xffffffffffffffff;
      local_60 = 0xffffffff;
      local_50 = 3;
      local_4c = 0x400000000f0;
      local_44 = 0;
      local_38 = 0;
      local_80 = 1;
      FUN_144760590(param_2,&local_88,0);
    }
    else {
      *(int *)(param_1 + 0x9c) = iVar3;
      local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,iVar3);
      local_98 = 0;
      local_a0 = 0x21;
      local_a8 = 0x400;
      local_b0 = CONCAT31(local_b0._1_3_,0x1c);
      FUN_1407fe5c2(param_1 + 0xa0,param_2,L"NiagaraGPUInstanceCounts",4);
    }
    local_70 = *(undefined8 *)(param_1 + 0xa8);
    local_74 = *(undefined4 *)(param_1 + 0x9c);
    local_b8 = &local_74;
    local_a8 = 1;
    local_b0 = 0;
    FUN_1409fc52c(param_2,*(undefined4 *)(param_1 + 4),*(undefined8 *)(param_1 + 0x30));
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    local_88 = &local_68;
    local_68 = 0xffffffffffffffff;
    local_60 = 0xffffffff;
    local_50 = 3;
    local_4c = 0xf000000400;
    local_44 = 0;
    local_38 = 0;
    local_80 = 1;
    FUN_144760590(param_2,&local_88,0);
    if (*(uint *)((longlong)param_2 + 0x17c) != uVar1) {
      *(uint *)((longlong)param_2 + 0x17c) = uVar1;
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar4 + 3;
      if ((undefined8 *)param_2[1] < puVar5) {
        FUN_140023dd8(param_2,0x20);
        puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar5 = puVar4 + 3;
      }
      *param_2 = (ulonglong)puVar5;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar4;
      param_2[6] = (ulonglong)(puVar4 + 1);
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x17c);
      puVar4[1] = 0;
      *puVar4 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar4 + 2) = uVar2;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c85aa FUN_1481c85aa body=163 status=ok
// SIG undefined FUN_1481c85aa(void)

void FUN_1481c85aa(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_1481c864e(param_1 + 0x368);
  *puVar6 = param_2;
  uVar3 = *param_3;
  lVar4 = param_3[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)puVar6[2];
  puVar6[1] = uVar3;
  puVar6[2] = lVar4;
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
  puVar6[3] = param_4;
  plVar5 = (longlong *)param_3[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001481c863e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1481c864e FUN_1481c864e body=59 status=ok
// SIG undefined FUN_1481c864e(void)

longlong FUN_1481c864e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1481ccb24(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_1481ccb1c(lVar2);
  return lVar2;
}



// FUNCTION 1481c8690 FUN_1481c8690 body=212 status=ok
// SIG undefined FUN_1481c8690(void)

void FUN_1481c8690(longlong param_1,ulonglong *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar3 = (ulonglong)param_3;
  if (*(longlong *)(param_1 + 0x428 + uVar3 * 8) != 0) {
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar4 + 4;
    if ((undefined8 *)param_2[1] < puVar1) {
      FUN_140023dd8(param_2,0x28);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar1 = puVar4 + 4;
    }
    *param_2 = (ulonglong)puVar1;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 1;
    if ((undefined8 *)param_2[1] < puVar1) {
      FUN_140023dd8(param_2,0x10);
      puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar1 = puVar2 + 1;
    }
    *param_2 = (ulonglong)puVar1;
    *puVar2 = *(undefined8 *)(param_1 + 0x428 + uVar3 * 8);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14a2f1378;
    puVar4[2] = puVar2;
    *(undefined4 *)(puVar4 + 3) = 1;
    *(undefined8 *)(param_1 + 0x428 + uVar3 * 8) = 0;
  }
  return;
}



// FUNCTION 1481c8764 FUN_1481c8764 body=224 status=ok
// SIG undefined FUN_1481c8764(void)

undefined8 FUN_1481c8764(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2d;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 local_26;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_144a8d736(param_2);
  switch(param_3) {
  case 0:
    local_20 = *(longlong *)(lVar1 + 8);
    break;
  case 1:
    local_20 = *(longlong *)(lVar1 + 0x18);
    break;
  case 2:
    local_20 = *(longlong *)(lVar1 + 0x58);
    break;
  case 3:
    local_20 = *(longlong *)(lVar1 + 0x70);
    break;
  case 4:
    local_20 = *(longlong *)(lVar1 + 0x78);
    break;
  default:
    uVar2 = 0;
    goto LAB_1481c8823;
  }
  local_30 = 0;
  local_26 = 0;
  uStack_29 = 0;
  uStack_28 = 0;
  local_2d = 0;
  local_2e = *(undefined1 *)(local_20 + 0x90);
  if ((*(char *)(local_20 + 0x92) == '\x04') || (*(char *)(local_20 + 0x92) == '\x01')) {
    local_2d._3_1_ = (byte)*(undefined2 *)(local_20 + 0x8e);
    local_2d = (uint)local_2d._3_1_ << 0x18;
    uStack_29 = (undefined1)((ushort)*(undefined2 *)(local_20 + 0x8e) >> 8);
  }
  uVar2 = FUN_144aaac76(param_2 + 0x198,param_2 + 0x70,local_20 + 8,&local_30);
LAB_1481c8823:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1481c8846 FUN_1481c8846 body=9 status=ok
// SIG undefined FUN_1481c8846(void)

void FUN_1481c8846(longlong param_1)

{
  FUN_1481c60b0(*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1481c8850 FUN_1481c8850 body=157 status=ok
// SIG undefined FUN_1481c8850(void)

void FUN_1481c8850(undefined8 param_1,longlong param_2,byte param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_38;
  undefined8 local_34;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_20 = FUN_1473215fc(&DAT_14ca63b10,param_2,
                           *(undefined4 *)
                            ((longlong)&DAT_14c873428 + (ulonglong)((uint)param_3 * 0x30)));
  local_34 = 0xffffffff00000000;
  local_28 = 0;
  local_38 = param_3;
  FUN_14475683e(param_2 + 0x198,param_2 + 0x70,local_20 + 8);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c88ee FUN_1481c88ee body=99 status=ok
// SIG undefined FUN_1481c88ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1481c88ee(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 0xc) <= iVar2) {
      FUN_143a8d702(param_1,param_2,*(int *)(param_1 + 0xc) + _DAT_14c7628fc);
      iVar2 = *(int *)(param_1 + 8);
    }
    *(int *)(param_1 + 8) = iVar2 + 1;
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x80) + -4 + (longlong)iVar1 * 4);
    *(int *)(param_1 + 0x88) = iVar1 + -1;
    FUN_144780a3c(param_1 + 0x80);
  }
  return iVar2;
}



// FUNCTION 1481c8952 FUN_1481c8952 body=126 status=ok
// SIG undefined FUN_1481c8952(void)

void FUN_1481c8952(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)(param_1 + 0x150);
  iVar2 = *(int *)(param_1 + 0x158);
  *(uint *)(param_1 + 0x158) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x15c) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar2 * 4) = param_2;
  iVar2 = *(int *)(param_1 + 0x158);
  *(uint *)(param_1 + 0x158) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x15c) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = param_3;
  return;
}



// FUNCTION 1481c89d0 FUN_1481c89d0 body=174 status=ok
// SIG undefined FUN_1481c89d0(void)

void FUN_1481c89d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
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
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_78 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_70 = 0x100000000;
    FUN_1481cd32c(lVar1 + 0x10,&local_88);
    FUN_145748882(&local_88);
    if (lVar2 != 0) {
      FUN_145748882(lVar2 + 0x10);
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c8a80 FUN_1481c8a80 body=183 status=ok
// SIG undefined FUN_1481c8a80(void)

void FUN_1481c8a80(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  int local_78;
  longlong *local_70;
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[0] = *param_4;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar1 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_4[2];
    }
    (**(code **)*plVar1)(plVar1,local_58);
  }
  local_78 = *(int *)(param_3 + 100) * *(int *)(param_3 + 0x60);
  local_70 = local_68;
  FUN_143a9681a(param_1,param_2,param_3,0);
  if (*param_4 != 0) {
    plVar1 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c8b38 FUN_1481c8b38 body=290 status=ok
// SIG undefined FUN_1481c8b38(void)

longlong * FUN_1481c8b38(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c8c5c FUN_1481c8c5c body=482 status=ok
// SIG undefined FUN_1481c8c5c(void)

void FUN_1481c8c5c(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,longlong *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 local_88 [2];
  undefined8 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = (undefined8 *)0x0;
  local_9c = 1;
  local_98 = (longlong *)0x0;
  local_88[0] = 0;
  local_78 = 0;
  local_c8 = param_1;
  (**(code **)(*DAT_14ca83900 + 0xe0))(DAT_14ca83900,&local_b8);
  local_a0 = 1;
  local_b0 = param_5;
  (**(code **)(*DAT_14ca83900 + 0xb8))(DAT_14ca83900,&local_c0,&DAT_14cb3e9f0);
  local_98 = local_c0;
  FUN_1481c8b38(local_88,param_6);
  puVar4 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    puVar4 = &local_b8;
  }
  uVar1 = *(undefined4 *)(puVar4 + 1);
  uVar2 = *puVar4;
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x30);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a338558;
  puVar3[2] = param_3;
  puVar3[3] = uVar2;
  *(undefined4 *)(puVar3 + 4) = param_4;
  *(undefined4 *)((longlong)puVar3 + 0x24) = uVar1;
  (**(code **)(*local_98 + 8))();
  (**(code **)(*DAT_14ca83900 + 0xc0))(DAT_14ca83900,param_2,local_98);
  puVar4 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *puVar4 = 0;
  FUN_1481cd584(puVar4 + 2,&local_b8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*local_c8;
    *local_c8 = puVar4;
    *puVar3 = puVar4;
  }
  FUN_145748882(&local_b8);
  if (*param_6 != 0) {
    plVar5 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_6[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c8e40 FUN_1481c8e40 body=739 status=ok
// SIG undefined FUN_1481c8e40(void)

/* WARNING: Removing unreachable block (ram,0x0001481c901b) */
/* WARNING: Removing unreachable block (ram,0x0001481c902f) */

void FUN_1481c8e40(undefined8 *param_1,ulonglong *param_2,longlong *param_3,longlong *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_88 [2];
  undefined8 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0x100000000;
  local_98 = (longlong *)0x0;
  local_88[0] = 0;
  local_78 = 0;
  lVar7 = param_3[1];
  local_d0 = param_1;
  local_c8 = param_4;
  if ((longlong)(int)lVar7 != 0) {
    lVar4 = *param_3;
    lVar15 = 0;
    do {
      (**(code **)(*DAT_14ca83900 + 0xe0))(DAT_14ca83900,&local_c0);
      uVar9 = local_a0;
      lVar16 = (longlong)(int)local_a0;
      uVar10 = (int)local_a0 + 1;
      local_a0 = CONCAT44(local_a0._4_4_,uVar10);
      if (local_a0._4_4_ < uVar10) {
        FUN_1481cd482(local_b8,uVar9 & 0xffffffff);
      }
      puVar14 = local_a8;
      if (local_a8 == (undefined1 *)0x0) {
        puVar14 = local_b8;
      }
      lVar16 = lVar16 * 0x10;
      *(longlong **)(puVar14 + lVar16) = local_c0;
      *(undefined4 *)(puVar14 + lVar16 + 8) = *(undefined4 *)(lVar4 + 0xc + lVar15);
      local_c0 = (longlong *)0x0;
      uVar2 = *(undefined4 *)(lVar4 + 0xc + lVar15);
      uVar3 = *(undefined4 *)(lVar4 + 8 + lVar15);
      uVar5 = *(undefined8 *)(puVar14 + lVar16);
      uVar6 = *(undefined8 *)(lVar4 + lVar15);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar12 + 5;
      if ((undefined8 *)param_2[1] < puVar11) {
        FUN_140023dd8(param_2,0x30);
        puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar12 + 5;
      }
      *param_2 = (ulonglong)puVar11;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar12;
      param_2[6] = (ulonglong)(puVar12 + 1);
      puVar12[1] = 0;
      *puVar12 = &PTR_FUN_14a338558;
      puVar12[2] = uVar6;
      puVar12[3] = uVar5;
      *(undefined4 *)(puVar12 + 4) = uVar3;
      *(undefined4 *)((longlong)puVar12 + 0x24) = uVar2;
      lVar15 = lVar15 + 0x10;
    } while ((longlong)(int)lVar7 * 0x10 != lVar15);
  }
  (**(code **)(*DAT_14ca83900 + 0xb8))(DAT_14ca83900,&local_c0,&DAT_14cb3e9f0);
  plVar13 = local_98;
  plVar8 = local_c8;
  local_98 = local_c0;
  local_c0 = (longlong *)0x0;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)((longlong)plVar13 + 8);
    uVar10 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_c0 + 1);
      uVar10 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  FUN_1481c8b38(local_88,plVar8);
  (**(code **)(*local_98 + 8))();
  (**(code **)(*DAT_14ca83900 + 0xc0))(DAT_14ca83900,param_2,local_98);
  puVar11 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *puVar11 = 0;
  FUN_1481cd584(puVar11 + 2,local_b8);
  if (puVar11 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)*local_d0;
    *local_d0 = puVar11;
    *puVar12 = puVar11;
  }
  FUN_145748882(local_b8);
  if (*plVar8 != 0) {
    plVar13 = plVar8 + 4;
    if ((longlong *)plVar8[2] != (longlong *)0x0) {
      plVar13 = (longlong *)plVar8[2];
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c9124 FUN_1481c9124 body=323 status=ok
// SIG undefined FUN_1481c9124(void)

void FUN_1481c9124(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar2 + 200 + lVar3) + 0x1ec) =
           *(undefined4 *)(lVar2 + 0x118 + lVar3);
      if (*(longlong *)(lVar2 + 0x108 + lVar3) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0xe0 + lVar3) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0xd0 + lVar3) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 0x128;
    } while ((longlong)iVar1 * 0x128 - lVar3 != 0);
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  FUN_1400020a8(lVar2);
  if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
    FUN_1400020a8(**(undefined8 **)(param_1 + 0x20));
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x50) = 0;
      if (*(longlong *)(lVar2 + 0x48) != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(lVar2 + 0x10) = 0;
      if (*(int *)(lVar2 + 0x14) != 0) {
        FUN_144727cd0((longlong *)(lVar2 + 8),0);
      }
      *(undefined8 *)(lVar2 + 0x38) = 0xffffffff;
      *(undefined4 *)(lVar2 + 0x30) = 0;
      if (0x80 < *(uint *)(lVar2 + 0x34)) {
        *(undefined4 *)(lVar2 + 0x34) = 0x80;
        FUN_1446efbd8(lVar2 + 0x18,0);
      }
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 8) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1481c9296 FUN_1481c9296 body=146 status=ok
// SIG undefined FUN_1481c9296(void)

bool FUN_1481c9296(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if ((((lVar3 == 0) || (lVar2 = FUN_144a6c4d8(), lVar2 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30 || (lVar3 = *param_2, lVar3 == 0)))) {
    return false;
  }
  lVar2 = FUN_144a6c4d8();
  if ((lVar2 == 0) ||
     ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30)))) {
    lVar3 = 0;
  }
  else {
    lVar3 = *param_2;
  }
  if (lVar3 == *(longlong *)(param_1 + -0x390)) {
    return true;
  }
  iVar1 = FUN_147c048ea(param_1 + 0x78,param_2);
  return iVar1 != -1;
}



// FUNCTION 1481c933c FUN_1481c933c body=50 status=ok
// SIG undefined FUN_1481c933c(void)

void FUN_1481c933c(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x88) = param_2;
  return;
}



// FUNCTION 1481c936e FUN_1481c936e body=62 status=ok
// SIG undefined FUN_1481c936e(void)

void FUN_1481c936e(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1447210f0(param_1 + -0x3a0);
  plVar1 = *(longlong **)(param_1 + -0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481c93a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a8))(plVar1,(*(byte *)(param_1 + 0x74) & 2) >> 1);
    return;
  }
  return;
}



// FUNCTION 1481c93ac FUN_1481c93ac body=56 status=ok
// SIG undefined FUN_1481c93ac(void)

void FUN_1481c93ac(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1447210f0(param_1 + -0x3a0);
  plVar1 = *(longlong **)(param_1 + -0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481c93da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a8))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 1481c93f8 FUN_1481c93f8 body=141 status=ok
// SIG undefined FUN_1481c93f8(void)

void FUN_1481c93f8(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403d8a98();
  plVar1 = *(longlong **)(param_1 + 0x428);
  if (plVar1 == (longlong *)0x0) goto LAB_1481c9455;
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 != 0) goto LAB_1481c9439;
    local_20 = 0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_1481c9439:
    local_20 = param_1 + 0x3a0;
  }
  local_28 = param_1;
  (**(code **)(*plVar1 + 0x7a0))(plVar1);
LAB_1481c9455:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c9486 FUN_1481c9486 body=47 status=ok
// SIG undefined FUN_1481c9486(void)

ulonglong FUN_1481c9486(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + -0x10);
  lVar1 = *(longlong *)(lVar2 + 0x668);
  if (lVar1 != 0) {
    param_1 = lVar1;
    lVar2 = FUN_143ac32f0(lVar1);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar1 != 0 & (byte)lVar2) & 0xffffffff;
}



// FUNCTION 1481c9538 FUN_1481c9538 body=81 status=ok
// SIG undefined FUN_1481c9538(void)

void FUN_1481c9538(longlong param_1,undefined8 param_2)

{
  switchD_143c3d4dc::caseD_38();
  FUN_14484255c(param_2,((longlong)*(int *)(param_1 + 0x654) + (longlong)*(int *)(param_1 + 0x644))
                        * 8);
  FUN_14484255c(param_2,((longlong)*(int *)(param_1 + 0x67c) + (longlong)*(int *)(param_1 + 0x66c))
                        * 8);
  return;
}



// FUNCTION 1481c958a FUN_1481c958a body=221 status=ok
// SIG undefined FUN_1481c958a(void)

void FUN_1481c958a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  
  uVar2 = *(undefined1 *)(param_1 + 0xb8);
  *param_2 = param_1 + 0x88;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0xd) = uVar2;
  *(undefined2 *)((longlong)param_2 + 0xe) = 3;
  param_2[0x13] = *(longlong *)(param_1 + 0xa0);
  FUN_144a7dcdc(param_1,0,param_2);
  FUN_14472d638(param_1,0,param_2,4);
  if (*(int *)(param_1 + 0xfc) == 0) {
    puVar1 = &DAT_14ca94d98;
    param_2[0x16] = DAT_14ca94db0;
    *(undefined4 *)(param_2 + 0x17) = 0;
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 200);
    param_2[0x16] = *(longlong *)(param_1 + 0xe8);
    *(undefined4 *)(param_2 + 0x17) = 0xffffffff;
    uVar2 = *(undefined1 *)(param_1 + 0xf8);
  }
  param_2[0x11] = (longlong)puVar1;
  *(undefined4 *)(param_2 + 0x12) = 0;
  *(undefined1 *)((longlong)param_2 + 0x94) = 0;
  *(undefined1 *)((longlong)param_2 + 0x95) = uVar2;
  *(undefined2 *)((longlong)param_2 + 0x96) = 0x408;
  return;
}



// FUNCTION 1481c9668 FUN_1481c9668 body=553 status=ok
// SIG undefined FUN_1481c9668(void)

void FUN_1481c9668(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined4 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined4 *puStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (DAT_14c76292d == '\x01') {
    local_d8 = (longlong *)FUN_1459ec9a6();
    if ((local_d8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_d8);
    }
    uStack_d0 = CONCAT53(uStack_d0._3_5_,1);
    uStack_d0 = CONCAT44(0xffffffff,(undefined4)uStack_d0);
    FUN_140c6bd52(&local_d8,0x1f);
    local_d8 = (longlong *)FUN_145b69f42();
    if ((local_d8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_d8);
    }
    uStack_d0 = CONCAT53(uStack_d0._3_5_,1);
    uStack_d0 = CONCAT44(0xffffffff,(undefined4)uStack_d0);
    FUN_140c6bd52(&local_d8,0x1f);
    local_48 = 0x100000000;
    puStack_40 = &DAT_14cb44460;
    local_38 = 0xffffffff;
    uStack_30 = 0;
    if (DAT_14cb44478 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      iVar4 = DAT_14cb44478;
    }
    uStack_b8 = CONCAT44(uStack_2c,uStack_30);
    uStack_c0 = local_38;
    uVar2 = uStack_c0;
    uStack_d0 = local_48;
    puStack_c8 = puStack_40;
    local_d8 = &DAT_14cb44450;
    uStack_c0._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    if ((uStack_c0._4_4_ != iVar4) || (puStack_40 != &DAT_14cb44460)) {
      iVar3 = uStack_c0._4_4_;
      uStack_c0 = uVar2;
      do {
        lVar1 = *(longlong *)(*local_d8 + 8 + (longlong)iVar3 * 0x18);
        if (lVar1 != 0) {
          FUN_1458c3f96(*(undefined8 *)(lVar1 + 0x1c78));
        }
        uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
        FUN_1449c0562(&uStack_d0);
        iVar3 = uStack_c0._4_4_;
      } while (local_d8 != &DAT_14cb44450 ||
               (puStack_c8 != &DAT_14cb44460 || uStack_c0._4_4_ != iVar4));
    }
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  puStack_c8 = (undefined4 *)0x0;
  uStack_c0 = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_78 = 0;
  local_76 = 1;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_1480d84ae(&local_d8,1);
  FUN_14080a2a6(&local_d8);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c9892 FUN_1481c9892 body=32 status=ok
// SIG undefined FUN_1481c9892(void)

undefined8 FUN_1481c9892(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FNiagaraTypeRegistry");
  return param_2;
}



// FUNCTION 1481c98c0 FUN_1481c98c0 body=38 status=ok
// SIG undefined FUN_1481c98c0(void)

undefined8 FUN_1481c98c0(undefined8 param_1,int param_2)

{
  FUN_140389d32();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481c9934 FUN_1481c9934 body=54 status=ok
// SIG undefined FUN_1481c9934(void)

undefined1 FUN_1481c9934(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481c9a32(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 1481c9992 FUN_1481c9992 body=59 status=ok
// SIG undefined FUN_1481c9992(void)

undefined8 FUN_1481c9992(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c9a32 FUN_1481c9a32 body=124 status=ok
// SIG undefined FUN_1481c9a32(void)

undefined4 * FUN_1481c9a32(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
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
  lVar9 = *(longlong *)(param_2 + 10);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 10);
    }
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_1 + 10) = lVar9;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  lVar9 = *(longlong *)(param_2 + 0x10);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar9;
  return param_1;
}



// FUNCTION 1481c9ab0 FUN_1481c9ab0 body=38 status=ok
// SIG undefined FUN_1481c9ab0(void)

undefined8 FUN_1481c9ab0(undefined8 param_1,int param_2)

{
  FUN_14006c080();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481c9adc FUN_1481c9adc body=101 status=ok
// SIG undefined FUN_1481c9adc(void)

void FUN_1481c9adc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xc;
    if (0xc < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x6c)) {
    *(int *)(param_1 + 0x6c) = (int)uVar2;
    FUN_1481c9b42(param_1,*(undefined4 *)(param_1 + 0x68),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 1481c9b42 FUN_1481c9b42 body=133 status=ok
// SIG undefined FUN_1481c9b42(void)

void FUN_1481c9b42(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 0xd) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,param_4);
  return;
}



// FUNCTION 1481c9bc8 FUN_1481c9bc8 body=101 status=ok
// SIG undefined FUN_1481c9bc8(void)

void FUN_1481c9bc8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xc;
    if (0xc < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 2)) {
        uVar2 = uVar1 >> 2 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = (int)uVar2;
    FUN_146beb900(param_1,*(undefined4 *)(param_1 + 0x38),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 1481c9c2e FUN_1481c9c2e body=116 status=ok
// SIG undefined FUN_1481c9c2e(void)

void FUN_1481c9c2e(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xc;
    if (0xc < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xc < *(uint *)(param_1 + 0x6c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x6c) = (int)uVar4;
    FUN_1481c9b42(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1481c9cec FUN_1481c9cec body=39 status=ok
// SIG undefined FUN_1481c9cec(void)

undefined8 FUN_1481c9cec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1481c9d3c FUN_1481c9d3c body=59 status=ok
// SIG undefined FUN_1481c9d3c(void)

undefined8 FUN_1481c9d3c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481c9dde FUN_1481c9dde body=136 status=ok
// SIG undefined FUN_1481c9dde(void)

void FUN_1481c9dde(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x18c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x18c) = iVar5;
    FUN_1481c9e68(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1481c9e68 FUN_1481c9e68 body=149 status=ok
// SIG undefined FUN_1481c9e68(void)

void FUN_1481c9e68(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x180);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x180,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x180),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x180,param_2,param_3,0x18);
  return;
}



// FUNCTION 1481c9efe FUN_1481c9efe body=110 status=ok
// SIG undefined FUN_1481c9efe(void)

void FUN_1481c9efe(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1481c9f6e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1481c9f6e FUN_1481c9f6e body=132 status=ok
// SIG undefined FUN_1481c9f6e(void)

void FUN_1481c9f6e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,0x10);
  return;
}



// FUNCTION 1481c9ff2 FUN_1481c9ff2 body=525 status=ok
// SIG undefined FUN_1481c9ff2(void)

int FUN_1481c9ff2(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 2;
  if (2 < (int)param_2) {
    uVar2 = param_2;
  }
  uVar1 = param_1 % (int)uVar2 + 1;
  if ((int)param_2 < 0x10) {
    uVar1 = uVar1 & 0xf;
    if (0 < param_3) {
      iVar3 = 0;
      do {
        do {
          uVar1 = ((uVar1 & 4) >> 2 ^ uVar1 >> 3) + (uVar1 & 7) * 2;
        } while (uVar2 < uVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 != param_3);
    }
  }
  else if (param_2 < 0x100) {
    uVar1 = uVar1 & 0xff;
    if (0 < param_3) {
      iVar3 = 0;
      do {
        do {
          uVar1 = uVar1 * 2 & 0xff |
                  (uint)(byte)((byte)((uVar1 & 8) >> 3) ^ (byte)((uVar1 & 0x10) >> 4) ^
                              (byte)((uVar1 & 0x20) >> 5) ^ (char)uVar1 < '\0');
        } while (uVar2 < uVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 != param_3);
    }
  }
  else if (param_2 < 0x1000) {
    uVar1 = uVar1 & 0xfff;
    if (0 < param_3) {
      iVar3 = 0;
      do {
        do {
          uVar1 = (uint)(byte)((byte)((uVar1 & 0x20) >> 5) ^ (char)uVar1 < '\0' ^
                              ((byte)(uVar1 >> 10) ^ (byte)(uVar1 >> 0xb)) & 1) +
                  (uVar1 & 0x7ff) * 2;
        } while (uVar2 < uVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 != param_3);
    }
  }
  else if (param_2 < 0x10000) {
    uVar1 = uVar1 & 0xffff;
    if (0 < param_3) {
      iVar3 = 0;
      do {
        do {
          uVar1 = (uint)(byte)((byte)(uVar1 >> 10) & 1 ^ (byte)(uVar1 >> 0xc) & 1 ^
                              (byte)(uVar1 >> 0xd) & 1 ^ (short)uVar1 < 0) + (uVar1 & 0x7fff) * 2;
        } while (uVar2 < uVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 != param_3);
    }
  }
  else if (param_2 < 0x100000) {
    uVar1 = uVar1 & 0xfffff;
    if (0 < param_3) {
      iVar3 = 0;
      do {
        do {
          uVar1 = ((uVar1 >> 0x10 ^ uVar1 >> 0x13) & 1) + (uVar1 & 0x7ffff) * 2;
        } while (uVar2 < uVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 != param_3);
    }
  }
  else {
    uVar1 = uVar1 & 0xffffff;
    if (0 < param_3) {
      iVar3 = 0;
      do {
        do {
          uVar1 = ((uVar1 >> 0x13 ^ uVar1 >> 0x14 ^ uVar1 >> 0x16 ^ uVar1 >> 0x17) & 1) +
                  (uVar1 & 0x7fffff) * 2;
        } while (uVar2 < uVar1);
        iVar3 = iVar3 + 1;
      } while (iVar3 != param_3);
    }
  }
  return uVar1 - 1;
}



// FUNCTION 1481ca228 FUN_1481ca228 body=54 status=ok
// SIG undefined FUN_1481ca228(void)

undefined1 FUN_1481ca228(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481ca326(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1481ca286 FUN_1481ca286 body=59 status=ok
// SIG undefined FUN_1481ca286(void)

undefined8 FUN_1481ca286(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ca326 FUN_1481ca326 body=91 status=ok
// SIG undefined FUN_1481ca326(void)

longlong * FUN_1481ca326(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 1481ca3ae FUN_1481ca3ae body=54 status=ok
// SIG undefined FUN_1481ca3ae(void)

undefined1 FUN_1481ca3ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481ca582(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1481ca3e4 FUN_1481ca3e4 body=85 status=ok
// SIG undefined FUN_1481ca3e4(void)

undefined8
FUN_1481ca3e4(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  longlong lVar1;
  byte bVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  bool bVar5;
  
  if ((param_3[1] == param_2[1]) && ((int)param_3[2] == (int)param_2[2])) {
    lVar1 = *param_3;
    bVar2 = lVar1 != 0 & DAT_14c950c29;
    uVar3 = (ulonglong)CONCAT31((int3)((uint)(int)param_3[2] >> 8),bVar2);
    if (bVar2 == 1) {
      uVar3 = FUN_1456cec3c(lVar1);
    }
    bVar5 = *param_2 == lVar1;
    uVar4 = (undefined7)(uVar3 >> 8);
  }
  else {
    bVar5 = false;
    uVar4 = 0;
  }
  *param_5 = bVar5;
  return CONCAT71(uVar4,1);
}



// FUNCTION 1481ca452 FUN_1481ca452 body=116 status=ok
// SIG undefined FUN_1481ca452(void)

bool FUN_1481ca452(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,5);
  if (uVar1 == local_2c) {
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x138))(*(longlong **)(*param_3 + 8),param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ca4c8 FUN_1481ca4c8 body=59 status=ok
// SIG undefined FUN_1481ca4c8(void)

undefined8 FUN_1481ca4c8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ca50e FUN_1481ca50e body=38 status=ok
// SIG undefined FUN_1481ca50e(void)

void FUN_1481ca50e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1481ca582 FUN_1481ca582 body=84 status=ok
// SIG undefined FUN_1481ca582(void)

longlong * FUN_1481ca582(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  param_1[1] = param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  FUN_1447a122a(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 1481ca5f8 FUN_1481ca5f8 body=132 status=ok
// SIG undefined FUN_1481ca5f8(void)

undefined8 FUN_1481ca5f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar6);
      if ((bVar3 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar6);
          bVar3 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar6);
      *plVar1 = lVar2;
      lVar2 = 0xe;
      plVar5 = plVar1;
      plVar4 = (longlong *)(param_3 + lVar6);
      while( true ) {
        plVar4 = plVar4 + 1;
        plVar5 = plVar5 + 1;
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        *plVar5 = *plVar4;
      }
      *(char *)(plVar1 + 0xf) = (char)((longlong *)(param_3 + lVar6))[0xf];
      lVar6 = lVar6 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1481ca6a4 FUN_1481ca6a4 body=59 status=ok
// SIG undefined FUN_1481ca6a4(void)

undefined8 FUN_1481ca6a4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ca752 FUN_1481ca752 body=54 status=ok
// SIG undefined FUN_1481ca752(void)

longlong FUN_1481ca752(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 1481ca796 FUN_1481ca796 body=100 status=ok
// SIG undefined FUN_1481ca796(void)

void FUN_1481ca796(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  
  (**(code **)(*param_1 + 0x18))();
  uVar1 = *param_2;
  if ((longlong)(int)uVar1 != -1) {
    *(undefined8 *)(param_2 + 0xc) =
         *(undefined8 *)(*(longlong *)(*(longlong *)param_1[4] + (longlong)(int)uVar1 * 8) + 0x50);
    plVar2 = *(longlong **)(param_1[4] + 0x48);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = 0;
      if ((char)plVar2[3] != '\0') {
        uVar3 = uVar1;
      }
      if ((-1 < (int)uVar3) && ((int)uVar3 < (int)plVar2[1])) {
        *(undefined8 *)(param_2 + 0xc) = **(undefined8 **)(*plVar2 + (ulonglong)uVar3 * 8);
      }
    }
  }
  return;
}



// FUNCTION 1481ca85e FUN_1481ca85e body=132 status=ok
// SIG undefined FUN_1481ca85e(void)

int FUN_1481ca85e(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_1 + 0x2c);
  local_28 = *param_2;
  local_20 = param_2[1];
  local_18 = param_2[2];
  local_10 = 0x3ff0000000000000;
  local_30 = param_5;
  cVar1 = FUN_1405e275b(*(undefined8 *)(param_1 + 0x20),&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (int)cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ca8e4 FUN_1481ca8e4 body=62 status=ok
// SIG undefined FUN_1481ca8e4(void)

void FUN_1481ca8e4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481ca922(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 1481ca922 FUN_1481ca922 body=93 status=ok
// SIG undefined FUN_1481ca922(void)

ulonglong FUN_1481ca922(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1481ca980 FUN_1481ca980 body=132 status=ok
// SIG undefined FUN_1481ca980(void)

void FUN_1481ca980(longlong param_1,int param_2)

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



// FUNCTION 1481caa06 FUN_1481caa06 body=98 status=ok
// SIG undefined FUN_1481caa06(void)

void FUN_1481caa06(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x2a8 + *param_1);
  FUN_140d2bfcd(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x2a8 + (longlong)_Dst),(longlong)iVar2 * 0x2a8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1481caa68 FUN_1481caa68 body=62 status=ok
// SIG undefined FUN_1481caa68(void)

void FUN_1481caa68(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481caaa6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x2a8,8);
  }
  return;
}



// FUNCTION 1481caaa6 FUN_1481caaa6 body=110 status=ok
// SIG undefined FUN_1481caaa6(void)

ulonglong FUN_1481caaa6(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x2a8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1481caadf;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x2a8,8);
      param_2 = param_2 / 0x2a8;
    }
  }
LAB_1481caadf:
  return param_2 & 0xffffffff;
}



// FUNCTION 1481cab14 FUN_1481cab14 body=62 status=ok
// SIG undefined FUN_1481cab14(void)

void FUN_1481cab14(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481cab52(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1481cab52 FUN_1481cab52 body=93 status=ok
// SIG undefined FUN_1481cab52(void)

ulonglong FUN_1481cab52(uint param_1,uint param_2)

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



// FUNCTION 1481cabb0 FUN_1481cabb0 body=110 status=ok
// SIG undefined FUN_1481cabb0(void)

void FUN_1481cabb0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1481cac20(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1481cac20 FUN_1481cac20 body=132 status=ok
// SIG undefined FUN_1481cac20(void)

void FUN_1481cac20(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 1481caca4 FUN_1481caca4 body=48 status=ok
// SIG undefined FUN_1481caca4(void)

void FUN_1481caca4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x78,8);
  }
  return;
}



// FUNCTION 1481cacd4 FUN_1481cacd4 body=89 status=ok
// SIG undefined FUN_1481cacd4(void)

void FUN_1481cacd4(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x78 + *param_1);
  FUN_140d2bf78(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x78 + (longlong)_Dst),(longlong)iVar2 * 0x78);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1481cad2e FUN_1481cad2e body=62 status=ok
// SIG undefined FUN_1481cad2e(void)

void FUN_1481cad2e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481cad6c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x78,8);
  }
  return;
}



// FUNCTION 1481cad6c FUN_1481cad6c body=104 status=ok
// SIG undefined FUN_1481cad6c(void)

ulonglong FUN_1481cad6c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x78) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1481cada2;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x78,8);
      param_2 = param_2 / 0x78;
    }
  }
LAB_1481cada2:
  return param_2 & 0xffffffff;
}



// FUNCTION 1481cadd4 FUN_1481cadd4 body=450 status=ok
// SIG undefined FUN_1481cadd4(void)

void FUN_1481cadd4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x60;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10),*(undefined4 *)(lVar3 + 4 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x5c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481caf98 FUN_1481caf98 body=124 status=ok
// SIG undefined FUN_1481caf98(void)

longlong FUN_1481caf98(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1481cb016();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_1481cb074(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x60 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 1481cb016 FUN_1481cb016 body=93 status=ok
// SIG undefined FUN_1481cb016(void)

longlong FUN_1481cb016(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x60;
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481cb074 FUN_1481cb074 body=272 status=ok
// SIG undefined FUN_1481cb074(void)

undefined4 * FUN_1481cb074(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1481cb186(param_1,local_48);
  FUN_1481cb334(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1481cb274(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
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
      FUN_1481cadd4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cb186 FUN_1481cb186 body=238 status=ok
// SIG undefined FUN_1481cb186(void)

int * FUN_1481cb186(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14488f93c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 1481cb274 FUN_1481cb274 body=192 status=ok
// SIG undefined FUN_1481cb274(void)

undefined8 FUN_1481cb274(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
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
        lVar4 = (longlong)iVar3 * 0x60;
        _Dst = (void *)(lVar1 + lVar4);
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_1447a082e((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_1481cb3d2(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481cb334 FUN_1481cb334 body=156 status=ok
// SIG undefined FUN_1481cb334(void)

undefined8 * FUN_1481cb334(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_14627166e(param_2 + 1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cb3d2 FUN_1481cb3d2 body=122 status=ok
// SIG undefined FUN_1481cb3d2(void)

void FUN_1481cb3d2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1481cb44c FUN_1481cb44c body=410 status=ok
// SIG undefined FUN_1481cb44c(void)

void FUN_1481cb44c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar5 * 0x28);
        *(uint *)(lVar2 + 0x24 + lVar5 * 0x28) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481cb5e8 FUN_1481cb5e8 body=463 status=ok
// SIG undefined FUN_1481cb5e8(void)

void FUN_1481cb5e8(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar5 = local_58;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
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
    uVar5 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar6 = local_58._4_4_;
      local_58 = uVar5;
      do {
        lVar4 = *local_70;
        lVar7 = (longlong)iVar6;
        bVar2 = *(byte *)(lVar4 + lVar7 * 0x28);
        uVar11 = (longlong)
                 (int)((uint)(bVar2 >> 2) +
                       (uint)bVar2 * 0x40 + (uint)*(byte *)(lVar4 + 1 + lVar7 * 0x28) + 0x9e3779b9 ^
                      (uint)bVar2) & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar4 + 0x24 + lVar7 * 0x28) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
        uVar5 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar5;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481cb7b8 FUN_1481cb7b8 body=88 status=ok
// SIG undefined FUN_1481cb7b8(void)

undefined4 * FUN_1481cb7b8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  uVar2 = *(undefined8 *)(param_2 + 2);
  param_1[4] = iVar1;
  if (iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1481cb810(param_1 + 2,iVar1);
    FUN_1481cb87a(*(undefined8 *)(param_1 + 2),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1481cb810 FUN_1481cb810 body=106 status=ok
// SIG undefined FUN_1481cb810(void)

undefined8 FUN_1481cb810(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1481cb87a FUN_1481cb87a body=70 status=ok
// SIG undefined FUN_1481cb87a(void)

void FUN_1481cb87a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_2 + lVar2);
    *(longlong *)(param_1 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar1 = *(longlong *)(param_2 + 0x10 + lVar2);
    *(longlong *)(param_1 + 0x10 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1481cb8c0 FUN_1481cb8c0 body=114 status=ok
// SIG undefined FUN_1481cb8c0(void)

void FUN_1481cb8c0(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1481cb932 FUN_1481cb932 body=179 status=ok
// SIG undefined FUN_1481cb932(void)

char * FUN_1481cb932(longlong *param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  char *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        pcVar1 = (char *)(*param_1 + (longlong)iVar2 * 0x28);
        if (*pcVar1 == *param_3) {
          if (pcVar1 != (char *)0x0) goto LAB_1481cb9c8;
          break;
        }
        iVar2 = *(int *)(pcVar1 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_28 = param_3;
  FUN_1481cb9e6(param_1,&local_1c,param_2);
  pcVar1 = (char *)(*param_1 + (longlong)local_1c * 0x28);
LAB_1481cb9c8:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar1 + 8;
}



// FUNCTION 1481cb9e6 FUN_1481cb9e6 body=276 status=ok
// SIG undefined FUN_1481cb9e6(void)

undefined4 * FUN_1481cb9e6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1481cbafc(param_1,local_48);
  *local_40 = *(undefined1 *)*param_4;
  *(undefined4 *)(local_40 + 8) = 0;
  *(undefined8 *)(local_40 + 0x10) = 0;
  *(undefined8 *)(local_40 + 0x18) = 0;
  *(undefined4 *)(local_40 + 0x20) = 0xffffffff;
  cVar1 = FUN_1481cbbe2(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x24) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x20) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1481cb44c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cbafc FUN_1481cbafc body=230 status=ok
// SIG undefined FUN_1481cbafc(void)

int * FUN_1481cbafc(longlong *param_1,int *param_2)

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


